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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2984f8u: goto label_2984f8;
        case 0x2984fcu: goto label_2984fc;
        case 0x298500u: goto label_298500;
        case 0x298504u: goto label_298504;
        case 0x298508u: goto label_298508;
        case 0x29850cu: goto label_29850c;
        case 0x298510u: goto label_298510;
        case 0x298514u: goto label_298514;
        case 0x298518u: goto label_298518;
        case 0x29851cu: goto label_29851c;
        case 0x298520u: goto label_298520;
        case 0x298524u: goto label_298524;
        case 0x298528u: goto label_298528;
        case 0x29852cu: goto label_29852c;
        case 0x298530u: goto label_298530;
        case 0x298534u: goto label_298534;
        case 0x298538u: goto label_298538;
        case 0x29853cu: goto label_29853c;
        case 0x298540u: goto label_298540;
        case 0x298544u: goto label_298544;
        case 0x298548u: goto label_298548;
        case 0x29854cu: goto label_29854c;
        case 0x298550u: goto label_298550;
        case 0x298554u: goto label_298554;
        case 0x298558u: goto label_298558;
        case 0x29855cu: goto label_29855c;
        case 0x298560u: goto label_298560;
        case 0x298564u: goto label_298564;
        case 0x298568u: goto label_298568;
        case 0x29856cu: goto label_29856c;
        case 0x298570u: goto label_298570;
        case 0x298574u: goto label_298574;
        case 0x298578u: goto label_298578;
        case 0x29857cu: goto label_29857c;
        case 0x298580u: goto label_298580;
        case 0x298584u: goto label_298584;
        case 0x298588u: goto label_298588;
        case 0x29858cu: goto label_29858c;
        case 0x298590u: goto label_298590;
        case 0x298594u: goto label_298594;
        case 0x298598u: goto label_298598;
        case 0x29859cu: goto label_29859c;
        case 0x2985a0u: goto label_2985a0;
        case 0x2985a4u: goto label_2985a4;
        case 0x2985a8u: goto label_2985a8;
        case 0x2985acu: goto label_2985ac;
        case 0x2985b0u: goto label_2985b0;
        case 0x2985b4u: goto label_2985b4;
        case 0x2985b8u: goto label_2985b8;
        case 0x2985bcu: goto label_2985bc;
        case 0x2985c0u: goto label_2985c0;
        case 0x2985c4u: goto label_2985c4;
        case 0x2985c8u: goto label_2985c8;
        case 0x2985ccu: goto label_2985cc;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985d4u: goto label_2985d4;
        case 0x2985d8u: goto label_2985d8;
        case 0x2985dcu: goto label_2985dc;
        case 0x2985e0u: goto label_2985e0;
        case 0x2985e4u: goto label_2985e4;
        case 0x2985e8u: goto label_2985e8;
        case 0x2985ecu: goto label_2985ec;
        case 0x2985f0u: goto label_2985f0;
        case 0x2985f4u: goto label_2985f4;
        case 0x2985f8u: goto label_2985f8;
        case 0x2985fcu: goto label_2985fc;
        case 0x298600u: goto label_298600;
        case 0x298604u: goto label_298604;
        case 0x298608u: goto label_298608;
        case 0x29860cu: goto label_29860c;
        case 0x298610u: goto label_298610;
        case 0x298614u: goto label_298614;
        case 0x298618u: goto label_298618;
        case 0x29861cu: goto label_29861c;
        case 0x298620u: goto label_298620;
        case 0x298624u: goto label_298624;
        case 0x298628u: goto label_298628;
        case 0x29862cu: goto label_29862c;
        case 0x298630u: goto label_298630;
        case 0x298634u: goto label_298634;
        case 0x298638u: goto label_298638;
        case 0x29863cu: goto label_29863c;
        case 0x298640u: goto label_298640;
        case 0x298644u: goto label_298644;
        case 0x298648u: goto label_298648;
        case 0x29864cu: goto label_29864c;
        case 0x298650u: goto label_298650;
        case 0x298654u: goto label_298654;
        case 0x298658u: goto label_298658;
        case 0x29865cu: goto label_29865c;
        case 0x298660u: goto label_298660;
        case 0x298664u: goto label_298664;
        case 0x298668u: goto label_298668;
        case 0x29866cu: goto label_29866c;
        case 0x298670u: goto label_298670;
        case 0x298674u: goto label_298674;
        case 0x298678u: goto label_298678;
        case 0x29867cu: goto label_29867c;
        case 0x298680u: goto label_298680;
        case 0x298684u: goto label_298684;
        case 0x298688u: goto label_298688;
        case 0x29868cu: goto label_29868c;
        case 0x298690u: goto label_298690;
        case 0x298694u: goto label_298694;
        case 0x298698u: goto label_298698;
        case 0x29869cu: goto label_29869c;
        case 0x2986a0u: goto label_2986a0;
        case 0x2986a4u: goto label_2986a4;
        case 0x2986a8u: goto label_2986a8;
        case 0x2986acu: goto label_2986ac;
        case 0x2986b0u: goto label_2986b0;
        case 0x2986b4u: goto label_2986b4;
        case 0x2986b8u: goto label_2986b8;
        case 0x2986bcu: goto label_2986bc;
        case 0x2986c0u: goto label_2986c0;
        case 0x2986c4u: goto label_2986c4;
        case 0x2986c8u: goto label_2986c8;
        case 0x2986ccu: goto label_2986cc;
        case 0x2986d0u: goto label_2986d0;
        case 0x2986d4u: goto label_2986d4;
        case 0x2986d8u: goto label_2986d8;
        case 0x2986dcu: goto label_2986dc;
        case 0x2986e0u: goto label_2986e0;
        case 0x2986e4u: goto label_2986e4;
        case 0x2986e8u: goto label_2986e8;
        case 0x2986ecu: goto label_2986ec;
        case 0x2986f0u: goto label_2986f0;
        case 0x2986f4u: goto label_2986f4;
        case 0x2986f8u: goto label_2986f8;
        case 0x2986fcu: goto label_2986fc;
        case 0x298700u: goto label_298700;
        case 0x298704u: goto label_298704;
        case 0x298708u: goto label_298708;
        case 0x29870cu: goto label_29870c;
        case 0x298710u: goto label_298710;
        case 0x298714u: goto label_298714;
        case 0x298718u: goto label_298718;
        case 0x29871cu: goto label_29871c;
        case 0x298720u: goto label_298720;
        case 0x298724u: goto label_298724;
        case 0x298728u: goto label_298728;
        case 0x29872cu: goto label_29872c;
        case 0x298730u: goto label_298730;
        case 0x298734u: goto label_298734;
        case 0x298738u: goto label_298738;
        case 0x29873cu: goto label_29873c;
        case 0x298740u: goto label_298740;
        case 0x298744u: goto label_298744;
        case 0x298748u: goto label_298748;
        case 0x29874cu: goto label_29874c;
        case 0x298750u: goto label_298750;
        case 0x298754u: goto label_298754;
        case 0x298758u: goto label_298758;
        case 0x29875cu: goto label_29875c;
        case 0x298760u: goto label_298760;
        case 0x298764u: goto label_298764;
        case 0x298768u: goto label_298768;
        case 0x29876cu: goto label_29876c;
        case 0x298770u: goto label_298770;
        case 0x298774u: goto label_298774;
        case 0x298778u: goto label_298778;
        case 0x29877cu: goto label_29877c;
        case 0x298780u: goto label_298780;
        case 0x298784u: goto label_298784;
        case 0x298788u: goto label_298788;
        case 0x29878cu: goto label_29878c;
        case 0x298790u: goto label_298790;
        case 0x298794u: goto label_298794;
        case 0x298798u: goto label_298798;
        case 0x29879cu: goto label_29879c;
        case 0x2987a0u: goto label_2987a0;
        case 0x2987a4u: goto label_2987a4;
        case 0x2987a8u: goto label_2987a8;
        case 0x2987acu: goto label_2987ac;
        case 0x2987b0u: goto label_2987b0;
        case 0x2987b4u: goto label_2987b4;
        case 0x2987b8u: goto label_2987b8;
        case 0x2987bcu: goto label_2987bc;
        case 0x2987c0u: goto label_2987c0;
        case 0x2987c4u: goto label_2987c4;
        case 0x2987c8u: goto label_2987c8;
        case 0x2987ccu: goto label_2987cc;
        case 0x2987d0u: goto label_2987d0;
        case 0x2987d4u: goto label_2987d4;
        case 0x2987d8u: goto label_2987d8;
        case 0x2987dcu: goto label_2987dc;
        case 0x2987e0u: goto label_2987e0;
        case 0x2987e4u: goto label_2987e4;
        case 0x2987e8u: goto label_2987e8;
        case 0x2987ecu: goto label_2987ec;
        default: return;
    }

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
label_2984f8:
    // 0x2984f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2984fc:
    // 0x2984fc: 0x0  nop
    ctx->pc = 0x2984fcu;
    // NOP
label_298500:
    // 0x298500: 0x214b9  .word       0x000214B9                   # INVALID     $zero, $v0, 0x14B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298500 raw=0x000214B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298504:
    // 0x298504: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298508:
    // 0x298508: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298508u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29850c:
    // 0x29850c: 0x0  nop
    ctx->pc = 0x29850cu;
    // NOP
label_298510:
    // 0x298510: 0x214bd  .word       0x000214BD                   # INVALID     $zero, $v0, 0x14BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298510 raw=0x000214BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298514:
    // 0x298514: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298518:
    // 0x298518: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29851c:
    // 0x29851c: 0x0  nop
    ctx->pc = 0x29851cu;
    // NOP
label_298520:
    // 0x298520: 0x214c1  .word       0x000214C1                   # INVALID     $zero, $v0, 0x14C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298520 raw=0x000214C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298524:
    // 0x298524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298528:
    // 0x298528: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29852c:
    // 0x29852c: 0x0  nop
    ctx->pc = 0x29852cu;
    // NOP
label_298530:
    // 0x298530: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x298530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_298534:
    // 0x298534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298534 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298538:
    // 0x298538: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29853c:
    // 0x29853c: 0x0  nop
    ctx->pc = 0x29853cu;
    // NOP
label_298540:
    // 0x298540: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x298540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_298544:
    // 0x298544: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298544u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298548:
    // 0x298548: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29854c:
    // 0x29854c: 0x0  nop
    ctx->pc = 0x29854cu;
    // NOP
label_298550:
    // 0x298550: 0x214c7  .word       0x000214C7                   # srav        $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298554:
    // 0x298554: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298554u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298558:
    // 0x298558: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29855c:
    // 0x29855c: 0x0  nop
    ctx->pc = 0x29855cu;
    // NOP
label_298560:
    // 0x298560: 0x214cb  .word       0x000214CB                   # movn        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_298564:
    // 0x298564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298568:
    // 0x298568: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29856c:
    // 0x29856c: 0x0  nop
    ctx->pc = 0x29856cu;
    // NOP
label_298570:
    // 0x298570: 0x214cc  .word       0x000214CC                   # syscall     83 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298570u;
    ctx->pc = 0x298574u;
runtime->handleSyscall(rdram, ctx, 0x853u);
label_298574:
    // 0x298574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298574 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298578:
    // 0x298578: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298578u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29857c:
    // 0x29857c: 0x0  nop
    ctx->pc = 0x29857cu;
    // NOP
label_298580:
    // 0x298580: 0x214cd  break       2, 83
    ctx->pc = 0x298580u;
    runtime->handleBreak(rdram, ctx);
label_298584:
    // 0x298584: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298584u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298588:
    // 0x298588: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29858c:
    // 0x29858c: 0x0  nop
    ctx->pc = 0x29858cu;
    // NOP
label_298590:
    // 0x298590: 0x214d1  .word       0x000214D1                   # mthi        $zero # 000214C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298590u;
    ctx->hi = GPR_U64(ctx, 0);
label_298594:
    // 0x298594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298598:
    // 0x298598: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29859c:
    // 0x29859c: 0x0  nop
    ctx->pc = 0x29859cu;
    // NOP
label_2985a0:
    // 0x2985a0: 0x214d5  .word       0x000214D5                   # INVALID     $zero, $v0, 0x14D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2985A0 raw=0x000214D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985a4:
    // 0x2985a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985a8:
    // 0x2985a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2985ac:
    // 0x2985ac: 0x0  nop
    ctx->pc = 0x2985acu;
    // NOP
label_2985b0:
    // 0x2985b0: 0x214d6  .word       0x000214D6                   # dsrlv       $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2985b4:
    // 0x2985b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985b8:
    // 0x2985b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2985b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2985bc:
    // 0x2985bc: 0x0  nop
    ctx->pc = 0x2985bcu;
    // NOP
label_2985c0:
    // 0x2985c0: 0x214d7  .word       0x000214D7                   # dsrav       $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2985c4:
    // 0x2985c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2985c8:
    // 0x2985c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2985cc:
    // 0x2985cc: 0x0  nop
    ctx->pc = 0x2985ccu;
    // NOP
label_2985d0:
    // 0x2985d0: 0x214db  .word       0x000214DB                   # divu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985d0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2985d4:
    // 0x2985d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2985d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2985d8:
    // 0x2985d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2985dc:
    // 0x2985dc: 0x0  nop
    ctx->pc = 0x2985dcu;
    // NOP
label_2985e0:
    // 0x2985e0: 0x214df  .word       0x000214DF                   # ddivu       $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2985E0 raw=0x000214DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985e4:
    // 0x2985e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985e8:
    // 0x2985e8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2985ec:
    // 0x2985ec: 0x0  nop
    ctx->pc = 0x2985ecu;
    // NOP
label_2985f0:
    // 0x2985f0: 0x214e0  .word       0x000214E0                   # add         $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2985f4:
    // 0x2985f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2985f8:
    // 0x2985f8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2985fc:
    // 0x2985fc: 0x0  nop
    ctx->pc = 0x2985fcu;
    // NOP
label_298600:
    // 0x298600: 0x214e1  .word       0x000214E1                   # addu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298604:
    // 0x298604: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298604u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298608:
    // 0x298608: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29860c:
    // 0x29860c: 0x0  nop
    ctx->pc = 0x29860cu;
    // NOP
label_298610:
    // 0x298610: 0x214e5  .word       0x000214E5                   # or          $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_298614:
    // 0x298614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298618:
    // 0x298618: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29861c:
    // 0x29861c: 0x0  nop
    ctx->pc = 0x29861cu;
    // NOP
label_298620:
    // 0x298620: 0x214e9  .word       0x000214E9                   # mtsa        $zero # 000214C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298620u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298624:
    // 0x298624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298628:
    // 0x298628: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298628u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29862c:
    // 0x29862c: 0x0  nop
    ctx->pc = 0x29862cu;
    // NOP
label_298630:
    // 0x298630: 0x214ea  .word       0x000214EA                   # slt         $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298634:
    // 0x298634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298634 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298638:
    // 0x298638: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298638u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29863c:
    // 0x29863c: 0x0  nop
    ctx->pc = 0x29863cu;
    // NOP
label_298640:
    // 0x298640: 0x214eb  .word       0x000214EB                   # sltu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298644:
    // 0x298644: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298648:
    // 0x298648: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29864c:
    // 0x29864c: 0x0  nop
    ctx->pc = 0x29864cu;
    // NOP
label_298650:
    // 0x298650: 0x214ef  .word       0x000214EF                   # dsubu       $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_298654:
    // 0x298654: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298658:
    // 0x298658: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29865c:
    // 0x29865c: 0x0  nop
    ctx->pc = 0x29865cu;
    // NOP
label_298660:
    // 0x298660: 0x214f3  tltu        $zero, $v0, 83
    ctx->pc = 0x298660u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298664:
    // 0x298664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298668:
    // 0x298668: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298668u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29866c:
    // 0x29866c: 0x0  nop
    ctx->pc = 0x29866cu;
    // NOP
label_298670:
    // 0x298670: 0x214f4  teq         $zero, $v0, 83
    ctx->pc = 0x298670u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298674:
    // 0x298674: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298674u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298674 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298678:
    // 0x298678: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29867c:
    // 0x29867c: 0x0  nop
    ctx->pc = 0x29867cu;
    // NOP
label_298680:
    // 0x298680: 0x214f5  .word       0x000214F5                   # INVALID     $zero, $v0, 0x14F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298680 raw=0x000214F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298684:
    // 0x298684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298688:
    // 0x298688: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29868c:
    // 0x29868c: 0x0  nop
    ctx->pc = 0x29868cu;
    // NOP
label_298690:
    // 0x298690: 0x214f9  .word       0x000214F9                   # INVALID     $zero, $v0, 0x14F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298690 raw=0x000214F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298694:
    // 0x298694: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298698:
    // 0x298698: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298698u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29869c:
    // 0x29869c: 0x0  nop
    ctx->pc = 0x29869cu;
    // NOP
label_2986a0:
    // 0x2986a0: 0x214fd  .word       0x000214FD                   # INVALID     $zero, $v0, 0x14FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2986A0 raw=0x000214FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2986a4:
    // 0x2986a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2986a8:
    // 0x2986a8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986ac:
    // 0x2986ac: 0x0  nop
    ctx->pc = 0x2986acu;
    // NOP
label_2986b0:
    // 0x2986b0: 0x214fe  dsrl32      $v0, $v0, 19
    ctx->pc = 0x2986b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 19));
label_2986b4:
    // 0x2986b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2986b8:
    // 0x2986b8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986bc:
    // 0x2986bc: 0x0  nop
    ctx->pc = 0x2986bcu;
    // NOP
label_2986c0:
    // 0x2986c0: 0x214ff  dsra32      $v0, $v0, 19
    ctx->pc = 0x2986c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 19));
label_2986c4:
    // 0x2986c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2986c8:
    // 0x2986c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2986cc:
    // 0x2986cc: 0x0  nop
    ctx->pc = 0x2986ccu;
    // NOP
label_2986d0:
    // 0x2986d0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x2986d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
label_2986d4:
    // 0x2986d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2986d8:
    // 0x2986d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2986dc:
    // 0x2986dc: 0x0  nop
    ctx->pc = 0x2986dcu;
    // NOP
label_2986e0:
    // 0x2986e0: 0x21507  .word       0x00021507                   # srav        $v0, $v0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2986e4:
    // 0x2986e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2986e8:
    // 0x2986e8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986ec:
    // 0x2986ec: 0x0  nop
    ctx->pc = 0x2986ecu;
    // NOP
label_2986f0:
    // 0x2986f0: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_2986f4:
    if (ctx->pc == 0x2986F4u) {
        ctx->pc = 0x2986F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986F0u;
        // 0x2986f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2986F8u;
        goto label_2986f8;
    }
    ctx->pc = 0x2986F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2986F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986F0u;
        // 0x2986f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2986F8u;
label_2986f8:
    // 0x2986f8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986fc:
    // 0x2986fc: 0x0  nop
    ctx->pc = 0x2986fcu;
    // NOP
label_298700:
    // 0x298700: 0x21509  .word       0x00021509                   # jalr        $v0, $zero # 00020500 <InstrIdType: CPU_SPECIAL>
label_298704:
    if (ctx->pc == 0x298704u) {
        ctx->pc = 0x298704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298700u;
        // 0x298704: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298708u;
        goto label_298708;
    }
    ctx->pc = 0x298700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x298708u);
        ctx->pc = 0x298704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298700u;
        // 0x298704: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298700u, 0x298708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298708u;
label_298708:
    // 0x298708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29870c:
    // 0x29870c: 0x0  nop
    ctx->pc = 0x29870cu;
    // NOP
label_298710:
    // 0x298710: 0x2150d  break       2, 84
    ctx->pc = 0x298710u;
    runtime->handleBreak(rdram, ctx);
label_298714:
    // 0x298714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298718:
    // 0x298718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29871c:
    // 0x29871c: 0x0  nop
    ctx->pc = 0x29871cu;
    // NOP
label_298720:
    // 0x298720: 0x21511  .word       0x00021511                   # mthi        $zero # 00021500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298720u;
    ctx->hi = GPR_U64(ctx, 0);
label_298724:
    // 0x298724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298728:
    // 0x298728: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298728u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29872c:
    // 0x29872c: 0x0  nop
    ctx->pc = 0x29872cu;
    // NOP
label_298730:
    // 0x298730: 0x21512  .word       0x00021512                   # mflo        $v0 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298730u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_298734:
    // 0x298734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298734 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298738:
    // 0x298738: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29873c:
    // 0x29873c: 0x0  nop
    ctx->pc = 0x29873cu;
    // NOP
label_298740:
    // 0x298740: 0x21513  .word       0x00021513                   # mtlo        $zero # 00021500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298740u;
    ctx->lo = GPR_U64(ctx, 0);
label_298744:
    // 0x298744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298748:
    // 0x298748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29874c:
    // 0x29874c: 0x0  nop
    ctx->pc = 0x29874cu;
    // NOP
label_298750:
    // 0x298750: 0x21517  .word       0x00021517                   # dsrav       $v0, $v0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_298754:
    // 0x298754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298758:
    // 0x298758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29875c:
    // 0x29875c: 0x0  nop
    ctx->pc = 0x29875cu;
    // NOP
label_298760:
    // 0x298760: 0x2151b  .word       0x0002151B                   # divu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298760u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_298764:
    // 0x298764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298768:
    // 0x298768: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29876c:
    // 0x29876c: 0x0  nop
    ctx->pc = 0x29876cu;
    // NOP
label_298770:
    // 0x298770: 0x2151c  .word       0x0002151C                   # dmult       $zero, $v0 # 00001500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298770 raw=0x0002151C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298774:
    // 0x298774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298774u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298774 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298778:
    // 0x298778: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298778u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29877c:
    // 0x29877c: 0x0  nop
    ctx->pc = 0x29877cu;
    // NOP
label_298780:
    // 0x298780: 0x2151d  .word       0x0002151D                   # dmultu      $zero, $v0 # 00001500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298780 raw=0x0002151D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298784:
    // 0x298784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298788:
    // 0x298788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29878c:
    // 0x29878c: 0x0  nop
    ctx->pc = 0x29878cu;
    // NOP
label_298790:
    // 0x298790: 0x21521  .word       0x00021521                   # addu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298794:
    // 0x298794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298798:
    // 0x298798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29879c:
    // 0x29879c: 0x0  nop
    ctx->pc = 0x29879cu;
    // NOP
label_2987a0:
    // 0x2987a0: 0x21525  .word       0x00021525                   # or          $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_2987a4:
    // 0x2987a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2987a8:
    // 0x2987a8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2987ac:
    // 0x2987ac: 0x0  nop
    ctx->pc = 0x2987acu;
    // NOP
label_2987b0:
    // 0x2987b0: 0x21526  .word       0x00021526                   # xor         $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_2987b4:
    // 0x2987b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2987b8:
    // 0x2987b8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2987bc:
    // 0x2987bc: 0x0  nop
    ctx->pc = 0x2987bcu;
    // NOP
label_2987c0:
    // 0x2987c0: 0x21527  .word       0x00021527                   # nor         $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2987c4:
    // 0x2987c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2987c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2987c8:
    // 0x2987c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2987cc:
    // 0x2987cc: 0x0  nop
    ctx->pc = 0x2987ccu;
    // NOP
label_2987d0:
    // 0x2987d0: 0x2152b  .word       0x0002152B                   # sltu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2987d4:
    // 0x2987d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2987d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2987d8:
    // 0x2987d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2987dc:
    // 0x2987dc: 0x0  nop
    ctx->pc = 0x2987dcu;
    // NOP
label_2987e0:
    // 0x2987e0: 0x2152f  .word       0x0002152F                   # dsubu       $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_2987e4:
    // 0x2987e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2987e8:
    // 0x2987e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2987ec:
    // 0x2987ec: 0x0  nop
    ctx->pc = 0x2987ecu;
    // NOP
    ctx->pc = 0x2987f0u;
    return;
}

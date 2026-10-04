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


void FUN_0019b850_part422(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x269558u: goto label_269558;
        case 0x26955cu: goto label_26955c;
        case 0x269560u: goto label_269560;
        case 0x269564u: goto label_269564;
        case 0x269568u: goto label_269568;
        case 0x26956cu: goto label_26956c;
        case 0x269570u: goto label_269570;
        case 0x269574u: goto label_269574;
        case 0x269578u: goto label_269578;
        case 0x26957cu: goto label_26957c;
        case 0x269580u: goto label_269580;
        case 0x269584u: goto label_269584;
        case 0x269588u: goto label_269588;
        case 0x26958cu: goto label_26958c;
        case 0x269590u: goto label_269590;
        case 0x269594u: goto label_269594;
        case 0x269598u: goto label_269598;
        case 0x26959cu: goto label_26959c;
        case 0x2695a0u: goto label_2695a0;
        case 0x2695a4u: goto label_2695a4;
        case 0x2695a8u: goto label_2695a8;
        case 0x2695acu: goto label_2695ac;
        case 0x2695b0u: goto label_2695b0;
        case 0x2695b4u: goto label_2695b4;
        case 0x2695b8u: goto label_2695b8;
        case 0x2695bcu: goto label_2695bc;
        case 0x2695c0u: goto label_2695c0;
        case 0x2695c4u: goto label_2695c4;
        case 0x2695c8u: goto label_2695c8;
        case 0x2695ccu: goto label_2695cc;
        case 0x2695d0u: goto label_2695d0;
        case 0x2695d4u: goto label_2695d4;
        case 0x2695d8u: goto label_2695d8;
        case 0x2695dcu: goto label_2695dc;
        case 0x2695e0u: goto label_2695e0;
        case 0x2695e4u: goto label_2695e4;
        case 0x2695e8u: goto label_2695e8;
        case 0x2695ecu: goto label_2695ec;
        case 0x2695f0u: goto label_2695f0;
        case 0x2695f4u: goto label_2695f4;
        case 0x2695f8u: goto label_2695f8;
        case 0x2695fcu: goto label_2695fc;
        case 0x269600u: goto label_269600;
        case 0x269604u: goto label_269604;
        case 0x269608u: goto label_269608;
        case 0x26960cu: goto label_26960c;
        case 0x269610u: goto label_269610;
        case 0x269614u: goto label_269614;
        case 0x269618u: goto label_269618;
        case 0x26961cu: goto label_26961c;
        case 0x269620u: goto label_269620;
        case 0x269624u: goto label_269624;
        case 0x269628u: goto label_269628;
        case 0x26962cu: goto label_26962c;
        case 0x269630u: goto label_269630;
        case 0x269634u: goto label_269634;
        case 0x269638u: goto label_269638;
        case 0x26963cu: goto label_26963c;
        case 0x269640u: goto label_269640;
        case 0x269644u: goto label_269644;
        case 0x269648u: goto label_269648;
        case 0x26964cu: goto label_26964c;
        case 0x269650u: goto label_269650;
        case 0x269654u: goto label_269654;
        case 0x269658u: goto label_269658;
        case 0x26965cu: goto label_26965c;
        case 0x269660u: goto label_269660;
        case 0x269664u: goto label_269664;
        case 0x269668u: goto label_269668;
        case 0x26966cu: goto label_26966c;
        case 0x269670u: goto label_269670;
        case 0x269674u: goto label_269674;
        case 0x269678u: goto label_269678;
        case 0x26967cu: goto label_26967c;
        case 0x269680u: goto label_269680;
        case 0x269684u: goto label_269684;
        case 0x269688u: goto label_269688;
        case 0x26968cu: goto label_26968c;
        case 0x269690u: goto label_269690;
        case 0x269694u: goto label_269694;
        case 0x269698u: goto label_269698;
        case 0x26969cu: goto label_26969c;
        case 0x2696a0u: goto label_2696a0;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696a8u: goto label_2696a8;
        case 0x2696acu: goto label_2696ac;
        case 0x2696b0u: goto label_2696b0;
        case 0x2696b4u: goto label_2696b4;
        case 0x2696b8u: goto label_2696b8;
        case 0x2696bcu: goto label_2696bc;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696c4u: goto label_2696c4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698b8u: goto label_2698b8;
        case 0x2698bcu: goto label_2698bc;
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        default: return;
    }

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
label_269558:
    // 0x269558: 0x0  nop
    ctx->pc = 0x269558u;
    // NOP
label_26955c:
    // 0x26955c: 0x0  nop
    ctx->pc = 0x26955cu;
    // NOP
label_269560:
    // 0x269560: 0x139da  .word       0x000139DA                   # div         $a3, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269560u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269564:
    // 0x269564: 0xa050  .word       0x0000A050                   # mfhi        $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269564u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_269568:
    // 0x269568: 0x0  nop
    ctx->pc = 0x269568u;
    // NOP
label_26956c:
    // 0x26956c: 0x0  nop
    ctx->pc = 0x26956cu;
    // NOP
label_269570:
    // 0x269570: 0x139ef  .word       0x000139EF                   # dsubu       $a3, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269574:
    // 0x269574: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x269574u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269578:
    // 0x269578: 0x0  nop
    ctx->pc = 0x269578u;
    // NOP
label_26957c:
    // 0x26957c: 0x0  nop
    ctx->pc = 0x26957cu;
    // NOP
label_269580:
    // 0x269580: 0x139f5  .word       0x000139F5                   # INVALID     $zero, $at, 0x39F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269580 raw=0x000139F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269584:
    // 0x269584: 0x6510  .word       0x00006510                   # mfhi        $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269584u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_269588:
    // 0x269588: 0x0  nop
    ctx->pc = 0x269588u;
    // NOP
label_26958c:
    // 0x26958c: 0x0  nop
    ctx->pc = 0x26958cu;
    // NOP
label_269590:
    // 0x269590: 0x13a02  srl         $a3, $at, 8
    ctx->pc = 0x269590u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_269594:
    // 0x269594: 0x8720  .word       0x00008720                   # add         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269598:
    // 0x269598: 0x0  nop
    ctx->pc = 0x269598u;
    // NOP
label_26959c:
    // 0x26959c: 0x0  nop
    ctx->pc = 0x26959cu;
    // NOP
label_2695a0:
    // 0x2695a0: 0x13a13  .word       0x00013A13                   # mtlo        $zero # 00013A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2695a4:
    // 0x2695a4: 0x65c0  sll         $t4, $zero, 23
    ctx->pc = 0x2695a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2695a8:
    // 0x2695a8: 0x0  nop
    ctx->pc = 0x2695a8u;
    // NOP
label_2695ac:
    // 0x2695ac: 0x0  nop
    ctx->pc = 0x2695acu;
    // NOP
label_2695b0:
    // 0x2695b0: 0x13a20  .word       0x00013A20                   # add         $a3, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2695b4:
    // 0x2695b4: 0x53d0  .word       0x000053D0                   # mfhi        $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2695b8:
    // 0x2695b8: 0x0  nop
    ctx->pc = 0x2695b8u;
    // NOP
label_2695bc:
    // 0x2695bc: 0x0  nop
    ctx->pc = 0x2695bcu;
    // NOP
label_2695c0:
    // 0x2695c0: 0x13a2b  .word       0x00013A2B                   # sltu        $a3, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695c0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2695c4:
    // 0x2695c4: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x2695c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2695c8:
    // 0x2695c8: 0x0  nop
    ctx->pc = 0x2695c8u;
    // NOP
label_2695cc:
    // 0x2695cc: 0x0  nop
    ctx->pc = 0x2695ccu;
    // NOP
label_2695d0:
    // 0x2695d0: 0x13a3b  dsra        $a3, $at, 8
    ctx->pc = 0x2695d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 8);
label_2695d4:
    // 0x2695d4: 0x92f0  tge         $zero, $zero, 587
    ctx->pc = 0x2695d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2695d8:
    // 0x2695d8: 0x0  nop
    ctx->pc = 0x2695d8u;
    // NOP
label_2695dc:
    // 0x2695dc: 0x0  nop
    ctx->pc = 0x2695dcu;
    // NOP
label_2695e0:
    // 0x2695e0: 0x13a4e  .word       0x00013A4E                   # INVALID     $zero, $at, 0x3A4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2695E0 raw=0x00013A4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2695e4:
    // 0x2695e4: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x2695e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2695e8:
    // 0x2695e8: 0x0  nop
    ctx->pc = 0x2695e8u;
    // NOP
label_2695ec:
    // 0x2695ec: 0x0  nop
    ctx->pc = 0x2695ecu;
    // NOP
label_2695f0:
    // 0x2695f0: 0x13a5d  .word       0x00013A5D                   # dmultu      $zero, $at # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2695F0 raw=0x00013A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2695f4:
    // 0x2695f4: 0x20a0  .word       0x000020A0                   # add         $a0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2695f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2695f8:
    // 0x2695f8: 0x0  nop
    ctx->pc = 0x2695f8u;
    // NOP
label_2695fc:
    // 0x2695fc: 0x0  nop
    ctx->pc = 0x2695fcu;
    // NOP
label_269600:
    // 0x269600: 0x13a62  .word       0x00013A62                   # neg         $a3, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269600u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_269604:
    // 0x269604: 0xa460  .word       0x0000A460                   # add         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269608:
    // 0x269608: 0x0  nop
    ctx->pc = 0x269608u;
    // NOP
label_26960c:
    // 0x26960c: 0x0  nop
    ctx->pc = 0x26960cu;
    // NOP
label_269610:
    // 0x269610: 0x13a77  .word       0x00013A77                   # INVALID     $zero, $at, 0x3A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x269610 raw=0x00013A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269614:
    // 0x269614: 0x9250  .word       0x00009250                   # mfhi        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269614u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269618:
    // 0x269618: 0x0  nop
    ctx->pc = 0x269618u;
    // NOP
label_26961c:
    // 0x26961c: 0x0  nop
    ctx->pc = 0x26961cu;
    // NOP
label_269620:
    // 0x269620: 0x13a8a  .word       0x00013A8A                   # movz        $a3, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269620u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_269624:
    // 0x269624: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x269624u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269628:
    // 0x269628: 0x0  nop
    ctx->pc = 0x269628u;
    // NOP
label_26962c:
    // 0x26962c: 0x0  nop
    ctx->pc = 0x26962cu;
    // NOP
label_269630:
    // 0x269630: 0x13a9e  .word       0x00013A9E                   # ddiv        $a3, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x269630 raw=0x00013A9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269634:
    // 0x269634: 0x134f0  tge         $zero, $at, 211
    ctx->pc = 0x269634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269638:
    // 0x269638: 0x0  nop
    ctx->pc = 0x269638u;
    // NOP
label_26963c:
    // 0x26963c: 0x0  nop
    ctx->pc = 0x26963cu;
    // NOP
label_269640:
    // 0x269640: 0x13ac5  .word       0x00013AC5                   # INVALID     $zero, $at, 0x3AC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269640 raw=0x00013AC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269644:
    // 0x269644: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269648:
    // 0x269648: 0x0  nop
    ctx->pc = 0x269648u;
    // NOP
label_26964c:
    // 0x26964c: 0x0  nop
    ctx->pc = 0x26964cu;
    // NOP
label_269650:
    // 0x269650: 0x13adb  .word       0x00013ADB                   # divu        $a3, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269650u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269654:
    // 0x269654: 0xa330  tge         $zero, $zero, 652
    ctx->pc = 0x269654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269658:
    // 0x269658: 0x0  nop
    ctx->pc = 0x269658u;
    // NOP
label_26965c:
    // 0x26965c: 0x0  nop
    ctx->pc = 0x26965cu;
    // NOP
label_269660:
    // 0x269660: 0x13af0  tge         $zero, $at, 235
    ctx->pc = 0x269660u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269664:
    // 0x269664: 0xf1f0  tge         $zero, $zero, 967
    ctx->pc = 0x269664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269668:
    // 0x269668: 0x0  nop
    ctx->pc = 0x269668u;
    // NOP
label_26966c:
    // 0x26966c: 0x0  nop
    ctx->pc = 0x26966cu;
    // NOP
label_269670:
    // 0x269670: 0x13b0f  .word       0x00013B0F                   # sync # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_269674:
    // 0x269674: 0xbc20  .word       0x0000BC20                   # add         $s7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_269678:
    // 0x269678: 0x0  nop
    ctx->pc = 0x269678u;
    // NOP
label_26967c:
    // 0x26967c: 0x0  nop
    ctx->pc = 0x26967cu;
    // NOP
label_269680:
    // 0x269680: 0x13b27  .word       0x00013B27                   # nor         $a3, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269680u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_269684:
    // 0x269684: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_269688:
    // 0x269688: 0x0  nop
    ctx->pc = 0x269688u;
    // NOP
label_26968c:
    // 0x26968c: 0x0  nop
    ctx->pc = 0x26968cu;
    // NOP
label_269690:
    // 0x269690: 0x13b34  teq         $zero, $at, 236
    ctx->pc = 0x269690u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269694:
    // 0x269694: 0x8a30  tge         $zero, $zero, 552
    ctx->pc = 0x269694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269698:
    // 0x269698: 0x0  nop
    ctx->pc = 0x269698u;
    // NOP
label_26969c:
    // 0x26969c: 0x0  nop
    ctx->pc = 0x26969cu;
    // NOP
label_2696a0:
    // 0x2696a0: 0x13b46  .word       0x00013B46                   # srlv        $a3, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2696a4:
    // 0x2696a4: 0xe1a0  .word       0x0000E1A0                   # add         $gp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2696a8:
    // 0x2696a8: 0x0  nop
    ctx->pc = 0x2696a8u;
    // NOP
label_2696ac:
    // 0x2696ac: 0x0  nop
    ctx->pc = 0x2696acu;
    // NOP
label_2696b0:
    // 0x2696b0: 0x13b63  .word       0x00013B63                   # negu        $a3, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2696b4:
    // 0x2696b4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2696b8:
    // 0x2696b8: 0x0  nop
    ctx->pc = 0x2696b8u;
    // NOP
label_2696bc:
    // 0x2696bc: 0x0  nop
    ctx->pc = 0x2696bcu;
    // NOP
label_2696c0:
    // 0x2696c0: 0x13b7a  dsrl        $a3, $at, 13
    ctx->pc = 0x2696c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> 13);
label_2696c4:
    // 0x2696c4: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696c4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2696c8:
    // 0x2696c8: 0x0  nop
    ctx->pc = 0x2696c8u;
    // NOP
label_2696cc:
    // 0x2696cc: 0x0  nop
    ctx->pc = 0x2696ccu;
    // NOP
label_2696d0:
    // 0x2696d0: 0x13b8f  .word       0x00013B8F                   # sync # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2696d4:
    // 0x2696d4: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x2696d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2696d8:
    // 0x2696d8: 0x0  nop
    ctx->pc = 0x2696d8u;
    // NOP
label_2696dc:
    // 0x2696dc: 0x0  nop
    ctx->pc = 0x2696dcu;
    // NOP
label_2696e0:
    // 0x2696e0: 0x13ba7  .word       0x00013BA7                   # nor         $a3, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2696e4:
    // 0x2696e4: 0xb970  tge         $zero, $zero, 741
    ctx->pc = 0x2696e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2696e8:
    // 0x2696e8: 0x0  nop
    ctx->pc = 0x2696e8u;
    // NOP
label_2696ec:
    // 0x2696ec: 0x0  nop
    ctx->pc = 0x2696ecu;
    // NOP
label_2696f0:
    // 0x2696f0: 0x13bbf  dsra32      $a3, $at, 14
    ctx->pc = 0x2696f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (32 + 14));
label_2696f4:
    // 0x2696f4: 0x8800  sll         $s1, $zero, 0
    ctx->pc = 0x2696f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2696f8:
    // 0x2696f8: 0x0  nop
    ctx->pc = 0x2696f8u;
    // NOP
label_2696fc:
    // 0x2696fc: 0x0  nop
    ctx->pc = 0x2696fcu;
    // NOP
label_269700:
    // 0x269700: 0x13bd0  .word       0x00013BD0                   # mfhi        $a3 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269700u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_269704:
    // 0x269704: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x269704u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269708:
    // 0x269708: 0x0  nop
    ctx->pc = 0x269708u;
    // NOP
label_26970c:
    // 0x26970c: 0x0  nop
    ctx->pc = 0x26970cu;
    // NOP
label_269710:
    // 0x269710: 0x13bdd  .word       0x00013BDD                   # dmultu      $zero, $at # 00003BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269710 raw=0x00013BDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269714:
    // 0x269714: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x269714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269718:
    // 0x269718: 0x0  nop
    ctx->pc = 0x269718u;
    // NOP
label_26971c:
    // 0x26971c: 0x0  nop
    ctx->pc = 0x26971cu;
    // NOP
label_269720:
    // 0x269720: 0x13bf2  tlt         $zero, $at, 239
    ctx->pc = 0x269720u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269724:
    // 0x269724: 0x8c50  .word       0x00008C50                   # mfhi        $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269724u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269728:
    // 0x269728: 0x0  nop
    ctx->pc = 0x269728u;
    // NOP
label_26972c:
    // 0x26972c: 0x0  nop
    ctx->pc = 0x26972cu;
    // NOP
label_269730:
    // 0x269730: 0x13c04  .word       0x00013C04                   # sllv        $a3, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269734:
    // 0x269734: 0xcd70  tge         $zero, $zero, 821
    ctx->pc = 0x269734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269738:
    // 0x269738: 0x0  nop
    ctx->pc = 0x269738u;
    // NOP
label_26973c:
    // 0x26973c: 0x0  nop
    ctx->pc = 0x26973cu;
    // NOP
label_269740:
    // 0x269740: 0x13c1e  .word       0x00013C1E                   # ddiv        $a3, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x269740 raw=0x00013C1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269744:
    // 0x269744: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x269744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269748:
    // 0x269748: 0x0  nop
    ctx->pc = 0x269748u;
    // NOP
label_26974c:
    // 0x26974c: 0x0  nop
    ctx->pc = 0x26974cu;
    // NOP
label_269750:
    // 0x269750: 0x13c35  .word       0x00013C35                   # INVALID     $zero, $at, 0x3C35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269750 raw=0x00013C35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269754:
    // 0x269754: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269758:
    // 0x269758: 0x0  nop
    ctx->pc = 0x269758u;
    // NOP
label_26975c:
    // 0x26975c: 0x0  nop
    ctx->pc = 0x26975cu;
    // NOP
label_269760:
    // 0x269760: 0x13c47  .word       0x00013C47                   # srav        $a3, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269760u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269764:
    // 0x269764: 0xb500  sll         $s6, $zero, 20
    ctx->pc = 0x269764u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269768:
    // 0x269768: 0x0  nop
    ctx->pc = 0x269768u;
    // NOP
label_26976c:
    // 0x26976c: 0x0  nop
    ctx->pc = 0x26976cu;
    // NOP
label_269770:
    // 0x269770: 0x13c5e  .word       0x00013C5E                   # ddiv        $a3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x269770 raw=0x00013C5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269774:
    // 0x269774: 0xd590  .word       0x0000D590                   # mfhi        $k0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269774u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269778:
    // 0x269778: 0x0  nop
    ctx->pc = 0x269778u;
    // NOP
label_26977c:
    // 0x26977c: 0x0  nop
    ctx->pc = 0x26977cu;
    // NOP
label_269780:
    // 0x269780: 0x13c79  .word       0x00013C79                   # INVALID     $zero, $at, 0x3C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x269780 raw=0x00013C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269784:
    // 0x269784: 0x7e70  tge         $zero, $zero, 505
    ctx->pc = 0x269784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269788:
    // 0x269788: 0x0  nop
    ctx->pc = 0x269788u;
    // NOP
label_26978c:
    // 0x26978c: 0x0  nop
    ctx->pc = 0x26978cu;
    // NOP
label_269790:
    // 0x269790: 0x13c89  .word       0x00013C89                   # jalr        $a3, $zero # 00010480 <InstrIdType: CPU_SPECIAL>
label_269794:
    if (ctx->pc == 0x269794u) {
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269798u;
        goto label_269798;
    }
    ctx->pc = 0x269790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x269798u);
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269790u, 0x269798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269798u;
label_269798:
    // 0x269798: 0x0  nop
    ctx->pc = 0x269798u;
    // NOP
label_26979c:
    // 0x26979c: 0x0  nop
    ctx->pc = 0x26979cu;
    // NOP
label_2697a0:
    // 0x2697a0: 0x13c98  .word       0x00013C98                   # mult        $a3, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2697a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2697a4:
    // 0x2697a4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2697a8:
    // 0x2697a8: 0x0  nop
    ctx->pc = 0x2697a8u;
    // NOP
label_2697ac:
    // 0x2697ac: 0x0  nop
    ctx->pc = 0x2697acu;
    // NOP
label_2697b0:
    // 0x2697b0: 0x13ca4  .word       0x00013CA4                   # and         $a3, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2697b4:
    // 0x2697b4: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2697b8:
    // 0x2697b8: 0x0  nop
    ctx->pc = 0x2697b8u;
    // NOP
label_2697bc:
    // 0x2697bc: 0x0  nop
    ctx->pc = 0x2697bcu;
    // NOP
label_2697c0:
    // 0x2697c0: 0x13cb3  tltu        $zero, $at, 242
    ctx->pc = 0x2697c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2697c4:
    // 0x2697c4: 0x8e20  .word       0x00008E20                   # add         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2697c8:
    // 0x2697c8: 0x0  nop
    ctx->pc = 0x2697c8u;
    // NOP
label_2697cc:
    // 0x2697cc: 0x0  nop
    ctx->pc = 0x2697ccu;
    // NOP
label_2697d0:
    // 0x2697d0: 0x13cc5  .word       0x00013CC5                   # INVALID     $zero, $at, 0x3CC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2697D0 raw=0x00013CC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2697d4:
    // 0x2697d4: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2697d8:
    // 0x2697d8: 0x0  nop
    ctx->pc = 0x2697d8u;
    // NOP
label_2697dc:
    // 0x2697dc: 0x0  nop
    ctx->pc = 0x2697dcu;
    // NOP
label_2697e0:
    // 0x2697e0: 0x13ccf  .word       0x00013CCF                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2697e4:
    // 0x2697e4: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2697e8:
    // 0x2697e8: 0x0  nop
    ctx->pc = 0x2697e8u;
    // NOP
label_2697ec:
    // 0x2697ec: 0x0  nop
    ctx->pc = 0x2697ecu;
    // NOP
label_2697f0:
    // 0x2697f0: 0x13cd7  .word       0x00013CD7                   # dsrav       $a3, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2697f4:
    // 0x2697f4: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x2697f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2697f8:
    // 0x2697f8: 0x0  nop
    ctx->pc = 0x2697f8u;
    // NOP
label_2697fc:
    // 0x2697fc: 0x0  nop
    ctx->pc = 0x2697fcu;
    // NOP
label_269800:
    // 0x269800: 0x13ce1  .word       0x00013CE1                   # addu        $a3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269804:
    // 0x269804: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_269808:
    // 0x269808: 0x0  nop
    ctx->pc = 0x269808u;
    // NOP
label_26980c:
    // 0x26980c: 0x0  nop
    ctx->pc = 0x26980cu;
    // NOP
label_269810:
    // 0x269810: 0x13cee  .word       0x00013CEE                   # dsub        $a3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269814:
    // 0x269814: 0xb990  .word       0x0000B990                   # mfhi        $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269814u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_269818:
    // 0x269818: 0x0  nop
    ctx->pc = 0x269818u;
    // NOP
label_26981c:
    // 0x26981c: 0x0  nop
    ctx->pc = 0x26981cu;
    // NOP
label_269820:
    // 0x269820: 0x13d06  .word       0x00013D06                   # srlv        $a3, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269820u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269824:
    // 0x269824: 0x5f50  .word       0x00005F50                   # mfhi        $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269824u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_269828:
    // 0x269828: 0x0  nop
    ctx->pc = 0x269828u;
    // NOP
label_26982c:
    // 0x26982c: 0x0  nop
    ctx->pc = 0x26982cu;
    // NOP
label_269830:
    // 0x269830: 0x13d12  .word       0x00013D12                   # mflo        $a3 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269830u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_269834:
    // 0x269834: 0xd0d0  .word       0x0000D0D0                   # mfhi        $k0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269834u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269838:
    // 0x269838: 0x0  nop
    ctx->pc = 0x269838u;
    // NOP
label_26983c:
    // 0x26983c: 0x0  nop
    ctx->pc = 0x26983cu;
    // NOP
label_269840:
    // 0x269840: 0x13d2d  .word       0x00013D2D                   # daddu       $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_269844:
    // 0x269844: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269848:
    // 0x269848: 0x0  nop
    ctx->pc = 0x269848u;
    // NOP
label_26984c:
    // 0x26984c: 0x0  nop
    ctx->pc = 0x26984cu;
    // NOP
label_269850:
    // 0x269850: 0x13d36  tne         $zero, $at, 244
    ctx->pc = 0x269850u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269854:
    // 0x269854: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269858:
    // 0x269858: 0x0  nop
    ctx->pc = 0x269858u;
    // NOP
label_26985c:
    // 0x26985c: 0x0  nop
    ctx->pc = 0x26985cu;
    // NOP
label_269860:
    // 0x269860: 0x13d4d  break       1, 245
    ctx->pc = 0x269860u;
    runtime->handleBreak(rdram, ctx);
label_269864:
    // 0x269864: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_269868:
    // 0x269868: 0x0  nop
    ctx->pc = 0x269868u;
    // NOP
label_26986c:
    // 0x26986c: 0x0  nop
    ctx->pc = 0x26986cu;
    // NOP
label_269870:
    // 0x269870: 0x13d57  .word       0x00013D57                   # dsrav       $a3, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269870u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269874:
    // 0x269874: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_269878:
    // 0x269878: 0x0  nop
    ctx->pc = 0x269878u;
    // NOP
label_26987c:
    // 0x26987c: 0x0  nop
    ctx->pc = 0x26987cu;
    // NOP
label_269880:
    // 0x269880: 0x13d63  .word       0x00013D63                   # negu        $a3, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269884:
    // 0x269884: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269888:
    // 0x269888: 0x0  nop
    ctx->pc = 0x269888u;
    // NOP
label_26988c:
    // 0x26988c: 0x0  nop
    ctx->pc = 0x26988cu;
    // NOP
label_269890:
    // 0x269890: 0x13d73  tltu        $zero, $at, 245
    ctx->pc = 0x269890u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269894:
    // 0x269894: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269898:
    // 0x269898: 0x0  nop
    ctx->pc = 0x269898u;
    // NOP
label_26989c:
    // 0x26989c: 0x0  nop
    ctx->pc = 0x26989cu;
    // NOP
label_2698a0:
    // 0x2698a0: 0x13d7e  dsrl32      $a3, $at, 21
    ctx->pc = 0x2698a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 21));
label_2698a4:
    // 0x2698a4: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x2698a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2698a8:
    // 0x2698a8: 0x0  nop
    ctx->pc = 0x2698a8u;
    // NOP
label_2698ac:
    // 0x2698ac: 0x0  nop
    ctx->pc = 0x2698acu;
    // NOP
label_2698b0:
    // 0x2698b0: 0x13d88  .word       0x00013D88                   # jr          $zero # 00013D80 <InstrIdType: CPU_SPECIAL>
label_2698b4:
    if (ctx->pc == 0x2698B4u) {
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x2180  sll         $a0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698B8u;
        goto label_2698b8;
    }
    ctx->pc = 0x2698B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x2180  sll         $a0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2698B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2698B8u;
label_2698b8:
    // 0x2698b8: 0x0  nop
    ctx->pc = 0x2698b8u;
    // NOP
label_2698bc:
    // 0x2698bc: 0x0  nop
    ctx->pc = 0x2698bcu;
    // NOP
label_2698c0:
    // 0x2698c0: 0x13d8d  break       1, 246
    ctx->pc = 0x2698c0u;
    runtime->handleBreak(rdram, ctx);
label_2698c4:
    // 0x2698c4: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2698c8:
    // 0x2698c8: 0x0  nop
    ctx->pc = 0x2698c8u;
    // NOP
label_2698cc:
    // 0x2698cc: 0x0  nop
    ctx->pc = 0x2698ccu;
    // NOP
label_2698d0:
    // 0x2698d0: 0x13d9c  .word       0x00013D9C                   # dmult       $zero, $at # 00003D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2698D0 raw=0x00013D9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2698d4:
    // 0x2698d4: 0x8e00  sll         $s1, $zero, 24
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2698d8:
    // 0x2698d8: 0x0  nop
    ctx->pc = 0x2698d8u;
    // NOP
label_2698dc:
    // 0x2698dc: 0x0  nop
    ctx->pc = 0x2698dcu;
    // NOP
label_2698e0:
    // 0x2698e0: 0x13dae  .word       0x00013DAE                   # dsub        $a3, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_2698e4:
    // 0x2698e4: 0x50f0  tge         $zero, $zero, 323
    ctx->pc = 0x2698e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2698e8:
    // 0x2698e8: 0x0  nop
    ctx->pc = 0x2698e8u;
    // NOP
label_2698ec:
    // 0x2698ec: 0x0  nop
    ctx->pc = 0x2698ecu;
    // NOP
label_2698f0:
    // 0x2698f0: 0x13db9  .word       0x00013DB9                   # INVALID     $zero, $at, 0x3DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2698F0 raw=0x00013DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2698f4:
    // 0x2698f4: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2698f8:
    // 0x2698f8: 0x0  nop
    ctx->pc = 0x2698f8u;
    // NOP
label_2698fc:
    // 0x2698fc: 0x0  nop
    ctx->pc = 0x2698fcu;
    // NOP
label_269900:
    // 0x269900: 0x13dc5  .word       0x00013DC5                   # INVALID     $zero, $at, 0x3DC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269900 raw=0x00013DC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269904:
    // 0x269904: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269908:
    // 0x269908: 0x0  nop
    ctx->pc = 0x269908u;
    // NOP
label_26990c:
    // 0x26990c: 0x0  nop
    ctx->pc = 0x26990cu;
    // NOP
label_269910:
    // 0x269910: 0x13dd5  .word       0x00013DD5                   # INVALID     $zero, $at, 0x3DD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269910 raw=0x00013DD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269914:
    // 0x269914: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269918:
    // 0x269918: 0x0  nop
    ctx->pc = 0x269918u;
    // NOP
label_26991c:
    // 0x26991c: 0x0  nop
    ctx->pc = 0x26991cu;
    // NOP
label_269920:
    // 0x269920: 0x13de8  .word       0x00013DE8                   # mfsa        $a3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269920u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_269924:
    // 0x269924: 0xcb60  .word       0x0000CB60                   # add         $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269928:
    // 0x269928: 0x0  nop
    ctx->pc = 0x269928u;
    // NOP
label_26992c:
    // 0x26992c: 0x0  nop
    ctx->pc = 0x26992cu;
    // NOP
    ctx->pc = 0x269930u;
    return;
}

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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part217(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        case 0x205160u: goto label_205160;
        case 0x205164u: goto label_205164;
        case 0x205168u: goto label_205168;
        case 0x20516cu: goto label_20516c;
        case 0x205170u: goto label_205170;
        case 0x205174u: goto label_205174;
        case 0x205178u: goto label_205178;
        case 0x20517cu: goto label_20517c;
        case 0x205180u: goto label_205180;
        case 0x205184u: goto label_205184;
        case 0x205188u: goto label_205188;
        case 0x20518cu: goto label_20518c;
        case 0x205190u: goto label_205190;
        case 0x205194u: goto label_205194;
        case 0x205198u: goto label_205198;
        case 0x20519cu: goto label_20519c;
        case 0x2051a0u: goto label_2051a0;
        case 0x2051a4u: goto label_2051a4;
        case 0x2051a8u: goto label_2051a8;
        case 0x2051acu: goto label_2051ac;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051b8u: goto label_2051b8;
        case 0x2051bcu: goto label_2051bc;
        case 0x2051c0u: goto label_2051c0;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051c8u: goto label_2051c8;
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d0u: goto label_2051d0;
        case 0x2051d4u: goto label_2051d4;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051dcu: goto label_2051dc;
        case 0x2051e0u: goto label_2051e0;
        case 0x2051e4u: goto label_2051e4;
        case 0x2051e8u: goto label_2051e8;
        case 0x2051ecu: goto label_2051ec;
        case 0x2051f0u: goto label_2051f0;
        case 0x2051f4u: goto label_2051f4;
        case 0x2051f8u: goto label_2051f8;
        case 0x2051fcu: goto label_2051fc;
        case 0x205200u: goto label_205200;
        case 0x205204u: goto label_205204;
        case 0x205208u: goto label_205208;
        case 0x20520cu: goto label_20520c;
        case 0x205210u: goto label_205210;
        case 0x205214u: goto label_205214;
        case 0x205218u: goto label_205218;
        case 0x20521cu: goto label_20521c;
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        default: return;
    }

label_205050:
    // 0x205050: 0x9067367d  lbu         $a3, 0x367D($v1)
    ctx->pc = 0x205050u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13949)));
label_205054:
    // 0x205054: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_205058:
    // 0x205058: 0x8f8590f8  lw          $a1, -0x6F08($gp)
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20505c:
    // 0x20505c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20505cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205060:
    // 0x205060: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_205064:
    // 0x205064: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_205068:
    // 0x205068: 0xaca72494  sw          $a3, 0x2494($a1)
    ctx->pc = 0x205068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9364), GPR_U32(ctx, 7));
label_20506c:
    // 0x20506c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205070:
    // 0x205070: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x205070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205074:
    // 0x205074: 0xc0651dc  jal         func_194770
label_205078:
    if (ctx->pc == 0x205078u) {
        ctx->pc = 0x205078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205074u;
        // 0x205078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20507Cu;
        goto label_20507c;
    }
    ctx->pc = 0x205074u;
    SET_GPR_U32(ctx, 31, 0x20507Cu);
    ctx->pc = 0x205078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205074u;
    // 0x205078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194770u, 0x205074u, 0x20507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20507Cu;
label_20507c:
    // 0x20507c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20507cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205080:
    // 0x205080: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205084:
    // 0x205084: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_205088:
    // 0x205088: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_20508c:
    // 0x20508c: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_205090:
    // 0x205090: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_205094:
    // 0x205094: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x205094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_205098:
    // 0x205098: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x205098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20509c:
    // 0x20509c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x20509cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2050a0:
    // 0x2050a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2050a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2050a4:
    // 0x2050a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2050a8:
    // 0x2050a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2050ac:
    // 0x2050ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2050b0:
    // 0x2050b0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2050b4:
    // 0x2050b4: 0x90223a1b  lbu         $v0, 0x3A1B($at)
    ctx->pc = 0x2050b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14875)));
label_2050b8:
    // 0x2050b8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_2050bc:
    if (ctx->pc == 0x2050BCu) {
        ctx->pc = 0x2050C0u;
        goto label_2050c0;
    }
    ctx->pc = 0x2050B8u;
    {
        const bool branch_taken_0x2050b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2050b8) {
            ctx->pc = 0x2050D0u;
            goto label_2050d0;
        }
    }
    ctx->pc = 0x2050C0u;
label_2050c0:
    // 0x2050c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050c4:
    // 0x2050c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2050c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2050c8:
    // 0x2050c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2050cc:
    if (ctx->pc == 0x2050CCu) {
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0xac442498  sw          $a0, 0x2498($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050D0u;
        goto label_2050d0;
    }
    ctx->pc = 0x2050C8u;
    {
        const bool branch_taken_0x2050c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0xac442498  sw          $a0, 0x2498($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050c8) {
            ctx->pc = 0x2050F8u;
            goto label_2050f8;
        }
    }
    ctx->pc = 0x2050D0u;
label_2050d0:
    // 0x2050d0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050d4:
    // 0x2050d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2050d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2050d8:
    // 0x2050d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2050dc:
    // 0x2050dc: 0xac432498  sw          $v1, 0x2498($v0)
    ctx->pc = 0x2050dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 3));
label_2050e0:
    // 0x2050e0: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x2050e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050e4:
    // 0x2050e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2050e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2050e8:
    // 0x2050e8: 0x8c632494  lw          $v1, 0x2494($v1)
    ctx->pc = 0x2050e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9364)));
label_2050ec:
    // 0x2050ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2050f0:
    if (ctx->pc == 0x2050F0u) {
        ctx->pc = 0x2050F4u;
        goto label_2050f4;
    }
    ctx->pc = 0x2050ECu;
    {
        const bool branch_taken_0x2050ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2050ec) {
            ctx->pc = 0x2050F8u;
            goto label_2050f8;
        }
    }
    ctx->pc = 0x2050F4u;
label_2050f4:
    // 0x2050f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2050f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2050f8:
    // 0x2050f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2050fc:
    // 0x2050fc: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x2050fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
label_205100:
    // 0x205100: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_205104:
    if (ctx->pc == 0x205104u) {
        ctx->pc = 0x205104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205100u;
        // 0x205104: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205108u;
        goto label_205108;
    }
    ctx->pc = 0x205100u;
    {
        const bool branch_taken_0x205100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205100u;
        // 0x205104: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205100) {
            ctx->pc = 0x205094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205094;
        }
    }
    ctx->pc = 0x205108u;
label_205108:
    // 0x205108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20510c:
    // 0x20510c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205110:
    // 0x205110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_205114:
    // 0x205114: 0x3e00008  jr          $ra
label_205118:
    if (ctx->pc == 0x205118u) {
        ctx->pc = 0x205118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205114u;
        // 0x205118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20511Cu;
        goto label_20511c;
    }
    ctx->pc = 0x205114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205114u;
        // 0x205118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20511Cu;
label_20511c:
    // 0x20511c: 0x0  nop
    ctx->pc = 0x20511cu;
    // NOP
label_205120:
    // 0x205120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205124:
    // 0x205124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205128:
    // 0x205128: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20512c:
    // 0x20512c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_205130:
    if (ctx->pc == 0x205130u) {
        ctx->pc = 0x205134u;
        goto label_205134;
    }
    ctx->pc = 0x20512Cu;
    {
        const bool branch_taken_0x20512c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20512c) {
            ctx->pc = 0x205140u;
            goto label_205140;
        }
    }
    ctx->pc = 0x205134u;
label_205134:
    // 0x205134: 0xc070038  jal         func_1C00E0
label_205138:
    if (ctx->pc == 0x205138u) {
        ctx->pc = 0x20513Cu;
        goto label_20513c;
    }
    ctx->pc = 0x205134u;
    SET_GPR_U32(ctx, 31, 0x20513Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20513Cu;
label_20513c:
    // 0x20513c: 0xaf8090f8  sw          $zero, -0x6F08($gp)
    ctx->pc = 0x20513cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 0));
label_205140:
    // 0x205140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205144:
    // 0x205144: 0x3e00008  jr          $ra
label_205148:
    if (ctx->pc == 0x205148u) {
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20514Cu;
        goto label_20514c;
    }
    ctx->pc = 0x205144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20514Cu;
label_20514c:
    // 0x20514c: 0x0  nop
    ctx->pc = 0x20514cu;
    // NOP
label_205150:
    // 0x205150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x205150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_205154:
    // 0x205154: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x205154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_205158:
    // 0x205158: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x205158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_20515c:
    // 0x20515c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_205160:
    // 0x205160: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x205160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_205164:
    // 0x205164: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x205164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_205168:
    // 0x205168: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x205168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20516c:
    // 0x20516c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_205170:
    // 0x205170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x205170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_205174:
    // 0x205174: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205178:
    // 0x205178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20517c:
    if (ctx->pc == 0x20517Cu) {
        ctx->pc = 0x20517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205178u;
        // 0x20517c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205180u;
        goto label_205180;
    }
    ctx->pc = 0x205178u;
    {
        const bool branch_taken_0x205178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205178u;
        // 0x20517c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205178) {
            ctx->pc = 0x20518Cu;
            goto label_20518c;
        }
    }
    ctx->pc = 0x205180u;
label_205180:
    // 0x205180: 0xc070080  jal         func_1C0200
label_205184:
    if (ctx->pc == 0x205184u) {
        ctx->pc = 0x205184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205180u;
        // 0x205184: 0x240524b0  addiu       $a1, $zero, 0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205188u;
        goto label_205188;
    }
    ctx->pc = 0x205180u;
    SET_GPR_U32(ctx, 31, 0x205188u);
    ctx->pc = 0x205184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205180u;
    // 0x205184: 0x240524b0  addiu       $a1, $zero, 0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x205188u;
label_205188:
    // 0x205188: 0xaf8290f8  sw          $v0, -0x6F08($gp)
    ctx->pc = 0x205188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 2));
label_20518c:
    // 0x20518c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205190:
    // 0x205190: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205194:
    // 0x205194: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x205194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205198:
    // 0x205198: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20519c:
    // 0x20519c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20519cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051a0:
    // 0x2051a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051a4:
    // 0x2051a4: 0xac402480  sw          $zero, 0x2480($v0)
    ctx->pc = 0x2051a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 0));
label_2051a8:
    // 0x2051a8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051ac:
    // 0x2051ac: 0xac402484  sw          $zero, 0x2484($v0)
    ctx->pc = 0x2051acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9348), GPR_U32(ctx, 0));
label_2051b0:
    // 0x2051b0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051b4:
    // 0x2051b4: 0xac402488  sw          $zero, 0x2488($v0)
    ctx->pc = 0x2051b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9352), GPR_U32(ctx, 0));
label_2051b8:
    // 0x2051b8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051bc:
    // 0x2051bc: 0xac40248c  sw          $zero, 0x248C($v0)
    ctx->pc = 0x2051bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9356), GPR_U32(ctx, 0));
label_2051c0:
    // 0x2051c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051c4:
    // 0x2051c4: 0xac402494  sw          $zero, 0x2494($v0)
    ctx->pc = 0x2051c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9364), GPR_U32(ctx, 0));
label_2051c8:
    // 0x2051c8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051cc:
    // 0x2051cc: 0xac402498  sw          $zero, 0x2498($v0)
    ctx->pc = 0x2051ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 0));
label_2051d0:
    // 0x2051d0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051d4:
    // 0x2051d4: 0xac40249c  sw          $zero, 0x249C($v0)
    ctx->pc = 0x2051d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9372), GPR_U32(ctx, 0));
label_2051d8:
    // 0x2051d8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051dc:
    // 0x2051dc: 0xac4024a0  sw          $zero, 0x24A0($v0)
    ctx->pc = 0x2051dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9376), GPR_U32(ctx, 0));
label_2051e0:
    // 0x2051e0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051e4:
    // 0x2051e4: 0xac4024a4  sw          $zero, 0x24A4($v0)
    ctx->pc = 0x2051e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9380), GPR_U32(ctx, 0));
label_2051e8:
    // 0x2051e8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051ec:
    // 0x2051ec: 0xac4024a8  sw          $zero, 0x24A8($v0)
    ctx->pc = 0x2051ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9384), GPR_U32(ctx, 0));
label_2051f0:
    // 0x2051f0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051f4:
    // 0x2051f4: 0xac432490  sw          $v1, 0x2490($v0)
    ctx->pc = 0x2051f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 3));
label_2051f8:
    // 0x2051f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2051f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051fc:
    // 0x2051fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205200:
    // 0x205200: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205204:
    // 0x205204: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x205204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_205208:
    // 0x205208: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20520c:
    // 0x20520c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_205210:
    // 0x205210: 0xc05e234  jal         func_1788D0
label_205214:
    if (ctx->pc == 0x205214u) {
        ctx->pc = 0x205214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205210u;
        // 0x205214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205218u;
        goto label_205218;
    }
    ctx->pc = 0x205210u;
    SET_GPR_U32(ctx, 31, 0x205218u);
    ctx->pc = 0x205214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205210u;
    // 0x205214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x205210u, 0x205218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205218u;
label_205218:
    // 0x205218: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20521c:
    // 0x20521c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205220:
    // 0x205220: 0xc07091c  jal         func_1C2470
label_205224:
    if (ctx->pc == 0x205224u) {
        ctx->pc = 0x205224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205220u;
        // 0x205224: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205228u;
        goto label_205228;
    }
    ctx->pc = 0x205220u;
    SET_GPR_U32(ctx, 31, 0x205228u);
    ctx->pc = 0x205224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205220u;
    // 0x205224: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205228u;
label_205228:
    // 0x205228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20522c:
    // 0x20522c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205230:
    // 0x205230: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205234:
    // 0x205234: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_205238:
    // 0x205238: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20523c:
    // 0x20523c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205240:
    // 0x205240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205244:
    // 0x205244: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205248:
    // 0x205248: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20524c:
    // 0x20524c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20524cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205250:
    // 0x205250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205254:
    // 0x205254: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205258:
    // 0x205258: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20525c:
    // 0x20525c: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20525cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205260:
    // 0x205260: 0xc05de30  jal         func_1778C0
label_205264:
    if (ctx->pc == 0x205264u) {
        ctx->pc = 0x205264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205260u;
        // 0x205264: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205268u;
        goto label_205268;
    }
    ctx->pc = 0x205260u;
    SET_GPR_U32(ctx, 31, 0x205268u);
    ctx->pc = 0x205264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205260u;
    // 0x205264: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205260u, 0x205268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205268u;
label_205268:
    // 0x205268: 0xc070834  jal         func_1C20D0
label_20526c:
    if (ctx->pc == 0x20526Cu) {
        ctx->pc = 0x20526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205268u;
        // 0x20526c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205270u;
        goto label_205270;
    }
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 31, 0x205270u);
    ctx->pc = 0x20526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205268u;
    // 0x20526c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205270u;
label_205270:
    // 0x205270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205274:
    // 0x205274: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205278:
    // 0x205278: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20527c:
    // 0x20527c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_205280:
    // 0x205280: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205284:
    // 0x205284: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x205284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205288:
    // 0x205288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20528c:
    // 0x20528c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_205290:
    // 0x205290: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205294:
    // 0x205294: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205298:
    // 0x205298: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x205298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20529c:
    // 0x20529c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2052a0:
    // 0x2052a0: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_2052a4:
    // 0x2052a4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2052a8:
    // 0x2052a8: 0xc05de30  jal         func_1778C0
label_2052ac:
    if (ctx->pc == 0x2052ACu) {
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052B0u;
        goto label_2052b0;
    }
    ctx->pc = 0x2052A8u;
    SET_GPR_U32(ctx, 31, 0x2052B0u);
    ctx->pc = 0x2052ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052A8u;
    // 0x2052ac: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2052A8u, 0x2052B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052B0u;
label_2052b0:
    // 0x2052b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2052b4:
    // 0x2052b4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2052b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2052b8:
    // 0x2052b8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_2052bc:
    if (ctx->pc == 0x2052BCu) {
        ctx->pc = 0x2052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B8u;
        // 0x2052bc: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052C0u;
        goto label_2052c0;
    }
    ctx->pc = 0x2052B8u;
    {
        const bool branch_taken_0x2052b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B8u;
        // 0x2052bc: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b8) {
            ctx->pc = 0x205200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205200;
        }
    }
    ctx->pc = 0x2052C0u;
label_2052c0:
    // 0x2052c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2052c4:
    // 0x2052c4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2052c8:
    // 0x2052c8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2052c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2052cc:
    // 0x2052cc: 0x24500fc0  addiu       $s0, $v0, 0xFC0
    ctx->pc = 0x2052ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_2052d0:
    // 0x2052d0: 0xc05e234  jal         func_1788D0
label_2052d4:
    if (ctx->pc == 0x2052D4u) {
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052D8u;
        goto label_2052d8;
    }
    ctx->pc = 0x2052D0u;
    SET_GPR_U32(ctx, 31, 0x2052D8u);
    ctx->pc = 0x2052D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052D0u;
    // 0x2052d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2052D0u, 0x2052D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052D8u;
label_2052d8:
    // 0x2052d8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2052d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2052dc:
    // 0x2052dc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2052dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2052e0:
    // 0x2052e0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2052e4:
    // 0x2052e4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2052e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2052e8:
    // 0x2052e8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2052ec:
    // 0x2052ec: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2052f0:
    // 0x2052f0: 0xc07c1f4  jal         func_1F07D0
label_2052f4:
    if (ctx->pc == 0x2052F4u) {
        ctx->pc = 0x2052F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F0u;
        // 0x2052f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052F8u;
        goto label_2052f8;
    }
    ctx->pc = 0x2052F0u;
    SET_GPR_U32(ctx, 31, 0x2052F8u);
    ctx->pc = 0x2052F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052F0u;
    // 0x2052f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x2052F8u;
label_2052f8:
    // 0x2052f8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2052fc:
    // 0x2052fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205300:
    // 0x205300: 0xc07091c  jal         func_1C2470
label_205304:
    if (ctx->pc == 0x205304u) {
        ctx->pc = 0x205304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205300u;
        // 0x205304: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205308u;
        goto label_205308;
    }
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 31, 0x205308u);
    ctx->pc = 0x205304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205300u;
    // 0x205304: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205308u;
label_205308:
    // 0x205308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20530c:
    // 0x20530c: 0x260405b0  addiu       $a0, $s0, 0x5B0
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
label_205310:
    // 0x205310: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205314:
    // 0x205314: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x205314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205318:
    // 0x205318: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20531c:
    // 0x20531c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20531cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205320:
    // 0x205320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205324:
    // 0x205324: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x205324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205328:
    // 0x205328: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20532c:
    // 0x20532c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20532cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205330:
    // 0x205330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205334:
    // 0x205334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205338:
    // 0x205338: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20533c:
    // 0x20533c: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20533cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205340:
    // 0x205340: 0xc05de30  jal         func_1778C0
label_205344:
    if (ctx->pc == 0x205344u) {
        ctx->pc = 0x205344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205340u;
        // 0x205344: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205348u;
        goto label_205348;
    }
    ctx->pc = 0x205340u;
    SET_GPR_U32(ctx, 31, 0x205348u);
    ctx->pc = 0x205344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205340u;
    // 0x205344: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205340u, 0x205348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205348u;
label_205348:
    // 0x205348: 0xc070834  jal         func_1C20D0
label_20534c:
    if (ctx->pc == 0x20534Cu) {
        ctx->pc = 0x20534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205348u;
        // 0x20534c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205350u;
        goto label_205350;
    }
    ctx->pc = 0x205348u;
    SET_GPR_U32(ctx, 31, 0x205350u);
    ctx->pc = 0x20534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205348u;
    // 0x20534c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205350u;
label_205350:
    // 0x205350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205354:
    // 0x205354: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x205354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_205358:
    // 0x205358: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20535c:
    // 0x20535c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205360:
    // 0x205360: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205364:
    // 0x205364: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205368:
    // 0x205368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20536c:
    // 0x20536c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205370:
    // 0x205370: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_205374:
    // 0x205374: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_205378:
    // 0x205378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20537c:
    // 0x20537c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20537cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_205380:
    // 0x205380: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205384:
    // 0x205384: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_205388:
    // 0x205388: 0xc05de30  jal         func_1778C0
label_20538c:
    if (ctx->pc == 0x20538Cu) {
        ctx->pc = 0x20538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205388u;
        // 0x20538c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205390u;
        goto label_205390;
    }
    ctx->pc = 0x205388u;
    SET_GPR_U32(ctx, 31, 0x205390u);
    ctx->pc = 0x20538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205388u;
    // 0x20538c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205388u, 0x205390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205390u;
label_205390:
    // 0x205390: 0xc07082c  jal         func_1C20B0
label_205394:
    if (ctx->pc == 0x205394u) {
        ctx->pc = 0x205394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205390u;
        // 0x205394: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205398u;
        goto label_205398;
    }
    ctx->pc = 0x205390u;
    SET_GPR_U32(ctx, 31, 0x205398u);
    ctx->pc = 0x205394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205390u;
    // 0x205394: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x205398u;
label_205398:
    // 0x205398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20539c:
    // 0x20539c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2053a0:
    // 0x2053a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2053a4:
    // 0x2053a4: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x2053a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
label_2053a8:
    // 0x2053a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2053a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2053ac:
    // 0x2053ac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2053b0:
    // 0x2053b0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2053b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2053b4:
    // 0x2053b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2053b8:
    // 0x2053b8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2053b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2053bc:
    // 0x2053bc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2053c0:
    // 0x2053c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2053c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2053c4:
    // 0x2053c4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2053c8:
    // 0x2053c8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2053c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2053cc:
    // 0x2053cc: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x2053ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_2053d0:
    // 0x2053d0: 0xc05de30  jal         func_1778C0
label_2053d4:
    if (ctx->pc == 0x2053D4u) {
        ctx->pc = 0x2053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D0u;
        // 0x2053d4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053D8u;
        goto label_2053d8;
    }
    ctx->pc = 0x2053D0u;
    SET_GPR_U32(ctx, 31, 0x2053D8u);
    ctx->pc = 0x2053D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053D0u;
    // 0x2053d4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2053D0u, 0x2053D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053D8u;
label_2053d8:
    // 0x2053d8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2053dc:
    // 0x2053dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2053dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2053e0:
    // 0x2053e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2053e4:
    // 0x2053e4: 0x24500d20  addiu       $s0, $v0, 0xD20
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
label_2053e8:
    // 0x2053e8: 0xc05e234  jal         func_1788D0
label_2053ec:
    if (ctx->pc == 0x2053ECu) {
        ctx->pc = 0x2053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E8u;
        // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053F0u;
        goto label_2053f0;
    }
    ctx->pc = 0x2053E8u;
    SET_GPR_U32(ctx, 31, 0x2053F0u);
    ctx->pc = 0x2053ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053E8u;
    // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2053E8u, 0x2053F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053F0u;
label_2053f0:
    // 0x2053f0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2053f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2053f4:
    // 0x2053f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2053f8:
    // 0x2053f8: 0xc07091c  jal         func_1C2470
label_2053fc:
    if (ctx->pc == 0x2053FCu) {
        ctx->pc = 0x2053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F8u;
        // 0x2053fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205400u;
        goto label_205400;
    }
    ctx->pc = 0x2053F8u;
    SET_GPR_U32(ctx, 31, 0x205400u);
    ctx->pc = 0x2053FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053F8u;
    // 0x2053fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205400u;
label_205400:
    // 0x205400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205404:
    // 0x205404: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x205404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_205408:
    // 0x205408: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20540c:
    // 0x20540c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205410:
    // 0x205410: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205414:
    // 0x205414: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205418:
    // 0x205418: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20541c:
    // 0x20541c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20541cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205420:
    // 0x205420: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_205424:
    // 0x205424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x205424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205428:
    // 0x205428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20542c:
    // 0x20542c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20542cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205430:
    // 0x205430: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205434:
    // 0x205434: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205438:
    // 0x205438: 0xc05de30  jal         func_1778C0
label_20543c:
    if (ctx->pc == 0x20543Cu) {
        ctx->pc = 0x20543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205438u;
        // 0x20543c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205440u;
        goto label_205440;
    }
    ctx->pc = 0x205438u;
    SET_GPR_U32(ctx, 31, 0x205440u);
    ctx->pc = 0x20543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205438u;
    // 0x20543c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205438u, 0x205440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205440u;
label_205440:
    // 0x205440: 0xc070834  jal         func_1C20D0
label_205444:
    if (ctx->pc == 0x205444u) {
        ctx->pc = 0x205444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205440u;
        // 0x205444: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205448u;
        goto label_205448;
    }
    ctx->pc = 0x205440u;
    SET_GPR_U32(ctx, 31, 0x205448u);
    ctx->pc = 0x205444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205440u;
    // 0x205444: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205448u;
label_205448:
    // 0x205448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20544c:
    // 0x20544c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205450:
    // 0x205450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205454:
    // 0x205454: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_205458:
    // 0x205458: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20545c:
    // 0x20545c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205460:
    // 0x205460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205464:
    // 0x205464: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x205464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_205468:
    // 0x205468: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20546c:
    // 0x20546c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205470:
    // 0x205470: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x205470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_205474:
    // 0x205474: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x205474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205478:
    // 0x205478: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x205478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_20547c:
    // 0x20547c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20547cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_205480:
    // 0x205480: 0xc05de30  jal         func_1778C0
label_205484:
    if (ctx->pc == 0x205484u) {
        ctx->pc = 0x205484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205480u;
        // 0x205484: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205488u;
        goto label_205488;
    }
    ctx->pc = 0x205480u;
    SET_GPR_U32(ctx, 31, 0x205488u);
    ctx->pc = 0x205484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205480u;
    // 0x205484: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205480u, 0x205488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205488u;
label_205488:
    // 0x205488: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20548c:
    // 0x20548c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x20548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_205490:
    // 0x205490: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_205494:
    // 0x205494: 0x24501ee0  addiu       $s0, $v0, 0x1EE0
    ctx->pc = 0x205494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
label_205498:
    // 0x205498: 0xc05e234  jal         func_1788D0
label_20549c:
    if (ctx->pc == 0x20549Cu) {
        ctx->pc = 0x20549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205498u;
        // 0x20549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054A0u;
        goto label_2054a0;
    }
    ctx->pc = 0x205498u;
    SET_GPR_U32(ctx, 31, 0x2054A0u);
    ctx->pc = 0x20549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205498u;
    // 0x20549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x205498u, 0x2054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054A0u;
label_2054a0:
    // 0x2054a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2054a4:
    // 0x2054a4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2054a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2054a8:
    // 0x2054a8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2054ac:
    // 0x2054ac: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2054acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2054b0:
    // 0x2054b0: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x2054b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2054b4:
    // 0x2054b4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x2054b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2054b8:
    // 0x2054b8: 0xc07c084  jal         func_1F0210
label_2054bc:
    if (ctx->pc == 0x2054BCu) {
        ctx->pc = 0x2054BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B8u;
        // 0x2054bc: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054C0u;
        goto label_2054c0;
    }
    ctx->pc = 0x2054B8u;
    SET_GPR_U32(ctx, 31, 0x2054C0u);
    ctx->pc = 0x2054BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054B8u;
    // 0x2054bc: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x2054C0u;
label_2054c0:
    // 0x2054c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2054c4:
    // 0x2054c4: 0x26730150  addiu       $s3, $s3, 0x150
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_2054c8:
    // 0x2054c8: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x2054c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_2054cc:
    // 0x2054cc: 0x26b50790  addiu       $s5, $s5, 0x790
    ctx->pc = 0x2054ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_2054d0:
    // 0x2054d0: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
label_2054d4:
    if (ctx->pc == 0x2054D4u) {
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x269402d0  addiu       $s4, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054D8u;
        goto label_2054d8;
    }
    ctx->pc = 0x2054D0u;
    {
        const bool branch_taken_0x2054d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x269402d0  addiu       $s4, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054d0) {
            ctx->pc = 0x2051F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2051f8;
        }
    }
    ctx->pc = 0x2054D8u;
label_2054d8:
    // 0x2054d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2054d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2054dc:
    // 0x2054dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2054dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2054e0:
    // 0x2054e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2054e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2054e4:
    // 0x2054e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2054e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2054e8:
    // 0x2054e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2054e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2054ec:
    // 0x2054ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2054ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2054f0:
    // 0x2054f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2054f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2054f4:
    // 0x2054f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2054f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2054f8:
    // 0x2054f8: 0x3e00008  jr          $ra
label_2054fc:
    if (ctx->pc == 0x2054FCu) {
        ctx->pc = 0x2054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F8u;
        // 0x2054fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205500u;
        goto label_205500;
    }
    ctx->pc = 0x2054F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F8u;
        // 0x2054fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205500u;
label_205500:
    // 0x205500: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205504:
    // 0x205504: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_205508:
    if (ctx->pc == 0x205508u) {
        ctx->pc = 0x20550Cu;
        goto label_20550c;
    }
    ctx->pc = 0x205504u;
    {
        const bool branch_taken_0x205504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205504) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x20550Cu;
label_20550c:
    // 0x20550c: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_205510:
    // 0x205510: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_205514:
    if (ctx->pc == 0x205514u) {
        ctx->pc = 0x205518u;
        goto label_205518;
    }
    ctx->pc = 0x205510u;
    {
        const bool branch_taken_0x205510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205510) {
            ctx->pc = 0x20553Cu;
            goto label_20553c;
        }
    }
    ctx->pc = 0x205518u;
label_205518:
    // 0x205518: 0x8c83248c  lw          $v1, 0x248C($a0)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9356)));
label_20551c:
    // 0x20551c: 0x2485248c  addiu       $a1, $a0, 0x248C
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9356));
label_205520:
    // 0x205520: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_205524:
    // 0x205524: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_205528:
    if (ctx->pc == 0x205528u) {
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20552Cu;
        goto label_20552c;
    }
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x205538u;
            goto label_205538;
        }
    }
    ctx->pc = 0x20552Cu;
label_20552c:
    // 0x20552c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_205530:
    if (ctx->pc == 0x205530u) {
        ctx->pc = 0x205534u;
        goto label_205534;
    }
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20552c) {
            ctx->pc = 0x205538u;
            goto label_205538;
        }
    }
    ctx->pc = 0x205534u;
label_205534:
    // 0x205534: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x205534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_205538:
    // 0x205538: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x205538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20553c:
    // 0x20553c: 0x8f8590f8  lw          $a1, -0x6F08($gp)
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205540:
    // 0x205540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205544:
    // 0x205544: 0x8ca42480  lw          $a0, 0x2480($a1)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
label_205548:
    // 0x205548: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_20554c:
    if (ctx->pc == 0x20554Cu) {
        ctx->pc = 0x20554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205548u;
        // 0x20554c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205550u;
        goto label_205550;
    }
    ctx->pc = 0x205548u;
    {
        const bool branch_taken_0x205548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205548u;
        // 0x20554c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205548) {
            ctx->pc = 0x2055A0u;
            goto label_2055a0;
        }
    }
    ctx->pc = 0x205550u;
label_205550:
    // 0x205550: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
label_205554:
    // 0x205554: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_205558:
    // 0x205558: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x205558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_20555c:
    // 0x20555c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_205560:
    if (ctx->pc == 0x205560u) {
        ctx->pc = 0x205560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20555Cu;
        // 0x205560: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205564u;
        goto label_205564;
    }
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20555Cu;
        // 0x205560: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20555c) {
            ctx->pc = 0x205578u;
            goto label_205578;
        }
    }
    ctx->pc = 0x205564u;
label_205564:
    // 0x205564: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205568:
    // 0x205568: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_20556c:
    // 0x20556c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_205570:
    // 0x205570: 0x10000002  b           . + 4 + (0x2 << 2)
label_205574:
    if (ctx->pc == 0x205574u) {
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205578u;
        goto label_205578;
    }
    ctx->pc = 0x205570u;
    {
        const bool branch_taken_0x205570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205570) {
            ctx->pc = 0x20557Cu;
            goto label_20557c;
        }
    }
    ctx->pc = 0x205578u;
label_205578:
    // 0x205578: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20557c:
    // 0x20557c: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205580:
    // 0x205580: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x205580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
label_205584:
    // 0x205584: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205588:
    // 0x205588: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_20558c:
    // 0x20558c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20558cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_205590:
    // 0x205590: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_205594:
    if (ctx->pc == 0x205594u) {
        ctx->pc = 0x205598u;
        goto label_205598;
    }
    ctx->pc = 0x205590u;
    {
        const bool branch_taken_0x205590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205590) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x205598u;
label_205598:
    // 0x205598: 0x10000015  b           . + 4 + (0x15 << 2)
label_20559c:
    if (ctx->pc == 0x20559Cu) {
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0xac802480  sw          $zero, 0x2480($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055A0u;
        goto label_2055a0;
    }
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0xac802480  sw          $zero, 0x2480($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205598) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_2055a4:
    if (ctx->pc == 0x2055A4u) {
        ctx->pc = 0x2055A8u;
        goto label_2055a8;
    }
    ctx->pc = 0x2055A0u;
    {
        const bool branch_taken_0x2055a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2055a0) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x2055A8u;
label_2055a8:
    // 0x2055a8: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
label_2055ac:
    // 0x2055ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2055b0:
    // 0x2055b0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2055b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2055b4:
    // 0x2055b4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2055b8:
    if (ctx->pc == 0x2055B8u) {
        ctx->pc = 0x2055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B4u;
        // 0x2055b8: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055BCu;
        goto label_2055bc;
    }
    ctx->pc = 0x2055B4u;
    {
        const bool branch_taken_0x2055b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B4u;
        // 0x2055b8: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055b4) {
            ctx->pc = 0x2055D0u;
            goto label_2055d0;
        }
    }
    ctx->pc = 0x2055BCu;
label_2055bc:
    // 0x2055bc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2055c0:
    // 0x2055c0: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_2055c4:
    // 0x2055c4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2055c8:
    // 0x2055c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2055cc:
    if (ctx->pc == 0x2055CCu) {
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055D0u;
        goto label_2055d0;
    }
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x2055D4u;
            goto label_2055d4;
        }
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2055d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2055d4:
    // 0x2055d4: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2055d8:
    // 0x2055d8: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x2055d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
label_2055dc:
    // 0x2055dc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2055e0:
    // 0x2055e0: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_2055e4:
    // 0x2055e4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_2055e8:
    if (ctx->pc == 0x2055E8u) {
        ctx->pc = 0x2055ECu;
        goto label_2055ec;
    }
    ctx->pc = 0x2055E4u;
    {
        const bool branch_taken_0x2055e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2055e4) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x2055ECu;
label_2055ec:
    // 0x2055ec: 0xac802480  sw          $zero, 0x2480($a0)
    ctx->pc = 0x2055ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
label_2055f0:
    // 0x2055f0: 0x3e00008  jr          $ra
label_2055f4:
    if (ctx->pc == 0x2055F4u) {
        ctx->pc = 0x2055F8u;
        goto label_2055f8;
    }
    ctx->pc = 0x2055F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2055F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2055F8u;
label_2055f8:
    // 0x2055f8: 0x0  nop
    ctx->pc = 0x2055f8u;
    // NOP
label_2055fc:
    // 0x2055fc: 0x0  nop
    ctx->pc = 0x2055fcu;
    // NOP
label_205600:
    // 0x205600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x205600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_205604:
    // 0x205604: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x205604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_205608:
    // 0x205608: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x205608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_20560c:
    // 0x20560c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_205610:
    // 0x205610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x205610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_205614:
    // 0x205614: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_205618:
    // 0x205618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20561c:
    // 0x20561c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_205620:
    // 0x205620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_205624:
    // 0x205624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_205628:
    // 0x205628: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x205628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20562c:
    // 0x20562c: 0x106001a5  beqz        $v1, . + 4 + (0x1A5 << 2)
label_205630:
    if (ctx->pc == 0x205630u) {
        ctx->pc = 0x205634u;
        goto label_205634;
    }
    ctx->pc = 0x20562Cu;
    {
        const bool branch_taken_0x20562c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20562c) {
            ctx->pc = 0x205CC4u;
            { ctx->pc = 0x205cc4; return; }
        }
    }
    ctx->pc = 0x205634u;
label_205634:
    // 0x205634: 0x8c632484  lw          $v1, 0x2484($v1)
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9348)));
label_205638:
    // 0x205638: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
label_20563c:
    if (ctx->pc == 0x20563Cu) {
        ctx->pc = 0x205640u;
        goto label_205640;
    }
    ctx->pc = 0x205638u;
    {
        const bool branch_taken_0x205638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205638) {
            ctx->pc = 0x205CC4u;
            { ctx->pc = 0x205cc4; return; }
        }
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_205644:
    // 0x205644: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_205648:
    // 0x205648: 0x34443ffc  ori         $a0, $v0, 0x3FFC
    ctx->pc = 0x205648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20564c:
    // 0x20564c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x20564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_205650:
    // 0x205650: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x205650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205654:
    // 0x205654: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x205654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_205658:
    // 0x205658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20565c:
    // 0x20565c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20565cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205660:
    // 0x205660: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205664:
    // 0x205664: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x205664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205668:
    // 0x205668: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x205668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_20566c:
    // 0x20566c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_205670:
    // 0x205670: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_205674:
    // 0x205674: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x205674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_205678:
    // 0x205678: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x205678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20567c:
    // 0x20567c: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x20567cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_205680:
    // 0x205680: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x205680u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_205684:
    // 0x205684: 0x1010  mfhi        $v0
    ctx->pc = 0x205684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_205688:
    // 0x205688: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x205688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20568c:
    // 0x20568c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205690:
    // 0x205690: 0x2457ff10  addiu       $s7, $v0, -0xF0
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
label_205694:
    // 0x205694: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205698:
    // 0x205698: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x205698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20569c:
    // 0x20569c: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2056a0:
    // 0x2056a0: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2056a4:
    // 0x2056a4: 0x8c422490  lw          $v0, 0x2490($v0)
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9360)));
label_2056a8:
    // 0x2056a8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2056ac:
    // 0x2056ac: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2056b0:
    // 0x2056b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2056b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2056b4:
    // 0x2056b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2056b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2056b8:
    // 0x2056b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2056bc:
    // 0x2056bc: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_2056c0:
    if (ctx->pc == 0x2056C0u) {
        ctx->pc = 0x2056C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056BCu;
        // 0x2056c0: 0xa3a821  addu        $s5, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056C4u;
        goto label_2056c4;
    }
    ctx->pc = 0x2056BCu;
    {
        const bool branch_taken_0x2056bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2056C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056BCu;
        // 0x2056c0: 0xa3a821  addu        $s5, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056bc) {
            ctx->pc = 0x2056CCu;
            goto label_2056cc;
        }
    }
    ctx->pc = 0x2056C4u;
label_2056c4:
    // 0x2056c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2056c8:
    if (ctx->pc == 0x2056C8u) {
        ctx->pc = 0x2056C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056C4u;
        // 0x2056c8: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056CCu;
        goto label_2056cc;
    }
    ctx->pc = 0x2056C4u;
    {
        const bool branch_taken_0x2056c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056C4u;
        // 0x2056c8: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056c4) {
            ctx->pc = 0x2056D0u;
            goto label_2056d0;
        }
    }
    ctx->pc = 0x2056CCu;
label_2056cc:
    // 0x2056cc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2056ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2056d0:
    // 0x2056d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2056d4:
    // 0x2056d4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_2056d8:
    // 0x2056d8: 0x284001a  div         $zero, $s4, $a0
    ctx->pc = 0x2056d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2056dc:
    // 0x2056dc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x2056dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_2056e0:
    // 0x2056e0: 0x1437c2  srl         $a2, $s4, 31
    ctx->pc = 0x2056e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_2056e4:
    // 0x2056e4: 0x2810  mfhi        $a1
    ctx->pc = 0x2056e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2056e8:
    // 0x2056e8: 0x2a840003  slti        $a0, $s4, 0x3
    ctx->pc = 0x2056e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_2056ec:
    // 0x2056ec: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x2056ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2056f0:
    // 0x2056f0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2056f4:
    // 0x2056f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2056f8:
    // 0x2056f8: 0x2810  mfhi        $a1
    ctx->pc = 0x2056f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2056fc:
    // 0x2056fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_205700:
    // 0x205700: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x205700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_205704:
    // 0x205704: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x205704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205708:
    // 0x205708: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20570c:
    // 0x20570c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20570cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205710:
    // 0x205710: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_205714:
    // 0x205714: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_205718:
    // 0x205718: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_20571c:
    if (ctx->pc == 0x20571Cu) {
        ctx->pc = 0x20571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205718u;
        // 0x20571c: 0x24b200f0  addiu       $s2, $a1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205720u;
        goto label_205720;
    }
    ctx->pc = 0x205718u;
    {
        const bool branch_taken_0x205718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205718u;
        // 0x20571c: 0x24b200f0  addiu       $s2, $a1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205718) {
            ctx->pc = 0x205724u;
            goto label_205724;
        }
    }
    ctx->pc = 0x205720u;
label_205720:
    // 0x205720: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x205720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
label_205724:
    // 0x205724: 0x0  nop
    ctx->pc = 0x205724u;
    // NOP
label_205728:
    // 0x205728: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20572c:
    // 0x20572c: 0x24856c00  addiu       $a1, $a0, 0x6C00
    ctx->pc = 0x20572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_205730:
    // 0x205730: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x205730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205734:
    // 0x205734: 0xa6a50090  sh          $a1, 0x90($s5)
    ctx->pc = 0x205734u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 5));
label_205738:
    // 0x205738: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x205738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_20573c:
    // 0x20573c: 0x24450078  addiu       $a1, $v0, 0x78
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_205740:
    // 0x205740: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x205740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_205744:
    // 0x205744: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x205744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_205748:
    // 0x205748: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x205748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
label_20574c:
    // 0x20574c: 0x24a86c00  addiu       $t0, $a1, 0x6C00
    ctx->pc = 0x20574cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_205750:
    // 0x205750: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205754:
    // 0x205754: 0xa6a40092  sh          $a0, 0x92($s5)
    ctx->pc = 0x205754u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 4));
label_205758:
    // 0x205758: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x205758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20575c:
    // 0x20575c: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x20575cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205760:
    // 0x205760: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x205760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_205764:
    // 0x205764: 0xaea40094  sw          $a0, 0x94($s5)
    ctx->pc = 0x205764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 4));
label_205768:
    // 0x205768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20576c:
    // 0x20576c: 0x24497900  addiu       $t1, $v0, 0x7900
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_205770:
    // 0x205770: 0xa6a800a0  sh          $t0, 0xA0($s5)
    ctx->pc = 0x205770u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 160), (uint16_t)GPR_U32(ctx, 8));
label_205774:
    // 0x205774: 0xa6a900a2  sh          $t1, 0xA2($s5)
    ctx->pc = 0x205774u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 162), (uint16_t)GPR_U32(ctx, 9));
label_205778:
    // 0x205778: 0x26420046  addiu       $v0, $s2, 0x46
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 70));
label_20577c:
    // 0x20577c: 0xaea400a4  sw          $a0, 0xA4($s5)
    ctx->pc = 0x20577cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 4));
label_205780:
    // 0x205780: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_205784:
    // 0x205784: 0xa2a30080  sb          $v1, 0x80($s5)
    ctx->pc = 0x205784u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 3));
label_205788:
    // 0x205788: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_20578c:
    // 0x20578c: 0xa2a30081  sb          $v1, 0x81($s5)
    ctx->pc = 0x20578cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 3));
label_205790:
    // 0x205790: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_205794:
    // 0x205794: 0xa2a30082  sb          $v1, 0x82($s5)
    ctx->pc = 0x205794u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 3));
label_205798:
    // 0x205798: 0xa2a70083  sb          $a3, 0x83($s5)
    ctx->pc = 0x205798u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 7));
label_20579c:
    // 0x20579c: 0xaea60084  sw          $a2, 0x84($s5)
    ctx->pc = 0x20579cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 6));
label_2057a0:
    // 0x2057a0: 0xa6a50130  sh          $a1, 0x130($s5)
    ctx->pc = 0x2057a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 304), (uint16_t)GPR_U32(ctx, 5));
label_2057a4:
    // 0x2057a4: 0xa6a20132  sh          $v0, 0x132($s5)
    ctx->pc = 0x2057a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 306), (uint16_t)GPR_U32(ctx, 2));
label_2057a8:
    // 0x2057a8: 0xaea40134  sw          $a0, 0x134($s5)
    ctx->pc = 0x2057a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 308), GPR_U32(ctx, 4));
label_2057ac:
    // 0x2057ac: 0xa6a80140  sh          $t0, 0x140($s5)
    ctx->pc = 0x2057acu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 8));
label_2057b0:
    // 0x2057b0: 0xa6a90142  sh          $t1, 0x142($s5)
    ctx->pc = 0x2057b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 322), (uint16_t)GPR_U32(ctx, 9));
label_2057b4:
    // 0x2057b4: 0xaea40144  sw          $a0, 0x144($s5)
    ctx->pc = 0x2057b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 4));
label_2057b8:
    // 0x2057b8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2057b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2057bc:
    // 0x2057bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2057c0:
    // 0x2057c0: 0x8c442498  lw          $a0, 0x2498($v0)
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_2057c4:
    // 0x2057c4: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x2057c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_2057c8:
    // 0x2057c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2057cc:
    if (ctx->pc == 0x2057CCu) {
        ctx->pc = 0x2057D0u;
        goto label_2057d0;
    }
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x2057DCu;
            goto label_2057dc;
        }
    }
    ctx->pc = 0x2057D0u;
label_2057d0:
    // 0x2057d0: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2057d4:
    // 0x2057d4: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057DCu;
        goto label_2057dc;
    }
    ctx->pc = 0x2057D4u;
    {
        const bool branch_taken_0x2057d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2057d4) {
            ctx->pc = 0x2057FCu;
            goto label_2057fc;
        }
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0x0  nop
    ctx->pc = 0x2057dcu;
    // NOP
label_2057e0:
    // 0x2057e0: 0xa2a30120  sb          $v1, 0x120($s5)
    ctx->pc = 0x2057e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 3));
label_2057e4:
    // 0x2057e4: 0xa2a30121  sb          $v1, 0x121($s5)
    ctx->pc = 0x2057e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 3));
label_2057e8:
    // 0x2057e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2057ec:
    // 0x2057ec: 0xa2a30122  sb          $v1, 0x122($s5)
    ctx->pc = 0x2057ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 3));
label_2057f0:
    // 0x2057f0: 0xa2a00123  sb          $zero, 0x123($s5)
    ctx->pc = 0x2057f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 0));
label_2057f4:
    // 0x2057f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2057f8:
    if (ctx->pc == 0x2057F8u) {
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0xaea20124  sw          $v0, 0x124($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057FCu;
        goto label_2057fc;
    }
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0xaea20124  sw          $v0, 0x124($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205814u;
            goto label_205814;
        }
    }
    ctx->pc = 0x2057FCu;
label_2057fc:
    // 0x2057fc: 0x0  nop
    ctx->pc = 0x2057fcu;
    // NOP
label_205800:
    // 0x205800: 0xa2a30120  sb          $v1, 0x120($s5)
    ctx->pc = 0x205800u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 3));
label_205804:
    // 0x205804: 0xa2a30121  sb          $v1, 0x121($s5)
    ctx->pc = 0x205804u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 3));
label_205808:
    // 0x205808: 0xa2a30122  sb          $v1, 0x122($s5)
    ctx->pc = 0x205808u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 3));
label_20580c:
    // 0x20580c: 0xa2a70123  sb          $a3, 0x123($s5)
    ctx->pc = 0x20580cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 7));
label_205810:
    // 0x205810: 0xaea60124  sw          $a2, 0x124($s5)
    ctx->pc = 0x205810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 6));
label_205814:
    // 0x205814: 0x0  nop
    ctx->pc = 0x205814u;
    // NOP
label_205818:
    // 0x205818: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20581c:
    // 0x20581c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x205820u;
    return;
}

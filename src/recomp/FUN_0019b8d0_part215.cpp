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


void FUN_0019b8d0_part215(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2040b0u: goto label_2040b0;
        case 0x2040b4u: goto label_2040b4;
        case 0x2040b8u: goto label_2040b8;
        case 0x2040bcu: goto label_2040bc;
        case 0x2040c0u: goto label_2040c0;
        case 0x2040c4u: goto label_2040c4;
        case 0x2040c8u: goto label_2040c8;
        case 0x2040ccu: goto label_2040cc;
        case 0x2040d0u: goto label_2040d0;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040d8u: goto label_2040d8;
        case 0x2040dcu: goto label_2040dc;
        case 0x2040e0u: goto label_2040e0;
        case 0x2040e4u: goto label_2040e4;
        case 0x2040e8u: goto label_2040e8;
        case 0x2040ecu: goto label_2040ec;
        case 0x2040f0u: goto label_2040f0;
        case 0x2040f4u: goto label_2040f4;
        case 0x2040f8u: goto label_2040f8;
        case 0x2040fcu: goto label_2040fc;
        case 0x204100u: goto label_204100;
        case 0x204104u: goto label_204104;
        case 0x204108u: goto label_204108;
        case 0x20410cu: goto label_20410c;
        case 0x204110u: goto label_204110;
        case 0x204114u: goto label_204114;
        case 0x204118u: goto label_204118;
        case 0x20411cu: goto label_20411c;
        case 0x204120u: goto label_204120;
        case 0x204124u: goto label_204124;
        case 0x204128u: goto label_204128;
        case 0x20412cu: goto label_20412c;
        case 0x204130u: goto label_204130;
        case 0x204134u: goto label_204134;
        case 0x204138u: goto label_204138;
        case 0x20413cu: goto label_20413c;
        case 0x204140u: goto label_204140;
        case 0x204144u: goto label_204144;
        case 0x204148u: goto label_204148;
        case 0x20414cu: goto label_20414c;
        case 0x204150u: goto label_204150;
        case 0x204154u: goto label_204154;
        case 0x204158u: goto label_204158;
        case 0x20415cu: goto label_20415c;
        case 0x204160u: goto label_204160;
        case 0x204164u: goto label_204164;
        case 0x204168u: goto label_204168;
        case 0x20416cu: goto label_20416c;
        case 0x204170u: goto label_204170;
        case 0x204174u: goto label_204174;
        case 0x204178u: goto label_204178;
        case 0x20417cu: goto label_20417c;
        case 0x204180u: goto label_204180;
        case 0x204184u: goto label_204184;
        case 0x204188u: goto label_204188;
        case 0x20418cu: goto label_20418c;
        case 0x204190u: goto label_204190;
        case 0x204194u: goto label_204194;
        case 0x204198u: goto label_204198;
        case 0x20419cu: goto label_20419c;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041a4u: goto label_2041a4;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041acu: goto label_2041ac;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041b8u: goto label_2041b8;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041c0u: goto label_2041c0;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041c8u: goto label_2041c8;
        case 0x2041ccu: goto label_2041cc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041d4u: goto label_2041d4;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041dcu: goto label_2041dc;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041e4u: goto label_2041e4;
        case 0x2041e8u: goto label_2041e8;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f0u: goto label_2041f0;
        case 0x2041f4u: goto label_2041f4;
        case 0x2041f8u: goto label_2041f8;
        case 0x2041fcu: goto label_2041fc;
        case 0x204200u: goto label_204200;
        case 0x204204u: goto label_204204;
        case 0x204208u: goto label_204208;
        case 0x20420cu: goto label_20420c;
        case 0x204210u: goto label_204210;
        case 0x204214u: goto label_204214;
        case 0x204218u: goto label_204218;
        case 0x20421cu: goto label_20421c;
        case 0x204220u: goto label_204220;
        case 0x204224u: goto label_204224;
        case 0x204228u: goto label_204228;
        case 0x20422cu: goto label_20422c;
        case 0x204230u: goto label_204230;
        case 0x204234u: goto label_204234;
        case 0x204238u: goto label_204238;
        case 0x20423cu: goto label_20423c;
        case 0x204240u: goto label_204240;
        case 0x204244u: goto label_204244;
        case 0x204248u: goto label_204248;
        case 0x20424cu: goto label_20424c;
        case 0x204250u: goto label_204250;
        case 0x204254u: goto label_204254;
        case 0x204258u: goto label_204258;
        case 0x20425cu: goto label_20425c;
        case 0x204260u: goto label_204260;
        case 0x204264u: goto label_204264;
        case 0x204268u: goto label_204268;
        case 0x20426cu: goto label_20426c;
        case 0x204270u: goto label_204270;
        case 0x204274u: goto label_204274;
        case 0x204278u: goto label_204278;
        case 0x20427cu: goto label_20427c;
        case 0x204280u: goto label_204280;
        case 0x204284u: goto label_204284;
        case 0x204288u: goto label_204288;
        case 0x20428cu: goto label_20428c;
        case 0x204290u: goto label_204290;
        case 0x204294u: goto label_204294;
        case 0x204298u: goto label_204298;
        case 0x20429cu: goto label_20429c;
        case 0x2042a0u: goto label_2042a0;
        case 0x2042a4u: goto label_2042a4;
        case 0x2042a8u: goto label_2042a8;
        case 0x2042acu: goto label_2042ac;
        case 0x2042b0u: goto label_2042b0;
        case 0x2042b4u: goto label_2042b4;
        case 0x2042b8u: goto label_2042b8;
        case 0x2042bcu: goto label_2042bc;
        case 0x2042c0u: goto label_2042c0;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042c8u: goto label_2042c8;
        case 0x2042ccu: goto label_2042cc;
        case 0x2042d0u: goto label_2042d0;
        case 0x2042d4u: goto label_2042d4;
        case 0x2042d8u: goto label_2042d8;
        case 0x2042dcu: goto label_2042dc;
        case 0x2042e0u: goto label_2042e0;
        case 0x2042e4u: goto label_2042e4;
        case 0x2042e8u: goto label_2042e8;
        case 0x2042ecu: goto label_2042ec;
        case 0x2042f0u: goto label_2042f0;
        case 0x2042f4u: goto label_2042f4;
        case 0x2042f8u: goto label_2042f8;
        case 0x2042fcu: goto label_2042fc;
        case 0x204300u: goto label_204300;
        case 0x204304u: goto label_204304;
        case 0x204308u: goto label_204308;
        case 0x20430cu: goto label_20430c;
        case 0x204310u: goto label_204310;
        case 0x204314u: goto label_204314;
        case 0x204318u: goto label_204318;
        case 0x20431cu: goto label_20431c;
        case 0x204320u: goto label_204320;
        case 0x204324u: goto label_204324;
        case 0x204328u: goto label_204328;
        case 0x20432cu: goto label_20432c;
        case 0x204330u: goto label_204330;
        case 0x204334u: goto label_204334;
        case 0x204338u: goto label_204338;
        case 0x20433cu: goto label_20433c;
        case 0x204340u: goto label_204340;
        case 0x204344u: goto label_204344;
        case 0x204348u: goto label_204348;
        case 0x20434cu: goto label_20434c;
        case 0x204350u: goto label_204350;
        case 0x204354u: goto label_204354;
        case 0x204358u: goto label_204358;
        case 0x20435cu: goto label_20435c;
        case 0x204360u: goto label_204360;
        case 0x204364u: goto label_204364;
        case 0x204368u: goto label_204368;
        case 0x20436cu: goto label_20436c;
        case 0x204370u: goto label_204370;
        case 0x204374u: goto label_204374;
        case 0x204378u: goto label_204378;
        case 0x20437cu: goto label_20437c;
        case 0x204380u: goto label_204380;
        case 0x204384u: goto label_204384;
        case 0x204388u: goto label_204388;
        case 0x20438cu: goto label_20438c;
        case 0x204390u: goto label_204390;
        case 0x204394u: goto label_204394;
        case 0x204398u: goto label_204398;
        case 0x20439cu: goto label_20439c;
        case 0x2043a0u: goto label_2043a0;
        case 0x2043a4u: goto label_2043a4;
        case 0x2043a8u: goto label_2043a8;
        case 0x2043acu: goto label_2043ac;
        case 0x2043b0u: goto label_2043b0;
        case 0x2043b4u: goto label_2043b4;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043bcu: goto label_2043bc;
        case 0x2043c0u: goto label_2043c0;
        case 0x2043c4u: goto label_2043c4;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043ccu: goto label_2043cc;
        case 0x2043d0u: goto label_2043d0;
        case 0x2043d4u: goto label_2043d4;
        case 0x2043d8u: goto label_2043d8;
        case 0x2043dcu: goto label_2043dc;
        case 0x2043e0u: goto label_2043e0;
        case 0x2043e4u: goto label_2043e4;
        case 0x2043e8u: goto label_2043e8;
        case 0x2043ecu: goto label_2043ec;
        case 0x2043f0u: goto label_2043f0;
        case 0x2043f4u: goto label_2043f4;
        case 0x2043f8u: goto label_2043f8;
        case 0x2043fcu: goto label_2043fc;
        case 0x204400u: goto label_204400;
        case 0x204404u: goto label_204404;
        case 0x204408u: goto label_204408;
        case 0x20440cu: goto label_20440c;
        case 0x204410u: goto label_204410;
        case 0x204414u: goto label_204414;
        case 0x204418u: goto label_204418;
        case 0x20441cu: goto label_20441c;
        case 0x204420u: goto label_204420;
        case 0x204424u: goto label_204424;
        case 0x204428u: goto label_204428;
        case 0x20442cu: goto label_20442c;
        case 0x204430u: goto label_204430;
        case 0x204434u: goto label_204434;
        case 0x204438u: goto label_204438;
        case 0x20443cu: goto label_20443c;
        case 0x204440u: goto label_204440;
        case 0x204444u: goto label_204444;
        case 0x204448u: goto label_204448;
        case 0x20444cu: goto label_20444c;
        case 0x204450u: goto label_204450;
        case 0x204454u: goto label_204454;
        case 0x204458u: goto label_204458;
        case 0x20445cu: goto label_20445c;
        case 0x204460u: goto label_204460;
        case 0x204464u: goto label_204464;
        case 0x204468u: goto label_204468;
        case 0x20446cu: goto label_20446c;
        case 0x204470u: goto label_204470;
        case 0x204474u: goto label_204474;
        case 0x204478u: goto label_204478;
        case 0x20447cu: goto label_20447c;
        case 0x204480u: goto label_204480;
        case 0x204484u: goto label_204484;
        case 0x204488u: goto label_204488;
        case 0x20448cu: goto label_20448c;
        case 0x204490u: goto label_204490;
        case 0x204494u: goto label_204494;
        case 0x204498u: goto label_204498;
        case 0x20449cu: goto label_20449c;
        case 0x2044a0u: goto label_2044a0;
        case 0x2044a4u: goto label_2044a4;
        case 0x2044a8u: goto label_2044a8;
        case 0x2044acu: goto label_2044ac;
        case 0x2044b0u: goto label_2044b0;
        case 0x2044b4u: goto label_2044b4;
        case 0x2044b8u: goto label_2044b8;
        case 0x2044bcu: goto label_2044bc;
        case 0x2044c0u: goto label_2044c0;
        case 0x2044c4u: goto label_2044c4;
        case 0x2044c8u: goto label_2044c8;
        case 0x2044ccu: goto label_2044cc;
        case 0x2044d0u: goto label_2044d0;
        case 0x2044d4u: goto label_2044d4;
        case 0x2044d8u: goto label_2044d8;
        case 0x2044dcu: goto label_2044dc;
        case 0x2044e0u: goto label_2044e0;
        case 0x2044e4u: goto label_2044e4;
        case 0x2044e8u: goto label_2044e8;
        case 0x2044ecu: goto label_2044ec;
        case 0x2044f0u: goto label_2044f0;
        case 0x2044f4u: goto label_2044f4;
        case 0x2044f8u: goto label_2044f8;
        case 0x2044fcu: goto label_2044fc;
        case 0x204500u: goto label_204500;
        case 0x204504u: goto label_204504;
        case 0x204508u: goto label_204508;
        case 0x20450cu: goto label_20450c;
        case 0x204510u: goto label_204510;
        case 0x204514u: goto label_204514;
        case 0x204518u: goto label_204518;
        case 0x20451cu: goto label_20451c;
        case 0x204520u: goto label_204520;
        case 0x204524u: goto label_204524;
        case 0x204528u: goto label_204528;
        case 0x20452cu: goto label_20452c;
        case 0x204530u: goto label_204530;
        case 0x204534u: goto label_204534;
        case 0x204538u: goto label_204538;
        case 0x20453cu: goto label_20453c;
        case 0x204540u: goto label_204540;
        case 0x204544u: goto label_204544;
        case 0x204548u: goto label_204548;
        case 0x20454cu: goto label_20454c;
        case 0x204550u: goto label_204550;
        case 0x204554u: goto label_204554;
        case 0x204558u: goto label_204558;
        case 0x20455cu: goto label_20455c;
        case 0x204560u: goto label_204560;
        case 0x204564u: goto label_204564;
        case 0x204568u: goto label_204568;
        case 0x20456cu: goto label_20456c;
        case 0x204570u: goto label_204570;
        case 0x204574u: goto label_204574;
        case 0x204578u: goto label_204578;
        case 0x20457cu: goto label_20457c;
        case 0x204580u: goto label_204580;
        case 0x204584u: goto label_204584;
        case 0x204588u: goto label_204588;
        case 0x20458cu: goto label_20458c;
        case 0x204590u: goto label_204590;
        case 0x204594u: goto label_204594;
        case 0x204598u: goto label_204598;
        case 0x20459cu: goto label_20459c;
        case 0x2045a0u: goto label_2045a0;
        case 0x2045a4u: goto label_2045a4;
        case 0x2045a8u: goto label_2045a8;
        case 0x2045acu: goto label_2045ac;
        case 0x2045b0u: goto label_2045b0;
        case 0x2045b4u: goto label_2045b4;
        case 0x2045b8u: goto label_2045b8;
        case 0x2045bcu: goto label_2045bc;
        case 0x2045c0u: goto label_2045c0;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045c8u: goto label_2045c8;
        case 0x2045ccu: goto label_2045cc;
        case 0x2045d0u: goto label_2045d0;
        case 0x2045d4u: goto label_2045d4;
        case 0x2045d8u: goto label_2045d8;
        case 0x2045dcu: goto label_2045dc;
        case 0x2045e0u: goto label_2045e0;
        case 0x2045e4u: goto label_2045e4;
        case 0x2045e8u: goto label_2045e8;
        case 0x2045ecu: goto label_2045ec;
        case 0x2045f0u: goto label_2045f0;
        case 0x2045f4u: goto label_2045f4;
        case 0x2045f8u: goto label_2045f8;
        case 0x2045fcu: goto label_2045fc;
        case 0x204600u: goto label_204600;
        case 0x204604u: goto label_204604;
        case 0x204608u: goto label_204608;
        case 0x20460cu: goto label_20460c;
        case 0x204610u: goto label_204610;
        case 0x204614u: goto label_204614;
        case 0x204618u: goto label_204618;
        case 0x20461cu: goto label_20461c;
        case 0x204620u: goto label_204620;
        case 0x204624u: goto label_204624;
        case 0x204628u: goto label_204628;
        case 0x20462cu: goto label_20462c;
        case 0x204630u: goto label_204630;
        case 0x204634u: goto label_204634;
        case 0x204638u: goto label_204638;
        case 0x20463cu: goto label_20463c;
        case 0x204640u: goto label_204640;
        case 0x204644u: goto label_204644;
        case 0x204648u: goto label_204648;
        case 0x20464cu: goto label_20464c;
        case 0x204650u: goto label_204650;
        case 0x204654u: goto label_204654;
        case 0x204658u: goto label_204658;
        case 0x20465cu: goto label_20465c;
        case 0x204660u: goto label_204660;
        case 0x204664u: goto label_204664;
        case 0x204668u: goto label_204668;
        case 0x20466cu: goto label_20466c;
        case 0x204670u: goto label_204670;
        case 0x204674u: goto label_204674;
        case 0x204678u: goto label_204678;
        case 0x20467cu: goto label_20467c;
        case 0x204680u: goto label_204680;
        case 0x204684u: goto label_204684;
        case 0x204688u: goto label_204688;
        case 0x20468cu: goto label_20468c;
        case 0x204690u: goto label_204690;
        case 0x204694u: goto label_204694;
        case 0x204698u: goto label_204698;
        case 0x20469cu: goto label_20469c;
        case 0x2046a0u: goto label_2046a0;
        case 0x2046a4u: goto label_2046a4;
        case 0x2046a8u: goto label_2046a8;
        case 0x2046acu: goto label_2046ac;
        case 0x2046b0u: goto label_2046b0;
        case 0x2046b4u: goto label_2046b4;
        case 0x2046b8u: goto label_2046b8;
        case 0x2046bcu: goto label_2046bc;
        case 0x2046c0u: goto label_2046c0;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046c8u: goto label_2046c8;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d0u: goto label_2046d0;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046dcu: goto label_2046dc;
        case 0x2046e0u: goto label_2046e0;
        case 0x2046e4u: goto label_2046e4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046ecu: goto label_2046ec;
        case 0x2046f0u: goto label_2046f0;
        case 0x2046f4u: goto label_2046f4;
        case 0x2046f8u: goto label_2046f8;
        case 0x2046fcu: goto label_2046fc;
        case 0x204700u: goto label_204700;
        case 0x204704u: goto label_204704;
        case 0x204708u: goto label_204708;
        case 0x20470cu: goto label_20470c;
        case 0x204710u: goto label_204710;
        case 0x204714u: goto label_204714;
        case 0x204718u: goto label_204718;
        case 0x20471cu: goto label_20471c;
        case 0x204720u: goto label_204720;
        case 0x204724u: goto label_204724;
        case 0x204728u: goto label_204728;
        case 0x20472cu: goto label_20472c;
        case 0x204730u: goto label_204730;
        case 0x204734u: goto label_204734;
        case 0x204738u: goto label_204738;
        case 0x20473cu: goto label_20473c;
        case 0x204740u: goto label_204740;
        case 0x204744u: goto label_204744;
        case 0x204748u: goto label_204748;
        case 0x20474cu: goto label_20474c;
        case 0x204750u: goto label_204750;
        case 0x204754u: goto label_204754;
        case 0x204758u: goto label_204758;
        case 0x20475cu: goto label_20475c;
        case 0x204760u: goto label_204760;
        case 0x204764u: goto label_204764;
        case 0x204768u: goto label_204768;
        case 0x20476cu: goto label_20476c;
        case 0x204770u: goto label_204770;
        case 0x204774u: goto label_204774;
        case 0x204778u: goto label_204778;
        case 0x20477cu: goto label_20477c;
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        case 0x2047d0u: goto label_2047d0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047d8u: goto label_2047d8;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047e0u: goto label_2047e0;
        case 0x2047e4u: goto label_2047e4;
        case 0x2047e8u: goto label_2047e8;
        case 0x2047ecu: goto label_2047ec;
        case 0x2047f0u: goto label_2047f0;
        case 0x2047f4u: goto label_2047f4;
        case 0x2047f8u: goto label_2047f8;
        case 0x2047fcu: goto label_2047fc;
        case 0x204800u: goto label_204800;
        case 0x204804u: goto label_204804;
        case 0x204808u: goto label_204808;
        case 0x20480cu: goto label_20480c;
        case 0x204810u: goto label_204810;
        case 0x204814u: goto label_204814;
        case 0x204818u: goto label_204818;
        case 0x20481cu: goto label_20481c;
        case 0x204820u: goto label_204820;
        case 0x204824u: goto label_204824;
        case 0x204828u: goto label_204828;
        case 0x20482cu: goto label_20482c;
        case 0x204830u: goto label_204830;
        case 0x204834u: goto label_204834;
        case 0x204838u: goto label_204838;
        case 0x20483cu: goto label_20483c;
        case 0x204840u: goto label_204840;
        case 0x204844u: goto label_204844;
        case 0x204848u: goto label_204848;
        case 0x20484cu: goto label_20484c;
        case 0x204850u: goto label_204850;
        case 0x204854u: goto label_204854;
        case 0x204858u: goto label_204858;
        case 0x20485cu: goto label_20485c;
        case 0x204860u: goto label_204860;
        case 0x204864u: goto label_204864;
        case 0x204868u: goto label_204868;
        case 0x20486cu: goto label_20486c;
        case 0x204870u: goto label_204870;
        case 0x204874u: goto label_204874;
        case 0x204878u: goto label_204878;
        case 0x20487cu: goto label_20487c;
        default: return;
    }

label_2040b0:
    // 0x2040b0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2040b4:
    if (ctx->pc == 0x2040B4u) {
        ctx->pc = 0x2040B8u;
        goto label_2040b8;
    }
    ctx->pc = 0x2040B0u;
    {
        const bool branch_taken_0x2040b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040b0) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x2040B8u;
label_2040b8:
    // 0x2040b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2040b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2040bc:
    // 0x2040bc: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2040bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_2040c0:
    // 0x2040c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2040c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2040c4:
    // 0x2040c4: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2040c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
label_2040c8:
    // 0x2040c8: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
label_2040cc:
    // 0x2040cc: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x2040ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
label_2040d0:
    // 0x2040d0: 0xc08f20e  jal         func_23C838
label_2040d4:
    if (ctx->pc == 0x2040D4u) {
        ctx->pc = 0x2040D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040D0u;
        // 0x2040d4: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2040D8u;
        goto label_2040d8;
    }
    ctx->pc = 0x2040D0u;
    SET_GPR_U32(ctx, 31, 0x2040D8u);
    ctx->pc = 0x2040D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040D0u;
    // 0x2040d4: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x2040D8u;
label_2040d8:
    // 0x2040d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2040dc:
    if (ctx->pc == 0x2040DCu) {
        ctx->pc = 0x2040E0u;
        goto label_2040e0;
    }
    ctx->pc = 0x2040D8u;
    {
        const bool branch_taken_0x2040d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040d8) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x2040E0u;
label_2040e0:
    // 0x2040e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2040e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2040e4:
    // 0x2040e4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_2040e8:
    // 0x2040e8: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
label_2040ec:
    // 0x2040ec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2040ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2040f0:
    // 0x2040f0: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
label_2040f4:
    // 0x2040f4: 0xc08f20e  jal         func_23C838
label_2040f8:
    if (ctx->pc == 0x2040F8u) {
        ctx->pc = 0x2040F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040F4u;
        // 0x2040f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2040FCu;
        goto label_2040fc;
    }
    ctx->pc = 0x2040F4u;
    SET_GPR_U32(ctx, 31, 0x2040FCu);
    ctx->pc = 0x2040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040F4u;
    // 0x2040f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x2040FCu;
label_2040fc:
    // 0x2040fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_204100:
    if (ctx->pc == 0x204100u) {
        ctx->pc = 0x204104u;
        goto label_204104;
    }
    ctx->pc = 0x2040FCu;
    {
        const bool branch_taken_0x2040fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040fc) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204104u;
label_204104:
    // 0x204104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204108:
    // 0x204108: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_20410c:
    // 0x20410c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_204110:
    // 0x204110: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
label_204114:
    // 0x204114: 0xc08f20e  jal         func_23C838
label_204118:
    if (ctx->pc == 0x204118u) {
        ctx->pc = 0x204118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204114u;
        // 0x204118: 0x24a5df90  addiu       $a1, $a1, -0x2070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20411Cu;
        goto label_20411c;
    }
    ctx->pc = 0x204114u;
    SET_GPR_U32(ctx, 31, 0x20411Cu);
    ctx->pc = 0x204118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204114u;
    // 0x204118: 0x24a5df90  addiu       $a1, $a1, -0x2070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x20411Cu;
label_20411c:
    // 0x20411c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204120:
    // 0x204120: 0x3e00008  jr          $ra
label_204124:
    if (ctx->pc == 0x204124u) {
        ctx->pc = 0x204124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204120u;
        // 0x204124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204128u;
        goto label_204128;
    }
    ctx->pc = 0x204120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204120u;
        // 0x204124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204128u;
label_204128:
    // 0x204128: 0x0  nop
    ctx->pc = 0x204128u;
    // NOP
label_20412c:
    // 0x20412c: 0x0  nop
    ctx->pc = 0x20412cu;
    // NOP
label_204130:
    // 0x204130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204134:
    // 0x204134: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x204134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_204138:
    // 0x204138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20413c:
    // 0x20413c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204140:
    // 0x204140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204144:
    // 0x204144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_204148:
    // 0x204148: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_20414c:
    if (ctx->pc == 0x20414Cu) {
        ctx->pc = 0x20414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204148u;
        // 0x20414c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204150u;
        goto label_204150;
    }
    ctx->pc = 0x204148u;
    {
        const bool branch_taken_0x204148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204148u;
        // 0x20414c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204148) {
            ctx->pc = 0x204194u;
            goto label_204194;
        }
    }
    ctx->pc = 0x204150u;
label_204150:
    // 0x204150: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x204150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_204154:
    // 0x204154: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_204158:
    if (ctx->pc == 0x204158u) {
        ctx->pc = 0x204158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204154u;
        // 0x204158: 0x28a3000a  slti        $v1, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20415Cu;
        goto label_20415c;
    }
    ctx->pc = 0x204154u;
    {
        const bool branch_taken_0x204154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204154u;
        // 0x204158: 0x28a3000a  slti        $v1, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204154) {
            ctx->pc = 0x204198u;
            goto label_204198;
        }
    }
    ctx->pc = 0x20415Cu;
label_20415c:
    // 0x20415c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_204160:
    // 0x204160: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_204164:
    // 0x204164: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_204168:
    // 0x204168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20416c:
    // 0x20416c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204170:
    // 0x204170: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204174:
    // 0x204174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_204178:
    // 0x204178: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
label_20417c:
    // 0x20417c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204180:
    // 0x204180: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204184:
    // 0x204184: 0xc08f20e  jal         func_23C838
label_204188:
    if (ctx->pc == 0x204188u) {
        ctx->pc = 0x204188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204184u;
        // 0x204188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20418Cu;
        goto label_20418c;
    }
    ctx->pc = 0x204184u;
    SET_GPR_U32(ctx, 31, 0x20418Cu);
    ctx->pc = 0x204188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204184u;
    // 0x204188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x20418Cu;
label_20418c:
    // 0x20418c: 0x10000043  b           . + 4 + (0x43 << 2)
label_204190:
    if (ctx->pc == 0x204190u) {
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204194u;
        goto label_204194;
    }
    ctx->pc = 0x20418Cu;
    {
        const bool branch_taken_0x20418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20418c) {
            ctx->pc = 0x20429Cu;
            goto label_20429c;
        }
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x204194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_204198:
    // 0x204198: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_20419c:
    if (ctx->pc == 0x20419Cu) {
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x28a30014  slti        $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041A0u;
        goto label_2041a0;
    }
    ctx->pc = 0x204198u;
    {
        const bool branch_taken_0x204198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x28a30014  slti        $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204198) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x2041A0u;
label_2041a0:
    // 0x2041a0: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x2041a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_2041a4:
    // 0x2041a4: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_2041a8:
    if (ctx->pc == 0x2041A8u) {
        ctx->pc = 0x2041ACu;
        goto label_2041ac;
    }
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x2041ACu;
label_2041ac:
    // 0x2041ac: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2041b0:
    // 0x2041b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2041b4:
    // 0x2041b4: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_2041b8:
    // 0x2041b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2041bc:
    // 0x2041bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2041c0:
    // 0x2041c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2041c4:
    // 0x2041c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2041c8:
    // 0x2041c8: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x2041c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
label_2041cc:
    // 0x2041cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2041d0:
    // 0x2041d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2041d4:
    // 0x2041d4: 0xc08f20e  jal         func_23C838
label_2041d8:
    if (ctx->pc == 0x2041D8u) {
        ctx->pc = 0x2041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D4u;
        // 0x2041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041DCu;
        goto label_2041dc;
    }
    ctx->pc = 0x2041D4u;
    SET_GPR_U32(ctx, 31, 0x2041DCu);
    ctx->pc = 0x2041D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041D4u;
    // 0x2041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x2041DCu;
label_2041dc:
    // 0x2041dc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2041e0:
    // 0x2041e0: 0x1223002d  beq         $s1, $v1, . + 4 + (0x2D << 2)
label_2041e4:
    if (ctx->pc == 0x2041E4u) {
        ctx->pc = 0x2041E8u;
        goto label_2041e8;
    }
    ctx->pc = 0x2041E0u;
    {
        const bool branch_taken_0x2041e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2041e0) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x2041E8u;
label_2041e8:
    // 0x2041e8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2041ec:
    // 0x2041ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2041f0:
    // 0x2041f0: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_2041f4:
    // 0x2041f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2041f8:
    // 0x2041f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2041fc:
    // 0x2041fc: 0xc08f28e  jal         func_23CA38
label_204200:
    if (ctx->pc == 0x204200u) {
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041FCu;
        // 0x204200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204204u;
        goto label_204204;
    }
    ctx->pc = 0x2041FCu;
    SET_GPR_U32(ctx, 31, 0x204204u);
    ctx->pc = 0x204200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041FCu;
    // 0x204200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    { ctx->pc = 0x23ca38; return; }
    ctx->pc = 0x204204u;
label_204204:
    // 0x204204: 0x10000024  b           . + 4 + (0x24 << 2)
label_204208:
    if (ctx->pc == 0x204208u) {
        ctx->pc = 0x20420Cu;
        goto label_20420c;
    }
    ctx->pc = 0x204204u;
    {
        const bool branch_taken_0x204204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204204) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x20420Cu;
label_20420c:
    // 0x20420c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_204210:
    if (ctx->pc == 0x204210u) {
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x28a1001a  slti        $at, $a1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x204214u;
        goto label_204214;
    }
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x28a1001a  slti        $at, $a1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204214u;
label_204214:
    // 0x204214: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_204218:
    if (ctx->pc == 0x204218u) {
        ctx->pc = 0x204218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204214u;
        // 0x204218: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20421Cu;
        goto label_20421c;
    }
    ctx->pc = 0x204214u;
    {
        const bool branch_taken_0x204214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204214u;
        // 0x204218: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204214) {
            ctx->pc = 0x204244u;
            goto label_204244;
        }
    }
    ctx->pc = 0x20421Cu;
label_20421c:
    // 0x20421c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_204220:
    // 0x204220: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_204224:
    // 0x204224: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_204228:
    // 0x204228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20422c:
    // 0x20422c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204230:
    // 0x204230: 0xc08f390  jal         func_23CE40
label_204234:
    if (ctx->pc == 0x204234u) {
        ctx->pc = 0x204234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204230u;
        // 0x204234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204238u;
        goto label_204238;
    }
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 31, 0x204238u);
    ctx->pc = 0x204234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204230u;
    // 0x204234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x204238u;
label_204238:
    // 0x204238: 0x10000017  b           . + 4 + (0x17 << 2)
label_20423c:
    if (ctx->pc == 0x20423Cu) {
        ctx->pc = 0x204240u;
        goto label_204240;
    }
    ctx->pc = 0x204238u;
    {
        const bool branch_taken_0x204238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204238) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x204240u;
label_204240:
    // 0x204240: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_204244:
    // 0x204244: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_204248:
    if (ctx->pc == 0x204248u) {
        ctx->pc = 0x20424Cu;
        goto label_20424c;
    }
    ctx->pc = 0x204244u;
    {
        const bool branch_taken_0x204244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x204244) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x20424Cu;
label_20424c:
    // 0x20424c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_204250:
    // 0x204250: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_204254:
    // 0x204254: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_204258:
    // 0x204258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20425c:
    // 0x20425c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204260:
    // 0x204260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204264:
    // 0x204264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_204268:
    // 0x204268: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
label_20426c:
    // 0x20426c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204270:
    // 0x204270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204274:
    // 0x204274: 0xc08f20e  jal         func_23C838
label_204278:
    if (ctx->pc == 0x204278u) {
        ctx->pc = 0x204278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204274u;
        // 0x204278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20427Cu;
        goto label_20427c;
    }
    ctx->pc = 0x204274u;
    SET_GPR_U32(ctx, 31, 0x20427Cu);
    ctx->pc = 0x204278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204274u;
    // 0x204278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x20427Cu;
label_20427c:
    // 0x20427c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_204280:
    // 0x204280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_204284:
    // 0x204284: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_204288:
    // 0x204288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20428c:
    // 0x20428c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204290:
    // 0x204290: 0xc08f28e  jal         func_23CA38
label_204294:
    if (ctx->pc == 0x204294u) {
        ctx->pc = 0x204294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204290u;
        // 0x204294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204298u;
        goto label_204298;
    }
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 31, 0x204298u);
    ctx->pc = 0x204294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204290u;
    // 0x204294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    { ctx->pc = 0x23ca38; return; }
    ctx->pc = 0x204298u;
label_204298:
    // 0x204298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20429c:
    // 0x20429c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20429cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2042a0:
    // 0x2042a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2042a4:
    // 0x2042a4: 0x3e00008  jr          $ra
label_2042a8:
    if (ctx->pc == 0x2042A8u) {
        ctx->pc = 0x2042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A4u;
        // 0x2042a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2042ACu;
        goto label_2042ac;
    }
    ctx->pc = 0x2042A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A4u;
        // 0x2042a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2042ACu;
label_2042ac:
    // 0x2042ac: 0x0  nop
    ctx->pc = 0x2042acu;
    // NOP
label_2042b0:
    // 0x2042b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2042b4:
    // 0x2042b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2042b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2042b8:
    // 0x2042b8: 0xc06c3e8  jal         func_1B0FA0
label_2042bc:
    if (ctx->pc == 0x2042BCu) {
        ctx->pc = 0x2042C0u;
        goto label_2042c0;
    }
    ctx->pc = 0x2042B8u;
    SET_GPR_U32(ctx, 31, 0x2042C0u);
    ctx->pc = 0x1B0FA0u;
    { ctx->pc = 0x1b0fa0; return; }
    ctx->pc = 0x2042C0u;
label_2042c0:
    // 0x2042c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2042c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2042c4:
    // 0x2042c4: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
label_2042c8:
    // 0x2042c8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_2042cc:
    // 0x2042cc: 0x2529f700  addiu       $t1, $t1, -0x900
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964992));
label_2042d0:
    // 0x2042d0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2042d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2042d4:
    // 0x2042d4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2042d8:
    // 0x2042d8: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x2042d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_2042dc:
    // 0x2042dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2042e0:
    // 0x2042e0: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2042e4:
    // 0x2042e4: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2042e8:
    // 0x2042e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2042e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2042ec:
    // 0x2042ec: 0xcb5021  addu        $t2, $a2, $t3
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_2042f0:
    // 0x2042f0: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2042f4:
    // 0x2042f4: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_2042f8:
    // 0x2042f8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2042fc:
    // 0x2042fc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_204300:
    // 0x204300: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_204304:
    // 0x204304: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_204308:
    // 0x204308: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_20430c:
    // 0x20430c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_204310:
    // 0x204310: 0xad400480  sw          $zero, 0x480($t2)
    ctx->pc = 0x204310u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1152), GPR_U32(ctx, 0));
label_204314:
    // 0x204314: 0xa66021  addu        $t4, $a1, $a2
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_204318:
    // 0x204318: 0xad400488  sw          $zero, 0x488($t2)
    ctx->pc = 0x204318u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1160), GPR_U32(ctx, 0));
label_20431c:
    // 0x20431c: 0x1803021  addu        $a2, $t4, $zero
    ctx->pc = 0x20431cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 0)));
label_204320:
    // 0x204320: 0xad40048c  sw          $zero, 0x48C($t2)
    ctx->pc = 0x204320u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1164), GPR_U32(ctx, 0));
label_204324:
    // 0x204324: 0xac28f460  sw          $t0, -0xBA0($at)
    ctx->pc = 0x204324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964320), GPR_U32(ctx, 8));
label_204328:
    // 0x204328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20432c:
    // 0x20432c: 0xac27f464  sw          $a3, -0xB9C($at)
    ctx->pc = 0x20432cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964324), GPR_U32(ctx, 7));
label_204330:
    // 0x204330: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_204334:
    // 0x204334: 0xac2bf468  sw          $t3, -0xB98($at)
    ctx->pc = 0x204334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964328), GPR_U32(ctx, 11));
label_204338:
    // 0x204338: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20433c:
    // 0x20433c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_204340:
    // 0x204340: 0xac20f46c  sw          $zero, -0xB94($at)
    ctx->pc = 0x204340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964332), GPR_U32(ctx, 0));
label_204344:
    // 0x204344: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_204348:
    // 0x204348: 0xac20f470  sw          $zero, -0xB90($at)
    ctx->pc = 0x204348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964336), GPR_U32(ctx, 0));
label_20434c:
    // 0x20434c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_204350:
    // 0x204350: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x204350u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_204354:
    // 0x204354: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_204358:
    // 0x204358: 0xa020f47c  sb          $zero, -0xB84($at)
    ctx->pc = 0x204358u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964348), (uint8_t)GPR_U32(ctx, 0));
label_20435c:
    // 0x20435c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x20435cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_204360:
    // 0x204360: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x204360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_204364:
    // 0x204364: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x204364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_204368:
    // 0x204368: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x204368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_20436c:
    // 0x20436c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x20436cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_204370:
    // 0x204370: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_204374:
    // 0x204374: 0xad8400a0  sw          $a0, 0xA0($t4)
    ctx->pc = 0x204374u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 4));
label_204378:
    // 0x204378: 0xad830098  sw          $v1, 0x98($t4)
    ctx->pc = 0x204378u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 3));
label_20437c:
    // 0x20437c: 0xad88009c  sw          $t0, 0x9C($t4)
    ctx->pc = 0x20437cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 8));
label_204380:
    // 0x204380: 0xad8000a4  sw          $zero, 0xA4($t4)
    ctx->pc = 0x204380u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 0));
label_204384:
    // 0x204384: 0xad8000a8  sw          $zero, 0xA8($t4)
    ctx->pc = 0x204384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 168), GPR_U32(ctx, 0));
label_204388:
    // 0x204388: 0xad8000ac  sw          $zero, 0xAC($t4)
    ctx->pc = 0x204388u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 0));
label_20438c:
    // 0x20438c: 0xad840138  sw          $a0, 0x138($t4)
    ctx->pc = 0x20438cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 312), GPR_U32(ctx, 4));
label_204390:
    // 0x204390: 0xad830130  sw          $v1, 0x130($t4)
    ctx->pc = 0x204390u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 304), GPR_U32(ctx, 3));
label_204394:
    // 0x204394: 0xad880134  sw          $t0, 0x134($t4)
    ctx->pc = 0x204394u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 308), GPR_U32(ctx, 8));
label_204398:
    // 0x204398: 0xad80013c  sw          $zero, 0x13C($t4)
    ctx->pc = 0x204398u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 316), GPR_U32(ctx, 0));
label_20439c:
    // 0x20439c: 0xad800140  sw          $zero, 0x140($t4)
    ctx->pc = 0x20439cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 0));
label_2043a0:
    // 0x2043a0: 0x1960ffd0  blez        $t3, . + 4 + (-0x30 << 2)
label_2043a4:
    if (ctx->pc == 0x2043A4u) {
        ctx->pc = 0x2043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A0u;
        // 0x2043a4: 0xad800144  sw          $zero, 0x144($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2043A8u;
        goto label_2043a8;
    }
    ctx->pc = 0x2043A0u;
    {
        const bool branch_taken_0x2043a0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A0u;
        // 0x2043a4: 0xad800144  sw          $zero, 0x144($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a0) {
            ctx->pc = 0x2042E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2042e4;
        }
    }
    ctx->pc = 0x2043A8u;
label_2043a8:
    // 0x2043a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2043a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2043ac:
    // 0x2043ac: 0x3e00008  jr          $ra
label_2043b0:
    if (ctx->pc == 0x2043B0u) {
        ctx->pc = 0x2043B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043ACu;
        // 0x2043b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2043B4u;
        goto label_2043b4;
    }
    ctx->pc = 0x2043ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2043B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043ACu;
        // 0x2043b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2043ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2043B4u;
label_2043b4:
    // 0x2043b4: 0x0  nop
    ctx->pc = 0x2043b4u;
    // NOP
label_2043b8:
    // 0x2043b8: 0x0  nop
    ctx->pc = 0x2043b8u;
    // NOP
label_2043bc:
    // 0x2043bc: 0x0  nop
    ctx->pc = 0x2043bcu;
    // NOP
label_2043c0:
    // 0x2043c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2043c4:
    // 0x2043c4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_2043c8:
    // 0x2043c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2043c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2043cc:
    // 0x2043cc: 0x24e7f700  addiu       $a3, $a3, -0x900
    ctx->pc = 0x2043ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964992));
label_2043d0:
    // 0x2043d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2043d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2043d4:
    // 0x2043d4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2043d8:
    // 0x2043d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2043d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2043dc:
    // 0x2043dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2043e0:
    // 0x2043e0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2043e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2043e4:
    // 0x2043e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2043e8:
    // 0x2043e8: 0x450c0  sll         $t2, $a0, 3
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2043ec:
    // 0x2043ec: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2043f0:
    // 0x2043f0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2043f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2043f4:
    // 0x2043f4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2043f8:
    // 0x2043f8: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_2043fc:
    // 0x2043fc: 0x10a6001d  beq         $a1, $a2, . + 4 + (0x1D << 2)
label_204400:
    if (ctx->pc == 0x204400u) {
        ctx->pc = 0x204400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043FCu;
        // 0x204400: 0xe84821  addu        $t1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204404u;
        goto label_204404;
    }
    ctx->pc = 0x2043FCu;
    {
        const bool branch_taken_0x2043fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x204400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043FCu;
        // 0x204400: 0xe84821  addu        $t1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043fc) {
            ctx->pc = 0x204474u;
            goto label_204474;
        }
    }
    ctx->pc = 0x204404u;
label_204404:
    // 0x204404: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_204408:
    // 0x204408: 0x10a60013  beq         $a1, $a2, . + 4 + (0x13 << 2)
label_20440c:
    if (ctx->pc == 0x20440Cu) {
        ctx->pc = 0x20440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204408u;
        // 0x20440c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204410u;
        goto label_204410;
    }
    ctx->pc = 0x204408u;
    {
        const bool branch_taken_0x204408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x20440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204408u;
        // 0x20440c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204408) {
            ctx->pc = 0x204458u;
            goto label_204458;
        }
    }
    ctx->pc = 0x204410u;
label_204410:
    // 0x204410: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
label_204414:
    if (ctx->pc == 0x204414u) {
        ctx->pc = 0x204418u;
        goto label_204418;
    }
    ctx->pc = 0x204410u;
    {
        const bool branch_taken_0x204410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x204410) {
            ctx->pc = 0x204444u;
            goto label_204444;
        }
    }
    ctx->pc = 0x204418u;
label_204418:
    // 0x204418: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_20441c:
    if (ctx->pc == 0x20441Cu) {
        ctx->pc = 0x204420u;
        goto label_204420;
    }
    ctx->pc = 0x204418u;
    {
        const bool branch_taken_0x204418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204418) {
            ctx->pc = 0x204428u;
            goto label_204428;
        }
    }
    ctx->pc = 0x204420u;
label_204420:
    // 0x204420: 0x10000018  b           . + 4 + (0x18 << 2)
label_204424:
    if (ctx->pc == 0x204424u) {
        ctx->pc = 0x204424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204420u;
        // 0x204424: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204428u;
        goto label_204428;
    }
    ctx->pc = 0x204420u;
    {
        const bool branch_taken_0x204420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204420u;
        // 0x204424: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204420) {
            ctx->pc = 0x204484u;
            goto label_204484;
        }
    }
    ctx->pc = 0x204428u;
label_204428:
    // 0x204428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20442c:
    // 0x20442c: 0x25260484  addiu       $a2, $t1, 0x484
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1156));
label_204430:
    // 0x204430: 0x25270488  addiu       $a3, $t1, 0x488
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1160));
label_204434:
    // 0x204434: 0xc06c6c0  jal         func_1B1B00
label_204438:
    if (ctx->pc == 0x204438u) {
        ctx->pc = 0x204438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204434u;
        // 0x204438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20443Cu;
        goto label_20443c;
    }
    ctx->pc = 0x204434u;
    SET_GPR_U32(ctx, 31, 0x20443Cu);
    ctx->pc = 0x204438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204434u;
    // 0x204438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B00u;
    { ctx->pc = 0x1b1b00; return; }
    ctx->pc = 0x20443Cu;
label_20443c:
    // 0x20443c: 0x10000047  b           . + 4 + (0x47 << 2)
label_204440:
    if (ctx->pc == 0x204440u) {
        ctx->pc = 0x204440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20443Cu;
        // 0x204440: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204444u;
        goto label_204444;
    }
    ctx->pc = 0x20443Cu;
    {
        const bool branch_taken_0x20443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20443Cu;
        // 0x204440: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20443c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204444u;
label_204444:
    // 0x204444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204448:
    // 0x204448: 0xc06c51c  jal         func_1B1470
label_20444c:
    if (ctx->pc == 0x20444Cu) {
        ctx->pc = 0x20444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204448u;
        // 0x20444c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204450u;
        goto label_204450;
    }
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 31, 0x204450u);
    ctx->pc = 0x20444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204448u;
    // 0x20444c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1470u;
    { ctx->pc = 0x1b1470; return; }
    ctx->pc = 0x204450u;
label_204450:
    // 0x204450: 0x10000042  b           . + 4 + (0x42 << 2)
label_204454:
    if (ctx->pc == 0x204454u) {
        ctx->pc = 0x204454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204450u;
        // 0x204454: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204458u;
        goto label_204458;
    }
    ctx->pc = 0x204450u;
    {
        const bool branch_taken_0x204450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204450u;
        // 0x204454: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204450) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204458u;
label_204458:
    // 0x204458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20445c:
    // 0x20445c: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_204460:
    // 0x204460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204464:
    // 0x204464: 0xc06c73c  jal         func_1B1CF0
label_204468:
    if (ctx->pc == 0x204468u) {
        ctx->pc = 0x204468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204464u;
        // 0x204468: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20446Cu;
        goto label_20446c;
    }
    ctx->pc = 0x204464u;
    SET_GPR_U32(ctx, 31, 0x20446Cu);
    ctx->pc = 0x204468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204464u;
    // 0x204468: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CF0u;
    { ctx->pc = 0x1b1cf0; return; }
    ctx->pc = 0x20446Cu;
label_20446c:
    // 0x20446c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_204470:
    if (ctx->pc == 0x204470u) {
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20446Cu;
        // 0x204470: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204474u;
        goto label_204474;
    }
    ctx->pc = 0x20446Cu;
    {
        const bool branch_taken_0x20446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20446Cu;
        // 0x204470: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20446c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204474u;
label_204474:
    // 0x204474: 0xc06c800  jal         func_1B2000
label_204478:
    if (ctx->pc == 0x204478u) {
        ctx->pc = 0x204478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204474u;
        // 0x204478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20447Cu;
        goto label_20447c;
    }
    ctx->pc = 0x204474u;
    SET_GPR_U32(ctx, 31, 0x20447Cu);
    ctx->pc = 0x204478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204474u;
    // 0x204478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    { ctx->pc = 0x1b2000; return; }
    ctx->pc = 0x20447Cu;
label_20447c:
    // 0x20447c: 0x10000037  b           . + 4 + (0x37 << 2)
label_204480:
    if (ctx->pc == 0x204480u) {
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20447Cu;
        // 0x204480: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204484u;
        goto label_204484;
    }
    ctx->pc = 0x20447Cu;
    {
        const bool branch_taken_0x20447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20447Cu;
        // 0x204480: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20447c) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x1443823  subu        $a3, $t2, $a0
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_204488:
    // 0x204488: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20448c:
    // 0x20448c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_204490:
    // 0x204490: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_204494:
    // 0x204494: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_204498:
    // 0x204498: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204498u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20449c:
    // 0x20449c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x20449cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2044a0:
    // 0x2044a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2044a4:
    // 0x2044a4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_2044a8:
    // 0x2044a8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2044ac:
    // 0x2044ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2044b0:
    // 0x2044b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2044b4:
    // 0x2044b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2044b8:
    // 0x2044b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2044bc:
    // 0x2044bc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_2044c0:
    if (ctx->pc == 0x2044C0u) {
        ctx->pc = 0x2044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044BCu;
        // 0x2044c0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044C4u;
        goto label_2044c4;
    }
    ctx->pc = 0x2044BCu;
    {
        const bool branch_taken_0x2044bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044BCu;
        // 0x2044c0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044bc) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x2044C4u;
label_2044c4:
    // 0x2044c4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_2044c8:
    // 0x2044c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2044cc:
    // 0x2044cc: 0x24c6dff0  addiu       $a2, $a2, -0x2010
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959088));
label_2044d0:
    // 0x2044d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2044d4:
    // 0x2044d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2044d8:
    // 0x2044d8: 0xa00008  jr          $a1
label_2044dc:
    if (ctx->pc == 0x2044DCu) {
        ctx->pc = 0x2044E0u;
        goto label_2044e0;
    }
    ctx->pc = 0x2044D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2044E0u: goto label_2044e0;
            case 0x2044F8u: goto label_2044f8;
            case 0x204508u: goto label_204508;
            case 0x204520u: goto label_204520;
            case 0x204538u: goto label_204538;
            case 0x204550u: goto label_204550;
            case 0x20455Cu: goto label_20455c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_2044e4:
    // 0x2044e4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2044e8:
    // 0x2044e8: 0xc06c4d2  jal         func_1B1348
label_2044ec:
    if (ctx->pc == 0x2044ECu) {
        ctx->pc = 0x2044ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044E8u;
        // 0x2044ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044F0u;
        goto label_2044f0;
    }
    ctx->pc = 0x2044E8u;
    SET_GPR_U32(ctx, 31, 0x2044F0u);
    ctx->pc = 0x2044ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044E8u;
    // 0x2044ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    { ctx->pc = 0x1b1348; return; }
    ctx->pc = 0x2044F0u;
label_2044f0:
    // 0x2044f0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2044f4:
    if (ctx->pc == 0x2044F4u) {
        ctx->pc = 0x2044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F0u;
        // 0x2044f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044F8u;
        goto label_2044f8;
    }
    ctx->pc = 0x2044F0u;
    {
        const bool branch_taken_0x2044f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F0u;
        // 0x2044f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044f0) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x2044F8u;
label_2044f8:
    // 0x2044f8: 0xc06c52a  jal         func_1B14A8
label_2044fc:
    if (ctx->pc == 0x2044FCu) {
        ctx->pc = 0x2044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F8u;
        // 0x2044fc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204500u;
        goto label_204500;
    }
    ctx->pc = 0x2044F8u;
    SET_GPR_U32(ctx, 31, 0x204500u);
    ctx->pc = 0x2044FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044F8u;
    // 0x2044fc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A8u;
    { ctx->pc = 0x1b14a8; return; }
    ctx->pc = 0x204500u;
label_204500:
    // 0x204500: 0x10000016  b           . + 4 + (0x16 << 2)
label_204504:
    if (ctx->pc == 0x204504u) {
        ctx->pc = 0x204504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204500u;
        // 0x204504: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204508u;
        goto label_204508;
    }
    ctx->pc = 0x204500u;
    {
        const bool branch_taken_0x204500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204500u;
        // 0x204504: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204500) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204508u;
label_204508:
    // 0x204508: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_20450c:
    // 0x20450c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_204510:
    // 0x204510: 0xc06c558  jal         func_1B1560
label_204514:
    if (ctx->pc == 0x204514u) {
        ctx->pc = 0x204514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204510u;
        // 0x204514: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204518u;
        goto label_204518;
    }
    ctx->pc = 0x204510u;
    SET_GPR_U32(ctx, 31, 0x204518u);
    ctx->pc = 0x204514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204510u;
    // 0x204514: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    { ctx->pc = 0x1b1560; return; }
    ctx->pc = 0x204518u;
label_204518:
    // 0x204518: 0x10000010  b           . + 4 + (0x10 << 2)
label_20451c:
    if (ctx->pc == 0x20451Cu) {
        ctx->pc = 0x20451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204518u;
        // 0x20451c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204520u;
        goto label_204520;
    }
    ctx->pc = 0x204518u;
    {
        const bool branch_taken_0x204518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204518u;
        // 0x20451c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204518) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204520u;
label_204520:
    // 0x204520: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_204524:
    // 0x204524: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x204524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_204528:
    // 0x204528: 0xc06c5b2  jal         func_1B16C8
label_20452c:
    if (ctx->pc == 0x20452Cu) {
        ctx->pc = 0x20452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204528u;
        // 0x20452c: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204530u;
        goto label_204530;
    }
    ctx->pc = 0x204528u;
    SET_GPR_U32(ctx, 31, 0x204530u);
    ctx->pc = 0x20452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204528u;
    // 0x20452c: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B16C8u;
    { ctx->pc = 0x1b16c8; return; }
    ctx->pc = 0x204530u;
label_204530:
    // 0x204530: 0x1000000a  b           . + 4 + (0xA << 2)
label_204534:
    if (ctx->pc == 0x204534u) {
        ctx->pc = 0x204534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204530u;
        // 0x204534: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204538u;
        goto label_204538;
    }
    ctx->pc = 0x204530u;
    {
        const bool branch_taken_0x204530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204530u;
        // 0x204534: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204530) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204538u;
label_204538:
    // 0x204538: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_20453c:
    // 0x20453c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_204540:
    // 0x204540: 0xc06c5f8  jal         func_1B17E0
label_204544:
    if (ctx->pc == 0x204544u) {
        ctx->pc = 0x204544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204540u;
        // 0x204544: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204548u;
        goto label_204548;
    }
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 31, 0x204548u);
    ctx->pc = 0x204544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204540u;
    // 0x204544: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B17E0u;
    { ctx->pc = 0x1b17e0; return; }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0x10000004  b           . + 4 + (0x4 << 2)
label_20454c:
    if (ctx->pc == 0x20454Cu) {
        ctx->pc = 0x20454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204548u;
        // 0x20454c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204550u;
        goto label_204550;
    }
    ctx->pc = 0x204548u;
    {
        const bool branch_taken_0x204548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204548u;
        // 0x20454c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204548) {
            ctx->pc = 0x20455Cu;
            goto label_20455c;
        }
    }
    ctx->pc = 0x204550u;
label_204550:
    // 0x204550: 0xc06c87a  jal         func_1B21E8
label_204554:
    if (ctx->pc == 0x204554u) {
        ctx->pc = 0x204554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204550u;
        // 0x204554: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204558u;
        goto label_204558;
    }
    ctx->pc = 0x204550u;
    SET_GPR_U32(ctx, 31, 0x204558u);
    ctx->pc = 0x204554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204550u;
    // 0x204554: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B21E8u;
    { ctx->pc = 0x1b21e8; return; }
    ctx->pc = 0x204558u;
label_204558:
    // 0x204558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20455c:
    // 0x20455c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_204560:
    if (ctx->pc == 0x204560u) {
        ctx->pc = 0x204564u;
        goto label_204564;
    }
    ctx->pc = 0x20455Cu;
    {
        const bool branch_taken_0x20455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20455c) {
            ctx->pc = 0x204574u;
            goto label_204574;
        }
    }
    ctx->pc = 0x204564u;
label_204564:
    // 0x204564: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x204564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_204568:
    // 0x204568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20456c:
    // 0x20456c: 0x1000000a  b           . + 4 + (0xA << 2)
label_204570:
    if (ctx->pc == 0x204570u) {
        ctx->pc = 0x204570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20456Cu;
        // 0x204570: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204574u;
        goto label_204574;
    }
    ctx->pc = 0x20456Cu;
    {
        const bool branch_taken_0x20456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20456Cu;
        // 0x204570: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20456c) {
            ctx->pc = 0x204598u;
            goto label_204598;
        }
    }
    ctx->pc = 0x204574u;
label_204574:
    // 0x204574: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_204578:
    // 0x204578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20457c:
    // 0x20457c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_204580:
    // 0x204580: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x204580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_204584:
    // 0x204584: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_204588:
    if (ctx->pc == 0x204588u) {
        ctx->pc = 0x20458Cu;
        goto label_20458c;
    }
    ctx->pc = 0x204584u;
    {
        const bool branch_taken_0x204584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204584) {
            ctx->pc = 0x204598u;
            goto label_204598;
        }
    }
    ctx->pc = 0x20458Cu;
label_20458c:
    // 0x20458c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_204590:
    // 0x204590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_204594:
    // 0x204594: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_204598:
    // 0x204598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20459c:
    // 0x20459c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2045a0:
    // 0x2045a0: 0x3e00008  jr          $ra
label_2045a4:
    if (ctx->pc == 0x2045A4u) {
        ctx->pc = 0x2045A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A0u;
        // 0x2045a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2045A8u;
        goto label_2045a8;
    }
    ctx->pc = 0x2045A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2045A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A0u;
        // 0x2045a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2045A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2045A8u;
label_2045a8:
    // 0x2045a8: 0x0  nop
    ctx->pc = 0x2045a8u;
    // NOP
label_2045ac:
    // 0x2045ac: 0x0  nop
    ctx->pc = 0x2045acu;
    // NOP
label_2045b0:
    // 0x2045b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2045b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2045b4:
    // 0x2045b4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2045b8:
    // 0x2045b8: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_2045bc:
    // 0x2045bc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2045c0:
    // 0x2045c0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2045c4:
    // 0x2045c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2045c8:
    // 0x2045c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2045c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2045cc:
    // 0x2045cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2045d0:
    // 0x2045d0: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
label_2045d4:
    if (ctx->pc == 0x2045D4u) {
        ctx->pc = 0x2045D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045D0u;
        // 0x2045d4: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2045D8u;
        goto label_2045d8;
    }
    ctx->pc = 0x2045D0u;
    {
        const bool branch_taken_0x2045d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045D0u;
        // 0x2045d4: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045d0) {
            ctx->pc = 0x204718u;
            goto label_204718;
        }
    }
    ctx->pc = 0x2045D8u;
label_2045d8:
    // 0x2045d8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2045d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2045dc:
    // 0x2045dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2045e0:
    // 0x2045e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2045e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2045e4:
    // 0x2045e4: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
label_2045e8:
    // 0x2045e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2045ec:
    // 0x2045ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2045f0:
    // 0x2045f0: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2045f4:
    // 0x2045f4: 0x24060203  addiu       $a2, $zero, 0x203
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2045f8:
    // 0x2045f8: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x2045f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2045fc:
    // 0x2045fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204600:
    // 0x204600: 0x1204021  addu        $t0, $t1, $zero
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 0)));
label_204604:
    // 0x204604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204608:
    // 0x204608: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x204608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
label_20460c:
    // 0x20460c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x20460cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_204610:
    // 0x204610: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x204610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_204614:
    // 0x204614: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x204614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_204618:
    // 0x204618: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x204618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_20461c:
    // 0x20461c: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x20461cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_204620:
    // 0x204620: 0xad2700a0  sw          $a3, 0xA0($t1)
    ctx->pc = 0x204620u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 7));
label_204624:
    // 0x204624: 0xad260098  sw          $a2, 0x98($t1)
    ctx->pc = 0x204624u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 6));
label_204628:
    // 0x204628: 0xad24009c  sw          $a0, 0x9C($t1)
    ctx->pc = 0x204628u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 4));
label_20462c:
    // 0x20462c: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
label_204630:
    // 0x204630: 0xad2000a8  sw          $zero, 0xA8($t1)
    ctx->pc = 0x204630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 168), GPR_U32(ctx, 0));
label_204634:
    // 0x204634: 0xad2000ac  sw          $zero, 0xAC($t1)
    ctx->pc = 0x204634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 0));
label_204638:
    // 0x204638: 0xad270138  sw          $a3, 0x138($t1)
    ctx->pc = 0x204638u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 7));
label_20463c:
    // 0x20463c: 0xad260130  sw          $a2, 0x130($t1)
    ctx->pc = 0x20463cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 304), GPR_U32(ctx, 6));
label_204640:
    // 0x204640: 0xad240134  sw          $a0, 0x134($t1)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 308), GPR_U32(ctx, 4));
label_204644:
    // 0x204644: 0xad20013c  sw          $zero, 0x13C($t1)
    ctx->pc = 0x204644u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 316), GPR_U32(ctx, 0));
label_204648:
    // 0x204648: 0xad200140  sw          $zero, 0x140($t1)
    ctx->pc = 0x204648u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 0));
label_20464c:
    // 0x20464c: 0xad200144  sw          $zero, 0x144($t1)
    ctx->pc = 0x20464cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 0));
label_204650:
    // 0x204650: 0xac600480  sw          $zero, 0x480($v1)
    ctx->pc = 0x204650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 0));
label_204654:
    // 0x204654: 0x8c660484  lw          $a2, 0x484($v1)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_204658:
    // 0x204658: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_20465c:
    if (ctx->pc == 0x20465Cu) {
        ctx->pc = 0x204660u;
        goto label_204660;
    }
    ctx->pc = 0x204658u;
    {
        const bool branch_taken_0x204658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x204658) {
            ctx->pc = 0x204674u;
            goto label_204674;
        }
    }
    ctx->pc = 0x204660u;
label_204660:
    // 0x204660: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_204664:
    // 0x204664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204668:
    // 0x204668: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_20466c:
    // 0x20466c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_204670:
    if (ctx->pc == 0x204670u) {
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204674u;
        goto label_204674;
    }
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204674u;
label_204674:
    // 0x204674: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
label_204678:
    if (ctx->pc == 0x204678u) {
        ctx->pc = 0x20467Cu;
        goto label_20467c;
    }
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x204674) {
            ctx->pc = 0x204690u;
            goto label_204690;
        }
    }
    ctx->pc = 0x20467Cu;
label_20467c:
    // 0x20467c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_204680:
    // 0x204680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204684:
    // 0x204684: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_204688:
    // 0x204688: 0x10000024  b           . + 4 + (0x24 << 2)
label_20468c:
    if (ctx->pc == 0x20468Cu) {
        ctx->pc = 0x20468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204688u;
        // 0x20468c: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204690u;
        goto label_204690;
    }
    ctx->pc = 0x204688u;
    {
        const bool branch_taken_0x204688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204688u;
        // 0x20468c: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204688) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x10a70020  beq         $a1, $a3, . + 4 + (0x20 << 2)
label_204694:
    if (ctx->pc == 0x204694u) {
        ctx->pc = 0x204698u;
        goto label_204698;
    }
    ctx->pc = 0x204690u;
    {
        const bool branch_taken_0x204690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x204690) {
            ctx->pc = 0x204714u;
            goto label_204714;
        }
    }
    ctx->pc = 0x204698u;
label_204698:
    // 0x204698: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_20469c:
    // 0x20469c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_2046a0:
    if (ctx->pc == 0x2046A0u) {
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x28a2ffed  slti        $v0, $a1, -0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967277) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046A4u;
        goto label_2046a4;
    }
    ctx->pc = 0x20469Cu;
    {
        const bool branch_taken_0x20469c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x28a2ffed  slti        $v0, $a1, -0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967277) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20469c) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x2046A4u;
label_2046a4:
    // 0x2046a4: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_2046a8:
    // 0x2046a8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2046ac:
    if (ctx->pc == 0x2046ACu) {
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0xac620480  sw          $v0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046B0u;
        goto label_2046b0;
    }
    ctx->pc = 0x2046A8u;
    {
        const bool branch_taken_0x2046a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0xac620480  sw          $v0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046a8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046B0u;
label_2046b0:
    // 0x2046b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2046b4:
    if (ctx->pc == 0x2046B4u) {
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046B8u;
        goto label_2046b8;
    }
    ctx->pc = 0x2046B0u;
    {
        const bool branch_taken_0x2046b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b0) {
            ctx->pc = 0x2046C0u;
            goto label_2046c0;
        }
    }
    ctx->pc = 0x2046B8u;
label_2046b8:
    // 0x2046b8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_2046bc:
    if (ctx->pc == 0x2046BCu) {
        ctx->pc = 0x2046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B8u;
        // 0x2046bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046C0u;
        goto label_2046c0;
    }
    ctx->pc = 0x2046B8u;
    {
        const bool branch_taken_0x2046b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B8u;
        // 0x2046bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b8) {
            ctx->pc = 0x20470Cu;
            goto label_20470c;
        }
    }
    ctx->pc = 0x2046C0u;
label_2046c0:
    // 0x2046c0: 0x28a2ffcf  slti        $v0, $a1, -0x31
    ctx->pc = 0x2046c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
label_2046c4:
    // 0x2046c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2046c8:
    if (ctx->pc == 0x2046C8u) {
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x28a2ffc5  slti        $v0, $a1, -0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967237) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046CCu;
        goto label_2046cc;
    }
    ctx->pc = 0x2046C4u;
    {
        const bool branch_taken_0x2046c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x28a2ffc5  slti        $v0, $a1, -0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967237) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c4) {
            ctx->pc = 0x2046D8u;
            goto label_2046d8;
        }
    }
    ctx->pc = 0x2046CCu;
label_2046cc:
    // 0x2046cc: 0x28a1ffd9  slti        $at, $a1, -0x27
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967257) ? 1 : 0);
label_2046d0:
    // 0x2046d0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_2046d4:
    if (ctx->pc == 0x2046D4u) {
        ctx->pc = 0x2046D8u;
        goto label_2046d8;
    }
    ctx->pc = 0x2046D0u;
    {
        const bool branch_taken_0x2046d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046d0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046D8u;
label_2046d8:
    // 0x2046d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2046dc:
    if (ctx->pc == 0x2046DCu) {
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x28a1ffcf  slti        $at, $a1, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046E0u;
        goto label_2046e0;
    }
    ctx->pc = 0x2046D8u;
    {
        const bool branch_taken_0x2046d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x28a1ffcf  slti        $at, $a1, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d8) {
            ctx->pc = 0x2046E8u;
            goto label_2046e8;
        }
    }
    ctx->pc = 0x2046E0u;
label_2046e0:
    // 0x2046e0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_2046e4:
    if (ctx->pc == 0x2046E4u) {
        ctx->pc = 0x2046E8u;
        goto label_2046e8;
    }
    ctx->pc = 0x2046E0u;
    {
        const bool branch_taken_0x2046e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046e0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046E8u;
label_2046e8:
    // 0x2046e8: 0x28a2ffb1  slti        $v0, $a1, -0x4F
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967217) ? 1 : 0);
label_2046ec:
    // 0x2046ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2046f0:
    if (ctx->pc == 0x2046F0u) {
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046ECu;
        // 0x2046f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046F4u;
        goto label_2046f4;
    }
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046ECu;
        // 0x2046f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x204700u;
            goto label_204700;
        }
    }
    ctx->pc = 0x2046F4u;
label_2046f4:
    // 0x2046f4: 0x28a1ffbb  slti        $at, $a1, -0x45
    ctx->pc = 0x2046f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967227) ? 1 : 0);
label_2046f8:
    // 0x2046f8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2046fc:
    if (ctx->pc == 0x2046FCu) {
        ctx->pc = 0x204700u;
        goto label_204700;
    }
    ctx->pc = 0x2046F8u;
    {
        const bool branch_taken_0x2046f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046f8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x204700u;
label_204700:
    // 0x204700: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x204700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_204704:
    // 0x204704: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204708:
    // 0x204708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20470c:
    // 0x20470c: 0x10000003  b           . + 4 + (0x3 << 2)
label_204710:
    if (ctx->pc == 0x204710u) {
        ctx->pc = 0x204714u;
        goto label_204714;
    }
    ctx->pc = 0x20470Cu;
    {
        const bool branch_taken_0x20470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20470c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204718:
    // 0x204718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20471c:
    // 0x20471c: 0x3e00008  jr          $ra
label_204720:
    if (ctx->pc == 0x204720u) {
        ctx->pc = 0x204724u;
        goto label_204724;
    }
    ctx->pc = 0x20471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204724u;
label_204724:
    // 0x204724: 0x0  nop
    ctx->pc = 0x204724u;
    // NOP
label_204728:
    // 0x204728: 0x0  nop
    ctx->pc = 0x204728u;
    // NOP
label_20472c:
    // 0x20472c: 0x0  nop
    ctx->pc = 0x20472cu;
    // NOP
label_204730:
    // 0x204730: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_204734:
    if (ctx->pc == 0x204734u) {
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204738u;
        goto label_204738;
    }
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204740u;
            goto label_204740;
        }
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x10000014  b           . + 4 + (0x14 << 2)
label_20473c:
    if (ctx->pc == 0x20473Cu) {
        ctx->pc = 0x204740u;
        goto label_204740;
    }
    ctx->pc = 0x204738u;
    {
        const bool branch_taken_0x204738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204738) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204740u;
label_204740:
    // 0x204740: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204744:
    // 0x204744: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_204748:
    // 0x204748: 0x24c6f508  addiu       $a2, $a2, -0xAF8
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964488));
label_20474c:
    // 0x20474c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204750:
    // 0x204750: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_204754:
    // 0x204754: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_204758:
    // 0x204758: 0x683823  subu        $a3, $v1, $t0
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_20475c:
    // 0x20475c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20475cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204760:
    // 0x204760: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_204764:
    // 0x204764: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_204768:
    // 0x204768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20476c:
    // 0x20476c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_204770:
    // 0x204770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_204774:
    // 0x204774: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x204774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204778:
    // 0x204778: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_20477c:
    // 0x20477c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_204780:
    // 0x204780: 0x24c30000  addiu       $v1, $a2, 0x0
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_204784:
    // 0x204784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_204788:
    // 0x204788: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x204788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_20478c:
    // 0x20478c: 0x3e00008  jr          $ra
label_204790:
    if (ctx->pc == 0x204790u) {
        ctx->pc = 0x204794u;
        goto label_204794;
    }
    ctx->pc = 0x20478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204794u;
label_204794:
    // 0x204794: 0x0  nop
    ctx->pc = 0x204794u;
    // NOP
label_204798:
    // 0x204798: 0x0  nop
    ctx->pc = 0x204798u;
    // NOP
label_20479c:
    // 0x20479c: 0x0  nop
    ctx->pc = 0x20479cu;
    // NOP
label_2047a0:
    // 0x2047a0: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2047a4:
    // 0x2047a4: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x2047a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_2047a8:
    // 0x2047a8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_2047ac:
    // 0x2047ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2047b0:
    // 0x2047b0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_2047b4:
    // 0x2047b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2047b8:
    // 0x2047b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2047b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2047bc:
    // 0x2047bc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2047bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2047c0:
    // 0x2047c0: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2047c4:
    // 0x2047c4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2047c8:
    // 0x2047c8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2047cc:
    // 0x2047cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2047d0:
    // 0x2047d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2047d4:
    // 0x2047d4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2047d8:
    // 0x2047d8: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_2047dc:
    // 0x2047dc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2047dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_2047e0:
    // 0x2047e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2047e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2047e4:
    // 0x2047e4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2047e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2047e8:
    // 0x2047e8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2047e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_2047ec:
    // 0x2047ec: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2047ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_2047f0:
    // 0x2047f0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2047f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_2047f4:
    // 0x2047f4: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x2047f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
label_2047f8:
    // 0x2047f8: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x2047f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
label_2047fc:
    // 0x2047fc: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x2047fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
label_204800:
    // 0x204800: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
label_204804:
    // 0x204804: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
label_204808:
    // 0x204808: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x204808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
label_20480c:
    // 0x20480c: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x20480cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
label_204810:
    // 0x204810: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x204810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
label_204814:
    // 0x204814: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
label_204818:
    // 0x204818: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x204818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
label_20481c:
    // 0x20481c: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
label_204820:
    // 0x204820: 0x3e00008  jr          $ra
label_204824:
    if (ctx->pc == 0x204824u) {
        ctx->pc = 0x204824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204820u;
        // 0x204824: 0xace00144  sw          $zero, 0x144($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204828u;
        goto label_204828;
    }
    ctx->pc = 0x204820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204820u;
        // 0x204824: 0xace00144  sw          $zero, 0x144($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204828u;
label_204828:
    // 0x204828: 0x0  nop
    ctx->pc = 0x204828u;
    // NOP
label_20482c:
    // 0x20482c: 0x0  nop
    ctx->pc = 0x20482cu;
    // NOP
label_204830:
    // 0x204830: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_204834:
    if (ctx->pc == 0x204834u) {
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204838u;
        goto label_204838;
    }
    ctx->pc = 0x204830u;
    {
        const bool branch_taken_0x204830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204830) {
            ctx->pc = 0x2048B8u;
            { ctx->pc = 0x2048b8; return; }
        }
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20483c:
    // 0x20483c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_204840:
    // 0x204840: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_204844:
    // 0x204844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204848:
    // 0x204848: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20484c:
    // 0x20484c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20484cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204850:
    // 0x204850: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_204854:
    // 0x204854: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x204854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_204858:
    // 0x204858: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x204858u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_20485c:
    // 0x20485c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20485cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204860:
    // 0x204860: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_204864:
    // 0x204864: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204868:
    // 0x204868: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20486c:
    // 0x20486c: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_204870:
    // 0x204870: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x204870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_204874:
    // 0x204874: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x204874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_204878:
    // 0x204878: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x204878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20487c:
    // 0x20487c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x204880u;
    return;
}

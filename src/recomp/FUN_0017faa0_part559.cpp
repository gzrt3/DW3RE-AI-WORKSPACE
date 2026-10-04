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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part559(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x290200u: goto label_290200;
        case 0x290204u: goto label_290204;
        case 0x290208u: goto label_290208;
        case 0x29020cu: goto label_29020c;
        case 0x290210u: goto label_290210;
        case 0x290214u: goto label_290214;
        case 0x290218u: goto label_290218;
        case 0x29021cu: goto label_29021c;
        case 0x290220u: goto label_290220;
        case 0x290224u: goto label_290224;
        case 0x290228u: goto label_290228;
        case 0x29022cu: goto label_29022c;
        case 0x290230u: goto label_290230;
        case 0x290234u: goto label_290234;
        case 0x290238u: goto label_290238;
        case 0x29023cu: goto label_29023c;
        case 0x290240u: goto label_290240;
        case 0x290244u: goto label_290244;
        case 0x290248u: goto label_290248;
        case 0x29024cu: goto label_29024c;
        case 0x290250u: goto label_290250;
        case 0x290254u: goto label_290254;
        case 0x290258u: goto label_290258;
        case 0x29025cu: goto label_29025c;
        case 0x290260u: goto label_290260;
        case 0x290264u: goto label_290264;
        case 0x290268u: goto label_290268;
        case 0x29026cu: goto label_29026c;
        case 0x290270u: goto label_290270;
        case 0x290274u: goto label_290274;
        case 0x290278u: goto label_290278;
        case 0x29027cu: goto label_29027c;
        case 0x290280u: goto label_290280;
        case 0x290284u: goto label_290284;
        case 0x290288u: goto label_290288;
        case 0x29028cu: goto label_29028c;
        case 0x290290u: goto label_290290;
        case 0x290294u: goto label_290294;
        case 0x290298u: goto label_290298;
        case 0x29029cu: goto label_29029c;
        case 0x2902a0u: goto label_2902a0;
        case 0x2902a4u: goto label_2902a4;
        case 0x2902a8u: goto label_2902a8;
        case 0x2902acu: goto label_2902ac;
        case 0x2902b0u: goto label_2902b0;
        case 0x2902b4u: goto label_2902b4;
        case 0x2902b8u: goto label_2902b8;
        case 0x2902bcu: goto label_2902bc;
        case 0x2902c0u: goto label_2902c0;
        case 0x2902c4u: goto label_2902c4;
        case 0x2902c8u: goto label_2902c8;
        case 0x2902ccu: goto label_2902cc;
        case 0x2902d0u: goto label_2902d0;
        case 0x2902d4u: goto label_2902d4;
        case 0x2902d8u: goto label_2902d8;
        case 0x2902dcu: goto label_2902dc;
        case 0x2902e0u: goto label_2902e0;
        case 0x2902e4u: goto label_2902e4;
        case 0x2902e8u: goto label_2902e8;
        case 0x2902ecu: goto label_2902ec;
        case 0x2902f0u: goto label_2902f0;
        case 0x2902f4u: goto label_2902f4;
        case 0x2902f8u: goto label_2902f8;
        case 0x2902fcu: goto label_2902fc;
        case 0x290300u: goto label_290300;
        case 0x290304u: goto label_290304;
        case 0x290308u: goto label_290308;
        case 0x29030cu: goto label_29030c;
        case 0x290310u: goto label_290310;
        case 0x290314u: goto label_290314;
        case 0x290318u: goto label_290318;
        case 0x29031cu: goto label_29031c;
        case 0x290320u: goto label_290320;
        case 0x290324u: goto label_290324;
        case 0x290328u: goto label_290328;
        case 0x29032cu: goto label_29032c;
        case 0x290330u: goto label_290330;
        case 0x290334u: goto label_290334;
        case 0x290338u: goto label_290338;
        case 0x29033cu: goto label_29033c;
        case 0x290340u: goto label_290340;
        case 0x290344u: goto label_290344;
        case 0x290348u: goto label_290348;
        case 0x29034cu: goto label_29034c;
        case 0x290350u: goto label_290350;
        case 0x290354u: goto label_290354;
        case 0x290358u: goto label_290358;
        case 0x29035cu: goto label_29035c;
        case 0x290360u: goto label_290360;
        case 0x290364u: goto label_290364;
        case 0x290368u: goto label_290368;
        case 0x29036cu: goto label_29036c;
        case 0x290370u: goto label_290370;
        case 0x290374u: goto label_290374;
        case 0x290378u: goto label_290378;
        case 0x29037cu: goto label_29037c;
        case 0x290380u: goto label_290380;
        case 0x290384u: goto label_290384;
        case 0x290388u: goto label_290388;
        case 0x29038cu: goto label_29038c;
        case 0x290390u: goto label_290390;
        case 0x290394u: goto label_290394;
        case 0x290398u: goto label_290398;
        case 0x29039cu: goto label_29039c;
        case 0x2903a0u: goto label_2903a0;
        case 0x2903a4u: goto label_2903a4;
        case 0x2903a8u: goto label_2903a8;
        case 0x2903acu: goto label_2903ac;
        case 0x2903b0u: goto label_2903b0;
        case 0x2903b4u: goto label_2903b4;
        case 0x2903b8u: goto label_2903b8;
        case 0x2903bcu: goto label_2903bc;
        case 0x2903c0u: goto label_2903c0;
        case 0x2903c4u: goto label_2903c4;
        case 0x2903c8u: goto label_2903c8;
        case 0x2903ccu: goto label_2903cc;
        case 0x2903d0u: goto label_2903d0;
        case 0x2903d4u: goto label_2903d4;
        case 0x2903d8u: goto label_2903d8;
        case 0x2903dcu: goto label_2903dc;
        case 0x2903e0u: goto label_2903e0;
        case 0x2903e4u: goto label_2903e4;
        case 0x2903e8u: goto label_2903e8;
        case 0x2903ecu: goto label_2903ec;
        case 0x2903f0u: goto label_2903f0;
        case 0x2903f4u: goto label_2903f4;
        case 0x2903f8u: goto label_2903f8;
        case 0x2903fcu: goto label_2903fc;
        case 0x290400u: goto label_290400;
        case 0x290404u: goto label_290404;
        case 0x290408u: goto label_290408;
        case 0x29040cu: goto label_29040c;
        case 0x290410u: goto label_290410;
        case 0x290414u: goto label_290414;
        case 0x290418u: goto label_290418;
        case 0x29041cu: goto label_29041c;
        case 0x290420u: goto label_290420;
        case 0x290424u: goto label_290424;
        case 0x290428u: goto label_290428;
        case 0x29042cu: goto label_29042c;
        case 0x290430u: goto label_290430;
        case 0x290434u: goto label_290434;
        case 0x290438u: goto label_290438;
        case 0x29043cu: goto label_29043c;
        case 0x290440u: goto label_290440;
        case 0x290444u: goto label_290444;
        case 0x290448u: goto label_290448;
        case 0x29044cu: goto label_29044c;
        case 0x290450u: goto label_290450;
        case 0x290454u: goto label_290454;
        case 0x290458u: goto label_290458;
        case 0x29045cu: goto label_29045c;
        case 0x290460u: goto label_290460;
        case 0x290464u: goto label_290464;
        case 0x290468u: goto label_290468;
        case 0x29046cu: goto label_29046c;
        case 0x290470u: goto label_290470;
        case 0x290474u: goto label_290474;
        case 0x290478u: goto label_290478;
        case 0x29047cu: goto label_29047c;
        case 0x290480u: goto label_290480;
        case 0x290484u: goto label_290484;
        case 0x290488u: goto label_290488;
        case 0x29048cu: goto label_29048c;
        case 0x290490u: goto label_290490;
        case 0x290494u: goto label_290494;
        case 0x290498u: goto label_290498;
        case 0x29049cu: goto label_29049c;
        case 0x2904a0u: goto label_2904a0;
        case 0x2904a4u: goto label_2904a4;
        case 0x2904a8u: goto label_2904a8;
        case 0x2904acu: goto label_2904ac;
        case 0x2904b0u: goto label_2904b0;
        case 0x2904b4u: goto label_2904b4;
        case 0x2904b8u: goto label_2904b8;
        case 0x2904bcu: goto label_2904bc;
        case 0x2904c0u: goto label_2904c0;
        case 0x2904c4u: goto label_2904c4;
        case 0x2904c8u: goto label_2904c8;
        case 0x2904ccu: goto label_2904cc;
        case 0x2904d0u: goto label_2904d0;
        case 0x2904d4u: goto label_2904d4;
        case 0x2904d8u: goto label_2904d8;
        case 0x2904dcu: goto label_2904dc;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904e4u: goto label_2904e4;
        case 0x2904e8u: goto label_2904e8;
        case 0x2904ecu: goto label_2904ec;
        case 0x2904f0u: goto label_2904f0;
        case 0x2904f4u: goto label_2904f4;
        case 0x2904f8u: goto label_2904f8;
        case 0x2904fcu: goto label_2904fc;
        case 0x290500u: goto label_290500;
        case 0x290504u: goto label_290504;
        case 0x290508u: goto label_290508;
        case 0x29050cu: goto label_29050c;
        case 0x290510u: goto label_290510;
        case 0x290514u: goto label_290514;
        case 0x290518u: goto label_290518;
        case 0x29051cu: goto label_29051c;
        case 0x290520u: goto label_290520;
        case 0x290524u: goto label_290524;
        case 0x290528u: goto label_290528;
        case 0x29052cu: goto label_29052c;
        case 0x290530u: goto label_290530;
        case 0x290534u: goto label_290534;
        case 0x290538u: goto label_290538;
        case 0x29053cu: goto label_29053c;
        case 0x290540u: goto label_290540;
        case 0x290544u: goto label_290544;
        case 0x290548u: goto label_290548;
        case 0x29054cu: goto label_29054c;
        case 0x290550u: goto label_290550;
        case 0x290554u: goto label_290554;
        case 0x290558u: goto label_290558;
        case 0x29055cu: goto label_29055c;
        case 0x290560u: goto label_290560;
        case 0x290564u: goto label_290564;
        case 0x290568u: goto label_290568;
        case 0x29056cu: goto label_29056c;
        case 0x290570u: goto label_290570;
        case 0x290574u: goto label_290574;
        case 0x290578u: goto label_290578;
        case 0x29057cu: goto label_29057c;
        case 0x290580u: goto label_290580;
        case 0x290584u: goto label_290584;
        case 0x290588u: goto label_290588;
        case 0x29058cu: goto label_29058c;
        case 0x290590u: goto label_290590;
        case 0x290594u: goto label_290594;
        case 0x290598u: goto label_290598;
        case 0x29059cu: goto label_29059c;
        case 0x2905a0u: goto label_2905a0;
        case 0x2905a4u: goto label_2905a4;
        case 0x2905a8u: goto label_2905a8;
        case 0x2905acu: goto label_2905ac;
        case 0x2905b0u: goto label_2905b0;
        case 0x2905b4u: goto label_2905b4;
        case 0x2905b8u: goto label_2905b8;
        case 0x2905bcu: goto label_2905bc;
        case 0x2905c0u: goto label_2905c0;
        case 0x2905c4u: goto label_2905c4;
        case 0x2905c8u: goto label_2905c8;
        case 0x2905ccu: goto label_2905cc;
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d4u: goto label_2905d4;
        case 0x2905d8u: goto label_2905d8;
        case 0x2905dcu: goto label_2905dc;
        case 0x2905e0u: goto label_2905e0;
        case 0x2905e4u: goto label_2905e4;
        case 0x2905e8u: goto label_2905e8;
        case 0x2905ecu: goto label_2905ec;
        case 0x2905f0u: goto label_2905f0;
        case 0x2905f4u: goto label_2905f4;
        case 0x2905f8u: goto label_2905f8;
        case 0x2905fcu: goto label_2905fc;
        case 0x290600u: goto label_290600;
        case 0x290604u: goto label_290604;
        case 0x290608u: goto label_290608;
        case 0x29060cu: goto label_29060c;
        case 0x290610u: goto label_290610;
        case 0x290614u: goto label_290614;
        case 0x290618u: goto label_290618;
        case 0x29061cu: goto label_29061c;
        case 0x290620u: goto label_290620;
        case 0x290624u: goto label_290624;
        case 0x290628u: goto label_290628;
        case 0x29062cu: goto label_29062c;
        case 0x290630u: goto label_290630;
        case 0x290634u: goto label_290634;
        case 0x290638u: goto label_290638;
        case 0x29063cu: goto label_29063c;
        case 0x290640u: goto label_290640;
        case 0x290644u: goto label_290644;
        case 0x290648u: goto label_290648;
        case 0x29064cu: goto label_29064c;
        case 0x290650u: goto label_290650;
        case 0x290654u: goto label_290654;
        case 0x290658u: goto label_290658;
        case 0x29065cu: goto label_29065c;
        case 0x290660u: goto label_290660;
        case 0x290664u: goto label_290664;
        case 0x290668u: goto label_290668;
        case 0x29066cu: goto label_29066c;
        case 0x290670u: goto label_290670;
        case 0x290674u: goto label_290674;
        case 0x290678u: goto label_290678;
        case 0x29067cu: goto label_29067c;
        case 0x290680u: goto label_290680;
        case 0x290684u: goto label_290684;
        case 0x290688u: goto label_290688;
        case 0x29068cu: goto label_29068c;
        case 0x290690u: goto label_290690;
        case 0x290694u: goto label_290694;
        case 0x290698u: goto label_290698;
        case 0x29069cu: goto label_29069c;
        case 0x2906a0u: goto label_2906a0;
        case 0x2906a4u: goto label_2906a4;
        case 0x2906a8u: goto label_2906a8;
        case 0x2906acu: goto label_2906ac;
        case 0x2906b0u: goto label_2906b0;
        case 0x2906b4u: goto label_2906b4;
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        case 0x2906c0u: goto label_2906c0;
        case 0x2906c4u: goto label_2906c4;
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        case 0x290770u: goto label_290770;
        case 0x290774u: goto label_290774;
        case 0x290778u: goto label_290778;
        case 0x29077cu: goto label_29077c;
        case 0x290780u: goto label_290780;
        case 0x290784u: goto label_290784;
        case 0x290788u: goto label_290788;
        case 0x29078cu: goto label_29078c;
        case 0x290790u: goto label_290790;
        case 0x290794u: goto label_290794;
        case 0x290798u: goto label_290798;
        case 0x29079cu: goto label_29079c;
        case 0x2907a0u: goto label_2907a0;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907a8u: goto label_2907a8;
        case 0x2907acu: goto label_2907ac;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907b4u: goto label_2907b4;
        case 0x2907b8u: goto label_2907b8;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907c0u: goto label_2907c0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907c8u: goto label_2907c8;
        case 0x2907ccu: goto label_2907cc;
        case 0x2907d0u: goto label_2907d0;
        case 0x2907d4u: goto label_2907d4;
        case 0x2907d8u: goto label_2907d8;
        case 0x2907dcu: goto label_2907dc;
        case 0x2907e0u: goto label_2907e0;
        case 0x2907e4u: goto label_2907e4;
        case 0x2907e8u: goto label_2907e8;
        case 0x2907ecu: goto label_2907ec;
        case 0x2907f0u: goto label_2907f0;
        case 0x2907f4u: goto label_2907f4;
        case 0x2907f8u: goto label_2907f8;
        case 0x2907fcu: goto label_2907fc;
        case 0x290800u: goto label_290800;
        case 0x290804u: goto label_290804;
        case 0x290808u: goto label_290808;
        case 0x29080cu: goto label_29080c;
        case 0x290810u: goto label_290810;
        case 0x290814u: goto label_290814;
        case 0x290818u: goto label_290818;
        case 0x29081cu: goto label_29081c;
        case 0x290820u: goto label_290820;
        case 0x290824u: goto label_290824;
        case 0x290828u: goto label_290828;
        case 0x29082cu: goto label_29082c;
        case 0x290830u: goto label_290830;
        case 0x290834u: goto label_290834;
        case 0x290838u: goto label_290838;
        case 0x29083cu: goto label_29083c;
        case 0x290840u: goto label_290840;
        case 0x290844u: goto label_290844;
        case 0x290848u: goto label_290848;
        case 0x29084cu: goto label_29084c;
        case 0x290850u: goto label_290850;
        case 0x290854u: goto label_290854;
        case 0x290858u: goto label_290858;
        case 0x29085cu: goto label_29085c;
        case 0x290860u: goto label_290860;
        case 0x290864u: goto label_290864;
        case 0x290868u: goto label_290868;
        case 0x29086cu: goto label_29086c;
        case 0x290870u: goto label_290870;
        case 0x290874u: goto label_290874;
        case 0x290878u: goto label_290878;
        case 0x29087cu: goto label_29087c;
        case 0x290880u: goto label_290880;
        case 0x290884u: goto label_290884;
        case 0x290888u: goto label_290888;
        case 0x29088cu: goto label_29088c;
        case 0x290890u: goto label_290890;
        case 0x290894u: goto label_290894;
        case 0x290898u: goto label_290898;
        case 0x29089cu: goto label_29089c;
        case 0x2908a0u: goto label_2908a0;
        case 0x2908a4u: goto label_2908a4;
        case 0x2908a8u: goto label_2908a8;
        case 0x2908acu: goto label_2908ac;
        case 0x2908b0u: goto label_2908b0;
        case 0x2908b4u: goto label_2908b4;
        case 0x2908b8u: goto label_2908b8;
        case 0x2908bcu: goto label_2908bc;
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c4u: goto label_2908c4;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908ccu: goto label_2908cc;
        case 0x2908d0u: goto label_2908d0;
        case 0x2908d4u: goto label_2908d4;
        case 0x2908d8u: goto label_2908d8;
        case 0x2908dcu: goto label_2908dc;
        case 0x2908e0u: goto label_2908e0;
        case 0x2908e4u: goto label_2908e4;
        case 0x2908e8u: goto label_2908e8;
        case 0x2908ecu: goto label_2908ec;
        case 0x2908f0u: goto label_2908f0;
        case 0x2908f4u: goto label_2908f4;
        case 0x2908f8u: goto label_2908f8;
        case 0x2908fcu: goto label_2908fc;
        case 0x290900u: goto label_290900;
        case 0x290904u: goto label_290904;
        case 0x290908u: goto label_290908;
        case 0x29090cu: goto label_29090c;
        case 0x290910u: goto label_290910;
        case 0x290914u: goto label_290914;
        case 0x290918u: goto label_290918;
        case 0x29091cu: goto label_29091c;
        case 0x290920u: goto label_290920;
        case 0x290924u: goto label_290924;
        case 0x290928u: goto label_290928;
        case 0x29092cu: goto label_29092c;
        case 0x290930u: goto label_290930;
        case 0x290934u: goto label_290934;
        case 0x290938u: goto label_290938;
        case 0x29093cu: goto label_29093c;
        case 0x290940u: goto label_290940;
        case 0x290944u: goto label_290944;
        case 0x290948u: goto label_290948;
        case 0x29094cu: goto label_29094c;
        case 0x290950u: goto label_290950;
        case 0x290954u: goto label_290954;
        case 0x290958u: goto label_290958;
        case 0x29095cu: goto label_29095c;
        case 0x290960u: goto label_290960;
        case 0x290964u: goto label_290964;
        case 0x290968u: goto label_290968;
        case 0x29096cu: goto label_29096c;
        case 0x290970u: goto label_290970;
        case 0x290974u: goto label_290974;
        case 0x290978u: goto label_290978;
        case 0x29097cu: goto label_29097c;
        case 0x290980u: goto label_290980;
        case 0x290984u: goto label_290984;
        case 0x290988u: goto label_290988;
        case 0x29098cu: goto label_29098c;
        case 0x290990u: goto label_290990;
        case 0x290994u: goto label_290994;
        case 0x290998u: goto label_290998;
        case 0x29099cu: goto label_29099c;
        case 0x2909a0u: goto label_2909a0;
        case 0x2909a4u: goto label_2909a4;
        case 0x2909a8u: goto label_2909a8;
        case 0x2909acu: goto label_2909ac;
        case 0x2909b0u: goto label_2909b0;
        case 0x2909b4u: goto label_2909b4;
        case 0x2909b8u: goto label_2909b8;
        case 0x2909bcu: goto label_2909bc;
        case 0x2909c0u: goto label_2909c0;
        case 0x2909c4u: goto label_2909c4;
        case 0x2909c8u: goto label_2909c8;
        case 0x2909ccu: goto label_2909cc;
        default: return;
    }

label_290200:
    // 0x290200: 0x0  nop
    ctx->pc = 0x290200u;
    // NOP
label_290204:
    // 0x290204: 0x9  jalr        $zero, $zero
label_290208:
    if (ctx->pc == 0x290208u) {
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290208 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29020Cu;
        goto label_29020c;
    }
    ctx->pc = 0x290204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290208 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290204u, 0x29020Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29020Cu;
label_29020c:
    // 0x29020c: 0x0  nop
    ctx->pc = 0x29020cu;
    // NOP
label_290210:
    // 0x290210: 0x0  nop
    ctx->pc = 0x290210u;
    // NOP
label_290214:
    // 0x290214: 0x0  nop
    ctx->pc = 0x290214u;
    // NOP
label_290218:
    // 0x290218: 0x0  nop
    ctx->pc = 0x290218u;
    // NOP
label_29021c:
    // 0x29021c: 0x0  nop
    ctx->pc = 0x29021cu;
    // NOP
label_290220:
    // 0x290220: 0x9  jalr        $zero, $zero
label_290224:
    if (ctx->pc == 0x290224u) {
        ctx->pc = 0x290224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290220u;
        // 0x290224: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290228u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290228u;
        goto label_290228;
    }
    ctx->pc = 0x290220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290220u;
        // 0x290224: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290228u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290220u, 0x290228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290228u;
label_290228:
    // 0x290228: 0x11  mthi        $zero
    ctx->pc = 0x290228u;
    ctx->hi = GPR_U64(ctx, 0);
label_29022c:
    // 0x29022c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29022cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29022C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290230:
    // 0x290230: 0x0  nop
    ctx->pc = 0x290230u;
    // NOP
label_290234:
    // 0x290234: 0x0  nop
    ctx->pc = 0x290234u;
    // NOP
label_290238:
    // 0x290238: 0x0  nop
    ctx->pc = 0x290238u;
    // NOP
label_29023c:
    // 0x29023c: 0x9  jalr        $zero, $zero
label_290240:
    if (ctx->pc == 0x290240u) {
        ctx->pc = 0x290240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29023Cu;
        // 0x290240: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290244u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290244u;
        goto label_290244;
    }
    ctx->pc = 0x29023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29023Cu;
        // 0x290240: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290244u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29023Cu, 0x290244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290244u;
label_290244:
    // 0x290244: 0x11  mthi        $zero
    ctx->pc = 0x290244u;
    ctx->hi = GPR_U64(ctx, 0);
label_290248:
    // 0x290248: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x290248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x290248 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29024c:
    // 0x29024c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29024cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290250:
    // 0x290250: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290250 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290254:
    // 0x290254: 0x0  nop
    ctx->pc = 0x290254u;
    // NOP
label_290258:
    // 0x290258: 0x11  mthi        $zero
    ctx->pc = 0x290258u;
    ctx->hi = GPR_U64(ctx, 0);
label_29025c:
    // 0x29025c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29025cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29025C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290260:
    // 0x290260: 0x0  nop
    ctx->pc = 0x290260u;
    // NOP
label_290264:
    // 0x290264: 0x0  nop
    ctx->pc = 0x290264u;
    // NOP
label_290268:
    // 0x290268: 0x0  nop
    ctx->pc = 0x290268u;
    // NOP
label_29026c:
    // 0x29026c: 0x0  nop
    ctx->pc = 0x29026cu;
    // NOP
label_290270:
    // 0x290270: 0x0  nop
    ctx->pc = 0x290270u;
    // NOP
label_290274:
    // 0x290274: 0x11  mthi        $zero
    ctx->pc = 0x290274u;
    ctx->hi = GPR_U64(ctx, 0);
label_290278:
    // 0x290278: 0xc  syscall     0
    ctx->pc = 0x290278u;
    ctx->pc = 0x29027Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29027c:
    // 0x29027c: 0x13  mtlo        $zero
    ctx->pc = 0x29027cu;
    ctx->lo = GPR_U64(ctx, 0);
label_290280:
    // 0x290280: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290280 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290284:
    // 0x290284: 0x0  nop
    ctx->pc = 0x290284u;
    // NOP
label_290288:
    // 0x290288: 0x0  nop
    ctx->pc = 0x290288u;
    // NOP
label_29028c:
    // 0x29028c: 0x0  nop
    ctx->pc = 0x29028cu;
    // NOP
label_290290:
    // 0x290290: 0x11  mthi        $zero
    ctx->pc = 0x290290u;
    ctx->hi = GPR_U64(ctx, 0);
label_290294:
    // 0x290294: 0xc  syscall     0
    ctx->pc = 0x290294u;
    ctx->pc = 0x290298u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_290298:
    // 0x290298: 0x13  mtlo        $zero
    ctx->pc = 0x290298u;
    ctx->lo = GPR_U64(ctx, 0);
label_29029c:
    // 0x29029c: 0xf  sync
    ctx->pc = 0x29029cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2902a0:
    // 0x2902a0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2902a4:
    // 0x2902a4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2902A4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2902a8:
    // 0x2902a8: 0x0  nop
    ctx->pc = 0x2902a8u;
    // NOP
label_2902ac:
    // 0x2902ac: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2902acu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2902b0:
    // 0x2902b0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2902B0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2902b4:
    // 0x2902b4: 0x0  nop
    ctx->pc = 0x2902b4u;
    // NOP
label_2902b8:
    // 0x2902b8: 0x0  nop
    ctx->pc = 0x2902b8u;
    // NOP
label_2902bc:
    // 0x2902bc: 0x0  nop
    ctx->pc = 0x2902bcu;
    // NOP
label_2902c0:
    // 0x2902c0: 0x0  nop
    ctx->pc = 0x2902c0u;
    // NOP
label_2902c4:
    // 0x2902c4: 0x0  nop
    ctx->pc = 0x2902c4u;
    // NOP
label_2902c8:
    // 0x2902c8: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2902c8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2902cc:
    // 0x2902cc: 0x12  mflo        $zero
    ctx->pc = 0x2902ccu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2902d0:
    // 0x2902d0: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x2902d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2902d4:
    // 0x2902d4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2902D4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2902d8:
    // 0x2902d8: 0x0  nop
    ctx->pc = 0x2902d8u;
    // NOP
label_2902dc:
    // 0x2902dc: 0x0  nop
    ctx->pc = 0x2902dcu;
    // NOP
label_2902e0:
    // 0x2902e0: 0x0  nop
    ctx->pc = 0x2902e0u;
    // NOP
label_2902e4:
    // 0x2902e4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2902e4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2902e8:
    // 0x2902e8: 0x12  mflo        $zero
    ctx->pc = 0x2902e8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2902ec:
    // 0x2902ec: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x2902ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2902f0:
    // 0x2902f0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2902f4:
    // 0x2902f4: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2902f8:
    // 0x2902f8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2902f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2902F8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2902fc:
    // 0x2902fc: 0x0  nop
    ctx->pc = 0x2902fcu;
    // NOP
label_290300:
    // 0x290300: 0x12  mflo        $zero
    ctx->pc = 0x290300u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_290304:
    // 0x290304: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290304 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290308:
    // 0x290308: 0x0  nop
    ctx->pc = 0x290308u;
    // NOP
label_29030c:
    // 0x29030c: 0x0  nop
    ctx->pc = 0x29030cu;
    // NOP
label_290310:
    // 0x290310: 0x0  nop
    ctx->pc = 0x290310u;
    // NOP
label_290314:
    // 0x290314: 0x0  nop
    ctx->pc = 0x290314u;
    // NOP
label_290318:
    // 0x290318: 0x0  nop
    ctx->pc = 0x290318u;
    // NOP
label_29031c:
    // 0x29031c: 0x12  mflo        $zero
    ctx->pc = 0x29031cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_290320:
    // 0x290320: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x290320u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_290324:
    // 0x290324: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x290324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x290324 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290328:
    // 0x290328: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290328u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290328 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29032c:
    // 0x29032c: 0x0  nop
    ctx->pc = 0x29032cu;
    // NOP
label_290330:
    // 0x290330: 0x0  nop
    ctx->pc = 0x290330u;
    // NOP
label_290334:
    // 0x290334: 0x0  nop
    ctx->pc = 0x290334u;
    // NOP
label_290338:
    // 0x290338: 0x12  mflo        $zero
    ctx->pc = 0x290338u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29033c:
    // 0x29033c: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29033cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_290340:
    // 0x290340: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x290340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x290340 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290344:
    // 0x290344: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x290344u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_290348:
    // 0x290348: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290348u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29034c:
    // 0x29034c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29034cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29034C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290350:
    // 0x290350: 0x0  nop
    ctx->pc = 0x290350u;
    // NOP
label_290354:
    // 0x290354: 0x23  negu        $zero, $zero
    ctx->pc = 0x290354u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290358:
    // 0x290358: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290358u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290358 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29035c:
    // 0x29035c: 0x0  nop
    ctx->pc = 0x29035cu;
    // NOP
label_290360:
    // 0x290360: 0x0  nop
    ctx->pc = 0x290360u;
    // NOP
label_290364:
    // 0x290364: 0x0  nop
    ctx->pc = 0x290364u;
    // NOP
label_290368:
    // 0x290368: 0x0  nop
    ctx->pc = 0x290368u;
    // NOP
label_29036c:
    // 0x29036c: 0x0  nop
    ctx->pc = 0x29036cu;
    // NOP
label_290370:
    // 0x290370: 0x23  negu        $zero, $zero
    ctx->pc = 0x290370u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290374:
    // 0x290374: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x290374u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_290378:
    // 0x290378: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x290378u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29037c:
    // 0x29037c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29037cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29037C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290380:
    // 0x290380: 0x0  nop
    ctx->pc = 0x290380u;
    // NOP
label_290384:
    // 0x290384: 0x0  nop
    ctx->pc = 0x290384u;
    // NOP
label_290388:
    // 0x290388: 0x0  nop
    ctx->pc = 0x290388u;
    // NOP
label_29038c:
    // 0x29038c: 0x23  negu        $zero, $zero
    ctx->pc = 0x29038cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290390:
    // 0x290390: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x290390u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_290394:
    // 0x290394: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x290394u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_290398:
    // 0x290398: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29039c:
    // 0x29039c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29039cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2903a0:
    // 0x2903a0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2903a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2903A0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2903a4:
    // 0x2903a4: 0x0  nop
    ctx->pc = 0x2903a4u;
    // NOP
label_2903a8:
    // 0x2903a8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2903a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2903ac:
    // 0x2903ac: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2903acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2903AC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2903b0:
    // 0x2903b0: 0x0  nop
    ctx->pc = 0x2903b0u;
    // NOP
label_2903b4:
    // 0x2903b4: 0x0  nop
    ctx->pc = 0x2903b4u;
    // NOP
label_2903b8:
    // 0x2903b8: 0x0  nop
    ctx->pc = 0x2903b8u;
    // NOP
label_2903bc:
    // 0x2903bc: 0x0  nop
    ctx->pc = 0x2903bcu;
    // NOP
label_2903c0:
    // 0x2903c0: 0x0  nop
    ctx->pc = 0x2903c0u;
    // NOP
label_2903c4:
    // 0x2903c4: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2903c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2903c8:
    // 0x2903c8: 0x23  negu        $zero, $zero
    ctx->pc = 0x2903c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2903cc:
    // 0x2903cc: 0xd  break       0
    ctx->pc = 0x2903ccu;
    runtime->handleBreak(rdram, ctx);
label_2903d0:
    // 0x2903d0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2903d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2903D0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2903d4:
    // 0x2903d4: 0x0  nop
    ctx->pc = 0x2903d4u;
    // NOP
label_2903d8:
    // 0x2903d8: 0x0  nop
    ctx->pc = 0x2903d8u;
    // NOP
label_2903dc:
    // 0x2903dc: 0x0  nop
    ctx->pc = 0x2903dcu;
    // NOP
label_2903e0:
    // 0x2903e0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2903e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2903e4:
    // 0x2903e4: 0x23  negu        $zero, $zero
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2903e8:
    // 0x2903e8: 0xd  break       0
    ctx->pc = 0x2903e8u;
    runtime->handleBreak(rdram, ctx);
label_2903ec:
    // 0x2903ec: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x2903ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2903EC raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2903f0:
    // 0x2903f0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2903f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2903f4:
    // 0x2903f4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2903f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2903F4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2903f8:
    // 0x2903f8: 0x0  nop
    ctx->pc = 0x2903f8u;
    // NOP
label_2903fc:
    // 0x2903fc: 0x27  not         $zero, $zero
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_290400:
    // 0x290400: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290400 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290404:
    // 0x290404: 0x0  nop
    ctx->pc = 0x290404u;
    // NOP
label_290408:
    // 0x290408: 0x0  nop
    ctx->pc = 0x290408u;
    // NOP
label_29040c:
    // 0x29040c: 0x0  nop
    ctx->pc = 0x29040cu;
    // NOP
label_290410:
    // 0x290410: 0x0  nop
    ctx->pc = 0x290410u;
    // NOP
label_290414:
    // 0x290414: 0x0  nop
    ctx->pc = 0x290414u;
    // NOP
label_290418:
    // 0x290418: 0x27  not         $zero, $zero
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29041c:
    // 0x29041c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290420:
    // 0x290420: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290420 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290424:
    // 0x290424: 0x0  nop
    ctx->pc = 0x290424u;
    // NOP
label_290428:
    // 0x290428: 0x0  nop
    ctx->pc = 0x290428u;
    // NOP
label_29042c:
    // 0x29042c: 0x0  nop
    ctx->pc = 0x29042cu;
    // NOP
label_290430:
    // 0x290430: 0x0  nop
    ctx->pc = 0x290430u;
    // NOP
label_290434:
    // 0x290434: 0x0  nop
    ctx->pc = 0x290434u;
    // NOP
label_290438:
    // 0x290438: 0x0  nop
    ctx->pc = 0x290438u;
    // NOP
label_29043c:
    // 0x29043c: 0x0  nop
    ctx->pc = 0x29043cu;
    // NOP
label_290440:
    // 0x290440: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x290440u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290444:
    // 0x290444: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x290444u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_290448:
    // 0x290448: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290448u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290448 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29044c:
    // 0x29044c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29044cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29044C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290450:
    // 0x290450: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290454:
    // 0x290454: 0x8  jr          $zero
label_290458:
    if (ctx->pc == 0x290458u) {
        ctx->pc = 0x290458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290454u;
        // 0x290458: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x29045Cu;
        goto label_29045c;
    }
    ctx->pc = 0x290454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290454u;
        // 0x290458: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290454u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29045Cu;
label_29045c:
    // 0x29045c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29045cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290460:
    // 0x290460: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x290460 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290464:
    // 0x290464: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x290464 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290468:
    // 0x290468: 0x22  neg         $zero, $zero
    ctx->pc = 0x290468u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29046c:
    // 0x29046c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29046cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29046C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290470:
    // 0x290470: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x290470u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_290474:
    // 0x290474: 0x0  nop
    ctx->pc = 0x290474u;
    // NOP
label_290478:
    // 0x290478: 0x0  nop
    ctx->pc = 0x290478u;
    // NOP
label_29047c:
    // 0x29047c: 0x0  nop
    ctx->pc = 0x29047cu;
    // NOP
label_290480:
    // 0x290480: 0x0  nop
    ctx->pc = 0x290480u;
    // NOP
label_290484:
    // 0x290484: 0x0  nop
    ctx->pc = 0x290484u;
    // NOP
label_290488:
    // 0x290488: 0x0  nop
    ctx->pc = 0x290488u;
    // NOP
label_29048c:
    // 0x29048c: 0x0  nop
    ctx->pc = 0x29048cu;
    // NOP
label_290490:
    // 0x290490: 0x0  nop
    ctx->pc = 0x290490u;
    // NOP
label_290494:
    // 0x290494: 0x0  nop
    ctx->pc = 0x290494u;
    // NOP
label_290498:
    // 0x290498: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x290498u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x290498 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29049c:
    // 0x29049c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x29049cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2904a0:
    // 0x2904a0: 0x0  nop
    ctx->pc = 0x2904a0u;
    // NOP
label_2904a4:
    // 0x2904a4: 0x0  nop
    ctx->pc = 0x2904a4u;
    // NOP
label_2904a8:
    // 0x2904a8: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x2904a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2904ac:
    // 0x2904ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2904acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2904b0:
    // 0x2904b0: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2904b0u;
    
label_2904b4:
    // 0x2904b4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x2904b4u;
    
label_2904b8:
    // 0x2904b8: 0x0  nop
    ctx->pc = 0x2904b8u;
    // NOP
label_2904bc:
    // 0x2904bc: 0x1180  sll         $v0, $zero, 6
    ctx->pc = 0x2904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2904c0:
    // 0x2904c0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2904c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2904c4:
    // 0x2904c4: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2904c4u;
    
label_2904c8:
    // 0x2904c8: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2904c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2904cc:
    // 0x2904cc: 0x2010500  .word       0x02010500                   # sll         $zero, $at, 20 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2904ccu;
    
label_2904d0:
    // 0x2904d0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2904d0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2904d4:
    // 0x2904d4: 0x0  nop
    ctx->pc = 0x2904d4u;
    // NOP
label_2904d8:
    // 0x2904d8: 0x0  nop
    ctx->pc = 0x2904d8u;
    // NOP
label_2904dc:
    // 0x2904dc: 0x0  nop
    ctx->pc = 0x2904dcu;
    // NOP
label_2904e0:
    // 0x2904e0: 0x0  nop
    ctx->pc = 0x2904e0u;
    // NOP
label_2904e4:
    // 0x2904e4: 0x0  nop
    ctx->pc = 0x2904e4u;
    // NOP
label_2904e8:
    // 0x2904e8: 0x0  nop
    ctx->pc = 0x2904e8u;
    // NOP
label_2904ec:
    // 0x2904ec: 0x0  nop
    ctx->pc = 0x2904ecu;
    // NOP
label_2904f0:
    // 0x2904f0: 0x0  nop
    ctx->pc = 0x2904f0u;
    // NOP
label_2904f4:
    // 0x2904f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2904f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2904f8:
    // 0x2904f8: 0x0  nop
    ctx->pc = 0x2904f8u;
    // NOP
label_2904fc:
    // 0x2904fc: 0x0  nop
    ctx->pc = 0x2904fcu;
    // NOP
label_290500:
    // 0x290500: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x290500u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_290504:
    // 0x290504: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290504u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290508:
    // 0x290508: 0x0  nop
    ctx->pc = 0x290508u;
    // NOP
label_29050c:
    // 0x29050c: 0x0  nop
    ctx->pc = 0x29050cu;
    // NOP
label_290510:
    // 0x290510: 0x0  nop
    ctx->pc = 0x290510u;
    // NOP
label_290514:
    // 0x290514: 0x0  nop
    ctx->pc = 0x290514u;
    // NOP
label_290518:
    // 0x290518: 0x0  nop
    ctx->pc = 0x290518u;
    // NOP
label_29051c:
    // 0x29051c: 0x0  nop
    ctx->pc = 0x29051cu;
    // NOP
label_290520:
    // 0x290520: 0x0  nop
    ctx->pc = 0x290520u;
    // NOP
label_290524:
    // 0x290524: 0x0  nop
    ctx->pc = 0x290524u;
    // NOP
label_290528:
    // 0x290528: 0x0  nop
    ctx->pc = 0x290528u;
    // NOP
label_29052c:
    // 0x29052c: 0x29070c  .word       0x0029070C                   # syscall     28 # 00290000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29052cu;
    ctx->pc = 0x290530u;
runtime->handleSyscall(rdram, ctx, 0xA41Cu);
label_290530:
    // 0x290530: 0x290764  .word       0x00290764                   # and         $zero, $at, $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290530u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
label_290534:
    // 0x290534: 0x2907bc  .word       0x002907BC                   # dsll32      $zero, $t1, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290534u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) << (32 + 30));
label_290538:
    // 0x290538: 0x0  nop
    ctx->pc = 0x290538u;
    // NOP
label_29053c:
    // 0x29053c: 0x0  nop
    ctx->pc = 0x29053cu;
    // NOP
label_290540:
    // 0x290540: 0x0  nop
    ctx->pc = 0x290540u;
    // NOP
label_290544:
    // 0x290544: 0x0  nop
    ctx->pc = 0x290544u;
    // NOP
label_290548:
    // 0x290548: 0x0  nop
    ctx->pc = 0x290548u;
    // NOP
label_29054c:
    // 0x29054c: 0x0  nop
    ctx->pc = 0x29054cu;
    // NOP
label_290550:
    // 0x290550: 0x0  nop
    ctx->pc = 0x290550u;
    // NOP
label_290554:
    // 0x290554: 0x0  nop
    ctx->pc = 0x290554u;
    // NOP
label_290558:
    // 0x290558: 0x0  nop
    ctx->pc = 0x290558u;
    // NOP
label_29055c:
    // 0x29055c: 0x2ce358  .word       0x002CE358                   # mult        $gp, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29055cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_290560:
    // 0x290560: 0x0  nop
    ctx->pc = 0x290560u;
    // NOP
label_290564:
    // 0x290564: 0x0  nop
    ctx->pc = 0x290564u;
    // NOP
label_290568:
    // 0x290568: 0x0  nop
    ctx->pc = 0x290568u;
    // NOP
label_29056c:
    // 0x29056c: 0x0  nop
    ctx->pc = 0x29056cu;
    // NOP
label_290570:
    // 0x290570: 0x0  nop
    ctx->pc = 0x290570u;
    // NOP
label_290574:
    // 0x290574: 0x0  nop
    ctx->pc = 0x290574u;
    // NOP
label_290578:
    // 0x290578: 0x0  nop
    ctx->pc = 0x290578u;
    // NOP
label_29057c:
    // 0x29057c: 0x0  nop
    ctx->pc = 0x29057cu;
    // NOP
label_290580:
    // 0x290580: 0x0  nop
    ctx->pc = 0x290580u;
    // NOP
label_290584:
    // 0x290584: 0x0  nop
    ctx->pc = 0x290584u;
    // NOP
label_290588:
    // 0x290588: 0x0  nop
    ctx->pc = 0x290588u;
    // NOP
label_29058c:
    // 0x29058c: 0x0  nop
    ctx->pc = 0x29058cu;
    // NOP
label_290590:
    // 0x290590: 0x0  nop
    ctx->pc = 0x290590u;
    // NOP
label_290594:
    // 0x290594: 0x0  nop
    ctx->pc = 0x290594u;
    // NOP
label_290598:
    // 0x290598: 0x0  nop
    ctx->pc = 0x290598u;
    // NOP
label_29059c:
    // 0x29059c: 0x0  nop
    ctx->pc = 0x29059cu;
    // NOP
label_2905a0:
    // 0x2905a0: 0x0  nop
    ctx->pc = 0x2905a0u;
    // NOP
label_2905a4:
    // 0x2905a4: 0x0  nop
    ctx->pc = 0x2905a4u;
    // NOP
label_2905a8:
    // 0x2905a8: 0x0  nop
    ctx->pc = 0x2905a8u;
    // NOP
label_2905ac:
    // 0x2905ac: 0x0  nop
    ctx->pc = 0x2905acu;
    // NOP
label_2905b0:
    // 0x2905b0: 0x0  nop
    ctx->pc = 0x2905b0u;
    // NOP
label_2905b4:
    // 0x2905b4: 0x0  nop
    ctx->pc = 0x2905b4u;
    // NOP
label_2905b8:
    // 0x2905b8: 0x0  nop
    ctx->pc = 0x2905b8u;
    // NOP
label_2905bc:
    // 0x2905bc: 0x0  nop
    ctx->pc = 0x2905bcu;
    // NOP
label_2905c0:
    // 0x2905c0: 0x0  nop
    ctx->pc = 0x2905c0u;
    // NOP
label_2905c4:
    // 0x2905c4: 0x0  nop
    ctx->pc = 0x2905c4u;
    // NOP
label_2905c8:
    // 0x2905c8: 0x0  nop
    ctx->pc = 0x2905c8u;
    // NOP
label_2905cc:
    // 0x2905cc: 0x0  nop
    ctx->pc = 0x2905ccu;
    // NOP
label_2905d0:
    // 0x2905d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2905d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2905D0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2905d4:
    // 0x2905d4: 0x0  nop
    ctx->pc = 0x2905d4u;
    // NOP
label_2905d8:
    // 0x2905d8: 0x0  nop
    ctx->pc = 0x2905d8u;
    // NOP
label_2905dc:
    // 0x2905dc: 0x0  nop
    ctx->pc = 0x2905dcu;
    // NOP
label_2905e0:
    // 0x2905e0: 0x0  nop
    ctx->pc = 0x2905e0u;
    // NOP
label_2905e4:
    // 0x2905e4: 0x0  nop
    ctx->pc = 0x2905e4u;
    // NOP
label_2905e8:
    // 0x2905e8: 0x0  nop
    ctx->pc = 0x2905e8u;
    // NOP
label_2905ec:
    // 0x2905ec: 0x0  nop
    ctx->pc = 0x2905ecu;
    // NOP
label_2905f0:
    // 0x2905f0: 0x0  nop
    ctx->pc = 0x2905f0u;
    // NOP
label_2905f4:
    // 0x2905f4: 0x0  nop
    ctx->pc = 0x2905f4u;
    // NOP
label_2905f8:
    // 0x2905f8: 0x0  nop
    ctx->pc = 0x2905f8u;
    // NOP
label_2905fc:
    // 0x2905fc: 0x0  nop
    ctx->pc = 0x2905fcu;
    // NOP
label_290600:
    // 0x290600: 0x0  nop
    ctx->pc = 0x290600u;
    // NOP
label_290604:
    // 0x290604: 0x0  nop
    ctx->pc = 0x290604u;
    // NOP
label_290608:
    // 0x290608: 0x0  nop
    ctx->pc = 0x290608u;
    // NOP
label_29060c:
    // 0x29060c: 0x0  nop
    ctx->pc = 0x29060cu;
    // NOP
label_290610:
    // 0x290610: 0x0  nop
    ctx->pc = 0x290610u;
    // NOP
label_290614:
    // 0x290614: 0x0  nop
    ctx->pc = 0x290614u;
    // NOP
label_290618:
    // 0x290618: 0x0  nop
    ctx->pc = 0x290618u;
    // NOP
label_29061c:
    // 0x29061c: 0x0  nop
    ctx->pc = 0x29061cu;
    // NOP
label_290620:
    // 0x290620: 0x0  nop
    ctx->pc = 0x290620u;
    // NOP
label_290624:
    // 0x290624: 0x0  nop
    ctx->pc = 0x290624u;
    // NOP
label_290628:
    // 0x290628: 0x0  nop
    ctx->pc = 0x290628u;
    // NOP
label_29062c:
    // 0x29062c: 0x0  nop
    ctx->pc = 0x29062cu;
    // NOP
label_290630:
    // 0x290630: 0x0  nop
    ctx->pc = 0x290630u;
    // NOP
label_290634:
    // 0x290634: 0x0  nop
    ctx->pc = 0x290634u;
    // NOP
label_290638:
    // 0x290638: 0x0  nop
    ctx->pc = 0x290638u;
    // NOP
label_29063c:
    // 0x29063c: 0x0  nop
    ctx->pc = 0x29063cu;
    // NOP
label_290640:
    // 0x290640: 0x0  nop
    ctx->pc = 0x290640u;
    // NOP
label_290644:
    // 0x290644: 0x0  nop
    ctx->pc = 0x290644u;
    // NOP
label_290648:
    // 0x290648: 0x0  nop
    ctx->pc = 0x290648u;
    // NOP
label_29064c:
    // 0x29064c: 0x0  nop
    ctx->pc = 0x29064cu;
    // NOP
label_290650:
    // 0x290650: 0x0  nop
    ctx->pc = 0x290650u;
    // NOP
label_290654:
    // 0x290654: 0x0  nop
    ctx->pc = 0x290654u;
    // NOP
label_290658:
    // 0x290658: 0x0  nop
    ctx->pc = 0x290658u;
    // NOP
label_29065c:
    // 0x29065c: 0x0  nop
    ctx->pc = 0x29065cu;
    // NOP
label_290660:
    // 0x290660: 0x0  nop
    ctx->pc = 0x290660u;
    // NOP
label_290664:
    // 0x290664: 0x0  nop
    ctx->pc = 0x290664u;
    // NOP
label_290668:
    // 0x290668: 0x0  nop
    ctx->pc = 0x290668u;
    // NOP
label_29066c:
    // 0x29066c: 0x0  nop
    ctx->pc = 0x29066cu;
    // NOP
label_290670:
    // 0x290670: 0x0  nop
    ctx->pc = 0x290670u;
    // NOP
label_290674:
    // 0x290674: 0x0  nop
    ctx->pc = 0x290674u;
    // NOP
label_290678:
    // 0x290678: 0x0  nop
    ctx->pc = 0x290678u;
    // NOP
label_29067c:
    // 0x29067c: 0x0  nop
    ctx->pc = 0x29067cu;
    // NOP
label_290680:
    // 0x290680: 0x0  nop
    ctx->pc = 0x290680u;
    // NOP
label_290684:
    // 0x290684: 0x0  nop
    ctx->pc = 0x290684u;
    // NOP
label_290688:
    // 0x290688: 0x0  nop
    ctx->pc = 0x290688u;
    // NOP
label_29068c:
    // 0x29068c: 0x0  nop
    ctx->pc = 0x29068cu;
    // NOP
label_290690:
    // 0x290690: 0x0  nop
    ctx->pc = 0x290690u;
    // NOP
label_290694:
    // 0x290694: 0x0  nop
    ctx->pc = 0x290694u;
    // NOP
label_290698:
    // 0x290698: 0x0  nop
    ctx->pc = 0x290698u;
    // NOP
label_29069c:
    // 0x29069c: 0x0  nop
    ctx->pc = 0x29069cu;
    // NOP
label_2906a0:
    // 0x2906a0: 0x0  nop
    ctx->pc = 0x2906a0u;
    // NOP
label_2906a4:
    // 0x2906a4: 0x0  nop
    ctx->pc = 0x2906a4u;
    // NOP
label_2906a8:
    // 0x2906a8: 0x0  nop
    ctx->pc = 0x2906a8u;
    // NOP
label_2906ac:
    // 0x2906ac: 0x0  nop
    ctx->pc = 0x2906acu;
    // NOP
label_2906b0:
    // 0x2906b0: 0x0  nop
    ctx->pc = 0x2906b0u;
    // NOP
label_2906b4:
    // 0x2906b4: 0x0  nop
    ctx->pc = 0x2906b4u;
    // NOP
label_2906b8:
    // 0x2906b8: 0x0  nop
    ctx->pc = 0x2906b8u;
    // NOP
label_2906bc:
    // 0x2906bc: 0x0  nop
    ctx->pc = 0x2906bcu;
    // NOP
label_2906c0:
    // 0x2906c0: 0x0  nop
    ctx->pc = 0x2906c0u;
    // NOP
label_2906c4:
    // 0x2906c4: 0x0  nop
    ctx->pc = 0x2906c4u;
    // NOP
label_2906c8:
    // 0x2906c8: 0x0  nop
    ctx->pc = 0x2906c8u;
    // NOP
label_2906cc:
    // 0x2906cc: 0x0  nop
    ctx->pc = 0x2906ccu;
    // NOP
label_2906d0:
    // 0x2906d0: 0x0  nop
    ctx->pc = 0x2906d0u;
    // NOP
label_2906d4:
    // 0x2906d4: 0x0  nop
    ctx->pc = 0x2906d4u;
    // NOP
label_2906d8:
    // 0x2906d8: 0x0  nop
    ctx->pc = 0x2906d8u;
    // NOP
label_2906dc:
    // 0x2906dc: 0x0  nop
    ctx->pc = 0x2906dcu;
    // NOP
label_2906e0:
    // 0x2906e0: 0x0  nop
    ctx->pc = 0x2906e0u;
    // NOP
label_2906e4:
    // 0x2906e4: 0x0  nop
    ctx->pc = 0x2906e4u;
    // NOP
label_2906e8:
    // 0x2906e8: 0x0  nop
    ctx->pc = 0x2906e8u;
    // NOP
label_2906ec:
    // 0x2906ec: 0x0  nop
    ctx->pc = 0x2906ecu;
    // NOP
label_2906f0:
    // 0x2906f0: 0x0  nop
    ctx->pc = 0x2906f0u;
    // NOP
label_2906f4:
    // 0x2906f4: 0x0  nop
    ctx->pc = 0x2906f4u;
    // NOP
label_2906f8:
    // 0x2906f8: 0x0  nop
    ctx->pc = 0x2906f8u;
    // NOP
label_2906fc:
    // 0x2906fc: 0x0  nop
    ctx->pc = 0x2906fcu;
    // NOP
label_290700:
    // 0x290700: 0x0  nop
    ctx->pc = 0x290700u;
    // NOP
label_290704:
    // 0x290704: 0x0  nop
    ctx->pc = 0x290704u;
    // NOP
label_290708:
    // 0x290708: 0x0  nop
    ctx->pc = 0x290708u;
    // NOP
label_29070c:
    // 0x29070c: 0x0  nop
    ctx->pc = 0x29070cu;
    // NOP
label_290710:
    // 0x290710: 0x0  nop
    ctx->pc = 0x290710u;
    // NOP
label_290714:
    // 0x290714: 0x0  nop
    ctx->pc = 0x290714u;
    // NOP
label_290718:
    // 0x290718: 0x0  nop
    ctx->pc = 0x290718u;
    // NOP
label_29071c:
    // 0x29071c: 0x0  nop
    ctx->pc = 0x29071cu;
    // NOP
label_290720:
    // 0x290720: 0x0  nop
    ctx->pc = 0x290720u;
    // NOP
label_290724:
    // 0x290724: 0x0  nop
    ctx->pc = 0x290724u;
    // NOP
label_290728:
    // 0x290728: 0x0  nop
    ctx->pc = 0x290728u;
    // NOP
label_29072c:
    // 0x29072c: 0x0  nop
    ctx->pc = 0x29072cu;
    // NOP
label_290730:
    // 0x290730: 0x0  nop
    ctx->pc = 0x290730u;
    // NOP
label_290734:
    // 0x290734: 0x0  nop
    ctx->pc = 0x290734u;
    // NOP
label_290738:
    // 0x290738: 0x0  nop
    ctx->pc = 0x290738u;
    // NOP
label_29073c:
    // 0x29073c: 0x0  nop
    ctx->pc = 0x29073cu;
    // NOP
label_290740:
    // 0x290740: 0x0  nop
    ctx->pc = 0x290740u;
    // NOP
label_290744:
    // 0x290744: 0x0  nop
    ctx->pc = 0x290744u;
    // NOP
label_290748:
    // 0x290748: 0x0  nop
    ctx->pc = 0x290748u;
    // NOP
label_29074c:
    // 0x29074c: 0x0  nop
    ctx->pc = 0x29074cu;
    // NOP
label_290750:
    // 0x290750: 0x0  nop
    ctx->pc = 0x290750u;
    // NOP
label_290754:
    // 0x290754: 0x0  nop
    ctx->pc = 0x290754u;
    // NOP
label_290758:
    // 0x290758: 0x0  nop
    ctx->pc = 0x290758u;
    // NOP
label_29075c:
    // 0x29075c: 0x0  nop
    ctx->pc = 0x29075cu;
    // NOP
label_290760:
    // 0x290760: 0x0  nop
    ctx->pc = 0x290760u;
    // NOP
label_290764:
    // 0x290764: 0x0  nop
    ctx->pc = 0x290764u;
    // NOP
label_290768:
    // 0x290768: 0x0  nop
    ctx->pc = 0x290768u;
    // NOP
label_29076c:
    // 0x29076c: 0x0  nop
    ctx->pc = 0x29076cu;
    // NOP
label_290770:
    // 0x290770: 0x0  nop
    ctx->pc = 0x290770u;
    // NOP
label_290774:
    // 0x290774: 0x0  nop
    ctx->pc = 0x290774u;
    // NOP
label_290778:
    // 0x290778: 0x0  nop
    ctx->pc = 0x290778u;
    // NOP
label_29077c:
    // 0x29077c: 0x0  nop
    ctx->pc = 0x29077cu;
    // NOP
label_290780:
    // 0x290780: 0x0  nop
    ctx->pc = 0x290780u;
    // NOP
label_290784:
    // 0x290784: 0x0  nop
    ctx->pc = 0x290784u;
    // NOP
label_290788:
    // 0x290788: 0x0  nop
    ctx->pc = 0x290788u;
    // NOP
label_29078c:
    // 0x29078c: 0x0  nop
    ctx->pc = 0x29078cu;
    // NOP
label_290790:
    // 0x290790: 0x0  nop
    ctx->pc = 0x290790u;
    // NOP
label_290794:
    // 0x290794: 0x0  nop
    ctx->pc = 0x290794u;
    // NOP
label_290798:
    // 0x290798: 0x0  nop
    ctx->pc = 0x290798u;
    // NOP
label_29079c:
    // 0x29079c: 0x0  nop
    ctx->pc = 0x29079cu;
    // NOP
label_2907a0:
    // 0x2907a0: 0x0  nop
    ctx->pc = 0x2907a0u;
    // NOP
label_2907a4:
    // 0x2907a4: 0x0  nop
    ctx->pc = 0x2907a4u;
    // NOP
label_2907a8:
    // 0x2907a8: 0x0  nop
    ctx->pc = 0x2907a8u;
    // NOP
label_2907ac:
    // 0x2907ac: 0x0  nop
    ctx->pc = 0x2907acu;
    // NOP
label_2907b0:
    // 0x2907b0: 0x0  nop
    ctx->pc = 0x2907b0u;
    // NOP
label_2907b4:
    // 0x2907b4: 0x0  nop
    ctx->pc = 0x2907b4u;
    // NOP
label_2907b8:
    // 0x2907b8: 0x0  nop
    ctx->pc = 0x2907b8u;
    // NOP
label_2907bc:
    // 0x2907bc: 0x0  nop
    ctx->pc = 0x2907bcu;
    // NOP
label_2907c0:
    // 0x2907c0: 0x0  nop
    ctx->pc = 0x2907c0u;
    // NOP
label_2907c4:
    // 0x2907c4: 0x0  nop
    ctx->pc = 0x2907c4u;
    // NOP
label_2907c8:
    // 0x2907c8: 0x0  nop
    ctx->pc = 0x2907c8u;
    // NOP
label_2907cc:
    // 0x2907cc: 0x0  nop
    ctx->pc = 0x2907ccu;
    // NOP
label_2907d0:
    // 0x2907d0: 0x0  nop
    ctx->pc = 0x2907d0u;
    // NOP
label_2907d4:
    // 0x2907d4: 0x0  nop
    ctx->pc = 0x2907d4u;
    // NOP
label_2907d8:
    // 0x2907d8: 0x0  nop
    ctx->pc = 0x2907d8u;
    // NOP
label_2907dc:
    // 0x2907dc: 0x0  nop
    ctx->pc = 0x2907dcu;
    // NOP
label_2907e0:
    // 0x2907e0: 0x0  nop
    ctx->pc = 0x2907e0u;
    // NOP
label_2907e4:
    // 0x2907e4: 0x0  nop
    ctx->pc = 0x2907e4u;
    // NOP
label_2907e8:
    // 0x2907e8: 0x0  nop
    ctx->pc = 0x2907e8u;
    // NOP
label_2907ec:
    // 0x2907ec: 0x0  nop
    ctx->pc = 0x2907ecu;
    // NOP
label_2907f0:
    // 0x2907f0: 0x0  nop
    ctx->pc = 0x2907f0u;
    // NOP
label_2907f4:
    // 0x2907f4: 0x0  nop
    ctx->pc = 0x2907f4u;
    // NOP
label_2907f8:
    // 0x2907f8: 0x0  nop
    ctx->pc = 0x2907f8u;
    // NOP
label_2907fc:
    // 0x2907fc: 0x0  nop
    ctx->pc = 0x2907fcu;
    // NOP
label_290800:
    // 0x290800: 0x0  nop
    ctx->pc = 0x290800u;
    // NOP
label_290804:
    // 0x290804: 0x0  nop
    ctx->pc = 0x290804u;
    // NOP
label_290808:
    // 0x290808: 0x0  nop
    ctx->pc = 0x290808u;
    // NOP
label_29080c:
    // 0x29080c: 0x0  nop
    ctx->pc = 0x29080cu;
    // NOP
label_290810:
    // 0x290810: 0x0  nop
    ctx->pc = 0x290810u;
    // NOP
label_290814:
    // 0x290814: 0x0  nop
    ctx->pc = 0x290814u;
    // NOP
label_290818:
    // 0x290818: 0x290528  .word       0x00290528                   # mfsa        $zero # 00290500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290818u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29081c:
    // 0x29081c: 0x0  nop
    ctx->pc = 0x29081cu;
    // NOP
label_290820:
    // 0x290820: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x290820 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290824:
    // 0x290824: 0x0  nop
    ctx->pc = 0x290824u;
    // NOP
label_290828:
    // 0x290828: 0x0  nop
    ctx->pc = 0x290828u;
    // NOP
label_29082c:
    // 0x29082c: 0x0  nop
    ctx->pc = 0x29082cu;
    // NOP
label_290830:
    // 0x290830: 0x290828  .word       0x00290828                   # mfsa        $at # 00290000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290830u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290834:
    // 0x290834: 0x290828  .word       0x00290828                   # mfsa        $at # 00290000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290834u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290838:
    // 0x290838: 0x290830  tge         $at, $t1, 32
    ctx->pc = 0x290838u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29083c:
    // 0x29083c: 0x290830  tge         $at, $t1, 32
    ctx->pc = 0x29083cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290840:
    // 0x290840: 0x290838  .word       0x00290838                   # dsll        $at, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 0);
label_290844:
    // 0x290844: 0x290838  .word       0x00290838                   # dsll        $at, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 0);
label_290848:
    // 0x290848: 0x290840  .word       0x00290840                   # sll         $at, $t1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290848u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_29084c:
    // 0x29084c: 0x290840  .word       0x00290840                   # sll         $at, $t1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29084cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_290850:
    // 0x290850: 0x290848  .word       0x00290848                   # jr          $at # 00090840 <InstrIdType: CPU_SPECIAL>
label_290854:
    if (ctx->pc == 0x290854u) {
        ctx->pc = 0x290854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290850u;
        // 0x290854: 0x290848  .word       0x00290848                   # jr          $at # 00090840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290858u;
        goto label_290858;
    }
    ctx->pc = 0x290850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290850u;
        // 0x290854: 0x290848  .word       0x00290848                   # jr          $at # 00090840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290850u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290858u;
label_290858:
    // 0x290858: 0x290850  .word       0x00290850                   # mfhi        $at # 00290040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290858u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29085c:
    // 0x29085c: 0x290850  .word       0x00290850                   # mfhi        $at # 00290040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29085cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290860:
    // 0x290860: 0x290858  .word       0x00290858                   # mult        $at, $at, $t1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290864:
    // 0x290864: 0x290858  .word       0x00290858                   # mult        $at, $at, $t1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290868:
    // 0x290868: 0x290860  .word       0x00290860                   # add         $at, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290868u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29086c:
    // 0x29086c: 0x290860  .word       0x00290860                   # add         $at, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29086cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290870:
    // 0x290870: 0x290868  .word       0x00290868                   # mfsa        $at # 00290040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290870u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290874:
    // 0x290874: 0x290868  .word       0x00290868                   # mfsa        $at # 00290040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290874u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290878:
    // 0x290878: 0x290870  tge         $at, $t1, 33
    ctx->pc = 0x290878u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29087c:
    // 0x29087c: 0x290870  tge         $at, $t1, 33
    ctx->pc = 0x29087cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290880:
    // 0x290880: 0x290878  .word       0x00290878                   # dsll        $at, $t1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 1);
label_290884:
    // 0x290884: 0x290878  .word       0x00290878                   # dsll        $at, $t1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 1);
label_290888:
    // 0x290888: 0x290880  .word       0x00290880                   # sll         $at, $t1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290888u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_29088c:
    // 0x29088c: 0x290880  .word       0x00290880                   # sll         $at, $t1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29088cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_290890:
    // 0x290890: 0x290888  .word       0x00290888                   # jr          $at # 00090880 <InstrIdType: CPU_SPECIAL>
label_290894:
    if (ctx->pc == 0x290894u) {
        ctx->pc = 0x290894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290890u;
        // 0x290894: 0x290888  .word       0x00290888                   # jr          $at # 00090880 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290898u;
        goto label_290898;
    }
    ctx->pc = 0x290890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290890u;
        // 0x290894: 0x290888  .word       0x00290888                   # jr          $at # 00090880 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290898u;
label_290898:
    // 0x290898: 0x290890  .word       0x00290890                   # mfhi        $at # 00290080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290898u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29089c:
    // 0x29089c: 0x290890  .word       0x00290890                   # mfhi        $at # 00290080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29089cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2908a0:
    // 0x2908a0: 0x290898  .word       0x00290898                   # mult        $at, $at, $t1 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2908a4:
    // 0x2908a4: 0x290898  .word       0x00290898                   # mult        $at, $at, $t1 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2908a8:
    // 0x2908a8: 0x2908a0  .word       0x002908A0                   # add         $at, $at, $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2908ac:
    // 0x2908ac: 0x2908a0  .word       0x002908A0                   # add         $at, $at, $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2908b0:
    // 0x2908b0: 0x2908a8  .word       0x002908A8                   # mfsa        $at # 00290080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908b0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2908b4:
    // 0x2908b4: 0x2908a8  .word       0x002908A8                   # mfsa        $at # 00290080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908b4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2908b8:
    // 0x2908b8: 0x2908b0  tge         $at, $t1, 34
    ctx->pc = 0x2908b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2908bc:
    // 0x2908bc: 0x2908b0  tge         $at, $t1, 34
    ctx->pc = 0x2908bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2908c0:
    // 0x2908c0: 0x2908b8  .word       0x002908B8                   # dsll        $at, $t1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 2);
label_2908c4:
    // 0x2908c4: 0x2908b8  .word       0x002908B8                   # dsll        $at, $t1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 2);
label_2908c8:
    // 0x2908c8: 0x2908c0  .word       0x002908C0                   # sll         $at, $t1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2908cc:
    // 0x2908cc: 0x2908c0  .word       0x002908C0                   # sll         $at, $t1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2908d0:
    // 0x2908d0: 0x2908c8  .word       0x002908C8                   # jr          $at # 000908C0 <InstrIdType: CPU_SPECIAL>
label_2908d4:
    if (ctx->pc == 0x2908D4u) {
        ctx->pc = 0x2908D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908D0u;
        // 0x2908d4: 0x2908c8  .word       0x002908C8                   # jr          $at # 000908C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908D8u;
        goto label_2908d8;
    }
    ctx->pc = 0x2908D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2908D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908D0u;
        // 0x2908d4: 0x2908c8  .word       0x002908C8                   # jr          $at # 000908C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2908D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2908D8u;
label_2908d8:
    // 0x2908d8: 0x2908d0  .word       0x002908D0                   # mfhi        $at # 002900C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908d8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2908dc:
    // 0x2908dc: 0x2908d0  .word       0x002908D0                   # mfhi        $at # 002900C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908dcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2908e0:
    // 0x2908e0: 0x2908d8  .word       0x002908D8                   # mult        $at, $at, $t1 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2908e4:
    // 0x2908e4: 0x2908d8  .word       0x002908D8                   # mult        $at, $at, $t1 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2908e8:
    // 0x2908e8: 0x2908e0  .word       0x002908E0                   # add         $at, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2908ec:
    // 0x2908ec: 0x2908e0  .word       0x002908E0                   # add         $at, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2908ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2908f0:
    // 0x2908f0: 0x2908e8  .word       0x002908E8                   # mfsa        $at # 002900C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908f0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2908f4:
    // 0x2908f4: 0x2908e8  .word       0x002908E8                   # mfsa        $at # 002900C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2908f4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2908f8:
    // 0x2908f8: 0x2908f0  tge         $at, $t1, 35
    ctx->pc = 0x2908f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2908fc:
    // 0x2908fc: 0x2908f0  tge         $at, $t1, 35
    ctx->pc = 0x2908fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290900:
    // 0x290900: 0x2908f8  .word       0x002908F8                   # dsll        $at, $t1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 3);
label_290904:
    // 0x290904: 0x2908f8  .word       0x002908F8                   # dsll        $at, $t1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 3);
label_290908:
    // 0x290908: 0x290900  .word       0x00290900                   # sll         $at, $t1, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290908u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_29090c:
    // 0x29090c: 0x290900  .word       0x00290900                   # sll         $at, $t1, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29090cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_290910:
    // 0x290910: 0x290908  .word       0x00290908                   # jr          $at # 00090900 <InstrIdType: CPU_SPECIAL>
label_290914:
    if (ctx->pc == 0x290914u) {
        ctx->pc = 0x290914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290910u;
        // 0x290914: 0x290908  .word       0x00290908                   # jr          $at # 00090900 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290918u;
        goto label_290918;
    }
    ctx->pc = 0x290910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290910u;
        // 0x290914: 0x290908  .word       0x00290908                   # jr          $at # 00090900 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290918u;
label_290918:
    // 0x290918: 0x290910  .word       0x00290910                   # mfhi        $at # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290918u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29091c:
    // 0x29091c: 0x290910  .word       0x00290910                   # mfhi        $at # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29091cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290920:
    // 0x290920: 0x290918  .word       0x00290918                   # mult        $at, $at, $t1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290924:
    // 0x290924: 0x290918  .word       0x00290918                   # mult        $at, $at, $t1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290928:
    // 0x290928: 0x290920  .word       0x00290920                   # add         $at, $at, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290928u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29092c:
    // 0x29092c: 0x290920  .word       0x00290920                   # add         $at, $at, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29092cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290930:
    // 0x290930: 0x290928  .word       0x00290928                   # mfsa        $at # 00290100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290930u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290934:
    // 0x290934: 0x290928  .word       0x00290928                   # mfsa        $at # 00290100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290934u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290938:
    // 0x290938: 0x290930  tge         $at, $t1, 36
    ctx->pc = 0x290938u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29093c:
    // 0x29093c: 0x290930  tge         $at, $t1, 36
    ctx->pc = 0x29093cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290940:
    // 0x290940: 0x290938  .word       0x00290938                   # dsll        $at, $t1, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 4);
label_290944:
    // 0x290944: 0x290938  .word       0x00290938                   # dsll        $at, $t1, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 4);
label_290948:
    // 0x290948: 0x290940  .word       0x00290940                   # sll         $at, $t1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290948u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_29094c:
    // 0x29094c: 0x290940  .word       0x00290940                   # sll         $at, $t1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29094cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_290950:
    // 0x290950: 0x290948  .word       0x00290948                   # jr          $at # 00090940 <InstrIdType: CPU_SPECIAL>
label_290954:
    if (ctx->pc == 0x290954u) {
        ctx->pc = 0x290954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290950u;
        // 0x290954: 0x290948  .word       0x00290948                   # jr          $at # 00090940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290958u;
        goto label_290958;
    }
    ctx->pc = 0x290950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290950u;
        // 0x290954: 0x290948  .word       0x00290948                   # jr          $at # 00090940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290958u;
label_290958:
    // 0x290958: 0x290950  .word       0x00290950                   # mfhi        $at # 00290140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290958u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29095c:
    // 0x29095c: 0x290950  .word       0x00290950                   # mfhi        $at # 00290140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29095cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290960:
    // 0x290960: 0x290958  .word       0x00290958                   # mult        $at, $at, $t1 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290964:
    // 0x290964: 0x290958  .word       0x00290958                   # mult        $at, $at, $t1 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290968:
    // 0x290968: 0x290960  .word       0x00290960                   # add         $at, $at, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290968u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29096c:
    // 0x29096c: 0x290960  .word       0x00290960                   # add         $at, $at, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29096cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290970:
    // 0x290970: 0x290968  .word       0x00290968                   # mfsa        $at # 00290140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290970u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290974:
    // 0x290974: 0x290968  .word       0x00290968                   # mfsa        $at # 00290140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290974u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290978:
    // 0x290978: 0x290970  tge         $at, $t1, 37
    ctx->pc = 0x290978u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29097c:
    // 0x29097c: 0x290970  tge         $at, $t1, 37
    ctx->pc = 0x29097cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290980:
    // 0x290980: 0x290978  .word       0x00290978                   # dsll        $at, $t1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 5);
label_290984:
    // 0x290984: 0x290978  .word       0x00290978                   # dsll        $at, $t1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 5);
label_290988:
    // 0x290988: 0x290980  .word       0x00290980                   # sll         $at, $t1, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290988u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_29098c:
    // 0x29098c: 0x290980  .word       0x00290980                   # sll         $at, $t1, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_290990:
    // 0x290990: 0x290988  .word       0x00290988                   # jr          $at # 00090980 <InstrIdType: CPU_SPECIAL>
label_290994:
    if (ctx->pc == 0x290994u) {
        ctx->pc = 0x290994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290990u;
        // 0x290994: 0x290988  .word       0x00290988                   # jr          $at # 00090980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290998u;
        goto label_290998;
    }
    ctx->pc = 0x290990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290990u;
        // 0x290994: 0x290988  .word       0x00290988                   # jr          $at # 00090980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290998u;
label_290998:
    // 0x290998: 0x290990  .word       0x00290990                   # mfhi        $at # 00290180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290998u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29099c:
    // 0x29099c: 0x290990  .word       0x00290990                   # mfhi        $at # 00290180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29099cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2909a0:
    // 0x2909a0: 0x290998  .word       0x00290998                   # mult        $at, $at, $t1 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2909a4:
    // 0x2909a4: 0x290998  .word       0x00290998                   # mult        $at, $at, $t1 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2909a8:
    // 0x2909a8: 0x2909a0  .word       0x002909A0                   # add         $at, $at, $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2909ac:
    // 0x2909ac: 0x2909a0  .word       0x002909A0                   # add         $at, $at, $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2909b0:
    // 0x2909b0: 0x2909a8  .word       0x002909A8                   # mfsa        $at # 00290180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909b0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2909b4:
    // 0x2909b4: 0x2909a8  .word       0x002909A8                   # mfsa        $at # 00290180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909b4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2909b8:
    // 0x2909b8: 0x2909b0  tge         $at, $t1, 38
    ctx->pc = 0x2909b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2909bc:
    // 0x2909bc: 0x2909b0  tge         $at, $t1, 38
    ctx->pc = 0x2909bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2909c0:
    // 0x2909c0: 0x2909b8  .word       0x002909B8                   # dsll        $at, $t1, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 6);
label_2909c4:
    // 0x2909c4: 0x2909b8  .word       0x002909B8                   # dsll        $at, $t1, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 6);
label_2909c8:
    // 0x2909c8: 0x2909c0  .word       0x002909C0                   # sll         $at, $t1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_2909cc:
    // 0x2909cc: 0x2909c0  .word       0x002909C0                   # sll         $at, $t1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    ctx->pc = 0x2909d0u;
    return;
}

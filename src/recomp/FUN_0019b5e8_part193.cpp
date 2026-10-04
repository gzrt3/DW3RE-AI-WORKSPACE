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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part193(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f9390u: goto label_1f9390;
        case 0x1f9394u: goto label_1f9394;
        case 0x1f9398u: goto label_1f9398;
        case 0x1f939cu: goto label_1f939c;
        case 0x1f93a0u: goto label_1f93a0;
        case 0x1f93a4u: goto label_1f93a4;
        case 0x1f93a8u: goto label_1f93a8;
        case 0x1f93acu: goto label_1f93ac;
        case 0x1f93b0u: goto label_1f93b0;
        case 0x1f93b4u: goto label_1f93b4;
        case 0x1f93b8u: goto label_1f93b8;
        case 0x1f93bcu: goto label_1f93bc;
        case 0x1f93c0u: goto label_1f93c0;
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f93ccu: goto label_1f93cc;
        case 0x1f93d0u: goto label_1f93d0;
        case 0x1f93d4u: goto label_1f93d4;
        case 0x1f93d8u: goto label_1f93d8;
        case 0x1f93dcu: goto label_1f93dc;
        case 0x1f93e0u: goto label_1f93e0;
        case 0x1f93e4u: goto label_1f93e4;
        case 0x1f93e8u: goto label_1f93e8;
        case 0x1f93ecu: goto label_1f93ec;
        case 0x1f93f0u: goto label_1f93f0;
        case 0x1f93f4u: goto label_1f93f4;
        case 0x1f93f8u: goto label_1f93f8;
        case 0x1f93fcu: goto label_1f93fc;
        case 0x1f9400u: goto label_1f9400;
        case 0x1f9404u: goto label_1f9404;
        case 0x1f9408u: goto label_1f9408;
        case 0x1f940cu: goto label_1f940c;
        case 0x1f9410u: goto label_1f9410;
        case 0x1f9414u: goto label_1f9414;
        case 0x1f9418u: goto label_1f9418;
        case 0x1f941cu: goto label_1f941c;
        case 0x1f9420u: goto label_1f9420;
        case 0x1f9424u: goto label_1f9424;
        case 0x1f9428u: goto label_1f9428;
        case 0x1f942cu: goto label_1f942c;
        case 0x1f9430u: goto label_1f9430;
        case 0x1f9434u: goto label_1f9434;
        case 0x1f9438u: goto label_1f9438;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9444u: goto label_1f9444;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f944cu: goto label_1f944c;
        case 0x1f9450u: goto label_1f9450;
        case 0x1f9454u: goto label_1f9454;
        case 0x1f9458u: goto label_1f9458;
        case 0x1f945cu: goto label_1f945c;
        case 0x1f9460u: goto label_1f9460;
        case 0x1f9464u: goto label_1f9464;
        case 0x1f9468u: goto label_1f9468;
        case 0x1f946cu: goto label_1f946c;
        case 0x1f9470u: goto label_1f9470;
        case 0x1f9474u: goto label_1f9474;
        case 0x1f9478u: goto label_1f9478;
        case 0x1f947cu: goto label_1f947c;
        case 0x1f9480u: goto label_1f9480;
        case 0x1f9484u: goto label_1f9484;
        case 0x1f9488u: goto label_1f9488;
        case 0x1f948cu: goto label_1f948c;
        case 0x1f9490u: goto label_1f9490;
        case 0x1f9494u: goto label_1f9494;
        case 0x1f9498u: goto label_1f9498;
        case 0x1f949cu: goto label_1f949c;
        case 0x1f94a0u: goto label_1f94a0;
        case 0x1f94a4u: goto label_1f94a4;
        case 0x1f94a8u: goto label_1f94a8;
        case 0x1f94acu: goto label_1f94ac;
        case 0x1f94b0u: goto label_1f94b0;
        case 0x1f94b4u: goto label_1f94b4;
        case 0x1f94b8u: goto label_1f94b8;
        case 0x1f94bcu: goto label_1f94bc;
        case 0x1f94c0u: goto label_1f94c0;
        case 0x1f94c4u: goto label_1f94c4;
        case 0x1f94c8u: goto label_1f94c8;
        case 0x1f94ccu: goto label_1f94cc;
        case 0x1f94d0u: goto label_1f94d0;
        case 0x1f94d4u: goto label_1f94d4;
        case 0x1f94d8u: goto label_1f94d8;
        case 0x1f94dcu: goto label_1f94dc;
        case 0x1f94e0u: goto label_1f94e0;
        case 0x1f94e4u: goto label_1f94e4;
        case 0x1f94e8u: goto label_1f94e8;
        case 0x1f94ecu: goto label_1f94ec;
        case 0x1f94f0u: goto label_1f94f0;
        case 0x1f94f4u: goto label_1f94f4;
        case 0x1f94f8u: goto label_1f94f8;
        case 0x1f94fcu: goto label_1f94fc;
        case 0x1f9500u: goto label_1f9500;
        case 0x1f9504u: goto label_1f9504;
        case 0x1f9508u: goto label_1f9508;
        case 0x1f950cu: goto label_1f950c;
        case 0x1f9510u: goto label_1f9510;
        case 0x1f9514u: goto label_1f9514;
        case 0x1f9518u: goto label_1f9518;
        case 0x1f951cu: goto label_1f951c;
        case 0x1f9520u: goto label_1f9520;
        case 0x1f9524u: goto label_1f9524;
        case 0x1f9528u: goto label_1f9528;
        case 0x1f952cu: goto label_1f952c;
        case 0x1f9530u: goto label_1f9530;
        case 0x1f9534u: goto label_1f9534;
        case 0x1f9538u: goto label_1f9538;
        case 0x1f953cu: goto label_1f953c;
        case 0x1f9540u: goto label_1f9540;
        case 0x1f9544u: goto label_1f9544;
        case 0x1f9548u: goto label_1f9548;
        case 0x1f954cu: goto label_1f954c;
        case 0x1f9550u: goto label_1f9550;
        case 0x1f9554u: goto label_1f9554;
        case 0x1f9558u: goto label_1f9558;
        case 0x1f955cu: goto label_1f955c;
        case 0x1f9560u: goto label_1f9560;
        case 0x1f9564u: goto label_1f9564;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f9570u: goto label_1f9570;
        case 0x1f9574u: goto label_1f9574;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f957cu: goto label_1f957c;
        case 0x1f9580u: goto label_1f9580;
        case 0x1f9584u: goto label_1f9584;
        case 0x1f9588u: goto label_1f9588;
        case 0x1f958cu: goto label_1f958c;
        case 0x1f9590u: goto label_1f9590;
        case 0x1f9594u: goto label_1f9594;
        case 0x1f9598u: goto label_1f9598;
        case 0x1f959cu: goto label_1f959c;
        case 0x1f95a0u: goto label_1f95a0;
        case 0x1f95a4u: goto label_1f95a4;
        case 0x1f95a8u: goto label_1f95a8;
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95b4u: goto label_1f95b4;
        case 0x1f95b8u: goto label_1f95b8;
        case 0x1f95bcu: goto label_1f95bc;
        case 0x1f95c0u: goto label_1f95c0;
        case 0x1f95c4u: goto label_1f95c4;
        case 0x1f95c8u: goto label_1f95c8;
        case 0x1f95ccu: goto label_1f95cc;
        case 0x1f95d0u: goto label_1f95d0;
        case 0x1f95d4u: goto label_1f95d4;
        case 0x1f95d8u: goto label_1f95d8;
        case 0x1f95dcu: goto label_1f95dc;
        case 0x1f95e0u: goto label_1f95e0;
        case 0x1f95e4u: goto label_1f95e4;
        case 0x1f95e8u: goto label_1f95e8;
        case 0x1f95ecu: goto label_1f95ec;
        case 0x1f95f0u: goto label_1f95f0;
        case 0x1f95f4u: goto label_1f95f4;
        case 0x1f95f8u: goto label_1f95f8;
        case 0x1f95fcu: goto label_1f95fc;
        case 0x1f9600u: goto label_1f9600;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f9608u: goto label_1f9608;
        case 0x1f960cu: goto label_1f960c;
        case 0x1f9610u: goto label_1f9610;
        case 0x1f9614u: goto label_1f9614;
        case 0x1f9618u: goto label_1f9618;
        case 0x1f961cu: goto label_1f961c;
        case 0x1f9620u: goto label_1f9620;
        case 0x1f9624u: goto label_1f9624;
        case 0x1f9628u: goto label_1f9628;
        case 0x1f962cu: goto label_1f962c;
        case 0x1f9630u: goto label_1f9630;
        case 0x1f9634u: goto label_1f9634;
        case 0x1f9638u: goto label_1f9638;
        case 0x1f963cu: goto label_1f963c;
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9644u: goto label_1f9644;
        case 0x1f9648u: goto label_1f9648;
        case 0x1f964cu: goto label_1f964c;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f9654u: goto label_1f9654;
        case 0x1f9658u: goto label_1f9658;
        case 0x1f965cu: goto label_1f965c;
        case 0x1f9660u: goto label_1f9660;
        case 0x1f9664u: goto label_1f9664;
        case 0x1f9668u: goto label_1f9668;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9670u: goto label_1f9670;
        case 0x1f9674u: goto label_1f9674;
        case 0x1f9678u: goto label_1f9678;
        case 0x1f967cu: goto label_1f967c;
        case 0x1f9680u: goto label_1f9680;
        case 0x1f9684u: goto label_1f9684;
        case 0x1f9688u: goto label_1f9688;
        case 0x1f968cu: goto label_1f968c;
        case 0x1f9690u: goto label_1f9690;
        case 0x1f9694u: goto label_1f9694;
        case 0x1f9698u: goto label_1f9698;
        case 0x1f969cu: goto label_1f969c;
        case 0x1f96a0u: goto label_1f96a0;
        case 0x1f96a4u: goto label_1f96a4;
        case 0x1f96a8u: goto label_1f96a8;
        case 0x1f96acu: goto label_1f96ac;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96b8u: goto label_1f96b8;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96e4u: goto label_1f96e4;
        case 0x1f96e8u: goto label_1f96e8;
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f96fcu: goto label_1f96fc;
        case 0x1f9700u: goto label_1f9700;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f9708u: goto label_1f9708;
        case 0x1f970cu: goto label_1f970c;
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        case 0x1f98bcu: goto label_1f98bc;
        case 0x1f98c0u: goto label_1f98c0;
        case 0x1f98c4u: goto label_1f98c4;
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f9924u: goto label_1f9924;
        case 0x1f9928u: goto label_1f9928;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9930u: goto label_1f9930;
        case 0x1f9934u: goto label_1f9934;
        case 0x1f9938u: goto label_1f9938;
        case 0x1f993cu: goto label_1f993c;
        case 0x1f9940u: goto label_1f9940;
        case 0x1f9944u: goto label_1f9944;
        case 0x1f9948u: goto label_1f9948;
        case 0x1f994cu: goto label_1f994c;
        case 0x1f9950u: goto label_1f9950;
        case 0x1f9954u: goto label_1f9954;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f995cu: goto label_1f995c;
        case 0x1f9960u: goto label_1f9960;
        case 0x1f9964u: goto label_1f9964;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9970u: goto label_1f9970;
        case 0x1f9974u: goto label_1f9974;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f997cu: goto label_1f997c;
        case 0x1f9980u: goto label_1f9980;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f9988u: goto label_1f9988;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9990u: goto label_1f9990;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f9998u: goto label_1f9998;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a0u: goto label_1f99a0;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99a8u: goto label_1f99a8;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b0u: goto label_1f99b0;
        case 0x1f99b4u: goto label_1f99b4;
        default: return;
    }

label_1f91e8:
    // 0x1f91e8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f91ec:
    // 0x1f91ec: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x1f91ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f91f0:
    // 0x1f91f0: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1f91f4:
    if (ctx->pc == 0x1F91F4u) {
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F0u;
        // 0x1f91f4: 0x46082a  slt         $at, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F91F8u;
        goto label_1f91f8;
    }
    ctx->pc = 0x1F91F0u;
    {
        const bool branch_taken_0x1f91f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F0u;
        // 0x1f91f4: 0x46082a  slt         $at, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f0) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F91F8u;
label_1f91f8:
    // 0x1f91f8: 0xc0590dc  jal         func_164370
label_1f91fc:
    if (ctx->pc == 0x1F91FCu) {
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F8u;
        // 0x1f91fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9200u;
        goto label_1f9200;
    }
    ctx->pc = 0x1F91F8u;
    SET_GPR_U32(ctx, 31, 0x1F9200u);
    ctx->pc = 0x1F91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91F8u;
    // 0x1f91fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F91F8u, 0x1F9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9200u;
label_1f9200:
    // 0x1f9200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9204:
    // 0x1f9204: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1f9208:
    if (ctx->pc == 0x1F9208u) {
        ctx->pc = 0x1F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9204u;
        // 0x1f9208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F920Cu;
        goto label_1f920c;
    }
    ctx->pc = 0x1F9204u;
    {
        const bool branch_taken_0x1f9204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9204u;
        // 0x1f9208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9204) {
            ctx->pc = 0x1F926Cu;
            goto label_1f926c;
        }
    }
    ctx->pc = 0x1F920Cu;
label_1f920c:
    // 0x1f920c: 0xc0646d4  jal         func_191B50
label_1f9210:
    if (ctx->pc == 0x1F9210u) {
        ctx->pc = 0x1F9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F920Cu;
        // 0x1f9210: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9214u;
        goto label_1f9214;
    }
    ctx->pc = 0x1F920Cu;
    SET_GPR_U32(ctx, 31, 0x1F9214u);
    ctx->pc = 0x1F9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F920Cu;
    // 0x1f9210: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1F920Cu, 0x1F9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9214u;
label_1f9214:
    // 0x1f9214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9218:
    // 0x1f9218: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1f921c:
    // 0x1f921c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f9220:
    // 0x1f9220: 0xc07f064  jal         func_1FC190
label_1f9224:
    if (ctx->pc == 0x1F9224u) {
        ctx->pc = 0x1F9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9220u;
        // 0x1f9224: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9228u;
        goto label_1f9228;
    }
    ctx->pc = 0x1F9220u;
    SET_GPR_U32(ctx, 31, 0x1F9228u);
    ctx->pc = 0x1F9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9220u;
    // 0x1f9224: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC190u;
    { ctx->pc = 0x1fc190; return; }
    ctx->pc = 0x1F9228u;
label_1f9228:
    // 0x1f9228: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f922c:
    // 0x1f922c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f9230:
    // 0x1f9230: 0x2463b8f0  addiu       $v1, $v1, -0x4710
    ctx->pc = 0x1f9230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949104));
label_1f9234:
    // 0x1f9234: 0x2442c0f0  addiu       $v0, $v0, -0x3F10
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951152));
label_1f9238:
    // 0x1f9238: 0xae231558  sw          $v1, 0x1558($s1)
    ctx->pc = 0x1f9238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 3));
label_1f923c:
    // 0x1f923c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9240:
    // 0x1f9240: 0xc07ef80  jal         func_1FBE00
label_1f9244:
    if (ctx->pc == 0x1F9244u) {
        ctx->pc = 0x1F9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9240u;
        // 0x1f9244: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9248u;
        goto label_1f9248;
    }
    ctx->pc = 0x1F9240u;
    SET_GPR_U32(ctx, 31, 0x1F9248u);
    ctx->pc = 0x1F9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9240u;
    // 0x1f9244: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE00u;
    { ctx->pc = 0x1fbe00; return; }
    ctx->pc = 0x1F9248u;
label_1f9248:
    // 0x1f9248: 0xae201540  sw          $zero, 0x1540($s1)
    ctx->pc = 0x1f9248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 0));
label_1f924c:
    // 0x1f924c: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f9250:
    // 0x1f9250: 0xa2320fe4  sb          $s2, 0xFE4($s1)
    ctx->pc = 0x1f9250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4068), (uint8_t)GPR_U32(ctx, 18));
label_1f9254:
    // 0x1f9254: 0x92230fe4  lbu         $v1, 0xFE4($s1)
    ctx->pc = 0x1f9254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4068)));
label_1f9258:
    // 0x1f9258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f925c:
    // 0x1f925c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9260:
    // 0x1f9260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9264:
    // 0x1f9264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f9268:
    // 0x1f9268: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f9268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f926c:
    // 0x1f926c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1f926cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9270:
    // 0x1f9270: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1f9274:
    // 0x1f9274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9278:
    // 0x1f9278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f927c:
    // 0x1f927c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f9280:
    if (ctx->pc == 0x1F9280u) {
        ctx->pc = 0x1F9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F927Cu;
        // 0x1f9280: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9284u;
        goto label_1f9284;
    }
    ctx->pc = 0x1F927Cu;
    {
        const bool branch_taken_0x1f927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F927Cu;
        // 0x1f9280: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f927c) {
            ctx->pc = 0x1F9298u;
            goto label_1f9298;
        }
    }
    ctx->pc = 0x1F9284u;
label_1f9284:
    // 0x1f9284: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f9288:
    if (ctx->pc == 0x1F9288u) {
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0x27828248  addiu       $v0, $gp, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F928Cu;
        goto label_1f928c;
    }
    ctx->pc = 0x1F9284u;
    {
        const bool branch_taken_0x1f9284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0x27828248  addiu       $v0, $gp, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9284) {
            ctx->pc = 0x1F9298u;
            goto label_1f9298;
        }
    }
    ctx->pc = 0x1F928Cu;
label_1f928c:
    // 0x1f928c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9290:
    // 0x1f9290: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f9294:
    // 0x1f9294: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9298:
    // 0x1f9298: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f929c:
    // 0x1f929c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f92a0:
    // 0x1f92a0: 0x27858278  addiu       $a1, $gp, -0x7D88
    ctx->pc = 0x1f92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f92a4:
    // 0x1f92a4: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
label_1f92a8:
    // 0x1f92a8: 0x2463c551  addiu       $v1, $v1, -0x3AAF
    ctx->pc = 0x1f92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952273));
label_1f92ac:
    // 0x1f92ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f92b0:
    // 0x1f92b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f92b4:
    // 0x1f92b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f92b8:
    // 0x1f92b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f92b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f92bc:
    // 0x1f92bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f92c0:
    // 0x1f92c0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f92c4:
    // 0x1f92c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f92c8:
    // 0x1f92c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f92cc:
    // 0x1f92cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f92d0:
    // 0x1f92d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f92d4:
    // 0x1f92d4: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x1f92d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f92d8:
    // 0x1f92d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1f92dc:
    if (ctx->pc == 0x1F92DCu) {
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x47082a  slt         $at, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92E0u;
        goto label_1f92e0;
    }
    ctx->pc = 0x1F92D8u;
    {
        const bool branch_taken_0x1f92d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x47082a  slt         $at, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d8) {
            ctx->pc = 0x1F9300u;
            goto label_1f9300;
        }
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0xc07ebe0  jal         func_1FAF80
label_1f92e4:
    if (ctx->pc == 0x1F92E4u) {
        ctx->pc = 0x1F92E8u;
        goto label_1f92e8;
    }
    ctx->pc = 0x1F92E0u;
    SET_GPR_U32(ctx, 31, 0x1F92E8u);
    ctx->pc = 0x1FAF80u;
    { ctx->pc = 0x1faf80; return; }
    ctx->pc = 0x1F92E8u;
label_1f92e8:
    // 0x1f92e8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1f92e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f92ec:
    // 0x1f92ec: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1f92f0:
    // 0x1f92f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f92f4:
    // 0x1f92f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f92f8:
    // 0x1f92f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f92fc:
    if (ctx->pc == 0x1F92FCu) {
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9300u;
        goto label_1f9300;
    }
    ctx->pc = 0x1F92F8u;
    {
        const bool branch_taken_0x1f92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92f8) {
            ctx->pc = 0x1F9314u;
            goto label_1f9314;
        }
    }
    ctx->pc = 0x1F9300u;
label_1f9300:
    // 0x1f9300: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f9304:
    if (ctx->pc == 0x1F9304u) {
        ctx->pc = 0x1F9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9300u;
        // 0x1f9304: 0x27828258  addiu       $v0, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9308u;
        goto label_1f9308;
    }
    ctx->pc = 0x1F9300u;
    {
        const bool branch_taken_0x1f9300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9300u;
        // 0x1f9304: 0x27828258  addiu       $v0, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9300) {
            ctx->pc = 0x1F9314u;
            goto label_1f9314;
        }
    }
    ctx->pc = 0x1F9308u;
label_1f9308:
    // 0x1f9308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f930c:
    // 0x1f930c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f9310:
    // 0x1f9310: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9314:
    // 0x1f9314: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9314u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9318:
    // 0x1f9318: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f931c:
    // 0x1f931c: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9320:
    // 0x1f9320: 0x2442c5a8  addiu       $v0, $v0, -0x3A58
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952360));
label_1f9324:
    // 0x1f9324: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1f9324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f9328:
    // 0x1f9328: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f932c:
    // 0x1f932c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9330:
    // 0x1f9330: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f9330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9334:
    // 0x1f9334: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f9334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9338:
    // 0x1f9338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f933c:
    // 0x1f933c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9340:
    // 0x1f9340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9344:
    // 0x1f9344: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1f9344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9348:
    // 0x1f9348: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f9348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1f934c:
    // 0x1f934c: 0xc08f0cc  jal         func_23C330
label_1f9350:
    if (ctx->pc == 0x1F9350u) {
        ctx->pc = 0x1F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F934Cu;
        // 0x1f9350: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9354u;
        goto label_1f9354;
    }
    ctx->pc = 0x1F934Cu;
    SET_GPR_U32(ctx, 31, 0x1F9354u);
    ctx->pc = 0x1F9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F934Cu;
    // 0x1f9350: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9358:
    // 0x1f9358: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1f9358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1f935c:
    // 0x1f935c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f935cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9360:
    // 0x1f9360: 0x0  nop
    ctx->pc = 0x1f9360u;
    // NOP
label_1f9364:
    // 0x1f9364: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f9364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f9368:
    // 0x1f9368: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_1f936c:
    // 0x1f936c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1f936cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1f9370:
    // 0x1f9370: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f9370u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f9374:
    // 0x1f9374: 0x0  nop
    ctx->pc = 0x1f9374u;
    // NOP
label_1f9378:
    // 0x1f9378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f937c:
    // 0x1f937c: 0x0  nop
    ctx->pc = 0x1f937cu;
    // NOP
label_1f9380:
    // 0x1f9380: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9384:
    // 0x1f9384: 0x0  nop
    ctx->pc = 0x1f9384u;
    // NOP
label_1f9388:
    // 0x1f9388: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1f938c:
    if (ctx->pc == 0x1F938Cu) {
        ctx->pc = 0x1F9390u;
        goto label_1f9390;
    }
    ctx->pc = 0x1F9388u;
    {
        const bool branch_taken_0x1f9388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9388) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F9390u;
label_1f9390:
    // 0x1f9390: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9394:
    // 0x1f9394: 0x27838268  addiu       $v1, $gp, -0x7D98
    ctx->pc = 0x1f9394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1f9398:
    // 0x1f9398: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f939c:
    // 0x1f939c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f93a0:
    // 0x1f93a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f93a4:
    // 0x1f93a4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x1f93a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1f93a8:
    // 0x1f93a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1f93ac:
    if (ctx->pc == 0x1F93ACu) {
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A8u;
        // 0x1f93ac: 0x223082a  slt         $at, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93B0u;
        goto label_1f93b0;
    }
    ctx->pc = 0x1F93A8u;
    {
        const bool branch_taken_0x1f93a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A8u;
        // 0x1f93ac: 0x223082a  slt         $at, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93a8) {
            ctx->pc = 0x1F93D0u;
            goto label_1f93d0;
        }
    }
    ctx->pc = 0x1F93B0u;
label_1f93b0:
    // 0x1f93b0: 0xc07e824  jal         func_1FA090
label_1f93b4:
    if (ctx->pc == 0x1F93B4u) {
        ctx->pc = 0x1F93B8u;
        goto label_1f93b8;
    }
    ctx->pc = 0x1F93B0u;
    SET_GPR_U32(ctx, 31, 0x1F93B8u);
    ctx->pc = 0x1FA090u;
    { ctx->pc = 0x1fa090; return; }
    ctx->pc = 0x1F93B8u;
label_1f93b8:
    // 0x1f93b8: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f93b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f93bc:
    // 0x1f93bc: 0x27838270  addiu       $v1, $gp, -0x7D90
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1f93c0:
    // 0x1f93c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f93c4:
    // 0x1f93c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f93c8:
    // 0x1f93c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f93cc:
    if (ctx->pc == 0x1F93CCu) {
        ctx->pc = 0x1F93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93C8u;
        // 0x1f93cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93D0u;
        goto label_1f93d0;
    }
    ctx->pc = 0x1F93C8u;
    {
        const bool branch_taken_0x1f93c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93C8u;
        // 0x1f93cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93c8) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F93D0u;
label_1f93d0:
    // 0x1f93d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f93d4:
    if (ctx->pc == 0x1F93D4u) {
        ctx->pc = 0x1F93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93D0u;
        // 0x1f93d4: 0x27838270  addiu       $v1, $gp, -0x7D90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93D8u;
        goto label_1f93d8;
    }
    ctx->pc = 0x1F93D0u;
    {
        const bool branch_taken_0x1f93d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93D0u;
        // 0x1f93d4: 0x27838270  addiu       $v1, $gp, -0x7D90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93d0) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F93D8u;
label_1f93d8:
    // 0x1f93d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f93dc:
    // 0x1f93dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f93e0:
    // 0x1f93e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f93e4:
    // 0x1f93e4: 0x8f83903c  lw          $v1, -0x6FC4($gp)
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938684)));
label_1f93e8:
    // 0x1f93e8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1f93ec:
    if (ctx->pc == 0x1F93ECu) {
        ctx->pc = 0x1F93F0u;
        goto label_1f93f0;
    }
    ctx->pc = 0x1F93E8u;
    {
        const bool branch_taken_0x1f93e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f93e8) {
            ctx->pc = 0x1F9434u;
            goto label_1f9434;
        }
    }
    ctx->pc = 0x1F93F0u;
label_1f93f0:
    // 0x1f93f0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1f93f4:
    // 0x1f93f4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1f93f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1f93f8:
    // 0x1f93f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f93fc:
    if (ctx->pc == 0x1F93FCu) {
        ctx->pc = 0x1F93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F8u;
        // 0x1f93fc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9400u;
        goto label_1f9400;
    }
    ctx->pc = 0x1F93F8u;
    {
        const bool branch_taken_0x1f93f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F8u;
        // 0x1f93fc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f8) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F9400u;
label_1f9400:
    // 0x1f9400: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f9404:
    if (ctx->pc == 0x1F9404u) {
        ctx->pc = 0x1F9408u;
        goto label_1f9408;
    }
    ctx->pc = 0x1F9400u;
    {
        const bool branch_taken_0x1f9400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9400) {
            ctx->pc = 0x1F9434u;
            goto label_1f9434;
        }
    }
    ctx->pc = 0x1F9408u;
label_1f9408:
    // 0x1f9408: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f940c:
    // 0x1f940c: 0xc06468c  jal         func_191A30
label_1f9410:
    if (ctx->pc == 0x1F9410u) {
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9414u;
        goto label_1f9414;
    }
    ctx->pc = 0x1F940Cu;
    SET_GPR_U32(ctx, 31, 0x1F9414u);
    ctx->pc = 0x1F9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F940Cu;
    // 0x1f9410: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1F940Cu, 0x1F9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9414u;
label_1f9414:
    // 0x1f9414: 0xc07e7cc  jal         func_1F9F30
label_1f9418:
    if (ctx->pc == 0x1F9418u) {
        ctx->pc = 0x1F9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9414u;
        // 0x1f9418: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F941Cu;
        goto label_1f941c;
    }
    ctx->pc = 0x1F9414u;
    SET_GPR_U32(ctx, 31, 0x1F941Cu);
    ctx->pc = 0x1F9418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9414u;
    // 0x1f9418: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F30u;
    { ctx->pc = 0x1f9f30; return; }
    ctx->pc = 0x1F941Cu;
label_1f941c:
    // 0x1f941c: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f941cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9420:
    // 0x1f9420: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9424:
    // 0x1f9424: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f9424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9428:
    // 0x1f9428: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f942c:
    // 0x1f942c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9430:
    // 0x1f9430: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f9430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f9434:
    // 0x1f9434: 0xaf80903c  sw          $zero, -0x6FC4($gp)
    ctx->pc = 0x1f9434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938684), GPR_U32(ctx, 0));
label_1f9438:
    // 0x1f9438: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f943c:
    // 0x1f943c: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f943cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9440:
    // 0x1f9440: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9444:
    // 0x1f9444: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9448:
    // 0x1f9448: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f9448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f944c:
    // 0x1f944c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9450:
    // 0x1f9450: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9454:
    // 0x1f9454: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9458:
    // 0x1f9458: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f945c:
    // 0x1f945c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f945cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9460:
    // 0x1f9460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9464:
    // 0x1f9464: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f9464u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9468:
    // 0x1f9468: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f9468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f946c:
    // 0x1f946c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_1f9470:
    if (ctx->pc == 0x1F9470u) {
        ctx->pc = 0x1F9474u;
        goto label_1f9474;
    }
    ctx->pc = 0x1F946Cu;
    {
        const bool branch_taken_0x1f946c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f946c) {
            ctx->pc = 0x1F95F8u;
            goto label_1f95f8;
        }
    }
    ctx->pc = 0x1F9474u;
label_1f9474:
    // 0x1f9474: 0xc08f0cc  jal         func_23C330
label_1f9478:
    if (ctx->pc == 0x1F9478u) {
        ctx->pc = 0x1F947Cu;
        goto label_1f947c;
    }
    ctx->pc = 0x1F9474u;
    SET_GPR_U32(ctx, 31, 0x1F947Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F947Cu;
label_1f947c:
    // 0x1f947c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f947cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9480:
    // 0x1f9480: 0x0  nop
    ctx->pc = 0x1f9480u;
    // NOP
label_1f9484:
    // 0x1f9484: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f9484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f9488:
    // 0x1f9488: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f948c:
    // 0x1f948c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f948cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9490:
    // 0x1f9490: 0x0  nop
    ctx->pc = 0x1f9490u;
    // NOP
label_1f9494:
    // 0x1f9494: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f9494u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f9498:
    // 0x1f9498: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f9498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1f949c:
    // 0x1f949c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1f94a0:
    // 0x1f94a0: 0x0  nop
    ctx->pc = 0x1f94a0u;
    // NOP
label_1f94a4:
    // 0x1f94a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f94a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f94a8:
    // 0x1f94a8: 0x0  nop
    ctx->pc = 0x1f94a8u;
    // NOP
label_1f94ac:
    // 0x1f94ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f94acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f94b0:
    // 0x1f94b0: 0x0  nop
    ctx->pc = 0x1f94b0u;
    // NOP
label_1f94b4:
    // 0x1f94b4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_1f94b8:
    if (ctx->pc == 0x1F94B8u) {
        ctx->pc = 0x1F94BCu;
        goto label_1f94bc;
    }
    ctx->pc = 0x1F94B4u;
    {
        const bool branch_taken_0x1f94b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f94b4) {
            ctx->pc = 0x1F95ACu;
            goto label_1f95ac;
        }
    }
    ctx->pc = 0x1F94BCu;
label_1f94bc:
    // 0x1f94bc: 0x92120010  lbu         $s2, 0x10($s0)
    ctx->pc = 0x1f94bcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f94c0:
    // 0x1f94c0: 0xc0590dc  jal         func_164370
label_1f94c4:
    if (ctx->pc == 0x1F94C4u) {
        ctx->pc = 0x1F94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94C0u;
        // 0x1f94c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94C8u;
        goto label_1f94c8;
    }
    ctx->pc = 0x1F94C0u;
    SET_GPR_U32(ctx, 31, 0x1F94C8u);
    ctx->pc = 0x1F94C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94C0u;
    // 0x1f94c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F94C0u, 0x1F94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94C8u;
label_1f94c8:
    // 0x1f94c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f94c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f94cc:
    // 0x1f94cc: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_1f94d0:
    if (ctx->pc == 0x1F94D0u) {
        ctx->pc = 0x1F94D4u;
        goto label_1f94d4;
    }
    ctx->pc = 0x1F94CCu;
    {
        const bool branch_taken_0x1f94cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f94cc) {
            ctx->pc = 0x1F9530u;
            goto label_1f9530;
        }
    }
    ctx->pc = 0x1F94D4u;
label_1f94d4:
    // 0x1f94d4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_1f94d8:
    // 0x1f94d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f94dc:
    // 0x1f94dc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1f94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1f94e0:
    // 0x1f94e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f94e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f94e4:
    // 0x1f94e4: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1f94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_1f94e8:
    // 0x1f94e8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1f94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1f94ec:
    // 0x1f94ec: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1f94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1f94f0:
    // 0x1f94f0: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x1f94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_1f94f4:
    // 0x1f94f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f94f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f94f8:
    // 0x1f94f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f94f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f94fc:
    // 0x1f94fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1f94fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f9500:
    // 0x1f9500: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f9500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_1f9504:
    // 0x1f9504: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f9504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f9508:
    // 0x1f9508: 0xc0718c4  jal         func_1C6310
label_1f950c:
    if (ctx->pc == 0x1F950Cu) {
        ctx->pc = 0x1F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9508u;
        // 0x1f950c: 0xafa00148  sw          $zero, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9510u;
        goto label_1f9510;
    }
    ctx->pc = 0x1F9508u;
    SET_GPR_U32(ctx, 31, 0x1F9510u);
    ctx->pc = 0x1F950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9508u;
    // 0x1f950c: 0xafa00148  sw          $zero, 0x148($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    { ctx->pc = 0x1c6310; return; }
    ctx->pc = 0x1F9510u;
label_1f9510:
    // 0x1f9510: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x1f9510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
label_1f9514:
    // 0x1f9514: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f9518:
    // 0x1f9518: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1f951c:
    // 0x1f951c: 0x2463aec0  addiu       $v1, $v1, -0x5140
    ctx->pc = 0x1f951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946496));
label_1f9520:
    // 0x1f9520: 0xa23202e4  sb          $s2, 0x2E4($s1)
    ctx->pc = 0x1f9520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 18));
label_1f9524:
    // 0x1f9524: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x1f9524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
label_1f9528:
    // 0x1f9528: 0xae230364  sw          $v1, 0x364($s1)
    ctx->pc = 0x1f9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
label_1f952c:
    // 0x1f952c: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x1f952cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
label_1f9530:
    // 0x1f9530: 0x92120010  lbu         $s2, 0x10($s0)
    ctx->pc = 0x1f9530u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9534:
    // 0x1f9534: 0xc0590dc  jal         func_164370
label_1f9538:
    if (ctx->pc == 0x1F9538u) {
        ctx->pc = 0x1F9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9534u;
        // 0x1f9538: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F953Cu;
        goto label_1f953c;
    }
    ctx->pc = 0x1F9534u;
    SET_GPR_U32(ctx, 31, 0x1F953Cu);
    ctx->pc = 0x1F9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9534u;
    // 0x1f9538: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F9534u, 0x1F953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F953Cu;
label_1f953c:
    // 0x1f953c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f953cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9540:
    // 0x1f9540: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_1f9544:
    if (ctx->pc == 0x1F9544u) {
        ctx->pc = 0x1F9548u;
        goto label_1f9548;
    }
    ctx->pc = 0x1F9540u;
    {
        const bool branch_taken_0x1f9540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9540) {
            ctx->pc = 0x1F95ACu;
            goto label_1f95ac;
        }
    }
    ctx->pc = 0x1F9548u;
label_1f9548:
    // 0x1f9548: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f9548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_1f954c:
    // 0x1f954c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f954cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f9550:
    // 0x1f9550: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f9550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1f9554:
    // 0x1f9554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9558:
    // 0x1f9558: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1f9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1f955c:
    // 0x1f955c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1f9560:
    // 0x1f9560: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1f9560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1f9564:
    // 0x1f9564: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x1f9564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_1f9568:
    // 0x1f9568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f956c:
    // 0x1f956c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9570:
    // 0x1f9570: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f9570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f9574:
    // 0x1f9574: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f9574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_1f9578:
    // 0x1f9578: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f9578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f957c:
    // 0x1f957c: 0xc0718c4  jal         func_1C6310
label_1f9580:
    if (ctx->pc == 0x1F9580u) {
        ctx->pc = 0x1F9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F957Cu;
        // 0x1f9580: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9584u;
        goto label_1f9584;
    }
    ctx->pc = 0x1F957Cu;
    SET_GPR_U32(ctx, 31, 0x1F9584u);
    ctx->pc = 0x1F9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F957Cu;
    // 0x1f9580: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    { ctx->pc = 0x1c6310; return; }
    ctx->pc = 0x1F9584u;
label_1f9584:
    // 0x1f9584: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_1f9588:
    // 0x1f9588: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f958c:
    // 0x1f958c: 0x3444df00  ori         $a0, $v0, 0xDF00
    ctx->pc = 0x1f958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
label_1f9590:
    // 0x1f9590: 0x2463aec0  addiu       $v1, $v1, -0x5140
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946496));
label_1f9594:
    // 0x1f9594: 0xae240258  sw          $a0, 0x258($s1)
    ctx->pc = 0x1f9594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 4));
label_1f9598:
    // 0x1f9598: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1f9598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1f959c:
    // 0x1f959c: 0xa23202e4  sb          $s2, 0x2E4($s1)
    ctx->pc = 0x1f959cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 18));
label_1f95a0:
    // 0x1f95a0: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x1f95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
label_1f95a4:
    // 0x1f95a4: 0xae230364  sw          $v1, 0x364($s1)
    ctx->pc = 0x1f95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
label_1f95a8:
    // 0x1f95a8: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x1f95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
label_1f95ac:
    // 0x1f95ac: 0xc08f0cc  jal         func_23C330
label_1f95b0:
    if (ctx->pc == 0x1F95B0u) {
        ctx->pc = 0x1F95B4u;
        goto label_1f95b4;
    }
    ctx->pc = 0x1F95ACu;
    SET_GPR_U32(ctx, 31, 0x1F95B4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F95B4u;
label_1f95b4:
    // 0x1f95b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f95b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f95b8:
    // 0x1f95b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1f95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1f95bc:
    // 0x1f95bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f95bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f95c0:
    // 0x1f95c0: 0x0  nop
    ctx->pc = 0x1f95c0u;
    // NOP
label_1f95c4:
    // 0x1f95c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f95c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f95c8:
    // 0x1f95c8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1f95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_1f95cc:
    // 0x1f95cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1f95ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1f95d0:
    // 0x1f95d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f95d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f95d4:
    // 0x1f95d4: 0x0  nop
    ctx->pc = 0x1f95d4u;
    // NOP
label_1f95d8:
    // 0x1f95d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f95d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f95dc:
    // 0x1f95dc: 0x0  nop
    ctx->pc = 0x1f95dcu;
    // NOP
label_1f95e0:
    // 0x1f95e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f95e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f95e4:
    // 0x1f95e4: 0x0  nop
    ctx->pc = 0x1f95e4u;
    // NOP
label_1f95e8:
    // 0x1f95e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f95ec:
    if (ctx->pc == 0x1F95ECu) {
        ctx->pc = 0x1F95F0u;
        goto label_1f95f0;
    }
    ctx->pc = 0x1F95E8u;
    {
        const bool branch_taken_0x1f95e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f95e8) {
            ctx->pc = 0x1F95F8u;
            goto label_1f95f8;
        }
    }
    ctx->pc = 0x1F95F0u;
label_1f95f0:
    // 0x1f95f0: 0xc07eb0c  jal         func_1FAC30
label_1f95f4:
    if (ctx->pc == 0x1F95F4u) {
        ctx->pc = 0x1F95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95F0u;
        // 0x1f95f4: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95F8u;
        goto label_1f95f8;
    }
    ctx->pc = 0x1F95F0u;
    SET_GPR_U32(ctx, 31, 0x1F95F8u);
    ctx->pc = 0x1F95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95F0u;
    // 0x1f95f4: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC30u;
    { ctx->pc = 0x1fac30; return; }
    ctx->pc = 0x1F95F8u;
label_1f95f8:
    // 0x1f95f8: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f95f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f95fc:
    // 0x1f95fc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9600:
    // 0x1f9600: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f9600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9604:
    // 0x1f9604: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9608:
    // 0x1f9608: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f9608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f960c:
    // 0x1f960c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9610:
    // 0x1f9610: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9614:
    // 0x1f9614: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9618:
    // 0x1f9618: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f961c:
    // 0x1f961c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f961cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9620:
    // 0x1f9620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9624:
    // 0x1f9624: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f9624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9628:
    // 0x1f9628: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1f9628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f962c:
    // 0x1f962c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1f9630:
    if (ctx->pc == 0x1F9630u) {
        ctx->pc = 0x1F9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F962Cu;
        // 0x1f9630: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9634u;
        goto label_1f9634;
    }
    ctx->pc = 0x1F962Cu;
    {
        const bool branch_taken_0x1f962c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F962Cu;
        // 0x1f9630: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f962c) {
            ctx->pc = 0x1F96A0u;
            goto label_1f96a0;
        }
    }
    ctx->pc = 0x1F9634u;
label_1f9634:
    // 0x1f9634: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f9634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f9638:
    // 0x1f9638: 0x27838260  addiu       $v1, $gp, -0x7DA0
    ctx->pc = 0x1f9638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
label_1f963c:
    // 0x1f963c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9640:
    // 0x1f9640: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9644:
    // 0x1f9644: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9648:
    // 0x1f9648: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_1f964c:
    if (ctx->pc == 0x1F964Cu) {
        ctx->pc = 0x1F9650u;
        goto label_1f9650;
    }
    ctx->pc = 0x1F9648u;
    {
        const bool branch_taken_0x1f9648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9648) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F9650u;
label_1f9650:
    // 0x1f9650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9654:
    // 0x1f9654: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x1f9654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f9658:
    // 0x1f9658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f9658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f965c:
    // 0x1f965c: 0x92130010  lbu         $s3, 0x10($s0)
    ctx->pc = 0x1f965cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9660:
    // 0x1f9660: 0x0  nop
    ctx->pc = 0x1f9660u;
    // NOP
label_1f9664:
    // 0x1f9664: 0x2411ff4c  addiu       $s1, $zero, -0xB4
    ctx->pc = 0x1f9664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967116));
label_1f9668:
    // 0x1f9668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f9668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f966c:
    // 0x1f966c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f9670:
    // 0x1f9670: 0xc07ea78  jal         func_1FA9E0
label_1f9674:
    if (ctx->pc == 0x1F9674u) {
        ctx->pc = 0x1F9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9670u;
        // 0x1f9674: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9678u;
        goto label_1f9678;
    }
    ctx->pc = 0x1F9670u;
    SET_GPR_U32(ctx, 31, 0x1F9678u);
    ctx->pc = 0x1F9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9670u;
    // 0x1f9674: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9E0u;
    { ctx->pc = 0x1fa9e0; return; }
    ctx->pc = 0x1F9678u;
label_1f9678:
    // 0x1f9678: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_1f967c:
    // 0x1f967c: 0x2a2300b4  slti        $v1, $s1, 0xB4
    ctx->pc = 0x1f967cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)180) ? 1 : 0);
label_1f9680:
    // 0x1f9680: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1f9684:
    if (ctx->pc == 0x1F9684u) {
        ctx->pc = 0x1F9688u;
        goto label_1f9688;
    }
    ctx->pc = 0x1F9680u;
    {
        const bool branch_taken_0x1f9680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9680) {
            ctx->pc = 0x1F9668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9668;
        }
    }
    ctx->pc = 0x1F9688u;
label_1f9688:
    // 0x1f9688: 0x2652000a  addiu       $s2, $s2, 0xA
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_1f968c:
    // 0x1f968c: 0x2a430032  slti        $v1, $s2, 0x32
    ctx->pc = 0x1f968cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
label_1f9690:
    // 0x1f9690: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1f9694:
    if (ctx->pc == 0x1F9694u) {
        ctx->pc = 0x1F9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9690u;
        // 0x1f9694: 0x2411ff4c  addiu       $s1, $zero, -0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9698u;
        goto label_1f9698;
    }
    ctx->pc = 0x1F9690u;
    {
        const bool branch_taken_0x1f9690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9690u;
        // 0x1f9694: 0x2411ff4c  addiu       $s1, $zero, -0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9690) {
            ctx->pc = 0x1F9668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9668;
        }
    }
    ctx->pc = 0x1F9698u;
label_1f9698:
    // 0x1f9698: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f969c:
    if (ctx->pc == 0x1F969Cu) {
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9698u;
        // 0x1f969c: 0x92060010  lbu         $a2, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96A0u;
        goto label_1f96a0;
    }
    ctx->pc = 0x1F9698u;
    {
        const bool branch_taken_0x1f9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9698u;
        // 0x1f969c: 0x92060010  lbu         $a2, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9698) {
            ctx->pc = 0x1F96B4u;
            goto label_1f96b4;
        }
    }
    ctx->pc = 0x1F96A0u;
label_1f96a0:
    // 0x1f96a0: 0x27838260  addiu       $v1, $gp, -0x7DA0
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
label_1f96a4:
    // 0x1f96a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f96a8:
    // 0x1f96a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f96ac:
    // 0x1f96ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f96acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f96b0:
    // 0x1f96b0: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f96b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f96b4:
    // 0x1f96b4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f96b8:
    // 0x1f96b8: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f96bc:
    // 0x1f96bc: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f96c0:
    // 0x1f96c0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f96c4:
    // 0x1f96c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f96c8:
    // 0x1f96c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f96cc:
    // 0x1f96cc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f96d0:
    // 0x1f96d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f96d4:
    // 0x1f96d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f96d8:
    // 0x1f96d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f96dc:
    // 0x1f96dc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f96dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f96e0:
    // 0x1f96e0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1f96e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1f96e4:
    // 0x1f96e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f96e8:
    if (ctx->pc == 0x1F96E8u) {
        ctx->pc = 0x1F96ECu;
        goto label_1f96ec;
    }
    ctx->pc = 0x1F96E4u;
    {
        const bool branch_taken_0x1f96e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f96e4) {
            ctx->pc = 0x1F9718u;
            goto label_1f9718;
        }
    }
    ctx->pc = 0x1F96ECu;
label_1f96ec:
    // 0x1f96ec: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1f96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f96f0:
    // 0x1f96f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1f96f4:
    if (ctx->pc == 0x1F96F4u) {
        ctx->pc = 0x1F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F0u;
        // 0x1f96f4: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96F8u;
        goto label_1f96f8;
    }
    ctx->pc = 0x1F96F0u;
    {
        const bool branch_taken_0x1f96f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F0u;
        // 0x1f96f4: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96f0) {
            ctx->pc = 0x1F9710u;
            goto label_1f9710;
        }
    }
    ctx->pc = 0x1F96F8u;
label_1f96f8:
    // 0x1f96f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f96f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f96fc:
    // 0x1f96fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9700:
    // 0x1f9700: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1f9700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f9704:
    // 0x1f9704: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1f9708:
    if (ctx->pc == 0x1F9708u) {
        ctx->pc = 0x1F970Cu;
        goto label_1f970c;
    }
    ctx->pc = 0x1F9704u;
    {
        const bool branch_taken_0x1f9704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9704) {
            ctx->pc = 0x1F9718u;
            goto label_1f9718;
        }
    }
    ctx->pc = 0x1F970Cu;
label_1f970c:
    // 0x1f970c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f970cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f9710:
    // 0x1f9710: 0xc04e550  jal         func_139540
label_1f9714:
    if (ctx->pc == 0x1F9714u) {
        ctx->pc = 0x1F9718u;
        goto label_1f9718;
    }
    ctx->pc = 0x1F9710u;
    SET_GPR_U32(ctx, 31, 0x1F9718u);
    ctx->pc = 0x139540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139540u, 0x1F9710u, 0x1F9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9718u;
label_1f9718:
    // 0x1f9718: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f9718u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f971c:
    // 0x1f971c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9720:
    // 0x1f9720: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f9720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9724:
    // 0x1f9724: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9728:
    // 0x1f9728: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f9728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f972c:
    // 0x1f972c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9730:
    // 0x1f9730: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9734:
    // 0x1f9734: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9738:
    // 0x1f9738: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f973c:
    // 0x1f973c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9740:
    // 0x1f9740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9744:
    // 0x1f9744: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f9744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9748:
    // 0x1f9748: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1f9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f974c:
    // 0x1f974c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1f9750:
    if (ctx->pc == 0x1F9750u) {
        ctx->pc = 0x1F9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F974Cu;
        // 0x1f9750: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9754u;
        goto label_1f9754;
    }
    ctx->pc = 0x1F974Cu;
    {
        const bool branch_taken_0x1f974c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F974Cu;
        // 0x1f9750: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f974c) {
            ctx->pc = 0x1F97ECu;
            goto label_1f97ec;
        }
    }
    ctx->pc = 0x1F9754u;
label_1f9754:
    // 0x1f9754: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f9758:
    // 0x1f9758: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1f9758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f975c:
    // 0x1f975c: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_1f9760:
    if (ctx->pc == 0x1F9760u) {
        ctx->pc = 0x1F9764u;
        goto label_1f9764;
    }
    ctx->pc = 0x1F975Cu;
    {
        const bool branch_taken_0x1f975c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f975c) {
            ctx->pc = 0x1F97ECu;
            goto label_1f97ec;
        }
    }
    ctx->pc = 0x1F9764u;
label_1f9764:
    // 0x1f9764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f9768:
    // 0x1f9768: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_1f976c:
    if (ctx->pc == 0x1F976Cu) {
        ctx->pc = 0x1F976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9768u;
        // 0x1f976c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9770u;
        goto label_1f9770;
    }
    ctx->pc = 0x1F9768u;
    {
        const bool branch_taken_0x1f9768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9768u;
        // 0x1f976c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9768) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F9770u;
label_1f9770:
    // 0x1f9770: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_1f9774:
    if (ctx->pc == 0x1F9774u) {
        ctx->pc = 0x1F9778u;
        goto label_1f9778;
    }
    ctx->pc = 0x1F9770u;
    {
        const bool branch_taken_0x1f9770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9770) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F9778u;
label_1f9778:
    // 0x1f9778: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f9778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f977c:
    // 0x1f977c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_1f9780:
    if (ctx->pc == 0x1F9780u) {
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9784u;
        goto label_1f9784;
    }
    ctx->pc = 0x1F977Cu;
    {
        const bool branch_taken_0x1f977c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f977c) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_1f9788:
    if (ctx->pc == 0x1F9788u) {
        ctx->pc = 0x1F978Cu;
        goto label_1f978c;
    }
    ctx->pc = 0x1F9784u;
    {
        const bool branch_taken_0x1f9784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9784) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F978Cu;
label_1f978c:
    // 0x1f978c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f9790:
    // 0x1f9790: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_1f9794:
    if (ctx->pc == 0x1F9794u) {
        ctx->pc = 0x1F9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9790u;
        // 0x1f9794: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9798u;
        goto label_1f9798;
    }
    ctx->pc = 0x1F9790u;
    {
        const bool branch_taken_0x1f9790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9790u;
        // 0x1f9794: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9790) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F9798u;
label_1f9798:
    // 0x1f9798: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1f979c:
    if (ctx->pc == 0x1F979Cu) {
        ctx->pc = 0x1F97A0u;
        goto label_1f97a0;
    }
    ctx->pc = 0x1F9798u;
    {
        const bool branch_taken_0x1f9798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9798) {
            ctx->pc = 0x1F97A8u;
            goto label_1f97a8;
        }
    }
    ctx->pc = 0x1F97A0u;
label_1f97a0:
    // 0x1f97a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f97a4:
    if (ctx->pc == 0x1F97A4u) {
        ctx->pc = 0x1F97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A0u;
        // 0x1f97a4: 0xdf8589d0  ld          $a1, -0x7630($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294937040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97A8u;
        goto label_1f97a8;
    }
    ctx->pc = 0x1F97A0u;
    {
        const bool branch_taken_0x1f97a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A0u;
        // 0x1f97a4: 0xdf8589d0  ld          $a1, -0x7630($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294937040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97a0) {
            ctx->pc = 0x1F97D0u;
            goto label_1f97d0;
        }
    }
    ctx->pc = 0x1F97A8u;
label_1f97a8:
    // 0x1f97a8: 0xdf8589d0  ld          $a1, -0x7630($gp)
    ctx->pc = 0x1f97a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294937040)));
label_1f97ac:
    // 0x1f97ac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1f97b0:
    // 0x1f97b0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f97b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f97b4:
    // 0x1f97b4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f97b8:
    // 0x1f97b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f97b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f97bc:
    // 0x1f97bc: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1f97bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1f97c0:
    // 0x1f97c0: 0xc04e7c4  jal         func_139F10
label_1f97c4:
    if (ctx->pc == 0x1F97C4u) {
        ctx->pc = 0x1F97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C0u;
        // 0x1f97c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97C8u;
        goto label_1f97c8;
    }
    ctx->pc = 0x1F97C0u;
    SET_GPR_U32(ctx, 31, 0x1F97C8u);
    ctx->pc = 0x1F97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97C0u;
    // 0x1f97c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139F10u, 0x1F97C0u, 0x1F97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97C8u;
label_1f97c8:
    // 0x1f97c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f97cc:
    if (ctx->pc == 0x1F97CCu) {
        ctx->pc = 0x1F97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C8u;
        // 0x1f97cc: 0x92060010  lbu         $a2, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97D0u;
        goto label_1f97d0;
    }
    ctx->pc = 0x1F97C8u;
    {
        const bool branch_taken_0x1f97c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C8u;
        // 0x1f97cc: 0x92060010  lbu         $a2, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97c8) {
            ctx->pc = 0x1F97F0u;
            goto label_1f97f0;
        }
    }
    ctx->pc = 0x1F97D0u;
label_1f97d0:
    // 0x1f97d0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1f97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1f97d4:
    // 0x1f97d4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f97d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f97d8:
    // 0x1f97d8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f97dc:
    // 0x1f97dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f97dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f97e0:
    // 0x1f97e0: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1f97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1f97e4:
    // 0x1f97e4: 0xc04e7c4  jal         func_139F10
label_1f97e8:
    if (ctx->pc == 0x1F97E8u) {
        ctx->pc = 0x1F97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E4u;
        // 0x1f97e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97ECu;
        goto label_1f97ec;
    }
    ctx->pc = 0x1F97E4u;
    SET_GPR_U32(ctx, 31, 0x1F97ECu);
    ctx->pc = 0x1F97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97E4u;
    // 0x1f97e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139F10u, 0x1F97E4u, 0x1F97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97ECu;
label_1f97ec:
    // 0x1f97ec: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f97ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f97f0:
    // 0x1f97f0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f97f4:
    // 0x1f97f4: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f97f8:
    // 0x1f97f8: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f97fc:
    // 0x1f97fc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f97fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f9800:
    // 0x1f9800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9804:
    // 0x1f9804: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9808:
    // 0x1f9808: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f980c:
    // 0x1f980c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9810:
    // 0x1f9810: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9814:
    // 0x1f9814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9818:
    // 0x1f9818: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f9818u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f981c:
    // 0x1f981c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1f981cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1f9820:
    // 0x1f9820: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1f9824:
    if (ctx->pc == 0x1F9824u) {
        ctx->pc = 0x1F9828u;
        goto label_1f9828;
    }
    ctx->pc = 0x1F9820u;
    {
        const bool branch_taken_0x1f9820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9820) {
            ctx->pc = 0x1F9848u;
            goto label_1f9848;
        }
    }
    ctx->pc = 0x1F9828u;
label_1f9828:
    // 0x1f9828: 0xdf8589d0  ld          $a1, -0x7630($gp)
    ctx->pc = 0x1f9828u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294937040)));
label_1f982c:
    // 0x1f982c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1f9830:
    // 0x1f9830: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f9830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f9834:
    // 0x1f9834: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f9838:
    // 0x1f9838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f983c:
    // 0x1f983c: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1f9840:
    // 0x1f9840: 0xc04e7c4  jal         func_139F10
label_1f9844:
    if (ctx->pc == 0x1F9844u) {
        ctx->pc = 0x1F9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9840u;
        // 0x1f9844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9848u;
        goto label_1f9848;
    }
    ctx->pc = 0x1F9840u;
    SET_GPR_U32(ctx, 31, 0x1F9848u);
    ctx->pc = 0x1F9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9840u;
    // 0x1f9844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139F10u, 0x1F9840u, 0x1F9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9848u;
label_1f9848:
    // 0x1f9848: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f9848u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f984c:
    // 0x1f984c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9850:
    // 0x1f9850: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9854:
    // 0x1f9854: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9858:
    // 0x1f9858: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f985c:
    // 0x1f985c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9860:
    // 0x1f9860: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9864:
    // 0x1f9864: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9868:
    // 0x1f9868: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f986c:
    // 0x1f986c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9870:
    // 0x1f9870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9874:
    // 0x1f9874: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f9874u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9878:
    // 0x1f9878: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1f9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1f987c:
    // 0x1f987c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f9880:
    if (ctx->pc == 0x1F9880u) {
        ctx->pc = 0x1F9884u;
        goto label_1f9884;
    }
    ctx->pc = 0x1F987Cu;
    {
        const bool branch_taken_0x1f987c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f987c) {
            ctx->pc = 0x1F9894u;
            goto label_1f9894;
        }
    }
    ctx->pc = 0x1F9884u;
label_1f9884:
    // 0x1f9884: 0xdf8589d0  ld          $a1, -0x7630($gp)
    ctx->pc = 0x1f9884u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294937040)));
label_1f9888:
    // 0x1f9888: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1f9888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f988c:
    // 0x1f988c: 0xc04e5e8  jal         func_1397A0
label_1f9890:
    if (ctx->pc == 0x1F9890u) {
        ctx->pc = 0x1F9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F988Cu;
        // 0x1f9890: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9894u;
        goto label_1f9894;
    }
    ctx->pc = 0x1F988Cu;
    SET_GPR_U32(ctx, 31, 0x1F9894u);
    ctx->pc = 0x1F9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F988Cu;
    // 0x1f9890: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1397A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1397A0u, 0x1F988Cu, 0x1F9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9894u;
label_1f9894:
    // 0x1f9894: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f9894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9898:
    // 0x1f9898: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f989c:
    // 0x1f989c: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f98a0:
    // 0x1f98a0: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f98a4:
    // 0x1f98a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f98a8:
    // 0x1f98a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f98ac:
    // 0x1f98ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f98acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f98b0:
    // 0x1f98b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f98b4:
    // 0x1f98b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f98b8:
    // 0x1f98b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f98bc:
    // 0x1f98bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f98c0:
    // 0x1f98c0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1f98c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f98c4:
    // 0x1f98c4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1f98c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1f98c8:
    // 0x1f98c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f98cc:
    if (ctx->pc == 0x1F98CCu) {
        ctx->pc = 0x1F98D0u;
        goto label_1f98d0;
    }
    ctx->pc = 0x1F98C8u;
    {
        const bool branch_taken_0x1f98c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98c8) {
            ctx->pc = 0x1F98D8u;
            goto label_1f98d8;
        }
    }
    ctx->pc = 0x1F98D0u;
label_1f98d0:
    // 0x1f98d0: 0xc04e330  jal         func_138CC0
label_1f98d4:
    if (ctx->pc == 0x1F98D4u) {
        ctx->pc = 0x1F98D8u;
        goto label_1f98d8;
    }
    ctx->pc = 0x1F98D0u;
    SET_GPR_U32(ctx, 31, 0x1F98D8u);
    ctx->pc = 0x138CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CC0u, 0x1F98D0u, 0x1F98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98D8u;
label_1f98d8:
    // 0x1f98d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f98d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f98dc:
    // 0x1f98dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f98e0:
    // 0x1f98e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f98e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f98e4:
    // 0x1f98e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f98e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f98e8:
    // 0x1f98e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f98e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f98ec:
    // 0x1f98ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f98ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f98f0:
    // 0x1f98f0: 0x3e00008  jr          $ra
label_1f98f4:
    if (ctx->pc == 0x1F98F4u) {
        ctx->pc = 0x1F98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F0u;
        // 0x1f98f4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98F8u;
        goto label_1f98f8;
    }
    ctx->pc = 0x1F98F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F0u;
        // 0x1f98f4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98F8u;
label_1f98f8:
    // 0x1f98f8: 0x0  nop
    ctx->pc = 0x1f98f8u;
    // NOP
label_1f98fc:
    // 0x1f98fc: 0x0  nop
    ctx->pc = 0x1f98fcu;
    // NOP
label_1f9900:
    // 0x1f9900: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f9900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9904:
    // 0x1f9904: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9908:
    // 0x1f9908: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f9908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f990c:
    // 0x1f990c: 0x0  nop
    ctx->pc = 0x1f990cu;
    // NOP
label_1f9910:
    // 0x1f9910: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1f9914:
    if (ctx->pc == 0x1F9914u) {
        ctx->pc = 0x1F9918u;
        goto label_1f9918;
    }
    ctx->pc = 0x1F9910u;
    {
        const bool branch_taken_0x1f9910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9910) {
            ctx->pc = 0x1F993Cu;
            goto label_1f993c;
        }
    }
    ctx->pc = 0x1F9918u;
label_1f9918:
    // 0x1f9918: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1f9918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_1f991c:
    // 0x1f991c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f9920:
    // 0x1f9920: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9924:
    // 0x1f9924: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f9924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9928:
    // 0x1f9928: 0x0  nop
    ctx->pc = 0x1f9928u;
    // NOP
label_1f992c:
    // 0x1f992c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1f9930:
    if (ctx->pc == 0x1F9930u) {
        ctx->pc = 0x1F9934u;
        goto label_1f9934;
    }
    ctx->pc = 0x1F992Cu;
    {
        const bool branch_taken_0x1f992c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f992c) {
            ctx->pc = 0x1F996Cu;
            goto label_1f996c;
        }
    }
    ctx->pc = 0x1F9934u;
label_1f9934:
    // 0x1f9934: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f9938:
    if (ctx->pc == 0x1F9938u) {
        ctx->pc = 0x1F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9934u;
        // 0x1f9938: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F993Cu;
        goto label_1f993c;
    }
    ctx->pc = 0x1F9934u;
    {
        const bool branch_taken_0x1f9934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9934u;
        // 0x1f9938: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9934) {
            ctx->pc = 0x1F996Cu;
            goto label_1f996c;
        }
    }
    ctx->pc = 0x1F993Cu;
label_1f993c:
    // 0x1f993c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f993cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9940:
    // 0x1f9940: 0x0  nop
    ctx->pc = 0x1f9940u;
    // NOP
label_1f9944:
    // 0x1f9944: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1f9948:
    if (ctx->pc == 0x1F9948u) {
        ctx->pc = 0x1F994Cu;
        goto label_1f994c;
    }
    ctx->pc = 0x1F9944u;
    {
        const bool branch_taken_0x1f9944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9944) {
            ctx->pc = 0x1F996Cu;
            goto label_1f996c;
        }
    }
    ctx->pc = 0x1F994Cu;
label_1f994c:
    // 0x1f994c: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x1f994cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_1f9950:
    // 0x1f9950: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f9950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f9954:
    // 0x1f9954: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f9954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9958:
    // 0x1f9958: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f9958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f995c:
    // 0x1f995c: 0x0  nop
    ctx->pc = 0x1f995cu;
    // NOP
label_1f9960:
    // 0x1f9960: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f9964:
    if (ctx->pc == 0x1F9964u) {
        ctx->pc = 0x1F9968u;
        goto label_1f9968;
    }
    ctx->pc = 0x1F9960u;
    {
        const bool branch_taken_0x1f9960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9960) {
            ctx->pc = 0x1F996Cu;
            goto label_1f996c;
        }
    }
    ctx->pc = 0x1F9968u;
label_1f9968:
    // 0x1f9968: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1f9968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f996c:
    // 0x1f996c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1f996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9970:
    // 0x1f9970: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1f9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9974:
    // 0x1f9974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f9974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9978:
    // 0x1f9978: 0x0  nop
    ctx->pc = 0x1f9978u;
    // NOP
label_1f997c:
    // 0x1f997c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1f9980:
    if (ctx->pc == 0x1F9980u) {
        ctx->pc = 0x1F9984u;
        goto label_1f9984;
    }
    ctx->pc = 0x1F997Cu;
    {
        const bool branch_taken_0x1f997c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f997c) {
            ctx->pc = 0x1F99A8u;
            goto label_1f99a8;
        }
    }
    ctx->pc = 0x1F9984u;
label_1f9984:
    // 0x1f9984: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1f9984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_1f9988:
    // 0x1f9988: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f9988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f998c:
    // 0x1f998c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1f998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9990:
    // 0x1f9990: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f9990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9994:
    // 0x1f9994: 0x0  nop
    ctx->pc = 0x1f9994u;
    // NOP
label_1f9998:
    // 0x1f9998: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1f999c:
    if (ctx->pc == 0x1F999Cu) {
        ctx->pc = 0x1F99A0u;
        goto label_1f99a0;
    }
    ctx->pc = 0x1F9998u;
    {
        const bool branch_taken_0x1f9998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9998) {
            ctx->pc = 0x1F99D8u;
            { ctx->pc = 0x1f99d8; return; }
        }
    }
    ctx->pc = 0x1F99A0u;
label_1f99a0:
    // 0x1f99a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f99a4:
    if (ctx->pc == 0x1F99A4u) {
        ctx->pc = 0x1F99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A0u;
        // 0x1f99a4: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99A8u;
        goto label_1f99a8;
    }
    ctx->pc = 0x1F99A0u;
    {
        const bool branch_taken_0x1f99a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A0u;
        // 0x1f99a4: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99a0) {
            ctx->pc = 0x1F99D8u;
            { ctx->pc = 0x1f99d8; return; }
        }
    }
    ctx->pc = 0x1F99A8u;
label_1f99a8:
    // 0x1f99a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f99a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f99ac:
    // 0x1f99ac: 0x0  nop
    ctx->pc = 0x1f99acu;
    // NOP
label_1f99b0:
    // 0x1f99b0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1f99b4:
    if (ctx->pc == 0x1F99B4u) {
        ctx->pc = 0x1F99B8u;
        { ctx->pc = 0x1f99b8; return; }
    }
    ctx->pc = 0x1F99B0u;
    {
        const bool branch_taken_0x1f99b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f99b0) {
            ctx->pc = 0x1F99D8u;
            { ctx->pc = 0x1f99d8; return; }
        }
    }
    ctx->pc = 0x1F99B8u;
    ctx->pc = 0x1f99b8u;
    return;
}

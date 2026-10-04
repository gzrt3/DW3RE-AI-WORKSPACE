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


void FUN_0017faa0_part643(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        case 0x2b97b0u: goto label_2b97b0;
        case 0x2b97b4u: goto label_2b97b4;
        case 0x2b97b8u: goto label_2b97b8;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97c0u: goto label_2b97c0;
        case 0x2b97c4u: goto label_2b97c4;
        case 0x2b97c8u: goto label_2b97c8;
        case 0x2b97ccu: goto label_2b97cc;
        case 0x2b97d0u: goto label_2b97d0;
        case 0x2b97d4u: goto label_2b97d4;
        case 0x2b97d8u: goto label_2b97d8;
        case 0x2b97dcu: goto label_2b97dc;
        case 0x2b97e0u: goto label_2b97e0;
        case 0x2b97e4u: goto label_2b97e4;
        case 0x2b97e8u: goto label_2b97e8;
        case 0x2b97ecu: goto label_2b97ec;
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b97f4u: goto label_2b97f4;
        case 0x2b97f8u: goto label_2b97f8;
        case 0x2b97fcu: goto label_2b97fc;
        case 0x2b9800u: goto label_2b9800;
        case 0x2b9804u: goto label_2b9804;
        case 0x2b9808u: goto label_2b9808;
        case 0x2b980cu: goto label_2b980c;
        case 0x2b9810u: goto label_2b9810;
        case 0x2b9814u: goto label_2b9814;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b981cu: goto label_2b981c;
        case 0x2b9820u: goto label_2b9820;
        case 0x2b9824u: goto label_2b9824;
        case 0x2b9828u: goto label_2b9828;
        case 0x2b982cu: goto label_2b982c;
        case 0x2b9830u: goto label_2b9830;
        case 0x2b9834u: goto label_2b9834;
        case 0x2b9838u: goto label_2b9838;
        case 0x2b983cu: goto label_2b983c;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b9844u: goto label_2b9844;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b984cu: goto label_2b984c;
        case 0x2b9850u: goto label_2b9850;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9864u: goto label_2b9864;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b986cu: goto label_2b986c;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9874u: goto label_2b9874;
        case 0x2b9878u: goto label_2b9878;
        case 0x2b987cu: goto label_2b987c;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b9884u: goto label_2b9884;
        case 0x2b9888u: goto label_2b9888;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9890u: goto label_2b9890;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9898u: goto label_2b9898;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98a0u: goto label_2b98a0;
        case 0x2b98a4u: goto label_2b98a4;
        case 0x2b98a8u: goto label_2b98a8;
        case 0x2b98acu: goto label_2b98ac;
        case 0x2b98b0u: goto label_2b98b0;
        case 0x2b98b4u: goto label_2b98b4;
        case 0x2b98b8u: goto label_2b98b8;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98c0u: goto label_2b98c0;
        case 0x2b98c4u: goto label_2b98c4;
        case 0x2b98c8u: goto label_2b98c8;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98d0u: goto label_2b98d0;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98dcu: goto label_2b98dc;
        case 0x2b98e0u: goto label_2b98e0;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98ecu: goto label_2b98ec;
        case 0x2b98f0u: goto label_2b98f0;
        case 0x2b98f4u: goto label_2b98f4;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b98fcu: goto label_2b98fc;
        case 0x2b9900u: goto label_2b9900;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9910u: goto label_2b9910;
        case 0x2b9914u: goto label_2b9914;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9920u: goto label_2b9920;
        case 0x2b9924u: goto label_2b9924;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b992cu: goto label_2b992c;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9934u: goto label_2b9934;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b993cu: goto label_2b993c;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9944u: goto label_2b9944;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b994cu: goto label_2b994c;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b9954u: goto label_2b9954;
        case 0x2b9958u: goto label_2b9958;
        case 0x2b995cu: goto label_2b995c;
        case 0x2b9960u: goto label_2b9960;
        case 0x2b9964u: goto label_2b9964;
        case 0x2b9968u: goto label_2b9968;
        case 0x2b996cu: goto label_2b996c;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b9974u: goto label_2b9974;
        case 0x2b9978u: goto label_2b9978;
        case 0x2b997cu: goto label_2b997c;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9984u: goto label_2b9984;
        case 0x2b9988u: goto label_2b9988;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9994u: goto label_2b9994;
        case 0x2b9998u: goto label_2b9998;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99a0u: goto label_2b99a0;
        case 0x2b99a4u: goto label_2b99a4;
        case 0x2b99a8u: goto label_2b99a8;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99b0u: goto label_2b99b0;
        case 0x2b99b4u: goto label_2b99b4;
        case 0x2b99b8u: goto label_2b99b8;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99c0u: goto label_2b99c0;
        case 0x2b99c4u: goto label_2b99c4;
        case 0x2b99c8u: goto label_2b99c8;
        case 0x2b99ccu: goto label_2b99cc;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99d4u: goto label_2b99d4;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99dcu: goto label_2b99dc;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99e8u: goto label_2b99e8;
        case 0x2b99ecu: goto label_2b99ec;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b99f8u: goto label_2b99f8;
        case 0x2b99fcu: goto label_2b99fc;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a04u: goto label_2b9a04;
        case 0x2b9a08u: goto label_2b9a08;
        case 0x2b9a0cu: goto label_2b9a0c;
        default: return;
    }

label_2b9240:
    // 0x2b9240: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b9244:
    if (ctx->pc == 0x2B9244u) {
        ctx->pc = 0x2B9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9240u;
        // 0x2b9244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9248u;
        goto label_2b9248;
    }
    ctx->pc = 0x2B9240u;
    {
        const bool branch_taken_0x2b9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9240u;
        // 0x2b9244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9240) {
            ctx->pc = 0x2C7250u;
            return;
        }
    }
    ctx->pc = 0x2B9248u;
label_2b9248:
    // 0x2b9248: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b924c:
    if (ctx->pc == 0x2B924Cu) {
        ctx->pc = 0x2B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9248u;
        // 0x2b924c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9250u;
        goto label_2b9250;
    }
    ctx->pc = 0x2B9248u;
    {
        const bool branch_taken_0x2b9248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9248u;
        // 0x2b924c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9248) {
            ctx->pc = 0x2C9258u;
            return;
        }
    }
    ctx->pc = 0x2B9250u;
label_2b9250:
    // 0x2b9250: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2b9250u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2b9254:
    // 0x2b9254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9258:
    // 0x2b9258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b925c:
    // 0x2b925c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b925cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9260:
    // 0x2b9260: 0x520a07c7  beql        $s0, $t2, . + 4 + (0x7C7 << 2)
label_2b9264:
    if (ctx->pc == 0x2B9264u) {
        ctx->pc = 0x2B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9260u;
        // 0x2b9264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9268u;
        goto label_2b9268;
    }
    ctx->pc = 0x2B9260u;
    {
        const bool branch_taken_0x2b9260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b9260) {
            ctx->pc = 0x2B9264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9260u;
            // 0x2b9264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB180u;
            { ctx->pc = 0x2bb180; return; }
        }
    }
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b926c:
    // 0x2b926c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b926cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9270:
    // 0x2b9270: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b9270u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B9270 raw=0x48000800");
 /* MITIGATED */
label_2b9274:
    // 0x2b9274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9278:
    // 0x2b9278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b927c:
    // 0x2b927c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b927cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9280:
    // 0x2b9280: 0x420106a3  .word       0x420106A3                   # INVALID     $s0, $at, 0x6A3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9280u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x23 at 0x2B9280 raw=0x420106A3"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9284:
    // 0x2b9284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9288:
    // 0x2b9288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b928c:
    // 0x2b928c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b928cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9290:
    // 0x2b9290: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b9290u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b9294:
    // 0x2b9294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9298:
    // 0x2b9298: 0x10011006  beq         $zero, $at, . + 4 + (0x1006 << 2)
label_2b929c:
    if (ctx->pc == 0x2B929Cu) {
        ctx->pc = 0x2B929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9298u;
        // 0x2b929c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92A0u;
        goto label_2b92a0;
    }
    ctx->pc = 0x2B9298u;
    {
        const bool branch_taken_0x2b9298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9298u;
        // 0x2b929c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9298) {
            ctx->pc = 0x2BD2B4u;
            { ctx->pc = 0x2bd2b4; return; }
        }
    }
    ctx->pc = 0x2B92A0u;
label_2b92a0:
    // 0x2b92a0: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2b92a4:
    if (ctx->pc == 0x2B92A4u) {
        ctx->pc = 0x2B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A0u;
        // 0x2b92a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92A8u;
        goto label_2b92a8;
    }
    ctx->pc = 0x2B92A0u;
    {
        const bool branch_taken_0x2b92a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A0u;
        // 0x2b92a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92a0) {
            ctx->pc = 0x2B943Cu;
            goto label_2b943c;
        }
    }
    ctx->pc = 0x2B92A8u;
label_2b92a8:
    // 0x2b92a8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b92a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B92A8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b92ac:
    // 0x2b92ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b92acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b92b0:
    // 0x2b92b0: 0x10021046  beq         $zero, $v0, . + 4 + (0x1046 << 2)
label_2b92b4:
    if (ctx->pc == 0x2B92B4u) {
        ctx->pc = 0x2B92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B0u;
        // 0x2b92b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92B8u;
        goto label_2b92b8;
    }
    ctx->pc = 0x2B92B0u;
    {
        const bool branch_taken_0x2b92b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B0u;
        // 0x2b92b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b0) {
            ctx->pc = 0x2BD3CCu;
            { ctx->pc = 0x2bd3cc; return; }
        }
    }
    ctx->pc = 0x2B92B8u;
label_2b92b8:
    // 0x2b92b8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b92bc:
    if (ctx->pc == 0x2B92BCu) {
        ctx->pc = 0x2B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B8u;
        // 0x2b92bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C0u;
        goto label_2b92c0;
    }
    ctx->pc = 0x2B92B8u;
    {
        const bool branch_taken_0x2b92b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B8u;
        // 0x2b92bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b8) {
            ctx->pc = 0x2BB2B8u;
            { ctx->pc = 0x2bb2b8; return; }
        }
    }
    ctx->pc = 0x2B92C0u;
label_2b92c0:
    // 0x2b92c0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b92c4:
    if (ctx->pc == 0x2B92C4u) {
        ctx->pc = 0x2B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C0u;
        // 0x2b92c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C8u;
        goto label_2b92c8;
    }
    ctx->pc = 0x2B92C0u;
    {
        const bool branch_taken_0x2b92c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C0u;
        // 0x2b92c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92c0) {
            ctx->pc = 0x2CF2C8u;
            return;
        }
    }
    ctx->pc = 0x2B92C8u;
label_2b92c8:
    // 0x2b92c8: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b92c8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b92cc:
    // 0x2b92cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b92ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b92d0:
    // 0x2b92d0: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b92d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B92D0 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b92d4:
    // 0x2b92d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b92d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b92d8:
    // 0x2b92d8: 0xb0b1000  j           func_C2C4000
label_2b92dc:
    if (ctx->pc == 0x2B92DCu) {
        ctx->pc = 0x2B92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D8u;
        // 0x2b92dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92E0u;
        goto label_2b92e0;
    }
    ctx->pc = 0x2B92D8u;
    ctx->pc = 0x2B92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92D8u;
    // 0x2b92dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B92D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B92E0u;
label_2b92e0:
    // 0x2b92e0: 0xa800fff  j           func_A003FFC
label_2b92e4:
    if (ctx->pc == 0x2B92E4u) {
        ctx->pc = 0x2B92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E0u;
        // 0x2b92e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92E8u;
        goto label_2b92e8;
    }
    ctx->pc = 0x2B92E0u;
    ctx->pc = 0x2B92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92E0u;
    // 0x2b92e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2B92E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B92E8u;
label_2b92e8:
    // 0x2b92e8: 0xb030fff  j           func_C0C3FFC
label_2b92ec:
    if (ctx->pc == 0x2B92ECu) {
        ctx->pc = 0x2B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E8u;
        // 0x2b92ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92F0u;
        goto label_2b92f0;
    }
    ctx->pc = 0x2B92E8u;
    ctx->pc = 0x2B92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92E8u;
    // 0x2b92ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2B92E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B92F0u;
label_2b92f0:
    // 0x2b92f0: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b92f4:
    if (ctx->pc == 0x2B92F4u) {
        ctx->pc = 0x2B92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92F0u;
        // 0x2b92f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92F8u;
        goto label_2b92f8;
    }
    ctx->pc = 0x2B92F0u;
    {
        const bool branch_taken_0x2b92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92F0u;
        // 0x2b92f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92f0) {
            ctx->pc = 0x2D533Cu;
            return;
        }
    }
    ctx->pc = 0x2B92F8u;
label_2b92f8:
    // 0x2b92f8: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b92f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B92F8 raw=0x01F67FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b92fc:
    // 0x2b92fc: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b92fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b9300:
    // 0x2b9300: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9300u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2b9304:
    // 0x2b9304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9308:
    // 0x2b9308: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9308u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2b930c:
    // 0x2b930c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b930cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9310:
    // 0x2b9310: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9310u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2b9314:
    // 0x2b9314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9318:
    // 0x2b9318: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9318u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2b931c:
    // 0x2b931c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b931cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9320:
    // 0x2b9320: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2b9324:
    // 0x2b9324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9328:
    // 0x2b9328: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9328u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B9328 raw=0x01F07FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b932c:
    // 0x2b932c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b932cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9330:
    // 0x2b9330: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9330u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2b9334:
    // 0x2b9334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9338:
    // 0x2b9338: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9338u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9338 raw=0x01F27FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b933c:
    // 0x2b933c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b933cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9340:
    // 0x2b9340: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b9340u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b9344:
    // 0x2b9344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9348:
    // 0x2b9348: 0x10081006  beq         $zero, $t0, . + 4 + (0x1006 << 2)
label_2b934c:
    if (ctx->pc == 0x2B934Cu) {
        ctx->pc = 0x2B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9348u;
        // 0x2b934c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9350u;
        goto label_2b9350;
    }
    ctx->pc = 0x2B9348u;
    {
        const bool branch_taken_0x2b9348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9348u;
        // 0x2b934c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9348) {
            ctx->pc = 0x2BD364u;
            { ctx->pc = 0x2bd364; return; }
        }
    }
    ctx->pc = 0x2B9350u;
label_2b9350:
    // 0x2b9350: 0x10091026  beq         $zero, $t1, . + 4 + (0x1026 << 2)
label_2b9354:
    if (ctx->pc == 0x2B9354u) {
        ctx->pc = 0x2B9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9350u;
        // 0x2b9354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9358u;
        goto label_2b9358;
    }
    ctx->pc = 0x2B9350u;
    {
        const bool branch_taken_0x2b9350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9350u;
        // 0x2b9354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9350) {
            ctx->pc = 0x2BD3ECu;
            { ctx->pc = 0x2bd3ec; return; }
        }
    }
    ctx->pc = 0x2B9358u;
label_2b9358:
    // 0x2b9358: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9358u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9358 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b935c:
    // 0x2b935c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b935cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9360:
    // 0x2b9360: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b9360u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b9364:
    // 0x2b9364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9368:
    // 0x2b9368: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b9368u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b936c:
    // 0x2b936c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b936cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9370:
    // 0x2b9370: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b9370u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b9374:
    // 0x2b9374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9378:
    // 0x2b9378: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9378u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b937c:
    // 0x2b937c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b937cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9380:
    // 0x2b9380: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B9380 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9384:
    // 0x2b9384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9388:
    // 0x2b9388: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b938c:
    if (ctx->pc == 0x2B938Cu) {
        ctx->pc = 0x2B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9388u;
        // 0x2b938c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9390u;
        goto label_2b9390;
    }
    ctx->pc = 0x2B9388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9388u;
        // 0x2b938c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9390u;
label_2b9390:
    // 0x2b9390: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b9390u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b9394:
    // 0x2b9394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9398:
    // 0x2b9398: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b939c:
    // 0x2b939c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b939cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b93a0:
    // 0x2b93a0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b93a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b93a4:
    // 0x2b93a4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b93a4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b93a8:
    // 0x2b93a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93ac:
    // 0x2b93ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93b0:
    // 0x2b93b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93b4:
    // 0x2b93b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93b8:
    // 0x2b93b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93bc:
    // 0x2b93bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93c0:
    // 0x2b93c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93c4:
    // 0x2b93c4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b93c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B93C4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b93c8:
    // 0x2b93c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93cc:
    // 0x2b93cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93d0:
    // 0x2b93d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93d4:
    // 0x2b93d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93d8:
    // 0x2b93d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93dc:
    // 0x2b93dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b93dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b93e0:
    // 0x2b93e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93e4:
    // 0x2b93e4: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b93e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b93e8:
    // 0x2b93e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93ec:
    // 0x2b93ec: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b93ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b93f0:
    // 0x2b93f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b93f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b93f4:
    // 0x2b93f4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b93f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b93f8:
    // 0x2b93f8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b93f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b93fc:
    // 0x2b93fc: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b93fcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b9400:
    // 0x2b9400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9404:
    // 0x2b9404: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9404u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b9408:
    // 0x2b9408: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9408u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b940c:
    // 0x2b940c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b940cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b9410:
    // 0x2b9410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9414:
    // 0x2b9414: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9414u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b9418:
    // 0x2b9418: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b941c:
    // 0x2b941c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b941cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b9420:
    // 0x2b9420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9424:
    // 0x2b9424: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9424u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b9428:
    // 0x2b9428: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9428u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B9428 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b942c:
    // 0x2b942c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b942cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b9430:
    // 0x2b9430: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9430u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b9434:
    // 0x2b9434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9438:
    // 0x2b9438: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9438u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b943c:
    // 0x2b943c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b943cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9440:
    // 0x2b9440: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b9440u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b9444:
    // 0x2b9444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9448:
    // 0x2b9448: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b944c:
    if (ctx->pc == 0x2B944Cu) {
        ctx->pc = 0x2B944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9448u;
        // 0x2b944c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9450u;
        goto label_2b9450;
    }
    ctx->pc = 0x2B9448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B9450u);
        ctx->pc = 0x2B944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9448u;
        // 0x2b944c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9448u, 0x2B9450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9450u;
label_2b9450:
    // 0x2b9450: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b9450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b9454:
    // 0x2b9454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9458:
    // 0x2b9458: 0x420f06a1  .word       0x420F06A1                   # INVALID     $s0, $t7, 0x6A1 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9458u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B9458 raw=0x420F06A1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b945c:
    // 0x2b945c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b945cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9460:
    // 0x2b9460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9464:
    // 0x2b9464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9468:
    // 0x2b9468: 0x500a000c  beql        $zero, $t2, . + 4 + (0xC << 2)
label_2b946c:
    if (ctx->pc == 0x2B946Cu) {
        ctx->pc = 0x2B946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9468u;
        // 0x2b946c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9470u;
        goto label_2b9470;
    }
    ctx->pc = 0x2B9468u;
    {
        const bool branch_taken_0x2b9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b9468) {
            ctx->pc = 0x2B946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9468u;
            // 0x2b946c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B949Cu;
            goto label_2b949c;
        }
    }
    ctx->pc = 0x2B9470u;
label_2b9470:
    // 0x2b9470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9474:
    // 0x2b9474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9478:
    // 0x2b9478: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b947c:
    if (ctx->pc == 0x2B947Cu) {
        ctx->pc = 0x2B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9478u;
        // 0x2b947c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9480u;
        goto label_2b9480;
    }
    ctx->pc = 0x2B9478u;
    {
        const bool branch_taken_0x2b9478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9478u;
        // 0x2b947c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9478) {
            ctx->pc = 0x2BF57Cu;
            { ctx->pc = 0x2bf57c; return; }
        }
    }
    ctx->pc = 0x2B9480u;
label_2b9480:
    // 0x2b9480: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b9480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b9484:
    // 0x2b9484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9488:
    // 0x2b9488: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b948c:
    if (ctx->pc == 0x2B948Cu) {
        ctx->pc = 0x2B948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9488u;
        // 0x2b948c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9490u;
        goto label_2b9490;
    }
    ctx->pc = 0x2B9488u;
    {
        const bool branch_taken_0x2b9488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9488u;
        // 0x2b948c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9488) {
            ctx->pc = 0x2BD490u;
            { ctx->pc = 0x2bd490; return; }
        }
    }
    ctx->pc = 0x2B9490u;
label_2b9490:
    // 0x2b9490: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b9494:
    if (ctx->pc == 0x2B9494u) {
        ctx->pc = 0x2B9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9490u;
        // 0x2b9494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9498u;
        goto label_2b9498;
    }
    ctx->pc = 0x2B9490u;
    {
        const bool branch_taken_0x2b9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9490u;
        // 0x2b9494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9490) {
            ctx->pc = 0x2BF514u;
            { ctx->pc = 0x2bf514; return; }
        }
    }
    ctx->pc = 0x2B9498u;
label_2b9498:
    // 0x2b9498: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b949c:
    if (ctx->pc == 0x2B949Cu) {
        ctx->pc = 0x2B949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9498u;
        // 0x2b949c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94A0u;
        goto label_2b94a0;
    }
    ctx->pc = 0x2B9498u;
    {
        const bool branch_taken_0x2b9498 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9498u;
        // 0x2b949c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9498) {
            ctx->pc = 0x2CF498u;
            return;
        }
    }
    ctx->pc = 0x2B94A0u;
label_2b94a0:
    // 0x2b94a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b94a4:
    if (ctx->pc == 0x2B94A4u) {
        ctx->pc = 0x2B94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A0u;
        // 0x2b94a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94A8u;
        goto label_2b94a8;
    }
    ctx->pc = 0x2B94A0u;
    {
        const bool branch_taken_0x2b94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A0u;
        // 0x2b94a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94a0) {
            ctx->pc = 0x2CF4A8u;
            return;
        }
    }
    ctx->pc = 0x2B94A8u;
label_2b94a8:
    // 0x2b94a8: 0xb0b1000  j           func_C2C4000
label_2b94ac:
    if (ctx->pc == 0x2B94ACu) {
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94B0u;
        goto label_2b94b0;
    }
    ctx->pc = 0x2B94A8u;
    ctx->pc = 0x2B94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94A8u;
    // 0x2b94ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B94A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x42010777  .word       0x42010777                   # INVALID     $s0, $at, 0x777 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b94b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x37 at 0x2B94B0 raw=0x42010777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b94b4:
    // 0x2b94b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94b8:
    // 0x2b94b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b94b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b94bc:
    // 0x2b94bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94c0:
    // 0x2b94c0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b94c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b94c4:
    // 0x2b94c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94c8:
    // 0x2b94c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b94c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b94cc:
    // 0x2b94cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94d0:
    // 0x2b94d0: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2b94d4:
    if (ctx->pc == 0x2B94D4u) {
        ctx->pc = 0x2B94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94D0u;
        // 0x2b94d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94D8u;
        goto label_2b94d8;
    }
    ctx->pc = 0x2B94D0u;
    {
        const bool branch_taken_0x2b94d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94D0u;
        // 0x2b94d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94d0) {
            ctx->pc = 0x2D54F8u;
            return;
        }
    }
    ctx->pc = 0x2B94D8u;
label_2b94d8:
    // 0x2b94d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b94dc:
    // 0x2b94dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94e0:
    // 0x2b94e0: 0x5a0077c1  blezl       $s0, . + 4 + (0x77C1 << 2)
label_2b94e4:
    if (ctx->pc == 0x2B94E4u) {
        ctx->pc = 0x2B94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94E0u;
        // 0x2b94e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94E8u;
        goto label_2b94e8;
    }
    ctx->pc = 0x2B94E0u;
    {
        const bool branch_taken_0x2b94e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b94e0) {
            ctx->pc = 0x2B94E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B94E0u;
            // 0x2b94e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D73E8u;
            return;
        }
    }
    ctx->pc = 0x2B94E8u;
label_2b94e8:
    // 0x2b94e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b94ec:
    // 0x2b94ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94f0:
    // 0x2b94f0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b94f0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b94f4:
    // 0x2b94f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b94f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b94f8:
    // 0x2b94f8: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2b94fc:
    if (ctx->pc == 0x2B94FCu) {
        ctx->pc = 0x2B94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94F8u;
        // 0x2b94fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9500u;
        goto label_2b9500;
    }
    ctx->pc = 0x2B94F8u;
    {
        const bool branch_taken_0x2b94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94F8u;
        // 0x2b94fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94f8) {
            ctx->pc = 0x2BB824u;
            { ctx->pc = 0x2bb824; return; }
        }
    }
    ctx->pc = 0x2B9500u;
label_2b9500:
    // 0x2b9500: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2b9500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2b9504:
    // 0x2b9504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9508:
    // 0x2b9508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b950c:
    // 0x2b950c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b950cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9510:
    // 0x2b9510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9514:
    // 0x2b9514: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9514u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9518:
    // 0x2b9518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b951c:
    // 0x2b951c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b951cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9520:
    // 0x2b9520: 0x0  nop
    ctx->pc = 0x2b9520u;
    // NOP
label_2b9524:
    // 0x2b9524: 0x4a470450  vmaxx.z     $vf17, $vf0, $vf7x
    ctx->pc = 0x2b9524u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b9528:
    // 0x2b9528: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b952c:
    // 0x2b952c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b952cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9530:
    // 0x2b9530: 0x9040805  j           func_4102014
label_2b9534:
    if (ctx->pc == 0x2B9534u) {
        ctx->pc = 0x2B9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9530u;
        // 0x2b9534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9538u;
        goto label_2b9538;
    }
    ctx->pc = 0x2B9530u;
    ctx->pc = 0x2B9534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9530u;
    // 0x2b9534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4102014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4102014u, 0x2B9530u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9538u;
label_2b9538:
    // 0x2b9538: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b953c:
    if (ctx->pc == 0x2B953Cu) {
        ctx->pc = 0x2B953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9538u;
        // 0x2b953c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9540u;
        goto label_2b9540;
    }
    ctx->pc = 0x2B9538u;
    {
        const bool branch_taken_0x2b9538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9538u;
        // 0x2b953c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9538) {
            ctx->pc = 0x2BB864u;
            { ctx->pc = 0x2bb864; return; }
        }
    }
    ctx->pc = 0x2B9540u;
label_2b9540:
    // 0x2b9540: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9544:
    // 0x2b9544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9548:
    // 0x2b9548: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b954c:
    // 0x2b954c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b954cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9550:
    // 0x2b9550: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b9550u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9554:
    // 0x2b9554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9558:
    // 0x2b9558: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b9558u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b955c:
    // 0x2b955c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b955cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9560:
    // 0x2b9560: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b9560u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9564:
    // 0x2b9564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9568:
    // 0x2b9568: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b9568u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b956c:
    // 0x2b956c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b956cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9570:
    // 0x2b9570: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b9574:
    // 0x2b9574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9578:
    // 0x2b9578: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b9578u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b957c:
    // 0x2b957c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b957cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9580:
    // 0x2b9580: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b9580u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b9584:
    // 0x2b9584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9588:
    // 0x2b9588: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b9588u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b958c:
    // 0x2b958c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b958cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9590:
    // 0x2b9590: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b9594:
    if (ctx->pc == 0x2B9594u) {
        ctx->pc = 0x2B9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9590u;
        // 0x2b9594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9598u;
        goto label_2b9598;
    }
    ctx->pc = 0x2B9590u;
    {
        const bool branch_taken_0x2b9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9590u;
        // 0x2b9594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9590) {
            ctx->pc = 0x2BB598u;
            { ctx->pc = 0x2bb598; return; }
        }
    }
    ctx->pc = 0x2B9598u;
label_2b9598:
    // 0x2b9598: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b959c:
    if (ctx->pc == 0x2B959Cu) {
        ctx->pc = 0x2B959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9598u;
        // 0x2b959c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95A0u;
        goto label_2b95a0;
    }
    ctx->pc = 0x2B9598u;
    {
        const bool branch_taken_0x2b9598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9598u;
        // 0x2b959c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9598) {
            ctx->pc = 0x2C15A0u;
            return;
        }
    }
    ctx->pc = 0x2B95A0u;
label_2b95a0:
    // 0x2b95a0: 0x90c3000  j           func_430C000
label_2b95a4:
    if (ctx->pc == 0x2B95A4u) {
        ctx->pc = 0x2B95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95A0u;
        // 0x2b95a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95A8u;
        goto label_2b95a8;
    }
    ctx->pc = 0x2B95A0u;
    ctx->pc = 0x2B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95A0u;
    // 0x2b95a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B95A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B95A8u;
label_2b95a8:
    // 0x2b95a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b95ac:
    // 0x2b95ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95b0:
    // 0x2b95b0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b95b4:
    if (ctx->pc == 0x2B95B4u) {
        ctx->pc = 0x2B95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95B0u;
        // 0x2b95b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95B8u;
        goto label_2b95b8;
    }
    ctx->pc = 0x2B95B0u;
    {
        const bool branch_taken_0x2b95b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95B0u;
        // 0x2b95b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95b0) {
            ctx->pc = 0x2BB5B0u;
            { ctx->pc = 0x2bb5b0; return; }
        }
    }
    ctx->pc = 0x2B95B8u;
label_2b95b8:
    // 0x2b95b8: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b95bc:
    if (ctx->pc == 0x2B95BCu) {
        ctx->pc = 0x2B95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95B8u;
        // 0x2b95bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95C0u;
        goto label_2b95c0;
    }
    ctx->pc = 0x2B95B8u;
    {
        const bool branch_taken_0x2b95b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95B8u;
        // 0x2b95bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95b8) {
            ctx->pc = 0x2C55C0u;
            return;
        }
    }
    ctx->pc = 0x2B95C0u;
label_2b95c0:
    // 0x2b95c0: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b95c0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b95c4:
    // 0x2b95c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95c8:
    // 0x2b95c8: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2b95c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2b95cc:
    // 0x2b95cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95d0:
    // 0x2b95d0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b95d4:
    // 0x2b95d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95d8:
    // 0x2b95d8: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b95dc:
    // 0x2b95dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95e0:
    // 0x2b95e0: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b95e4:
    // 0x2b95e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95e8:
    // 0x2b95e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b95e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b95ec:
    // 0x2b95ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b95ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b95f0:
    // 0x2b95f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b95f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b95f4:
    // 0x2b95f4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b95f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b95f8:
    // 0x2b95f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b95f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b95fc:
    // 0x2b95fc: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b95fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B95FC raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9600:
    // 0x2b9600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9604:
    // 0x2b9604: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b9608:
    // 0x2b9608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b960c:
    // 0x2b960c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b960cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b9610:
    // 0x2b9610: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b9610u;
    // NOP (addi to $zero)
label_2b9614:
    // 0x2b9614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9618:
    // 0x2b9618: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b961c:
    // 0x2b961c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b961cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9620:
    // 0x2b9620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9624:
    // 0x2b9624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9628:
    // 0x2b9628: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b9628u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b962c:
    // 0x2b962c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b962cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b9630:
    // 0x2b9630: 0x81d52b7c  lb          $s5, 0x2B7C($t6)
    ctx->pc = 0x2b9630u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2b9634:
    // 0x2b9634: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9634 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9638:
    // 0x2b9638: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2b9638u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b963c:
    // 0x2b963c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b963cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b9640:
    // 0x2b9640: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b9640u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b9644:
    // 0x2b9644: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9644u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b9648:
    // 0x2b9648: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9648u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b964c:
    // 0x2b964c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b964cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9650:
    // 0x2b9650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9654:
    // 0x2b9654: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9654u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b9658:
    // 0x2b9658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b965c:
    // 0x2b965c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b965cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b9660:
    // 0x2b9660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9664:
    // 0x2b9664: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b9668:
    // 0x2b9668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b966c:
    // 0x2b966c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b966cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B966C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9670:
    // 0x2b9670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9674:
    // 0x2b9674: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9674u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B9674 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9678:
    // 0x2b9678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b967c:
    // 0x2b967c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b967cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B967C raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9680:
    // 0x2b9680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9684:
    // 0x2b9684: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9684u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b9688:
    // 0x2b9688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b968c:
    // 0x2b968c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b968cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B968C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9690:
    // 0x2b9690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9694:
    // 0x2b9694: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9694u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b9698:
    // 0x2b9698: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9698u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b969c:
    // 0x2b969c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b969cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96a0:
    // 0x2b96a0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b96a0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b96a4:
    // 0x2b96a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b96a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96a8:
    // 0x2b96a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b96ac:
    // 0x2b96ac: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96acu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b96b0:
    // 0x2b96b0: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B96B0 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b96b4:
    // 0x2b96b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b96b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96b8:
    // 0x2b96b8: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B96B8 raw=0x02275801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b96bc:
    // 0x2b96bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b96bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96c0:
    // 0x2b96c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b96c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b96c4:
    // 0x2b96c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b96c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96c8:
    // 0x2b96c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b96c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b96cc:
    // 0x2b96cc: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B96CC raw=0x01FCF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b96d0:
    // 0x2b96d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b96d4:
    // 0x2b96d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b96d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b96d8:
    // 0x2b96d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b96dc:
    // 0x2b96dc: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b96e0:
    // 0x2b96e0: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2b96e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2b96e4:
    // 0x2b96e4: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B96E4 raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b96e8:
    // 0x2b96e8: 0x3e7e002  .word       0x03E7E002                   # srl         $gp, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b96ec:
    // 0x2b96ec: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b96ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b96f0:
    // 0x2b96f0: 0x52010009  beql        $s0, $at, . + 4 + (0x9 << 2)
label_2b96f4:
    if (ctx->pc == 0x2B96F4u) {
        ctx->pc = 0x2B96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F0u;
        // 0x2b96f4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96F8u;
        goto label_2b96f8;
    }
    ctx->pc = 0x2B96F0u;
    {
        const bool branch_taken_0x2b96f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b96f0) {
            ctx->pc = 0x2B96F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B96F0u;
            // 0x2b96f4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9718u;
            goto label_2b9718;
        }
    }
    ctx->pc = 0x2B96F8u;
label_2b96f8:
    // 0x2b96f8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b96fc:
    if (ctx->pc == 0x2B96FCu) {
        ctx->pc = 0x2B96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F8u;
        // 0x2b96fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9700u;
        goto label_2b9700;
    }
    ctx->pc = 0x2B96F8u;
    {
        const bool branch_taken_0x2b96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F8u;
        // 0x2b96fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96f8) {
            ctx->pc = 0x2C7708u;
            return;
        }
    }
    ctx->pc = 0x2B9700u;
label_2b9700:
    // 0x2b9700: 0x520c07e4  beql        $s0, $t4, . + 4 + (0x7E4 << 2)
label_2b9704:
    if (ctx->pc == 0x2B9704u) {
        ctx->pc = 0x2B9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9700u;
        // 0x2b9704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9708u;
        goto label_2b9708;
    }
    ctx->pc = 0x2B9700u;
    {
        const bool branch_taken_0x2b9700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b9700) {
            ctx->pc = 0x2B9704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9700u;
            // 0x2b9704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB694u;
            { ctx->pc = 0x2bb694; return; }
        }
    }
    ctx->pc = 0x2B9708u;
label_2b9708:
    // 0x2b9708: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b970c:
    // 0x2b970c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b970cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9710:
    // 0x2b9710: 0x5a0027d1  blezl       $s0, . + 4 + (0x27D1 << 2)
label_2b9714:
    if (ctx->pc == 0x2B9714u) {
        ctx->pc = 0x2B9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9710u;
        // 0x2b9714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9718u;
        goto label_2b9718;
    }
    ctx->pc = 0x2B9710u;
    {
        const bool branch_taken_0x2b9710 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b9710) {
            ctx->pc = 0x2B9714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9710u;
            // 0x2b9714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3658u;
            return;
        }
    }
    ctx->pc = 0x2B9718u;
label_2b9718:
    // 0x2b9718: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b971c:
    if (ctx->pc == 0x2B971Cu) {
        ctx->pc = 0x2B971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9718u;
        // 0x2b971c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9720u;
        goto label_2b9720;
    }
    ctx->pc = 0x2B9718u;
    {
        const bool branch_taken_0x2b9718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9718u;
        // 0x2b971c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9718) {
            ctx->pc = 0x2C1720u;
            return;
        }
    }
    ctx->pc = 0x2B9720u;
label_2b9720:
    // 0x2b9720: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b9724:
    if (ctx->pc == 0x2B9724u) {
        ctx->pc = 0x2B9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9720u;
        // 0x2b9724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9728u;
        goto label_2b9728;
    }
    ctx->pc = 0x2B9720u;
    {
        const bool branch_taken_0x2b9720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9720u;
        // 0x2b9724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9720) {
            ctx->pc = 0x2BDA4Cu;
            { ctx->pc = 0x2bda4c; return; }
        }
    }
    ctx->pc = 0x2B9728u;
label_2b9728:
    // 0x2b9728: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b972c:
    // 0x2b972c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b972cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9730:
    // 0x2b9730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9734:
    // 0x2b9734: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9734u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9738:
    // 0x2b9738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b973c:
    // 0x2b973c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b973cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9740:
    // 0x2b9740: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b9744:
    if (ctx->pc == 0x2B9744u) {
        ctx->pc = 0x2B9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9740u;
        // 0x2b9744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9748u;
        goto label_2b9748;
    }
    ctx->pc = 0x2B9740u;
    {
        const bool branch_taken_0x2b9740 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9740u;
        // 0x2b9744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9740) {
            ctx->pc = 0x2BF740u;
            { ctx->pc = 0x2bf740; return; }
        }
    }
    ctx->pc = 0x2B9748u;
label_2b9748:
    // 0x2b9748: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b9748u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b974c:
    // 0x2b974c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b974cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9750:
    // 0x2b9750: 0x400007f5  .word       0x400007F5                   # mfc0        $zero, Index # 000007F5 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9750u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9754:
    // 0x2b9754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9758:
    // 0x2b9758: 0xa213fff  j           func_884FFFC
label_2b975c:
    if (ctx->pc == 0x2B975Cu) {
        ctx->pc = 0x2B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9758u;
        // 0x2b975c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9760u;
        goto label_2b9760;
    }
    ctx->pc = 0x2B9758u;
    ctx->pc = 0x2B975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9758u;
    // 0x2b975c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B9758u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9760u;
label_2b9760:
    // 0x2b9760: 0x0  nop
    ctx->pc = 0x2b9760u;
    // NOP
label_2b9764:
    // 0x2b9764: 0x4a610000  vaddx.zw    $vf0, $vf0, $vf1x
    ctx->pc = 0x2b9764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b9768:
    // 0x2b9768: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b976c:
    // 0x2b976c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b976cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b9770:
    // 0x2b9770: 0x848080a  j           func_1202028
label_2b9774:
    if (ctx->pc == 0x2B9774u) {
        ctx->pc = 0x2B9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9770u;
        // 0x2b9774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9778u;
        goto label_2b9778;
    }
    ctx->pc = 0x2B9770u;
    ctx->pc = 0x2B9774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9770u;
    // 0x2b9774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2B9770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9778u;
label_2b9778:
    // 0x2b9778: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b977c:
    if (ctx->pc == 0x2B977Cu) {
        ctx->pc = 0x2B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9778u;
        // 0x2b977c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9780u;
        goto label_2b9780;
    }
    ctx->pc = 0x2B9778u;
    {
        const bool branch_taken_0x2b9778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9778u;
        // 0x2b977c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9778) {
            ctx->pc = 0x2BBAA4u;
            { ctx->pc = 0x2bbaa4; return; }
        }
    }
    ctx->pc = 0x2B9780u;
label_2b9780:
    // 0x2b9780: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b9780u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9784:
    // 0x2b9784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9788:
    // 0x2b9788: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b9788u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b978c:
    // 0x2b978c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b978cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2b9790:
    // 0x2b9790: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b9790u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9794:
    // 0x2b9794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9798:
    // 0x2b9798: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b9798u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b979c:
    // 0x2b979c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b979cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97a0:
    // 0x2b97a0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97a4:
    // 0x2b97a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97a8:
    // 0x2b97a8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2b97ac:
    // 0x2b97ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97b0:
    // 0x2b97b0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b97b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b97b4:
    // 0x2b97b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97b8:
    // 0x2b97b8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b97b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b97bc:
    // 0x2b97bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97c0:
    // 0x2b97c0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b97c4:
    // 0x2b97c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97c8:
    // 0x2b97c8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b97c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b97cc:
    // 0x2b97cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97d0:
    // 0x2b97d0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b97d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b97d4:
    // 0x2b97d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97d8:
    // 0x2b97d8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b97d8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97dc:
    // 0x2b97dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97e0:
    // 0x2b97e0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b97e0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97e4:
    // 0x2b97e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97e8:
    // 0x2b97e8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b97e8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97ec:
    // 0x2b97ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97f0:
    // 0x2b97f0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b97f0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97f4:
    // 0x2b97f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b97f8:
    // 0x2b97f8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b97fc:
    // 0x2b97fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b97fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9800:
    // 0x2b9800: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2b9800u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b9804:
    // 0x2b9804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9808:
    // 0x2b9808: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2b9808u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b980c:
    // 0x2b980c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b980cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9810:
    // 0x2b9810: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2b9810u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b9814:
    // 0x2b9814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9818:
    // 0x2b9818: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2b9818u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b981c:
    // 0x2b981c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b981cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9820:
    // 0x2b9820: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2b9820u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b9824:
    // 0x2b9824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9828:
    // 0x2b9828: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b982c:
    if (ctx->pc == 0x2B982Cu) {
        ctx->pc = 0x2B982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9828u;
        // 0x2b982c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9830u;
        goto label_2b9830;
    }
    ctx->pc = 0x2B9828u;
    {
        const bool branch_taken_0x2b9828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9828u;
        // 0x2b982c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9828) {
            ctx->pc = 0x2BB830u;
            { ctx->pc = 0x2bb830; return; }
        }
    }
    ctx->pc = 0x2B9830u;
label_2b9830:
    // 0x2b9830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9834:
    // 0x2b9834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9838:
    // 0x2b9838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b983c:
    // 0x2b983c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b983cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9840:
    // 0x2b9840: 0x90c3000  j           func_430C000
label_2b9844:
    if (ctx->pc == 0x2B9844u) {
        ctx->pc = 0x2B9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9840u;
        // 0x2b9844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9848u;
        goto label_2b9848;
    }
    ctx->pc = 0x2B9840u;
    ctx->pc = 0x2B9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9840u;
    // 0x2b9844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B9840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9848u;
label_2b9848:
    // 0x2b9848: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b984c:
    if (ctx->pc == 0x2B984Cu) {
        ctx->pc = 0x2B984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9848u;
        // 0x2b984c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9850u;
        goto label_2b9850;
    }
    ctx->pc = 0x2B9848u;
    {
        const bool branch_taken_0x2b9848 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9848u;
        // 0x2b984c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9848) {
            ctx->pc = 0x2BB848u;
            { ctx->pc = 0x2bb848; return; }
        }
    }
    ctx->pc = 0x2B9850u;
label_2b9850:
    // 0x2b9850: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b9854:
    if (ctx->pc == 0x2B9854u) {
        ctx->pc = 0x2B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9850u;
        // 0x2b9854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9858u;
        goto label_2b9858;
    }
    ctx->pc = 0x2B9850u;
    {
        const bool branch_taken_0x2b9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9850u;
        // 0x2b9854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9850) {
            ctx->pc = 0x2C5858u;
            return;
        }
    }
    ctx->pc = 0x2B9858u;
label_2b9858:
    // 0x2b9858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b985c:
    // 0x2b985c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b985cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9860:
    // 0x2b9860: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b9860u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b9864:
    // 0x2b9864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9868:
    // 0x2b9868: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2b9868u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2b986c:
    // 0x2b986c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b986cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9870:
    // 0x2b9870: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9870u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9874:
    // 0x2b9874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9878:
    // 0x2b9878: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2b9878u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2b987c:
    // 0x2b987c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b987cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9880:
    // 0x2b9880: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b9884:
    // 0x2b9884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9888:
    // 0x2b9888: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b9888u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b988c:
    // 0x2b988c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b988cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9890:
    // 0x2b9890: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b9890u;
    // NOP (addi to $zero)
label_2b9894:
    // 0x2b9894: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9898:
    // 0x2b9898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b989c:
    // 0x2b989c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b989cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B989C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b98a0:
    // 0x2b98a0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b98a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b98a4:
    // 0x2b98a4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b98a8:
    // 0x2b98a8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b98ac:
    // 0x2b98ac: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98acu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b98b0:
    // 0x2b98b0: 0xa48080a  j           func_9202028
label_2b98b4:
    if (ctx->pc == 0x2B98B4u) {
        ctx->pc = 0x2B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B0u;
        // 0x2b98b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98B8u;
        goto label_2b98b8;
    }
    ctx->pc = 0x2B98B0u;
    ctx->pc = 0x2B98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98B0u;
    // 0x2b98b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2B98B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B98B8u;
label_2b98b8:
    // 0x2b98b8: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2b98b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b98bc:
    // 0x2b98bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98c0:
    // 0x2b98c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b98c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b98c4:
    // 0x2b98c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98c8:
    // 0x2b98c8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b98cc:
    // 0x2b98cc: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b98d0:
    // 0x2b98d0: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2b98d4:
    // 0x2b98d4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B98D4 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b98d8:
    // 0x2b98d8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b98dc:
    // 0x2b98dc: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b98e0:
    // 0x2b98e0: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2b98e0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b98e4:
    // 0x2b98e4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98e4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b98e8:
    // 0x2b98e8: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2b98ec:
    // 0x2b98ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98f0:
    // 0x2b98f0: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2b98f0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b98f4:
    // 0x2b98f4: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98f4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b98f8:
    // 0x2b98f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b98fc:
    // 0x2b98fc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b9900:
    // 0x2b9900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9904:
    // 0x2b9904: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9904u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b9908:
    // 0x2b9908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b990c:
    // 0x2b990c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b990cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B990C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9910:
    // 0x2b9910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9914:
    // 0x2b9914: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B9914 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9918:
    // 0x2b9918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b991c:
    // 0x2b991c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b991cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B991C raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9920:
    // 0x2b9920: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9924:
    // 0x2b9924: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9924u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B9924 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9928:
    // 0x2b9928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b992c:
    // 0x2b992c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b992cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B992C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9930:
    // 0x2b9930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9934:
    // 0x2b9934: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9934u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b9938:
    // 0x2b9938: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9938u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b993c:
    // 0x2b993c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b993cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b9940:
    // 0x2b9940: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b9944:
    // 0x2b9944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9948:
    // 0x2b9948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b994c:
    // 0x2b994c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b994cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b9950:
    // 0x2b9950: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9950 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9954:
    // 0x2b9954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9958:
    // 0x2b9958: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9958u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9958 raw=0x02275801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b995c:
    // 0x2b995c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b995cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9960:
    // 0x2b9960: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9960 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9964:
    // 0x2b9964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9968:
    // 0x2b9968: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b9968u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b996c:
    // 0x2b996c: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b996cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B996C raw=0x01FCF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9970:
    // 0x2b9970: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b9974:
    if (ctx->pc == 0x2B9974u) {
        ctx->pc = 0x2B9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9970u;
        // 0x2b9974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9978u;
        goto label_2b9978;
    }
    ctx->pc = 0x2B9970u;
    {
        const bool branch_taken_0x2b9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9970u;
        // 0x2b9974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9970) {
            ctx->pc = 0x2C9980u;
            return;
        }
    }
    ctx->pc = 0x2B9978u;
label_2b9978:
    // 0x2b9978: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b997c:
    // 0x2b997c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b997cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9980:
    // 0x2b9980: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b9984:
    if (ctx->pc == 0x2B9984u) {
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9988u;
        goto label_2b9988;
    }
    ctx->pc = 0x2B9980u;
    {
        const bool branch_taken_0x2b9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9980) {
            ctx->pc = 0x2C7990u;
            return;
        }
    }
    ctx->pc = 0x2B9988u;
label_2b9988:
    // 0x2b9988: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2b9988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2b998c:
    // 0x2b998c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9990:
    // 0x2b9990: 0x3e7e7ff  .word       0x03E7E7FF                   # dsra32      $gp, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9990u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 7) >> (32 + 31));
label_2b9994:
    // 0x2b9994: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9994 raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9998:
    // 0x2b9998: 0x3e8e7ff  .word       0x03E8E7FF                   # dsra32      $gp, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9998u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 8) >> (32 + 31));
label_2b999c:
    // 0x2b999c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b99a0:
    // 0x2b99a0: 0x52010014  beql        $s0, $at, . + 4 + (0x14 << 2)
label_2b99a4:
    if (ctx->pc == 0x2B99A4u) {
        ctx->pc = 0x2B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99A0u;
        // 0x2b99a4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99A8u;
        goto label_2b99a8;
    }
    ctx->pc = 0x2B99A0u;
    {
        const bool branch_taken_0x2b99a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b99a0) {
            ctx->pc = 0x2B99A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99A0u;
            // 0x2b99a4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B99F4u;
            goto label_2b99f4;
        }
    }
    ctx->pc = 0x2B99A8u;
label_2b99a8:
    // 0x2b99a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99ac:
    // 0x2b99ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99b0:
    // 0x2b99b0: 0x520c07e2  beql        $s0, $t4, . + 4 + (0x7E2 << 2)
label_2b99b4:
    if (ctx->pc == 0x2B99B4u) {
        ctx->pc = 0x2B99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B0u;
        // 0x2b99b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99B8u;
        goto label_2b99b8;
    }
    ctx->pc = 0x2B99B0u;
    {
        const bool branch_taken_0x2b99b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b99b0) {
            ctx->pc = 0x2B99B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99B0u;
            // 0x2b99b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB93Cu;
            { ctx->pc = 0x2bb93c; return; }
        }
    }
    ctx->pc = 0x2B99B8u;
label_2b99b8:
    // 0x2b99b8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b99bc:
    // 0x2b99bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99c0:
    // 0x2b99c0: 0x904100a  j           func_4104028
label_2b99c4:
    if (ctx->pc == 0x2B99C4u) {
        ctx->pc = 0x2B99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C0u;
        // 0x2b99c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99C8u;
        goto label_2b99c8;
    }
    ctx->pc = 0x2B99C0u;
    ctx->pc = 0x2B99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C0u;
    // 0x2b99c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2B99C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99C8u;
label_2b99c8:
    // 0x2b99c8: 0x841100a  j           func_1044028
label_2b99cc:
    if (ctx->pc == 0x2B99CCu) {
        ctx->pc = 0x2B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C8u;
        // 0x2b99cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99D0u;
        goto label_2b99d0;
    }
    ctx->pc = 0x2B99C8u;
    ctx->pc = 0x2B99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C8u;
    // 0x2b99cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2B99C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99D0u;
label_2b99d0:
    // 0x2b99d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99d4:
    // 0x2b99d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99d8:
    // 0x2b99d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99dc:
    // 0x2b99dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99e0:
    // 0x2b99e0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b99e4:
    if (ctx->pc == 0x2B99E4u) {
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99E8u;
        goto label_2b99e8;
    }
    ctx->pc = 0x2B99E0u;
    {
        const bool branch_taken_0x2b99e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e0) {
            ctx->pc = 0x2C19E8u;
            return;
        }
    }
    ctx->pc = 0x2B99E8u;
label_2b99e8:
    // 0x2b99e8: 0x9030800  j           func_40C2000
label_2b99ec:
    if (ctx->pc == 0x2B99ECu) {
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E8u;
        // 0x2b99ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99F0u;
        goto label_2b99f0;
    }
    ctx->pc = 0x2B99E8u;
    ctx->pc = 0x2B99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99E8u;
    // 0x2b99ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2B99E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x5a0027c9  blezl       $s0, . + 4 + (0x27C9 << 2)
label_2b99f4:
    if (ctx->pc == 0x2B99F4u) {
        ctx->pc = 0x2B99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F0u;
        // 0x2b99f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99F8u;
        goto label_2b99f8;
    }
    ctx->pc = 0x2B99F0u;
    {
        const bool branch_taken_0x2b99f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b99f0) {
            ctx->pc = 0x2B99F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99F0u;
            // 0x2b99f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3918u;
            return;
        }
    }
    ctx->pc = 0x2B99F8u;
label_2b99f8:
    // 0x2b99f8: 0xb04100a  j           func_C104028
label_2b99fc:
    if (ctx->pc == 0x2B99FCu) {
        ctx->pc = 0x2B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F8u;
        // 0x2b99fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A00u;
        goto label_2b9a00;
    }
    ctx->pc = 0x2B99F8u;
    ctx->pc = 0x2B99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99F8u;
    // 0x2b99fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2B99F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A00u;
label_2b9a00:
    // 0x2b9a00: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2b9a04:
    if (ctx->pc == 0x2B9A04u) {
        ctx->pc = 0x2B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A00u;
        // 0x2b9a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A08u;
        goto label_2b9a08;
    }
    ctx->pc = 0x2B9A00u;
    {
        const bool branch_taken_0x2b9a00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A00u;
        // 0x2b9a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a00) {
            ctx->pc = 0x2C1A00u;
            return;
        }
    }
    ctx->pc = 0x2B9A08u;
label_2b9a08:
    // 0x2b9a08: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2b9a08u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2b9a0c:
    // 0x2b9a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b9a10u;
    return;
}

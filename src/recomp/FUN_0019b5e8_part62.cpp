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


void FUN_0019b5e8_part62(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        case 0x1b9280u: goto label_1b9280;
        case 0x1b9284u: goto label_1b9284;
        case 0x1b9288u: goto label_1b9288;
        case 0x1b928cu: goto label_1b928c;
        case 0x1b9290u: goto label_1b9290;
        case 0x1b9294u: goto label_1b9294;
        case 0x1b9298u: goto label_1b9298;
        case 0x1b929cu: goto label_1b929c;
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92a4u: goto label_1b92a4;
        case 0x1b92a8u: goto label_1b92a8;
        case 0x1b92acu: goto label_1b92ac;
        case 0x1b92b0u: goto label_1b92b0;
        case 0x1b92b4u: goto label_1b92b4;
        case 0x1b92b8u: goto label_1b92b8;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b92c0u: goto label_1b92c0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92ccu: goto label_1b92cc;
        case 0x1b92d0u: goto label_1b92d0;
        case 0x1b92d4u: goto label_1b92d4;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e0u: goto label_1b92e0;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92ecu: goto label_1b92ec;
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        case 0x1b9370u: goto label_1b9370;
        case 0x1b9374u: goto label_1b9374;
        case 0x1b9378u: goto label_1b9378;
        case 0x1b937cu: goto label_1b937c;
        case 0x1b9380u: goto label_1b9380;
        case 0x1b9384u: goto label_1b9384;
        case 0x1b9388u: goto label_1b9388;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b9390u: goto label_1b9390;
        case 0x1b9394u: goto label_1b9394;
        case 0x1b9398u: goto label_1b9398;
        case 0x1b939cu: goto label_1b939c;
        case 0x1b93a0u: goto label_1b93a0;
        case 0x1b93a4u: goto label_1b93a4;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93acu: goto label_1b93ac;
        case 0x1b93b0u: goto label_1b93b0;
        case 0x1b93b4u: goto label_1b93b4;
        case 0x1b93b8u: goto label_1b93b8;
        case 0x1b93bcu: goto label_1b93bc;
        case 0x1b93c0u: goto label_1b93c0;
        case 0x1b93c4u: goto label_1b93c4;
        case 0x1b93c8u: goto label_1b93c8;
        case 0x1b93ccu: goto label_1b93cc;
        case 0x1b93d0u: goto label_1b93d0;
        case 0x1b93d4u: goto label_1b93d4;
        case 0x1b93d8u: goto label_1b93d8;
        case 0x1b93dcu: goto label_1b93dc;
        case 0x1b93e0u: goto label_1b93e0;
        case 0x1b93e4u: goto label_1b93e4;
        case 0x1b93e8u: goto label_1b93e8;
        case 0x1b93ecu: goto label_1b93ec;
        case 0x1b93f0u: goto label_1b93f0;
        case 0x1b93f4u: goto label_1b93f4;
        case 0x1b93f8u: goto label_1b93f8;
        case 0x1b93fcu: goto label_1b93fc;
        case 0x1b9400u: goto label_1b9400;
        case 0x1b9404u: goto label_1b9404;
        case 0x1b9408u: goto label_1b9408;
        case 0x1b940cu: goto label_1b940c;
        case 0x1b9410u: goto label_1b9410;
        case 0x1b9414u: goto label_1b9414;
        case 0x1b9418u: goto label_1b9418;
        case 0x1b941cu: goto label_1b941c;
        case 0x1b9420u: goto label_1b9420;
        case 0x1b9424u: goto label_1b9424;
        case 0x1b9428u: goto label_1b9428;
        case 0x1b942cu: goto label_1b942c;
        case 0x1b9430u: goto label_1b9430;
        case 0x1b9434u: goto label_1b9434;
        case 0x1b9438u: goto label_1b9438;
        case 0x1b943cu: goto label_1b943c;
        case 0x1b9440u: goto label_1b9440;
        case 0x1b9444u: goto label_1b9444;
        case 0x1b9448u: goto label_1b9448;
        case 0x1b944cu: goto label_1b944c;
        case 0x1b9450u: goto label_1b9450;
        case 0x1b9454u: goto label_1b9454;
        case 0x1b9458u: goto label_1b9458;
        case 0x1b945cu: goto label_1b945c;
        case 0x1b9460u: goto label_1b9460;
        case 0x1b9464u: goto label_1b9464;
        case 0x1b9468u: goto label_1b9468;
        case 0x1b946cu: goto label_1b946c;
        case 0x1b9470u: goto label_1b9470;
        case 0x1b9474u: goto label_1b9474;
        case 0x1b9478u: goto label_1b9478;
        case 0x1b947cu: goto label_1b947c;
        case 0x1b9480u: goto label_1b9480;
        case 0x1b9484u: goto label_1b9484;
        case 0x1b9488u: goto label_1b9488;
        case 0x1b948cu: goto label_1b948c;
        case 0x1b9490u: goto label_1b9490;
        case 0x1b9494u: goto label_1b9494;
        case 0x1b9498u: goto label_1b9498;
        case 0x1b949cu: goto label_1b949c;
        case 0x1b94a0u: goto label_1b94a0;
        case 0x1b94a4u: goto label_1b94a4;
        case 0x1b94a8u: goto label_1b94a8;
        case 0x1b94acu: goto label_1b94ac;
        case 0x1b94b0u: goto label_1b94b0;
        case 0x1b94b4u: goto label_1b94b4;
        case 0x1b94b8u: goto label_1b94b8;
        case 0x1b94bcu: goto label_1b94bc;
        case 0x1b94c0u: goto label_1b94c0;
        case 0x1b94c4u: goto label_1b94c4;
        case 0x1b94c8u: goto label_1b94c8;
        case 0x1b94ccu: goto label_1b94cc;
        case 0x1b94d0u: goto label_1b94d0;
        case 0x1b94d4u: goto label_1b94d4;
        case 0x1b94d8u: goto label_1b94d8;
        case 0x1b94dcu: goto label_1b94dc;
        case 0x1b94e0u: goto label_1b94e0;
        case 0x1b94e4u: goto label_1b94e4;
        case 0x1b94e8u: goto label_1b94e8;
        case 0x1b94ecu: goto label_1b94ec;
        case 0x1b94f0u: goto label_1b94f0;
        case 0x1b94f4u: goto label_1b94f4;
        case 0x1b94f8u: goto label_1b94f8;
        case 0x1b94fcu: goto label_1b94fc;
        case 0x1b9500u: goto label_1b9500;
        case 0x1b9504u: goto label_1b9504;
        case 0x1b9508u: goto label_1b9508;
        case 0x1b950cu: goto label_1b950c;
        case 0x1b9510u: goto label_1b9510;
        case 0x1b9514u: goto label_1b9514;
        case 0x1b9518u: goto label_1b9518;
        case 0x1b951cu: goto label_1b951c;
        case 0x1b9520u: goto label_1b9520;
        case 0x1b9524u: goto label_1b9524;
        case 0x1b9528u: goto label_1b9528;
        case 0x1b952cu: goto label_1b952c;
        case 0x1b9530u: goto label_1b9530;
        case 0x1b9534u: goto label_1b9534;
        case 0x1b9538u: goto label_1b9538;
        case 0x1b953cu: goto label_1b953c;
        case 0x1b9540u: goto label_1b9540;
        case 0x1b9544u: goto label_1b9544;
        case 0x1b9548u: goto label_1b9548;
        case 0x1b954cu: goto label_1b954c;
        case 0x1b9550u: goto label_1b9550;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b9558u: goto label_1b9558;
        case 0x1b955cu: goto label_1b955c;
        case 0x1b9560u: goto label_1b9560;
        case 0x1b9564u: goto label_1b9564;
        case 0x1b9568u: goto label_1b9568;
        case 0x1b956cu: goto label_1b956c;
        case 0x1b9570u: goto label_1b9570;
        case 0x1b9574u: goto label_1b9574;
        case 0x1b9578u: goto label_1b9578;
        case 0x1b957cu: goto label_1b957c;
        case 0x1b9580u: goto label_1b9580;
        case 0x1b9584u: goto label_1b9584;
        case 0x1b9588u: goto label_1b9588;
        case 0x1b958cu: goto label_1b958c;
        case 0x1b9590u: goto label_1b9590;
        case 0x1b9594u: goto label_1b9594;
        case 0x1b9598u: goto label_1b9598;
        case 0x1b959cu: goto label_1b959c;
        case 0x1b95a0u: goto label_1b95a0;
        case 0x1b95a4u: goto label_1b95a4;
        case 0x1b95a8u: goto label_1b95a8;
        case 0x1b95acu: goto label_1b95ac;
        case 0x1b95b0u: goto label_1b95b0;
        case 0x1b95b4u: goto label_1b95b4;
        case 0x1b95b8u: goto label_1b95b8;
        case 0x1b95bcu: goto label_1b95bc;
        case 0x1b95c0u: goto label_1b95c0;
        case 0x1b95c4u: goto label_1b95c4;
        case 0x1b95c8u: goto label_1b95c8;
        case 0x1b95ccu: goto label_1b95cc;
        case 0x1b95d0u: goto label_1b95d0;
        case 0x1b95d4u: goto label_1b95d4;
        case 0x1b95d8u: goto label_1b95d8;
        case 0x1b95dcu: goto label_1b95dc;
        case 0x1b95e0u: goto label_1b95e0;
        case 0x1b95e4u: goto label_1b95e4;
        case 0x1b95e8u: goto label_1b95e8;
        case 0x1b95ecu: goto label_1b95ec;
        case 0x1b95f0u: goto label_1b95f0;
        case 0x1b95f4u: goto label_1b95f4;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b95fcu: goto label_1b95fc;
        case 0x1b9600u: goto label_1b9600;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9608u: goto label_1b9608;
        case 0x1b960cu: goto label_1b960c;
        case 0x1b9610u: goto label_1b9610;
        case 0x1b9614u: goto label_1b9614;
        case 0x1b9618u: goto label_1b9618;
        case 0x1b961cu: goto label_1b961c;
        case 0x1b9620u: goto label_1b9620;
        case 0x1b9624u: goto label_1b9624;
        case 0x1b9628u: goto label_1b9628;
        case 0x1b962cu: goto label_1b962c;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9634u: goto label_1b9634;
        case 0x1b9638u: goto label_1b9638;
        case 0x1b963cu: goto label_1b963c;
        case 0x1b9640u: goto label_1b9640;
        case 0x1b9644u: goto label_1b9644;
        case 0x1b9648u: goto label_1b9648;
        case 0x1b964cu: goto label_1b964c;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b9654u: goto label_1b9654;
        case 0x1b9658u: goto label_1b9658;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9660u: goto label_1b9660;
        case 0x1b9664u: goto label_1b9664;
        case 0x1b9668u: goto label_1b9668;
        case 0x1b966cu: goto label_1b966c;
        case 0x1b9670u: goto label_1b9670;
        case 0x1b9674u: goto label_1b9674;
        case 0x1b9678u: goto label_1b9678;
        case 0x1b967cu: goto label_1b967c;
        case 0x1b9680u: goto label_1b9680;
        case 0x1b9684u: goto label_1b9684;
        case 0x1b9688u: goto label_1b9688;
        case 0x1b968cu: goto label_1b968c;
        case 0x1b9690u: goto label_1b9690;
        case 0x1b9694u: goto label_1b9694;
        case 0x1b9698u: goto label_1b9698;
        case 0x1b969cu: goto label_1b969c;
        case 0x1b96a0u: goto label_1b96a0;
        case 0x1b96a4u: goto label_1b96a4;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96acu: goto label_1b96ac;
        case 0x1b96b0u: goto label_1b96b0;
        case 0x1b96b4u: goto label_1b96b4;
        case 0x1b96b8u: goto label_1b96b8;
        case 0x1b96bcu: goto label_1b96bc;
        case 0x1b96c0u: goto label_1b96c0;
        case 0x1b96c4u: goto label_1b96c4;
        case 0x1b96c8u: goto label_1b96c8;
        case 0x1b96ccu: goto label_1b96cc;
        case 0x1b96d0u: goto label_1b96d0;
        case 0x1b96d4u: goto label_1b96d4;
        case 0x1b96d8u: goto label_1b96d8;
        case 0x1b96dcu: goto label_1b96dc;
        case 0x1b96e0u: goto label_1b96e0;
        case 0x1b96e4u: goto label_1b96e4;
        case 0x1b96e8u: goto label_1b96e8;
        case 0x1b96ecu: goto label_1b96ec;
        case 0x1b96f0u: goto label_1b96f0;
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b96f8u: goto label_1b96f8;
        case 0x1b96fcu: goto label_1b96fc;
        case 0x1b9700u: goto label_1b9700;
        case 0x1b9704u: goto label_1b9704;
        case 0x1b9708u: goto label_1b9708;
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9710u: goto label_1b9710;
        case 0x1b9714u: goto label_1b9714;
        case 0x1b9718u: goto label_1b9718;
        case 0x1b971cu: goto label_1b971c;
        case 0x1b9720u: goto label_1b9720;
        case 0x1b9724u: goto label_1b9724;
        case 0x1b9728u: goto label_1b9728;
        case 0x1b972cu: goto label_1b972c;
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9734u: goto label_1b9734;
        case 0x1b9738u: goto label_1b9738;
        case 0x1b973cu: goto label_1b973c;
        case 0x1b9740u: goto label_1b9740;
        case 0x1b9744u: goto label_1b9744;
        case 0x1b9748u: goto label_1b9748;
        case 0x1b974cu: goto label_1b974c;
        case 0x1b9750u: goto label_1b9750;
        case 0x1b9754u: goto label_1b9754;
        case 0x1b9758u: goto label_1b9758;
        case 0x1b975cu: goto label_1b975c;
        case 0x1b9760u: goto label_1b9760;
        case 0x1b9764u: goto label_1b9764;
        case 0x1b9768u: goto label_1b9768;
        case 0x1b976cu: goto label_1b976c;
        case 0x1b9770u: goto label_1b9770;
        case 0x1b9774u: goto label_1b9774;
        case 0x1b9778u: goto label_1b9778;
        case 0x1b977cu: goto label_1b977c;
        case 0x1b9780u: goto label_1b9780;
        case 0x1b9784u: goto label_1b9784;
        case 0x1b9788u: goto label_1b9788;
        case 0x1b978cu: goto label_1b978c;
        case 0x1b9790u: goto label_1b9790;
        case 0x1b9794u: goto label_1b9794;
        case 0x1b9798u: goto label_1b9798;
        case 0x1b979cu: goto label_1b979c;
        case 0x1b97a0u: goto label_1b97a0;
        case 0x1b97a4u: goto label_1b97a4;
        case 0x1b97a8u: goto label_1b97a8;
        case 0x1b97acu: goto label_1b97ac;
        case 0x1b97b0u: goto label_1b97b0;
        case 0x1b97b4u: goto label_1b97b4;
        case 0x1b97b8u: goto label_1b97b8;
        case 0x1b97bcu: goto label_1b97bc;
        case 0x1b97c0u: goto label_1b97c0;
        case 0x1b97c4u: goto label_1b97c4;
        case 0x1b97c8u: goto label_1b97c8;
        case 0x1b97ccu: goto label_1b97cc;
        case 0x1b97d0u: goto label_1b97d0;
        case 0x1b97d4u: goto label_1b97d4;
        case 0x1b97d8u: goto label_1b97d8;
        case 0x1b97dcu: goto label_1b97dc;
        case 0x1b97e0u: goto label_1b97e0;
        case 0x1b97e4u: goto label_1b97e4;
        case 0x1b97e8u: goto label_1b97e8;
        case 0x1b97ecu: goto label_1b97ec;
        case 0x1b97f0u: goto label_1b97f0;
        case 0x1b97f4u: goto label_1b97f4;
        case 0x1b97f8u: goto label_1b97f8;
        case 0x1b97fcu: goto label_1b97fc;
        case 0x1b9800u: goto label_1b9800;
        case 0x1b9804u: goto label_1b9804;
        case 0x1b9808u: goto label_1b9808;
        case 0x1b980cu: goto label_1b980c;
        case 0x1b9810u: goto label_1b9810;
        case 0x1b9814u: goto label_1b9814;
        case 0x1b9818u: goto label_1b9818;
        case 0x1b981cu: goto label_1b981c;
        case 0x1b9820u: goto label_1b9820;
        case 0x1b9824u: goto label_1b9824;
        case 0x1b9828u: goto label_1b9828;
        case 0x1b982cu: goto label_1b982c;
        case 0x1b9830u: goto label_1b9830;
        case 0x1b9834u: goto label_1b9834;
        case 0x1b9838u: goto label_1b9838;
        case 0x1b983cu: goto label_1b983c;
        case 0x1b9840u: goto label_1b9840;
        case 0x1b9844u: goto label_1b9844;
        case 0x1b9848u: goto label_1b9848;
        case 0x1b984cu: goto label_1b984c;
        case 0x1b9850u: goto label_1b9850;
        case 0x1b9854u: goto label_1b9854;
        case 0x1b9858u: goto label_1b9858;
        case 0x1b985cu: goto label_1b985c;
        case 0x1b9860u: goto label_1b9860;
        case 0x1b9864u: goto label_1b9864;
        case 0x1b9868u: goto label_1b9868;
        case 0x1b986cu: goto label_1b986c;
        case 0x1b9870u: goto label_1b9870;
        case 0x1b9874u: goto label_1b9874;
        case 0x1b9878u: goto label_1b9878;
        case 0x1b987cu: goto label_1b987c;
        case 0x1b9880u: goto label_1b9880;
        case 0x1b9884u: goto label_1b9884;
        case 0x1b9888u: goto label_1b9888;
        case 0x1b988cu: goto label_1b988c;
        case 0x1b9890u: goto label_1b9890;
        case 0x1b9894u: goto label_1b9894;
        case 0x1b9898u: goto label_1b9898;
        case 0x1b989cu: goto label_1b989c;
        case 0x1b98a0u: goto label_1b98a0;
        case 0x1b98a4u: goto label_1b98a4;
        case 0x1b98a8u: goto label_1b98a8;
        case 0x1b98acu: goto label_1b98ac;
        case 0x1b98b0u: goto label_1b98b0;
        case 0x1b98b4u: goto label_1b98b4;
        case 0x1b98b8u: goto label_1b98b8;
        case 0x1b98bcu: goto label_1b98bc;
        case 0x1b98c0u: goto label_1b98c0;
        case 0x1b98c4u: goto label_1b98c4;
        case 0x1b98c8u: goto label_1b98c8;
        case 0x1b98ccu: goto label_1b98cc;
        case 0x1b98d0u: goto label_1b98d0;
        case 0x1b98d4u: goto label_1b98d4;
        case 0x1b98d8u: goto label_1b98d8;
        case 0x1b98dcu: goto label_1b98dc;
        case 0x1b98e0u: goto label_1b98e0;
        case 0x1b98e4u: goto label_1b98e4;
        case 0x1b98e8u: goto label_1b98e8;
        case 0x1b98ecu: goto label_1b98ec;
        case 0x1b98f0u: goto label_1b98f0;
        case 0x1b98f4u: goto label_1b98f4;
        case 0x1b98f8u: goto label_1b98f8;
        case 0x1b98fcu: goto label_1b98fc;
        case 0x1b9900u: goto label_1b9900;
        case 0x1b9904u: goto label_1b9904;
        case 0x1b9908u: goto label_1b9908;
        case 0x1b990cu: goto label_1b990c;
        case 0x1b9910u: goto label_1b9910;
        case 0x1b9914u: goto label_1b9914;
        case 0x1b9918u: goto label_1b9918;
        case 0x1b991cu: goto label_1b991c;
        case 0x1b9920u: goto label_1b9920;
        case 0x1b9924u: goto label_1b9924;
        case 0x1b9928u: goto label_1b9928;
        case 0x1b992cu: goto label_1b992c;
        case 0x1b9930u: goto label_1b9930;
        case 0x1b9934u: goto label_1b9934;
        case 0x1b9938u: goto label_1b9938;
        case 0x1b993cu: goto label_1b993c;
        case 0x1b9940u: goto label_1b9940;
        case 0x1b9944u: goto label_1b9944;
        case 0x1b9948u: goto label_1b9948;
        case 0x1b994cu: goto label_1b994c;
        case 0x1b9950u: goto label_1b9950;
        case 0x1b9954u: goto label_1b9954;
        case 0x1b9958u: goto label_1b9958;
        case 0x1b995cu: goto label_1b995c;
        case 0x1b9960u: goto label_1b9960;
        case 0x1b9964u: goto label_1b9964;
        case 0x1b9968u: goto label_1b9968;
        case 0x1b996cu: goto label_1b996c;
        case 0x1b9970u: goto label_1b9970;
        case 0x1b9974u: goto label_1b9974;
        case 0x1b9978u: goto label_1b9978;
        case 0x1b997cu: goto label_1b997c;
        case 0x1b9980u: goto label_1b9980;
        case 0x1b9984u: goto label_1b9984;
        case 0x1b9988u: goto label_1b9988;
        case 0x1b998cu: goto label_1b998c;
        case 0x1b9990u: goto label_1b9990;
        case 0x1b9994u: goto label_1b9994;
        case 0x1b9998u: goto label_1b9998;
        case 0x1b999cu: goto label_1b999c;
        case 0x1b99a0u: goto label_1b99a0;
        case 0x1b99a4u: goto label_1b99a4;
        case 0x1b99a8u: goto label_1b99a8;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b99b0u: goto label_1b99b0;
        case 0x1b99b4u: goto label_1b99b4;
        case 0x1b99b8u: goto label_1b99b8;
        case 0x1b99bcu: goto label_1b99bc;
        case 0x1b99c0u: goto label_1b99c0;
        case 0x1b99c4u: goto label_1b99c4;
        case 0x1b99c8u: goto label_1b99c8;
        case 0x1b99ccu: goto label_1b99cc;
        case 0x1b99d0u: goto label_1b99d0;
        case 0x1b99d4u: goto label_1b99d4;
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b99dcu: goto label_1b99dc;
        case 0x1b99e0u: goto label_1b99e0;
        case 0x1b99e4u: goto label_1b99e4;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b99ecu: goto label_1b99ec;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b99f4u: goto label_1b99f4;
        case 0x1b99f8u: goto label_1b99f8;
        case 0x1b99fcu: goto label_1b99fc;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9a04u: goto label_1b9a04;
        case 0x1b9a08u: goto label_1b9a08;
        case 0x1b9a0cu: goto label_1b9a0c;
        case 0x1b9a10u: goto label_1b9a10;
        case 0x1b9a14u: goto label_1b9a14;
        case 0x1b9a18u: goto label_1b9a18;
        case 0x1b9a1cu: goto label_1b9a1c;
        case 0x1b9a20u: goto label_1b9a20;
        case 0x1b9a24u: goto label_1b9a24;
        case 0x1b9a28u: goto label_1b9a28;
        case 0x1b9a2cu: goto label_1b9a2c;
        case 0x1b9a30u: goto label_1b9a30;
        case 0x1b9a34u: goto label_1b9a34;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a3cu: goto label_1b9a3c;
        case 0x1b9a40u: goto label_1b9a40;
        case 0x1b9a44u: goto label_1b9a44;
        default: return;
    }

label_1b9278:
    // 0x1b9278: 0x0  nop
    ctx->pc = 0x1b9278u;
    // NOP
label_1b927c:
    // 0x1b927c: 0x2b4082a  slt         $at, $s5, $s4
    ctx->pc = 0x1b927cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1b9280:
    // 0x1b9280: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_1b9284:
    if (ctx->pc == 0x1B9284u) {
        ctx->pc = 0x1B9288u;
        goto label_1b9288;
    }
    ctx->pc = 0x1B9280u;
    {
        const bool branch_taken_0x1b9280 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9280) {
            ctx->pc = 0x1B92D0u;
            goto label_1b92d0;
        }
    }
    ctx->pc = 0x1B9288u;
label_1b9288:
    // 0x1b9288: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b928c:
    // 0x1b928c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b9290:
    // 0x1b9290: 0x24423520  addiu       $v0, $v0, 0x3520
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
label_1b9294:
    // 0x1b9294: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b9298:
    // 0x1b9298: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1b929c:
    // 0x1b929c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1b929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b92a0:
    // 0x1b92a0: 0xc06e4d0  jal         func_1B9340
label_1b92a4:
    if (ctx->pc == 0x1B92A4u) {
        ctx->pc = 0x1B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92A0u;
        // 0x1b92a4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92A8u;
        goto label_1b92a8;
    }
    ctx->pc = 0x1B92A0u;
    SET_GPR_U32(ctx, 31, 0x1B92A8u);
    ctx->pc = 0x1B92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92A0u;
    // 0x1b92a4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9340u;
    goto label_1b9340;
    ctx->pc = 0x1B92A8u;
label_1b92a8:
    // 0x1b92a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1b92ac:
    // 0x1b92ac: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
label_1b92b0:
    // 0x1b92b0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1b92b4:
    // 0x1b92b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1b92b8:
    // 0x1b92b8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1b92bc:
    // 0x1b92bc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b92c0:
    // 0x1b92c0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1b92c4:
    // 0x1b92c4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1b92c8:
    // 0x1b92c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1b92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b92cc:
    // 0x1b92cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1b92ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b92d0:
    // 0x1b92d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1b92d4:
    // 0x1b92d4: 0x26310036  addiu       $s1, $s1, 0x36
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
label_1b92d8:
    // 0x1b92d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b92dc:
    // 0x1b92dc: 0x0  nop
    ctx->pc = 0x1b92dcu;
    // NOP
label_1b92e0:
    // 0x1b92e0: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b92e4:
    // 0x1b92e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b92e8:
    // 0x1b92e8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x1b92e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b92ec:
    // 0x1b92ec: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1b92f0:
    if (ctx->pc == 0x1B92F0u) {
        ctx->pc = 0x1B92F4u;
        goto label_1b92f4;
    }
    ctx->pc = 0x1B92ECu;
    {
        const bool branch_taken_0x1b92ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92ec) {
            ctx->pc = 0x1B9274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1b9274; return; }
        }
    }
    ctx->pc = 0x1B92F4u;
label_1b92f4:
    // 0x1b92f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1b92f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b92f8:
    // 0x1b92f8: 0x26730036  addiu       $s3, $s3, 0x36
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 54));
label_1b92fc:
    // 0x1b92fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b92fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b9300:
    // 0x1b9300: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b9304:
    // 0x1b9304: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b9308:
    // 0x1b9308: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x1b9308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b930c:
    // 0x1b930c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1b9310:
    if (ctx->pc == 0x1B9310u) {
        ctx->pc = 0x1B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B930Cu;
        // 0x1b9310: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9314u;
        goto label_1b9314;
    }
    ctx->pc = 0x1B930Cu;
    {
        const bool branch_taken_0x1b930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B930Cu;
        // 0x1b9310: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b930c) {
            ctx->pc = 0x1B9268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1b9268; return; }
        }
    }
    ctx->pc = 0x1B9314u;
label_1b9314:
    // 0x1b9314: 0x0  nop
    ctx->pc = 0x1b9314u;
    // NOP
label_1b9318:
    // 0x1b9318: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b9318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b931c:
    // 0x1b931c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b931cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9320:
    // 0x1b9320: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9324:
    // 0x1b9324: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9328:
    // 0x1b9328: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b9328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b932c:
    // 0x1b932c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b932cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9330:
    // 0x1b9330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9334:
    // 0x1b9334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9338:
    // 0x1b9338: 0x3e00008  jr          $ra
label_1b933c:
    if (ctx->pc == 0x1B933Cu) {
        ctx->pc = 0x1B933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9338u;
        // 0x1b933c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9340u;
        goto label_1b9340;
    }
    ctx->pc = 0x1B9338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9338u;
        // 0x1b933c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9340u;
label_1b9340:
    // 0x1b9340: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b9340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b9344:
    // 0x1b9344: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b9348:
    // 0x1b9348: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b9348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b934c:
    // 0x1b934c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b9350:
    // 0x1b9350: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b9350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b9354:
    // 0x1b9354: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b9358:
    // 0x1b9358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b935c:
    // 0x1b935c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9360:
    // 0x1b9360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b9364:
    // 0x1b9364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9368:
    // 0x1b9368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b936c:
    // 0x1b936c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9370:
    // 0x1b9370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9374:
    // 0x1b9374: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1b9374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_1b9378:
    // 0x1b9378: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1b9378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1b937c:
    // 0x1b937c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1b937cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9380:
    // 0x1b9380: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1b9380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1b9384:
    // 0x1b9384: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b9384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9388:
    // 0x1b9388: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b938c:
    // 0x1b938c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9390:
    // 0x1b9390: 0xc044974  jal         func_1125D0
label_1b9394:
    if (ctx->pc == 0x1B9394u) {
        ctx->pc = 0x1B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9390u;
        // 0x1b9394: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9398u;
        goto label_1b9398;
    }
    ctx->pc = 0x1B9390u;
    SET_GPR_U32(ctx, 31, 0x1B9398u);
    ctx->pc = 0x1B9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9390u;
    // 0x1b9394: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B9390u, 0x1B9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9398u;
label_1b9398:
    // 0x1b9398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b9398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b939c:
    // 0x1b939c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b93a0:
    // 0x1b93a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b93a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b93a4:
    // 0x1b93a4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b93a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b93a8:
    // 0x1b93a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b93ac:
    // 0x1b93ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b93acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b93b0:
    // 0x1b93b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b93b4:
    // 0x1b93b4: 0xc044974  jal         func_1125D0
label_1b93b8:
    if (ctx->pc == 0x1B93B8u) {
        ctx->pc = 0x1B93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93B4u;
        // 0x1b93b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93BCu;
        goto label_1b93bc;
    }
    ctx->pc = 0x1B93B4u;
    SET_GPR_U32(ctx, 31, 0x1B93BCu);
    ctx->pc = 0x1B93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93B4u;
    // 0x1b93b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B93B4u, 0x1B93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93BCu;
label_1b93bc:
    // 0x1b93bc: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x1b93bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1b93c0:
    // 0x1b93c0: 0x2041824  and         $v1, $s0, $a0
    ctx->pc = 0x1b93c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_1b93c4:
    // 0x1b93c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b93c8:
    if (ctx->pc == 0x1B93C8u) {
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x441824  and         $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93CCu;
        goto label_1b93cc;
    }
    ctx->pc = 0x1B93C4u;
    {
        const bool branch_taken_0x1b93c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x441824  and         $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93c4) {
            ctx->pc = 0x1B93DCu;
            goto label_1b93dc;
        }
    }
    ctx->pc = 0x1B93CCu;
label_1b93cc:
    // 0x1b93cc: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x1b93ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_1b93d0:
    // 0x1b93d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1b93d4:
    if (ctx->pc == 0x1B93D4u) {
        ctx->pc = 0x1B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D0u;
        // 0x1b93d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93D8u;
        goto label_1b93d8;
    }
    ctx->pc = 0x1B93D0u;
    {
        const bool branch_taken_0x1b93d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D0u;
        // 0x1b93d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93d0) {
            ctx->pc = 0x1B93F4u;
            goto label_1b93f4;
        }
    }
    ctx->pc = 0x1B93D8u;
label_1b93d8:
    // 0x1b93d8: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1b93d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1b93dc:
    // 0x1b93dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1b93e0:
    if (ctx->pc == 0x1B93E0u) {
        ctx->pc = 0x1B93E4u;
        goto label_1b93e4;
    }
    ctx->pc = 0x1B93DCu;
    {
        const bool branch_taken_0x1b93dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93dc) {
            ctx->pc = 0x1B93FCu;
            goto label_1b93fc;
        }
    }
    ctx->pc = 0x1B93E4u;
label_1b93e4:
    // 0x1b93e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1b93e8:
    // 0x1b93e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b93ec:
    if (ctx->pc == 0x1B93ECu) {
        ctx->pc = 0x1B93F0u;
        goto label_1b93f0;
    }
    ctx->pc = 0x1B93E8u;
    {
        const bool branch_taken_0x1b93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b93e8) {
            ctx->pc = 0x1B93FCu;
            goto label_1b93fc;
        }
    }
    ctx->pc = 0x1B93F0u;
label_1b93f0:
    // 0x1b93f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b93f4:
    // 0x1b93f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b93f8:
    if (ctx->pc == 0x1B93F8u) {
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93F4u;
        // 0x1b93f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93FCu;
        goto label_1b93fc;
    }
    ctx->pc = 0x1B93F4u;
    {
        const bool branch_taken_0x1b93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93F4u;
        // 0x1b93f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93f4) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B93FCu;
label_1b93fc:
    // 0x1b93fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9400:
    // 0x1b9400: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b9400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9404:
    // 0x1b9404: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b9408:
    // 0x1b9408: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b9408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b940c:
    // 0x1b940c: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
label_1b9410:
    if (ctx->pc == 0x1B9410u) {
        ctx->pc = 0x1B9414u;
        goto label_1b9414;
    }
    ctx->pc = 0x1B940Cu;
    {
        const bool branch_taken_0x1b940c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b940c) {
            ctx->pc = 0x1B9438u;
            goto label_1b9438;
        }
    }
    ctx->pc = 0x1B9414u;
label_1b9414:
    // 0x1b9414: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9418:
    // 0x1b9418: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b9418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b941c:
    // 0x1b941c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b9420:
    // 0x1b9420: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b9420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9424:
    // 0x1b9424: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b9428:
    if (ctx->pc == 0x1B9428u) {
        ctx->pc = 0x1B942Cu;
        goto label_1b942c;
    }
    ctx->pc = 0x1B9424u;
    {
        const bool branch_taken_0x1b9424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9424) {
            ctx->pc = 0x1B9438u;
            goto label_1b9438;
        }
    }
    ctx->pc = 0x1B942Cu;
label_1b942c:
    // 0x1b942c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9430:
    // 0x1b9430: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b9434:
    if (ctx->pc == 0x1B9434u) {
        ctx->pc = 0x1B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9430u;
        // 0x1b9434: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9438u;
        goto label_1b9438;
    }
    ctx->pc = 0x1B9430u;
    {
        const bool branch_taken_0x1b9430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9430u;
        // 0x1b9434: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9430) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9438u;
label_1b9438:
    // 0x1b9438: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1b943c:
    if (ctx->pc == 0x1B943Cu) {
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9438u;
        // 0x1b943c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9440u;
        goto label_1b9440;
    }
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9438u;
        // 0x1b943c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9440u;
label_1b9440:
    // 0x1b9440: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9444:
    // 0x1b9444: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b9444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9448:
    // 0x1b9448: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b944c:
    // 0x1b944c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b944cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9450:
    // 0x1b9450: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1b9454:
    if (ctx->pc == 0x1B9454u) {
        ctx->pc = 0x1B9458u;
        goto label_1b9458;
    }
    ctx->pc = 0x1B9450u;
    {
        const bool branch_taken_0x1b9450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9450) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9458u;
label_1b9458:
    // 0x1b9458: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b945c:
    // 0x1b945c: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1b9460:
    // 0x1b9460: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
label_1b9464:
    if (ctx->pc == 0x1B9464u) {
        ctx->pc = 0x1B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9460u;
        // 0x1b9464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9468u;
        goto label_1b9468;
    }
    ctx->pc = 0x1B9460u;
    {
        const bool branch_taken_0x1b9460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9460u;
        // 0x1b9464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9460) {
            ctx->pc = 0x1B9660u;
            goto label_1b9660;
        }
    }
    ctx->pc = 0x1B9468u;
label_1b9468:
    // 0x1b9468: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_1b946c:
    if (ctx->pc == 0x1B946Cu) {
        ctx->pc = 0x1B9470u;
        goto label_1b9470;
    }
    ctx->pc = 0x1B9468u;
    {
        const bool branch_taken_0x1b9468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9468) {
            ctx->pc = 0x1B949Cu;
            goto label_1b949c;
        }
    }
    ctx->pc = 0x1B9470u;
label_1b9470:
    // 0x1b9470: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9474:
    // 0x1b9474: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b9474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9478:
    // 0x1b9478: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b9478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b947c:
    // 0x1b947c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9480:
    // 0x1b9480: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b9480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9484:
    // 0x1b9484: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1b9484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1b9488:
    // 0x1b9488: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b948c:
    // 0x1b948c: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x1b948cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9490:
    // 0x1b9490: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x1b9490u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9494:
    // 0x1b9494: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b9498:
    if (ctx->pc == 0x1B9498u) {
        ctx->pc = 0x1B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9494u;
        // 0x1b9498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B949Cu;
        goto label_1b949c;
    }
    ctx->pc = 0x1B9494u;
    {
        const bool branch_taken_0x1b9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9494u;
        // 0x1b9498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9494) {
            ctx->pc = 0x1B94D8u;
            goto label_1b94d8;
        }
    }
    ctx->pc = 0x1B949Cu;
label_1b949c:
    // 0x1b949c: 0x0  nop
    ctx->pc = 0x1b949cu;
    // NOP
label_1b94a0:
    // 0x1b94a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b94a4:
    // 0x1b94a4: 0x1222006e  beq         $s1, $v0, . + 4 + (0x6E << 2)
label_1b94a8:
    if (ctx->pc == 0x1B94A8u) {
        ctx->pc = 0x1B94ACu;
        goto label_1b94ac;
    }
    ctx->pc = 0x1B94A4u;
    {
        const bool branch_taken_0x1b94a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b94a4) {
            ctx->pc = 0x1B9660u;
            goto label_1b9660;
        }
    }
    ctx->pc = 0x1B94ACu;
label_1b94ac:
    // 0x1b94ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b94acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b94b0:
    // 0x1b94b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b94b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b94b4:
    // 0x1b94b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b94b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b94b8:
    // 0x1b94b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b94bc:
    // 0x1b94bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b94c0:
    // 0x1b94c0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b94c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b94c4:
    // 0x1b94c4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1b94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1b94c8:
    // 0x1b94c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b94cc:
    // 0x1b94cc: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x1b94ccu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b94d0:
    // 0x1b94d0: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x1b94d0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b94d4:
    // 0x1b94d4: 0x0  nop
    ctx->pc = 0x1b94d4u;
    // NOP
label_1b94d8:
    // 0x1b94d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b94dc:
    // 0x1b94dc: 0x14570003  bne         $v0, $s7, . + 4 + (0x3 << 2)
label_1b94e0:
    if (ctx->pc == 0x1B94E0u) {
        ctx->pc = 0x1B94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94DCu;
        // 0x1b94e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B94E4u;
        goto label_1b94e4;
    }
    ctx->pc = 0x1B94DCu;
    {
        const bool branch_taken_0x1b94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1B94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94DCu;
        // 0x1b94e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94dc) {
            ctx->pc = 0x1B94ECu;
            goto label_1b94ec;
        }
    }
    ctx->pc = 0x1B94E4u;
label_1b94e4:
    // 0x1b94e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b94e8:
    if (ctx->pc == 0x1B94E8u) {
        ctx->pc = 0x1B94ECu;
        goto label_1b94ec;
    }
    ctx->pc = 0x1B94E4u;
    {
        const bool branch_taken_0x1b94e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e4) {
            ctx->pc = 0x1B950Cu;
            goto label_1b950c;
        }
    }
    ctx->pc = 0x1B94ECu;
label_1b94ec:
    // 0x1b94ec: 0x0  nop
    ctx->pc = 0x1b94ecu;
    // NOP
label_1b94f0:
    // 0x1b94f0: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x1b94f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1b94f4:
    // 0x1b94f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b94f8:
    if (ctx->pc == 0x1B94F8u) {
        ctx->pc = 0x1B94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F4u;
        // 0x1b94f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B94FCu;
        goto label_1b94fc;
    }
    ctx->pc = 0x1B94F4u;
    {
        const bool branch_taken_0x1b94f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F4u;
        // 0x1b94f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94f4) {
            ctx->pc = 0x1B9504u;
            goto label_1b9504;
        }
    }
    ctx->pc = 0x1B94FCu;
label_1b94fc:
    // 0x1b94fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b9500:
    if (ctx->pc == 0x1B9500u) {
        ctx->pc = 0x1B9504u;
        goto label_1b9504;
    }
    ctx->pc = 0x1B94FCu;
    {
        const bool branch_taken_0x1b94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94fc) {
            ctx->pc = 0x1B950Cu;
            goto label_1b950c;
        }
    }
    ctx->pc = 0x1B9504u;
label_1b9504:
    // 0x1b9504: 0x0  nop
    ctx->pc = 0x1b9504u;
    // NOP
label_1b9508:
    // 0x1b9508: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b950c:
    // 0x1b950c: 0x0  nop
    ctx->pc = 0x1b950cu;
    // NOP
label_1b9510:
    // 0x1b9510: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x1b9510u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1b9514:
    // 0x1b9514: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1b9518:
    // 0x1b9518: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
label_1b951c:
    if (ctx->pc == 0x1B951Cu) {
        ctx->pc = 0x1B951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9518u;
        // 0x1b951c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9520u;
        goto label_1b9520;
    }
    ctx->pc = 0x1B9518u;
    {
        const bool branch_taken_0x1b9518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9518u;
        // 0x1b951c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9518) {
            ctx->pc = 0x1B9528u;
            goto label_1b9528;
        }
    }
    ctx->pc = 0x1B9520u;
label_1b9520:
    // 0x1b9520: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b9524:
    if (ctx->pc == 0x1B9524u) {
        ctx->pc = 0x1B9528u;
        goto label_1b9528;
    }
    ctx->pc = 0x1B9520u;
    {
        const bool branch_taken_0x1b9520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9520) {
            ctx->pc = 0x1B9544u;
            goto label_1b9544;
        }
    }
    ctx->pc = 0x1B9528u;
label_1b9528:
    // 0x1b9528: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x1b9528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1b952c:
    // 0x1b952c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b9530:
    if (ctx->pc == 0x1B9530u) {
        ctx->pc = 0x1B9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B952Cu;
        // 0x1b9530: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9534u;
        goto label_1b9534;
    }
    ctx->pc = 0x1B952Cu;
    {
        const bool branch_taken_0x1b952c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B952Cu;
        // 0x1b9530: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b952c) {
            ctx->pc = 0x1B953Cu;
            goto label_1b953c;
        }
    }
    ctx->pc = 0x1B9534u;
label_1b9534:
    // 0x1b9534: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b9538:
    if (ctx->pc == 0x1B9538u) {
        ctx->pc = 0x1B953Cu;
        goto label_1b953c;
    }
    ctx->pc = 0x1B9534u;
    {
        const bool branch_taken_0x1b9534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9534) {
            ctx->pc = 0x1B9544u;
            goto label_1b9544;
        }
    }
    ctx->pc = 0x1B953Cu;
label_1b953c:
    // 0x1b953c: 0x0  nop
    ctx->pc = 0x1b953cu;
    // NOP
label_1b9540:
    // 0x1b9540: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1b9540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b9544:
    // 0x1b9544: 0x0  nop
    ctx->pc = 0x1b9544u;
    // NOP
label_1b9548:
    // 0x1b9548: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1b954c:
    if (ctx->pc == 0x1B954Cu) {
        ctx->pc = 0x1B9550u;
        goto label_1b9550;
    }
    ctx->pc = 0x1B9548u;
    {
        const bool branch_taken_0x1b9548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9548) {
            ctx->pc = 0x1B9558u;
            goto label_1b9558;
        }
    }
    ctx->pc = 0x1B9550u;
label_1b9550:
    // 0x1b9550: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
label_1b9554:
    if (ctx->pc == 0x1B9554u) {
        ctx->pc = 0x1B9558u;
        goto label_1b9558;
    }
    ctx->pc = 0x1B9550u;
    {
        const bool branch_taken_0x1b9550 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9550) {
            ctx->pc = 0x1B9650u;
            goto label_1b9650;
        }
    }
    ctx->pc = 0x1B9558u;
label_1b9558:
    // 0x1b9558: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b9558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b955c:
    // 0x1b955c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1b955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1b9560:
    // 0x1b9560: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1b9564:
    // 0x1b9564: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1b9568:
    // 0x1b9568: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b956c:
    // 0x1b956c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b956cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b9570:
    // 0x1b9570: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1b9570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1b9574:
    // 0x1b9574: 0xc06e5a8  jal         func_1B96A0
label_1b9578:
    if (ctx->pc == 0x1B9578u) {
        ctx->pc = 0x1B9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9574u;
        // 0x1b9578: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B957Cu;
        goto label_1b957c;
    }
    ctx->pc = 0x1B9574u;
    SET_GPR_U32(ctx, 31, 0x1B957Cu);
    ctx->pc = 0x1B9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9574u;
    // 0x1b9578: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    goto label_1b96a0;
    ctx->pc = 0x1B957Cu;
label_1b957c:
    // 0x1b957c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1b9580:
    if (ctx->pc == 0x1B9580u) {
        ctx->pc = 0x1B9584u;
        goto label_1b9584;
    }
    ctx->pc = 0x1B957Cu;
    {
        const bool branch_taken_0x1b957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b957c) {
            ctx->pc = 0x1B9618u;
            goto label_1b9618;
        }
    }
    ctx->pc = 0x1B9584u;
label_1b9584:
    // 0x1b9584: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
label_1b9588:
    if (ctx->pc == 0x1B9588u) {
        ctx->pc = 0x1B958Cu;
        goto label_1b958c;
    }
    ctx->pc = 0x1B9584u;
    {
        const bool branch_taken_0x1b9584 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9584) {
            ctx->pc = 0x1B9610u;
            goto label_1b9610;
        }
    }
    ctx->pc = 0x1B958Cu;
label_1b958c:
    // 0x1b958c: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_1b9590:
    if (ctx->pc == 0x1B9590u) {
        ctx->pc = 0x1B9594u;
        goto label_1b9594;
    }
    ctx->pc = 0x1B958Cu;
    {
        const bool branch_taken_0x1b958c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b958c) {
            ctx->pc = 0x1B9610u;
            goto label_1b9610;
        }
    }
    ctx->pc = 0x1B9594u;
label_1b9594:
    // 0x1b9594: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b9598:
    // 0x1b9598: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b9598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b959c:
    // 0x1b959c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1b959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1b95a0:
    // 0x1b95a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b95a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b95a4:
    // 0x1b95a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b95a8:
    // 0x1b95a8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1b95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1b95ac:
    // 0x1b95ac: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1b95b0:
    // 0x1b95b0: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x1b95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1b95b4:
    // 0x1b95b4: 0xc06e5a8  jal         func_1B96A0
label_1b95b8:
    if (ctx->pc == 0x1B95B8u) {
        ctx->pc = 0x1B95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95B4u;
        // 0x1b95b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95BCu;
        goto label_1b95bc;
    }
    ctx->pc = 0x1B95B4u;
    SET_GPR_U32(ctx, 31, 0x1B95BCu);
    ctx->pc = 0x1B95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95B4u;
    // 0x1b95b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    goto label_1b96a0;
    ctx->pc = 0x1B95BCu;
label_1b95bc:
    // 0x1b95bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1b95c0:
    if (ctx->pc == 0x1B95C0u) {
        ctx->pc = 0x1B95C4u;
        goto label_1b95c4;
    }
    ctx->pc = 0x1B95BCu;
    {
        const bool branch_taken_0x1b95bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95bc) {
            ctx->pc = 0x1B9608u;
            goto label_1b9608;
        }
    }
    ctx->pc = 0x1B95C4u;
label_1b95c4:
    // 0x1b95c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b95c8:
    // 0x1b95c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b95cc:
    // 0x1b95cc: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1b95d0:
    // 0x1b95d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b95d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b95d4:
    // 0x1b95d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1b95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1b95d8:
    // 0x1b95d8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1b95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1b95dc:
    // 0x1b95dc: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b95e0:
    // 0x1b95e0: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x1b95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1b95e4:
    // 0x1b95e4: 0xc06e5a8  jal         func_1B96A0
label_1b95e8:
    if (ctx->pc == 0x1B95E8u) {
        ctx->pc = 0x1B95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95E4u;
        // 0x1b95e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95ECu;
        goto label_1b95ec;
    }
    ctx->pc = 0x1B95E4u;
    SET_GPR_U32(ctx, 31, 0x1B95ECu);
    ctx->pc = 0x1B95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95E4u;
    // 0x1b95e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    goto label_1b96a0;
    ctx->pc = 0x1B95ECu;
label_1b95ec:
    // 0x1b95ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b95f0:
    if (ctx->pc == 0x1B95F0u) {
        ctx->pc = 0x1B95F4u;
        goto label_1b95f4;
    }
    ctx->pc = 0x1B95ECu;
    {
        const bool branch_taken_0x1b95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95ec) {
            ctx->pc = 0x1B95FCu;
            goto label_1b95fc;
        }
    }
    ctx->pc = 0x1B95F4u;
label_1b95f4:
    // 0x1b95f4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b95f8:
    if (ctx->pc == 0x1B95F8u) {
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95F4u;
        // 0x1b95f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95FCu;
        goto label_1b95fc;
    }
    ctx->pc = 0x1B95F4u;
    {
        const bool branch_taken_0x1b95f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95F4u;
        // 0x1b95f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95f4) {
            ctx->pc = 0x1B9650u;
            goto label_1b9650;
        }
    }
    ctx->pc = 0x1B95FCu;
label_1b95fc:
    // 0x1b95fc: 0x0  nop
    ctx->pc = 0x1b95fcu;
    // NOP
label_1b9600:
    // 0x1b9600: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b9604:
    if (ctx->pc == 0x1B9604u) {
        ctx->pc = 0x1B9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9600u;
        // 0x1b9604: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9608u;
        goto label_1b9608;
    }
    ctx->pc = 0x1B9600u;
    {
        const bool branch_taken_0x1b9600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9600u;
        // 0x1b9604: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9600) {
            ctx->pc = 0x1B9618u;
            goto label_1b9618;
        }
    }
    ctx->pc = 0x1B9608u;
label_1b9608:
    // 0x1b9608: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b960c:
    if (ctx->pc == 0x1B960Cu) {
        ctx->pc = 0x1B960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9608u;
        // 0x1b960c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9610u;
        goto label_1b9610;
    }
    ctx->pc = 0x1B9608u;
    {
        const bool branch_taken_0x1b9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9608u;
        // 0x1b960c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9608) {
            ctx->pc = 0x1B9618u;
            goto label_1b9618;
        }
    }
    ctx->pc = 0x1B9610u;
label_1b9610:
    // 0x1b9610: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b9614:
    if (ctx->pc == 0x1B9614u) {
        ctx->pc = 0x1B9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9610u;
        // 0x1b9614: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9618u;
        goto label_1b9618;
    }
    ctx->pc = 0x1B9610u;
    {
        const bool branch_taken_0x1b9610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9610u;
        // 0x1b9614: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9610) {
            ctx->pc = 0x1B9650u;
            goto label_1b9650;
        }
    }
    ctx->pc = 0x1B9618u;
label_1b9618:
    // 0x1b9618: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1b961c:
    if (ctx->pc == 0x1B961Cu) {
        ctx->pc = 0x1B9620u;
        goto label_1b9620;
    }
    ctx->pc = 0x1B9618u;
    {
        const bool branch_taken_0x1b9618 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9618) {
            ctx->pc = 0x1B962Cu;
            goto label_1b962c;
        }
    }
    ctx->pc = 0x1B9620u;
label_1b9620:
    // 0x1b9620: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1b9624:
    if (ctx->pc == 0x1B9624u) {
        ctx->pc = 0x1B9628u;
        goto label_1b9628;
    }
    ctx->pc = 0x1B9620u;
    {
        const bool branch_taken_0x1b9620 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9620) {
            ctx->pc = 0x1B962Cu;
            goto label_1b962c;
        }
    }
    ctx->pc = 0x1B9628u;
label_1b9628:
    // 0x1b9628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b962c:
    // 0x1b962c: 0x0  nop
    ctx->pc = 0x1b962cu;
    // NOP
label_1b9630:
    // 0x1b9630: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b9634:
    // 0x1b9634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b9638:
    // 0x1b9638: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b963c:
    // 0x1b963c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b9640:
    // 0x1b9640: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1b9644:
    // 0x1b9644: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b9648:
    // 0x1b9648: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
label_1b964c:
    if (ctx->pc == 0x1B964Cu) {
        ctx->pc = 0x1B964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9648u;
        // 0x1b964c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9650u;
        goto label_1b9650;
    }
    ctx->pc = 0x1B9648u;
    {
        const bool branch_taken_0x1b9648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9648u;
        // 0x1b964c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9648) {
            ctx->pc = 0x1B94D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b94d8;
        }
    }
    ctx->pc = 0x1B9650u;
label_1b9650:
    // 0x1b9650: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b9650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9654:
    // 0x1b9654: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x1b9654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1b9658:
    // 0x1b9658: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
label_1b965c:
    if (ctx->pc == 0x1B965Cu) {
        ctx->pc = 0x1B9660u;
        goto label_1b9660;
    }
    ctx->pc = 0x1B9658u;
    {
        const bool branch_taken_0x1b9658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9658) {
            ctx->pc = 0x1B9468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9468;
        }
    }
    ctx->pc = 0x1B9660u;
label_1b9660:
    // 0x1b9660: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1b9660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1b9664:
    // 0x1b9664: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b9664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b9668:
    // 0x1b9668: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b9668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b966c:
    // 0x1b966c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b966cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b9670:
    // 0x1b9670: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b9670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9674:
    // 0x1b9674: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b9674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9678:
    // 0x1b9678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b967c:
    // 0x1b967c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b967cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9680:
    // 0x1b9680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9684:
    // 0x1b9684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9688:
    // 0x1b9688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b968c:
    // 0x1b968c: 0x3e00008  jr          $ra
label_1b9690:
    if (ctx->pc == 0x1B9690u) {
        ctx->pc = 0x1B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B968Cu;
        // 0x1b9690: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9694u;
        goto label_1b9694;
    }
    ctx->pc = 0x1B968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B968Cu;
        // 0x1b9690: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9694u;
label_1b9694:
    // 0x1b9694: 0x0  nop
    ctx->pc = 0x1b9694u;
    // NOP
label_1b9698:
    // 0x1b9698: 0x0  nop
    ctx->pc = 0x1b9698u;
    // NOP
label_1b969c:
    // 0x1b969c: 0x0  nop
    ctx->pc = 0x1b969cu;
    // NOP
label_1b96a0:
    // 0x1b96a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b96a4:
    // 0x1b96a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b96a8:
    // 0x1b96a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b96ac:
    // 0x1b96ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b96acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b96b0:
    // 0x1b96b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b96b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b96b4:
    // 0x1b96b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b96b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b96b8:
    // 0x1b96b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b96b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b96bc:
    // 0x1b96bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b96bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b96c0:
    // 0x1b96c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b96c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b96c4:
    // 0x1b96c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b96c8:
    // 0x1b96c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b96cc:
    // 0x1b96cc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1b96d0:
    if (ctx->pc == 0x1B96D0u) {
        ctx->pc = 0x1B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96CCu;
        // 0x1b96d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96D4u;
        goto label_1b96d4;
    }
    ctx->pc = 0x1B96CCu;
    {
        const bool branch_taken_0x1b96cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96CCu;
        // 0x1b96d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96cc) {
            ctx->pc = 0x1B96E4u;
            goto label_1b96e4;
        }
    }
    ctx->pc = 0x1B96D4u;
label_1b96d4:
    // 0x1b96d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1b96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b96d8:
    // 0x1b96d8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1b96dc:
    // 0x1b96dc: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
label_1b96e0:
    if (ctx->pc == 0x1B96E0u) {
        ctx->pc = 0x1B96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96DCu;
        // 0x1b96e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96E4u;
        goto label_1b96e4;
    }
    ctx->pc = 0x1B96DCu;
    {
        const bool branch_taken_0x1b96dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96DCu;
        // 0x1b96e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96dc) {
            ctx->pc = 0x1B97C4u;
            goto label_1b97c4;
        }
    }
    ctx->pc = 0x1B96E4u;
label_1b96e4:
    // 0x1b96e4: 0xc04499c  jal         func_112670
label_1b96e8:
    if (ctx->pc == 0x1B96E8u) {
        ctx->pc = 0x1B96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96E4u;
        // 0x1b96e8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96ECu;
        goto label_1b96ec;
    }
    ctx->pc = 0x1B96E4u;
    SET_GPR_U32(ctx, 31, 0x1B96ECu);
    ctx->pc = 0x1B96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96E4u;
    // 0x1b96e8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112670u, 0x1B96E4u, 0x1B96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96ECu;
label_1b96ec:
    // 0x1b96ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b96f0:
    if (ctx->pc == 0x1B96F0u) {
        ctx->pc = 0x1B96F4u;
        goto label_1b96f4;
    }
    ctx->pc = 0x1B96ECu;
    {
        const bool branch_taken_0x1b96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96ec) {
            ctx->pc = 0x1B96FCu;
            goto label_1b96fc;
        }
    }
    ctx->pc = 0x1B96F4u;
label_1b96f4:
    // 0x1b96f4: 0x10000032  b           . + 4 + (0x32 << 2)
label_1b96f8:
    if (ctx->pc == 0x1B96F8u) {
        ctx->pc = 0x1B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96F4u;
        // 0x1b96f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96FCu;
        goto label_1b96fc;
    }
    ctx->pc = 0x1B96F4u;
    {
        const bool branch_taken_0x1b96f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96F4u;
        // 0x1b96f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96f4) {
            ctx->pc = 0x1B97C0u;
            goto label_1b97c0;
        }
    }
    ctx->pc = 0x1B96FCu;
label_1b96fc:
    // 0x1b96fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9700:
    // 0x1b9700: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b9704:
    // 0x1b9704: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b9704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9708:
    // 0x1b9708: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b970c:
    // 0x1b970c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9710:
    // 0x1b9710: 0xc044974  jal         func_1125D0
label_1b9714:
    if (ctx->pc == 0x1B9714u) {
        ctx->pc = 0x1B9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9710u;
        // 0x1b9714: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9718u;
        goto label_1b9718;
    }
    ctx->pc = 0x1B9710u;
    SET_GPR_U32(ctx, 31, 0x1B9718u);
    ctx->pc = 0x1B9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9710u;
    // 0x1b9714: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B9710u, 0x1B9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9718u;
label_1b9718:
    // 0x1b9718: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x1b9718u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1b971c:
    // 0x1b971c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x1b971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_1b9720:
    // 0x1b9720: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b9724:
    if (ctx->pc == 0x1B9724u) {
        ctx->pc = 0x1B9728u;
        goto label_1b9728;
    }
    ctx->pc = 0x1B9720u;
    {
        const bool branch_taken_0x1b9720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9720) {
            ctx->pc = 0x1B973Cu;
            goto label_1b973c;
        }
    }
    ctx->pc = 0x1B9728u;
label_1b9728:
    // 0x1b9728: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1b972c:
    // 0x1b972c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b9730:
    if (ctx->pc == 0x1B9730u) {
        ctx->pc = 0x1B9734u;
        goto label_1b9734;
    }
    ctx->pc = 0x1B972Cu;
    {
        const bool branch_taken_0x1b972c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b972c) {
            ctx->pc = 0x1B973Cu;
            goto label_1b973c;
        }
    }
    ctx->pc = 0x1B9734u;
label_1b9734:
    // 0x1b9734: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b9738:
    if (ctx->pc == 0x1B9738u) {
        ctx->pc = 0x1B9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9734u;
        // 0x1b9738: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B973Cu;
        goto label_1b973c;
    }
    ctx->pc = 0x1B9734u;
    {
        const bool branch_taken_0x1b9734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9734u;
        // 0x1b9738: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9734) {
            ctx->pc = 0x1B97C0u;
            goto label_1b97c0;
        }
    }
    ctx->pc = 0x1B973Cu;
label_1b973c:
    // 0x1b973c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9740:
    // 0x1b9740: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1b9740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9744:
    // 0x1b9744: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b9744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9748:
    // 0x1b9748: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1b9748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b974c:
    // 0x1b974c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b9750:
    if (ctx->pc == 0x1B9750u) {
        ctx->pc = 0x1B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B974Cu;
        // 0x1b9750: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9754u;
        goto label_1b9754;
    }
    ctx->pc = 0x1B974Cu;
    {
        const bool branch_taken_0x1b974c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B974Cu;
        // 0x1b9750: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b974c) {
            ctx->pc = 0x1B975Cu;
            goto label_1b975c;
        }
    }
    ctx->pc = 0x1B9754u;
label_1b9754:
    // 0x1b9754: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b9758:
    if (ctx->pc == 0x1B9758u) {
        ctx->pc = 0x1B9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9754u;
        // 0x1b9758: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B975Cu;
        goto label_1b975c;
    }
    ctx->pc = 0x1B9754u;
    {
        const bool branch_taken_0x1b9754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9754u;
        // 0x1b9758: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9754) {
            ctx->pc = 0x1B976Cu;
            goto label_1b976c;
        }
    }
    ctx->pc = 0x1B975Cu;
label_1b975c:
    // 0x1b975c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1b975cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b9760:
    // 0x1b9760: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b9764:
    if (ctx->pc == 0x1B9764u) {
        ctx->pc = 0x1B9768u;
        goto label_1b9768;
    }
    ctx->pc = 0x1B9760u;
    {
        const bool branch_taken_0x1b9760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9760) {
            ctx->pc = 0x1B976Cu;
            goto label_1b976c;
        }
    }
    ctx->pc = 0x1B9768u;
label_1b9768:
    // 0x1b9768: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b9768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1b976c:
    // 0x1b976c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1b976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1b9770:
    // 0x1b9770: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b9774:
    // 0x1b9774: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b9774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9778:
    // 0x1b9778: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1b9778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b977c:
    // 0x1b977c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b9780:
    if (ctx->pc == 0x1B9780u) {
        ctx->pc = 0x1B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B977Cu;
        // 0x1b9780: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9784u;
        goto label_1b9784;
    }
    ctx->pc = 0x1B977Cu;
    {
        const bool branch_taken_0x1b977c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B977Cu;
        // 0x1b9780: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b977c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9784u;
label_1b9784:
    // 0x1b9784: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b9788:
    if (ctx->pc == 0x1B9788u) {
        ctx->pc = 0x1B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9784u;
        // 0x1b9788: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B978Cu;
        goto label_1b978c;
    }
    ctx->pc = 0x1B9784u;
    {
        const bool branch_taken_0x1b9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9784u;
        // 0x1b9788: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9784) {
            ctx->pc = 0x1B979Cu;
            goto label_1b979c;
        }
    }
    ctx->pc = 0x1B978Cu;
label_1b978c:
    // 0x1b978c: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b9790:
    // 0x1b9790: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b9794:
    if (ctx->pc == 0x1B9794u) {
        ctx->pc = 0x1B9798u;
        goto label_1b9798;
    }
    ctx->pc = 0x1B9790u;
    {
        const bool branch_taken_0x1b9790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9790) {
            ctx->pc = 0x1B979Cu;
            goto label_1b979c;
        }
    }
    ctx->pc = 0x1B9798u;
label_1b9798:
    // 0x1b9798: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b979c:
    // 0x1b979c: 0xc044974  jal         func_1125D0
label_1b97a0:
    if (ctx->pc == 0x1B97A0u) {
        ctx->pc = 0x1B97A4u;
        goto label_1b97a4;
    }
    ctx->pc = 0x1B979Cu;
    SET_GPR_U32(ctx, 31, 0x1B97A4u);
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B979Cu, 0x1B97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97A4u;
label_1b97a4:
    // 0x1b97a4: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x1b97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_1b97a8:
    // 0x1b97a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b97ac:
    if (ctx->pc == 0x1B97ACu) {
        ctx->pc = 0x1B97B0u;
        goto label_1b97b0;
    }
    ctx->pc = 0x1B97A8u;
    {
        const bool branch_taken_0x1b97a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b97a8) {
            ctx->pc = 0x1B97C0u;
            goto label_1b97c0;
        }
    }
    ctx->pc = 0x1B97B0u;
label_1b97b0:
    // 0x1b97b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b97b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1b97b4:
    // 0x1b97b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1b97b8:
    if (ctx->pc == 0x1B97B8u) {
        ctx->pc = 0x1B97BCu;
        goto label_1b97bc;
    }
    ctx->pc = 0x1B97B4u;
    {
        const bool branch_taken_0x1b97b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b97b4) {
            ctx->pc = 0x1B97C0u;
            goto label_1b97c0;
        }
    }
    ctx->pc = 0x1B97BCu;
label_1b97bc:
    // 0x1b97bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b97c0:
    // 0x1b97c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b97c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b97c4:
    // 0x1b97c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b97c8:
    // 0x1b97c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b97c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b97cc:
    // 0x1b97cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b97ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b97d0:
    // 0x1b97d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b97d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b97d4:
    // 0x1b97d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b97d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b97d8:
    // 0x1b97d8: 0x3e00008  jr          $ra
label_1b97dc:
    if (ctx->pc == 0x1B97DCu) {
        ctx->pc = 0x1B97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97D8u;
        // 0x1b97dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97E0u;
        goto label_1b97e0;
    }
    ctx->pc = 0x1B97D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97D8u;
        // 0x1b97dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B97D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B97E0u;
label_1b97e0:
    // 0x1b97e0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1b97e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b97e4:
    // 0x1b97e4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1b97e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1b97e8:
    // 0x1b97e8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1b97e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1b97ec:
    // 0x1b97ec: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1b97ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1b97f0:
    // 0x1b97f0: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x1b97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1b97f4:
    // 0x1b97f4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_1b97f8:
    if (ctx->pc == 0x1B97F8u) {
        ctx->pc = 0x1B97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97F4u;
        // 0x1b97f8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97FCu;
        goto label_1b97fc;
    }
    ctx->pc = 0x1B97F4u;
    {
        const bool branch_taken_0x1b97f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97F4u;
        // 0x1b97f8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97f4) {
            ctx->pc = 0x1B9824u;
            goto label_1b9824;
        }
    }
    ctx->pc = 0x1B97FCu;
label_1b97fc:
    // 0x1b97fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b9800:
    if (ctx->pc == 0x1B9800u) {
        ctx->pc = 0x1B9804u;
        goto label_1b9804;
    }
    ctx->pc = 0x1B97FCu;
    {
        const bool branch_taken_0x1b97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b97fc) {
            ctx->pc = 0x1B980Cu;
            goto label_1b980c;
        }
    }
    ctx->pc = 0x1B9804u;
label_1b9804:
    // 0x1b9804: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1b9808:
    if (ctx->pc == 0x1B9808u) {
        ctx->pc = 0x1B9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9804u;
        // 0x1b9808: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B980Cu;
        goto label_1b980c;
    }
    ctx->pc = 0x1B9804u;
    {
        const bool branch_taken_0x1b9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9804u;
        // 0x1b9808: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9804) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B980Cu;
label_1b980c:
    // 0x1b980c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b9810:
    if (ctx->pc == 0x1B9810u) {
        ctx->pc = 0x1B9814u;
        goto label_1b9814;
    }
    ctx->pc = 0x1B980Cu;
    {
        const bool branch_taken_0x1b980c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b980c) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B9814u;
label_1b9814:
    // 0x1b9814: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b9818:
    if (ctx->pc == 0x1B9818u) {
        ctx->pc = 0x1B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9814u;
        // 0x1b9818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B981Cu;
        goto label_1b981c;
    }
    ctx->pc = 0x1B9814u;
    {
        const bool branch_taken_0x1b9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9814u;
        // 0x1b9818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9814) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B981Cu;
label_1b981c:
    // 0x1b981c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b9820:
    if (ctx->pc == 0x1B9820u) {
        ctx->pc = 0x1B9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B981Cu;
        // 0x1b9820: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9824u;
        goto label_1b9824;
    }
    ctx->pc = 0x1B981Cu;
    {
        const bool branch_taken_0x1b981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B981Cu;
        // 0x1b9820: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b981c) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9824u;
label_1b9824:
    // 0x1b9824: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_1b9828:
    if (ctx->pc == 0x1B9828u) {
        ctx->pc = 0x1B982Cu;
        goto label_1b982c;
    }
    ctx->pc = 0x1B9824u;
    {
        const bool branch_taken_0x1b9824 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b9824) {
            ctx->pc = 0x1B9854u;
            goto label_1b9854;
        }
    }
    ctx->pc = 0x1B982Cu;
label_1b982c:
    // 0x1b982c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b9830:
    if (ctx->pc == 0x1B9830u) {
        ctx->pc = 0x1B9834u;
        goto label_1b9834;
    }
    ctx->pc = 0x1B982Cu;
    {
        const bool branch_taken_0x1b982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b982c) {
            ctx->pc = 0x1B983Cu;
            goto label_1b983c;
        }
    }
    ctx->pc = 0x1B9834u;
label_1b9834:
    // 0x1b9834: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b9838:
    if (ctx->pc == 0x1B9838u) {
        ctx->pc = 0x1B9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9834u;
        // 0x1b9838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B983Cu;
        goto label_1b983c;
    }
    ctx->pc = 0x1B9834u;
    {
        const bool branch_taken_0x1b9834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9834u;
        // 0x1b9838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9834) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B983Cu;
label_1b983c:
    // 0x1b983c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b9840:
    if (ctx->pc == 0x1B9840u) {
        ctx->pc = 0x1B9844u;
        goto label_1b9844;
    }
    ctx->pc = 0x1B983Cu;
    {
        const bool branch_taken_0x1b983c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b983c) {
            ctx->pc = 0x1B984Cu;
            goto label_1b984c;
        }
    }
    ctx->pc = 0x1B9844u;
label_1b9844:
    // 0x1b9844: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b9848:
    if (ctx->pc == 0x1B9848u) {
        ctx->pc = 0x1B9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9844u;
        // 0x1b9848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B984Cu;
        goto label_1b984c;
    }
    ctx->pc = 0x1B9844u;
    {
        const bool branch_taken_0x1b9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9844u;
        // 0x1b9848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9844) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B984Cu;
label_1b984c:
    // 0x1b984c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b9850:
    if (ctx->pc == 0x1B9850u) {
        ctx->pc = 0x1B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B984Cu;
        // 0x1b9850: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9854u;
        goto label_1b9854;
    }
    ctx->pc = 0x1B984Cu;
    {
        const bool branch_taken_0x1b984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B984Cu;
        // 0x1b9850: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b984c) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9854u;
label_1b9854:
    // 0x1b9854: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b9858:
    if (ctx->pc == 0x1B9858u) {
        ctx->pc = 0x1B985Cu;
        goto label_1b985c;
    }
    ctx->pc = 0x1B9854u;
    {
        const bool branch_taken_0x1b9854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9854) {
            ctx->pc = 0x1B9864u;
            goto label_1b9864;
        }
    }
    ctx->pc = 0x1B985Cu;
label_1b985c:
    // 0x1b985c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b9860:
    if (ctx->pc == 0x1B9860u) {
        ctx->pc = 0x1B9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B985Cu;
        // 0x1b9860: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9864u;
        goto label_1b9864;
    }
    ctx->pc = 0x1B985Cu;
    {
        const bool branch_taken_0x1b985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B985Cu;
        // 0x1b9860: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b985c) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9864u;
label_1b9864:
    // 0x1b9864: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b9868:
    if (ctx->pc == 0x1B9868u) {
        ctx->pc = 0x1B986Cu;
        goto label_1b986c;
    }
    ctx->pc = 0x1B9864u;
    {
        const bool branch_taken_0x1b9864 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9864) {
            ctx->pc = 0x1B9874u;
            goto label_1b9874;
        }
    }
    ctx->pc = 0x1B986Cu;
label_1b986c:
    // 0x1b986c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b9870:
    if (ctx->pc == 0x1B9870u) {
        ctx->pc = 0x1B9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B986Cu;
        // 0x1b9870: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9874u;
        goto label_1b9874;
    }
    ctx->pc = 0x1B986Cu;
    {
        const bool branch_taken_0x1b986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B986Cu;
        // 0x1b9870: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b986c) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9874u;
label_1b9874:
    // 0x1b9874: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b9878:
    // 0x1b9878: 0x3e00008  jr          $ra
label_1b987c:
    if (ctx->pc == 0x1B987Cu) {
        ctx->pc = 0x1B987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9878u;
        // 0x1b987c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9880u;
        goto label_1b9880;
    }
    ctx->pc = 0x1B9878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9878u;
        // 0x1b987c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9880u;
label_1b9880:
    // 0x1b9880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b9884:
    // 0x1b9884: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b9888:
    // 0x1b9888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b988c:
    // 0x1b988c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b9890:
    // 0x1b9890: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b9894:
    // 0x1b9894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9898:
    // 0x1b9898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b989c:
    // 0x1b989c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b98a0:
    // 0x1b98a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b98a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b98a4:
    // 0x1b98a4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b98a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b98a8:
    // 0x1b98a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b98a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b98ac:
    // 0x1b98ac: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x1b98acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b98b0:
    // 0x1b98b0: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1b98b4:
    if (ctx->pc == 0x1B98B4u) {
        ctx->pc = 0x1B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B0u;
        // 0x1b98b4: 0x32240001  andi        $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98B8u;
        goto label_1b98b8;
    }
    ctx->pc = 0x1B98B0u;
    {
        const bool branch_taken_0x1b98b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B0u;
        // 0x1b98b4: 0x32240001  andi        $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b0) {
            ctx->pc = 0x1B98C4u;
            goto label_1b98c4;
        }
    }
    ctx->pc = 0x1B98B8u;
label_1b98b8:
    // 0x1b98b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b98bc:
    if (ctx->pc == 0x1B98BCu) {
        ctx->pc = 0x1B98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B8u;
        // 0x1b98bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98C0u;
        goto label_1b98c0;
    }
    ctx->pc = 0x1B98B8u;
    {
        const bool branch_taken_0x1b98b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B8u;
        // 0x1b98bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b8) {
            ctx->pc = 0x1B98C8u;
            goto label_1b98c8;
        }
    }
    ctx->pc = 0x1B98C0u;
label_1b98c0:
    // 0x1b98c0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_1b98c4:
    // 0x1b98c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b98c8:
    // 0x1b98c8: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_1b98cc:
    if (ctx->pc == 0x1B98CCu) {
        ctx->pc = 0x1B98D0u;
        goto label_1b98d0;
    }
    ctx->pc = 0x1B98C8u;
    {
        const bool branch_taken_0x1b98c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b98c8) {
            ctx->pc = 0x1B9984u;
            goto label_1b9984;
        }
    }
    ctx->pc = 0x1B98D0u;
label_1b98d0:
    // 0x1b98d0: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_1b98d4:
    if (ctx->pc == 0x1B98D4u) {
        ctx->pc = 0x1B98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98D0u;
        // 0x1b98d4: 0x32440001  andi        $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98D8u;
        goto label_1b98d8;
    }
    ctx->pc = 0x1B98D0u;
    {
        const bool branch_taken_0x1b98d0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98D0u;
        // 0x1b98d4: 0x32440001  andi        $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98d0) {
            ctx->pc = 0x1B98E4u;
            goto label_1b98e4;
        }
    }
    ctx->pc = 0x1B98D8u;
label_1b98d8:
    // 0x1b98d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b98dc:
    if (ctx->pc == 0x1B98DCu) {
        ctx->pc = 0x1B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98D8u;
        // 0x1b98dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98E0u;
        goto label_1b98e0;
    }
    ctx->pc = 0x1B98D8u;
    {
        const bool branch_taken_0x1b98d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98D8u;
        // 0x1b98dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98d8) {
            ctx->pc = 0x1B98E8u;
            goto label_1b98e8;
        }
    }
    ctx->pc = 0x1B98E0u;
label_1b98e0:
    // 0x1b98e0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_1b98e4:
    // 0x1b98e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b98e8:
    // 0x1b98e8: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
label_1b98ec:
    if (ctx->pc == 0x1B98ECu) {
        ctx->pc = 0x1B98F0u;
        goto label_1b98f0;
    }
    ctx->pc = 0x1B98E8u;
    {
        const bool branch_taken_0x1b98e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b98e8) {
            ctx->pc = 0x1B9984u;
            goto label_1b9984;
        }
    }
    ctx->pc = 0x1B98F0u;
label_1b98f0:
    // 0x1b98f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b98f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b98f4:
    // 0x1b98f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b98f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b98f8:
    // 0x1b98f8: 0xc04494c  jal         func_112530
label_1b98fc:
    if (ctx->pc == 0x1B98FCu) {
        ctx->pc = 0x1B98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98F8u;
        // 0x1b98fc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9900u;
        goto label_1b9900;
    }
    ctx->pc = 0x1B98F8u;
    SET_GPR_U32(ctx, 31, 0x1B9900u);
    ctx->pc = 0x1B98FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98F8u;
    // 0x1b98fc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1B98F8u, 0x1B9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9900u;
label_1b9900:
    // 0x1b9900: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1b9904:
    if (ctx->pc == 0x1B9904u) {
        ctx->pc = 0x1B9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9900u;
        // 0x1b9904: 0x112843  sra         $a1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9908u;
        goto label_1b9908;
    }
    ctx->pc = 0x1B9900u;
    {
        const bool branch_taken_0x1b9900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9900u;
        // 0x1b9904: 0x112843  sra         $a1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9900) {
            ctx->pc = 0x1B9984u;
            goto label_1b9984;
        }
    }
    ctx->pc = 0x1B9908u;
label_1b9908:
    // 0x1b9908: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1b990c:
    if (ctx->pc == 0x1B990Cu) {
        ctx->pc = 0x1B990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9908u;
        // 0x1b990c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9910u;
        goto label_1b9910;
    }
    ctx->pc = 0x1B9908u;
    {
        const bool branch_taken_0x1b9908 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9908u;
        // 0x1b990c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9908) {
            ctx->pc = 0x1B9918u;
            goto label_1b9918;
        }
    }
    ctx->pc = 0x1B9910u;
label_1b9910:
    // 0x1b9910: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b9914:
    // 0x1b9914: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b9914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1b9918:
    // 0x1b9918: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x1b9918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_1b991c:
    // 0x1b991c: 0x24843520  addiu       $a0, $a0, 0x3520
    ctx->pc = 0x1b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13600));
label_1b9920:
    // 0x1b9920: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1b9924:
    // 0x1b9924: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x1b9924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_1b9928:
    // 0x1b9928: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_1b992c:
    if (ctx->pc == 0x1B992Cu) {
        ctx->pc = 0x1B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9928u;
        // 0x1b992c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9930u;
        goto label_1b9930;
    }
    ctx->pc = 0x1B9928u;
    {
        const bool branch_taken_0x1b9928 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9928u;
        // 0x1b992c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9928) {
            ctx->pc = 0x1B9938u;
            goto label_1b9938;
        }
    }
    ctx->pc = 0x1B9930u;
label_1b9930:
    // 0x1b9930: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1b9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b9934:
    // 0x1b9934: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1b9934u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1b9938:
    // 0x1b9938: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x1b9938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
label_1b993c:
    // 0x1b993c: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_1b9940:
    // 0x1b9940: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1b9940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1b9944:
    // 0x1b9944: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b9948:
    // 0x1b9948: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1b9948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1b994c:
    // 0x1b994c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1b9950:
    if (ctx->pc == 0x1B9950u) {
        ctx->pc = 0x1B9954u;
        goto label_1b9954;
    }
    ctx->pc = 0x1B994Cu;
    {
        const bool branch_taken_0x1b994c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b994c) {
            ctx->pc = 0x1B9974u;
            goto label_1b9974;
        }
    }
    ctx->pc = 0x1B9954u;
label_1b9954:
    // 0x1b9954: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1b9954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9958:
    // 0x1b9958: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x1b9958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_1b995c:
    // 0x1b995c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1b9960:
    if (ctx->pc == 0x1B9960u) {
        ctx->pc = 0x1B9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B995Cu;
        // 0x1b9960: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9964u;
        goto label_1b9964;
    }
    ctx->pc = 0x1B995Cu;
    {
        const bool branch_taken_0x1b995c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B995Cu;
        // 0x1b9960: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b995c) {
            ctx->pc = 0x1B9974u;
            goto label_1b9974;
        }
    }
    ctx->pc = 0x1B9964u;
label_1b9964:
    // 0x1b9964: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1b9964u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b9968:
    // 0x1b9968: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1b9968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1b996c:
    // 0x1b996c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b9970:
    // 0x1b9970: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1b9970u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b9974:
    // 0x1b9974: 0x0  nop
    ctx->pc = 0x1b9974u;
    // NOP
label_1b9978:
    // 0x1b9978: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1b9978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1b997c:
    // 0x1b997c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b997cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1b9980:
    // 0x1b9980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9984:
    // 0x1b9984: 0x0  nop
    ctx->pc = 0x1b9984u;
    // NOP
label_1b9988:
    // 0x1b9988: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b9988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b998c:
    // 0x1b998c: 0x2a430021  slti        $v1, $s2, 0x21
    ctx->pc = 0x1b998cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
label_1b9990:
    // 0x1b9990: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_1b9994:
    if (ctx->pc == 0x1B9994u) {
        ctx->pc = 0x1B9998u;
        goto label_1b9998;
    }
    ctx->pc = 0x1B9990u;
    {
        const bool branch_taken_0x1b9990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9990) {
            ctx->pc = 0x1B98B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b98b0;
        }
    }
    ctx->pc = 0x1B9998u;
label_1b9998:
    // 0x1b9998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b999c:
    // 0x1b999c: 0x2a230021  slti        $v1, $s1, 0x21
    ctx->pc = 0x1b999cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
label_1b99a0:
    // 0x1b99a0: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1b99a4:
    if (ctx->pc == 0x1B99A4u) {
        ctx->pc = 0x1B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A0u;
        // 0x1b99a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99A8u;
        goto label_1b99a8;
    }
    ctx->pc = 0x1B99A0u;
    {
        const bool branch_taken_0x1b99a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A0u;
        // 0x1b99a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99a0) {
            ctx->pc = 0x1B98ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b98ac;
        }
    }
    ctx->pc = 0x1B99A8u;
label_1b99a8:
    // 0x1b99a8: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_1b99ac:
    // 0x1b99ac: 0xaf8388e0  sw          $v1, -0x7720($gp)
    ctx->pc = 0x1b99acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936800), GPR_U32(ctx, 3));
label_1b99b0:
    // 0x1b99b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b99b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b99b4:
    // 0x1b99b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b99b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b99b8:
    // 0x1b99b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b99b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b99bc:
    // 0x1b99bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b99bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b99c0:
    // 0x1b99c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b99c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b99c4:
    // 0x1b99c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b99c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b99c8:
    // 0x1b99c8: 0x3e00008  jr          $ra
label_1b99cc:
    if (ctx->pc == 0x1B99CCu) {
        ctx->pc = 0x1B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99C8u;
        // 0x1b99cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99D0u;
        goto label_1b99d0;
    }
    ctx->pc = 0x1B99C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99C8u;
        // 0x1b99cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B99D0u;
label_1b99d0:
    // 0x1b99d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b99d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b99d4:
    // 0x1b99d4: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1b99d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b99d8:
    // 0x1b99d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b99d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b99dc:
    // 0x1b99dc: 0x1200a  movz        $a0, $zero, $at
    ctx->pc = 0x1b99dcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1b99e0:
    // 0x1b99e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b99e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b99e4:
    // 0x1b99e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b99e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b99e8:
    // 0x1b99e8: 0x2881007f  slti        $at, $a0, 0x7F
    ctx->pc = 0x1b99e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)127) ? 1 : 0);
label_1b99ec:
    // 0x1b99ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b99f0:
    if (ctx->pc == 0x1B99F0u) {
        ctx->pc = 0x1B99F4u;
        goto label_1b99f4;
    }
    ctx->pc = 0x1B99ECu;
    {
        const bool branch_taken_0x1b99ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b99ec) {
            ctx->pc = 0x1B99FCu;
            goto label_1b99fc;
        }
    }
    ctx->pc = 0x1B99F4u;
label_1b99f4:
    // 0x1b99f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b99f8:
    if (ctx->pc == 0x1B99F8u) {
        ctx->pc = 0x1B99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99F4u;
        // 0x1b99f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99FCu;
        goto label_1b99fc;
    }
    ctx->pc = 0x1B99F4u;
    {
        const bool branch_taken_0x1b99f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99F4u;
        // 0x1b99f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99f4) {
            ctx->pc = 0x1B9A04u;
            goto label_1b9a04;
        }
    }
    ctx->pc = 0x1B99FCu;
label_1b99fc:
    // 0x1b99fc: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1b9a00:
    // 0x1b9a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a04:
    // 0x1b9a04: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b9a08:
    // 0x1b9a08: 0xc05af88  jal         func_16BE20
label_1b9a0c:
    if (ctx->pc == 0x1B9A0Cu) {
        ctx->pc = 0x1B9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A08u;
        // 0x1b9a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A10u;
        goto label_1b9a10;
    }
    ctx->pc = 0x1B9A08u;
    SET_GPR_U32(ctx, 31, 0x1B9A10u);
    ctx->pc = 0x1B9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A08u;
    // 0x1b9a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE20u, 0x1B9A08u, 0x1B9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A10u;
label_1b9a10:
    // 0x1b9a10: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1b9a14:
    if (ctx->pc == 0x1B9A14u) {
        ctx->pc = 0x1B9A18u;
        goto label_1b9a18;
    }
    ctx->pc = 0x1B9A10u;
    {
        const bool branch_taken_0x1b9a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a10) {
            ctx->pc = 0x1B9B60u;
            { ctx->pc = 0x1b9b60; return; }
        }
    }
    ctx->pc = 0x1B9A18u;
label_1b9a18:
    // 0x1b9a18: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1b9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1b9a1c:
    // 0x1b9a1c: 0x304201e4  andi        $v0, $v0, 0x1E4
    ctx->pc = 0x1b9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)484);
label_1b9a20:
    // 0x1b9a20: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b9a24:
    if (ctx->pc == 0x1B9A24u) {
        ctx->pc = 0x1B9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A20u;
        // 0x1b9a24: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A28u;
        goto label_1b9a28;
    }
    ctx->pc = 0x1B9A20u;
    {
        const bool branch_taken_0x1b9a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A20u;
        // 0x1b9a24: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a20) {
            ctx->pc = 0x1B9A98u;
            { ctx->pc = 0x1b9a98; return; }
        }
    }
    ctx->pc = 0x1B9A28u;
label_1b9a28:
    // 0x1b9a28: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9a2c:
    // 0x1b9a2c: 0x8c223880  lw          $v0, 0x3880($at)
    ctx->pc = 0x1b9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14464)));
label_1b9a30:
    // 0x1b9a30: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
label_1b9a34:
    // 0x1b9a34: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
label_1b9a38:
    if (ctx->pc == 0x1B9A38u) {
        ctx->pc = 0x1B9A3Cu;
        goto label_1b9a3c;
    }
    ctx->pc = 0x1B9A34u;
    {
        const bool branch_taken_0x1b9a34 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b9a34) {
            ctx->pc = 0x1B9A6Cu;
            { ctx->pc = 0x1b9a6c; return; }
        }
    }
    ctx->pc = 0x1B9A3Cu;
label_1b9a3c:
    // 0x1b9a3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a40:
    // 0x1b9a40: 0xc05af88  jal         func_16BE20
label_1b9a44:
    if (ctx->pc == 0x1B9A44u) {
        ctx->pc = 0x1B9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A40u;
        // 0x1b9a44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A48u;
        { ctx->pc = 0x1b9a48; return; }
    }
    ctx->pc = 0x1B9A40u;
    SET_GPR_U32(ctx, 31, 0x1B9A48u);
    ctx->pc = 0x1B9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A40u;
    // 0x1b9a44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE20u, 0x1B9A40u, 0x1B9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A48u;
    ctx->pc = 0x1b9a48u;
    return;
}

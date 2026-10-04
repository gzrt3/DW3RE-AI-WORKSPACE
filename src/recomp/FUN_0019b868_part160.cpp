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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e9298u: goto label_1e9298;
        case 0x1e929cu: goto label_1e929c;
        case 0x1e92a0u: goto label_1e92a0;
        case 0x1e92a4u: goto label_1e92a4;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92acu: goto label_1e92ac;
        case 0x1e92b0u: goto label_1e92b0;
        case 0x1e92b4u: goto label_1e92b4;
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92bcu: goto label_1e92bc;
        case 0x1e92c0u: goto label_1e92c0;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92ccu: goto label_1e92cc;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e92d4u: goto label_1e92d4;
        case 0x1e92d8u: goto label_1e92d8;
        case 0x1e92dcu: goto label_1e92dc;
        case 0x1e92e0u: goto label_1e92e0;
        case 0x1e92e4u: goto label_1e92e4;
        case 0x1e92e8u: goto label_1e92e8;
        case 0x1e92ecu: goto label_1e92ec;
        case 0x1e92f0u: goto label_1e92f0;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e92f8u: goto label_1e92f8;
        case 0x1e92fcu: goto label_1e92fc;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9304u: goto label_1e9304;
        case 0x1e9308u: goto label_1e9308;
        case 0x1e930cu: goto label_1e930c;
        case 0x1e9310u: goto label_1e9310;
        case 0x1e9314u: goto label_1e9314;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e931cu: goto label_1e931c;
        case 0x1e9320u: goto label_1e9320;
        case 0x1e9324u: goto label_1e9324;
        case 0x1e9328u: goto label_1e9328;
        case 0x1e932cu: goto label_1e932c;
        case 0x1e9330u: goto label_1e9330;
        case 0x1e9334u: goto label_1e9334;
        case 0x1e9338u: goto label_1e9338;
        case 0x1e933cu: goto label_1e933c;
        case 0x1e9340u: goto label_1e9340;
        case 0x1e9344u: goto label_1e9344;
        case 0x1e9348u: goto label_1e9348;
        case 0x1e934cu: goto label_1e934c;
        case 0x1e9350u: goto label_1e9350;
        case 0x1e9354u: goto label_1e9354;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e935cu: goto label_1e935c;
        case 0x1e9360u: goto label_1e9360;
        case 0x1e9364u: goto label_1e9364;
        case 0x1e9368u: goto label_1e9368;
        case 0x1e936cu: goto label_1e936c;
        case 0x1e9370u: goto label_1e9370;
        case 0x1e9374u: goto label_1e9374;
        case 0x1e9378u: goto label_1e9378;
        case 0x1e937cu: goto label_1e937c;
        case 0x1e9380u: goto label_1e9380;
        case 0x1e9384u: goto label_1e9384;
        case 0x1e9388u: goto label_1e9388;
        case 0x1e938cu: goto label_1e938c;
        case 0x1e9390u: goto label_1e9390;
        case 0x1e9394u: goto label_1e9394;
        case 0x1e9398u: goto label_1e9398;
        case 0x1e939cu: goto label_1e939c;
        case 0x1e93a0u: goto label_1e93a0;
        case 0x1e93a4u: goto label_1e93a4;
        case 0x1e93a8u: goto label_1e93a8;
        case 0x1e93acu: goto label_1e93ac;
        case 0x1e93b0u: goto label_1e93b0;
        case 0x1e93b4u: goto label_1e93b4;
        case 0x1e93b8u: goto label_1e93b8;
        case 0x1e93bcu: goto label_1e93bc;
        case 0x1e93c0u: goto label_1e93c0;
        case 0x1e93c4u: goto label_1e93c4;
        case 0x1e93c8u: goto label_1e93c8;
        case 0x1e93ccu: goto label_1e93cc;
        case 0x1e93d0u: goto label_1e93d0;
        case 0x1e93d4u: goto label_1e93d4;
        case 0x1e93d8u: goto label_1e93d8;
        case 0x1e93dcu: goto label_1e93dc;
        case 0x1e93e0u: goto label_1e93e0;
        case 0x1e93e4u: goto label_1e93e4;
        case 0x1e93e8u: goto label_1e93e8;
        case 0x1e93ecu: goto label_1e93ec;
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e93f4u: goto label_1e93f4;
        case 0x1e93f8u: goto label_1e93f8;
        case 0x1e93fcu: goto label_1e93fc;
        case 0x1e9400u: goto label_1e9400;
        case 0x1e9404u: goto label_1e9404;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e940cu: goto label_1e940c;
        case 0x1e9410u: goto label_1e9410;
        case 0x1e9414u: goto label_1e9414;
        case 0x1e9418u: goto label_1e9418;
        case 0x1e941cu: goto label_1e941c;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9424u: goto label_1e9424;
        case 0x1e9428u: goto label_1e9428;
        case 0x1e942cu: goto label_1e942c;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9434u: goto label_1e9434;
        case 0x1e9438u: goto label_1e9438;
        case 0x1e943cu: goto label_1e943c;
        case 0x1e9440u: goto label_1e9440;
        case 0x1e9444u: goto label_1e9444;
        case 0x1e9448u: goto label_1e9448;
        case 0x1e944cu: goto label_1e944c;
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9454u: goto label_1e9454;
        case 0x1e9458u: goto label_1e9458;
        case 0x1e945cu: goto label_1e945c;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9468u: goto label_1e9468;
        case 0x1e946cu: goto label_1e946c;
        case 0x1e9470u: goto label_1e9470;
        case 0x1e9474u: goto label_1e9474;
        case 0x1e9478u: goto label_1e9478;
        case 0x1e947cu: goto label_1e947c;
        case 0x1e9480u: goto label_1e9480;
        case 0x1e9484u: goto label_1e9484;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e948cu: goto label_1e948c;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e9494u: goto label_1e9494;
        case 0x1e9498u: goto label_1e9498;
        case 0x1e949cu: goto label_1e949c;
        case 0x1e94a0u: goto label_1e94a0;
        case 0x1e94a4u: goto label_1e94a4;
        case 0x1e94a8u: goto label_1e94a8;
        case 0x1e94acu: goto label_1e94ac;
        case 0x1e94b0u: goto label_1e94b0;
        case 0x1e94b4u: goto label_1e94b4;
        case 0x1e94b8u: goto label_1e94b8;
        case 0x1e94bcu: goto label_1e94bc;
        case 0x1e94c0u: goto label_1e94c0;
        case 0x1e94c4u: goto label_1e94c4;
        case 0x1e94c8u: goto label_1e94c8;
        case 0x1e94ccu: goto label_1e94cc;
        case 0x1e94d0u: goto label_1e94d0;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e94d8u: goto label_1e94d8;
        case 0x1e94dcu: goto label_1e94dc;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e94ecu: goto label_1e94ec;
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        case 0x1e9648u: goto label_1e9648;
        case 0x1e964cu: goto label_1e964c;
        case 0x1e9650u: goto label_1e9650;
        case 0x1e9654u: goto label_1e9654;
        case 0x1e9658u: goto label_1e9658;
        case 0x1e965cu: goto label_1e965c;
        case 0x1e9660u: goto label_1e9660;
        case 0x1e9664u: goto label_1e9664;
        case 0x1e9668u: goto label_1e9668;
        case 0x1e966cu: goto label_1e966c;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9674u: goto label_1e9674;
        case 0x1e9678u: goto label_1e9678;
        case 0x1e967cu: goto label_1e967c;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9684u: goto label_1e9684;
        case 0x1e9688u: goto label_1e9688;
        case 0x1e968cu: goto label_1e968c;
        case 0x1e9690u: goto label_1e9690;
        case 0x1e9694u: goto label_1e9694;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e969cu: goto label_1e969c;
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96a4u: goto label_1e96a4;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96acu: goto label_1e96ac;
        case 0x1e96b0u: goto label_1e96b0;
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96b8u: goto label_1e96b8;
        case 0x1e96bcu: goto label_1e96bc;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c4u: goto label_1e96c4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96ccu: goto label_1e96cc;
        case 0x1e96d0u: goto label_1e96d0;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96d8u: goto label_1e96d8;
        case 0x1e96dcu: goto label_1e96dc;
        case 0x1e96e0u: goto label_1e96e0;
        case 0x1e96e4u: goto label_1e96e4;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e96f4u: goto label_1e96f4;
        case 0x1e96f8u: goto label_1e96f8;
        case 0x1e96fcu: goto label_1e96fc;
        case 0x1e9700u: goto label_1e9700;
        case 0x1e9704u: goto label_1e9704;
        case 0x1e9708u: goto label_1e9708;
        case 0x1e970cu: goto label_1e970c;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e974cu: goto label_1e974c;
        case 0x1e9750u: goto label_1e9750;
        case 0x1e9754u: goto label_1e9754;
        case 0x1e9758u: goto label_1e9758;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9760u: goto label_1e9760;
        case 0x1e9764u: goto label_1e9764;
        case 0x1e9768u: goto label_1e9768;
        case 0x1e976cu: goto label_1e976c;
        case 0x1e9770u: goto label_1e9770;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9780u: goto label_1e9780;
        case 0x1e9784u: goto label_1e9784;
        case 0x1e9788u: goto label_1e9788;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9790u: goto label_1e9790;
        case 0x1e9794u: goto label_1e9794;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e979cu: goto label_1e979c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97a4u: goto label_1e97a4;
        case 0x1e97a8u: goto label_1e97a8;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97b0u: goto label_1e97b0;
        case 0x1e97b4u: goto label_1e97b4;
        case 0x1e97b8u: goto label_1e97b8;
        case 0x1e97bcu: goto label_1e97bc;
        case 0x1e97c0u: goto label_1e97c0;
        case 0x1e97c4u: goto label_1e97c4;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e97ccu: goto label_1e97cc;
        case 0x1e97d0u: goto label_1e97d0;
        case 0x1e97d4u: goto label_1e97d4;
        case 0x1e97d8u: goto label_1e97d8;
        case 0x1e97dcu: goto label_1e97dc;
        case 0x1e97e0u: goto label_1e97e0;
        case 0x1e97e4u: goto label_1e97e4;
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e97f0u: goto label_1e97f0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e97fcu: goto label_1e97fc;
        case 0x1e9800u: goto label_1e9800;
        case 0x1e9804u: goto label_1e9804;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9814u: goto label_1e9814;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e981cu: goto label_1e981c;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9828u: goto label_1e9828;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9838u: goto label_1e9838;
        case 0x1e983cu: goto label_1e983c;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e9844u: goto label_1e9844;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e984cu: goto label_1e984c;
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9854u: goto label_1e9854;
        case 0x1e9858u: goto label_1e9858;
        case 0x1e985cu: goto label_1e985c;
        case 0x1e9860u: goto label_1e9860;
        case 0x1e9864u: goto label_1e9864;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e986cu: goto label_1e986c;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9874u: goto label_1e9874;
        case 0x1e9878u: goto label_1e9878;
        case 0x1e987cu: goto label_1e987c;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9884u: goto label_1e9884;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9890u: goto label_1e9890;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e9898u: goto label_1e9898;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98a0u: goto label_1e98a0;
        case 0x1e98a4u: goto label_1e98a4;
        case 0x1e98a8u: goto label_1e98a8;
        case 0x1e98acu: goto label_1e98ac;
        case 0x1e98b0u: goto label_1e98b0;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98b8u: goto label_1e98b8;
        case 0x1e98bcu: goto label_1e98bc;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98ccu: goto label_1e98cc;
        case 0x1e98d0u: goto label_1e98d0;
        case 0x1e98d4u: goto label_1e98d4;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98dcu: goto label_1e98dc;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e98e4u: goto label_1e98e4;
        case 0x1e98e8u: goto label_1e98e8;
        case 0x1e98ecu: goto label_1e98ec;
        case 0x1e98f0u: goto label_1e98f0;
        case 0x1e98f4u: goto label_1e98f4;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e98fcu: goto label_1e98fc;
        case 0x1e9900u: goto label_1e9900;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e990cu: goto label_1e990c;
        case 0x1e9910u: goto label_1e9910;
        case 0x1e9914u: goto label_1e9914;
        case 0x1e9918u: goto label_1e9918;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9920u: goto label_1e9920;
        case 0x1e9924u: goto label_1e9924;
        case 0x1e9928u: goto label_1e9928;
        case 0x1e992cu: goto label_1e992c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9934u: goto label_1e9934;
        case 0x1e9938u: goto label_1e9938;
        case 0x1e993cu: goto label_1e993c;
        case 0x1e9940u: goto label_1e9940;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9948u: goto label_1e9948;
        case 0x1e994cu: goto label_1e994c;
        case 0x1e9950u: goto label_1e9950;
        case 0x1e9954u: goto label_1e9954;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e995cu: goto label_1e995c;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9964u: goto label_1e9964;
        case 0x1e9968u: goto label_1e9968;
        case 0x1e996cu: goto label_1e996c;
        case 0x1e9970u: goto label_1e9970;
        case 0x1e9974u: goto label_1e9974;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e997cu: goto label_1e997c;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e9984u: goto label_1e9984;
        case 0x1e9988u: goto label_1e9988;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e9990u: goto label_1e9990;
        case 0x1e9994u: goto label_1e9994;
        case 0x1e9998u: goto label_1e9998;
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        default: return;
    }

label_1e9298:
    if (ctx->pc == 0x1E9298u) {
        ctx->pc = 0x1E9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9294u;
        // 0x1e9298: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E929Cu;
        goto label_1e929c;
    }
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1E9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9294u;
    // 0x1e9298: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x1E9294u, 0x1E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e92a0:
    if (ctx->pc == 0x1E92A0u) {
        ctx->pc = 0x1E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E929Cu;
        // 0x1e92a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92A4u;
        goto label_1e92a4;
    }
    ctx->pc = 0x1E929Cu;
    {
        const bool branch_taken_0x1e929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E929Cu;
        // 0x1e92a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e929c) {
            ctx->pc = 0x1E92BCu;
            goto label_1e92bc;
        }
    }
    ctx->pc = 0x1E92A4u;
label_1e92a4:
    // 0x1e92a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e92a8:
    // 0x1e92a8: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e92ac:
    // 0x1e92ac: 0xc0435cc  jal         func_10D730
label_1e92b0:
    if (ctx->pc == 0x1E92B0u) {
        ctx->pc = 0x1E92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92ACu;
        // 0x1e92b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92B4u;
        goto label_1e92b4;
    }
    ctx->pc = 0x1E92ACu;
    SET_GPR_U32(ctx, 31, 0x1E92B4u);
    ctx->pc = 0x1E92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92ACu;
    // 0x1e92b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D730u, 0x1E92ACu, 0x1E92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92B4u;
label_1e92b4:
    // 0x1e92b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e92b8:
    if (ctx->pc == 0x1E92B8u) {
        ctx->pc = 0x1E92BCu;
        goto label_1e92bc;
    }
    ctx->pc = 0x1E92B4u;
    {
        const bool branch_taken_0x1e92b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92b4) {
            ctx->pc = 0x1E9308u;
            goto label_1e9308;
        }
    }
    ctx->pc = 0x1E92BCu;
label_1e92bc:
    // 0x1e92bc: 0x0  nop
    ctx->pc = 0x1e92bcu;
    // NOP
label_1e92c0:
    // 0x1e92c0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e92c4:
    // 0x1e92c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e92c8:
    // 0x1e92c8: 0xc066e02  jal         func_19B808
label_1e92cc:
    if (ctx->pc == 0x1E92CCu) {
        ctx->pc = 0x1E92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C8u;
        // 0x1e92cc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92D0u;
        goto label_1e92d0;
    }
    ctx->pc = 0x1E92C8u;
    SET_GPR_U32(ctx, 31, 0x1E92D0u);
    ctx->pc = 0x1E92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92C8u;
    // 0x1e92cc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1E92C8u, 0x1E92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e92d4:
    // 0x1e92d4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1e92d8:
    // 0x1e92d8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1e92dc:
    // 0x1e92dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e92e0:
    // 0x1e92e0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1e92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1e92e4:
    // 0x1e92e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e92e8:
    // 0x1e92e8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1e92ec:
    // 0x1e92ec: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x1e92ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
label_1e92f0:
    // 0x1e92f0: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e92f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e92f4:
    // 0x1e92f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1e92f8:
    // 0x1e92f8: 0xc04a1f0  jal         func_1287C0
label_1e92fc:
    if (ctx->pc == 0x1E92FCu) {
        ctx->pc = 0x1E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92F8u;
        // 0x1e92fc: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9300u;
        goto label_1e9300;
    }
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92F8u;
    // 0x1e92fc: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1E92F8u, 0x1E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e9304:
    if (ctx->pc == 0x1E9304u) {
        ctx->pc = 0x1E9308u;
        goto label_1e9308;
    }
    ctx->pc = 0x1E9300u;
    {
        const bool branch_taken_0x1e9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9300) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E9308u;
label_1e9308:
    // 0x1e9308: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e930c:
    // 0x1e930c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e9310:
    // 0x1e9310: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1e9314:
    // 0x1e9314: 0xc05f3d0  jal         func_17CF40
label_1e9318:
    if (ctx->pc == 0x1E9318u) {
        ctx->pc = 0x1E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9314u;
        // 0x1e9318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E931Cu;
        goto label_1e931c;
    }
    ctx->pc = 0x1E9314u;
    SET_GPR_U32(ctx, 31, 0x1E931Cu);
    ctx->pc = 0x1E9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9314u;
    // 0x1e9318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x1E9314u, 0x1E931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E931Cu;
label_1e931c:
    // 0x1e931c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1e931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9320:
    // 0x1e9320: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9324:
    // 0x1e9324: 0x0  nop
    ctx->pc = 0x1e9324u;
    // NOP
label_1e9328:
    // 0x1e9328: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1e932c:
    if (ctx->pc == 0x1E932Cu) {
        ctx->pc = 0x1E9330u;
        goto label_1e9330;
    }
    ctx->pc = 0x1E9328u;
    {
        const bool branch_taken_0x1e9328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9328) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E9330u;
label_1e9330:
    // 0x1e9330: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1e9330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1e9334:
    // 0x1e9334: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1e9338:
    // 0x1e9338: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e9338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e933c:
    // 0x1e933c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9340:
    // 0x1e9340: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e9340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1e9344:
    // 0x1e9344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9348:
    // 0x1e9348: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1e9348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1e934c:
    // 0x1e934c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e934cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1e9350:
    // 0x1e9350: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x1e9350u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
label_1e9354:
    // 0x1e9354: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e9354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9358:
    // 0x1e9358: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1e935c:
    // 0x1e935c: 0xc04a1f0  jal         func_1287C0
label_1e9360:
    if (ctx->pc == 0x1E9360u) {
        ctx->pc = 0x1E9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E935Cu;
        // 0x1e9360: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9364u;
        goto label_1e9364;
    }
    ctx->pc = 0x1E935Cu;
    SET_GPR_U32(ctx, 31, 0x1E9364u);
    ctx->pc = 0x1E9360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E935Cu;
    // 0x1e9360: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1E935Cu, 0x1E9364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9364u;
label_1e9364:
    // 0x1e9364: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e9368:
    if (ctx->pc == 0x1E9368u) {
        ctx->pc = 0x1E936Cu;
        goto label_1e936c;
    }
    ctx->pc = 0x1E9364u;
    {
        const bool branch_taken_0x1e9364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9364) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E936Cu;
label_1e936c:
    // 0x1e936c: 0x0  nop
    ctx->pc = 0x1e936cu;
    // NOP
label_1e9370:
    // 0x1e9370: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9374:
    // 0x1e9374: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e9378:
    // 0x1e9378: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1e937c:
    // 0x1e937c: 0xc05f3d0  jal         func_17CF40
label_1e9380:
    if (ctx->pc == 0x1E9380u) {
        ctx->pc = 0x1E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E937Cu;
        // 0x1e9380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9384u;
        goto label_1e9384;
    }
    ctx->pc = 0x1E937Cu;
    SET_GPR_U32(ctx, 31, 0x1E9384u);
    ctx->pc = 0x1E9380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E937Cu;
    // 0x1e9380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x1E937Cu, 0x1E9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9384u;
label_1e9384:
    // 0x1e9384: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1e9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9388:
    // 0x1e9388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e938c:
    // 0x1e938c: 0x0  nop
    ctx->pc = 0x1e938cu;
    // NOP
label_1e9390:
    // 0x1e9390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1e9394:
    if (ctx->pc == 0x1E9394u) {
        ctx->pc = 0x1E9398u;
        goto label_1e9398;
    }
    ctx->pc = 0x1E9390u;
    {
        const bool branch_taken_0x1e9390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9390) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E9398u;
label_1e9398:
    // 0x1e9398: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1e9398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e939c:
    // 0x1e939c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e93a0:
    if (ctx->pc == 0x1E93A0u) {
        ctx->pc = 0x1E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E939Cu;
        // 0x1e93a0: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E93A4u;
        goto label_1e93a4;
    }
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E939Cu;
        // 0x1e93a0: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93B4u;
            goto label_1e93b4;
        }
    }
    ctx->pc = 0x1E93A4u;
label_1e93a4:
    // 0x1e93a4: 0x0  nop
    ctx->pc = 0x1e93a4u;
    // NOP
label_1e93a8:
    // 0x1e93a8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e93a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e93ac:
    // 0x1e93ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e93b0:
    // 0x1e93b0: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x1e93b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_1e93b4:
    // 0x1e93b4: 0x0  nop
    ctx->pc = 0x1e93b4u;
    // NOP
label_1e93b8:
    // 0x1e93b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e93b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e93bc:
    // 0x1e93bc: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1e93bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e93c0:
    // 0x1e93c0: 0x2a030032  slti        $v1, $s0, 0x32
    ctx->pc = 0x1e93c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e93c4:
    // 0x1e93c4: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
label_1e93c8:
    if (ctx->pc == 0x1E93C8u) {
        ctx->pc = 0x1E93CCu;
        goto label_1e93cc;
    }
    ctx->pc = 0x1E93C4u;
    {
        const bool branch_taken_0x1e93c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e93c4) {
            ctx->pc = 0x1E9140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e9140; return; }
        }
    }
    ctx->pc = 0x1E93CCu;
label_1e93cc:
    // 0x1e93cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e93ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e93d0:
    // 0x1e93d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e93d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e93d4:
    // 0x1e93d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e93d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e93d8:
    // 0x1e93d8: 0x3e00008  jr          $ra
label_1e93dc:
    if (ctx->pc == 0x1E93DCu) {
        ctx->pc = 0x1E93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93D8u;
        // 0x1e93dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E93E0u;
        goto label_1e93e0;
    }
    ctx->pc = 0x1E93D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93D8u;
        // 0x1e93dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E93D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E93E0u;
label_1e93e0:
    // 0x1e93e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e93e4:
    // 0x1e93e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e93e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e93e8:
    // 0x1e93e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e93ec:
    // 0x1e93ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e93ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e93f0:
    // 0x1e93f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e93f4:
    // 0x1e93f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e93f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e93f8:
    // 0x1e93f8: 0xc07a554  jal         func_1E9550
label_1e93fc:
    if (ctx->pc == 0x1E93FCu) {
        ctx->pc = 0x1E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93F8u;
        // 0x1e93fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9400u;
        goto label_1e9400;
    }
    ctx->pc = 0x1E93F8u;
    SET_GPR_U32(ctx, 31, 0x1E9400u);
    ctx->pc = 0x1E93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E93F8u;
    // 0x1e93fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9550u;
    goto label_1e9550;
    ctx->pc = 0x1E9400u;
label_1e9400:
    // 0x1e9400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9404:
    // 0x1e9404: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_1e9408:
    if (ctx->pc == 0x1E9408u) {
        ctx->pc = 0x1E940Cu;
        goto label_1e940c;
    }
    ctx->pc = 0x1E9404u;
    {
        const bool branch_taken_0x1e9404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9404) {
            ctx->pc = 0x1E9440u;
            goto label_1e9440;
        }
    }
    ctx->pc = 0x1E940Cu;
label_1e940c:
    // 0x1e940c: 0xe6140048  swc1        $f20, 0x48($s0)
    ctx->pc = 0x1e940cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1e9410:
    // 0x1e9410: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9414:
    // 0x1e9414: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e9414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1e9418:
    // 0x1e9418: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e9418u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
label_1e941c:
    // 0x1e941c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e941cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1e9420:
    // 0x1e9420: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x1e9420u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_1e9424:
    // 0x1e9424: 0xf8510010  sqc2        $vf17, 0x10($v0)
    ctx->pc = 0x1e9424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_1e9428:
    // 0x1e9428: 0xf8520020  sqc2        $vf18, 0x20($v0)
    ctx->pc = 0x1e9428u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_1e942c:
    // 0x1e942c: 0xf8530030  sqc2        $vf19, 0x30($v0)
    ctx->pc = 0x1e942cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_1e9430:
    // 0x1e9430: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x1e9430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9434:
    // 0x1e9434: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e9434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e9438:
    // 0x1e9438: 0xc066e14  jal         func_19B850
label_1e943c:
    if (ctx->pc == 0x1E943Cu) {
        ctx->pc = 0x1E943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9438u;
        // 0x1e943c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9440u;
        goto label_1e9440;
    }
    ctx->pc = 0x1E9438u;
    SET_GPR_U32(ctx, 31, 0x1E9440u);
    ctx->pc = 0x1E943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9438u;
    // 0x1e943c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1E9438u, 0x1E9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9440u;
label_1e9440:
    // 0x1e9440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9444:
    // 0x1e9444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9448:
    // 0x1e9448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e9448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e944c:
    // 0x1e944c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e9450:
    // 0x1e9450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e9450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9454:
    // 0x1e9454: 0x3e00008  jr          $ra
label_1e9458:
    if (ctx->pc == 0x1E9458u) {
        ctx->pc = 0x1E9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9454u;
        // 0x1e9458: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E945Cu;
        goto label_1e945c;
    }
    ctx->pc = 0x1E9454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9454u;
        // 0x1e9458: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E945Cu;
label_1e945c:
    // 0x1e945c: 0x0  nop
    ctx->pc = 0x1e945cu;
    // NOP
label_1e9460:
    // 0x1e9460: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e9460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e9464:
    // 0x1e9464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e9468:
    // 0x1e9468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e946c:
    // 0x1e946c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e9470:
    // 0x1e9470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e9470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9474:
    // 0x1e9474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9478:
    // 0x1e9478: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e9478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e947c:
    // 0x1e947c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e947cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9480:
    // 0x1e9480: 0xc07a554  jal         func_1E9550
label_1e9484:
    if (ctx->pc == 0x1E9484u) {
        ctx->pc = 0x1E9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9480u;
        // 0x1e9484: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9488u;
        goto label_1e9488;
    }
    ctx->pc = 0x1E9480u;
    SET_GPR_U32(ctx, 31, 0x1E9488u);
    ctx->pc = 0x1E9484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9480u;
    // 0x1e9484: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9550u;
    goto label_1e9550;
    ctx->pc = 0x1E9488u;
label_1e9488:
    // 0x1e9488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e948c:
    // 0x1e948c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_1e9490:
    if (ctx->pc == 0x1E9490u) {
        ctx->pc = 0x1E9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E948Cu;
        // 0x1e9490: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9494u;
        goto label_1e9494;
    }
    ctx->pc = 0x1E948Cu;
    {
        const bool branch_taken_0x1e948c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E948Cu;
        // 0x1e9490: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e948c) {
            ctx->pc = 0x1E952Cu;
            goto label_1e952c;
        }
    }
    ctx->pc = 0x1E9494u;
label_1e9494:
    // 0x1e9494: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e9494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e9498:
    // 0x1e9498: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1e9498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e949c:
    // 0x1e949c: 0x2442b964  addiu       $v0, $v0, -0x469C
    ctx->pc = 0x1e949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949220));
label_1e94a0:
    // 0x1e94a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e94a4:
    // 0x1e94a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e94a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e94a8:
    // 0x1e94a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e94ac:
    // 0x1e94ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e94b0:
    // 0x1e94b0: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1e94b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1e94b4:
    // 0x1e94b4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e94b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1e94b8:
    // 0x1e94b8: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e94b8u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
label_1e94bc:
    // 0x1e94bc: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e94bcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1e94c0:
    // 0x1e94c0: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x1e94c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_1e94c4:
    // 0x1e94c4: 0xf8910010  sqc2        $vf17, 0x10($a0)
    ctx->pc = 0x1e94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_1e94c8:
    // 0x1e94c8: 0xf8920020  sqc2        $vf18, 0x20($a0)
    ctx->pc = 0x1e94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_1e94cc:
    // 0x1e94cc: 0xf8930030  sqc2        $vf19, 0x30($a0)
    ctx->pc = 0x1e94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_1e94d0:
    // 0x1e94d0: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x1e94d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e94d4:
    // 0x1e94d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e94d8:
    // 0x1e94d8: 0xc066e14  jal         func_19B850
label_1e94dc:
    if (ctx->pc == 0x1E94DCu) {
        ctx->pc = 0x1E94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94D8u;
        // 0x1e94dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E94E0u;
        goto label_1e94e0;
    }
    ctx->pc = 0x1E94D8u;
    SET_GPR_U32(ctx, 31, 0x1E94E0u);
    ctx->pc = 0x1E94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94D8u;
    // 0x1e94dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1E94D8u, 0x1E94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94E0u;
label_1e94e0:
    // 0x1e94e0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e94e4:
    // 0x1e94e4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_1e94e8:
    if (ctx->pc == 0x1E94E8u) {
        ctx->pc = 0x1E94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94E4u;
        // 0x1e94e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E94ECu;
        goto label_1e94ec;
    }
    ctx->pc = 0x1E94E4u;
    {
        const bool branch_taken_0x1e94e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94E4u;
        // 0x1e94e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94e4) {
            ctx->pc = 0x1E950Cu;
            goto label_1e950c;
        }
    }
    ctx->pc = 0x1E94ECu;
label_1e94ec:
    // 0x1e94ec: 0x86060056  lh          $a2, 0x56($s0)
    ctx->pc = 0x1e94ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_1e94f0:
    // 0x1e94f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e94f4:
    // 0x1e94f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e94f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e94f8:
    // 0x1e94f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e94fc:
    // 0x1e94fc: 0xc0554a0  jal         func_155280
label_1e9500:
    if (ctx->pc == 0x1E9500u) {
        ctx->pc = 0x1E9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94FCu;
        // 0x1e9500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9504u;
        goto label_1e9504;
    }
    ctx->pc = 0x1E94FCu;
    SET_GPR_U32(ctx, 31, 0x1E9504u);
    ctx->pc = 0x1E9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94FCu;
    // 0x1e9500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155280u, 0x1E94FCu, 0x1E9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9504u;
label_1e9504:
    // 0x1e9504: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9508:
    if (ctx->pc == 0x1E9508u) {
        ctx->pc = 0x1E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9504u;
        // 0x1e9508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E950Cu;
        goto label_1e950c;
    }
    ctx->pc = 0x1E9504u;
    {
        const bool branch_taken_0x1e9504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9504u;
        // 0x1e9508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9504) {
            ctx->pc = 0x1E9530u;
            goto label_1e9530;
        }
    }
    ctx->pc = 0x1E950Cu;
label_1e950c:
    // 0x1e950c: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_1e9510:
    if (ctx->pc == 0x1E9510u) {
        ctx->pc = 0x1E9514u;
        goto label_1e9514;
    }
    ctx->pc = 0x1E950Cu;
    {
        const bool branch_taken_0x1e950c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e950c) {
            ctx->pc = 0x1E952Cu;
            goto label_1e952c;
        }
    }
    ctx->pc = 0x1E9514u;
label_1e9514:
    // 0x1e9514: 0x86060056  lh          $a2, 0x56($s0)
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_1e9518:
    // 0x1e9518: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e951c:
    // 0x1e951c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e951cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9520:
    // 0x1e9520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9524:
    // 0x1e9524: 0xc0554a0  jal         func_155280
label_1e9528:
    if (ctx->pc == 0x1E9528u) {
        ctx->pc = 0x1E9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9524u;
        // 0x1e9528: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E952Cu;
        goto label_1e952c;
    }
    ctx->pc = 0x1E9524u;
    SET_GPR_U32(ctx, 31, 0x1E952Cu);
    ctx->pc = 0x1E9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9524u;
    // 0x1e9528: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155280u, 0x1E9524u, 0x1E952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E952Cu;
label_1e952c:
    // 0x1e952c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e952cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9530:
    // 0x1e9530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e9530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9534:
    // 0x1e9534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9538:
    // 0x1e9538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e953c:
    // 0x1e953c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9540:
    // 0x1e9540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9544:
    // 0x1e9544: 0x3e00008  jr          $ra
label_1e9548:
    if (ctx->pc == 0x1E9548u) {
        ctx->pc = 0x1E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9544u;
        // 0x1e9548: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E954Cu;
        goto label_1e954c;
    }
    ctx->pc = 0x1E9544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9544u;
        // 0x1e9548: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E954Cu;
label_1e954c:
    // 0x1e954c: 0x0  nop
    ctx->pc = 0x1e954cu;
    // NOP
label_1e9550:
    // 0x1e9550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e9554:
    // 0x1e9554: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1e9558:
    // 0x1e9558: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e955c:
    // 0x1e955c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e9560:
    // 0x1e9560: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e9564:
    // 0x1e9564: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e9564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e9568:
    // 0x1e9568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e956c:
    // 0x1e956c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e956cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9570:
    // 0x1e9570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e9574:
    // 0x1e9574: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
label_1e9578:
    // 0x1e9578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e957c:
    // 0x1e957c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e957cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e9580:
    // 0x1e9580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9584:
    // 0x1e9584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9588:
    // 0x1e9588: 0x8f89821c  lw          $t1, -0x7DE4($gp)
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e958c:
    // 0x1e958c: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e9590:
    // 0x1e9590: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e9590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9594:
    // 0x1e9594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9598:
    // 0x1e9598: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e9598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e959c:
    // 0x1e959c: 0x8d3112c0  lw          $s1, 0x12C0($t1)
    ctx->pc = 0x1e959cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4800)));
label_1e95a0:
    // 0x1e95a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1e95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e95a4:
    // 0x1e95a4: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e95a8:
    // 0x1e95a8: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1e95a8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e95ac:
    // 0x1e95ac: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_1e95b0:
    // 0x1e95b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1e95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e95b4:
    // 0x1e95b4: 0x1238021  addu        $s0, $t1, $v1
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1e95b8:
    // 0x1e95b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1e95b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e95bc:
    // 0x1e95bc: 0xad2312c0  sw          $v1, 0x12C0($t1)
    ctx->pc = 0x1e95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4800), GPR_U32(ctx, 3));
label_1e95c0:
    // 0x1e95c0: 0xa205005a  sb          $a1, 0x5A($s0)
    ctx->pc = 0x1e95c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 5));
label_1e95c4:
    // 0x1e95c4: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x1e95c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_1e95c8:
    // 0x1e95c8: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x1e95c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
label_1e95cc:
    // 0x1e95cc: 0x90c30234  lbu         $v1, 0x234($a2)
    ctx->pc = 0x1e95ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 564)));
label_1e95d0:
    // 0x1e95d0: 0xa203005e  sb          $v1, 0x5E($s0)
    ctx->pc = 0x1e95d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 3));
label_1e95d4:
    // 0x1e95d4: 0x90c30245  lbu         $v1, 0x245($a2)
    ctx->pc = 0x1e95d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 581)));
label_1e95d8:
    // 0x1e95d8: 0xa203005f  sb          $v1, 0x5F($s0)
    ctx->pc = 0x1e95d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 3));
label_1e95dc:
    // 0x1e95dc: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x1e95dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1e95e0:
    // 0x1e95e0: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x1e95e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
label_1e95e4:
    // 0x1e95e4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e95e8:
    // 0x1e95e8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e95e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1e95ec:
    // 0x1e95ec: 0x84c3003c  lh          $v1, 0x3C($a2)
    ctx->pc = 0x1e95ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
label_1e95f0:
    // 0x1e95f0: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1e95f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1e95f4:
    // 0x1e95f4: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x1e95f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1e95f8:
    // 0x1e95f8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_1e95fc:
    if (ctx->pc == 0x1E95FCu) {
        ctx->pc = 0x1E9600u;
        goto label_1e9600;
    }
    ctx->pc = 0x1E95F8u;
    {
        const bool branch_taken_0x1e95f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e95f8) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E9600u;
label_1e9600:
    // 0x1e9600: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e9604:
    // 0x1e9604: 0x90c3000c  lbu         $v1, 0xC($a2)
    ctx->pc = 0x1e9604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
label_1e9608:
    // 0x1e9608: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1e960c:
    if (ctx->pc == 0x1E960Cu) {
        ctx->pc = 0x1E960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9608u;
        // 0x1e960c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9610u;
        goto label_1e9610;
    }
    ctx->pc = 0x1E9608u;
    {
        const bool branch_taken_0x1e9608 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9608u;
        // 0x1e960c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9608) {
            ctx->pc = 0x1E9620u;
            goto label_1e9620;
        }
    }
    ctx->pc = 0x1E9610u;
label_1e9610:
    // 0x1e9610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9614:
    // 0x1e9614: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e9618:
    if (ctx->pc == 0x1E9618u) {
        ctx->pc = 0x1E9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9614u;
        // 0x1e9618: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E961Cu;
        goto label_1e961c;
    }
    ctx->pc = 0x1E9614u;
    {
        const bool branch_taken_0x1e9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9614u;
        // 0x1e9618: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9614) {
            ctx->pc = 0x1E9638u;
            goto label_1e9638;
        }
    }
    ctx->pc = 0x1E961Cu;
label_1e961c:
    // 0x1e961c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1e9620:
    // 0x1e9620: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1e9624:
    // 0x1e9624: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e9624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1e9628:
    // 0x1e9628: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e9628u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e962c:
    // 0x1e962c: 0x0  nop
    ctx->pc = 0x1e962cu;
    // NOP
label_1e9630:
    // 0x1e9630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e9630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e9634:
    // 0x1e9634: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e9634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e9638:
    // 0x1e9638: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1e9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e963c:
    // 0x1e963c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e963cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9640:
    // 0x1e9640: 0x0  nop
    ctx->pc = 0x1e9640u;
    // NOP
label_1e9644:
    // 0x1e9644: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1e9648:
    if (ctx->pc == 0x1E9648u) {
        ctx->pc = 0x1E964Cu;
        goto label_1e964c;
    }
    ctx->pc = 0x1E9644u;
    {
        const bool branch_taken_0x1e9644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9644) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E964Cu;
label_1e964c:
    // 0x1e964c: 0x90c3000d  lbu         $v1, 0xD($a2)
    ctx->pc = 0x1e964cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
label_1e9650:
    // 0x1e9650: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1e9654:
    if (ctx->pc == 0x1E9654u) {
        ctx->pc = 0x1E9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9650u;
        // 0x1e9654: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9658u;
        goto label_1e9658;
    }
    ctx->pc = 0x1E9650u;
    {
        const bool branch_taken_0x1e9650 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9650u;
        // 0x1e9654: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9650) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E9658u;
label_1e9658:
    // 0x1e9658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e965c:
    // 0x1e965c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e9660:
    if (ctx->pc == 0x1E9660u) {
        ctx->pc = 0x1E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E965Cu;
        // 0x1e9660: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9664u;
        goto label_1e9664;
    }
    ctx->pc = 0x1E965Cu;
    {
        const bool branch_taken_0x1e965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E965Cu;
        // 0x1e9660: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e965c) {
            ctx->pc = 0x1E9680u;
            goto label_1e9680;
        }
    }
    ctx->pc = 0x1E9664u;
label_1e9664:
    // 0x1e9664: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1e9664u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1e9668:
    // 0x1e9668: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e9668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1e966c:
    // 0x1e966c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1e9670:
    // 0x1e9670: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e9670u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9674:
    // 0x1e9674: 0x0  nop
    ctx->pc = 0x1e9674u;
    // NOP
label_1e9678:
    // 0x1e9678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e9678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e967c:
    // 0x1e967c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e967cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e9680:
    // 0x1e9680: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9684:
    // 0x1e9684: 0x0  nop
    ctx->pc = 0x1e9684u;
    // NOP
label_1e9688:
    // 0x1e9688: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e968c:
    if (ctx->pc == 0x1E968Cu) {
        ctx->pc = 0x1E9690u;
        goto label_1e9690;
    }
    ctx->pc = 0x1E9688u;
    {
        const bool branch_taken_0x1e9688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9688) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e9694:
    if (ctx->pc == 0x1E9694u) {
        ctx->pc = 0x1E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9690u;
        // 0x1e9694: 0xae060044  sw          $a2, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9698u;
        goto label_1e9698;
    }
    ctx->pc = 0x1E9690u;
    {
        const bool branch_taken_0x1e9690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9690u;
        // 0x1e9694: 0xae060044  sw          $a2, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9690) {
            ctx->pc = 0x1E969Cu;
            goto label_1e969c;
        }
    }
    ctx->pc = 0x1E9698u;
label_1e9698:
    // 0x1e9698: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1e9698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1e969c:
    // 0x1e969c: 0x9603005c  lhu         $v1, 0x5C($s0)
    ctx->pc = 0x1e969cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_1e96a0:
    // 0x1e96a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e96a4:
    // 0x1e96a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e96a8:
    if (ctx->pc == 0x1E96A8u) {
        ctx->pc = 0x1E96ACu;
        goto label_1e96ac;
    }
    ctx->pc = 0x1E96A4u;
    {
        const bool branch_taken_0x1e96a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e96a4) {
            ctx->pc = 0x1E96C8u;
            goto label_1e96c8;
        }
    }
    ctx->pc = 0x1E96ACu;
label_1e96ac:
    // 0x1e96ac: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e96b0:
    // 0x1e96b0: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1e96b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1e96b4:
    // 0x1e96b4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x1e96b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1e96b8:
    // 0x1e96b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e96bc:
    // 0x1e96bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e96c0:
    // 0x1e96c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e96c4:
    if (ctx->pc == 0x1E96C4u) {
        ctx->pc = 0x1E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96C0u;
        // 0x1e96c4: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E96C8u;
        goto label_1e96c8;
    }
    ctx->pc = 0x1E96C0u;
    {
        const bool branch_taken_0x1e96c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96C0u;
        // 0x1e96c4: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96c0) {
            ctx->pc = 0x1E96D0u;
            goto label_1e96d0;
        }
    }
    ctx->pc = 0x1E96C8u;
label_1e96c8:
    // 0x1e96c8: 0x84420028  lh          $v0, 0x28($v0)
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1e96cc:
    // 0x1e96cc: 0xa6020056  sh          $v0, 0x56($s0)
    ctx->pc = 0x1e96ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
label_1e96d0:
    // 0x1e96d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96d4:
    // 0x1e96d4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e96d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1e96d8:
    // 0x1e96d8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e96d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96dc:
    // 0x1e96dc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1e96dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1e96e0:
    // 0x1e96e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e96e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96e4:
    // 0x1e96e4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1e96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1e96e8:
    // 0x1e96e8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1e96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96ec:
    // 0x1e96ec: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1e96ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e96f0:
    // 0x1e96f0: 0x9602005c  lhu         $v0, 0x5C($s0)
    ctx->pc = 0x1e96f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_1e96f4:
    // 0x1e96f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e96f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e96f8:
    // 0x1e96f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e96fc:
    if (ctx->pc == 0x1E96FCu) {
        ctx->pc = 0x1E96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96F8u;
        // 0x1e96fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9700u;
        goto label_1e9700;
    }
    ctx->pc = 0x1E96F8u;
    {
        const bool branch_taken_0x1e96f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96F8u;
        // 0x1e96fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96f8) {
            ctx->pc = 0x1E971Cu;
            goto label_1e971c;
        }
    }
    ctx->pc = 0x1E9700u;
label_1e9700:
    // 0x1e9700: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1e9704:
    // 0x1e9704: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e9704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e9708:
    // 0x1e9708: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1e9708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1e970c:
    // 0x1e970c: 0xc05f3d0  jal         func_17CF40
label_1e9710:
    if (ctx->pc == 0x1E9710u) {
        ctx->pc = 0x1E9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E970Cu;
        // 0x1e9710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9714u;
        goto label_1e9714;
    }
    ctx->pc = 0x1E970Cu;
    SET_GPR_U32(ctx, 31, 0x1E9714u);
    ctx->pc = 0x1E9710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E970Cu;
    // 0x1e9710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x1E970Cu, 0x1E9714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9714u;
label_1e9714:
    // 0x1e9714: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1e9714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1e9718:
    // 0x1e9718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e971c:
    // 0x1e971c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e9720:
    // 0x1e9720: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e9720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1e9724:
    // 0x1e9724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9728:
    // 0x1e9728: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e9728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e972c:
    // 0x1e972c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e9730:
    // 0x1e9730: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1e9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9734:
    // 0x1e9734: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e9738:
    // 0x1e9738: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1e9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e973c:
    // 0x1e973c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e9740:
    // 0x1e9740: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1e9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9744:
    // 0x1e9744: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e9744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1e9748:
    // 0x1e9748: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e9748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1e974c:
    // 0x1e974c: 0xae130040  sw          $s3, 0x40($s0)
    ctx->pc = 0x1e974cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 19));
label_1e9750:
    // 0x1e9750: 0xc066e26  jal         func_19B898
label_1e9754:
    if (ctx->pc == 0x1E9754u) {
        ctx->pc = 0x1E9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9750u;
        // 0x1e9754: 0xa2120058  sb          $s2, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9758u;
        goto label_1e9758;
    }
    ctx->pc = 0x1E9750u;
    SET_GPR_U32(ctx, 31, 0x1E9758u);
    ctx->pc = 0x1E9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9750u;
    // 0x1e9754: 0xa2120058  sb          $s2, 0x58($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1E9758u;
label_1e9758:
    // 0x1e9758: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1e9758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_1e975c:
    // 0x1e975c: 0x9602005c  lhu         $v0, 0x5C($s0)
    ctx->pc = 0x1e975cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_1e9760:
    // 0x1e9760: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1e9764:
    // 0x1e9764: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1e9768:
    if (ctx->pc == 0x1E9768u) {
        ctx->pc = 0x1E976Cu;
        goto label_1e976c;
    }
    ctx->pc = 0x1E9764u;
    {
        const bool branch_taken_0x1e9764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9764) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E976Cu;
label_1e976c:
    // 0x1e976c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e9770:
    // 0x1e9770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9774:
    // 0x1e9774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9778:
    // 0x1e9778: 0x30840400  andi        $a0, $a0, 0x400
    ctx->pc = 0x1e9778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_1e977c:
    // 0x1e977c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e977cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e9780:
    // 0x1e9780: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e9780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e9784:
    // 0x1e9784: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1e9788:
    if (ctx->pc == 0x1E9788u) {
        ctx->pc = 0x1E9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9784u;
        // 0x1e9788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E978Cu;
        goto label_1e978c;
    }
    ctx->pc = 0x1E9784u;
    {
        const bool branch_taken_0x1e9784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9784u;
        // 0x1e9788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9784) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E978Cu;
label_1e978c:
    // 0x1e978c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e978cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9790:
    // 0x1e9790: 0x2232804  sllv        $a1, $v1, $s1
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_1e9794:
    // 0x1e9794: 0x278680d0  addiu       $a2, $gp, -0x7F30
    ctx->pc = 0x1e9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_1e9798:
    // 0x1e9798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e9798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e979c:
    // 0x1e979c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e979cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1e97a0:
    // 0x1e97a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e97a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1e97a4:
    // 0x1e97a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e97a8:
    // 0x1e97a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e97a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1e97ac:
    // 0x1e97ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e97acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1e97b0:
    // 0x1e97b0: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x1e97b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_1e97b4:
    // 0x1e97b4: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x1e97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1e97b8:
    // 0x1e97b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e97bc:
    // 0x1e97bc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e97c0:
    // 0x1e97c0: 0x0  nop
    ctx->pc = 0x1e97c0u;
    // NOP
label_1e97c4:
    // 0x1e97c4: 0x0  nop
    ctx->pc = 0x1e97c4u;
    // NOP
label_1e97c8:
    // 0x1e97c8: 0xdd240008  ld          $a0, 0x8($t1)
    ctx->pc = 0x1e97c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 8)));
label_1e97cc:
    // 0x1e97cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e97d0:
    // 0x1e97d0: 0x28e3002f  slti        $v1, $a3, 0x2F
    ctx->pc = 0x1e97d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)47) ? 1 : 0);
label_1e97d4:
    // 0x1e97d4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e97d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e97d8:
    // 0x1e97d8: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x1e97d8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
label_1e97dc:
    // 0x1e97dc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1e97e0:
    if (ctx->pc == 0x1E97E0u) {
        ctx->pc = 0x1E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97DCu;
        // 0x1e97e0: 0x25292150  addiu       $t1, $t1, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97E4u;
        goto label_1e97e4;
    }
    ctx->pc = 0x1E97DCu;
    {
        const bool branch_taken_0x1e97dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97DCu;
        // 0x1e97e0: 0x25292150  addiu       $t1, $t1, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97dc) {
            ctx->pc = 0x1E97C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e97c4;
        }
    }
    ctx->pc = 0x1E97E4u;
label_1e97e4:
    // 0x1e97e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e97e8:
    // 0x1e97e8: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e97ec:
    // 0x1e97ec: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1e97f0:
    if (ctx->pc == 0x1E97F0u) {
        ctx->pc = 0x1E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97ECu;
        // 0x1e97f0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97F4u;
        goto label_1e97f4;
    }
    ctx->pc = 0x1E97ECu;
    {
        const bool branch_taken_0x1e97ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97ECu;
        // 0x1e97f0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97ec) {
            ctx->pc = 0x1E97B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e97b4;
        }
    }
    ctx->pc = 0x1E97F4u;
label_1e97f4:
    // 0x1e97f4: 0x0  nop
    ctx->pc = 0x1e97f4u;
    // NOP
label_1e97f8:
    // 0x1e97f8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e97fc:
    // 0x1e97fc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1e9800:
    // 0x1e9800: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e9800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e9804:
    // 0x1e9804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9808:
    // 0x1e9808: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e980c:
    if (ctx->pc == 0x1E980Cu) {
        ctx->pc = 0x1E980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9808u;
        // 0x1e980c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9810u;
        goto label_1e9810;
    }
    ctx->pc = 0x1E9808u;
    {
        const bool branch_taken_0x1e9808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9808u;
        // 0x1e980c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9808) {
            ctx->pc = 0x1E9858u;
            goto label_1e9858;
        }
    }
    ctx->pc = 0x1E9810u;
label_1e9810:
    // 0x1e9810: 0xde630270  ld          $v1, 0x270($s3)
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 624)));
label_1e9814:
    // 0x1e9814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9818:
    // 0x1e9818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e9818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e981c:
    // 0x1e981c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9820:
    // 0x1e9820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e9824:
    if (ctx->pc == 0x1E9824u) {
        ctx->pc = 0x1E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9820u;
        // 0x1e9824: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9828u;
        goto label_1e9828;
    }
    ctx->pc = 0x1E9820u;
    {
        const bool branch_taken_0x1e9820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9820u;
        // 0x1e9824: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9820) {
            ctx->pc = 0x1E983Cu;
            goto label_1e983c;
        }
    }
    ctx->pc = 0x1E9828u;
label_1e9828:
    // 0x1e9828: 0x9602005c  lhu         $v0, 0x5C($s0)
    ctx->pc = 0x1e9828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_1e982c:
    // 0x1e982c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1e982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1e9830:
    // 0x1e9830: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e9834:
    if (ctx->pc == 0x1E9834u) {
        ctx->pc = 0x1E9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9830u;
        // 0x1e9834: 0xa602005c  sh          $v0, 0x5C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9838u;
        goto label_1e9838;
    }
    ctx->pc = 0x1E9830u;
    {
        const bool branch_taken_0x1e9830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9830u;
        // 0x1e9834: 0xa602005c  sh          $v0, 0x5C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9830) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9838u;
label_1e9838:
    // 0x1e9838: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1e9838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1e983c:
    // 0x1e983c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9840:
    // 0x1e9840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e9844:
    if (ctx->pc == 0x1E9844u) {
        ctx->pc = 0x1E9848u;
        goto label_1e9848;
    }
    ctx->pc = 0x1E9840u;
    {
        const bool branch_taken_0x1e9840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9840) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9848u;
label_1e9848:
    // 0x1e9848: 0x9602005c  lhu         $v0, 0x5C($s0)
    ctx->pc = 0x1e9848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_1e984c:
    // 0x1e984c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1e9850:
    // 0x1e9850: 0xa602005c  sh          $v0, 0x5C($s0)
    ctx->pc = 0x1e9850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
label_1e9854:
    // 0x1e9854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9858:
    // 0x1e9858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e985c:
    // 0x1e985c: 0xa2030059  sb          $v1, 0x59($s0)
    ctx->pc = 0x1e985cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 3));
label_1e9860:
    // 0x1e9860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e9860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9864:
    // 0x1e9864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9868:
    // 0x1e9868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e986c:
    // 0x1e986c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e986cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9870:
    // 0x1e9870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9874:
    // 0x1e9874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9878:
    // 0x1e9878: 0x3e00008  jr          $ra
label_1e987c:
    if (ctx->pc == 0x1E987Cu) {
        ctx->pc = 0x1E987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9878u;
        // 0x1e987c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9880u;
        goto label_1e9880;
    }
    ctx->pc = 0x1E9878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9878u;
        // 0x1e987c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9880u;
label_1e9880:
    // 0x1e9880: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e9884:
    // 0x1e9884: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e9888:
    // 0x1e9888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e988c:
    // 0x1e988c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9890:
    // 0x1e9890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9894:
    // 0x1e9894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9898:
    // 0x1e9898: 0x8f91821c  lw          $s1, -0x7DE4($gp)
    ctx->pc = 0x1e9898u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e989c:
    // 0x1e989c: 0x10000112  b           . + 4 + (0x112 << 2)
label_1e98a0:
    if (ctx->pc == 0x1E98A0u) {
        ctx->pc = 0x1E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E989Cu;
        // 0x1e98a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98A4u;
        goto label_1e98a4;
    }
    ctx->pc = 0x1E989Cu;
    {
        const bool branch_taken_0x1e989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E989Cu;
        // 0x1e98a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e989c) {
            ctx->pc = 0x1E9CE8u;
            { ctx->pc = 0x1e9ce8; return; }
        }
    }
    ctx->pc = 0x1E98A4u;
label_1e98a4:
    // 0x1e98a4: 0x9222005a  lbu         $v0, 0x5A($s1)
    ctx->pc = 0x1e98a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_1e98a8:
    // 0x1e98a8: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
label_1e98ac:
    if (ctx->pc == 0x1E98ACu) {
        ctx->pc = 0x1E98B0u;
        goto label_1e98b0;
    }
    ctx->pc = 0x1E98A8u;
    {
        const bool branch_taken_0x1e98a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98a8) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E98B0u;
label_1e98b0:
    // 0x1e98b0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1e98b4:
    // 0x1e98b4: 0x10800109  beqz        $a0, . + 4 + (0x109 << 2)
label_1e98b8:
    if (ctx->pc == 0x1E98B8u) {
        ctx->pc = 0x1E98BCu;
        goto label_1e98bc;
    }
    ctx->pc = 0x1E98B4u;
    {
        const bool branch_taken_0x1e98b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98b4) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E98BCu;
label_1e98bc:
    // 0x1e98bc: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x1e98bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1e98c0:
    // 0x1e98c0: 0x2c41001a  sltiu       $at, $v0, 0x1A
    ctx->pc = 0x1e98c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_1e98c4:
    // 0x1e98c4: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
label_1e98c8:
    if (ctx->pc == 0x1E98C8u) {
        ctx->pc = 0x1E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98C4u;
        // 0x1e98c8: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98CCu;
        goto label_1e98cc;
    }
    ctx->pc = 0x1E98C4u;
    {
        const bool branch_taken_0x1e98c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98C4u;
        // 0x1e98c8: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98c4) {
            ctx->pc = 0x1E9B0Cu;
            { ctx->pc = 0x1e9b0c; return; }
        }
    }
    ctx->pc = 0x1E98CCu;
label_1e98cc:
    // 0x1e98cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e98d0:
    // 0x1e98d0: 0x2463cf50  addiu       $v1, $v1, -0x30B0
    ctx->pc = 0x1e98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954832));
label_1e98d4:
    // 0x1e98d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e98d8:
    // 0x1e98d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e98dc:
    // 0x1e98dc: 0x400008  jr          $v0
label_1e98e0:
    if (ctx->pc == 0x1E98E0u) {
        ctx->pc = 0x1E98E4u;
        goto label_1e98e4;
    }
    ctx->pc = 0x1E98DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E98E4u: goto label_1e98e4;
            case 0x1E9908u: goto label_1e9908;
            case 0x1E9928u: goto label_1e9928;
            case 0x1E9948u: goto label_1e9948;
            case 0x1E9988u: goto label_1e9988;
            case 0x1E9998u: goto label_1e9998;
            case 0x1E99B8u: goto label_1e99b8;
            case 0x1E99D8u: goto label_1e99d8;
            case 0x1E99F8u: goto label_1e99f8;
            case 0x1E9A44u: goto label_1e9a44;
            case 0x1E9A94u: { ctx->pc = 0x1e9a94; return; }
            case 0x1E9AB4u: { ctx->pc = 0x1e9ab4; return; }
            case 0x1E9AC8u: { ctx->pc = 0x1e9ac8; return; }
            case 0x1E9AD8u: { ctx->pc = 0x1e9ad8; return; }
            case 0x1E9AE8u: { ctx->pc = 0x1e9ae8; return; }
            case 0x1E9AF8u: { ctx->pc = 0x1e9af8; return; }
            case 0x1E9B0Cu: { ctx->pc = 0x1e9b0c; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E98DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E98E4u;
label_1e98e4:
    // 0x1e98e4: 0x0  nop
    ctx->pc = 0x1e98e4u;
    // NOP
label_1e98e8:
    // 0x1e98e8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e98e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e98ec:
    // 0x1e98ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e98f0:
    // 0x1e98f0: 0x146200fa  bne         $v1, $v0, . + 4 + (0xFA << 2)
label_1e98f4:
    if (ctx->pc == 0x1E98F4u) {
        ctx->pc = 0x1E98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98F0u;
        // 0x1e98f4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98F8u;
        goto label_1e98f8;
    }
    ctx->pc = 0x1E98F0u;
    {
        const bool branch_taken_0x1e98f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98F0u;
        // 0x1e98f4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98f0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E98F8u;
label_1e98f8:
    // 0x1e98f8: 0xc04629c  jal         func_118A70
label_1e98fc:
    if (ctx->pc == 0x1E98FCu) {
        ctx->pc = 0x1E9900u;
        goto label_1e9900;
    }
    ctx->pc = 0x1E98F8u;
    SET_GPR_U32(ctx, 31, 0x1E9900u);
    ctx->pc = 0x118A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A70u, 0x1E98F8u, 0x1E9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9900u;
label_1e9900:
    // 0x1e9900: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1e9904:
    if (ctx->pc == 0x1E9904u) {
        ctx->pc = 0x1E9908u;
        goto label_1e9908;
    }
    ctx->pc = 0x1E9900u;
    {
        const bool branch_taken_0x1e9900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9900) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9908u;
label_1e9908:
    // 0x1e9908: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e990c:
    // 0x1e990c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e9910:
    // 0x1e9910: 0x146200f2  bne         $v1, $v0, . + 4 + (0xF2 << 2)
label_1e9914:
    if (ctx->pc == 0x1E9914u) {
        ctx->pc = 0x1E9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9910u;
        // 0x1e9914: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9918u;
        goto label_1e9918;
    }
    ctx->pc = 0x1E9910u;
    {
        const bool branch_taken_0x1e9910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9910u;
        // 0x1e9914: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9910) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9918u;
label_1e9918:
    // 0x1e9918: 0xc04629c  jal         func_118A70
label_1e991c:
    if (ctx->pc == 0x1E991Cu) {
        ctx->pc = 0x1E9920u;
        goto label_1e9920;
    }
    ctx->pc = 0x1E9918u;
    SET_GPR_U32(ctx, 31, 0x1E9920u);
    ctx->pc = 0x118A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A70u, 0x1E9918u, 0x1E9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9920u;
label_1e9920:
    // 0x1e9920: 0x100000ee  b           . + 4 + (0xEE << 2)
label_1e9924:
    if (ctx->pc == 0x1E9924u) {
        ctx->pc = 0x1E9928u;
        goto label_1e9928;
    }
    ctx->pc = 0x1E9920u;
    {
        const bool branch_taken_0x1e9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9920) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9928u;
label_1e9928:
    // 0x1e9928: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e992c:
    // 0x1e992c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9930:
    // 0x1e9930: 0x146200ea  bne         $v1, $v0, . + 4 + (0xEA << 2)
label_1e9934:
    if (ctx->pc == 0x1E9934u) {
        ctx->pc = 0x1E9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9930u;
        // 0x1e9934: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9938u;
        goto label_1e9938;
    }
    ctx->pc = 0x1E9930u;
    {
        const bool branch_taken_0x1e9930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9930u;
        // 0x1e9934: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9930) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9938u;
label_1e9938:
    // 0x1e9938: 0xc04613c  jal         func_1184F0
label_1e993c:
    if (ctx->pc == 0x1E993Cu) {
        ctx->pc = 0x1E9940u;
        goto label_1e9940;
    }
    ctx->pc = 0x1E9938u;
    SET_GPR_U32(ctx, 31, 0x1E9940u);
    ctx->pc = 0x1184F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184F0u, 0x1E9938u, 0x1E9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9940u;
label_1e9940:
    // 0x1e9940: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1e9944:
    if (ctx->pc == 0x1E9944u) {
        ctx->pc = 0x1E9948u;
        goto label_1e9948;
    }
    ctx->pc = 0x1E9940u;
    {
        const bool branch_taken_0x1e9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9940) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9948u;
label_1e9948:
    // 0x1e9948: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e994c:
    // 0x1e994c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9950:
    // 0x1e9950: 0x146200e2  bne         $v1, $v0, . + 4 + (0xE2 << 2)
label_1e9954:
    if (ctx->pc == 0x1E9954u) {
        ctx->pc = 0x1E9958u;
        goto label_1e9958;
    }
    ctx->pc = 0x1E9950u;
    {
        const bool branch_taken_0x1e9950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9950) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9958u;
label_1e9958:
    // 0x1e9958: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1e9958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1e995c:
    // 0x1e995c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9960:
    if (ctx->pc == 0x1E9960u) {
        ctx->pc = 0x1E9964u;
        goto label_1e9964;
    }
    ctx->pc = 0x1E995Cu;
    {
        const bool branch_taken_0x1e995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e995c) {
            ctx->pc = 0x1E9974u;
            goto label_1e9974;
        }
    }
    ctx->pc = 0x1E9964u;
label_1e9964:
    // 0x1e9964: 0xc045f6c  jal         func_117DB0
label_1e9968:
    if (ctx->pc == 0x1E9968u) {
        ctx->pc = 0x1E9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9964u;
        // 0x1e9968: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E996Cu;
        goto label_1e996c;
    }
    ctx->pc = 0x1E9964u;
    SET_GPR_U32(ctx, 31, 0x1E996Cu);
    ctx->pc = 0x1E9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9964u;
    // 0x1e9968: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117DB0u, 0x1E9964u, 0x1E996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E996Cu;
label_1e996c:
    // 0x1e996c: 0x100000db  b           . + 4 + (0xDB << 2)
label_1e9970:
    if (ctx->pc == 0x1E9970u) {
        ctx->pc = 0x1E9974u;
        goto label_1e9974;
    }
    ctx->pc = 0x1E996Cu;
    {
        const bool branch_taken_0x1e996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e996c) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9974u;
label_1e9974:
    // 0x1e9974: 0x0  nop
    ctx->pc = 0x1e9974u;
    // NOP
label_1e9978:
    // 0x1e9978: 0xc045f48  jal         func_117D20
label_1e997c:
    if (ctx->pc == 0x1E997Cu) {
        ctx->pc = 0x1E997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9978u;
        // 0x1e997c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9980u;
        goto label_1e9980;
    }
    ctx->pc = 0x1E9978u;
    SET_GPR_U32(ctx, 31, 0x1E9980u);
    ctx->pc = 0x1E997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9978u;
    // 0x1e997c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D20u, 0x1E9978u, 0x1E9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9980u;
label_1e9980:
    // 0x1e9980: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_1e9984:
    if (ctx->pc == 0x1E9984u) {
        ctx->pc = 0x1E9988u;
        goto label_1e9988;
    }
    ctx->pc = 0x1E9980u;
    {
        const bool branch_taken_0x1e9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9980) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9988u;
label_1e9988:
    // 0x1e9988: 0xc045dc4  jal         func_117710
label_1e998c:
    if (ctx->pc == 0x1E998Cu) {
        ctx->pc = 0x1E998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9988u;
        // 0x1e998c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9990u;
        goto label_1e9990;
    }
    ctx->pc = 0x1E9988u;
    SET_GPR_U32(ctx, 31, 0x1E9990u);
    ctx->pc = 0x1E998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9988u;
    // 0x1e998c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117710u, 0x1E9988u, 0x1E9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9990u;
label_1e9990:
    // 0x1e9990: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1e9994:
    if (ctx->pc == 0x1E9994u) {
        ctx->pc = 0x1E9998u;
        goto label_1e9998;
    }
    ctx->pc = 0x1E9990u;
    {
        const bool branch_taken_0x1e9990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9990) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9998u;
label_1e9998:
    // 0x1e9998: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e999c:
    // 0x1e999c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e99a0:
    // 0x1e99a0: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
label_1e99a4:
    if (ctx->pc == 0x1E99A4u) {
        ctx->pc = 0x1E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A0u;
        // 0x1e99a4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99A8u;
        goto label_1e99a8;
    }
    ctx->pc = 0x1E99A0u;
    {
        const bool branch_taken_0x1e99a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A0u;
        // 0x1e99a4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99a0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99A8u;
label_1e99a8:
    // 0x1e99a8: 0xc045db4  jal         func_1176D0
label_1e99ac:
    if (ctx->pc == 0x1E99ACu) {
        ctx->pc = 0x1E99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A8u;
        // 0x1e99ac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99B0u;
        goto label_1e99b0;
    }
    ctx->pc = 0x1E99A8u;
    SET_GPR_U32(ctx, 31, 0x1E99B0u);
    ctx->pc = 0x1E99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99A8u;
    // 0x1e99ac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1176D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176D0u, 0x1E99A8u, 0x1E99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99B0u;
label_1e99b0:
    // 0x1e99b0: 0x100000ca  b           . + 4 + (0xCA << 2)
label_1e99b4:
    if (ctx->pc == 0x1E99B4u) {
        ctx->pc = 0x1E99B8u;
        goto label_1e99b8;
    }
    ctx->pc = 0x1E99B0u;
    {
        const bool branch_taken_0x1e99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99b0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99B8u;
label_1e99b8:
    // 0x1e99b8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99bc:
    // 0x1e99bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e99c0:
    // 0x1e99c0: 0x146200c6  bne         $v1, $v0, . + 4 + (0xC6 << 2)
label_1e99c4:
    if (ctx->pc == 0x1E99C4u) {
        ctx->pc = 0x1E99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C0u;
        // 0x1e99c4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99C8u;
        goto label_1e99c8;
    }
    ctx->pc = 0x1E99C0u;
    {
        const bool branch_taken_0x1e99c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C0u;
        // 0x1e99c4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99c0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99C8u;
label_1e99c8:
    // 0x1e99c8: 0xc04610c  jal         func_118430
label_1e99cc:
    if (ctx->pc == 0x1E99CCu) {
        ctx->pc = 0x1E99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C8u;
        // 0x1e99cc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99D0u;
        goto label_1e99d0;
    }
    ctx->pc = 0x1E99C8u;
    SET_GPR_U32(ctx, 31, 0x1E99D0u);
    ctx->pc = 0x1E99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99C8u;
    // 0x1e99cc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118430u, 0x1E99C8u, 0x1E99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99D0u;
label_1e99d0:
    // 0x1e99d0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1e99d4:
    if (ctx->pc == 0x1E99D4u) {
        ctx->pc = 0x1E99D8u;
        goto label_1e99d8;
    }
    ctx->pc = 0x1E99D0u;
    {
        const bool branch_taken_0x1e99d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99d0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99D8u;
label_1e99d8:
    // 0x1e99d8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99dc:
    // 0x1e99dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e99e0:
    // 0x1e99e0: 0x146200be  bne         $v1, $v0, . + 4 + (0xBE << 2)
label_1e99e4:
    if (ctx->pc == 0x1E99E4u) {
        ctx->pc = 0x1E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E0u;
        // 0x1e99e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99E8u;
        goto label_1e99e8;
    }
    ctx->pc = 0x1E99E0u;
    {
        const bool branch_taken_0x1e99e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E0u;
        // 0x1e99e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99E8u;
label_1e99e8:
    // 0x1e99e8: 0xc045dbc  jal         func_1176F0
label_1e99ec:
    if (ctx->pc == 0x1E99ECu) {
        ctx->pc = 0x1E99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E8u;
        // 0x1e99ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99F0u;
        goto label_1e99f0;
    }
    ctx->pc = 0x1E99E8u;
    SET_GPR_U32(ctx, 31, 0x1E99F0u);
    ctx->pc = 0x1E99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99E8u;
    // 0x1e99ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1176F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176F0u, 0x1E99E8u, 0x1E99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99F0u;
label_1e99f0:
    // 0x1e99f0: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1e99f4:
    if (ctx->pc == 0x1E99F4u) {
        ctx->pc = 0x1E99F8u;
        goto label_1e99f8;
    }
    ctx->pc = 0x1E99F0u;
    {
        const bool branch_taken_0x1e99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99f0) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E99F8u;
label_1e99f8:
    // 0x1e99f8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99fc:
    // 0x1e99fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9a00:
    // 0x1e9a00: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1e9a04:
    if (ctx->pc == 0x1E9A04u) {
        ctx->pc = 0x1E9A08u;
        goto label_1e9a08;
    }
    ctx->pc = 0x1E9A00u;
    {
        const bool branch_taken_0x1e9a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9a00) {
            ctx->pc = 0x1E9A30u;
            goto label_1e9a30;
        }
    }
    ctx->pc = 0x1E9A08u;
label_1e9a08:
    // 0x1e9a08: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1e9a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1e9a0c:
    // 0x1e9a0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9a10:
    if (ctx->pc == 0x1E9A10u) {
        ctx->pc = 0x1E9A14u;
        goto label_1e9a14;
    }
    ctx->pc = 0x1E9A0Cu;
    {
        const bool branch_taken_0x1e9a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a0c) {
            ctx->pc = 0x1E9A24u;
            goto label_1e9a24;
        }
    }
    ctx->pc = 0x1E9A14u;
label_1e9a14:
    // 0x1e9a14: 0xc045f28  jal         func_117CA0
label_1e9a18:
    if (ctx->pc == 0x1E9A18u) {
        ctx->pc = 0x1E9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A14u;
        // 0x1e9a18: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A1Cu;
        goto label_1e9a1c;
    }
    ctx->pc = 0x1E9A14u;
    SET_GPR_U32(ctx, 31, 0x1E9A1Cu);
    ctx->pc = 0x1E9A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A14u;
    // 0x1e9a18: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CA0u, 0x1E9A14u, 0x1E9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A1Cu;
label_1e9a1c:
    // 0x1e9a1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e9a20:
    if (ctx->pc == 0x1E9A20u) {
        ctx->pc = 0x1E9A24u;
        goto label_1e9a24;
    }
    ctx->pc = 0x1E9A1Cu;
    {
        const bool branch_taken_0x1e9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a1c) {
            ctx->pc = 0x1E9A30u;
            goto label_1e9a30;
        }
    }
    ctx->pc = 0x1E9A24u;
label_1e9a24:
    // 0x1e9a24: 0x0  nop
    ctx->pc = 0x1e9a24u;
    // NOP
label_1e9a28:
    // 0x1e9a28: 0xc045f20  jal         func_117C80
label_1e9a2c:
    if (ctx->pc == 0x1E9A2Cu) {
        ctx->pc = 0x1E9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A28u;
        // 0x1e9a2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A30u;
        goto label_1e9a30;
    }
    ctx->pc = 0x1E9A28u;
    SET_GPR_U32(ctx, 31, 0x1E9A30u);
    ctx->pc = 0x1E9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A28u;
    // 0x1e9a2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1E9A28u, 0x1E9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A30u;
label_1e9a30:
    // 0x1e9a30: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9a34:
    // 0x1e9a34: 0xc045f3c  jal         func_117CF0
label_1e9a38:
    if (ctx->pc == 0x1E9A38u) {
        ctx->pc = 0x1E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A34u;
        // 0x1e9a38: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A3Cu;
        goto label_1e9a3c;
    }
    ctx->pc = 0x1E9A34u;
    SET_GPR_U32(ctx, 31, 0x1E9A3Cu);
    ctx->pc = 0x1E9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A34u;
    // 0x1e9a38: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CF0u, 0x1E9A34u, 0x1E9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A3Cu;
label_1e9a3c:
    // 0x1e9a3c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1e9a40:
    if (ctx->pc == 0x1E9A40u) {
        ctx->pc = 0x1E9A44u;
        goto label_1e9a44;
    }
    ctx->pc = 0x1E9A3Cu;
    {
        const bool branch_taken_0x1e9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a3c) {
            ctx->pc = 0x1E9CDCu;
            { ctx->pc = 0x1e9cdc; return; }
        }
    }
    ctx->pc = 0x1E9A44u;
label_1e9a44:
    // 0x1e9a44: 0x0  nop
    ctx->pc = 0x1e9a44u;
    // NOP
label_1e9a48:
    // 0x1e9a48: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e9a4c:
    // 0x1e9a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9a50:
    // 0x1e9a50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1e9a54:
    if (ctx->pc == 0x1E9A54u) {
        ctx->pc = 0x1E9A58u;
        goto label_1e9a58;
    }
    ctx->pc = 0x1E9A50u;
    {
        const bool branch_taken_0x1e9a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9a50) {
            ctx->pc = 0x1E9A80u;
            { ctx->pc = 0x1e9a80; return; }
        }
    }
    ctx->pc = 0x1E9A58u;
label_1e9a58:
    // 0x1e9a58: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1e9a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1e9a5c:
    // 0x1e9a5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9a60:
    if (ctx->pc == 0x1E9A60u) {
        ctx->pc = 0x1E9A64u;
        goto label_1e9a64;
    }
    ctx->pc = 0x1E9A5Cu;
    {
        const bool branch_taken_0x1e9a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a5c) {
            ctx->pc = 0x1E9A74u;
            { ctx->pc = 0x1e9a74; return; }
        }
    }
    ctx->pc = 0x1E9A64u;
label_1e9a64:
    // 0x1e9a64: 0xc045f18  jal         func_117C60
    ctx->pc = 0x1e9a68u;
    return;
}

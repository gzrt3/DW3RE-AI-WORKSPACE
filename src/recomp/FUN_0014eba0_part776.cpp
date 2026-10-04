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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part776(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c9258u: goto label_2c9258;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c9260u: goto label_2c9260;
        case 0x2c9264u: goto label_2c9264;
        case 0x2c9268u: goto label_2c9268;
        case 0x2c926cu: goto label_2c926c;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c9274u: goto label_2c9274;
        case 0x2c9278u: goto label_2c9278;
        case 0x2c927cu: goto label_2c927c;
        case 0x2c9280u: goto label_2c9280;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c9288u: goto label_2c9288;
        case 0x2c928cu: goto label_2c928c;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c9294u: goto label_2c9294;
        case 0x2c9298u: goto label_2c9298;
        case 0x2c929cu: goto label_2c929c;
        case 0x2c92a0u: goto label_2c92a0;
        case 0x2c92a4u: goto label_2c92a4;
        case 0x2c92a8u: goto label_2c92a8;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b0u: goto label_2c92b0;
        case 0x2c92b4u: goto label_2c92b4;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92bcu: goto label_2c92bc;
        case 0x2c92c0u: goto label_2c92c0;
        case 0x2c92c4u: goto label_2c92c4;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92ccu: goto label_2c92cc;
        case 0x2c92d0u: goto label_2c92d0;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92d8u: goto label_2c92d8;
        case 0x2c92dcu: goto label_2c92dc;
        case 0x2c92e0u: goto label_2c92e0;
        case 0x2c92e4u: goto label_2c92e4;
        case 0x2c92e8u: goto label_2c92e8;
        case 0x2c92ecu: goto label_2c92ec;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c92f4u: goto label_2c92f4;
        case 0x2c92f8u: goto label_2c92f8;
        case 0x2c92fcu: goto label_2c92fc;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c9304u: goto label_2c9304;
        case 0x2c9308u: goto label_2c9308;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9310u: goto label_2c9310;
        case 0x2c9314u: goto label_2c9314;
        case 0x2c9318u: goto label_2c9318;
        case 0x2c931cu: goto label_2c931c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9324u: goto label_2c9324;
        case 0x2c9328u: goto label_2c9328;
        case 0x2c932cu: goto label_2c932c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9334u: goto label_2c9334;
        case 0x2c9338u: goto label_2c9338;
        case 0x2c933cu: goto label_2c933c;
        case 0x2c9340u: goto label_2c9340;
        case 0x2c9344u: goto label_2c9344;
        case 0x2c9348u: goto label_2c9348;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c9354u: goto label_2c9354;
        case 0x2c9358u: goto label_2c9358;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9364u: goto label_2c9364;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c9370u: goto label_2c9370;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9380u: goto label_2c9380;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c9390u: goto label_2c9390;
        case 0x2c9394u: goto label_2c9394;
        case 0x2c9398u: goto label_2c9398;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c93a4u: goto label_2c93a4;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c93acu: goto label_2c93ac;
        case 0x2c93b0u: goto label_2c93b0;
        case 0x2c93b4u: goto label_2c93b4;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93bcu: goto label_2c93bc;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93c4u: goto label_2c93c4;
        case 0x2c93c8u: goto label_2c93c8;
        case 0x2c93ccu: goto label_2c93cc;
        case 0x2c93d0u: goto label_2c93d0;
        case 0x2c93d4u: goto label_2c93d4;
        case 0x2c93d8u: goto label_2c93d8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93e0u: goto label_2c93e0;
        case 0x2c93e4u: goto label_2c93e4;
        case 0x2c93e8u: goto label_2c93e8;
        case 0x2c93ecu: goto label_2c93ec;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c93f4u: goto label_2c93f4;
        case 0x2c93f8u: goto label_2c93f8;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c9404u: goto label_2c9404;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c9414u: goto label_2c9414;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c9420u: goto label_2c9420;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9428u: goto label_2c9428;
        case 0x2c942cu: goto label_2c942c;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9434u: goto label_2c9434;
        case 0x2c9438u: goto label_2c9438;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9440u: goto label_2c9440;
        case 0x2c9444u: goto label_2c9444;
        case 0x2c9448u: goto label_2c9448;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9450u: goto label_2c9450;
        case 0x2c9454u: goto label_2c9454;
        case 0x2c9458u: goto label_2c9458;
        case 0x2c945cu: goto label_2c945c;
        case 0x2c9460u: goto label_2c9460;
        case 0x2c9464u: goto label_2c9464;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9470u: goto label_2c9470;
        case 0x2c9474u: goto label_2c9474;
        case 0x2c9478u: goto label_2c9478;
        case 0x2c947cu: goto label_2c947c;
        case 0x2c9480u: goto label_2c9480;
        case 0x2c9484u: goto label_2c9484;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c948cu: goto label_2c948c;
        case 0x2c9490u: goto label_2c9490;
        case 0x2c9494u: goto label_2c9494;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c949cu: goto label_2c949c;
        case 0x2c94a0u: goto label_2c94a0;
        case 0x2c94a4u: goto label_2c94a4;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94acu: goto label_2c94ac;
        case 0x2c94b0u: goto label_2c94b0;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94b8u: goto label_2c94b8;
        case 0x2c94bcu: goto label_2c94bc;
        case 0x2c94c0u: goto label_2c94c0;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c94c8u: goto label_2c94c8;
        case 0x2c94ccu: goto label_2c94cc;
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        case 0x2c94e0u: goto label_2c94e0;
        case 0x2c94e4u: goto label_2c94e4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c94ecu: goto label_2c94ec;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c94f8u: goto label_2c94f8;
        case 0x2c94fcu: goto label_2c94fc;
        case 0x2c9500u: goto label_2c9500;
        case 0x2c9504u: goto label_2c9504;
        case 0x2c9508u: goto label_2c9508;
        case 0x2c950cu: goto label_2c950c;
        case 0x2c9510u: goto label_2c9510;
        case 0x2c9514u: goto label_2c9514;
        case 0x2c9518u: goto label_2c9518;
        case 0x2c951cu: goto label_2c951c;
        case 0x2c9520u: goto label_2c9520;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c9528u: goto label_2c9528;
        case 0x2c952cu: goto label_2c952c;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c9538u: goto label_2c9538;
        case 0x2c953cu: goto label_2c953c;
        case 0x2c9540u: goto label_2c9540;
        case 0x2c9544u: goto label_2c9544;
        case 0x2c9548u: goto label_2c9548;
        case 0x2c954cu: goto label_2c954c;
        case 0x2c9550u: goto label_2c9550;
        case 0x2c9554u: goto label_2c9554;
        case 0x2c9558u: goto label_2c9558;
        case 0x2c955cu: goto label_2c955c;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9564u: goto label_2c9564;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c956cu: goto label_2c956c;
        case 0x2c9570u: goto label_2c9570;
        case 0x2c9574u: goto label_2c9574;
        case 0x2c9578u: goto label_2c9578;
        case 0x2c957cu: goto label_2c957c;
        case 0x2c9580u: goto label_2c9580;
        case 0x2c9584u: goto label_2c9584;
        case 0x2c9588u: goto label_2c9588;
        case 0x2c958cu: goto label_2c958c;
        case 0x2c9590u: goto label_2c9590;
        case 0x2c9594u: goto label_2c9594;
        case 0x2c9598u: goto label_2c9598;
        case 0x2c959cu: goto label_2c959c;
        case 0x2c95a0u: goto label_2c95a0;
        case 0x2c95a4u: goto label_2c95a4;
        case 0x2c95a8u: goto label_2c95a8;
        case 0x2c95acu: goto label_2c95ac;
        case 0x2c95b0u: goto label_2c95b0;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c95bcu: goto label_2c95bc;
        case 0x2c95c0u: goto label_2c95c0;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c95ccu: goto label_2c95cc;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        case 0x2c95f8u: goto label_2c95f8;
        case 0x2c95fcu: goto label_2c95fc;
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9604u: goto label_2c9604;
        case 0x2c9608u: goto label_2c9608;
        case 0x2c960cu: goto label_2c960c;
        case 0x2c9610u: goto label_2c9610;
        case 0x2c9614u: goto label_2c9614;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c961cu: goto label_2c961c;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9624u: goto label_2c9624;
        case 0x2c9628u: goto label_2c9628;
        case 0x2c962cu: goto label_2c962c;
        case 0x2c9630u: goto label_2c9630;
        case 0x2c9634u: goto label_2c9634;
        case 0x2c9638u: goto label_2c9638;
        case 0x2c963cu: goto label_2c963c;
        case 0x2c9640u: goto label_2c9640;
        case 0x2c9644u: goto label_2c9644;
        case 0x2c9648u: goto label_2c9648;
        case 0x2c964cu: goto label_2c964c;
        case 0x2c9650u: goto label_2c9650;
        case 0x2c9654u: goto label_2c9654;
        case 0x2c9658u: goto label_2c9658;
        case 0x2c965cu: goto label_2c965c;
        case 0x2c9660u: goto label_2c9660;
        case 0x2c9664u: goto label_2c9664;
        case 0x2c9668u: goto label_2c9668;
        case 0x2c966cu: goto label_2c966c;
        case 0x2c9670u: goto label_2c9670;
        case 0x2c9674u: goto label_2c9674;
        case 0x2c9678u: goto label_2c9678;
        case 0x2c967cu: goto label_2c967c;
        case 0x2c9680u: goto label_2c9680;
        case 0x2c9684u: goto label_2c9684;
        case 0x2c9688u: goto label_2c9688;
        case 0x2c968cu: goto label_2c968c;
        case 0x2c9690u: goto label_2c9690;
        case 0x2c9694u: goto label_2c9694;
        case 0x2c9698u: goto label_2c9698;
        case 0x2c969cu: goto label_2c969c;
        case 0x2c96a0u: goto label_2c96a0;
        case 0x2c96a4u: goto label_2c96a4;
        case 0x2c96a8u: goto label_2c96a8;
        case 0x2c96acu: goto label_2c96ac;
        case 0x2c96b0u: goto label_2c96b0;
        case 0x2c96b4u: goto label_2c96b4;
        case 0x2c96b8u: goto label_2c96b8;
        case 0x2c96bcu: goto label_2c96bc;
        case 0x2c96c0u: goto label_2c96c0;
        case 0x2c96c4u: goto label_2c96c4;
        case 0x2c96c8u: goto label_2c96c8;
        case 0x2c96ccu: goto label_2c96cc;
        case 0x2c96d0u: goto label_2c96d0;
        case 0x2c96d4u: goto label_2c96d4;
        case 0x2c96d8u: goto label_2c96d8;
        case 0x2c96dcu: goto label_2c96dc;
        case 0x2c96e0u: goto label_2c96e0;
        case 0x2c96e4u: goto label_2c96e4;
        case 0x2c96e8u: goto label_2c96e8;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c96f0u: goto label_2c96f0;
        case 0x2c96f4u: goto label_2c96f4;
        case 0x2c96f8u: goto label_2c96f8;
        case 0x2c96fcu: goto label_2c96fc;
        case 0x2c9700u: goto label_2c9700;
        case 0x2c9704u: goto label_2c9704;
        case 0x2c9708u: goto label_2c9708;
        case 0x2c970cu: goto label_2c970c;
        case 0x2c9710u: goto label_2c9710;
        case 0x2c9714u: goto label_2c9714;
        case 0x2c9718u: goto label_2c9718;
        case 0x2c971cu: goto label_2c971c;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9724u: goto label_2c9724;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c972cu: goto label_2c972c;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9734u: goto label_2c9734;
        case 0x2c9738u: goto label_2c9738;
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9740u: goto label_2c9740;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9748u: goto label_2c9748;
        case 0x2c974cu: goto label_2c974c;
        case 0x2c9750u: goto label_2c9750;
        case 0x2c9754u: goto label_2c9754;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c975cu: goto label_2c975c;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9764u: goto label_2c9764;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c977cu: goto label_2c977c;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c9784u: goto label_2c9784;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c978cu: goto label_2c978c;
        case 0x2c9790u: goto label_2c9790;
        case 0x2c9794u: goto label_2c9794;
        case 0x2c9798u: goto label_2c9798;
        case 0x2c979cu: goto label_2c979c;
        case 0x2c97a0u: goto label_2c97a0;
        case 0x2c97a4u: goto label_2c97a4;
        case 0x2c97a8u: goto label_2c97a8;
        case 0x2c97acu: goto label_2c97ac;
        case 0x2c97b0u: goto label_2c97b0;
        case 0x2c97b4u: goto label_2c97b4;
        case 0x2c97b8u: goto label_2c97b8;
        case 0x2c97bcu: goto label_2c97bc;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c97c4u: goto label_2c97c4;
        case 0x2c97c8u: goto label_2c97c8;
        case 0x2c97ccu: goto label_2c97cc;
        case 0x2c97d0u: goto label_2c97d0;
        case 0x2c97d4u: goto label_2c97d4;
        case 0x2c97d8u: goto label_2c97d8;
        case 0x2c97dcu: goto label_2c97dc;
        case 0x2c97e0u: goto label_2c97e0;
        case 0x2c97e4u: goto label_2c97e4;
        case 0x2c97e8u: goto label_2c97e8;
        case 0x2c97ecu: goto label_2c97ec;
        case 0x2c97f0u: goto label_2c97f0;
        case 0x2c97f4u: goto label_2c97f4;
        case 0x2c97f8u: goto label_2c97f8;
        case 0x2c97fcu: goto label_2c97fc;
        case 0x2c9800u: goto label_2c9800;
        case 0x2c9804u: goto label_2c9804;
        case 0x2c9808u: goto label_2c9808;
        case 0x2c980cu: goto label_2c980c;
        case 0x2c9810u: goto label_2c9810;
        case 0x2c9814u: goto label_2c9814;
        case 0x2c9818u: goto label_2c9818;
        case 0x2c981cu: goto label_2c981c;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c9824u: goto label_2c9824;
        case 0x2c9828u: goto label_2c9828;
        case 0x2c982cu: goto label_2c982c;
        case 0x2c9830u: goto label_2c9830;
        case 0x2c9834u: goto label_2c9834;
        case 0x2c9838u: goto label_2c9838;
        case 0x2c983cu: goto label_2c983c;
        case 0x2c9840u: goto label_2c9840;
        case 0x2c9844u: goto label_2c9844;
        case 0x2c9848u: goto label_2c9848;
        case 0x2c984cu: goto label_2c984c;
        case 0x2c9850u: goto label_2c9850;
        case 0x2c9854u: goto label_2c9854;
        case 0x2c9858u: goto label_2c9858;
        case 0x2c985cu: goto label_2c985c;
        case 0x2c9860u: goto label_2c9860;
        case 0x2c9864u: goto label_2c9864;
        case 0x2c9868u: goto label_2c9868;
        case 0x2c986cu: goto label_2c986c;
        case 0x2c9870u: goto label_2c9870;
        case 0x2c9874u: goto label_2c9874;
        case 0x2c9878u: goto label_2c9878;
        case 0x2c987cu: goto label_2c987c;
        case 0x2c9880u: goto label_2c9880;
        case 0x2c9884u: goto label_2c9884;
        case 0x2c9888u: goto label_2c9888;
        case 0x2c988cu: goto label_2c988c;
        case 0x2c9890u: goto label_2c9890;
        case 0x2c9894u: goto label_2c9894;
        case 0x2c9898u: goto label_2c9898;
        case 0x2c989cu: goto label_2c989c;
        case 0x2c98a0u: goto label_2c98a0;
        case 0x2c98a4u: goto label_2c98a4;
        case 0x2c98a8u: goto label_2c98a8;
        case 0x2c98acu: goto label_2c98ac;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98b4u: goto label_2c98b4;
        case 0x2c98b8u: goto label_2c98b8;
        case 0x2c98bcu: goto label_2c98bc;
        case 0x2c98c0u: goto label_2c98c0;
        case 0x2c98c4u: goto label_2c98c4;
        case 0x2c98c8u: goto label_2c98c8;
        case 0x2c98ccu: goto label_2c98cc;
        case 0x2c98d0u: goto label_2c98d0;
        case 0x2c98d4u: goto label_2c98d4;
        case 0x2c98d8u: goto label_2c98d8;
        case 0x2c98dcu: goto label_2c98dc;
        case 0x2c98e0u: goto label_2c98e0;
        case 0x2c98e4u: goto label_2c98e4;
        case 0x2c98e8u: goto label_2c98e8;
        case 0x2c98ecu: goto label_2c98ec;
        case 0x2c98f0u: goto label_2c98f0;
        case 0x2c98f4u: goto label_2c98f4;
        case 0x2c98f8u: goto label_2c98f8;
        case 0x2c98fcu: goto label_2c98fc;
        case 0x2c9900u: goto label_2c9900;
        case 0x2c9904u: goto label_2c9904;
        case 0x2c9908u: goto label_2c9908;
        case 0x2c990cu: goto label_2c990c;
        case 0x2c9910u: goto label_2c9910;
        case 0x2c9914u: goto label_2c9914;
        case 0x2c9918u: goto label_2c9918;
        case 0x2c991cu: goto label_2c991c;
        case 0x2c9920u: goto label_2c9920;
        case 0x2c9924u: goto label_2c9924;
        case 0x2c9928u: goto label_2c9928;
        case 0x2c992cu: goto label_2c992c;
        case 0x2c9930u: goto label_2c9930;
        case 0x2c9934u: goto label_2c9934;
        case 0x2c9938u: goto label_2c9938;
        case 0x2c993cu: goto label_2c993c;
        case 0x2c9940u: goto label_2c9940;
        case 0x2c9944u: goto label_2c9944;
        case 0x2c9948u: goto label_2c9948;
        case 0x2c994cu: goto label_2c994c;
        case 0x2c9950u: goto label_2c9950;
        case 0x2c9954u: goto label_2c9954;
        case 0x2c9958u: goto label_2c9958;
        case 0x2c995cu: goto label_2c995c;
        case 0x2c9960u: goto label_2c9960;
        case 0x2c9964u: goto label_2c9964;
        case 0x2c9968u: goto label_2c9968;
        case 0x2c996cu: goto label_2c996c;
        case 0x2c9970u: goto label_2c9970;
        case 0x2c9974u: goto label_2c9974;
        case 0x2c9978u: goto label_2c9978;
        case 0x2c997cu: goto label_2c997c;
        case 0x2c9980u: goto label_2c9980;
        case 0x2c9984u: goto label_2c9984;
        case 0x2c9988u: goto label_2c9988;
        case 0x2c998cu: goto label_2c998c;
        case 0x2c9990u: goto label_2c9990;
        case 0x2c9994u: goto label_2c9994;
        case 0x2c9998u: goto label_2c9998;
        case 0x2c999cu: goto label_2c999c;
        case 0x2c99a0u: goto label_2c99a0;
        case 0x2c99a4u: goto label_2c99a4;
        case 0x2c99a8u: goto label_2c99a8;
        case 0x2c99acu: goto label_2c99ac;
        case 0x2c99b0u: goto label_2c99b0;
        case 0x2c99b4u: goto label_2c99b4;
        case 0x2c99b8u: goto label_2c99b8;
        case 0x2c99bcu: goto label_2c99bc;
        case 0x2c99c0u: goto label_2c99c0;
        case 0x2c99c4u: goto label_2c99c4;
        case 0x2c99c8u: goto label_2c99c8;
        case 0x2c99ccu: goto label_2c99cc;
        case 0x2c99d0u: goto label_2c99d0;
        case 0x2c99d4u: goto label_2c99d4;
        case 0x2c99d8u: goto label_2c99d8;
        case 0x2c99dcu: goto label_2c99dc;
        case 0x2c99e0u: goto label_2c99e0;
        case 0x2c99e4u: goto label_2c99e4;
        case 0x2c99e8u: goto label_2c99e8;
        case 0x2c99ecu: goto label_2c99ec;
        case 0x2c99f0u: goto label_2c99f0;
        case 0x2c99f4u: goto label_2c99f4;
        case 0x2c99f8u: goto label_2c99f8;
        case 0x2c99fcu: goto label_2c99fc;
        case 0x2c9a00u: goto label_2c9a00;
        case 0x2c9a04u: goto label_2c9a04;
        case 0x2c9a08u: goto label_2c9a08;
        case 0x2c9a0cu: goto label_2c9a0c;
        case 0x2c9a10u: goto label_2c9a10;
        case 0x2c9a14u: goto label_2c9a14;
        case 0x2c9a18u: goto label_2c9a18;
        case 0x2c9a1cu: goto label_2c9a1c;
        default: return;
    }

label_2c9250:
    // 0x2c9250: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9250u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9254:
    // 0x2c9254: 0x0  nop
    ctx->pc = 0x2c9254u;
    // NOP
label_2c9258:
    // 0x2c9258: 0x0  nop
    ctx->pc = 0x2c9258u;
    // NOP
label_2c925c:
    // 0x2c925c: 0x0  nop
    ctx->pc = 0x2c925cu;
    // NOP
label_2c9260:
    // 0x2c9260: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9264:
    if (ctx->pc == 0x2C9264u) {
        ctx->pc = 0x2C9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9260u;
        // 0x2c9264: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9264 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9268u;
        goto label_2c9268;
    }
    ctx->pc = 0x2C9260u;
    {
        const bool branch_taken_0x2c9260 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9260) {
            ctx->pc = 0x2C9264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9260u;
            // 0x2c9264: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9264 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7D4u;
            return;
        }
    }
    ctx->pc = 0x2C9268u;
label_2c9268:
    // 0x2c9268: 0x5f30304d  .word       0x5F30304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_2c926c:
    if (ctx->pc == 0x2C926Cu) {
        ctx->pc = 0x2C926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9268u;
        // 0x2c926c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C926C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9270u;
        goto label_2c9270;
    }
    ctx->pc = 0x2C9268u;
    {
        const bool branch_taken_0x2c9268 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9268) {
            ctx->pc = 0x2C926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9268u;
            // 0x2c926c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C926C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53A0u;
            return;
        }
    }
    ctx->pc = 0x2C9270u;
label_2c9270:
    // 0x2c9270: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9270u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9274:
    // 0x2c9274: 0x0  nop
    ctx->pc = 0x2c9274u;
    // NOP
label_2c9278:
    // 0x2c9278: 0x0  nop
    ctx->pc = 0x2c9278u;
    // NOP
label_2c927c:
    // 0x2c927c: 0x0  nop
    ctx->pc = 0x2c927cu;
    // NOP
label_2c9280:
    // 0x2c9280: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9284:
    if (ctx->pc == 0x2C9284u) {
        ctx->pc = 0x2C9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9280u;
        // 0x2c9284: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9284 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9288u;
        goto label_2c9288;
    }
    ctx->pc = 0x2C9280u;
    {
        const bool branch_taken_0x2c9280 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9280) {
            ctx->pc = 0x2C9284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9280u;
            // 0x2c9284: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9284 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7F4u;
            return;
        }
    }
    ctx->pc = 0x2C9288u;
label_2c9288:
    // 0x2c9288: 0x5f31304d  .word       0x5F31304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c928c:
    if (ctx->pc == 0x2C928Cu) {
        ctx->pc = 0x2C928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9288u;
        // 0x2c928c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C928C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9290u;
        goto label_2c9290;
    }
    ctx->pc = 0x2C9288u;
    {
        const bool branch_taken_0x2c9288 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9288) {
            ctx->pc = 0x2C928Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9288u;
            // 0x2c928c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C928C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53C0u;
            return;
        }
    }
    ctx->pc = 0x2C9290u;
label_2c9290:
    // 0x2c9290: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9290u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9294:
    // 0x2c9294: 0x0  nop
    ctx->pc = 0x2c9294u;
    // NOP
label_2c9298:
    // 0x2c9298: 0x0  nop
    ctx->pc = 0x2c9298u;
    // NOP
label_2c929c:
    // 0x2c929c: 0x0  nop
    ctx->pc = 0x2c929cu;
    // NOP
label_2c92a0:
    // 0x2c92a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c92a4:
    if (ctx->pc == 0x2C92A4u) {
        ctx->pc = 0x2C92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92A0u;
        // 0x2c92a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C92A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92A8u;
        goto label_2c92a8;
    }
    ctx->pc = 0x2C92A0u;
    {
        const bool branch_taken_0x2c92a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c92a0) {
            ctx->pc = 0x2C92A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92A0u;
            // 0x2c92a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C92A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC814u;
            return;
        }
    }
    ctx->pc = 0x2C92A8u;
label_2c92a8:
    // 0x2c92a8: 0x5f31304d  .word       0x5F31304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c92ac:
    if (ctx->pc == 0x2C92ACu) {
        ctx->pc = 0x2C92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92A8u;
        // 0x2c92ac: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C92AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92B0u;
        goto label_2c92b0;
    }
    ctx->pc = 0x2C92A8u;
    {
        const bool branch_taken_0x2c92a8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c92a8) {
            ctx->pc = 0x2C92ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92A8u;
            // 0x2c92ac: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C92AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53E0u;
            return;
        }
    }
    ctx->pc = 0x2C92B0u;
label_2c92b0:
    // 0x2c92b0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c92b0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c92b4:
    // 0x2c92b4: 0x0  nop
    ctx->pc = 0x2c92b4u;
    // NOP
label_2c92b8:
    // 0x2c92b8: 0x0  nop
    ctx->pc = 0x2c92b8u;
    // NOP
label_2c92bc:
    // 0x2c92bc: 0x0  nop
    ctx->pc = 0x2c92bcu;
    // NOP
label_2c92c0:
    // 0x2c92c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c92c4:
    if (ctx->pc == 0x2C92C4u) {
        ctx->pc = 0x2C92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92C0u;
        // 0x2c92c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C92C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92C8u;
        goto label_2c92c8;
    }
    ctx->pc = 0x2C92C0u;
    {
        const bool branch_taken_0x2c92c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c92c0) {
            ctx->pc = 0x2C92C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92C0u;
            // 0x2c92c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C92C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC834u;
            return;
        }
    }
    ctx->pc = 0x2C92C8u;
label_2c92c8:
    // 0x2c92c8: 0x5f35304d  .word       0x5F35304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c92cc:
    if (ctx->pc == 0x2C92CCu) {
        ctx->pc = 0x2C92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92C8u;
        // 0x2c92cc: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C92CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92D0u;
        goto label_2c92d0;
    }
    ctx->pc = 0x2C92C8u;
    {
        const bool branch_taken_0x2c92c8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c92c8) {
            ctx->pc = 0x2C92CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92C8u;
            // 0x2c92cc: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C92CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5400u;
            return;
        }
    }
    ctx->pc = 0x2C92D0u;
label_2c92d0:
    // 0x2c92d0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c92d0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c92d4:
    // 0x2c92d4: 0x0  nop
    ctx->pc = 0x2c92d4u;
    // NOP
label_2c92d8:
    // 0x2c92d8: 0x0  nop
    ctx->pc = 0x2c92d8u;
    // NOP
label_2c92dc:
    // 0x2c92dc: 0x0  nop
    ctx->pc = 0x2c92dcu;
    // NOP
label_2c92e0:
    // 0x2c92e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c92e4:
    if (ctx->pc == 0x2C92E4u) {
        ctx->pc = 0x2C92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92E0u;
        // 0x2c92e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C92E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92E8u;
        goto label_2c92e8;
    }
    ctx->pc = 0x2C92E0u;
    {
        const bool branch_taken_0x2c92e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c92e0) {
            ctx->pc = 0x2C92E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92E0u;
            // 0x2c92e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C92E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC854u;
            return;
        }
    }
    ctx->pc = 0x2C92E8u;
label_2c92e8:
    // 0x2c92e8: 0x5f35304d  .word       0x5F35304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c92ec:
    if (ctx->pc == 0x2C92ECu) {
        ctx->pc = 0x2C92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92E8u;
        // 0x2c92ec: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C92EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92F0u;
        goto label_2c92f0;
    }
    ctx->pc = 0x2C92E8u;
    {
        const bool branch_taken_0x2c92e8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c92e8) {
            ctx->pc = 0x2C92ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92E8u;
            // 0x2c92ec: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C92EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5420u;
            return;
        }
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c92f0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c92f4:
    // 0x2c92f4: 0x0  nop
    ctx->pc = 0x2c92f4u;
    // NOP
label_2c92f8:
    // 0x2c92f8: 0x0  nop
    ctx->pc = 0x2c92f8u;
    // NOP
label_2c92fc:
    // 0x2c92fc: 0x0  nop
    ctx->pc = 0x2c92fcu;
    // NOP
label_2c9300:
    // 0x2c9300: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9304:
    if (ctx->pc == 0x2C9304u) {
        ctx->pc = 0x2C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9300u;
        // 0x2c9304: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9304 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9308u;
        goto label_2c9308;
    }
    ctx->pc = 0x2C9300u;
    {
        const bool branch_taken_0x2c9300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9300) {
            ctx->pc = 0x2C9304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9300u;
            // 0x2c9304: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9304 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC874u;
            return;
        }
    }
    ctx->pc = 0x2C9308u;
label_2c9308:
    // 0x2c9308: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c930c:
    if (ctx->pc == 0x2C930Cu) {
        ctx->pc = 0x2C930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9308u;
        // 0x2c930c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C930C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9310u;
        goto label_2c9310;
    }
    ctx->pc = 0x2C9308u;
    {
        const bool branch_taken_0x2c9308 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9308) {
            ctx->pc = 0x2C930Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9308u;
            // 0x2c930c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C930C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5440u;
            return;
        }
    }
    ctx->pc = 0x2C9310u;
label_2c9310:
    // 0x2c9310: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9310u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9314:
    // 0x2c9314: 0x0  nop
    ctx->pc = 0x2c9314u;
    // NOP
label_2c9318:
    // 0x2c9318: 0x0  nop
    ctx->pc = 0x2c9318u;
    // NOP
label_2c931c:
    // 0x2c931c: 0x0  nop
    ctx->pc = 0x2c931cu;
    // NOP
label_2c9320:
    // 0x2c9320: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9324:
    if (ctx->pc == 0x2C9324u) {
        ctx->pc = 0x2C9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9320u;
        // 0x2c9324: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9324 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9328u;
        goto label_2c9328;
    }
    ctx->pc = 0x2C9320u;
    {
        const bool branch_taken_0x2c9320 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9320) {
            ctx->pc = 0x2C9324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9320u;
            // 0x2c9324: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9324 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC894u;
            return;
        }
    }
    ctx->pc = 0x2C9328u;
label_2c9328:
    // 0x2c9328: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c932c:
    if (ctx->pc == 0x2C932Cu) {
        ctx->pc = 0x2C932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9328u;
        // 0x2c932c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C932C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9330u;
        goto label_2c9330;
    }
    ctx->pc = 0x2C9328u;
    {
        const bool branch_taken_0x2c9328 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9328) {
            ctx->pc = 0x2C932Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9328u;
            // 0x2c932c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C932C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5460u;
            return;
        }
    }
    ctx->pc = 0x2C9330u;
label_2c9330:
    // 0x2c9330: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9330u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9334:
    // 0x2c9334: 0x0  nop
    ctx->pc = 0x2c9334u;
    // NOP
label_2c9338:
    // 0x2c9338: 0x0  nop
    ctx->pc = 0x2c9338u;
    // NOP
label_2c933c:
    // 0x2c933c: 0x0  nop
    ctx->pc = 0x2c933cu;
    // NOP
label_2c9340:
    // 0x2c9340: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9344:
    if (ctx->pc == 0x2C9344u) {
        ctx->pc = 0x2C9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9340u;
        // 0x2c9344: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9344 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9348u;
        goto label_2c9348;
    }
    ctx->pc = 0x2C9340u;
    {
        const bool branch_taken_0x2c9340 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9340) {
            ctx->pc = 0x2C9344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9340u;
            // 0x2c9344: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9344 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8B4u;
            return;
        }
    }
    ctx->pc = 0x2C9348u;
label_2c9348:
    // 0x2c9348: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c934c:
    if (ctx->pc == 0x2C934Cu) {
        ctx->pc = 0x2C934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9348u;
        // 0x2c934c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C934C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9350u;
        goto label_2c9350;
    }
    ctx->pc = 0x2C9348u;
    {
        const bool branch_taken_0x2c9348 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9348) {
            ctx->pc = 0x2C934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9348u;
            // 0x2c934c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C934C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5480u;
            return;
        }
    }
    ctx->pc = 0x2C9350u;
label_2c9350:
    // 0x2c9350: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9350u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9354:
    // 0x2c9354: 0x0  nop
    ctx->pc = 0x2c9354u;
    // NOP
label_2c9358:
    // 0x2c9358: 0x0  nop
    ctx->pc = 0x2c9358u;
    // NOP
label_2c935c:
    // 0x2c935c: 0x0  nop
    ctx->pc = 0x2c935cu;
    // NOP
label_2c9360:
    // 0x2c9360: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9364:
    if (ctx->pc == 0x2C9364u) {
        ctx->pc = 0x2C9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9360u;
        // 0x2c9364: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9364 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9368u;
        goto label_2c9368;
    }
    ctx->pc = 0x2C9360u;
    {
        const bool branch_taken_0x2c9360 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9360) {
            ctx->pc = 0x2C9364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9360u;
            // 0x2c9364: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9364 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8D4u;
            return;
        }
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c936c:
    if (ctx->pc == 0x2C936Cu) {
        ctx->pc = 0x2C936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9368u;
        // 0x2c936c: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C936C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9370u;
        goto label_2c9370;
    }
    ctx->pc = 0x2C9368u;
    {
        const bool branch_taken_0x2c9368 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9368) {
            ctx->pc = 0x2C936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9368u;
            // 0x2c936c: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C936C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54A0u;
            return;
        }
    }
    ctx->pc = 0x2C9370u;
label_2c9370:
    // 0x2c9370: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9370u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9374:
    // 0x2c9374: 0x0  nop
    ctx->pc = 0x2c9374u;
    // NOP
label_2c9378:
    // 0x2c9378: 0x0  nop
    ctx->pc = 0x2c9378u;
    // NOP
label_2c937c:
    // 0x2c937c: 0x0  nop
    ctx->pc = 0x2c937cu;
    // NOP
label_2c9380:
    // 0x2c9380: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9384:
    if (ctx->pc == 0x2C9384u) {
        ctx->pc = 0x2C9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9380u;
        // 0x2c9384: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9384 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9388u;
        goto label_2c9388;
    }
    ctx->pc = 0x2C9380u;
    {
        const bool branch_taken_0x2c9380 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9380) {
            ctx->pc = 0x2C9384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9380u;
            // 0x2c9384: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9384 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8F4u;
            return;
        }
    }
    ctx->pc = 0x2C9388u;
label_2c9388:
    // 0x2c9388: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c938c:
    if (ctx->pc == 0x2C938Cu) {
        ctx->pc = 0x2C938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9388u;
        // 0x2c938c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C938C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9390u;
        goto label_2c9390;
    }
    ctx->pc = 0x2C9388u;
    {
        const bool branch_taken_0x2c9388 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9388) {
            ctx->pc = 0x2C938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9388u;
            // 0x2c938c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C938C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54C0u;
            return;
        }
    }
    ctx->pc = 0x2C9390u;
label_2c9390:
    // 0x2c9390: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9390u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9394:
    // 0x2c9394: 0x0  nop
    ctx->pc = 0x2c9394u;
    // NOP
label_2c9398:
    // 0x2c9398: 0x0  nop
    ctx->pc = 0x2c9398u;
    // NOP
label_2c939c:
    // 0x2c939c: 0x0  nop
    ctx->pc = 0x2c939cu;
    // NOP
label_2c93a0:
    // 0x2c93a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c93a4:
    if (ctx->pc == 0x2C93A4u) {
        ctx->pc = 0x2C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93A0u;
        // 0x2c93a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C93A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93A8u;
        goto label_2c93a8;
    }
    ctx->pc = 0x2C93A0u;
    {
        const bool branch_taken_0x2c93a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c93a0) {
            ctx->pc = 0x2C93A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93A0u;
            // 0x2c93a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C93A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC914u;
            return;
        }
    }
    ctx->pc = 0x2C93A8u;
label_2c93a8:
    // 0x2c93a8: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c93ac:
    if (ctx->pc == 0x2C93ACu) {
        ctx->pc = 0x2C93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93A8u;
        // 0x2c93ac: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C93AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93B0u;
        goto label_2c93b0;
    }
    ctx->pc = 0x2C93A8u;
    {
        const bool branch_taken_0x2c93a8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c93a8) {
            ctx->pc = 0x2C93ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93A8u;
            // 0x2c93ac: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C93AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54E0u;
            return;
        }
    }
    ctx->pc = 0x2C93B0u;
label_2c93b0:
    // 0x2c93b0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c93b0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c93b4:
    // 0x2c93b4: 0x0  nop
    ctx->pc = 0x2c93b4u;
    // NOP
label_2c93b8:
    // 0x2c93b8: 0x0  nop
    ctx->pc = 0x2c93b8u;
    // NOP
label_2c93bc:
    // 0x2c93bc: 0x0  nop
    ctx->pc = 0x2c93bcu;
    // NOP
label_2c93c0:
    // 0x2c93c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c93c4:
    if (ctx->pc == 0x2C93C4u) {
        ctx->pc = 0x2C93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93C0u;
        // 0x2c93c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C93C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93C8u;
        goto label_2c93c8;
    }
    ctx->pc = 0x2C93C0u;
    {
        const bool branch_taken_0x2c93c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c93c0) {
            ctx->pc = 0x2C93C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93C0u;
            // 0x2c93c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C93C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC934u;
            return;
        }
    }
    ctx->pc = 0x2C93C8u;
label_2c93c8:
    // 0x2c93c8: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c93cc:
    if (ctx->pc == 0x2C93CCu) {
        ctx->pc = 0x2C93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93C8u;
        // 0x2c93cc: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C93CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93D0u;
        goto label_2c93d0;
    }
    ctx->pc = 0x2C93C8u;
    {
        const bool branch_taken_0x2c93c8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c93c8) {
            ctx->pc = 0x2C93CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93C8u;
            // 0x2c93cc: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C93CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5500u;
            return;
        }
    }
    ctx->pc = 0x2C93D0u;
label_2c93d0:
    // 0x2c93d0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c93d0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c93d4:
    // 0x2c93d4: 0x0  nop
    ctx->pc = 0x2c93d4u;
    // NOP
label_2c93d8:
    // 0x2c93d8: 0x0  nop
    ctx->pc = 0x2c93d8u;
    // NOP
label_2c93dc:
    // 0x2c93dc: 0x0  nop
    ctx->pc = 0x2c93dcu;
    // NOP
label_2c93e0:
    // 0x2c93e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c93e4:
    if (ctx->pc == 0x2C93E4u) {
        ctx->pc = 0x2C93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93E0u;
        // 0x2c93e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C93E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93E8u;
        goto label_2c93e8;
    }
    ctx->pc = 0x2C93E0u;
    {
        const bool branch_taken_0x2c93e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c93e0) {
            ctx->pc = 0x2C93E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93E0u;
            // 0x2c93e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C93E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC954u;
            return;
        }
    }
    ctx->pc = 0x2C93E8u;
label_2c93e8:
    // 0x2c93e8: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c93ec:
    if (ctx->pc == 0x2C93ECu) {
        ctx->pc = 0x2C93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93E8u;
        // 0x2c93ec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C93EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93F0u;
        goto label_2c93f0;
    }
    ctx->pc = 0x2C93E8u;
    {
        const bool branch_taken_0x2c93e8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c93e8) {
            ctx->pc = 0x2C93ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93E8u;
            // 0x2c93ec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C93EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5920u;
            return;
        }
    }
    ctx->pc = 0x2C93F0u;
label_2c93f0:
    // 0x2c93f0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c93f0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c93f4:
    // 0x2c93f4: 0x0  nop
    ctx->pc = 0x2c93f4u;
    // NOP
label_2c93f8:
    // 0x2c93f8: 0x0  nop
    ctx->pc = 0x2c93f8u;
    // NOP
label_2c93fc:
    // 0x2c93fc: 0x0  nop
    ctx->pc = 0x2c93fcu;
    // NOP
label_2c9400:
    // 0x2c9400: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9404:
    if (ctx->pc == 0x2C9404u) {
        ctx->pc = 0x2C9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9400u;
        // 0x2c9404: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9408u;
        goto label_2c9408;
    }
    ctx->pc = 0x2C9400u;
    {
        const bool branch_taken_0x2c9400 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9400) {
            ctx->pc = 0x2C9404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9400u;
            // 0x2c9404: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9404 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC974u;
            return;
        }
    }
    ctx->pc = 0x2C9408u;
label_2c9408:
    // 0x2c9408: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c940c:
    if (ctx->pc == 0x2C940Cu) {
        ctx->pc = 0x2C940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9408u;
        // 0x2c940c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C940C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9410u;
        goto label_2c9410;
    }
    ctx->pc = 0x2C9408u;
    {
        const bool branch_taken_0x2c9408 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9408) {
            ctx->pc = 0x2C940Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9408u;
            // 0x2c940c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C940C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5940u;
            return;
        }
    }
    ctx->pc = 0x2C9410u;
label_2c9410:
    // 0x2c9410: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9410u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9414:
    // 0x2c9414: 0x0  nop
    ctx->pc = 0x2c9414u;
    // NOP
label_2c9418:
    // 0x2c9418: 0x0  nop
    ctx->pc = 0x2c9418u;
    // NOP
label_2c941c:
    // 0x2c941c: 0x0  nop
    ctx->pc = 0x2c941cu;
    // NOP
label_2c9420:
    // 0x2c9420: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9424:
    if (ctx->pc == 0x2C9424u) {
        ctx->pc = 0x2C9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9420u;
        // 0x2c9424: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9424 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9428u;
        goto label_2c9428;
    }
    ctx->pc = 0x2C9420u;
    {
        const bool branch_taken_0x2c9420 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9420) {
            ctx->pc = 0x2C9424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9420u;
            // 0x2c9424: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9424 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC994u;
            return;
        }
    }
    ctx->pc = 0x2C9428u;
label_2c9428:
    // 0x2c9428: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c942c:
    if (ctx->pc == 0x2C942Cu) {
        ctx->pc = 0x2C942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9428u;
        // 0x2c942c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C942C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9430u;
        goto label_2c9430;
    }
    ctx->pc = 0x2C9428u;
    {
        const bool branch_taken_0x2c9428 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9428) {
            ctx->pc = 0x2C942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9428u;
            // 0x2c942c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C942C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5960u;
            return;
        }
    }
    ctx->pc = 0x2C9430u;
label_2c9430:
    // 0x2c9430: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9430u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9434:
    // 0x2c9434: 0x0  nop
    ctx->pc = 0x2c9434u;
    // NOP
label_2c9438:
    // 0x2c9438: 0x0  nop
    ctx->pc = 0x2c9438u;
    // NOP
label_2c943c:
    // 0x2c943c: 0x0  nop
    ctx->pc = 0x2c943cu;
    // NOP
label_2c9440:
    // 0x2c9440: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9444:
    if (ctx->pc == 0x2C9444u) {
        ctx->pc = 0x2C9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9440u;
        // 0x2c9444: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9444 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9448u;
        goto label_2c9448;
    }
    ctx->pc = 0x2C9440u;
    {
        const bool branch_taken_0x2c9440 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9440) {
            ctx->pc = 0x2C9444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9440u;
            // 0x2c9444: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9444 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9B4u;
            return;
        }
    }
    ctx->pc = 0x2C9448u;
label_2c9448:
    // 0x2c9448: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c944c:
    if (ctx->pc == 0x2C944Cu) {
        ctx->pc = 0x2C944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9448u;
        // 0x2c944c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C944C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9450u;
        goto label_2c9450;
    }
    ctx->pc = 0x2C9448u;
    {
        const bool branch_taken_0x2c9448 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9448) {
            ctx->pc = 0x2C944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9448u;
            // 0x2c944c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C944C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5980u;
            return;
        }
    }
    ctx->pc = 0x2C9450u;
label_2c9450:
    // 0x2c9450: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9450u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9454:
    // 0x2c9454: 0x0  nop
    ctx->pc = 0x2c9454u;
    // NOP
label_2c9458:
    // 0x2c9458: 0x0  nop
    ctx->pc = 0x2c9458u;
    // NOP
label_2c945c:
    // 0x2c945c: 0x0  nop
    ctx->pc = 0x2c945cu;
    // NOP
label_2c9460:
    // 0x2c9460: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9464:
    if (ctx->pc == 0x2C9464u) {
        ctx->pc = 0x2C9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9460u;
        // 0x2c9464: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9464 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9468u;
        goto label_2c9468;
    }
    ctx->pc = 0x2C9460u;
    {
        const bool branch_taken_0x2c9460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9460) {
            ctx->pc = 0x2C9464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9460u;
            // 0x2c9464: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9464 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9D4u;
            return;
        }
    }
    ctx->pc = 0x2C9468u;
label_2c9468:
    // 0x2c9468: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c946c:
    if (ctx->pc == 0x2C946Cu) {
        ctx->pc = 0x2C946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9468u;
        // 0x2c946c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C946C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9470u;
        goto label_2c9470;
    }
    ctx->pc = 0x2C9468u;
    {
        const bool branch_taken_0x2c9468 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9468) {
            ctx->pc = 0x2C946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9468u;
            // 0x2c946c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C946C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59A0u;
            return;
        }
    }
    ctx->pc = 0x2C9470u;
label_2c9470:
    // 0x2c9470: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9470u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9474:
    // 0x2c9474: 0x0  nop
    ctx->pc = 0x2c9474u;
    // NOP
label_2c9478:
    // 0x2c9478: 0x0  nop
    ctx->pc = 0x2c9478u;
    // NOP
label_2c947c:
    // 0x2c947c: 0x0  nop
    ctx->pc = 0x2c947cu;
    // NOP
label_2c9480:
    // 0x2c9480: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9484:
    if (ctx->pc == 0x2C9484u) {
        ctx->pc = 0x2C9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9480u;
        // 0x2c9484: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9484 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9488u;
        goto label_2c9488;
    }
    ctx->pc = 0x2C9480u;
    {
        const bool branch_taken_0x2c9480 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9480) {
            ctx->pc = 0x2C9484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9480u;
            // 0x2c9484: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9484 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9F4u;
            return;
        }
    }
    ctx->pc = 0x2C9488u;
label_2c9488:
    // 0x2c9488: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c948c:
    if (ctx->pc == 0x2C948Cu) {
        ctx->pc = 0x2C948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9488u;
        // 0x2c948c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C948C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9490u;
        goto label_2c9490;
    }
    ctx->pc = 0x2C9488u;
    {
        const bool branch_taken_0x2c9488 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9488) {
            ctx->pc = 0x2C948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9488u;
            // 0x2c948c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C948C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59C0u;
            return;
        }
    }
    ctx->pc = 0x2C9490u;
label_2c9490:
    // 0x2c9490: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9490u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9494:
    // 0x2c9494: 0x0  nop
    ctx->pc = 0x2c9494u;
    // NOP
label_2c9498:
    // 0x2c9498: 0x0  nop
    ctx->pc = 0x2c9498u;
    // NOP
label_2c949c:
    // 0x2c949c: 0x0  nop
    ctx->pc = 0x2c949cu;
    // NOP
label_2c94a0:
    // 0x2c94a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c94a4:
    if (ctx->pc == 0x2C94A4u) {
        ctx->pc = 0x2C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A0u;
        // 0x2c94a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C94A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94A8u;
        goto label_2c94a8;
    }
    ctx->pc = 0x2C94A0u;
    {
        const bool branch_taken_0x2c94a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c94a0) {
            ctx->pc = 0x2C94A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94A0u;
            // 0x2c94a4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C94A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA14u;
            return;
        }
    }
    ctx->pc = 0x2C94A8u;
label_2c94a8:
    // 0x2c94a8: 0x5f35314d  .word       0x5F35314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c94ac:
    if (ctx->pc == 0x2C94ACu) {
        ctx->pc = 0x2C94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A8u;
        // 0x2c94ac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C94AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94B0u;
        goto label_2c94b0;
    }
    ctx->pc = 0x2C94A8u;
    {
        const bool branch_taken_0x2c94a8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c94a8) {
            ctx->pc = 0x2C94ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94A8u;
            // 0x2c94ac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C94AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59E0u;
            return;
        }
    }
    ctx->pc = 0x2C94B0u;
label_2c94b0:
    // 0x2c94b0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c94b0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c94b4:
    // 0x2c94b4: 0x0  nop
    ctx->pc = 0x2c94b4u;
    // NOP
label_2c94b8:
    // 0x2c94b8: 0x0  nop
    ctx->pc = 0x2c94b8u;
    // NOP
label_2c94bc:
    // 0x2c94bc: 0x0  nop
    ctx->pc = 0x2c94bcu;
    // NOP
label_2c94c0:
    // 0x2c94c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c94c4:
    if (ctx->pc == 0x2C94C4u) {
        ctx->pc = 0x2C94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94C0u;
        // 0x2c94c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C94C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94C8u;
        goto label_2c94c8;
    }
    ctx->pc = 0x2C94C0u;
    {
        const bool branch_taken_0x2c94c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c94c0) {
            ctx->pc = 0x2C94C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94C0u;
            // 0x2c94c4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C94C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA34u;
            return;
        }
    }
    ctx->pc = 0x2C94C8u;
label_2c94c8:
    // 0x2c94c8: 0x5f35314d  .word       0x5F35314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c94cc:
    if (ctx->pc == 0x2C94CCu) {
        ctx->pc = 0x2C94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94C8u;
        // 0x2c94cc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C94CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94D0u;
        goto label_2c94d0;
    }
    ctx->pc = 0x2C94C8u;
    {
        const bool branch_taken_0x2c94c8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c94c8) {
            ctx->pc = 0x2C94CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94C8u;
            // 0x2c94cc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C94CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A00u;
            return;
        }
    }
    ctx->pc = 0x2C94D0u;
label_2c94d0:
    // 0x2c94d0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c94d0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c94d4:
    // 0x2c94d4: 0x0  nop
    ctx->pc = 0x2c94d4u;
    // NOP
label_2c94d8:
    // 0x2c94d8: 0x0  nop
    ctx->pc = 0x2c94d8u;
    // NOP
label_2c94dc:
    // 0x2c94dc: 0x0  nop
    ctx->pc = 0x2c94dcu;
    // NOP
label_2c94e0:
    // 0x2c94e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c94e4:
    if (ctx->pc == 0x2C94E4u) {
        ctx->pc = 0x2C94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94E0u;
        // 0x2c94e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C94E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94E8u;
        goto label_2c94e8;
    }
    ctx->pc = 0x2C94E0u;
    {
        const bool branch_taken_0x2c94e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c94e0) {
            ctx->pc = 0x2C94E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94E0u;
            // 0x2c94e4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C94E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA54u;
            return;
        }
    }
    ctx->pc = 0x2C94E8u;
label_2c94e8:
    // 0x2c94e8: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c94ec:
    if (ctx->pc == 0x2C94ECu) {
        ctx->pc = 0x2C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94E8u;
        // 0x2c94ec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C94EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94F0u;
        goto label_2c94f0;
    }
    ctx->pc = 0x2C94E8u;
    {
        const bool branch_taken_0x2c94e8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c94e8) {
            ctx->pc = 0x2C94ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C94E8u;
            // 0x2c94ec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C94EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A20u;
            return;
        }
    }
    ctx->pc = 0x2C94F0u;
label_2c94f0:
    // 0x2c94f0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c94f0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c94f4:
    // 0x2c94f4: 0x0  nop
    ctx->pc = 0x2c94f4u;
    // NOP
label_2c94f8:
    // 0x2c94f8: 0x0  nop
    ctx->pc = 0x2c94f8u;
    // NOP
label_2c94fc:
    // 0x2c94fc: 0x0  nop
    ctx->pc = 0x2c94fcu;
    // NOP
label_2c9500:
    // 0x2c9500: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9504:
    if (ctx->pc == 0x2C9504u) {
        ctx->pc = 0x2C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9500u;
        // 0x2c9504: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9504 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9508u;
        goto label_2c9508;
    }
    ctx->pc = 0x2C9500u;
    {
        const bool branch_taken_0x2c9500 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9500) {
            ctx->pc = 0x2C9504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9500u;
            // 0x2c9504: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9504 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA74u;
            return;
        }
    }
    ctx->pc = 0x2C9508u;
label_2c9508:
    // 0x2c9508: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c950c:
    if (ctx->pc == 0x2C950Cu) {
        ctx->pc = 0x2C950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9508u;
        // 0x2c950c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C950C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9510u;
        goto label_2c9510;
    }
    ctx->pc = 0x2C9508u;
    {
        const bool branch_taken_0x2c9508 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9508) {
            ctx->pc = 0x2C950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9508u;
            // 0x2c950c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C950C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A40u;
            return;
        }
    }
    ctx->pc = 0x2C9510u;
label_2c9510:
    // 0x2c9510: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9510u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9514:
    // 0x2c9514: 0x0  nop
    ctx->pc = 0x2c9514u;
    // NOP
label_2c9518:
    // 0x2c9518: 0x0  nop
    ctx->pc = 0x2c9518u;
    // NOP
label_2c951c:
    // 0x2c951c: 0x0  nop
    ctx->pc = 0x2c951cu;
    // NOP
label_2c9520:
    // 0x2c9520: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9524:
    if (ctx->pc == 0x2C9524u) {
        ctx->pc = 0x2C9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9520u;
        // 0x2c9524: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9524 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9528u;
        goto label_2c9528;
    }
    ctx->pc = 0x2C9520u;
    {
        const bool branch_taken_0x2c9520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9520) {
            ctx->pc = 0x2C9524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9520u;
            // 0x2c9524: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9524 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA94u;
            return;
        }
    }
    ctx->pc = 0x2C9528u;
label_2c9528:
    // 0x2c9528: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c952c:
    if (ctx->pc == 0x2C952Cu) {
        ctx->pc = 0x2C952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9528u;
        // 0x2c952c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C952C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9530u;
        goto label_2c9530;
    }
    ctx->pc = 0x2C9528u;
    {
        const bool branch_taken_0x2c9528 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9528) {
            ctx->pc = 0x2C952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9528u;
            // 0x2c952c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C952C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A60u;
            return;
        }
    }
    ctx->pc = 0x2C9530u;
label_2c9530:
    // 0x2c9530: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9530u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9534:
    // 0x2c9534: 0x0  nop
    ctx->pc = 0x2c9534u;
    // NOP
label_2c9538:
    // 0x2c9538: 0x0  nop
    ctx->pc = 0x2c9538u;
    // NOP
label_2c953c:
    // 0x2c953c: 0x0  nop
    ctx->pc = 0x2c953cu;
    // NOP
label_2c9540:
    // 0x2c9540: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9544:
    if (ctx->pc == 0x2C9544u) {
        ctx->pc = 0x2C9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9540u;
        // 0x2c9544: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9544 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9548u;
        goto label_2c9548;
    }
    ctx->pc = 0x2C9540u;
    {
        const bool branch_taken_0x2c9540 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9540) {
            ctx->pc = 0x2C9544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9540u;
            // 0x2c9544: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9544 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAB4u;
            return;
        }
    }
    ctx->pc = 0x2C9548u;
label_2c9548:
    // 0x2c9548: 0x5f39314d  .word       0x5F39314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c954c:
    if (ctx->pc == 0x2C954Cu) {
        ctx->pc = 0x2C954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9548u;
        // 0x2c954c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C954C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9550u;
        goto label_2c9550;
    }
    ctx->pc = 0x2C9548u;
    {
        const bool branch_taken_0x2c9548 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9548) {
            ctx->pc = 0x2C954Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9548u;
            // 0x2c954c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C954C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A80u;
            return;
        }
    }
    ctx->pc = 0x2C9550u;
label_2c9550:
    // 0x2c9550: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9550u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9554:
    // 0x2c9554: 0x0  nop
    ctx->pc = 0x2c9554u;
    // NOP
label_2c9558:
    // 0x2c9558: 0x0  nop
    ctx->pc = 0x2c9558u;
    // NOP
label_2c955c:
    // 0x2c955c: 0x0  nop
    ctx->pc = 0x2c955cu;
    // NOP
label_2c9560:
    // 0x2c9560: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9564:
    if (ctx->pc == 0x2C9564u) {
        ctx->pc = 0x2C9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9560u;
        // 0x2c9564: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9564 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9568u;
        goto label_2c9568;
    }
    ctx->pc = 0x2C9560u;
    {
        const bool branch_taken_0x2c9560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9560) {
            ctx->pc = 0x2C9564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9560u;
            // 0x2c9564: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9564 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAD4u;
            return;
        }
    }
    ctx->pc = 0x2C9568u;
label_2c9568:
    // 0x2c9568: 0x5f39314d  .word       0x5F39314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c956c:
    if (ctx->pc == 0x2C956Cu) {
        ctx->pc = 0x2C956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9568u;
        // 0x2c956c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C956C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9570u;
        goto label_2c9570;
    }
    ctx->pc = 0x2C9568u;
    {
        const bool branch_taken_0x2c9568 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9568) {
            ctx->pc = 0x2C956Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9568u;
            // 0x2c956c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C956C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AA0u;
            return;
        }
    }
    ctx->pc = 0x2C9570u;
label_2c9570:
    // 0x2c9570: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c9570u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c9574:
    // 0x2c9574: 0x0  nop
    ctx->pc = 0x2c9574u;
    // NOP
label_2c9578:
    // 0x2c9578: 0x0  nop
    ctx->pc = 0x2c9578u;
    // NOP
label_2c957c:
    // 0x2c957c: 0x0  nop
    ctx->pc = 0x2c957cu;
    // NOP
label_2c9580:
    // 0x2c9580: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9580u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9580 raw=0x4E494C5C");
 /* MITIGATED */
label_2c9584:
    // 0x2c9584: 0x5441444b  bnel        $v0, $at, . + 4 + (0x444B << 2)
label_2c9588:
    if (ctx->pc == 0x2C9588u) {
        ctx->pc = 0x2C9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9584u;
        // 0x2c9588: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9588 raw=0x4E422E32");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C958Cu;
        goto label_2c958c;
    }
    ctx->pc = 0x2C9584u;
    {
        const bool branch_taken_0x2c9584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x2c9584) {
            ctx->pc = 0x2C9588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9584u;
            // 0x2c9588: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9588 raw=0x4E422E32");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA6B4u;
            return;
        }
    }
    ctx->pc = 0x2C958Cu;
label_2c958c:
    // 0x2c958c: 0x313b53  .word       0x00313B53                   # mtlo        $at # 00113B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c958cu;
    ctx->lo = GPR_U64(ctx, 1);
label_2c9590:
    // 0x2c9590: 0x4d47425c  .word       0x4D47425C                   # INVALID     $t2, $a3, 0x425C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9590u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9590 raw=0x4D47425C");
 /* MITIGATED */
label_2c9594:
    // 0x2c9594: 0x534e422e  beql        $k0, $t6, . + 4 + (0x422E << 2)
label_2c9598:
    if (ctx->pc == 0x2C9598u) {
        ctx->pc = 0x2C9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9594u;
        // 0x2c9598: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C959Cu;
        goto label_2c959c;
    }
    ctx->pc = 0x2C9594u;
    {
        const bool branch_taken_0x2c9594 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c9594) {
            ctx->pc = 0x2C9598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9594u;
            // 0x2c9598: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9E50u;
            return;
        }
    }
    ctx->pc = 0x2C959Cu;
label_2c959c:
    // 0x2c959c: 0x0  nop
    ctx->pc = 0x2c959cu;
    // NOP
label_2c95a0:
    // 0x2c95a0: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c95a0u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C95A0 raw=0x494F565C");
 /* MITIGATED */
label_2c95a4:
    // 0x2c95a4: 0x2e554543  sltiu       $s5, $s2, 0x4543
    ctx->pc = 0x2c95a4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17731) ? 1 : 0);
label_2c95a8:
    // 0x2c95a8: 0x3b534e42  xori        $s3, $k0, 0x4E42
    ctx->pc = 0x2c95a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)20034);
label_2c95ac:
    // 0x2c95ac: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c95acu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c95b0:
    // 0x2c95b0: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c95b0u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C95B0 raw=0x494F565C");
 /* MITIGATED */
label_2c95b4:
    // 0x2c95b4: 0x2e4a4543  sltiu       $t2, $s2, 0x4543
    ctx->pc = 0x2c95b4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17731) ? 1 : 0);
label_2c95b8:
    // 0x2c95b8: 0x3b534e42  xori        $s3, $k0, 0x4E42
    ctx->pc = 0x2c95b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)20034);
label_2c95bc:
    // 0x2c95bc: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c95bcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c95c0:
    // 0x2c95c0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c95c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c95c4:
    // 0x2c95c4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_2c95c8:
    if (ctx->pc == 0x2C95C8u) {
        ctx->pc = 0x2C95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95C4u;
        // 0x2c95c8: 0x4d47425c  .word       0x4D47425C                   # INVALID     $t2, $a3, 0x425C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95C8 raw=0x4D47425C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C95CCu;
        goto label_2c95cc;
    }
    ctx->pc = 0x2C95C4u;
    {
        const bool branch_taken_0x2c95c4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2c95c4) {
            ctx->pc = 0x2C95C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C95C4u;
            // 0x2c95c8: 0x4d47425c  .word       0x4D47425C                   # INVALID     $t2, $a3, 0x425C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95C8 raw=0x4D47425C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D577Cu;
            return;
        }
    }
    ctx->pc = 0x2C95CCu;
label_2c95cc:
    // 0x2c95cc: 0x534e422e  beql        $k0, $t6, . + 4 + (0x422E << 2)
label_2c95d0:
    if (ctx->pc == 0x2C95D0u) {
        ctx->pc = 0x2C95D4u;
        goto label_2c95d4;
    }
    ctx->pc = 0x2C95CCu;
    {
        const bool branch_taken_0x2c95cc = (GPR_U64(ctx, 26) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c95cc) {
            ctx->pc = 0x2D9E88u;
            return;
        }
    }
    ctx->pc = 0x2C95D4u;
label_2c95d4:
    // 0x2c95d4: 0x0  nop
    ctx->pc = 0x2c95d4u;
    // NOP
label_2c95d8:
    // 0x2c95d8: 0x0  nop
    ctx->pc = 0x2c95d8u;
    // NOP
label_2c95dc:
    // 0x2c95dc: 0x0  nop
    ctx->pc = 0x2c95dcu;
    // NOP
label_2c95e0:
    // 0x2c95e0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c95e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c95e4:
    // 0x2c95e4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_2c95e8:
    if (ctx->pc == 0x2C95E8u) {
        ctx->pc = 0x2C95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95E4u;
        // 0x2c95e8: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95E8 raw=0x4E494C5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C95ECu;
        goto label_2c95ec;
    }
    ctx->pc = 0x2C95E4u;
    {
        const bool branch_taken_0x2c95e4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2c95e4) {
            ctx->pc = 0x2C95E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C95E4u;
            // 0x2c95e8: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95E8 raw=0x4E494C5C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D579Cu;
            return;
        }
    }
    ctx->pc = 0x2C95ECu;
label_2c95ec:
    // 0x2c95ec: 0x5441444b  bnel        $v0, $at, . + 4 + (0x444B << 2)
label_2c95f0:
    if (ctx->pc == 0x2C95F0u) {
        ctx->pc = 0x2C95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ECu;
        // 0x2c95f0: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95F0 raw=0x4E422E32");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C95F4u;
        goto label_2c95f4;
    }
    ctx->pc = 0x2C95ECu;
    {
        const bool branch_taken_0x2c95ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x2c95ec) {
            ctx->pc = 0x2C95F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C95ECu;
            // 0x2c95f0: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C95F0 raw=0x4E422E32");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA71Cu;
            return;
        }
    }
    ctx->pc = 0x2C95F4u;
label_2c95f4:
    // 0x2c95f4: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c95f4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2c95f8:
    // 0x2c95f8: 0x0  nop
    ctx->pc = 0x2c95f8u;
    // NOP
label_2c95fc:
    // 0x2c95fc: 0x0  nop
    ctx->pc = 0x2c95fcu;
    // NOP
label_2c9600:
    // 0x2c9600: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c9600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9604:
    // 0x2c9604: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_2c9608:
    if (ctx->pc == 0x2C9608u) {
        ctx->pc = 0x2C9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9604u;
        // 0x2c9608: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C9608 raw=0x494F565C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C960Cu;
        goto label_2c960c;
    }
    ctx->pc = 0x2C9604u;
    {
        const bool branch_taken_0x2c9604 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2c9604) {
            ctx->pc = 0x2C9608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9604u;
            // 0x2c9608: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//             throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C9608 raw=0x494F565C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D57BCu;
            return;
        }
    }
    ctx->pc = 0x2C960Cu;
label_2c960c:
    // 0x2c960c: 0x2e554543  sltiu       $s5, $s2, 0x4543
    ctx->pc = 0x2c960cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17731) ? 1 : 0);
label_2c9610:
    // 0x2c9610: 0x534e42  .word       0x00534E42                   # srl         $t1, $s3, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9610u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 25));
label_2c9614:
    // 0x2c9614: 0x0  nop
    ctx->pc = 0x2c9614u;
    // NOP
label_2c9618:
    // 0x2c9618: 0x0  nop
    ctx->pc = 0x2c9618u;
    // NOP
label_2c961c:
    // 0x2c961c: 0x0  nop
    ctx->pc = 0x2c961cu;
    // NOP
label_2c9620:
    // 0x2c9620: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c9620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9624:
    // 0x2c9624: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_2c9628:
    if (ctx->pc == 0x2C9628u) {
        ctx->pc = 0x2C9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9624u;
        // 0x2c9628: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C9628 raw=0x494F565C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C962Cu;
        goto label_2c962c;
    }
    ctx->pc = 0x2C9624u;
    {
        const bool branch_taken_0x2c9624 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2c9624) {
            ctx->pc = 0x2C9628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9624u;
            // 0x2c9628: 0x494f565c  .word       0x494F565C                   # INVALID     $t2, $t7, 0x565C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//             throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C9628 raw=0x494F565C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D57DCu;
            return;
        }
    }
    ctx->pc = 0x2C962Cu;
label_2c962c:
    // 0x2c962c: 0x2e4a4543  sltiu       $t2, $s2, 0x4543
    ctx->pc = 0x2c962cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17731) ? 1 : 0);
label_2c9630:
    // 0x2c9630: 0x534e42  .word       0x00534E42                   # srl         $t1, $s3, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9630u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 25));
label_2c9634:
    // 0x2c9634: 0x0  nop
    ctx->pc = 0x2c9634u;
    // NOP
label_2c9638:
    // 0x2c9638: 0x0  nop
    ctx->pc = 0x2c9638u;
    // NOP
label_2c963c:
    // 0x2c963c: 0x0  nop
    ctx->pc = 0x2c963cu;
    // NOP
label_2c9640:
    // 0x2c9640: 0x16e0f8  dsll        $gp, $s6, 3
    ctx->pc = 0x2c9640u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 22) << 3);
label_2c9644:
    // 0x2c9644: 0x16dca8  .word       0x0016DCA8                   # mfsa        $k1 # 00160480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9644u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2c9648:
    // 0x2c9648: 0x16dd18  .word       0x0016DD18                   # mult        $k1, $zero, $s6 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2c964c:
    // 0x2c964c: 0x16dd40  sll         $k1, $s6, 21
    ctx->pc = 0x2c964cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 22), 21));
label_2c9650:
    // 0x2c9650: 0x16dd64  .word       0x0016DD64                   # and         $k1, $zero, $s6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9650u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 22));
label_2c9654:
    // 0x2c9654: 0x16de38  dsll        $k1, $s6, 24
    ctx->pc = 0x2c9654u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 22) << 24);
label_2c9658:
    // 0x2c9658: 0x16de58  .word       0x0016DE58                   # mult        $k1, $zero, $s6 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2c965c:
    // 0x2c965c: 0x16df2c  .word       0x0016DF2C                   # dadd        $k1, $zero, $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c965cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_2c9660:
    // 0x2c9660: 0x16dff4  teq         $zero, $s6, 895
    ctx->pc = 0x2c9660u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c9664:
    // 0x2c9664: 0x16e0b0  tge         $zero, $s6, 898
    ctx->pc = 0x2c9664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c9668:
    // 0x2c9668: 0x0  nop
    ctx->pc = 0x2c9668u;
    // NOP
label_2c966c:
    // 0x2c966c: 0x0  nop
    ctx->pc = 0x2c966cu;
    // NOP
label_2c9670:
    // 0x2c9670: 0x16e558  .word       0x0016E558                   # mult        $gp, $zero, $s6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2c9674:
    // 0x2c9674: 0x16e558  .word       0x0016E558                   # mult        $gp, $zero, $s6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2c9678:
    // 0x2c9678: 0x16e558  .word       0x0016E558                   # mult        $gp, $zero, $s6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2c967c:
    // 0x2c967c: 0x16e630  tge         $zero, $s6, 920
    ctx->pc = 0x2c967cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c9680:
    // 0x2c9680: 0x16e7e0  .word       0x0016E7E0                   # add         $gp, $zero, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9680u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2c9684:
    // 0x2c9684: 0x16e9b0  tge         $zero, $s6, 934
    ctx->pc = 0x2c9684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c9688:
    // 0x2c9688: 0x16ea90  .word       0x0016EA90                   # mfhi        $sp # 00160280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9688u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2c968c:
    // 0x2c968c: 0x16ec64  .word       0x0016EC64                   # and         $sp, $zero, $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c968cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 22));
label_2c9690:
    // 0x2c9690: 0x16f094  .word       0x0016F094                   # dsllv       $fp, $s6, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9690u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_2c9694:
    // 0x2c9694: 0x16f094  .word       0x0016F094                   # dsllv       $fp, $s6, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9694u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_2c9698:
    // 0x2c9698: 0x16f094  .word       0x0016F094                   # dsllv       $fp, $s6, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9698u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_2c969c:
    // 0x2c969c: 0x16f110  .word       0x0016F110                   # mfhi        $fp # 00160100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c969cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2c96a0:
    // 0x2c96a0: 0x16f200  sll         $fp, $s6, 8
    ctx->pc = 0x2c96a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
label_2c96a4:
    // 0x2c96a4: 0x16f310  .word       0x0016F310                   # mfhi        $fp # 00160300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96a4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2c96a8:
    // 0x2c96a8: 0x16f390  .word       0x0016F390                   # mfhi        $fp # 00160380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96a8u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2c96ac:
    // 0x2c96ac: 0x16f4a4  .word       0x0016F4A4                   # and         $fp, $zero, $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 22));
label_2c96b0:
    // 0x2c96b0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2c96b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2c96b4:
    // 0x2c96b4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2c96b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2c96b8:
    // 0x2c96b8: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c96b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2c96bc:
    // 0x2c96bc: 0x22  neg         $zero, $zero
    ctx->pc = 0x2c96bcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2c96c0:
    // 0x2c96c0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2c96c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2c96c4:
    // 0x2c96c4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2c96c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2c96c8:
    // 0x2c96c8: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c96c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2c96cc:
    // 0x2c96cc: 0x22  neg         $zero, $zero
    ctx->pc = 0x2c96ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2c96d0:
    // 0x2c96d0: 0x0  nop
    ctx->pc = 0x2c96d0u;
    // NOP
label_2c96d4:
    // 0x2c96d4: 0x311e4000  andi        $fp, $t0, 0x4000
    ctx->pc = 0x2c96d4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
label_2c96d8:
    // 0x2c96d8: 0x412  .word       0x00000412                   # mflo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96d8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2c96dc:
    // 0x2c96dc: 0x0  nop
    ctx->pc = 0x2c96dcu;
    // NOP
label_2c96e0:
    // 0x2c96e0: 0x0  nop
    ctx->pc = 0x2c96e0u;
    // NOP
label_2c96e4:
    // 0x2c96e4: 0x313e4000  andi        $fp, $t1, 0x4000
    ctx->pc = 0x2c96e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16384);
label_2c96e8:
    // 0x2c96e8: 0x412  .word       0x00000412                   # mflo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96e8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2c96ec:
    // 0x2c96ec: 0x0  nop
    ctx->pc = 0x2c96ecu;
    // NOP
label_2c96f0:
    // 0x2c96f0: 0x0  nop
    ctx->pc = 0x2c96f0u;
    // NOP
label_2c96f4:
    // 0x2c96f4: 0x311e4000  andi        $fp, $t0, 0x4000
    ctx->pc = 0x2c96f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
label_2c96f8:
    // 0x2c96f8: 0x412  .word       0x00000412                   # mflo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c96f8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2c96fc:
    // 0x2c96fc: 0x0  nop
    ctx->pc = 0x2c96fcu;
    // NOP
label_2c9700:
    // 0x2c9700: 0x0  nop
    ctx->pc = 0x2c9700u;
    // NOP
label_2c9704:
    // 0x2c9704: 0x313e4000  andi        $fp, $t1, 0x4000
    ctx->pc = 0x2c9704u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16384);
label_2c9708:
    // 0x2c9708: 0x412  .word       0x00000412                   # mflo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9708u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2c970c:
    // 0x2c970c: 0x0  nop
    ctx->pc = 0x2c970cu;
    // NOP
label_2c9710:
    // 0x2c9710: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9710u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c9714:
    // 0x2c9714: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c9718:
    if (ctx->pc == 0x2C9718u) {
        ctx->pc = 0x2C9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9714u;
        // 0x2c9718: 0x4f49535c  .word       0x4F49535C                   # INVALID     $k0, $t1, 0x535C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9718 raw=0x4F49535C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C971Cu;
        goto label_2c971c;
    }
    ctx->pc = 0x2C9714u;
    {
        const bool branch_taken_0x2c9714 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c9714) {
            ctx->pc = 0x2C9718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9714u;
            // 0x2c9718: 0x4f49535c  .word       0x4F49535C                   # INVALID     $k0, $t1, 0x535C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9718 raw=0x4F49535C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC86Cu;
            return;
        }
    }
    ctx->pc = 0x2C971Cu;
label_2c971c:
    // 0x2c971c: 0x4e414d32  .word       0x4E414D32                   # INVALID     $s2, $at, 0x4D32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c971cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C971C raw=0x4E414D32");
 /* MITIGATED */
label_2c9720:
    // 0x2c9720: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2c9724:
    if (ctx->pc == 0x2C9724u) {
        ctx->pc = 0x2C9728u;
        goto label_2c9728;
    }
    ctx->pc = 0x2C9720u;
    {
        const bool branch_taken_0x2c9720 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9720) {
            ctx->pc = 0x2DBBDCu;
            return;
        }
    }
    ctx->pc = 0x2C9728u;
label_2c9728:
    // 0x2c9728: 0x0  nop
    ctx->pc = 0x2c9728u;
    // NOP
label_2c972c:
    // 0x2c972c: 0x0  nop
    ctx->pc = 0x2c972cu;
    // NOP
label_2c9730:
    // 0x2c9730: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9730u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c9734:
    // 0x2c9734: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c9738:
    if (ctx->pc == 0x2C9738u) {
        ctx->pc = 0x2C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9734u;
        // 0x2c9738: 0x4d434d5c  .word       0x4D434D5C                   # INVALID     $t2, $v1, 0x4D5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9738 raw=0x4D434D5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C973Cu;
        goto label_2c973c;
    }
    ctx->pc = 0x2C9734u;
    {
        const bool branch_taken_0x2c9734 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c9734) {
            ctx->pc = 0x2C9738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9734u;
            // 0x2c9738: 0x4d434d5c  .word       0x4D434D5C                   # INVALID     $t2, $v1, 0x4D5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9738 raw=0x4D434D5C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC88Cu;
            return;
        }
    }
    ctx->pc = 0x2C973Cu;
label_2c973c:
    // 0x2c973c: 0x492e4e41  .word       0x492E4E41                   # INVALID     $t1, $t6, 0x4E41 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c973cu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2C973C raw=0x492E4E41");
 /* MITIGATED */
label_2c9740:
    // 0x2c9740: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9740u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_2c9744:
    // 0x2c9744: 0x0  nop
    ctx->pc = 0x2c9744u;
    // NOP
label_2c9748:
    // 0x2c9748: 0x0  nop
    ctx->pc = 0x2c9748u;
    // NOP
label_2c974c:
    // 0x2c974c: 0x0  nop
    ctx->pc = 0x2c974cu;
    // NOP
label_2c9750:
    // 0x2c9750: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9750u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c9754:
    // 0x2c9754: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c9758:
    if (ctx->pc == 0x2C9758u) {
        ctx->pc = 0x2C9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9754u;
        // 0x2c9758: 0x53434d5c  beql        $k0, $v1, . + 4 + (0x4D5C << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9758 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C975Cu;
        goto label_2c975c;
    }
    ctx->pc = 0x2C9754u;
    {
        const bool branch_taken_0x2c9754 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c9754) {
            ctx->pc = 0x2C9758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9754u;
            // 0x2c9758: 0x53434d5c  beql        $k0, $v1, . + 4 + (0x4D5C << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9758 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8ACu;
            return;
        }
    }
    ctx->pc = 0x2C975Cu;
label_2c975c:
    // 0x2c975c: 0x2e565245  sltiu       $s6, $s2, 0x5245
    ctx->pc = 0x2c975cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)21061) ? 1 : 0);
label_2c9760:
    // 0x2c9760: 0x585249  .word       0x00585249                   # jalr        $t2, $v0 # 00180240 <InstrIdType: CPU_SPECIAL>
label_2c9764:
    if (ctx->pc == 0x2C9764u) {
        ctx->pc = 0x2C9768u;
        goto label_2c9768;
    }
    ctx->pc = 0x2C9760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 10, 0x2C9768u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9760u, 0x2C9768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C9768u;
label_2c9768:
    // 0x2c9768: 0x0  nop
    ctx->pc = 0x2c9768u;
    // NOP
label_2c976c:
    // 0x2c976c: 0x0  nop
    ctx->pc = 0x2c976cu;
    // NOP
label_2c9770:
    // 0x2c9770: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9770u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c9774:
    // 0x2c9774: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c9778:
    if (ctx->pc == 0x2C9778u) {
        ctx->pc = 0x2C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9774u;
        // 0x2c9778: 0x4441505c  .word       0x4441505C                   # cfc1        $at, $10 # 0000005C <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR10
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C977Cu;
        goto label_2c977c;
    }
    ctx->pc = 0x2C9774u;
    {
        const bool branch_taken_0x2c9774 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c9774) {
            ctx->pc = 0x2C9778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9774u;
            // 0x2c9778: 0x4441505c  .word       0x4441505C                   # cfc1        $at, $10 # 0000005C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR10
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8CCu;
            return;
        }
    }
    ctx->pc = 0x2C977Cu;
label_2c977c:
    // 0x2c977c: 0x2e4e414d  sltiu       $t6, $s2, 0x414D
    ctx->pc = 0x2c977cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16717) ? 1 : 0);
label_2c9780:
    // 0x2c9780: 0x585249  .word       0x00585249                   # jalr        $t2, $v0 # 00180240 <InstrIdType: CPU_SPECIAL>
label_2c9784:
    if (ctx->pc == 0x2C9784u) {
        ctx->pc = 0x2C9788u;
        goto label_2c9788;
    }
    ctx->pc = 0x2C9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 10, 0x2C9788u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9780u, 0x2C9788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C9788u;
label_2c9788:
    // 0x2c9788: 0x0  nop
    ctx->pc = 0x2c9788u;
    // NOP
label_2c978c:
    // 0x2c978c: 0x0  nop
    ctx->pc = 0x2c978cu;
    // NOP
label_2c9790:
    // 0x2c9790: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9790u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c9794:
    // 0x2c9794: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c9798:
    if (ctx->pc == 0x2C9798u) {
        ctx->pc = 0x2C9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9794u;
        // 0x2c9798: 0x42494c5c  .word       0x42494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2C9798 raw=0x42494C5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C979Cu;
        goto label_2c979c;
    }
    ctx->pc = 0x2C9794u;
    {
        const bool branch_taken_0x2c9794 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c9794) {
            ctx->pc = 0x2C9798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9794u;
            // 0x2c9798: 0x42494c5c  .word       0x42494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//             throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2C9798 raw=0x42494C5C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8ECu;
            return;
        }
    }
    ctx->pc = 0x2C979Cu;
label_2c979c:
    // 0x2c979c: 0x492e4453  .word       0x492E4453                   # INVALID     $t1, $t6, 0x4453 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c979cu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2C979C raw=0x492E4453");
 /* MITIGATED */
label_2c97a0:
    // 0x2c97a0: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c97a0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_2c97a4:
    // 0x2c97a4: 0x0  nop
    ctx->pc = 0x2c97a4u;
    // NOP
label_2c97a8:
    // 0x2c97a8: 0x0  nop
    ctx->pc = 0x2c97a8u;
    // NOP
label_2c97ac:
    // 0x2c97ac: 0x0  nop
    ctx->pc = 0x2c97acu;
    // NOP
label_2c97b0:
    // 0x2c97b0: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c97b0u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c97b4:
    // 0x2c97b4: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c97b8:
    if (ctx->pc == 0x2C97B8u) {
        ctx->pc = 0x2C97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97B4u;
        // 0x2c97b8: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97BCu;
        goto label_2c97bc;
    }
    ctx->pc = 0x2C97B4u;
    {
        const bool branch_taken_0x2c97b4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c97b4) {
            ctx->pc = 0x2C97B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97B4u;
            // 0x2c97b8: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC90Cu;
            return;
        }
    }
    ctx->pc = 0x2C97BCu;
label_2c97bc:
    // 0x2c97bc: 0x4e595348  .word       0x4E595348                   # INVALID     $s2, $t9, 0x5348 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c97bcu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C97BC raw=0x4E595348");
 /* MITIGATED */
label_2c97c0:
    // 0x2c97c0: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2c97c4:
    if (ctx->pc == 0x2C97C4u) {
        ctx->pc = 0x2C97C8u;
        goto label_2c97c8;
    }
    ctx->pc = 0x2C97C0u;
    {
        const bool branch_taken_0x2c97c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c97c0) {
            ctx->pc = 0x2DBC7Cu;
            return;
        }
    }
    ctx->pc = 0x2C97C8u;
label_2c97c8:
    // 0x2c97c8: 0x0  nop
    ctx->pc = 0x2c97c8u;
    // NOP
label_2c97cc:
    // 0x2c97cc: 0x0  nop
    ctx->pc = 0x2c97ccu;
    // NOP
label_2c97d0:
    // 0x2c97d0: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c97d0u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c97d4:
    // 0x2c97d4: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c97d8:
    if (ctx->pc == 0x2C97D8u) {
        ctx->pc = 0x2C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D4u;
        // 0x2c97d8: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97DCu;
        goto label_2c97dc;
    }
    ctx->pc = 0x2C97D4u;
    {
        const bool branch_taken_0x2c97d4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c97d4) {
            ctx->pc = 0x2C97D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97D4u;
            // 0x2c97d8: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC92Cu;
            return;
        }
    }
    ctx->pc = 0x2C97DCu;
label_2c97dc:
    // 0x2c97dc: 0x4e49534d  .word       0x4E49534D                   # INVALID     $s2, $t1, 0x534D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c97dcu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C97DC raw=0x4E49534D");
 /* MITIGATED */
label_2c97e0:
    // 0x2c97e0: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2c97e4:
    if (ctx->pc == 0x2C97E4u) {
        ctx->pc = 0x2C97E8u;
        goto label_2c97e8;
    }
    ctx->pc = 0x2C97E0u;
    {
        const bool branch_taken_0x2c97e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c97e0) {
            ctx->pc = 0x2DBC9Cu;
            return;
        }
    }
    ctx->pc = 0x2C97E8u;
label_2c97e8:
    // 0x2c97e8: 0x0  nop
    ctx->pc = 0x2c97e8u;
    // NOP
label_2c97ec:
    // 0x2c97ec: 0x0  nop
    ctx->pc = 0x2c97ecu;
    // NOP
label_2c97f0:
    // 0x2c97f0: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c97f0u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2c97f4:
    // 0x2c97f4: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_2c97f8:
    if (ctx->pc == 0x2C97F8u) {
        ctx->pc = 0x2C97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97F4u;
        // 0x2c97f8: 0x5244435c  beql        $s2, $a0, . + 4 + (0x435C << 2) (Delay Slot)
        // Likely branch instruction at 0x2C97F8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97FCu;
        goto label_2c97fc;
    }
    ctx->pc = 0x2C97F4u;
    {
        const bool branch_taken_0x2c97f4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c97f4) {
            ctx->pc = 0x2C97F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97F4u;
            // 0x2c97f8: 0x5244435c  beql        $s2, $a0, . + 4 + (0x435C << 2) (Delay Slot)
            // Likely branch instruction at 0x2C97F8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC94Cu;
            return;
        }
    }
    ctx->pc = 0x2C97FCu;
label_2c97fc:
    // 0x2c97fc: 0x4b5c4d4f  vmsubw.xz   $vf21, $vf9, $vf28w
    ctx->pc = 0x2c97fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c9800:
    // 0x2c9800: 0x5349454f  beql        $k0, $t1, . + 4 + (0x454F << 2)
label_2c9804:
    if (ctx->pc == 0x2C9804u) {
        ctx->pc = 0x2C9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9800u;
        // 0x2c9804: 0x492e444e  .word       0x492E444E                   # INVALID     $t1, $t6, 0x444E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2C9804 raw=0x492E444E");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9808u;
        goto label_2c9808;
    }
    ctx->pc = 0x2C9800u;
    {
        const bool branch_taken_0x2c9800 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c9800) {
            ctx->pc = 0x2C9804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9800u;
            // 0x2c9804: 0x492e444e  .word       0x492E444E                   # INVALID     $t1, $t6, 0x444E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//             throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2C9804 raw=0x492E444E");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAD40u;
            return;
        }
    }
    ctx->pc = 0x2C9808u;
label_2c9808:
    // 0x2c9808: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9808u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_2c980c:
    // 0x2c980c: 0x0  nop
    ctx->pc = 0x2c980cu;
    // NOP
label_2c9810:
    // 0x2c9810: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c9810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9814:
    // 0x2c9814: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_2c9818:
    if (ctx->pc == 0x2C9818u) {
        ctx->pc = 0x2C9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9814u;
        // 0x2c9818: 0x55444f4d  bnel        $t2, $a0, . + 4 + (0x4F4D << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9818 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C981Cu;
        goto label_2c981c;
    }
    ctx->pc = 0x2C9814u;
    {
        const bool branch_taken_0x2c9814 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2c9814) {
            ctx->pc = 0x2C9818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9814u;
            // 0x2c9818: 0x55444f4d  bnel        $t2, $a0, . + 4 + (0x4F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9818 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59CCu;
            return;
        }
    }
    ctx->pc = 0x2C981Cu;
label_2c981c:
    // 0x2c981c: 0x5c53454c  .word       0x5C53454C                   # bgtzl       $v0, . + 4 + (0x454C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2c9820:
    if (ctx->pc == 0x2C9820u) {
        ctx->pc = 0x2C9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C981Cu;
        // 0x2c9820: 0x52504f49  beql        $s2, $s0, . + 4 + (0x4F49 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9820 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9824u;
        goto label_2c9824;
    }
    ctx->pc = 0x2C981Cu;
    {
        const bool branch_taken_0x2c981c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c981c) {
            ctx->pc = 0x2C9820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C981Cu;
            // 0x2c9820: 0x52504f49  beql        $s2, $s0, . + 4 + (0x4F49 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9820 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAD50u;
            return;
        }
    }
    ctx->pc = 0x2C9824u;
label_2c9824:
    // 0x2c9824: 0x33353250  andi        $s5, $t9, 0x3250
    ctx->pc = 0x2c9824u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12880);
label_2c9828:
    // 0x2c9828: 0x474d492e  .word       0x474D492E                   # INVALID     $k0, $t5, 0x492E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9828u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x2E at 0x2C9828 raw=0x474D492E");
 /* MITIGATED */
label_2c982c:
    // 0x2c982c: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x2c982cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_2c9830:
    // 0x2c9830: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x2c9830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9834:
    // 0x2c9834: 0x3a306d  .word       0x003A306D                   # daddu       $a2, $at, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 26));
label_2c9838:
    // 0x2c9838: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x2c9838u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_2c983c:
    // 0x2c983c: 0x0  nop
    ctx->pc = 0x2c983cu;
    // NOP
label_2c9840:
    // 0x2c9840: 0x0  nop
    ctx->pc = 0x2c9840u;
    // NOP
label_2c9844:
    // 0x2c9844: 0x0  nop
    ctx->pc = 0x2c9844u;
    // NOP
label_2c9848:
    // 0x2c9848: 0x0  nop
    ctx->pc = 0x2c9848u;
    // NOP
label_2c984c:
    // 0x2c984c: 0x0  nop
    ctx->pc = 0x2c984cu;
    // NOP
label_2c9850:
    // 0x2c9850: 0x1835d0  .word       0x001835D0                   # mfhi        $a2 # 001805C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9850u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2c9854:
    // 0x2c9854: 0x18382c  dadd        $a3, $zero, $t8
    ctx->pc = 0x2c9854u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_2c9858:
    // 0x2c9858: 0x18385c  .word       0x0018385C                   # dmult       $zero, $t8 # 00003840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9858u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9858 raw=0x0018385C");
 /* MITIGATED */
label_2c985c:
    // 0x2c985c: 0x183a74  teq         $zero, $t8, 233
    ctx->pc = 0x2c985cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2c9860:
    // 0x2c9860: 0x183a74  teq         $zero, $t8, 233
    ctx->pc = 0x2c9860u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2c9864:
    // 0x2c9864: 0x183844  .word       0x00183844                   # sllv        $a3, $t8, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 0) & 0x1F));
label_2c9868:
    // 0x2c9868: 0x183844  .word       0x00183844                   # sllv        $a3, $t8, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 0) & 0x1F));
label_2c986c:
    // 0x2c986c: 0x0  nop
    ctx->pc = 0x2c986cu;
    // NOP
label_2c9870:
    // 0x2c9870: 0x183e68  .word       0x00183E68                   # mfsa        $a3 # 00180640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9870u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2c9874:
    // 0x2c9874: 0x183ee8  .word       0x00183EE8                   # mfsa        $a3 # 001806C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9874u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2c9878:
    // 0x2c9878: 0x183fa0  .word       0x00183FA0                   # add         $a3, $zero, $t8 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9878u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2c987c:
    // 0x2c987c: 0x183ff0  tge         $zero, $t8, 255
    ctx->pc = 0x2c987cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2c9880:
    // 0x2c9880: 0x183ff0  tge         $zero, $t8, 255
    ctx->pc = 0x2c9880u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2c9884:
    // 0x2c9884: 0x183f60  .word       0x00183F60                   # add         $a3, $zero, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2c9888:
    // 0x2c9888: 0x183f60  .word       0x00183F60                   # add         $a3, $zero, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2c988c:
    // 0x2c988c: 0x0  nop
    ctx->pc = 0x2c988cu;
    // NOP
label_2c9890:
    // 0x2c9890: 0x3a647473  xori        $a0, $s3, 0x7473
    ctx->pc = 0x2c9890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29811);
label_2c9894:
    // 0x2c9894: 0x6378653a  daddi       $t8, $k1, 0x653A
    ctx->pc = 0x2c9894u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25914; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_2c9898:
    // 0x2c9898: 0x69747065  ldl         $s4, 0x7065($t3)
    ctx->pc = 0x2c9898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28773); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c989c:
    // 0x2c989c: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c989cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c98a0:
    // 0x2c98a0: 0x2c9890  .word       0x002C9890                   # mfhi        $s3 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c98a0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2c98a4:
    // 0x2c98a4: 0x0  nop
    ctx->pc = 0x2c98a4u;
    // NOP
label_2c98a8:
    // 0x2c98a8: 0x65637865  daddiu      $v1, $t3, 0x7865
    ctx->pc = 0x2c98a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30821);
label_2c98ac:
    // 0x2c98ac: 0x6f697470  ldr         $t1, 0x7470($k1)
    ctx->pc = 0x2c98acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c98b0:
    // 0x2c98b0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c98b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c98b4:
    // 0x2c98b4: 0x0  nop
    ctx->pc = 0x2c98b4u;
    // NOP
label_2c98b8:
    // 0x2c98b8: 0x0  nop
    ctx->pc = 0x2c98b8u;
    // NOP
label_2c98bc:
    // 0x2c98bc: 0x0  nop
    ctx->pc = 0x2c98bcu;
    // NOP
label_2c98c0:
    // 0x2c98c0: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98c0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98c4:
    // 0x2c98c4: 0x196cd4  .word       0x00196CD4                   # dsllv       $t5, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c98c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 25) << (GPR_U32(ctx, 0) & 0x3F));
label_2c98c8:
    // 0x2c98c8: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98c8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98cc:
    // 0x2c98cc: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98ccu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98d0:
    // 0x2c98d0: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98d0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98d4:
    // 0x2c98d4: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98d4u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98d8:
    // 0x2c98d8: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98d8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98dc:
    // 0x2c98dc: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98dcu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98e0:
    // 0x2c98e0: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98e0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98e4:
    // 0x2c98e4: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98e4u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98e8:
    // 0x2c98e8: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98e8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98ec:
    // 0x2c98ec: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98ecu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98f0:
    // 0x2c98f0: 0x196b34  teq         $zero, $t9, 428
    ctx->pc = 0x2c98f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c98f4:
    // 0x2c98f4: 0x196ce8  .word       0x00196CE8                   # mfsa        $t5 # 001904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c98f4u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c98f8:
    // 0x2c98f8: 0x196cd4  .word       0x00196CD4                   # dsllv       $t5, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c98f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 25) << (GPR_U32(ctx, 0) & 0x3F));
label_2c98fc:
    // 0x2c98fc: 0x196bbc  dsll32      $t5, $t9, 14
    ctx->pc = 0x2c98fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 25) << (32 + 14));
label_2c9900:
    // 0x2c9900: 0x64747321  daddiu      $s4, $v1, 0x7321
    ctx->pc = 0x2c9900u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29473);
label_2c9904:
    // 0x2c9904: 0x61623a3a  daddi       $v0, $t3, 0x3A3A
    ctx->pc = 0x2c9904u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)14906; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2c9908:
    // 0x2c9908: 0x78655f64  lq          $a1, 0x5F64($v1)
    ctx->pc = 0x2c9908u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 24420)));
label_2c990c:
    // 0x2c990c: 0x74706563  .word       0x74706563                   # INVALID     $v1, $s0, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c990cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C990C raw=0x74706563");
 /* MITIGATED */
label_2c9910:
    // 0x2c9910: 0x216e6f69  addi        $t6, $t3, 0x6F69
    ctx->pc = 0x2c9910u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c9914:
    // 0x2c9914: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2c9914u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c9918:
    // 0x2c9918: 0x0  nop
    ctx->pc = 0x2c9918u;
    // NOP
label_2c991c:
    // 0x2c991c: 0x0  nop
    ctx->pc = 0x2c991cu;
    // NOP
label_2c9920:
    // 0x2c9920: 0x64747321  daddiu      $s4, $v1, 0x7321
    ctx->pc = 0x2c9920u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29473);
label_2c9924:
    // 0x2c9924: 0x78653a3a  lq          $a1, 0x3A3A($v1)
    ctx->pc = 0x2c9924u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 14906)));
label_2c9928:
    // 0x2c9928: 0x74706563  .word       0x74706563                   # INVALID     $v1, $s0, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9928u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9928 raw=0x74706563");
 /* MITIGATED */
label_2c992c:
    // 0x2c992c: 0x216e6f69  addi        $t6, $t3, 0x6F69
    ctx->pc = 0x2c992cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c9930:
    // 0x2c9930: 0x64747321  daddiu      $s4, $v1, 0x7321
    ctx->pc = 0x2c9930u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29473);
label_2c9934:
    // 0x2c9934: 0x61623a3a  daddi       $v0, $t3, 0x3A3A
    ctx->pc = 0x2c9934u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)14906; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2c9938:
    // 0x2c9938: 0x78655f64  lq          $a1, 0x5F64($v1)
    ctx->pc = 0x2c9938u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 24420)));
label_2c993c:
    // 0x2c993c: 0x74706563  .word       0x74706563                   # INVALID     $v1, $s0, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c993cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C993C raw=0x74706563");
 /* MITIGATED */
label_2c9940:
    // 0x2c9940: 0x216e6f69  addi        $t6, $t3, 0x6F69
    ctx->pc = 0x2c9940u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c9944:
    // 0x2c9944: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2c9944u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c9948:
    // 0x2c9948: 0x0  nop
    ctx->pc = 0x2c9948u;
    // NOP
label_2c994c:
    // 0x2c994c: 0x0  nop
    ctx->pc = 0x2c994cu;
    // NOP
label_2c9950:
    // 0x2c9950: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c9954:
    if (ctx->pc == 0x2C9954u) {
        ctx->pc = 0x2C9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9950u;
        // 0x2c9954: 0x197078  dsll        $t6, $t9, 1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9958u;
        goto label_2c9958;
    }
    ctx->pc = 0x2C9950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9950u;
        // 0x2c9954: 0x197078  dsll        $t6, $t9, 1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9958u;
label_2c9958:
    // 0x2c9958: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c995c:
    if (ctx->pc == 0x2C995Cu) {
        ctx->pc = 0x2C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9958u;
        // 0x2c995c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9960u;
        goto label_2c9960;
    }
    ctx->pc = 0x2C9958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9958u;
        // 0x2c995c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9958u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9960u;
label_2c9960:
    // 0x2c9960: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c9964:
    if (ctx->pc == 0x2C9964u) {
        ctx->pc = 0x2C9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9960u;
        // 0x2c9964: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9968u;
        goto label_2c9968;
    }
    ctx->pc = 0x2C9960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9960u;
        // 0x2c9964: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9960u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9968u;
label_2c9968:
    // 0x2c9968: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c996c:
    if (ctx->pc == 0x2C996Cu) {
        ctx->pc = 0x2C996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9968u;
        // 0x2c996c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9970u;
        goto label_2c9970;
    }
    ctx->pc = 0x2C9968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9968u;
        // 0x2c996c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9968u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9970u;
label_2c9970:
    // 0x2c9970: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c9974:
    if (ctx->pc == 0x2C9974u) {
        ctx->pc = 0x2C9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9970u;
        // 0x2c9974: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9978u;
        goto label_2c9978;
    }
    ctx->pc = 0x2C9970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9970u;
        // 0x2c9974: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9970u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9978u;
label_2c9978:
    // 0x2c9978: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c997c:
    if (ctx->pc == 0x2C997Cu) {
        ctx->pc = 0x2C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9978u;
        // 0x2c997c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9980u;
        goto label_2c9980;
    }
    ctx->pc = 0x2C9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9978u;
        // 0x2c997c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9980u;
label_2c9980:
    // 0x2c9980: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c9984:
    if (ctx->pc == 0x2C9984u) {
        ctx->pc = 0x2C9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9980u;
        // 0x2c9984: 0x197098  .word       0x00197098                   # mult        $t6, $zero, $t9 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9988u;
        goto label_2c9988;
    }
    ctx->pc = 0x2C9980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9980u;
        // 0x2c9984: 0x197098  .word       0x00197098                   # mult        $t6, $zero, $t9 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9988u;
label_2c9988:
    // 0x2c9988: 0x197078  dsll        $t6, $t9, 1
    ctx->pc = 0x2c9988u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) << 1);
label_2c998c:
    // 0x2c998c: 0x197088  .word       0x00197088                   # jr          $zero # 00197080 <InstrIdType: CPU_SPECIAL>
label_2c9990:
    if (ctx->pc == 0x2C9990u) {
        ctx->pc = 0x2C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C998Cu;
        // 0x2c9990: 0x197904  .word       0x00197904                   # sllv        $t7, $t9, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9994u;
        goto label_2c9994;
    }
    ctx->pc = 0x2C998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C998Cu;
        // 0x2c9990: 0x197904  .word       0x00197904                   # sllv        $t7, $t9, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C998Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9994u;
label_2c9994:
    // 0x2c9994: 0x1971a0  .word       0x001971A0                   # add         $t6, $zero, $t9 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2c9998:
    // 0x2c9998: 0x1971c0  sll         $t6, $t9, 7
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
label_2c999c:
    // 0x2c999c: 0x197218  .word       0x00197218                   # mult        $t6, $zero, $t9 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c999cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c99a0:
    // 0x2c99a0: 0x1972b8  dsll        $t6, $t9, 10
    ctx->pc = 0x2c99a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) << 10);
label_2c99a4:
    // 0x2c99a4: 0x197340  sll         $t6, $t9, 13
    ctx->pc = 0x2c99a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
label_2c99a8:
    // 0x2c99a8: 0x1973d8  .word       0x001973D8                   # mult        $t6, $zero, $t9 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c99a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c99ac:
    // 0x2c99ac: 0x19746c  .word       0x0019746C                   # dadd        $t6, $zero, $t9 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c99b0:
    // 0x2c99b0: 0x197504  .word       0x00197504                   # sllv        $t6, $t9, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c99b4:
    // 0x2c99b4: 0x1975f0  tge         $zero, $t9, 471
    ctx->pc = 0x2c99b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c99b8:
    // 0x2c99b8: 0x1976d0  .word       0x001976D0                   # mfhi        $t6 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99b8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c99bc:
    // 0x2c99bc: 0x197750  .word       0x00197750                   # mfhi        $t6 # 00190740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99bcu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c99c0:
    // 0x2c99c0: 0x197820  add         $t7, $zero, $t9
    ctx->pc = 0x2c99c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2c99c4:
    // 0x2c99c4: 0x197874  teq         $zero, $t9, 481
    ctx->pc = 0x2c99c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c99c8:
    // 0x2c99c8: 0x197904  .word       0x00197904                   # sllv        $t7, $t9, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c99cc:
    // 0x2c99cc: 0x1978c8  .word       0x001978C8                   # jr          $zero # 001978C0 <InstrIdType: CPU_SPECIAL>
label_2c99d0:
    if (ctx->pc == 0x2C99D0u) {
        ctx->pc = 0x2C99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99CCu;
        // 0x2c99d0: 0x197c18  .word       0x00197C18                   # mult        $t7, $zero, $t9 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99D4u;
        goto label_2c99d4;
    }
    ctx->pc = 0x2C99CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99CCu;
        // 0x2c99d0: 0x197c18  .word       0x00197C18                   # mult        $t7, $zero, $t9 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C99CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C99D4u;
label_2c99d4:
    // 0x2c99d4: 0x197c18  .word       0x00197C18                   # mult        $t7, $zero, $t9 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c99d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c99d8:
    // 0x2c99d8: 0x197a0c  .word       0x00197A0C                   # syscall     488 # 00190000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99d8u;
    ctx->pc = 0x2C99DCu;
runtime->handleSyscall(rdram, ctx, 0x65E8u);
label_2c99dc:
    // 0x2c99dc: 0x197a24  .word       0x00197A24                   # and         $t7, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c99e0:
    // 0x2c99e0: 0x197a48  .word       0x00197A48                   # jr          $zero # 00197A40 <InstrIdType: CPU_SPECIAL>
label_2c99e4:
    if (ctx->pc == 0x2C99E4u) {
        ctx->pc = 0x2C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99E0u;
        // 0x2c99e4: 0x197a60  .word       0x00197A60                   # add         $t7, $zero, $t9 # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99E8u;
        goto label_2c99e8;
    }
    ctx->pc = 0x2C99E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99E0u;
        // 0x2c99e4: 0x197a60  .word       0x00197A60                   # add         $t7, $zero, $t9 # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C99E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C99E8u;
label_2c99e8:
    // 0x2c99e8: 0x197a90  .word       0x00197A90                   # mfhi        $t7 # 00190280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99e8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2c99ec:
    // 0x2c99ec: 0x197ab4  teq         $zero, $t9, 490
    ctx->pc = 0x2c99ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c99f0:
    // 0x2c99f0: 0x197ad8  .word       0x00197AD8                   # mult        $t7, $zero, $t9 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c99f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c99f4:
    // 0x2c99f4: 0x197b08  .word       0x00197B08                   # jr          $zero # 00197B00 <InstrIdType: CPU_SPECIAL>
label_2c99f8:
    if (ctx->pc == 0x2C99F8u) {
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99F4u;
        // 0x2c99f8: 0x197b44  .word       0x00197B44                   # sllv        $t7, $t9, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99FCu;
        goto label_2c99fc;
    }
    ctx->pc = 0x2C99F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99F4u;
        // 0x2c99f8: 0x197b44  .word       0x00197B44                   # sllv        $t7, $t9, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C99F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C99FCu;
label_2c99fc:
    // 0x2c99fc: 0x197b5c  .word       0x00197B5C                   # dmult       $zero, $t9 # 00007B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c99fcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C99FC raw=0x00197B5C");
 /* MITIGATED */
label_2c9a00:
    // 0x2c9a00: 0x197b80  sll         $t7, $t9, 14
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), 14));
label_2c9a04:
    // 0x2c9a04: 0x197bcc  .word       0x00197BCC                   # syscall     495 # 00190000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a04u;
    ctx->pc = 0x2C9A08u;
runtime->handleSyscall(rdram, ctx, 0x65EFu);
label_2c9a08:
    // 0x2c9a08: 0x197c18  .word       0x00197C18                   # mult        $t7, $zero, $t9 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c9a0c:
    // 0x2c9a0c: 0x197be0  .word       0x00197BE0                   # add         $t7, $zero, $t9 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2c9a10:
    // 0x2c9a10: 0x3a647473  xori        $a0, $s3, 0x7473
    ctx->pc = 0x2c9a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29811);
label_2c9a14:
    // 0x2c9a14: 0x6461623a  daddiu      $at, $v1, 0x623A
    ctx->pc = 0x2c9a14u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25146);
label_2c9a18:
    // 0x2c9a18: 0x6378655f  daddi       $t8, $k1, 0x655F
    ctx->pc = 0x2c9a18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25951; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_2c9a1c:
    // 0x2c9a1c: 0x69747065  ldl         $s4, 0x7065($t3)
    ctx->pc = 0x2c9a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28773); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    ctx->pc = 0x2c9a20u;
    return;
}

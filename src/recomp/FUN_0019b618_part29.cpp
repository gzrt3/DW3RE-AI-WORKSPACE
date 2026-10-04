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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part29(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a90fcu: goto label_1a90fc;
        case 0x1a9100u: goto label_1a9100;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9108u: goto label_1a9108;
        case 0x1a910cu: goto label_1a910c;
        case 0x1a9110u: goto label_1a9110;
        case 0x1a9114u: goto label_1a9114;
        case 0x1a9118u: goto label_1a9118;
        case 0x1a911cu: goto label_1a911c;
        case 0x1a9120u: goto label_1a9120;
        case 0x1a9124u: goto label_1a9124;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a912cu: goto label_1a912c;
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        case 0x1a9168u: goto label_1a9168;
        case 0x1a916cu: goto label_1a916c;
        case 0x1a9170u: goto label_1a9170;
        case 0x1a9174u: goto label_1a9174;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a9180u: goto label_1a9180;
        case 0x1a9184u: goto label_1a9184;
        case 0x1a9188u: goto label_1a9188;
        case 0x1a918cu: goto label_1a918c;
        case 0x1a9190u: goto label_1a9190;
        case 0x1a9194u: goto label_1a9194;
        case 0x1a9198u: goto label_1a9198;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a0u: goto label_1a91a0;
        case 0x1a91a4u: goto label_1a91a4;
        case 0x1a91a8u: goto label_1a91a8;
        case 0x1a91acu: goto label_1a91ac;
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91b4u: goto label_1a91b4;
        case 0x1a91b8u: goto label_1a91b8;
        case 0x1a91bcu: goto label_1a91bc;
        case 0x1a91c0u: goto label_1a91c0;
        case 0x1a91c4u: goto label_1a91c4;
        case 0x1a91c8u: goto label_1a91c8;
        case 0x1a91ccu: goto label_1a91cc;
        case 0x1a91d0u: goto label_1a91d0;
        case 0x1a91d4u: goto label_1a91d4;
        case 0x1a91d8u: goto label_1a91d8;
        case 0x1a91dcu: goto label_1a91dc;
        case 0x1a91e0u: goto label_1a91e0;
        case 0x1a91e4u: goto label_1a91e4;
        case 0x1a91e8u: goto label_1a91e8;
        case 0x1a91ecu: goto label_1a91ec;
        case 0x1a91f0u: goto label_1a91f0;
        case 0x1a91f4u: goto label_1a91f4;
        case 0x1a91f8u: goto label_1a91f8;
        case 0x1a91fcu: goto label_1a91fc;
        case 0x1a9200u: goto label_1a9200;
        case 0x1a9204u: goto label_1a9204;
        case 0x1a9208u: goto label_1a9208;
        case 0x1a920cu: goto label_1a920c;
        case 0x1a9210u: goto label_1a9210;
        case 0x1a9214u: goto label_1a9214;
        case 0x1a9218u: goto label_1a9218;
        case 0x1a921cu: goto label_1a921c;
        case 0x1a9220u: goto label_1a9220;
        case 0x1a9224u: goto label_1a9224;
        case 0x1a9228u: goto label_1a9228;
        case 0x1a922cu: goto label_1a922c;
        case 0x1a9230u: goto label_1a9230;
        case 0x1a9234u: goto label_1a9234;
        case 0x1a9238u: goto label_1a9238;
        case 0x1a923cu: goto label_1a923c;
        case 0x1a9240u: goto label_1a9240;
        case 0x1a9244u: goto label_1a9244;
        case 0x1a9248u: goto label_1a9248;
        case 0x1a924cu: goto label_1a924c;
        case 0x1a9250u: goto label_1a9250;
        case 0x1a9254u: goto label_1a9254;
        case 0x1a9258u: goto label_1a9258;
        case 0x1a925cu: goto label_1a925c;
        case 0x1a9260u: goto label_1a9260;
        case 0x1a9264u: goto label_1a9264;
        case 0x1a9268u: goto label_1a9268;
        case 0x1a926cu: goto label_1a926c;
        case 0x1a9270u: goto label_1a9270;
        case 0x1a9274u: goto label_1a9274;
        case 0x1a9278u: goto label_1a9278;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a9280u: goto label_1a9280;
        case 0x1a9284u: goto label_1a9284;
        case 0x1a9288u: goto label_1a9288;
        case 0x1a928cu: goto label_1a928c;
        case 0x1a9290u: goto label_1a9290;
        case 0x1a9294u: goto label_1a9294;
        case 0x1a9298u: goto label_1a9298;
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92a0u: goto label_1a92a0;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92a8u: goto label_1a92a8;
        case 0x1a92acu: goto label_1a92ac;
        case 0x1a92b0u: goto label_1a92b0;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92bcu: goto label_1a92bc;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a92c4u: goto label_1a92c4;
        case 0x1a92c8u: goto label_1a92c8;
        case 0x1a92ccu: goto label_1a92cc;
        case 0x1a92d0u: goto label_1a92d0;
        case 0x1a92d4u: goto label_1a92d4;
        case 0x1a92d8u: goto label_1a92d8;
        case 0x1a92dcu: goto label_1a92dc;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92e4u: goto label_1a92e4;
        case 0x1a92e8u: goto label_1a92e8;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a92f0u: goto label_1a92f0;
        case 0x1a92f4u: goto label_1a92f4;
        case 0x1a92f8u: goto label_1a92f8;
        case 0x1a92fcu: goto label_1a92fc;
        case 0x1a9300u: goto label_1a9300;
        case 0x1a9304u: goto label_1a9304;
        case 0x1a9308u: goto label_1a9308;
        case 0x1a930cu: goto label_1a930c;
        case 0x1a9310u: goto label_1a9310;
        case 0x1a9314u: goto label_1a9314;
        case 0x1a9318u: goto label_1a9318;
        case 0x1a931cu: goto label_1a931c;
        case 0x1a9320u: goto label_1a9320;
        case 0x1a9324u: goto label_1a9324;
        case 0x1a9328u: goto label_1a9328;
        case 0x1a932cu: goto label_1a932c;
        case 0x1a9330u: goto label_1a9330;
        case 0x1a9334u: goto label_1a9334;
        case 0x1a9338u: goto label_1a9338;
        case 0x1a933cu: goto label_1a933c;
        case 0x1a9340u: goto label_1a9340;
        case 0x1a9344u: goto label_1a9344;
        case 0x1a9348u: goto label_1a9348;
        case 0x1a934cu: goto label_1a934c;
        case 0x1a9350u: goto label_1a9350;
        case 0x1a9354u: goto label_1a9354;
        case 0x1a9358u: goto label_1a9358;
        case 0x1a935cu: goto label_1a935c;
        case 0x1a9360u: goto label_1a9360;
        case 0x1a9364u: goto label_1a9364;
        case 0x1a9368u: goto label_1a9368;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9370u: goto label_1a9370;
        case 0x1a9374u: goto label_1a9374;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a9384u: goto label_1a9384;
        case 0x1a9388u: goto label_1a9388;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9418u: goto label_1a9418;
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9420u: goto label_1a9420;
        case 0x1a9424u: goto label_1a9424;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a942cu: goto label_1a942c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9434u: goto label_1a9434;
        case 0x1a9438u: goto label_1a9438;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9440u: goto label_1a9440;
        case 0x1a9444u: goto label_1a9444;
        case 0x1a9448u: goto label_1a9448;
        case 0x1a944cu: goto label_1a944c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9454u: goto label_1a9454;
        case 0x1a9458u: goto label_1a9458;
        case 0x1a945cu: goto label_1a945c;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9464u: goto label_1a9464;
        case 0x1a9468u: goto label_1a9468;
        case 0x1a946cu: goto label_1a946c;
        case 0x1a9470u: goto label_1a9470;
        case 0x1a9474u: goto label_1a9474;
        case 0x1a9478u: goto label_1a9478;
        case 0x1a947cu: goto label_1a947c;
        case 0x1a9480u: goto label_1a9480;
        case 0x1a9484u: goto label_1a9484;
        case 0x1a9488u: goto label_1a9488;
        case 0x1a948cu: goto label_1a948c;
        case 0x1a9490u: goto label_1a9490;
        case 0x1a9494u: goto label_1a9494;
        case 0x1a9498u: goto label_1a9498;
        case 0x1a949cu: goto label_1a949c;
        case 0x1a94a0u: goto label_1a94a0;
        case 0x1a94a4u: goto label_1a94a4;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94acu: goto label_1a94ac;
        case 0x1a94b0u: goto label_1a94b0;
        case 0x1a94b4u: goto label_1a94b4;
        case 0x1a94b8u: goto label_1a94b8;
        case 0x1a94bcu: goto label_1a94bc;
        case 0x1a94c0u: goto label_1a94c0;
        case 0x1a94c4u: goto label_1a94c4;
        case 0x1a94c8u: goto label_1a94c8;
        case 0x1a94ccu: goto label_1a94cc;
        case 0x1a94d0u: goto label_1a94d0;
        case 0x1a94d4u: goto label_1a94d4;
        case 0x1a94d8u: goto label_1a94d8;
        case 0x1a94dcu: goto label_1a94dc;
        case 0x1a94e0u: goto label_1a94e0;
        case 0x1a94e4u: goto label_1a94e4;
        case 0x1a94e8u: goto label_1a94e8;
        case 0x1a94ecu: goto label_1a94ec;
        case 0x1a94f0u: goto label_1a94f0;
        case 0x1a94f4u: goto label_1a94f4;
        case 0x1a94f8u: goto label_1a94f8;
        case 0x1a94fcu: goto label_1a94fc;
        case 0x1a9500u: goto label_1a9500;
        case 0x1a9504u: goto label_1a9504;
        case 0x1a9508u: goto label_1a9508;
        case 0x1a950cu: goto label_1a950c;
        case 0x1a9510u: goto label_1a9510;
        case 0x1a9514u: goto label_1a9514;
        case 0x1a9518u: goto label_1a9518;
        case 0x1a951cu: goto label_1a951c;
        case 0x1a9520u: goto label_1a9520;
        case 0x1a9524u: goto label_1a9524;
        case 0x1a9528u: goto label_1a9528;
        case 0x1a952cu: goto label_1a952c;
        case 0x1a9530u: goto label_1a9530;
        case 0x1a9534u: goto label_1a9534;
        case 0x1a9538u: goto label_1a9538;
        case 0x1a953cu: goto label_1a953c;
        case 0x1a9540u: goto label_1a9540;
        case 0x1a9544u: goto label_1a9544;
        case 0x1a9548u: goto label_1a9548;
        case 0x1a954cu: goto label_1a954c;
        case 0x1a9550u: goto label_1a9550;
        case 0x1a9554u: goto label_1a9554;
        case 0x1a9558u: goto label_1a9558;
        case 0x1a955cu: goto label_1a955c;
        case 0x1a9560u: goto label_1a9560;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9568u: goto label_1a9568;
        case 0x1a956cu: goto label_1a956c;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a9574u: goto label_1a9574;
        case 0x1a9578u: goto label_1a9578;
        case 0x1a957cu: goto label_1a957c;
        case 0x1a9580u: goto label_1a9580;
        case 0x1a9584u: goto label_1a9584;
        case 0x1a9588u: goto label_1a9588;
        case 0x1a958cu: goto label_1a958c;
        case 0x1a9590u: goto label_1a9590;
        case 0x1a9594u: goto label_1a9594;
        case 0x1a9598u: goto label_1a9598;
        case 0x1a959cu: goto label_1a959c;
        case 0x1a95a0u: goto label_1a95a0;
        case 0x1a95a4u: goto label_1a95a4;
        case 0x1a95a8u: goto label_1a95a8;
        case 0x1a95acu: goto label_1a95ac;
        case 0x1a95b0u: goto label_1a95b0;
        case 0x1a95b4u: goto label_1a95b4;
        case 0x1a95b8u: goto label_1a95b8;
        case 0x1a95bcu: goto label_1a95bc;
        case 0x1a95c0u: goto label_1a95c0;
        case 0x1a95c4u: goto label_1a95c4;
        case 0x1a95c8u: goto label_1a95c8;
        case 0x1a95ccu: goto label_1a95cc;
        case 0x1a95d0u: goto label_1a95d0;
        case 0x1a95d4u: goto label_1a95d4;
        case 0x1a95d8u: goto label_1a95d8;
        case 0x1a95dcu: goto label_1a95dc;
        case 0x1a95e0u: goto label_1a95e0;
        case 0x1a95e4u: goto label_1a95e4;
        case 0x1a95e8u: goto label_1a95e8;
        case 0x1a95ecu: goto label_1a95ec;
        case 0x1a95f0u: goto label_1a95f0;
        case 0x1a95f4u: goto label_1a95f4;
        case 0x1a95f8u: goto label_1a95f8;
        case 0x1a95fcu: goto label_1a95fc;
        case 0x1a9600u: goto label_1a9600;
        case 0x1a9604u: goto label_1a9604;
        case 0x1a9608u: goto label_1a9608;
        case 0x1a960cu: goto label_1a960c;
        case 0x1a9610u: goto label_1a9610;
        case 0x1a9614u: goto label_1a9614;
        case 0x1a9618u: goto label_1a9618;
        case 0x1a961cu: goto label_1a961c;
        case 0x1a9620u: goto label_1a9620;
        case 0x1a9624u: goto label_1a9624;
        case 0x1a9628u: goto label_1a9628;
        case 0x1a962cu: goto label_1a962c;
        case 0x1a9630u: goto label_1a9630;
        case 0x1a9634u: goto label_1a9634;
        case 0x1a9638u: goto label_1a9638;
        case 0x1a963cu: goto label_1a963c;
        case 0x1a9640u: goto label_1a9640;
        case 0x1a9644u: goto label_1a9644;
        case 0x1a9648u: goto label_1a9648;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9650u: goto label_1a9650;
        case 0x1a9654u: goto label_1a9654;
        case 0x1a9658u: goto label_1a9658;
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9664u: goto label_1a9664;
        case 0x1a9668u: goto label_1a9668;
        case 0x1a966cu: goto label_1a966c;
        case 0x1a9670u: goto label_1a9670;
        case 0x1a9674u: goto label_1a9674;
        case 0x1a9678u: goto label_1a9678;
        case 0x1a967cu: goto label_1a967c;
        case 0x1a9680u: goto label_1a9680;
        case 0x1a9684u: goto label_1a9684;
        case 0x1a9688u: goto label_1a9688;
        case 0x1a968cu: goto label_1a968c;
        case 0x1a9690u: goto label_1a9690;
        case 0x1a9694u: goto label_1a9694;
        case 0x1a9698u: goto label_1a9698;
        case 0x1a969cu: goto label_1a969c;
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96a4u: goto label_1a96a4;
        case 0x1a96a8u: goto label_1a96a8;
        case 0x1a96acu: goto label_1a96ac;
        case 0x1a96b0u: goto label_1a96b0;
        case 0x1a96b4u: goto label_1a96b4;
        case 0x1a96b8u: goto label_1a96b8;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96c0u: goto label_1a96c0;
        case 0x1a96c4u: goto label_1a96c4;
        case 0x1a96c8u: goto label_1a96c8;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a96d0u: goto label_1a96d0;
        case 0x1a96d4u: goto label_1a96d4;
        case 0x1a96d8u: goto label_1a96d8;
        case 0x1a96dcu: goto label_1a96dc;
        case 0x1a96e0u: goto label_1a96e0;
        case 0x1a96e4u: goto label_1a96e4;
        case 0x1a96e8u: goto label_1a96e8;
        case 0x1a96ecu: goto label_1a96ec;
        case 0x1a96f0u: goto label_1a96f0;
        case 0x1a96f4u: goto label_1a96f4;
        case 0x1a96f8u: goto label_1a96f8;
        case 0x1a96fcu: goto label_1a96fc;
        case 0x1a9700u: goto label_1a9700;
        case 0x1a9704u: goto label_1a9704;
        case 0x1a9708u: goto label_1a9708;
        case 0x1a970cu: goto label_1a970c;
        case 0x1a9710u: goto label_1a9710;
        case 0x1a9714u: goto label_1a9714;
        case 0x1a9718u: goto label_1a9718;
        case 0x1a971cu: goto label_1a971c;
        case 0x1a9720u: goto label_1a9720;
        case 0x1a9724u: goto label_1a9724;
        case 0x1a9728u: goto label_1a9728;
        case 0x1a972cu: goto label_1a972c;
        case 0x1a9730u: goto label_1a9730;
        case 0x1a9734u: goto label_1a9734;
        case 0x1a9738u: goto label_1a9738;
        case 0x1a973cu: goto label_1a973c;
        case 0x1a9740u: goto label_1a9740;
        case 0x1a9744u: goto label_1a9744;
        case 0x1a9748u: goto label_1a9748;
        case 0x1a974cu: goto label_1a974c;
        case 0x1a9750u: goto label_1a9750;
        case 0x1a9754u: goto label_1a9754;
        case 0x1a9758u: goto label_1a9758;
        case 0x1a975cu: goto label_1a975c;
        case 0x1a9760u: goto label_1a9760;
        case 0x1a9764u: goto label_1a9764;
        case 0x1a9768u: goto label_1a9768;
        case 0x1a976cu: goto label_1a976c;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9774u: goto label_1a9774;
        case 0x1a9778u: goto label_1a9778;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a9784u: goto label_1a9784;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e0u: goto label_1a97e0;
        case 0x1a97e4u: goto label_1a97e4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97ecu: goto label_1a97ec;
        case 0x1a97f0u: goto label_1a97f0;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a97f8u: goto label_1a97f8;
        case 0x1a97fcu: goto label_1a97fc;
        case 0x1a9800u: goto label_1a9800;
        case 0x1a9804u: goto label_1a9804;
        case 0x1a9808u: goto label_1a9808;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9814u: goto label_1a9814;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a981cu: goto label_1a981c;
        case 0x1a9820u: goto label_1a9820;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9828u: goto label_1a9828;
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9834u: goto label_1a9834;
        case 0x1a9838u: goto label_1a9838;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9840u: goto label_1a9840;
        case 0x1a9844u: goto label_1a9844;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a984cu: goto label_1a984c;
        case 0x1a9850u: goto label_1a9850;
        case 0x1a9854u: goto label_1a9854;
        case 0x1a9858u: goto label_1a9858;
        case 0x1a985cu: goto label_1a985c;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a9864u: goto label_1a9864;
        case 0x1a9868u: goto label_1a9868;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9870u: goto label_1a9870;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9878u: goto label_1a9878;
        case 0x1a987cu: goto label_1a987c;
        case 0x1a9880u: goto label_1a9880;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a988cu: goto label_1a988c;
        case 0x1a9890u: goto label_1a9890;
        case 0x1a9894u: goto label_1a9894;
        case 0x1a9898u: goto label_1a9898;
        case 0x1a989cu: goto label_1a989c;
        case 0x1a98a0u: goto label_1a98a0;
        case 0x1a98a4u: goto label_1a98a4;
        default: return;
    }

label_1a90d8:
    // 0x1a90d8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a90dc:
    // 0x1a90dc: 0xc069e2a  jal         func_1A78A8
label_1a90e0:
    if (ctx->pc == 0x1A90E0u) {
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90DCu;
        // 0x1a90e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90E4u;
        goto label_1a90e4;
    }
    ctx->pc = 0x1A90DCu;
    SET_GPR_U32(ctx, 31, 0x1A90E4u);
    ctx->pc = 0x1A90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90DCu;
    // 0x1a90e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A90E4u;
label_1a90e4:
    // 0x1a90e4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a90e8:
    if (ctx->pc == 0x1A90E8u) {
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90ECu;
        goto label_1a90ec;
    }
    ctx->pc = 0x1A90E4u;
    {
        const bool branch_taken_0x1a90e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e4) {
            ctx->pc = 0x1A9104u;
            goto label_1a9104;
        }
    }
    ctx->pc = 0x1A90ECu;
label_1a90ec:
    // 0x1a90ec: 0xc06920c  jal         func_1A4830
label_1a90f0:
    if (ctx->pc == 0x1A90F0u) {
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90F4u;
        goto label_1a90f4;
    }
    ctx->pc = 0x1A90ECu;
    SET_GPR_U32(ctx, 31, 0x1A90F4u);
    ctx->pc = 0x1A90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90ECu;
    // 0x1a90f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A90F4u;
label_1a90f4:
    // 0x1a90f4: 0xc06a158  jal         func_1A8560
label_1a90f8:
    if (ctx->pc == 0x1A90F8u) {
        ctx->pc = 0x1A90FCu;
        goto label_1a90fc;
    }
    ctx->pc = 0x1A90F4u;
    SET_GPR_U32(ctx, 31, 0x1A90FCu);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A90FCu;
label_1a90fc:
    // 0x1a90fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a9100:
    if (ctx->pc == 0x1A9100u) {
        ctx->pc = 0x1A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90FCu;
        // 0x1a9100: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9104u;
        goto label_1a9104;
    }
    ctx->pc = 0x1A90FCu;
    {
        const bool branch_taken_0x1a90fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90FCu;
        // 0x1a9100: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90fc) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A9104u;
label_1a9104:
    // 0x1a9104: 0xc06a158  jal         func_1A8560
label_1a9108:
    if (ctx->pc == 0x1A9108u) {
        ctx->pc = 0x1A9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9104u;
        // 0x1a9108: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A910Cu;
        goto label_1a910c;
    }
    ctx->pc = 0x1A9104u;
    SET_GPR_U32(ctx, 31, 0x1A910Cu);
    ctx->pc = 0x1A9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9104u;
    // 0x1a9108: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A910Cu;
label_1a910c:
    // 0x1a910c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9110:
    if (ctx->pc == 0x1A9110u) {
        ctx->pc = 0x1A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A910Cu;
        // 0x1a9110: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9114u;
        goto label_1a9114;
    }
    ctx->pc = 0x1A910Cu;
    {
        const bool branch_taken_0x1a910c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A910Cu;
        // 0x1a9110: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a910c) {
            ctx->pc = 0x1A9124u;
            goto label_1a9124;
        }
    }
    ctx->pc = 0x1A9114u;
label_1a9114:
    // 0x1a9114: 0xc06920c  jal         func_1A4830
label_1a9118:
    if (ctx->pc == 0x1A9118u) {
        ctx->pc = 0x1A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9114u;
        // 0x1a9118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A911Cu;
        goto label_1a911c;
    }
    ctx->pc = 0x1A9114u;
    SET_GPR_U32(ctx, 31, 0x1A911Cu);
    ctx->pc = 0x1A9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9114u;
    // 0x1a9118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A911Cu;
label_1a911c:
    // 0x1a911c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a9120:
    if (ctx->pc == 0x1A9120u) {
        ctx->pc = 0x1A9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A911Cu;
        // 0x1a9120: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9124u;
        goto label_1a9124;
    }
    ctx->pc = 0x1A911Cu;
    {
        const bool branch_taken_0x1a911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A911Cu;
        // 0x1a9120: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a911c) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A9124u;
label_1a9124:
    // 0x1a9124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9128:
    if (ctx->pc == 0x1A9128u) {
        ctx->pc = 0x1A912Cu;
        goto label_1a912c;
    }
    ctx->pc = 0x1A9124u;
    {
        const bool branch_taken_0x1a9124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9124) {
            ctx->pc = 0x1A913Cu;
            goto label_1a913c;
        }
    }
    ctx->pc = 0x1A912Cu;
label_1a912c:
    // 0x1a912c: 0xc06920c  jal         func_1A4830
label_1a9130:
    if (ctx->pc == 0x1A9130u) {
        ctx->pc = 0x1A9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A912Cu;
        // 0x1a9130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9134u;
        goto label_1a9134;
    }
    ctx->pc = 0x1A912Cu;
    SET_GPR_U32(ctx, 31, 0x1A9134u);
    ctx->pc = 0x1A9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A912Cu;
    // 0x1a9130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9134u;
label_1a9134:
    // 0x1a9134: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9138:
    if (ctx->pc == 0x1A9138u) {
        ctx->pc = 0x1A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9134u;
        // 0x1a9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A913Cu;
        goto label_1a913c;
    }
    ctx->pc = 0x1A9134u;
    {
        const bool branch_taken_0x1a9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9134u;
        // 0x1a9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9134) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A913Cu;
label_1a913c:
    // 0x1a913c: 0xc069218  jal         func_1A4860
label_1a9140:
    if (ctx->pc == 0x1A9140u) {
        ctx->pc = 0x1A9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A913Cu;
        // 0x1a9140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9144u;
        goto label_1a9144;
    }
    ctx->pc = 0x1A913Cu;
    SET_GPR_U32(ctx, 31, 0x1A9144u);
    ctx->pc = 0x1A9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A913Cu;
    // 0x1a9140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9144u;
label_1a9144:
    // 0x1a9144: 0xc06920c  jal         func_1A4830
label_1a9148:
    if (ctx->pc == 0x1A9148u) {
        ctx->pc = 0x1A9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9144u;
        // 0x1a9148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A914Cu;
        goto label_1a914c;
    }
    ctx->pc = 0x1A9144u;
    SET_GPR_U32(ctx, 31, 0x1A914Cu);
    ctx->pc = 0x1A9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9144u;
    // 0x1a9148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A914Cu;
label_1a914c:
    // 0x1a914c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9150:
    // 0x1a9150: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a9154:
    // 0x1a9154: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1a9154u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9158:
    // 0x1a9158: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a915c:
    // 0x1a915c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9160:
    // 0x1a9160: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9164:
    // 0x1a9164: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9168:
    // 0x1a9168: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a916c:
    // 0x1a916c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a916cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9170:
    // 0x1a9170: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a9170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9174:
    // 0x1a9174: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9178:
    // 0x1a9178: 0x3e00008  jr          $ra
label_1a917c:
    if (ctx->pc == 0x1A917Cu) {
        ctx->pc = 0x1A917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9178u;
        // 0x1a917c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9180u;
        goto label_1a9180;
    }
    ctx->pc = 0x1A9178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9178u;
        // 0x1a917c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9180u;
label_1a9180:
    // 0x1a9180: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1a9184:
    // 0x1a9184: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a9188:
    // 0x1a9188: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a918c:
    // 0x1a918c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a918cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9190:
    // 0x1a9190: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a9194:
    // 0x1a9194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9198:
    // 0x1a9198: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a919c:
    // 0x1a919c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1a91a0:
    // 0x1a91a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a91a4:
    // 0x1a91a4: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a91a8:
    // 0x1a91a8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1a91ac:
    // 0x1a91ac: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a91acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1a91b0:
    // 0x1a91b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a91b4:
    // 0x1a91b4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a91b8:
    // 0x1a91b8: 0xc06a02c  jal         func_1A80B0
label_1a91bc:
    if (ctx->pc == 0x1A91BCu) {
        ctx->pc = 0x1A91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91B8u;
        // 0x1a91bc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91C0u;
        goto label_1a91c0;
    }
    ctx->pc = 0x1A91B8u;
    SET_GPR_U32(ctx, 31, 0x1A91C0u);
    ctx->pc = 0x1A91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91B8u;
    // 0x1a91bc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A91C0u;
label_1a91c0:
    // 0x1a91c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a91c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a91c4:
    // 0x1a91c4: 0xc06a14c  jal         func_1A8530
label_1a91c8:
    if (ctx->pc == 0x1A91C8u) {
        ctx->pc = 0x1A91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91C4u;
        // 0x1a91c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91CCu;
        goto label_1a91cc;
    }
    ctx->pc = 0x1A91C4u;
    SET_GPR_U32(ctx, 31, 0x1A91CCu);
    ctx->pc = 0x1A91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91C4u;
    // 0x1a91c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A91CCu;
label_1a91cc:
    // 0x1a91cc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a91d0:
    // 0x1a91d0: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a91d4:
    // 0x1a91d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a91d8:
    if (ctx->pc == 0x1A91D8u) {
        ctx->pc = 0x1A91DCu;
        goto label_1a91dc;
    }
    ctx->pc = 0x1A91D4u;
    {
        const bool branch_taken_0x1a91d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91d4) {
            ctx->pc = 0x1A91ECu;
            goto label_1a91ec;
        }
    }
    ctx->pc = 0x1A91DCu;
label_1a91dc:
    // 0x1a91dc: 0xc06a158  jal         func_1A8560
label_1a91e0:
    if (ctx->pc == 0x1A91E0u) {
        ctx->pc = 0x1A91E4u;
        goto label_1a91e4;
    }
    ctx->pc = 0x1A91DCu;
    SET_GPR_U32(ctx, 31, 0x1A91E4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A91E4u;
label_1a91e4:
    // 0x1a91e4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1a91e8:
    if (ctx->pc == 0x1A91E8u) {
        ctx->pc = 0x1A91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91E4u;
        // 0x1a91e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91ECu;
        goto label_1a91ec;
    }
    ctx->pc = 0x1A91E4u;
    {
        const bool branch_taken_0x1a91e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91E4u;
        // 0x1a91e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91e4) {
            ctx->pc = 0x1A9410u;
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A91ECu;
label_1a91ec:
    // 0x1a91ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a91f0:
    if (ctx->pc == 0x1A91F0u) {
        ctx->pc = 0x1A91F4u;
        goto label_1a91f4;
    }
    ctx->pc = 0x1A91ECu;
    {
        const bool branch_taken_0x1a91ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a91ec) {
            ctx->pc = 0x1A9200u;
            goto label_1a9200;
        }
    }
    ctx->pc = 0x1A91F4u;
label_1a91f4:
    // 0x1a91f4: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a91f8:
    // 0x1a91f8: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
label_1a91fc:
    if (ctx->pc == 0x1A91FCu) {
        ctx->pc = 0x1A91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F8u;
        // 0x1a91fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9200u;
        goto label_1a9200;
    }
    ctx->pc = 0x1A91F8u;
    {
        const bool branch_taken_0x1a91f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91f8) {
            ctx->pc = 0x1A91FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A91F8u;
            // 0x1a91fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9210u;
            goto label_1a9210;
        }
    }
    ctx->pc = 0x1A9200u;
label_1a9200:
    // 0x1a9200: 0xc06a158  jal         func_1A8560
label_1a9204:
    if (ctx->pc == 0x1A9204u) {
        ctx->pc = 0x1A9208u;
        goto label_1a9208;
    }
    ctx->pc = 0x1A9200u;
    SET_GPR_U32(ctx, 31, 0x1A9208u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9208u;
label_1a9208:
    // 0x1a9208: 0x10000081  b           . + 4 + (0x81 << 2)
label_1a920c:
    if (ctx->pc == 0x1A920Cu) {
        ctx->pc = 0x1A920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9208u;
        // 0x1a920c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9210u;
        goto label_1a9210;
    }
    ctx->pc = 0x1A9208u;
    {
        const bool branch_taken_0x1a9208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9208u;
        // 0x1a920c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9208) {
            ctx->pc = 0x1A9410u;
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A9210u;
label_1a9210:
    // 0x1a9210: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9214:
    // 0x1a9214: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1a9218:
    // 0x1a9218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a921c:
    // 0x1a921c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1a921cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1a9220:
    // 0x1a9220: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1a9220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a9224:
    // 0x1a9224: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_1a9228:
    // 0x1a9228: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a9228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a922c:
    // 0x1a922c: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1a922cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_1a9230:
    // 0x1a9230: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9234:
    // 0x1a9234: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x1a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
label_1a9238:
    // 0x1a9238: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1a9238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_1a923c:
    // 0x1a923c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9240:
    // 0x1a9240: 0xc069208  jal         func_1A4820
label_1a9244:
    if (ctx->pc == 0x1A9244u) {
        ctx->pc = 0x1A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9240u;
        // 0x1a9244: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9248u;
        goto label_1a9248;
    }
    ctx->pc = 0x1A9240u;
    SET_GPR_U32(ctx, 31, 0x1A9248u);
    ctx->pc = 0x1A9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9240u;
    // 0x1a9244: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9248u;
label_1a9248:
    // 0x1a9248: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a9248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a924c:
    // 0x1a924c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9250:
    // 0x1a9250: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9254:
    // 0x1a9254: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a9254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a9258:
    // 0x1a9258: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a9258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a925c:
    // 0x1a925c: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x1a925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
label_1a9260:
    // 0x1a9260: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1a9264:
    if (ctx->pc == 0x1A9264u) {
        ctx->pc = 0x1A9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9260u;
        // 0x1a9264: 0xaef43240  sw          $s4, 0x3240($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12864), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9268u;
        goto label_1a9268;
    }
    ctx->pc = 0x1A9260u;
    {
        const bool branch_taken_0x1a9260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9260u;
        // 0x1a9264: 0xaef43240  sw          $s4, 0x3240($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12864), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9260) {
            ctx->pc = 0x1A92F4u;
            goto label_1a92f4;
        }
    }
    ctx->pc = 0x1A9268u;
label_1a9268:
    // 0x1a9268: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_1a926c:
    // 0x1a926c: 0xc069218  jal         func_1A4860
label_1a9270:
    if (ctx->pc == 0x1A9270u) {
        ctx->pc = 0x1A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A926Cu;
        // 0x1a9270: 0x8e645c04  lw          $a0, 0x5C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9274u;
        goto label_1a9274;
    }
    ctx->pc = 0x1A926Cu;
    SET_GPR_U32(ctx, 31, 0x1A9274u);
    ctx->pc = 0x1A9270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A926Cu;
    // 0x1a9270: 0x8e645c04  lw          $a0, 0x5C04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9274u;
label_1a9274:
    // 0x1a9274: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1a9278:
    // 0x1a9278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a927c:
    // 0x1a927c: 0x8ce35b78  lw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23416)));
label_1a9280:
    // 0x1a9280: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9284:
    // 0x1a9284: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1a9288:
    if (ctx->pc == 0x1A9288u) {
        ctx->pc = 0x1A9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9284u;
        // 0x1a9288: 0x3230000f  andi        $s0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A928Cu;
        goto label_1a928c;
    }
    ctx->pc = 0x1A9284u;
    {
        const bool branch_taken_0x1a9284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9284u;
        // 0x1a9288: 0x3230000f  andi        $s0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9284) {
            ctx->pc = 0x1A92A8u;
            goto label_1a92a8;
        }
    }
    ctx->pc = 0x1A928Cu;
label_1a928c:
    // 0x1a928c: 0x8ee33240  lw          $v1, 0x3240($s7)
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12864)));
label_1a9290:
    // 0x1a9290: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1a9294:
    // 0x1a9294: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1a9298:
    // 0x1a9298: 0xace35b78  sw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a9298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23416), GPR_U32(ctx, 3));
label_1a929c:
    // 0x1a929c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a92a0:
    if (ctx->pc == 0x1A92A0u) {
        ctx->pc = 0x1A92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A929Cu;
        // 0x1a92a0: 0xaee23240  sw          $v0, 0x3240($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92A4u;
        goto label_1a92a4;
    }
    ctx->pc = 0x1A929Cu;
    {
        const bool branch_taken_0x1a929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A929Cu;
        // 0x1a92a0: 0xaee23240  sw          $v0, 0x3240($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a929c) {
            ctx->pc = 0x1A92E4u;
            goto label_1a92e4;
        }
    }
    ctx->pc = 0x1A92A4u;
label_1a92a4:
    // 0x1a92a4: 0x0  nop
    ctx->pc = 0x1a92a4u;
    // NOP
label_1a92a8:
    // 0x1a92a8: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1a92ac:
    // 0x1a92ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a92acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a92b0:
    // 0x1a92b0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1a92b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a92b4:
    // 0x1a92b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a92b8:
    if (ctx->pc == 0x1A92B8u) {
        ctx->pc = 0x1A92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B4u;
        // 0x1a92b8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92BCu;
        goto label_1a92bc;
    }
    ctx->pc = 0x1A92B4u;
    {
        const bool branch_taken_0x1a92b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B4u;
        // 0x1a92b8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92b4) {
            ctx->pc = 0x1A92E4u;
            goto label_1a92e4;
        }
    }
    ctx->pc = 0x1A92BCu;
label_1a92bc:
    // 0x1a92bc: 0x24e35b78  addiu       $v1, $a3, 0x5B78
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
label_1a92c0:
    // 0x1a92c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a92c4:
    // 0x1a92c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a92c8:
    // 0x1a92c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a92cc:
    // 0x1a92cc: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_1a92d0:
    if (ctx->pc == 0x1A92D0u) {
        ctx->pc = 0x1A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92CCu;
        // 0x1a92d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92D4u;
        goto label_1a92d4;
    }
    ctx->pc = 0x1A92CCu;
    {
        const bool branch_taken_0x1a92cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92CCu;
        // 0x1a92d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92cc) {
            ctx->pc = 0x1A92B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a92b0;
        }
    }
    ctx->pc = 0x1A92D4u;
label_1a92d4:
    // 0x1a92d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a92d8:
    // 0x1a92d8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1a92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a92dc:
    // 0x1a92dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a92e0:
    // 0x1a92e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a92e4:
    // 0x1a92e4: 0xc069210  jal         func_1A4840
label_1a92e8:
    if (ctx->pc == 0x1A92E8u) {
        ctx->pc = 0x1A92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92E4u;
        // 0x1a92e8: 0x8e645c04  lw          $a0, 0x5C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92ECu;
        goto label_1a92ec;
    }
    ctx->pc = 0x1A92E4u;
    SET_GPR_U32(ctx, 31, 0x1A92ECu);
    ctx->pc = 0x1A92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92E4u;
    // 0x1a92e8: 0x8e645c04  lw          $a0, 0x5C04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a92f0:
    if (ctx->pc == 0x1A92F0u) {
        ctx->pc = 0x1A92F4u;
        goto label_1a92f4;
    }
    ctx->pc = 0x1A92ECu;
    {
        const bool branch_taken_0x1a92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a92ec) {
            ctx->pc = 0x1A92FCu;
            goto label_1a92fc;
        }
    }
    ctx->pc = 0x1A92F4u;
label_1a92f4:
    // 0x1a92f4: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x1a92f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
label_1a92f8:
    // 0x1a92f8: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1a92fc:
    // 0x1a92fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1a9300:
    if (ctx->pc == 0x1A9300u) {
        ctx->pc = 0x1A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92FCu;
        // 0x1a9300: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9304u;
        goto label_1a9304;
    }
    ctx->pc = 0x1A92FCu;
    {
        const bool branch_taken_0x1a92fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92FCu;
        // 0x1a9300: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92fc) {
            ctx->pc = 0x1A930Cu;
            goto label_1a930c;
        }
    }
    ctx->pc = 0x1A9304u;
label_1a9304:
    // 0x1a9304: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a9308:
    if (ctx->pc == 0x1A9308u) {
        ctx->pc = 0x1A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9304u;
        // 0x1a9308: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A930Cu;
        goto label_1a930c;
    }
    ctx->pc = 0x1A9304u;
    {
        const bool branch_taken_0x1a9304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9304u;
        // 0x1a9308: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9304) {
            ctx->pc = 0x1A9318u;
            goto label_1a9318;
        }
    }
    ctx->pc = 0x1A930Cu;
label_1a930c:
    // 0x1a930c: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x1a930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1a9310:
    // 0x1a9310: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a9314:
    // 0x1a9314: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9318:
    // 0x1a9318: 0x2b0182a  slt         $v1, $s5, $s0
    ctx->pc = 0x1a9318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a931c:
    // 0x1a931c: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
label_1a9320:
    // 0x1a9320: 0x2d31024  and         $v0, $s6, $s3
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 19));
label_1a9324:
    // 0x1a9324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a9328:
    if (ctx->pc == 0x1A9328u) {
        ctx->pc = 0x1A9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9324u;
        // 0x1a9328: 0x2a3800b  movn        $s0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A932Cu;
        goto label_1a932c;
    }
    ctx->pc = 0x1A9324u;
    {
        const bool branch_taken_0x1a9324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9324u;
        // 0x1a9328: 0x2a3800b  movn        $s0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9324) {
            ctx->pc = 0x1A9338u;
            goto label_1a9338;
        }
    }
    ctx->pc = 0x1A932Cu;
label_1a932c:
    // 0x1a932c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9330:
    // 0x1a9330: 0xc069bee  jal         func_1A6FB8
label_1a9334:
    if (ctx->pc == 0x1A9334u) {
        ctx->pc = 0x1A9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9330u;
        // 0x1a9334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9338u;
        goto label_1a9338;
    }
    ctx->pc = 0x1A9330u;
    SET_GPR_U32(ctx, 31, 0x1A9338u);
    ctx->pc = 0x1A9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9330u;
    // 0x1a9334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A9338u;
label_1a9338:
    // 0x1a9338: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1a9338u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
label_1a933c:
    // 0x1a933c: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1a933cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_1a9340:
    // 0x1a9340: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_1a9344:
    if (ctx->pc == 0x1A9344u) {
        ctx->pc = 0x1A9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9340u;
        // 0x1a9344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9348u;
        goto label_1a9348;
    }
    ctx->pc = 0x1A9340u;
    {
        const bool branch_taken_0x1a9340 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9340u;
        // 0x1a9344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9340) {
            ctx->pc = 0x1A9370u;
            goto label_1a9370;
        }
    }
    ctx->pc = 0x1A9348u;
label_1a9348:
    // 0x1a9348: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a934c:
    // 0x1a934c: 0x0  nop
    ctx->pc = 0x1a934cu;
    // NOP
label_1a9350:
    // 0x1a9350: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a9354:
    // 0x1a9354: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a9358:
    // 0x1a9358: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a935c:
    // 0x1a935c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a9360:
    // 0x1a9360: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a9360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a9364:
    // 0x1a9364: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a9364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9368:
    // 0x1a9368: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a936c:
    if (ctx->pc == 0x1A936Cu) {
        ctx->pc = 0x1A9370u;
        goto label_1a9370;
    }
    ctx->pc = 0x1A9368u;
    {
        const bool branch_taken_0x1a9368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9368) {
            ctx->pc = 0x1A9350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9350;
        }
    }
    ctx->pc = 0x1A9370u;
label_1a9370:
    // 0x1a9370: 0x27d03e80  addiu       $s0, $fp, 0x3E80
    ctx->pc = 0x1a9370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 16000));
label_1a9374:
    // 0x1a9374: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9378:
    // 0x1a9378: 0x24444500  addiu       $a0, $v0, 0x4500
    ctx->pc = 0x1a9378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
label_1a937c:
    // 0x1a937c: 0x26e73240  addiu       $a3, $s7, 0x3240
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9380:
    // 0x1a9380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a9380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a9384:
    // 0x1a9384: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9388:
    // 0x1a9388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a938c:
    // 0x1a938c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1a938cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a9390:
    // 0x1a9390: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a9390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9394:
    // 0x1a9394: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9398:
    // 0x1a9398: 0xc069e2a  jal         func_1A78A8
label_1a939c:
    if (ctx->pc == 0x1A939Cu) {
        ctx->pc = 0x1A939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9398u;
        // 0x1a939c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93A0u;
        goto label_1a93a0;
    }
    ctx->pc = 0x1A9398u;
    SET_GPR_U32(ctx, 31, 0x1A93A0u);
    ctx->pc = 0x1A939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9398u;
    // 0x1a939c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A93A0u;
label_1a93a0:
    // 0x1a93a0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a93a4:
    if (ctx->pc == 0x1A93A4u) {
        ctx->pc = 0x1A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93A0u;
        // 0x1a93a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93A8u;
        goto label_1a93a8;
    }
    ctx->pc = 0x1A93A0u;
    {
        const bool branch_taken_0x1a93a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93A0u;
        // 0x1a93a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93a0) {
            ctx->pc = 0x1A93C0u;
            goto label_1a93c0;
        }
    }
    ctx->pc = 0x1A93A8u;
label_1a93a8:
    // 0x1a93a8: 0xc06920c  jal         func_1A4830
label_1a93ac:
    if (ctx->pc == 0x1A93ACu) {
        ctx->pc = 0x1A93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93A8u;
        // 0x1a93ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93B0u;
        goto label_1a93b0;
    }
    ctx->pc = 0x1A93A8u;
    SET_GPR_U32(ctx, 31, 0x1A93B0u);
    ctx->pc = 0x1A93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93A8u;
    // 0x1a93ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A93B0u;
label_1a93b0:
    // 0x1a93b0: 0xc06a158  jal         func_1A8560
label_1a93b4:
    if (ctx->pc == 0x1A93B4u) {
        ctx->pc = 0x1A93B8u;
        goto label_1a93b8;
    }
    ctx->pc = 0x1A93B0u;
    SET_GPR_U32(ctx, 31, 0x1A93B8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A93B8u;
label_1a93b8:
    // 0x1a93b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a93bc:
    if (ctx->pc == 0x1A93BCu) {
        ctx->pc = 0x1A93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B8u;
        // 0x1a93bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93C0u;
        goto label_1a93c0;
    }
    ctx->pc = 0x1A93B8u;
    {
        const bool branch_taken_0x1a93b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B8u;
        // 0x1a93bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93b8) {
            ctx->pc = 0x1A9410u;
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A93C0u;
label_1a93c0:
    // 0x1a93c0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a93c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1a93c4:
    // 0x1a93c4: 0xc06a158  jal         func_1A8560
label_1a93c8:
    if (ctx->pc == 0x1A93C8u) {
        ctx->pc = 0x1A93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C4u;
        // 0x1a93c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93CCu;
        goto label_1a93cc;
    }
    ctx->pc = 0x1A93C4u;
    SET_GPR_U32(ctx, 31, 0x1A93CCu);
    ctx->pc = 0x1A93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93C4u;
    // 0x1a93c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A93CCu;
label_1a93cc:
    // 0x1a93cc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a93d0:
    if (ctx->pc == 0x1A93D0u) {
        ctx->pc = 0x1A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93CCu;
        // 0x1a93d0: 0x32c28000  andi        $v0, $s6, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93D4u;
        goto label_1a93d4;
    }
    ctx->pc = 0x1A93CCu;
    {
        const bool branch_taken_0x1a93cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93CCu;
        // 0x1a93d0: 0x32c28000  andi        $v0, $s6, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93cc) {
            ctx->pc = 0x1A93E4u;
            goto label_1a93e4;
        }
    }
    ctx->pc = 0x1A93D4u;
label_1a93d4:
    // 0x1a93d4: 0xc06920c  jal         func_1A4830
label_1a93d8:
    if (ctx->pc == 0x1A93D8u) {
        ctx->pc = 0x1A93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93D4u;
        // 0x1a93d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93DCu;
        goto label_1a93dc;
    }
    ctx->pc = 0x1A93D4u;
    SET_GPR_U32(ctx, 31, 0x1A93DCu);
    ctx->pc = 0x1A93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93D4u;
    // 0x1a93d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A93DCu;
label_1a93dc:
    // 0x1a93dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a93e0:
    if (ctx->pc == 0x1A93E0u) {
        ctx->pc = 0x1A93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93DCu;
        // 0x1a93e0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93E4u;
        goto label_1a93e4;
    }
    ctx->pc = 0x1A93DCu;
    {
        const bool branch_taken_0x1a93dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93DCu;
        // 0x1a93e0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93dc) {
            ctx->pc = 0x1A9410u;
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A93E4u;
label_1a93e4:
    // 0x1a93e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a93e8:
    if (ctx->pc == 0x1A93E8u) {
        ctx->pc = 0x1A93ECu;
        goto label_1a93ec;
    }
    ctx->pc = 0x1A93E4u;
    {
        const bool branch_taken_0x1a93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a93e4) {
            ctx->pc = 0x1A93FCu;
            goto label_1a93fc;
        }
    }
    ctx->pc = 0x1A93ECu;
label_1a93ec:
    // 0x1a93ec: 0xc06920c  jal         func_1A4830
label_1a93f0:
    if (ctx->pc == 0x1A93F0u) {
        ctx->pc = 0x1A93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93ECu;
        // 0x1a93f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93F4u;
        goto label_1a93f4;
    }
    ctx->pc = 0x1A93ECu;
    SET_GPR_U32(ctx, 31, 0x1A93F4u);
    ctx->pc = 0x1A93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93ECu;
    // 0x1a93f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A93F4u;
label_1a93f4:
    // 0x1a93f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a93f8:
    if (ctx->pc == 0x1A93F8u) {
        ctx->pc = 0x1A93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93F4u;
        // 0x1a93f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93FCu;
        goto label_1a93fc;
    }
    ctx->pc = 0x1A93F4u;
    {
        const bool branch_taken_0x1a93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93F4u;
        // 0x1a93f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93f4) {
            ctx->pc = 0x1A9410u;
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A93FCu;
label_1a93fc:
    // 0x1a93fc: 0xc069218  jal         func_1A4860
label_1a9400:
    if (ctx->pc == 0x1A9400u) {
        ctx->pc = 0x1A9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93FCu;
        // 0x1a9400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9404u;
        goto label_1a9404;
    }
    ctx->pc = 0x1A93FCu;
    SET_GPR_U32(ctx, 31, 0x1A9404u);
    ctx->pc = 0x1A9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93FCu;
    // 0x1a9400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9404u;
label_1a9404:
    // 0x1a9404: 0xc06920c  jal         func_1A4830
label_1a9408:
    if (ctx->pc == 0x1A9408u) {
        ctx->pc = 0x1A9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9404u;
        // 0x1a9408: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A940Cu;
        goto label_1a940c;
    }
    ctx->pc = 0x1A9404u;
    SET_GPR_U32(ctx, 31, 0x1A940Cu);
    ctx->pc = 0x1A9408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9404u;
    // 0x1a9408: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A940Cu;
label_1a940c:
    // 0x1a940c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9410:
    // 0x1a9410: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a9410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a9414:
    // 0x1a9414: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1a9414u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9418:
    // 0x1a9418: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a941c:
    // 0x1a941c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a941cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9420:
    // 0x1a9420: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9424:
    // 0x1a9424: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9428:
    // 0x1a9428: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a942c:
    // 0x1a942c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a942cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9430:
    // 0x1a9430: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a9430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9434:
    // 0x1a9434: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9438:
    // 0x1a9438: 0x3e00008  jr          $ra
label_1a943c:
    if (ctx->pc == 0x1A943Cu) {
        ctx->pc = 0x1A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9438u;
        // 0x1a943c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9440u;
        goto label_1a9440;
    }
    ctx->pc = 0x1A9438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9438u;
        // 0x1a943c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9440u;
label_1a9440:
    // 0x1a9440: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a9444:
    // 0x1a9444: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a9448:
    // 0x1a9448: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a944c:
    // 0x1a944c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a944cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9450:
    // 0x1a9450: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a9454:
    // 0x1a9454: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9458:
    // 0x1a9458: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a945c:
    // 0x1a945c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a945cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a9460:
    // 0x1a9460: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a9460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a9464:
    // 0x1a9464: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9468:
    // 0x1a9468: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a946c:
    // 0x1a946c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a946cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9470:
    // 0x1a9470: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a9474:
    // 0x1a9474: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a9478:
    // 0x1a9478: 0xc06a02c  jal         func_1A80B0
label_1a947c:
    if (ctx->pc == 0x1A947Cu) {
        ctx->pc = 0x1A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9478u;
        // 0x1a947c: 0x26d33240  addiu       $s3, $s6, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9480u;
        goto label_1a9480;
    }
    ctx->pc = 0x1A9478u;
    SET_GPR_U32(ctx, 31, 0x1A9480u);
    ctx->pc = 0x1A947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9478u;
    // 0x1a947c: 0x26d33240  addiu       $s3, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A9480u;
label_1a9480:
    // 0x1a9480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9484:
    // 0x1a9484: 0xc06a14c  jal         func_1A8530
label_1a9488:
    if (ctx->pc == 0x1A9488u) {
        ctx->pc = 0x1A9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9484u;
        // 0x1a9488: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A948Cu;
        goto label_1a948c;
    }
    ctx->pc = 0x1A9484u;
    SET_GPR_U32(ctx, 31, 0x1A948Cu);
    ctx->pc = 0x1A9488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9484u;
    // 0x1a9488: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A948Cu;
label_1a948c:
    // 0x1a948c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a9490:
    // 0x1a9490: 0xae923204  sw          $s2, 0x3204($s4)
    ctx->pc = 0x1a9490u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12804), GPR_U32(ctx, 18));
label_1a9494:
    // 0x1a9494: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a9494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a9498:
    // 0x1a9498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a949c:
    if (ctx->pc == 0x1A949Cu) {
        ctx->pc = 0x1A94A0u;
        goto label_1a94a0;
    }
    ctx->pc = 0x1A9498u;
    {
        const bool branch_taken_0x1a9498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9498) {
            ctx->pc = 0x1A94A8u;
            goto label_1a94a8;
        }
    }
    ctx->pc = 0x1A94A0u;
label_1a94a0:
    // 0x1a94a0: 0xc06a18e  jal         func_1A8638
label_1a94a4:
    if (ctx->pc == 0x1A94A4u) {
        ctx->pc = 0x1A94A8u;
        goto label_1a94a8;
    }
    ctx->pc = 0x1A94A0u;
    SET_GPR_U32(ctx, 31, 0x1A94A8u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A94A8u;
label_1a94a8:
    // 0x1a94a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a94ac:
    if (ctx->pc == 0x1A94ACu) {
        ctx->pc = 0x1A94B0u;
        goto label_1a94b0;
    }
    ctx->pc = 0x1A94A8u;
    {
        const bool branch_taken_0x1a94a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a94a8) {
            ctx->pc = 0x1A94BCu;
            goto label_1a94bc;
        }
    }
    ctx->pc = 0x1A94B0u;
label_1a94b0:
    // 0x1a94b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a94b4:
    // 0x1a94b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a94b8:
    if (ctx->pc == 0x1A94B8u) {
        ctx->pc = 0x1A94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94B4u;
        // 0x1a94b8: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94BCu;
        goto label_1a94bc;
    }
    ctx->pc = 0x1A94B4u;
    {
        const bool branch_taken_0x1a94b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a94b4) {
            ctx->pc = 0x1A94B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A94B4u;
            // 0x1a94b8: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94CCu;
            goto label_1a94cc;
        }
    }
    ctx->pc = 0x1A94BCu;
label_1a94bc:
    // 0x1a94bc: 0xc06a158  jal         func_1A8560
label_1a94c0:
    if (ctx->pc == 0x1A94C0u) {
        ctx->pc = 0x1A94C4u;
        goto label_1a94c4;
    }
    ctx->pc = 0x1A94BCu;
    SET_GPR_U32(ctx, 31, 0x1A94C4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A94C4u;
label_1a94c4:
    // 0x1a94c4: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1a94c8:
    if (ctx->pc == 0x1A94C8u) {
        ctx->pc = 0x1A94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94C4u;
        // 0x1a94c8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94CCu;
        goto label_1a94cc;
    }
    ctx->pc = 0x1A94C4u;
    {
        const bool branch_taken_0x1a94c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94C4u;
        // 0x1a94c8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94c4) {
            ctx->pc = 0x1A9764u;
            goto label_1a9764;
        }
    }
    ctx->pc = 0x1A94CCu;
label_1a94cc:
    // 0x1a94cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a94d0:
    // 0x1a94d0: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
label_1a94d4:
    if (ctx->pc == 0x1A94D4u) {
        ctx->pc = 0x1A94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94D0u;
        // 0x1a94d4: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94D8u;
        goto label_1a94d8;
    }
    ctx->pc = 0x1A94D0u;
    {
        const bool branch_taken_0x1a94d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94D0u;
        // 0x1a94d4: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94d0) {
            ctx->pc = 0x1A9578u;
            goto label_1a9578;
        }
    }
    ctx->pc = 0x1A94D8u;
label_1a94d8:
    // 0x1a94d8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a94d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a94dc:
    // 0x1a94dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a94e0:
    if (ctx->pc == 0x1A94E0u) {
        ctx->pc = 0x1A94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94DCu;
        // 0x1a94e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94E4u;
        goto label_1a94e4;
    }
    ctx->pc = 0x1A94DCu;
    {
        const bool branch_taken_0x1a94dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94DCu;
        // 0x1a94e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94dc) {
            ctx->pc = 0x1A94F4u;
            goto label_1a94f4;
        }
    }
    ctx->pc = 0x1A94E4u;
label_1a94e4:
    // 0x1a94e4: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
label_1a94e8:
    if (ctx->pc == 0x1A94E8u) {
        ctx->pc = 0x1A94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94E4u;
        // 0x1a94e8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94ECu;
        goto label_1a94ec;
    }
    ctx->pc = 0x1A94E4u;
    {
        const bool branch_taken_0x1a94e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x1a94e4) {
            ctx->pc = 0x1A94E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A94E4u;
            // 0x1a94e8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9504u;
            goto label_1a9504;
        }
    }
    ctx->pc = 0x1A94ECu;
label_1a94ec:
    // 0x1a94ec: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a94f0:
    if (ctx->pc == 0x1A94F0u) {
        ctx->pc = 0x1A94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94ECu;
        // 0x1a94f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94F4u;
        goto label_1a94f4;
    }
    ctx->pc = 0x1A94ECu;
    {
        const bool branch_taken_0x1a94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94ECu;
        // 0x1a94f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94ec) {
            ctx->pc = 0x1A95B8u;
            goto label_1a95b8;
        }
    }
    ctx->pc = 0x1A94F4u;
label_1a94f4:
    // 0x1a94f4: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
label_1a94f8:
    if (ctx->pc == 0x1A94F8u) {
        ctx->pc = 0x1A94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94F4u;
        // 0x1a94f8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94FCu;
        goto label_1a94fc;
    }
    ctx->pc = 0x1A94F4u;
    {
        const bool branch_taken_0x1a94f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94F4u;
        // 0x1a94f8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94f4) {
            ctx->pc = 0x1A9594u;
            goto label_1a9594;
        }
    }
    ctx->pc = 0x1A94FCu;
label_1a94fc:
    // 0x1a94fc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a9500:
    if (ctx->pc == 0x1A9500u) {
        ctx->pc = 0x1A9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94FCu;
        // 0x1a9500: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9504u;
        goto label_1a9504;
    }
    ctx->pc = 0x1A94FCu;
    {
        const bool branch_taken_0x1a94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94FCu;
        // 0x1a9500: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94fc) {
            ctx->pc = 0x1A95B8u;
            goto label_1a95b8;
        }
    }
    ctx->pc = 0x1A9504u;
label_1a9504:
    // 0x1a9504: 0xc069218  jal         func_1A4860
label_1a9508:
    if (ctx->pc == 0x1A9508u) {
        ctx->pc = 0x1A9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9504u;
        // 0x1a9508: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A950Cu;
        goto label_1a950c;
    }
    ctx->pc = 0x1A9504u;
    SET_GPR_U32(ctx, 31, 0x1A950Cu);
    ctx->pc = 0x1A9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9504u;
    // 0x1a9508: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A950Cu;
label_1a950c:
    // 0x1a950c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1a9510:
    // 0x1a9510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a9510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9514:
    // 0x1a9514: 0x8ca35b78  lw          $v1, 0x5B78($a1)
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23416)));
label_1a9518:
    // 0x1a9518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a951c:
    // 0x1a951c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1a9520:
    if (ctx->pc == 0x1A9520u) {
        ctx->pc = 0x1A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A951Cu;
        // 0x1a9520: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9524u;
        goto label_1a9524;
    }
    ctx->pc = 0x1A951Cu;
    {
        const bool branch_taken_0x1a951c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A951Cu;
        // 0x1a9520: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a951c) {
            ctx->pc = 0x1A954Cu;
            goto label_1a954c;
        }
    }
    ctx->pc = 0x1A9524u;
label_1a9524:
    // 0x1a9524: 0x24a35b78  addiu       $v1, $a1, 0x5B78
    ctx->pc = 0x1a9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
label_1a9528:
    // 0x1a9528: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a952c:
    // 0x1a952c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a9530:
    // 0x1a9530: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1a9530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a9534:
    // 0x1a9534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a9538:
    if (ctx->pc == 0x1A9538u) {
        ctx->pc = 0x1A9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9534u;
        // 0x1a9538: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A953Cu;
        goto label_1a953c;
    }
    ctx->pc = 0x1A9534u;
    {
        const bool branch_taken_0x1a9534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9534u;
        // 0x1a9538: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9534) {
            ctx->pc = 0x1A9548u;
            goto label_1a9548;
        }
    }
    ctx->pc = 0x1A953Cu;
label_1a953c:
    // 0x1a953c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a9540:
    // 0x1a9540: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
label_1a9544:
    if (ctx->pc == 0x1A9544u) {
        ctx->pc = 0x1A9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9540u;
        // 0x1a9544: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9548u;
        goto label_1a9548;
    }
    ctx->pc = 0x1A9540u;
    {
        const bool branch_taken_0x1a9540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a9540) {
            ctx->pc = 0x1A9544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9540u;
            // 0x1a9544: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9530;
        }
    }
    ctx->pc = 0x1A9548u;
label_1a9548:
    // 0x1a9548: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a954c:
    // 0x1a954c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1a9550:
    if (ctx->pc == 0x1A9550u) {
        ctx->pc = 0x1A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A954Cu;
        // 0x1a9550: 0x8e833204  lw          $v1, 0x3204($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9554u;
        goto label_1a9554;
    }
    ctx->pc = 0x1A954Cu;
    {
        const bool branch_taken_0x1a954c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A954Cu;
        // 0x1a9550: 0x8e833204  lw          $v1, 0x3204($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a954c) {
            ctx->pc = 0x1A9560u;
            goto label_1a9560;
        }
    }
    ctx->pc = 0x1A9554u;
label_1a9554:
    // 0x1a9554: 0x8e823204  lw          $v0, 0x3204($s4)
    ctx->pc = 0x1a9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12804)));
label_1a9558:
    // 0x1a9558: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a955c:
    if (ctx->pc == 0x1A955Cu) {
        ctx->pc = 0x1A955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9558u;
        // 0x1a955c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9560u;
        goto label_1a9560;
    }
    ctx->pc = 0x1A9558u;
    {
        const bool branch_taken_0x1a9558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9558u;
        // 0x1a955c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9558) {
            ctx->pc = 0x1A9568u;
            goto label_1a9568;
        }
    }
    ctx->pc = 0x1A9560u;
label_1a9560:
    // 0x1a9560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9564:
    // 0x1a9564: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a9564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a9568:
    // 0x1a9568: 0xc069210  jal         func_1A4840
label_1a956c:
    if (ctx->pc == 0x1A956Cu) {
        ctx->pc = 0x1A956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9568u;
        // 0x1a956c: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9570u;
        goto label_1a9570;
    }
    ctx->pc = 0x1A9568u;
    SET_GPR_U32(ctx, 31, 0x1A9570u);
    ctx->pc = 0x1A956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9568u;
    // 0x1a956c: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A9570u;
label_1a9570:
    // 0x1a9570: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a9574:
    if (ctx->pc == 0x1A9574u) {
        ctx->pc = 0x1A9578u;
        goto label_1a9578;
    }
    ctx->pc = 0x1A9570u;
    {
        const bool branch_taken_0x1a9570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9570) {
            ctx->pc = 0x1A95A8u;
            goto label_1a95a8;
        }
    }
    ctx->pc = 0x1A9578u;
label_1a9578:
    // 0x1a9578: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a957c:
    // 0x1a957c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1a9580:
    // 0x1a9580: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
label_1a9584:
    // 0x1a9584: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a9588:
    // 0x1a9588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a958c:
    // 0x1a958c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9590:
    if (ctx->pc == 0x1A9590u) {
        ctx->pc = 0x1A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A958Cu;
        // 0x1a9590: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9594u;
        goto label_1a9594;
    }
    ctx->pc = 0x1A958Cu;
    {
        const bool branch_taken_0x1a958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A958Cu;
        // 0x1a9590: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a958c) {
            ctx->pc = 0x1A95A8u;
            goto label_1a95a8;
        }
    }
    ctx->pc = 0x1A9594u;
label_1a9594:
    // 0x1a9594: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1a9594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1a9598:
    // 0x1a9598: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x1a9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
label_1a959c:
    // 0x1a959c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a95a0:
    // 0x1a95a0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a95a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a95a4:
    // 0x1a95a4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x1a95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_1a95a8:
    // 0x1a95a8: 0xc06a158  jal         func_1A8560
label_1a95ac:
    if (ctx->pc == 0x1A95ACu) {
        ctx->pc = 0x1A95B0u;
        goto label_1a95b0;
    }
    ctx->pc = 0x1A95A8u;
    SET_GPR_U32(ctx, 31, 0x1A95B0u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A95B0u;
label_1a95b0:
    // 0x1a95b0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1a95b4:
    if (ctx->pc == 0x1A95B4u) {
        ctx->pc = 0x1A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95B0u;
        // 0x1a95b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95B8u;
        goto label_1a95b8;
    }
    ctx->pc = 0x1A95B0u;
    {
        const bool branch_taken_0x1a95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95B0u;
        // 0x1a95b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95b0) {
            ctx->pc = 0x1A9764u;
            goto label_1a9764;
        }
    }
    ctx->pc = 0x1A95B8u;
label_1a95b8:
    // 0x1a95b8: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x1a95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
label_1a95bc:
    // 0x1a95bc: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_1a95c0:
    if (ctx->pc == 0x1A95C0u) {
        ctx->pc = 0x1A95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95BCu;
        // 0x1a95c0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95C4u;
        goto label_1a95c4;
    }
    ctx->pc = 0x1A95BCu;
    {
        const bool branch_taken_0x1a95bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95BCu;
        // 0x1a95c0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95bc) {
            ctx->pc = 0x1A95D8u;
            goto label_1a95d8;
        }
    }
    ctx->pc = 0x1A95C4u;
label_1a95c4:
    // 0x1a95c4: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x1a95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
label_1a95c8:
    // 0x1a95c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a95c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a95cc:
    // 0x1a95cc: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a95ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a95d0:
    // 0x1a95d0: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a95d4:
    if (ctx->pc == 0x1A95D4u) {
        ctx->pc = 0x1A95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95D0u;
        // 0x1a95d4: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95D8u;
        goto label_1a95d8;
    }
    ctx->pc = 0x1A95D0u;
    {
        const bool branch_taken_0x1a95d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95D0u;
        // 0x1a95d4: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95d0) {
            ctx->pc = 0x1A96A4u;
            goto label_1a96a4;
        }
    }
    ctx->pc = 0x1A95D8u;
label_1a95d8:
    // 0x1a95d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a95d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a95dc:
    // 0x1a95dc: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1a95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_1a95e0:
    // 0x1a95e0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1a95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a95e4:
    // 0x1a95e4: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x1a95e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1a95e8:
    // 0x1a95e8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1a95ec:
    // 0x1a95ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1a95f0:
    if (ctx->pc == 0x1A95F0u) {
        ctx->pc = 0x1A95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ECu;
        // 0x1a95f0: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95F4u;
        goto label_1a95f4;
    }
    ctx->pc = 0x1A95ECu;
    {
        const bool branch_taken_0x1a95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ECu;
        // 0x1a95f0: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95ec) {
            ctx->pc = 0x1A9660u;
            goto label_1a9660;
        }
    }
    ctx->pc = 0x1A95F4u;
label_1a95f4:
    // 0x1a95f4: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_1a95f8:
    // 0x1a95f8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a95fc:
    // 0x1a95fc: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a95fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9600:
    // 0x1a9600: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a9600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1a9604:
    // 0x1a9604: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1a9604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a9608:
    // 0x1a9608: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1a9608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a960c:
    // 0x1a960c: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x1a960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a9610:
    // 0x1a9610: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x1a9610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a9614:
    // 0x1a9614: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x1a9614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a9618:
    // 0x1a9618: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x1a9618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a961c:
    // 0x1a961c: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x1a961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a9620:
    // 0x1a9620: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x1a9620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a9624:
    // 0x1a9624: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1a9624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9628:
    // 0x1a9628: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1a9628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a962c:
    // 0x1a962c: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x1a962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9630:
    // 0x1a9630: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x1a9630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9634:
    // 0x1a9634: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1a9634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9638:
    // 0x1a9638: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1a9638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a963c:
    // 0x1a963c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1a963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9640:
    // 0x1a9640: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1a9640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9644:
    // 0x1a9644: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1a9648:
    // 0x1a9648: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1a964c:
    // 0x1a964c: 0x0  nop
    ctx->pc = 0x1a964cu;
    // NOP
label_1a9650:
    // 0x1a9650: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
label_1a9654:
    if (ctx->pc == 0x1A9654u) {
        ctx->pc = 0x1A9658u;
        goto label_1a9658;
    }
    ctx->pc = 0x1A9650u;
    {
        const bool branch_taken_0x1a9650 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9650) {
            ctx->pc = 0x1A9604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9604;
        }
    }
    ctx->pc = 0x1A9658u;
label_1a9658:
    // 0x1a9658: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a965c:
    if (ctx->pc == 0x1A965Cu) {
        ctx->pc = 0x1A965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9658u;
        // 0x1a965c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9660u;
        goto label_1a9660;
    }
    ctx->pc = 0x1A9658u;
    {
        const bool branch_taken_0x1a9658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9658u;
        // 0x1a965c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9658) {
            ctx->pc = 0x1A96A8u;
            goto label_1a96a8;
        }
    }
    ctx->pc = 0x1A9660u;
label_1a9660:
    // 0x1a9660: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_1a9664:
    // 0x1a9664: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9668:
    // 0x1a9668: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a966c:
    // 0x1a966c: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a966cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1a9670:
    // 0x1a9670: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1a9670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_1a9674:
    // 0x1a9674: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x1a9674u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_1a9678:
    // 0x1a9678: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1a9678u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1a967c:
    // 0x1a967c: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1a967cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a9680:
    // 0x1a9680: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1a9680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_1a9684:
    // 0x1a9684: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1a9684u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_1a9688:
    // 0x1a9688: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1a9688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_1a968c:
    // 0x1a968c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1a968cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1a9690:
    // 0x1a9690: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1a9690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1a9694:
    // 0x1a9694: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1a9694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1a9698:
    // 0x1a9698: 0x0  nop
    ctx->pc = 0x1a9698u;
    // NOP
label_1a969c:
    // 0x1a969c: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
label_1a96a0:
    if (ctx->pc == 0x1A96A0u) {
        ctx->pc = 0x1A96A4u;
        goto label_1a96a4;
    }
    ctx->pc = 0x1A969Cu;
    {
        const bool branch_taken_0x1a969c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a969c) {
            ctx->pc = 0x1A9670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9670;
        }
    }
    ctx->pc = 0x1A96A4u;
label_1a96a4:
    // 0x1a96a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a96a8:
    // 0x1a96a8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a96ac:
    // 0x1a96ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a96b0:
    // 0x1a96b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a96b4:
    // 0x1a96b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a96b8:
    // 0x1a96b8: 0xc069208  jal         func_1A4820
label_1a96bc:
    if (ctx->pc == 0x1A96BCu) {
        ctx->pc = 0x1A96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96B8u;
        // 0x1a96bc: 0x26343e80  addiu       $s4, $s1, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96C0u;
        goto label_1a96c0;
    }
    ctx->pc = 0x1A96B8u;
    SET_GPR_U32(ctx, 31, 0x1A96C0u);
    ctx->pc = 0x1A96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96B8u;
    // 0x1a96bc: 0x26343e80  addiu       $s4, $s1, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A96C0u;
label_1a96c0:
    // 0x1a96c0: 0x26d03240  addiu       $s0, $s6, 0x3240
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1a96c4:
    // 0x1a96c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a96c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a96c8:
    // 0x1a96c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a96c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a96cc:
    // 0x1a96cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a96d0:
    // 0x1a96d0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1a96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_1a96d4:
    // 0x1a96d4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1a96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1a96d8:
    // 0x1a96d8: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1a96d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_1a96dc:
    // 0x1a96dc: 0xc069bee  jal         func_1A6FB8
label_1a96e0:
    if (ctx->pc == 0x1A96E0u) {
        ctx->pc = 0x1A96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96DCu;
        // 0x1a96e0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96E4u;
        goto label_1a96e4;
    }
    ctx->pc = 0x1A96DCu;
    SET_GPR_U32(ctx, 31, 0x1A96E4u);
    ctx->pc = 0x1A96E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96DCu;
    // 0x1a96e0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A96E4u;
label_1a96e4:
    // 0x1a96e4: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1a96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1a96e8:
    // 0x1a96e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a96e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a96ec:
    // 0x1a96ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a96ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a96f0:
    // 0x1a96f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a96f4:
    // 0x1a96f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a96f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a96f8:
    // 0x1a96f8: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1a96f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_1a96fc:
    // 0x1a96fc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a96fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9700:
    // 0x1a9700: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a9700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9704:
    // 0x1a9704: 0xc069e2a  jal         func_1A78A8
label_1a9708:
    if (ctx->pc == 0x1A9708u) {
        ctx->pc = 0x1A9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9704u;
        // 0x1a9708: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A970Cu;
        goto label_1a970c;
    }
    ctx->pc = 0x1A9704u;
    SET_GPR_U32(ctx, 31, 0x1A970Cu);
    ctx->pc = 0x1A9708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9704u;
    // 0x1a9708: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A970Cu;
label_1a970c:
    // 0x1a970c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a9710:
    if (ctx->pc == 0x1A9710u) {
        ctx->pc = 0x1A9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A970Cu;
        // 0x1a9710: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9714u;
        goto label_1a9714;
    }
    ctx->pc = 0x1A970Cu;
    {
        const bool branch_taken_0x1a970c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A970Cu;
        // 0x1a9710: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a970c) {
            ctx->pc = 0x1A972Cu;
            goto label_1a972c;
        }
    }
    ctx->pc = 0x1A9714u;
label_1a9714:
    // 0x1a9714: 0xc06920c  jal         func_1A4830
label_1a9718:
    if (ctx->pc == 0x1A9718u) {
        ctx->pc = 0x1A9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9714u;
        // 0x1a9718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A971Cu;
        goto label_1a971c;
    }
    ctx->pc = 0x1A9714u;
    SET_GPR_U32(ctx, 31, 0x1A971Cu);
    ctx->pc = 0x1A9718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9714u;
    // 0x1a9718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A971Cu;
label_1a971c:
    // 0x1a971c: 0xc06a158  jal         func_1A8560
label_1a9720:
    if (ctx->pc == 0x1A9720u) {
        ctx->pc = 0x1A9724u;
        goto label_1a9724;
    }
    ctx->pc = 0x1A971Cu;
    SET_GPR_U32(ctx, 31, 0x1A9724u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9724u;
label_1a9724:
    // 0x1a9724: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a9728:
    if (ctx->pc == 0x1A9728u) {
        ctx->pc = 0x1A9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9724u;
        // 0x1a9728: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A972Cu;
        goto label_1a972c;
    }
    ctx->pc = 0x1A9724u;
    {
        const bool branch_taken_0x1a9724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9724u;
        // 0x1a9728: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9724) {
            ctx->pc = 0x1A9764u;
            goto label_1a9764;
        }
    }
    ctx->pc = 0x1A972Cu;
label_1a972c:
    // 0x1a972c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a9730:
    // 0x1a9730: 0xc06a158  jal         func_1A8560
label_1a9734:
    if (ctx->pc == 0x1A9734u) {
        ctx->pc = 0x1A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9730u;
        // 0x1a9734: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9738u;
        goto label_1a9738;
    }
    ctx->pc = 0x1A9730u;
    SET_GPR_U32(ctx, 31, 0x1A9738u);
    ctx->pc = 0x1A9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9730u;
    // 0x1a9734: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9738u;
label_1a9738:
    // 0x1a9738: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a973c:
    if (ctx->pc == 0x1A973Cu) {
        ctx->pc = 0x1A9740u;
        goto label_1a9740;
    }
    ctx->pc = 0x1A9738u;
    {
        const bool branch_taken_0x1a9738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9738) {
            ctx->pc = 0x1A9750u;
            goto label_1a9750;
        }
    }
    ctx->pc = 0x1A9740u;
label_1a9740:
    // 0x1a9740: 0xc06920c  jal         func_1A4830
label_1a9744:
    if (ctx->pc == 0x1A9744u) {
        ctx->pc = 0x1A9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9740u;
        // 0x1a9744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9748u;
        goto label_1a9748;
    }
    ctx->pc = 0x1A9740u;
    SET_GPR_U32(ctx, 31, 0x1A9748u);
    ctx->pc = 0x1A9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9740u;
    // 0x1a9744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9748u;
label_1a9748:
    // 0x1a9748: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a974c:
    if (ctx->pc == 0x1A974Cu) {
        ctx->pc = 0x1A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9748u;
        // 0x1a974c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9750u;
        goto label_1a9750;
    }
    ctx->pc = 0x1A9748u;
    {
        const bool branch_taken_0x1a9748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9748u;
        // 0x1a974c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9748) {
            ctx->pc = 0x1A9764u;
            goto label_1a9764;
        }
    }
    ctx->pc = 0x1A9750u;
label_1a9750:
    // 0x1a9750: 0xc069218  jal         func_1A4860
label_1a9754:
    if (ctx->pc == 0x1A9754u) {
        ctx->pc = 0x1A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9750u;
        // 0x1a9754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9758u;
        goto label_1a9758;
    }
    ctx->pc = 0x1A9750u;
    SET_GPR_U32(ctx, 31, 0x1A9758u);
    ctx->pc = 0x1A9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9750u;
    // 0x1a9754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9758u;
label_1a9758:
    // 0x1a9758: 0xc06920c  jal         func_1A4830
label_1a975c:
    if (ctx->pc == 0x1A975Cu) {
        ctx->pc = 0x1A975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9758u;
        // 0x1a975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9760u;
        goto label_1a9760;
    }
    ctx->pc = 0x1A9758u;
    SET_GPR_U32(ctx, 31, 0x1A9760u);
    ctx->pc = 0x1A975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9758u;
    // 0x1a975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9760u;
label_1a9760:
    // 0x1a9760: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a9760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9764:
    // 0x1a9764: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a9764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9768:
    // 0x1a9768: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9768u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a976c:
    // 0x1a976c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a976cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9770:
    // 0x1a9770: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9774:
    // 0x1a9774: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9778:
    // 0x1a9778: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a977c:
    // 0x1a977c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a977cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9780:
    // 0x1a9780: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9784:
    // 0x1a9784: 0x3e00008  jr          $ra
label_1a9788:
    if (ctx->pc == 0x1A9788u) {
        ctx->pc = 0x1A9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9784u;
        // 0x1a9788: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A978Cu;
        goto label_1a978c;
    }
    ctx->pc = 0x1A9784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9784u;
        // 0x1a9788: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A978Cu;
label_1a978c:
    // 0x1a978c: 0x0  nop
    ctx->pc = 0x1a978cu;
    // NOP
label_1a9790:
    // 0x1a9790: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a9794:
    // 0x1a9794: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a9798:
    // 0x1a9798: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a979c:
    // 0x1a979c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1a979cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a97a0:
    // 0x1a97a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a97a4:
    // 0x1a97a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a97a8:
    // 0x1a97a8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a97ac:
    // 0x1a97ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1a97acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a97b0:
    // 0x1a97b0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a97b4:
    // 0x1a97b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a97b8:
    // 0x1a97b8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a97bc:
    // 0x1a97bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a97bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a97c0:
    // 0x1a97c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a97c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a97c4:
    // 0x1a97c4: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a97c8:
    // 0x1a97c8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a97cc:
    // 0x1a97cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a97ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1a97d0:
    // 0x1a97d0: 0xc06a02c  jal         func_1A80B0
label_1a97d4:
    if (ctx->pc == 0x1A97D4u) {
        ctx->pc = 0x1A97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97D0u;
        // 0x1a97d4: 0x26d13240  addiu       $s1, $s6, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97D8u;
        goto label_1a97d8;
    }
    ctx->pc = 0x1A97D0u;
    SET_GPR_U32(ctx, 31, 0x1A97D8u);
    ctx->pc = 0x1A97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97D0u;
    // 0x1a97d4: 0x26d13240  addiu       $s1, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A97D8u;
label_1a97d8:
    // 0x1a97d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a97dc:
    // 0x1a97dc: 0xc06a14c  jal         func_1A8530
label_1a97e0:
    if (ctx->pc == 0x1A97E0u) {
        ctx->pc = 0x1A97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97DCu;
        // 0x1a97e0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97E4u;
        goto label_1a97e4;
    }
    ctx->pc = 0x1A97DCu;
    SET_GPR_U32(ctx, 31, 0x1A97E4u);
    ctx->pc = 0x1A97E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97DCu;
    // 0x1a97e0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A97E4u;
label_1a97e4:
    // 0x1a97e4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a97e8:
    // 0x1a97e8: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a97ec:
    // 0x1a97ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a97f0:
    if (ctx->pc == 0x1A97F0u) {
        ctx->pc = 0x1A97F4u;
        goto label_1a97f4;
    }
    ctx->pc = 0x1A97ECu;
    {
        const bool branch_taken_0x1a97ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a97ec) {
            ctx->pc = 0x1A97FCu;
            goto label_1a97fc;
        }
    }
    ctx->pc = 0x1A97F4u;
label_1a97f4:
    // 0x1a97f4: 0xc06a18e  jal         func_1A8638
label_1a97f8:
    if (ctx->pc == 0x1A97F8u) {
        ctx->pc = 0x1A97FCu;
        goto label_1a97fc;
    }
    ctx->pc = 0x1A97F4u;
    SET_GPR_U32(ctx, 31, 0x1A97FCu);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A97FCu;
label_1a97fc:
    // 0x1a97fc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1a9800:
    if (ctx->pc == 0x1A9800u) {
        ctx->pc = 0x1A9804u;
        goto label_1a9804;
    }
    ctx->pc = 0x1A97FCu;
    {
        const bool branch_taken_0x1a97fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97fc) {
            ctx->pc = 0x1A9810u;
            goto label_1a9810;
        }
    }
    ctx->pc = 0x1A9804u;
label_1a9804:
    // 0x1a9804: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a9808:
    // 0x1a9808: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a980c:
    if (ctx->pc == 0x1A980Cu) {
        ctx->pc = 0x1A980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9808u;
        // 0x1a980c: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9810u;
        goto label_1a9810;
    }
    ctx->pc = 0x1A9808u;
    {
        const bool branch_taken_0x1a9808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9808u;
        // 0x1a980c: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9808) {
            ctx->pc = 0x1A9820u;
            goto label_1a9820;
        }
    }
    ctx->pc = 0x1A9810u;
label_1a9810:
    // 0x1a9810: 0xc06a158  jal         func_1A8560
label_1a9814:
    if (ctx->pc == 0x1A9814u) {
        ctx->pc = 0x1A9818u;
        goto label_1a9818;
    }
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9818u;
label_1a9818:
    // 0x1a9818: 0x10000049  b           . + 4 + (0x49 << 2)
label_1a981c:
    if (ctx->pc == 0x1A981Cu) {
        ctx->pc = 0x1A981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9818u;
        // 0x1a981c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9820u;
        goto label_1a9820;
    }
    ctx->pc = 0x1A9818u;
    {
        const bool branch_taken_0x1a9818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9818u;
        // 0x1a981c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9818) {
            ctx->pc = 0x1A9940u;
            { ctx->pc = 0x1a9940; return; }
        }
    }
    ctx->pc = 0x1A9820u;
label_1a9820:
    // 0x1a9820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a9824:
    if (ctx->pc == 0x1A9824u) {
        ctx->pc = 0x1A9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9820u;
        // 0x1a9824: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9828u;
        goto label_1a9828;
    }
    ctx->pc = 0x1A9820u;
    {
        const bool branch_taken_0x1a9820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9820u;
        // 0x1a9824: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9820) {
            ctx->pc = 0x1A9830u;
            goto label_1a9830;
        }
    }
    ctx->pc = 0x1A9828u;
label_1a9828:
    // 0x1a9828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a982c:
    if (ctx->pc == 0x1A982Cu) {
        ctx->pc = 0x1A9830u;
        goto label_1a9830;
    }
    ctx->pc = 0x1A9828u;
    {
        const bool branch_taken_0x1a9828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9828) {
            ctx->pc = 0x1A9840u;
            goto label_1a9840;
        }
    }
    ctx->pc = 0x1A9830u;
label_1a9830:
    // 0x1a9830: 0xc06a158  jal         func_1A8560
label_1a9834:
    if (ctx->pc == 0x1A9834u) {
        ctx->pc = 0x1A9838u;
        goto label_1a9838;
    }
    ctx->pc = 0x1A9830u;
    SET_GPR_U32(ctx, 31, 0x1A9838u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9838u;
label_1a9838:
    // 0x1a9838: 0x10000041  b           . + 4 + (0x41 << 2)
label_1a983c:
    if (ctx->pc == 0x1A983Cu) {
        ctx->pc = 0x1A983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9838u;
        // 0x1a983c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9840u;
        goto label_1a9840;
    }
    ctx->pc = 0x1A9838u;
    {
        const bool branch_taken_0x1a9838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9838u;
        // 0x1a983c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9838) {
            ctx->pc = 0x1A9940u;
            { ctx->pc = 0x1a9940; return; }
        }
    }
    ctx->pc = 0x1A9840u;
label_1a9840:
    // 0x1a9840: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1a9844:
    if (ctx->pc == 0x1A9844u) {
        ctx->pc = 0x1A9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9840u;
        // 0x1a9844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9848u;
        goto label_1a9848;
    }
    ctx->pc = 0x1A9840u;
    {
        const bool branch_taken_0x1a9840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9840u;
        // 0x1a9844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9840) {
            ctx->pc = 0x1A9850u;
            goto label_1a9850;
        }
    }
    ctx->pc = 0x1A9848u;
label_1a9848:
    // 0x1a9848: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a984c:
    if (ctx->pc == 0x1A984Cu) {
        ctx->pc = 0x1A984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9848u;
        // 0x1a984c: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9850u;
        goto label_1a9850;
    }
    ctx->pc = 0x1A9848u;
    {
        const bool branch_taken_0x1a9848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9848u;
        // 0x1a984c: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9848) {
            ctx->pc = 0x1A985Cu;
            goto label_1a985c;
        }
    }
    ctx->pc = 0x1A9850u;
label_1a9850:
    // 0x1a9850: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1a9854:
    // 0x1a9854: 0xc08e93e  jal         func_23A4F8
label_1a9858:
    if (ctx->pc == 0x1A9858u) {
        ctx->pc = 0x1A9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9854u;
        // 0x1a9858: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A985Cu;
        goto label_1a985c;
    }
    ctx->pc = 0x1A9854u;
    SET_GPR_U32(ctx, 31, 0x1A985Cu);
    ctx->pc = 0x1A9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9854u;
    // 0x1a9858: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1A985Cu;
label_1a985c:
    // 0x1a985c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9860:
    // 0x1a9860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9864:
    // 0x1a9864: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1a9864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
label_1a9868:
    // 0x1a9868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a986c:
    // 0x1a986c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1a986cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1a9870:
    // 0x1a9870: 0x26d03240  addiu       $s0, $s6, 0x3240
    ctx->pc = 0x1a9870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1a9874:
    // 0x1a9874: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x1a9874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
label_1a9878:
    // 0x1a9878: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1a9878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1a987c:
    // 0x1a987c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a987cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9880:
    // 0x1a9880: 0xc069208  jal         func_1A4820
label_1a9884:
    if (ctx->pc == 0x1A9884u) {
        ctx->pc = 0x1A9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9880u;
        // 0x1a9884: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9888u;
        goto label_1a9888;
    }
    ctx->pc = 0x1A9880u;
    SET_GPR_U32(ctx, 31, 0x1A9888u);
    ctx->pc = 0x1A9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9880u;
    // 0x1a9884: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9888u;
label_1a9888:
    // 0x1a9888: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a988c:
    // 0x1a988c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9890:
    // 0x1a9890: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9894:
    // 0x1a9894: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x1a9894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
label_1a9898:
    // 0x1a9898: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a9898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a989c:
    // 0x1a989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a98a0:
    // 0x1a98a0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1a98a4:
    // 0x1a98a4: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1a98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    ctx->pc = 0x1a98a8u;
    return;
}

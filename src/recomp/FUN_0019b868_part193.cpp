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


void FUN_0019b868_part193(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1f99b8u: goto label_1f99b8;
        case 0x1f99bcu: goto label_1f99bc;
        case 0x1f99c0u: goto label_1f99c0;
        case 0x1f99c4u: goto label_1f99c4;
        case 0x1f99c8u: goto label_1f99c8;
        case 0x1f99ccu: goto label_1f99cc;
        case 0x1f99d0u: goto label_1f99d0;
        case 0x1f99d4u: goto label_1f99d4;
        case 0x1f99d8u: goto label_1f99d8;
        case 0x1f99dcu: goto label_1f99dc;
        case 0x1f99e0u: goto label_1f99e0;
        case 0x1f99e4u: goto label_1f99e4;
        case 0x1f99e8u: goto label_1f99e8;
        case 0x1f99ecu: goto label_1f99ec;
        case 0x1f99f0u: goto label_1f99f0;
        case 0x1f99f4u: goto label_1f99f4;
        case 0x1f99f8u: goto label_1f99f8;
        case 0x1f99fcu: goto label_1f99fc;
        case 0x1f9a00u: goto label_1f9a00;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a08u: goto label_1f9a08;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a14u: goto label_1f9a14;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a1cu: goto label_1f9a1c;
        case 0x1f9a20u: goto label_1f9a20;
        case 0x1f9a24u: goto label_1f9a24;
        case 0x1f9a28u: goto label_1f9a28;
        case 0x1f9a2cu: goto label_1f9a2c;
        case 0x1f9a30u: goto label_1f9a30;
        case 0x1f9a34u: goto label_1f9a34;
        case 0x1f9a38u: goto label_1f9a38;
        case 0x1f9a3cu: goto label_1f9a3c;
        case 0x1f9a40u: goto label_1f9a40;
        case 0x1f9a44u: goto label_1f9a44;
        case 0x1f9a48u: goto label_1f9a48;
        case 0x1f9a4cu: goto label_1f9a4c;
        case 0x1f9a50u: goto label_1f9a50;
        case 0x1f9a54u: goto label_1f9a54;
        case 0x1f9a58u: goto label_1f9a58;
        case 0x1f9a5cu: goto label_1f9a5c;
        case 0x1f9a60u: goto label_1f9a60;
        case 0x1f9a64u: goto label_1f9a64;
        case 0x1f9a68u: goto label_1f9a68;
        case 0x1f9a6cu: goto label_1f9a6c;
        case 0x1f9a70u: goto label_1f9a70;
        case 0x1f9a74u: goto label_1f9a74;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9a7cu: goto label_1f9a7c;
        case 0x1f9a80u: goto label_1f9a80;
        case 0x1f9a84u: goto label_1f9a84;
        case 0x1f9a88u: goto label_1f9a88;
        case 0x1f9a8cu: goto label_1f9a8c;
        case 0x1f9a90u: goto label_1f9a90;
        case 0x1f9a94u: goto label_1f9a94;
        case 0x1f9a98u: goto label_1f9a98;
        case 0x1f9a9cu: goto label_1f9a9c;
        case 0x1f9aa0u: goto label_1f9aa0;
        case 0x1f9aa4u: goto label_1f9aa4;
        case 0x1f9aa8u: goto label_1f9aa8;
        case 0x1f9aacu: goto label_1f9aac;
        case 0x1f9ab0u: goto label_1f9ab0;
        case 0x1f9ab4u: goto label_1f9ab4;
        case 0x1f9ab8u: goto label_1f9ab8;
        case 0x1f9abcu: goto label_1f9abc;
        case 0x1f9ac0u: goto label_1f9ac0;
        case 0x1f9ac4u: goto label_1f9ac4;
        case 0x1f9ac8u: goto label_1f9ac8;
        case 0x1f9accu: goto label_1f9acc;
        case 0x1f9ad0u: goto label_1f9ad0;
        case 0x1f9ad4u: goto label_1f9ad4;
        case 0x1f9ad8u: goto label_1f9ad8;
        case 0x1f9adcu: goto label_1f9adc;
        case 0x1f9ae0u: goto label_1f9ae0;
        case 0x1f9ae4u: goto label_1f9ae4;
        case 0x1f9ae8u: goto label_1f9ae8;
        case 0x1f9aecu: goto label_1f9aec;
        case 0x1f9af0u: goto label_1f9af0;
        case 0x1f9af4u: goto label_1f9af4;
        case 0x1f9af8u: goto label_1f9af8;
        case 0x1f9afcu: goto label_1f9afc;
        case 0x1f9b00u: goto label_1f9b00;
        case 0x1f9b04u: goto label_1f9b04;
        case 0x1f9b08u: goto label_1f9b08;
        case 0x1f9b0cu: goto label_1f9b0c;
        case 0x1f9b10u: goto label_1f9b10;
        case 0x1f9b14u: goto label_1f9b14;
        case 0x1f9b18u: goto label_1f9b18;
        case 0x1f9b1cu: goto label_1f9b1c;
        case 0x1f9b20u: goto label_1f9b20;
        case 0x1f9b24u: goto label_1f9b24;
        case 0x1f9b28u: goto label_1f9b28;
        case 0x1f9b2cu: goto label_1f9b2c;
        case 0x1f9b30u: goto label_1f9b30;
        case 0x1f9b34u: goto label_1f9b34;
        case 0x1f9b38u: goto label_1f9b38;
        case 0x1f9b3cu: goto label_1f9b3c;
        case 0x1f9b40u: goto label_1f9b40;
        case 0x1f9b44u: goto label_1f9b44;
        case 0x1f9b48u: goto label_1f9b48;
        case 0x1f9b4cu: goto label_1f9b4c;
        case 0x1f9b50u: goto label_1f9b50;
        case 0x1f9b54u: goto label_1f9b54;
        case 0x1f9b58u: goto label_1f9b58;
        case 0x1f9b5cu: goto label_1f9b5c;
        case 0x1f9b60u: goto label_1f9b60;
        case 0x1f9b64u: goto label_1f9b64;
        case 0x1f9b68u: goto label_1f9b68;
        case 0x1f9b6cu: goto label_1f9b6c;
        case 0x1f9b70u: goto label_1f9b70;
        case 0x1f9b74u: goto label_1f9b74;
        case 0x1f9b78u: goto label_1f9b78;
        case 0x1f9b7cu: goto label_1f9b7c;
        case 0x1f9b80u: goto label_1f9b80;
        case 0x1f9b84u: goto label_1f9b84;
        case 0x1f9b88u: goto label_1f9b88;
        case 0x1f9b8cu: goto label_1f9b8c;
        case 0x1f9b90u: goto label_1f9b90;
        case 0x1f9b94u: goto label_1f9b94;
        case 0x1f9b98u: goto label_1f9b98;
        case 0x1f9b9cu: goto label_1f9b9c;
        case 0x1f9ba0u: goto label_1f9ba0;
        case 0x1f9ba4u: goto label_1f9ba4;
        case 0x1f9ba8u: goto label_1f9ba8;
        case 0x1f9bacu: goto label_1f9bac;
        case 0x1f9bb0u: goto label_1f9bb0;
        case 0x1f9bb4u: goto label_1f9bb4;
        case 0x1f9bb8u: goto label_1f9bb8;
        case 0x1f9bbcu: goto label_1f9bbc;
        case 0x1f9bc0u: goto label_1f9bc0;
        case 0x1f9bc4u: goto label_1f9bc4;
        case 0x1f9bc8u: goto label_1f9bc8;
        case 0x1f9bccu: goto label_1f9bcc;
        case 0x1f9bd0u: goto label_1f9bd0;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9bd8u: goto label_1f9bd8;
        case 0x1f9bdcu: goto label_1f9bdc;
        case 0x1f9be0u: goto label_1f9be0;
        case 0x1f9be4u: goto label_1f9be4;
        case 0x1f9be8u: goto label_1f9be8;
        case 0x1f9becu: goto label_1f9bec;
        case 0x1f9bf0u: goto label_1f9bf0;
        case 0x1f9bf4u: goto label_1f9bf4;
        case 0x1f9bf8u: goto label_1f9bf8;
        case 0x1f9bfcu: goto label_1f9bfc;
        case 0x1f9c00u: goto label_1f9c00;
        case 0x1f9c04u: goto label_1f9c04;
        case 0x1f9c08u: goto label_1f9c08;
        case 0x1f9c0cu: goto label_1f9c0c;
        case 0x1f9c10u: goto label_1f9c10;
        case 0x1f9c14u: goto label_1f9c14;
        case 0x1f9c18u: goto label_1f9c18;
        case 0x1f9c1cu: goto label_1f9c1c;
        case 0x1f9c20u: goto label_1f9c20;
        case 0x1f9c24u: goto label_1f9c24;
        case 0x1f9c28u: goto label_1f9c28;
        case 0x1f9c2cu: goto label_1f9c2c;
        case 0x1f9c30u: goto label_1f9c30;
        case 0x1f9c34u: goto label_1f9c34;
        default: return;
    }

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
            goto label_1f99d8;
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
            goto label_1f99d8;
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
        goto label_1f99b8;
    }
    ctx->pc = 0x1F99B0u;
    {
        const bool branch_taken_0x1f99b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f99b0) {
            ctx->pc = 0x1F99D8u;
            goto label_1f99d8;
        }
    }
    ctx->pc = 0x1F99B8u;
label_1f99b8:
    // 0x1f99b8: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x1f99b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_1f99bc:
    // 0x1f99bc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f99bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f99c0:
    // 0x1f99c0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1f99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99c4:
    // 0x1f99c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f99c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f99c8:
    // 0x1f99c8: 0x0  nop
    ctx->pc = 0x1f99c8u;
    // NOP
label_1f99cc:
    // 0x1f99cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f99d0:
    if (ctx->pc == 0x1F99D0u) {
        ctx->pc = 0x1F99D4u;
        goto label_1f99d4;
    }
    ctx->pc = 0x1F99CCu;
    {
        const bool branch_taken_0x1f99cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f99cc) {
            ctx->pc = 0x1F99D8u;
            goto label_1f99d8;
        }
    }
    ctx->pc = 0x1F99D4u;
label_1f99d4:
    // 0x1f99d4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1f99d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f99d8:
    // 0x1f99d8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1f99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99dc:
    // 0x1f99dc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1f99dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f99e0:
    // 0x1f99e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f99e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f99e4:
    // 0x1f99e4: 0x0  nop
    ctx->pc = 0x1f99e4u;
    // NOP
label_1f99e8:
    // 0x1f99e8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1f99ec:
    if (ctx->pc == 0x1F99ECu) {
        ctx->pc = 0x1F99F0u;
        goto label_1f99f0;
    }
    ctx->pc = 0x1F99E8u;
    {
        const bool branch_taken_0x1f99e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f99e8) {
            ctx->pc = 0x1F9A14u;
            goto label_1f9a14;
        }
    }
    ctx->pc = 0x1F99F0u;
label_1f99f0:
    // 0x1f99f0: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1f99f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_1f99f4:
    // 0x1f99f4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1f99f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f99f8:
    // 0x1f99f8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f99f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99fc:
    // 0x1f99fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f99fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9a00:
    // 0x1f9a00: 0x0  nop
    ctx->pc = 0x1f9a00u;
    // NOP
label_1f9a04:
    // 0x1f9a04: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1f9a08:
    if (ctx->pc == 0x1F9A08u) {
        ctx->pc = 0x1F9A0Cu;
        goto label_1f9a0c;
    }
    ctx->pc = 0x1F9A04u;
    {
        const bool branch_taken_0x1f9a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9a04) {
            ctx->pc = 0x1F9A44u;
            goto label_1f9a44;
        }
    }
    ctx->pc = 0x1F9A0Cu;
label_1f9a0c:
    // 0x1f9a0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f9a10:
    if (ctx->pc == 0x1F9A10u) {
        ctx->pc = 0x1F9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A0Cu;
        // 0x1f9a10: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A14u;
        goto label_1f9a14;
    }
    ctx->pc = 0x1F9A0Cu;
    {
        const bool branch_taken_0x1f9a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A0Cu;
        // 0x1f9a10: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a0c) {
            ctx->pc = 0x1F9A44u;
            goto label_1f9a44;
        }
    }
    ctx->pc = 0x1F9A14u;
label_1f9a14:
    // 0x1f9a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9a18:
    // 0x1f9a18: 0x0  nop
    ctx->pc = 0x1f9a18u;
    // NOP
label_1f9a1c:
    // 0x1f9a1c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1f9a20:
    if (ctx->pc == 0x1F9A20u) {
        ctx->pc = 0x1F9A24u;
        goto label_1f9a24;
    }
    ctx->pc = 0x1F9A1Cu;
    {
        const bool branch_taken_0x1f9a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9a1c) {
            ctx->pc = 0x1F9A44u;
            goto label_1f9a44;
        }
    }
    ctx->pc = 0x1F9A24u;
label_1f9a24:
    // 0x1f9a24: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x1f9a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_1f9a28:
    // 0x1f9a28: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1f9a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f9a2c:
    // 0x1f9a2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f9a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9a30:
    // 0x1f9a30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f9a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9a34:
    // 0x1f9a34: 0x0  nop
    ctx->pc = 0x1f9a34u;
    // NOP
label_1f9a38:
    // 0x1f9a38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f9a3c:
    if (ctx->pc == 0x1F9A3Cu) {
        ctx->pc = 0x1F9A40u;
        goto label_1f9a40;
    }
    ctx->pc = 0x1F9A38u;
    {
        const bool branch_taken_0x1f9a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9a38) {
            ctx->pc = 0x1F9A44u;
            goto label_1f9a44;
        }
    }
    ctx->pc = 0x1F9A40u;
label_1f9a40:
    // 0x1f9a40: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1f9a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f9a44:
    // 0x1f9a44: 0x3e00008  jr          $ra
label_1f9a48:
    if (ctx->pc == 0x1F9A48u) {
        ctx->pc = 0x1F9A4Cu;
        goto label_1f9a4c;
    }
    ctx->pc = 0x1F9A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9A4Cu;
label_1f9a4c:
    // 0x1f9a4c: 0x0  nop
    ctx->pc = 0x1f9a4cu;
    // NOP
label_1f9a50:
    // 0x1f9a50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f9a54:
    // 0x1f9a54: 0x27828278  addiu       $v0, $gp, -0x7D88
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9a58:
    // 0x1f9a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f9a5c:
    // 0x1f9a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f9a60:
    // 0x1f9a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9a64:
    // 0x1f9a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9a68:
    // 0x1f9a68: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9a6c:
    // 0x1f9a6c: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x1f9a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f9a70:
    // 0x1f9a70: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1f9a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_1f9a74:
    // 0x1f9a74: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f9a78:
    // 0x1f9a78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9a7c:
    // 0x1f9a7c: 0x2442c558  addiu       $v0, $v0, -0x3AA8
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
label_1f9a80:
    // 0x1f9a80: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9a84:
    // 0x1f9a84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f9a88:
    // 0x1f9a88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9a8c:
    // 0x1f9a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9a90:
    // 0x1f9a90: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9a94:
    // 0x1f9a94: 0xc04f184  jal         func_13C610
label_1f9a98:
    if (ctx->pc == 0x1F9A98u) {
        ctx->pc = 0x1F9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A94u;
        // 0x1f9a98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A9Cu;
        goto label_1f9a9c;
    }
    ctx->pc = 0x1F9A94u;
    SET_GPR_U32(ctx, 31, 0x1F9A9Cu);
    ctx->pc = 0x1F9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A94u;
    // 0x1f9a98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C610u, 0x1F9A94u, 0x1F9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A9Cu;
label_1f9a9c:
    // 0x1f9a9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9aa0:
    // 0x1f9aa0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9aa4:
    // 0x1f9aa4: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9aa8:
    // 0x1f9aa8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9aac:
    // 0x1f9aac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f9ab0:
    // 0x1f9ab0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f9ab4:
    // 0x1f9ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f9ab8:
    // 0x1f9ab8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1f9ab8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9abc:
    // 0x1f9abc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1f9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1f9ac0:
    // 0x1f9ac0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1f9ac4:
    if (ctx->pc == 0x1F9AC4u) {
        ctx->pc = 0x1F9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC0u;
        // 0x1f9ac4: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9AC8u;
        goto label_1f9ac8;
    }
    ctx->pc = 0x1F9AC0u;
    {
        const bool branch_taken_0x1f9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC0u;
        // 0x1f9ac4: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ac0) {
            ctx->pc = 0x1F9B34u;
            goto label_1f9b34;
        }
    }
    ctx->pc = 0x1F9AC8u;
label_1f9ac8:
    // 0x1f9ac8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f9acc:
    // 0x1f9acc: 0x24a5c5a0  addiu       $a1, $a1, -0x3A60
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952352));
label_1f9ad0:
    // 0x1f9ad0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f9ad4:
    // 0x1f9ad4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f9ad8:
    // 0x1f9ad8: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9adc:
    // 0x1f9adc: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x1f9adcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9ae0:
    // 0x1f9ae0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9ae4:
    // 0x1f9ae4: 0x2463c5a1  addiu       $v1, $v1, -0x3A5F
    ctx->pc = 0x1f9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952353));
label_1f9ae8:
    // 0x1f9ae8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1f9ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f9aec:
    // 0x1f9aec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9af0:
    // 0x1f9af0: 0x2463c5a2  addiu       $v1, $v1, -0x3A5E
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952354));
label_1f9af4:
    // 0x1f9af4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f9af8:
    // 0x1f9af8: 0x24a5a688  addiu       $a1, $a1, -0x5978
    ctx->pc = 0x1f9af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
label_1f9afc:
    // 0x1f9afc: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x1f9afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f9b00:
    // 0x1f9b00: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x1f9b00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_1f9b04:
    // 0x1f9b04: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f9b08:
    // 0x1f9b08: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1f9b08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9b0c:
    // 0x1f9b0c: 0x24a5a689  addiu       $a1, $a1, -0x5977
    ctx->pc = 0x1f9b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944393));
label_1f9b10:
    // 0x1f9b10: 0xaa3021  addu        $a2, $a1, $t2
    ctx->pc = 0x1f9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f9b14:
    // 0x1f9b14: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1f9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f9b18:
    // 0x1f9b18: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9b1c:
    // 0x1f9b1c: 0x2463a68a  addiu       $v1, $v1, -0x5976
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944394));
label_1f9b20:
    // 0x1f9b20: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f9b24:
    // 0x1f9b24: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x1f9b24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_1f9b28:
    // 0x1f9b28: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1f9b28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9b2c:
    // 0x1f9b2c: 0x10000040  b           . + 4 + (0x40 << 2)
label_1f9b30:
    if (ctx->pc == 0x1F9B30u) {
        ctx->pc = 0x1F9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B2Cu;
        // 0x1f9b30: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B34u;
        goto label_1f9b34;
    }
    ctx->pc = 0x1F9B2Cu;
    {
        const bool branch_taken_0x1f9b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B2Cu;
        // 0x1f9b30: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b2c) {
            ctx->pc = 0x1F9C30u;
            goto label_1f9c30;
        }
    }
    ctx->pc = 0x1F9B34u;
label_1f9b34:
    // 0x1f9b34: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1f9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f9b38:
    // 0x1f9b38: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1f9b3c:
    if (ctx->pc == 0x1F9B3Cu) {
        ctx->pc = 0x1F9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B38u;
        // 0x1f9b3c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B40u;
        goto label_1f9b40;
    }
    ctx->pc = 0x1F9B38u;
    {
        const bool branch_taken_0x1f9b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B38u;
        // 0x1f9b3c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b38) {
            ctx->pc = 0x1F9BBCu;
            goto label_1f9bbc;
        }
    }
    ctx->pc = 0x1F9B40u;
label_1f9b40:
    // 0x1f9b40: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f9b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f9b44:
    // 0x1f9b44: 0x3c090029  lui         $t1, 0x29
    ctx->pc = 0x1f9b44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)41 << 16));
label_1f9b48:
    // 0x1f9b48: 0x902a490d  lbu         $t2, 0x490D($at)
    ctx->pc = 0x1f9b48u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f9b4c:
    // 0x1f9b4c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f9b50:
    // 0x1f9b50: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f9b54:
    // 0x1f9b54: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f9b58:
    // 0x1f9b58: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1f9b5c:
    // 0x1f9b5c: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x1f9b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9b60:
    // 0x1f9b60: 0x24a5a688  addiu       $a1, $a1, -0x5978
    ctx->pc = 0x1f9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
label_1f9b64:
    // 0x1f9b64: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9b68:
    // 0x1f9b68: 0xab4021  addu        $t0, $a1, $t3
    ctx->pc = 0x1f9b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1f9b6c:
    // 0x1f9b6c: 0x2463a689  addiu       $v1, $v1, -0x5977
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944393));
label_1f9b70:
    // 0x1f9b70: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9b74:
    // 0x1f9b74: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9b78:
    // 0x1f9b78: 0x2529c4e0  addiu       $t1, $t1, -0x3B20
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952160));
label_1f9b7c:
    // 0x1f9b7c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1f9b80:
    // 0x1f9b80: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1f9b84:
    // 0x1f9b84: 0x24e7c4e1  addiu       $a3, $a3, -0x3B1F
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952161));
label_1f9b88:
    // 0x1f9b88: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1f9b88u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1f9b8c:
    // 0x1f9b8c: 0x24a5c4e2  addiu       $a1, $a1, -0x3B1E
    ctx->pc = 0x1f9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952162));
label_1f9b90:
    // 0x1f9b90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9b94:
    // 0x1f9b94: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_1f9b98:
    // 0x1f9b98: 0x2463a68a  addiu       $v1, $v1, -0x5976
    ctx->pc = 0x1f9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944394));
label_1f9b9c:
    // 0x1f9b9c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f9ba0:
    // 0x1f9ba0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9ba4:
    // 0x1f9ba4: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x1f9ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_1f9ba8:
    // 0x1f9ba8: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1f9ba8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9bac:
    // 0x1f9bac: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x1f9bacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_1f9bb0:
    // 0x1f9bb0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1f9bb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9bb4:
    // 0x1f9bb4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1f9bb8:
    if (ctx->pc == 0x1F9BB8u) {
        ctx->pc = 0x1F9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BB4u;
        // 0x1f9bb8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9BBCu;
        goto label_1f9bbc;
    }
    ctx->pc = 0x1F9BB4u;
    {
        const bool branch_taken_0x1f9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BB4u;
        // 0x1f9bb8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bb4) {
            ctx->pc = 0x1F9C30u;
            goto label_1f9c30;
        }
    }
    ctx->pc = 0x1F9BBCu;
label_1f9bbc:
    // 0x1f9bbc: 0x3c090029  lui         $t1, 0x29
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)41 << 16));
label_1f9bc0:
    // 0x1f9bc0: 0x902a490d  lbu         $t2, 0x490D($at)
    ctx->pc = 0x1f9bc0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f9bc4:
    // 0x1f9bc4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f9bc8:
    // 0x1f9bc8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f9bcc:
    // 0x1f9bcc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1f9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f9bd0:
    // 0x1f9bd0: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1f9bd4:
    // 0x1f9bd4: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9bd8:
    // 0x1f9bd8: 0x24a5a688  addiu       $a1, $a1, -0x5978
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
label_1f9bdc:
    // 0x1f9bdc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9be0:
    // 0x1f9be0: 0xab4021  addu        $t0, $a1, $t3
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1f9be4:
    // 0x1f9be4: 0x2463a689  addiu       $v1, $v1, -0x5977
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944393));
label_1f9be8:
    // 0x1f9be8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9bec:
    // 0x1f9bec: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9bf0:
    // 0x1f9bf0: 0x2529c480  addiu       $t1, $t1, -0x3B80
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952064));
label_1f9bf4:
    // 0x1f9bf4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1f9bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1f9bf8:
    // 0x1f9bf8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1f9bfc:
    // 0x1f9bfc: 0x24e7c481  addiu       $a3, $a3, -0x3B7F
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952065));
label_1f9c00:
    // 0x1f9c00: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1f9c00u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1f9c04:
    // 0x1f9c04: 0x24a5c482  addiu       $a1, $a1, -0x3B7E
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952066));
label_1f9c08:
    // 0x1f9c08: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9c0c:
    // 0x1f9c0c: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_1f9c10:
    // 0x1f9c10: 0x2463a68a  addiu       $v1, $v1, -0x5976
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944394));
label_1f9c14:
    // 0x1f9c14: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f9c18:
    // 0x1f9c18: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1f9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9c1c:
    // 0x1f9c1c: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x1f9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_1f9c20:
    // 0x1f9c20: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1f9c20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9c24:
    // 0x1f9c24: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x1f9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_1f9c28:
    // 0x1f9c28: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1f9c28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9c2c:
    // 0x1f9c2c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1f9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1f9c30:
    // 0x1f9c30: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9c34:
    // 0x1f9c34: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    ctx->pc = 0x1f9c38u;
    return;
}

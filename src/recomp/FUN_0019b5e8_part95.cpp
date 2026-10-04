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


void FUN_0019b5e8_part95(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c9448u: goto label_1c9448;
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9454u: goto label_1c9454;
        case 0x1c9458u: goto label_1c9458;
        case 0x1c945cu: goto label_1c945c;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9464u: goto label_1c9464;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c946cu: goto label_1c946c;
        case 0x1c9470u: goto label_1c9470;
        case 0x1c9474u: goto label_1c9474;
        case 0x1c9478u: goto label_1c9478;
        case 0x1c947cu: goto label_1c947c;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c948cu: goto label_1c948c;
        case 0x1c9490u: goto label_1c9490;
        case 0x1c9494u: goto label_1c9494;
        case 0x1c9498u: goto label_1c9498;
        case 0x1c949cu: goto label_1c949c;
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94a8u: goto label_1c94a8;
        case 0x1c94acu: goto label_1c94ac;
        case 0x1c94b0u: goto label_1c94b0;
        case 0x1c94b4u: goto label_1c94b4;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94c0u: goto label_1c94c0;
        case 0x1c94c4u: goto label_1c94c4;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94d4u: goto label_1c94d4;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c94dcu: goto label_1c94dc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c94e4u: goto label_1c94e4;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c94f0u: goto label_1c94f0;
        case 0x1c94f4u: goto label_1c94f4;
        case 0x1c94f8u: goto label_1c94f8;
        case 0x1c94fcu: goto label_1c94fc;
        case 0x1c9500u: goto label_1c9500;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9508u: goto label_1c9508;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9514u: goto label_1c9514;
        case 0x1c9518u: goto label_1c9518;
        case 0x1c951cu: goto label_1c951c;
        case 0x1c9520u: goto label_1c9520;
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9528u: goto label_1c9528;
        case 0x1c952cu: goto label_1c952c;
        case 0x1c9530u: goto label_1c9530;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c9538u: goto label_1c9538;
        case 0x1c953cu: goto label_1c953c;
        case 0x1c9540u: goto label_1c9540;
        case 0x1c9544u: goto label_1c9544;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c9550u: goto label_1c9550;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9558u: goto label_1c9558;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9564u: goto label_1c9564;
        case 0x1c9568u: goto label_1c9568;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9570u: goto label_1c9570;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c957cu: goto label_1c957c;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c9588u: goto label_1c9588;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9598u: goto label_1c9598;
        case 0x1c959cu: goto label_1c959c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95a4u: goto label_1c95a4;
        case 0x1c95a8u: goto label_1c95a8;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b0u: goto label_1c95b0;
        case 0x1c95b4u: goto label_1c95b4;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95bcu: goto label_1c95bc;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95c4u: goto label_1c95c4;
        case 0x1c95c8u: goto label_1c95c8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d0u: goto label_1c95d0;
        case 0x1c95d4u: goto label_1c95d4;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95dcu: goto label_1c95dc;
        case 0x1c95e0u: goto label_1c95e0;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95e8u: goto label_1c95e8;
        case 0x1c95ecu: goto label_1c95ec;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9628u: goto label_1c9628;
        case 0x1c962cu: goto label_1c962c;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c9634u: goto label_1c9634;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9640u: goto label_1c9640;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c9648u: goto label_1c9648;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9658u: goto label_1c9658;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9660u: goto label_1c9660;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c9670u: goto label_1c9670;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9678u: goto label_1c9678;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9680u: goto label_1c9680;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c968cu: goto label_1c968c;
        case 0x1c9690u: goto label_1c9690;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c9698u: goto label_1c9698;
        case 0x1c969cu: goto label_1c969c;
        case 0x1c96a0u: goto label_1c96a0;
        case 0x1c96a4u: goto label_1c96a4;
        case 0x1c96a8u: goto label_1c96a8;
        case 0x1c96acu: goto label_1c96ac;
        case 0x1c96b0u: goto label_1c96b0;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96b8u: goto label_1c96b8;
        case 0x1c96bcu: goto label_1c96bc;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96c4u: goto label_1c96c4;
        case 0x1c96c8u: goto label_1c96c8;
        case 0x1c96ccu: goto label_1c96cc;
        case 0x1c96d0u: goto label_1c96d0;
        case 0x1c96d4u: goto label_1c96d4;
        case 0x1c96d8u: goto label_1c96d8;
        case 0x1c96dcu: goto label_1c96dc;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96e4u: goto label_1c96e4;
        case 0x1c96e8u: goto label_1c96e8;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c96f0u: goto label_1c96f0;
        case 0x1c96f4u: goto label_1c96f4;
        case 0x1c96f8u: goto label_1c96f8;
        case 0x1c96fcu: goto label_1c96fc;
        case 0x1c9700u: goto label_1c9700;
        case 0x1c9704u: goto label_1c9704;
        case 0x1c9708u: goto label_1c9708;
        case 0x1c970cu: goto label_1c970c;
        case 0x1c9710u: goto label_1c9710;
        case 0x1c9714u: goto label_1c9714;
        case 0x1c9718u: goto label_1c9718;
        case 0x1c971cu: goto label_1c971c;
        case 0x1c9720u: goto label_1c9720;
        case 0x1c9724u: goto label_1c9724;
        case 0x1c9728u: goto label_1c9728;
        case 0x1c972cu: goto label_1c972c;
        case 0x1c9730u: goto label_1c9730;
        case 0x1c9734u: goto label_1c9734;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c973cu: goto label_1c973c;
        case 0x1c9740u: goto label_1c9740;
        case 0x1c9744u: goto label_1c9744;
        case 0x1c9748u: goto label_1c9748;
        case 0x1c974cu: goto label_1c974c;
        case 0x1c9750u: goto label_1c9750;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c975cu: goto label_1c975c;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c976cu: goto label_1c976c;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9774u: goto label_1c9774;
        case 0x1c9778u: goto label_1c9778;
        case 0x1c977cu: goto label_1c977c;
        case 0x1c9780u: goto label_1c9780;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9788u: goto label_1c9788;
        case 0x1c978cu: goto label_1c978c;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c9794u: goto label_1c9794;
        case 0x1c9798u: goto label_1c9798;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97a0u: goto label_1c97a0;
        case 0x1c97a4u: goto label_1c97a4;
        case 0x1c97a8u: goto label_1c97a8;
        case 0x1c97acu: goto label_1c97ac;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97b4u: goto label_1c97b4;
        case 0x1c97b8u: goto label_1c97b8;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c97c4u: goto label_1c97c4;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97ccu: goto label_1c97cc;
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d4u: goto label_1c97d4;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e0u: goto label_1c97e0;
        case 0x1c97e4u: goto label_1c97e4;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97ecu: goto label_1c97ec;
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c97f8u: goto label_1c97f8;
        case 0x1c97fcu: goto label_1c97fc;
        case 0x1c9800u: goto label_1c9800;
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9808u: goto label_1c9808;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9810u: goto label_1c9810;
        case 0x1c9814u: goto label_1c9814;
        case 0x1c9818u: goto label_1c9818;
        case 0x1c981cu: goto label_1c981c;
        case 0x1c9820u: goto label_1c9820;
        case 0x1c9824u: goto label_1c9824;
        case 0x1c9828u: goto label_1c9828;
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9830u: goto label_1c9830;
        case 0x1c9834u: goto label_1c9834;
        case 0x1c9838u: goto label_1c9838;
        case 0x1c983cu: goto label_1c983c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9844u: goto label_1c9844;
        case 0x1c9848u: goto label_1c9848;
        case 0x1c984cu: goto label_1c984c;
        case 0x1c9850u: goto label_1c9850;
        case 0x1c9854u: goto label_1c9854;
        case 0x1c9858u: goto label_1c9858;
        case 0x1c985cu: goto label_1c985c;
        case 0x1c9860u: goto label_1c9860;
        case 0x1c9864u: goto label_1c9864;
        case 0x1c9868u: goto label_1c9868;
        case 0x1c986cu: goto label_1c986c;
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c987cu: goto label_1c987c;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c988cu: goto label_1c988c;
        case 0x1c9890u: goto label_1c9890;
        case 0x1c9894u: goto label_1c9894;
        case 0x1c9898u: goto label_1c9898;
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98a0u: goto label_1c98a0;
        case 0x1c98a4u: goto label_1c98a4;
        case 0x1c98a8u: goto label_1c98a8;
        case 0x1c98acu: goto label_1c98ac;
        case 0x1c98b0u: goto label_1c98b0;
        case 0x1c98b4u: goto label_1c98b4;
        case 0x1c98b8u: goto label_1c98b8;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98c0u: goto label_1c98c0;
        case 0x1c98c4u: goto label_1c98c4;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c98ccu: goto label_1c98cc;
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98d4u: goto label_1c98d4;
        case 0x1c98d8u: goto label_1c98d8;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98ecu: goto label_1c98ec;
        case 0x1c98f0u: goto label_1c98f0;
        case 0x1c98f4u: goto label_1c98f4;
        case 0x1c98f8u: goto label_1c98f8;
        case 0x1c98fcu: goto label_1c98fc;
        case 0x1c9900u: goto label_1c9900;
        case 0x1c9904u: goto label_1c9904;
        case 0x1c9908u: goto label_1c9908;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9910u: goto label_1c9910;
        case 0x1c9914u: goto label_1c9914;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9920u: goto label_1c9920;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9928u: goto label_1c9928;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9934u: goto label_1c9934;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9944u: goto label_1c9944;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9958u: goto label_1c9958;
        case 0x1c995cu: goto label_1c995c;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9964u: goto label_1c9964;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9970u: goto label_1c9970;
        case 0x1c9974u: goto label_1c9974;
        case 0x1c9978u: goto label_1c9978;
        case 0x1c997cu: goto label_1c997c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c9984u: goto label_1c9984;
        case 0x1c9988u: goto label_1c9988;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c9990u: goto label_1c9990;
        case 0x1c9994u: goto label_1c9994;
        case 0x1c9998u: goto label_1c9998;
        case 0x1c999cu: goto label_1c999c;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99a8u: goto label_1c99a8;
        case 0x1c99acu: goto label_1c99ac;
        case 0x1c99b0u: goto label_1c99b0;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99b8u: goto label_1c99b8;
        case 0x1c99bcu: goto label_1c99bc;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99c4u: goto label_1c99c4;
        case 0x1c99c8u: goto label_1c99c8;
        case 0x1c99ccu: goto label_1c99cc;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99d8u: goto label_1c99d8;
        case 0x1c99dcu: goto label_1c99dc;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c99e4u: goto label_1c99e4;
        case 0x1c99e8u: goto label_1c99e8;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f0u: goto label_1c99f0;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c99f8u: goto label_1c99f8;
        case 0x1c99fcu: goto label_1c99fc;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a04u: goto label_1c9a04;
        case 0x1c9a08u: goto label_1c9a08;
        case 0x1c9a0cu: goto label_1c9a0c;
        case 0x1c9a10u: goto label_1c9a10;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a18u: goto label_1c9a18;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a20u: goto label_1c9a20;
        case 0x1c9a24u: goto label_1c9a24;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9af4u: goto label_1c9af4;
        case 0x1c9af8u: goto label_1c9af8;
        case 0x1c9afcu: goto label_1c9afc;
        case 0x1c9b00u: goto label_1c9b00;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b08u: goto label_1c9b08;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b10u: goto label_1c9b10;
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b1cu: goto label_1c9b1c;
        case 0x1c9b20u: goto label_1c9b20;
        case 0x1c9b24u: goto label_1c9b24;
        case 0x1c9b28u: goto label_1c9b28;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b30u: goto label_1c9b30;
        case 0x1c9b34u: goto label_1c9b34;
        case 0x1c9b38u: goto label_1c9b38;
        case 0x1c9b3cu: goto label_1c9b3c;
        case 0x1c9b40u: goto label_1c9b40;
        case 0x1c9b44u: goto label_1c9b44;
        case 0x1c9b48u: goto label_1c9b48;
        case 0x1c9b4cu: goto label_1c9b4c;
        case 0x1c9b50u: goto label_1c9b50;
        case 0x1c9b54u: goto label_1c9b54;
        case 0x1c9b58u: goto label_1c9b58;
        case 0x1c9b5cu: goto label_1c9b5c;
        case 0x1c9b60u: goto label_1c9b60;
        case 0x1c9b64u: goto label_1c9b64;
        case 0x1c9b68u: goto label_1c9b68;
        case 0x1c9b6cu: goto label_1c9b6c;
        case 0x1c9b70u: goto label_1c9b70;
        case 0x1c9b74u: goto label_1c9b74;
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b80u: goto label_1c9b80;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b88u: goto label_1c9b88;
        case 0x1c9b8cu: goto label_1c9b8c;
        case 0x1c9b90u: goto label_1c9b90;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9ba4u: goto label_1c9ba4;
        case 0x1c9ba8u: goto label_1c9ba8;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bb0u: goto label_1c9bb0;
        case 0x1c9bb4u: goto label_1c9bb4;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bbcu: goto label_1c9bbc;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc4u: goto label_1c9bc4;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9bd0u: goto label_1c9bd0;
        case 0x1c9bd4u: goto label_1c9bd4;
        case 0x1c9bd8u: goto label_1c9bd8;
        case 0x1c9bdcu: goto label_1c9bdc;
        case 0x1c9be0u: goto label_1c9be0;
        case 0x1c9be4u: goto label_1c9be4;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9bf0u: goto label_1c9bf0;
        case 0x1c9bf4u: goto label_1c9bf4;
        case 0x1c9bf8u: goto label_1c9bf8;
        case 0x1c9bfcu: goto label_1c9bfc;
        case 0x1c9c00u: goto label_1c9c00;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c08u: goto label_1c9c08;
        case 0x1c9c0cu: goto label_1c9c0c;
        case 0x1c9c10u: goto label_1c9c10;
        case 0x1c9c14u: goto label_1c9c14;
        default: return;
    }

label_1c9448:
    // 0x1c9448: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c944c:
    // 0x1c944c: 0x240501d0  addiu       $a1, $zero, 0x1D0
    ctx->pc = 0x1c944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_1c9450:
    // 0x1c9450: 0xc060578  jal         func_1815E0
label_1c9454:
    if (ctx->pc == 0x1C9454u) {
        ctx->pc = 0x1C9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9450u;
        // 0x1c9454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9458u;
        goto label_1c9458;
    }
    ctx->pc = 0x1C9450u;
    SET_GPR_U32(ctx, 31, 0x1C9458u);
    ctx->pc = 0x1C9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9450u;
    // 0x1c9454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9450u, 0x1C9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9458u;
label_1c9458:
    // 0x1c9458: 0xff828c20  sd          $v0, -0x73E0($gp)
    ctx->pc = 0x1c9458u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937632), GPR_U64(ctx, 2));
label_1c945c:
    // 0x1c945c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9460:
    // 0x1c9460: 0x240501d1  addiu       $a1, $zero, 0x1D1
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
label_1c9464:
    // 0x1c9464: 0xc060578  jal         func_1815E0
label_1c9468:
    if (ctx->pc == 0x1C9468u) {
        ctx->pc = 0x1C9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9464u;
        // 0x1c9468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C946Cu;
        goto label_1c946c;
    }
    ctx->pc = 0x1C9464u;
    SET_GPR_U32(ctx, 31, 0x1C946Cu);
    ctx->pc = 0x1C9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9464u;
    // 0x1c9468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9464u, 0x1C946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C946Cu;
label_1c946c:
    // 0x1c946c: 0xff828c18  sd          $v0, -0x73E8($gp)
    ctx->pc = 0x1c946cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U64(ctx, 2));
label_1c9470:
    // 0x1c9470: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9474:
    // 0x1c9474: 0x240501d2  addiu       $a1, $zero, 0x1D2
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
label_1c9478:
    // 0x1c9478: 0xc060578  jal         func_1815E0
label_1c947c:
    if (ctx->pc == 0x1C947Cu) {
        ctx->pc = 0x1C947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9478u;
        // 0x1c947c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9480u;
        goto label_1c9480;
    }
    ctx->pc = 0x1C9478u;
    SET_GPR_U32(ctx, 31, 0x1C9480u);
    ctx->pc = 0x1C947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9478u;
    // 0x1c947c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9478u, 0x1C9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9480u;
label_1c9480:
    // 0x1c9480: 0xff828c10  sd          $v0, -0x73F0($gp)
    ctx->pc = 0x1c9480u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U64(ctx, 2));
label_1c9484:
    // 0x1c9484: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9488:
    // 0x1c9488: 0x240501d3  addiu       $a1, $zero, 0x1D3
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
label_1c948c:
    // 0x1c948c: 0xc060578  jal         func_1815E0
label_1c9490:
    if (ctx->pc == 0x1C9490u) {
        ctx->pc = 0x1C9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C948Cu;
        // 0x1c9490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9494u;
        goto label_1c9494;
    }
    ctx->pc = 0x1C948Cu;
    SET_GPR_U32(ctx, 31, 0x1C9494u);
    ctx->pc = 0x1C9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C948Cu;
    // 0x1c9490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C948Cu, 0x1C9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9494u;
label_1c9494:
    // 0x1c9494: 0xff828c08  sd          $v0, -0x73F8($gp)
    ctx->pc = 0x1c9494u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U64(ctx, 2));
label_1c9498:
    // 0x1c9498: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c949c:
    // 0x1c949c: 0x240501d4  addiu       $a1, $zero, 0x1D4
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
label_1c94a0:
    // 0x1c94a0: 0xc060578  jal         func_1815E0
label_1c94a4:
    if (ctx->pc == 0x1C94A4u) {
        ctx->pc = 0x1C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94A0u;
        // 0x1c94a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94A8u;
        goto label_1c94a8;
    }
    ctx->pc = 0x1C94A0u;
    SET_GPR_U32(ctx, 31, 0x1C94A8u);
    ctx->pc = 0x1C94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94A0u;
    // 0x1c94a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C94A0u, 0x1C94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94A8u;
label_1c94a8:
    // 0x1c94a8: 0xff828c00  sd          $v0, -0x7400($gp)
    ctx->pc = 0x1c94a8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937600), GPR_U64(ctx, 2));
label_1c94ac:
    // 0x1c94ac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c94acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c94b0:
    // 0x1c94b0: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x1c94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
label_1c94b4:
    // 0x1c94b4: 0xc060578  jal         func_1815E0
label_1c94b8:
    if (ctx->pc == 0x1C94B8u) {
        ctx->pc = 0x1C94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94B4u;
        // 0x1c94b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94BCu;
        goto label_1c94bc;
    }
    ctx->pc = 0x1C94B4u;
    SET_GPR_U32(ctx, 31, 0x1C94BCu);
    ctx->pc = 0x1C94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94B4u;
    // 0x1c94b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C94B4u, 0x1C94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94BCu;
label_1c94bc:
    // 0x1c94bc: 0xff828bf8  sd          $v0, -0x7408($gp)
    ctx->pc = 0x1c94bcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937592), GPR_U64(ctx, 2));
label_1c94c0:
    // 0x1c94c0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c94c4:
    // 0x1c94c4: 0x240501d6  addiu       $a1, $zero, 0x1D6
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_1c94c8:
    // 0x1c94c8: 0xc060578  jal         func_1815E0
label_1c94cc:
    if (ctx->pc == 0x1C94CCu) {
        ctx->pc = 0x1C94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94C8u;
        // 0x1c94cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94D0u;
        goto label_1c94d0;
    }
    ctx->pc = 0x1C94C8u;
    SET_GPR_U32(ctx, 31, 0x1C94D0u);
    ctx->pc = 0x1C94CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94C8u;
    // 0x1c94cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C94C8u, 0x1C94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94D0u;
label_1c94d0:
    // 0x1c94d0: 0xff828bf0  sd          $v0, -0x7410($gp)
    ctx->pc = 0x1c94d0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937584), GPR_U64(ctx, 2));
label_1c94d4:
    // 0x1c94d4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c94d8:
    // 0x1c94d8: 0x240501d7  addiu       $a1, $zero, 0x1D7
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
label_1c94dc:
    // 0x1c94dc: 0xc060578  jal         func_1815E0
label_1c94e0:
    if (ctx->pc == 0x1C94E0u) {
        ctx->pc = 0x1C94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94DCu;
        // 0x1c94e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94E4u;
        goto label_1c94e4;
    }
    ctx->pc = 0x1C94DCu;
    SET_GPR_U32(ctx, 31, 0x1C94E4u);
    ctx->pc = 0x1C94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94DCu;
    // 0x1c94e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C94DCu, 0x1C94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94E4u;
label_1c94e4:
    // 0x1c94e4: 0xff828a48  sd          $v0, -0x75B8($gp)
    ctx->pc = 0x1c94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937160), GPR_U64(ctx, 2));
label_1c94e8:
    // 0x1c94e8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c94ec:
    // 0x1c94ec: 0x240501d8  addiu       $a1, $zero, 0x1D8
    ctx->pc = 0x1c94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1c94f0:
    // 0x1c94f0: 0xc060578  jal         func_1815E0
label_1c94f4:
    if (ctx->pc == 0x1C94F4u) {
        ctx->pc = 0x1C94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F0u;
        // 0x1c94f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94F8u;
        goto label_1c94f8;
    }
    ctx->pc = 0x1C94F0u;
    SET_GPR_U32(ctx, 31, 0x1C94F8u);
    ctx->pc = 0x1C94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94F0u;
    // 0x1c94f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C94F0u, 0x1C94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94F8u;
label_1c94f8:
    // 0x1c94f8: 0xff828a40  sd          $v0, -0x75C0($gp)
    ctx->pc = 0x1c94f8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937152), GPR_U64(ctx, 2));
label_1c94fc:
    // 0x1c94fc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9500:
    // 0x1c9500: 0x240501d9  addiu       $a1, $zero, 0x1D9
    ctx->pc = 0x1c9500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
label_1c9504:
    // 0x1c9504: 0xc060578  jal         func_1815E0
label_1c9508:
    if (ctx->pc == 0x1C9508u) {
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9504u;
        // 0x1c9508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C950Cu;
        goto label_1c950c;
    }
    ctx->pc = 0x1C9504u;
    SET_GPR_U32(ctx, 31, 0x1C950Cu);
    ctx->pc = 0x1C9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9504u;
    // 0x1c9508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9504u, 0x1C950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C950Cu;
label_1c950c:
    // 0x1c950c: 0xff828a38  sd          $v0, -0x75C8($gp)
    ctx->pc = 0x1c950cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U64(ctx, 2));
label_1c9510:
    // 0x1c9510: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9514:
    // 0x1c9514: 0x240501da  addiu       $a1, $zero, 0x1DA
    ctx->pc = 0x1c9514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
label_1c9518:
    // 0x1c9518: 0xc060578  jal         func_1815E0
label_1c951c:
    if (ctx->pc == 0x1C951Cu) {
        ctx->pc = 0x1C951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9518u;
        // 0x1c951c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9520u;
        goto label_1c9520;
    }
    ctx->pc = 0x1C9518u;
    SET_GPR_U32(ctx, 31, 0x1C9520u);
    ctx->pc = 0x1C951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9518u;
    // 0x1c951c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9518u, 0x1C9520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9520u;
label_1c9520:
    // 0x1c9520: 0xff828a20  sd          $v0, -0x75E0($gp)
    ctx->pc = 0x1c9520u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U64(ctx, 2));
label_1c9524:
    // 0x1c9524: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9528:
    // 0x1c9528: 0x240501db  addiu       $a1, $zero, 0x1DB
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
label_1c952c:
    // 0x1c952c: 0xc060578  jal         func_1815E0
label_1c9530:
    if (ctx->pc == 0x1C9530u) {
        ctx->pc = 0x1C9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C952Cu;
        // 0x1c9530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9534u;
        goto label_1c9534;
    }
    ctx->pc = 0x1C952Cu;
    SET_GPR_U32(ctx, 31, 0x1C9534u);
    ctx->pc = 0x1C9530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C952Cu;
    // 0x1c9530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C952Cu, 0x1C9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9534u;
label_1c9534:
    // 0x1c9534: 0xff828a30  sd          $v0, -0x75D0($gp)
    ctx->pc = 0x1c9534u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U64(ctx, 2));
label_1c9538:
    // 0x1c9538: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c953c:
    // 0x1c953c: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
label_1c9540:
    // 0x1c9540: 0xc060578  jal         func_1815E0
label_1c9544:
    if (ctx->pc == 0x1C9544u) {
        ctx->pc = 0x1C9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9540u;
        // 0x1c9544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9548u;
        goto label_1c9548;
    }
    ctx->pc = 0x1C9540u;
    SET_GPR_U32(ctx, 31, 0x1C9548u);
    ctx->pc = 0x1C9544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9540u;
    // 0x1c9544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9540u, 0x1C9548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9548u;
label_1c9548:
    // 0x1c9548: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c954c:
    // 0x1c954c: 0xff828a28  sd          $v0, -0x75D8($gp)
    ctx->pc = 0x1c954cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U64(ctx, 2));
label_1c9550:
    // 0x1c9550: 0xa0204958  sb          $zero, 0x4958($at)
    ctx->pc = 0x1c9550u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18776), (uint8_t)GPR_U32(ctx, 0));
label_1c9554:
    // 0x1c9554: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c9554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9558:
    // 0x1c9558: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c955c:
    // 0x1c955c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c9560:
    // 0x1c9560: 0xa0254959  sb          $a1, 0x4959($at)
    ctx->pc = 0x1c9560u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18777), (uint8_t)GPR_U32(ctx, 5));
label_1c9564:
    // 0x1c9564: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9568:
    // 0x1c9568: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c956c:
    // 0x1c956c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c9570:
    // 0x1c9570: 0xa024495a  sb          $a0, 0x495A($at)
    ctx->pc = 0x1c9570u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18778), (uint8_t)GPR_U32(ctx, 4));
label_1c9574:
    // 0x1c9574: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9578:
    // 0x1c9578: 0xa024495b  sb          $a0, 0x495B($at)
    ctx->pc = 0x1c9578u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18779), (uint8_t)GPR_U32(ctx, 4));
label_1c957c:
    // 0x1c957c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9580:
    // 0x1c9580: 0xa020495c  sb          $zero, 0x495C($at)
    ctx->pc = 0x1c9580u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18780), (uint8_t)GPR_U32(ctx, 0));
label_1c9584:
    // 0x1c9584: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9588:
    // 0x1c9588: 0xa025495d  sb          $a1, 0x495D($at)
    ctx->pc = 0x1c9588u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18781), (uint8_t)GPR_U32(ctx, 5));
label_1c958c:
    // 0x1c958c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9590:
    // 0x1c9590: 0xa024495e  sb          $a0, 0x495E($at)
    ctx->pc = 0x1c9590u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18782), (uint8_t)GPR_U32(ctx, 4));
label_1c9594:
    // 0x1c9594: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9598:
    // 0x1c9598: 0xa024495f  sb          $a0, 0x495F($at)
    ctx->pc = 0x1c9598u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18783), (uint8_t)GPR_U32(ctx, 4));
label_1c959c:
    // 0x1c959c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95a0:
    // 0x1c95a0: 0xa0204960  sb          $zero, 0x4960($at)
    ctx->pc = 0x1c95a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18784), (uint8_t)GPR_U32(ctx, 0));
label_1c95a4:
    // 0x1c95a4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95a8:
    // 0x1c95a8: 0xa0254961  sb          $a1, 0x4961($at)
    ctx->pc = 0x1c95a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18785), (uint8_t)GPR_U32(ctx, 5));
label_1c95ac:
    // 0x1c95ac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95b0:
    // 0x1c95b0: 0xa0244962  sb          $a0, 0x4962($at)
    ctx->pc = 0x1c95b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18786), (uint8_t)GPR_U32(ctx, 4));
label_1c95b4:
    // 0x1c95b4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95b8:
    // 0x1c95b8: 0xa0244963  sb          $a0, 0x4963($at)
    ctx->pc = 0x1c95b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18787), (uint8_t)GPR_U32(ctx, 4));
label_1c95bc:
    // 0x1c95bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95c0:
    // 0x1c95c0: 0xa0204964  sb          $zero, 0x4964($at)
    ctx->pc = 0x1c95c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18788), (uint8_t)GPR_U32(ctx, 0));
label_1c95c4:
    // 0x1c95c4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95c8:
    // 0x1c95c8: 0xa0254965  sb          $a1, 0x4965($at)
    ctx->pc = 0x1c95c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18789), (uint8_t)GPR_U32(ctx, 5));
label_1c95cc:
    // 0x1c95cc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95d0:
    // 0x1c95d0: 0xa0244966  sb          $a0, 0x4966($at)
    ctx->pc = 0x1c95d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18790), (uint8_t)GPR_U32(ctx, 4));
label_1c95d4:
    // 0x1c95d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95d8:
    // 0x1c95d8: 0xa0244967  sb          $a0, 0x4967($at)
    ctx->pc = 0x1c95d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18791), (uint8_t)GPR_U32(ctx, 4));
label_1c95dc:
    // 0x1c95dc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95e0:
    // 0x1c95e0: 0xa0204968  sb          $zero, 0x4968($at)
    ctx->pc = 0x1c95e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18792), (uint8_t)GPR_U32(ctx, 0));
label_1c95e4:
    // 0x1c95e4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95e8:
    // 0x1c95e8: 0xa0254969  sb          $a1, 0x4969($at)
    ctx->pc = 0x1c95e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18793), (uint8_t)GPR_U32(ctx, 5));
label_1c95ec:
    // 0x1c95ec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95f0:
    // 0x1c95f0: 0xa024496a  sb          $a0, 0x496A($at)
    ctx->pc = 0x1c95f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18794), (uint8_t)GPR_U32(ctx, 4));
label_1c95f4:
    // 0x1c95f4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c95f8:
    // 0x1c95f8: 0xa024496b  sb          $a0, 0x496B($at)
    ctx->pc = 0x1c95f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18795), (uint8_t)GPR_U32(ctx, 4));
label_1c95fc:
    // 0x1c95fc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c95fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9600:
    // 0x1c9600: 0xa020496c  sb          $zero, 0x496C($at)
    ctx->pc = 0x1c9600u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18796), (uint8_t)GPR_U32(ctx, 0));
label_1c9604:
    // 0x1c9604: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9608:
    // 0x1c9608: 0xa025496d  sb          $a1, 0x496D($at)
    ctx->pc = 0x1c9608u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18797), (uint8_t)GPR_U32(ctx, 5));
label_1c960c:
    // 0x1c960c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9610:
    // 0x1c9610: 0xa024496e  sb          $a0, 0x496E($at)
    ctx->pc = 0x1c9610u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18798), (uint8_t)GPR_U32(ctx, 4));
label_1c9614:
    // 0x1c9614: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9618:
    // 0x1c9618: 0xa024496f  sb          $a0, 0x496F($at)
    ctx->pc = 0x1c9618u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18799), (uint8_t)GPR_U32(ctx, 4));
label_1c961c:
    // 0x1c961c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9620:
    // 0x1c9620: 0xa0204970  sb          $zero, 0x4970($at)
    ctx->pc = 0x1c9620u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18800), (uint8_t)GPR_U32(ctx, 0));
label_1c9624:
    // 0x1c9624: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9628:
    // 0x1c9628: 0xa0254971  sb          $a1, 0x4971($at)
    ctx->pc = 0x1c9628u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18801), (uint8_t)GPR_U32(ctx, 5));
label_1c962c:
    // 0x1c962c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9630:
    // 0x1c9630: 0xa0244972  sb          $a0, 0x4972($at)
    ctx->pc = 0x1c9630u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18802), (uint8_t)GPR_U32(ctx, 4));
label_1c9634:
    // 0x1c9634: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9638:
    // 0x1c9638: 0xa0244973  sb          $a0, 0x4973($at)
    ctx->pc = 0x1c9638u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18803), (uint8_t)GPR_U32(ctx, 4));
label_1c963c:
    // 0x1c963c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9640:
    // 0x1c9640: 0xa0204974  sb          $zero, 0x4974($at)
    ctx->pc = 0x1c9640u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18804), (uint8_t)GPR_U32(ctx, 0));
label_1c9644:
    // 0x1c9644: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9648:
    // 0x1c9648: 0xa0254975  sb          $a1, 0x4975($at)
    ctx->pc = 0x1c9648u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18805), (uint8_t)GPR_U32(ctx, 5));
label_1c964c:
    // 0x1c964c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9650:
    // 0x1c9650: 0xa0254979  sb          $a1, 0x4979($at)
    ctx->pc = 0x1c9650u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18809), (uint8_t)GPR_U32(ctx, 5));
label_1c9654:
    // 0x1c9654: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9658:
    // 0x1c9658: 0xa0244976  sb          $a0, 0x4976($at)
    ctx->pc = 0x1c9658u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18806), (uint8_t)GPR_U32(ctx, 4));
label_1c965c:
    // 0x1c965c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9660:
    // 0x1c9660: 0xa0244977  sb          $a0, 0x4977($at)
    ctx->pc = 0x1c9660u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18807), (uint8_t)GPR_U32(ctx, 4));
label_1c9664:
    // 0x1c9664: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9668:
    // 0x1c9668: 0xa0204978  sb          $zero, 0x4978($at)
    ctx->pc = 0x1c9668u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18808), (uint8_t)GPR_U32(ctx, 0));
label_1c966c:
    // 0x1c966c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9670:
    // 0x1c9670: 0xa024497a  sb          $a0, 0x497A($at)
    ctx->pc = 0x1c9670u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18810), (uint8_t)GPR_U32(ctx, 4));
label_1c9674:
    // 0x1c9674: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9678:
    // 0x1c9678: 0xa024497b  sb          $a0, 0x497B($at)
    ctx->pc = 0x1c9678u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18811), (uint8_t)GPR_U32(ctx, 4));
label_1c967c:
    // 0x1c967c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9680:
    // 0x1c9680: 0xa0234a58  sb          $v1, 0x4A58($at)
    ctx->pc = 0x1c9680u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19032), (uint8_t)GPR_U32(ctx, 3));
label_1c9684:
    // 0x1c9684: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9688:
    // 0x1c9688: 0xa0224a59  sb          $v0, 0x4A59($at)
    ctx->pc = 0x1c9688u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19033), (uint8_t)GPR_U32(ctx, 2));
label_1c968c:
    // 0x1c968c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c968cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9690:
    // 0x1c9690: 0xa0224a5a  sb          $v0, 0x4A5A($at)
    ctx->pc = 0x1c9690u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19034), (uint8_t)GPR_U32(ctx, 2));
label_1c9694:
    // 0x1c9694: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9698:
    // 0x1c9698: 0xa0244a5b  sb          $a0, 0x4A5B($at)
    ctx->pc = 0x1c9698u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19035), (uint8_t)GPR_U32(ctx, 4));
label_1c969c:
    // 0x1c969c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96a0:
    // 0x1c96a0: 0xa0234a5c  sb          $v1, 0x4A5C($at)
    ctx->pc = 0x1c96a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19036), (uint8_t)GPR_U32(ctx, 3));
label_1c96a4:
    // 0x1c96a4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96a8:
    // 0x1c96a8: 0xa0224a5d  sb          $v0, 0x4A5D($at)
    ctx->pc = 0x1c96a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19037), (uint8_t)GPR_U32(ctx, 2));
label_1c96ac:
    // 0x1c96ac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96b0:
    // 0x1c96b0: 0xa0224a5e  sb          $v0, 0x4A5E($at)
    ctx->pc = 0x1c96b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19038), (uint8_t)GPR_U32(ctx, 2));
label_1c96b4:
    // 0x1c96b4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96b8:
    // 0x1c96b8: 0xa0244a5f  sb          $a0, 0x4A5F($at)
    ctx->pc = 0x1c96b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19039), (uint8_t)GPR_U32(ctx, 4));
label_1c96bc:
    // 0x1c96bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96c0:
    // 0x1c96c0: 0xa0234a60  sb          $v1, 0x4A60($at)
    ctx->pc = 0x1c96c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19040), (uint8_t)GPR_U32(ctx, 3));
label_1c96c4:
    // 0x1c96c4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96c8:
    // 0x1c96c8: 0xa0224a61  sb          $v0, 0x4A61($at)
    ctx->pc = 0x1c96c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19041), (uint8_t)GPR_U32(ctx, 2));
label_1c96cc:
    // 0x1c96cc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96d0:
    // 0x1c96d0: 0xa0224a62  sb          $v0, 0x4A62($at)
    ctx->pc = 0x1c96d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19042), (uint8_t)GPR_U32(ctx, 2));
label_1c96d4:
    // 0x1c96d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96d8:
    // 0x1c96d8: 0xa0244a63  sb          $a0, 0x4A63($at)
    ctx->pc = 0x1c96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19043), (uint8_t)GPR_U32(ctx, 4));
label_1c96dc:
    // 0x1c96dc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96e0:
    // 0x1c96e0: 0xa0234a6c  sb          $v1, 0x4A6C($at)
    ctx->pc = 0x1c96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19052), (uint8_t)GPR_U32(ctx, 3));
label_1c96e4:
    // 0x1c96e4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96e8:
    // 0x1c96e8: 0xa0224a6d  sb          $v0, 0x4A6D($at)
    ctx->pc = 0x1c96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19053), (uint8_t)GPR_U32(ctx, 2));
label_1c96ec:
    // 0x1c96ec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96f0:
    // 0x1c96f0: 0xa0224a6e  sb          $v0, 0x4A6E($at)
    ctx->pc = 0x1c96f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19054), (uint8_t)GPR_U32(ctx, 2));
label_1c96f4:
    // 0x1c96f4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c96f8:
    // 0x1c96f8: 0xa0244a6f  sb          $a0, 0x4A6F($at)
    ctx->pc = 0x1c96f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19055), (uint8_t)GPR_U32(ctx, 4));
label_1c96fc:
    // 0x1c96fc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c96fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9700:
    // 0x1c9700: 0xa0234a64  sb          $v1, 0x4A64($at)
    ctx->pc = 0x1c9700u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19044), (uint8_t)GPR_U32(ctx, 3));
label_1c9704:
    // 0x1c9704: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9708:
    // 0x1c9708: 0xa0234a68  sb          $v1, 0x4A68($at)
    ctx->pc = 0x1c9708u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19048), (uint8_t)GPR_U32(ctx, 3));
label_1c970c:
    // 0x1c970c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9710:
    // 0x1c9710: 0xa0224a65  sb          $v0, 0x4A65($at)
    ctx->pc = 0x1c9710u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19045), (uint8_t)GPR_U32(ctx, 2));
label_1c9714:
    // 0x1c9714: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9718:
    // 0x1c9718: 0xa0224a66  sb          $v0, 0x4A66($at)
    ctx->pc = 0x1c9718u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19046), (uint8_t)GPR_U32(ctx, 2));
label_1c971c:
    // 0x1c971c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9720:
    // 0x1c9720: 0xa0244a67  sb          $a0, 0x4A67($at)
    ctx->pc = 0x1c9720u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19047), (uint8_t)GPR_U32(ctx, 4));
label_1c9724:
    // 0x1c9724: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9728:
    // 0x1c9728: 0xa0224a69  sb          $v0, 0x4A69($at)
    ctx->pc = 0x1c9728u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19049), (uint8_t)GPR_U32(ctx, 2));
label_1c972c:
    // 0x1c972c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9730:
    // 0x1c9730: 0xa0224a6a  sb          $v0, 0x4A6A($at)
    ctx->pc = 0x1c9730u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19050), (uint8_t)GPR_U32(ctx, 2));
label_1c9734:
    // 0x1c9734: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9738:
    // 0x1c9738: 0xa0244a6b  sb          $a0, 0x4A6B($at)
    ctx->pc = 0x1c9738u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19051), (uint8_t)GPR_U32(ctx, 4));
label_1c973c:
    // 0x1c973c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9740:
    // 0x1c9740: 0x8c3069c0  lw          $s0, 0x69C0($at)
    ctx->pc = 0x1c9740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27072)));
label_1c9744:
    // 0x1c9744: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9748:
    // 0x1c9748: 0x8c3169c4  lw          $s1, 0x69C4($at)
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27076)));
label_1c974c:
    // 0x1c974c: 0xc070080  jal         func_1C0200
label_1c9750:
    if (ctx->pc == 0x1C9750u) {
        ctx->pc = 0x1C9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C974Cu;
        // 0x1c9750: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9754u;
        goto label_1c9754;
    }
    ctx->pc = 0x1C974Cu;
    SET_GPR_U32(ctx, 31, 0x1C9754u);
    ctx->pc = 0x1C9750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C974Cu;
    // 0x1c9750: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C9754u;
label_1c9754:
    // 0x1c9754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9758:
    // 0x1c9758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c975c:
    // 0x1c975c: 0xc041744  jal         func_105D10
label_1c9760:
    if (ctx->pc == 0x1C9760u) {
        ctx->pc = 0x1C9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C975Cu;
        // 0x1c9760: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9764u;
        goto label_1c9764;
    }
    ctx->pc = 0x1C975Cu;
    SET_GPR_U32(ctx, 31, 0x1C9764u);
    ctx->pc = 0x1C9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C975Cu;
    // 0x1c9760: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C975Cu, 0x1C9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9764u;
label_1c9764:
    // 0x1c9764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9768:
    // 0x1c9768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c976c:
    // 0x1c976c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9770:
    // 0x1c9770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9774:
    // 0x1c9774: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c9778:
    // 0x1c9778: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1c977c:
    // 0x1c977c: 0xc0603d4  jal         func_180F50
label_1c9780:
    if (ctx->pc == 0x1C9780u) {
        ctx->pc = 0x1C9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C977Cu;
        // 0x1c9780: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9784u;
        goto label_1c9784;
    }
    ctx->pc = 0x1C977Cu;
    SET_GPR_U32(ctx, 31, 0x1C9784u);
    ctx->pc = 0x1C9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C977Cu;
    // 0x1c9780: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C977Cu, 0x1C9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9784u;
label_1c9784:
    // 0x1c9784: 0xff828bc0  sd          $v0, -0x7440($gp)
    ctx->pc = 0x1c9784u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U64(ctx, 2));
label_1c9788:
    // 0x1c9788: 0xc070038  jal         func_1C00E0
label_1c978c:
    if (ctx->pc == 0x1C978Cu) {
        ctx->pc = 0x1C978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9788u;
        // 0x1c978c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9790u;
        goto label_1c9790;
    }
    ctx->pc = 0x1C9788u;
    SET_GPR_U32(ctx, 31, 0x1C9790u);
    ctx->pc = 0x1C978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9788u;
    // 0x1c978c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9790u;
label_1c9790:
    // 0x1c9790: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c9794:
    // 0x1c9794: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
label_1c9798:
    // 0x1c9798: 0xc060578  jal         func_1815E0
label_1c979c:
    if (ctx->pc == 0x1C979Cu) {
        ctx->pc = 0x1C979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9798u;
        // 0x1c979c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97A0u;
        goto label_1c97a0;
    }
    ctx->pc = 0x1C9798u;
    SET_GPR_U32(ctx, 31, 0x1C97A0u);
    ctx->pc = 0x1C979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9798u;
    // 0x1c979c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9798u, 0x1C97A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97A0u;
label_1c97a0:
    // 0x1c97a0: 0xff828bb0  sd          $v0, -0x7450($gp)
    ctx->pc = 0x1c97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U64(ctx, 2));
label_1c97a4:
    // 0x1c97a4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c97a8:
    // 0x1c97a8: 0x240501e2  addiu       $a1, $zero, 0x1E2
    ctx->pc = 0x1c97a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
label_1c97ac:
    // 0x1c97ac: 0xc060578  jal         func_1815E0
label_1c97b0:
    if (ctx->pc == 0x1C97B0u) {
        ctx->pc = 0x1C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ACu;
        // 0x1c97b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97B4u;
        goto label_1c97b4;
    }
    ctx->pc = 0x1C97ACu;
    SET_GPR_U32(ctx, 31, 0x1C97B4u);
    ctx->pc = 0x1C97B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97ACu;
    // 0x1c97b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C97ACu, 0x1C97B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97B4u;
label_1c97b4:
    // 0x1c97b4: 0xff828ba0  sd          $v0, -0x7460($gp)
    ctx->pc = 0x1c97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U64(ctx, 2));
label_1c97b8:
    // 0x1c97b8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c97bc:
    // 0x1c97bc: 0x240501e3  addiu       $a1, $zero, 0x1E3
    ctx->pc = 0x1c97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
label_1c97c0:
    // 0x1c97c0: 0xc060578  jal         func_1815E0
label_1c97c4:
    if (ctx->pc == 0x1C97C4u) {
        ctx->pc = 0x1C97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97C0u;
        // 0x1c97c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97C8u;
        goto label_1c97c8;
    }
    ctx->pc = 0x1C97C0u;
    SET_GPR_U32(ctx, 31, 0x1C97C8u);
    ctx->pc = 0x1C97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97C0u;
    // 0x1c97c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C97C0u, 0x1C97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97C8u;
label_1c97c8:
    // 0x1c97c8: 0xff828b88  sd          $v0, -0x7478($gp)
    ctx->pc = 0x1c97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937480), GPR_U64(ctx, 2));
label_1c97cc:
    // 0x1c97cc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c97d0:
    // 0x1c97d0: 0x240501e4  addiu       $a1, $zero, 0x1E4
    ctx->pc = 0x1c97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_1c97d4:
    // 0x1c97d4: 0xc060578  jal         func_1815E0
label_1c97d8:
    if (ctx->pc == 0x1C97D8u) {
        ctx->pc = 0x1C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97D4u;
        // 0x1c97d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97DCu;
        goto label_1c97dc;
    }
    ctx->pc = 0x1C97D4u;
    SET_GPR_U32(ctx, 31, 0x1C97DCu);
    ctx->pc = 0x1C97D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97D4u;
    // 0x1c97d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C97D4u, 0x1C97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97DCu;
label_1c97dc:
    // 0x1c97dc: 0xff828b80  sd          $v0, -0x7480($gp)
    ctx->pc = 0x1c97dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937472), GPR_U64(ctx, 2));
label_1c97e0:
    // 0x1c97e0: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c97e4:
    // 0x1c97e4: 0x240501e5  addiu       $a1, $zero, 0x1E5
    ctx->pc = 0x1c97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
label_1c97e8:
    // 0x1c97e8: 0xc060578  jal         func_1815E0
label_1c97ec:
    if (ctx->pc == 0x1C97ECu) {
        ctx->pc = 0x1C97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97E8u;
        // 0x1c97ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97F0u;
        goto label_1c97f0;
    }
    ctx->pc = 0x1C97E8u;
    SET_GPR_U32(ctx, 31, 0x1C97F0u);
    ctx->pc = 0x1C97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97E8u;
    // 0x1c97ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C97E8u, 0x1C97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97F0u;
label_1c97f0:
    // 0x1c97f0: 0xff828a88  sd          $v0, -0x7578($gp)
    ctx->pc = 0x1c97f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U64(ctx, 2));
label_1c97f4:
    // 0x1c97f4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c97f8:
    // 0x1c97f8: 0x240501e6  addiu       $a1, $zero, 0x1E6
    ctx->pc = 0x1c97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
label_1c97fc:
    // 0x1c97fc: 0xc060578  jal         func_1815E0
label_1c9800:
    if (ctx->pc == 0x1C9800u) {
        ctx->pc = 0x1C9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97FCu;
        // 0x1c9800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9804u;
        goto label_1c9804;
    }
    ctx->pc = 0x1C97FCu;
    SET_GPR_U32(ctx, 31, 0x1C9804u);
    ctx->pc = 0x1C9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97FCu;
    // 0x1c9800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C97FCu, 0x1C9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9804u;
label_1c9804:
    // 0x1c9804: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9808:
    // 0x1c9808: 0xff828b98  sd          $v0, -0x7468($gp)
    ctx->pc = 0x1c9808u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937496), GPR_U64(ctx, 2));
label_1c980c:
    // 0x1c980c: 0xa0204990  sb          $zero, 0x4990($at)
    ctx->pc = 0x1c980cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18832), (uint8_t)GPR_U32(ctx, 0));
label_1c9810:
    // 0x1c9810: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c9810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9814:
    // 0x1c9814: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9818:
    // 0x1c9818: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c981c:
    // 0x1c981c: 0xa0224991  sb          $v0, 0x4991($at)
    ctx->pc = 0x1c981cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18833), (uint8_t)GPR_U32(ctx, 2));
label_1c9820:
    // 0x1c9820: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c9824:
    // 0x1c9824: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9828:
    // 0x1c9828: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c9828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c982c:
    // 0x1c982c: 0xa02249a4  sb          $v0, 0x49A4($at)
    ctx->pc = 0x1c982cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18852), (uint8_t)GPR_U32(ctx, 2));
label_1c9830:
    // 0x1c9830: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1c9834:
    // 0x1c9834: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9838:
    // 0x1c9838: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c9838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c983c:
    // 0x1c983c: 0xa0244992  sb          $a0, 0x4992($at)
    ctx->pc = 0x1c983cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18834), (uint8_t)GPR_U32(ctx, 4));
label_1c9840:
    // 0x1c9840: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1c9844:
    // 0x1c9844: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9848:
    // 0x1c9848: 0xa0244993  sb          $a0, 0x4993($at)
    ctx->pc = 0x1c9848u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18835), (uint8_t)GPR_U32(ctx, 4));
label_1c984c:
    // 0x1c984c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9850:
    // 0x1c9850: 0xa02749a5  sb          $a3, 0x49A5($at)
    ctx->pc = 0x1c9850u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18853), (uint8_t)GPR_U32(ctx, 7));
label_1c9854:
    // 0x1c9854: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9858:
    // 0x1c9858: 0xa02449a6  sb          $a0, 0x49A6($at)
    ctx->pc = 0x1c9858u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18854), (uint8_t)GPR_U32(ctx, 4));
label_1c985c:
    // 0x1c985c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9860:
    // 0x1c9860: 0xa02449a7  sb          $a0, 0x49A7($at)
    ctx->pc = 0x1c9860u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18855), (uint8_t)GPR_U32(ctx, 4));
label_1c9864:
    // 0x1c9864: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9868:
    // 0x1c9868: 0xa02749a8  sb          $a3, 0x49A8($at)
    ctx->pc = 0x1c9868u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18856), (uint8_t)GPR_U32(ctx, 7));
label_1c986c:
    // 0x1c986c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c986cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9870:
    // 0x1c9870: 0xa02749a9  sb          $a3, 0x49A9($at)
    ctx->pc = 0x1c9870u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18857), (uint8_t)GPR_U32(ctx, 7));
label_1c9874:
    // 0x1c9874: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9878:
    // 0x1c9878: 0xa02449aa  sb          $a0, 0x49AA($at)
    ctx->pc = 0x1c9878u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18858), (uint8_t)GPR_U32(ctx, 4));
label_1c987c:
    // 0x1c987c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c987cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9880:
    // 0x1c9880: 0xa02449ab  sb          $a0, 0x49AB($at)
    ctx->pc = 0x1c9880u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18859), (uint8_t)GPR_U32(ctx, 4));
label_1c9884:
    // 0x1c9884: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9888:
    // 0x1c9888: 0xa02649b4  sb          $a2, 0x49B4($at)
    ctx->pc = 0x1c9888u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18868), (uint8_t)GPR_U32(ctx, 6));
label_1c988c:
    // 0x1c988c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9890:
    // 0x1c9890: 0xa02649b5  sb          $a2, 0x49B5($at)
    ctx->pc = 0x1c9890u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18869), (uint8_t)GPR_U32(ctx, 6));
label_1c9894:
    // 0x1c9894: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9898:
    // 0x1c9898: 0xa02449b6  sb          $a0, 0x49B6($at)
    ctx->pc = 0x1c9898u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18870), (uint8_t)GPR_U32(ctx, 4));
label_1c989c:
    // 0x1c989c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98a0:
    // 0x1c98a0: 0xa02449b7  sb          $a0, 0x49B7($at)
    ctx->pc = 0x1c98a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18871), (uint8_t)GPR_U32(ctx, 4));
label_1c98a4:
    // 0x1c98a4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98a8:
    // 0x1c98a8: 0xa02549b8  sb          $a1, 0x49B8($at)
    ctx->pc = 0x1c98a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18872), (uint8_t)GPR_U32(ctx, 5));
label_1c98ac:
    // 0x1c98ac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98b0:
    // 0x1c98b0: 0xa02549b9  sb          $a1, 0x49B9($at)
    ctx->pc = 0x1c98b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18873), (uint8_t)GPR_U32(ctx, 5));
label_1c98b4:
    // 0x1c98b4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98b8:
    // 0x1c98b8: 0xa02449ba  sb          $a0, 0x49BA($at)
    ctx->pc = 0x1c98b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18874), (uint8_t)GPR_U32(ctx, 4));
label_1c98bc:
    // 0x1c98bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98c0:
    // 0x1c98c0: 0xa02449bb  sb          $a0, 0x49BB($at)
    ctx->pc = 0x1c98c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18875), (uint8_t)GPR_U32(ctx, 4));
label_1c98c4:
    // 0x1c98c4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98c8:
    // 0x1c98c8: 0xa0234a34  sb          $v1, 0x4A34($at)
    ctx->pc = 0x1c98c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18996), (uint8_t)GPR_U32(ctx, 3));
label_1c98cc:
    // 0x1c98cc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98d0:
    // 0x1c98d0: 0xa0234a35  sb          $v1, 0x4A35($at)
    ctx->pc = 0x1c98d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18997), (uint8_t)GPR_U32(ctx, 3));
label_1c98d4:
    // 0x1c98d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98d8:
    // 0x1c98d8: 0xa0244a36  sb          $a0, 0x4A36($at)
    ctx->pc = 0x1c98d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18998), (uint8_t)GPR_U32(ctx, 4));
label_1c98dc:
    // 0x1c98dc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98e0:
    // 0x1c98e0: 0xa0244a37  sb          $a0, 0x4A37($at)
    ctx->pc = 0x1c98e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18999), (uint8_t)GPR_U32(ctx, 4));
label_1c98e4:
    // 0x1c98e4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98e8:
    // 0x1c98e8: 0xa02249ac  sb          $v0, 0x49AC($at)
    ctx->pc = 0x1c98e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18860), (uint8_t)GPR_U32(ctx, 2));
label_1c98ec:
    // 0x1c98ec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98f0:
    // 0x1c98f0: 0xa02249ad  sb          $v0, 0x49AD($at)
    ctx->pc = 0x1c98f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18861), (uint8_t)GPR_U32(ctx, 2));
label_1c98f4:
    // 0x1c98f4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c98f8:
    // 0x1c98f8: 0xa02449ae  sb          $a0, 0x49AE($at)
    ctx->pc = 0x1c98f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18862), (uint8_t)GPR_U32(ctx, 4));
label_1c98fc:
    // 0x1c98fc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9900:
    // 0x1c9900: 0xa02449af  sb          $a0, 0x49AF($at)
    ctx->pc = 0x1c9900u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18863), (uint8_t)GPR_U32(ctx, 4));
label_1c9904:
    // 0x1c9904: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9908:
    // 0x1c9908: 0x8c3069d0  lw          $s0, 0x69D0($at)
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27088)));
label_1c990c:
    // 0x1c990c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9910:
    // 0x1c9910: 0x8c3169d4  lw          $s1, 0x69D4($at)
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27092)));
label_1c9914:
    // 0x1c9914: 0xc070080  jal         func_1C0200
label_1c9918:
    if (ctx->pc == 0x1C9918u) {
        ctx->pc = 0x1C9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9914u;
        // 0x1c9918: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C991Cu;
        goto label_1c991c;
    }
    ctx->pc = 0x1C9914u;
    SET_GPR_U32(ctx, 31, 0x1C991Cu);
    ctx->pc = 0x1C9918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9914u;
    // 0x1c9918: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C991Cu;
label_1c991c:
    // 0x1c991c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9920:
    // 0x1c9920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9924:
    // 0x1c9924: 0xc041744  jal         func_105D10
label_1c9928:
    if (ctx->pc == 0x1C9928u) {
        ctx->pc = 0x1C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9924u;
        // 0x1c9928: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C992Cu;
        goto label_1c992c;
    }
    ctx->pc = 0x1C9924u;
    SET_GPR_U32(ctx, 31, 0x1C992Cu);
    ctx->pc = 0x1C9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9924u;
    // 0x1c9928: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C9924u, 0x1C992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C992Cu;
label_1c992c:
    // 0x1c992c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c992cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9930:
    // 0x1c9930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9934:
    // 0x1c9934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9938:
    // 0x1c9938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c993c:
    // 0x1c993c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1c993cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c9940:
    // 0x1c9940: 0x240801ea  addiu       $t0, $zero, 0x1EA
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
label_1c9944:
    // 0x1c9944: 0xc0603d4  jal         func_180F50
label_1c9948:
    if (ctx->pc == 0x1C9948u) {
        ctx->pc = 0x1C9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9944u;
        // 0x1c9948: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C994Cu;
        goto label_1c994c;
    }
    ctx->pc = 0x1C9944u;
    SET_GPR_U32(ctx, 31, 0x1C994Cu);
    ctx->pc = 0x1C9948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9944u;
    // 0x1c9948: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C9944u, 0x1C994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C994Cu;
label_1c994c:
    // 0x1c994c: 0xff828a18  sd          $v0, -0x75E8($gp)
    ctx->pc = 0x1c994cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U64(ctx, 2));
label_1c9950:
    // 0x1c9950: 0xc070038  jal         func_1C00E0
label_1c9954:
    if (ctx->pc == 0x1C9954u) {
        ctx->pc = 0x1C9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9950u;
        // 0x1c9954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9958u;
        goto label_1c9958;
    }
    ctx->pc = 0x1C9950u;
    SET_GPR_U32(ctx, 31, 0x1C9958u);
    ctx->pc = 0x1C9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9950u;
    // 0x1c9954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9958u;
label_1c9958:
    // 0x1c9958: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c995c:
    // 0x1c995c: 0x240501eb  addiu       $a1, $zero, 0x1EB
    ctx->pc = 0x1c995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
label_1c9960:
    // 0x1c9960: 0xc060578  jal         func_1815E0
label_1c9964:
    if (ctx->pc == 0x1C9964u) {
        ctx->pc = 0x1C9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9960u;
        // 0x1c9964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9968u;
        goto label_1c9968;
    }
    ctx->pc = 0x1C9960u;
    SET_GPR_U32(ctx, 31, 0x1C9968u);
    ctx->pc = 0x1C9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9960u;
    // 0x1c9964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9960u, 0x1C9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9968u;
label_1c9968:
    // 0x1c9968: 0xff8289f8  sd          $v0, -0x7608($gp)
    ctx->pc = 0x1c9968u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U64(ctx, 2));
label_1c996c:
    // 0x1c996c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c9970:
    // 0x1c9970: 0x240501ec  addiu       $a1, $zero, 0x1EC
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
label_1c9974:
    // 0x1c9974: 0xc060578  jal         func_1815E0
label_1c9978:
    if (ctx->pc == 0x1C9978u) {
        ctx->pc = 0x1C9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9974u;
        // 0x1c9978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C997Cu;
        goto label_1c997c;
    }
    ctx->pc = 0x1C9974u;
    SET_GPR_U32(ctx, 31, 0x1C997Cu);
    ctx->pc = 0x1C9978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9974u;
    // 0x1c9978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9974u, 0x1C997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C997Cu;
label_1c997c:
    // 0x1c997c: 0xff828a70  sd          $v0, -0x7590($gp)
    ctx->pc = 0x1c997cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937200), GPR_U64(ctx, 2));
label_1c9980:
    // 0x1c9980: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c9984:
    // 0x1c9984: 0x240501ed  addiu       $a1, $zero, 0x1ED
    ctx->pc = 0x1c9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
label_1c9988:
    // 0x1c9988: 0xc060578  jal         func_1815E0
label_1c998c:
    if (ctx->pc == 0x1C998Cu) {
        ctx->pc = 0x1C998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9988u;
        // 0x1c998c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9990u;
        goto label_1c9990;
    }
    ctx->pc = 0x1C9988u;
    SET_GPR_U32(ctx, 31, 0x1C9990u);
    ctx->pc = 0x1C998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9988u;
    // 0x1c998c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9988u, 0x1C9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9990u;
label_1c9990:
    // 0x1c9990: 0xff828a68  sd          $v0, -0x7598($gp)
    ctx->pc = 0x1c9990u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U64(ctx, 2));
label_1c9994:
    // 0x1c9994: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c9998:
    // 0x1c9998: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x1c9998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
label_1c999c:
    // 0x1c999c: 0xc060578  jal         func_1815E0
label_1c99a0:
    if (ctx->pc == 0x1C99A0u) {
        ctx->pc = 0x1C99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C999Cu;
        // 0x1c99a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99A4u;
        goto label_1c99a4;
    }
    ctx->pc = 0x1C999Cu;
    SET_GPR_U32(ctx, 31, 0x1C99A4u);
    ctx->pc = 0x1C99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999Cu;
    // 0x1c99a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C999Cu, 0x1C99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A4u;
label_1c99a4:
    // 0x1c99a4: 0xff828a60  sd          $v0, -0x75A0($gp)
    ctx->pc = 0x1c99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U64(ctx, 2));
label_1c99a8:
    // 0x1c99a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c99ac:
    // 0x1c99ac: 0x240501ef  addiu       $a1, $zero, 0x1EF
    ctx->pc = 0x1c99acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
label_1c99b0:
    // 0x1c99b0: 0xc060578  jal         func_1815E0
label_1c99b4:
    if (ctx->pc == 0x1C99B4u) {
        ctx->pc = 0x1C99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99B0u;
        // 0x1c99b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99B8u;
        goto label_1c99b8;
    }
    ctx->pc = 0x1C99B0u;
    SET_GPR_U32(ctx, 31, 0x1C99B8u);
    ctx->pc = 0x1C99B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B0u;
    // 0x1c99b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C99B0u, 0x1C99B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B8u;
label_1c99b8:
    // 0x1c99b8: 0xff8289f0  sd          $v0, -0x7610($gp)
    ctx->pc = 0x1c99b8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U64(ctx, 2));
label_1c99bc:
    // 0x1c99bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c99c0:
    // 0x1c99c0: 0x240501f0  addiu       $a1, $zero, 0x1F0
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1c99c4:
    // 0x1c99c4: 0xc060578  jal         func_1815E0
label_1c99c8:
    if (ctx->pc == 0x1C99C8u) {
        ctx->pc = 0x1C99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99C4u;
        // 0x1c99c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99CCu;
        goto label_1c99cc;
    }
    ctx->pc = 0x1C99C4u;
    SET_GPR_U32(ctx, 31, 0x1C99CCu);
    ctx->pc = 0x1C99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99C4u;
    // 0x1c99c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C99C4u, 0x1C99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99CCu;
label_1c99cc:
    // 0x1c99cc: 0xff828a08  sd          $v0, -0x75F8($gp)
    ctx->pc = 0x1c99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U64(ctx, 2));
label_1c99d0:
    // 0x1c99d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c99d4:
    // 0x1c99d4: 0x240501f1  addiu       $a1, $zero, 0x1F1
    ctx->pc = 0x1c99d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
label_1c99d8:
    // 0x1c99d8: 0xc060578  jal         func_1815E0
label_1c99dc:
    if (ctx->pc == 0x1C99DCu) {
        ctx->pc = 0x1C99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99D8u;
        // 0x1c99dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99E0u;
        goto label_1c99e0;
    }
    ctx->pc = 0x1C99D8u;
    SET_GPR_U32(ctx, 31, 0x1C99E0u);
    ctx->pc = 0x1C99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99D8u;
    // 0x1c99dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C99D8u, 0x1C99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E0u;
label_1c99e0:
    // 0x1c99e0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c99e4:
    // 0x1c99e4: 0xff828a00  sd          $v0, -0x7600($gp)
    ctx->pc = 0x1c99e4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U64(ctx, 2));
label_1c99e8:
    // 0x1c99e8: 0xa0204a70  sb          $zero, 0x4A70($at)
    ctx->pc = 0x1c99e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19056), (uint8_t)GPR_U32(ctx, 0));
label_1c99ec:
    // 0x1c99ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c99f0:
    // 0x1c99f0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c99f4:
    // 0x1c99f4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c99f8:
    // 0x1c99f8: 0xa0224a72  sb          $v0, 0x4A72($at)
    ctx->pc = 0x1c99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19058), (uint8_t)GPR_U32(ctx, 2));
label_1c99fc:
    // 0x1c99fc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c9a00:
    // 0x1c9a00: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a04:
    // 0x1c9a04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9a08:
    // 0x1c9a08: 0xa0284a71  sb          $t0, 0x4A71($at)
    ctx->pc = 0x1c9a08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19057), (uint8_t)GPR_U32(ctx, 8));
label_1c9a0c:
    // 0x1c9a0c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c9a10:
    // 0x1c9a10: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a14:
    // 0x1c9a14: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c9a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c9a18:
    // 0x1c9a18: 0xa0244a73  sb          $a0, 0x4A73($at)
    ctx->pc = 0x1c9a18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19059), (uint8_t)GPR_U32(ctx, 4));
label_1c9a1c:
    // 0x1c9a1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c9a20:
    // 0x1c9a20: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a24:
    // 0x1c9a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c9a28:
    // 0x1c9a28: 0xa0224a80  sb          $v0, 0x4A80($at)
    ctx->pc = 0x1c9a28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19072), (uint8_t)GPR_U32(ctx, 2));
label_1c9a2c:
    // 0x1c9a2c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a30:
    // 0x1c9a30: 0xa0224a81  sb          $v0, 0x4A81($at)
    ctx->pc = 0x1c9a30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19073), (uint8_t)GPR_U32(ctx, 2));
label_1c9a34:
    // 0x1c9a34: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a38:
    // 0x1c9a38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9a3c:
    // 0x1c9a3c: 0xa0244a82  sb          $a0, 0x4A82($at)
    ctx->pc = 0x1c9a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19074), (uint8_t)GPR_U32(ctx, 4));
label_1c9a40:
    // 0x1c9a40: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a44:
    // 0x1c9a44: 0xa0244a83  sb          $a0, 0x4A83($at)
    ctx->pc = 0x1c9a44u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19075), (uint8_t)GPR_U32(ctx, 4));
label_1c9a48:
    // 0x1c9a48: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a4c:
    // 0x1c9a4c: 0xa0274a40  sb          $a3, 0x4A40($at)
    ctx->pc = 0x1c9a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19008), (uint8_t)GPR_U32(ctx, 7));
label_1c9a50:
    // 0x1c9a50: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a54:
    // 0x1c9a54: 0xa0274a41  sb          $a3, 0x4A41($at)
    ctx->pc = 0x1c9a54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19009), (uint8_t)GPR_U32(ctx, 7));
label_1c9a58:
    // 0x1c9a58: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a5c:
    // 0x1c9a5c: 0xa0244a42  sb          $a0, 0x4A42($at)
    ctx->pc = 0x1c9a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19010), (uint8_t)GPR_U32(ctx, 4));
label_1c9a60:
    // 0x1c9a60: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a64:
    // 0x1c9a64: 0xa0244a43  sb          $a0, 0x4A43($at)
    ctx->pc = 0x1c9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19011), (uint8_t)GPR_U32(ctx, 4));
label_1c9a68:
    // 0x1c9a68: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a6c:
    // 0x1c9a6c: 0xa0264a44  sb          $a2, 0x4A44($at)
    ctx->pc = 0x1c9a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19012), (uint8_t)GPR_U32(ctx, 6));
label_1c9a70:
    // 0x1c9a70: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a74:
    // 0x1c9a74: 0xa0264a45  sb          $a2, 0x4A45($at)
    ctx->pc = 0x1c9a74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19013), (uint8_t)GPR_U32(ctx, 6));
label_1c9a78:
    // 0x1c9a78: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a7c:
    // 0x1c9a7c: 0xa0244a46  sb          $a0, 0x4A46($at)
    ctx->pc = 0x1c9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19014), (uint8_t)GPR_U32(ctx, 4));
label_1c9a80:
    // 0x1c9a80: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a84:
    // 0x1c9a84: 0xa0244a47  sb          $a0, 0x4A47($at)
    ctx->pc = 0x1c9a84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19015), (uint8_t)GPR_U32(ctx, 4));
label_1c9a88:
    // 0x1c9a88: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a8c:
    // 0x1c9a8c: 0xa0284a48  sb          $t0, 0x4A48($at)
    ctx->pc = 0x1c9a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19016), (uint8_t)GPR_U32(ctx, 8));
label_1c9a90:
    // 0x1c9a90: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a94:
    // 0x1c9a94: 0xa0284a49  sb          $t0, 0x4A49($at)
    ctx->pc = 0x1c9a94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19017), (uint8_t)GPR_U32(ctx, 8));
label_1c9a98:
    // 0x1c9a98: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9a9c:
    // 0x1c9a9c: 0xa0244a4a  sb          $a0, 0x4A4A($at)
    ctx->pc = 0x1c9a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19018), (uint8_t)GPR_U32(ctx, 4));
label_1c9aa0:
    // 0x1c9aa0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9aa4:
    // 0x1c9aa4: 0xa0244a4b  sb          $a0, 0x4A4B($at)
    ctx->pc = 0x1c9aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19019), (uint8_t)GPR_U32(ctx, 4));
label_1c9aa8:
    // 0x1c9aa8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9aac:
    // 0x1c9aac: 0xa0254a84  sb          $a1, 0x4A84($at)
    ctx->pc = 0x1c9aacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19076), (uint8_t)GPR_U32(ctx, 5));
label_1c9ab0:
    // 0x1c9ab0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ab4:
    // 0x1c9ab4: 0xa0254a85  sb          $a1, 0x4A85($at)
    ctx->pc = 0x1c9ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19077), (uint8_t)GPR_U32(ctx, 5));
label_1c9ab8:
    // 0x1c9ab8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9abc:
    // 0x1c9abc: 0xa0244a86  sb          $a0, 0x4A86($at)
    ctx->pc = 0x1c9abcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19078), (uint8_t)GPR_U32(ctx, 4));
label_1c9ac0:
    // 0x1c9ac0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ac4:
    // 0x1c9ac4: 0xa0244a87  sb          $a0, 0x4A87($at)
    ctx->pc = 0x1c9ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19079), (uint8_t)GPR_U32(ctx, 4));
label_1c9ac8:
    // 0x1c9ac8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9acc:
    // 0x1c9acc: 0xa0234a78  sb          $v1, 0x4A78($at)
    ctx->pc = 0x1c9accu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19064), (uint8_t)GPR_U32(ctx, 3));
label_1c9ad0:
    // 0x1c9ad0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ad4:
    // 0x1c9ad4: 0xa0234a79  sb          $v1, 0x4A79($at)
    ctx->pc = 0x1c9ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19065), (uint8_t)GPR_U32(ctx, 3));
label_1c9ad8:
    // 0x1c9ad8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9adc:
    // 0x1c9adc: 0xa0224a7a  sb          $v0, 0x4A7A($at)
    ctx->pc = 0x1c9adcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19066), (uint8_t)GPR_U32(ctx, 2));
label_1c9ae0:
    // 0x1c9ae0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ae4:
    // 0x1c9ae4: 0xa0224a7b  sb          $v0, 0x4A7B($at)
    ctx->pc = 0x1c9ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19067), (uint8_t)GPR_U32(ctx, 2));
label_1c9ae8:
    // 0x1c9ae8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9aec:
    // 0x1c9aec: 0xa0234a7c  sb          $v1, 0x4A7C($at)
    ctx->pc = 0x1c9aecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19068), (uint8_t)GPR_U32(ctx, 3));
label_1c9af0:
    // 0x1c9af0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9af4:
    // 0x1c9af4: 0xa0234a7d  sb          $v1, 0x4A7D($at)
    ctx->pc = 0x1c9af4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19069), (uint8_t)GPR_U32(ctx, 3));
label_1c9af8:
    // 0x1c9af8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9afc:
    // 0x1c9afc: 0xa0224a7e  sb          $v0, 0x4A7E($at)
    ctx->pc = 0x1c9afcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19070), (uint8_t)GPR_U32(ctx, 2));
label_1c9b00:
    // 0x1c9b00: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9b04:
    // 0x1c9b04: 0xa0224a7f  sb          $v0, 0x4A7F($at)
    ctx->pc = 0x1c9b04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19071), (uint8_t)GPR_U32(ctx, 2));
label_1c9b08:
    // 0x1c9b08: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9b0c:
    // 0x1c9b0c: 0x8c3069e0  lw          $s0, 0x69E0($at)
    ctx->pc = 0x1c9b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27104)));
label_1c9b10:
    // 0x1c9b10: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9b14:
    // 0x1c9b14: 0x8c3169e4  lw          $s1, 0x69E4($at)
    ctx->pc = 0x1c9b14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27108)));
label_1c9b18:
    // 0x1c9b18: 0xc070080  jal         func_1C0200
label_1c9b1c:
    if (ctx->pc == 0x1C9B1Cu) {
        ctx->pc = 0x1C9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B18u;
        // 0x1c9b1c: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B20u;
        goto label_1c9b20;
    }
    ctx->pc = 0x1C9B18u;
    SET_GPR_U32(ctx, 31, 0x1C9B20u);
    ctx->pc = 0x1C9B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B18u;
    // 0x1c9b1c: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C9B20u;
label_1c9b20:
    // 0x1c9b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b24:
    // 0x1c9b24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b28:
    // 0x1c9b28: 0xc041744  jal         func_105D10
label_1c9b2c:
    if (ctx->pc == 0x1C9B2Cu) {
        ctx->pc = 0x1C9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B28u;
        // 0x1c9b2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B30u;
        goto label_1c9b30;
    }
    ctx->pc = 0x1C9B28u;
    SET_GPR_U32(ctx, 31, 0x1C9B30u);
    ctx->pc = 0x1C9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B28u;
    // 0x1c9b2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C9B28u, 0x1C9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b34:
    // 0x1c9b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b38:
    // 0x1c9b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b3c:
    // 0x1c9b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b40:
    // 0x1c9b40: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9b44:
    // 0x1c9b44: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1c9b48:
    // 0x1c9b48: 0xc0603d4  jal         func_180F50
label_1c9b4c:
    if (ctx->pc == 0x1C9B4Cu) {
        ctx->pc = 0x1C9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B48u;
        // 0x1c9b4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B50u;
        goto label_1c9b50;
    }
    ctx->pc = 0x1C9B48u;
    SET_GPR_U32(ctx, 31, 0x1C9B50u);
    ctx->pc = 0x1C9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B48u;
    // 0x1c9b4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C9B48u, 0x1C9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B50u;
label_1c9b50:
    // 0x1c9b50: 0xff828ab8  sd          $v0, -0x7548($gp)
    ctx->pc = 0x1c9b50u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U64(ctx, 2));
label_1c9b54:
    // 0x1c9b54: 0xc070038  jal         func_1C00E0
label_1c9b58:
    if (ctx->pc == 0x1C9B58u) {
        ctx->pc = 0x1C9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B54u;
        // 0x1c9b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B5Cu;
        goto label_1c9b5c;
    }
    ctx->pc = 0x1C9B54u;
    SET_GPR_U32(ctx, 31, 0x1C9B5Cu);
    ctx->pc = 0x1C9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B54u;
    // 0x1c9b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9B5Cu;
label_1c9b5c:
    // 0x1c9b5c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9b60:
    // 0x1c9b60: 0x240501f5  addiu       $a1, $zero, 0x1F5
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
label_1c9b64:
    // 0x1c9b64: 0xc060578  jal         func_1815E0
label_1c9b68:
    if (ctx->pc == 0x1C9B68u) {
        ctx->pc = 0x1C9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B64u;
        // 0x1c9b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B6Cu;
        goto label_1c9b6c;
    }
    ctx->pc = 0x1C9B64u;
    SET_GPR_U32(ctx, 31, 0x1C9B6Cu);
    ctx->pc = 0x1C9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B64u;
    // 0x1c9b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9B64u, 0x1C9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B6Cu;
label_1c9b6c:
    // 0x1c9b6c: 0xff828ab0  sd          $v0, -0x7550($gp)
    ctx->pc = 0x1c9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U64(ctx, 2));
label_1c9b70:
    // 0x1c9b70: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9b74:
    // 0x1c9b74: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x1c9b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
label_1c9b78:
    // 0x1c9b78: 0xc060578  jal         func_1815E0
label_1c9b7c:
    if (ctx->pc == 0x1C9B7Cu) {
        ctx->pc = 0x1C9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B78u;
        // 0x1c9b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B80u;
        goto label_1c9b80;
    }
    ctx->pc = 0x1C9B78u;
    SET_GPR_U32(ctx, 31, 0x1C9B80u);
    ctx->pc = 0x1C9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B78u;
    // 0x1c9b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9B78u, 0x1C9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B80u;
label_1c9b80:
    // 0x1c9b80: 0xff828aa8  sd          $v0, -0x7558($gp)
    ctx->pc = 0x1c9b80u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937256), GPR_U64(ctx, 2));
label_1c9b84:
    // 0x1c9b84: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9b88:
    // 0x1c9b88: 0x240501f7  addiu       $a1, $zero, 0x1F7
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
label_1c9b8c:
    // 0x1c9b8c: 0xc060578  jal         func_1815E0
label_1c9b90:
    if (ctx->pc == 0x1C9B90u) {
        ctx->pc = 0x1C9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B8Cu;
        // 0x1c9b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B94u;
        goto label_1c9b94;
    }
    ctx->pc = 0x1C9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B94u);
    ctx->pc = 0x1C9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B8Cu;
    // 0x1c9b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9B8Cu, 0x1C9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B94u;
label_1c9b94:
    // 0x1c9b94: 0xff828aa0  sd          $v0, -0x7560($gp)
    ctx->pc = 0x1c9b94u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937248), GPR_U64(ctx, 2));
label_1c9b98:
    // 0x1c9b98: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9b9c:
    // 0x1c9b9c: 0x240501f8  addiu       $a1, $zero, 0x1F8
    ctx->pc = 0x1c9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_1c9ba0:
    // 0x1c9ba0: 0xc060578  jal         func_1815E0
label_1c9ba4:
    if (ctx->pc == 0x1C9BA4u) {
        ctx->pc = 0x1C9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BA0u;
        // 0x1c9ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BA8u;
        goto label_1c9ba8;
    }
    ctx->pc = 0x1C9BA0u;
    SET_GPR_U32(ctx, 31, 0x1C9BA8u);
    ctx->pc = 0x1C9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BA0u;
    // 0x1c9ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9BA0u, 0x1C9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BA8u;
label_1c9ba8:
    // 0x1c9ba8: 0xff828a98  sd          $v0, -0x7568($gp)
    ctx->pc = 0x1c9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937240), GPR_U64(ctx, 2));
label_1c9bac:
    // 0x1c9bac: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9bb0:
    // 0x1c9bb0: 0x240501f9  addiu       $a1, $zero, 0x1F9
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_1c9bb4:
    // 0x1c9bb4: 0xc060578  jal         func_1815E0
label_1c9bb8:
    if (ctx->pc == 0x1C9BB8u) {
        ctx->pc = 0x1C9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BB4u;
        // 0x1c9bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BBCu;
        goto label_1c9bbc;
    }
    ctx->pc = 0x1C9BB4u;
    SET_GPR_U32(ctx, 31, 0x1C9BBCu);
    ctx->pc = 0x1C9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BB4u;
    // 0x1c9bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9BB4u, 0x1C9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BBCu;
label_1c9bbc:
    // 0x1c9bbc: 0xff828a90  sd          $v0, -0x7570($gp)
    ctx->pc = 0x1c9bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937232), GPR_U64(ctx, 2));
label_1c9bc0:
    // 0x1c9bc0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9bc4:
    // 0x1c9bc4: 0x240501fa  addiu       $a1, $zero, 0x1FA
    ctx->pc = 0x1c9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
label_1c9bc8:
    // 0x1c9bc8: 0xc060578  jal         func_1815E0
label_1c9bcc:
    if (ctx->pc == 0x1C9BCCu) {
        ctx->pc = 0x1C9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BC8u;
        // 0x1c9bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BD0u;
        goto label_1c9bd0;
    }
    ctx->pc = 0x1C9BC8u;
    SET_GPR_U32(ctx, 31, 0x1C9BD0u);
    ctx->pc = 0x1C9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BC8u;
    // 0x1c9bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9BC8u, 0x1C9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BD0u;
label_1c9bd0:
    // 0x1c9bd0: 0xff828bd0  sd          $v0, -0x7430($gp)
    ctx->pc = 0x1c9bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U64(ctx, 2));
label_1c9bd4:
    // 0x1c9bd4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9bd8:
    // 0x1c9bd8: 0x240501fb  addiu       $a1, $zero, 0x1FB
    ctx->pc = 0x1c9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
label_1c9bdc:
    // 0x1c9bdc: 0xc060578  jal         func_1815E0
label_1c9be0:
    if (ctx->pc == 0x1C9BE0u) {
        ctx->pc = 0x1C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BDCu;
        // 0x1c9be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BE4u;
        goto label_1c9be4;
    }
    ctx->pc = 0x1C9BDCu;
    SET_GPR_U32(ctx, 31, 0x1C9BE4u);
    ctx->pc = 0x1C9BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BDCu;
    // 0x1c9be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9BDCu, 0x1C9BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BE4u;
label_1c9be4:
    // 0x1c9be4: 0xff828ac8  sd          $v0, -0x7538($gp)
    ctx->pc = 0x1c9be4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U64(ctx, 2));
label_1c9be8:
    // 0x1c9be8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9bec:
    // 0x1c9bec: 0x240501fc  addiu       $a1, $zero, 0x1FC
    ctx->pc = 0x1c9becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
label_1c9bf0:
    // 0x1c9bf0: 0xc060578  jal         func_1815E0
label_1c9bf4:
    if (ctx->pc == 0x1C9BF4u) {
        ctx->pc = 0x1C9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BF0u;
        // 0x1c9bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BF8u;
        goto label_1c9bf8;
    }
    ctx->pc = 0x1C9BF0u;
    SET_GPR_U32(ctx, 31, 0x1C9BF8u);
    ctx->pc = 0x1C9BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BF0u;
    // 0x1c9bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9BF0u, 0x1C9BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BF8u;
label_1c9bf8:
    // 0x1c9bf8: 0xff828a50  sd          $v0, -0x75B0($gp)
    ctx->pc = 0x1c9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937168), GPR_U64(ctx, 2));
label_1c9bfc:
    // 0x1c9bfc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1c9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c9c00:
    // 0x1c9c00: 0x240501fd  addiu       $a1, $zero, 0x1FD
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_1c9c04:
    // 0x1c9c04: 0xc060578  jal         func_1815E0
label_1c9c08:
    if (ctx->pc == 0x1C9C08u) {
        ctx->pc = 0x1C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C04u;
        // 0x1c9c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C0Cu;
        goto label_1c9c0c;
    }
    ctx->pc = 0x1C9C04u;
    SET_GPR_U32(ctx, 31, 0x1C9C0Cu);
    ctx->pc = 0x1C9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C04u;
    // 0x1c9c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9C04u, 0x1C9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C0Cu;
label_1c9c0c:
    // 0x1c9c0c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c10:
    // 0x1c9c10: 0xff828b90  sd          $v0, -0x7470($gp)
    ctx->pc = 0x1c9c10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937488), GPR_U64(ctx, 2));
label_1c9c14:
    // 0x1c9c14: 0xa0204a1c  sb          $zero, 0x4A1C($at)
    ctx->pc = 0x1c9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18972), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c9c18u;
    return;
}

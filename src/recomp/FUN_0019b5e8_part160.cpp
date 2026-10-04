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


void FUN_0019b5e8_part160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        case 0x1e9084u: goto label_1e9084;
        case 0x1e9088u: goto label_1e9088;
        case 0x1e908cu: goto label_1e908c;
        case 0x1e9090u: goto label_1e9090;
        case 0x1e9094u: goto label_1e9094;
        case 0x1e9098u: goto label_1e9098;
        case 0x1e909cu: goto label_1e909c;
        case 0x1e90a0u: goto label_1e90a0;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90a8u: goto label_1e90a8;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b0u: goto label_1e90b0;
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90bcu: goto label_1e90bc;
        case 0x1e90c0u: goto label_1e90c0;
        case 0x1e90c4u: goto label_1e90c4;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e90ccu: goto label_1e90cc;
        case 0x1e90d0u: goto label_1e90d0;
        case 0x1e90d4u: goto label_1e90d4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e90e0u: goto label_1e90e0;
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e90e8u: goto label_1e90e8;
        case 0x1e90ecu: goto label_1e90ec;
        case 0x1e90f0u: goto label_1e90f0;
        case 0x1e90f4u: goto label_1e90f4;
        case 0x1e90f8u: goto label_1e90f8;
        case 0x1e90fcu: goto label_1e90fc;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9104u: goto label_1e9104;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e910cu: goto label_1e910c;
        case 0x1e9110u: goto label_1e9110;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e911cu: goto label_1e911c;
        case 0x1e9120u: goto label_1e9120;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e912cu: goto label_1e912c;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e9134u: goto label_1e9134;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9148u: goto label_1e9148;
        case 0x1e914cu: goto label_1e914c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9154u: goto label_1e9154;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e915cu: goto label_1e915c;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e9168u: goto label_1e9168;
        case 0x1e916cu: goto label_1e916c;
        case 0x1e9170u: goto label_1e9170;
        case 0x1e9174u: goto label_1e9174;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e9184u: goto label_1e9184;
        case 0x1e9188u: goto label_1e9188;
        case 0x1e918cu: goto label_1e918c;
        case 0x1e9190u: goto label_1e9190;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e919cu: goto label_1e919c;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91a8u: goto label_1e91a8;
        case 0x1e91acu: goto label_1e91ac;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91b4u: goto label_1e91b4;
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91bcu: goto label_1e91bc;
        case 0x1e91c0u: goto label_1e91c0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91c8u: goto label_1e91c8;
        case 0x1e91ccu: goto label_1e91cc;
        case 0x1e91d0u: goto label_1e91d0;
        case 0x1e91d4u: goto label_1e91d4;
        case 0x1e91d8u: goto label_1e91d8;
        case 0x1e91dcu: goto label_1e91dc;
        case 0x1e91e0u: goto label_1e91e0;
        case 0x1e91e4u: goto label_1e91e4;
        case 0x1e91e8u: goto label_1e91e8;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e91f4u: goto label_1e91f4;
        case 0x1e91f8u: goto label_1e91f8;
        case 0x1e91fcu: goto label_1e91fc;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9204u: goto label_1e9204;
        case 0x1e9208u: goto label_1e9208;
        case 0x1e920cu: goto label_1e920c;
        case 0x1e9210u: goto label_1e9210;
        case 0x1e9214u: goto label_1e9214;
        case 0x1e9218u: goto label_1e9218;
        case 0x1e921cu: goto label_1e921c;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9224u: goto label_1e9224;
        case 0x1e9228u: goto label_1e9228;
        case 0x1e922cu: goto label_1e922c;
        case 0x1e9230u: goto label_1e9230;
        case 0x1e9234u: goto label_1e9234;
        case 0x1e9238u: goto label_1e9238;
        case 0x1e923cu: goto label_1e923c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9248u: goto label_1e9248;
        case 0x1e924cu: goto label_1e924c;
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9254u: goto label_1e9254;
        case 0x1e9258u: goto label_1e9258;
        case 0x1e925cu: goto label_1e925c;
        case 0x1e9260u: goto label_1e9260;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9268u: goto label_1e9268;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9270u: goto label_1e9270;
        case 0x1e9274u: goto label_1e9274;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e927cu: goto label_1e927c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9284u: goto label_1e9284;
        case 0x1e9288u: goto label_1e9288;
        case 0x1e928cu: goto label_1e928c;
        case 0x1e9290u: goto label_1e9290;
        case 0x1e9294u: goto label_1e9294;
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
        default: return;
    }

label_1e9018:
    if (ctx->pc == 0x1E9018u) {
        ctx->pc = 0x1E901Cu;
        goto label_1e901c;
    }
    ctx->pc = 0x1E9014u;
    {
        const bool branch_taken_0x1e9014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9014) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E901Cu;
label_1e901c:
    // 0x1e901c: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_1e9020:
    // 0x1e9020: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1e9024:
    if (ctx->pc == 0x1E9024u) {
        ctx->pc = 0x1E9028u;
        goto label_1e9028;
    }
    ctx->pc = 0x1E9020u;
    {
        const bool branch_taken_0x1e9020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9020) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E9028u;
label_1e9028:
    // 0x1e9028: 0x90630234  lbu         $v1, 0x234($v1)
    ctx->pc = 0x1e9028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
label_1e902c:
    // 0x1e902c: 0x9244005e  lbu         $a0, 0x5E($s2)
    ctx->pc = 0x1e902cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_1e9030:
    // 0x1e9030: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    {
        const bool branch_taken_0x1e9030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9030) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e903c:
    // 0x1e903c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e903cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9040:
    // 0x1e9040: 0xc050f08  jal         func_143C20
label_1e9044:
    if (ctx->pc == 0x1E9044u) {
        ctx->pc = 0x1E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9040u;
        // 0x1e9044: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9048u;
        goto label_1e9048;
    }
    ctx->pc = 0x1E9040u;
    SET_GPR_U32(ctx, 31, 0x1E9048u);
    ctx->pc = 0x1E9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9040u;
    // 0x1e9044: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1E9040u, 0x1E9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9048u;
label_1e9048:
    // 0x1e9048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e904c:
    // 0x1e904c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e904cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9050:
    // 0x1e9050: 0x8c450200  lw          $a1, 0x200($v0)
    ctx->pc = 0x1e9050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
label_1e9054:
    // 0x1e9054: 0xc050f08  jal         func_143C20
label_1e9058:
    if (ctx->pc == 0x1E9058u) {
        ctx->pc = 0x1E9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9054u;
        // 0x1e9058: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E905Cu;
        goto label_1e905c;
    }
    ctx->pc = 0x1E9054u;
    SET_GPR_U32(ctx, 31, 0x1E905Cu);
    ctx->pc = 0x1E9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9054u;
    // 0x1e9058: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1E9054u, 0x1E905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E905Cu;
label_1e905c:
    // 0x1e905c: 0x0  nop
    ctx->pc = 0x1e905cu;
    // NOP
label_1e9060:
    // 0x1e9060: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e9060u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e9064:
    // 0x1e9064: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1e9064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1e9068:
    // 0x1e9068: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e906c:
    if (ctx->pc == 0x1E906Cu) {
        ctx->pc = 0x1E9070u;
        goto label_1e9070;
    }
    ctx->pc = 0x1E9068u;
    {
        const bool branch_taken_0x1e9068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9068) {
            ctx->pc = 0x1E9088u;
            goto label_1e9088;
        }
    }
    ctx->pc = 0x1E9070u;
label_1e9070:
    // 0x1e9070: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1e9070u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9074:
    // 0x1e9074: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9078:
    // 0x1e9078: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_1e907c:
    // 0x1e907c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1e9080:
    // 0x1e9080: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e9084:
    if (ctx->pc == 0x1E9084u) {
        ctx->pc = 0x1E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9080u;
        // 0x1e9084: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9088u;
        goto label_1e9088;
    }
    ctx->pc = 0x1E9080u;
    {
        const bool branch_taken_0x1e9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9080u;
        // 0x1e9084: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9080) {
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E9088u;
label_1e9088:
    // 0x1e9088: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1e9088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1e908c:
    // 0x1e908c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1e9090:
    if (ctx->pc == 0x1E9090u) {
        ctx->pc = 0x1E9094u;
        goto label_1e9094;
    }
    ctx->pc = 0x1E908Cu;
    {
        const bool branch_taken_0x1e908c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e908c) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E9094u;
label_1e9094:
    // 0x1e9094: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x1e9094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9098:
    // 0x1e9098: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e9098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e909c:
    // 0x1e909c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e90a0:
    // 0x1e90a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1e90a4:
    if (ctx->pc == 0x1E90A4u) {
        ctx->pc = 0x1E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A0u;
        // 0x1e90a4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90A8u;
        goto label_1e90a8;
    }
    ctx->pc = 0x1E90A0u;
    {
        const bool branch_taken_0x1e90a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A0u;
        // 0x1e90a4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90a0) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90A8u;
label_1e90a8:
    // 0x1e90a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1e90ac:
    if (ctx->pc == 0x1E90ACu) {
        ctx->pc = 0x1E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A8u;
        // 0x1e90ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90B0u;
        goto label_1e90b0;
    }
    ctx->pc = 0x1E90A8u;
    {
        const bool branch_taken_0x1e90a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A8u;
        // 0x1e90ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90a8) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90B0u;
label_1e90b0:
    // 0x1e90b0: 0xc04bba0  jal         func_12EE80
label_1e90b4:
    if (ctx->pc == 0x1E90B4u) {
        ctx->pc = 0x1E90B8u;
        goto label_1e90b8;
    }
    ctx->pc = 0x1E90B0u;
    SET_GPR_U32(ctx, 31, 0x1E90B8u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x1E90B0u, 0x1E90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90B8u;
label_1e90b8:
    // 0x1e90b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e90bc:
    if (ctx->pc == 0x1E90BCu) {
        ctx->pc = 0x1E90C0u;
        goto label_1e90c0;
    }
    ctx->pc = 0x1E90B8u;
    {
        const bool branch_taken_0x1e90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90b8) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90C0u;
label_1e90c0:
    // 0x1e90c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e90c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e90c4:
    // 0x1e90c4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1e90c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1e90c8:
    // 0x1e90c8: 0x2aa3002f  slti        $v1, $s5, 0x2F
    ctx->pc = 0x1e90c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)47) ? 1 : 0);
label_1e90cc:
    // 0x1e90cc: 0x1460fe6d  bnez        $v1, . + 4 + (-0x193 << 2)
label_1e90d0:
    if (ctx->pc == 0x1E90D0u) {
        ctx->pc = 0x1E90D4u;
        goto label_1e90d4;
    }
    ctx->pc = 0x1E90CCu;
    {
        const bool branch_taken_0x1e90cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90cc) {
            ctx->pc = 0x1E8A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e8a84; return; }
        }
    }
    ctx->pc = 0x1E90D4u;
label_1e90d4:
    // 0x1e90d4: 0x0  nop
    ctx->pc = 0x1e90d4u;
    // NOP
label_1e90d8:
    // 0x1e90d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e90d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e90dc:
    // 0x1e90dc: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1e90dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1e90e0:
    // 0x1e90e0: 0x2a830032  slti        $v1, $s4, 0x32
    ctx->pc = 0x1e90e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e90e4:
    // 0x1e90e4: 0x1460fe5b  bnez        $v1, . + 4 + (-0x1A5 << 2)
label_1e90e8:
    if (ctx->pc == 0x1E90E8u) {
        ctx->pc = 0x1E90ECu;
        goto label_1e90ec;
    }
    ctx->pc = 0x1E90E4u;
    {
        const bool branch_taken_0x1e90e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90e4) {
            ctx->pc = 0x1E8A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e8a54; return; }
        }
    }
    ctx->pc = 0x1E90ECu;
label_1e90ec:
    // 0x1e90ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e90ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e90f0:
    // 0x1e90f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e90f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e90f4:
    // 0x1e90f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e90f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e90f8:
    // 0x1e90f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e90f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e90fc:
    // 0x1e90fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e90fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9100:
    // 0x1e9100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9104:
    // 0x1e9104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9108:
    // 0x1e9108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e910c:
    // 0x1e910c: 0x3e00008  jr          $ra
label_1e9110:
    if (ctx->pc == 0x1E9110u) {
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9114u;
        goto label_1e9114;
    }
    ctx->pc = 0x1E910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9114u;
label_1e9114:
    // 0x1e9114: 0x0  nop
    ctx->pc = 0x1e9114u;
    // NOP
label_1e9118:
    // 0x1e9118: 0x0  nop
    ctx->pc = 0x1e9118u;
    // NOP
label_1e911c:
    // 0x1e911c: 0x0  nop
    ctx->pc = 0x1e911cu;
    // NOP
label_1e9120:
    // 0x1e9120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e9124:
    // 0x1e9124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9128:
    // 0x1e9128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e912c:
    // 0x1e912c: 0xc08bbe4  jal         func_22EF90
label_1e9130:
    if (ctx->pc == 0x1E9130u) {
        ctx->pc = 0x1E9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E912Cu;
        // 0x1e9130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9134u;
        goto label_1e9134;
    }
    ctx->pc = 0x1E912Cu;
    SET_GPR_U32(ctx, 31, 0x1E9134u);
    ctx->pc = 0x1E9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E912Cu;
    // 0x1e9130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF90u;
    { ctx->pc = 0x22ef90; return; }
    ctx->pc = 0x1E9134u;
label_1e9134:
    // 0x1e9134: 0x8f91821c  lw          $s1, -0x7DE4($gp)
    ctx->pc = 0x1e9134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e9138:
    // 0x1e9138: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1e913c:
    if (ctx->pc == 0x1E913Cu) {
        ctx->pc = 0x1E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9138u;
        // 0x1e913c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9140u;
        goto label_1e9140;
    }
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9138u;
        // 0x1e913c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E93C0u;
            goto label_1e93c0;
        }
    }
    ctx->pc = 0x1E9140u;
label_1e9140:
    // 0x1e9140: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x1e9140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_1e9144:
    // 0x1e9144: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_1e9148:
    if (ctx->pc == 0x1E9148u) {
        ctx->pc = 0x1E914Cu;
        goto label_1e914c;
    }
    ctx->pc = 0x1E9144u;
    {
        const bool branch_taken_0x1e9144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9144) {
            ctx->pc = 0x1E93B4u;
            goto label_1e93b4;
        }
    }
    ctx->pc = 0x1E914Cu;
label_1e914c:
    // 0x1e914c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1e9150:
    // 0x1e9150: 0x10a00098  beqz        $a1, . + 4 + (0x98 << 2)
label_1e9154:
    if (ctx->pc == 0x1E9154u) {
        ctx->pc = 0x1E9158u;
        goto label_1e9158;
    }
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E93B4u;
            goto label_1e93b4;
        }
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e915c:
    // 0x1e915c: 0x86240056  lh          $a0, 0x56($s1)
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_1e9160:
    // 0x1e9160: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e9164:
    // 0x1e9164: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1e9168:
    if (ctx->pc == 0x1E9168u) {
        ctx->pc = 0x1E916Cu;
        goto label_1e916c;
    }
    ctx->pc = 0x1E9164u;
    {
        const bool branch_taken_0x1e9164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9164) {
            ctx->pc = 0x1E9178u;
            goto label_1e9178;
        }
    }
    ctx->pc = 0x1E916Cu;
label_1e916c:
    // 0x1e916c: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9170:
    // 0x1e9170: 0x10000090  b           . + 4 + (0x90 << 2)
label_1e9174:
    if (ctx->pc == 0x1E9174u) {
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9170u;
        // 0x1e9174: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9178u;
        goto label_1e9178;
    }
    ctx->pc = 0x1E9170u;
    {
        const bool branch_taken_0x1e9170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9170u;
        // 0x1e9174: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9170) {
            ctx->pc = 0x1E93B4u;
            goto label_1e93b4;
        }
    }
    ctx->pc = 0x1E9178u;
label_1e9178:
    // 0x1e9178: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x1e9178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_1e917c:
    // 0x1e917c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e9180:
    if (ctx->pc == 0x1E9180u) {
        ctx->pc = 0x1E9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E917Cu;
        // 0x1e9180: 0x2483ffc4  addiu       $v1, $a0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9184u;
        goto label_1e9184;
    }
    ctx->pc = 0x1E917Cu;
    {
        const bool branch_taken_0x1e917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E917Cu;
        // 0x1e9180: 0x2483ffc4  addiu       $v1, $a0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e917c) {
            ctx->pc = 0x1E918Cu;
            goto label_1e918c;
        }
    }
    ctx->pc = 0x1E9184u;
label_1e9184:
    // 0x1e9184: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x1e9184u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_1e9188:
    // 0x1e9188: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1e9188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1e918c:
    // 0x1e918c: 0x0  nop
    ctx->pc = 0x1e918cu;
    // NOP
label_1e9190:
    // 0x1e9190: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x1e9190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9194:
    // 0x1e9194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e9198:
    // 0x1e9198: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
label_1e919c:
    if (ctx->pc == 0x1E919Cu) {
        ctx->pc = 0x1E91A0u;
        goto label_1e91a0;
    }
    ctx->pc = 0x1E9198u;
    {
        const bool branch_taken_0x1e9198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9198) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E91A0u;
label_1e91a0:
    // 0x1e91a0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e91a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91a4:
    // 0x1e91a4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e91a8:
    // 0x1e91a8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1e91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1e91ac:
    // 0x1e91ac: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91b0:
    // 0x1e91b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1e91b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1e91b4:
    // 0x1e91b4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1e91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91b8:
    // 0x1e91b8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1e91b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1e91bc:
    // 0x1e91bc: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1e91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91c0:
    // 0x1e91c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1e91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1e91c4:
    // 0x1e91c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e91c8:
    // 0x1e91c8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e91cc:
    // 0x1e91cc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e91ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e91d0:
    // 0x1e91d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e91d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1e91d4:
    // 0x1e91d4: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d4u;
    // NOP operation, no action needed for VU0
label_1e91d8:
    // 0x1e91d8: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d8u;
    // NOP operation, no action needed for VU0
label_1e91dc:
    // 0x1e91dc: 0x4a0002ff  vnop
    ctx->pc = 0x1e91dcu;
    // NOP operation, no action needed for VU0
label_1e91e0:
    // 0x1e91e0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e91e4:
    // 0x1e91e4: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e91e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e91e8:
    // 0x1e91e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e91ec:
    // 0x1e91ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e91f0:
    if (ctx->pc == 0x1E91F0u) {
        ctx->pc = 0x1E91F4u;
        goto label_1e91f4;
    }
    ctx->pc = 0x1E91ECu;
    {
        const bool branch_taken_0x1e91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e91ec) {
            ctx->pc = 0x1E9260u;
            goto label_1e9260;
        }
    }
    ctx->pc = 0x1E91F4u;
label_1e91f4:
    // 0x1e91f4: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1e91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e91f8:
    // 0x1e91f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1e91fc:
    // 0x1e91fc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1e91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9200:
    // 0x1e9200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e9204:
    // 0x1e9204: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9208:
    // 0x1e9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e920c:
    // 0x1e920c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1e920cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1e9210:
    // 0x1e9210: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x1e9210u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1e9214:
    // 0x1e9214: 0x46020344  c1          0x20344
    ctx->pc = 0x1e9214u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1e9218:
    // 0x1e9218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e9218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e921c:
    // 0x1e921c: 0x0  nop
    ctx->pc = 0x1e921cu;
    // NOP
label_1e9220:
    // 0x1e9220: 0x0  nop
    ctx->pc = 0x1e9220u;
    // NOP
label_1e9224:
    // 0x1e9224: 0xc06d51e  jal         func_1B5478
label_1e9228:
    if (ctx->pc == 0x1E9228u) {
        ctx->pc = 0x1E9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9224u;
        // 0x1e9228: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E922Cu;
        goto label_1e922c;
    }
    ctx->pc = 0x1E9224u;
    SET_GPR_U32(ctx, 31, 0x1E922Cu);
    ctx->pc = 0x1E9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9224u;
    // 0x1e9228: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1E922Cu;
label_1e922c:
    // 0x1e922c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e9230:
    // 0x1e9230: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e9234:
    // 0x1e9234: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e9234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1e9238:
    // 0x1e9238: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e9238u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
label_1e923c:
    // 0x1e923c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e923cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1e9240:
    // 0x1e9240: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x1e9240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_1e9244:
    // 0x1e9244: 0xf8510010  sqc2        $vf17, 0x10($v0)
    ctx->pc = 0x1e9244u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_1e9248:
    // 0x1e9248: 0xf8520020  sqc2        $vf18, 0x20($v0)
    ctx->pc = 0x1e9248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_1e924c:
    // 0x1e924c: 0xf8530030  sqc2        $vf19, 0x30($v0)
    ctx->pc = 0x1e924cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_1e9250:
    // 0x1e9250: 0xc62c0048  lwc1        $f12, 0x48($s1)
    ctx->pc = 0x1e9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9254:
    // 0x1e9254: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e9258:
    // 0x1e9258: 0xc066e14  jal         func_19B850
label_1e925c:
    if (ctx->pc == 0x1E925Cu) {
        ctx->pc = 0x1E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9258u;
        // 0x1e925c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9260u;
        goto label_1e9260;
    }
    ctx->pc = 0x1E9258u;
    SET_GPR_U32(ctx, 31, 0x1E9260u);
    ctx->pc = 0x1E925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9258u;
    // 0x1e925c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1E9260u;
label_1e9260:
    // 0x1e9260: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e9264:
    // 0x1e9264: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e9268:
    // 0x1e9268: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1e926c:
    if (ctx->pc == 0x1E926Cu) {
        ctx->pc = 0x1E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9268u;
        // 0x1e926c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9270u;
        goto label_1e9270;
    }
    ctx->pc = 0x1E9268u;
    {
        const bool branch_taken_0x1e9268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9268u;
        // 0x1e926c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9268) {
            ctx->pc = 0x1E936Cu;
            goto label_1e936c;
        }
    }
    ctx->pc = 0x1E9270u;
label_1e9270:
    // 0x1e9270: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_1e9274:
    if (ctx->pc == 0x1E9274u) {
        ctx->pc = 0x1E9278u;
        goto label_1e9278;
    }
    ctx->pc = 0x1E9270u;
    {
        const bool branch_taken_0x1e9270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9270) {
            ctx->pc = 0x1E936Cu;
            goto label_1e936c;
        }
    }
    ctx->pc = 0x1E9278u;
label_1e9278:
    // 0x1e9278: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1e927c:
    // 0x1e927c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e9280:
    // 0x1e9280: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_1e9284:
    if (ctx->pc == 0x1E9284u) {
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9288u;
        goto label_1e9288;
    }
    ctx->pc = 0x1E9280u;
    {
        const bool branch_taken_0x1e9280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9280) {
            ctx->pc = 0x1E936Cu;
            goto label_1e936c;
        }
    }
    ctx->pc = 0x1E9288u;
label_1e9288:
    // 0x1e9288: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e928c:
    // 0x1e928c: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e9290:
    // 0x1e9290: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9294:
    // 0x1e9294: 0xc043274  jal         func_10C9D0
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
    { ctx->pc = 0x19b808; return; }
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
            goto label_1e9140;
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
    { ctx->pc = 0x19b850; return; }
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
    { ctx->pc = 0x19b850; return; }
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
            { ctx->pc = 0x1e97f4; return; }
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
            { ctx->pc = 0x1e97f4; return; }
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
    ctx->pc = 0x1e97e8u;
    return;
}

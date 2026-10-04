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


void FUN_0019b618_part127(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d8e78u: goto label_1d8e78;
        case 0x1d8e7cu: goto label_1d8e7c;
        case 0x1d8e80u: goto label_1d8e80;
        case 0x1d8e84u: goto label_1d8e84;
        case 0x1d8e88u: goto label_1d8e88;
        case 0x1d8e8cu: goto label_1d8e8c;
        case 0x1d8e90u: goto label_1d8e90;
        case 0x1d8e94u: goto label_1d8e94;
        case 0x1d8e98u: goto label_1d8e98;
        case 0x1d8e9cu: goto label_1d8e9c;
        case 0x1d8ea0u: goto label_1d8ea0;
        case 0x1d8ea4u: goto label_1d8ea4;
        case 0x1d8ea8u: goto label_1d8ea8;
        case 0x1d8eacu: goto label_1d8eac;
        case 0x1d8eb0u: goto label_1d8eb0;
        case 0x1d8eb4u: goto label_1d8eb4;
        case 0x1d8eb8u: goto label_1d8eb8;
        case 0x1d8ebcu: goto label_1d8ebc;
        case 0x1d8ec0u: goto label_1d8ec0;
        case 0x1d8ec4u: goto label_1d8ec4;
        case 0x1d8ec8u: goto label_1d8ec8;
        case 0x1d8eccu: goto label_1d8ecc;
        case 0x1d8ed0u: goto label_1d8ed0;
        case 0x1d8ed4u: goto label_1d8ed4;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8edcu: goto label_1d8edc;
        case 0x1d8ee0u: goto label_1d8ee0;
        case 0x1d8ee4u: goto label_1d8ee4;
        case 0x1d8ee8u: goto label_1d8ee8;
        case 0x1d8eecu: goto label_1d8eec;
        case 0x1d8ef0u: goto label_1d8ef0;
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8ef8u: goto label_1d8ef8;
        case 0x1d8efcu: goto label_1d8efc;
        case 0x1d8f00u: goto label_1d8f00;
        case 0x1d8f04u: goto label_1d8f04;
        case 0x1d8f08u: goto label_1d8f08;
        case 0x1d8f0cu: goto label_1d8f0c;
        case 0x1d8f10u: goto label_1d8f10;
        case 0x1d8f14u: goto label_1d8f14;
        case 0x1d8f18u: goto label_1d8f18;
        case 0x1d8f1cu: goto label_1d8f1c;
        case 0x1d8f20u: goto label_1d8f20;
        case 0x1d8f24u: goto label_1d8f24;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f30u: goto label_1d8f30;
        case 0x1d8f34u: goto label_1d8f34;
        case 0x1d8f38u: goto label_1d8f38;
        case 0x1d8f3cu: goto label_1d8f3c;
        case 0x1d8f40u: goto label_1d8f40;
        case 0x1d8f44u: goto label_1d8f44;
        case 0x1d8f48u: goto label_1d8f48;
        case 0x1d8f4cu: goto label_1d8f4c;
        case 0x1d8f50u: goto label_1d8f50;
        case 0x1d8f54u: goto label_1d8f54;
        case 0x1d8f58u: goto label_1d8f58;
        case 0x1d8f5cu: goto label_1d8f5c;
        case 0x1d8f60u: goto label_1d8f60;
        case 0x1d8f64u: goto label_1d8f64;
        case 0x1d8f68u: goto label_1d8f68;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8f70u: goto label_1d8f70;
        case 0x1d8f74u: goto label_1d8f74;
        case 0x1d8f78u: goto label_1d8f78;
        case 0x1d8f7cu: goto label_1d8f7c;
        case 0x1d8f80u: goto label_1d8f80;
        case 0x1d8f84u: goto label_1d8f84;
        case 0x1d8f88u: goto label_1d8f88;
        case 0x1d8f8cu: goto label_1d8f8c;
        case 0x1d8f90u: goto label_1d8f90;
        case 0x1d8f94u: goto label_1d8f94;
        case 0x1d8f98u: goto label_1d8f98;
        case 0x1d8f9cu: goto label_1d8f9c;
        case 0x1d8fa0u: goto label_1d8fa0;
        case 0x1d8fa4u: goto label_1d8fa4;
        case 0x1d8fa8u: goto label_1d8fa8;
        case 0x1d8facu: goto label_1d8fac;
        case 0x1d8fb0u: goto label_1d8fb0;
        case 0x1d8fb4u: goto label_1d8fb4;
        case 0x1d8fb8u: goto label_1d8fb8;
        case 0x1d8fbcu: goto label_1d8fbc;
        case 0x1d8fc0u: goto label_1d8fc0;
        case 0x1d8fc4u: goto label_1d8fc4;
        case 0x1d8fc8u: goto label_1d8fc8;
        case 0x1d8fccu: goto label_1d8fcc;
        case 0x1d8fd0u: goto label_1d8fd0;
        case 0x1d8fd4u: goto label_1d8fd4;
        case 0x1d8fd8u: goto label_1d8fd8;
        case 0x1d8fdcu: goto label_1d8fdc;
        case 0x1d8fe0u: goto label_1d8fe0;
        case 0x1d8fe4u: goto label_1d8fe4;
        case 0x1d8fe8u: goto label_1d8fe8;
        case 0x1d8fecu: goto label_1d8fec;
        case 0x1d8ff0u: goto label_1d8ff0;
        case 0x1d8ff4u: goto label_1d8ff4;
        case 0x1d8ff8u: goto label_1d8ff8;
        case 0x1d8ffcu: goto label_1d8ffc;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9004u: goto label_1d9004;
        case 0x1d9008u: goto label_1d9008;
        case 0x1d900cu: goto label_1d900c;
        case 0x1d9010u: goto label_1d9010;
        case 0x1d9014u: goto label_1d9014;
        case 0x1d9018u: goto label_1d9018;
        case 0x1d901cu: goto label_1d901c;
        case 0x1d9020u: goto label_1d9020;
        case 0x1d9024u: goto label_1d9024;
        case 0x1d9028u: goto label_1d9028;
        case 0x1d902cu: goto label_1d902c;
        case 0x1d9030u: goto label_1d9030;
        case 0x1d9034u: goto label_1d9034;
        case 0x1d9038u: goto label_1d9038;
        case 0x1d903cu: goto label_1d903c;
        case 0x1d9040u: goto label_1d9040;
        case 0x1d9044u: goto label_1d9044;
        case 0x1d9048u: goto label_1d9048;
        case 0x1d904cu: goto label_1d904c;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9054u: goto label_1d9054;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d905cu: goto label_1d905c;
        case 0x1d9060u: goto label_1d9060;
        case 0x1d9064u: goto label_1d9064;
        case 0x1d9068u: goto label_1d9068;
        case 0x1d906cu: goto label_1d906c;
        case 0x1d9070u: goto label_1d9070;
        case 0x1d9074u: goto label_1d9074;
        case 0x1d9078u: goto label_1d9078;
        case 0x1d907cu: goto label_1d907c;
        case 0x1d9080u: goto label_1d9080;
        case 0x1d9084u: goto label_1d9084;
        case 0x1d9088u: goto label_1d9088;
        case 0x1d908cu: goto label_1d908c;
        case 0x1d9090u: goto label_1d9090;
        case 0x1d9094u: goto label_1d9094;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d909cu: goto label_1d909c;
        case 0x1d90a0u: goto label_1d90a0;
        case 0x1d90a4u: goto label_1d90a4;
        case 0x1d90a8u: goto label_1d90a8;
        case 0x1d90acu: goto label_1d90ac;
        case 0x1d90b0u: goto label_1d90b0;
        case 0x1d90b4u: goto label_1d90b4;
        case 0x1d90b8u: goto label_1d90b8;
        case 0x1d90bcu: goto label_1d90bc;
        case 0x1d90c0u: goto label_1d90c0;
        case 0x1d90c4u: goto label_1d90c4;
        case 0x1d90c8u: goto label_1d90c8;
        case 0x1d90ccu: goto label_1d90cc;
        case 0x1d90d0u: goto label_1d90d0;
        case 0x1d90d4u: goto label_1d90d4;
        case 0x1d90d8u: goto label_1d90d8;
        case 0x1d90dcu: goto label_1d90dc;
        case 0x1d90e0u: goto label_1d90e0;
        case 0x1d90e4u: goto label_1d90e4;
        case 0x1d90e8u: goto label_1d90e8;
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d90f0u: goto label_1d90f0;
        case 0x1d90f4u: goto label_1d90f4;
        case 0x1d90f8u: goto label_1d90f8;
        case 0x1d90fcu: goto label_1d90fc;
        case 0x1d9100u: goto label_1d9100;
        case 0x1d9104u: goto label_1d9104;
        case 0x1d9108u: goto label_1d9108;
        case 0x1d910cu: goto label_1d910c;
        case 0x1d9110u: goto label_1d9110;
        case 0x1d9114u: goto label_1d9114;
        case 0x1d9118u: goto label_1d9118;
        case 0x1d911cu: goto label_1d911c;
        case 0x1d9120u: goto label_1d9120;
        case 0x1d9124u: goto label_1d9124;
        case 0x1d9128u: goto label_1d9128;
        case 0x1d912cu: goto label_1d912c;
        case 0x1d9130u: goto label_1d9130;
        case 0x1d9134u: goto label_1d9134;
        case 0x1d9138u: goto label_1d9138;
        case 0x1d913cu: goto label_1d913c;
        case 0x1d9140u: goto label_1d9140;
        case 0x1d9144u: goto label_1d9144;
        case 0x1d9148u: goto label_1d9148;
        case 0x1d914cu: goto label_1d914c;
        case 0x1d9150u: goto label_1d9150;
        case 0x1d9154u: goto label_1d9154;
        case 0x1d9158u: goto label_1d9158;
        case 0x1d915cu: goto label_1d915c;
        case 0x1d9160u: goto label_1d9160;
        case 0x1d9164u: goto label_1d9164;
        case 0x1d9168u: goto label_1d9168;
        case 0x1d916cu: goto label_1d916c;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9174u: goto label_1d9174;
        case 0x1d9178u: goto label_1d9178;
        case 0x1d917cu: goto label_1d917c;
        case 0x1d9180u: goto label_1d9180;
        case 0x1d9184u: goto label_1d9184;
        case 0x1d9188u: goto label_1d9188;
        case 0x1d918cu: goto label_1d918c;
        case 0x1d9190u: goto label_1d9190;
        case 0x1d9194u: goto label_1d9194;
        case 0x1d9198u: goto label_1d9198;
        case 0x1d919cu: goto label_1d919c;
        case 0x1d91a0u: goto label_1d91a0;
        case 0x1d91a4u: goto label_1d91a4;
        case 0x1d91a8u: goto label_1d91a8;
        case 0x1d91acu: goto label_1d91ac;
        case 0x1d91b0u: goto label_1d91b0;
        case 0x1d91b4u: goto label_1d91b4;
        case 0x1d91b8u: goto label_1d91b8;
        case 0x1d91bcu: goto label_1d91bc;
        case 0x1d91c0u: goto label_1d91c0;
        case 0x1d91c4u: goto label_1d91c4;
        case 0x1d91c8u: goto label_1d91c8;
        case 0x1d91ccu: goto label_1d91cc;
        case 0x1d91d0u: goto label_1d91d0;
        case 0x1d91d4u: goto label_1d91d4;
        case 0x1d91d8u: goto label_1d91d8;
        case 0x1d91dcu: goto label_1d91dc;
        case 0x1d91e0u: goto label_1d91e0;
        case 0x1d91e4u: goto label_1d91e4;
        case 0x1d91e8u: goto label_1d91e8;
        case 0x1d91ecu: goto label_1d91ec;
        case 0x1d91f0u: goto label_1d91f0;
        case 0x1d91f4u: goto label_1d91f4;
        case 0x1d91f8u: goto label_1d91f8;
        case 0x1d91fcu: goto label_1d91fc;
        case 0x1d9200u: goto label_1d9200;
        case 0x1d9204u: goto label_1d9204;
        case 0x1d9208u: goto label_1d9208;
        case 0x1d920cu: goto label_1d920c;
        case 0x1d9210u: goto label_1d9210;
        case 0x1d9214u: goto label_1d9214;
        case 0x1d9218u: goto label_1d9218;
        case 0x1d921cu: goto label_1d921c;
        case 0x1d9220u: goto label_1d9220;
        case 0x1d9224u: goto label_1d9224;
        case 0x1d9228u: goto label_1d9228;
        case 0x1d922cu: goto label_1d922c;
        case 0x1d9230u: goto label_1d9230;
        case 0x1d9234u: goto label_1d9234;
        case 0x1d9238u: goto label_1d9238;
        case 0x1d923cu: goto label_1d923c;
        case 0x1d9240u: goto label_1d9240;
        case 0x1d9244u: goto label_1d9244;
        case 0x1d9248u: goto label_1d9248;
        case 0x1d924cu: goto label_1d924c;
        case 0x1d9250u: goto label_1d9250;
        case 0x1d9254u: goto label_1d9254;
        case 0x1d9258u: goto label_1d9258;
        case 0x1d925cu: goto label_1d925c;
        case 0x1d9260u: goto label_1d9260;
        case 0x1d9264u: goto label_1d9264;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d926cu: goto label_1d926c;
        case 0x1d9270u: goto label_1d9270;
        case 0x1d9274u: goto label_1d9274;
        case 0x1d9278u: goto label_1d9278;
        case 0x1d927cu: goto label_1d927c;
        case 0x1d9280u: goto label_1d9280;
        case 0x1d9284u: goto label_1d9284;
        case 0x1d9288u: goto label_1d9288;
        case 0x1d928cu: goto label_1d928c;
        case 0x1d9290u: goto label_1d9290;
        case 0x1d9294u: goto label_1d9294;
        case 0x1d9298u: goto label_1d9298;
        case 0x1d929cu: goto label_1d929c;
        case 0x1d92a0u: goto label_1d92a0;
        case 0x1d92a4u: goto label_1d92a4;
        case 0x1d92a8u: goto label_1d92a8;
        case 0x1d92acu: goto label_1d92ac;
        case 0x1d92b0u: goto label_1d92b0;
        case 0x1d92b4u: goto label_1d92b4;
        case 0x1d92b8u: goto label_1d92b8;
        case 0x1d92bcu: goto label_1d92bc;
        case 0x1d92c0u: goto label_1d92c0;
        case 0x1d92c4u: goto label_1d92c4;
        case 0x1d92c8u: goto label_1d92c8;
        case 0x1d92ccu: goto label_1d92cc;
        case 0x1d92d0u: goto label_1d92d0;
        case 0x1d92d4u: goto label_1d92d4;
        case 0x1d92d8u: goto label_1d92d8;
        case 0x1d92dcu: goto label_1d92dc;
        case 0x1d92e0u: goto label_1d92e0;
        case 0x1d92e4u: goto label_1d92e4;
        case 0x1d92e8u: goto label_1d92e8;
        case 0x1d92ecu: goto label_1d92ec;
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d92f4u: goto label_1d92f4;
        case 0x1d92f8u: goto label_1d92f8;
        case 0x1d92fcu: goto label_1d92fc;
        case 0x1d9300u: goto label_1d9300;
        case 0x1d9304u: goto label_1d9304;
        case 0x1d9308u: goto label_1d9308;
        case 0x1d930cu: goto label_1d930c;
        case 0x1d9310u: goto label_1d9310;
        case 0x1d9314u: goto label_1d9314;
        case 0x1d9318u: goto label_1d9318;
        case 0x1d931cu: goto label_1d931c;
        case 0x1d9320u: goto label_1d9320;
        case 0x1d9324u: goto label_1d9324;
        case 0x1d9328u: goto label_1d9328;
        case 0x1d932cu: goto label_1d932c;
        case 0x1d9330u: goto label_1d9330;
        case 0x1d9334u: goto label_1d9334;
        case 0x1d9338u: goto label_1d9338;
        case 0x1d933cu: goto label_1d933c;
        case 0x1d9340u: goto label_1d9340;
        case 0x1d9344u: goto label_1d9344;
        case 0x1d9348u: goto label_1d9348;
        case 0x1d934cu: goto label_1d934c;
        case 0x1d9350u: goto label_1d9350;
        case 0x1d9354u: goto label_1d9354;
        case 0x1d9358u: goto label_1d9358;
        case 0x1d935cu: goto label_1d935c;
        case 0x1d9360u: goto label_1d9360;
        case 0x1d9364u: goto label_1d9364;
        case 0x1d9368u: goto label_1d9368;
        case 0x1d936cu: goto label_1d936c;
        case 0x1d9370u: goto label_1d9370;
        case 0x1d9374u: goto label_1d9374;
        case 0x1d9378u: goto label_1d9378;
        case 0x1d937cu: goto label_1d937c;
        case 0x1d9380u: goto label_1d9380;
        case 0x1d9384u: goto label_1d9384;
        case 0x1d9388u: goto label_1d9388;
        case 0x1d938cu: goto label_1d938c;
        case 0x1d9390u: goto label_1d9390;
        case 0x1d9394u: goto label_1d9394;
        case 0x1d9398u: goto label_1d9398;
        case 0x1d939cu: goto label_1d939c;
        case 0x1d93a0u: goto label_1d93a0;
        case 0x1d93a4u: goto label_1d93a4;
        case 0x1d93a8u: goto label_1d93a8;
        case 0x1d93acu: goto label_1d93ac;
        case 0x1d93b0u: goto label_1d93b0;
        case 0x1d93b4u: goto label_1d93b4;
        case 0x1d93b8u: goto label_1d93b8;
        case 0x1d93bcu: goto label_1d93bc;
        case 0x1d93c0u: goto label_1d93c0;
        case 0x1d93c4u: goto label_1d93c4;
        case 0x1d93c8u: goto label_1d93c8;
        case 0x1d93ccu: goto label_1d93cc;
        case 0x1d93d0u: goto label_1d93d0;
        case 0x1d93d4u: goto label_1d93d4;
        case 0x1d93d8u: goto label_1d93d8;
        case 0x1d93dcu: goto label_1d93dc;
        case 0x1d93e0u: goto label_1d93e0;
        case 0x1d93e4u: goto label_1d93e4;
        case 0x1d93e8u: goto label_1d93e8;
        case 0x1d93ecu: goto label_1d93ec;
        case 0x1d93f0u: goto label_1d93f0;
        case 0x1d93f4u: goto label_1d93f4;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d93fcu: goto label_1d93fc;
        case 0x1d9400u: goto label_1d9400;
        case 0x1d9404u: goto label_1d9404;
        case 0x1d9408u: goto label_1d9408;
        case 0x1d940cu: goto label_1d940c;
        case 0x1d9410u: goto label_1d9410;
        case 0x1d9414u: goto label_1d9414;
        case 0x1d9418u: goto label_1d9418;
        case 0x1d941cu: goto label_1d941c;
        case 0x1d9420u: goto label_1d9420;
        case 0x1d9424u: goto label_1d9424;
        case 0x1d9428u: goto label_1d9428;
        case 0x1d942cu: goto label_1d942c;
        case 0x1d9430u: goto label_1d9430;
        case 0x1d9434u: goto label_1d9434;
        case 0x1d9438u: goto label_1d9438;
        case 0x1d943cu: goto label_1d943c;
        case 0x1d9440u: goto label_1d9440;
        case 0x1d9444u: goto label_1d9444;
        case 0x1d9448u: goto label_1d9448;
        case 0x1d944cu: goto label_1d944c;
        case 0x1d9450u: goto label_1d9450;
        case 0x1d9454u: goto label_1d9454;
        case 0x1d9458u: goto label_1d9458;
        case 0x1d945cu: goto label_1d945c;
        case 0x1d9460u: goto label_1d9460;
        case 0x1d9464u: goto label_1d9464;
        case 0x1d9468u: goto label_1d9468;
        case 0x1d946cu: goto label_1d946c;
        case 0x1d9470u: goto label_1d9470;
        case 0x1d9474u: goto label_1d9474;
        case 0x1d9478u: goto label_1d9478;
        case 0x1d947cu: goto label_1d947c;
        case 0x1d9480u: goto label_1d9480;
        case 0x1d9484u: goto label_1d9484;
        case 0x1d9488u: goto label_1d9488;
        case 0x1d948cu: goto label_1d948c;
        case 0x1d9490u: goto label_1d9490;
        case 0x1d9494u: goto label_1d9494;
        case 0x1d9498u: goto label_1d9498;
        case 0x1d949cu: goto label_1d949c;
        case 0x1d94a0u: goto label_1d94a0;
        case 0x1d94a4u: goto label_1d94a4;
        case 0x1d94a8u: goto label_1d94a8;
        case 0x1d94acu: goto label_1d94ac;
        case 0x1d94b0u: goto label_1d94b0;
        case 0x1d94b4u: goto label_1d94b4;
        case 0x1d94b8u: goto label_1d94b8;
        case 0x1d94bcu: goto label_1d94bc;
        case 0x1d94c0u: goto label_1d94c0;
        case 0x1d94c4u: goto label_1d94c4;
        case 0x1d94c8u: goto label_1d94c8;
        case 0x1d94ccu: goto label_1d94cc;
        case 0x1d94d0u: goto label_1d94d0;
        case 0x1d94d4u: goto label_1d94d4;
        case 0x1d94d8u: goto label_1d94d8;
        case 0x1d94dcu: goto label_1d94dc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94e4u: goto label_1d94e4;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d94ecu: goto label_1d94ec;
        case 0x1d94f0u: goto label_1d94f0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d94f8u: goto label_1d94f8;
        case 0x1d94fcu: goto label_1d94fc;
        case 0x1d9500u: goto label_1d9500;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9508u: goto label_1d9508;
        case 0x1d950cu: goto label_1d950c;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d9514u: goto label_1d9514;
        case 0x1d9518u: goto label_1d9518;
        case 0x1d951cu: goto label_1d951c;
        case 0x1d9520u: goto label_1d9520;
        case 0x1d9524u: goto label_1d9524;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d952cu: goto label_1d952c;
        case 0x1d9530u: goto label_1d9530;
        case 0x1d9534u: goto label_1d9534;
        case 0x1d9538u: goto label_1d9538;
        case 0x1d953cu: goto label_1d953c;
        case 0x1d9540u: goto label_1d9540;
        case 0x1d9544u: goto label_1d9544;
        case 0x1d9548u: goto label_1d9548;
        case 0x1d954cu: goto label_1d954c;
        case 0x1d9550u: goto label_1d9550;
        case 0x1d9554u: goto label_1d9554;
        case 0x1d9558u: goto label_1d9558;
        case 0x1d955cu: goto label_1d955c;
        case 0x1d9560u: goto label_1d9560;
        case 0x1d9564u: goto label_1d9564;
        case 0x1d9568u: goto label_1d9568;
        case 0x1d956cu: goto label_1d956c;
        case 0x1d9570u: goto label_1d9570;
        case 0x1d9574u: goto label_1d9574;
        case 0x1d9578u: goto label_1d9578;
        case 0x1d957cu: goto label_1d957c;
        case 0x1d9580u: goto label_1d9580;
        case 0x1d9584u: goto label_1d9584;
        case 0x1d9588u: goto label_1d9588;
        case 0x1d958cu: goto label_1d958c;
        case 0x1d9590u: goto label_1d9590;
        case 0x1d9594u: goto label_1d9594;
        case 0x1d9598u: goto label_1d9598;
        case 0x1d959cu: goto label_1d959c;
        case 0x1d95a0u: goto label_1d95a0;
        case 0x1d95a4u: goto label_1d95a4;
        case 0x1d95a8u: goto label_1d95a8;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95b0u: goto label_1d95b0;
        case 0x1d95b4u: goto label_1d95b4;
        case 0x1d95b8u: goto label_1d95b8;
        case 0x1d95bcu: goto label_1d95bc;
        case 0x1d95c0u: goto label_1d95c0;
        case 0x1d95c4u: goto label_1d95c4;
        case 0x1d95c8u: goto label_1d95c8;
        case 0x1d95ccu: goto label_1d95cc;
        case 0x1d95d0u: goto label_1d95d0;
        case 0x1d95d4u: goto label_1d95d4;
        case 0x1d95d8u: goto label_1d95d8;
        case 0x1d95dcu: goto label_1d95dc;
        case 0x1d95e0u: goto label_1d95e0;
        case 0x1d95e4u: goto label_1d95e4;
        case 0x1d95e8u: goto label_1d95e8;
        case 0x1d95ecu: goto label_1d95ec;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95f4u: goto label_1d95f4;
        case 0x1d95f8u: goto label_1d95f8;
        case 0x1d95fcu: goto label_1d95fc;
        case 0x1d9600u: goto label_1d9600;
        case 0x1d9604u: goto label_1d9604;
        case 0x1d9608u: goto label_1d9608;
        case 0x1d960cu: goto label_1d960c;
        case 0x1d9610u: goto label_1d9610;
        case 0x1d9614u: goto label_1d9614;
        case 0x1d9618u: goto label_1d9618;
        case 0x1d961cu: goto label_1d961c;
        case 0x1d9620u: goto label_1d9620;
        case 0x1d9624u: goto label_1d9624;
        case 0x1d9628u: goto label_1d9628;
        case 0x1d962cu: goto label_1d962c;
        case 0x1d9630u: goto label_1d9630;
        case 0x1d9634u: goto label_1d9634;
        case 0x1d9638u: goto label_1d9638;
        case 0x1d963cu: goto label_1d963c;
        case 0x1d9640u: goto label_1d9640;
        case 0x1d9644u: goto label_1d9644;
        default: return;
    }

label_1d8e78:
    // 0x1d8e78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8e7c:
    // 0x1d8e7c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8e80:
    // 0x1d8e80: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8e84:
    // 0x1d8e84: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8e88:
    // 0x1d8e88: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8e8c:
    // 0x1d8e8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8e90:
    // 0x1d8e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e94:
    // 0x1d8e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e98:
    // 0x1d8e98: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8e9c:
    // 0x1d8e9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8ea0:
    // 0x1d8ea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8ea4:
    // 0x1d8ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8ea8:
    // 0x1d8ea8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8eac:
    // 0x1d8eac: 0xc066c72  jal         func_19B1C8
label_1d8eb0:
    if (ctx->pc == 0x1D8EB0u) {
        ctx->pc = 0x1D8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EACu;
        // 0x1d8eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8EB4u;
        goto label_1d8eb4;
    }
    ctx->pc = 0x1D8EACu;
    SET_GPR_U32(ctx, 31, 0x1D8EB4u);
    ctx->pc = 0x1D8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EACu;
    // 0x1d8eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8EACu, 0x1D8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EB4u;
label_1d8eb4:
    // 0x1d8eb4: 0xc077e84  jal         func_1DFA10
label_1d8eb8:
    if (ctx->pc == 0x1D8EB8u) {
        ctx->pc = 0x1D8EBCu;
        goto label_1d8ebc;
    }
    ctx->pc = 0x1D8EB4u;
    SET_GPR_U32(ctx, 31, 0x1D8EBCu);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D8EBCu;
label_1d8ebc:
    // 0x1d8ebc: 0xc077d90  jal         func_1DF640
label_1d8ec0:
    if (ctx->pc == 0x1D8EC0u) {
        ctx->pc = 0x1D8EC4u;
        goto label_1d8ec4;
    }
    ctx->pc = 0x1D8EBCu;
    SET_GPR_U32(ctx, 31, 0x1D8EC4u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D8EC4u;
label_1d8ec4:
    // 0x1d8ec4: 0xc077ab4  jal         func_1DEAD0
label_1d8ec8:
    if (ctx->pc == 0x1D8EC8u) {
        ctx->pc = 0x1D8ECCu;
        goto label_1d8ecc;
    }
    ctx->pc = 0x1D8EC4u;
    SET_GPR_U32(ctx, 31, 0x1D8ECCu);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D8ECCu;
label_1d8ecc:
    // 0x1d8ecc: 0xc077880  jal         func_1DE200
label_1d8ed0:
    if (ctx->pc == 0x1D8ED0u) {
        ctx->pc = 0x1D8ED4u;
        goto label_1d8ed4;
    }
    ctx->pc = 0x1D8ECCu;
    SET_GPR_U32(ctx, 31, 0x1D8ED4u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D8ED4u;
label_1d8ed4:
    // 0x1d8ed4: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d8ed8:
    // 0x1d8ed8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d8edc:
    if (ctx->pc == 0x1D8EDCu) {
        ctx->pc = 0x1D8EE0u;
        goto label_1d8ee0;
    }
    ctx->pc = 0x1D8ED8u;
    {
        const bool branch_taken_0x1d8ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ed8) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8EE0u;
label_1d8ee0:
    // 0x1d8ee0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8ee4:
    // 0x1d8ee4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8ee8:
    // 0x1d8ee8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8eec:
    // 0x1d8eec: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8ef0:
    // 0x1d8ef0: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8ef4:
    // 0x1d8ef4: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8ef8:
    // 0x1d8ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8efc:
    // 0x1d8efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f00:
    // 0x1d8f00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f04:
    // 0x1d8f04: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8f08:
    // 0x1d8f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f0c:
    // 0x1d8f0c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8f10:
    // 0x1d8f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f14:
    // 0x1d8f14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8f18:
    // 0x1d8f18: 0xc066c72  jal         func_19B1C8
label_1d8f1c:
    if (ctx->pc == 0x1D8F1Cu) {
        ctx->pc = 0x1D8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F18u;
        // 0x1d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F20u;
        goto label_1d8f20;
    }
    ctx->pc = 0x1D8F18u;
    SET_GPR_U32(ctx, 31, 0x1D8F20u);
    ctx->pc = 0x1D8F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F18u;
    // 0x1d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8F18u, 0x1D8F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F20u;
label_1d8f20:
    // 0x1d8f20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8f24:
    // 0x1d8f24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8f28:
    // 0x1d8f28: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8f2c:
    // 0x1d8f2c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8f30:
    // 0x1d8f30: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8f34:
    // 0x1d8f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f38:
    // 0x1d8f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f3c:
    // 0x1d8f3c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8f40:
    // 0x1d8f40: 0xc070e2c  jal         func_1C38B0
label_1d8f44:
    if (ctx->pc == 0x1D8F44u) {
        ctx->pc = 0x1D8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F40u;
        // 0x1d8f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F48u;
        goto label_1d8f48;
    }
    ctx->pc = 0x1D8F40u;
    SET_GPR_U32(ctx, 31, 0x1D8F48u);
    ctx->pc = 0x1D8F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F40u;
    // 0x1d8f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8F48u;
label_1d8f48:
    // 0x1d8f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f4c:
    // 0x1d8f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f50:
    // 0x1d8f50: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8f54:
    // 0x1d8f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f58:
    // 0x1d8f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f5c:
    // 0x1d8f5c: 0xc066c72  jal         func_19B1C8
label_1d8f60:
    if (ctx->pc == 0x1D8F60u) {
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F5Cu;
        // 0x1d8f60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F64u;
        goto label_1d8f64;
    }
    ctx->pc = 0x1D8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F64u);
    ctx->pc = 0x1D8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F5Cu;
    // 0x1d8f60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8F5Cu, 0x1D8F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F64u;
label_1d8f64:
    // 0x1d8f64: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8f68:
    // 0x1d8f68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8f6c:
    if (ctx->pc == 0x1D8F6Cu) {
        ctx->pc = 0x1D8F70u;
        goto label_1d8f70;
    }
    ctx->pc = 0x1D8F68u;
    {
        const bool branch_taken_0x1d8f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f68) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8F70u;
label_1d8f70:
    // 0x1d8f70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8f74:
    // 0x1d8f74: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8f78:
    // 0x1d8f78: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8f7c:
    // 0x1d8f7c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8f80:
    // 0x1d8f80: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8f84:
    // 0x1d8f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f88:
    // 0x1d8f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f8c:
    // 0x1d8f8c: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d8f90:
    // 0x1d8f90: 0xc070e2c  jal         func_1C38B0
label_1d8f94:
    if (ctx->pc == 0x1D8F94u) {
        ctx->pc = 0x1D8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F90u;
        // 0x1d8f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F98u;
        goto label_1d8f98;
    }
    ctx->pc = 0x1D8F90u;
    SET_GPR_U32(ctx, 31, 0x1D8F98u);
    ctx->pc = 0x1D8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F90u;
    // 0x1d8f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8F98u;
label_1d8f98:
    // 0x1d8f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f9c:
    // 0x1d8f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa0:
    // 0x1d8fa0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8fa4:
    // 0x1d8fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa8:
    // 0x1d8fa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fac:
    // 0x1d8fac: 0xc066c72  jal         func_19B1C8
label_1d8fb0:
    if (ctx->pc == 0x1D8FB0u) {
        ctx->pc = 0x1D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FACu;
        // 0x1d8fb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FB4u;
        goto label_1d8fb4;
    }
    ctx->pc = 0x1D8FACu;
    SET_GPR_U32(ctx, 31, 0x1D8FB4u);
    ctx->pc = 0x1D8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FACu;
    // 0x1d8fb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8FACu, 0x1D8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FB4u;
label_1d8fb4:
    // 0x1d8fb4: 0x0  nop
    ctx->pc = 0x1d8fb4u;
    // NOP
label_1d8fb8:
    // 0x1d8fb8: 0xc07a86c  jal         func_1EA1B0
label_1d8fbc:
    if (ctx->pc == 0x1D8FBCu) {
        ctx->pc = 0x1D8FC0u;
        goto label_1d8fc0;
    }
    ctx->pc = 0x1D8FB8u;
    SET_GPR_U32(ctx, 31, 0x1D8FC0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D8FC0u;
label_1d8fc0:
    // 0x1d8fc0: 0xc04e120  jal         func_138480
label_1d8fc4:
    if (ctx->pc == 0x1D8FC4u) {
        ctx->pc = 0x1D8FC8u;
        goto label_1d8fc8;
    }
    ctx->pc = 0x1D8FC0u;
    SET_GPR_U32(ctx, 31, 0x1D8FC8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D8FC0u, 0x1D8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FC8u;
label_1d8fc8:
    // 0x1d8fc8: 0xc05b578  jal         func_16D5E0
label_1d8fcc:
    if (ctx->pc == 0x1D8FCCu) {
        ctx->pc = 0x1D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FC8u;
        // 0x1d8fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FD0u;
        goto label_1d8fd0;
    }
    ctx->pc = 0x1D8FC8u;
    SET_GPR_U32(ctx, 31, 0x1D8FD0u);
    ctx->pc = 0x1D8FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FC8u;
    // 0x1d8fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D8FC8u, 0x1D8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FD0u;
label_1d8fd0:
    // 0x1d8fd0: 0xc060258  jal         func_180960
label_1d8fd4:
    if (ctx->pc == 0x1D8FD4u) {
        ctx->pc = 0x1D8FD8u;
        goto label_1d8fd8;
    }
    ctx->pc = 0x1D8FD0u;
    SET_GPR_U32(ctx, 31, 0x1D8FD8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D8FD0u, 0x1D8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FD8u;
label_1d8fd8:
    // 0x1d8fd8: 0x1000fdab  b           . + 4 + (-0x255 << 2)
label_1d8fdc:
    if (ctx->pc == 0x1D8FDCu) {
        ctx->pc = 0x1D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FD8u;
        // 0x1d8fdc: 0x8f828cf4  lw          $v0, -0x730C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FE0u;
        goto label_1d8fe0;
    }
    ctx->pc = 0x1D8FD8u;
    {
        const bool branch_taken_0x1d8fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FD8u;
        // 0x1d8fdc: 0x8f828cf4  lw          $v0, -0x730C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8fd8) {
            ctx->pc = 0x1D8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8688; return; }
        }
    }
    ctx->pc = 0x1D8FE0u;
label_1d8fe0:
    // 0x1d8fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fe4:
    // 0x1d8fe4: 0xc077350  jal         func_1DCD40
label_1d8fe8:
    if (ctx->pc == 0x1D8FE8u) {
        ctx->pc = 0x1D8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FE4u;
        // 0x1d8fe8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FECu;
        goto label_1d8fec;
    }
    ctx->pc = 0x1D8FE4u;
    SET_GPR_U32(ctx, 31, 0x1D8FECu);
    ctx->pc = 0x1D8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FE4u;
    // 0x1d8fe8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    { ctx->pc = 0x1dcd40; return; }
    ctx->pc = 0x1D8FECu;
label_1d8fec:
    // 0x1d8fec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ff0:
    // 0x1d8ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8ff4:
    // 0x1d8ff4: 0x1222fda3  beq         $s1, $v0, . + 4 + (-0x25D << 2)
label_1d8ff8:
    if (ctx->pc == 0x1D8FF8u) {
        ctx->pc = 0x1D8FFCu;
        goto label_1d8ffc;
    }
    ctx->pc = 0x1D8FF4u;
    {
        const bool branch_taken_0x1d8ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8ff4) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D8FFCu;
label_1d8ffc:
    // 0x1d8ffc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9000:
    // 0x1d9000: 0x1440fda0  bnez        $v0, . + 4 + (-0x260 << 2)
label_1d9004:
    if (ctx->pc == 0x1D9004u) {
        ctx->pc = 0x1D9008u;
        goto label_1d9008;
    }
    ctx->pc = 0x1D9000u;
    {
        const bool branch_taken_0x1d9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9000) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9008u;
label_1d9008:
    // 0x1d9008: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1d900c:
    // 0x1d900c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d9010:
    // 0x1d9010: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1d9014:
    if (ctx->pc == 0x1D9014u) {
        ctx->pc = 0x1D9018u;
        goto label_1d9018;
    }
    ctx->pc = 0x1D9010u;
    {
        const bool branch_taken_0x1d9010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9010) {
            ctx->pc = 0x1D9058u;
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9018u;
label_1d9018:
    // 0x1d9018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d901c:
    // 0x1d901c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1d9020:
    if (ctx->pc == 0x1D9020u) {
        ctx->pc = 0x1D9024u;
        goto label_1d9024;
    }
    ctx->pc = 0x1D901Cu;
    {
        const bool branch_taken_0x1d901c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d901c) {
            ctx->pc = 0x1D9030u;
            goto label_1d9030;
        }
    }
    ctx->pc = 0x1D9024u;
label_1d9024:
    // 0x1d9024: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d9028:
    // 0x1d9028: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_1d902c:
    if (ctx->pc == 0x1D902Cu) {
        ctx->pc = 0x1D9030u;
        goto label_1d9030;
    }
    ctx->pc = 0x1D9028u;
    {
        const bool branch_taken_0x1d9028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9028) {
            ctx->pc = 0x1D9058u;
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9030u;
label_1d9030:
    // 0x1d9030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9034:
    // 0x1d9034: 0xc077350  jal         func_1DCD40
label_1d9038:
    if (ctx->pc == 0x1D9038u) {
        ctx->pc = 0x1D9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9034u;
        // 0x1d9038: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D903Cu;
        goto label_1d903c;
    }
    ctx->pc = 0x1D9034u;
    SET_GPR_U32(ctx, 31, 0x1D903Cu);
    ctx->pc = 0x1D9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9034u;
    // 0x1d9038: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    { ctx->pc = 0x1dcd40; return; }
    ctx->pc = 0x1D903Cu;
label_1d903c:
    // 0x1d903c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d903cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9040:
    // 0x1d9040: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9044:
    // 0x1d9044: 0x1222fd8f  beq         $s1, $v0, . + 4 + (-0x271 << 2)
label_1d9048:
    if (ctx->pc == 0x1D9048u) {
        ctx->pc = 0x1D904Cu;
        goto label_1d904c;
    }
    ctx->pc = 0x1D9044u;
    {
        const bool branch_taken_0x1d9044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9044) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D904Cu;
label_1d904c:
    // 0x1d904c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9050:
    // 0x1d9050: 0x1440fd8c  bnez        $v0, . + 4 + (-0x274 << 2)
label_1d9054:
    if (ctx->pc == 0x1D9054u) {
        ctx->pc = 0x1D9058u;
        goto label_1d9058;
    }
    ctx->pc = 0x1D9050u;
    {
        const bool branch_taken_0x1d9050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9050) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9058u;
label_1d9058:
    // 0x1d9058: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d905c:
    // 0x1d905c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1d9060:
    if (ctx->pc == 0x1D9060u) {
        ctx->pc = 0x1D9064u;
        goto label_1d9064;
    }
    ctx->pc = 0x1D905Cu;
    {
        const bool branch_taken_0x1d905c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d905c) {
            ctx->pc = 0x1D90ECu;
            goto label_1d90ec;
        }
    }
    ctx->pc = 0x1D9064u;
label_1d9064:
    // 0x1d9064: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9068:
    // 0x1d9068: 0x16220020  bne         $s1, $v0, . + 4 + (0x20 << 2)
label_1d906c:
    if (ctx->pc == 0x1D906Cu) {
        ctx->pc = 0x1D9070u;
        goto label_1d9070;
    }
    ctx->pc = 0x1D9068u;
    {
        const bool branch_taken_0x1d9068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9068) {
            ctx->pc = 0x1D90ECu;
            goto label_1d90ec;
        }
    }
    ctx->pc = 0x1D9070u;
label_1d9070:
    // 0x1d9070: 0xc0569f0  jal         func_15A7C0
label_1d9074:
    if (ctx->pc == 0x1D9074u) {
        ctx->pc = 0x1D9078u;
        goto label_1d9078;
    }
    ctx->pc = 0x1D9070u;
    SET_GPR_U32(ctx, 31, 0x1D9078u);
    ctx->pc = 0x15A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A7C0u, 0x1D9070u, 0x1D9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9078u;
label_1d9078:
    // 0x1d9078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d907c:
    if (ctx->pc == 0x1D907Cu) {
        ctx->pc = 0x1D9080u;
        goto label_1d9080;
    }
    ctx->pc = 0x1D9078u;
    {
        const bool branch_taken_0x1d9078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9078) {
            ctx->pc = 0x1D90ACu;
            goto label_1d90ac;
        }
    }
    ctx->pc = 0x1D9080u;
label_1d9080:
    // 0x1d9080: 0xc077814  jal         func_1DE050
label_1d9084:
    if (ctx->pc == 0x1D9084u) {
        ctx->pc = 0x1D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9080u;
        // 0x1d9084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9088u;
        goto label_1d9088;
    }
    ctx->pc = 0x1D9080u;
    SET_GPR_U32(ctx, 31, 0x1D9088u);
    ctx->pc = 0x1D9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9080u;
    // 0x1d9084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D9088u;
label_1d9088:
    // 0x1d9088: 0xc076a1c  jal         func_1DA870
label_1d908c:
    if (ctx->pc == 0x1D908Cu) {
        ctx->pc = 0x1D908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9088u;
        // 0x1d908c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9090u;
        goto label_1d9090;
    }
    ctx->pc = 0x1D9088u;
    SET_GPR_U32(ctx, 31, 0x1D9090u);
    ctx->pc = 0x1D908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9088u;
    // 0x1d908c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA870u;
    { ctx->pc = 0x1da870; return; }
    ctx->pc = 0x1D9090u;
label_1d9090:
    // 0x1d9090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9094:
    // 0x1d9094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9098:
    // 0x1d9098: 0x1222fd7a  beq         $s1, $v0, . + 4 + (-0x286 << 2)
label_1d909c:
    if (ctx->pc == 0x1D909Cu) {
        ctx->pc = 0x1D90A0u;
        goto label_1d90a0;
    }
    ctx->pc = 0x1D9098u;
    {
        const bool branch_taken_0x1d9098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9098) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90A0u;
label_1d90a0:
    // 0x1d90a0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d90a4:
    // 0x1d90a4: 0x1440fd77  bnez        $v0, . + 4 + (-0x289 << 2)
label_1d90a8:
    if (ctx->pc == 0x1D90A8u) {
        ctx->pc = 0x1D90ACu;
        goto label_1d90ac;
    }
    ctx->pc = 0x1D90A4u;
    {
        const bool branch_taken_0x1d90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90a4) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90ACu;
label_1d90ac:
    // 0x1d90ac: 0x0  nop
    ctx->pc = 0x1d90acu;
    // NOP
label_1d90b0:
    // 0x1d90b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d90b4:
    // 0x1d90b4: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_1d90b8:
    if (ctx->pc == 0x1D90B8u) {
        ctx->pc = 0x1D90BCu;
        goto label_1d90bc;
    }
    ctx->pc = 0x1D90B4u;
    {
        const bool branch_taken_0x1d90b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d90b4) {
            ctx->pc = 0x1D90ECu;
            goto label_1d90ec;
        }
    }
    ctx->pc = 0x1D90BCu;
label_1d90bc:
    // 0x1d90bc: 0xc077814  jal         func_1DE050
label_1d90c0:
    if (ctx->pc == 0x1D90C0u) {
        ctx->pc = 0x1D90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90BCu;
        // 0x1d90c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90C4u;
        goto label_1d90c4;
    }
    ctx->pc = 0x1D90BCu;
    SET_GPR_U32(ctx, 31, 0x1D90C4u);
    ctx->pc = 0x1D90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90BCu;
    // 0x1d90c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D90C4u;
label_1d90c4:
    // 0x1d90c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d90c8:
    // 0x1d90c8: 0xc077024  jal         func_1DC090
label_1d90cc:
    if (ctx->pc == 0x1D90CCu) {
        ctx->pc = 0x1D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90C8u;
        // 0x1d90cc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90D0u;
        goto label_1d90d0;
    }
    ctx->pc = 0x1D90C8u;
    SET_GPR_U32(ctx, 31, 0x1D90D0u);
    ctx->pc = 0x1D90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90C8u;
    // 0x1d90cc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC090u;
    { ctx->pc = 0x1dc090; return; }
    ctx->pc = 0x1D90D0u;
label_1d90d0:
    // 0x1d90d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d90d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d90d4:
    // 0x1d90d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d90d8:
    // 0x1d90d8: 0x1222fd6a  beq         $s1, $v0, . + 4 + (-0x296 << 2)
label_1d90dc:
    if (ctx->pc == 0x1D90DCu) {
        ctx->pc = 0x1D90E0u;
        goto label_1d90e0;
    }
    ctx->pc = 0x1D90D8u;
    {
        const bool branch_taken_0x1d90d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d90d8) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90E0u;
label_1d90e0:
    // 0x1d90e0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d90e4:
    // 0x1d90e4: 0x1440fd67  bnez        $v0, . + 4 + (-0x299 << 2)
label_1d90e8:
    if (ctx->pc == 0x1D90E8u) {
        ctx->pc = 0x1D90ECu;
        goto label_1d90ec;
    }
    ctx->pc = 0x1D90E4u;
    {
        const bool branch_taken_0x1d90e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90e4) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90ECu;
label_1d90ec:
    // 0x1d90ec: 0x0  nop
    ctx->pc = 0x1d90ecu;
    // NOP
label_1d90f0:
    // 0x1d90f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d90f4:
    // 0x1d90f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1d90f8:
    if (ctx->pc == 0x1D90F8u) {
        ctx->pc = 0x1D90FCu;
        goto label_1d90fc;
    }
    ctx->pc = 0x1D90F4u;
    {
        const bool branch_taken_0x1d90f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90f4) {
            ctx->pc = 0x1D9168u;
            goto label_1d9168;
        }
    }
    ctx->pc = 0x1D90FCu;
label_1d90fc:
    // 0x1d90fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d9100:
    // 0x1d9100: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
label_1d9104:
    if (ctx->pc == 0x1D9104u) {
        ctx->pc = 0x1D9108u;
        goto label_1d9108;
    }
    ctx->pc = 0x1D9100u;
    {
        const bool branch_taken_0x1d9100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9100) {
            ctx->pc = 0x1D9168u;
            goto label_1d9168;
        }
    }
    ctx->pc = 0x1D9108u;
label_1d9108:
    // 0x1d9108: 0xc077814  jal         func_1DE050
label_1d910c:
    if (ctx->pc == 0x1D910Cu) {
        ctx->pc = 0x1D910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9108u;
        // 0x1d910c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9110u;
        goto label_1d9110;
    }
    ctx->pc = 0x1D9108u;
    SET_GPR_U32(ctx, 31, 0x1D9110u);
    ctx->pc = 0x1D910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9108u;
    // 0x1d910c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D9110u;
label_1d9110:
    // 0x1d9110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9114:
    // 0x1d9114: 0xc077024  jal         func_1DC090
label_1d9118:
    if (ctx->pc == 0x1D9118u) {
        ctx->pc = 0x1D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9114u;
        // 0x1d9118: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D911Cu;
        goto label_1d911c;
    }
    ctx->pc = 0x1D9114u;
    SET_GPR_U32(ctx, 31, 0x1D911Cu);
    ctx->pc = 0x1D9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9114u;
    // 0x1d9118: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC090u;
    { ctx->pc = 0x1dc090; return; }
    ctx->pc = 0x1D911Cu;
label_1d911c:
    // 0x1d911c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d911cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9120:
    // 0x1d9120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9124:
    // 0x1d9124: 0x1222fd57  beq         $s1, $v0, . + 4 + (-0x2A9 << 2)
label_1d9128:
    if (ctx->pc == 0x1D9128u) {
        ctx->pc = 0x1D912Cu;
        goto label_1d912c;
    }
    ctx->pc = 0x1D9124u;
    {
        const bool branch_taken_0x1d9124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9124) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D912Cu;
label_1d912c:
    // 0x1d912c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9130:
    // 0x1d9130: 0x1440fd54  bnez        $v0, . + 4 + (-0x2AC << 2)
label_1d9134:
    if (ctx->pc == 0x1D9134u) {
        ctx->pc = 0x1D9138u;
        goto label_1d9138;
    }
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9138u;
label_1d9138:
    // 0x1d9138: 0xc077814  jal         func_1DE050
label_1d913c:
    if (ctx->pc == 0x1D913Cu) {
        ctx->pc = 0x1D913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9138u;
        // 0x1d913c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9140u;
        goto label_1d9140;
    }
    ctx->pc = 0x1D9138u;
    SET_GPR_U32(ctx, 31, 0x1D9140u);
    ctx->pc = 0x1D913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9138u;
    // 0x1d913c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D9140u;
label_1d9140:
    // 0x1d9140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9144:
    // 0x1d9144: 0xc076d1c  jal         func_1DB470
label_1d9148:
    if (ctx->pc == 0x1D9148u) {
        ctx->pc = 0x1D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9144u;
        // 0x1d9148: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D914Cu;
        goto label_1d914c;
    }
    ctx->pc = 0x1D9144u;
    SET_GPR_U32(ctx, 31, 0x1D914Cu);
    ctx->pc = 0x1D9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9144u;
    // 0x1d9148: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB470u;
    { ctx->pc = 0x1db470; return; }
    ctx->pc = 0x1D914Cu;
label_1d914c:
    // 0x1d914c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d914cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9150:
    // 0x1d9150: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9154:
    // 0x1d9154: 0x1222fd4b  beq         $s1, $v0, . + 4 + (-0x2B5 << 2)
label_1d9158:
    if (ctx->pc == 0x1D9158u) {
        ctx->pc = 0x1D915Cu;
        goto label_1d915c;
    }
    ctx->pc = 0x1D9154u;
    {
        const bool branch_taken_0x1d9154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9154) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D915Cu;
label_1d915c:
    // 0x1d915c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9160:
    // 0x1d9160: 0x1440fd48  bnez        $v0, . + 4 + (-0x2B8 << 2)
label_1d9164:
    if (ctx->pc == 0x1D9164u) {
        ctx->pc = 0x1D9168u;
        goto label_1d9168;
    }
    ctx->pc = 0x1D9160u;
    {
        const bool branch_taken_0x1d9160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9160) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9168u;
label_1d9168:
    // 0x1d9168: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d916c:
    // 0x1d916c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1d9170:
    if (ctx->pc == 0x1D9170u) {
        ctx->pc = 0x1D9174u;
        goto label_1d9174;
    }
    ctx->pc = 0x1D916Cu;
    {
        const bool branch_taken_0x1d916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d916c) {
            ctx->pc = 0x1D91B0u;
            goto label_1d91b0;
        }
    }
    ctx->pc = 0x1D9174u;
label_1d9174:
    // 0x1d9174: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d9178:
    // 0x1d9178: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_1d917c:
    if (ctx->pc == 0x1D917Cu) {
        ctx->pc = 0x1D9180u;
        goto label_1d9180;
    }
    ctx->pc = 0x1D9178u;
    {
        const bool branch_taken_0x1d9178 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9178) {
            ctx->pc = 0x1D91B0u;
            goto label_1d91b0;
        }
    }
    ctx->pc = 0x1D9180u;
label_1d9180:
    // 0x1d9180: 0xc077814  jal         func_1DE050
label_1d9184:
    if (ctx->pc == 0x1D9184u) {
        ctx->pc = 0x1D9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9180u;
        // 0x1d9184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9188u;
        goto label_1d9188;
    }
    ctx->pc = 0x1D9180u;
    SET_GPR_U32(ctx, 31, 0x1D9188u);
    ctx->pc = 0x1D9184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9180u;
    // 0x1d9184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D9188u;
label_1d9188:
    // 0x1d9188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d918c:
    // 0x1d918c: 0xc077024  jal         func_1DC090
label_1d9190:
    if (ctx->pc == 0x1D9190u) {
        ctx->pc = 0x1D9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D918Cu;
        // 0x1d9190: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9194u;
        goto label_1d9194;
    }
    ctx->pc = 0x1D918Cu;
    SET_GPR_U32(ctx, 31, 0x1D9194u);
    ctx->pc = 0x1D9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D918Cu;
    // 0x1d9190: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC090u;
    { ctx->pc = 0x1dc090; return; }
    ctx->pc = 0x1D9194u;
label_1d9194:
    // 0x1d9194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9198:
    // 0x1d9198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d919c:
    // 0x1d919c: 0x1222fd39  beq         $s1, $v0, . + 4 + (-0x2C7 << 2)
label_1d91a0:
    if (ctx->pc == 0x1D91A0u) {
        ctx->pc = 0x1D91A4u;
        goto label_1d91a4;
    }
    ctx->pc = 0x1D919Cu;
    {
        const bool branch_taken_0x1d919c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d919c) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D91A4u;
label_1d91a4:
    // 0x1d91a4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d91a8:
    // 0x1d91a8: 0x1440fd36  bnez        $v0, . + 4 + (-0x2CA << 2)
label_1d91ac:
    if (ctx->pc == 0x1D91ACu) {
        ctx->pc = 0x1D91B0u;
        goto label_1d91b0;
    }
    ctx->pc = 0x1D91A8u;
    {
        const bool branch_taken_0x1d91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91a8) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D91B0u;
label_1d91b0:
    // 0x1d91b0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d91b4:
    // 0x1d91b4: 0x1440016c  bnez        $v0, . + 4 + (0x16C << 2)
label_1d91b8:
    if (ctx->pc == 0x1D91B8u) {
        ctx->pc = 0x1D91BCu;
        goto label_1d91bc;
    }
    ctx->pc = 0x1D91B4u;
    {
        const bool branch_taken_0x1d91b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91b4) {
            ctx->pc = 0x1D9768u;
            { ctx->pc = 0x1d9768; return; }
        }
    }
    ctx->pc = 0x1D91BCu;
label_1d91bc:
    // 0x1d91bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d91c0:
    // 0x1d91c0: 0x16220169  bne         $s1, $v0, . + 4 + (0x169 << 2)
label_1d91c4:
    if (ctx->pc == 0x1D91C4u) {
        ctx->pc = 0x1D91C8u;
        goto label_1d91c8;
    }
    ctx->pc = 0x1D91C0u;
    {
        const bool branch_taken_0x1d91c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d91c0) {
            ctx->pc = 0x1D9768u;
            { ctx->pc = 0x1d9768; return; }
        }
    }
    ctx->pc = 0x1D91C8u;
label_1d91c8:
    // 0x1d91c8: 0xc04439c  jal         func_110E70
label_1d91cc:
    if (ctx->pc == 0x1D91CCu) {
        ctx->pc = 0x1D91D0u;
        goto label_1d91d0;
    }
    ctx->pc = 0x1D91C8u;
    SET_GPR_U32(ctx, 31, 0x1D91D0u);
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x1D91C8u, 0x1D91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91D0u;
label_1d91d0:
    // 0x1d91d0: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
label_1d91d4:
    if (ctx->pc == 0x1D91D4u) {
        ctx->pc = 0x1D91D8u;
        goto label_1d91d8;
    }
    ctx->pc = 0x1D91D0u;
    {
        const bool branch_taken_0x1d91d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91d0) {
            ctx->pc = 0x1D9768u;
            { ctx->pc = 0x1d9768; return; }
        }
    }
    ctx->pc = 0x1D91D8u;
label_1d91d8:
    // 0x1d91d8: 0xc08fec8  jal         func_23FB20
label_1d91dc:
    if (ctx->pc == 0x1D91DCu) {
        ctx->pc = 0x1D91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91D8u;
        // 0x1d91dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91E0u;
        goto label_1d91e0;
    }
    ctx->pc = 0x1D91D8u;
    SET_GPR_U32(ctx, 31, 0x1D91E0u);
    ctx->pc = 0x1D91DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91D8u;
    // 0x1d91dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    { ctx->pc = 0x23fb20; return; }
    ctx->pc = 0x1D91E0u;
label_1d91e0:
    // 0x1d91e0: 0xc08fee8  jal         func_23FBA0
label_1d91e4:
    if (ctx->pc == 0x1D91E4u) {
        ctx->pc = 0x1D91E8u;
        goto label_1d91e8;
    }
    ctx->pc = 0x1D91E0u;
    SET_GPR_U32(ctx, 31, 0x1D91E8u);
    ctx->pc = 0x23FBA0u;
    { ctx->pc = 0x23fba0; return; }
    ctx->pc = 0x1D91E8u;
label_1d91e8:
    // 0x1d91e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d91e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d91ec:
    // 0x1d91ec: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d91ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d91f0:
    // 0x1d91f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d91f4:
    if (ctx->pc == 0x1D91F4u) {
        ctx->pc = 0x1D91F8u;
        goto label_1d91f8;
    }
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D9200u;
            goto label_1d9200;
        }
    }
    ctx->pc = 0x1D91F8u;
label_1d91f8:
    // 0x1d91f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d91fc:
    if (ctx->pc == 0x1D91FCu) {
        ctx->pc = 0x1D91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91F8u;
        // 0x1d91fc: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9200u;
        goto label_1d9200;
    }
    ctx->pc = 0x1D91F8u;
    {
        const bool branch_taken_0x1d91f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91F8u;
        // 0x1d91fc: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91f8) {
            ctx->pc = 0x1D920Cu;
            goto label_1d920c;
        }
    }
    ctx->pc = 0x1D9200u;
label_1d9200:
    // 0x1d9200: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d9204:
    // 0x1d9204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9208:
    // 0x1d9208: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d920c:
    // 0x1d920c: 0x0  nop
    ctx->pc = 0x1d920cu;
    // NOP
label_1d9210:
    // 0x1d9210: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d9214:
    // 0x1d9214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d9218:
    if (ctx->pc == 0x1D9218u) {
        ctx->pc = 0x1D921Cu;
        goto label_1d921c;
    }
    ctx->pc = 0x1D9214u;
    {
        const bool branch_taken_0x1d9214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9214) {
            ctx->pc = 0x1D9228u;
            goto label_1d9228;
        }
    }
    ctx->pc = 0x1D921Cu;
label_1d921c:
    // 0x1d921c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d9220:
    // 0x1d9220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9224:
    // 0x1d9224: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d9228:
    // 0x1d9228: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d922c:
    // 0x1d922c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d9230:
    if (ctx->pc == 0x1D9230u) {
        ctx->pc = 0x1D9234u;
        goto label_1d9234;
    }
    ctx->pc = 0x1D922Cu;
    {
        const bool branch_taken_0x1d922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d922c) {
            ctx->pc = 0x1D9290u;
            goto label_1d9290;
        }
    }
    ctx->pc = 0x1D9234u;
label_1d9234:
    // 0x1d9234: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d9238:
    // 0x1d9238: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d923c:
    // 0x1d923c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d9240:
    if (ctx->pc == 0x1D9240u) {
        ctx->pc = 0x1D9244u;
        goto label_1d9244;
    }
    ctx->pc = 0x1D923Cu;
    {
        const bool branch_taken_0x1d923c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d923c) {
            ctx->pc = 0x1D9264u;
            goto label_1d9264;
        }
    }
    ctx->pc = 0x1D9244u;
label_1d9244:
    // 0x1d9244: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d9248:
    // 0x1d9248: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d924c:
    // 0x1d924c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d9250:
    if (ctx->pc == 0x1D9250u) {
        ctx->pc = 0x1D9254u;
        goto label_1d9254;
    }
    ctx->pc = 0x1D924Cu;
    {
        const bool branch_taken_0x1d924c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d924c) {
            ctx->pc = 0x1D925Cu;
            goto label_1d925c;
        }
    }
    ctx->pc = 0x1D9254u;
label_1d9254:
    // 0x1d9254: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9258:
    if (ctx->pc == 0x1D9258u) {
        ctx->pc = 0x1D9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9254u;
        // 0x1d9258: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D925Cu;
        goto label_1d925c;
    }
    ctx->pc = 0x1D9254u;
    {
        const bool branch_taken_0x1d9254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9254u;
        // 0x1d9258: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9254) {
            ctx->pc = 0x1D9264u;
            goto label_1d9264;
        }
    }
    ctx->pc = 0x1D925Cu;
label_1d925c:
    // 0x1d925c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d9260:
    // 0x1d9260: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d9264:
    // 0x1d9264: 0x0  nop
    ctx->pc = 0x1d9264u;
    // NOP
label_1d9268:
    // 0x1d9268: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d926c:
    // 0x1d926c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d9270:
    if (ctx->pc == 0x1D9270u) {
        ctx->pc = 0x1D9274u;
        goto label_1d9274;
    }
    ctx->pc = 0x1D926Cu;
    {
        const bool branch_taken_0x1d926c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d926c) {
            ctx->pc = 0x1D9290u;
            goto label_1d9290;
        }
    }
    ctx->pc = 0x1D9274u;
label_1d9274:
    // 0x1d9274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d9278:
    // 0x1d9278: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d927c:
    // 0x1d927c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9280:
    // 0x1d9280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9284:
    if (ctx->pc == 0x1D9284u) {
        ctx->pc = 0x1D9288u;
        goto label_1d9288;
    }
    ctx->pc = 0x1D9280u;
    {
        const bool branch_taken_0x1d9280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9280) {
            ctx->pc = 0x1D9290u;
            goto label_1d9290;
        }
    }
    ctx->pc = 0x1D9288u;
label_1d9288:
    // 0x1d9288: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d928c:
    // 0x1d928c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d928cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d9290:
    // 0x1d9290: 0xc077a7c  jal         func_1DE9F0
label_1d9294:
    if (ctx->pc == 0x1D9294u) {
        ctx->pc = 0x1D9298u;
        goto label_1d9298;
    }
    ctx->pc = 0x1D9290u;
    SET_GPR_U32(ctx, 31, 0x1D9298u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D9298u;
label_1d9298:
    // 0x1d9298: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d929c:
    // 0x1d929c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d92a0:
    // 0x1d92a0: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d92a4:
    if (ctx->pc == 0x1D92A4u) {
        ctx->pc = 0x1D92A8u;
        goto label_1d92a8;
    }
    ctx->pc = 0x1D92A0u;
    {
        const bool branch_taken_0x1d92a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d92a0) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D92A8u;
label_1d92a8:
    // 0x1d92a8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d92ac:
    // 0x1d92ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d92acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d92b0:
    // 0x1d92b0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d92b4:
    if (ctx->pc == 0x1D92B4u) {
        ctx->pc = 0x1D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92B0u;
        // 0x1d92b4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92B8u;
        goto label_1d92b8;
    }
    ctx->pc = 0x1D92B0u;
    {
        const bool branch_taken_0x1d92b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92B0u;
        // 0x1d92b4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92b0) {
            ctx->pc = 0x1D92D8u;
            goto label_1d92d8;
        }
    }
    ctx->pc = 0x1D92B8u;
label_1d92b8:
    // 0x1d92b8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d92bc:
    // 0x1d92bc: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d92bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d92c0:
    // 0x1d92c0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d92c4:
    if (ctx->pc == 0x1D92C4u) {
        ctx->pc = 0x1D92C8u;
        goto label_1d92c8;
    }
    ctx->pc = 0x1D92C0u;
    {
        const bool branch_taken_0x1d92c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d92c0) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D92C8u;
label_1d92c8:
    // 0x1d92c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d92cc:
    // 0x1d92cc: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d92d0:
    // 0x1d92d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d92d4:
    if (ctx->pc == 0x1D92D4u) {
        ctx->pc = 0x1D92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D0u;
        // 0x1d92d4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92D8u;
        goto label_1d92d8;
    }
    ctx->pc = 0x1D92D0u;
    {
        const bool branch_taken_0x1d92d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D0u;
        // 0x1d92d4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92d0) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D92D8u;
label_1d92d8:
    // 0x1d92d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d92dc:
    // 0x1d92dc: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d92e0:
    if (ctx->pc == 0x1D92E0u) {
        ctx->pc = 0x1D92E4u;
        goto label_1d92e4;
    }
    ctx->pc = 0x1D92DCu;
    {
        const bool branch_taken_0x1d92dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d92dc) {
            ctx->pc = 0x1D9304u;
            goto label_1d9304;
        }
    }
    ctx->pc = 0x1D92E4u;
label_1d92e4:
    // 0x1d92e4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d92e8:
    // 0x1d92e8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d92e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d92ec:
    // 0x1d92ec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d92f0:
    if (ctx->pc == 0x1D92F0u) {
        ctx->pc = 0x1D92F4u;
        goto label_1d92f4;
    }
    ctx->pc = 0x1D92ECu;
    {
        const bool branch_taken_0x1d92ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d92ec) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D92F4u;
label_1d92f4:
    // 0x1d92f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d92f8:
    // 0x1d92f8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d92fc:
    // 0x1d92fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d9300:
    if (ctx->pc == 0x1D9300u) {
        ctx->pc = 0x1D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92FCu;
        // 0x1d9300: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9304u;
        goto label_1d9304;
    }
    ctx->pc = 0x1D92FCu;
    {
        const bool branch_taken_0x1d92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92FCu;
        // 0x1d9300: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92fc) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D9304u;
label_1d9304:
    // 0x1d9304: 0x0  nop
    ctx->pc = 0x1d9304u;
    // NOP
label_1d9308:
    // 0x1d9308: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d930c:
    // 0x1d930c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d9310:
    if (ctx->pc == 0x1D9310u) {
        ctx->pc = 0x1D9314u;
        goto label_1d9314;
    }
    ctx->pc = 0x1D930Cu;
    {
        const bool branch_taken_0x1d930c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d930c) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D9314u;
label_1d9314:
    // 0x1d9314: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9318:
    // 0x1d9318: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d9318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d931c:
    // 0x1d931c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9320:
    if (ctx->pc == 0x1D9320u) {
        ctx->pc = 0x1D9324u;
        goto label_1d9324;
    }
    ctx->pc = 0x1D931Cu;
    {
        const bool branch_taken_0x1d931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d931c) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D9324u;
label_1d9324:
    // 0x1d9324: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d9324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d9328:
    // 0x1d9328: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d932c:
    // 0x1d932c: 0x0  nop
    ctx->pc = 0x1d932cu;
    // NOP
label_1d9330:
    // 0x1d9330: 0xc07a9d8  jal         func_1EA760
label_1d9334:
    if (ctx->pc == 0x1D9334u) {
        ctx->pc = 0x1D9338u;
        goto label_1d9338;
    }
    ctx->pc = 0x1D9330u;
    SET_GPR_U32(ctx, 31, 0x1D9338u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D9338u;
label_1d9338:
    // 0x1d9338: 0xc04e168  jal         func_1385A0
label_1d933c:
    if (ctx->pc == 0x1D933Cu) {
        ctx->pc = 0x1D9340u;
        goto label_1d9340;
    }
    ctx->pc = 0x1D9338u;
    SET_GPR_U32(ctx, 31, 0x1D9340u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D9338u, 0x1D9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9340u;
label_1d9340:
    // 0x1d9340: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9344:
    // 0x1d9344: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9348:
    // 0x1d9348: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d934c:
    // 0x1d934c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9350:
    // 0x1d9350: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d9354:
    // 0x1d9354: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d9358:
    // 0x1d9358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d935c:
    // 0x1d935c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d935cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9360:
    // 0x1d9360: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9364:
    // 0x1d9364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9368:
    // 0x1d9368: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d936c:
    // 0x1d936c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9370:
    // 0x1d9370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9374:
    // 0x1d9374: 0xc066c72  jal         func_19B1C8
label_1d9378:
    if (ctx->pc == 0x1D9378u) {
        ctx->pc = 0x1D9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9374u;
        // 0x1d9378: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D937Cu;
        goto label_1d937c;
    }
    ctx->pc = 0x1D9374u;
    SET_GPR_U32(ctx, 31, 0x1D937Cu);
    ctx->pc = 0x1D9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9374u;
    // 0x1d9378: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9374u, 0x1D937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D937Cu;
label_1d937c:
    // 0x1d937c: 0xc077e84  jal         func_1DFA10
label_1d9380:
    if (ctx->pc == 0x1D9380u) {
        ctx->pc = 0x1D9384u;
        goto label_1d9384;
    }
    ctx->pc = 0x1D937Cu;
    SET_GPR_U32(ctx, 31, 0x1D9384u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D9384u;
label_1d9384:
    // 0x1d9384: 0xc077d90  jal         func_1DF640
label_1d9388:
    if (ctx->pc == 0x1D9388u) {
        ctx->pc = 0x1D938Cu;
        goto label_1d938c;
    }
    ctx->pc = 0x1D9384u;
    SET_GPR_U32(ctx, 31, 0x1D938Cu);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D938Cu;
label_1d938c:
    // 0x1d938c: 0xc077ab4  jal         func_1DEAD0
label_1d9390:
    if (ctx->pc == 0x1D9390u) {
        ctx->pc = 0x1D9394u;
        goto label_1d9394;
    }
    ctx->pc = 0x1D938Cu;
    SET_GPR_U32(ctx, 31, 0x1D9394u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D9394u;
label_1d9394:
    // 0x1d9394: 0xc077880  jal         func_1DE200
label_1d9398:
    if (ctx->pc == 0x1D9398u) {
        ctx->pc = 0x1D939Cu;
        goto label_1d939c;
    }
    ctx->pc = 0x1D9394u;
    SET_GPR_U32(ctx, 31, 0x1D939Cu);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D939Cu;
label_1d939c:
    // 0x1d939c: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d93a0:
    // 0x1d93a0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d93a4:
    if (ctx->pc == 0x1D93A4u) {
        ctx->pc = 0x1D93A8u;
        goto label_1d93a8;
    }
    ctx->pc = 0x1D93A0u;
    {
        const bool branch_taken_0x1d93a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93a0) {
            ctx->pc = 0x1D947Cu;
            goto label_1d947c;
        }
    }
    ctx->pc = 0x1D93A8u;
label_1d93a8:
    // 0x1d93a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d93a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d93ac:
    // 0x1d93ac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d93b0:
    // 0x1d93b0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d93b4:
    // 0x1d93b4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d93b8:
    // 0x1d93b8: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d93bc:
    // 0x1d93bc: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d93bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d93c0:
    // 0x1d93c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d93c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d93c4:
    // 0x1d93c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d93c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d93c8:
    // 0x1d93c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d93c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d93cc:
    // 0x1d93cc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d93d0:
    // 0x1d93d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d93d4:
    // 0x1d93d4: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d93d8:
    // 0x1d93d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d93dc:
    // 0x1d93dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d93e0:
    // 0x1d93e0: 0xc066c72  jal         func_19B1C8
label_1d93e4:
    if (ctx->pc == 0x1D93E4u) {
        ctx->pc = 0x1D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93E0u;
        // 0x1d93e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D93E8u;
        goto label_1d93e8;
    }
    ctx->pc = 0x1D93E0u;
    SET_GPR_U32(ctx, 31, 0x1D93E8u);
    ctx->pc = 0x1D93E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93E0u;
    // 0x1d93e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D93E0u, 0x1D93E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93E8u;
label_1d93e8:
    // 0x1d93e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d93ec:
    // 0x1d93ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d93f0:
    // 0x1d93f0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d93f4:
    // 0x1d93f4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d93f8:
    // 0x1d93f8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d93f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d93fc:
    // 0x1d93fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9400:
    // 0x1d9400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9404:
    // 0x1d9404: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d9404u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9408:
    // 0x1d9408: 0xc070e2c  jal         func_1C38B0
label_1d940c:
    if (ctx->pc == 0x1D940Cu) {
        ctx->pc = 0x1D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9408u;
        // 0x1d940c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9410u;
        goto label_1d9410;
    }
    ctx->pc = 0x1D9408u;
    SET_GPR_U32(ctx, 31, 0x1D9410u);
    ctx->pc = 0x1D940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9408u;
    // 0x1d940c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D9410u;
label_1d9410:
    // 0x1d9410: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d9410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9414:
    // 0x1d9414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9418:
    // 0x1d9418: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d941c:
    // 0x1d941c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d941cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9420:
    // 0x1d9420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9424:
    // 0x1d9424: 0xc066c72  jal         func_19B1C8
label_1d9428:
    if (ctx->pc == 0x1D9428u) {
        ctx->pc = 0x1D9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9424u;
        // 0x1d9428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D942Cu;
        goto label_1d942c;
    }
    ctx->pc = 0x1D9424u;
    SET_GPR_U32(ctx, 31, 0x1D942Cu);
    ctx->pc = 0x1D9428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9424u;
    // 0x1d9428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9424u, 0x1D942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D942Cu;
label_1d942c:
    // 0x1d942c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d9430:
    // 0x1d9430: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d9434:
    if (ctx->pc == 0x1D9434u) {
        ctx->pc = 0x1D9438u;
        goto label_1d9438;
    }
    ctx->pc = 0x1D9430u;
    {
        const bool branch_taken_0x1d9430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9430) {
            ctx->pc = 0x1D947Cu;
            goto label_1d947c;
        }
    }
    ctx->pc = 0x1D9438u;
label_1d9438:
    // 0x1d9438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d943c:
    // 0x1d943c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d9440:
    // 0x1d9440: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9444:
    // 0x1d9444: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d9448:
    // 0x1d9448: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d944c:
    // 0x1d944c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d944cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9450:
    // 0x1d9450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9454:
    // 0x1d9454: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1d9454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d9458:
    // 0x1d9458: 0xc070e2c  jal         func_1C38B0
label_1d945c:
    if (ctx->pc == 0x1D945Cu) {
        ctx->pc = 0x1D945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9458u;
        // 0x1d945c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9460u;
        goto label_1d9460;
    }
    ctx->pc = 0x1D9458u;
    SET_GPR_U32(ctx, 31, 0x1D9460u);
    ctx->pc = 0x1D945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9458u;
    // 0x1d945c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D9460u;
label_1d9460:
    // 0x1d9460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9464:
    // 0x1d9464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d9464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9468:
    // 0x1d9468: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d946c:
    // 0x1d946c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d946cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9470:
    // 0x1d9470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9474:
    // 0x1d9474: 0xc066c72  jal         func_19B1C8
label_1d9478:
    if (ctx->pc == 0x1D9478u) {
        ctx->pc = 0x1D9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9474u;
        // 0x1d9478: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D947Cu;
        goto label_1d947c;
    }
    ctx->pc = 0x1D9474u;
    SET_GPR_U32(ctx, 31, 0x1D947Cu);
    ctx->pc = 0x1D9478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9474u;
    // 0x1d9478: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9474u, 0x1D947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D947Cu;
label_1d947c:
    // 0x1d947c: 0x0  nop
    ctx->pc = 0x1d947cu;
    // NOP
label_1d9480:
    // 0x1d9480: 0xc07a86c  jal         func_1EA1B0
label_1d9484:
    if (ctx->pc == 0x1D9484u) {
        ctx->pc = 0x1D9488u;
        goto label_1d9488;
    }
    ctx->pc = 0x1D9480u;
    SET_GPR_U32(ctx, 31, 0x1D9488u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D9488u;
label_1d9488:
    // 0x1d9488: 0xc04e120  jal         func_138480
label_1d948c:
    if (ctx->pc == 0x1D948Cu) {
        ctx->pc = 0x1D9490u;
        goto label_1d9490;
    }
    ctx->pc = 0x1D9488u;
    SET_GPR_U32(ctx, 31, 0x1D9490u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D9488u, 0x1D9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9490u;
label_1d9490:
    // 0x1d9490: 0xc05b578  jal         func_16D5E0
label_1d9494:
    if (ctx->pc == 0x1D9494u) {
        ctx->pc = 0x1D9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9490u;
        // 0x1d9494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9498u;
        goto label_1d9498;
    }
    ctx->pc = 0x1D9490u;
    SET_GPR_U32(ctx, 31, 0x1D9498u);
    ctx->pc = 0x1D9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9490u;
    // 0x1d9494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D9490u, 0x1D9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9498u;
label_1d9498:
    // 0x1d9498: 0xc060258  jal         func_180960
label_1d949c:
    if (ctx->pc == 0x1D949Cu) {
        ctx->pc = 0x1D94A0u;
        goto label_1d94a0;
    }
    ctx->pc = 0x1D9498u;
    SET_GPR_U32(ctx, 31, 0x1D94A0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D9498u, 0x1D94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A0u;
label_1d94a0:
    // 0x1d94a0: 0x1220ff4f  beqz        $s1, . + 4 + (-0xB1 << 2)
label_1d94a4:
    if (ctx->pc == 0x1D94A4u) {
        ctx->pc = 0x1D94A8u;
        goto label_1d94a8;
    }
    ctx->pc = 0x1D94A0u;
    {
        const bool branch_taken_0x1d94a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94a0) {
            ctx->pc = 0x1D91E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d91e0;
        }
    }
    ctx->pc = 0x1D94A8u;
label_1d94a8:
    // 0x1d94a8: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d94a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d94ac:
    // 0x1d94ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d94b0:
    if (ctx->pc == 0x1D94B0u) {
        ctx->pc = 0x1D94B4u;
        goto label_1d94b4;
    }
    ctx->pc = 0x1D94ACu;
    {
        const bool branch_taken_0x1d94ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94ac) {
            ctx->pc = 0x1D94BCu;
            goto label_1d94bc;
        }
    }
    ctx->pc = 0x1D94B4u;
label_1d94b4:
    // 0x1d94b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d94b8:
    if (ctx->pc == 0x1D94B8u) {
        ctx->pc = 0x1D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B4u;
        // 0x1d94b8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D94BCu;
        goto label_1d94bc;
    }
    ctx->pc = 0x1D94B4u;
    {
        const bool branch_taken_0x1d94b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B4u;
        // 0x1d94b8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b4) {
            ctx->pc = 0x1D94CCu;
            goto label_1d94cc;
        }
    }
    ctx->pc = 0x1D94BCu;
label_1d94bc:
    // 0x1d94bc: 0x0  nop
    ctx->pc = 0x1d94bcu;
    // NOP
label_1d94c0:
    // 0x1d94c0: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d94c4:
    // 0x1d94c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d94c8:
    // 0x1d94c8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d94cc:
    // 0x1d94cc: 0x0  nop
    ctx->pc = 0x1d94ccu;
    // NOP
label_1d94d0:
    // 0x1d94d0: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d94d4:
    // 0x1d94d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d94d8:
    if (ctx->pc == 0x1D94D8u) {
        ctx->pc = 0x1D94DCu;
        goto label_1d94dc;
    }
    ctx->pc = 0x1D94D4u;
    {
        const bool branch_taken_0x1d94d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94d4) {
            ctx->pc = 0x1D94E8u;
            goto label_1d94e8;
        }
    }
    ctx->pc = 0x1D94DCu;
label_1d94dc:
    // 0x1d94dc: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d94e0:
    // 0x1d94e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d94e4:
    // 0x1d94e4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d94e8:
    // 0x1d94e8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d94ec:
    // 0x1d94ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d94f0:
    if (ctx->pc == 0x1D94F0u) {
        ctx->pc = 0x1D94F4u;
        goto label_1d94f4;
    }
    ctx->pc = 0x1D94ECu;
    {
        const bool branch_taken_0x1d94ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94ec) {
            ctx->pc = 0x1D9550u;
            goto label_1d9550;
        }
    }
    ctx->pc = 0x1D94F4u;
label_1d94f4:
    // 0x1d94f4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d94f8:
    // 0x1d94f8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d94f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d94fc:
    // 0x1d94fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d9500:
    if (ctx->pc == 0x1D9500u) {
        ctx->pc = 0x1D9504u;
        goto label_1d9504;
    }
    ctx->pc = 0x1D94FCu;
    {
        const bool branch_taken_0x1d94fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94fc) {
            ctx->pc = 0x1D9524u;
            goto label_1d9524;
        }
    }
    ctx->pc = 0x1D9504u;
label_1d9504:
    // 0x1d9504: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d9508:
    // 0x1d9508: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d950c:
    // 0x1d950c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d9510:
    if (ctx->pc == 0x1D9510u) {
        ctx->pc = 0x1D9514u;
        goto label_1d9514;
    }
    ctx->pc = 0x1D950Cu;
    {
        const bool branch_taken_0x1d950c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d950c) {
            ctx->pc = 0x1D951Cu;
            goto label_1d951c;
        }
    }
    ctx->pc = 0x1D9514u;
label_1d9514:
    // 0x1d9514: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9518:
    if (ctx->pc == 0x1D9518u) {
        ctx->pc = 0x1D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9514u;
        // 0x1d9518: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D951Cu;
        goto label_1d951c;
    }
    ctx->pc = 0x1D9514u;
    {
        const bool branch_taken_0x1d9514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9514u;
        // 0x1d9518: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9514) {
            ctx->pc = 0x1D9524u;
            goto label_1d9524;
        }
    }
    ctx->pc = 0x1D951Cu;
label_1d951c:
    // 0x1d951c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d9520:
    // 0x1d9520: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d9524:
    // 0x1d9524: 0x0  nop
    ctx->pc = 0x1d9524u;
    // NOP
label_1d9528:
    // 0x1d9528: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d952c:
    // 0x1d952c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d9530:
    if (ctx->pc == 0x1D9530u) {
        ctx->pc = 0x1D9534u;
        goto label_1d9534;
    }
    ctx->pc = 0x1D952Cu;
    {
        const bool branch_taken_0x1d952c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d952c) {
            ctx->pc = 0x1D9550u;
            goto label_1d9550;
        }
    }
    ctx->pc = 0x1D9534u;
label_1d9534:
    // 0x1d9534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d9538:
    // 0x1d9538: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d953c:
    // 0x1d953c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9540:
    // 0x1d9540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9544:
    if (ctx->pc == 0x1D9544u) {
        ctx->pc = 0x1D9548u;
        goto label_1d9548;
    }
    ctx->pc = 0x1D9540u;
    {
        const bool branch_taken_0x1d9540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9540) {
            ctx->pc = 0x1D9550u;
            goto label_1d9550;
        }
    }
    ctx->pc = 0x1D9548u;
label_1d9548:
    // 0x1d9548: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d954c:
    // 0x1d954c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d954cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d9550:
    // 0x1d9550: 0xc077a7c  jal         func_1DE9F0
label_1d9554:
    if (ctx->pc == 0x1D9554u) {
        ctx->pc = 0x1D9558u;
        goto label_1d9558;
    }
    ctx->pc = 0x1D9550u;
    SET_GPR_U32(ctx, 31, 0x1D9558u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D9558u;
label_1d9558:
    // 0x1d9558: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d9558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d955c:
    // 0x1d955c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9560:
    // 0x1d9560: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d9564:
    if (ctx->pc == 0x1D9564u) {
        ctx->pc = 0x1D9568u;
        goto label_1d9568;
    }
    ctx->pc = 0x1D9560u;
    {
        const bool branch_taken_0x1d9560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9560) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D9568u;
label_1d9568:
    // 0x1d9568: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d956c:
    // 0x1d956c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9570:
    // 0x1d9570: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d9574:
    if (ctx->pc == 0x1D9574u) {
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9570u;
        // 0x1d9574: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9578u;
        goto label_1d9578;
    }
    ctx->pc = 0x1D9570u;
    {
        const bool branch_taken_0x1d9570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9570u;
        // 0x1d9574: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9570) {
            ctx->pc = 0x1D9598u;
            goto label_1d9598;
        }
    }
    ctx->pc = 0x1D9578u;
label_1d9578:
    // 0x1d9578: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d957c:
    // 0x1d957c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d957cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d9580:
    // 0x1d9580: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d9584:
    if (ctx->pc == 0x1D9584u) {
        ctx->pc = 0x1D9588u;
        goto label_1d9588;
    }
    ctx->pc = 0x1D9580u;
    {
        const bool branch_taken_0x1d9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9580) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D9588u;
label_1d9588:
    // 0x1d9588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d958c:
    // 0x1d958c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d958cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9590:
    // 0x1d9590: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d9594:
    if (ctx->pc == 0x1D9594u) {
        ctx->pc = 0x1D9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9590u;
        // 0x1d9594: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9598u;
        goto label_1d9598;
    }
    ctx->pc = 0x1D9590u;
    {
        const bool branch_taken_0x1d9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9590u;
        // 0x1d9594: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9590) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D9598u;
label_1d9598:
    // 0x1d9598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d959c:
    // 0x1d959c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d95a0:
    if (ctx->pc == 0x1D95A0u) {
        ctx->pc = 0x1D95A4u;
        goto label_1d95a4;
    }
    ctx->pc = 0x1D959Cu;
    {
        const bool branch_taken_0x1d959c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d959c) {
            ctx->pc = 0x1D95C4u;
            goto label_1d95c4;
        }
    }
    ctx->pc = 0x1D95A4u;
label_1d95a4:
    // 0x1d95a4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d95a8:
    // 0x1d95a8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d95a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d95ac:
    // 0x1d95ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d95b0:
    if (ctx->pc == 0x1D95B0u) {
        ctx->pc = 0x1D95B4u;
        goto label_1d95b4;
    }
    ctx->pc = 0x1D95ACu;
    {
        const bool branch_taken_0x1d95ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d95ac) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D95B4u;
label_1d95b4:
    // 0x1d95b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d95b8:
    // 0x1d95b8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d95bc:
    // 0x1d95bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d95c0:
    if (ctx->pc == 0x1D95C0u) {
        ctx->pc = 0x1D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95BCu;
        // 0x1d95c0: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95C4u;
        goto label_1d95c4;
    }
    ctx->pc = 0x1D95BCu;
    {
        const bool branch_taken_0x1d95bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95BCu;
        // 0x1d95c0: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95bc) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D95C4u;
label_1d95c4:
    // 0x1d95c4: 0x0  nop
    ctx->pc = 0x1d95c4u;
    // NOP
label_1d95c8:
    // 0x1d95c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d95cc:
    // 0x1d95cc: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d95d0:
    if (ctx->pc == 0x1D95D0u) {
        ctx->pc = 0x1D95D4u;
        goto label_1d95d4;
    }
    ctx->pc = 0x1D95CCu;
    {
        const bool branch_taken_0x1d95cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d95cc) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D95D4u;
label_1d95d4:
    // 0x1d95d4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d95d8:
    // 0x1d95d8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d95d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d95dc:
    // 0x1d95dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d95e0:
    if (ctx->pc == 0x1D95E0u) {
        ctx->pc = 0x1D95E4u;
        goto label_1d95e4;
    }
    ctx->pc = 0x1D95DCu;
    {
        const bool branch_taken_0x1d95dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d95dc) {
            ctx->pc = 0x1D95ECu;
            goto label_1d95ec;
        }
    }
    ctx->pc = 0x1D95E4u;
label_1d95e4:
    // 0x1d95e4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d95e8:
    // 0x1d95e8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d95ec:
    // 0x1d95ec: 0x0  nop
    ctx->pc = 0x1d95ecu;
    // NOP
label_1d95f0:
    // 0x1d95f0: 0xc07a9d8  jal         func_1EA760
label_1d95f4:
    if (ctx->pc == 0x1D95F4u) {
        ctx->pc = 0x1D95F8u;
        goto label_1d95f8;
    }
    ctx->pc = 0x1D95F0u;
    SET_GPR_U32(ctx, 31, 0x1D95F8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D95F8u;
label_1d95f8:
    // 0x1d95f8: 0xc04e168  jal         func_1385A0
label_1d95fc:
    if (ctx->pc == 0x1D95FCu) {
        ctx->pc = 0x1D9600u;
        goto label_1d9600;
    }
    ctx->pc = 0x1D95F8u;
    SET_GPR_U32(ctx, 31, 0x1D9600u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D95F8u, 0x1D9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9600u;
label_1d9600:
    // 0x1d9600: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9604:
    // 0x1d9604: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d9604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9608:
    // 0x1d9608: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d960c:
    // 0x1d960c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9610:
    // 0x1d9610: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d9614:
    // 0x1d9614: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d9614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d9618:
    // 0x1d9618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d961c:
    // 0x1d961c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d961cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9620:
    // 0x1d9620: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9624:
    // 0x1d9624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9628:
    // 0x1d9628: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d9628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d962c:
    // 0x1d962c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9630:
    // 0x1d9630: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9634:
    // 0x1d9634: 0xc066c72  jal         func_19B1C8
label_1d9638:
    if (ctx->pc == 0x1D9638u) {
        ctx->pc = 0x1D9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9634u;
        // 0x1d9638: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D963Cu;
        goto label_1d963c;
    }
    ctx->pc = 0x1D9634u;
    SET_GPR_U32(ctx, 31, 0x1D963Cu);
    ctx->pc = 0x1D9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9634u;
    // 0x1d9638: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9634u, 0x1D963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D963Cu;
label_1d963c:
    // 0x1d963c: 0xc077e84  jal         func_1DFA10
label_1d9640:
    if (ctx->pc == 0x1D9640u) {
        ctx->pc = 0x1D9644u;
        goto label_1d9644;
    }
    ctx->pc = 0x1D963Cu;
    SET_GPR_U32(ctx, 31, 0x1D9644u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D9644u;
label_1d9644:
    // 0x1d9644: 0xc077d90  jal         func_1DF640
    ctx->pc = 0x1d9648u;
    return;
}

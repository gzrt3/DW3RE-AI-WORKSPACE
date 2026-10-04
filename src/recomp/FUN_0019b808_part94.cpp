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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c8e98u: goto label_1c8e98;
        case 0x1c8e9cu: goto label_1c8e9c;
        case 0x1c8ea0u: goto label_1c8ea0;
        case 0x1c8ea4u: goto label_1c8ea4;
        case 0x1c8ea8u: goto label_1c8ea8;
        case 0x1c8eacu: goto label_1c8eac;
        case 0x1c8eb0u: goto label_1c8eb0;
        case 0x1c8eb4u: goto label_1c8eb4;
        case 0x1c8eb8u: goto label_1c8eb8;
        case 0x1c8ebcu: goto label_1c8ebc;
        case 0x1c8ec0u: goto label_1c8ec0;
        case 0x1c8ec4u: goto label_1c8ec4;
        case 0x1c8ec8u: goto label_1c8ec8;
        case 0x1c8eccu: goto label_1c8ecc;
        case 0x1c8ed0u: goto label_1c8ed0;
        case 0x1c8ed4u: goto label_1c8ed4;
        case 0x1c8ed8u: goto label_1c8ed8;
        case 0x1c8edcu: goto label_1c8edc;
        case 0x1c8ee0u: goto label_1c8ee0;
        case 0x1c8ee4u: goto label_1c8ee4;
        case 0x1c8ee8u: goto label_1c8ee8;
        case 0x1c8eecu: goto label_1c8eec;
        case 0x1c8ef0u: goto label_1c8ef0;
        case 0x1c8ef4u: goto label_1c8ef4;
        case 0x1c8ef8u: goto label_1c8ef8;
        case 0x1c8efcu: goto label_1c8efc;
        case 0x1c8f00u: goto label_1c8f00;
        case 0x1c8f04u: goto label_1c8f04;
        case 0x1c8f08u: goto label_1c8f08;
        case 0x1c8f0cu: goto label_1c8f0c;
        case 0x1c8f10u: goto label_1c8f10;
        case 0x1c8f14u: goto label_1c8f14;
        case 0x1c8f18u: goto label_1c8f18;
        case 0x1c8f1cu: goto label_1c8f1c;
        case 0x1c8f20u: goto label_1c8f20;
        case 0x1c8f24u: goto label_1c8f24;
        case 0x1c8f28u: goto label_1c8f28;
        case 0x1c8f2cu: goto label_1c8f2c;
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f34u: goto label_1c8f34;
        case 0x1c8f38u: goto label_1c8f38;
        case 0x1c8f3cu: goto label_1c8f3c;
        case 0x1c8f40u: goto label_1c8f40;
        case 0x1c8f44u: goto label_1c8f44;
        case 0x1c8f48u: goto label_1c8f48;
        case 0x1c8f4cu: goto label_1c8f4c;
        case 0x1c8f50u: goto label_1c8f50;
        case 0x1c8f54u: goto label_1c8f54;
        case 0x1c8f58u: goto label_1c8f58;
        case 0x1c8f5cu: goto label_1c8f5c;
        case 0x1c8f60u: goto label_1c8f60;
        case 0x1c8f64u: goto label_1c8f64;
        case 0x1c8f68u: goto label_1c8f68;
        case 0x1c8f6cu: goto label_1c8f6c;
        case 0x1c8f70u: goto label_1c8f70;
        case 0x1c8f74u: goto label_1c8f74;
        case 0x1c8f78u: goto label_1c8f78;
        case 0x1c8f7cu: goto label_1c8f7c;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f84u: goto label_1c8f84;
        case 0x1c8f88u: goto label_1c8f88;
        case 0x1c8f8cu: goto label_1c8f8c;
        case 0x1c8f90u: goto label_1c8f90;
        case 0x1c8f94u: goto label_1c8f94;
        case 0x1c8f98u: goto label_1c8f98;
        case 0x1c8f9cu: goto label_1c8f9c;
        case 0x1c8fa0u: goto label_1c8fa0;
        case 0x1c8fa4u: goto label_1c8fa4;
        case 0x1c8fa8u: goto label_1c8fa8;
        case 0x1c8facu: goto label_1c8fac;
        case 0x1c8fb0u: goto label_1c8fb0;
        case 0x1c8fb4u: goto label_1c8fb4;
        case 0x1c8fb8u: goto label_1c8fb8;
        case 0x1c8fbcu: goto label_1c8fbc;
        case 0x1c8fc0u: goto label_1c8fc0;
        case 0x1c8fc4u: goto label_1c8fc4;
        case 0x1c8fc8u: goto label_1c8fc8;
        case 0x1c8fccu: goto label_1c8fcc;
        case 0x1c8fd0u: goto label_1c8fd0;
        case 0x1c8fd4u: goto label_1c8fd4;
        case 0x1c8fd8u: goto label_1c8fd8;
        case 0x1c8fdcu: goto label_1c8fdc;
        case 0x1c8fe0u: goto label_1c8fe0;
        case 0x1c8fe4u: goto label_1c8fe4;
        case 0x1c8fe8u: goto label_1c8fe8;
        case 0x1c8fecu: goto label_1c8fec;
        case 0x1c8ff0u: goto label_1c8ff0;
        case 0x1c8ff4u: goto label_1c8ff4;
        case 0x1c8ff8u: goto label_1c8ff8;
        case 0x1c8ffcu: goto label_1c8ffc;
        case 0x1c9000u: goto label_1c9000;
        case 0x1c9004u: goto label_1c9004;
        case 0x1c9008u: goto label_1c9008;
        case 0x1c900cu: goto label_1c900c;
        case 0x1c9010u: goto label_1c9010;
        case 0x1c9014u: goto label_1c9014;
        case 0x1c9018u: goto label_1c9018;
        case 0x1c901cu: goto label_1c901c;
        case 0x1c9020u: goto label_1c9020;
        case 0x1c9024u: goto label_1c9024;
        case 0x1c9028u: goto label_1c9028;
        case 0x1c902cu: goto label_1c902c;
        case 0x1c9030u: goto label_1c9030;
        case 0x1c9034u: goto label_1c9034;
        case 0x1c9038u: goto label_1c9038;
        case 0x1c903cu: goto label_1c903c;
        case 0x1c9040u: goto label_1c9040;
        case 0x1c9044u: goto label_1c9044;
        case 0x1c9048u: goto label_1c9048;
        case 0x1c904cu: goto label_1c904c;
        case 0x1c9050u: goto label_1c9050;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c9058u: goto label_1c9058;
        case 0x1c905cu: goto label_1c905c;
        case 0x1c9060u: goto label_1c9060;
        case 0x1c9064u: goto label_1c9064;
        case 0x1c9068u: goto label_1c9068;
        case 0x1c906cu: goto label_1c906c;
        case 0x1c9070u: goto label_1c9070;
        case 0x1c9074u: goto label_1c9074;
        case 0x1c9078u: goto label_1c9078;
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9080u: goto label_1c9080;
        case 0x1c9084u: goto label_1c9084;
        case 0x1c9088u: goto label_1c9088;
        case 0x1c908cu: goto label_1c908c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c9094u: goto label_1c9094;
        case 0x1c9098u: goto label_1c9098;
        case 0x1c909cu: goto label_1c909c;
        case 0x1c90a0u: goto label_1c90a0;
        case 0x1c90a4u: goto label_1c90a4;
        case 0x1c90a8u: goto label_1c90a8;
        case 0x1c90acu: goto label_1c90ac;
        case 0x1c90b0u: goto label_1c90b0;
        case 0x1c90b4u: goto label_1c90b4;
        case 0x1c90b8u: goto label_1c90b8;
        case 0x1c90bcu: goto label_1c90bc;
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90c4u: goto label_1c90c4;
        case 0x1c90c8u: goto label_1c90c8;
        case 0x1c90ccu: goto label_1c90cc;
        case 0x1c90d0u: goto label_1c90d0;
        case 0x1c90d4u: goto label_1c90d4;
        case 0x1c90d8u: goto label_1c90d8;
        case 0x1c90dcu: goto label_1c90dc;
        case 0x1c90e0u: goto label_1c90e0;
        case 0x1c90e4u: goto label_1c90e4;
        case 0x1c90e8u: goto label_1c90e8;
        case 0x1c90ecu: goto label_1c90ec;
        case 0x1c90f0u: goto label_1c90f0;
        case 0x1c90f4u: goto label_1c90f4;
        case 0x1c90f8u: goto label_1c90f8;
        case 0x1c90fcu: goto label_1c90fc;
        case 0x1c9100u: goto label_1c9100;
        case 0x1c9104u: goto label_1c9104;
        case 0x1c9108u: goto label_1c9108;
        case 0x1c910cu: goto label_1c910c;
        case 0x1c9110u: goto label_1c9110;
        case 0x1c9114u: goto label_1c9114;
        case 0x1c9118u: goto label_1c9118;
        case 0x1c911cu: goto label_1c911c;
        case 0x1c9120u: goto label_1c9120;
        case 0x1c9124u: goto label_1c9124;
        case 0x1c9128u: goto label_1c9128;
        case 0x1c912cu: goto label_1c912c;
        case 0x1c9130u: goto label_1c9130;
        case 0x1c9134u: goto label_1c9134;
        case 0x1c9138u: goto label_1c9138;
        case 0x1c913cu: goto label_1c913c;
        case 0x1c9140u: goto label_1c9140;
        case 0x1c9144u: goto label_1c9144;
        case 0x1c9148u: goto label_1c9148;
        case 0x1c914cu: goto label_1c914c;
        case 0x1c9150u: goto label_1c9150;
        case 0x1c9154u: goto label_1c9154;
        case 0x1c9158u: goto label_1c9158;
        case 0x1c915cu: goto label_1c915c;
        case 0x1c9160u: goto label_1c9160;
        case 0x1c9164u: goto label_1c9164;
        case 0x1c9168u: goto label_1c9168;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9170u: goto label_1c9170;
        case 0x1c9174u: goto label_1c9174;
        case 0x1c9178u: goto label_1c9178;
        case 0x1c917cu: goto label_1c917c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c9184u: goto label_1c9184;
        case 0x1c9188u: goto label_1c9188;
        case 0x1c918cu: goto label_1c918c;
        case 0x1c9190u: goto label_1c9190;
        case 0x1c9194u: goto label_1c9194;
        case 0x1c9198u: goto label_1c9198;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a0u: goto label_1c91a0;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91a8u: goto label_1c91a8;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c91b0u: goto label_1c91b0;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91b8u: goto label_1c91b8;
        case 0x1c91bcu: goto label_1c91bc;
        case 0x1c91c0u: goto label_1c91c0;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91c8u: goto label_1c91c8;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91d0u: goto label_1c91d0;
        case 0x1c91d4u: goto label_1c91d4;
        case 0x1c91d8u: goto label_1c91d8;
        case 0x1c91dcu: goto label_1c91dc;
        case 0x1c91e0u: goto label_1c91e0;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c91e8u: goto label_1c91e8;
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c91f0u: goto label_1c91f0;
        case 0x1c91f4u: goto label_1c91f4;
        case 0x1c91f8u: goto label_1c91f8;
        case 0x1c91fcu: goto label_1c91fc;
        case 0x1c9200u: goto label_1c9200;
        case 0x1c9204u: goto label_1c9204;
        case 0x1c9208u: goto label_1c9208;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c9210u: goto label_1c9210;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9218u: goto label_1c9218;
        case 0x1c921cu: goto label_1c921c;
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9224u: goto label_1c9224;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c9234u: goto label_1c9234;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c923cu: goto label_1c923c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9248u: goto label_1c9248;
        case 0x1c924cu: goto label_1c924c;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9254u: goto label_1c9254;
        case 0x1c9258u: goto label_1c9258;
        case 0x1c925cu: goto label_1c925c;
        case 0x1c9260u: goto label_1c9260;
        case 0x1c9264u: goto label_1c9264;
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        case 0x1c928cu: goto label_1c928c;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c9294u: goto label_1c9294;
        case 0x1c9298u: goto label_1c9298;
        case 0x1c929cu: goto label_1c929c;
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        case 0x1c9310u: goto label_1c9310;
        case 0x1c9314u: goto label_1c9314;
        case 0x1c9318u: goto label_1c9318;
        case 0x1c931cu: goto label_1c931c;
        case 0x1c9320u: goto label_1c9320;
        case 0x1c9324u: goto label_1c9324;
        case 0x1c9328u: goto label_1c9328;
        case 0x1c932cu: goto label_1c932c;
        case 0x1c9330u: goto label_1c9330;
        case 0x1c9334u: goto label_1c9334;
        case 0x1c9338u: goto label_1c9338;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9340u: goto label_1c9340;
        case 0x1c9344u: goto label_1c9344;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c934cu: goto label_1c934c;
        case 0x1c9350u: goto label_1c9350;
        case 0x1c9354u: goto label_1c9354;
        case 0x1c9358u: goto label_1c9358;
        case 0x1c935cu: goto label_1c935c;
        case 0x1c9360u: goto label_1c9360;
        case 0x1c9364u: goto label_1c9364;
        case 0x1c9368u: goto label_1c9368;
        case 0x1c936cu: goto label_1c936c;
        case 0x1c9370u: goto label_1c9370;
        case 0x1c9374u: goto label_1c9374;
        case 0x1c9378u: goto label_1c9378;
        case 0x1c937cu: goto label_1c937c;
        case 0x1c9380u: goto label_1c9380;
        case 0x1c9384u: goto label_1c9384;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c938cu: goto label_1c938c;
        case 0x1c9390u: goto label_1c9390;
        case 0x1c9394u: goto label_1c9394;
        case 0x1c9398u: goto label_1c9398;
        case 0x1c939cu: goto label_1c939c;
        case 0x1c93a0u: goto label_1c93a0;
        case 0x1c93a4u: goto label_1c93a4;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93b0u: goto label_1c93b0;
        case 0x1c93b4u: goto label_1c93b4;
        case 0x1c93b8u: goto label_1c93b8;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c0u: goto label_1c93c0;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c93ccu: goto label_1c93cc;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93d4u: goto label_1c93d4;
        case 0x1c93d8u: goto label_1c93d8;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c93e0u: goto label_1c93e0;
        case 0x1c93e4u: goto label_1c93e4;
        case 0x1c93e8u: goto label_1c93e8;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93f0u: goto label_1c93f0;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c93f8u: goto label_1c93f8;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9404u: goto label_1c9404;
        case 0x1c9408u: goto label_1c9408;
        case 0x1c940cu: goto label_1c940c;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9414u: goto label_1c9414;
        case 0x1c9418u: goto label_1c9418;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9424u: goto label_1c9424;
        case 0x1c9428u: goto label_1c9428;
        case 0x1c942cu: goto label_1c942c;
        case 0x1c9430u: goto label_1c9430;
        case 0x1c9434u: goto label_1c9434;
        case 0x1c9438u: goto label_1c9438;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9444u: goto label_1c9444;
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
        default: return;
    }

label_1c8e98:
    if (ctx->pc == 0x1C8E98u) {
        ctx->pc = 0x1C8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E94u;
        // 0x1c8e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E9Cu;
        goto label_1c8e9c;
    }
    ctx->pc = 0x1C8E94u;
    SET_GPR_U32(ctx, 31, 0x1C8E9Cu);
    ctx->pc = 0x1C8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E94u;
    // 0x1c8e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E94u, 0x1C8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E9Cu;
label_1c8e9c:
    // 0x1c8e9c: 0xff828bc8  sd          $v0, -0x7438($gp)
    ctx->pc = 0x1c8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U64(ctx, 2));
label_1c8ea0:
    // 0x1c8ea0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ea4:
    // 0x1c8ea4: 0x240501bf  addiu       $a1, $zero, 0x1BF
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_1c8ea8:
    // 0x1c8ea8: 0xc060578  jal         func_1815E0
label_1c8eac:
    if (ctx->pc == 0x1C8EACu) {
        ctx->pc = 0x1C8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA8u;
        // 0x1c8eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EB0u;
        goto label_1c8eb0;
    }
    ctx->pc = 0x1C8EA8u;
    SET_GPR_U32(ctx, 31, 0x1C8EB0u);
    ctx->pc = 0x1C8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EA8u;
    // 0x1c8eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EA8u, 0x1C8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB0u;
label_1c8eb0:
    // 0x1c8eb0: 0xff828b78  sd          $v0, -0x7488($gp)
    ctx->pc = 0x1c8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U64(ctx, 2));
label_1c8eb4:
    // 0x1c8eb4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8eb8:
    // 0x1c8eb8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1c8eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1c8ebc:
    // 0x1c8ebc: 0xc060578  jal         func_1815E0
label_1c8ec0:
    if (ctx->pc == 0x1C8EC0u) {
        ctx->pc = 0x1C8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EBCu;
        // 0x1c8ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EC4u;
        goto label_1c8ec4;
    }
    ctx->pc = 0x1C8EBCu;
    SET_GPR_U32(ctx, 31, 0x1C8EC4u);
    ctx->pc = 0x1C8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBCu;
    // 0x1c8ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EBCu, 0x1C8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC4u;
label_1c8ec4:
    // 0x1c8ec4: 0xff828b70  sd          $v0, -0x7490($gp)
    ctx->pc = 0x1c8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U64(ctx, 2));
label_1c8ec8:
    // 0x1c8ec8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ecc:
    // 0x1c8ecc: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x1c8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
label_1c8ed0:
    // 0x1c8ed0: 0xc060578  jal         func_1815E0
label_1c8ed4:
    if (ctx->pc == 0x1C8ED4u) {
        ctx->pc = 0x1C8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ED0u;
        // 0x1c8ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8ED8u;
        goto label_1c8ed8;
    }
    ctx->pc = 0x1C8ED0u;
    SET_GPR_U32(ctx, 31, 0x1C8ED8u);
    ctx->pc = 0x1C8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED0u;
    // 0x1c8ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8ED0u, 0x1C8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED8u;
label_1c8ed8:
    // 0x1c8ed8: 0xff828b68  sd          $v0, -0x7498($gp)
    ctx->pc = 0x1c8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U64(ctx, 2));
label_1c8edc:
    // 0x1c8edc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ee0:
    // 0x1c8ee0: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1c8ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1c8ee4:
    // 0x1c8ee4: 0xc060578  jal         func_1815E0
label_1c8ee8:
    if (ctx->pc == 0x1C8EE8u) {
        ctx->pc = 0x1C8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE4u;
        // 0x1c8ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EECu;
        goto label_1c8eec;
    }
    ctx->pc = 0x1C8EE4u;
    SET_GPR_U32(ctx, 31, 0x1C8EECu);
    ctx->pc = 0x1C8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE4u;
    // 0x1c8ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EE4u, 0x1C8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EECu;
label_1c8eec:
    // 0x1c8eec: 0xff828b60  sd          $v0, -0x74A0($gp)
    ctx->pc = 0x1c8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U64(ctx, 2));
label_1c8ef0:
    // 0x1c8ef0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ef4:
    // 0x1c8ef4: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
label_1c8ef8:
    // 0x1c8ef8: 0xc060578  jal         func_1815E0
label_1c8efc:
    if (ctx->pc == 0x1C8EFCu) {
        ctx->pc = 0x1C8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF8u;
        // 0x1c8efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F00u;
        goto label_1c8f00;
    }
    ctx->pc = 0x1C8EF8u;
    SET_GPR_U32(ctx, 31, 0x1C8F00u);
    ctx->pc = 0x1C8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF8u;
    // 0x1c8efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EF8u, 0x1C8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F00u;
label_1c8f00:
    // 0x1c8f00: 0xff828b58  sd          $v0, -0x74A8($gp)
    ctx->pc = 0x1c8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U64(ctx, 2));
label_1c8f04:
    // 0x1c8f04: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f08:
    // 0x1c8f08: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x1c8f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
label_1c8f0c:
    // 0x1c8f0c: 0xc060578  jal         func_1815E0
label_1c8f10:
    if (ctx->pc == 0x1C8F10u) {
        ctx->pc = 0x1C8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F0Cu;
        // 0x1c8f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F14u;
        goto label_1c8f14;
    }
    ctx->pc = 0x1C8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F14u);
    ctx->pc = 0x1C8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F0Cu;
    // 0x1c8f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F0Cu, 0x1C8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F14u;
label_1c8f14:
    // 0x1c8f14: 0xff828b50  sd          $v0, -0x74B0($gp)
    ctx->pc = 0x1c8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U64(ctx, 2));
label_1c8f18:
    // 0x1c8f18: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f1c:
    // 0x1c8f1c: 0x240501c5  addiu       $a1, $zero, 0x1C5
    ctx->pc = 0x1c8f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
label_1c8f20:
    // 0x1c8f20: 0xc060578  jal         func_1815E0
label_1c8f24:
    if (ctx->pc == 0x1C8F24u) {
        ctx->pc = 0x1C8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F20u;
        // 0x1c8f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F28u;
        goto label_1c8f28;
    }
    ctx->pc = 0x1C8F20u;
    SET_GPR_U32(ctx, 31, 0x1C8F28u);
    ctx->pc = 0x1C8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F20u;
    // 0x1c8f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F20u, 0x1C8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F28u;
label_1c8f28:
    // 0x1c8f28: 0xff828b48  sd          $v0, -0x74B8($gp)
    ctx->pc = 0x1c8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937416), GPR_U64(ctx, 2));
label_1c8f2c:
    // 0x1c8f2c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f30:
    // 0x1c8f30: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
label_1c8f34:
    // 0x1c8f34: 0xc060578  jal         func_1815E0
label_1c8f38:
    if (ctx->pc == 0x1C8F38u) {
        ctx->pc = 0x1C8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F34u;
        // 0x1c8f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F3Cu;
        goto label_1c8f3c;
    }
    ctx->pc = 0x1C8F34u;
    SET_GPR_U32(ctx, 31, 0x1C8F3Cu);
    ctx->pc = 0x1C8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F34u;
    // 0x1c8f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F34u, 0x1C8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F3Cu;
label_1c8f3c:
    // 0x1c8f3c: 0xff828b40  sd          $v0, -0x74C0($gp)
    ctx->pc = 0x1c8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937408), GPR_U64(ctx, 2));
label_1c8f40:
    // 0x1c8f40: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f44:
    // 0x1c8f44: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x1c8f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
label_1c8f48:
    // 0x1c8f48: 0xc060578  jal         func_1815E0
label_1c8f4c:
    if (ctx->pc == 0x1C8F4Cu) {
        ctx->pc = 0x1C8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F48u;
        // 0x1c8f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F50u;
        goto label_1c8f50;
    }
    ctx->pc = 0x1C8F48u;
    SET_GPR_U32(ctx, 31, 0x1C8F50u);
    ctx->pc = 0x1C8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F48u;
    // 0x1c8f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F48u, 0x1C8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F50u;
label_1c8f50:
    // 0x1c8f50: 0xff828b38  sd          $v0, -0x74C8($gp)
    ctx->pc = 0x1c8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U64(ctx, 2));
label_1c8f54:
    // 0x1c8f54: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f58:
    // 0x1c8f58: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1c8f5c:
    // 0x1c8f5c: 0xc060578  jal         func_1815E0
label_1c8f60:
    if (ctx->pc == 0x1C8F60u) {
        ctx->pc = 0x1C8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F5Cu;
        // 0x1c8f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F64u;
        goto label_1c8f64;
    }
    ctx->pc = 0x1C8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F64u);
    ctx->pc = 0x1C8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F5Cu;
    // 0x1c8f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F5Cu, 0x1C8F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F64u;
label_1c8f64:
    // 0x1c8f64: 0xff828b30  sd          $v0, -0x74D0($gp)
    ctx->pc = 0x1c8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U64(ctx, 2));
label_1c8f68:
    // 0x1c8f68: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f6c:
    // 0x1c8f6c: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x1c8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
label_1c8f70:
    // 0x1c8f70: 0xc060578  jal         func_1815E0
label_1c8f74:
    if (ctx->pc == 0x1C8F74u) {
        ctx->pc = 0x1C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F70u;
        // 0x1c8f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F78u;
        goto label_1c8f78;
    }
    ctx->pc = 0x1C8F70u;
    SET_GPR_U32(ctx, 31, 0x1C8F78u);
    ctx->pc = 0x1C8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F70u;
    // 0x1c8f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F70u, 0x1C8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F78u;
label_1c8f78:
    // 0x1c8f78: 0xff828b28  sd          $v0, -0x74D8($gp)
    ctx->pc = 0x1c8f78u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U64(ctx, 2));
label_1c8f7c:
    // 0x1c8f7c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f80:
    // 0x1c8f80: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x1c8f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
label_1c8f84:
    // 0x1c8f84: 0xc060578  jal         func_1815E0
label_1c8f88:
    if (ctx->pc == 0x1C8F88u) {
        ctx->pc = 0x1C8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F84u;
        // 0x1c8f88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F8Cu;
        goto label_1c8f8c;
    }
    ctx->pc = 0x1C8F84u;
    SET_GPR_U32(ctx, 31, 0x1C8F8Cu);
    ctx->pc = 0x1C8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F84u;
    // 0x1c8f88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F84u, 0x1C8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F8Cu;
label_1c8f8c:
    // 0x1c8f8c: 0xff828b20  sd          $v0, -0x74E0($gp)
    ctx->pc = 0x1c8f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937376), GPR_U64(ctx, 2));
label_1c8f90:
    // 0x1c8f90: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8f94:
    // 0x1c8f94: 0x240501c5  addiu       $a1, $zero, 0x1C5
    ctx->pc = 0x1c8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
label_1c8f98:
    // 0x1c8f98: 0xc060578  jal         func_1815E0
label_1c8f9c:
    if (ctx->pc == 0x1C8F9Cu) {
        ctx->pc = 0x1C8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F98u;
        // 0x1c8f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FA0u;
        goto label_1c8fa0;
    }
    ctx->pc = 0x1C8F98u;
    SET_GPR_U32(ctx, 31, 0x1C8FA0u);
    ctx->pc = 0x1C8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F98u;
    // 0x1c8f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8F98u, 0x1C8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FA0u;
label_1c8fa0:
    // 0x1c8fa0: 0xff828b10  sd          $v0, -0x74F0($gp)
    ctx->pc = 0x1c8fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U64(ctx, 2));
label_1c8fa4:
    // 0x1c8fa4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8fa8:
    // 0x1c8fa8: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
label_1c8fac:
    // 0x1c8fac: 0xc060578  jal         func_1815E0
label_1c8fb0:
    if (ctx->pc == 0x1C8FB0u) {
        ctx->pc = 0x1C8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FACu;
        // 0x1c8fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FB4u;
        goto label_1c8fb4;
    }
    ctx->pc = 0x1C8FACu;
    SET_GPR_U32(ctx, 31, 0x1C8FB4u);
    ctx->pc = 0x1C8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FACu;
    // 0x1c8fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8FACu, 0x1C8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FB4u;
label_1c8fb4:
    // 0x1c8fb4: 0xff828b18  sd          $v0, -0x74E8($gp)
    ctx->pc = 0x1c8fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937368), GPR_U64(ctx, 2));
label_1c8fb8:
    // 0x1c8fb8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8fbc:
    // 0x1c8fbc: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
label_1c8fc0:
    // 0x1c8fc0: 0xc060578  jal         func_1815E0
label_1c8fc4:
    if (ctx->pc == 0x1C8FC4u) {
        ctx->pc = 0x1C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FC0u;
        // 0x1c8fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FC8u;
        goto label_1c8fc8;
    }
    ctx->pc = 0x1C8FC0u;
    SET_GPR_U32(ctx, 31, 0x1C8FC8u);
    ctx->pc = 0x1C8FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FC0u;
    // 0x1c8fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8FC0u, 0x1C8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FC8u;
label_1c8fc8:
    // 0x1c8fc8: 0xff828b08  sd          $v0, -0x74F8($gp)
    ctx->pc = 0x1c8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U64(ctx, 2));
label_1c8fcc:
    // 0x1c8fcc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8fd0:
    // 0x1c8fd0: 0x240501c8  addiu       $a1, $zero, 0x1C8
    ctx->pc = 0x1c8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
label_1c8fd4:
    // 0x1c8fd4: 0xc060578  jal         func_1815E0
label_1c8fd8:
    if (ctx->pc == 0x1C8FD8u) {
        ctx->pc = 0x1C8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FD4u;
        // 0x1c8fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FDCu;
        goto label_1c8fdc;
    }
    ctx->pc = 0x1C8FD4u;
    SET_GPR_U32(ctx, 31, 0x1C8FDCu);
    ctx->pc = 0x1C8FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FD4u;
    // 0x1c8fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8FD4u, 0x1C8FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FDCu;
label_1c8fdc:
    // 0x1c8fdc: 0xff828b00  sd          $v0, -0x7500($gp)
    ctx->pc = 0x1c8fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937344), GPR_U64(ctx, 2));
label_1c8fe0:
    // 0x1c8fe0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8fe4:
    // 0x1c8fe4: 0x240501c9  addiu       $a1, $zero, 0x1C9
    ctx->pc = 0x1c8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
label_1c8fe8:
    // 0x1c8fe8: 0xc060578  jal         func_1815E0
label_1c8fec:
    if (ctx->pc == 0x1C8FECu) {
        ctx->pc = 0x1C8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FE8u;
        // 0x1c8fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FF0u;
        goto label_1c8ff0;
    }
    ctx->pc = 0x1C8FE8u;
    SET_GPR_U32(ctx, 31, 0x1C8FF0u);
    ctx->pc = 0x1C8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FE8u;
    // 0x1c8fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8FE8u, 0x1C8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FF0u;
label_1c8ff0:
    // 0x1c8ff0: 0xff828af8  sd          $v0, -0x7508($gp)
    ctx->pc = 0x1c8ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U64(ctx, 2));
label_1c8ff4:
    // 0x1c8ff4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ff8:
    // 0x1c8ff8: 0x240501ca  addiu       $a1, $zero, 0x1CA
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
label_1c8ffc:
    // 0x1c8ffc: 0xc060578  jal         func_1815E0
label_1c9000:
    if (ctx->pc == 0x1C9000u) {
        ctx->pc = 0x1C9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FFCu;
        // 0x1c9000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9004u;
        goto label_1c9004;
    }
    ctx->pc = 0x1C8FFCu;
    SET_GPR_U32(ctx, 31, 0x1C9004u);
    ctx->pc = 0x1C9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FFCu;
    // 0x1c9000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8FFCu, 0x1C9004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9004u;
label_1c9004:
    // 0x1c9004: 0xff828af0  sd          $v0, -0x7510($gp)
    ctx->pc = 0x1c9004u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937328), GPR_U64(ctx, 2));
label_1c9008:
    // 0x1c9008: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c9008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c900c:
    // 0x1c900c: 0x240501cb  addiu       $a1, $zero, 0x1CB
    ctx->pc = 0x1c900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
label_1c9010:
    // 0x1c9010: 0xc060578  jal         func_1815E0
label_1c9014:
    if (ctx->pc == 0x1C9014u) {
        ctx->pc = 0x1C9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9010u;
        // 0x1c9014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9018u;
        goto label_1c9018;
    }
    ctx->pc = 0x1C9010u;
    SET_GPR_U32(ctx, 31, 0x1C9018u);
    ctx->pc = 0x1C9014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9010u;
    // 0x1c9014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9010u, 0x1C9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9018u;
label_1c9018:
    // 0x1c9018: 0xff828ad8  sd          $v0, -0x7528($gp)
    ctx->pc = 0x1c9018u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937304), GPR_U64(ctx, 2));
label_1c901c:
    // 0x1c901c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c9020:
    // 0x1c9020: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_1c9024:
    // 0x1c9024: 0xc060578  jal         func_1815E0
label_1c9028:
    if (ctx->pc == 0x1C9028u) {
        ctx->pc = 0x1C9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9024u;
        // 0x1c9028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C902Cu;
        goto label_1c902c;
    }
    ctx->pc = 0x1C9024u;
    SET_GPR_U32(ctx, 31, 0x1C902Cu);
    ctx->pc = 0x1C9028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9024u;
    // 0x1c9028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9024u, 0x1C902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C902Cu;
label_1c902c:
    // 0x1c902c: 0xff828ad0  sd          $v0, -0x7530($gp)
    ctx->pc = 0x1c902cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U64(ctx, 2));
label_1c9030:
    // 0x1c9030: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c9034:
    // 0x1c9034: 0x240501cd  addiu       $a1, $zero, 0x1CD
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
label_1c9038:
    // 0x1c9038: 0xc060578  jal         func_1815E0
label_1c903c:
    if (ctx->pc == 0x1C903Cu) {
        ctx->pc = 0x1C903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9038u;
        // 0x1c903c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9040u;
        goto label_1c9040;
    }
    ctx->pc = 0x1C9038u;
    SET_GPR_U32(ctx, 31, 0x1C9040u);
    ctx->pc = 0x1C903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9038u;
    // 0x1c903c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9038u, 0x1C9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9040u;
label_1c9040:
    // 0x1c9040: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9044:
    // 0x1c9044: 0xff828bb8  sd          $v0, -0x7448($gp)
    ctx->pc = 0x1c9044u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U64(ctx, 2));
label_1c9048:
    // 0x1c9048: 0xa0204950  sb          $zero, 0x4950($at)
    ctx->pc = 0x1c9048u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18768), (uint8_t)GPR_U32(ctx, 0));
label_1c904c:
    // 0x1c904c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9050:
    // 0x1c9050: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9054:
    // 0x1c9054: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c9058:
    // 0x1c9058: 0xa0224951  sb          $v0, 0x4951($at)
    ctx->pc = 0x1c9058u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18769), (uint8_t)GPR_U32(ctx, 2));
label_1c905c:
    // 0x1c905c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9060:
    // 0x1c9060: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9064:
    // 0x1c9064: 0x240c0028  addiu       $t4, $zero, 0x28
    ctx->pc = 0x1c9064u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c9068:
    // 0x1c9068: 0xa0224954  sb          $v0, 0x4954($at)
    ctx->pc = 0x1c9068u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18772), (uint8_t)GPR_U32(ctx, 2));
label_1c906c:
    // 0x1c906c: 0x240b002c  addiu       $t3, $zero, 0x2C
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1c9070:
    // 0x1c9070: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9074:
    // 0x1c9074: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1c9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c9078:
    // 0x1c9078: 0xa02d4952  sb          $t5, 0x4952($at)
    ctx->pc = 0x1c9078u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18770), (uint8_t)GPR_U32(ctx, 13));
label_1c907c:
    // 0x1c907c: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c9080:
    // 0x1c9080: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9084:
    // 0x1c9084: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x1c9084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1c9088:
    // 0x1c9088: 0xa02d4953  sb          $t5, 0x4953($at)
    ctx->pc = 0x1c9088u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18771), (uint8_t)GPR_U32(ctx, 13));
label_1c908c:
    // 0x1c908c: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1c908cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1c9090:
    // 0x1c9090: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9094:
    // 0x1c9094: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1c9098:
    // 0x1c9098: 0xa0234955  sb          $v1, 0x4955($at)
    ctx->pc = 0x1c9098u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18773), (uint8_t)GPR_U32(ctx, 3));
label_1c909c:
    // 0x1c909c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c90a0:
    // 0x1c90a0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90a4:
    // 0x1c90a4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1c90a8:
    // 0x1c90a8: 0xa0234a74  sb          $v1, 0x4A74($at)
    ctx->pc = 0x1c90a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19060), (uint8_t)GPR_U32(ctx, 3));
label_1c90ac:
    // 0x1c90ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c90b0:
    // 0x1c90b0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90b4:
    // 0x1c90b4: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1c90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1c90b8:
    // 0x1c90b8: 0xa02d4956  sb          $t5, 0x4956($at)
    ctx->pc = 0x1c90b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18774), (uint8_t)GPR_U32(ctx, 13));
label_1c90bc:
    // 0x1c90bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90c0:
    // 0x1c90c0: 0xa02d4957  sb          $t5, 0x4957($at)
    ctx->pc = 0x1c90c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18775), (uint8_t)GPR_U32(ctx, 13));
label_1c90c4:
    // 0x1c90c4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90c8:
    // 0x1c90c8: 0xa0224a75  sb          $v0, 0x4A75($at)
    ctx->pc = 0x1c90c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19061), (uint8_t)GPR_U32(ctx, 2));
label_1c90cc:
    // 0x1c90cc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90d0:
    // 0x1c90d0: 0xa022499c  sb          $v0, 0x499C($at)
    ctx->pc = 0x1c90d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18844), (uint8_t)GPR_U32(ctx, 2));
label_1c90d4:
    // 0x1c90d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90d8:
    // 0x1c90d8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1c90dc:
    // 0x1c90dc: 0xa02d4a76  sb          $t5, 0x4A76($at)
    ctx->pc = 0x1c90dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19062), (uint8_t)GPR_U32(ctx, 13));
label_1c90e0:
    // 0x1c90e0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90e4:
    // 0x1c90e4: 0xa02d4a77  sb          $t5, 0x4A77($at)
    ctx->pc = 0x1c90e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19063), (uint8_t)GPR_U32(ctx, 13));
label_1c90e8:
    // 0x1c90e8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90ec:
    // 0x1c90ec: 0xa02249a0  sb          $v0, 0x49A0($at)
    ctx->pc = 0x1c90ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18848), (uint8_t)GPR_U32(ctx, 2));
label_1c90f0:
    // 0x1c90f0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90f4:
    // 0x1c90f4: 0xa02d499d  sb          $t5, 0x499D($at)
    ctx->pc = 0x1c90f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18845), (uint8_t)GPR_U32(ctx, 13));
label_1c90f8:
    // 0x1c90f8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c90f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c90fc:
    // 0x1c90fc: 0xa02d499e  sb          $t5, 0x499E($at)
    ctx->pc = 0x1c90fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18846), (uint8_t)GPR_U32(ctx, 13));
label_1c9100:
    // 0x1c9100: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9104:
    // 0x1c9104: 0xa02d499f  sb          $t5, 0x499F($at)
    ctx->pc = 0x1c9104u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18847), (uint8_t)GPR_U32(ctx, 13));
label_1c9108:
    // 0x1c9108: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c910c:
    // 0x1c910c: 0xa02d497c  sb          $t5, 0x497C($at)
    ctx->pc = 0x1c910cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18812), (uint8_t)GPR_U32(ctx, 13));
label_1c9110:
    // 0x1c9110: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9114:
    // 0x1c9114: 0xa02c497d  sb          $t4, 0x497D($at)
    ctx->pc = 0x1c9114u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18813), (uint8_t)GPR_U32(ctx, 12));
label_1c9118:
    // 0x1c9118: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c911c:
    // 0x1c911c: 0xa02c4984  sb          $t4, 0x4984($at)
    ctx->pc = 0x1c911cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18820), (uint8_t)GPR_U32(ctx, 12));
label_1c9120:
    // 0x1c9120: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9124:
    // 0x1c9124: 0xa02d497e  sb          $t5, 0x497E($at)
    ctx->pc = 0x1c9124u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18814), (uint8_t)GPR_U32(ctx, 13));
label_1c9128:
    // 0x1c9128: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c912c:
    // 0x1c912c: 0xa02d497f  sb          $t5, 0x497F($at)
    ctx->pc = 0x1c912cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18815), (uint8_t)GPR_U32(ctx, 13));
label_1c9130:
    // 0x1c9130: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9134:
    // 0x1c9134: 0xa02b4985  sb          $t3, 0x4985($at)
    ctx->pc = 0x1c9134u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18821), (uint8_t)GPR_U32(ctx, 11));
label_1c9138:
    // 0x1c9138: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c913c:
    // 0x1c913c: 0xa02b498c  sb          $t3, 0x498C($at)
    ctx->pc = 0x1c913cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18828), (uint8_t)GPR_U32(ctx, 11));
label_1c9140:
    // 0x1c9140: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9144:
    // 0x1c9144: 0xa02d4986  sb          $t5, 0x4986($at)
    ctx->pc = 0x1c9144u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18822), (uint8_t)GPR_U32(ctx, 13));
label_1c9148:
    // 0x1c9148: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c914c:
    // 0x1c914c: 0xa02d4987  sb          $t5, 0x4987($at)
    ctx->pc = 0x1c914cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18823), (uint8_t)GPR_U32(ctx, 13));
label_1c9150:
    // 0x1c9150: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9154:
    // 0x1c9154: 0xa02a498d  sb          $t2, 0x498D($at)
    ctx->pc = 0x1c9154u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18829), (uint8_t)GPR_U32(ctx, 10));
label_1c9158:
    // 0x1c9158: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c915c:
    // 0x1c915c: 0xa02d498e  sb          $t5, 0x498E($at)
    ctx->pc = 0x1c915cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18830), (uint8_t)GPR_U32(ctx, 13));
label_1c9160:
    // 0x1c9160: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9164:
    // 0x1c9164: 0xa02d498f  sb          $t5, 0x498F($at)
    ctx->pc = 0x1c9164u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18831), (uint8_t)GPR_U32(ctx, 13));
label_1c9168:
    // 0x1c9168: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c916c:
    // 0x1c916c: 0xa02a49bc  sb          $t2, 0x49BC($at)
    ctx->pc = 0x1c916cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18876), (uint8_t)GPR_U32(ctx, 10));
label_1c9170:
    // 0x1c9170: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9174:
    // 0x1c9174: 0xa02a49bd  sb          $t2, 0x49BD($at)
    ctx->pc = 0x1c9174u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18877), (uint8_t)GPR_U32(ctx, 10));
label_1c9178:
    // 0x1c9178: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c917c:
    // 0x1c917c: 0xa02d49be  sb          $t5, 0x49BE($at)
    ctx->pc = 0x1c917cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18878), (uint8_t)GPR_U32(ctx, 13));
label_1c9180:
    // 0x1c9180: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9184:
    // 0x1c9184: 0xa02d49bf  sb          $t5, 0x49BF($at)
    ctx->pc = 0x1c9184u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18879), (uint8_t)GPR_U32(ctx, 13));
label_1c9188:
    // 0x1c9188: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c918c:
    // 0x1c918c: 0xa02a49c0  sb          $t2, 0x49C0($at)
    ctx->pc = 0x1c918cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18880), (uint8_t)GPR_U32(ctx, 10));
label_1c9190:
    // 0x1c9190: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9194:
    // 0x1c9194: 0xa02a49c1  sb          $t2, 0x49C1($at)
    ctx->pc = 0x1c9194u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18881), (uint8_t)GPR_U32(ctx, 10));
label_1c9198:
    // 0x1c9198: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c919c:
    // 0x1c919c: 0xa02d49c2  sb          $t5, 0x49C2($at)
    ctx->pc = 0x1c919cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18882), (uint8_t)GPR_U32(ctx, 13));
label_1c91a0:
    // 0x1c91a0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91a4:
    // 0x1c91a4: 0xa02d49c3  sb          $t5, 0x49C3($at)
    ctx->pc = 0x1c91a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18883), (uint8_t)GPR_U32(ctx, 13));
label_1c91a8:
    // 0x1c91a8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91ac:
    // 0x1c91ac: 0xa02a49c4  sb          $t2, 0x49C4($at)
    ctx->pc = 0x1c91acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18884), (uint8_t)GPR_U32(ctx, 10));
label_1c91b0:
    // 0x1c91b0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91b4:
    // 0x1c91b4: 0xa02a49c5  sb          $t2, 0x49C5($at)
    ctx->pc = 0x1c91b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18885), (uint8_t)GPR_U32(ctx, 10));
label_1c91b8:
    // 0x1c91b8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91bc:
    // 0x1c91bc: 0xa02d49c6  sb          $t5, 0x49C6($at)
    ctx->pc = 0x1c91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18886), (uint8_t)GPR_U32(ctx, 13));
label_1c91c0:
    // 0x1c91c0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91c4:
    // 0x1c91c4: 0xa02d49c7  sb          $t5, 0x49C7($at)
    ctx->pc = 0x1c91c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18887), (uint8_t)GPR_U32(ctx, 13));
label_1c91c8:
    // 0x1c91c8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91cc:
    // 0x1c91cc: 0xa02949c8  sb          $t1, 0x49C8($at)
    ctx->pc = 0x1c91ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18888), (uint8_t)GPR_U32(ctx, 9));
label_1c91d0:
    // 0x1c91d0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91d4:
    // 0x1c91d4: 0xa02949c9  sb          $t1, 0x49C9($at)
    ctx->pc = 0x1c91d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18889), (uint8_t)GPR_U32(ctx, 9));
label_1c91d8:
    // 0x1c91d8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91dc:
    // 0x1c91dc: 0xa02d49ca  sb          $t5, 0x49CA($at)
    ctx->pc = 0x1c91dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18890), (uint8_t)GPR_U32(ctx, 13));
label_1c91e0:
    // 0x1c91e0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91e4:
    // 0x1c91e4: 0xa02d49cb  sb          $t5, 0x49CB($at)
    ctx->pc = 0x1c91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18891), (uint8_t)GPR_U32(ctx, 13));
label_1c91e8:
    // 0x1c91e8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91ec:
    // 0x1c91ec: 0xa02949cc  sb          $t1, 0x49CC($at)
    ctx->pc = 0x1c91ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18892), (uint8_t)GPR_U32(ctx, 9));
label_1c91f0:
    // 0x1c91f0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91f4:
    // 0x1c91f4: 0xa02949cd  sb          $t1, 0x49CD($at)
    ctx->pc = 0x1c91f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18893), (uint8_t)GPR_U32(ctx, 9));
label_1c91f8:
    // 0x1c91f8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c91fc:
    // 0x1c91fc: 0xa02d49ce  sb          $t5, 0x49CE($at)
    ctx->pc = 0x1c91fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18894), (uint8_t)GPR_U32(ctx, 13));
label_1c9200:
    // 0x1c9200: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9204:
    // 0x1c9204: 0xa02d49cf  sb          $t5, 0x49CF($at)
    ctx->pc = 0x1c9204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18895), (uint8_t)GPR_U32(ctx, 13));
label_1c9208:
    // 0x1c9208: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c920c:
    // 0x1c920c: 0xa02949d0  sb          $t1, 0x49D0($at)
    ctx->pc = 0x1c920cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18896), (uint8_t)GPR_U32(ctx, 9));
label_1c9210:
    // 0x1c9210: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9214:
    // 0x1c9214: 0xa02949d1  sb          $t1, 0x49D1($at)
    ctx->pc = 0x1c9214u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18897), (uint8_t)GPR_U32(ctx, 9));
label_1c9218:
    // 0x1c9218: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c921c:
    // 0x1c921c: 0xa02d49d2  sb          $t5, 0x49D2($at)
    ctx->pc = 0x1c921cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18898), (uint8_t)GPR_U32(ctx, 13));
label_1c9220:
    // 0x1c9220: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9224:
    // 0x1c9224: 0xa02d49d3  sb          $t5, 0x49D3($at)
    ctx->pc = 0x1c9224u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18899), (uint8_t)GPR_U32(ctx, 13));
label_1c9228:
    // 0x1c9228: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c922c:
    // 0x1c922c: 0xa02949d4  sb          $t1, 0x49D4($at)
    ctx->pc = 0x1c922cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18900), (uint8_t)GPR_U32(ctx, 9));
label_1c9230:
    // 0x1c9230: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9234:
    // 0x1c9234: 0xa02949d5  sb          $t1, 0x49D5($at)
    ctx->pc = 0x1c9234u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18901), (uint8_t)GPR_U32(ctx, 9));
label_1c9238:
    // 0x1c9238: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c923c:
    // 0x1c923c: 0xa02d49d6  sb          $t5, 0x49D6($at)
    ctx->pc = 0x1c923cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18902), (uint8_t)GPR_U32(ctx, 13));
label_1c9240:
    // 0x1c9240: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9244:
    // 0x1c9244: 0xa02d49d7  sb          $t5, 0x49D7($at)
    ctx->pc = 0x1c9244u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18903), (uint8_t)GPR_U32(ctx, 13));
label_1c9248:
    // 0x1c9248: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c924c:
    // 0x1c924c: 0xa02949d8  sb          $t1, 0x49D8($at)
    ctx->pc = 0x1c924cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18904), (uint8_t)GPR_U32(ctx, 9));
label_1c9250:
    // 0x1c9250: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9254:
    // 0x1c9254: 0xa02949d9  sb          $t1, 0x49D9($at)
    ctx->pc = 0x1c9254u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18905), (uint8_t)GPR_U32(ctx, 9));
label_1c9258:
    // 0x1c9258: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c925c:
    // 0x1c925c: 0xa02d49da  sb          $t5, 0x49DA($at)
    ctx->pc = 0x1c925cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18906), (uint8_t)GPR_U32(ctx, 13));
label_1c9260:
    // 0x1c9260: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9264:
    // 0x1c9264: 0xa02d49db  sb          $t5, 0x49DB($at)
    ctx->pc = 0x1c9264u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18907), (uint8_t)GPR_U32(ctx, 13));
label_1c9268:
    // 0x1c9268: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c926c:
    // 0x1c926c: 0xa02949dc  sb          $t1, 0x49DC($at)
    ctx->pc = 0x1c926cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18908), (uint8_t)GPR_U32(ctx, 9));
label_1c9270:
    // 0x1c9270: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9274:
    // 0x1c9274: 0xa02949dd  sb          $t1, 0x49DD($at)
    ctx->pc = 0x1c9274u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18909), (uint8_t)GPR_U32(ctx, 9));
label_1c9278:
    // 0x1c9278: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c927c:
    // 0x1c927c: 0xa02d49de  sb          $t5, 0x49DE($at)
    ctx->pc = 0x1c927cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18910), (uint8_t)GPR_U32(ctx, 13));
label_1c9280:
    // 0x1c9280: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9284:
    // 0x1c9284: 0xa02d49df  sb          $t5, 0x49DF($at)
    ctx->pc = 0x1c9284u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18911), (uint8_t)GPR_U32(ctx, 13));
label_1c9288:
    // 0x1c9288: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c928c:
    // 0x1c928c: 0xa02849e0  sb          $t0, 0x49E0($at)
    ctx->pc = 0x1c928cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18912), (uint8_t)GPR_U32(ctx, 8));
label_1c9290:
    // 0x1c9290: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9294:
    // 0x1c9294: 0xa02849e1  sb          $t0, 0x49E1($at)
    ctx->pc = 0x1c9294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18913), (uint8_t)GPR_U32(ctx, 8));
label_1c9298:
    // 0x1c9298: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c929c:
    // 0x1c929c: 0xa02d49e2  sb          $t5, 0x49E2($at)
    ctx->pc = 0x1c929cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18914), (uint8_t)GPR_U32(ctx, 13));
label_1c92a0:
    // 0x1c92a0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92a4:
    // 0x1c92a4: 0xa02d49e3  sb          $t5, 0x49E3($at)
    ctx->pc = 0x1c92a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18915), (uint8_t)GPR_U32(ctx, 13));
label_1c92a8:
    // 0x1c92a8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92ac:
    // 0x1c92ac: 0xa02849e4  sb          $t0, 0x49E4($at)
    ctx->pc = 0x1c92acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18916), (uint8_t)GPR_U32(ctx, 8));
label_1c92b0:
    // 0x1c92b0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92b4:
    // 0x1c92b4: 0xa02849e5  sb          $t0, 0x49E5($at)
    ctx->pc = 0x1c92b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18917), (uint8_t)GPR_U32(ctx, 8));
label_1c92b8:
    // 0x1c92b8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92bc:
    // 0x1c92bc: 0xa02d49e6  sb          $t5, 0x49E6($at)
    ctx->pc = 0x1c92bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18918), (uint8_t)GPR_U32(ctx, 13));
label_1c92c0:
    // 0x1c92c0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92c4:
    // 0x1c92c4: 0xa02d49e7  sb          $t5, 0x49E7($at)
    ctx->pc = 0x1c92c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18919), (uint8_t)GPR_U32(ctx, 13));
label_1c92c8:
    // 0x1c92c8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92cc:
    // 0x1c92cc: 0xa02849e8  sb          $t0, 0x49E8($at)
    ctx->pc = 0x1c92ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18920), (uint8_t)GPR_U32(ctx, 8));
label_1c92d0:
    // 0x1c92d0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92d4:
    // 0x1c92d4: 0xa02849e9  sb          $t0, 0x49E9($at)
    ctx->pc = 0x1c92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18921), (uint8_t)GPR_U32(ctx, 8));
label_1c92d8:
    // 0x1c92d8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92dc:
    // 0x1c92dc: 0xa02d49ea  sb          $t5, 0x49EA($at)
    ctx->pc = 0x1c92dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18922), (uint8_t)GPR_U32(ctx, 13));
label_1c92e0:
    // 0x1c92e0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92e4:
    // 0x1c92e4: 0xa02d49eb  sb          $t5, 0x49EB($at)
    ctx->pc = 0x1c92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18923), (uint8_t)GPR_U32(ctx, 13));
label_1c92e8:
    // 0x1c92e8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92ec:
    // 0x1c92ec: 0xa02849ec  sb          $t0, 0x49EC($at)
    ctx->pc = 0x1c92ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18924), (uint8_t)GPR_U32(ctx, 8));
label_1c92f0:
    // 0x1c92f0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92f4:
    // 0x1c92f4: 0xa02849ed  sb          $t0, 0x49ED($at)
    ctx->pc = 0x1c92f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18925), (uint8_t)GPR_U32(ctx, 8));
label_1c92f8:
    // 0x1c92f8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c92fc:
    // 0x1c92fc: 0xa02d49ee  sb          $t5, 0x49EE($at)
    ctx->pc = 0x1c92fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18926), (uint8_t)GPR_U32(ctx, 13));
label_1c9300:
    // 0x1c9300: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9304:
    // 0x1c9304: 0xa02d49ef  sb          $t5, 0x49EF($at)
    ctx->pc = 0x1c9304u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18927), (uint8_t)GPR_U32(ctx, 13));
label_1c9308:
    // 0x1c9308: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c930c:
    // 0x1c930c: 0xa02849f0  sb          $t0, 0x49F0($at)
    ctx->pc = 0x1c930cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18928), (uint8_t)GPR_U32(ctx, 8));
label_1c9310:
    // 0x1c9310: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9314:
    // 0x1c9314: 0xa02849f1  sb          $t0, 0x49F1($at)
    ctx->pc = 0x1c9314u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18929), (uint8_t)GPR_U32(ctx, 8));
label_1c9318:
    // 0x1c9318: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c931c:
    // 0x1c931c: 0xa02d49f2  sb          $t5, 0x49F2($at)
    ctx->pc = 0x1c931cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18930), (uint8_t)GPR_U32(ctx, 13));
label_1c9320:
    // 0x1c9320: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9324:
    // 0x1c9324: 0xa02d49f3  sb          $t5, 0x49F3($at)
    ctx->pc = 0x1c9324u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18931), (uint8_t)GPR_U32(ctx, 13));
label_1c9328:
    // 0x1c9328: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c932c:
    // 0x1c932c: 0xa02849f4  sb          $t0, 0x49F4($at)
    ctx->pc = 0x1c932cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18932), (uint8_t)GPR_U32(ctx, 8));
label_1c9330:
    // 0x1c9330: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9334:
    // 0x1c9334: 0xa02849f5  sb          $t0, 0x49F5($at)
    ctx->pc = 0x1c9334u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18933), (uint8_t)GPR_U32(ctx, 8));
label_1c9338:
    // 0x1c9338: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c933c:
    // 0x1c933c: 0xa02d49f6  sb          $t5, 0x49F6($at)
    ctx->pc = 0x1c933cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18934), (uint8_t)GPR_U32(ctx, 13));
label_1c9340:
    // 0x1c9340: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9344:
    // 0x1c9344: 0xa02d49f7  sb          $t5, 0x49F7($at)
    ctx->pc = 0x1c9344u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18935), (uint8_t)GPR_U32(ctx, 13));
label_1c9348:
    // 0x1c9348: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c934c:
    // 0x1c934c: 0xa02749f8  sb          $a3, 0x49F8($at)
    ctx->pc = 0x1c934cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18936), (uint8_t)GPR_U32(ctx, 7));
label_1c9350:
    // 0x1c9350: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9354:
    // 0x1c9354: 0xa02749f9  sb          $a3, 0x49F9($at)
    ctx->pc = 0x1c9354u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18937), (uint8_t)GPR_U32(ctx, 7));
label_1c9358:
    // 0x1c9358: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c935c:
    // 0x1c935c: 0xa02d49fa  sb          $t5, 0x49FA($at)
    ctx->pc = 0x1c935cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18938), (uint8_t)GPR_U32(ctx, 13));
label_1c9360:
    // 0x1c9360: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9364:
    // 0x1c9364: 0xa02d49fb  sb          $t5, 0x49FB($at)
    ctx->pc = 0x1c9364u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18939), (uint8_t)GPR_U32(ctx, 13));
label_1c9368:
    // 0x1c9368: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c936c:
    // 0x1c936c: 0xa02649fc  sb          $a2, 0x49FC($at)
    ctx->pc = 0x1c936cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18940), (uint8_t)GPR_U32(ctx, 6));
label_1c9370:
    // 0x1c9370: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9374:
    // 0x1c9374: 0xa02649fd  sb          $a2, 0x49FD($at)
    ctx->pc = 0x1c9374u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18941), (uint8_t)GPR_U32(ctx, 6));
label_1c9378:
    // 0x1c9378: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c937c:
    // 0x1c937c: 0xa02d49fe  sb          $t5, 0x49FE($at)
    ctx->pc = 0x1c937cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18942), (uint8_t)GPR_U32(ctx, 13));
label_1c9380:
    // 0x1c9380: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9384:
    // 0x1c9384: 0xa02d49ff  sb          $t5, 0x49FF($at)
    ctx->pc = 0x1c9384u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18943), (uint8_t)GPR_U32(ctx, 13));
label_1c9388:
    // 0x1c9388: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c938c:
    // 0x1c938c: 0xa0254a0c  sb          $a1, 0x4A0C($at)
    ctx->pc = 0x1c938cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18956), (uint8_t)GPR_U32(ctx, 5));
label_1c9390:
    // 0x1c9390: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9394:
    // 0x1c9394: 0xa0254a0d  sb          $a1, 0x4A0D($at)
    ctx->pc = 0x1c9394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18957), (uint8_t)GPR_U32(ctx, 5));
label_1c9398:
    // 0x1c9398: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c939c:
    // 0x1c939c: 0xa02d4a0e  sb          $t5, 0x4A0E($at)
    ctx->pc = 0x1c939cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18958), (uint8_t)GPR_U32(ctx, 13));
label_1c93a0:
    // 0x1c93a0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93a4:
    // 0x1c93a4: 0xa02d4a0f  sb          $t5, 0x4A0F($at)
    ctx->pc = 0x1c93a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18959), (uint8_t)GPR_U32(ctx, 13));
label_1c93a8:
    // 0x1c93a8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93ac:
    // 0x1c93ac: 0xa0234a10  sb          $v1, 0x4A10($at)
    ctx->pc = 0x1c93acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18960), (uint8_t)GPR_U32(ctx, 3));
label_1c93b0:
    // 0x1c93b0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93b4:
    // 0x1c93b4: 0xa0234a11  sb          $v1, 0x4A11($at)
    ctx->pc = 0x1c93b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18961), (uint8_t)GPR_U32(ctx, 3));
label_1c93b8:
    // 0x1c93b8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93bc:
    // 0x1c93bc: 0xa02d4a12  sb          $t5, 0x4A12($at)
    ctx->pc = 0x1c93bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18962), (uint8_t)GPR_U32(ctx, 13));
label_1c93c0:
    // 0x1c93c0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93c4:
    // 0x1c93c4: 0xa02d4a13  sb          $t5, 0x4A13($at)
    ctx->pc = 0x1c93c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18963), (uint8_t)GPR_U32(ctx, 13));
label_1c93c8:
    // 0x1c93c8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93cc:
    // 0x1c93cc: 0xa02449a1  sb          $a0, 0x49A1($at)
    ctx->pc = 0x1c93ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18849), (uint8_t)GPR_U32(ctx, 4));
label_1c93d0:
    // 0x1c93d0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93d4:
    // 0x1c93d4: 0xa02d49a2  sb          $t5, 0x49A2($at)
    ctx->pc = 0x1c93d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18850), (uint8_t)GPR_U32(ctx, 13));
label_1c93d8:
    // 0x1c93d8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c93dc:
    // 0x1c93dc: 0xa02d49a3  sb          $t5, 0x49A3($at)
    ctx->pc = 0x1c93dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18851), (uint8_t)GPR_U32(ctx, 13));
label_1c93e0:
    // 0x1c93e0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c93e4:
    // 0x1c93e4: 0x8c3069b0  lw          $s0, 0x69B0($at)
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27056)));
label_1c93e8:
    // 0x1c93e8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c93ec:
    // 0x1c93ec: 0x8c3169b4  lw          $s1, 0x69B4($at)
    ctx->pc = 0x1c93ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27060)));
label_1c93f0:
    // 0x1c93f0: 0xc070080  jal         func_1C0200
label_1c93f4:
    if (ctx->pc == 0x1C93F4u) {
        ctx->pc = 0x1C93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93F0u;
        // 0x1c93f4: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93F8u;
        goto label_1c93f8;
    }
    ctx->pc = 0x1C93F0u;
    SET_GPR_U32(ctx, 31, 0x1C93F8u);
    ctx->pc = 0x1C93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93F0u;
    // 0x1c93f4: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C93F8u;
label_1c93f8:
    // 0x1c93f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c93f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c93fc:
    // 0x1c93fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c93fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9400:
    // 0x1c9400: 0xc041744  jal         func_105D10
label_1c9404:
    if (ctx->pc == 0x1C9404u) {
        ctx->pc = 0x1C9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9400u;
        // 0x1c9404: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9408u;
        goto label_1c9408;
    }
    ctx->pc = 0x1C9400u;
    SET_GPR_U32(ctx, 31, 0x1C9408u);
    ctx->pc = 0x1C9404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9400u;
    // 0x1c9404: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C9400u, 0x1C9408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9408u;
label_1c9408:
    // 0x1c9408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c940c:
    // 0x1c940c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c940cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9410:
    // 0x1c9410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9414:
    // 0x1c9414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9418:
    // 0x1c9418: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c941c:
    // 0x1c941c: 0x240801ce  addiu       $t0, $zero, 0x1CE
    ctx->pc = 0x1c941cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
label_1c9420:
    // 0x1c9420: 0xc0603d4  jal         func_180F50
label_1c9424:
    if (ctx->pc == 0x1C9424u) {
        ctx->pc = 0x1C9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9420u;
        // 0x1c9424: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9428u;
        goto label_1c9428;
    }
    ctx->pc = 0x1C9420u;
    SET_GPR_U32(ctx, 31, 0x1C9428u);
    ctx->pc = 0x1C9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9420u;
    // 0x1c9424: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C9420u, 0x1C9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9428u;
label_1c9428:
    // 0x1c9428: 0xff828c30  sd          $v0, -0x73D0($gp)
    ctx->pc = 0x1c9428u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937648), GPR_U64(ctx, 2));
label_1c942c:
    // 0x1c942c: 0xc070038  jal         func_1C00E0
label_1c9430:
    if (ctx->pc == 0x1C9430u) {
        ctx->pc = 0x1C9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C942Cu;
        // 0x1c9430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9434u;
        goto label_1c9434;
    }
    ctx->pc = 0x1C942Cu;
    SET_GPR_U32(ctx, 31, 0x1C9434u);
    ctx->pc = 0x1C9430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C942Cu;
    // 0x1c9430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9434u;
label_1c9434:
    // 0x1c9434: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c9438:
    // 0x1c9438: 0x240501cf  addiu       $a1, $zero, 0x1CF
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
label_1c943c:
    // 0x1c943c: 0xc060578  jal         func_1815E0
label_1c9440:
    if (ctx->pc == 0x1C9440u) {
        ctx->pc = 0x1C9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C943Cu;
        // 0x1c9440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9444u;
        goto label_1c9444;
    }
    ctx->pc = 0x1C943Cu;
    SET_GPR_U32(ctx, 31, 0x1C9444u);
    ctx->pc = 0x1C9440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C943Cu;
    // 0x1c9440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C943Cu, 0x1C9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9444u;
label_1c9444:
    // 0x1c9444: 0xff828c28  sd          $v0, -0x73D8($gp)
    ctx->pc = 0x1c9444u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937640), GPR_U64(ctx, 2));
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
    ctx->pc = 0x1c9668u;
    return;
}

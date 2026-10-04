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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part69(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19e750u: goto label_19e750;
        case 0x19e754u: goto label_19e754;
        case 0x19e758u: goto label_19e758;
        case 0x19e75cu: goto label_19e75c;
        case 0x19e760u: goto label_19e760;
        case 0x19e764u: goto label_19e764;
        case 0x19e768u: goto label_19e768;
        case 0x19e76cu: goto label_19e76c;
        case 0x19e770u: goto label_19e770;
        case 0x19e774u: goto label_19e774;
        case 0x19e778u: goto label_19e778;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e780u: goto label_19e780;
        case 0x19e784u: goto label_19e784;
        case 0x19e788u: goto label_19e788;
        case 0x19e78cu: goto label_19e78c;
        case 0x19e790u: goto label_19e790;
        case 0x19e794u: goto label_19e794;
        case 0x19e798u: goto label_19e798;
        case 0x19e79cu: goto label_19e79c;
        case 0x19e7a0u: goto label_19e7a0;
        case 0x19e7a4u: goto label_19e7a4;
        case 0x19e7a8u: goto label_19e7a8;
        case 0x19e7acu: goto label_19e7ac;
        case 0x19e7b0u: goto label_19e7b0;
        case 0x19e7b4u: goto label_19e7b4;
        case 0x19e7b8u: goto label_19e7b8;
        case 0x19e7bcu: goto label_19e7bc;
        case 0x19e7c0u: goto label_19e7c0;
        case 0x19e7c4u: goto label_19e7c4;
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e7ccu: goto label_19e7cc;
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d4u: goto label_19e7d4;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7dcu: goto label_19e7dc;
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        case 0x19e8f4u: goto label_19e8f4;
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        case 0x19e904u: goto label_19e904;
        case 0x19e908u: goto label_19e908;
        case 0x19e90cu: goto label_19e90c;
        case 0x19e910u: goto label_19e910;
        case 0x19e914u: goto label_19e914;
        case 0x19e918u: goto label_19e918;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e920u: goto label_19e920;
        case 0x19e924u: goto label_19e924;
        case 0x19e928u: goto label_19e928;
        case 0x19e92cu: goto label_19e92c;
        case 0x19e930u: goto label_19e930;
        case 0x19e934u: goto label_19e934;
        case 0x19e938u: goto label_19e938;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e940u: goto label_19e940;
        case 0x19e944u: goto label_19e944;
        case 0x19e948u: goto label_19e948;
        case 0x19e94cu: goto label_19e94c;
        case 0x19e950u: goto label_19e950;
        case 0x19e954u: goto label_19e954;
        case 0x19e958u: goto label_19e958;
        case 0x19e95cu: goto label_19e95c;
        case 0x19e960u: goto label_19e960;
        case 0x19e964u: goto label_19e964;
        case 0x19e968u: goto label_19e968;
        case 0x19e96cu: goto label_19e96c;
        case 0x19e970u: goto label_19e970;
        case 0x19e974u: goto label_19e974;
        case 0x19e978u: goto label_19e978;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e980u: goto label_19e980;
        case 0x19e984u: goto label_19e984;
        case 0x19e988u: goto label_19e988;
        case 0x19e98cu: goto label_19e98c;
        case 0x19e990u: goto label_19e990;
        case 0x19e994u: goto label_19e994;
        case 0x19e998u: goto label_19e998;
        case 0x19e99cu: goto label_19e99c;
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9a4u: goto label_19e9a4;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9acu: goto label_19e9ac;
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9b4u: goto label_19e9b4;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9c0u: goto label_19e9c0;
        case 0x19e9c4u: goto label_19e9c4;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9ccu: goto label_19e9cc;
        case 0x19e9d0u: goto label_19e9d0;
        case 0x19e9d4u: goto label_19e9d4;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9dcu: goto label_19e9dc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9e4u: goto label_19e9e4;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9ecu: goto label_19e9ec;
        case 0x19e9f0u: goto label_19e9f0;
        case 0x19e9f4u: goto label_19e9f4;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19e9fcu: goto label_19e9fc;
        case 0x19ea00u: goto label_19ea00;
        case 0x19ea04u: goto label_19ea04;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea14u: goto label_19ea14;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea1cu: goto label_19ea1c;
        case 0x19ea20u: goto label_19ea20;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea28u: goto label_19ea28;
        case 0x19ea2cu: goto label_19ea2c;
        case 0x19ea30u: goto label_19ea30;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea38u: goto label_19ea38;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea40u: goto label_19ea40;
        case 0x19ea44u: goto label_19ea44;
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea4cu: goto label_19ea4c;
        case 0x19ea50u: goto label_19ea50;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea5cu: goto label_19ea5c;
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        case 0x19eca8u: goto label_19eca8;
        case 0x19ecacu: goto label_19ecac;
        case 0x19ecb0u: goto label_19ecb0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecbcu: goto label_19ecbc;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecc4u: goto label_19ecc4;
        case 0x19ecc8u: goto label_19ecc8;
        case 0x19ecccu: goto label_19eccc;
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        default: return;
    }

label_19e750:
    // 0x19e750: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_19e754:
    // 0x19e754: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19e758:
    // 0x19e758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e75c:
    // 0x19e75c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e760:
    // 0x19e760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e764:
    // 0x19e764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e768:
    // 0x19e768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e76c:
    // 0x19e76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e770:
    // 0x19e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e774:
    // 0x19e774: 0x3e00008  jr          $ra
label_19e778:
    if (ctx->pc == 0x19E778u) {
        ctx->pc = 0x19E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E774u;
        // 0x19e778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E77Cu;
        goto label_19e77c;
    }
    ctx->pc = 0x19E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E774u;
        // 0x19e778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E77Cu;
label_19e77c:
    // 0x19e77c: 0x0  nop
    ctx->pc = 0x19e77cu;
    // NOP
label_19e780:
    // 0x19e780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19e784:
    // 0x19e784: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x19e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_19e788:
    // 0x19e788: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x19e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19e78c:
    // 0x19e78c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x19e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_19e790:
    // 0x19e790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19e790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19e794:
    // 0x19e794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e798:
    // 0x19e798: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x19e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_19e79c:
    // 0x19e79c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x19e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_19e7a0:
    // 0x19e7a0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_19e7a4:
    // 0x19e7a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e7a8:
    // 0x19e7a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19e7ac:
    // 0x19e7ac: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x19e7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_19e7b0:
    // 0x19e7b0: 0xc067994  jal         func_19E650
label_19e7b4:
    if (ctx->pc == 0x19E7B4u) {
        ctx->pc = 0x19E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B0u;
        // 0x19e7b4: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7B8u;
        goto label_19e7b8;
    }
    ctx->pc = 0x19E7B0u;
    SET_GPR_U32(ctx, 31, 0x19E7B8u);
    ctx->pc = 0x19E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7B0u;
    // 0x19e7b4: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E650u;
    { ctx->pc = 0x19e650; return; }
    ctx->pc = 0x19E7B8u;
label_19e7b8:
    // 0x19e7b8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_19e7bc:
    if (ctx->pc == 0x19E7BCu) {
        ctx->pc = 0x19E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B8u;
        // 0x19e7bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7C0u;
        goto label_19e7c0;
    }
    ctx->pc = 0x19E7B8u;
    {
        const bool branch_taken_0x19e7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B8u;
        // 0x19e7bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7b8) {
            ctx->pc = 0x19E958u;
            goto label_19e958;
        }
    }
    ctx->pc = 0x19E7C0u;
label_19e7c0:
    // 0x19e7c0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e7c4:
    // 0x19e7c4: 0x0  nop
    ctx->pc = 0x19e7c4u;
    // NOP
label_19e7c8:
    // 0x19e7c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e7cc:
    // 0x19e7cc: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19e7d0:
    // 0x19e7d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_19e7d4:
    if (ctx->pc == 0x19E7D4u) {
        ctx->pc = 0x19E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D0u;
        // 0x19e7d4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7D8u;
        goto label_19e7d8;
    }
    ctx->pc = 0x19E7D0u;
    {
        const bool branch_taken_0x19e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e7d0) {
            ctx->pc = 0x19E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E7D0u;
            // 0x19e7d4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E7E0u;
            goto label_19e7e0;
        }
    }
    ctx->pc = 0x19E7D8u;
label_19e7d8:
    // 0x19e7d8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_19e7dc:
    if (ctx->pc == 0x19E7DCu) {
        ctx->pc = 0x19E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D8u;
        // 0x19e7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7E0u;
        goto label_19e7e0;
    }
    ctx->pc = 0x19E7D8u;
    {
        const bool branch_taken_0x19e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D8u;
        // 0x19e7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7d8) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E7E0u;
label_19e7e0:
    // 0x19e7e0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19e7e4:
    // 0x19e7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e7e8:
    // 0x19e7e8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19e7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19e7ec:
    // 0x19e7ec: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_19e7f0:
    // 0x19e7f0: 0xc067828  jal         func_19E0A0
label_19e7f4:
    if (ctx->pc == 0x19E7F4u) {
        ctx->pc = 0x19E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F0u;
        // 0x19e7f4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7F8u;
        goto label_19e7f8;
    }
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x19E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7F0u;
    // 0x19e7f4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E0A0u;
    { ctx->pc = 0x19e0a0; return; }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19e7fc:
    if (ctx->pc == 0x19E7FCu) {
        ctx->pc = 0x19E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F8u;
        // 0x19e7fc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E800u;
        goto label_19e800;
    }
    ctx->pc = 0x19E7F8u;
    {
        const bool branch_taken_0x19e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F8u;
        // 0x19e7fc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7f8) {
            ctx->pc = 0x19E808u;
            goto label_19e808;
        }
    }
    ctx->pc = 0x19E800u;
label_19e800:
    // 0x19e800: 0x10000054  b           . + 4 + (0x54 << 2)
label_19e804:
    if (ctx->pc == 0x19E804u) {
        ctx->pc = 0x19E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E800u;
        // 0x19e804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E808u;
        goto label_19e808;
    }
    ctx->pc = 0x19E800u;
    {
        const bool branch_taken_0x19e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E800u;
        // 0x19e804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e800) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E808u;
label_19e808:
    // 0x19e808: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19e80c:
    if (ctx->pc == 0x19E80Cu) {
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E810u;
        goto label_19e810;
    }
    ctx->pc = 0x19E808u;
    {
        const bool branch_taken_0x19e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e808) {
            ctx->pc = 0x19E854u;
            goto label_19e854;
        }
    }
    ctx->pc = 0x19E810u;
label_19e810:
    // 0x19e810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e814:
    // 0x19e814: 0xc067d54  jal         func_19F550
label_19e818:
    if (ctx->pc == 0x19E818u) {
        ctx->pc = 0x19E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E814u;
        // 0x19e818: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E81Cu;
        goto label_19e81c;
    }
    ctx->pc = 0x19E814u;
    SET_GPR_U32(ctx, 31, 0x19E81Cu);
    ctx->pc = 0x19E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E814u;
    // 0x19e818: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19E81Cu;
label_19e81c:
    // 0x19e81c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19e820:
    if (ctx->pc == 0x19E820u) {
        ctx->pc = 0x19E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E81Cu;
        // 0x19e820: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E824u;
        goto label_19e824;
    }
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E81Cu;
            // 0x19e820: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E834u;
            goto label_19e834;
        }
    }
    ctx->pc = 0x19E824u;
label_19e824:
    // 0x19e824: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19e828:
    // 0x19e828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19e82c:
    if (ctx->pc == 0x19E82Cu) {
        ctx->pc = 0x19E830u;
        goto label_19e830;
    }
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E83Cu;
            goto label_19e83c;
        }
    }
    ctx->pc = 0x19E830u;
label_19e830:
    // 0x19e830: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e834:
    // 0x19e834: 0x10000047  b           . + 4 + (0x47 << 2)
label_19e838:
    if (ctx->pc == 0x19E838u) {
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E83Cu;
        goto label_19e83c;
    }
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0xc06790e  jal         func_19E438
label_19e840:
    if (ctx->pc == 0x19E840u) {
        ctx->pc = 0x19E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E83Cu;
        // 0x19e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E844u;
        goto label_19e844;
    }
    ctx->pc = 0x19E83Cu;
    SET_GPR_U32(ctx, 31, 0x19E844u);
    ctx->pc = 0x19E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E83Cu;
    // 0x19e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    { ctx->pc = 0x19e438; return; }
    ctx->pc = 0x19E844u;
label_19e844:
    // 0x19e844: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19e848:
    // 0x19e848: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_19e84c:
    if (ctx->pc == 0x19E84Cu) {
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E850u;
        goto label_19e850;
    }
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E8B0u;
            goto label_19e8b0;
        }
    }
    ctx->pc = 0x19E850u;
label_19e850:
    // 0x19e850: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e854:
    // 0x19e854: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19e858:
    // 0x19e858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19e85c:
    if (ctx->pc == 0x19E85Cu) {
        ctx->pc = 0x19E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E858u;
        // 0x19e85c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E860u;
        goto label_19e860;
    }
    ctx->pc = 0x19E858u;
    {
        const bool branch_taken_0x19e858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E858u;
        // 0x19e85c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e858) {
            ctx->pc = 0x19E878u;
            goto label_19e878;
        }
    }
    ctx->pc = 0x19E860u;
label_19e860:
    // 0x19e860: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e864:
    // 0x19e864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e868:
    // 0x19e868: 0xc068d2c  jal         func_1A34B0
label_19e86c:
    if (ctx->pc == 0x19E86Cu) {
        ctx->pc = 0x19E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E868u;
        // 0x19e86c: 0x24a5a108  addiu       $a1, $a1, -0x5EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E870u;
        goto label_19e870;
    }
    ctx->pc = 0x19E868u;
    SET_GPR_U32(ctx, 31, 0x19E870u);
    ctx->pc = 0x19E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E868u;
    // 0x19e86c: 0x24a5a108  addiu       $a1, $a1, -0x5EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19E870u;
label_19e870:
    // 0x19e870: 0x10000038  b           . + 4 + (0x38 << 2)
label_19e874:
    if (ctx->pc == 0x19E874u) {
        ctx->pc = 0x19E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E870u;
        // 0x19e874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E878u;
        goto label_19e878;
    }
    ctx->pc = 0x19E870u;
    {
        const bool branch_taken_0x19e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E870u;
        // 0x19e874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e870) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E878u;
label_19e878:
    // 0x19e878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e87c:
    // 0x19e87c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_19e880:
    if (ctx->pc == 0x19E880u) {
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E884u;
        goto label_19e884;
    }
    ctx->pc = 0x19E87Cu;
    {
        const bool branch_taken_0x19e87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e87c) {
            ctx->pc = 0x19E8BCu;
            goto label_19e8bc;
        }
    }
    ctx->pc = 0x19E884u;
label_19e884:
    // 0x19e884: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19e888:
    // 0x19e888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e88c:
    // 0x19e88c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x19e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_19e890:
    // 0x19e890: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_19e894:
    // 0x19e894: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19e898:
    // 0x19e898: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e89c:
    // 0x19e89c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x19e89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8a0:
    // 0x19e8a0: 0xc067a8c  jal         func_19EA30
label_19e8a4:
    if (ctx->pc == 0x19E8A4u) {
        ctx->pc = 0x19E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A0u;
        // 0x19e8a4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8A8u;
        goto label_19e8a8;
    }
    ctx->pc = 0x19E8A0u;
    SET_GPR_U32(ctx, 31, 0x19E8A8u);
    ctx->pc = 0x19E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8A0u;
    // 0x19e8a4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA30u;
    goto label_19ea30;
    ctx->pc = 0x19E8A8u;
label_19e8a8:
    // 0x19e8a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_19e8ac:
    if (ctx->pc == 0x19E8ACu) {
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8B0u;
        goto label_19e8b0;
    }
    ctx->pc = 0x19E8A8u;
    {
        const bool branch_taken_0x19e8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8a8) {
            ctx->pc = 0x19E8E0u;
            goto label_19e8e0;
        }
    }
    ctx->pc = 0x19E8B0u;
label_19e8b0:
    // 0x19e8b0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e8b4:
    // 0x19e8b4: 0x10000027  b           . + 4 + (0x27 << 2)
label_19e8b8:
    if (ctx->pc == 0x19E8B8u) {
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8BCu;
        goto label_19e8bc;
    }
    ctx->pc = 0x19E8B4u;
    {
        const bool branch_taken_0x19e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8b4) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e8c0:
    // 0x19e8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e8c4:
    // 0x19e8c4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_19e8c8:
    // 0x19e8c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19e8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8cc:
    // 0x19e8cc: 0xc067a5c  jal         func_19E970
label_19e8d0:
    if (ctx->pc == 0x19E8D0u) {
        ctx->pc = 0x19E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8CCu;
        // 0x19e8d0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8D4u;
        goto label_19e8d4;
    }
    ctx->pc = 0x19E8CCu;
    SET_GPR_U32(ctx, 31, 0x19E8D4u);
    ctx->pc = 0x19E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8CCu;
    // 0x19e8d0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E970u;
    goto label_19e970;
    ctx->pc = 0x19E8D4u;
label_19e8d4:
    // 0x19e8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19e8d8:
    if (ctx->pc == 0x19E8D8u) {
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8DCu;
        goto label_19e8dc;
    }
    ctx->pc = 0x19E8D4u;
    {
        const bool branch_taken_0x19e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8d4) {
            ctx->pc = 0x19E908u;
            goto label_19e908;
        }
    }
    ctx->pc = 0x19E8DCu;
label_19e8dc:
    // 0x19e8dc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e8e0:
    // 0x19e8e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8e4:
    // 0x19e8e4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x19e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_19e8e8:
    // 0x19e8e8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e8ec:
    // 0x19e8ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_19e8f0:
    // 0x19e8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e8f4:
    // 0x19e8f4: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_19e8f8:
    // 0x19e8f8: 0xc0670cc  jal         func_19C330
label_19e8fc:
    if (ctx->pc == 0x19E8FCu) {
        ctx->pc = 0x19E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8F8u;
        // 0x19e8fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E900u;
        goto label_19e900;
    }
    ctx->pc = 0x19E8F8u;
    SET_GPR_U32(ctx, 31, 0x19E900u);
    ctx->pc = 0x19E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8F8u;
    // 0x19e8fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    { ctx->pc = 0x19c330; return; }
    ctx->pc = 0x19E900u;
label_19e900:
    // 0x19e900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19e904:
    if (ctx->pc == 0x19E904u) {
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E908u;
        goto label_19e908;
    }
    ctx->pc = 0x19E900u;
    {
        const bool branch_taken_0x19e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e900) {
            ctx->pc = 0x19E914u;
            goto label_19e914;
        }
    }
    ctx->pc = 0x19E908u;
label_19e908:
    // 0x19e908: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e90c:
    // 0x19e90c: 0x10000011  b           . + 4 + (0x11 << 2)
label_19e910:
    if (ctx->pc == 0x19E910u) {
        ctx->pc = 0x19E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E90Cu;
        // 0x19e910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E914u;
        goto label_19e914;
    }
    ctx->pc = 0x19E90Cu;
    {
        const bool branch_taken_0x19e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E90Cu;
        // 0x19e910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e90c) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E914u;
label_19e914:
    // 0x19e914: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_19e918:
    if (ctx->pc == 0x19E918u) {
        ctx->pc = 0x19E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E914u;
        // 0x19e918: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E91Cu;
        goto label_19e91c;
    }
    ctx->pc = 0x19E914u;
    {
        const bool branch_taken_0x19e914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e914) {
            ctx->pc = 0x19E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E914u;
            // 0x19e918: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E934u;
            goto label_19e934;
        }
    }
    ctx->pc = 0x19E91Cu;
label_19e91c:
    // 0x19e91c: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19e920:
    // 0x19e920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e924:
    // 0x19e924: 0xc06742a  jal         func_19D0A8
label_19e928:
    if (ctx->pc == 0x19E928u) {
        ctx->pc = 0x19E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E924u;
        // 0x19e928: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E92Cu;
        goto label_19e92c;
    }
    ctx->pc = 0x19E924u;
    SET_GPR_U32(ctx, 31, 0x19E92Cu);
    ctx->pc = 0x19E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E924u;
    // 0x19e928: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D0A8u;
    { ctx->pc = 0x19d0a8; return; }
    ctx->pc = 0x19E92Cu;
label_19e92c:
    // 0x19e92c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e930:
    // 0x19e930: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19e934:
    // 0x19e934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19e938:
    // 0x19e938: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x19e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_19e93c:
    // 0x19e93c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19e93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19e940:
    // 0x19e940: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19e940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_19e944:
    // 0x19e944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e948:
    // 0x19e948: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x19e948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
label_19e94c:
    // 0x19e94c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
label_19e950:
    if (ctx->pc == 0x19E950u) {
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E94Cu;
        // 0x19e950: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E954u;
        goto label_19e954;
    }
    ctx->pc = 0x19E94Cu;
    {
        const bool branch_taken_0x19e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E94Cu;
        // 0x19e950: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e94c) {
            ctx->pc = 0x19E7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e7c8;
        }
    }
    ctx->pc = 0x19E954u;
label_19e954:
    // 0x19e954: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19e958:
    // 0x19e958: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19e95c:
    // 0x19e95c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x19e95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19e960:
    // 0x19e960: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19e964:
    // 0x19e964: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x19e964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e968:
    // 0x19e968: 0x3e00008  jr          $ra
label_19e96c:
    if (ctx->pc == 0x19E96Cu) {
        ctx->pc = 0x19E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E968u;
        // 0x19e96c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E970u;
        goto label_19e970;
    }
    ctx->pc = 0x19E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E968u;
        // 0x19e96c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E970u;
label_19e970:
    // 0x19e970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19e974:
    // 0x19e974: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19e978:
    // 0x19e978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e97c:
    // 0x19e97c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e980:
    // 0x19e980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19e984:
    // 0x19e984: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19e984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19e988:
    // 0x19e988: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e98c:
    // 0x19e98c: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
label_19e990:
    // 0x19e990: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x19e990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_19e994:
    // 0x19e994: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x19e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_19e998:
    // 0x19e998: 0xac4906cc  sw          $t1, 0x6CC($v0)
    ctx->pc = 0x19e998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 9));
label_19e99c:
    // 0x19e99c: 0xac8901b0  sw          $t1, 0x1B0($a0)
    ctx->pc = 0x19e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 9));
label_19e9a0:
    // 0x19e9a0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_19e9a4:
    // 0x19e9a4: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
label_19e9a8:
    if (ctx->pc == 0x19E9A8u) {
        ctx->pc = 0x19E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9A4u;
        // 0x19e9a8: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9ACu;
        goto label_19e9ac;
    }
    ctx->pc = 0x19E9A4u;
    {
        const bool branch_taken_0x19e9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x19e9a4) {
            ctx->pc = 0x19E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9A4u;
            // 0x19e9a8: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E9C0u;
            goto label_19e9c0;
        }
    }
    ctx->pc = 0x19E9ACu;
label_19e9ac:
    // 0x19e9ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19e9b0:
    // 0x19e9b0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x19e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_19e9b4:
    // 0x19e9b4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x19e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_19e9b8:
    // 0x19e9b8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19e9bc:
    // 0x19e9bc: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e9c0:
    // 0x19e9c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e9c4:
    // 0x19e9c4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_19e9c8:
    if (ctx->pc == 0x19E9C8u) {
        ctx->pc = 0x19E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C4u;
        // 0x19e9c8: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9CCu;
        goto label_19e9cc;
    }
    ctx->pc = 0x19E9C4u;
    {
        const bool branch_taken_0x19e9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e9c4) {
            ctx->pc = 0x19E9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9C4u;
            // 0x19e9c8: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E9D4u;
            goto label_19e9d4;
        }
    }
    ctx->pc = 0x19E9CCu;
label_19e9cc:
    // 0x19e9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19e9d0:
    if (ctx->pc == 0x19E9D0u) {
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9D4u;
        goto label_19e9d4;
    }
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19E9E8u;
            goto label_19e9e8;
        }
    }
    ctx->pc = 0x19E9D4u;
label_19e9d4:
    // 0x19e9d4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x19e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e9d8:
    // 0x19e9d8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_19e9dc:
    // 0x19e9dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19e9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19e9e0:
    // 0x19e9e0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_19e9e4:
    // 0x19e9e4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_19e9e8:
    // 0x19e9e8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x19e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_19e9ec:
    // 0x19e9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e9f0:
    // 0x19e9f0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_19e9f4:
    if (ctx->pc == 0x19E9F4u) {
        ctx->pc = 0x19E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9F0u;
        // 0x19e9f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9F8u;
        goto label_19e9f8;
    }
    ctx->pc = 0x19E9F0u;
    {
        const bool branch_taken_0x19e9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e9f0) {
            ctx->pc = 0x19E9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9F0u;
            // 0x19e9f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EA0Cu;
            goto label_19ea0c;
        }
    }
    ctx->pc = 0x19E9F8u;
label_19e9f8:
    // 0x19e9f8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e9fc:
    // 0x19e9fc: 0xc068d2c  jal         func_1A34B0
label_19ea00:
    if (ctx->pc == 0x19EA00u) {
        ctx->pc = 0x19EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9FCu;
        // 0x19ea00: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA04u;
        goto label_19ea04;
    }
    ctx->pc = 0x19E9FCu;
    SET_GPR_U32(ctx, 31, 0x19EA04u);
    ctx->pc = 0x19EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9FCu;
    // 0x19ea00: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19EA04u;
label_19ea04:
    // 0x19ea04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ea04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ea08:
    // 0x19ea08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ea0c:
    // 0x19ea0c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19ea10:
    // 0x19ea10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ea14:
    // 0x19ea14: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x19ea14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19ea18:
    // 0x19ea18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_19ea1c:
    // 0x19ea1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ea20:
    // 0x19ea20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ea20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ea24:
    // 0x19ea24: 0x3e00008  jr          $ra
label_19ea28:
    if (ctx->pc == 0x19EA28u) {
        ctx->pc = 0x19EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA24u;
        // 0x19ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA2Cu;
        goto label_19ea2c;
    }
    ctx->pc = 0x19EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA24u;
        // 0x19ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EA2Cu;
label_19ea2c:
    // 0x19ea2c: 0x0  nop
    ctx->pc = 0x19ea2cu;
    // NOP
label_19ea30:
    // 0x19ea30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19ea34:
    // 0x19ea34: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_19ea38:
    // 0x19ea38: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x19ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_19ea3c:
    // 0x19ea3c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
label_19ea40:
    // 0x19ea40: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x19ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_19ea44:
    // 0x19ea44: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
label_19ea48:
    // 0x19ea48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19ea4c:
    // 0x19ea4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19ea50:
    // 0x19ea50: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_19ea54:
    // 0x19ea54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ea54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ea58:
    // 0x19ea58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19ea5c:
    // 0x19ea5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19ea5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ea60:
    // 0x19ea60: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_19ea64:
    // 0x19ea64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ea68:
    // 0x19ea68: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x19ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_19ea6c:
    // 0x19ea6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19ea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19ea70:
    // 0x19ea70: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x19ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_19ea74:
    // 0x19ea74: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19ea78:
    // 0x19ea78: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x19ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_19ea7c:
    // 0x19ea7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ea80:
    // 0x19ea80: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_19ea84:
    // 0x19ea84: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19ea88:
    // 0x19ea88: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_19ea8c:
    // 0x19ea8c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_19ea90:
    // 0x19ea90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19ea94:
    // 0x19ea94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19ea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_19ea98:
    // 0x19ea98: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x19ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_19ea9c:
    // 0x19ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eaa0:
    // 0x19eaa0: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x19eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_19eaa4:
    // 0x19eaa4: 0xc067cf6  jal         func_19F3D8
label_19eaa8:
    if (ctx->pc == 0x19EAA8u) {
        ctx->pc = 0x19EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAA4u;
        // 0x19eaa8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAACu;
        goto label_19eaac;
    }
    ctx->pc = 0x19EAA4u;
    SET_GPR_U32(ctx, 31, 0x19EAACu);
    ctx->pc = 0x19EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAA4u;
    // 0x19eaa8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    { ctx->pc = 0x19f3d8; return; }
    ctx->pc = 0x19EAACu;
label_19eaac:
    // 0x19eaac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eab0:
    // 0x19eab0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_19eab4:
    if (ctx->pc == 0x19EAB4u) {
        ctx->pc = 0x19EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB0u;
        // 0x19eab4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAB8u;
        goto label_19eab8;
    }
    ctx->pc = 0x19EAB0u;
    {
        const bool branch_taken_0x19eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB0u;
        // 0x19eab4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eab0) {
            ctx->pc = 0x19EAD8u;
            goto label_19ead8;
        }
    }
    ctx->pc = 0x19EAB8u;
label_19eab8:
    // 0x19eab8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19eabc:
    // 0x19eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eac0:
    // 0x19eac0: 0xc068d2c  jal         func_1A34B0
label_19eac4:
    if (ctx->pc == 0x19EAC4u) {
        ctx->pc = 0x19EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAC0u;
        // 0x19eac4: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAC8u;
        goto label_19eac8;
    }
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x19EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAC0u;
    // 0x19eac4: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eacc:
    // 0x19eacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19eaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ead0:
    // 0x19ead0: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_19ead4:
    if (ctx->pc == 0x19EAD4u) {
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAD8u;
        goto label_19ead8;
    }
    ctx->pc = 0x19EAD0u;
    {
        const bool branch_taken_0x19ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ead0) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EAD8u;
label_19ead8:
    // 0x19ead8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_19eadc:
    // 0x19eadc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19eae0:
    if (ctx->pc == 0x19EAE0u) {
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAE4u;
        goto label_19eae4;
    }
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19EB14u;
            goto label_19eb14;
        }
    }
    ctx->pc = 0x19EAE4u;
label_19eae4:
    // 0x19eae4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eae8:
    // 0x19eae8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_19eaec:
    if (ctx->pc == 0x19EAECu) {
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAF0u;
        goto label_19eaf0;
    }
    ctx->pc = 0x19EAE8u;
    {
        const bool branch_taken_0x19eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae8) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAF0u;
label_19eaf0:
    // 0x19eaf0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_19eaf4:
    // 0x19eaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19eaf8:
    if (ctx->pc == 0x19EAF8u) {
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAFCu;
        goto label_19eafc;
    }
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAFCu;
label_19eafc:
    // 0x19eafc: 0x10000010  b           . + 4 + (0x10 << 2)
label_19eb00:
    if (ctx->pc == 0x19EB00u) {
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB04u;
        goto label_19eb04;
    }
    ctx->pc = 0x19EAFCu;
    {
        const bool branch_taken_0x19eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eafc) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB04u;
label_19eb04:
    // 0x19eb04: 0xc067dd2  jal         func_19F748
label_19eb08:
    if (ctx->pc == 0x19EB08u) {
        ctx->pc = 0x19EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB04u;
        // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB0Cu;
        goto label_19eb0c;
    }
    ctx->pc = 0x19EB04u;
    SET_GPR_U32(ctx, 31, 0x19EB0Cu);
    ctx->pc = 0x19EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB04u;
    // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EB0Cu;
label_19eb0c:
    // 0x19eb0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_19eb10:
    if (ctx->pc == 0x19EB10u) {
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB14u;
        goto label_19eb14;
    }
    ctx->pc = 0x19EB0Cu;
    {
        const bool branch_taken_0x19eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb0c) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB14u;
label_19eb14:
    // 0x19eb14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19eb18:
    // 0x19eb18: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_19eb1c:
    if (ctx->pc == 0x19EB1Cu) {
        ctx->pc = 0x19EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB18u;
        // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB20u;
        goto label_19eb20;
    }
    ctx->pc = 0x19EB18u;
    {
        const bool branch_taken_0x19eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb18) {
            ctx->pc = 0x19EB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EB18u;
            // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB44u;
            goto label_19eb44;
        }
    }
    ctx->pc = 0x19EB20u;
label_19eb20:
    // 0x19eb20: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19eb24:
    // 0x19eb24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19eb28:
    if (ctx->pc == 0x19EB28u) {
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB2Cu;
        goto label_19eb2c;
    }
    ctx->pc = 0x19EB24u;
    {
        const bool branch_taken_0x19eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb24) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB2Cu;
label_19eb2c:
    // 0x19eb2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eb30:
    // 0x19eb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb34:
    // 0x19eb34: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_19eb38:
    // 0x19eb38: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x19eb38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_19eb3c:
    // 0x19eb3c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19eb40:
    // 0x19eb40: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eb44:
    // 0x19eb44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb48:
    // 0x19eb48: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_19eb4c:
    if (ctx->pc == 0x19EB4Cu) {
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB50u;
        goto label_19eb50;
    }
    ctx->pc = 0x19EB48u;
    {
        const bool branch_taken_0x19eb48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb48) {
            ctx->pc = 0x19EB6Cu;
            goto label_19eb6c;
        }
    }
    ctx->pc = 0x19EB50u;
label_19eb50:
    // 0x19eb50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eb54:
    // 0x19eb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb58:
    // 0x19eb58: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_19eb5c:
    // 0x19eb5c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_19eb60:
    // 0x19eb60: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x19eb60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_19eb64:
    // 0x19eb64: 0x10000006  b           . + 4 + (0x6 << 2)
label_19eb68:
    if (ctx->pc == 0x19EB68u) {
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB6Cu;
        goto label_19eb6c;
    }
    ctx->pc = 0x19EB64u;
    {
        const bool branch_taken_0x19eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb64) {
            ctx->pc = 0x19EB80u;
            goto label_19eb80;
        }
    }
    ctx->pc = 0x19EB6Cu;
label_19eb6c:
    // 0x19eb6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb70:
    // 0x19eb70: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eb74:
    // 0x19eb74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19eb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb78:
    // 0x19eb78: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x19eb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_19eb7c:
    // 0x19eb7c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x19eb7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_19eb80:
    // 0x19eb80: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
label_19eb84:
    // 0x19eb84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19eb84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb88:
    // 0x19eb88: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_19eb8c:
    if (ctx->pc == 0x19EB8Cu) {
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB90u;
        goto label_19eb90;
    }
    ctx->pc = 0x19EB88u;
    {
        const bool branch_taken_0x19eb88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb88) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB90u;
label_19eb90:
    // 0x19eb90: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x19eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
label_19eb94:
    // 0x19eb94: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x19eb94u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19eb98:
    // 0x19eb98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb9c:
    // 0x19eb9c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
label_19eba0:
    if (ctx->pc == 0x19EBA0u) {
        ctx->pc = 0x19EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB9Cu;
        // 0x19eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBA4u;
        goto label_19eba4;
    }
    ctx->pc = 0x19EB9Cu;
    {
        const bool branch_taken_0x19eb9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB9Cu;
        // 0x19eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb9c) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBA4u;
label_19eba4:
    // 0x19eba4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_19eba8:
    // 0x19eba8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19ebac:
    if (ctx->pc == 0x19EBACu) {
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBB0u;
        goto label_19ebb0;
    }
    ctx->pc = 0x19EBA8u;
    {
        const bool branch_taken_0x19eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eba8) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBB0u;
label_19ebb0:
    // 0x19ebb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebb4:
    // 0x19ebb4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_19ebb8:
    // 0x19ebb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ebbc:
    if (ctx->pc == 0x19EBBCu) {
        ctx->pc = 0x19EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB8u;
        // 0x19ebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBC0u;
        goto label_19ebc0;
    }
    ctx->pc = 0x19EBB8u;
    {
        const bool branch_taken_0x19ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB8u;
        // 0x19ebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebb8) {
            ctx->pc = 0x19EBD0u;
            goto label_19ebd0;
        }
    }
    ctx->pc = 0x19EBC0u;
label_19ebc0:
    // 0x19ebc0: 0xc067dd2  jal         func_19F748
label_19ebc4:
    if (ctx->pc == 0x19EBC4u) {
        ctx->pc = 0x19EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC0u;
        // 0x19ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBC8u;
        goto label_19ebc8;
    }
    ctx->pc = 0x19EBC0u;
    SET_GPR_U32(ctx, 31, 0x19EBC8u);
    ctx->pc = 0x19EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBC0u;
    // 0x19ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EBC8u;
label_19ebc8:
    // 0x19ebc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19ebcc:
    if (ctx->pc == 0x19EBCCu) {
        ctx->pc = 0x19EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC8u;
        // 0x19ebcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBD0u;
        goto label_19ebd0;
    }
    ctx->pc = 0x19EBC8u;
    {
        const bool branch_taken_0x19ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC8u;
        // 0x19ebcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebc8) {
            ctx->pc = 0x19EBD8u;
            goto label_19ebd8;
        }
    }
    ctx->pc = 0x19EBD0u;
label_19ebd0:
    // 0x19ebd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ebd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ebd4:
    // 0x19ebd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ebd8:
    // 0x19ebd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19ebdc:
    // 0x19ebdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebe0:
    // 0x19ebe0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x19ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_19ebe4:
    // 0x19ebe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ebe8:
    if (ctx->pc == 0x19EBE8u) {
        ctx->pc = 0x19EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBE4u;
        // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBECu;
        goto label_19ebec;
    }
    ctx->pc = 0x19EBE4u;
    {
        const bool branch_taken_0x19ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBE4u;
        // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebe4) {
            ctx->pc = 0x19EBFCu;
            goto label_19ebfc;
        }
    }
    ctx->pc = 0x19EBECu;
label_19ebec:
    // 0x19ebec: 0xc067dd2  jal         func_19F748
label_19ebf0:
    if (ctx->pc == 0x19EBF0u) {
        ctx->pc = 0x19EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBECu;
        // 0x19ebf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBF4u;
        goto label_19ebf4;
    }
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBECu;
    // 0x19ebf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x19ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_19ebf8:
    // 0x19ebf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebfc:
    // 0x19ebfc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x19ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_19ec00:
    // 0x19ec00: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_19ec04:
    if (ctx->pc == 0x19EC04u) {
        ctx->pc = 0x19EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC00u;
        // 0x19ec04: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC08u;
        goto label_19ec08;
    }
    ctx->pc = 0x19EC00u;
    {
        const bool branch_taken_0x19ec00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ec00) {
            ctx->pc = 0x19EC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC00u;
            // 0x19ec04: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC24u;
            goto label_19ec24;
        }
    }
    ctx->pc = 0x19EC08u;
label_19ec08:
    // 0x19ec08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19ec0c:
    // 0x19ec0c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_19ec10:
    if (ctx->pc == 0x19EC10u) {
        ctx->pc = 0x19EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC0Cu;
        // 0x19ec10: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC14u;
        goto label_19ec14;
    }
    ctx->pc = 0x19EC0Cu;
    {
        const bool branch_taken_0x19ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec0c) {
            ctx->pc = 0x19EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC0Cu;
            // 0x19ec10: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC14u;
label_19ec14:
    // 0x19ec14: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ec18:
    // 0x19ec18: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_19ec1c:
    if (ctx->pc == 0x19EC1Cu) {
        ctx->pc = 0x19EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC18u;
        // 0x19ec1c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC20u;
        goto label_19ec20;
    }
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC18u;
            // 0x19ec1c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC20u;
label_19ec20:
    // 0x19ec20: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_19ec24:
    // 0x19ec24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19ec28:
    if (ctx->pc == 0x19EC28u) {
        ctx->pc = 0x19EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC24u;
        // 0x19ec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC2Cu;
        goto label_19ec2c;
    }
    ctx->pc = 0x19EC24u;
    {
        const bool branch_taken_0x19ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC24u;
        // 0x19ec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec24) {
            ctx->pc = 0x19EC6Cu;
            goto label_19ec6c;
        }
    }
    ctx->pc = 0x19EC2Cu;
label_19ec2c:
    // 0x19ec2c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_19ec30:
    // 0x19ec30: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_19ec34:
    // 0x19ec34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec38:
    // 0x19ec38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ec3c:
    // 0x19ec3c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19ec40:
    // 0x19ec40: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x19ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_19ec44:
    // 0x19ec44: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_19ec48:
    // 0x19ec48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19ec4c:
    // 0x19ec4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19ec50:
    // 0x19ec50: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x19ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_19ec54:
    // 0x19ec54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ec54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec58:
    // 0x19ec58: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19ec58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ec5c:
    // 0x19ec5c: 0xc067bd8  jal         func_19EF60
label_19ec60:
    if (ctx->pc == 0x19EC60u) {
        ctx->pc = 0x19EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC5Cu;
        // 0x19ec60: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC64u;
        goto label_19ec64;
    }
    ctx->pc = 0x19EC5Cu;
    SET_GPR_U32(ctx, 31, 0x19EC64u);
    ctx->pc = 0x19EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC5Cu;
    // 0x19ec60: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    { ctx->pc = 0x19ef60; return; }
    ctx->pc = 0x19EC64u;
label_19ec64:
    // 0x19ec64: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ec68:
    if (ctx->pc == 0x19EC68u) {
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC6Cu;
        goto label_19ec6c;
    }
    ctx->pc = 0x19EC64u;
    {
        const bool branch_taken_0x19ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec64) {
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC6Cu;
label_19ec6c:
    // 0x19ec6c: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_19ec70:
    // 0x19ec70: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_19ec74:
    // 0x19ec74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec78:
    // 0x19ec78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19ec7c:
    // 0x19ec7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19ec80:
    // 0x19ec80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ec80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec84:
    // 0x19ec84: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ec84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19ec88:
    // 0x19ec88: 0xc067c40  jal         func_19F100
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC88u;
        // 0x19ec8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    SET_GPR_U32(ctx, 31, 0x19EC90u);
    ctx->pc = 0x19EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC88u;
    // 0x19ec8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    { ctx->pc = 0x19f100; return; }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ec94:
    // 0x19ec94: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
label_19ec98:
    if (ctx->pc == 0x19EC98u) {
        ctx->pc = 0x19EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC94u;
        // 0x19ec98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC9Cu;
        goto label_19ec9c;
    }
    ctx->pc = 0x19EC94u;
    {
        const bool branch_taken_0x19ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC94u;
        // 0x19ec98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec94) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EC9Cu;
label_19ec9c:
    // 0x19ec9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19eca0:
    // 0x19eca0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_19eca4:
    // 0x19eca4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_19eca8:
    if (ctx->pc == 0x19ECA8u) {
        ctx->pc = 0x19ECACu;
        goto label_19ecac;
    }
    ctx->pc = 0x19ECA4u;
    {
        const bool branch_taken_0x19eca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eca4) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ECACu;
label_19ecac:
    // 0x19ecac: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_19ecb0:
    // 0x19ecb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19ecb4:
    if (ctx->pc == 0x19ECB4u) {
        ctx->pc = 0x19ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB0u;
        // 0x19ecb4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECB8u;
        goto label_19ecb8;
    }
    ctx->pc = 0x19ECB0u;
    {
        const bool branch_taken_0x19ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB0u;
        // 0x19ecb4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb0) {
            ctx->pc = 0x19ECF8u;
            goto label_19ecf8;
        }
    }
    ctx->pc = 0x19ECB8u;
label_19ecb8:
    // 0x19ecb8: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x19ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_19ecbc:
    // 0x19ecbc: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x19ecbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
label_19ecc0:
    // 0x19ecc0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19ecc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ecc4:
    // 0x19ecc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ecc8:
    // 0x19ecc8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19ecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19eccc:
    // 0x19eccc: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x19ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_19ecd0:
    // 0x19ecd0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x19ecd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ecd4:
    // 0x19ecd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19ecd8:
    // 0x19ecd8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x19ecd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_19ecdc:
    // 0x19ecdc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_19ece0:
    // 0x19ece0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ece4:
    // 0x19ece4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ece8:
    // 0x19ece8: 0xc067bd8  jal         func_19EF60
label_19ecec:
    if (ctx->pc == 0x19ECECu) {
        ctx->pc = 0x19ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECE8u;
        // 0x19ecec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF0u;
        goto label_19ecf0;
    }
    ctx->pc = 0x19ECE8u;
    SET_GPR_U32(ctx, 31, 0x19ECF0u);
    ctx->pc = 0x19ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECE8u;
    // 0x19ecec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    { ctx->pc = 0x19ef60; return; }
    ctx->pc = 0x19ECF0u;
label_19ecf0:
    // 0x19ecf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ecf4:
    if (ctx->pc == 0x19ECF4u) {
        ctx->pc = 0x19ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF0u;
        // 0x19ecf4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF8u;
        goto label_19ecf8;
    }
    ctx->pc = 0x19ECF0u;
    {
        const bool branch_taken_0x19ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF0u;
        // 0x19ecf4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecf0) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ECF8u;
label_19ecf8:
    // 0x19ecf8: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_19ecfc:
    // 0x19ecfc: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_19ed00:
    // 0x19ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed04:
    // 0x19ed04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19ed08:
    // 0x19ed08: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x19ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_19ed0c:
    // 0x19ed0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ed0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ed10:
    // 0x19ed10: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ed10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19ed14:
    // 0x19ed14: 0xc067c40  jal         func_19F100
label_19ed18:
    if (ctx->pc == 0x19ED18u) {
        ctx->pc = 0x19ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED14u;
        // 0x19ed18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED1Cu;
        goto label_19ed1c;
    }
    ctx->pc = 0x19ED14u;
    SET_GPR_U32(ctx, 31, 0x19ED1Cu);
    ctx->pc = 0x19ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED14u;
    // 0x19ed18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    { ctx->pc = 0x19f100; return; }
    ctx->pc = 0x19ED1Cu;
label_19ed1c:
    // 0x19ed1c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ed20:
    // 0x19ed20: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
label_19ed24:
    if (ctx->pc == 0x19ED24u) {
        ctx->pc = 0x19ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED20u;
        // 0x19ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED28u;
        goto label_19ed28;
    }
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED20u;
        // 0x19ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19ED28u;
label_19ed28:
    // 0x19ed28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed2c:
    // 0x19ed2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19ed30:
    // 0x19ed30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19ed34:
    if (ctx->pc == 0x19ED34u) {
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED30u;
        // 0x19ed34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED38u;
        goto label_19ed38;
    }
    ctx->pc = 0x19ED30u;
    {
        const bool branch_taken_0x19ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED30u;
        // 0x19ed34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed30) {
            ctx->pc = 0x19ED54u;
            goto label_19ed54;
        }
    }
    ctx->pc = 0x19ED38u;
label_19ed38:
    // 0x19ed38: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ed3c:
    // 0x19ed3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19ed40:
    if (ctx->pc == 0x19ED40u) {
        ctx->pc = 0x19ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED3Cu;
        // 0x19ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED44u;
        goto label_19ed44;
    }
    ctx->pc = 0x19ED3Cu;
    {
        const bool branch_taken_0x19ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED3Cu;
        // 0x19ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed3c) {
            ctx->pc = 0x19ED50u;
            goto label_19ed50;
        }
    }
    ctx->pc = 0x19ED44u;
label_19ed44:
    // 0x19ed44: 0xc067d96  jal         func_19F658
label_19ed48:
    if (ctx->pc == 0x19ED48u) {
        ctx->pc = 0x19ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED44u;
        // 0x19ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED4Cu;
        goto label_19ed4c;
    }
    ctx->pc = 0x19ED44u;
    SET_GPR_U32(ctx, 31, 0x19ED4Cu);
    ctx->pc = 0x19ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED44u;
    // 0x19ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19ED4Cu;
label_19ed4c:
    // 0x19ed4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed50:
    // 0x19ed50: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x19ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_19ed54:
    // 0x19ed54: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_19ed58:
    if (ctx->pc == 0x19ED58u) {
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED5Cu;
        goto label_19ed5c;
    }
    ctx->pc = 0x19ED54u;
    {
        const bool branch_taken_0x19ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed54) {
            ctx->pc = 0x19EDC8u;
            goto label_19edc8;
        }
    }
    ctx->pc = 0x19ED5Cu;
label_19ed5c:
    // 0x19ed5c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19ed60:
    // 0x19ed60: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_19ed64:
    // 0x19ed64: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19ed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19ed68:
    // 0x19ed68: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19ed6c:
    // 0x19ed6c: 0xc0683c8  jal         func_1A0F20
label_19ed70:
    if (ctx->pc == 0x19ED70u) {
        ctx->pc = 0x19ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED6Cu;
        // 0x19ed70: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED74u;
        goto label_19ed74;
    }
    ctx->pc = 0x19ED6Cu;
    SET_GPR_U32(ctx, 31, 0x19ED74u);
    ctx->pc = 0x19ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED6Cu;
    // 0x19ed70: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0F20u;
    { ctx->pc = 0x1a0f20; return; }
    ctx->pc = 0x19ED74u;
label_19ed74:
    // 0x19ed74: 0xc067ca0  jal         func_19F280
label_19ed78:
    if (ctx->pc == 0x19ED78u) {
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED74u;
        // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED7Cu;
        goto label_19ed7c;
    }
    ctx->pc = 0x19ED74u;
    SET_GPR_U32(ctx, 31, 0x19ED7Cu);
    ctx->pc = 0x19ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED74u;
    // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed80:
    // 0x19ed80: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_19ed84:
    // 0x19ed84: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_19ed88:
    // 0x19ed88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed8c:
    // 0x19ed8c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_19ed90:
    // 0x19ed90: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19ed94:
    // 0x19ed94: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ed98:
    // 0x19ed98: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x19ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
label_19ed9c:
    // 0x19ed9c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_19eda0:
    // 0x19eda0: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_19eda4:
    // 0x19eda4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19eda8:
    // 0x19eda8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x19eda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_19edac:
    // 0x19edac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x19edacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_19edb0:
    // 0x19edb0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19edb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19edb4:
    // 0x19edb4: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_19edb8:
    // 0x19edb8: 0xc067c94  jal         func_19F250
label_19edbc:
    if (ctx->pc == 0x19EDBCu) {
        ctx->pc = 0x19EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDB8u;
        // 0x19edbc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC0u;
        goto label_19edc0;
    }
    ctx->pc = 0x19EDB8u;
    SET_GPR_U32(ctx, 31, 0x19EDC0u);
    ctx->pc = 0x19EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDB8u;
    // 0x19edbc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x19EDC0u;
label_19edc0:
    // 0x19edc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_19edc4:
    if (ctx->pc == 0x19EDC4u) {
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC8u;
        goto label_19edc8;
    }
    ctx->pc = 0x19EDC0u;
    {
        const bool branch_taken_0x19edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edc0) {
            ctx->pc = 0x19EDE0u;
            goto label_19ede0;
        }
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19edcc:
    // 0x19edcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19edd0:
    // 0x19edd0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19edd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19edd4:
    // 0x19edd4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_19edd8:
    // 0x19edd8: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x19edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
label_19eddc:
    // 0x19eddc: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ede0:
    // 0x19ede0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19ede4:
    if (ctx->pc == 0x19EDE4u) {
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE0u;
        // 0x19ede4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDE8u;
        goto label_19ede8;
    }
    ctx->pc = 0x19EDE0u;
    {
        const bool branch_taken_0x19ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE0u;
        // 0x19ede4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede0) {
            ctx->pc = 0x19EDF0u;
            goto label_19edf0;
        }
    }
    ctx->pc = 0x19EDE8u;
label_19ede8:
    // 0x19ede8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_19edec:
    if (ctx->pc == 0x19EDECu) {
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDF0u;
        goto label_19edf0;
    }
    ctx->pc = 0x19EDE8u;
    {
        const bool branch_taken_0x19ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede8) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EDF0u;
label_19edf0:
    // 0x19edf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19edf4:
    // 0x19edf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19edf8:
    // 0x19edf8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_19edfc:
    if (ctx->pc == 0x19EDFCu) {
        ctx->pc = 0x19EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDF8u;
        // 0x19edfc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE00u;
        goto label_19ee00;
    }
    ctx->pc = 0x19EDF8u;
    {
        const bool branch_taken_0x19edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19edf8) {
            ctx->pc = 0x19EDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EDF8u;
            // 0x19edfc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE1Cu;
            goto label_19ee1c;
        }
    }
    ctx->pc = 0x19EE00u;
label_19ee00:
    // 0x19ee00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ee04:
    // 0x19ee04: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
label_19ee08:
    // 0x19ee08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ee0c:
    // 0x19ee0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ee10:
    // 0x19ee10: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_19ee14:
    if (ctx->pc == 0x19EE14u) {
        ctx->pc = 0x19EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE10u;
        // 0x19ee14: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE18u;
        goto label_19ee18;
    }
    ctx->pc = 0x19EE10u;
    {
        const bool branch_taken_0x19ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee10) {
            ctx->pc = 0x19EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE10u;
            // 0x19ee14: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE18u;
label_19ee18:
    // 0x19ee18: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ee1c:
    // 0x19ee1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_19ee20:
    if (ctx->pc == 0x19EE20u) {
        ctx->pc = 0x19EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE1Cu;
        // 0x19ee20: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE24u;
        goto label_19ee24;
    }
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE1Cu;
            // 0x19ee20: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE24u;
label_19ee24:
    // 0x19ee24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_19ee28:
    // 0x19ee28: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19ee2c:
    // 0x19ee2c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19ee30:
    // 0x19ee30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19ee34:
    // 0x19ee34: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_19ee38:
    // 0x19ee38: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_19ee3c:
    // 0x19ee3c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19ee40:
    // 0x19ee40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_19ee44:
    // 0x19ee44: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19ee48:
    // 0x19ee48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ee4c:
    // 0x19ee4c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
label_19ee50:
    if (ctx->pc == 0x19EE50u) {
        ctx->pc = 0x19EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE4Cu;
        // 0x19ee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE54u;
        goto label_19ee54;
    }
    ctx->pc = 0x19EE4Cu;
    {
        const bool branch_taken_0x19ee4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE4Cu;
        // 0x19ee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee4c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE54u;
label_19ee54:
    // 0x19ee54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ee58:
    // 0x19ee58: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x19ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
label_19ee5c:
    // 0x19ee5c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19ee60:
    if (ctx->pc == 0x19EE60u) {
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE5Cu;
        // 0x19ee60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE64u;
        goto label_19ee64;
    }
    ctx->pc = 0x19EE5Cu;
    {
        const bool branch_taken_0x19ee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE5Cu;
        // 0x19ee60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee5c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE64u;
label_19ee64:
    // 0x19ee64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19ee68:
    // 0x19ee68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ee6c:
    // 0x19ee6c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_19ee70:
    // 0x19ee70: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19ee74:
    // 0x19ee74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19ee78:
    // 0x19ee78: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19ee7c:
    // 0x19ee7c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_19ee80:
    if (ctx->pc == 0x19EE80u) {
        ctx->pc = 0x19EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE7Cu;
        // 0x19ee80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE84u;
        goto label_19ee84;
    }
    ctx->pc = 0x19EE7Cu;
    {
        const bool branch_taken_0x19ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE7Cu;
        // 0x19ee80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee7c) {
            ctx->pc = 0x19EE8Cu;
            goto label_19ee8c;
        }
    }
    ctx->pc = 0x19EE84u;
label_19ee84:
    // 0x19ee84: 0x10000007  b           . + 4 + (0x7 << 2)
label_19ee88:
    if (ctx->pc == 0x19EE88u) {
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE8Cu;
        goto label_19ee8c;
    }
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EEA4u;
            goto label_19eea4;
        }
    }
    ctx->pc = 0x19EE8Cu;
label_19ee8c:
    // 0x19ee8c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19ee90:
    // 0x19ee90: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19ee94:
    // 0x19ee94: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19ee98:
    // 0x19ee98: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_19ee9c:
    // 0x19ee9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19ee9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19eea0:
    // 0x19eea0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x19eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_19eea4:
    // 0x19eea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eea8:
    // 0x19eea8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19eeac:
    // 0x19eeac: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x19eeacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19eeb0:
    // 0x19eeb0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x19eeb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19eeb4:
    // 0x19eeb4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x19eeb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19eeb8:
    // 0x19eeb8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x19eeb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19eebc:
    // 0x19eebc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x19eebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19eec0:
    // 0x19eec0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19eec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19eec4:
    // 0x19eec4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19eec8:
    // 0x19eec8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19eec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19eecc:
    // 0x19eecc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19eeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19eed0:
    // 0x19eed0: 0x3e00008  jr          $ra
label_19eed4:
    if (ctx->pc == 0x19EED4u) {
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EED8u;
        goto label_19eed8;
    }
    ctx->pc = 0x19EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EED8u;
label_19eed8:
    // 0x19eed8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19eed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19eedc:
    // 0x19eedc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19eee0:
    // 0x19eee0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_19eee4:
    // 0x19eee4: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19eee8:
    // 0x19eee8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x19eee8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_19eeec:
    // 0x19eeec: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_19eef0:
    if (ctx->pc == 0x19EEF0u) {
        ctx->pc = 0x19EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEECu;
        // 0x19eef0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEF4u;
        goto label_19eef4;
    }
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEECu;
        // 0x19eef0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF20u;
            { ctx->pc = 0x19ef20; return; }
        }
    }
    ctx->pc = 0x19EEF4u;
label_19eef4:
    // 0x19eef4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_19eef8:
    // 0x19eef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19eefc:
    // 0x19eefc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19ef00:
    // 0x19ef00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19ef04:
    // 0x19ef04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ef08:
    // 0x19ef08: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x19ef08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_19ef0c:
    // 0x19ef0c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_19ef10:
    if (ctx->pc == 0x19EF10u) {
        ctx->pc = 0x19EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF0Cu;
        // 0x19ef10: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF14u;
        goto label_19ef14;
    }
    ctx->pc = 0x19EF0Cu;
    {
        const bool branch_taken_0x19ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF0Cu;
        // 0x19ef10: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef0c) {
            ctx->pc = 0x19EF54u;
            { ctx->pc = 0x19ef54; return; }
        }
    }
    ctx->pc = 0x19EF14u;
label_19ef14:
    // 0x19ef14: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_19ef18:
    // 0x19ef18: 0x1000000d  b           . + 4 + (0xD << 2)
label_19ef1c:
    if (ctx->pc == 0x19EF1Cu) {
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF20u;
        { ctx->pc = 0x19ef20; return; }
    }
    ctx->pc = 0x19EF18u;
    {
        const bool branch_taken_0x19ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef18) {
            ctx->pc = 0x19EF50u;
            { ctx->pc = 0x19ef50; return; }
        }
    }
    ctx->pc = 0x19EF20u;
    ctx->pc = 0x19ef20u;
    return;
}

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


void FUN_0014eba0_part66(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16e770u: goto label_16e770;
        case 0x16e774u: goto label_16e774;
        case 0x16e778u: goto label_16e778;
        case 0x16e77cu: goto label_16e77c;
        case 0x16e780u: goto label_16e780;
        case 0x16e784u: goto label_16e784;
        case 0x16e788u: goto label_16e788;
        case 0x16e78cu: goto label_16e78c;
        case 0x16e790u: goto label_16e790;
        case 0x16e794u: goto label_16e794;
        case 0x16e798u: goto label_16e798;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7a0u: goto label_16e7a0;
        case 0x16e7a4u: goto label_16e7a4;
        case 0x16e7a8u: goto label_16e7a8;
        case 0x16e7acu: goto label_16e7ac;
        case 0x16e7b0u: goto label_16e7b0;
        case 0x16e7b4u: goto label_16e7b4;
        case 0x16e7b8u: goto label_16e7b8;
        case 0x16e7bcu: goto label_16e7bc;
        case 0x16e7c0u: goto label_16e7c0;
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d0u: goto label_16e7d0;
        case 0x16e7d4u: goto label_16e7d4;
        case 0x16e7d8u: goto label_16e7d8;
        case 0x16e7dcu: goto label_16e7dc;
        case 0x16e7e0u: goto label_16e7e0;
        case 0x16e7e4u: goto label_16e7e4;
        case 0x16e7e8u: goto label_16e7e8;
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f0u: goto label_16e7f0;
        case 0x16e7f4u: goto label_16e7f4;
        case 0x16e7f8u: goto label_16e7f8;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e800u: goto label_16e800;
        case 0x16e804u: goto label_16e804;
        case 0x16e808u: goto label_16e808;
        case 0x16e80cu: goto label_16e80c;
        case 0x16e810u: goto label_16e810;
        case 0x16e814u: goto label_16e814;
        case 0x16e818u: goto label_16e818;
        case 0x16e81cu: goto label_16e81c;
        case 0x16e820u: goto label_16e820;
        case 0x16e824u: goto label_16e824;
        case 0x16e828u: goto label_16e828;
        case 0x16e82cu: goto label_16e82c;
        case 0x16e830u: goto label_16e830;
        case 0x16e834u: goto label_16e834;
        case 0x16e838u: goto label_16e838;
        case 0x16e83cu: goto label_16e83c;
        case 0x16e840u: goto label_16e840;
        case 0x16e844u: goto label_16e844;
        case 0x16e848u: goto label_16e848;
        case 0x16e84cu: goto label_16e84c;
        case 0x16e850u: goto label_16e850;
        case 0x16e854u: goto label_16e854;
        case 0x16e858u: goto label_16e858;
        case 0x16e85cu: goto label_16e85c;
        case 0x16e860u: goto label_16e860;
        case 0x16e864u: goto label_16e864;
        case 0x16e868u: goto label_16e868;
        case 0x16e86cu: goto label_16e86c;
        case 0x16e870u: goto label_16e870;
        case 0x16e874u: goto label_16e874;
        case 0x16e878u: goto label_16e878;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e880u: goto label_16e880;
        case 0x16e884u: goto label_16e884;
        case 0x16e888u: goto label_16e888;
        case 0x16e88cu: goto label_16e88c;
        case 0x16e890u: goto label_16e890;
        case 0x16e894u: goto label_16e894;
        case 0x16e898u: goto label_16e898;
        case 0x16e89cu: goto label_16e89c;
        case 0x16e8a0u: goto label_16e8a0;
        case 0x16e8a4u: goto label_16e8a4;
        case 0x16e8a8u: goto label_16e8a8;
        case 0x16e8acu: goto label_16e8ac;
        case 0x16e8b0u: goto label_16e8b0;
        case 0x16e8b4u: goto label_16e8b4;
        case 0x16e8b8u: goto label_16e8b8;
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8c0u: goto label_16e8c0;
        case 0x16e8c4u: goto label_16e8c4;
        case 0x16e8c8u: goto label_16e8c8;
        case 0x16e8ccu: goto label_16e8cc;
        case 0x16e8d0u: goto label_16e8d0;
        case 0x16e8d4u: goto label_16e8d4;
        case 0x16e8d8u: goto label_16e8d8;
        case 0x16e8dcu: goto label_16e8dc;
        case 0x16e8e0u: goto label_16e8e0;
        case 0x16e8e4u: goto label_16e8e4;
        case 0x16e8e8u: goto label_16e8e8;
        case 0x16e8ecu: goto label_16e8ec;
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e8f4u: goto label_16e8f4;
        case 0x16e8f8u: goto label_16e8f8;
        case 0x16e8fcu: goto label_16e8fc;
        case 0x16e900u: goto label_16e900;
        case 0x16e904u: goto label_16e904;
        case 0x16e908u: goto label_16e908;
        case 0x16e90cu: goto label_16e90c;
        case 0x16e910u: goto label_16e910;
        case 0x16e914u: goto label_16e914;
        case 0x16e918u: goto label_16e918;
        case 0x16e91cu: goto label_16e91c;
        case 0x16e920u: goto label_16e920;
        case 0x16e924u: goto label_16e924;
        case 0x16e928u: goto label_16e928;
        case 0x16e92cu: goto label_16e92c;
        case 0x16e930u: goto label_16e930;
        case 0x16e934u: goto label_16e934;
        case 0x16e938u: goto label_16e938;
        case 0x16e93cu: goto label_16e93c;
        case 0x16e940u: goto label_16e940;
        case 0x16e944u: goto label_16e944;
        case 0x16e948u: goto label_16e948;
        case 0x16e94cu: goto label_16e94c;
        case 0x16e950u: goto label_16e950;
        case 0x16e954u: goto label_16e954;
        case 0x16e958u: goto label_16e958;
        case 0x16e95cu: goto label_16e95c;
        case 0x16e960u: goto label_16e960;
        case 0x16e964u: goto label_16e964;
        case 0x16e968u: goto label_16e968;
        case 0x16e96cu: goto label_16e96c;
        case 0x16e970u: goto label_16e970;
        case 0x16e974u: goto label_16e974;
        case 0x16e978u: goto label_16e978;
        case 0x16e97cu: goto label_16e97c;
        case 0x16e980u: goto label_16e980;
        case 0x16e984u: goto label_16e984;
        case 0x16e988u: goto label_16e988;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e990u: goto label_16e990;
        case 0x16e994u: goto label_16e994;
        case 0x16e998u: goto label_16e998;
        case 0x16e99cu: goto label_16e99c;
        case 0x16e9a0u: goto label_16e9a0;
        case 0x16e9a4u: goto label_16e9a4;
        case 0x16e9a8u: goto label_16e9a8;
        case 0x16e9acu: goto label_16e9ac;
        case 0x16e9b0u: goto label_16e9b0;
        case 0x16e9b4u: goto label_16e9b4;
        case 0x16e9b8u: goto label_16e9b8;
        case 0x16e9bcu: goto label_16e9bc;
        case 0x16e9c0u: goto label_16e9c0;
        case 0x16e9c4u: goto label_16e9c4;
        case 0x16e9c8u: goto label_16e9c8;
        case 0x16e9ccu: goto label_16e9cc;
        case 0x16e9d0u: goto label_16e9d0;
        case 0x16e9d4u: goto label_16e9d4;
        case 0x16e9d8u: goto label_16e9d8;
        case 0x16e9dcu: goto label_16e9dc;
        case 0x16e9e0u: goto label_16e9e0;
        case 0x16e9e4u: goto label_16e9e4;
        case 0x16e9e8u: goto label_16e9e8;
        case 0x16e9ecu: goto label_16e9ec;
        case 0x16e9f0u: goto label_16e9f0;
        case 0x16e9f4u: goto label_16e9f4;
        case 0x16e9f8u: goto label_16e9f8;
        case 0x16e9fcu: goto label_16e9fc;
        case 0x16ea00u: goto label_16ea00;
        case 0x16ea04u: goto label_16ea04;
        case 0x16ea08u: goto label_16ea08;
        case 0x16ea0cu: goto label_16ea0c;
        case 0x16ea10u: goto label_16ea10;
        case 0x16ea14u: goto label_16ea14;
        case 0x16ea18u: goto label_16ea18;
        case 0x16ea1cu: goto label_16ea1c;
        case 0x16ea20u: goto label_16ea20;
        case 0x16ea24u: goto label_16ea24;
        case 0x16ea28u: goto label_16ea28;
        case 0x16ea2cu: goto label_16ea2c;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea34u: goto label_16ea34;
        case 0x16ea38u: goto label_16ea38;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea40u: goto label_16ea40;
        case 0x16ea44u: goto label_16ea44;
        case 0x16ea48u: goto label_16ea48;
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        case 0x16ea54u: goto label_16ea54;
        case 0x16ea58u: goto label_16ea58;
        case 0x16ea5cu: goto label_16ea5c;
        case 0x16ea60u: goto label_16ea60;
        case 0x16ea64u: goto label_16ea64;
        case 0x16ea68u: goto label_16ea68;
        case 0x16ea6cu: goto label_16ea6c;
        case 0x16ea70u: goto label_16ea70;
        case 0x16ea74u: goto label_16ea74;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea7cu: goto label_16ea7c;
        case 0x16ea80u: goto label_16ea80;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea88u: goto label_16ea88;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16ea90u: goto label_16ea90;
        case 0x16ea94u: goto label_16ea94;
        case 0x16ea98u: goto label_16ea98;
        case 0x16ea9cu: goto label_16ea9c;
        case 0x16eaa0u: goto label_16eaa0;
        case 0x16eaa4u: goto label_16eaa4;
        case 0x16eaa8u: goto label_16eaa8;
        case 0x16eaacu: goto label_16eaac;
        case 0x16eab0u: goto label_16eab0;
        case 0x16eab4u: goto label_16eab4;
        case 0x16eab8u: goto label_16eab8;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eac0u: goto label_16eac0;
        case 0x16eac4u: goto label_16eac4;
        case 0x16eac8u: goto label_16eac8;
        case 0x16eaccu: goto label_16eacc;
        case 0x16ead0u: goto label_16ead0;
        case 0x16ead4u: goto label_16ead4;
        case 0x16ead8u: goto label_16ead8;
        case 0x16eadcu: goto label_16eadc;
        case 0x16eae0u: goto label_16eae0;
        case 0x16eae4u: goto label_16eae4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaecu: goto label_16eaec;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eaf4u: goto label_16eaf4;
        case 0x16eaf8u: goto label_16eaf8;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb04u: goto label_16eb04;
        case 0x16eb08u: goto label_16eb08;
        case 0x16eb0cu: goto label_16eb0c;
        case 0x16eb10u: goto label_16eb10;
        case 0x16eb14u: goto label_16eb14;
        case 0x16eb18u: goto label_16eb18;
        case 0x16eb1cu: goto label_16eb1c;
        case 0x16eb20u: goto label_16eb20;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb28u: goto label_16eb28;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb30u: goto label_16eb30;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb38u: goto label_16eb38;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb40u: goto label_16eb40;
        case 0x16eb44u: goto label_16eb44;
        case 0x16eb48u: goto label_16eb48;
        case 0x16eb4cu: goto label_16eb4c;
        case 0x16eb50u: goto label_16eb50;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb58u: goto label_16eb58;
        case 0x16eb5cu: goto label_16eb5c;
        case 0x16eb60u: goto label_16eb60;
        case 0x16eb64u: goto label_16eb64;
        case 0x16eb68u: goto label_16eb68;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb70u: goto label_16eb70;
        case 0x16eb74u: goto label_16eb74;
        case 0x16eb78u: goto label_16eb78;
        case 0x16eb7cu: goto label_16eb7c;
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eb88u: goto label_16eb88;
        case 0x16eb8cu: goto label_16eb8c;
        case 0x16eb90u: goto label_16eb90;
        case 0x16eb94u: goto label_16eb94;
        case 0x16eb98u: goto label_16eb98;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16eba0u: goto label_16eba0;
        case 0x16eba4u: goto label_16eba4;
        case 0x16eba8u: goto label_16eba8;
        case 0x16ebacu: goto label_16ebac;
        case 0x16ebb0u: goto label_16ebb0;
        case 0x16ebb4u: goto label_16ebb4;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebc4u: goto label_16ebc4;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebccu: goto label_16ebcc;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebd4u: goto label_16ebd4;
        case 0x16ebd8u: goto label_16ebd8;
        case 0x16ebdcu: goto label_16ebdc;
        case 0x16ebe0u: goto label_16ebe0;
        case 0x16ebe4u: goto label_16ebe4;
        case 0x16ebe8u: goto label_16ebe8;
        case 0x16ebecu: goto label_16ebec;
        case 0x16ebf0u: goto label_16ebf0;
        case 0x16ebf4u: goto label_16ebf4;
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec00u: goto label_16ec00;
        case 0x16ec04u: goto label_16ec04;
        case 0x16ec08u: goto label_16ec08;
        case 0x16ec0cu: goto label_16ec0c;
        case 0x16ec10u: goto label_16ec10;
        case 0x16ec14u: goto label_16ec14;
        case 0x16ec18u: goto label_16ec18;
        case 0x16ec1cu: goto label_16ec1c;
        case 0x16ec20u: goto label_16ec20;
        case 0x16ec24u: goto label_16ec24;
        case 0x16ec28u: goto label_16ec28;
        case 0x16ec2cu: goto label_16ec2c;
        case 0x16ec30u: goto label_16ec30;
        case 0x16ec34u: goto label_16ec34;
        case 0x16ec38u: goto label_16ec38;
        case 0x16ec3cu: goto label_16ec3c;
        case 0x16ec40u: goto label_16ec40;
        case 0x16ec44u: goto label_16ec44;
        case 0x16ec48u: goto label_16ec48;
        case 0x16ec4cu: goto label_16ec4c;
        case 0x16ec50u: goto label_16ec50;
        case 0x16ec54u: goto label_16ec54;
        case 0x16ec58u: goto label_16ec58;
        case 0x16ec5cu: goto label_16ec5c;
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec64u: goto label_16ec64;
        case 0x16ec68u: goto label_16ec68;
        case 0x16ec6cu: goto label_16ec6c;
        case 0x16ec70u: goto label_16ec70;
        case 0x16ec74u: goto label_16ec74;
        case 0x16ec78u: goto label_16ec78;
        case 0x16ec7cu: goto label_16ec7c;
        case 0x16ec80u: goto label_16ec80;
        case 0x16ec84u: goto label_16ec84;
        case 0x16ec88u: goto label_16ec88;
        case 0x16ec8cu: goto label_16ec8c;
        case 0x16ec90u: goto label_16ec90;
        case 0x16ec94u: goto label_16ec94;
        case 0x16ec98u: goto label_16ec98;
        case 0x16ec9cu: goto label_16ec9c;
        case 0x16eca0u: goto label_16eca0;
        case 0x16eca4u: goto label_16eca4;
        case 0x16eca8u: goto label_16eca8;
        case 0x16ecacu: goto label_16ecac;
        case 0x16ecb0u: goto label_16ecb0;
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecb8u: goto label_16ecb8;
        case 0x16ecbcu: goto label_16ecbc;
        case 0x16ecc0u: goto label_16ecc0;
        case 0x16ecc4u: goto label_16ecc4;
        case 0x16ecc8u: goto label_16ecc8;
        case 0x16ecccu: goto label_16eccc;
        case 0x16ecd0u: goto label_16ecd0;
        case 0x16ecd4u: goto label_16ecd4;
        case 0x16ecd8u: goto label_16ecd8;
        case 0x16ecdcu: goto label_16ecdc;
        case 0x16ece0u: goto label_16ece0;
        case 0x16ece4u: goto label_16ece4;
        case 0x16ece8u: goto label_16ece8;
        case 0x16ececu: goto label_16ecec;
        case 0x16ecf0u: goto label_16ecf0;
        case 0x16ecf4u: goto label_16ecf4;
        case 0x16ecf8u: goto label_16ecf8;
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed00u: goto label_16ed00;
        case 0x16ed04u: goto label_16ed04;
        case 0x16ed08u: goto label_16ed08;
        case 0x16ed0cu: goto label_16ed0c;
        case 0x16ed10u: goto label_16ed10;
        case 0x16ed14u: goto label_16ed14;
        case 0x16ed18u: goto label_16ed18;
        case 0x16ed1cu: goto label_16ed1c;
        case 0x16ed20u: goto label_16ed20;
        case 0x16ed24u: goto label_16ed24;
        case 0x16ed28u: goto label_16ed28;
        case 0x16ed2cu: goto label_16ed2c;
        case 0x16ed30u: goto label_16ed30;
        case 0x16ed34u: goto label_16ed34;
        case 0x16ed38u: goto label_16ed38;
        case 0x16ed3cu: goto label_16ed3c;
        case 0x16ed40u: goto label_16ed40;
        case 0x16ed44u: goto label_16ed44;
        case 0x16ed48u: goto label_16ed48;
        case 0x16ed4cu: goto label_16ed4c;
        case 0x16ed50u: goto label_16ed50;
        case 0x16ed54u: goto label_16ed54;
        case 0x16ed58u: goto label_16ed58;
        case 0x16ed5cu: goto label_16ed5c;
        case 0x16ed60u: goto label_16ed60;
        case 0x16ed64u: goto label_16ed64;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed6cu: goto label_16ed6c;
        case 0x16ed70u: goto label_16ed70;
        case 0x16ed74u: goto label_16ed74;
        case 0x16ed78u: goto label_16ed78;
        case 0x16ed7cu: goto label_16ed7c;
        case 0x16ed80u: goto label_16ed80;
        case 0x16ed84u: goto label_16ed84;
        case 0x16ed88u: goto label_16ed88;
        case 0x16ed8cu: goto label_16ed8c;
        case 0x16ed90u: goto label_16ed90;
        case 0x16ed94u: goto label_16ed94;
        case 0x16ed98u: goto label_16ed98;
        case 0x16ed9cu: goto label_16ed9c;
        case 0x16eda0u: goto label_16eda0;
        case 0x16eda4u: goto label_16eda4;
        case 0x16eda8u: goto label_16eda8;
        case 0x16edacu: goto label_16edac;
        case 0x16edb0u: goto label_16edb0;
        case 0x16edb4u: goto label_16edb4;
        case 0x16edb8u: goto label_16edb8;
        case 0x16edbcu: goto label_16edbc;
        case 0x16edc0u: goto label_16edc0;
        case 0x16edc4u: goto label_16edc4;
        case 0x16edc8u: goto label_16edc8;
        case 0x16edccu: goto label_16edcc;
        case 0x16edd0u: goto label_16edd0;
        case 0x16edd4u: goto label_16edd4;
        case 0x16edd8u: goto label_16edd8;
        case 0x16eddcu: goto label_16eddc;
        case 0x16ede0u: goto label_16ede0;
        case 0x16ede4u: goto label_16ede4;
        case 0x16ede8u: goto label_16ede8;
        case 0x16edecu: goto label_16edec;
        case 0x16edf0u: goto label_16edf0;
        case 0x16edf4u: goto label_16edf4;
        case 0x16edf8u: goto label_16edf8;
        case 0x16edfcu: goto label_16edfc;
        case 0x16ee00u: goto label_16ee00;
        case 0x16ee04u: goto label_16ee04;
        case 0x16ee08u: goto label_16ee08;
        case 0x16ee0cu: goto label_16ee0c;
        case 0x16ee10u: goto label_16ee10;
        case 0x16ee14u: goto label_16ee14;
        case 0x16ee18u: goto label_16ee18;
        case 0x16ee1cu: goto label_16ee1c;
        case 0x16ee20u: goto label_16ee20;
        case 0x16ee24u: goto label_16ee24;
        case 0x16ee28u: goto label_16ee28;
        case 0x16ee2cu: goto label_16ee2c;
        case 0x16ee30u: goto label_16ee30;
        case 0x16ee34u: goto label_16ee34;
        case 0x16ee38u: goto label_16ee38;
        case 0x16ee3cu: goto label_16ee3c;
        case 0x16ee40u: goto label_16ee40;
        case 0x16ee44u: goto label_16ee44;
        case 0x16ee48u: goto label_16ee48;
        case 0x16ee4cu: goto label_16ee4c;
        case 0x16ee50u: goto label_16ee50;
        case 0x16ee54u: goto label_16ee54;
        case 0x16ee58u: goto label_16ee58;
        case 0x16ee5cu: goto label_16ee5c;
        case 0x16ee60u: goto label_16ee60;
        case 0x16ee64u: goto label_16ee64;
        case 0x16ee68u: goto label_16ee68;
        case 0x16ee6cu: goto label_16ee6c;
        case 0x16ee70u: goto label_16ee70;
        case 0x16ee74u: goto label_16ee74;
        case 0x16ee78u: goto label_16ee78;
        case 0x16ee7cu: goto label_16ee7c;
        case 0x16ee80u: goto label_16ee80;
        case 0x16ee84u: goto label_16ee84;
        case 0x16ee88u: goto label_16ee88;
        case 0x16ee8cu: goto label_16ee8c;
        case 0x16ee90u: goto label_16ee90;
        case 0x16ee94u: goto label_16ee94;
        case 0x16ee98u: goto label_16ee98;
        case 0x16ee9cu: goto label_16ee9c;
        case 0x16eea0u: goto label_16eea0;
        case 0x16eea4u: goto label_16eea4;
        case 0x16eea8u: goto label_16eea8;
        case 0x16eeacu: goto label_16eeac;
        case 0x16eeb0u: goto label_16eeb0;
        case 0x16eeb4u: goto label_16eeb4;
        case 0x16eeb8u: goto label_16eeb8;
        case 0x16eebcu: goto label_16eebc;
        case 0x16eec0u: goto label_16eec0;
        case 0x16eec4u: goto label_16eec4;
        case 0x16eec8u: goto label_16eec8;
        case 0x16eeccu: goto label_16eecc;
        case 0x16eed0u: goto label_16eed0;
        case 0x16eed4u: goto label_16eed4;
        case 0x16eed8u: goto label_16eed8;
        case 0x16eedcu: goto label_16eedc;
        case 0x16eee0u: goto label_16eee0;
        case 0x16eee4u: goto label_16eee4;
        case 0x16eee8u: goto label_16eee8;
        case 0x16eeecu: goto label_16eeec;
        case 0x16eef0u: goto label_16eef0;
        case 0x16eef4u: goto label_16eef4;
        case 0x16eef8u: goto label_16eef8;
        case 0x16eefcu: goto label_16eefc;
        case 0x16ef00u: goto label_16ef00;
        case 0x16ef04u: goto label_16ef04;
        case 0x16ef08u: goto label_16ef08;
        case 0x16ef0cu: goto label_16ef0c;
        case 0x16ef10u: goto label_16ef10;
        case 0x16ef14u: goto label_16ef14;
        case 0x16ef18u: goto label_16ef18;
        case 0x16ef1cu: goto label_16ef1c;
        case 0x16ef20u: goto label_16ef20;
        case 0x16ef24u: goto label_16ef24;
        case 0x16ef28u: goto label_16ef28;
        case 0x16ef2cu: goto label_16ef2c;
        case 0x16ef30u: goto label_16ef30;
        case 0x16ef34u: goto label_16ef34;
        case 0x16ef38u: goto label_16ef38;
        case 0x16ef3cu: goto label_16ef3c;
        default: return;
    }

label_16e770:
    // 0x16e770: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e774:
    // 0x16e774: 0x0  nop
    ctx->pc = 0x16e774u;
    // NOP
label_16e778:
    // 0x16e778: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e77c:
    // 0x16e77c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e780:
    // 0x16e780: 0x8c24e29c  lw          $a0, -0x1D64($at)
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959772)));
label_16e784:
    // 0x16e784: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e788:
    if (ctx->pc == 0x16E788u) {
        ctx->pc = 0x16E78Cu;
        goto label_16e78c;
    }
    ctx->pc = 0x16E784u;
    {
        const bool branch_taken_0x16e784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e784) {
            ctx->pc = 0x16E794u;
            goto label_16e794;
        }
    }
    ctx->pc = 0x16E78Cu;
label_16e78c:
    // 0x16e78c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e790:
    if (ctx->pc == 0x16E790u) {
        ctx->pc = 0x16E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E78Cu;
        // 0x16e790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E794u;
        goto label_16e794;
    }
    ctx->pc = 0x16E78Cu;
    {
        const bool branch_taken_0x16e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E78Cu;
        // 0x16e790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e78c) {
            ctx->pc = 0x16E7ACu;
            goto label_16e7ac;
        }
    }
    ctx->pc = 0x16E794u;
label_16e794:
    // 0x16e794: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e798:
    // 0x16e798: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e79c:
    // 0x16e79c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e7a0:
    // 0x16e7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e7a4:
    // 0x16e7a4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e7a8:
    // 0x16e7a8: 0x0  nop
    ctx->pc = 0x16e7a8u;
    // NOP
label_16e7ac:
    // 0x16e7ac: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e7b0:
    // 0x16e7b0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e7b4:
    if (ctx->pc == 0x16E7B4u) {
        ctx->pc = 0x16E7B8u;
        goto label_16e7b8;
    }
    ctx->pc = 0x16E7B0u;
    {
        const bool branch_taken_0x16e7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e7b0) {
            ctx->pc = 0x16E7C0u;
            goto label_16e7c0;
        }
    }
    ctx->pc = 0x16E7B8u;
label_16e7b8:
    // 0x16e7b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e7bc:
    if (ctx->pc == 0x16E7BCu) {
        ctx->pc = 0x16E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7B8u;
        // 0x16e7bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E7C0u;
        goto label_16e7c0;
    }
    ctx->pc = 0x16E7B8u;
    {
        const bool branch_taken_0x16e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7B8u;
        // 0x16e7bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7b8) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E7C0u;
label_16e7c0:
    // 0x16e7c0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e7c4:
    // 0x16e7c4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e7c8:
    // 0x16e7c8: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e7cc:
    // 0x16e7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e7d0:
    // 0x16e7d0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e7d4:
    // 0x16e7d4: 0x0  nop
    ctx->pc = 0x16e7d4u;
    // NOP
label_16e7d8:
    // 0x16e7d8: 0x10000160  b           . + 4 + (0x160 << 2)
label_16e7dc:
    if (ctx->pc == 0x16E7DCu) {
        ctx->pc = 0x16E7E0u;
        goto label_16e7e0;
    }
    ctx->pc = 0x16E7D8u;
    {
        const bool branch_taken_0x16e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e7d8) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16E7E0u;
label_16e7e0:
    // 0x16e7e0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x16e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16e7e4:
    // 0x16e7e4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_16e7e8:
    // 0x16e7e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_16e7ec:
    if (ctx->pc == 0x16E7ECu) {
        ctx->pc = 0x16E7F0u;
        goto label_16e7f0;
    }
    ctx->pc = 0x16E7E8u;
    {
        const bool branch_taken_0x16e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e7e8) {
            ctx->pc = 0x16E8D0u;
            goto label_16e8d0;
        }
    }
    ctx->pc = 0x16E7F0u;
label_16e7f0:
    // 0x16e7f0: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_16e7f4:
    // 0x16e7f4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e7f8:
    // 0x16e7f8: 0x24631060  addiu       $v1, $v1, 0x1060
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4192));
label_16e7fc:
    // 0x16e7fc: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e800:
    // 0x16e800: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16e804:
    // 0x16e804: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e808:
    // 0x16e808: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e80c:
    // 0x16e80c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e810:
    if (ctx->pc == 0x16E810u) {
        ctx->pc = 0x16E814u;
        goto label_16e814;
    }
    ctx->pc = 0x16E80Cu;
    {
        const bool branch_taken_0x16e80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e80c) {
            ctx->pc = 0x16E81Cu;
            goto label_16e81c;
        }
    }
    ctx->pc = 0x16E814u;
label_16e814:
    // 0x16e814: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e818:
    if (ctx->pc == 0x16E818u) {
        ctx->pc = 0x16E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E814u;
        // 0x16e818: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E81Cu;
        goto label_16e81c;
    }
    ctx->pc = 0x16E814u;
    {
        const bool branch_taken_0x16e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E814u;
        // 0x16e818: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e814) {
            ctx->pc = 0x16E834u;
            goto label_16e834;
        }
    }
    ctx->pc = 0x16E81Cu;
label_16e81c:
    // 0x16e81c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e820:
    // 0x16e820: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e824:
    // 0x16e824: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e828:
    // 0x16e828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e82c:
    // 0x16e82c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e830:
    // 0x16e830: 0x0  nop
    ctx->pc = 0x16e830u;
    // NOP
label_16e834:
    // 0x16e834: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e838:
    // 0x16e838: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e83c:
    if (ctx->pc == 0x16E83Cu) {
        ctx->pc = 0x16E840u;
        goto label_16e840;
    }
    ctx->pc = 0x16E838u;
    {
        const bool branch_taken_0x16e838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e838) {
            ctx->pc = 0x16E848u;
            goto label_16e848;
        }
    }
    ctx->pc = 0x16E840u;
label_16e840:
    // 0x16e840: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e844:
    if (ctx->pc == 0x16E844u) {
        ctx->pc = 0x16E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E840u;
        // 0x16e844: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E848u;
        goto label_16e848;
    }
    ctx->pc = 0x16E840u;
    {
        const bool branch_taken_0x16e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E840u;
        // 0x16e844: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e840) {
            ctx->pc = 0x16E860u;
            goto label_16e860;
        }
    }
    ctx->pc = 0x16E848u;
label_16e848:
    // 0x16e848: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e84c:
    // 0x16e84c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e850:
    // 0x16e850: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e854:
    // 0x16e854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e858:
    // 0x16e858: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e85c:
    // 0x16e85c: 0x0  nop
    ctx->pc = 0x16e85cu;
    // NOP
label_16e860:
    // 0x16e860: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e864:
    // 0x16e864: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e868:
    // 0x16e868: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x16e868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_16e86c:
    // 0x16e86c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e870:
    // 0x16e870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e874:
    // 0x16e874: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e878:
    if (ctx->pc == 0x16E878u) {
        ctx->pc = 0x16E87Cu;
        goto label_16e87c;
    }
    ctx->pc = 0x16E874u;
    {
        const bool branch_taken_0x16e874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e874) {
            ctx->pc = 0x16E884u;
            goto label_16e884;
        }
    }
    ctx->pc = 0x16E87Cu;
label_16e87c:
    // 0x16e87c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e880:
    if (ctx->pc == 0x16E880u) {
        ctx->pc = 0x16E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E87Cu;
        // 0x16e880: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E884u;
        goto label_16e884;
    }
    ctx->pc = 0x16E87Cu;
    {
        const bool branch_taken_0x16e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E87Cu;
        // 0x16e880: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e87c) {
            ctx->pc = 0x16E89Cu;
            goto label_16e89c;
        }
    }
    ctx->pc = 0x16E884u;
label_16e884:
    // 0x16e884: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e888:
    // 0x16e888: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e88c:
    // 0x16e88c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e890:
    // 0x16e890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e894:
    // 0x16e894: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e898:
    // 0x16e898: 0x0  nop
    ctx->pc = 0x16e898u;
    // NOP
label_16e89c:
    // 0x16e89c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e8a0:
    // 0x16e8a0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e8a4:
    if (ctx->pc == 0x16E8A4u) {
        ctx->pc = 0x16E8A8u;
        goto label_16e8a8;
    }
    ctx->pc = 0x16E8A0u;
    {
        const bool branch_taken_0x16e8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e8a0) {
            ctx->pc = 0x16E8B0u;
            goto label_16e8b0;
        }
    }
    ctx->pc = 0x16E8A8u;
label_16e8a8:
    // 0x16e8a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e8ac:
    if (ctx->pc == 0x16E8ACu) {
        ctx->pc = 0x16E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8A8u;
        // 0x16e8ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8B0u;
        goto label_16e8b0;
    }
    ctx->pc = 0x16E8A8u;
    {
        const bool branch_taken_0x16e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8A8u;
        // 0x16e8ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8a8) {
            ctx->pc = 0x16E8C8u;
            goto label_16e8c8;
        }
    }
    ctx->pc = 0x16E8B0u;
label_16e8b0:
    // 0x16e8b0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e8b4:
    // 0x16e8b4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e8b8:
    // 0x16e8b8: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e8bc:
    // 0x16e8bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e8c0:
    // 0x16e8c0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e8c4:
    // 0x16e8c4: 0x0  nop
    ctx->pc = 0x16e8c4u;
    // NOP
label_16e8c8:
    // 0x16e8c8: 0x10000124  b           . + 4 + (0x124 << 2)
label_16e8cc:
    if (ctx->pc == 0x16E8CCu) {
        ctx->pc = 0x16E8D0u;
        goto label_16e8d0;
    }
    ctx->pc = 0x16E8C8u;
    {
        const bool branch_taken_0x16e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8c8) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16E8D0u;
label_16e8d0:
    // 0x16e8d0: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_16e8d4:
    // 0x16e8d4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e8d8:
    // 0x16e8d8: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
label_16e8dc:
    // 0x16e8dc: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e8e0:
    // 0x16e8e0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16e8e4:
    // 0x16e8e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e8e8:
    // 0x16e8e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e8ec:
    // 0x16e8ec: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e8f0:
    if (ctx->pc == 0x16E8F0u) {
        ctx->pc = 0x16E8F4u;
        goto label_16e8f4;
    }
    ctx->pc = 0x16E8ECu;
    {
        const bool branch_taken_0x16e8ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e8ec) {
            ctx->pc = 0x16E8FCu;
            goto label_16e8fc;
        }
    }
    ctx->pc = 0x16E8F4u;
label_16e8f4:
    // 0x16e8f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e8f8:
    if (ctx->pc == 0x16E8F8u) {
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8FCu;
        goto label_16e8fc;
    }
    ctx->pc = 0x16E8F4u;
    {
        const bool branch_taken_0x16e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8f4) {
            ctx->pc = 0x16E914u;
            goto label_16e914;
        }
    }
    ctx->pc = 0x16E8FCu;
label_16e8fc:
    // 0x16e8fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e900:
    // 0x16e900: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e904:
    // 0x16e904: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e908:
    // 0x16e908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e90c:
    // 0x16e90c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e90cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e910:
    // 0x16e910: 0x0  nop
    ctx->pc = 0x16e910u;
    // NOP
label_16e914:
    // 0x16e914: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e918:
    // 0x16e918: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e91c:
    if (ctx->pc == 0x16E91Cu) {
        ctx->pc = 0x16E920u;
        goto label_16e920;
    }
    ctx->pc = 0x16E918u;
    {
        const bool branch_taken_0x16e918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e918) {
            ctx->pc = 0x16E928u;
            goto label_16e928;
        }
    }
    ctx->pc = 0x16E920u;
label_16e920:
    // 0x16e920: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e924:
    if (ctx->pc == 0x16E924u) {
        ctx->pc = 0x16E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E920u;
        // 0x16e924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E928u;
        goto label_16e928;
    }
    ctx->pc = 0x16E920u;
    {
        const bool branch_taken_0x16e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E920u;
        // 0x16e924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e920) {
            ctx->pc = 0x16E940u;
            goto label_16e940;
        }
    }
    ctx->pc = 0x16E928u;
label_16e928:
    // 0x16e928: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e92c:
    // 0x16e92c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e930:
    // 0x16e930: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e934:
    // 0x16e934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e938:
    // 0x16e938: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e93c:
    // 0x16e93c: 0x0  nop
    ctx->pc = 0x16e93cu;
    // NOP
label_16e940:
    // 0x16e940: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e944:
    // 0x16e944: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e948:
    // 0x16e948: 0x24630f40  addiu       $v1, $v1, 0xF40
    ctx->pc = 0x16e948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3904));
label_16e94c:
    // 0x16e94c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e950:
    // 0x16e950: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e954:
    // 0x16e954: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e958:
    if (ctx->pc == 0x16E958u) {
        ctx->pc = 0x16E95Cu;
        goto label_16e95c;
    }
    ctx->pc = 0x16E954u;
    {
        const bool branch_taken_0x16e954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e954) {
            ctx->pc = 0x16E964u;
            goto label_16e964;
        }
    }
    ctx->pc = 0x16E95Cu;
label_16e95c:
    // 0x16e95c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e960:
    if (ctx->pc == 0x16E960u) {
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E964u;
        goto label_16e964;
    }
    ctx->pc = 0x16E95Cu;
    {
        const bool branch_taken_0x16e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e95c) {
            ctx->pc = 0x16E97Cu;
            goto label_16e97c;
        }
    }
    ctx->pc = 0x16E964u;
label_16e964:
    // 0x16e964: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e968:
    // 0x16e968: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e96c:
    // 0x16e96c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e970:
    // 0x16e970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e974:
    // 0x16e974: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e978:
    // 0x16e978: 0x0  nop
    ctx->pc = 0x16e978u;
    // NOP
label_16e97c:
    // 0x16e97c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e980:
    // 0x16e980: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e984:
    if (ctx->pc == 0x16E984u) {
        ctx->pc = 0x16E988u;
        goto label_16e988;
    }
    ctx->pc = 0x16E980u;
    {
        const bool branch_taken_0x16e980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e980) {
            ctx->pc = 0x16E990u;
            goto label_16e990;
        }
    }
    ctx->pc = 0x16E988u;
label_16e988:
    // 0x16e988: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e98c:
    if (ctx->pc == 0x16E98Cu) {
        ctx->pc = 0x16E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E988u;
        // 0x16e98c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E990u;
        goto label_16e990;
    }
    ctx->pc = 0x16E988u;
    {
        const bool branch_taken_0x16e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E988u;
        // 0x16e98c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e988) {
            ctx->pc = 0x16E9A8u;
            goto label_16e9a8;
        }
    }
    ctx->pc = 0x16E990u;
label_16e990:
    // 0x16e990: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e994:
    // 0x16e994: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e998:
    // 0x16e998: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e99c:
    // 0x16e99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e9a0:
    // 0x16e9a0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e9a4:
    // 0x16e9a4: 0x0  nop
    ctx->pc = 0x16e9a4u;
    // NOP
label_16e9a8:
    // 0x16e9a8: 0x100000ec  b           . + 4 + (0xEC << 2)
label_16e9ac:
    if (ctx->pc == 0x16E9ACu) {
        ctx->pc = 0x16E9B0u;
        goto label_16e9b0;
    }
    ctx->pc = 0x16E9A8u;
    {
        const bool branch_taken_0x16e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9a8) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16E9B0u;
label_16e9b0:
    // 0x16e9b0: 0x8f8481c0  lw          $a0, -0x7E40($gp)
    ctx->pc = 0x16e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934976)));
label_16e9b4:
    // 0x16e9b4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e9b8:
    // 0x16e9b8: 0x24631430  addiu       $v1, $v1, 0x1430
    ctx->pc = 0x16e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5168));
label_16e9bc:
    // 0x16e9bc: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e9c0:
    // 0x16e9c0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16e9c4:
    // 0x16e9c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e9c8:
    // 0x16e9c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e9cc:
    // 0x16e9cc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e9d0:
    if (ctx->pc == 0x16E9D0u) {
        ctx->pc = 0x16E9D4u;
        goto label_16e9d4;
    }
    ctx->pc = 0x16E9CCu;
    {
        const bool branch_taken_0x16e9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e9cc) {
            ctx->pc = 0x16E9DCu;
            goto label_16e9dc;
        }
    }
    ctx->pc = 0x16E9D4u;
label_16e9d4:
    // 0x16e9d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e9d8:
    if (ctx->pc == 0x16E9D8u) {
        ctx->pc = 0x16E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9D4u;
        // 0x16e9d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E9DCu;
        goto label_16e9dc;
    }
    ctx->pc = 0x16E9D4u;
    {
        const bool branch_taken_0x16e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9D4u;
        // 0x16e9d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9d4) {
            ctx->pc = 0x16E9F4u;
            goto label_16e9f4;
        }
    }
    ctx->pc = 0x16E9DCu;
label_16e9dc:
    // 0x16e9dc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e9e0:
    // 0x16e9e0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e9e4:
    // 0x16e9e4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e9e8:
    // 0x16e9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e9ec:
    // 0x16e9ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e9f0:
    // 0x16e9f0: 0x0  nop
    ctx->pc = 0x16e9f0u;
    // NOP
label_16e9f4:
    // 0x16e9f4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e9f8:
    // 0x16e9f8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e9fc:
    if (ctx->pc == 0x16E9FCu) {
        ctx->pc = 0x16EA00u;
        goto label_16ea00;
    }
    ctx->pc = 0x16E9F8u;
    {
        const bool branch_taken_0x16e9f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e9f8) {
            ctx->pc = 0x16EA08u;
            goto label_16ea08;
        }
    }
    ctx->pc = 0x16EA00u;
label_16ea00:
    // 0x16ea00: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ea04:
    if (ctx->pc == 0x16EA04u) {
        ctx->pc = 0x16EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA00u;
        // 0x16ea04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA08u;
        goto label_16ea08;
    }
    ctx->pc = 0x16EA00u;
    {
        const bool branch_taken_0x16ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA00u;
        // 0x16ea04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea00) {
            ctx->pc = 0x16EA20u;
            goto label_16ea20;
        }
    }
    ctx->pc = 0x16EA08u;
label_16ea08:
    // 0x16ea08: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ea0c:
    // 0x16ea0c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ea10:
    // 0x16ea10: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ea14:
    // 0x16ea14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ea18:
    // 0x16ea18: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ea1c:
    // 0x16ea1c: 0x0  nop
    ctx->pc = 0x16ea1cu;
    // NOP
label_16ea20:
    // 0x16ea20: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16ea24:
    // 0x16ea24: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ea28:
    // 0x16ea28: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x16ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_16ea2c:
    // 0x16ea2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16ea30:
    // 0x16ea30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ea34:
    // 0x16ea34: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ea38:
    if (ctx->pc == 0x16EA38u) {
        ctx->pc = 0x16EA3Cu;
        goto label_16ea3c;
    }
    ctx->pc = 0x16EA34u;
    {
        const bool branch_taken_0x16ea34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ea34) {
            ctx->pc = 0x16EA44u;
            goto label_16ea44;
        }
    }
    ctx->pc = 0x16EA3Cu;
label_16ea3c:
    // 0x16ea3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ea40:
    if (ctx->pc == 0x16EA40u) {
        ctx->pc = 0x16EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA3Cu;
        // 0x16ea40: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA44u;
        goto label_16ea44;
    }
    ctx->pc = 0x16EA3Cu;
    {
        const bool branch_taken_0x16ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA3Cu;
        // 0x16ea40: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea3c) {
            ctx->pc = 0x16EA5Cu;
            goto label_16ea5c;
        }
    }
    ctx->pc = 0x16EA44u;
label_16ea44:
    // 0x16ea44: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ea48:
    // 0x16ea48: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ea4c:
    // 0x16ea4c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ea50:
    // 0x16ea50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ea54:
    // 0x16ea54: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ea58:
    // 0x16ea58: 0x0  nop
    ctx->pc = 0x16ea58u;
    // NOP
label_16ea5c:
    // 0x16ea5c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ea60:
    // 0x16ea60: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ea64:
    if (ctx->pc == 0x16EA64u) {
        ctx->pc = 0x16EA68u;
        goto label_16ea68;
    }
    ctx->pc = 0x16EA60u;
    {
        const bool branch_taken_0x16ea60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ea60) {
            ctx->pc = 0x16EA70u;
            goto label_16ea70;
        }
    }
    ctx->pc = 0x16EA68u;
label_16ea68:
    // 0x16ea68: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ea6c:
    if (ctx->pc == 0x16EA6Cu) {
        ctx->pc = 0x16EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA68u;
        // 0x16ea6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA70u;
        goto label_16ea70;
    }
    ctx->pc = 0x16EA68u;
    {
        const bool branch_taken_0x16ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA68u;
        // 0x16ea6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea68) {
            ctx->pc = 0x16EA88u;
            goto label_16ea88;
        }
    }
    ctx->pc = 0x16EA70u;
label_16ea70:
    // 0x16ea70: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ea74:
    // 0x16ea74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ea78:
    // 0x16ea78: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ea7c:
    // 0x16ea7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ea80:
    // 0x16ea80: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16ea80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ea84:
    // 0x16ea84: 0x0  nop
    ctx->pc = 0x16ea84u;
    // NOP
label_16ea88:
    // 0x16ea88: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_16ea8c:
    if (ctx->pc == 0x16EA8Cu) {
        ctx->pc = 0x16EA90u;
        goto label_16ea90;
    }
    ctx->pc = 0x16EA88u;
    {
        const bool branch_taken_0x16ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea88) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16EA90u;
label_16ea90:
    // 0x16ea90: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16ea94:
    // 0x16ea94: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_16ea98:
    if (ctx->pc == 0x16EA98u) {
        ctx->pc = 0x16EA9Cu;
        goto label_16ea9c;
    }
    ctx->pc = 0x16EA94u;
    {
        const bool branch_taken_0x16ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea94) {
            ctx->pc = 0x16EB80u;
            goto label_16eb80;
        }
    }
    ctx->pc = 0x16EA9Cu;
label_16ea9c:
    // 0x16ea9c: 0xc056adc  jal         func_15AB70
label_16eaa0:
    if (ctx->pc == 0x16EAA0u) {
        ctx->pc = 0x16EAA4u;
        goto label_16eaa4;
    }
    ctx->pc = 0x16EA9Cu;
    SET_GPR_U32(ctx, 31, 0x16EAA4u);
    ctx->pc = 0x15AB70u;
    { ctx->pc = 0x15ab70; return; }
    ctx->pc = 0x16EAA4u;
label_16eaa4:
    // 0x16eaa4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16eaa8:
    // 0x16eaa8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16eaac:
    // 0x16eaac: 0x244212f0  addiu       $v0, $v0, 0x12F0
    ctx->pc = 0x16eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
label_16eab0:
    // 0x16eab0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16eab4:
    // 0x16eab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16eab8:
    // 0x16eab8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16eabc:
    // 0x16eabc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16eac0:
    if (ctx->pc == 0x16EAC0u) {
        ctx->pc = 0x16EAC4u;
        goto label_16eac4;
    }
    ctx->pc = 0x16EABCu;
    {
        const bool branch_taken_0x16eabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eabc) {
            ctx->pc = 0x16EACCu;
            goto label_16eacc;
        }
    }
    ctx->pc = 0x16EAC4u;
label_16eac4:
    // 0x16eac4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16eac8:
    if (ctx->pc == 0x16EAC8u) {
        ctx->pc = 0x16EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAC4u;
        // 0x16eac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EACCu;
        goto label_16eacc;
    }
    ctx->pc = 0x16EAC4u;
    {
        const bool branch_taken_0x16eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAC4u;
        // 0x16eac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eac4) {
            ctx->pc = 0x16EAE4u;
            goto label_16eae4;
        }
    }
    ctx->pc = 0x16EACCu;
label_16eacc:
    // 0x16eacc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ead0:
    // 0x16ead0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ead4:
    // 0x16ead4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ead8:
    // 0x16ead8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eadc:
    // 0x16eadc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eae0:
    // 0x16eae0: 0x0  nop
    ctx->pc = 0x16eae0u;
    // NOP
label_16eae4:
    // 0x16eae4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16eae8:
    // 0x16eae8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16eaec:
    if (ctx->pc == 0x16EAECu) {
        ctx->pc = 0x16EAF0u;
        goto label_16eaf0;
    }
    ctx->pc = 0x16EAE8u;
    {
        const bool branch_taken_0x16eae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eae8) {
            ctx->pc = 0x16EAF8u;
            goto label_16eaf8;
        }
    }
    ctx->pc = 0x16EAF0u;
label_16eaf0:
    // 0x16eaf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_16eaf4:
    if (ctx->pc == 0x16EAF4u) {
        ctx->pc = 0x16EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAF0u;
        // 0x16eaf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EAF8u;
        goto label_16eaf8;
    }
    ctx->pc = 0x16EAF0u;
    {
        const bool branch_taken_0x16eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAF0u;
        // 0x16eaf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaf0) {
            ctx->pc = 0x16EB10u;
            goto label_16eb10;
        }
    }
    ctx->pc = 0x16EAF8u;
label_16eaf8:
    // 0x16eaf8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16eafc:
    // 0x16eafc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eb00:
    // 0x16eb00: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16eb04:
    // 0x16eb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eb08:
    // 0x16eb08: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eb0c:
    // 0x16eb0c: 0x0  nop
    ctx->pc = 0x16eb0cu;
    // NOP
label_16eb10:
    // 0x16eb10: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16eb14:
    // 0x16eb14: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16eb18:
    // 0x16eb18: 0x24631260  addiu       $v1, $v1, 0x1260
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4704));
label_16eb1c:
    // 0x16eb1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16eb20:
    // 0x16eb20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16eb24:
    // 0x16eb24: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16eb28:
    if (ctx->pc == 0x16EB28u) {
        ctx->pc = 0x16EB2Cu;
        goto label_16eb2c;
    }
    ctx->pc = 0x16EB24u;
    {
        const bool branch_taken_0x16eb24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eb24) {
            ctx->pc = 0x16EB34u;
            goto label_16eb34;
        }
    }
    ctx->pc = 0x16EB2Cu;
label_16eb2c:
    // 0x16eb2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16eb30:
    if (ctx->pc == 0x16EB30u) {
        ctx->pc = 0x16EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB2Cu;
        // 0x16eb30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB34u;
        goto label_16eb34;
    }
    ctx->pc = 0x16EB2Cu;
    {
        const bool branch_taken_0x16eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB2Cu;
        // 0x16eb30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb2c) {
            ctx->pc = 0x16EB4Cu;
            goto label_16eb4c;
        }
    }
    ctx->pc = 0x16EB34u;
label_16eb34:
    // 0x16eb34: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16eb38:
    // 0x16eb38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eb3c:
    // 0x16eb3c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16eb40:
    // 0x16eb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eb44:
    // 0x16eb44: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eb48:
    // 0x16eb48: 0x0  nop
    ctx->pc = 0x16eb48u;
    // NOP
label_16eb4c:
    // 0x16eb4c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16eb50:
    // 0x16eb50: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16eb54:
    if (ctx->pc == 0x16EB54u) {
        ctx->pc = 0x16EB58u;
        goto label_16eb58;
    }
    ctx->pc = 0x16EB50u;
    {
        const bool branch_taken_0x16eb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eb50) {
            ctx->pc = 0x16EB60u;
            goto label_16eb60;
        }
    }
    ctx->pc = 0x16EB58u;
label_16eb58:
    // 0x16eb58: 0x10000007  b           . + 4 + (0x7 << 2)
label_16eb5c:
    if (ctx->pc == 0x16EB5Cu) {
        ctx->pc = 0x16EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB58u;
        // 0x16eb5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB60u;
        goto label_16eb60;
    }
    ctx->pc = 0x16EB58u;
    {
        const bool branch_taken_0x16eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB58u;
        // 0x16eb5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb58) {
            ctx->pc = 0x16EB78u;
            goto label_16eb78;
        }
    }
    ctx->pc = 0x16EB60u;
label_16eb60:
    // 0x16eb60: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16eb64:
    // 0x16eb64: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eb68:
    // 0x16eb68: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16eb6c:
    // 0x16eb6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eb70:
    // 0x16eb70: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eb74:
    // 0x16eb74: 0x0  nop
    ctx->pc = 0x16eb74u;
    // NOP
label_16eb78:
    // 0x16eb78: 0x10000078  b           . + 4 + (0x78 << 2)
label_16eb7c:
    if (ctx->pc == 0x16EB7Cu) {
        ctx->pc = 0x16EB80u;
        goto label_16eb80;
    }
    ctx->pc = 0x16EB78u;
    {
        const bool branch_taken_0x16eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb78) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16EB80u;
label_16eb80:
    // 0x16eb80: 0xc056b60  jal         func_15AD80
label_16eb84:
    if (ctx->pc == 0x16EB84u) {
        ctx->pc = 0x16EB88u;
        goto label_16eb88;
    }
    ctx->pc = 0x16EB80u;
    SET_GPR_U32(ctx, 31, 0x16EB88u);
    ctx->pc = 0x15AD80u;
    { ctx->pc = 0x15ad80; return; }
    ctx->pc = 0x16EB88u;
label_16eb88:
    // 0x16eb88: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16eb8c:
    // 0x16eb8c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16eb90:
    // 0x16eb90: 0x24421190  addiu       $v0, $v0, 0x1190
    ctx->pc = 0x16eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4496));
label_16eb94:
    // 0x16eb94: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16eb98:
    // 0x16eb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16eb9c:
    // 0x16eb9c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16eba0:
    // 0x16eba0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16eba4:
    if (ctx->pc == 0x16EBA4u) {
        ctx->pc = 0x16EBA8u;
        goto label_16eba8;
    }
    ctx->pc = 0x16EBA0u;
    {
        const bool branch_taken_0x16eba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eba0) {
            ctx->pc = 0x16EBB0u;
            goto label_16ebb0;
        }
    }
    ctx->pc = 0x16EBA8u;
label_16eba8:
    // 0x16eba8: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ebac:
    if (ctx->pc == 0x16EBACu) {
        ctx->pc = 0x16EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBA8u;
        // 0x16ebac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBB0u;
        goto label_16ebb0;
    }
    ctx->pc = 0x16EBA8u;
    {
        const bool branch_taken_0x16eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBA8u;
        // 0x16ebac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eba8) {
            ctx->pc = 0x16EBC8u;
            goto label_16ebc8;
        }
    }
    ctx->pc = 0x16EBB0u;
label_16ebb0:
    // 0x16ebb0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ebb4:
    // 0x16ebb4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ebb8:
    // 0x16ebb8: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ebbc:
    // 0x16ebbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ebc0:
    // 0x16ebc0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16ebc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ebc4:
    // 0x16ebc4: 0x0  nop
    ctx->pc = 0x16ebc4u;
    // NOP
label_16ebc8:
    // 0x16ebc8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ebcc:
    // 0x16ebcc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ebd0:
    if (ctx->pc == 0x16EBD0u) {
        ctx->pc = 0x16EBD4u;
        goto label_16ebd4;
    }
    ctx->pc = 0x16EBCCu;
    {
        const bool branch_taken_0x16ebcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ebcc) {
            ctx->pc = 0x16EBDCu;
            goto label_16ebdc;
        }
    }
    ctx->pc = 0x16EBD4u;
label_16ebd4:
    // 0x16ebd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ebd8:
    if (ctx->pc == 0x16EBD8u) {
        ctx->pc = 0x16EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD4u;
        // 0x16ebd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBDCu;
        goto label_16ebdc;
    }
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD4u;
        // 0x16ebd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EBF4u;
            goto label_16ebf4;
        }
    }
    ctx->pc = 0x16EBDCu;
label_16ebdc:
    // 0x16ebdc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ebe0:
    // 0x16ebe0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ebe4:
    // 0x16ebe4: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ebe8:
    // 0x16ebe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ebec:
    // 0x16ebec: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ebf0:
    // 0x16ebf0: 0x0  nop
    ctx->pc = 0x16ebf0u;
    // NOP
label_16ebf4:
    // 0x16ebf4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16ebf8:
    // 0x16ebf8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ebfc:
    // 0x16ebfc: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
label_16ec00:
    // 0x16ec00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16ec04:
    // 0x16ec04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ec08:
    // 0x16ec08: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ec0c:
    if (ctx->pc == 0x16EC0Cu) {
        ctx->pc = 0x16EC10u;
        goto label_16ec10;
    }
    ctx->pc = 0x16EC08u;
    {
        const bool branch_taken_0x16ec08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ec08) {
            ctx->pc = 0x16EC18u;
            goto label_16ec18;
        }
    }
    ctx->pc = 0x16EC10u;
label_16ec10:
    // 0x16ec10: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ec14:
    if (ctx->pc == 0x16EC14u) {
        ctx->pc = 0x16EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC10u;
        // 0x16ec14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC18u;
        goto label_16ec18;
    }
    ctx->pc = 0x16EC10u;
    {
        const bool branch_taken_0x16ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC10u;
        // 0x16ec14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec10) {
            ctx->pc = 0x16EC30u;
            goto label_16ec30;
        }
    }
    ctx->pc = 0x16EC18u;
label_16ec18:
    // 0x16ec18: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ec1c:
    // 0x16ec1c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ec20:
    // 0x16ec20: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ec24:
    // 0x16ec24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ec28:
    // 0x16ec28: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16ec28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ec2c:
    // 0x16ec2c: 0x0  nop
    ctx->pc = 0x16ec2cu;
    // NOP
label_16ec30:
    // 0x16ec30: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ec34:
    // 0x16ec34: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ec38:
    if (ctx->pc == 0x16EC38u) {
        ctx->pc = 0x16EC3Cu;
        goto label_16ec3c;
    }
    ctx->pc = 0x16EC34u;
    {
        const bool branch_taken_0x16ec34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ec34) {
            ctx->pc = 0x16EC44u;
            goto label_16ec44;
        }
    }
    ctx->pc = 0x16EC3Cu;
label_16ec3c:
    // 0x16ec3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ec40:
    if (ctx->pc == 0x16EC40u) {
        ctx->pc = 0x16EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC3Cu;
        // 0x16ec40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC44u;
        goto label_16ec44;
    }
    ctx->pc = 0x16EC3Cu;
    {
        const bool branch_taken_0x16ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC3Cu;
        // 0x16ec40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec3c) {
            ctx->pc = 0x16EC5Cu;
            goto label_16ec5c;
        }
    }
    ctx->pc = 0x16EC44u;
label_16ec44:
    // 0x16ec44: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ec48:
    // 0x16ec48: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ec4c:
    // 0x16ec4c: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ec50:
    // 0x16ec50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ec54:
    // 0x16ec54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ec58:
    // 0x16ec58: 0x0  nop
    ctx->pc = 0x16ec58u;
    // NOP
label_16ec5c:
    // 0x16ec5c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_16ec60:
    if (ctx->pc == 0x16EC60u) {
        ctx->pc = 0x16EC64u;
        goto label_16ec64;
    }
    ctx->pc = 0x16EC5Cu;
    {
        const bool branch_taken_0x16ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec5c) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16EC64u;
label_16ec64:
    // 0x16ec64: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x16ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16ec68:
    // 0x16ec68: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16ec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_16ec6c:
    // 0x16ec6c: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
label_16ec70:
    if (ctx->pc == 0x16EC70u) {
        ctx->pc = 0x16EC74u;
        goto label_16ec74;
    }
    ctx->pc = 0x16EC6Cu;
    {
        const bool branch_taken_0x16ec6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec6c) {
            ctx->pc = 0x16EE94u;
            goto label_16ee94;
        }
    }
    ctx->pc = 0x16EC74u;
label_16ec74:
    // 0x16ec74: 0x8f8481c4  lw          $a0, -0x7E3C($gp)
    ctx->pc = 0x16ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934980)));
label_16ec78:
    // 0x16ec78: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16ec7c:
    // 0x16ec7c: 0x24631430  addiu       $v1, $v1, 0x1430
    ctx->pc = 0x16ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5168));
label_16ec80:
    // 0x16ec80: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ec84:
    // 0x16ec84: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ec88:
    // 0x16ec88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16ec8c:
    // 0x16ec8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ec90:
    // 0x16ec90: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ec94:
    if (ctx->pc == 0x16EC94u) {
        ctx->pc = 0x16EC98u;
        goto label_16ec98;
    }
    ctx->pc = 0x16EC90u;
    {
        const bool branch_taken_0x16ec90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ec90) {
            ctx->pc = 0x16ECA0u;
            goto label_16eca0;
        }
    }
    ctx->pc = 0x16EC98u;
label_16ec98:
    // 0x16ec98: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ec9c:
    if (ctx->pc == 0x16EC9Cu) {
        ctx->pc = 0x16EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC98u;
        // 0x16ec9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECA0u;
        goto label_16eca0;
    }
    ctx->pc = 0x16EC98u;
    {
        const bool branch_taken_0x16ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC98u;
        // 0x16ec9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec98) {
            ctx->pc = 0x16ECB8u;
            goto label_16ecb8;
        }
    }
    ctx->pc = 0x16ECA0u;
label_16eca0:
    // 0x16eca0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16eca4:
    // 0x16eca4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eca8:
    // 0x16eca8: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ecac:
    // 0x16ecac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ecb0:
    // 0x16ecb0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16ecb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ecb4:
    // 0x16ecb4: 0x0  nop
    ctx->pc = 0x16ecb4u;
    // NOP
label_16ecb8:
    // 0x16ecb8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ecbc:
    // 0x16ecbc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ecc0:
    if (ctx->pc == 0x16ECC0u) {
        ctx->pc = 0x16ECC4u;
        goto label_16ecc4;
    }
    ctx->pc = 0x16ECBCu;
    {
        const bool branch_taken_0x16ecbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ecbc) {
            ctx->pc = 0x16ECCCu;
            goto label_16eccc;
        }
    }
    ctx->pc = 0x16ECC4u;
label_16ecc4:
    // 0x16ecc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ecc8:
    if (ctx->pc == 0x16ECC8u) {
        ctx->pc = 0x16ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECC4u;
        // 0x16ecc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECCCu;
        goto label_16eccc;
    }
    ctx->pc = 0x16ECC4u;
    {
        const bool branch_taken_0x16ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECC4u;
        // 0x16ecc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecc4) {
            ctx->pc = 0x16ECE4u;
            goto label_16ece4;
        }
    }
    ctx->pc = 0x16ECCCu;
label_16eccc:
    // 0x16eccc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ecd0:
    // 0x16ecd0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ecd4:
    // 0x16ecd4: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ecd8:
    // 0x16ecd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ecdc:
    // 0x16ecdc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ece0:
    // 0x16ece0: 0x0  nop
    ctx->pc = 0x16ece0u;
    // NOP
label_16ece4:
    // 0x16ece4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16ece8:
    // 0x16ece8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ecec:
    // 0x16ecec: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_16ecf0:
    // 0x16ecf0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16ecf4:
    // 0x16ecf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ecf8:
    // 0x16ecf8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ecfc:
    if (ctx->pc == 0x16ECFCu) {
        ctx->pc = 0x16ED00u;
        goto label_16ed00;
    }
    ctx->pc = 0x16ECF8u;
    {
        const bool branch_taken_0x16ecf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ecf8) {
            ctx->pc = 0x16ED08u;
            goto label_16ed08;
        }
    }
    ctx->pc = 0x16ED00u;
label_16ed00:
    // 0x16ed00: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ed04:
    if (ctx->pc == 0x16ED04u) {
        ctx->pc = 0x16ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED00u;
        // 0x16ed04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED08u;
        goto label_16ed08;
    }
    ctx->pc = 0x16ED00u;
    {
        const bool branch_taken_0x16ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED00u;
        // 0x16ed04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed00) {
            ctx->pc = 0x16ED20u;
            goto label_16ed20;
        }
    }
    ctx->pc = 0x16ED08u;
label_16ed08:
    // 0x16ed08: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ed0c:
    // 0x16ed0c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ed10:
    // 0x16ed10: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16ed14:
    // 0x16ed14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ed18:
    // 0x16ed18: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ed1c:
    // 0x16ed1c: 0x0  nop
    ctx->pc = 0x16ed1cu;
    // NOP
label_16ed20:
    // 0x16ed20: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ed24:
    // 0x16ed24: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16ed28:
    if (ctx->pc == 0x16ED28u) {
        ctx->pc = 0x16ED2Cu;
        goto label_16ed2c;
    }
    ctx->pc = 0x16ED24u;
    {
        const bool branch_taken_0x16ed24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ed24) {
            ctx->pc = 0x16ED34u;
            goto label_16ed34;
        }
    }
    ctx->pc = 0x16ED2Cu;
label_16ed2c:
    // 0x16ed2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16ed30:
    if (ctx->pc == 0x16ED30u) {
        ctx->pc = 0x16ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED2Cu;
        // 0x16ed30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED34u;
        goto label_16ed34;
    }
    ctx->pc = 0x16ED2Cu;
    {
        const bool branch_taken_0x16ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED2Cu;
        // 0x16ed30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed2c) {
            ctx->pc = 0x16ED4Cu;
            goto label_16ed4c;
        }
    }
    ctx->pc = 0x16ED34u;
label_16ed34:
    // 0x16ed34: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16ed38:
    // 0x16ed38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ed3c:
    // 0x16ed3c: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16ed40:
    // 0x16ed40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ed44:
    // 0x16ed44: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ed48:
    // 0x16ed48: 0x0  nop
    ctx->pc = 0x16ed48u;
    // NOP
label_16ed4c:
    // 0x16ed4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16ed50:
    if (ctx->pc == 0x16ED50u) {
        ctx->pc = 0x16ED54u;
        goto label_16ed54;
    }
    ctx->pc = 0x16ED4Cu;
    {
        const bool branch_taken_0x16ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed4c) {
            ctx->pc = 0x16ED5Cu;
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16ED54u;
label_16ed54:
    // 0x16ed54: 0x1000004f  b           . + 4 + (0x4F << 2)
label_16ed58:
    if (ctx->pc == 0x16ED58u) {
        ctx->pc = 0x16ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED54u;
        // 0x16ed58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED5Cu;
        goto label_16ed5c;
    }
    ctx->pc = 0x16ED54u;
    {
        const bool branch_taken_0x16ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED54u;
        // 0x16ed58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed54) {
            ctx->pc = 0x16EE94u;
            goto label_16ee94;
        }
    }
    ctx->pc = 0x16ED5Cu;
label_16ed5c:
    // 0x16ed5c: 0x1312c2  srl         $v0, $s3, 11
    ctx->pc = 0x16ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 11));
label_16ed60:
    // 0x16ed60: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_16ed64:
    // 0x16ed64: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x16ed64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16ed68:
    // 0x16ed68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16ed6c:
    // 0x16ed6c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_16ed70:
    // 0x16ed70: 0x3b8c0  sll         $s7, $v1, 3
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_16ed74:
    // 0x16ed74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ed78:
    // 0x16ed78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16ed7c:
    // 0x16ed7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16ed7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ed80:
    // 0x16ed80: 0x57a821  addu        $s5, $v0, $s7
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_16ed84:
    // 0x16ed84: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_16ed88:
    // 0x16ed88: 0xc08d69a  jal         func_235A68
label_16ed8c:
    if (ctx->pc == 0x16ED8Cu) {
        ctx->pc = 0x16ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED88u;
        // 0x16ed8c: 0x26be0010  addiu       $fp, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED90u;
        goto label_16ed90;
    }
    ctx->pc = 0x16ED88u;
    SET_GPR_U32(ctx, 31, 0x16ED90u);
    ctx->pc = 0x16ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED88u;
    // 0x16ed8c: 0x26be0010  addiu       $fp, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A68u;
    { ctx->pc = 0x235a68; return; }
    ctx->pc = 0x16ED90u;
label_16ed90:
    // 0x16ed90: 0x440fff2  bltz        $v0, . + 4 + (-0xE << 2)
label_16ed94:
    if (ctx->pc == 0x16ED94u) {
        ctx->pc = 0x16ED98u;
        goto label_16ed98;
    }
    ctx->pc = 0x16ED90u;
    {
        const bool branch_taken_0x16ed90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16ed90) {
            ctx->pc = 0x16ED5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed5c;
        }
    }
    ctx->pc = 0x16ED98u;
label_16ed98:
    // 0x16ed98: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x16ed98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_16ed9c:
    // 0x16ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eda0:
    // 0x16eda0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16eda4:
    // 0x16eda4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16eda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16eda8:
    // 0x16eda8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16eda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16edac:
    // 0x16edac: 0xc08d6d0  jal         func_235B40
label_16edb0:
    if (ctx->pc == 0x16EDB0u) {
        ctx->pc = 0x16EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDACu;
        // 0x16edb0: 0x26b30014  addiu       $s3, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDB4u;
        goto label_16edb4;
    }
    ctx->pc = 0x16EDACu;
    SET_GPR_U32(ctx, 31, 0x16EDB4u);
    ctx->pc = 0x16EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDACu;
    // 0x16edb0: 0x26b30014  addiu       $s3, $s5, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B40u;
    { ctx->pc = 0x235b40; return; }
    ctx->pc = 0x16EDB4u;
label_16edb4:
    // 0x16edb4: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
label_16edb8:
    if (ctx->pc == 0x16EDB8u) {
        ctx->pc = 0x16EDBCu;
        goto label_16edbc;
    }
    ctx->pc = 0x16EDB4u;
    {
        const bool branch_taken_0x16edb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16edb4) {
            ctx->pc = 0x16ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed98;
        }
    }
    ctx->pc = 0x16EDBCu;
label_16edbc:
    // 0x16edbc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x16edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_16edc0:
    // 0x16edc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16edc4:
    // 0x16edc4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_16edc8:
    if (ctx->pc == 0x16EDC8u) {
        ctx->pc = 0x16EDCCu;
        goto label_16edcc;
    }
    ctx->pc = 0x16EDC4u;
    {
        const bool branch_taken_0x16edc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16edc4) {
            ctx->pc = 0x16EDDCu;
            goto label_16eddc;
        }
    }
    ctx->pc = 0x16EDCCu;
label_16edcc:
    // 0x16edcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16edd0:
    if (ctx->pc == 0x16EDD0u) {
        ctx->pc = 0x16EDD4u;
        goto label_16edd4;
    }
    ctx->pc = 0x16EDCCu;
    {
        const bool branch_taken_0x16edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edcc) {
            ctx->pc = 0x16EDDCu;
            goto label_16eddc;
        }
    }
    ctx->pc = 0x16EDD4u;
label_16edd4:
    // 0x16edd4: 0x10000016  b           . + 4 + (0x16 << 2)
label_16edd8:
    if (ctx->pc == 0x16EDD8u) {
        ctx->pc = 0x16EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDD4u;
        // 0x16edd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDDCu;
        goto label_16eddc;
    }
    ctx->pc = 0x16EDD4u;
    {
        const bool branch_taken_0x16edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDD4u;
        // 0x16edd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edd4) {
            ctx->pc = 0x16EE30u;
            goto label_16ee30;
        }
    }
    ctx->pc = 0x16EDDCu;
label_16eddc:
    // 0x16eddc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_16ede0:
    // 0x16ede0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ede4:
    // 0x16ede4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16ede4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ede8:
    // 0x16ede8: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_16edec:
    // 0x16edec: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x16edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_16edf0:
    // 0x16edf0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_16edf4:
    // 0x16edf4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x16edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_16edf8:
    // 0x16edf8: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x16edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_16edfc:
    // 0x16edfc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ee00:
    // 0x16ee00: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_16ee04:
    // 0x16ee04: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x16ee04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ee08:
    // 0x16ee08: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x16ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_16ee0c:
    // 0x16ee0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ee10:
    // 0x16ee10: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x16ee10u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16ee14:
    // 0x16ee14: 0xc08d290  jal         func_234A40
label_16ee18:
    if (ctx->pc == 0x16EE18u) {
        ctx->pc = 0x16EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE14u;
        // 0x16ee18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE1Cu;
        goto label_16ee1c;
    }
    ctx->pc = 0x16EE14u;
    SET_GPR_U32(ctx, 31, 0x16EE1Cu);
    ctx->pc = 0x16EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE14u;
    // 0x16ee18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234A40u;
    { ctx->pc = 0x234a40; return; }
    ctx->pc = 0x16EE1Cu;
label_16ee1c:
    // 0x16ee1c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
label_16ee20:
    if (ctx->pc == 0x16EE20u) {
        ctx->pc = 0x16EE24u;
        goto label_16ee24;
    }
    ctx->pc = 0x16EE1Cu;
    {
        const bool branch_taken_0x16ee1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ee1c) {
            ctx->pc = 0x16EE90u;
            goto label_16ee90;
        }
    }
    ctx->pc = 0x16EE24u;
label_16ee24:
    // 0x16ee24: 0x1000001b  b           . + 4 + (0x1B << 2)
label_16ee28:
    if (ctx->pc == 0x16EE28u) {
        ctx->pc = 0x16EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE24u;
        // 0x16ee28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE2Cu;
        goto label_16ee2c;
    }
    ctx->pc = 0x16EE24u;
    {
        const bool branch_taken_0x16ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE24u;
        // 0x16ee28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee24) {
            ctx->pc = 0x16EE94u;
            goto label_16ee94;
        }
    }
    ctx->pc = 0x16EE2Cu;
label_16ee2c:
    // 0x16ee2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16ee2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ee30:
    // 0x16ee30: 0x10000013  b           . + 4 + (0x13 << 2)
label_16ee34:
    if (ctx->pc == 0x16EE34u) {
        ctx->pc = 0x16EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE30u;
        // 0x16ee34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE38u;
        goto label_16ee38;
    }
    ctx->pc = 0x16EE30u;
    {
        const bool branch_taken_0x16ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE30u;
        // 0x16ee34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee30) {
            ctx->pc = 0x16EE80u;
            goto label_16ee80;
        }
    }
    ctx->pc = 0x16EE38u;
label_16ee38:
    // 0x16ee38: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x16ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_16ee3c:
    // 0x16ee3c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x16ee3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16ee40:
    // 0x16ee40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16ee44:
    // 0x16ee44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ee48:
    // 0x16ee48: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x16ee48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_16ee4c:
    // 0x16ee4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16ee4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ee50:
    // 0x16ee50: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_16ee54:
    // 0x16ee54: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_16ee58:
    // 0x16ee58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ee5c:
    // 0x16ee5c: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x16ee5cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16ee60:
    // 0x16ee60: 0xc08d290  jal         func_234A40
label_16ee64:
    if (ctx->pc == 0x16EE64u) {
        ctx->pc = 0x16EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE60u;
        // 0x16ee64: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE68u;
        goto label_16ee68;
    }
    ctx->pc = 0x16EE60u;
    SET_GPR_U32(ctx, 31, 0x16EE68u);
    ctx->pc = 0x16EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE60u;
    // 0x16ee64: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234A40u;
    { ctx->pc = 0x234a40; return; }
    ctx->pc = 0x16EE68u;
label_16ee68:
    // 0x16ee68: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16ee6c:
    if (ctx->pc == 0x16EE6Cu) {
        ctx->pc = 0x16EE70u;
        goto label_16ee70;
    }
    ctx->pc = 0x16EE68u;
    {
        const bool branch_taken_0x16ee68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ee68) {
            ctx->pc = 0x16EE78u;
            goto label_16ee78;
        }
    }
    ctx->pc = 0x16EE70u;
label_16ee70:
    // 0x16ee70: 0x10000008  b           . + 4 + (0x8 << 2)
label_16ee74:
    if (ctx->pc == 0x16EE74u) {
        ctx->pc = 0x16EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE70u;
        // 0x16ee74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE78u;
        goto label_16ee78;
    }
    ctx->pc = 0x16EE70u;
    {
        const bool branch_taken_0x16ee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE70u;
        // 0x16ee74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee70) {
            ctx->pc = 0x16EE94u;
            goto label_16ee94;
        }
    }
    ctx->pc = 0x16EE78u;
label_16ee78:
    // 0x16ee78: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_16ee7c:
    // 0x16ee7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16ee80:
    // 0x16ee80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x16ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16ee84:
    // 0x16ee84: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x16ee84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16ee88:
    // 0x16ee88: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_16ee8c:
    if (ctx->pc == 0x16EE8Cu) {
        ctx->pc = 0x16EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE88u;
        // 0x16ee8c: 0x2b11021  addu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE90u;
        goto label_16ee90;
    }
    ctx->pc = 0x16EE88u;
    {
        const bool branch_taken_0x16ee88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE88u;
        // 0x16ee8c: 0x2b11021  addu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee88) {
            ctx->pc = 0x16EE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ee3c;
        }
    }
    ctx->pc = 0x16EE90u;
label_16ee90:
    // 0x16ee90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ee90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ee94:
    // 0x16ee94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16ee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16ee98:
    // 0x16ee98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16ee9c:
    // 0x16ee9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16ee9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16eea0:
    // 0x16eea0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16eea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16eea4:
    // 0x16eea4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16eea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16eea8:
    // 0x16eea8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16eea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16eeac:
    // 0x16eeac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16eeacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16eeb0:
    // 0x16eeb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16eeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16eeb4:
    // 0x16eeb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16eeb8:
    // 0x16eeb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16eeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16eebc:
    // 0x16eebc: 0x3e00008  jr          $ra
label_16eec0:
    if (ctx->pc == 0x16EEC0u) {
        ctx->pc = 0x16EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEBCu;
        // 0x16eec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EEC4u;
        goto label_16eec4;
    }
    ctx->pc = 0x16EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEBCu;
        // 0x16eec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EEC4u;
label_16eec4:
    // 0x16eec4: 0x0  nop
    ctx->pc = 0x16eec4u;
    // NOP
label_16eec8:
    // 0x16eec8: 0x0  nop
    ctx->pc = 0x16eec8u;
    // NOP
label_16eecc:
    // 0x16eecc: 0x0  nop
    ctx->pc = 0x16eeccu;
    // NOP
label_16eed0:
    // 0x16eed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16eed4:
    // 0x16eed4: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x16eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_16eed8:
    // 0x16eed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16eedc:
    // 0x16eedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eee0:
    // 0x16eee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16eee4:
    // 0x16eee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16eee8:
    // 0x16eee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16eeec:
    // 0x16eeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16eef0:
    // 0x16eef0: 0x8f87872c  lw          $a3, -0x78D4($gp)
    ctx->pc = 0x16eef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
label_16eef4:
    // 0x16eef4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16eef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16eef8:
    // 0x16eef8: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x16eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
label_16eefc:
    // 0x16eefc: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_16ef00:
    if (ctx->pc == 0x16EF00u) {
        ctx->pc = 0x16EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEFCu;
        // 0x16ef00: 0xaca60014  sw          $a2, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF04u;
        goto label_16ef04;
    }
    ctx->pc = 0x16EEFCu;
    {
        const bool branch_taken_0x16eefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEFCu;
        // 0x16ef00: 0xaca60014  sw          $a2, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eefc) {
            ctx->pc = 0x16EFBCu;
            { ctx->pc = 0x16efbc; return; }
        }
    }
    ctx->pc = 0x16EF04u;
label_16ef04:
    // 0x16ef04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16ef08:
    if (ctx->pc == 0x16EF08u) {
        ctx->pc = 0x16EF0Cu;
        goto label_16ef0c;
    }
    ctx->pc = 0x16EF04u;
    {
        const bool branch_taken_0x16ef04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef04) {
            ctx->pc = 0x16EF14u;
            goto label_16ef14;
        }
    }
    ctx->pc = 0x16EF0Cu;
label_16ef0c:
    // 0x16ef0c: 0x10000056  b           . + 4 + (0x56 << 2)
label_16ef10:
    if (ctx->pc == 0x16EF10u) {
        ctx->pc = 0x16EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF0Cu;
        // 0x16ef10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF14u;
        goto label_16ef14;
    }
    ctx->pc = 0x16EF0Cu;
    {
        const bool branch_taken_0x16ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF0Cu;
        // 0x16ef10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef0c) {
            ctx->pc = 0x16F068u;
            { ctx->pc = 0x16f068; return; }
        }
    }
    ctx->pc = 0x16EF14u;
label_16ef14:
    // 0x16ef14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16ef18:
    // 0x16ef18: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16ef1c:
    // 0x16ef1c: 0x3c0b0029  lui         $t3, 0x29
    ctx->pc = 0x16ef1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)41 << 16));
label_16ef20:
    // 0x16ef20: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_16ef24:
    // 0x16ef24: 0x3c0d0028  lui         $t5, 0x28
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)40 << 16));
label_16ef28:
    // 0x16ef28: 0x256b0cf0  addiu       $t3, $t3, 0xCF0
    ctx->pc = 0x16ef28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3312));
label_16ef2c:
    // 0x16ef2c: 0x254ae2c8  addiu       $t2, $t2, -0x1D38
    ctx->pc = 0x16ef2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959816));
label_16ef30:
    // 0x16ef30: 0x240c0c2d  addiu       $t4, $zero, 0xC2D
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16ef34:
    // 0x16ef34: 0x25ade2d8  addiu       $t5, $t5, -0x1D28
    ctx->pc = 0x16ef34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294959832));
label_16ef38:
    // 0x16ef38: 0x1a43821  addu        $a3, $t5, $a0
    ctx->pc = 0x16ef38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_16ef3c:
    // 0x16ef3c: 0x8ce7fffc  lw          $a3, -0x4($a3)
    ctx->pc = 0x16ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    ctx->pc = 0x16ef40u;
    return;
}

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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part335(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23e808u: goto label_23e808;
        case 0x23e80cu: goto label_23e80c;
        case 0x23e810u: goto label_23e810;
        case 0x23e814u: goto label_23e814;
        case 0x23e818u: goto label_23e818;
        case 0x23e81cu: goto label_23e81c;
        case 0x23e820u: goto label_23e820;
        case 0x23e824u: goto label_23e824;
        case 0x23e828u: goto label_23e828;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e830u: goto label_23e830;
        case 0x23e834u: goto label_23e834;
        case 0x23e838u: goto label_23e838;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e840u: goto label_23e840;
        case 0x23e844u: goto label_23e844;
        case 0x23e848u: goto label_23e848;
        case 0x23e84cu: goto label_23e84c;
        case 0x23e850u: goto label_23e850;
        case 0x23e854u: goto label_23e854;
        case 0x23e858u: goto label_23e858;
        case 0x23e85cu: goto label_23e85c;
        case 0x23e860u: goto label_23e860;
        case 0x23e864u: goto label_23e864;
        case 0x23e868u: goto label_23e868;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e870u: goto label_23e870;
        case 0x23e874u: goto label_23e874;
        case 0x23e878u: goto label_23e878;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e880u: goto label_23e880;
        case 0x23e884u: goto label_23e884;
        case 0x23e888u: goto label_23e888;
        case 0x23e88cu: goto label_23e88c;
        case 0x23e890u: goto label_23e890;
        case 0x23e894u: goto label_23e894;
        case 0x23e898u: goto label_23e898;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8acu: goto label_23e8ac;
        case 0x23e8b0u: goto label_23e8b0;
        case 0x23e8b4u: goto label_23e8b4;
        case 0x23e8b8u: goto label_23e8b8;
        case 0x23e8bcu: goto label_23e8bc;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8c4u: goto label_23e8c4;
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8ccu: goto label_23e8cc;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e8d8u: goto label_23e8d8;
        case 0x23e8dcu: goto label_23e8dc;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8ecu: goto label_23e8ec;
        case 0x23e8f0u: goto label_23e8f0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e8fcu: goto label_23e8fc;
        case 0x23e900u: goto label_23e900;
        case 0x23e904u: goto label_23e904;
        case 0x23e908u: goto label_23e908;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e910u: goto label_23e910;
        case 0x23e914u: goto label_23e914;
        case 0x23e918u: goto label_23e918;
        case 0x23e91cu: goto label_23e91c;
        case 0x23e920u: goto label_23e920;
        case 0x23e924u: goto label_23e924;
        case 0x23e928u: goto label_23e928;
        case 0x23e92cu: goto label_23e92c;
        case 0x23e930u: goto label_23e930;
        case 0x23e934u: goto label_23e934;
        case 0x23e938u: goto label_23e938;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e940u: goto label_23e940;
        case 0x23e944u: goto label_23e944;
        case 0x23e948u: goto label_23e948;
        case 0x23e94cu: goto label_23e94c;
        case 0x23e950u: goto label_23e950;
        case 0x23e954u: goto label_23e954;
        case 0x23e958u: goto label_23e958;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e960u: goto label_23e960;
        case 0x23e964u: goto label_23e964;
        case 0x23e968u: goto label_23e968;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e970u: goto label_23e970;
        case 0x23e974u: goto label_23e974;
        case 0x23e978u: goto label_23e978;
        case 0x23e97cu: goto label_23e97c;
        case 0x23e980u: goto label_23e980;
        case 0x23e984u: goto label_23e984;
        case 0x23e988u: goto label_23e988;
        case 0x23e98cu: goto label_23e98c;
        case 0x23e990u: goto label_23e990;
        case 0x23e994u: goto label_23e994;
        case 0x23e998u: goto label_23e998;
        case 0x23e99cu: goto label_23e99c;
        case 0x23e9a0u: goto label_23e9a0;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9a8u: goto label_23e9a8;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9b0u: goto label_23e9b0;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23e9c4u: goto label_23e9c4;
        case 0x23e9c8u: goto label_23e9c8;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9d0u: goto label_23e9d0;
        case 0x23e9d4u: goto label_23e9d4;
        case 0x23e9d8u: goto label_23e9d8;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23e9e4u: goto label_23e9e4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23e9f4u: goto label_23e9f4;
        case 0x23e9f8u: goto label_23e9f8;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea00u: goto label_23ea00;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea08u: goto label_23ea08;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea14u: goto label_23ea14;
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea1cu: goto label_23ea1c;
        case 0x23ea20u: goto label_23ea20;
        case 0x23ea24u: goto label_23ea24;
        case 0x23ea28u: goto label_23ea28;
        case 0x23ea2cu: goto label_23ea2c;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea38u: goto label_23ea38;
        case 0x23ea3cu: goto label_23ea3c;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea44u: goto label_23ea44;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea4cu: goto label_23ea4c;
        case 0x23ea50u: goto label_23ea50;
        case 0x23ea54u: goto label_23ea54;
        case 0x23ea58u: goto label_23ea58;
        case 0x23ea5cu: goto label_23ea5c;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea64u: goto label_23ea64;
        case 0x23ea68u: goto label_23ea68;
        case 0x23ea6cu: goto label_23ea6c;
        case 0x23ea70u: goto label_23ea70;
        case 0x23ea74u: goto label_23ea74;
        case 0x23ea78u: goto label_23ea78;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23ea80u: goto label_23ea80;
        case 0x23ea84u: goto label_23ea84;
        case 0x23ea88u: goto label_23ea88;
        case 0x23ea8cu: goto label_23ea8c;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ea94u: goto label_23ea94;
        case 0x23ea98u: goto label_23ea98;
        case 0x23ea9cu: goto label_23ea9c;
        case 0x23eaa0u: goto label_23eaa0;
        case 0x23eaa4u: goto label_23eaa4;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eaacu: goto label_23eaac;
        case 0x23eab0u: goto label_23eab0;
        case 0x23eab4u: goto label_23eab4;
        case 0x23eab8u: goto label_23eab8;
        case 0x23eabcu: goto label_23eabc;
        case 0x23eac0u: goto label_23eac0;
        case 0x23eac4u: goto label_23eac4;
        case 0x23eac8u: goto label_23eac8;
        case 0x23eaccu: goto label_23eacc;
        case 0x23ead0u: goto label_23ead0;
        case 0x23ead4u: goto label_23ead4;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eadcu: goto label_23eadc;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eae8u: goto label_23eae8;
        case 0x23eaecu: goto label_23eaec;
        case 0x23eaf0u: goto label_23eaf0;
        case 0x23eaf4u: goto label_23eaf4;
        case 0x23eaf8u: goto label_23eaf8;
        case 0x23eafcu: goto label_23eafc;
        case 0x23eb00u: goto label_23eb00;
        case 0x23eb04u: goto label_23eb04;
        case 0x23eb08u: goto label_23eb08;
        case 0x23eb0cu: goto label_23eb0c;
        case 0x23eb10u: goto label_23eb10;
        case 0x23eb14u: goto label_23eb14;
        case 0x23eb18u: goto label_23eb18;
        case 0x23eb1cu: goto label_23eb1c;
        case 0x23eb20u: goto label_23eb20;
        case 0x23eb24u: goto label_23eb24;
        case 0x23eb28u: goto label_23eb28;
        case 0x23eb2cu: goto label_23eb2c;
        case 0x23eb30u: goto label_23eb30;
        case 0x23eb34u: goto label_23eb34;
        case 0x23eb38u: goto label_23eb38;
        case 0x23eb3cu: goto label_23eb3c;
        case 0x23eb40u: goto label_23eb40;
        case 0x23eb44u: goto label_23eb44;
        case 0x23eb48u: goto label_23eb48;
        case 0x23eb4cu: goto label_23eb4c;
        case 0x23eb50u: goto label_23eb50;
        case 0x23eb54u: goto label_23eb54;
        case 0x23eb58u: goto label_23eb58;
        case 0x23eb5cu: goto label_23eb5c;
        case 0x23eb60u: goto label_23eb60;
        case 0x23eb64u: goto label_23eb64;
        case 0x23eb68u: goto label_23eb68;
        case 0x23eb6cu: goto label_23eb6c;
        case 0x23eb70u: goto label_23eb70;
        case 0x23eb74u: goto label_23eb74;
        case 0x23eb78u: goto label_23eb78;
        case 0x23eb7cu: goto label_23eb7c;
        case 0x23eb80u: goto label_23eb80;
        case 0x23eb84u: goto label_23eb84;
        case 0x23eb88u: goto label_23eb88;
        case 0x23eb8cu: goto label_23eb8c;
        case 0x23eb90u: goto label_23eb90;
        case 0x23eb94u: goto label_23eb94;
        case 0x23eb98u: goto label_23eb98;
        case 0x23eb9cu: goto label_23eb9c;
        case 0x23eba0u: goto label_23eba0;
        case 0x23eba4u: goto label_23eba4;
        case 0x23eba8u: goto label_23eba8;
        case 0x23ebacu: goto label_23ebac;
        case 0x23ebb0u: goto label_23ebb0;
        case 0x23ebb4u: goto label_23ebb4;
        case 0x23ebb8u: goto label_23ebb8;
        case 0x23ebbcu: goto label_23ebbc;
        case 0x23ebc0u: goto label_23ebc0;
        case 0x23ebc4u: goto label_23ebc4;
        case 0x23ebc8u: goto label_23ebc8;
        case 0x23ebccu: goto label_23ebcc;
        case 0x23ebd0u: goto label_23ebd0;
        case 0x23ebd4u: goto label_23ebd4;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ebdcu: goto label_23ebdc;
        case 0x23ebe0u: goto label_23ebe0;
        case 0x23ebe4u: goto label_23ebe4;
        case 0x23ebe8u: goto label_23ebe8;
        case 0x23ebecu: goto label_23ebec;
        case 0x23ebf0u: goto label_23ebf0;
        case 0x23ebf4u: goto label_23ebf4;
        case 0x23ebf8u: goto label_23ebf8;
        case 0x23ebfcu: goto label_23ebfc;
        case 0x23ec00u: goto label_23ec00;
        case 0x23ec04u: goto label_23ec04;
        case 0x23ec08u: goto label_23ec08;
        case 0x23ec0cu: goto label_23ec0c;
        case 0x23ec10u: goto label_23ec10;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec1cu: goto label_23ec1c;
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec24u: goto label_23ec24;
        case 0x23ec28u: goto label_23ec28;
        case 0x23ec2cu: goto label_23ec2c;
        case 0x23ec30u: goto label_23ec30;
        case 0x23ec34u: goto label_23ec34;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec40u: goto label_23ec40;
        case 0x23ec44u: goto label_23ec44;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec4cu: goto label_23ec4c;
        case 0x23ec50u: goto label_23ec50;
        case 0x23ec54u: goto label_23ec54;
        case 0x23ec58u: goto label_23ec58;
        case 0x23ec5cu: goto label_23ec5c;
        case 0x23ec60u: goto label_23ec60;
        case 0x23ec64u: goto label_23ec64;
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec6cu: goto label_23ec6c;
        case 0x23ec70u: goto label_23ec70;
        case 0x23ec74u: goto label_23ec74;
        case 0x23ec78u: goto label_23ec78;
        case 0x23ec7cu: goto label_23ec7c;
        case 0x23ec80u: goto label_23ec80;
        case 0x23ec84u: goto label_23ec84;
        case 0x23ec88u: goto label_23ec88;
        case 0x23ec8cu: goto label_23ec8c;
        case 0x23ec90u: goto label_23ec90;
        case 0x23ec94u: goto label_23ec94;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ec9cu: goto label_23ec9c;
        case 0x23eca0u: goto label_23eca0;
        case 0x23eca4u: goto label_23eca4;
        case 0x23eca8u: goto label_23eca8;
        case 0x23ecacu: goto label_23ecac;
        case 0x23ecb0u: goto label_23ecb0;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ecb8u: goto label_23ecb8;
        case 0x23ecbcu: goto label_23ecbc;
        case 0x23ecc0u: goto label_23ecc0;
        case 0x23ecc4u: goto label_23ecc4;
        case 0x23ecc8u: goto label_23ecc8;
        case 0x23ecccu: goto label_23eccc;
        case 0x23ecd0u: goto label_23ecd0;
        case 0x23ecd4u: goto label_23ecd4;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ecdcu: goto label_23ecdc;
        case 0x23ece0u: goto label_23ece0;
        case 0x23ece4u: goto label_23ece4;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ececu: goto label_23ecec;
        case 0x23ecf0u: goto label_23ecf0;
        case 0x23ecf4u: goto label_23ecf4;
        case 0x23ecf8u: goto label_23ecf8;
        case 0x23ecfcu: goto label_23ecfc;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ed04u: goto label_23ed04;
        case 0x23ed08u: goto label_23ed08;
        case 0x23ed0cu: goto label_23ed0c;
        case 0x23ed10u: goto label_23ed10;
        case 0x23ed14u: goto label_23ed14;
        case 0x23ed18u: goto label_23ed18;
        case 0x23ed1cu: goto label_23ed1c;
        case 0x23ed20u: goto label_23ed20;
        case 0x23ed24u: goto label_23ed24;
        case 0x23ed28u: goto label_23ed28;
        case 0x23ed2cu: goto label_23ed2c;
        case 0x23ed30u: goto label_23ed30;
        case 0x23ed34u: goto label_23ed34;
        case 0x23ed38u: goto label_23ed38;
        case 0x23ed3cu: goto label_23ed3c;
        case 0x23ed40u: goto label_23ed40;
        case 0x23ed44u: goto label_23ed44;
        case 0x23ed48u: goto label_23ed48;
        case 0x23ed4cu: goto label_23ed4c;
        case 0x23ed50u: goto label_23ed50;
        case 0x23ed54u: goto label_23ed54;
        case 0x23ed58u: goto label_23ed58;
        case 0x23ed5cu: goto label_23ed5c;
        case 0x23ed60u: goto label_23ed60;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed68u: goto label_23ed68;
        case 0x23ed6cu: goto label_23ed6c;
        case 0x23ed70u: goto label_23ed70;
        case 0x23ed74u: goto label_23ed74;
        case 0x23ed78u: goto label_23ed78;
        case 0x23ed7cu: goto label_23ed7c;
        case 0x23ed80u: goto label_23ed80;
        case 0x23ed84u: goto label_23ed84;
        case 0x23ed88u: goto label_23ed88;
        case 0x23ed8cu: goto label_23ed8c;
        case 0x23ed90u: goto label_23ed90;
        case 0x23ed94u: goto label_23ed94;
        case 0x23ed98u: goto label_23ed98;
        case 0x23ed9cu: goto label_23ed9c;
        case 0x23eda0u: goto label_23eda0;
        case 0x23eda4u: goto label_23eda4;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edacu: goto label_23edac;
        case 0x23edb0u: goto label_23edb0;
        case 0x23edb4u: goto label_23edb4;
        case 0x23edb8u: goto label_23edb8;
        case 0x23edbcu: goto label_23edbc;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edc4u: goto label_23edc4;
        case 0x23edc8u: goto label_23edc8;
        case 0x23edccu: goto label_23edcc;
        case 0x23edd0u: goto label_23edd0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23edd8u: goto label_23edd8;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ede0u: goto label_23ede0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ede8u: goto label_23ede8;
        case 0x23edecu: goto label_23edec;
        case 0x23edf0u: goto label_23edf0;
        case 0x23edf4u: goto label_23edf4;
        case 0x23edf8u: goto label_23edf8;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee00u: goto label_23ee00;
        case 0x23ee04u: goto label_23ee04;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee0cu: goto label_23ee0c;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee18u: goto label_23ee18;
        case 0x23ee1cu: goto label_23ee1c;
        case 0x23ee20u: goto label_23ee20;
        case 0x23ee24u: goto label_23ee24;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee34u: goto label_23ee34;
        case 0x23ee38u: goto label_23ee38;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee40u: goto label_23ee40;
        case 0x23ee44u: goto label_23ee44;
        case 0x23ee48u: goto label_23ee48;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee50u: goto label_23ee50;
        case 0x23ee54u: goto label_23ee54;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee5cu: goto label_23ee5c;
        case 0x23ee60u: goto label_23ee60;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee6cu: goto label_23ee6c;
        case 0x23ee70u: goto label_23ee70;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee78u: goto label_23ee78;
        case 0x23ee7cu: goto label_23ee7c;
        case 0x23ee80u: goto label_23ee80;
        case 0x23ee84u: goto label_23ee84;
        case 0x23ee88u: goto label_23ee88;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee90u: goto label_23ee90;
        case 0x23ee94u: goto label_23ee94;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eea0u: goto label_23eea0;
        case 0x23eea4u: goto label_23eea4;
        case 0x23eea8u: goto label_23eea8;
        case 0x23eeacu: goto label_23eeac;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eeb4u: goto label_23eeb4;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eebcu: goto label_23eebc;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eec8u: goto label_23eec8;
        case 0x23eeccu: goto label_23eecc;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eed4u: goto label_23eed4;
        case 0x23eed8u: goto label_23eed8;
        case 0x23eedcu: goto label_23eedc;
        case 0x23eee0u: goto label_23eee0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eee8u: goto label_23eee8;
        case 0x23eeecu: goto label_23eeec;
        case 0x23eef0u: goto label_23eef0;
        case 0x23eef4u: goto label_23eef4;
        case 0x23eef8u: goto label_23eef8;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef00u: goto label_23ef00;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef08u: goto label_23ef08;
        case 0x23ef0cu: goto label_23ef0c;
        case 0x23ef10u: goto label_23ef10;
        case 0x23ef14u: goto label_23ef14;
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        default: return;
    }

label_23e808:
    // 0x23e808: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e80c:
    // 0x23e80c: 0xc08f610  jal         func_23D840
label_23e810:
    if (ctx->pc == 0x23E810u) {
        ctx->pc = 0x23E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E80Cu;
        // 0x23e810: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E814u;
        goto label_23e814;
    }
    ctx->pc = 0x23E80Cu;
    SET_GPR_U32(ctx, 31, 0x23E814u);
    ctx->pc = 0x23E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E80Cu;
    // 0x23e810: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E814u;
label_23e814:
    // 0x23e814: 0x144001ef  bnez        $v0, . + 4 + (0x1EF << 2)
label_23e818:
    if (ctx->pc == 0x23E818u) {
        ctx->pc = 0x23E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E814u;
        // 0x23e818: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E81Cu;
        goto label_23e81c;
    }
    ctx->pc = 0x23E814u;
    {
        const bool branch_taken_0x23e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E814u;
        // 0x23e818: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e814) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E81Cu;
label_23e81c:
    // 0x23e81c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e820:
    // 0x23e820: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e824:
    // 0x23e824: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e828:
    // 0x23e828: 0x10400198  beqz        $v0, . + 4 + (0x198 << 2)
label_23e82c:
    if (ctx->pc == 0x23E82Cu) {
        ctx->pc = 0x23E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E828u;
        // 0x23e82c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E830u;
        goto label_23e830;
    }
    ctx->pc = 0x23E828u;
    {
        const bool branch_taken_0x23e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E828u;
        // 0x23e82c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e828) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23E830u;
label_23e830:
    // 0x23e830: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e834:
    // 0x23e834: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e838:
    // 0x23e838: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x23e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_23e83c:
    // 0x23e83c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e840:
    // 0x23e840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e844:
    // 0x23e844: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x23e844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_23e848:
    // 0x23e848: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e84c:
    // 0x23e84c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e850:
    // 0x23e850: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e850u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e854:
    // 0x23e854: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e858:
    // 0x23e858: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e85c:
    if (ctx->pc == 0x23E85Cu) {
        ctx->pc = 0x23E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E858u;
        // 0x23e85c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E860u;
        goto label_23e860;
    }
    ctx->pc = 0x23E858u;
    {
        const bool branch_taken_0x23e858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E858u;
        // 0x23e85c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e858) {
            ctx->pc = 0x23E87Cu;
            goto label_23e87c;
        }
    }
    ctx->pc = 0x23E860u;
label_23e860:
    // 0x23e860: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e864:
    // 0x23e864: 0xc08f610  jal         func_23D840
label_23e868:
    if (ctx->pc == 0x23E868u) {
        ctx->pc = 0x23E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E864u;
        // 0x23e868: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E86Cu;
        goto label_23e86c;
    }
    ctx->pc = 0x23E864u;
    SET_GPR_U32(ctx, 31, 0x23E86Cu);
    ctx->pc = 0x23E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E864u;
    // 0x23e868: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E86Cu;
label_23e86c:
    // 0x23e86c: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
label_23e870:
    if (ctx->pc == 0x23E870u) {
        ctx->pc = 0x23E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E86Cu;
        // 0x23e870: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E874u;
        goto label_23e874;
    }
    ctx->pc = 0x23E86Cu;
    {
        const bool branch_taken_0x23e86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E86Cu;
        // 0x23e870: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e86c) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E874u;
label_23e874:
    // 0x23e874: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e878:
    // 0x23e878: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e87c:
    // 0x23e87c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23e880:
    // 0x23e880: 0x28023  negu        $s0, $v0
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_23e884:
    // 0x23e884: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
label_23e888:
    if (ctx->pc == 0x23E888u) {
        ctx->pc = 0x23E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E884u;
        // 0x23e888: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E88Cu;
        goto label_23e88c;
    }
    ctx->pc = 0x23E884u;
    {
        const bool branch_taken_0x23e884 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E884u;
        // 0x23e888: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e884) {
            ctx->pc = 0x23E958u;
            goto label_23e958;
        }
    }
    ctx->pc = 0x23E88Cu;
label_23e88c:
    // 0x23e88c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e890:
    // 0x23e890: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_23e894:
    if (ctx->pc == 0x23E894u) {
        ctx->pc = 0x23E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E890u;
        // 0x23e894: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E898u;
        goto label_23e898;
    }
    ctx->pc = 0x23E890u;
    {
        const bool branch_taken_0x23e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E890u;
        // 0x23e894: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e890) {
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E898u;
label_23e898:
    // 0x23e898: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23e898u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e89c:
    // 0x23e89c: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23e89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e8a0:
    // 0x23e8a0: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23e8a4:
    // 0x23e8a4: 0x0  nop
    ctx->pc = 0x23e8a4u;
    // NOP
label_23e8a8:
    // 0x23e8a8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_23e8ac:
    // 0x23e8ac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e8b0:
    // 0x23e8b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e8b4:
    // 0x23e8b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e8b8:
    // 0x23e8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e8bc:
    // 0x23e8bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e8c0:
    // 0x23e8c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e8c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e8c4:
    // 0x23e8c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e8c8:
    // 0x23e8c8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23e8cc:
    if (ctx->pc == 0x23E8CCu) {
        ctx->pc = 0x23E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C8u;
        // 0x23e8cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8D0u;
        goto label_23e8d0;
    }
    ctx->pc = 0x23E8C8u;
    {
        const bool branch_taken_0x23e8c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C8u;
        // 0x23e8cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8c8) {
            ctx->pc = 0x23E8F0u;
            goto label_23e8f0;
        }
    }
    ctx->pc = 0x23E8D0u;
label_23e8d0:
    // 0x23e8d0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e8d4:
    // 0x23e8d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e8d8:
    // 0x23e8d8: 0xc08f610  jal         func_23D840
label_23e8dc:
    if (ctx->pc == 0x23E8DCu) {
        ctx->pc = 0x23E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8D8u;
        // 0x23e8dc: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8E0u;
        goto label_23e8e0;
    }
    ctx->pc = 0x23E8D8u;
    SET_GPR_U32(ctx, 31, 0x23E8E0u);
    ctx->pc = 0x23E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8D8u;
    // 0x23e8dc: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E8E0u;
label_23e8e0:
    // 0x23e8e0: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
label_23e8e4:
    if (ctx->pc == 0x23E8E4u) {
        ctx->pc = 0x23E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8E0u;
        // 0x23e8e4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8E8u;
        goto label_23e8e8;
    }
    ctx->pc = 0x23E8E0u;
    {
        const bool branch_taken_0x23e8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8E0u;
        // 0x23e8e4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8e0) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E8E8u;
label_23e8e8:
    // 0x23e8e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e8ec:
    // 0x23e8ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e8f0:
    // 0x23e8f0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23e8f4:
    // 0x23e8f4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e8f8:
    // 0x23e8f8: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_23e8fc:
    if (ctx->pc == 0x23E8FCu) {
        ctx->pc = 0x23E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8F8u;
        // 0x23e8fc: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E900u;
        goto label_23e900;
    }
    ctx->pc = 0x23E8F8u;
    {
        const bool branch_taken_0x23e8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8f8) {
            ctx->pc = 0x23E8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E8F8u;
            // 0x23e8fc: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e8a8;
        }
    }
    ctx->pc = 0x23E900u;
label_23e900:
    // 0x23e900: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e904:
    if (ctx->pc == 0x23E904u) {
        ctx->pc = 0x23E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E900u;
        // 0x23e904: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E908u;
        goto label_23e908;
    }
    ctx->pc = 0x23E900u;
    {
        const bool branch_taken_0x23e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E900u;
        // 0x23e904: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e900) {
            ctx->pc = 0x23E90Cu;
            goto label_23e90c;
        }
    }
    ctx->pc = 0x23E908u;
label_23e908:
    // 0x23e908: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e90c:
    // 0x23e90c: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e910:
    // 0x23e910: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e914:
    // 0x23e914: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e918:
    // 0x23e918: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e91c:
    // 0x23e91c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e920:
    // 0x23e920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e924:
    // 0x23e924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23e928:
    // 0x23e928: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e928u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e92c:
    // 0x23e92c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e930:
    // 0x23e930: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e934:
    if (ctx->pc == 0x23E934u) {
        ctx->pc = 0x23E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E930u;
        // 0x23e934: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E938u;
        goto label_23e938;
    }
    ctx->pc = 0x23E930u;
    {
        const bool branch_taken_0x23e930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E930u;
        // 0x23e934: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e930) {
            ctx->pc = 0x23E954u;
            goto label_23e954;
        }
    }
    ctx->pc = 0x23E938u;
label_23e938:
    // 0x23e938: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e93c:
    // 0x23e93c: 0xc08f610  jal         func_23D840
label_23e940:
    if (ctx->pc == 0x23E940u) {
        ctx->pc = 0x23E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E93Cu;
        // 0x23e940: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E944u;
        goto label_23e944;
    }
    ctx->pc = 0x23E93Cu;
    SET_GPR_U32(ctx, 31, 0x23E944u);
    ctx->pc = 0x23E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E93Cu;
    // 0x23e940: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E944u;
label_23e944:
    // 0x23e944: 0x144001a3  bnez        $v0, . + 4 + (0x1A3 << 2)
label_23e948:
    if (ctx->pc == 0x23E948u) {
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E94Cu;
        goto label_23e94c;
    }
    ctx->pc = 0x23E944u;
    {
        const bool branch_taken_0x23e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e944) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E94Cu;
label_23e94c:
    // 0x23e94c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e950:
    // 0x23e950: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e954:
    // 0x23e954: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e958:
    // 0x23e958: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23e95c:
    // 0x23e95c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23e960:
    // 0x23e960: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e964:
    // 0x23e964: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e968:
    // 0x23e968: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e96c:
    // 0x23e96c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e970:
    // 0x23e970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e974:
    // 0x23e974: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x23e974u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e978:
    // 0x23e978: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23e97c:
    // 0x23e97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23e980:
    // 0x23e980: 0x14a00141  bnez        $a1, . + 4 + (0x141 << 2)
label_23e984:
    if (ctx->pc == 0x23E984u) {
        ctx->pc = 0x23E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E980u;
        // 0x23e984: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E988u;
        goto label_23e988;
    }
    ctx->pc = 0x23E980u;
    {
        const bool branch_taken_0x23e980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E980u;
        // 0x23e984: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e980) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23E988u;
label_23e988:
    // 0x23e988: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e98c:
    // 0x23e98c: 0xc08f610  jal         func_23D840
label_23e990:
    if (ctx->pc == 0x23E990u) {
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E994u;
        goto label_23e994;
    }
    ctx->pc = 0x23E98Cu;
    SET_GPR_U32(ctx, 31, 0x23E994u);
    ctx->pc = 0x23E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E98Cu;
    // 0x23e990: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E994u;
label_23e994:
    // 0x23e994: 0x1440018f  bnez        $v0, . + 4 + (0x18F << 2)
label_23e998:
    if (ctx->pc == 0x23E998u) {
        ctx->pc = 0x23E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E994u;
        // 0x23e998: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E99Cu;
        goto label_23e99c;
    }
    ctx->pc = 0x23E994u;
    {
        const bool branch_taken_0x23e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E994u;
        // 0x23e998: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e994) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E99Cu;
label_23e99c:
    // 0x23e99c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e9a0:
    // 0x23e9a0: 0x10000139  b           . + 4 + (0x139 << 2)
label_23e9a4:
    if (ctx->pc == 0x23E9A4u) {
        ctx->pc = 0x23E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9A0u;
        // 0x23e9a4: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9A8u;
        goto label_23e9a8;
    }
    ctx->pc = 0x23E9A0u;
    {
        const bool branch_taken_0x23e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9A0u;
        // 0x23e9a4: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9a0) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23E9A8u;
label_23e9a8:
    // 0x23e9a8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x23e9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23e9ac:
    // 0x23e9ac: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_23e9b0:
    if (ctx->pc == 0x23E9B0u) {
        ctx->pc = 0x23E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ACu;
        // 0x23e9b0: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9B4u;
        goto label_23e9b4;
    }
    ctx->pc = 0x23E9ACu;
    {
        const bool branch_taken_0x23e9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9ac) {
            ctx->pc = 0x23E9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9ACu;
            // 0x23e9b0: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB20u;
            goto label_23eb20;
        }
    }
    ctx->pc = 0x23E9B4u;
label_23e9b4:
    // 0x23e9b4: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x23e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_23e9b8:
    // 0x23e9b8: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23e9bc:
    // 0x23e9bc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e9c0:
    // 0x23e9c0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e9c4:
    // 0x23e9c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e9c8:
    // 0x23e9c8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e9cc:
    // 0x23e9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e9d0:
    // 0x23e9d0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e9d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e9d4:
    // 0x23e9d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23e9d8:
    // 0x23e9d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23e9dc:
    // 0x23e9dc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23e9e0:
    if (ctx->pc == 0x23E9E0u) {
        ctx->pc = 0x23E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9DCu;
        // 0x23e9e0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9E4u;
        goto label_23e9e4;
    }
    ctx->pc = 0x23E9DCu;
    {
        const bool branch_taken_0x23e9dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9DCu;
        // 0x23e9e0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9dc) {
            ctx->pc = 0x23EA04u;
            goto label_23ea04;
        }
    }
    ctx->pc = 0x23E9E4u;
label_23e9e4:
    // 0x23e9e4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e9e8:
    // 0x23e9e8: 0xc08f610  jal         func_23D840
label_23e9ec:
    if (ctx->pc == 0x23E9ECu) {
        ctx->pc = 0x23E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9E8u;
        // 0x23e9ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9F0u;
        goto label_23e9f0;
    }
    ctx->pc = 0x23E9E8u;
    SET_GPR_U32(ctx, 31, 0x23E9F0u);
    ctx->pc = 0x23E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9E8u;
    // 0x23e9ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E9F0u;
label_23e9f0:
    // 0x23e9f0: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
label_23e9f4:
    if (ctx->pc == 0x23E9F4u) {
        ctx->pc = 0x23E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F0u;
        // 0x23e9f4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9F8u;
        goto label_23e9f8;
    }
    ctx->pc = 0x23E9F0u;
    {
        const bool branch_taken_0x23e9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F0u;
        // 0x23e9f4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9f0) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E9F8u;
label_23e9f8:
    // 0x23e9f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e9fc:
    // 0x23e9fc: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23ea00:
    // 0x23ea00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23ea00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ea04:
    // 0x23ea04: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23ea08:
    // 0x23ea08: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x23ea08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23ea0c:
    // 0x23ea0c: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
label_23ea10:
    if (ctx->pc == 0x23EA10u) {
        ctx->pc = 0x23EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA0Cu;
        // 0x23ea10: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA14u;
        goto label_23ea14;
    }
    ctx->pc = 0x23EA0Cu;
    {
        const bool branch_taken_0x23ea0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA0Cu;
        // 0x23ea10: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea0c) {
            ctx->pc = 0x23EAE0u;
            goto label_23eae0;
        }
    }
    ctx->pc = 0x23EA14u;
label_23ea14:
    // 0x23ea14: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23ea18:
    // 0x23ea18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_23ea1c:
    if (ctx->pc == 0x23EA1Cu) {
        ctx->pc = 0x23EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA18u;
        // 0x23ea1c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA20u;
        goto label_23ea20;
    }
    ctx->pc = 0x23EA18u;
    {
        const bool branch_taken_0x23ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA18u;
        // 0x23ea1c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea18) {
            ctx->pc = 0x23EA90u;
            goto label_23ea90;
        }
    }
    ctx->pc = 0x23EA20u;
label_23ea20:
    // 0x23ea20: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ea24:
    // 0x23ea24: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23ea28:
    // 0x23ea28: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23ea2c:
    // 0x23ea2c: 0x0  nop
    ctx->pc = 0x23ea2cu;
    // NOP
label_23ea30:
    // 0x23ea30: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_23ea34:
    // 0x23ea34: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23ea38:
    // 0x23ea38: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ea3c:
    // 0x23ea3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ea40:
    // 0x23ea40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ea44:
    // 0x23ea44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23ea48:
    // 0x23ea48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ea48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ea4c:
    // 0x23ea4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23ea50:
    // 0x23ea50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23ea54:
    if (ctx->pc == 0x23EA54u) {
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA58u;
        goto label_23ea58;
    }
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA78u;
            goto label_23ea78;
        }
    }
    ctx->pc = 0x23EA58u;
label_23ea58:
    // 0x23ea58: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ea5c:
    // 0x23ea5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23ea60:
    // 0x23ea60: 0xc08f610  jal         func_23D840
label_23ea64:
    if (ctx->pc == 0x23EA64u) {
        ctx->pc = 0x23EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA60u;
        // 0x23ea64: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA68u;
        goto label_23ea68;
    }
    ctx->pc = 0x23EA60u;
    SET_GPR_U32(ctx, 31, 0x23EA68u);
    ctx->pc = 0x23EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA60u;
    // 0x23ea64: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EA68u;
label_23ea68:
    // 0x23ea68: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
label_23ea6c:
    if (ctx->pc == 0x23EA6Cu) {
        ctx->pc = 0x23EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA68u;
        // 0x23ea6c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA70u;
        goto label_23ea70;
    }
    ctx->pc = 0x23EA68u;
    {
        const bool branch_taken_0x23ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA68u;
        // 0x23ea6c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea68) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23EA70u;
label_23ea70:
    // 0x23ea70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ea74:
    // 0x23ea74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ea74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ea78:
    // 0x23ea78: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23ea7c:
    // 0x23ea7c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ea7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23ea80:
    // 0x23ea80: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_23ea84:
    if (ctx->pc == 0x23EA84u) {
        ctx->pc = 0x23EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA80u;
        // 0x23ea84: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA88u;
        goto label_23ea88;
    }
    ctx->pc = 0x23EA80u;
    {
        const bool branch_taken_0x23ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea80) {
            ctx->pc = 0x23EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA80u;
            // 0x23ea84: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ea30;
        }
    }
    ctx->pc = 0x23EA88u;
label_23ea88:
    // 0x23ea88: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ea8c:
    if (ctx->pc == 0x23EA8Cu) {
        ctx->pc = 0x23EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA88u;
        // 0x23ea8c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA90u;
        goto label_23ea90;
    }
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA88u;
        // 0x23ea8c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EA94u;
            goto label_23ea94;
        }
    }
    ctx->pc = 0x23EA90u;
label_23ea90:
    // 0x23ea90: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23ea94:
    // 0x23ea94: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23ea98:
    // 0x23ea98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23ea9c:
    // 0x23ea9c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ea9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eaa0:
    // 0x23eaa0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23eaa4:
    // 0x23eaa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23eaa8:
    // 0x23eaa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23eaac:
    // 0x23eaac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23eab0:
    // 0x23eab0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23eab4:
    // 0x23eab4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23eab8:
    // 0x23eab8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23eabc:
    if (ctx->pc == 0x23EABCu) {
        ctx->pc = 0x23EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB8u;
        // 0x23eabc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAC0u;
        goto label_23eac0;
    }
    ctx->pc = 0x23EAB8u;
    {
        const bool branch_taken_0x23eab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB8u;
        // 0x23eabc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab8) {
            ctx->pc = 0x23EADCu;
            goto label_23eadc;
        }
    }
    ctx->pc = 0x23EAC0u;
label_23eac0:
    // 0x23eac0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23eac4:
    // 0x23eac4: 0xc08f610  jal         func_23D840
label_23eac8:
    if (ctx->pc == 0x23EAC8u) {
        ctx->pc = 0x23EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAC4u;
        // 0x23eac8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EACCu;
        goto label_23eacc;
    }
    ctx->pc = 0x23EAC4u;
    SET_GPR_U32(ctx, 31, 0x23EACCu);
    ctx->pc = 0x23EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAC4u;
    // 0x23eac8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EACCu;
label_23eacc:
    // 0x23eacc: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
label_23ead0:
    if (ctx->pc == 0x23EAD0u) {
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAD4u;
        goto label_23ead4;
    }
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EAD4u;
label_23ead4:
    // 0x23ead4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ead8:
    // 0x23ead8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23ead8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23eadc:
    // 0x23eadc: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23eae0:
    // 0x23eae0: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
label_23eae4:
    if (ctx->pc == 0x23EAE4u) {
        ctx->pc = 0x23EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAE0u;
        // 0x23eae4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAE8u;
        goto label_23eae8;
    }
    ctx->pc = 0x23EAE0u;
    {
        const bool branch_taken_0x23eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAE0u;
        // 0x23eae4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eae0) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EAE8u;
label_23eae8:
    // 0x23eae8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23eaec:
    // 0x23eaec: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x23eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_23eaf0:
    // 0x23eaf0: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_23eaf4:
    // 0x23eaf4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23eaf8:
    // 0x23eaf8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eafc:
    // 0x23eafc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23eb00:
    // 0x23eb00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23eb04:
    // 0x23eb04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23eb08:
    // 0x23eb08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23eb0c:
    // 0x23eb0c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eb0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23eb10:
    // 0x23eb10: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23eb14:
    // 0x23eb14: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_23eb18:
    if (ctx->pc == 0x23EB18u) {
        ctx->pc = 0x23EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB14u;
        // 0x23eb18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB1Cu;
        goto label_23eb1c;
    }
    ctx->pc = 0x23EB14u;
    {
        const bool branch_taken_0x23eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB14u;
        // 0x23eb18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb14) {
            ctx->pc = 0x23EE64u;
            goto label_23ee64;
        }
    }
    ctx->pc = 0x23EB1Cu;
label_23eb1c:
    // 0x23eb1c: 0x0  nop
    ctx->pc = 0x23eb1cu;
    // NOP
label_23eb20:
    // 0x23eb20: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23eb24:
    // 0x23eb24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eb28:
    // 0x23eb28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23eb2c:
    // 0x23eb2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23eb30:
    // 0x23eb30: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23eb34:
    // 0x23eb34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23eb38:
    // 0x23eb38: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23eb38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23eb3c:
    // 0x23eb3c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23eb40:
    // 0x23eb40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_23eb44:
    // 0x23eb44: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23eb48:
    if (ctx->pc == 0x23EB48u) {
        ctx->pc = 0x23EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB44u;
        // 0x23eb48: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB4Cu;
        goto label_23eb4c;
    }
    ctx->pc = 0x23EB44u;
    {
        const bool branch_taken_0x23eb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB44u;
        // 0x23eb48: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb44) {
            ctx->pc = 0x23EB6Cu;
            goto label_23eb6c;
        }
    }
    ctx->pc = 0x23EB4Cu;
label_23eb4c:
    // 0x23eb4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23eb50:
    // 0x23eb50: 0xc08f610  jal         func_23D840
label_23eb54:
    if (ctx->pc == 0x23EB54u) {
        ctx->pc = 0x23EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB50u;
        // 0x23eb54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB58u;
        goto label_23eb58;
    }
    ctx->pc = 0x23EB50u;
    SET_GPR_U32(ctx, 31, 0x23EB58u);
    ctx->pc = 0x23EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB50u;
    // 0x23eb54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EB58u;
label_23eb58:
    // 0x23eb58: 0x1440011e  bnez        $v0, . + 4 + (0x11E << 2)
label_23eb5c:
    if (ctx->pc == 0x23EB5Cu) {
        ctx->pc = 0x23EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB58u;
        // 0x23eb5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB60u;
        goto label_23eb60;
    }
    ctx->pc = 0x23EB58u;
    {
        const bool branch_taken_0x23eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB58u;
        // 0x23eb5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb58) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EB60u;
label_23eb60:
    // 0x23eb60: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eb64:
    // 0x23eb64: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23eb68:
    // 0x23eb68: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23eb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23eb6c:
    // 0x23eb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23eb70:
    // 0x23eb70: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23eb74:
    // 0x23eb74: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x23eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_23eb78:
    // 0x23eb78: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_23eb7c:
    // 0x23eb7c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23eb80:
    // 0x23eb80: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eb84:
    // 0x23eb84: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23eb88:
    // 0x23eb88: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_23eb8c:
    // 0x23eb8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23eb90:
    // 0x23eb90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23eb94:
    // 0x23eb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23eb98:
    // 0x23eb98: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eb98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23eb9c:
    // 0x23eb9c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23eba0:
    // 0x23eba0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23eba4:
    if (ctx->pc == 0x23EBA4u) {
        ctx->pc = 0x23EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA0u;
        // 0x23eba4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBA8u;
        goto label_23eba8;
    }
    ctx->pc = 0x23EBA0u;
    {
        const bool branch_taken_0x23eba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA0u;
        // 0x23eba4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eba0) {
            ctx->pc = 0x23EBC4u;
            goto label_23ebc4;
        }
    }
    ctx->pc = 0x23EBA8u;
label_23eba8:
    // 0x23eba8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ebac:
    // 0x23ebac: 0xc08f610  jal         func_23D840
label_23ebb0:
    if (ctx->pc == 0x23EBB0u) {
        ctx->pc = 0x23EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBACu;
        // 0x23ebb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBB4u;
        goto label_23ebb4;
    }
    ctx->pc = 0x23EBACu;
    SET_GPR_U32(ctx, 31, 0x23EBB4u);
    ctx->pc = 0x23EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBACu;
    // 0x23ebb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EBB4u;
label_23ebb4:
    // 0x23ebb4: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_23ebb8:
    if (ctx->pc == 0x23EBB8u) {
        ctx->pc = 0x23EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBB4u;
        // 0x23ebb8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBBCu;
        goto label_23ebbc;
    }
    ctx->pc = 0x23EBB4u;
    {
        const bool branch_taken_0x23ebb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBB4u;
        // 0x23ebb8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebb4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EBBCu;
label_23ebbc:
    // 0x23ebbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ebc0:
    // 0x23ebc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23ebc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ebc4:
    // 0x23ebc4: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23ebc8:
    // 0x23ebc8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23ebcc:
    // 0x23ebcc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23ebd0:
    // 0x23ebd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23ebd4:
    // 0x23ebd4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23ebd8:
    // 0x23ebd8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23ebdc:
    // 0x23ebdc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ebe0:
    // 0x23ebe0: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23ebe4:
    // 0x23ebe4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x23ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23ebe8:
    // 0x23ebe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ebec:
    // 0x23ebec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ebf0:
    // 0x23ebf0: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x23ebf0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ebf4:
    // 0x23ebf4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23ebf8:
    // 0x23ebf8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_23ebfc:
    // 0x23ebfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23ec00:
    // 0x23ec00: 0x14c000a1  bnez        $a2, . + 4 + (0xA1 << 2)
label_23ec04:
    if (ctx->pc == 0x23EC04u) {
        ctx->pc = 0x23EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC00u;
        // 0x23ec04: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC08u;
        goto label_23ec08;
    }
    ctx->pc = 0x23EC00u;
    {
        const bool branch_taken_0x23ec00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC00u;
        // 0x23ec04: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec00) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EC08u;
label_23ec08:
    // 0x23ec08: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ec0c:
    // 0x23ec0c: 0xc08f610  jal         func_23D840
label_23ec10:
    if (ctx->pc == 0x23EC10u) {
        ctx->pc = 0x23EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC0Cu;
        // 0x23ec10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC14u;
        goto label_23ec14;
    }
    ctx->pc = 0x23EC0Cu;
    SET_GPR_U32(ctx, 31, 0x23EC14u);
    ctx->pc = 0x23EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC0Cu;
    // 0x23ec10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EC14u;
label_23ec14:
    // 0x23ec14: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
label_23ec18:
    if (ctx->pc == 0x23EC18u) {
        ctx->pc = 0x23EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC14u;
        // 0x23ec18: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC1Cu;
        goto label_23ec1c;
    }
    ctx->pc = 0x23EC14u;
    {
        const bool branch_taken_0x23ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC14u;
        // 0x23ec18: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec14) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EC1Cu;
label_23ec1c:
    // 0x23ec1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ec20:
    // 0x23ec20: 0x10000099  b           . + 4 + (0x99 << 2)
label_23ec24:
    if (ctx->pc == 0x23EC24u) {
        ctx->pc = 0x23EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC20u;
        // 0x23ec24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC28u;
        goto label_23ec28;
    }
    ctx->pc = 0x23EC20u;
    {
        const bool branch_taken_0x23ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC20u;
        // 0x23ec24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec20) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EC28u;
label_23ec28:
    // 0x23ec28: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23ec28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ec2c:
    // 0x23ec2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23ec30:
    if (ctx->pc == 0x23EC30u) {
        ctx->pc = 0x23EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC2Cu;
        // 0x23ec30: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC34u;
        goto label_23ec34;
    }
    ctx->pc = 0x23EC2Cu;
    {
        const bool branch_taken_0x23ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec2c) {
            ctx->pc = 0x23EC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC2Cu;
            // 0x23ec30: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC44u;
            goto label_23ec44;
        }
    }
    ctx->pc = 0x23EC34u;
label_23ec34:
    // 0x23ec34: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23ec38:
    // 0x23ec38: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_23ec3c:
    if (ctx->pc == 0x23EC3Cu) {
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC40u;
        goto label_23ec40;
    }
    ctx->pc = 0x23EC38u;
    {
        const bool branch_taken_0x23ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec38) {
            ctx->pc = 0x23EDF0u;
            goto label_23edf0;
        }
    }
    ctx->pc = 0x23EC40u;
label_23ec40:
    // 0x23ec40: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x23ec40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_23ec44:
    // 0x23ec44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23ec44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23ec48:
    // 0x23ec48: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_23ec4c:
    // 0x23ec4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ec50:
    // 0x23ec50: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x23ec50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
label_23ec54:
    // 0x23ec54: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_23ec58:
    // 0x23ec58: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x23ec58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
label_23ec5c:
    // 0x23ec5c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x23ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
label_23ec60:
    // 0x23ec60: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23ec64:
    // 0x23ec64: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23ec68:
    // 0x23ec68: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ec6c:
    // 0x23ec6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ec70:
    // 0x23ec70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ec74:
    // 0x23ec74: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_23ec78:
    // 0x23ec78: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ec7c:
    // 0x23ec7c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23ec80:
    // 0x23ec80: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23ec84:
    if (ctx->pc == 0x23EC84u) {
        ctx->pc = 0x23EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC80u;
        // 0x23ec84: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC88u;
        goto label_23ec88;
    }
    ctx->pc = 0x23EC80u;
    {
        const bool branch_taken_0x23ec80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC80u;
        // 0x23ec84: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec80) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EC88u;
label_23ec88:
    // 0x23ec88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ec8c:
    // 0x23ec8c: 0xc08f610  jal         func_23D840
label_23ec90:
    if (ctx->pc == 0x23EC90u) {
        ctx->pc = 0x23EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC8Cu;
        // 0x23ec90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC94u;
        goto label_23ec94;
    }
    ctx->pc = 0x23EC8Cu;
    SET_GPR_U32(ctx, 31, 0x23EC94u);
    ctx->pc = 0x23EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC8Cu;
    // 0x23ec90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EC94u;
label_23ec94:
    // 0x23ec94: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
label_23ec98:
    if (ctx->pc == 0x23EC98u) {
        ctx->pc = 0x23EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC94u;
        // 0x23ec98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC9Cu;
        goto label_23ec9c;
    }
    ctx->pc = 0x23EC94u;
    {
        const bool branch_taken_0x23ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC94u;
        // 0x23ec98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec94) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EC9Cu;
label_23ec9c:
    // 0x23ec9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eca0:
    // 0x23eca0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23eca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23eca4:
    // 0x23eca4: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23eca4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23eca8:
    // 0x23eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ecac:
    // 0x23ecac: 0xc06def6  jal         func_1B7BD8
label_23ecb0:
    if (ctx->pc == 0x23ECB0u) {
        ctx->pc = 0x23ECB4u;
        goto label_23ecb4;
    }
    ctx->pc = 0x23ECACu;
    SET_GPR_U32(ctx, 31, 0x23ECB4u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x23ECB4u;
label_23ecb4:
    // 0x23ecb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23ecb8:
    if (ctx->pc == 0x23ECB8u) {
        ctx->pc = 0x23ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB4u;
        // 0x23ecb8: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECBCu;
        goto label_23ecbc;
    }
    ctx->pc = 0x23ECB4u;
    {
        const bool branch_taken_0x23ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB4u;
        // 0x23ecb8: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecb4) {
            ctx->pc = 0x23ED18u;
            goto label_23ed18;
        }
    }
    ctx->pc = 0x23ECBCu;
label_23ecbc:
    // 0x23ecbc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23ecc0:
    // 0x23ecc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ecc4:
    // 0x23ecc4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23ecc8:
    // 0x23ecc8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ecc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eccc:
    // 0x23eccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ecd0:
    // 0x23ecd0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ecd4:
    // 0x23ecd4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23ecd8:
    // 0x23ecd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ecdc:
    // 0x23ecdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23ece0:
    // 0x23ece0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x23ece0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ece4:
    // 0x23ece4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23ece8:
    // 0x23ece8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23ecec:
    // 0x23ecec: 0x14a00052  bnez        $a1, . + 4 + (0x52 << 2)
label_23ecf0:
    if (ctx->pc == 0x23ECF0u) {
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECF4u;
        goto label_23ecf4;
    }
    ctx->pc = 0x23ECECu;
    {
        const bool branch_taken_0x23ecec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecec) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23ECF4u;
label_23ecf4:
    // 0x23ecf4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ecf8:
    // 0x23ecf8: 0xc08f610  jal         func_23D840
label_23ecfc:
    if (ctx->pc == 0x23ECFCu) {
        ctx->pc = 0x23ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECF8u;
        // 0x23ecfc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED00u;
        goto label_23ed00;
    }
    ctx->pc = 0x23ECF8u;
    SET_GPR_U32(ctx, 31, 0x23ED00u);
    ctx->pc = 0x23ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF8u;
    // 0x23ecfc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23ED00u;
label_23ed00:
    // 0x23ed00: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_23ed04:
    if (ctx->pc == 0x23ED04u) {
        ctx->pc = 0x23ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED00u;
        // 0x23ed04: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED08u;
        goto label_23ed08;
    }
    ctx->pc = 0x23ED00u;
    {
        const bool branch_taken_0x23ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED00u;
        // 0x23ed04: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed00) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23ED08u;
label_23ed08:
    // 0x23ed08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ed0c:
    // 0x23ed0c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_23ed10:
    if (ctx->pc == 0x23ED10u) {
        ctx->pc = 0x23ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED0Cu;
        // 0x23ed10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED14u;
        goto label_23ed14;
    }
    ctx->pc = 0x23ED0Cu;
    {
        const bool branch_taken_0x23ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED0Cu;
        // 0x23ed10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed0c) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23ED14u;
label_23ed14:
    // 0x23ed14: 0x0  nop
    ctx->pc = 0x23ed14u;
    // NOP
label_23ed18:
    // 0x23ed18: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ed1c:
    // 0x23ed1c: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
label_23ed20:
    if (ctx->pc == 0x23ED20u) {
        ctx->pc = 0x23ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED1Cu;
        // 0x23ed20: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED24u;
        goto label_23ed24;
    }
    ctx->pc = 0x23ED1Cu;
    {
        const bool branch_taken_0x23ed1c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED1Cu;
        // 0x23ed20: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed1c) {
            ctx->pc = 0x23EE3Cu;
            goto label_23ee3c;
        }
    }
    ctx->pc = 0x23ED24u;
label_23ed24:
    // 0x23ed24: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ed24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23ed28:
    // 0x23ed28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_23ed2c:
    if (ctx->pc == 0x23ED2Cu) {
        ctx->pc = 0x23ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED28u;
        // 0x23ed2c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED30u;
        goto label_23ed30;
    }
    ctx->pc = 0x23ED28u;
    {
        const bool branch_taken_0x23ed28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED28u;
        // 0x23ed2c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed28) {
            ctx->pc = 0x23EDA0u;
            goto label_23eda0;
        }
    }
    ctx->pc = 0x23ED30u;
label_23ed30:
    // 0x23ed30: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ed34:
    // 0x23ed34: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23ed34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23ed38:
    // 0x23ed38: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23ed3c:
    // 0x23ed3c: 0x0  nop
    ctx->pc = 0x23ed3cu;
    // NOP
label_23ed40:
    // 0x23ed40: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_23ed44:
    // 0x23ed44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ed44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23ed48:
    // 0x23ed48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ed4c:
    // 0x23ed4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ed50:
    // 0x23ed50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ed54:
    // 0x23ed54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23ed58:
    // 0x23ed58: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ed58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ed5c:
    // 0x23ed5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23ed60:
    // 0x23ed60: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23ed64:
    if (ctx->pc == 0x23ED64u) {
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED68u;
        goto label_23ed68;
    }
    ctx->pc = 0x23ED60u;
    {
        const bool branch_taken_0x23ed60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed60) {
            ctx->pc = 0x23ED88u;
            goto label_23ed88;
        }
    }
    ctx->pc = 0x23ED68u;
label_23ed68:
    // 0x23ed68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ed6c:
    // 0x23ed6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23ed70:
    // 0x23ed70: 0xc08f610  jal         func_23D840
label_23ed74:
    if (ctx->pc == 0x23ED74u) {
        ctx->pc = 0x23ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED70u;
        // 0x23ed74: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED78u;
        goto label_23ed78;
    }
    ctx->pc = 0x23ED70u;
    SET_GPR_U32(ctx, 31, 0x23ED78u);
    ctx->pc = 0x23ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED70u;
    // 0x23ed74: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23ED78u;
label_23ed78:
    // 0x23ed78: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
label_23ed7c:
    if (ctx->pc == 0x23ED7Cu) {
        ctx->pc = 0x23ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED78u;
        // 0x23ed7c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED80u;
        goto label_23ed80;
    }
    ctx->pc = 0x23ED78u;
    {
        const bool branch_taken_0x23ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED78u;
        // 0x23ed7c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed78) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23ED80u;
label_23ed80:
    // 0x23ed80: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ed84:
    // 0x23ed84: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23ed84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23ed88:
    // 0x23ed88: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23ed8c:
    // 0x23ed8c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ed8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23ed90:
    // 0x23ed90: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_23ed94:
    if (ctx->pc == 0x23ED94u) {
        ctx->pc = 0x23ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED90u;
        // 0x23ed94: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED98u;
        goto label_23ed98;
    }
    ctx->pc = 0x23ED90u;
    {
        const bool branch_taken_0x23ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed90) {
            ctx->pc = 0x23ED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED90u;
            // 0x23ed94: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ed40;
        }
    }
    ctx->pc = 0x23ED98u;
label_23ed98:
    // 0x23ed98: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ed9c:
    if (ctx->pc == 0x23ED9Cu) {
        ctx->pc = 0x23ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED98u;
        // 0x23ed9c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDA0u;
        goto label_23eda0;
    }
    ctx->pc = 0x23ED98u;
    {
        const bool branch_taken_0x23ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED98u;
        // 0x23ed9c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed98) {
            ctx->pc = 0x23EDA4u;
            goto label_23eda4;
        }
    }
    ctx->pc = 0x23EDA0u;
label_23eda0:
    // 0x23eda0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23eda4:
    // 0x23eda4: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23eda8:
    // 0x23eda8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23edac:
    // 0x23edac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23edb0:
    // 0x23edb0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23edb4:
    // 0x23edb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23edb8:
    // 0x23edb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23edbc:
    // 0x23edbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23edc0:
    // 0x23edc0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23edc4:
    // 0x23edc4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23edc8:
    // 0x23edc8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
label_23edcc:
    if (ctx->pc == 0x23EDCCu) {
        ctx->pc = 0x23EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC8u;
        // 0x23edcc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDD0u;
        goto label_23edd0;
    }
    ctx->pc = 0x23EDC8u;
    {
        const bool branch_taken_0x23edc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC8u;
        // 0x23edcc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edc8) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EDD0u;
label_23edd0:
    // 0x23edd0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23edd4:
    // 0x23edd4: 0xc08f610  jal         func_23D840
label_23edd8:
    if (ctx->pc == 0x23EDD8u) {
        ctx->pc = 0x23EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDD4u;
        // 0x23edd8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDDCu;
        goto label_23eddc;
    }
    ctx->pc = 0x23EDD4u;
    SET_GPR_U32(ctx, 31, 0x23EDDCu);
    ctx->pc = 0x23EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDD4u;
    // 0x23edd8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EDDCu;
label_23eddc:
    // 0x23eddc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_23ede0:
    if (ctx->pc == 0x23EDE0u) {
        ctx->pc = 0x23EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDDCu;
        // 0x23ede0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDE4u;
        goto label_23ede4;
    }
    ctx->pc = 0x23EDDCu;
    {
        const bool branch_taken_0x23eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDDCu;
        // 0x23ede0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eddc) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EDE4u;
label_23ede4:
    // 0x23ede4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ede8:
    // 0x23ede8: 0x10000013  b           . + 4 + (0x13 << 2)
label_23edec:
    if (ctx->pc == 0x23EDECu) {
        ctx->pc = 0x23EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE8u;
        // 0x23edec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDF0u;
        goto label_23edf0;
    }
    ctx->pc = 0x23EDE8u;
    {
        const bool branch_taken_0x23ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE8u;
        // 0x23edec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ede8) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EDF0u;
label_23edf0:
    // 0x23edf0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23edf4:
    // 0x23edf4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23edf8:
    // 0x23edf8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23edfc:
    // 0x23edfc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ee00:
    // 0x23ee00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ee04:
    // 0x23ee04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ee08:
    // 0x23ee08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ee0c:
    // 0x23ee0c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ee0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ee10:
    // 0x23ee10: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23ee14:
    // 0x23ee14: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23ee18:
    if (ctx->pc == 0x23EE18u) {
        ctx->pc = 0x23EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE14u;
        // 0x23ee18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE1Cu;
        goto label_23ee1c;
    }
    ctx->pc = 0x23EE14u;
    {
        const bool branch_taken_0x23ee14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE14u;
        // 0x23ee18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee14) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EE1Cu;
label_23ee1c:
    // 0x23ee1c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ee20:
    // 0x23ee20: 0xc08f610  jal         func_23D840
label_23ee24:
    if (ctx->pc == 0x23EE24u) {
        ctx->pc = 0x23EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE20u;
        // 0x23ee24: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE28u;
        goto label_23ee28;
    }
    ctx->pc = 0x23EE20u;
    SET_GPR_U32(ctx, 31, 0x23EE28u);
    ctx->pc = 0x23EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE20u;
    // 0x23ee24: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EE28u;
label_23ee28:
    // 0x23ee28: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_23ee2c:
    if (ctx->pc == 0x23EE2Cu) {
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE30u;
        goto label_23ee30;
    }
    ctx->pc = 0x23EE28u;
    {
        const bool branch_taken_0x23ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee28) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EE30u;
label_23ee30:
    // 0x23ee30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ee34:
    // 0x23ee34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ee34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ee38:
    // 0x23ee38: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x23ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_23ee3c:
    // 0x23ee3c: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x23ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
label_23ee40:
    // 0x23ee40: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_23ee44:
    // 0x23ee44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ee44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23ee48:
    // 0x23ee48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ee4c:
    // 0x23ee4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ee50:
    // 0x23ee50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ee54:
    // 0x23ee54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23ee58:
    // 0x23ee58: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ee58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ee5c:
    // 0x23ee5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23ee60:
    // 0x23ee60: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23ee64:
    // 0x23ee64: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23ee68:
    if (ctx->pc == 0x23EE68u) {
        ctx->pc = 0x23EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE64u;
        // 0x23ee68: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE6Cu;
        goto label_23ee6c;
    }
    ctx->pc = 0x23EE64u;
    {
        const bool branch_taken_0x23ee64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE64u;
        // 0x23ee68: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee64) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23EE6Cu;
label_23ee6c:
    // 0x23ee6c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ee70:
    // 0x23ee70: 0xc08f610  jal         func_23D840
label_23ee74:
    if (ctx->pc == 0x23EE74u) {
        ctx->pc = 0x23EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE70u;
        // 0x23ee74: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE78u;
        goto label_23ee78;
    }
    ctx->pc = 0x23EE70u;
    SET_GPR_U32(ctx, 31, 0x23EE78u);
    ctx->pc = 0x23EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE70u;
    // 0x23ee74: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EE78u;
label_23ee78:
    // 0x23ee78: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_23ee7c:
    if (ctx->pc == 0x23EE7Cu) {
        ctx->pc = 0x23EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE78u;
        // 0x23ee7c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE80u;
        goto label_23ee80;
    }
    ctx->pc = 0x23EE78u;
    {
        const bool branch_taken_0x23ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE78u;
        // 0x23ee7c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee78) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EE80u;
label_23ee80:
    // 0x23ee80: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ee84:
    // 0x23ee84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ee84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ee88:
    // 0x23ee88: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_23ee8c:
    // 0x23ee8c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_23ee90:
    if (ctx->pc == 0x23EE90u) {
        ctx->pc = 0x23EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE8Cu;
        // 0x23ee90: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE94u;
        goto label_23ee94;
    }
    ctx->pc = 0x23EE8Cu;
    {
        const bool branch_taken_0x23ee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE8Cu;
        // 0x23ee90: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee8c) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EE94u;
label_23ee94:
    // 0x23ee94: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23ee98:
    // 0x23ee98: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x23ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23ee9c:
    // 0x23ee9c: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
label_23eea0:
    if (ctx->pc == 0x23EEA0u) {
        ctx->pc = 0x23EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE9Cu;
        // 0x23eea0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEA4u;
        goto label_23eea4;
    }
    ctx->pc = 0x23EE9Cu;
    {
        const bool branch_taken_0x23ee9c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE9Cu;
        // 0x23eea0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee9c) {
            ctx->pc = 0x23EF68u;
            goto label_23ef68;
        }
    }
    ctx->pc = 0x23EEA4u;
label_23eea4:
    // 0x23eea4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23eea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23eea8:
    // 0x23eea8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_23eeac:
    if (ctx->pc == 0x23EEACu) {
        ctx->pc = 0x23EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA8u;
        // 0x23eeac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEB0u;
        goto label_23eeb0;
    }
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA8u;
        // 0x23eeac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23EF20u;
            goto label_23ef20;
        }
    }
    ctx->pc = 0x23EEB0u;
label_23eeb0:
    // 0x23eeb0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23eeb4:
    // 0x23eeb4: 0x24f1e4d0  addiu       $s1, $a3, -0x1B30
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
label_23eeb8:
    // 0x23eeb8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23eebc:
    // 0x23eebc: 0x0  nop
    ctx->pc = 0x23eebcu;
    // NOP
label_23eec0:
    // 0x23eec0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_23eec4:
    // 0x23eec4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23eec8:
    // 0x23eec8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23eecc:
    // 0x23eecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23eed0:
    // 0x23eed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23eed4:
    // 0x23eed4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23eed8:
    // 0x23eed8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23eed8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23eedc:
    // 0x23eedc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23eee0:
    // 0x23eee0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23eee4:
    if (ctx->pc == 0x23EEE4u) {
        ctx->pc = 0x23EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE0u;
        // 0x23eee4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEE8u;
        goto label_23eee8;
    }
    ctx->pc = 0x23EEE0u;
    {
        const bool branch_taken_0x23eee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE0u;
        // 0x23eee4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eee0) {
            ctx->pc = 0x23EF08u;
            goto label_23ef08;
        }
    }
    ctx->pc = 0x23EEE8u;
label_23eee8:
    // 0x23eee8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23eeec:
    // 0x23eeec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23eef0:
    // 0x23eef0: 0xc08f610  jal         func_23D840
label_23eef4:
    if (ctx->pc == 0x23EEF4u) {
        ctx->pc = 0x23EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF0u;
        // 0x23eef4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEF8u;
        goto label_23eef8;
    }
    ctx->pc = 0x23EEF0u;
    SET_GPR_U32(ctx, 31, 0x23EEF8u);
    ctx->pc = 0x23EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEF0u;
    // 0x23eef4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EEF8u;
label_23eef8:
    // 0x23eef8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_23eefc:
    if (ctx->pc == 0x23EEFCu) {
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF00u;
        goto label_23ef00;
    }
    ctx->pc = 0x23EEF8u;
    {
        const bool branch_taken_0x23eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef8) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23EF00u;
label_23ef00:
    // 0x23ef00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ef04:
    // 0x23ef04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ef04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ef08:
    // 0x23ef08: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23ef0c:
    // 0x23ef0c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ef0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23ef10:
    // 0x23ef10: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_23ef14:
    if (ctx->pc == 0x23EF14u) {
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF10u;
        // 0x23ef14: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF18u;
        goto label_23ef18;
    }
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF10u;
            // 0x23ef14: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eec0;
        }
    }
    ctx->pc = 0x23EF18u;
label_23ef18:
    // 0x23ef18: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ef1c:
    if (ctx->pc == 0x23EF1Cu) {
        ctx->pc = 0x23EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF18u;
        // 0x23ef1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF20u;
        goto label_23ef20;
    }
    ctx->pc = 0x23EF18u;
    {
        const bool branch_taken_0x23ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF18u;
        // 0x23ef1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef18) {
            ctx->pc = 0x23EF24u;
            goto label_23ef24;
        }
    }
    ctx->pc = 0x23EF20u;
label_23ef20:
    // 0x23ef20: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23ef24:
    // 0x23ef24: 0x24e2e4d0  addiu       $v0, $a3, -0x1B30
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
label_23ef28:
    // 0x23ef28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23ef2c:
    // 0x23ef2c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ef30:
    // 0x23ef30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ef34:
    // 0x23ef34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ef38:
    // 0x23ef38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23ef3c:
    // 0x23ef3c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ef3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ef40:
    // 0x23ef40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23ef44:
    // 0x23ef44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_23ef48:
    if (ctx->pc == 0x23EF48u) {
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF4Cu;
        goto label_23ef4c;
    }
    ctx->pc = 0x23EF44u;
    {
        const bool branch_taken_0x23ef44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef44) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EF4Cu;
label_23ef4c:
    // 0x23ef4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ef50:
    // 0x23ef50: 0xc08f610  jal         func_23D840
label_23ef54:
    if (ctx->pc == 0x23EF54u) {
        ctx->pc = 0x23EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF50u;
        // 0x23ef54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF58u;
        goto label_23ef58;
    }
    ctx->pc = 0x23EF50u;
    SET_GPR_U32(ctx, 31, 0x23EF58u);
    ctx->pc = 0x23EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF50u;
    // 0x23ef54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EF58u;
label_23ef58:
    // 0x23ef58: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23ef5c:
    if (ctx->pc == 0x23EF5Cu) {
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF60u;
        goto label_23ef60;
    }
    ctx->pc = 0x23EF58u;
    {
        const bool branch_taken_0x23ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef58) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23ef64:
    // 0x23ef64: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23ef68:
    // 0x23ef68: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23ef6c:
    // 0x23ef6c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x23ef6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ef70:
    // 0x23ef70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ef74:
    // 0x23ef74: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23ef78:
    // 0x23ef78: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x23ef78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_23ef7c:
    // 0x23ef7c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23ef80:
    // 0x23ef80: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_23ef84:
    if (ctx->pc == 0x23EF84u) {
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF88u;
        goto label_23ef88;
    }
    ctx->pc = 0x23EF80u;
    {
        const bool branch_taken_0x23ef80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef80) {
            ctx->pc = 0x23EF9Cu;
            goto label_23ef9c;
        }
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ef8c:
    // 0x23ef8c: 0xc08f610  jal         func_23D840
label_23ef90:
    if (ctx->pc == 0x23EF90u) {
        ctx->pc = 0x23EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF8Cu;
        // 0x23ef90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF94u;
        goto label_23ef94;
    }
    ctx->pc = 0x23EF8Cu;
    SET_GPR_U32(ctx, 31, 0x23EF94u);
    ctx->pc = 0x23EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF8Cu;
    // 0x23ef90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EF94u;
label_23ef94:
    // 0x23ef94: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_23ef98:
    if (ctx->pc == 0x23EF98u) {
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF9Cu;
        goto label_23ef9c;
    }
    ctx->pc = 0x23EF94u;
    {
        const bool branch_taken_0x23ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef94) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF9Cu;
label_23ef9c:
    // 0x23ef9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23efa0:
    // 0x23efa0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23efa4:
    // 0x23efa4: 0x1000fab8  b           . + 4 + (-0x548 << 2)
label_23efa8:
    if (ctx->pc == 0x23EFA8u) {
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFACu;
        goto label_23efac;
    }
    ctx->pc = 0x23EFA4u;
    {
        const bool branch_taken_0x23efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa4) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23da88; return; }
        }
    }
    ctx->pc = 0x23EFACu;
label_23efac:
    // 0x23efac: 0x0  nop
    ctx->pc = 0x23efacu;
    // NOP
label_23efb0:
    // 0x23efb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23efb4:
    // 0x23efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23efb8:
    if (ctx->pc == 0x23EFB8u) {
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFBCu;
        goto label_23efbc;
    }
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFBCu;
label_23efbc:
    // 0x23efbc: 0xc08f610  jal         func_23D840
label_23efc0:
    if (ctx->pc == 0x23EFC0u) {
        ctx->pc = 0x23EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFBCu;
        // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFC4u;
        goto label_23efc4;
    }
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFBCu;
    // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23efc8:
    if (ctx->pc == 0x23EFC8u) {
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFCCu;
        goto label_23efcc;
    }
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23efd0:
    // 0x23efd0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23efd4:
    // 0x23efd4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x23efd8u;
    return;
}

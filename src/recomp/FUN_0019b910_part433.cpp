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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part433(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26e810u: goto label_26e810;
        case 0x26e814u: goto label_26e814;
        case 0x26e818u: goto label_26e818;
        case 0x26e81cu: goto label_26e81c;
        case 0x26e820u: goto label_26e820;
        case 0x26e824u: goto label_26e824;
        case 0x26e828u: goto label_26e828;
        case 0x26e82cu: goto label_26e82c;
        case 0x26e830u: goto label_26e830;
        case 0x26e834u: goto label_26e834;
        case 0x26e838u: goto label_26e838;
        case 0x26e83cu: goto label_26e83c;
        case 0x26e840u: goto label_26e840;
        case 0x26e844u: goto label_26e844;
        case 0x26e848u: goto label_26e848;
        case 0x26e84cu: goto label_26e84c;
        case 0x26e850u: goto label_26e850;
        case 0x26e854u: goto label_26e854;
        case 0x26e858u: goto label_26e858;
        case 0x26e85cu: goto label_26e85c;
        case 0x26e860u: goto label_26e860;
        case 0x26e864u: goto label_26e864;
        case 0x26e868u: goto label_26e868;
        case 0x26e86cu: goto label_26e86c;
        case 0x26e870u: goto label_26e870;
        case 0x26e874u: goto label_26e874;
        case 0x26e878u: goto label_26e878;
        case 0x26e87cu: goto label_26e87c;
        case 0x26e880u: goto label_26e880;
        case 0x26e884u: goto label_26e884;
        case 0x26e888u: goto label_26e888;
        case 0x26e88cu: goto label_26e88c;
        case 0x26e890u: goto label_26e890;
        case 0x26e894u: goto label_26e894;
        case 0x26e898u: goto label_26e898;
        case 0x26e89cu: goto label_26e89c;
        case 0x26e8a0u: goto label_26e8a0;
        case 0x26e8a4u: goto label_26e8a4;
        case 0x26e8a8u: goto label_26e8a8;
        case 0x26e8acu: goto label_26e8ac;
        case 0x26e8b0u: goto label_26e8b0;
        case 0x26e8b4u: goto label_26e8b4;
        case 0x26e8b8u: goto label_26e8b8;
        case 0x26e8bcu: goto label_26e8bc;
        case 0x26e8c0u: goto label_26e8c0;
        case 0x26e8c4u: goto label_26e8c4;
        case 0x26e8c8u: goto label_26e8c8;
        case 0x26e8ccu: goto label_26e8cc;
        case 0x26e8d0u: goto label_26e8d0;
        case 0x26e8d4u: goto label_26e8d4;
        case 0x26e8d8u: goto label_26e8d8;
        case 0x26e8dcu: goto label_26e8dc;
        case 0x26e8e0u: goto label_26e8e0;
        case 0x26e8e4u: goto label_26e8e4;
        case 0x26e8e8u: goto label_26e8e8;
        case 0x26e8ecu: goto label_26e8ec;
        case 0x26e8f0u: goto label_26e8f0;
        case 0x26e8f4u: goto label_26e8f4;
        case 0x26e8f8u: goto label_26e8f8;
        case 0x26e8fcu: goto label_26e8fc;
        case 0x26e900u: goto label_26e900;
        case 0x26e904u: goto label_26e904;
        case 0x26e908u: goto label_26e908;
        case 0x26e90cu: goto label_26e90c;
        case 0x26e910u: goto label_26e910;
        case 0x26e914u: goto label_26e914;
        case 0x26e918u: goto label_26e918;
        case 0x26e91cu: goto label_26e91c;
        case 0x26e920u: goto label_26e920;
        case 0x26e924u: goto label_26e924;
        case 0x26e928u: goto label_26e928;
        case 0x26e92cu: goto label_26e92c;
        case 0x26e930u: goto label_26e930;
        case 0x26e934u: goto label_26e934;
        case 0x26e938u: goto label_26e938;
        case 0x26e93cu: goto label_26e93c;
        case 0x26e940u: goto label_26e940;
        case 0x26e944u: goto label_26e944;
        case 0x26e948u: goto label_26e948;
        case 0x26e94cu: goto label_26e94c;
        case 0x26e950u: goto label_26e950;
        case 0x26e954u: goto label_26e954;
        case 0x26e958u: goto label_26e958;
        case 0x26e95cu: goto label_26e95c;
        case 0x26e960u: goto label_26e960;
        case 0x26e964u: goto label_26e964;
        case 0x26e968u: goto label_26e968;
        case 0x26e96cu: goto label_26e96c;
        case 0x26e970u: goto label_26e970;
        case 0x26e974u: goto label_26e974;
        case 0x26e978u: goto label_26e978;
        case 0x26e97cu: goto label_26e97c;
        case 0x26e980u: goto label_26e980;
        case 0x26e984u: goto label_26e984;
        case 0x26e988u: goto label_26e988;
        case 0x26e98cu: goto label_26e98c;
        case 0x26e990u: goto label_26e990;
        case 0x26e994u: goto label_26e994;
        case 0x26e998u: goto label_26e998;
        case 0x26e99cu: goto label_26e99c;
        case 0x26e9a0u: goto label_26e9a0;
        case 0x26e9a4u: goto label_26e9a4;
        case 0x26e9a8u: goto label_26e9a8;
        case 0x26e9acu: goto label_26e9ac;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9b4u: goto label_26e9b4;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9bcu: goto label_26e9bc;
        case 0x26e9c0u: goto label_26e9c0;
        case 0x26e9c4u: goto label_26e9c4;
        case 0x26e9c8u: goto label_26e9c8;
        case 0x26e9ccu: goto label_26e9cc;
        case 0x26e9d0u: goto label_26e9d0;
        case 0x26e9d4u: goto label_26e9d4;
        case 0x26e9d8u: goto label_26e9d8;
        case 0x26e9dcu: goto label_26e9dc;
        case 0x26e9e0u: goto label_26e9e0;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26e9e8u: goto label_26e9e8;
        case 0x26e9ecu: goto label_26e9ec;
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26e9f4u: goto label_26e9f4;
        case 0x26e9f8u: goto label_26e9f8;
        case 0x26e9fcu: goto label_26e9fc;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea04u: goto label_26ea04;
        case 0x26ea08u: goto label_26ea08;
        case 0x26ea0cu: goto label_26ea0c;
        case 0x26ea10u: goto label_26ea10;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea18u: goto label_26ea18;
        case 0x26ea1cu: goto label_26ea1c;
        case 0x26ea20u: goto label_26ea20;
        case 0x26ea24u: goto label_26ea24;
        case 0x26ea28u: goto label_26ea28;
        case 0x26ea2cu: goto label_26ea2c;
        case 0x26ea30u: goto label_26ea30;
        case 0x26ea34u: goto label_26ea34;
        case 0x26ea38u: goto label_26ea38;
        case 0x26ea3cu: goto label_26ea3c;
        case 0x26ea40u: goto label_26ea40;
        case 0x26ea44u: goto label_26ea44;
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea4cu: goto label_26ea4c;
        case 0x26ea50u: goto label_26ea50;
        case 0x26ea54u: goto label_26ea54;
        case 0x26ea58u: goto label_26ea58;
        case 0x26ea5cu: goto label_26ea5c;
        case 0x26ea60u: goto label_26ea60;
        case 0x26ea64u: goto label_26ea64;
        case 0x26ea68u: goto label_26ea68;
        case 0x26ea6cu: goto label_26ea6c;
        case 0x26ea70u: goto label_26ea70;
        case 0x26ea74u: goto label_26ea74;
        case 0x26ea78u: goto label_26ea78;
        case 0x26ea7cu: goto label_26ea7c;
        case 0x26ea80u: goto label_26ea80;
        case 0x26ea84u: goto label_26ea84;
        case 0x26ea88u: goto label_26ea88;
        case 0x26ea8cu: goto label_26ea8c;
        case 0x26ea90u: goto label_26ea90;
        case 0x26ea94u: goto label_26ea94;
        case 0x26ea98u: goto label_26ea98;
        case 0x26ea9cu: goto label_26ea9c;
        case 0x26eaa0u: goto label_26eaa0;
        case 0x26eaa4u: goto label_26eaa4;
        case 0x26eaa8u: goto label_26eaa8;
        case 0x26eaacu: goto label_26eaac;
        case 0x26eab0u: goto label_26eab0;
        case 0x26eab4u: goto label_26eab4;
        case 0x26eab8u: goto label_26eab8;
        case 0x26eabcu: goto label_26eabc;
        case 0x26eac0u: goto label_26eac0;
        case 0x26eac4u: goto label_26eac4;
        case 0x26eac8u: goto label_26eac8;
        case 0x26eaccu: goto label_26eacc;
        case 0x26ead0u: goto label_26ead0;
        case 0x26ead4u: goto label_26ead4;
        case 0x26ead8u: goto label_26ead8;
        case 0x26eadcu: goto label_26eadc;
        case 0x26eae0u: goto label_26eae0;
        case 0x26eae4u: goto label_26eae4;
        case 0x26eae8u: goto label_26eae8;
        case 0x26eaecu: goto label_26eaec;
        case 0x26eaf0u: goto label_26eaf0;
        case 0x26eaf4u: goto label_26eaf4;
        case 0x26eaf8u: goto label_26eaf8;
        case 0x26eafcu: goto label_26eafc;
        case 0x26eb00u: goto label_26eb00;
        case 0x26eb04u: goto label_26eb04;
        case 0x26eb08u: goto label_26eb08;
        case 0x26eb0cu: goto label_26eb0c;
        case 0x26eb10u: goto label_26eb10;
        case 0x26eb14u: goto label_26eb14;
        case 0x26eb18u: goto label_26eb18;
        case 0x26eb1cu: goto label_26eb1c;
        case 0x26eb20u: goto label_26eb20;
        case 0x26eb24u: goto label_26eb24;
        case 0x26eb28u: goto label_26eb28;
        case 0x26eb2cu: goto label_26eb2c;
        case 0x26eb30u: goto label_26eb30;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb38u: goto label_26eb38;
        case 0x26eb3cu: goto label_26eb3c;
        case 0x26eb40u: goto label_26eb40;
        case 0x26eb44u: goto label_26eb44;
        case 0x26eb48u: goto label_26eb48;
        case 0x26eb4cu: goto label_26eb4c;
        case 0x26eb50u: goto label_26eb50;
        case 0x26eb54u: goto label_26eb54;
        case 0x26eb58u: goto label_26eb58;
        case 0x26eb5cu: goto label_26eb5c;
        case 0x26eb60u: goto label_26eb60;
        case 0x26eb64u: goto label_26eb64;
        case 0x26eb68u: goto label_26eb68;
        case 0x26eb6cu: goto label_26eb6c;
        case 0x26eb70u: goto label_26eb70;
        case 0x26eb74u: goto label_26eb74;
        case 0x26eb78u: goto label_26eb78;
        case 0x26eb7cu: goto label_26eb7c;
        case 0x26eb80u: goto label_26eb80;
        case 0x26eb84u: goto label_26eb84;
        case 0x26eb88u: goto label_26eb88;
        case 0x26eb8cu: goto label_26eb8c;
        case 0x26eb90u: goto label_26eb90;
        case 0x26eb94u: goto label_26eb94;
        case 0x26eb98u: goto label_26eb98;
        case 0x26eb9cu: goto label_26eb9c;
        case 0x26eba0u: goto label_26eba0;
        case 0x26eba4u: goto label_26eba4;
        case 0x26eba8u: goto label_26eba8;
        case 0x26ebacu: goto label_26ebac;
        case 0x26ebb0u: goto label_26ebb0;
        case 0x26ebb4u: goto label_26ebb4;
        case 0x26ebb8u: goto label_26ebb8;
        case 0x26ebbcu: goto label_26ebbc;
        case 0x26ebc0u: goto label_26ebc0;
        case 0x26ebc4u: goto label_26ebc4;
        case 0x26ebc8u: goto label_26ebc8;
        case 0x26ebccu: goto label_26ebcc;
        case 0x26ebd0u: goto label_26ebd0;
        case 0x26ebd4u: goto label_26ebd4;
        case 0x26ebd8u: goto label_26ebd8;
        case 0x26ebdcu: goto label_26ebdc;
        case 0x26ebe0u: goto label_26ebe0;
        case 0x26ebe4u: goto label_26ebe4;
        case 0x26ebe8u: goto label_26ebe8;
        case 0x26ebecu: goto label_26ebec;
        case 0x26ebf0u: goto label_26ebf0;
        case 0x26ebf4u: goto label_26ebf4;
        case 0x26ebf8u: goto label_26ebf8;
        case 0x26ebfcu: goto label_26ebfc;
        case 0x26ec00u: goto label_26ec00;
        case 0x26ec04u: goto label_26ec04;
        case 0x26ec08u: goto label_26ec08;
        case 0x26ec0cu: goto label_26ec0c;
        case 0x26ec10u: goto label_26ec10;
        case 0x26ec14u: goto label_26ec14;
        case 0x26ec18u: goto label_26ec18;
        case 0x26ec1cu: goto label_26ec1c;
        case 0x26ec20u: goto label_26ec20;
        case 0x26ec24u: goto label_26ec24;
        case 0x26ec28u: goto label_26ec28;
        case 0x26ec2cu: goto label_26ec2c;
        case 0x26ec30u: goto label_26ec30;
        case 0x26ec34u: goto label_26ec34;
        case 0x26ec38u: goto label_26ec38;
        case 0x26ec3cu: goto label_26ec3c;
        case 0x26ec40u: goto label_26ec40;
        case 0x26ec44u: goto label_26ec44;
        case 0x26ec48u: goto label_26ec48;
        case 0x26ec4cu: goto label_26ec4c;
        case 0x26ec50u: goto label_26ec50;
        case 0x26ec54u: goto label_26ec54;
        case 0x26ec58u: goto label_26ec58;
        case 0x26ec5cu: goto label_26ec5c;
        case 0x26ec60u: goto label_26ec60;
        case 0x26ec64u: goto label_26ec64;
        case 0x26ec68u: goto label_26ec68;
        case 0x26ec6cu: goto label_26ec6c;
        case 0x26ec70u: goto label_26ec70;
        case 0x26ec74u: goto label_26ec74;
        case 0x26ec78u: goto label_26ec78;
        case 0x26ec7cu: goto label_26ec7c;
        case 0x26ec80u: goto label_26ec80;
        case 0x26ec84u: goto label_26ec84;
        case 0x26ec88u: goto label_26ec88;
        case 0x26ec8cu: goto label_26ec8c;
        case 0x26ec90u: goto label_26ec90;
        case 0x26ec94u: goto label_26ec94;
        case 0x26ec98u: goto label_26ec98;
        case 0x26ec9cu: goto label_26ec9c;
        case 0x26eca0u: goto label_26eca0;
        case 0x26eca4u: goto label_26eca4;
        case 0x26eca8u: goto label_26eca8;
        case 0x26ecacu: goto label_26ecac;
        case 0x26ecb0u: goto label_26ecb0;
        case 0x26ecb4u: goto label_26ecb4;
        case 0x26ecb8u: goto label_26ecb8;
        case 0x26ecbcu: goto label_26ecbc;
        case 0x26ecc0u: goto label_26ecc0;
        case 0x26ecc4u: goto label_26ecc4;
        case 0x26ecc8u: goto label_26ecc8;
        case 0x26ecccu: goto label_26eccc;
        case 0x26ecd0u: goto label_26ecd0;
        case 0x26ecd4u: goto label_26ecd4;
        case 0x26ecd8u: goto label_26ecd8;
        case 0x26ecdcu: goto label_26ecdc;
        case 0x26ece0u: goto label_26ece0;
        case 0x26ece4u: goto label_26ece4;
        case 0x26ece8u: goto label_26ece8;
        case 0x26ececu: goto label_26ecec;
        case 0x26ecf0u: goto label_26ecf0;
        case 0x26ecf4u: goto label_26ecf4;
        case 0x26ecf8u: goto label_26ecf8;
        case 0x26ecfcu: goto label_26ecfc;
        case 0x26ed00u: goto label_26ed00;
        case 0x26ed04u: goto label_26ed04;
        case 0x26ed08u: goto label_26ed08;
        case 0x26ed0cu: goto label_26ed0c;
        case 0x26ed10u: goto label_26ed10;
        case 0x26ed14u: goto label_26ed14;
        case 0x26ed18u: goto label_26ed18;
        case 0x26ed1cu: goto label_26ed1c;
        case 0x26ed20u: goto label_26ed20;
        case 0x26ed24u: goto label_26ed24;
        case 0x26ed28u: goto label_26ed28;
        case 0x26ed2cu: goto label_26ed2c;
        case 0x26ed30u: goto label_26ed30;
        case 0x26ed34u: goto label_26ed34;
        case 0x26ed38u: goto label_26ed38;
        case 0x26ed3cu: goto label_26ed3c;
        case 0x26ed40u: goto label_26ed40;
        case 0x26ed44u: goto label_26ed44;
        case 0x26ed48u: goto label_26ed48;
        case 0x26ed4cu: goto label_26ed4c;
        case 0x26ed50u: goto label_26ed50;
        case 0x26ed54u: goto label_26ed54;
        case 0x26ed58u: goto label_26ed58;
        case 0x26ed5cu: goto label_26ed5c;
        case 0x26ed60u: goto label_26ed60;
        case 0x26ed64u: goto label_26ed64;
        case 0x26ed68u: goto label_26ed68;
        case 0x26ed6cu: goto label_26ed6c;
        case 0x26ed70u: goto label_26ed70;
        case 0x26ed74u: goto label_26ed74;
        case 0x26ed78u: goto label_26ed78;
        case 0x26ed7cu: goto label_26ed7c;
        case 0x26ed80u: goto label_26ed80;
        case 0x26ed84u: goto label_26ed84;
        case 0x26ed88u: goto label_26ed88;
        case 0x26ed8cu: goto label_26ed8c;
        case 0x26ed90u: goto label_26ed90;
        case 0x26ed94u: goto label_26ed94;
        case 0x26ed98u: goto label_26ed98;
        case 0x26ed9cu: goto label_26ed9c;
        case 0x26eda0u: goto label_26eda0;
        case 0x26eda4u: goto label_26eda4;
        case 0x26eda8u: goto label_26eda8;
        case 0x26edacu: goto label_26edac;
        case 0x26edb0u: goto label_26edb0;
        case 0x26edb4u: goto label_26edb4;
        case 0x26edb8u: goto label_26edb8;
        case 0x26edbcu: goto label_26edbc;
        case 0x26edc0u: goto label_26edc0;
        case 0x26edc4u: goto label_26edc4;
        case 0x26edc8u: goto label_26edc8;
        case 0x26edccu: goto label_26edcc;
        case 0x26edd0u: goto label_26edd0;
        case 0x26edd4u: goto label_26edd4;
        case 0x26edd8u: goto label_26edd8;
        case 0x26eddcu: goto label_26eddc;
        case 0x26ede0u: goto label_26ede0;
        case 0x26ede4u: goto label_26ede4;
        case 0x26ede8u: goto label_26ede8;
        case 0x26edecu: goto label_26edec;
        case 0x26edf0u: goto label_26edf0;
        case 0x26edf4u: goto label_26edf4;
        case 0x26edf8u: goto label_26edf8;
        case 0x26edfcu: goto label_26edfc;
        case 0x26ee00u: goto label_26ee00;
        case 0x26ee04u: goto label_26ee04;
        case 0x26ee08u: goto label_26ee08;
        case 0x26ee0cu: goto label_26ee0c;
        case 0x26ee10u: goto label_26ee10;
        case 0x26ee14u: goto label_26ee14;
        case 0x26ee18u: goto label_26ee18;
        case 0x26ee1cu: goto label_26ee1c;
        case 0x26ee20u: goto label_26ee20;
        case 0x26ee24u: goto label_26ee24;
        case 0x26ee28u: goto label_26ee28;
        case 0x26ee2cu: goto label_26ee2c;
        case 0x26ee30u: goto label_26ee30;
        case 0x26ee34u: goto label_26ee34;
        case 0x26ee38u: goto label_26ee38;
        case 0x26ee3cu: goto label_26ee3c;
        case 0x26ee40u: goto label_26ee40;
        case 0x26ee44u: goto label_26ee44;
        case 0x26ee48u: goto label_26ee48;
        case 0x26ee4cu: goto label_26ee4c;
        case 0x26ee50u: goto label_26ee50;
        case 0x26ee54u: goto label_26ee54;
        case 0x26ee58u: goto label_26ee58;
        case 0x26ee5cu: goto label_26ee5c;
        case 0x26ee60u: goto label_26ee60;
        case 0x26ee64u: goto label_26ee64;
        case 0x26ee68u: goto label_26ee68;
        case 0x26ee6cu: goto label_26ee6c;
        case 0x26ee70u: goto label_26ee70;
        case 0x26ee74u: goto label_26ee74;
        case 0x26ee78u: goto label_26ee78;
        case 0x26ee7cu: goto label_26ee7c;
        case 0x26ee80u: goto label_26ee80;
        case 0x26ee84u: goto label_26ee84;
        case 0x26ee88u: goto label_26ee88;
        case 0x26ee8cu: goto label_26ee8c;
        case 0x26ee90u: goto label_26ee90;
        case 0x26ee94u: goto label_26ee94;
        case 0x26ee98u: goto label_26ee98;
        case 0x26ee9cu: goto label_26ee9c;
        case 0x26eea0u: goto label_26eea0;
        case 0x26eea4u: goto label_26eea4;
        case 0x26eea8u: goto label_26eea8;
        case 0x26eeacu: goto label_26eeac;
        case 0x26eeb0u: goto label_26eeb0;
        case 0x26eeb4u: goto label_26eeb4;
        case 0x26eeb8u: goto label_26eeb8;
        case 0x26eebcu: goto label_26eebc;
        case 0x26eec0u: goto label_26eec0;
        case 0x26eec4u: goto label_26eec4;
        case 0x26eec8u: goto label_26eec8;
        case 0x26eeccu: goto label_26eecc;
        case 0x26eed0u: goto label_26eed0;
        case 0x26eed4u: goto label_26eed4;
        case 0x26eed8u: goto label_26eed8;
        case 0x26eedcu: goto label_26eedc;
        case 0x26eee0u: goto label_26eee0;
        case 0x26eee4u: goto label_26eee4;
        case 0x26eee8u: goto label_26eee8;
        case 0x26eeecu: goto label_26eeec;
        case 0x26eef0u: goto label_26eef0;
        case 0x26eef4u: goto label_26eef4;
        case 0x26eef8u: goto label_26eef8;
        case 0x26eefcu: goto label_26eefc;
        case 0x26ef00u: goto label_26ef00;
        case 0x26ef04u: goto label_26ef04;
        case 0x26ef08u: goto label_26ef08;
        case 0x26ef0cu: goto label_26ef0c;
        case 0x26ef10u: goto label_26ef10;
        case 0x26ef14u: goto label_26ef14;
        case 0x26ef18u: goto label_26ef18;
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef20u: goto label_26ef20;
        case 0x26ef24u: goto label_26ef24;
        case 0x26ef28u: goto label_26ef28;
        case 0x26ef2cu: goto label_26ef2c;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef34u: goto label_26ef34;
        case 0x26ef38u: goto label_26ef38;
        case 0x26ef3cu: goto label_26ef3c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef44u: goto label_26ef44;
        case 0x26ef48u: goto label_26ef48;
        case 0x26ef4cu: goto label_26ef4c;
        case 0x26ef50u: goto label_26ef50;
        case 0x26ef54u: goto label_26ef54;
        case 0x26ef58u: goto label_26ef58;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef60u: goto label_26ef60;
        case 0x26ef64u: goto label_26ef64;
        case 0x26ef68u: goto label_26ef68;
        case 0x26ef6cu: goto label_26ef6c;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef74u: goto label_26ef74;
        case 0x26ef78u: goto label_26ef78;
        case 0x26ef7cu: goto label_26ef7c;
        case 0x26ef80u: goto label_26ef80;
        case 0x26ef84u: goto label_26ef84;
        case 0x26ef88u: goto label_26ef88;
        case 0x26ef8cu: goto label_26ef8c;
        case 0x26ef90u: goto label_26ef90;
        case 0x26ef94u: goto label_26ef94;
        case 0x26ef98u: goto label_26ef98;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efa0u: goto label_26efa0;
        case 0x26efa4u: goto label_26efa4;
        case 0x26efa8u: goto label_26efa8;
        case 0x26efacu: goto label_26efac;
        case 0x26efb0u: goto label_26efb0;
        case 0x26efb4u: goto label_26efb4;
        case 0x26efb8u: goto label_26efb8;
        case 0x26efbcu: goto label_26efbc;
        case 0x26efc0u: goto label_26efc0;
        case 0x26efc4u: goto label_26efc4;
        case 0x26efc8u: goto label_26efc8;
        case 0x26efccu: goto label_26efcc;
        case 0x26efd0u: goto label_26efd0;
        case 0x26efd4u: goto label_26efd4;
        case 0x26efd8u: goto label_26efd8;
        case 0x26efdcu: goto label_26efdc;
        default: return;
    }

label_26e810:
    // 0x26e810: 0x46ff  dsra32      $t0, $zero, 27
    ctx->pc = 0x26e810u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 27));
label_26e814:
    // 0x26e814: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e814u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26e818:
    // 0x26e818: 0x0  nop
    ctx->pc = 0x26e818u;
    // NOP
label_26e81c:
    // 0x26e81c: 0x0  nop
    ctx->pc = 0x26e81cu;
    // NOP
label_26e820:
    // 0x26e820: 0x4709  .word       0x00004709                   # jalr        $t0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_26e824:
    if (ctx->pc == 0x26E824u) {
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E828u;
        goto label_26e828;
    }
    ctx->pc = 0x26E820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x26E828u);
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E820u, 0x26E828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E828u;
label_26e828:
    // 0x26e828: 0x0  nop
    ctx->pc = 0x26e828u;
    // NOP
label_26e82c:
    // 0x26e82c: 0x0  nop
    ctx->pc = 0x26e82cu;
    // NOP
label_26e830:
    // 0x26e830: 0x4717  .word       0x00004717                   # dsrav       $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e830u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e834:
    // 0x26e834: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e838:
    // 0x26e838: 0x0  nop
    ctx->pc = 0x26e838u;
    // NOP
label_26e83c:
    // 0x26e83c: 0x0  nop
    ctx->pc = 0x26e83cu;
    // NOP
label_26e840:
    // 0x26e840: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e844:
    // 0x26e844: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e844u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e848:
    // 0x26e848: 0x0  nop
    ctx->pc = 0x26e848u;
    // NOP
label_26e84c:
    // 0x26e84c: 0x0  nop
    ctx->pc = 0x26e84cu;
    // NOP
label_26e850:
    // 0x26e850: 0x4729  .word       0x00004729                   # mtsa        $zero # 00004700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e850u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e854:
    // 0x26e854: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x26e854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e858:
    // 0x26e858: 0x0  nop
    ctx->pc = 0x26e858u;
    // NOP
label_26e85c:
    // 0x26e85c: 0x0  nop
    ctx->pc = 0x26e85cu;
    // NOP
label_26e860:
    // 0x26e860: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x26e860u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e864:
    // 0x26e864: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x26e864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e868:
    // 0x26e868: 0x0  nop
    ctx->pc = 0x26e868u;
    // NOP
label_26e86c:
    // 0x26e86c: 0x0  nop
    ctx->pc = 0x26e86cu;
    // NOP
label_26e870:
    // 0x26e870: 0x473b  dsra        $t0, $zero, 28
    ctx->pc = 0x26e870u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 28);
label_26e874:
    // 0x26e874: 0x22c0  sll         $a0, $zero, 11
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26e878:
    // 0x26e878: 0x0  nop
    ctx->pc = 0x26e878u;
    // NOP
label_26e87c:
    // 0x26e87c: 0x0  nop
    ctx->pc = 0x26e87cu;
    // NOP
label_26e880:
    // 0x26e880: 0x4740  sll         $t0, $zero, 29
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26e884:
    // 0x26e884: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x26e884u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26e888:
    // 0x26e888: 0x0  nop
    ctx->pc = 0x26e888u;
    // NOP
label_26e88c:
    // 0x26e88c: 0x0  nop
    ctx->pc = 0x26e88cu;
    // NOP
label_26e890:
    // 0x26e890: 0x474d  break       0, 285
    ctx->pc = 0x26e890u;
    runtime->handleBreak(rdram, ctx);
label_26e894:
    // 0x26e894: 0x3740  sll         $a2, $zero, 29
    ctx->pc = 0x26e894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26e898:
    // 0x26e898: 0x0  nop
    ctx->pc = 0x26e898u;
    // NOP
label_26e89c:
    // 0x26e89c: 0x0  nop
    ctx->pc = 0x26e89cu;
    // NOP
label_26e8a0:
    // 0x26e8a0: 0x4754  .word       0x00004754                   # dsllv       $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e8a4:
    // 0x26e8a4: 0x2e10  .word       0x00002E10                   # mfhi        $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26e8a8:
    // 0x26e8a8: 0x0  nop
    ctx->pc = 0x26e8a8u;
    // NOP
label_26e8ac:
    // 0x26e8ac: 0x0  nop
    ctx->pc = 0x26e8acu;
    // NOP
label_26e8b0:
    // 0x26e8b0: 0x475a  .word       0x0000475A                   # div         $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8b0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26e8b4:
    // 0x26e8b4: 0x6da0  .word       0x00006DA0                   # add         $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26e8b8:
    // 0x26e8b8: 0x0  nop
    ctx->pc = 0x26e8b8u;
    // NOP
label_26e8bc:
    // 0x26e8bc: 0x0  nop
    ctx->pc = 0x26e8bcu;
    // NOP
label_26e8c0:
    // 0x26e8c0: 0x4768  .word       0x00004768                   # mfsa        $t0 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e8c0u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e8c4:
    // 0x26e8c4: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x26e8c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8c8:
    // 0x26e8c8: 0x0  nop
    ctx->pc = 0x26e8c8u;
    // NOP
label_26e8cc:
    // 0x26e8cc: 0x0  nop
    ctx->pc = 0x26e8ccu;
    // NOP
label_26e8d0:
    // 0x26e8d0: 0x4776  tne         $zero, $zero, 285
    ctx->pc = 0x26e8d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8d4:
    // 0x26e8d4: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26e8d8:
    // 0x26e8d8: 0x0  nop
    ctx->pc = 0x26e8d8u;
    // NOP
label_26e8dc:
    // 0x26e8dc: 0x0  nop
    ctx->pc = 0x26e8dcu;
    // NOP
label_26e8e0:
    // 0x26e8e0: 0x477e  dsrl32      $t0, $zero, 29
    ctx->pc = 0x26e8e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 29));
label_26e8e4:
    // 0x26e8e4: 0x3f80  sll         $a3, $zero, 30
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26e8e8:
    // 0x26e8e8: 0x0  nop
    ctx->pc = 0x26e8e8u;
    // NOP
label_26e8ec:
    // 0x26e8ec: 0x0  nop
    ctx->pc = 0x26e8ecu;
    // NOP
label_26e8f0:
    // 0x26e8f0: 0x4786  .word       0x00004786                   # srlv        $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e8f4:
    // 0x26e8f4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x26e8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8f8:
    // 0x26e8f8: 0x0  nop
    ctx->pc = 0x26e8f8u;
    // NOP
label_26e8fc:
    // 0x26e8fc: 0x0  nop
    ctx->pc = 0x26e8fcu;
    // NOP
label_26e900:
    // 0x26e900: 0x478d  break       0, 286
    ctx->pc = 0x26e900u;
    runtime->handleBreak(rdram, ctx);
label_26e904:
    // 0x26e904: 0x2230  tge         $zero, $zero, 136
    ctx->pc = 0x26e904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e908:
    // 0x26e908: 0x0  nop
    ctx->pc = 0x26e908u;
    // NOP
label_26e90c:
    // 0x26e90c: 0x0  nop
    ctx->pc = 0x26e90cu;
    // NOP
label_26e910:
    // 0x26e910: 0x4792  .word       0x00004792                   # mflo        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e910u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_26e914:
    // 0x26e914: 0x2e50  .word       0x00002E50                   # mfhi        $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e914u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26e918:
    // 0x26e918: 0x0  nop
    ctx->pc = 0x26e918u;
    // NOP
label_26e91c:
    // 0x26e91c: 0x0  nop
    ctx->pc = 0x26e91cu;
    // NOP
label_26e920:
    // 0x26e920: 0x4798  .word       0x00004798                   # mult        $t0, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_26e924:
    // 0x26e924: 0x6310  .word       0x00006310                   # mfhi        $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e924u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26e928:
    // 0x26e928: 0x0  nop
    ctx->pc = 0x26e928u;
    // NOP
label_26e92c:
    // 0x26e92c: 0x0  nop
    ctx->pc = 0x26e92cu;
    // NOP
label_26e930:
    // 0x26e930: 0x47a5  .word       0x000047A5                   # move        $t0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26e934:
    // 0x26e934: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x26e934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26e938:
    // 0x26e938: 0x0  nop
    ctx->pc = 0x26e938u;
    // NOP
label_26e93c:
    // 0x26e93c: 0x0  nop
    ctx->pc = 0x26e93cu;
    // NOP
label_26e940:
    // 0x26e940: 0x47ac  .word       0x000047AC                   # dadd        $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e944:
    // 0x26e944: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26e948:
    // 0x26e948: 0x0  nop
    ctx->pc = 0x26e948u;
    // NOP
label_26e94c:
    // 0x26e94c: 0x0  nop
    ctx->pc = 0x26e94cu;
    // NOP
label_26e950:
    // 0x26e950: 0x47b7  .word       0x000047B7                   # INVALID     $zero, $zero, 0x47B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26E950 raw=0x000047B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e954:
    // 0x26e954: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e958:
    // 0x26e958: 0x0  nop
    ctx->pc = 0x26e958u;
    // NOP
label_26e95c:
    // 0x26e95c: 0x0  nop
    ctx->pc = 0x26e95cu;
    // NOP
label_26e960:
    // 0x26e960: 0x47c7  .word       0x000047C7                   # srav        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e960u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e964:
    // 0x26e964: 0x3e30  tge         $zero, $zero, 248
    ctx->pc = 0x26e964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e968:
    // 0x26e968: 0x0  nop
    ctx->pc = 0x26e968u;
    // NOP
label_26e96c:
    // 0x26e96c: 0x0  nop
    ctx->pc = 0x26e96cu;
    // NOP
label_26e970:
    // 0x26e970: 0x47cf  .word       0x000047CF                   # sync.p # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26e974:
    // 0x26e974: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x26e974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e978:
    // 0x26e978: 0x0  nop
    ctx->pc = 0x26e978u;
    // NOP
label_26e97c:
    // 0x26e97c: 0x0  nop
    ctx->pc = 0x26e97cu;
    // NOP
label_26e980:
    // 0x26e980: 0x47db  .word       0x000047DB                   # divu        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e980u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e984:
    // 0x26e984: 0x2c30  tge         $zero, $zero, 176
    ctx->pc = 0x26e984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e988:
    // 0x26e988: 0x0  nop
    ctx->pc = 0x26e988u;
    // NOP
label_26e98c:
    // 0x26e98c: 0x0  nop
    ctx->pc = 0x26e98cu;
    // NOP
label_26e990:
    // 0x26e990: 0x47e1  .word       0x000047E1                   # addu        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e994:
    // 0x26e994: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26e998:
    // 0x26e998: 0x0  nop
    ctx->pc = 0x26e998u;
    // NOP
label_26e99c:
    // 0x26e99c: 0x0  nop
    ctx->pc = 0x26e99cu;
    // NOP
label_26e9a0:
    // 0x26e9a0: 0x47f2  tlt         $zero, $zero, 287
    ctx->pc = 0x26e9a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e9a4:
    // 0x26e9a4: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26e9a8:
    // 0x26e9a8: 0x0  nop
    ctx->pc = 0x26e9a8u;
    // NOP
label_26e9ac:
    // 0x26e9ac: 0x0  nop
    ctx->pc = 0x26e9acu;
    // NOP
label_26e9b0:
    // 0x26e9b0: 0x47fc  dsll32      $t0, $zero, 31
    ctx->pc = 0x26e9b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 31));
label_26e9b4:
    // 0x26e9b4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e9b8:
    // 0x26e9b8: 0x0  nop
    ctx->pc = 0x26e9b8u;
    // NOP
label_26e9bc:
    // 0x26e9bc: 0x0  nop
    ctx->pc = 0x26e9bcu;
    // NOP
label_26e9c0:
    // 0x26e9c0: 0x4808  .word       0x00004808                   # jr          $zero # 00004800 <InstrIdType: CPU_SPECIAL>
label_26e9c4:
    if (ctx->pc == 0x26E9C4u) {
        ctx->pc = 0x26E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9C0u;
        // 0x26e9c4: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9C8u;
        goto label_26e9c8;
    }
    ctx->pc = 0x26E9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9C0u;
        // 0x26e9c4: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E9C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26E9C8u;
label_26e9c8:
    // 0x26e9c8: 0x0  nop
    ctx->pc = 0x26e9c8u;
    // NOP
label_26e9cc:
    // 0x26e9cc: 0x0  nop
    ctx->pc = 0x26e9ccu;
    // NOP
label_26e9d0:
    // 0x26e9d0: 0x4813  .word       0x00004813                   # mtlo        $zero # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26e9d4:
    // 0x26e9d4: 0x3be0  .word       0x00003BE0                   # add         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e9d8:
    // 0x26e9d8: 0x0  nop
    ctx->pc = 0x26e9d8u;
    // NOP
label_26e9dc:
    // 0x26e9dc: 0x0  nop
    ctx->pc = 0x26e9dcu;
    // NOP
label_26e9e0:
    // 0x26e9e0: 0x481b  divu        $t1, $zero, $zero
    ctx->pc = 0x26e9e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e9e4:
    // 0x26e9e4: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e9e8:
    // 0x26e9e8: 0x0  nop
    ctx->pc = 0x26e9e8u;
    // NOP
label_26e9ec:
    // 0x26e9ec: 0x0  nop
    ctx->pc = 0x26e9ecu;
    // NOP
label_26e9f0:
    // 0x26e9f0: 0x482b  sltu        $t1, $zero, $zero
    ctx->pc = 0x26e9f0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26e9f4:
    // 0x26e9f4: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e9f8:
    // 0x26e9f8: 0x0  nop
    ctx->pc = 0x26e9f8u;
    // NOP
label_26e9fc:
    // 0x26e9fc: 0x0  nop
    ctx->pc = 0x26e9fcu;
    // NOP
label_26ea00:
    // 0x26ea00: 0x483b  dsra        $t1, $zero, 0
    ctx->pc = 0x26ea00u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 0);
label_26ea04:
    // 0x26ea04: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26ea08:
    // 0x26ea08: 0x0  nop
    ctx->pc = 0x26ea08u;
    // NOP
label_26ea0c:
    // 0x26ea0c: 0x0  nop
    ctx->pc = 0x26ea0cu;
    // NOP
label_26ea10:
    // 0x26ea10: 0x4842  srl         $t1, $zero, 1
    ctx->pc = 0x26ea10u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_26ea14:
    // 0x26ea14: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x26ea14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea18:
    // 0x26ea18: 0x0  nop
    ctx->pc = 0x26ea18u;
    // NOP
label_26ea1c:
    // 0x26ea1c: 0x0  nop
    ctx->pc = 0x26ea1cu;
    // NOP
label_26ea20:
    // 0x26ea20: 0x484b  .word       0x0000484B                   # movn        $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ea24:
    // 0x26ea24: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ea28:
    // 0x26ea28: 0x0  nop
    ctx->pc = 0x26ea28u;
    // NOP
label_26ea2c:
    // 0x26ea2c: 0x0  nop
    ctx->pc = 0x26ea2cu;
    // NOP
label_26ea30:
    // 0x26ea30: 0x4854  .word       0x00004854                   # dsllv       $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ea34:
    // 0x26ea34: 0x3e70  tge         $zero, $zero, 249
    ctx->pc = 0x26ea34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea38:
    // 0x26ea38: 0x0  nop
    ctx->pc = 0x26ea38u;
    // NOP
label_26ea3c:
    // 0x26ea3c: 0x0  nop
    ctx->pc = 0x26ea3cu;
    // NOP
label_26ea40:
    // 0x26ea40: 0x485c  .word       0x0000485C                   # dmult       $zero, $zero # 00004840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26EA40 raw=0x0000485C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ea44:
    // 0x26ea44: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26ea48:
    // 0x26ea48: 0x0  nop
    ctx->pc = 0x26ea48u;
    // NOP
label_26ea4c:
    // 0x26ea4c: 0x0  nop
    ctx->pc = 0x26ea4cu;
    // NOP
label_26ea50:
    // 0x26ea50: 0x486b  .word       0x0000486B                   # sltu        $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea50u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26ea54:
    // 0x26ea54: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ea58:
    // 0x26ea58: 0x0  nop
    ctx->pc = 0x26ea58u;
    // NOP
label_26ea5c:
    // 0x26ea5c: 0x0  nop
    ctx->pc = 0x26ea5cu;
    // NOP
label_26ea60:
    // 0x26ea60: 0x4874  teq         $zero, $zero, 289
    ctx->pc = 0x26ea60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea64:
    // 0x26ea64: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea64u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ea68:
    // 0x26ea68: 0x0  nop
    ctx->pc = 0x26ea68u;
    // NOP
label_26ea6c:
    // 0x26ea6c: 0x0  nop
    ctx->pc = 0x26ea6cu;
    // NOP
label_26ea70:
    // 0x26ea70: 0x487e  dsrl32      $t1, $zero, 1
    ctx->pc = 0x26ea70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 1));
label_26ea74:
    // 0x26ea74: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x26ea74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea78:
    // 0x26ea78: 0x0  nop
    ctx->pc = 0x26ea78u;
    // NOP
label_26ea7c:
    // 0x26ea7c: 0x0  nop
    ctx->pc = 0x26ea7cu;
    // NOP
label_26ea80:
    // 0x26ea80: 0x488f  .word       0x0000488F                   # sync # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26ea84:
    // 0x26ea84: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x26ea84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea88:
    // 0x26ea88: 0x0  nop
    ctx->pc = 0x26ea88u;
    // NOP
label_26ea8c:
    // 0x26ea8c: 0x0  nop
    ctx->pc = 0x26ea8cu;
    // NOP
label_26ea90:
    // 0x26ea90: 0x4898  .word       0x00004898                   # mult        $t1, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ea90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ea94:
    // 0x26ea94: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26ea98:
    // 0x26ea98: 0x0  nop
    ctx->pc = 0x26ea98u;
    // NOP
label_26ea9c:
    // 0x26ea9c: 0x0  nop
    ctx->pc = 0x26ea9cu;
    // NOP
label_26eaa0:
    // 0x26eaa0: 0x48a7  .word       0x000048A7                   # not         $t1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaa0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26eaa4:
    // 0x26eaa4: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26eaa8:
    // 0x26eaa8: 0x0  nop
    ctx->pc = 0x26eaa8u;
    // NOP
label_26eaac:
    // 0x26eaac: 0x0  nop
    ctx->pc = 0x26eaacu;
    // NOP
label_26eab0:
    // 0x26eab0: 0x48b1  tgeu        $zero, $zero, 290
    ctx->pc = 0x26eab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eab4:
    // 0x26eab4: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26eab8:
    // 0x26eab8: 0x0  nop
    ctx->pc = 0x26eab8u;
    // NOP
label_26eabc:
    // 0x26eabc: 0x0  nop
    ctx->pc = 0x26eabcu;
    // NOP
label_26eac0:
    // 0x26eac0: 0x48bd  .word       0x000048BD                   # INVALID     $zero, $zero, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26EAC0 raw=0x000048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eac4:
    // 0x26eac4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26eac8:
    // 0x26eac8: 0x0  nop
    ctx->pc = 0x26eac8u;
    // NOP
label_26eacc:
    // 0x26eacc: 0x0  nop
    ctx->pc = 0x26eaccu;
    // NOP
label_26ead0:
    // 0x26ead0: 0x48cb  .word       0x000048CB                   # movn        $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ead0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ead4:
    // 0x26ead4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x26ead4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26ead8:
    // 0x26ead8: 0x0  nop
    ctx->pc = 0x26ead8u;
    // NOP
label_26eadc:
    // 0x26eadc: 0x0  nop
    ctx->pc = 0x26eadcu;
    // NOP
label_26eae0:
    // 0x26eae0: 0x48d9  .word       0x000048D9                   # multu       $zero, $zero # 000048C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eae0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26eae4:
    // 0x26eae4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26eae8:
    // 0x26eae8: 0x0  nop
    ctx->pc = 0x26eae8u;
    // NOP
label_26eaec:
    // 0x26eaec: 0x0  nop
    ctx->pc = 0x26eaecu;
    // NOP
label_26eaf0:
    // 0x26eaf0: 0x48e7  .word       0x000048E7                   # not         $t1, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26eaf4:
    // 0x26eaf4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26eaf8:
    // 0x26eaf8: 0x0  nop
    ctx->pc = 0x26eaf8u;
    // NOP
label_26eafc:
    // 0x26eafc: 0x0  nop
    ctx->pc = 0x26eafcu;
    // NOP
label_26eb00:
    // 0x26eb00: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x26eb00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eb04:
    // 0x26eb04: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x26eb04u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eb08:
    // 0x26eb08: 0x0  nop
    ctx->pc = 0x26eb08u;
    // NOP
label_26eb0c:
    // 0x26eb0c: 0x0  nop
    ctx->pc = 0x26eb0cu;
    // NOP
label_26eb10:
    // 0x26eb10: 0x4908  .word       0x00004908                   # jr          $zero # 00004900 <InstrIdType: CPU_SPECIAL>
label_26eb14:
    if (ctx->pc == 0x26EB14u) {
        ctx->pc = 0x26EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB10u;
        // 0x26eb14: 0x6330  tge         $zero, $zero, 396 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB18u;
        goto label_26eb18;
    }
    ctx->pc = 0x26EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB10u;
        // 0x26eb14: 0x6330  tge         $zero, $zero, 396 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EB18u;
label_26eb18:
    // 0x26eb18: 0x0  nop
    ctx->pc = 0x26eb18u;
    // NOP
label_26eb1c:
    // 0x26eb1c: 0x0  nop
    ctx->pc = 0x26eb1cu;
    // NOP
label_26eb20:
    // 0x26eb20: 0x4915  .word       0x00004915                   # INVALID     $zero, $zero, 0x4915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26EB20 raw=0x00004915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eb24:
    // 0x26eb24: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26eb28:
    // 0x26eb28: 0x0  nop
    ctx->pc = 0x26eb28u;
    // NOP
label_26eb2c:
    // 0x26eb2c: 0x0  nop
    ctx->pc = 0x26eb2cu;
    // NOP
label_26eb30:
    // 0x26eb30: 0x4921  .word       0x00004921                   # addu        $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26eb34:
    // 0x26eb34: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x26eb34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26eb38:
    // 0x26eb38: 0x0  nop
    ctx->pc = 0x26eb38u;
    // NOP
label_26eb3c:
    // 0x26eb3c: 0x0  nop
    ctx->pc = 0x26eb3cu;
    // NOP
label_26eb40:
    // 0x26eb40: 0x4929  .word       0x00004929                   # mtsa        $zero # 00004900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26eb40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26eb44:
    // 0x26eb44: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x26eb44u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26eb48:
    // 0x26eb48: 0x0  nop
    ctx->pc = 0x26eb48u;
    // NOP
label_26eb4c:
    // 0x26eb4c: 0x0  nop
    ctx->pc = 0x26eb4cu;
    // NOP
label_26eb50:
    // 0x26eb50: 0x4943  sra         $t1, $zero, 5
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 5));
label_26eb54:
    // 0x26eb54: 0x4700  sll         $t0, $zero, 28
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26eb58:
    // 0x26eb58: 0x0  nop
    ctx->pc = 0x26eb58u;
    // NOP
label_26eb5c:
    // 0x26eb5c: 0x0  nop
    ctx->pc = 0x26eb5cu;
    // NOP
label_26eb60:
    // 0x26eb60: 0x494c  syscall     293
    ctx->pc = 0x26eb60u;
    ctx->pc = 0x26EB64u;
runtime->handleSyscall(rdram, ctx, 0x125u);
label_26eb64:
    // 0x26eb64: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb64u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26eb68:
    // 0x26eb68: 0x0  nop
    ctx->pc = 0x26eb68u;
    // NOP
label_26eb6c:
    // 0x26eb6c: 0x0  nop
    ctx->pc = 0x26eb6cu;
    // NOP
label_26eb70:
    // 0x26eb70: 0x495c  .word       0x0000495C                   # dmult       $zero, $zero # 00004940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26EB70 raw=0x0000495C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eb74:
    // 0x26eb74: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb74u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26eb78:
    // 0x26eb78: 0x0  nop
    ctx->pc = 0x26eb78u;
    // NOP
label_26eb7c:
    // 0x26eb7c: 0x0  nop
    ctx->pc = 0x26eb7cu;
    // NOP
label_26eb80:
    // 0x26eb80: 0x496d  .word       0x0000496D                   # daddu       $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eb84:
    // 0x26eb84: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26eb88:
    // 0x26eb88: 0x0  nop
    ctx->pc = 0x26eb88u;
    // NOP
label_26eb8c:
    // 0x26eb8c: 0x0  nop
    ctx->pc = 0x26eb8cu;
    // NOP
label_26eb90:
    // 0x26eb90: 0x497a  dsrl        $t1, $zero, 5
    ctx->pc = 0x26eb90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 5);
label_26eb94:
    // 0x26eb94: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x26eb94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eb98:
    // 0x26eb98: 0x0  nop
    ctx->pc = 0x26eb98u;
    // NOP
label_26eb9c:
    // 0x26eb9c: 0x0  nop
    ctx->pc = 0x26eb9cu;
    // NOP
label_26eba0:
    // 0x26eba0: 0x4989  .word       0x00004989                   # jalr        $t1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_26eba4:
    if (ctx->pc == 0x26EBA4u) {
        ctx->pc = 0x26EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBA0u;
        // 0x26eba4: 0x40c0  sll         $t0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EBA8u;
        goto label_26eba8;
    }
    ctx->pc = 0x26EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x26EBA8u);
        ctx->pc = 0x26EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBA0u;
        // 0x26eba4: 0x40c0  sll         $t0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EBA0u, 0x26EBA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EBA8u;
label_26eba8:
    // 0x26eba8: 0x0  nop
    ctx->pc = 0x26eba8u;
    // NOP
label_26ebac:
    // 0x26ebac: 0x0  nop
    ctx->pc = 0x26ebacu;
    // NOP
label_26ebb0:
    // 0x26ebb0: 0x4992  .word       0x00004992                   # mflo        $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebb0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26ebb4:
    // 0x26ebb4: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x26ebb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26ebb8:
    // 0x26ebb8: 0x0  nop
    ctx->pc = 0x26ebb8u;
    // NOP
label_26ebbc:
    // 0x26ebbc: 0x0  nop
    ctx->pc = 0x26ebbcu;
    // NOP
label_26ebc0:
    // 0x26ebc0: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebc0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ebc4:
    // 0x26ebc4: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26ebc8:
    // 0x26ebc8: 0x0  nop
    ctx->pc = 0x26ebc8u;
    // NOP
label_26ebcc:
    // 0x26ebcc: 0x0  nop
    ctx->pc = 0x26ebccu;
    // NOP
label_26ebd0:
    // 0x26ebd0: 0x49ac  .word       0x000049AC                   # dadd        $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26ebd4:
    // 0x26ebd4: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x26ebd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ebd8:
    // 0x26ebd8: 0x0  nop
    ctx->pc = 0x26ebd8u;
    // NOP
label_26ebdc:
    // 0x26ebdc: 0x0  nop
    ctx->pc = 0x26ebdcu;
    // NOP
label_26ebe0:
    // 0x26ebe0: 0x49b6  tne         $zero, $zero, 294
    ctx->pc = 0x26ebe0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ebe4:
    // 0x26ebe4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26ebe8:
    // 0x26ebe8: 0x0  nop
    ctx->pc = 0x26ebe8u;
    // NOP
label_26ebec:
    // 0x26ebec: 0x0  nop
    ctx->pc = 0x26ebecu;
    // NOP
label_26ebf0:
    // 0x26ebf0: 0x49c1  .word       0x000049C1                   # INVALID     $zero, $zero, 0x49C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ebf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26EBF0 raw=0x000049C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ebf4:
    // 0x26ebf4: 0x4a30  tge         $zero, $zero, 296
    ctx->pc = 0x26ebf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ebf8:
    // 0x26ebf8: 0x0  nop
    ctx->pc = 0x26ebf8u;
    // NOP
label_26ebfc:
    // 0x26ebfc: 0x0  nop
    ctx->pc = 0x26ebfcu;
    // NOP
label_26ec00:
    // 0x26ec00: 0x49cb  .word       0x000049CB                   # movn        $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec00u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ec04:
    // 0x26ec04: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26ec08:
    // 0x26ec08: 0x0  nop
    ctx->pc = 0x26ec08u;
    // NOP
label_26ec0c:
    // 0x26ec0c: 0x0  nop
    ctx->pc = 0x26ec0cu;
    // NOP
label_26ec10:
    // 0x26ec10: 0x49d9  .word       0x000049D9                   # multu       $zero, $zero # 000049C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ec14:
    // 0x26ec14: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x26ec14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ec18:
    // 0x26ec18: 0x0  nop
    ctx->pc = 0x26ec18u;
    // NOP
label_26ec1c:
    // 0x26ec1c: 0x0  nop
    ctx->pc = 0x26ec1cu;
    // NOP
label_26ec20:
    // 0x26ec20: 0x49e9  .word       0x000049E9                   # mtsa        $zero # 000049C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ec20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26ec24:
    // 0x26ec24: 0x4150  .word       0x00004150                   # mfhi        $t0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ec28:
    // 0x26ec28: 0x0  nop
    ctx->pc = 0x26ec28u;
    // NOP
label_26ec2c:
    // 0x26ec2c: 0x0  nop
    ctx->pc = 0x26ec2cu;
    // NOP
label_26ec30:
    // 0x26ec30: 0x49f2  tlt         $zero, $zero, 295
    ctx->pc = 0x26ec30u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ec34:
    // 0x26ec34: 0x3670  tge         $zero, $zero, 217
    ctx->pc = 0x26ec34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ec38:
    // 0x26ec38: 0x0  nop
    ctx->pc = 0x26ec38u;
    // NOP
label_26ec3c:
    // 0x26ec3c: 0x0  nop
    ctx->pc = 0x26ec3cu;
    // NOP
label_26ec40:
    // 0x26ec40: 0x49f9  .word       0x000049F9                   # INVALID     $zero, $zero, 0x49F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26EC40 raw=0x000049F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ec44:
    // 0x26ec44: 0x2620  .word       0x00002620                   # add         $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26ec48:
    // 0x26ec48: 0x0  nop
    ctx->pc = 0x26ec48u;
    // NOP
label_26ec4c:
    // 0x26ec4c: 0x0  nop
    ctx->pc = 0x26ec4cu;
    // NOP
label_26ec50:
    // 0x26ec50: 0x49fe  dsrl32      $t1, $zero, 7
    ctx->pc = 0x26ec50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 7));
label_26ec54:
    // 0x26ec54: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ec58:
    // 0x26ec58: 0x0  nop
    ctx->pc = 0x26ec58u;
    // NOP
label_26ec5c:
    // 0x26ec5c: 0x0  nop
    ctx->pc = 0x26ec5cu;
    // NOP
label_26ec60:
    // 0x26ec60: 0x4a07  .word       0x00004A07                   # srav        $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec60u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ec64:
    // 0x26ec64: 0x1dc0  sll         $v1, $zero, 23
    ctx->pc = 0x26ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26ec68:
    // 0x26ec68: 0x0  nop
    ctx->pc = 0x26ec68u;
    // NOP
label_26ec6c:
    // 0x26ec6c: 0x0  nop
    ctx->pc = 0x26ec6cu;
    // NOP
label_26ec70:
    // 0x26ec70: 0x4a0b  .word       0x00004A0B                   # movn        $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec70u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ec74:
    // 0x26ec74: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x26ec74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26ec78:
    // 0x26ec78: 0x0  nop
    ctx->pc = 0x26ec78u;
    // NOP
label_26ec7c:
    // 0x26ec7c: 0x0  nop
    ctx->pc = 0x26ec7cu;
    // NOP
label_26ec80:
    // 0x26ec80: 0x4a14  .word       0x00004A14                   # dsllv       $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ec84:
    // 0x26ec84: 0x26f0  tge         $zero, $zero, 155
    ctx->pc = 0x26ec84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ec88:
    // 0x26ec88: 0x0  nop
    ctx->pc = 0x26ec88u;
    // NOP
label_26ec8c:
    // 0x26ec8c: 0x0  nop
    ctx->pc = 0x26ec8cu;
    // NOP
label_26ec90:
    // 0x26ec90: 0x4a19  .word       0x00004A19                   # multu       $zero, $zero # 00004A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ec94:
    // 0x26ec94: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ec94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26ec98:
    // 0x26ec98: 0x0  nop
    ctx->pc = 0x26ec98u;
    // NOP
label_26ec9c:
    // 0x26ec9c: 0x0  nop
    ctx->pc = 0x26ec9cu;
    // NOP
label_26eca0:
    // 0x26eca0: 0x4a1d  .word       0x00004A1D                   # dmultu      $zero, $zero # 00004A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26ECA0 raw=0x00004A1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eca4:
    // 0x26eca4: 0x1f80  sll         $v1, $zero, 30
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26eca8:
    // 0x26eca8: 0x0  nop
    ctx->pc = 0x26eca8u;
    // NOP
label_26ecac:
    // 0x26ecac: 0x0  nop
    ctx->pc = 0x26ecacu;
    // NOP
label_26ecb0:
    // 0x26ecb0: 0x4a21  .word       0x00004A21                   # addu        $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ecb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26ecb4:
    // 0x26ecb4: 0x2370  tge         $zero, $zero, 141
    ctx->pc = 0x26ecb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ecb8:
    // 0x26ecb8: 0x0  nop
    ctx->pc = 0x26ecb8u;
    // NOP
label_26ecbc:
    // 0x26ecbc: 0x0  nop
    ctx->pc = 0x26ecbcu;
    // NOP
label_26ecc0:
    // 0x26ecc0: 0x4a26  .word       0x00004A26                   # xor         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ecc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26ecc4:
    // 0x26ecc4: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x26ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26ecc8:
    // 0x26ecc8: 0x0  nop
    ctx->pc = 0x26ecc8u;
    // NOP
label_26eccc:
    // 0x26eccc: 0x0  nop
    ctx->pc = 0x26ecccu;
    // NOP
label_26ecd0:
    // 0x26ecd0: 0x4a2e  .word       0x00004A2E                   # dsub        $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ecd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26ecd4:
    // 0x26ecd4: 0x38c0  sll         $a3, $zero, 3
    ctx->pc = 0x26ecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26ecd8:
    // 0x26ecd8: 0x0  nop
    ctx->pc = 0x26ecd8u;
    // NOP
label_26ecdc:
    // 0x26ecdc: 0x0  nop
    ctx->pc = 0x26ecdcu;
    // NOP
label_26ece0:
    // 0x26ece0: 0x4a36  tne         $zero, $zero, 296
    ctx->pc = 0x26ece0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ece4:
    // 0x26ece4: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x26ece4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ece8:
    // 0x26ece8: 0x0  nop
    ctx->pc = 0x26ece8u;
    // NOP
label_26ecec:
    // 0x26ecec: 0x0  nop
    ctx->pc = 0x26ececu;
    // NOP
label_26ecf0:
    // 0x26ecf0: 0x4a3d  .word       0x00004A3D                   # INVALID     $zero, $zero, 0x4A3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ecf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26ECF0 raw=0x00004A3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ecf4:
    // 0x26ecf4: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ecf4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26ecf8:
    // 0x26ecf8: 0x0  nop
    ctx->pc = 0x26ecf8u;
    // NOP
label_26ecfc:
    // 0x26ecfc: 0x0  nop
    ctx->pc = 0x26ecfcu;
    // NOP
label_26ed00:
    // 0x26ed00: 0x4a44  .word       0x00004A44                   # sllv        $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ed04:
    // 0x26ed04: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26ed08:
    // 0x26ed08: 0x0  nop
    ctx->pc = 0x26ed08u;
    // NOP
label_26ed0c:
    // 0x26ed0c: 0x0  nop
    ctx->pc = 0x26ed0cu;
    // NOP
label_26ed10:
    // 0x26ed10: 0x4a4a  .word       0x00004A4A                   # movz        $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ed14:
    // 0x26ed14: 0x2e30  tge         $zero, $zero, 184
    ctx->pc = 0x26ed14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ed18:
    // 0x26ed18: 0x0  nop
    ctx->pc = 0x26ed18u;
    // NOP
label_26ed1c:
    // 0x26ed1c: 0x0  nop
    ctx->pc = 0x26ed1cu;
    // NOP
label_26ed20:
    // 0x26ed20: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ed24:
    // 0x26ed24: 0x2a60  .word       0x00002A60                   # add         $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ed28:
    // 0x26ed28: 0x0  nop
    ctx->pc = 0x26ed28u;
    // NOP
label_26ed2c:
    // 0x26ed2c: 0x0  nop
    ctx->pc = 0x26ed2cu;
    // NOP
label_26ed30:
    // 0x26ed30: 0x4a56  .word       0x00004A56                   # dsrlv       $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ed34:
    // 0x26ed34: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26ed38:
    // 0x26ed38: 0x0  nop
    ctx->pc = 0x26ed38u;
    // NOP
label_26ed3c:
    // 0x26ed3c: 0x0  nop
    ctx->pc = 0x26ed3cu;
    // NOP
label_26ed40:
    // 0x26ed40: 0x4a62  .word       0x00004A62                   # neg         $t1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26ed44:
    // 0x26ed44: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ed48:
    // 0x26ed48: 0x0  nop
    ctx->pc = 0x26ed48u;
    // NOP
label_26ed4c:
    // 0x26ed4c: 0x0  nop
    ctx->pc = 0x26ed4cu;
    // NOP
label_26ed50:
    // 0x26ed50: 0x4a6a  .word       0x00004A6A                   # slt         $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed50u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26ed54:
    // 0x26ed54: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x26ed54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ed58:
    // 0x26ed58: 0x0  nop
    ctx->pc = 0x26ed58u;
    // NOP
label_26ed5c:
    // 0x26ed5c: 0x0  nop
    ctx->pc = 0x26ed5cu;
    // NOP
label_26ed60:
    // 0x26ed60: 0x4a72  tlt         $zero, $zero, 297
    ctx->pc = 0x26ed60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ed64:
    // 0x26ed64: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x26ed64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26ed68:
    // 0x26ed68: 0x0  nop
    ctx->pc = 0x26ed68u;
    // NOP
label_26ed6c:
    // 0x26ed6c: 0x0  nop
    ctx->pc = 0x26ed6cu;
    // NOP
label_26ed70:
    // 0x26ed70: 0x4a7a  dsrl        $t1, $zero, 9
    ctx->pc = 0x26ed70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 9);
label_26ed74:
    // 0x26ed74: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x26ed74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ed78:
    // 0x26ed78: 0x0  nop
    ctx->pc = 0x26ed78u;
    // NOP
label_26ed7c:
    // 0x26ed7c: 0x0  nop
    ctx->pc = 0x26ed7cu;
    // NOP
label_26ed80:
    // 0x26ed80: 0x4a81  .word       0x00004A81                   # INVALID     $zero, $zero, 0x4A81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26ED80 raw=0x00004A81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ed84:
    // 0x26ed84: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26ed88:
    // 0x26ed88: 0x0  nop
    ctx->pc = 0x26ed88u;
    // NOP
label_26ed8c:
    // 0x26ed8c: 0x0  nop
    ctx->pc = 0x26ed8cu;
    // NOP
label_26ed90:
    // 0x26ed90: 0x4a88  .word       0x00004A88                   # jr          $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
label_26ed94:
    if (ctx->pc == 0x26ED94u) {
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x2700  sll         $a0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED98u;
        goto label_26ed98;
    }
    ctx->pc = 0x26ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x2700  sll         $a0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26ED98u;
label_26ed98:
    // 0x26ed98: 0x0  nop
    ctx->pc = 0x26ed98u;
    // NOP
label_26ed9c:
    // 0x26ed9c: 0x0  nop
    ctx->pc = 0x26ed9cu;
    // NOP
label_26eda0:
    // 0x26eda0: 0x4a8d  break       0, 298
    ctx->pc = 0x26eda0u;
    runtime->handleBreak(rdram, ctx);
label_26eda4:
    // 0x26eda4: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x26eda4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eda8:
    // 0x26eda8: 0x0  nop
    ctx->pc = 0x26eda8u;
    // NOP
label_26edac:
    // 0x26edac: 0x0  nop
    ctx->pc = 0x26edacu;
    // NOP
label_26edb0:
    // 0x26edb0: 0x4a97  .word       0x00004A97                   # dsrav       $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26edb4:
    // 0x26edb4: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x26edb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26edb8:
    // 0x26edb8: 0x0  nop
    ctx->pc = 0x26edb8u;
    // NOP
label_26edbc:
    // 0x26edbc: 0x0  nop
    ctx->pc = 0x26edbcu;
    // NOP
label_26edc0:
    // 0x26edc0: 0x4a9d  .word       0x00004A9D                   # dmultu      $zero, $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26EDC0 raw=0x00004A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26edc4:
    // 0x26edc4: 0x2220  .word       0x00002220                   # add         $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26edc8:
    // 0x26edc8: 0x0  nop
    ctx->pc = 0x26edc8u;
    // NOP
label_26edcc:
    // 0x26edcc: 0x0  nop
    ctx->pc = 0x26edccu;
    // NOP
label_26edd0:
    // 0x26edd0: 0x4aa2  .word       0x00004AA2                   # neg         $t1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26edd4:
    // 0x26edd4: 0x8cd0  .word       0x00008CD0                   # mfhi        $s1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edd4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26edd8:
    // 0x26edd8: 0x0  nop
    ctx->pc = 0x26edd8u;
    // NOP
label_26eddc:
    // 0x26eddc: 0x0  nop
    ctx->pc = 0x26eddcu;
    // NOP
label_26ede0:
    // 0x26ede0: 0x4ab4  teq         $zero, $zero, 298
    ctx->pc = 0x26ede0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ede4:
    // 0x26ede4: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x26ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26ede8:
    // 0x26ede8: 0x0  nop
    ctx->pc = 0x26ede8u;
    // NOP
label_26edec:
    // 0x26edec: 0x0  nop
    ctx->pc = 0x26edecu;
    // NOP
label_26edf0:
    // 0x26edf0: 0x4aba  dsrl        $t1, $zero, 10
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 10);
label_26edf4:
    // 0x26edf4: 0x2d20  .word       0x00002D20                   # add         $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26edf8:
    // 0x26edf8: 0x0  nop
    ctx->pc = 0x26edf8u;
    // NOP
label_26edfc:
    // 0x26edfc: 0x0  nop
    ctx->pc = 0x26edfcu;
    // NOP
label_26ee00:
    // 0x26ee00: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x26ee00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26ee04:
    // 0x26ee04: 0x3b50  .word       0x00003B50                   # mfhi        $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ee08:
    // 0x26ee08: 0x0  nop
    ctx->pc = 0x26ee08u;
    // NOP
label_26ee0c:
    // 0x26ee0c: 0x0  nop
    ctx->pc = 0x26ee0cu;
    // NOP
label_26ee10:
    // 0x26ee10: 0x4ac8  .word       0x00004AC8                   # jr          $zero # 00004AC0 <InstrIdType: CPU_SPECIAL>
label_26ee14:
    if (ctx->pc == 0x26EE14u) {
        ctx->pc = 0x26EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE10u;
        // 0x26ee14: 0x3cc0  sll         $a3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE18u;
        goto label_26ee18;
    }
    ctx->pc = 0x26EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE10u;
        // 0x26ee14: 0x3cc0  sll         $a3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EE18u;
label_26ee18:
    // 0x26ee18: 0x0  nop
    ctx->pc = 0x26ee18u;
    // NOP
label_26ee1c:
    // 0x26ee1c: 0x0  nop
    ctx->pc = 0x26ee1cu;
    // NOP
label_26ee20:
    // 0x26ee20: 0x4ad0  .word       0x00004AD0                   # mfhi        $t1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ee24:
    // 0x26ee24: 0x2d60  .word       0x00002D60                   # add         $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ee28:
    // 0x26ee28: 0x0  nop
    ctx->pc = 0x26ee28u;
    // NOP
label_26ee2c:
    // 0x26ee2c: 0x0  nop
    ctx->pc = 0x26ee2cu;
    // NOP
label_26ee30:
    // 0x26ee30: 0x4ad6  .word       0x00004AD6                   # dsrlv       $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ee34:
    // 0x26ee34: 0x3d20  .word       0x00003D20                   # add         $a3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26ee38:
    // 0x26ee38: 0x0  nop
    ctx->pc = 0x26ee38u;
    // NOP
label_26ee3c:
    // 0x26ee3c: 0x0  nop
    ctx->pc = 0x26ee3cu;
    // NOP
label_26ee40:
    // 0x26ee40: 0x4ade  .word       0x00004ADE                   # ddiv        $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26EE40 raw=0x00004ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ee44:
    // 0x26ee44: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26ee48:
    // 0x26ee48: 0x0  nop
    ctx->pc = 0x26ee48u;
    // NOP
label_26ee4c:
    // 0x26ee4c: 0x0  nop
    ctx->pc = 0x26ee4cu;
    // NOP
label_26ee50:
    // 0x26ee50: 0x4aec  .word       0x00004AEC                   # dadd        $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26ee54:
    // 0x26ee54: 0x2820  add         $a1, $zero, $zero
    ctx->pc = 0x26ee54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ee58:
    // 0x26ee58: 0x0  nop
    ctx->pc = 0x26ee58u;
    // NOP
label_26ee5c:
    // 0x26ee5c: 0x0  nop
    ctx->pc = 0x26ee5cu;
    // NOP
label_26ee60:
    // 0x26ee60: 0x4af2  tlt         $zero, $zero, 299
    ctx->pc = 0x26ee60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ee64:
    // 0x26ee64: 0x3ad0  .word       0x00003AD0                   # mfhi        $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee64u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ee68:
    // 0x26ee68: 0x0  nop
    ctx->pc = 0x26ee68u;
    // NOP
label_26ee6c:
    // 0x26ee6c: 0x0  nop
    ctx->pc = 0x26ee6cu;
    // NOP
label_26ee70:
    // 0x26ee70: 0x4afa  dsrl        $t1, $zero, 11
    ctx->pc = 0x26ee70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 11);
label_26ee74:
    // 0x26ee74: 0x4f60  .word       0x00004F60                   # add         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ee78:
    // 0x26ee78: 0x0  nop
    ctx->pc = 0x26ee78u;
    // NOP
label_26ee7c:
    // 0x26ee7c: 0x0  nop
    ctx->pc = 0x26ee7cu;
    // NOP
label_26ee80:
    // 0x26ee80: 0x4b04  .word       0x00004B04                   # sllv        $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ee84:
    // 0x26ee84: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26ee88:
    // 0x26ee88: 0x0  nop
    ctx->pc = 0x26ee88u;
    // NOP
label_26ee8c:
    // 0x26ee8c: 0x0  nop
    ctx->pc = 0x26ee8cu;
    // NOP
label_26ee90:
    // 0x26ee90: 0x4b0d  break       0, 300
    ctx->pc = 0x26ee90u;
    runtime->handleBreak(rdram, ctx);
label_26ee94:
    // 0x26ee94: 0x26c0  sll         $a0, $zero, 27
    ctx->pc = 0x26ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26ee98:
    // 0x26ee98: 0x0  nop
    ctx->pc = 0x26ee98u;
    // NOP
label_26ee9c:
    // 0x26ee9c: 0x0  nop
    ctx->pc = 0x26ee9cu;
    // NOP
label_26eea0:
    // 0x26eea0: 0x4b12  .word       0x00004B12                   # mflo        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eea0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26eea4:
    // 0x26eea4: 0x24c0  sll         $a0, $zero, 19
    ctx->pc = 0x26eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eea8:
    // 0x26eea8: 0x0  nop
    ctx->pc = 0x26eea8u;
    // NOP
label_26eeac:
    // 0x26eeac: 0x0  nop
    ctx->pc = 0x26eeacu;
    // NOP
label_26eeb0:
    // 0x26eeb0: 0x4b17  .word       0x00004B17                   # dsrav       $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eeb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26eeb4:
    // 0x26eeb4: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26eeb8:
    // 0x26eeb8: 0x0  nop
    ctx->pc = 0x26eeb8u;
    // NOP
label_26eebc:
    // 0x26eebc: 0x0  nop
    ctx->pc = 0x26eebcu;
    // NOP
label_26eec0:
    // 0x26eec0: 0x4b2d  .word       0x00004B2D                   # daddu       $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eec4:
    // 0x26eec4: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26eec8:
    // 0x26eec8: 0x0  nop
    ctx->pc = 0x26eec8u;
    // NOP
label_26eecc:
    // 0x26eecc: 0x0  nop
    ctx->pc = 0x26eeccu;
    // NOP
label_26eed0:
    // 0x26eed0: 0x4b37  .word       0x00004B37                   # INVALID     $zero, $zero, 0x4B37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26EED0 raw=0x00004B37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eed4:
    // 0x26eed4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x26eed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eed8:
    // 0x26eed8: 0x0  nop
    ctx->pc = 0x26eed8u;
    // NOP
label_26eedc:
    // 0x26eedc: 0x0  nop
    ctx->pc = 0x26eedcu;
    // NOP
label_26eee0:
    // 0x26eee0: 0x4b47  .word       0x00004B47                   # srav        $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eee0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26eee4:
    // 0x26eee4: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x26eee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eee8:
    // 0x26eee8: 0x0  nop
    ctx->pc = 0x26eee8u;
    // NOP
label_26eeec:
    // 0x26eeec: 0x0  nop
    ctx->pc = 0x26eeecu;
    // NOP
label_26eef0:
    // 0x26eef0: 0x4b52  .word       0x00004B52                   # mflo        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eef0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26eef4:
    // 0x26eef4: 0xa020  add         $s4, $zero, $zero
    ctx->pc = 0x26eef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26eef8:
    // 0x26eef8: 0x0  nop
    ctx->pc = 0x26eef8u;
    // NOP
label_26eefc:
    // 0x26eefc: 0x0  nop
    ctx->pc = 0x26eefcu;
    // NOP
label_26ef00:
    // 0x26ef00: 0x4b67  .word       0x00004B67                   # not         $t1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef00u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ef04:
    // 0x26ef04: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26ef08:
    // 0x26ef08: 0x0  nop
    ctx->pc = 0x26ef08u;
    // NOP
label_26ef0c:
    // 0x26ef0c: 0x0  nop
    ctx->pc = 0x26ef0cu;
    // NOP
label_26ef10:
    // 0x26ef10: 0x4b7b  dsra        $t1, $zero, 13
    ctx->pc = 0x26ef10u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 13);
label_26ef14:
    // 0x26ef14: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x26ef14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26ef18:
    // 0x26ef18: 0x0  nop
    ctx->pc = 0x26ef18u;
    // NOP
label_26ef1c:
    // 0x26ef1c: 0x0  nop
    ctx->pc = 0x26ef1cu;
    // NOP
label_26ef20:
    // 0x26ef20: 0x4b90  .word       0x00004B90                   # mfhi        $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef24:
    // 0x26ef24: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26ef28:
    // 0x26ef28: 0x0  nop
    ctx->pc = 0x26ef28u;
    // NOP
label_26ef2c:
    // 0x26ef2c: 0x0  nop
    ctx->pc = 0x26ef2cu;
    // NOP
label_26ef30:
    // 0x26ef30: 0x4ba7  .word       0x00004BA7                   # not         $t1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ef34:
    // 0x26ef34: 0x4b50  .word       0x00004B50                   # mfhi        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef38:
    // 0x26ef38: 0x0  nop
    ctx->pc = 0x26ef38u;
    // NOP
label_26ef3c:
    // 0x26ef3c: 0x0  nop
    ctx->pc = 0x26ef3cu;
    // NOP
label_26ef40:
    // 0x26ef40: 0x4bb1  tgeu        $zero, $zero, 302
    ctx->pc = 0x26ef40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef44:
    // 0x26ef44: 0xf230  tge         $zero, $zero, 968
    ctx->pc = 0x26ef44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef48:
    // 0x26ef48: 0x0  nop
    ctx->pc = 0x26ef48u;
    // NOP
label_26ef4c:
    // 0x26ef4c: 0x0  nop
    ctx->pc = 0x26ef4cu;
    // NOP
label_26ef50:
    // 0x26ef50: 0x4bd0  .word       0x00004BD0                   # mfhi        $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef54:
    // 0x26ef54: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26ef58:
    // 0x26ef58: 0x0  nop
    ctx->pc = 0x26ef58u;
    // NOP
label_26ef5c:
    // 0x26ef5c: 0x0  nop
    ctx->pc = 0x26ef5cu;
    // NOP
label_26ef60:
    // 0x26ef60: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ef64:
    // 0x26ef64: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26ef68:
    // 0x26ef68: 0x0  nop
    ctx->pc = 0x26ef68u;
    // NOP
label_26ef6c:
    // 0x26ef6c: 0x0  nop
    ctx->pc = 0x26ef6cu;
    // NOP
label_26ef70:
    // 0x26ef70: 0x4bf5  .word       0x00004BF5                   # INVALID     $zero, $zero, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26EF70 raw=0x00004BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ef74:
    // 0x26ef74: 0x8270  tge         $zero, $zero, 521
    ctx->pc = 0x26ef74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef78:
    // 0x26ef78: 0x0  nop
    ctx->pc = 0x26ef78u;
    // NOP
label_26ef7c:
    // 0x26ef7c: 0x0  nop
    ctx->pc = 0x26ef7cu;
    // NOP
label_26ef80:
    // 0x26ef80: 0x4c06  .word       0x00004C06                   # srlv        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ef84:
    // 0x26ef84: 0x88a0  .word       0x000088A0                   # add         $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26ef88:
    // 0x26ef88: 0x0  nop
    ctx->pc = 0x26ef88u;
    // NOP
label_26ef8c:
    // 0x26ef8c: 0x0  nop
    ctx->pc = 0x26ef8cu;
    // NOP
label_26ef90:
    // 0x26ef90: 0x4c18  .word       0x00004C18                   # mult        $t1, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ef90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ef94:
    // 0x26ef94: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x26ef94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef98:
    // 0x26ef98: 0x0  nop
    ctx->pc = 0x26ef98u;
    // NOP
label_26ef9c:
    // 0x26ef9c: 0x0  nop
    ctx->pc = 0x26ef9cu;
    // NOP
label_26efa0:
    // 0x26efa0: 0x4c2b  .word       0x00004C2B                   # sltu        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26efa4:
    // 0x26efa4: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26efa8:
    // 0x26efa8: 0x0  nop
    ctx->pc = 0x26efa8u;
    // NOP
label_26efac:
    // 0x26efac: 0x0  nop
    ctx->pc = 0x26efacu;
    // NOP
label_26efb0:
    // 0x26efb0: 0x4c33  tltu        $zero, $zero, 304
    ctx->pc = 0x26efb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb4:
    // 0x26efb4: 0x96f0  tge         $zero, $zero, 603
    ctx->pc = 0x26efb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb8:
    // 0x26efb8: 0x0  nop
    ctx->pc = 0x26efb8u;
    // NOP
label_26efbc:
    // 0x26efbc: 0x0  nop
    ctx->pc = 0x26efbcu;
    // NOP
label_26efc0:
    // 0x26efc0: 0x4c46  .word       0x00004C46                   # srlv        $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26efc4:
    // 0x26efc4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x26efc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efc8:
    // 0x26efc8: 0x0  nop
    ctx->pc = 0x26efc8u;
    // NOP
label_26efcc:
    // 0x26efcc: 0x0  nop
    ctx->pc = 0x26efccu;
    // NOP
label_26efd0:
    // 0x26efd0: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26efd4:
    // 0x26efd4: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26efd8:
    // 0x26efd8: 0x0  nop
    ctx->pc = 0x26efd8u;
    // NOP
label_26efdc:
    // 0x26efdc: 0x0  nop
    ctx->pc = 0x26efdcu;
    // NOP
    ctx->pc = 0x26efe0u;
    return;
}

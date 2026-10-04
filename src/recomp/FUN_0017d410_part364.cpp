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


void FUN_0017d410_part364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22e800u: goto label_22e800;
        case 0x22e804u: goto label_22e804;
        case 0x22e808u: goto label_22e808;
        case 0x22e80cu: goto label_22e80c;
        case 0x22e810u: goto label_22e810;
        case 0x22e814u: goto label_22e814;
        case 0x22e818u: goto label_22e818;
        case 0x22e81cu: goto label_22e81c;
        case 0x22e820u: goto label_22e820;
        case 0x22e824u: goto label_22e824;
        case 0x22e828u: goto label_22e828;
        case 0x22e82cu: goto label_22e82c;
        case 0x22e830u: goto label_22e830;
        case 0x22e834u: goto label_22e834;
        case 0x22e838u: goto label_22e838;
        case 0x22e83cu: goto label_22e83c;
        case 0x22e840u: goto label_22e840;
        case 0x22e844u: goto label_22e844;
        case 0x22e848u: goto label_22e848;
        case 0x22e84cu: goto label_22e84c;
        case 0x22e850u: goto label_22e850;
        case 0x22e854u: goto label_22e854;
        case 0x22e858u: goto label_22e858;
        case 0x22e85cu: goto label_22e85c;
        case 0x22e860u: goto label_22e860;
        case 0x22e864u: goto label_22e864;
        case 0x22e868u: goto label_22e868;
        case 0x22e86cu: goto label_22e86c;
        case 0x22e870u: goto label_22e870;
        case 0x22e874u: goto label_22e874;
        case 0x22e878u: goto label_22e878;
        case 0x22e87cu: goto label_22e87c;
        case 0x22e880u: goto label_22e880;
        case 0x22e884u: goto label_22e884;
        case 0x22e888u: goto label_22e888;
        case 0x22e88cu: goto label_22e88c;
        case 0x22e890u: goto label_22e890;
        case 0x22e894u: goto label_22e894;
        case 0x22e898u: goto label_22e898;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8a0u: goto label_22e8a0;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e8a8u: goto label_22e8a8;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e8b4u: goto label_22e8b4;
        case 0x22e8b8u: goto label_22e8b8;
        case 0x22e8bcu: goto label_22e8bc;
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8c8u: goto label_22e8c8;
        case 0x22e8ccu: goto label_22e8cc;
        case 0x22e8d0u: goto label_22e8d0;
        case 0x22e8d4u: goto label_22e8d4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8dcu: goto label_22e8dc;
        case 0x22e8e0u: goto label_22e8e0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e8ecu: goto label_22e8ec;
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e8f8u: goto label_22e8f8;
        case 0x22e8fcu: goto label_22e8fc;
        case 0x22e900u: goto label_22e900;
        case 0x22e904u: goto label_22e904;
        case 0x22e908u: goto label_22e908;
        case 0x22e90cu: goto label_22e90c;
        case 0x22e910u: goto label_22e910;
        case 0x22e914u: goto label_22e914;
        case 0x22e918u: goto label_22e918;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e920u: goto label_22e920;
        case 0x22e924u: goto label_22e924;
        case 0x22e928u: goto label_22e928;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e930u: goto label_22e930;
        case 0x22e934u: goto label_22e934;
        case 0x22e938u: goto label_22e938;
        case 0x22e93cu: goto label_22e93c;
        case 0x22e940u: goto label_22e940;
        case 0x22e944u: goto label_22e944;
        case 0x22e948u: goto label_22e948;
        case 0x22e94cu: goto label_22e94c;
        case 0x22e950u: goto label_22e950;
        case 0x22e954u: goto label_22e954;
        case 0x22e958u: goto label_22e958;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e960u: goto label_22e960;
        case 0x22e964u: goto label_22e964;
        case 0x22e968u: goto label_22e968;
        case 0x22e96cu: goto label_22e96c;
        case 0x22e970u: goto label_22e970;
        case 0x22e974u: goto label_22e974;
        case 0x22e978u: goto label_22e978;
        case 0x22e97cu: goto label_22e97c;
        case 0x22e980u: goto label_22e980;
        case 0x22e984u: goto label_22e984;
        case 0x22e988u: goto label_22e988;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e990u: goto label_22e990;
        case 0x22e994u: goto label_22e994;
        case 0x22e998u: goto label_22e998;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9a4u: goto label_22e9a4;
        case 0x22e9a8u: goto label_22e9a8;
        case 0x22e9acu: goto label_22e9ac;
        case 0x22e9b0u: goto label_22e9b0;
        case 0x22e9b4u: goto label_22e9b4;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9bcu: goto label_22e9bc;
        case 0x22e9c0u: goto label_22e9c0;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9c8u: goto label_22e9c8;
        case 0x22e9ccu: goto label_22e9cc;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9d4u: goto label_22e9d4;
        case 0x22e9d8u: goto label_22e9d8;
        case 0x22e9dcu: goto label_22e9dc;
        case 0x22e9e0u: goto label_22e9e0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9e8u: goto label_22e9e8;
        case 0x22e9ecu: goto label_22e9ec;
        case 0x22e9f0u: goto label_22e9f0;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22e9f8u: goto label_22e9f8;
        case 0x22e9fcu: goto label_22e9fc;
        case 0x22ea00u: goto label_22ea00;
        case 0x22ea04u: goto label_22ea04;
        case 0x22ea08u: goto label_22ea08;
        case 0x22ea0cu: goto label_22ea0c;
        case 0x22ea10u: goto label_22ea10;
        case 0x22ea14u: goto label_22ea14;
        case 0x22ea18u: goto label_22ea18;
        case 0x22ea1cu: goto label_22ea1c;
        case 0x22ea20u: goto label_22ea20;
        case 0x22ea24u: goto label_22ea24;
        case 0x22ea28u: goto label_22ea28;
        case 0x22ea2cu: goto label_22ea2c;
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea34u: goto label_22ea34;
        case 0x22ea38u: goto label_22ea38;
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22ea40u: goto label_22ea40;
        case 0x22ea44u: goto label_22ea44;
        case 0x22ea48u: goto label_22ea48;
        case 0x22ea4cu: goto label_22ea4c;
        case 0x22ea50u: goto label_22ea50;
        case 0x22ea54u: goto label_22ea54;
        case 0x22ea58u: goto label_22ea58;
        case 0x22ea5cu: goto label_22ea5c;
        case 0x22ea60u: goto label_22ea60;
        case 0x22ea64u: goto label_22ea64;
        case 0x22ea68u: goto label_22ea68;
        case 0x22ea6cu: goto label_22ea6c;
        case 0x22ea70u: goto label_22ea70;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea78u: goto label_22ea78;
        case 0x22ea7cu: goto label_22ea7c;
        case 0x22ea80u: goto label_22ea80;
        case 0x22ea84u: goto label_22ea84;
        case 0x22ea88u: goto label_22ea88;
        case 0x22ea8cu: goto label_22ea8c;
        case 0x22ea90u: goto label_22ea90;
        case 0x22ea94u: goto label_22ea94;
        case 0x22ea98u: goto label_22ea98;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eaa0u: goto label_22eaa0;
        case 0x22eaa4u: goto label_22eaa4;
        case 0x22eaa8u: goto label_22eaa8;
        case 0x22eaacu: goto label_22eaac;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eab8u: goto label_22eab8;
        case 0x22eabcu: goto label_22eabc;
        case 0x22eac0u: goto label_22eac0;
        case 0x22eac4u: goto label_22eac4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaccu: goto label_22eacc;
        case 0x22ead0u: goto label_22ead0;
        case 0x22ead4u: goto label_22ead4;
        case 0x22ead8u: goto label_22ead8;
        case 0x22eadcu: goto label_22eadc;
        case 0x22eae0u: goto label_22eae0;
        case 0x22eae4u: goto label_22eae4;
        case 0x22eae8u: goto label_22eae8;
        case 0x22eaecu: goto label_22eaec;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eaf8u: goto label_22eaf8;
        case 0x22eafcu: goto label_22eafc;
        case 0x22eb00u: goto label_22eb00;
        case 0x22eb04u: goto label_22eb04;
        case 0x22eb08u: goto label_22eb08;
        case 0x22eb0cu: goto label_22eb0c;
        case 0x22eb10u: goto label_22eb10;
        case 0x22eb14u: goto label_22eb14;
        case 0x22eb18u: goto label_22eb18;
        case 0x22eb1cu: goto label_22eb1c;
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb28u: goto label_22eb28;
        case 0x22eb2cu: goto label_22eb2c;
        case 0x22eb30u: goto label_22eb30;
        case 0x22eb34u: goto label_22eb34;
        case 0x22eb38u: goto label_22eb38;
        case 0x22eb3cu: goto label_22eb3c;
        case 0x22eb40u: goto label_22eb40;
        case 0x22eb44u: goto label_22eb44;
        case 0x22eb48u: goto label_22eb48;
        case 0x22eb4cu: goto label_22eb4c;
        case 0x22eb50u: goto label_22eb50;
        case 0x22eb54u: goto label_22eb54;
        case 0x22eb58u: goto label_22eb58;
        case 0x22eb5cu: goto label_22eb5c;
        case 0x22eb60u: goto label_22eb60;
        case 0x22eb64u: goto label_22eb64;
        case 0x22eb68u: goto label_22eb68;
        case 0x22eb6cu: goto label_22eb6c;
        case 0x22eb70u: goto label_22eb70;
        case 0x22eb74u: goto label_22eb74;
        case 0x22eb78u: goto label_22eb78;
        case 0x22eb7cu: goto label_22eb7c;
        case 0x22eb80u: goto label_22eb80;
        case 0x22eb84u: goto label_22eb84;
        case 0x22eb88u: goto label_22eb88;
        case 0x22eb8cu: goto label_22eb8c;
        case 0x22eb90u: goto label_22eb90;
        case 0x22eb94u: goto label_22eb94;
        case 0x22eb98u: goto label_22eb98;
        case 0x22eb9cu: goto label_22eb9c;
        case 0x22eba0u: goto label_22eba0;
        case 0x22eba4u: goto label_22eba4;
        case 0x22eba8u: goto label_22eba8;
        case 0x22ebacu: goto label_22ebac;
        case 0x22ebb0u: goto label_22ebb0;
        case 0x22ebb4u: goto label_22ebb4;
        case 0x22ebb8u: goto label_22ebb8;
        case 0x22ebbcu: goto label_22ebbc;
        case 0x22ebc0u: goto label_22ebc0;
        case 0x22ebc4u: goto label_22ebc4;
        case 0x22ebc8u: goto label_22ebc8;
        case 0x22ebccu: goto label_22ebcc;
        case 0x22ebd0u: goto label_22ebd0;
        case 0x22ebd4u: goto label_22ebd4;
        case 0x22ebd8u: goto label_22ebd8;
        case 0x22ebdcu: goto label_22ebdc;
        case 0x22ebe0u: goto label_22ebe0;
        case 0x22ebe4u: goto label_22ebe4;
        case 0x22ebe8u: goto label_22ebe8;
        case 0x22ebecu: goto label_22ebec;
        case 0x22ebf0u: goto label_22ebf0;
        case 0x22ebf4u: goto label_22ebf4;
        case 0x22ebf8u: goto label_22ebf8;
        case 0x22ebfcu: goto label_22ebfc;
        case 0x22ec00u: goto label_22ec00;
        case 0x22ec04u: goto label_22ec04;
        case 0x22ec08u: goto label_22ec08;
        case 0x22ec0cu: goto label_22ec0c;
        case 0x22ec10u: goto label_22ec10;
        case 0x22ec14u: goto label_22ec14;
        case 0x22ec18u: goto label_22ec18;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec20u: goto label_22ec20;
        case 0x22ec24u: goto label_22ec24;
        case 0x22ec28u: goto label_22ec28;
        case 0x22ec2cu: goto label_22ec2c;
        case 0x22ec30u: goto label_22ec30;
        case 0x22ec34u: goto label_22ec34;
        case 0x22ec38u: goto label_22ec38;
        case 0x22ec3cu: goto label_22ec3c;
        case 0x22ec40u: goto label_22ec40;
        case 0x22ec44u: goto label_22ec44;
        case 0x22ec48u: goto label_22ec48;
        case 0x22ec4cu: goto label_22ec4c;
        case 0x22ec50u: goto label_22ec50;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ec58u: goto label_22ec58;
        case 0x22ec5cu: goto label_22ec5c;
        case 0x22ec60u: goto label_22ec60;
        case 0x22ec64u: goto label_22ec64;
        case 0x22ec68u: goto label_22ec68;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec70u: goto label_22ec70;
        case 0x22ec74u: goto label_22ec74;
        case 0x22ec78u: goto label_22ec78;
        case 0x22ec7cu: goto label_22ec7c;
        case 0x22ec80u: goto label_22ec80;
        case 0x22ec84u: goto label_22ec84;
        case 0x22ec88u: goto label_22ec88;
        case 0x22ec8cu: goto label_22ec8c;
        case 0x22ec90u: goto label_22ec90;
        case 0x22ec94u: goto label_22ec94;
        case 0x22ec98u: goto label_22ec98;
        case 0x22ec9cu: goto label_22ec9c;
        case 0x22eca0u: goto label_22eca0;
        case 0x22eca4u: goto label_22eca4;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecacu: goto label_22ecac;
        case 0x22ecb0u: goto label_22ecb0;
        case 0x22ecb4u: goto label_22ecb4;
        case 0x22ecb8u: goto label_22ecb8;
        case 0x22ecbcu: goto label_22ecbc;
        case 0x22ecc0u: goto label_22ecc0;
        case 0x22ecc4u: goto label_22ecc4;
        case 0x22ecc8u: goto label_22ecc8;
        case 0x22ecccu: goto label_22eccc;
        case 0x22ecd0u: goto label_22ecd0;
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ecd8u: goto label_22ecd8;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ece0u: goto label_22ece0;
        case 0x22ece4u: goto label_22ece4;
        case 0x22ece8u: goto label_22ece8;
        case 0x22ececu: goto label_22ecec;
        case 0x22ecf0u: goto label_22ecf0;
        case 0x22ecf4u: goto label_22ecf4;
        case 0x22ecf8u: goto label_22ecf8;
        case 0x22ecfcu: goto label_22ecfc;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ed04u: goto label_22ed04;
        case 0x22ed08u: goto label_22ed08;
        case 0x22ed0cu: goto label_22ed0c;
        case 0x22ed10u: goto label_22ed10;
        case 0x22ed14u: goto label_22ed14;
        case 0x22ed18u: goto label_22ed18;
        case 0x22ed1cu: goto label_22ed1c;
        case 0x22ed20u: goto label_22ed20;
        case 0x22ed24u: goto label_22ed24;
        case 0x22ed28u: goto label_22ed28;
        case 0x22ed2cu: goto label_22ed2c;
        case 0x22ed30u: goto label_22ed30;
        case 0x22ed34u: goto label_22ed34;
        case 0x22ed38u: goto label_22ed38;
        case 0x22ed3cu: goto label_22ed3c;
        case 0x22ed40u: goto label_22ed40;
        case 0x22ed44u: goto label_22ed44;
        case 0x22ed48u: goto label_22ed48;
        case 0x22ed4cu: goto label_22ed4c;
        case 0x22ed50u: goto label_22ed50;
        case 0x22ed54u: goto label_22ed54;
        case 0x22ed58u: goto label_22ed58;
        case 0x22ed5cu: goto label_22ed5c;
        case 0x22ed60u: goto label_22ed60;
        case 0x22ed64u: goto label_22ed64;
        case 0x22ed68u: goto label_22ed68;
        case 0x22ed6cu: goto label_22ed6c;
        case 0x22ed70u: goto label_22ed70;
        case 0x22ed74u: goto label_22ed74;
        case 0x22ed78u: goto label_22ed78;
        case 0x22ed7cu: goto label_22ed7c;
        case 0x22ed80u: goto label_22ed80;
        case 0x22ed84u: goto label_22ed84;
        case 0x22ed88u: goto label_22ed88;
        case 0x22ed8cu: goto label_22ed8c;
        case 0x22ed90u: goto label_22ed90;
        case 0x22ed94u: goto label_22ed94;
        case 0x22ed98u: goto label_22ed98;
        case 0x22ed9cu: goto label_22ed9c;
        case 0x22eda0u: goto label_22eda0;
        case 0x22eda4u: goto label_22eda4;
        case 0x22eda8u: goto label_22eda8;
        case 0x22edacu: goto label_22edac;
        case 0x22edb0u: goto label_22edb0;
        case 0x22edb4u: goto label_22edb4;
        case 0x22edb8u: goto label_22edb8;
        case 0x22edbcu: goto label_22edbc;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edc4u: goto label_22edc4;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edccu: goto label_22edcc;
        case 0x22edd0u: goto label_22edd0;
        case 0x22edd4u: goto label_22edd4;
        case 0x22edd8u: goto label_22edd8;
        case 0x22eddcu: goto label_22eddc;
        case 0x22ede0u: goto label_22ede0;
        case 0x22ede4u: goto label_22ede4;
        case 0x22ede8u: goto label_22ede8;
        case 0x22edecu: goto label_22edec;
        case 0x22edf0u: goto label_22edf0;
        case 0x22edf4u: goto label_22edf4;
        case 0x22edf8u: goto label_22edf8;
        case 0x22edfcu: goto label_22edfc;
        case 0x22ee00u: goto label_22ee00;
        case 0x22ee04u: goto label_22ee04;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee0cu: goto label_22ee0c;
        case 0x22ee10u: goto label_22ee10;
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee1cu: goto label_22ee1c;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ee24u: goto label_22ee24;
        case 0x22ee28u: goto label_22ee28;
        case 0x22ee2cu: goto label_22ee2c;
        case 0x22ee30u: goto label_22ee30;
        case 0x22ee34u: goto label_22ee34;
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee3cu: goto label_22ee3c;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee48u: goto label_22ee48;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee54u: goto label_22ee54;
        case 0x22ee58u: goto label_22ee58;
        case 0x22ee5cu: goto label_22ee5c;
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee64u: goto label_22ee64;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee6cu: goto label_22ee6c;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee74u: goto label_22ee74;
        case 0x22ee78u: goto label_22ee78;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee80u: goto label_22ee80;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee88u: goto label_22ee88;
        case 0x22ee8cu: goto label_22ee8c;
        case 0x22ee90u: goto label_22ee90;
        case 0x22ee94u: goto label_22ee94;
        case 0x22ee98u: goto label_22ee98;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eea0u: goto label_22eea0;
        case 0x22eea4u: goto label_22eea4;
        case 0x22eea8u: goto label_22eea8;
        case 0x22eeacu: goto label_22eeac;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eeb4u: goto label_22eeb4;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eebcu: goto label_22eebc;
        case 0x22eec0u: goto label_22eec0;
        case 0x22eec4u: goto label_22eec4;
        case 0x22eec8u: goto label_22eec8;
        case 0x22eeccu: goto label_22eecc;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eed4u: goto label_22eed4;
        case 0x22eed8u: goto label_22eed8;
        case 0x22eedcu: goto label_22eedc;
        case 0x22eee0u: goto label_22eee0;
        case 0x22eee4u: goto label_22eee4;
        case 0x22eee8u: goto label_22eee8;
        case 0x22eeecu: goto label_22eeec;
        case 0x22eef0u: goto label_22eef0;
        case 0x22eef4u: goto label_22eef4;
        case 0x22eef8u: goto label_22eef8;
        case 0x22eefcu: goto label_22eefc;
        case 0x22ef00u: goto label_22ef00;
        case 0x22ef04u: goto label_22ef04;
        case 0x22ef08u: goto label_22ef08;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef10u: goto label_22ef10;
        case 0x22ef14u: goto label_22ef14;
        case 0x22ef18u: goto label_22ef18;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef20u: goto label_22ef20;
        case 0x22ef24u: goto label_22ef24;
        case 0x22ef28u: goto label_22ef28;
        case 0x22ef2cu: goto label_22ef2c;
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef3cu: goto label_22ef3c;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef44u: goto label_22ef44;
        case 0x22ef48u: goto label_22ef48;
        case 0x22ef4cu: goto label_22ef4c;
        case 0x22ef50u: goto label_22ef50;
        case 0x22ef54u: goto label_22ef54;
        case 0x22ef58u: goto label_22ef58;
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22ef60u: goto label_22ef60;
        case 0x22ef64u: goto label_22ef64;
        case 0x22ef68u: goto label_22ef68;
        case 0x22ef6cu: goto label_22ef6c;
        case 0x22ef70u: goto label_22ef70;
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef78u: goto label_22ef78;
        case 0x22ef7cu: goto label_22ef7c;
        case 0x22ef80u: goto label_22ef80;
        case 0x22ef84u: goto label_22ef84;
        case 0x22ef88u: goto label_22ef88;
        case 0x22ef8cu: goto label_22ef8c;
        case 0x22ef90u: goto label_22ef90;
        case 0x22ef94u: goto label_22ef94;
        case 0x22ef98u: goto label_22ef98;
        case 0x22ef9cu: goto label_22ef9c;
        case 0x22efa0u: goto label_22efa0;
        case 0x22efa4u: goto label_22efa4;
        case 0x22efa8u: goto label_22efa8;
        case 0x22efacu: goto label_22efac;
        case 0x22efb0u: goto label_22efb0;
        case 0x22efb4u: goto label_22efb4;
        case 0x22efb8u: goto label_22efb8;
        case 0x22efbcu: goto label_22efbc;
        case 0x22efc0u: goto label_22efc0;
        case 0x22efc4u: goto label_22efc4;
        case 0x22efc8u: goto label_22efc8;
        case 0x22efccu: goto label_22efcc;
        default: return;
    }

label_22e800:
    // 0x22e800: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22e804:
    // 0x22e804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e808:
    // 0x22e808: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22e808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_22e80c:
    // 0x22e80c: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x22e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
label_22e810:
    // 0x22e810: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x22e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e814:
    // 0x22e814: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x22e814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e818:
    // 0x22e818: 0x0  nop
    ctx->pc = 0x22e818u;
    // NOP
label_22e81c:
    // 0x22e81c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_22e820:
    if (ctx->pc == 0x22E820u) {
        ctx->pc = 0x22E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E81Cu;
        // 0x22e820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E824u;
        goto label_22e824;
    }
    ctx->pc = 0x22E81Cu;
    {
        const bool branch_taken_0x22e81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E81Cu;
        // 0x22e820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e81c) {
            ctx->pc = 0x22E82Cu;
            goto label_22e82c;
        }
    }
    ctx->pc = 0x22E824u;
label_22e824:
    // 0x22e824: 0xc04a35c  jal         func_128D70
label_22e828:
    if (ctx->pc == 0x22E828u) {
        ctx->pc = 0x22E82Cu;
        goto label_22e82c;
    }
    ctx->pc = 0x22E824u;
    SET_GPR_U32(ctx, 31, 0x22E82Cu);
    ctx->pc = 0x128D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128D70u, 0x22E824u, 0x22E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E82Cu;
label_22e82c:
    // 0x22e82c: 0x0  nop
    ctx->pc = 0x22e82cu;
    // NOP
label_22e830:
    // 0x22e830: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x22e830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_22e834:
    // 0x22e834: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22e838:
    // 0x22e838: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x22e838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_22e83c:
    // 0x22e83c: 0x0  nop
    ctx->pc = 0x22e83cu;
    // NOP
label_22e840:
    // 0x22e840: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22e840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22e844:
    // 0x22e844: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x22e844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_22e848:
    // 0x22e848: 0x1460ff3c  bnez        $v1, . + 4 + (-0xC4 << 2)
label_22e84c:
    if (ctx->pc == 0x22E84Cu) {
        ctx->pc = 0x22E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E848u;
        // 0x22e84c: 0x26940034  addiu       $s4, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E850u;
        goto label_22e850;
    }
    ctx->pc = 0x22E848u;
    {
        const bool branch_taken_0x22e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E848u;
        // 0x22e84c: 0x26940034  addiu       $s4, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e848) {
            ctx->pc = 0x22E53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22e53c; return; }
        }
    }
    ctx->pc = 0x22E850u;
label_22e850:
    // 0x22e850: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22e850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22e854:
    // 0x22e854: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22e858:
    // 0x22e858: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22e858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22e85c:
    // 0x22e85c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22e85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22e860:
    // 0x22e860: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22e860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e864:
    // 0x22e864: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22e864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e868:
    // 0x22e868: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e86c:
    // 0x22e86c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22e86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e870:
    // 0x22e870: 0x3e00008  jr          $ra
label_22e874:
    if (ctx->pc == 0x22E874u) {
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E878u;
        goto label_22e878;
    }
    ctx->pc = 0x22E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E878u;
label_22e878:
    // 0x22e878: 0x0  nop
    ctx->pc = 0x22e878u;
    // NOP
label_22e87c:
    // 0x22e87c: 0x0  nop
    ctx->pc = 0x22e87cu;
    // NOP
label_22e880:
    // 0x22e880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e884:
    // 0x22e884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22e888:
    // 0x22e888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e88c:
    // 0x22e88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e890:
    // 0x22e890: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22e894:
    // 0x22e894: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x22e894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_22e898:
    // 0x22e898: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_22e89c:
    if (ctx->pc == 0x22E89Cu) {
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8A0u;
        goto label_22e8a0;
    }
    ctx->pc = 0x22E898u;
    {
        const bool branch_taken_0x22e898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e898) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8A0u;
label_22e8a0:
    // 0x22e8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e8a4:
    // 0x22e8a4: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
label_22e8a8:
    // 0x22e8a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22e8ac:
    // 0x22e8ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e8b0:
    // 0x22e8b0: 0x600008  jr          $v1
label_22e8b4:
    if (ctx->pc == 0x22E8B4u) {
        ctx->pc = 0x22E8B8u;
        goto label_22e8b8;
    }
    ctx->pc = 0x22E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E8B8u: goto label_22e8b8;
            case 0x22E8C8u: goto label_22e8c8;
            case 0x22E8ECu: goto label_22e8ec;
            case 0x22E8FCu: goto label_22e8fc;
            case 0x22E90Cu: goto label_22e90c;
            case 0x22E98Cu: goto label_22e98c;
            case 0x22E9A8u: goto label_22e9a8;
            case 0x22E9C0u: goto label_22e9c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E8B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E8B8u;
label_22e8b8:
    // 0x22e8b8: 0xc08b658  jal         func_22D960
label_22e8bc:
    if (ctx->pc == 0x22E8BCu) {
        ctx->pc = 0x22E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B8u;
        // 0x22e8bc: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8C0u;
        goto label_22e8c0;
    }
    ctx->pc = 0x22E8B8u;
    SET_GPR_U32(ctx, 31, 0x22E8C0u);
    ctx->pc = 0x22E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8B8u;
    // 0x22e8bc: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D960u;
    { ctx->pc = 0x22d960; return; }
    ctx->pc = 0x22E8C0u;
label_22e8c0:
    // 0x22e8c0: 0x10000042  b           . + 4 + (0x42 << 2)
label_22e8c4:
    if (ctx->pc == 0x22E8C4u) {
        ctx->pc = 0x22E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C0u;
        // 0x22e8c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8C8u;
        goto label_22e8c8;
    }
    ctx->pc = 0x22E8C0u;
    {
        const bool branch_taken_0x22e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C0u;
        // 0x22e8c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8c0) {
            ctx->pc = 0x22E9CCu;
            goto label_22e9cc;
        }
    }
    ctx->pc = 0x22E8C8u;
label_22e8c8:
    // 0x22e8c8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_22e8cc:
    // 0x22e8cc: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22e8d0:
    // 0x22e8d0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_22e8d4:
    // 0x22e8d4: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_22e8d8:
    // 0x22e8d8: 0x8488000c  lh          $t0, 0xC($a0)
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_22e8dc:
    // 0x22e8dc: 0xc08b800  jal         func_22E000
label_22e8e0:
    if (ctx->pc == 0x22E8E0u) {
        ctx->pc = 0x22E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8DCu;
        // 0x22e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8E4u;
        goto label_22e8e4;
    }
    ctx->pc = 0x22E8DCu;
    SET_GPR_U32(ctx, 31, 0x22E8E4u);
    ctx->pc = 0x22E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8DCu;
    // 0x22e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E000u;
    { ctx->pc = 0x22e000; return; }
    ctx->pc = 0x22E8E4u;
label_22e8e4:
    // 0x22e8e4: 0x10000038  b           . + 4 + (0x38 << 2)
label_22e8e8:
    if (ctx->pc == 0x22E8E8u) {
        ctx->pc = 0x22E8ECu;
        goto label_22e8ec;
    }
    ctx->pc = 0x22E8E4u;
    {
        const bool branch_taken_0x22e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8e4) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8ECu;
label_22e8ec:
    // 0x22e8ec: 0xc08b4b8  jal         func_22D2E0
label_22e8f0:
    if (ctx->pc == 0x22E8F0u) {
        ctx->pc = 0x22E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8ECu;
        // 0x22e8f0: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8F4u;
        goto label_22e8f4;
    }
    ctx->pc = 0x22E8ECu;
    SET_GPR_U32(ctx, 31, 0x22E8F4u);
    ctx->pc = 0x22E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8ECu;
    // 0x22e8f0: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D2E0u;
    { ctx->pc = 0x22d2e0; return; }
    ctx->pc = 0x22E8F4u;
label_22e8f4:
    // 0x22e8f4: 0x10000034  b           . + 4 + (0x34 << 2)
label_22e8f8:
    if (ctx->pc == 0x22E8F8u) {
        ctx->pc = 0x22E8FCu;
        goto label_22e8fc;
    }
    ctx->pc = 0x22E8F4u;
    {
        const bool branch_taken_0x22e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8f4) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8FCu;
label_22e8fc:
    // 0x22e8fc: 0xc08abf4  jal         func_22AFD0
label_22e900:
    if (ctx->pc == 0x22E900u) {
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8FCu;
        // 0x22e900: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E904u;
        goto label_22e904;
    }
    ctx->pc = 0x22E8FCu;
    SET_GPR_U32(ctx, 31, 0x22E904u);
    ctx->pc = 0x22E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8FCu;
    // 0x22e900: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD0u;
    { ctx->pc = 0x22afd0; return; }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0x10000030  b           . + 4 + (0x30 << 2)
label_22e908:
    if (ctx->pc == 0x22E908u) {
        ctx->pc = 0x22E90Cu;
        goto label_22e90c;
    }
    ctx->pc = 0x22E904u;
    {
        const bool branch_taken_0x22e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e904) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E90Cu;
label_22e90c:
    // 0x22e90c: 0x90910002  lbu         $s1, 0x2($a0)
    ctx->pc = 0x22e90cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_22e910:
    // 0x22e910: 0xc0590dc  jal         func_164370
label_22e914:
    if (ctx->pc == 0x22E914u) {
        ctx->pc = 0x22E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E910u;
        // 0x22e914: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E918u;
        goto label_22e918;
    }
    ctx->pc = 0x22E910u;
    SET_GPR_U32(ctx, 31, 0x22E918u);
    ctx->pc = 0x22E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E910u;
    // 0x22e914: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22E910u, 0x22E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E918u;
label_22e918:
    // 0x22e918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e91c:
    // 0x22e91c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_22e920:
    if (ctx->pc == 0x22E920u) {
        ctx->pc = 0x22E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E91Cu;
        // 0x22e920: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E924u;
        goto label_22e924;
    }
    ctx->pc = 0x22E91Cu;
    {
        const bool branch_taken_0x22e91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E91Cu;
        // 0x22e920: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e91c) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E924u;
label_22e924:
    // 0x22e924: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22e928:
    // 0x22e928: 0xc066e26  jal         func_19B898
label_22e92c:
    if (ctx->pc == 0x22E92Cu) {
        ctx->pc = 0x22E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E928u;
        // 0x22e92c: 0x24a5a490  addiu       $a1, $a1, -0x5B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E930u;
        goto label_22e930;
    }
    ctx->pc = 0x22E928u;
    SET_GPR_U32(ctx, 31, 0x22E930u);
    ctx->pc = 0x22E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E928u;
    // 0x22e92c: 0x24a5a490  addiu       $a1, $a1, -0x5B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22E930u;
label_22e930:
    // 0x22e930: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_22e934:
    // 0x22e934: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22e938:
    // 0x22e938: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22e93c:
    // 0x22e93c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22e940:
    // 0x22e940: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x22e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22e944:
    // 0x22e944: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_22e948:
    // 0x22e948: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x22e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e94c:
    // 0x22e94c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x22e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_22e950:
    // 0x22e950: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x22e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e954:
    // 0x22e954: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22e954u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22e958:
    // 0x22e958: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x22e958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_22e95c:
    // 0x22e95c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x22e95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_22e960:
    // 0x22e960: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x22e960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_22e964:
    // 0x22e964: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x22e964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_22e968:
    // 0x22e968: 0xc066e26  jal         func_19B898
label_22e96c:
    if (ctx->pc == 0x22E96Cu) {
        ctx->pc = 0x22E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E968u;
        // 0x22e96c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E970u;
        goto label_22e970;
    }
    ctx->pc = 0x22E968u;
    SET_GPR_U32(ctx, 31, 0x22E970u);
    ctx->pc = 0x22E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E968u;
    // 0x22e96c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_22e974:
    // 0x22e974: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22e978:
    // 0x22e978: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x22e978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
label_22e97c:
    // 0x22e97c: 0x2463b740  addiu       $v1, $v1, -0x48C0
    ctx->pc = 0x22e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948672));
label_22e980:
    // 0x22e980: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22e980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_22e984:
    // 0x22e984: 0x10000010  b           . + 4 + (0x10 << 2)
label_22e988:
    if (ctx->pc == 0x22E988u) {
        ctx->pc = 0x22E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E984u;
        // 0x22e988: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E98Cu;
        goto label_22e98c;
    }
    ctx->pc = 0x22E984u;
    {
        const bool branch_taken_0x22e984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E984u;
        // 0x22e988: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e984) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x22e98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_22e990:
    // 0x22e990: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_22e994:
    // 0x22e994: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22e998:
    // 0x22e998: 0xc08b148  jal         func_22C520
label_22e99c:
    if (ctx->pc == 0x22E99Cu) {
        ctx->pc = 0x22E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E998u;
        // 0x22e99c: 0x24c6ef80  addiu       $a2, $a2, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9A0u;
        goto label_22e9a0;
    }
    ctx->pc = 0x22E998u;
    SET_GPR_U32(ctx, 31, 0x22E9A0u);
    ctx->pc = 0x22E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E998u;
    // 0x22e99c: 0x24c6ef80  addiu       $a2, $a2, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C520u;
    { ctx->pc = 0x22c520; return; }
    ctx->pc = 0x22E9A0u;
label_22e9a0:
    // 0x22e9a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_22e9a4:
    if (ctx->pc == 0x22E9A4u) {
        ctx->pc = 0x22E9A8u;
        goto label_22e9a8;
    }
    ctx->pc = 0x22E9A0u;
    {
        const bool branch_taken_0x22e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9a0) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E9A8u;
label_22e9a8:
    // 0x22e9a8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x22e9a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_22e9ac:
    // 0x22e9ac: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x22e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_22e9b0:
    // 0x22e9b0: 0xc08b028  jal         func_22C0A0
label_22e9b4:
    if (ctx->pc == 0x22E9B4u) {
        ctx->pc = 0x22E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B0u;
        // 0x22e9b4: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9B8u;
        goto label_22e9b8;
    }
    ctx->pc = 0x22E9B0u;
    SET_GPR_U32(ctx, 31, 0x22E9B8u);
    ctx->pc = 0x22E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9B0u;
    // 0x22e9b4: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0A0u;
    { ctx->pc = 0x22c0a0; return; }
    ctx->pc = 0x22E9B8u;
label_22e9b8:
    // 0x22e9b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22e9bc:
    if (ctx->pc == 0x22E9BCu) {
        ctx->pc = 0x22E9C0u;
        goto label_22e9c0;
    }
    ctx->pc = 0x22E9B8u;
    {
        const bool branch_taken_0x22e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9b8) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E9C0u;
label_22e9c0:
    // 0x22e9c0: 0xc08ad14  jal         func_22B450
label_22e9c4:
    if (ctx->pc == 0x22E9C4u) {
        ctx->pc = 0x22E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9C0u;
        // 0x22e9c4: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9C8u;
        goto label_22e9c8;
    }
    ctx->pc = 0x22E9C0u;
    SET_GPR_U32(ctx, 31, 0x22E9C8u);
    ctx->pc = 0x22E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9C0u;
    // 0x22e9c4: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B450u;
    { ctx->pc = 0x22b450; return; }
    ctx->pc = 0x22E9C8u;
label_22e9c8:
    // 0x22e9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e9cc:
    // 0x22e9cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e9d0:
    // 0x22e9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e9d4:
    // 0x22e9d4: 0x3e00008  jr          $ra
label_22e9d8:
    if (ctx->pc == 0x22E9D8u) {
        ctx->pc = 0x22E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D4u;
        // 0x22e9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9DCu;
        goto label_22e9dc;
    }
    ctx->pc = 0x22E9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D4u;
        // 0x22e9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E9DCu;
label_22e9dc:
    // 0x22e9dc: 0x0  nop
    ctx->pc = 0x22e9dcu;
    // NOP
label_22e9e0:
    // 0x22e9e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e9e4:
    // 0x22e9e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e9e8:
    // 0x22e9e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22e9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e9ec:
    // 0x22e9ec: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
label_22e9f0:
    // 0x22e9f0: 0x25089f20  addiu       $t0, $t0, -0x60E0
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942496));
label_22e9f4:
    // 0x22e9f4: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x22e9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_22e9f8:
    // 0x22e9f8: 0x90e601c0  lbu         $a2, 0x1C0($a3)
    ctx->pc = 0x22e9f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 448)));
label_22e9fc:
    // 0x22e9fc: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x22e9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_22ea00:
    // 0x22ea00: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_22ea04:
    if (ctx->pc == 0x22EA04u) {
        ctx->pc = 0x22EA08u;
        goto label_22ea08;
    }
    ctx->pc = 0x22EA00u;
    {
        const bool branch_taken_0x22ea00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea00) {
            ctx->pc = 0x22EA50u;
            goto label_22ea50;
        }
    }
    ctx->pc = 0x22EA08u;
label_22ea08:
    // 0x22ea08: 0x90e701c1  lbu         $a3, 0x1C1($a3)
    ctx->pc = 0x22ea08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 449)));
label_22ea0c:
    // 0x22ea0c: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x22ea0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_22ea10:
    // 0x22ea10: 0x14e60012  bne         $a3, $a2, . + 4 + (0x12 << 2)
label_22ea14:
    if (ctx->pc == 0x22EA14u) {
        ctx->pc = 0x22EA18u;
        goto label_22ea18;
    }
    ctx->pc = 0x22EA10u;
    {
        const bool branch_taken_0x22ea10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x22ea10) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA18u;
label_22ea18:
    // 0x22ea18: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x22ea18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22ea1c:
    // 0x22ea1c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_22ea20:
    // 0x22ea20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ea24:
    // 0x22ea24: 0x2463a0e0  addiu       $v1, $v1, -0x5F20
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942944));
label_22ea28:
    // 0x22ea28: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_22ea2c:
    // 0x22ea2c: 0x6280b  movn        $a1, $zero, $a2
    ctx->pc = 0x22ea2cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_22ea30:
    // 0x22ea30: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x22ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22ea34:
    // 0x22ea34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22ea34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_22ea38:
    // 0x22ea38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22ea3c:
    // 0x22ea3c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22ea40:
    // 0x22ea40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22ea40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_22ea44:
    // 0x22ea44: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_22ea48:
    // 0x22ea48: 0x10000069  b           . + 4 + (0x69 << 2)
label_22ea4c:
    if (ctx->pc == 0x22EA4Cu) {
        ctx->pc = 0x22EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA48u;
        // 0x22ea4c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA50u;
        goto label_22ea50;
    }
    ctx->pc = 0x22EA48u;
    {
        const bool branch_taken_0x22ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA48u;
        // 0x22ea4c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea48) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EA50u;
label_22ea50:
    // 0x22ea50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_22ea54:
    if (ctx->pc == 0x22EA54u) {
        ctx->pc = 0x22EA58u;
        goto label_22ea58;
    }
    ctx->pc = 0x22EA50u;
    {
        const bool branch_taken_0x22ea50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea50) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA58u;
label_22ea58:
    // 0x22ea58: 0x24e301c0  addiu       $v1, $a3, 0x1C0
    ctx->pc = 0x22ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
label_22ea5c:
    // 0x22ea5c: 0x0  nop
    ctx->pc = 0x22ea5cu;
    // NOP
label_22ea60:
    // 0x22ea60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22ea60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22ea64:
    // 0x22ea64: 0x29260006  slti        $a2, $t1, 0x6
    ctx->pc = 0x22ea64u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
label_22ea68:
    // 0x22ea68: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
label_22ea6c:
    if (ctx->pc == 0x22EA6Cu) {
        ctx->pc = 0x22EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA68u;
        // 0x22ea6c: 0x254a0050  addiu       $t2, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA70u;
        goto label_22ea70;
    }
    ctx->pc = 0x22EA68u;
    {
        const bool branch_taken_0x22ea68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA68u;
        // 0x22ea6c: 0x254a0050  addiu       $t2, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea68) {
            ctx->pc = 0x22E9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e9f4;
        }
    }
    ctx->pc = 0x22EA70u;
label_22ea70:
    // 0x22ea70: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_22ea74:
    if (ctx->pc == 0x22EA74u) {
        ctx->pc = 0x22EA78u;
        goto label_22ea78;
    }
    ctx->pc = 0x22EA70u;
    {
        const bool branch_taken_0x22ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea70) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EA78u;
label_22ea78:
    // 0x22ea78: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x22ea78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22ea7c:
    // 0x22ea7c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x22ea7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ea80:
    // 0x22ea80: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_22ea84:
    // 0x22ea84: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x22ea84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_22ea88:
    // 0x22ea88: 0x84880004  lh          $t0, 0x4($a0)
    ctx->pc = 0x22ea88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22ea8c:
    // 0x22ea8c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x22ea8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22ea90:
    // 0x22ea90: 0x8380b  movn        $a3, $zero, $t0
    ctx->pc = 0x22ea90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_22ea94:
    // 0x22ea94: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x22ea94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_22ea98:
    // 0x22ea98: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x22ea98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_22ea9c:
    // 0x22ea9c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x22ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_22eaa0:
    // 0x22eaa0: 0x80860002  lb          $a2, 0x2($a0)
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_22eaa4:
    // 0x22eaa4: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x22eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_22eaa8:
    // 0x22eaa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22eaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_22eaac:
    // 0x22eaac: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x22eaacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22eab0:
    // 0x22eab0: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
label_22eab4:
    if (ctx->pc == 0x22EAB4u) {
        ctx->pc = 0x22EAB8u;
        goto label_22eab8;
    }
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22EB18u;
            goto label_22eb18;
        }
    }
    ctx->pc = 0x22EAB8u;
label_22eab8:
    // 0x22eab8: 0x8f8985d0  lw          $t1, -0x7A30($gp)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22eabc:
    // 0x22eabc: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
label_22eac0:
    if (ctx->pc == 0x22EAC0u) {
        ctx->pc = 0x22EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EABCu;
        // 0x22eac0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAC4u;
        goto label_22eac4;
    }
    ctx->pc = 0x22EABCu;
    {
        const bool branch_taken_0x22eabc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EABCu;
        // 0x22eac0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eabc) {
            ctx->pc = 0x22EB0Cu;
            goto label_22eb0c;
        }
    }
    ctx->pc = 0x22EAC4u;
label_22eac4:
    // 0x22eac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22eac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eac8:
    // 0x22eac8: 0x91270096  lbu         $a3, 0x96($t1)
    ctx->pc = 0x22eac8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 150)));
label_22eacc:
    // 0x22eacc: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x22eaccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_22ead0:
    // 0x22ead0: 0x14e6000b  bne         $a3, $a2, . + 4 + (0xB << 2)
label_22ead4:
    if (ctx->pc == 0x22EAD4u) {
        ctx->pc = 0x22EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAD0u;
        // 0x22ead4: 0x29410010  slti        $at, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAD8u;
        goto label_22ead8;
    }
    ctx->pc = 0x22EAD0u;
    {
        const bool branch_taken_0x22ead0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x22EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAD0u;
        // 0x22ead4: 0x29410010  slti        $at, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ead0) {
            ctx->pc = 0x22EB00u;
            goto label_22eb00;
        }
    }
    ctx->pc = 0x22EAD8u;
label_22ead8:
    // 0x22ead8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_22eadc:
    if (ctx->pc == 0x22EADCu) {
        ctx->pc = 0x22EAE0u;
        goto label_22eae0;
    }
    ctx->pc = 0x22EAD8u;
    {
        const bool branch_taken_0x22ead8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ead8) {
            ctx->pc = 0x22EB0Cu;
            goto label_22eb0c;
        }
    }
    ctx->pc = 0x22EAE0u;
label_22eae0:
    // 0x22eae0: 0x8d260090  lw          $a2, 0x90($t1)
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_22eae4:
    // 0x22eae4: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_22eae8:
    // 0x22eae8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_22eaec:
    // 0x22eaec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x22eaecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_22eaf0:
    // 0x22eaf0: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x22eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
label_22eaf4:
    // 0x22eaf4: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_22eaf8:
    // 0x22eaf8: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x22eaf8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_22eafc:
    // 0x22eafc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x22eafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_22eb00:
    // 0x22eb00: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
label_22eb04:
    // 0x22eb04: 0x1520fff0  bnez        $t1, . + 4 + (-0x10 << 2)
label_22eb08:
    if (ctx->pc == 0x22EB08u) {
        ctx->pc = 0x22EB0Cu;
        goto label_22eb0c;
    }
    ctx->pc = 0x22EB04u;
    {
        const bool branch_taken_0x22eb04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb04) {
            ctx->pc = 0x22EAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eac8;
        }
    }
    ctx->pc = 0x22EB0Cu;
label_22eb0c:
    // 0x22eb0c: 0x0  nop
    ctx->pc = 0x22eb0cu;
    // NOP
label_22eb10:
    // 0x22eb10: 0x10000012  b           . + 4 + (0x12 << 2)
label_22eb14:
    if (ctx->pc == 0x22EB14u) {
        ctx->pc = 0x22EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB10u;
        // 0x22eb14: 0xa06a0002  sb          $t2, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB18u;
        goto label_22eb18;
    }
    ctx->pc = 0x22EB10u;
    {
        const bool branch_taken_0x22eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB10u;
        // 0x22eb14: 0xa06a0002  sb          $t2, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb10) {
            ctx->pc = 0x22EB5Cu;
            goto label_22eb5c;
        }
    }
    ctx->pc = 0x22EB18u;
label_22eb18:
    // 0x22eb18: 0x8f8885d0  lw          $t0, -0x7A30($gp)
    ctx->pc = 0x22eb18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22eb1c:
    // 0x22eb1c: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
label_22eb20:
    if (ctx->pc == 0x22EB20u) {
        ctx->pc = 0x22EB24u;
        goto label_22eb24;
    }
    ctx->pc = 0x22EB1Cu;
    {
        const bool branch_taken_0x22eb1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb1c) {
            ctx->pc = 0x22EB5Cu;
            goto label_22eb5c;
        }
    }
    ctx->pc = 0x22EB24u;
label_22eb24:
    // 0x22eb24: 0x91070096  lbu         $a3, 0x96($t0)
    ctx->pc = 0x22eb24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 150)));
label_22eb28:
    // 0x22eb28: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x22eb28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_22eb2c:
    // 0x22eb2c: 0x14e60007  bne         $a3, $a2, . + 4 + (0x7 << 2)
label_22eb30:
    if (ctx->pc == 0x22EB30u) {
        ctx->pc = 0x22EB34u;
        goto label_22eb34;
    }
    ctx->pc = 0x22EB2Cu;
    {
        const bool branch_taken_0x22eb2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x22eb2c) {
            ctx->pc = 0x22EB4Cu;
            goto label_22eb4c;
        }
    }
    ctx->pc = 0x22EB34u;
label_22eb34:
    // 0x22eb34: 0x8d050090  lw          $a1, 0x90($t0)
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
label_22eb38:
    // 0x22eb38: 0x30a60010  andi        $a2, $a1, 0x10
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_22eb3c:
    // 0x22eb3c: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x22eb3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_22eb40:
    // 0x22eb40: 0xad050090  sw          $a1, 0x90($t0)
    ctx->pc = 0x22eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 5));
label_22eb44:
    // 0x22eb44: 0x6282b  sltu        $a1, $zero, $a2
    ctx->pc = 0x22eb44u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22eb48:
    // 0x22eb48: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x22eb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_22eb4c:
    // 0x22eb4c: 0x0  nop
    ctx->pc = 0x22eb4cu;
    // NOP
label_22eb50:
    // 0x22eb50: 0x8d080084  lw          $t0, 0x84($t0)
    ctx->pc = 0x22eb50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
label_22eb54:
    // 0x22eb54: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
label_22eb58:
    if (ctx->pc == 0x22EB58u) {
        ctx->pc = 0x22EB5Cu;
        goto label_22eb5c;
    }
    ctx->pc = 0x22EB54u;
    {
        const bool branch_taken_0x22eb54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb54) {
            ctx->pc = 0x22EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eb24;
        }
    }
    ctx->pc = 0x22EB5Cu;
label_22eb5c:
    // 0x22eb5c: 0x0  nop
    ctx->pc = 0x22eb5cu;
    // NOP
label_22eb60:
    // 0x22eb60: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22eb64:
    // 0x22eb64: 0x5300a  movz        $a2, $zero, $a1
    ctx->pc = 0x22eb64u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_22eb68:
    // 0x22eb68: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x22eb68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22eb6c:
    // 0x22eb6c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x22eb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_22eb70:
    // 0x22eb70: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22eb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_22eb74:
    // 0x22eb74: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x22eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_22eb78:
    // 0x22eb78: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22eb7c:
    // 0x22eb7c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_22eb80:
    if (ctx->pc == 0x22EB80u) {
        ctx->pc = 0x22EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB7Cu;
        // 0x22eb80: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB84u;
        goto label_22eb84;
    }
    ctx->pc = 0x22EB7Cu;
    {
        const bool branch_taken_0x22eb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB7Cu;
        // 0x22eb80: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb7c) {
            ctx->pc = 0x22EBBCu;
            goto label_22ebbc;
        }
    }
    ctx->pc = 0x22EB84u;
label_22eb84:
    // 0x22eb84: 0x8f8684b0  lw          $a2, -0x7B50($gp)
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_22eb88:
    // 0x22eb88: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_22eb8c:
    if (ctx->pc == 0x22EB8Cu) {
        ctx->pc = 0x22EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB88u;
        // 0x22eb8c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB90u;
        goto label_22eb90;
    }
    ctx->pc = 0x22EB88u;
    {
        const bool branch_taken_0x22eb88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB88u;
        // 0x22eb8c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb88) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EB90u;
label_22eb90:
    // 0x22eb90: 0x90c3005d  lbu         $v1, 0x5D($a2)
    ctx->pc = 0x22eb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
label_22eb94:
    // 0x22eb94: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22eb98:
    if (ctx->pc == 0x22EB98u) {
        ctx->pc = 0x22EB9Cu;
        goto label_22eb9c;
    }
    ctx->pc = 0x22EB94u;
    {
        const bool branch_taken_0x22eb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22eb94) {
            ctx->pc = 0x22EBA8u;
            goto label_22eba8;
        }
    }
    ctx->pc = 0x22EB9Cu;
label_22eb9c:
    // 0x22eb9c: 0x94c30056  lhu         $v1, 0x56($a2)
    ctx->pc = 0x22eb9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
label_22eba0:
    // 0x22eba0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22eba4:
    // 0x22eba4: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x22eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
label_22eba8:
    // 0x22eba8: 0x8cc60044  lw          $a2, 0x44($a2)
    ctx->pc = 0x22eba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_22ebac:
    // 0x22ebac: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_22ebb0:
    if (ctx->pc == 0x22EBB0u) {
        ctx->pc = 0x22EBB4u;
        goto label_22ebb4;
    }
    ctx->pc = 0x22EBACu;
    {
        const bool branch_taken_0x22ebac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebac) {
            ctx->pc = 0x22EB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eb90;
        }
    }
    ctx->pc = 0x22EBB4u;
label_22ebb4:
    // 0x22ebb4: 0x1000000d  b           . + 4 + (0xD << 2)
label_22ebb8:
    if (ctx->pc == 0x22EBB8u) {
        ctx->pc = 0x22EBBCu;
        goto label_22ebbc;
    }
    ctx->pc = 0x22EBB4u;
    {
        const bool branch_taken_0x22ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebb4) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EBBCu;
label_22ebbc:
    // 0x22ebbc: 0x8f8684b0  lw          $a2, -0x7B50($gp)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_22ebc0:
    // 0x22ebc0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_22ebc4:
    if (ctx->pc == 0x22EBC4u) {
        ctx->pc = 0x22EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBC0u;
        // 0x22ebc4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBC8u;
        goto label_22ebc8;
    }
    ctx->pc = 0x22EBC0u;
    {
        const bool branch_taken_0x22ebc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBC0u;
        // 0x22ebc4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebc0) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EBC8u;
label_22ebc8:
    // 0x22ebc8: 0x90c3005d  lbu         $v1, 0x5D($a2)
    ctx->pc = 0x22ebc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
label_22ebcc:
    // 0x22ebcc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22ebd0:
    if (ctx->pc == 0x22EBD0u) {
        ctx->pc = 0x22EBD4u;
        goto label_22ebd4;
    }
    ctx->pc = 0x22EBCCu;
    {
        const bool branch_taken_0x22ebcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ebcc) {
            ctx->pc = 0x22EBE0u;
            goto label_22ebe0;
        }
    }
    ctx->pc = 0x22EBD4u;
label_22ebd4:
    // 0x22ebd4: 0x94c30056  lhu         $v1, 0x56($a2)
    ctx->pc = 0x22ebd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
label_22ebd8:
    // 0x22ebd8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x22ebd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_22ebdc:
    // 0x22ebdc: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x22ebdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ebe0:
    // 0x22ebe0: 0x8cc60044  lw          $a2, 0x44($a2)
    ctx->pc = 0x22ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_22ebe4:
    // 0x22ebe4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_22ebe8:
    if (ctx->pc == 0x22EBE8u) {
        ctx->pc = 0x22EBECu;
        goto label_22ebec;
    }
    ctx->pc = 0x22EBE4u;
    {
        const bool branch_taken_0x22ebe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebe4) {
            ctx->pc = 0x22EBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ebc8;
        }
    }
    ctx->pc = 0x22EBECu;
label_22ebec:
    // 0x22ebec: 0x0  nop
    ctx->pc = 0x22ebecu;
    // NOP
label_22ebf0:
    // 0x22ebf0: 0x3e00008  jr          $ra
label_22ebf4:
    if (ctx->pc == 0x22EBF4u) {
        ctx->pc = 0x22EBF8u;
        goto label_22ebf8;
    }
    ctx->pc = 0x22EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EBF8u;
label_22ebf8:
    // 0x22ebf8: 0x0  nop
    ctx->pc = 0x22ebf8u;
    // NOP
label_22ebfc:
    // 0x22ebfc: 0x0  nop
    ctx->pc = 0x22ebfcu;
    // NOP
label_22ec00:
    // 0x22ec00: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_22ec04:
    if (ctx->pc == 0x22EC04u) {
        ctx->pc = 0x22EC08u;
        goto label_22ec08;
    }
    ctx->pc = 0x22EC00u;
    {
        const bool branch_taken_0x22ec00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec00) {
            ctx->pc = 0x22EC44u;
            goto label_22ec44;
        }
    }
    ctx->pc = 0x22EC08u;
label_22ec08:
    // 0x22ec08: 0x8f8584b0  lw          $a1, -0x7B50($gp)
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_22ec0c:
    // 0x22ec0c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_22ec10:
    if (ctx->pc == 0x22EC10u) {
        ctx->pc = 0x22EC14u;
        goto label_22ec14;
    }
    ctx->pc = 0x22EC0Cu;
    {
        const bool branch_taken_0x22ec0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec0c) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC14u;
label_22ec14:
    // 0x22ec14: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22ec18:
    // 0x22ec18: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
label_22ec1c:
    // 0x22ec1c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22ec20:
    if (ctx->pc == 0x22EC20u) {
        ctx->pc = 0x22EC24u;
        goto label_22ec24;
    }
    ctx->pc = 0x22EC1Cu;
    {
        const bool branch_taken_0x22ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec1c) {
            ctx->pc = 0x22EC30u;
            goto label_22ec30;
        }
    }
    ctx->pc = 0x22EC24u;
label_22ec24:
    // 0x22ec24: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
label_22ec28:
    // 0x22ec28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22ec2c:
    // 0x22ec2c: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ec30:
    // 0x22ec30: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_22ec34:
    // 0x22ec34: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
label_22ec38:
    if (ctx->pc == 0x22EC38u) {
        ctx->pc = 0x22EC3Cu;
        goto label_22ec3c;
    }
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec18;
        }
    }
    ctx->pc = 0x22EC3Cu;
label_22ec3c:
    // 0x22ec3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_22ec40:
    if (ctx->pc == 0x22EC40u) {
        ctx->pc = 0x22EC44u;
        goto label_22ec44;
    }
    ctx->pc = 0x22EC3Cu;
    {
        const bool branch_taken_0x22ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec3c) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC44u;
label_22ec44:
    // 0x22ec44: 0x8f8584b0  lw          $a1, -0x7B50($gp)
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_22ec48:
    // 0x22ec48: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_22ec4c:
    if (ctx->pc == 0x22EC4Cu) {
        ctx->pc = 0x22EC50u;
        goto label_22ec50;
    }
    ctx->pc = 0x22EC48u;
    {
        const bool branch_taken_0x22ec48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec48) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC50u;
label_22ec50:
    // 0x22ec50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22ec50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22ec54:
    // 0x22ec54: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
label_22ec58:
    // 0x22ec58: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22ec5c:
    if (ctx->pc == 0x22EC5Cu) {
        ctx->pc = 0x22EC60u;
        goto label_22ec60;
    }
    ctx->pc = 0x22EC58u;
    {
        const bool branch_taken_0x22ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec58) {
            ctx->pc = 0x22EC6Cu;
            goto label_22ec6c;
        }
    }
    ctx->pc = 0x22EC60u;
label_22ec60:
    // 0x22ec60: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
label_22ec64:
    // 0x22ec64: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x22ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_22ec68:
    // 0x22ec68: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ec6c:
    // 0x22ec6c: 0x0  nop
    ctx->pc = 0x22ec6cu;
    // NOP
label_22ec70:
    // 0x22ec70: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_22ec74:
    // 0x22ec74: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
label_22ec78:
    if (ctx->pc == 0x22EC78u) {
        ctx->pc = 0x22EC7Cu;
        goto label_22ec7c;
    }
    ctx->pc = 0x22EC74u;
    {
        const bool branch_taken_0x22ec74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec74) {
            ctx->pc = 0x22EC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec54;
        }
    }
    ctx->pc = 0x22EC7Cu;
label_22ec7c:
    // 0x22ec7c: 0x0  nop
    ctx->pc = 0x22ec7cu;
    // NOP
label_22ec80:
    // 0x22ec80: 0x3e00008  jr          $ra
label_22ec84:
    if (ctx->pc == 0x22EC84u) {
        ctx->pc = 0x22EC88u;
        goto label_22ec88;
    }
    ctx->pc = 0x22EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EC88u;
label_22ec88:
    // 0x22ec88: 0x0  nop
    ctx->pc = 0x22ec88u;
    // NOP
label_22ec8c:
    // 0x22ec8c: 0x0  nop
    ctx->pc = 0x22ec8cu;
    // NOP
label_22ec90:
    // 0x22ec90: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_22ec94:
    if (ctx->pc == 0x22EC94u) {
        ctx->pc = 0x22EC98u;
        goto label_22ec98;
    }
    ctx->pc = 0x22EC90u;
    {
        const bool branch_taken_0x22ec90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec90) {
            ctx->pc = 0x22ECD4u;
            goto label_22ecd4;
        }
    }
    ctx->pc = 0x22EC98u;
label_22ec98:
    // 0x22ec98: 0x8f8585d0  lw          $a1, -0x7A30($gp)
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22ec9c:
    // 0x22ec9c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_22eca0:
    if (ctx->pc == 0x22ECA0u) {
        ctx->pc = 0x22ECA4u;
        goto label_22eca4;
    }
    ctx->pc = 0x22EC9Cu;
    {
        const bool branch_taken_0x22ec9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec9c) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECA4u;
label_22eca4:
    // 0x22eca4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22eca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22eca8:
    // 0x22eca8: 0x90a30096  lbu         $v1, 0x96($a1)
    ctx->pc = 0x22eca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 150)));
label_22ecac:
    // 0x22ecac: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22ecb0:
    if (ctx->pc == 0x22ECB0u) {
        ctx->pc = 0x22ECB4u;
        goto label_22ecb4;
    }
    ctx->pc = 0x22ECACu;
    {
        const bool branch_taken_0x22ecac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ecac) {
            ctx->pc = 0x22ECC0u;
            goto label_22ecc0;
        }
    }
    ctx->pc = 0x22ECB4u;
label_22ecb4:
    // 0x22ecb4: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_22ecb8:
    // 0x22ecb8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x22ecb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_22ecbc:
    // 0x22ecbc: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x22ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_22ecc0:
    // 0x22ecc0: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x22ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_22ecc4:
    // 0x22ecc4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
label_22ecc8:
    if (ctx->pc == 0x22ECC8u) {
        ctx->pc = 0x22ECCCu;
        goto label_22eccc;
    }
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eca8;
        }
    }
    ctx->pc = 0x22ECCCu;
label_22eccc:
    // 0x22eccc: 0x1000000f  b           . + 4 + (0xF << 2)
label_22ecd0:
    if (ctx->pc == 0x22ECD0u) {
        ctx->pc = 0x22ECD4u;
        goto label_22ecd4;
    }
    ctx->pc = 0x22ECCCu;
    {
        const bool branch_taken_0x22eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eccc) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0x8f8685d0  lw          $a2, -0x7A30($gp)
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22ecd8:
    // 0x22ecd8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_22ecdc:
    if (ctx->pc == 0x22ECDCu) {
        ctx->pc = 0x22ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD8u;
        // 0x22ecdc: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECE0u;
        goto label_22ece0;
    }
    ctx->pc = 0x22ECD8u;
    {
        const bool branch_taken_0x22ecd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD8u;
        // 0x22ecdc: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecd8) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECE0u;
label_22ece0:
    // 0x22ece0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_22ece4:
    // 0x22ece4: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22ece4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
label_22ece8:
    // 0x22ece8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_22ecec:
    if (ctx->pc == 0x22ECECu) {
        ctx->pc = 0x22ECF0u;
        goto label_22ecf0;
    }
    ctx->pc = 0x22ECE8u;
    {
        const bool branch_taken_0x22ece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22ece8) {
            ctx->pc = 0x22ECFCu;
            goto label_22ecfc;
        }
    }
    ctx->pc = 0x22ECF0u;
label_22ecf0:
    // 0x22ecf0: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x22ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_22ecf4:
    // 0x22ecf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22ecf8:
    // 0x22ecf8: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x22ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
label_22ecfc:
    // 0x22ecfc: 0x0  nop
    ctx->pc = 0x22ecfcu;
    // NOP
label_22ed00:
    // 0x22ed00: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22ed04:
    // 0x22ed04: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
label_22ed08:
    if (ctx->pc == 0x22ED08u) {
        ctx->pc = 0x22ED0Cu;
        goto label_22ed0c;
    }
    ctx->pc = 0x22ED04u;
    {
        const bool branch_taken_0x22ed04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed04) {
            ctx->pc = 0x22ECE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ece4;
        }
    }
    ctx->pc = 0x22ED0Cu;
label_22ed0c:
    // 0x22ed0c: 0x0  nop
    ctx->pc = 0x22ed0cu;
    // NOP
label_22ed10:
    // 0x22ed10: 0x3e00008  jr          $ra
label_22ed14:
    if (ctx->pc == 0x22ED14u) {
        ctx->pc = 0x22ED18u;
        goto label_22ed18;
    }
    ctx->pc = 0x22ED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED18u;
label_22ed18:
    // 0x22ed18: 0x0  nop
    ctx->pc = 0x22ed18u;
    // NOP
label_22ed1c:
    // 0x22ed1c: 0x0  nop
    ctx->pc = 0x22ed1cu;
    // NOP
label_22ed20:
    // 0x22ed20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22ed24:
    // 0x22ed24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22ed28:
    // 0x22ed28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22ed2c:
    // 0x22ed2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22ed30:
    // 0x22ed30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22ed30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed34:
    // 0x22ed34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ed38:
    // 0x22ed38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ed3c:
    // 0x22ed3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ed40:
    // 0x22ed40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ed40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed44:
    // 0x22ed44: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_22ed48:
    // 0x22ed48: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
label_22ed4c:
    // 0x22ed4c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x22ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_22ed50:
    // 0x22ed50: 0x906401c0  lbu         $a0, 0x1C0($v1)
    ctx->pc = 0x22ed50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
label_22ed54:
    // 0x22ed54: 0x247001c0  addiu       $s0, $v1, 0x1C0
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_22ed58:
    // 0x22ed58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_22ed5c:
    // 0x22ed5c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_22ed60:
    if (ctx->pc == 0x22ED60u) {
        ctx->pc = 0x22ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED5Cu;
        // 0x22ed60: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED64u;
        goto label_22ed64;
    }
    ctx->pc = 0x22ED5Cu;
    {
        const bool branch_taken_0x22ed5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED5Cu;
        // 0x22ed60: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed5c) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED64u;
label_22ed64:
    // 0x22ed64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22ed68:
    if (ctx->pc == 0x22ED68u) {
        ctx->pc = 0x22ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED64u;
        // 0x22ed68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED6Cu;
        goto label_22ed6c;
    }
    ctx->pc = 0x22ED64u;
    {
        const bool branch_taken_0x22ed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED64u;
        // 0x22ed68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed64) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED6Cu;
label_22ed6c:
    // 0x22ed6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_22ed70:
    if (ctx->pc == 0x22ED70u) {
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED74u;
        goto label_22ed74;
    }
    ctx->pc = 0x22ED6Cu;
    {
        const bool branch_taken_0x22ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed6c) {
            ctx->pc = 0x22ED8Cu;
            goto label_22ed8c;
        }
    }
    ctx->pc = 0x22ED74u;
label_22ed74:
    // 0x22ed74: 0x0  nop
    ctx->pc = 0x22ed74u;
    // NOP
label_22ed78:
    // 0x22ed78: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_22ed7c:
    // 0x22ed7c: 0xc05ff64  jal         func_17FD90
label_22ed80:
    if (ctx->pc == 0x22ED80u) {
        ctx->pc = 0x22ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED7Cu;
        // 0x22ed80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED84u;
        goto label_22ed84;
    }
    ctx->pc = 0x22ED7Cu;
    SET_GPR_U32(ctx, 31, 0x22ED84u);
    ctx->pc = 0x22ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED7Cu;
    // 0x22ed80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x22ED84u;
label_22ed84:
    // 0x22ed84: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_22ed88:
    // 0x22ed88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22ed8c:
    // 0x22ed8c: 0x0  nop
    ctx->pc = 0x22ed8cu;
    // NOP
label_22ed90:
    // 0x22ed90: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x22ed90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_22ed94:
    // 0x22ed94: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22ed94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22ed98:
    // 0x22ed98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_22ed9c:
    if (ctx->pc == 0x22ED9Cu) {
        ctx->pc = 0x22EDA0u;
        goto label_22eda0;
    }
    ctx->pc = 0x22ED98u;
    {
        const bool branch_taken_0x22ed98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed98) {
            ctx->pc = 0x22ED74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ed74;
        }
    }
    ctx->pc = 0x22EDA0u;
label_22eda0:
    // 0x22eda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22eda4:
    // 0x22eda4: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x22eda4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_22eda8:
    // 0x22eda8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_22edac:
    if (ctx->pc == 0x22EDACu) {
        ctx->pc = 0x22EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDA8u;
        // 0x22edac: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDB0u;
        goto label_22edb0;
    }
    ctx->pc = 0x22EDA8u;
    {
        const bool branch_taken_0x22eda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDA8u;
        // 0x22edac: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eda8) {
            ctx->pc = 0x22ED44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ed44;
        }
    }
    ctx->pc = 0x22EDB0u;
label_22edb0:
    // 0x22edb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22edb4:
    // 0x22edb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22edb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22edb8:
    // 0x22edb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22edb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22edbc:
    // 0x22edbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22edbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22edc0:
    // 0x22edc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22edc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22edc4:
    // 0x22edc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22edc8:
    // 0x22edc8: 0x3e00008  jr          $ra
label_22edcc:
    if (ctx->pc == 0x22EDCCu) {
        ctx->pc = 0x22EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDC8u;
        // 0x22edcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDD0u;
        goto label_22edd0;
    }
    ctx->pc = 0x22EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDC8u;
        // 0x22edcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EDD0u;
label_22edd0:
    // 0x22edd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22edd4:
    // 0x22edd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22edd8:
    // 0x22edd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22eddc:
    // 0x22eddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ede0:
    // 0x22ede0: 0xc066e44  jal         func_19B910
label_22ede4:
    if (ctx->pc == 0x22EDE4u) {
        ctx->pc = 0x22EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE0u;
        // 0x22ede4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDE8u;
        goto label_22ede8;
    }
    ctx->pc = 0x22EDE0u;
    SET_GPR_U32(ctx, 31, 0x22EDE8u);
    ctx->pc = 0x22EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDE0u;
    // 0x22ede4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22EDE8u;
label_22ede8:
    // 0x22ede8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22edec:
    // 0x22edec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22edf0:
    // 0x22edf0: 0xc066e96  jal         func_19BA58
label_22edf4:
    if (ctx->pc == 0x22EDF4u) {
        ctx->pc = 0x22EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDF0u;
        // 0x22edf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDF8u;
        goto label_22edf8;
    }
    ctx->pc = 0x22EDF0u;
    SET_GPR_U32(ctx, 31, 0x22EDF8u);
    ctx->pc = 0x22EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDF0u;
    // 0x22edf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22EDF8u;
label_22edf8:
    // 0x22edf8: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22edfc:
    // 0x22edfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22ee00:
    // 0x22ee00: 0xc066e6c  jal         func_19B9B0
label_22ee04:
    if (ctx->pc == 0x22EE04u) {
        ctx->pc = 0x22EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE00u;
        // 0x22ee04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE08u;
        goto label_22ee08;
    }
    ctx->pc = 0x22EE00u;
    SET_GPR_U32(ctx, 31, 0x22EE08u);
    ctx->pc = 0x22EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE00u;
    // 0x22ee04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22EE08u;
label_22ee08:
    // 0x22ee08: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22ee0c:
    // 0x22ee0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22ee10:
    // 0x22ee10: 0xc066ec0  jal         func_19BB00
label_22ee14:
    if (ctx->pc == 0x22EE14u) {
        ctx->pc = 0x22EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE10u;
        // 0x22ee14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE18u;
        goto label_22ee18;
    }
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE10u;
    // 0x22ee14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee1c:
    // 0x22ee1c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x22ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22ee20:
    // 0x22ee20: 0xc066e1a  jal         func_19B868
label_22ee24:
    if (ctx->pc == 0x22EE24u) {
        ctx->pc = 0x22EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE20u;
        // 0x22ee24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE28u;
        goto label_22ee28;
    }
    ctx->pc = 0x22EE20u;
    SET_GPR_U32(ctx, 31, 0x22EE28u);
    ctx->pc = 0x22EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE20u;
    // 0x22ee24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22EE28u;
label_22ee28:
    // 0x22ee28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ee2c:
    // 0x22ee2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ee30:
    // 0x22ee30: 0x3e00008  jr          $ra
label_22ee34:
    if (ctx->pc == 0x22EE34u) {
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE38u;
        goto label_22ee38;
    }
    ctx->pc = 0x22EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE38u;
label_22ee38:
    // 0x22ee38: 0x0  nop
    ctx->pc = 0x22ee38u;
    // NOP
label_22ee3c:
    // 0x22ee3c: 0x0  nop
    ctx->pc = 0x22ee3cu;
    // NOP
label_22ee40:
    // 0x22ee40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22ee44:
    // 0x22ee44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ee48:
    // 0x22ee48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22ee4c:
    // 0x22ee4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22ee50:
    // 0x22ee50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ee54:
    // 0x22ee54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22ee54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_22ee58:
    // 0x22ee58: 0xc066e44  jal         func_19B910
label_22ee5c:
    if (ctx->pc == 0x22EE5Cu) {
        ctx->pc = 0x22EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE58u;
        // 0x22ee5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE60u;
        goto label_22ee60;
    }
    ctx->pc = 0x22EE58u;
    SET_GPR_U32(ctx, 31, 0x22EE60u);
    ctx->pc = 0x22EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE58u;
    // 0x22ee5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22EE60u;
label_22ee60:
    // 0x22ee60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22ee64:
    // 0x22ee64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ee64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22ee68:
    // 0x22ee68: 0xc066ec0  jal         func_19BB00
label_22ee6c:
    if (ctx->pc == 0x22EE6Cu) {
        ctx->pc = 0x22EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE68u;
        // 0x22ee6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE70u;
        goto label_22ee70;
    }
    ctx->pc = 0x22EE68u;
    SET_GPR_U32(ctx, 31, 0x22EE70u);
    ctx->pc = 0x22EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE68u;
    // 0x22ee6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22EE70u;
label_22ee70:
    // 0x22ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee74:
    // 0x22ee74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee78:
    // 0x22ee78: 0xc066d7a  jal         func_19B5E8
label_22ee7c:
    if (ctx->pc == 0x22EE7Cu) {
        ctx->pc = 0x22EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE78u;
        // 0x22ee7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE80u;
        goto label_22ee80;
    }
    ctx->pc = 0x22EE78u;
    SET_GPR_U32(ctx, 31, 0x22EE80u);
    ctx->pc = 0x22EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE78u;
    // 0x22ee7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22EE80u;
label_22ee80:
    // 0x22ee80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ee84:
    // 0x22ee84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22ee88:
    // 0x22ee88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ee88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ee8c:
    // 0x22ee8c: 0x3e00008  jr          $ra
label_22ee90:
    if (ctx->pc == 0x22EE90u) {
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE94u;
        goto label_22ee94;
    }
    ctx->pc = 0x22EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE94u;
label_22ee94:
    // 0x22ee94: 0x0  nop
    ctx->pc = 0x22ee94u;
    // NOP
label_22ee98:
    // 0x22ee98: 0x0  nop
    ctx->pc = 0x22ee98u;
    // NOP
label_22ee9c:
    // 0x22ee9c: 0x0  nop
    ctx->pc = 0x22ee9cu;
    // NOP
label_22eea0:
    // 0x22eea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22eea4:
    // 0x22eea4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22eea8:
    // 0x22eea8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22eeac:
    // 0x22eeac: 0x0  nop
    ctx->pc = 0x22eeacu;
    // NOP
label_22eeb0:
    // 0x22eeb0: 0x3e00008  jr          $ra
label_22eeb4:
    if (ctx->pc == 0x22EEB4u) {
        ctx->pc = 0x22EEB8u;
        goto label_22eeb8;
    }
    ctx->pc = 0x22EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EEB8u;
label_22eeb8:
    // 0x22eeb8: 0x0  nop
    ctx->pc = 0x22eeb8u;
    // NOP
label_22eebc:
    // 0x22eebc: 0x0  nop
    ctx->pc = 0x22eebcu;
    // NOP
label_22eec0:
    // 0x22eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22eec4:
    // 0x22eec4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22eec8:
    // 0x22eec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22eecc:
    // 0x22eecc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22eed0:
    // 0x22eed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22eed4:
    // 0x22eed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22eed8:
    // 0x22eed8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22eedc:
    // 0x22eedc: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_22eee0:
    if (ctx->pc == 0x22EEE0u) {
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEDCu;
        // 0x22eee0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEE4u;
        goto label_22eee4;
    }
    ctx->pc = 0x22EEDCu;
    {
        const bool branch_taken_0x22eedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEDCu;
        // 0x22eee0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eedc) {
            ctx->pc = 0x22EF7Cu;
            goto label_22ef7c;
        }
    }
    ctx->pc = 0x22EEE4u;
label_22eee4:
    // 0x22eee4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_22eee8:
    // 0x22eee8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x22eee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_22eeec:
    // 0x22eeec: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22eef0:
    // 0x22eef0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_22eef4:
    if (ctx->pc == 0x22EEF4u) {
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0x2484a2b0  addiu       $a0, $a0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEF8u;
        goto label_22eef8;
    }
    ctx->pc = 0x22EEF0u;
    {
        const bool branch_taken_0x22eef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0x2484a2b0  addiu       $a0, $a0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef0) {
            ctx->pc = 0x22EF0Cu;
            goto label_22ef0c;
        }
    }
    ctx->pc = 0x22EEF8u;
label_22eef8:
    // 0x22eef8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_22eefc:
    // 0x22eefc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22ef00:
    if (ctx->pc == 0x22EF00u) {
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF04u;
        goto label_22ef04;
    }
    ctx->pc = 0x22EEFCu;
    {
        const bool branch_taken_0x22eefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eefc) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF04u;
label_22ef04:
    // 0x22ef04: 0x10000002  b           . + 4 + (0x2 << 2)
label_22ef08:
    if (ctx->pc == 0x22EF08u) {
        ctx->pc = 0x22EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF04u;
        // 0x22ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF0Cu;
        goto label_22ef0c;
    }
    ctx->pc = 0x22EF04u;
    {
        const bool branch_taken_0x22ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF04u;
        // 0x22ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef04) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF0Cu;
label_22ef0c:
    // 0x22ef0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef10:
    // 0x22ef10: 0xa0820234  sb          $v0, 0x234($a0)
    ctx->pc = 0x22ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 564), (uint8_t)GPR_U32(ctx, 2));
label_22ef14:
    // 0x22ef14: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_22ef18:
    // 0x22ef18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22ef1c:
    // 0x22ef1c: 0xa0800245  sb          $zero, 0x245($a0)
    ctx->pc = 0x22ef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 581), (uint8_t)GPR_U32(ctx, 0));
label_22ef20:
    // 0x22ef20: 0xa0820232  sb          $v0, 0x232($a0)
    ctx->pc = 0x22ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 562), (uint8_t)GPR_U32(ctx, 2));
label_22ef24:
    // 0x22ef24: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_22ef28:
    // 0x22ef28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ef28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef2c:
    // 0x22ef2c: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x22ef2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
label_22ef30:
    // 0x22ef30: 0xc08f0cc  jal         func_23C330
label_22ef34:
    if (ctx->pc == 0x22EF34u) {
        ctx->pc = 0x22EF38u;
        goto label_22ef38;
    }
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ef3c:
    // 0x22ef3c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22ef40:
    // 0x22ef40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ef40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ef44:
    // 0x22ef44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22ef48:
    // 0x22ef48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ef48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ef4c:
    // 0x22ef4c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22ef50:
    // 0x22ef50: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22ef50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_22ef54:
    // 0x22ef54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22ef54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ef58:
    // 0x22ef58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22ef58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ef5c:
    // 0x22ef5c: 0x0  nop
    ctx->pc = 0x22ef5cu;
    // NOP
label_22ef60:
    // 0x22ef60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22ef60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22ef64:
    // 0x22ef64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ef64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22ef68:
    // 0x22ef68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x22ef68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_22ef6c:
    // 0x22ef6c: 0x0  nop
    ctx->pc = 0x22ef6cu;
    // NOP
label_22ef70:
    // 0x22ef70: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x22ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_22ef74:
    // 0x22ef74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_22ef78:
    if (ctx->pc == 0x22EF78u) {
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF7Cu;
        goto label_22ef7c;
    }
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ef80:
    // 0x22ef80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ef80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ef84:
    // 0x22ef84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ef88:
    // 0x22ef88: 0x3e00008  jr          $ra
label_22ef8c:
    if (ctx->pc == 0x22EF8Cu) {
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF90u;
        goto label_22ef90;
    }
    ctx->pc = 0x22EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF90u;
label_22ef90:
    // 0x22ef90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22ef94:
    // 0x22ef94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22ef98:
    // 0x22ef98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ef9c:
    // 0x22ef9c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22efa0:
    // 0x22efa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22efa4:
    // 0x22efa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22efa8:
    // 0x22efa8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22efa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22efac:
    // 0x22efac: 0x1483004c  bne         $a0, $v1, . + 4 + (0x4C << 2)
label_22efb0:
    if (ctx->pc == 0x22EFB0u) {
        ctx->pc = 0x22EFB4u;
        goto label_22efb4;
    }
    ctx->pc = 0x22EFACu;
    {
        const bool branch_taken_0x22efac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22efac) {
            ctx->pc = 0x22F0E0u;
            { ctx->pc = 0x22f0e0; return; }
        }
    }
    ctx->pc = 0x22EFB4u;
label_22efb4:
    // 0x22efb4: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_22efb8:
    // 0x22efb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22efbc:
    // 0x22efbc: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22efbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_22efc0:
    // 0x22efc0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_22efc4:
    // 0x22efc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22efc8:
    // 0x22efc8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
label_22efcc:
    // 0x22efcc: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
    ctx->pc = 0x22efd0u;
    return;
}

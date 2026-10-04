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


void FUN_0019b808_part466(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27e8d8u: goto label_27e8d8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8e4u: goto label_27e8e4;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e8ecu: goto label_27e8ec;
        case 0x27e8f0u: goto label_27e8f0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e8f8u: goto label_27e8f8;
        case 0x27e8fcu: goto label_27e8fc;
        case 0x27e900u: goto label_27e900;
        case 0x27e904u: goto label_27e904;
        case 0x27e908u: goto label_27e908;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e910u: goto label_27e910;
        case 0x27e914u: goto label_27e914;
        case 0x27e918u: goto label_27e918;
        case 0x27e91cu: goto label_27e91c;
        case 0x27e920u: goto label_27e920;
        case 0x27e924u: goto label_27e924;
        case 0x27e928u: goto label_27e928;
        case 0x27e92cu: goto label_27e92c;
        case 0x27e930u: goto label_27e930;
        case 0x27e934u: goto label_27e934;
        case 0x27e938u: goto label_27e938;
        case 0x27e93cu: goto label_27e93c;
        case 0x27e940u: goto label_27e940;
        case 0x27e944u: goto label_27e944;
        case 0x27e948u: goto label_27e948;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e950u: goto label_27e950;
        case 0x27e954u: goto label_27e954;
        case 0x27e958u: goto label_27e958;
        case 0x27e95cu: goto label_27e95c;
        case 0x27e960u: goto label_27e960;
        case 0x27e964u: goto label_27e964;
        case 0x27e968u: goto label_27e968;
        case 0x27e96cu: goto label_27e96c;
        case 0x27e970u: goto label_27e970;
        case 0x27e974u: goto label_27e974;
        case 0x27e978u: goto label_27e978;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e980u: goto label_27e980;
        case 0x27e984u: goto label_27e984;
        case 0x27e988u: goto label_27e988;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e990u: goto label_27e990;
        case 0x27e994u: goto label_27e994;
        case 0x27e998u: goto label_27e998;
        case 0x27e99cu: goto label_27e99c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9a4u: goto label_27e9a4;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27e9acu: goto label_27e9ac;
        case 0x27e9b0u: goto label_27e9b0;
        case 0x27e9b4u: goto label_27e9b4;
        case 0x27e9b8u: goto label_27e9b8;
        case 0x27e9bcu: goto label_27e9bc;
        case 0x27e9c0u: goto label_27e9c0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9c8u: goto label_27e9c8;
        case 0x27e9ccu: goto label_27e9cc;
        case 0x27e9d0u: goto label_27e9d0;
        case 0x27e9d4u: goto label_27e9d4;
        case 0x27e9d8u: goto label_27e9d8;
        case 0x27e9dcu: goto label_27e9dc;
        case 0x27e9e0u: goto label_27e9e0;
        case 0x27e9e4u: goto label_27e9e4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27e9f4u: goto label_27e9f4;
        case 0x27e9f8u: goto label_27e9f8;
        case 0x27e9fcu: goto label_27e9fc;
        case 0x27ea00u: goto label_27ea00;
        case 0x27ea04u: goto label_27ea04;
        case 0x27ea08u: goto label_27ea08;
        case 0x27ea0cu: goto label_27ea0c;
        case 0x27ea10u: goto label_27ea10;
        case 0x27ea14u: goto label_27ea14;
        case 0x27ea18u: goto label_27ea18;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea20u: goto label_27ea20;
        case 0x27ea24u: goto label_27ea24;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea2cu: goto label_27ea2c;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea34u: goto label_27ea34;
        case 0x27ea38u: goto label_27ea38;
        case 0x27ea3cu: goto label_27ea3c;
        case 0x27ea40u: goto label_27ea40;
        case 0x27ea44u: goto label_27ea44;
        case 0x27ea48u: goto label_27ea48;
        case 0x27ea4cu: goto label_27ea4c;
        case 0x27ea50u: goto label_27ea50;
        case 0x27ea54u: goto label_27ea54;
        case 0x27ea58u: goto label_27ea58;
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea60u: goto label_27ea60;
        case 0x27ea64u: goto label_27ea64;
        case 0x27ea68u: goto label_27ea68;
        case 0x27ea6cu: goto label_27ea6c;
        case 0x27ea70u: goto label_27ea70;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea78u: goto label_27ea78;
        case 0x27ea7cu: goto label_27ea7c;
        case 0x27ea80u: goto label_27ea80;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea88u: goto label_27ea88;
        case 0x27ea8cu: goto label_27ea8c;
        case 0x27ea90u: goto label_27ea90;
        case 0x27ea94u: goto label_27ea94;
        case 0x27ea98u: goto label_27ea98;
        case 0x27ea9cu: goto label_27ea9c;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27eaa4u: goto label_27eaa4;
        case 0x27eaa8u: goto label_27eaa8;
        case 0x27eaacu: goto label_27eaac;
        case 0x27eab0u: goto label_27eab0;
        case 0x27eab4u: goto label_27eab4;
        case 0x27eab8u: goto label_27eab8;
        case 0x27eabcu: goto label_27eabc;
        case 0x27eac0u: goto label_27eac0;
        case 0x27eac4u: goto label_27eac4;
        case 0x27eac8u: goto label_27eac8;
        case 0x27eaccu: goto label_27eacc;
        case 0x27ead0u: goto label_27ead0;
        case 0x27ead4u: goto label_27ead4;
        case 0x27ead8u: goto label_27ead8;
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae0u: goto label_27eae0;
        case 0x27eae4u: goto label_27eae4;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eaecu: goto label_27eaec;
        case 0x27eaf0u: goto label_27eaf0;
        case 0x27eaf4u: goto label_27eaf4;
        case 0x27eaf8u: goto label_27eaf8;
        case 0x27eafcu: goto label_27eafc;
        case 0x27eb00u: goto label_27eb00;
        case 0x27eb04u: goto label_27eb04;
        case 0x27eb08u: goto label_27eb08;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb10u: goto label_27eb10;
        case 0x27eb14u: goto label_27eb14;
        case 0x27eb18u: goto label_27eb18;
        case 0x27eb1cu: goto label_27eb1c;
        case 0x27eb20u: goto label_27eb20;
        case 0x27eb24u: goto label_27eb24;
        case 0x27eb28u: goto label_27eb28;
        case 0x27eb2cu: goto label_27eb2c;
        case 0x27eb30u: goto label_27eb30;
        case 0x27eb34u: goto label_27eb34;
        case 0x27eb38u: goto label_27eb38;
        case 0x27eb3cu: goto label_27eb3c;
        case 0x27eb40u: goto label_27eb40;
        case 0x27eb44u: goto label_27eb44;
        case 0x27eb48u: goto label_27eb48;
        case 0x27eb4cu: goto label_27eb4c;
        case 0x27eb50u: goto label_27eb50;
        case 0x27eb54u: goto label_27eb54;
        case 0x27eb58u: goto label_27eb58;
        case 0x27eb5cu: goto label_27eb5c;
        case 0x27eb60u: goto label_27eb60;
        case 0x27eb64u: goto label_27eb64;
        case 0x27eb68u: goto label_27eb68;
        case 0x27eb6cu: goto label_27eb6c;
        case 0x27eb70u: goto label_27eb70;
        case 0x27eb74u: goto label_27eb74;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb7cu: goto label_27eb7c;
        case 0x27eb80u: goto label_27eb80;
        case 0x27eb84u: goto label_27eb84;
        case 0x27eb88u: goto label_27eb88;
        case 0x27eb8cu: goto label_27eb8c;
        case 0x27eb90u: goto label_27eb90;
        case 0x27eb94u: goto label_27eb94;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eb9cu: goto label_27eb9c;
        case 0x27eba0u: goto label_27eba0;
        case 0x27eba4u: goto label_27eba4;
        case 0x27eba8u: goto label_27eba8;
        case 0x27ebacu: goto label_27ebac;
        case 0x27ebb0u: goto label_27ebb0;
        case 0x27ebb4u: goto label_27ebb4;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebbcu: goto label_27ebbc;
        case 0x27ebc0u: goto label_27ebc0;
        case 0x27ebc4u: goto label_27ebc4;
        case 0x27ebc8u: goto label_27ebc8;
        case 0x27ebccu: goto label_27ebcc;
        case 0x27ebd0u: goto label_27ebd0;
        case 0x27ebd4u: goto label_27ebd4;
        case 0x27ebd8u: goto label_27ebd8;
        case 0x27ebdcu: goto label_27ebdc;
        case 0x27ebe0u: goto label_27ebe0;
        case 0x27ebe4u: goto label_27ebe4;
        case 0x27ebe8u: goto label_27ebe8;
        case 0x27ebecu: goto label_27ebec;
        case 0x27ebf0u: goto label_27ebf0;
        case 0x27ebf4u: goto label_27ebf4;
        case 0x27ebf8u: goto label_27ebf8;
        case 0x27ebfcu: goto label_27ebfc;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec04u: goto label_27ec04;
        case 0x27ec08u: goto label_27ec08;
        case 0x27ec0cu: goto label_27ec0c;
        case 0x27ec10u: goto label_27ec10;
        case 0x27ec14u: goto label_27ec14;
        case 0x27ec18u: goto label_27ec18;
        case 0x27ec1cu: goto label_27ec1c;
        case 0x27ec20u: goto label_27ec20;
        case 0x27ec24u: goto label_27ec24;
        case 0x27ec28u: goto label_27ec28;
        case 0x27ec2cu: goto label_27ec2c;
        case 0x27ec30u: goto label_27ec30;
        case 0x27ec34u: goto label_27ec34;
        case 0x27ec38u: goto label_27ec38;
        case 0x27ec3cu: goto label_27ec3c;
        case 0x27ec40u: goto label_27ec40;
        case 0x27ec44u: goto label_27ec44;
        case 0x27ec48u: goto label_27ec48;
        case 0x27ec4cu: goto label_27ec4c;
        case 0x27ec50u: goto label_27ec50;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec58u: goto label_27ec58;
        case 0x27ec5cu: goto label_27ec5c;
        case 0x27ec60u: goto label_27ec60;
        case 0x27ec64u: goto label_27ec64;
        case 0x27ec68u: goto label_27ec68;
        case 0x27ec6cu: goto label_27ec6c;
        case 0x27ec70u: goto label_27ec70;
        case 0x27ec74u: goto label_27ec74;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec7cu: goto label_27ec7c;
        case 0x27ec80u: goto label_27ec80;
        case 0x27ec84u: goto label_27ec84;
        case 0x27ec88u: goto label_27ec88;
        case 0x27ec8cu: goto label_27ec8c;
        case 0x27ec90u: goto label_27ec90;
        case 0x27ec94u: goto label_27ec94;
        case 0x27ec98u: goto label_27ec98;
        case 0x27ec9cu: goto label_27ec9c;
        case 0x27eca0u: goto label_27eca0;
        case 0x27eca4u: goto label_27eca4;
        case 0x27eca8u: goto label_27eca8;
        case 0x27ecacu: goto label_27ecac;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecb4u: goto label_27ecb4;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ecbcu: goto label_27ecbc;
        case 0x27ecc0u: goto label_27ecc0;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ecc8u: goto label_27ecc8;
        case 0x27ecccu: goto label_27eccc;
        case 0x27ecd0u: goto label_27ecd0;
        case 0x27ecd4u: goto label_27ecd4;
        case 0x27ecd8u: goto label_27ecd8;
        case 0x27ecdcu: goto label_27ecdc;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ece4u: goto label_27ece4;
        case 0x27ece8u: goto label_27ece8;
        case 0x27ececu: goto label_27ecec;
        case 0x27ecf0u: goto label_27ecf0;
        case 0x27ecf4u: goto label_27ecf4;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ecfcu: goto label_27ecfc;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed04u: goto label_27ed04;
        case 0x27ed08u: goto label_27ed08;
        case 0x27ed0cu: goto label_27ed0c;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed14u: goto label_27ed14;
        case 0x27ed18u: goto label_27ed18;
        case 0x27ed1cu: goto label_27ed1c;
        case 0x27ed20u: goto label_27ed20;
        case 0x27ed24u: goto label_27ed24;
        case 0x27ed28u: goto label_27ed28;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed30u: goto label_27ed30;
        case 0x27ed34u: goto label_27ed34;
        case 0x27ed38u: goto label_27ed38;
        case 0x27ed3cu: goto label_27ed3c;
        case 0x27ed40u: goto label_27ed40;
        case 0x27ed44u: goto label_27ed44;
        case 0x27ed48u: goto label_27ed48;
        case 0x27ed4cu: goto label_27ed4c;
        case 0x27ed50u: goto label_27ed50;
        case 0x27ed54u: goto label_27ed54;
        case 0x27ed58u: goto label_27ed58;
        case 0x27ed5cu: goto label_27ed5c;
        case 0x27ed60u: goto label_27ed60;
        case 0x27ed64u: goto label_27ed64;
        case 0x27ed68u: goto label_27ed68;
        case 0x27ed6cu: goto label_27ed6c;
        case 0x27ed70u: goto label_27ed70;
        case 0x27ed74u: goto label_27ed74;
        case 0x27ed78u: goto label_27ed78;
        case 0x27ed7cu: goto label_27ed7c;
        case 0x27ed80u: goto label_27ed80;
        case 0x27ed84u: goto label_27ed84;
        case 0x27ed88u: goto label_27ed88;
        case 0x27ed8cu: goto label_27ed8c;
        case 0x27ed90u: goto label_27ed90;
        case 0x27ed94u: goto label_27ed94;
        case 0x27ed98u: goto label_27ed98;
        case 0x27ed9cu: goto label_27ed9c;
        case 0x27eda0u: goto label_27eda0;
        case 0x27eda4u: goto label_27eda4;
        case 0x27eda8u: goto label_27eda8;
        case 0x27edacu: goto label_27edac;
        case 0x27edb0u: goto label_27edb0;
        case 0x27edb4u: goto label_27edb4;
        case 0x27edb8u: goto label_27edb8;
        case 0x27edbcu: goto label_27edbc;
        case 0x27edc0u: goto label_27edc0;
        case 0x27edc4u: goto label_27edc4;
        case 0x27edc8u: goto label_27edc8;
        case 0x27edccu: goto label_27edcc;
        case 0x27edd0u: goto label_27edd0;
        case 0x27edd4u: goto label_27edd4;
        case 0x27edd8u: goto label_27edd8;
        case 0x27eddcu: goto label_27eddc;
        case 0x27ede0u: goto label_27ede0;
        case 0x27ede4u: goto label_27ede4;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edecu: goto label_27edec;
        case 0x27edf0u: goto label_27edf0;
        case 0x27edf4u: goto label_27edf4;
        case 0x27edf8u: goto label_27edf8;
        case 0x27edfcu: goto label_27edfc;
        case 0x27ee00u: goto label_27ee00;
        case 0x27ee04u: goto label_27ee04;
        case 0x27ee08u: goto label_27ee08;
        case 0x27ee0cu: goto label_27ee0c;
        case 0x27ee10u: goto label_27ee10;
        case 0x27ee14u: goto label_27ee14;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee1cu: goto label_27ee1c;
        case 0x27ee20u: goto label_27ee20;
        case 0x27ee24u: goto label_27ee24;
        case 0x27ee28u: goto label_27ee28;
        case 0x27ee2cu: goto label_27ee2c;
        case 0x27ee30u: goto label_27ee30;
        case 0x27ee34u: goto label_27ee34;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee3cu: goto label_27ee3c;
        case 0x27ee40u: goto label_27ee40;
        case 0x27ee44u: goto label_27ee44;
        case 0x27ee48u: goto label_27ee48;
        case 0x27ee4cu: goto label_27ee4c;
        case 0x27ee50u: goto label_27ee50;
        case 0x27ee54u: goto label_27ee54;
        case 0x27ee58u: goto label_27ee58;
        case 0x27ee5cu: goto label_27ee5c;
        case 0x27ee60u: goto label_27ee60;
        case 0x27ee64u: goto label_27ee64;
        case 0x27ee68u: goto label_27ee68;
        case 0x27ee6cu: goto label_27ee6c;
        case 0x27ee70u: goto label_27ee70;
        case 0x27ee74u: goto label_27ee74;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee7cu: goto label_27ee7c;
        case 0x27ee80u: goto label_27ee80;
        case 0x27ee84u: goto label_27ee84;
        case 0x27ee88u: goto label_27ee88;
        case 0x27ee8cu: goto label_27ee8c;
        case 0x27ee90u: goto label_27ee90;
        case 0x27ee94u: goto label_27ee94;
        case 0x27ee98u: goto label_27ee98;
        case 0x27ee9cu: goto label_27ee9c;
        case 0x27eea0u: goto label_27eea0;
        case 0x27eea4u: goto label_27eea4;
        case 0x27eea8u: goto label_27eea8;
        case 0x27eeacu: goto label_27eeac;
        case 0x27eeb0u: goto label_27eeb0;
        case 0x27eeb4u: goto label_27eeb4;
        case 0x27eeb8u: goto label_27eeb8;
        case 0x27eebcu: goto label_27eebc;
        case 0x27eec0u: goto label_27eec0;
        case 0x27eec4u: goto label_27eec4;
        case 0x27eec8u: goto label_27eec8;
        case 0x27eeccu: goto label_27eecc;
        case 0x27eed0u: goto label_27eed0;
        case 0x27eed4u: goto label_27eed4;
        case 0x27eed8u: goto label_27eed8;
        case 0x27eedcu: goto label_27eedc;
        case 0x27eee0u: goto label_27eee0;
        case 0x27eee4u: goto label_27eee4;
        case 0x27eee8u: goto label_27eee8;
        case 0x27eeecu: goto label_27eeec;
        case 0x27eef0u: goto label_27eef0;
        case 0x27eef4u: goto label_27eef4;
        case 0x27eef8u: goto label_27eef8;
        case 0x27eefcu: goto label_27eefc;
        case 0x27ef00u: goto label_27ef00;
        case 0x27ef04u: goto label_27ef04;
        case 0x27ef08u: goto label_27ef08;
        case 0x27ef0cu: goto label_27ef0c;
        case 0x27ef10u: goto label_27ef10;
        case 0x27ef14u: goto label_27ef14;
        case 0x27ef18u: goto label_27ef18;
        case 0x27ef1cu: goto label_27ef1c;
        case 0x27ef20u: goto label_27ef20;
        case 0x27ef24u: goto label_27ef24;
        case 0x27ef28u: goto label_27ef28;
        case 0x27ef2cu: goto label_27ef2c;
        case 0x27ef30u: goto label_27ef30;
        case 0x27ef34u: goto label_27ef34;
        case 0x27ef38u: goto label_27ef38;
        case 0x27ef3cu: goto label_27ef3c;
        case 0x27ef40u: goto label_27ef40;
        case 0x27ef44u: goto label_27ef44;
        case 0x27ef48u: goto label_27ef48;
        case 0x27ef4cu: goto label_27ef4c;
        case 0x27ef50u: goto label_27ef50;
        case 0x27ef54u: goto label_27ef54;
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef5cu: goto label_27ef5c;
        case 0x27ef60u: goto label_27ef60;
        case 0x27ef64u: goto label_27ef64;
        case 0x27ef68u: goto label_27ef68;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef70u: goto label_27ef70;
        case 0x27ef74u: goto label_27ef74;
        case 0x27ef78u: goto label_27ef78;
        case 0x27ef7cu: goto label_27ef7c;
        case 0x27ef80u: goto label_27ef80;
        case 0x27ef84u: goto label_27ef84;
        case 0x27ef88u: goto label_27ef88;
        case 0x27ef8cu: goto label_27ef8c;
        case 0x27ef90u: goto label_27ef90;
        case 0x27ef94u: goto label_27ef94;
        case 0x27ef98u: goto label_27ef98;
        case 0x27ef9cu: goto label_27ef9c;
        case 0x27efa0u: goto label_27efa0;
        case 0x27efa4u: goto label_27efa4;
        case 0x27efa8u: goto label_27efa8;
        case 0x27efacu: goto label_27efac;
        case 0x27efb0u: goto label_27efb0;
        case 0x27efb4u: goto label_27efb4;
        case 0x27efb8u: goto label_27efb8;
        case 0x27efbcu: goto label_27efbc;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efc4u: goto label_27efc4;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efccu: goto label_27efcc;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efd4u: goto label_27efd4;
        case 0x27efd8u: goto label_27efd8;
        case 0x27efdcu: goto label_27efdc;
        case 0x27efe0u: goto label_27efe0;
        case 0x27efe4u: goto label_27efe4;
        case 0x27efe8u: goto label_27efe8;
        case 0x27efecu: goto label_27efec;
        case 0x27eff0u: goto label_27eff0;
        case 0x27eff4u: goto label_27eff4;
        case 0x27eff8u: goto label_27eff8;
        case 0x27effcu: goto label_27effc;
        case 0x27f000u: goto label_27f000;
        case 0x27f004u: goto label_27f004;
        case 0x27f008u: goto label_27f008;
        case 0x27f00cu: goto label_27f00c;
        case 0x27f010u: goto label_27f010;
        case 0x27f014u: goto label_27f014;
        case 0x27f018u: goto label_27f018;
        case 0x27f01cu: goto label_27f01c;
        case 0x27f020u: goto label_27f020;
        case 0x27f024u: goto label_27f024;
        case 0x27f028u: goto label_27f028;
        case 0x27f02cu: goto label_27f02c;
        case 0x27f030u: goto label_27f030;
        case 0x27f034u: goto label_27f034;
        case 0x27f038u: goto label_27f038;
        case 0x27f03cu: goto label_27f03c;
        case 0x27f040u: goto label_27f040;
        case 0x27f044u: goto label_27f044;
        case 0x27f048u: goto label_27f048;
        case 0x27f04cu: goto label_27f04c;
        case 0x27f050u: goto label_27f050;
        case 0x27f054u: goto label_27f054;
        case 0x27f058u: goto label_27f058;
        case 0x27f05cu: goto label_27f05c;
        case 0x27f060u: goto label_27f060;
        case 0x27f064u: goto label_27f064;
        case 0x27f068u: goto label_27f068;
        case 0x27f06cu: goto label_27f06c;
        case 0x27f070u: goto label_27f070;
        case 0x27f074u: goto label_27f074;
        case 0x27f078u: goto label_27f078;
        case 0x27f07cu: goto label_27f07c;
        case 0x27f080u: goto label_27f080;
        case 0x27f084u: goto label_27f084;
        case 0x27f088u: goto label_27f088;
        case 0x27f08cu: goto label_27f08c;
        case 0x27f090u: goto label_27f090;
        case 0x27f094u: goto label_27f094;
        case 0x27f098u: goto label_27f098;
        case 0x27f09cu: goto label_27f09c;
        case 0x27f0a0u: goto label_27f0a0;
        case 0x27f0a4u: goto label_27f0a4;
        default: return;
    }

label_27e8d8:
    // 0x27e8d8: 0x0  nop
    ctx->pc = 0x27e8d8u;
    // NOP
label_27e8dc:
    // 0x27e8dc: 0x0  nop
    ctx->pc = 0x27e8dcu;
    // NOP
label_27e8e0:
    // 0x27e8e0: 0x16eee  .word       0x00016EEE                   # dsub        $t5, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_27e8e4:
    // 0x27e8e4: 0x2dad0  .word       0x0002DAD0                   # mfhi        $k1 # 000202C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27e8e8:
    // 0x27e8e8: 0x0  nop
    ctx->pc = 0x27e8e8u;
    // NOP
label_27e8ec:
    // 0x27e8ec: 0x0  nop
    ctx->pc = 0x27e8ecu;
    // NOP
label_27e8f0:
    // 0x27e8f0: 0x16f4a  .word       0x00016F4A                   # movz        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_27e8f4:
    // 0x27e8f4: 0x275c0  sll         $t6, $v0, 23
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_27e8f8:
    // 0x27e8f8: 0x0  nop
    ctx->pc = 0x27e8f8u;
    // NOP
label_27e8fc:
    // 0x27e8fc: 0x0  nop
    ctx->pc = 0x27e8fcu;
    // NOP
label_27e900:
    // 0x27e900: 0x16f99  .word       0x00016F99                   # multu       $zero, $at # 00006F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e900u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_27e904:
    // 0x27e904: 0x2cd30  tge         $zero, $v0, 820
    ctx->pc = 0x27e904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e908:
    // 0x27e908: 0x0  nop
    ctx->pc = 0x27e908u;
    // NOP
label_27e90c:
    // 0x27e90c: 0x0  nop
    ctx->pc = 0x27e90cu;
    // NOP
label_27e910:
    // 0x27e910: 0x16ff3  tltu        $zero, $at, 447
    ctx->pc = 0x27e910u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e914:
    // 0x27e914: 0x2c980  sll         $t9, $v0, 6
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_27e918:
    // 0x27e918: 0x0  nop
    ctx->pc = 0x27e918u;
    // NOP
label_27e91c:
    // 0x27e91c: 0x0  nop
    ctx->pc = 0x27e91cu;
    // NOP
label_27e920:
    // 0x27e920: 0x1704d  break       1, 449
    ctx->pc = 0x27e920u;
    runtime->handleBreak(rdram, ctx);
label_27e924:
    // 0x27e924: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x27e924u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e928:
    // 0x27e928: 0x0  nop
    ctx->pc = 0x27e928u;
    // NOP
label_27e92c:
    // 0x27e92c: 0x0  nop
    ctx->pc = 0x27e92cu;
    // NOP
label_27e930:
    // 0x27e930: 0x170a5  .word       0x000170A5                   # or          $t6, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e930u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27e934:
    // 0x27e934: 0x25340  sll         $t2, $v0, 13
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_27e938:
    // 0x27e938: 0x0  nop
    ctx->pc = 0x27e938u;
    // NOP
label_27e93c:
    // 0x27e93c: 0x0  nop
    ctx->pc = 0x27e93cu;
    // NOP
label_27e940:
    // 0x27e940: 0x170f0  tge         $zero, $at, 451
    ctx->pc = 0x27e940u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e944:
    // 0x27e944: 0x28450  .word       0x00028450                   # mfhi        $s0 # 00020440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e944u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e948:
    // 0x27e948: 0x0  nop
    ctx->pc = 0x27e948u;
    // NOP
label_27e94c:
    // 0x27e94c: 0x0  nop
    ctx->pc = 0x27e94cu;
    // NOP
label_27e950:
    // 0x27e950: 0x17141  .word       0x00017141                   # INVALID     $zero, $at, 0x7141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E950 raw=0x00017141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e954:
    // 0x27e954: 0x29d10  .word       0x00029D10                   # mfhi        $s3 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e954u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27e958:
    // 0x27e958: 0x0  nop
    ctx->pc = 0x27e958u;
    // NOP
label_27e95c:
    // 0x27e95c: 0x0  nop
    ctx->pc = 0x27e95cu;
    // NOP
label_27e960:
    // 0x27e960: 0x17195  .word       0x00017195                   # INVALID     $zero, $at, 0x7195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E960 raw=0x00017195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e964:
    // 0x27e964: 0x3aa40  sll         $s5, $v1, 9
    ctx->pc = 0x27e964u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_27e968:
    // 0x27e968: 0x0  nop
    ctx->pc = 0x27e968u;
    // NOP
label_27e96c:
    // 0x27e96c: 0x0  nop
    ctx->pc = 0x27e96cu;
    // NOP
label_27e970:
    // 0x27e970: 0x1720b  .word       0x0001720B                   # movn        $t6, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e970u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_27e974:
    // 0x27e974: 0x28150  .word       0x00028150                   # mfhi        $s0 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e974u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e978:
    // 0x27e978: 0x0  nop
    ctx->pc = 0x27e978u;
    // NOP
label_27e97c:
    // 0x27e97c: 0x0  nop
    ctx->pc = 0x27e97cu;
    // NOP
label_27e980:
    // 0x27e980: 0x1725c  .word       0x0001725C                   # dmult       $zero, $at # 00007240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27E980 raw=0x0001725C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e984:
    // 0x27e984: 0x2e370  tge         $zero, $v0, 909
    ctx->pc = 0x27e984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e988:
    // 0x27e988: 0x0  nop
    ctx->pc = 0x27e988u;
    // NOP
label_27e98c:
    // 0x27e98c: 0x0  nop
    ctx->pc = 0x27e98cu;
    // NOP
label_27e990:
    // 0x27e990: 0x172b9  .word       0x000172B9                   # INVALID     $zero, $at, 0x72B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E990 raw=0x000172B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e994:
    // 0x27e994: 0x1ed20  .word       0x0001ED20                   # add         $sp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27e998:
    // 0x27e998: 0x0  nop
    ctx->pc = 0x27e998u;
    // NOP
label_27e99c:
    // 0x27e99c: 0x0  nop
    ctx->pc = 0x27e99cu;
    // NOP
label_27e9a0:
    // 0x27e9a0: 0x172f7  .word       0x000172F7                   # INVALID     $zero, $at, 0x72F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27E9A0 raw=0x000172F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e9a4:
    // 0x27e9a4: 0x2e8b0  tge         $zero, $v0, 930
    ctx->pc = 0x27e9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e9a8:
    // 0x27e9a8: 0x0  nop
    ctx->pc = 0x27e9a8u;
    // NOP
label_27e9ac:
    // 0x27e9ac: 0x0  nop
    ctx->pc = 0x27e9acu;
    // NOP
label_27e9b0:
    // 0x27e9b0: 0x17355  .word       0x00017355                   # INVALID     $zero, $at, 0x7355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e9b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E9B0 raw=0x00017355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e9b4:
    // 0x27e9b4: 0x310b0  tge         $zero, $v1, 66
    ctx->pc = 0x27e9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e9b8:
    // 0x27e9b8: 0x0  nop
    ctx->pc = 0x27e9b8u;
    // NOP
label_27e9bc:
    // 0x27e9bc: 0x0  nop
    ctx->pc = 0x27e9bcu;
    // NOP
label_27e9c0:
    // 0x27e9c0: 0x173b8  dsll        $t6, $at, 14
    ctx->pc = 0x27e9c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 14);
label_27e9c4:
    // 0x27e9c4: 0x272c0  sll         $t6, $v0, 11
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27e9c8:
    // 0x27e9c8: 0x0  nop
    ctx->pc = 0x27e9c8u;
    // NOP
label_27e9cc:
    // 0x27e9cc: 0x0  nop
    ctx->pc = 0x27e9ccu;
    // NOP
label_27e9d0:
    // 0x27e9d0: 0x17407  .word       0x00017407                   # srav        $t6, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e9d0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e9d4:
    // 0x27e9d4: 0x29700  sll         $s2, $v0, 28
    ctx->pc = 0x27e9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
label_27e9d8:
    // 0x27e9d8: 0x0  nop
    ctx->pc = 0x27e9d8u;
    // NOP
label_27e9dc:
    // 0x27e9dc: 0x0  nop
    ctx->pc = 0x27e9dcu;
    // NOP
label_27e9e0:
    // 0x27e9e0: 0x1745a  .word       0x0001745A                   # div         $t6, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e9e0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27e9e4:
    // 0x27e9e4: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x27e9e4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27e9e8:
    // 0x27e9e8: 0x0  nop
    ctx->pc = 0x27e9e8u;
    // NOP
label_27e9ec:
    // 0x27e9ec: 0x0  nop
    ctx->pc = 0x27e9ecu;
    // NOP
label_27e9f0:
    // 0x27e9f0: 0x174b9  .word       0x000174B9                   # INVALID     $zero, $at, 0x74B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E9F0 raw=0x000174B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e9f4:
    // 0x27e9f4: 0x30020  add         $zero, $zero, $v1
    ctx->pc = 0x27e9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27e9f8:
    // 0x27e9f8: 0x0  nop
    ctx->pc = 0x27e9f8u;
    // NOP
label_27e9fc:
    // 0x27e9fc: 0x0  nop
    ctx->pc = 0x27e9fcu;
    // NOP
label_27ea00:
    // 0x27ea00: 0x1751a  .word       0x0001751A                   # div         $t6, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27ea04:
    // 0x27ea04: 0x2dc20  .word       0x0002DC20                   # add         $k1, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27ea08:
    // 0x27ea08: 0x0  nop
    ctx->pc = 0x27ea08u;
    // NOP
label_27ea0c:
    // 0x27ea0c: 0x0  nop
    ctx->pc = 0x27ea0cu;
    // NOP
label_27ea10:
    // 0x27ea10: 0x17576  tne         $zero, $at, 469
    ctx->pc = 0x27ea10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ea14:
    // 0x27ea14: 0x34790  .word       0x00034790                   # mfhi        $t0 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27ea18:
    // 0x27ea18: 0x0  nop
    ctx->pc = 0x27ea18u;
    // NOP
label_27ea1c:
    // 0x27ea1c: 0x0  nop
    ctx->pc = 0x27ea1cu;
    // NOP
label_27ea20:
    // 0x27ea20: 0x175df  .word       0x000175DF                   # ddivu       $t6, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27EA20 raw=0x000175DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ea24:
    // 0x27ea24: 0x2b630  tge         $zero, $v0, 728
    ctx->pc = 0x27ea24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ea28:
    // 0x27ea28: 0x0  nop
    ctx->pc = 0x27ea28u;
    // NOP
label_27ea2c:
    // 0x27ea2c: 0x0  nop
    ctx->pc = 0x27ea2cu;
    // NOP
label_27ea30:
    // 0x27ea30: 0x17636  tne         $zero, $at, 472
    ctx->pc = 0x27ea30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ea34:
    // 0x27ea34: 0x2cf30  tge         $zero, $v0, 828
    ctx->pc = 0x27ea34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ea38:
    // 0x27ea38: 0x0  nop
    ctx->pc = 0x27ea38u;
    // NOP
label_27ea3c:
    // 0x27ea3c: 0x0  nop
    ctx->pc = 0x27ea3cu;
    // NOP
label_27ea40:
    // 0x27ea40: 0x17690  .word       0x00017690                   # mfhi        $t6 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea40u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27ea44:
    // 0x27ea44: 0x35660  .word       0x00035660                   # add         $t2, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27ea48:
    // 0x27ea48: 0x0  nop
    ctx->pc = 0x27ea48u;
    // NOP
label_27ea4c:
    // 0x27ea4c: 0x0  nop
    ctx->pc = 0x27ea4cu;
    // NOP
label_27ea50:
    // 0x27ea50: 0x176fb  dsra        $t6, $at, 27
    ctx->pc = 0x27ea50u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> 27);
label_27ea54:
    // 0x27ea54: 0x2e740  sll         $gp, $v0, 29
    ctx->pc = 0x27ea54u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_27ea58:
    // 0x27ea58: 0x0  nop
    ctx->pc = 0x27ea58u;
    // NOP
label_27ea5c:
    // 0x27ea5c: 0x0  nop
    ctx->pc = 0x27ea5cu;
    // NOP
label_27ea60:
    // 0x27ea60: 0x17758  .word       0x00017758                   # mult        $t6, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27ea60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_27ea64:
    // 0x27ea64: 0x2e830  tge         $zero, $v0, 928
    ctx->pc = 0x27ea64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ea68:
    // 0x27ea68: 0x0  nop
    ctx->pc = 0x27ea68u;
    // NOP
label_27ea6c:
    // 0x27ea6c: 0x0  nop
    ctx->pc = 0x27ea6cu;
    // NOP
label_27ea70:
    // 0x27ea70: 0x177b6  tne         $zero, $at, 478
    ctx->pc = 0x27ea70u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ea74:
    // 0x27ea74: 0x39740  sll         $s2, $v1, 29
    ctx->pc = 0x27ea74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
label_27ea78:
    // 0x27ea78: 0x0  nop
    ctx->pc = 0x27ea78u;
    // NOP
label_27ea7c:
    // 0x27ea7c: 0x0  nop
    ctx->pc = 0x27ea7cu;
    // NOP
label_27ea80:
    // 0x27ea80: 0x17829  .word       0x00017829                   # mtsa        $zero # 00017800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27ea80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27ea84:
    // 0x27ea84: 0x275d0  .word       0x000275D0                   # mfhi        $t6 # 000205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ea84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27ea88:
    // 0x27ea88: 0x0  nop
    ctx->pc = 0x27ea88u;
    // NOP
label_27ea8c:
    // 0x27ea8c: 0x0  nop
    ctx->pc = 0x27ea8cu;
    // NOP
label_27ea90:
    // 0x27ea90: 0x17878  dsll        $t7, $at, 1
    ctx->pc = 0x27ea90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << 1);
label_27ea94:
    // 0x27ea94: 0x36470  tge         $zero, $v1, 401
    ctx->pc = 0x27ea94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ea98:
    // 0x27ea98: 0x0  nop
    ctx->pc = 0x27ea98u;
    // NOP
label_27ea9c:
    // 0x27ea9c: 0x0  nop
    ctx->pc = 0x27ea9cu;
    // NOP
label_27eaa0:
    // 0x27eaa0: 0x178e5  .word       0x000178E5                   # or          $t7, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eaa0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27eaa4:
    // 0x27eaa4: 0x37510  .word       0x00037510                   # mfhi        $t6 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eaa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27eaa8:
    // 0x27eaa8: 0x0  nop
    ctx->pc = 0x27eaa8u;
    // NOP
label_27eaac:
    // 0x27eaac: 0x0  nop
    ctx->pc = 0x27eaacu;
    // NOP
label_27eab0:
    // 0x27eab0: 0x17954  .word       0x00017954                   # dsllv       $t7, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27eab4:
    // 0x27eab4: 0x303e0  .word       0x000303E0                   # add         $zero, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27eab8:
    // 0x27eab8: 0x0  nop
    ctx->pc = 0x27eab8u;
    // NOP
label_27eabc:
    // 0x27eabc: 0x0  nop
    ctx->pc = 0x27eabcu;
    // NOP
label_27eac0:
    // 0x27eac0: 0x179b5  .word       0x000179B5                   # INVALID     $zero, $at, 0x79B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27EAC0 raw=0x000179B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27eac4:
    // 0x27eac4: 0x38ec0  sll         $s1, $v1, 27
    ctx->pc = 0x27eac4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27eac8:
    // 0x27eac8: 0x0  nop
    ctx->pc = 0x27eac8u;
    // NOP
label_27eacc:
    // 0x27eacc: 0x0  nop
    ctx->pc = 0x27eaccu;
    // NOP
label_27ead0:
    // 0x27ead0: 0x17a27  .word       0x00017A27                   # nor         $t7, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ead0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27ead4:
    // 0x27ead4: 0x1d810  .word       0x0001D810                   # mfhi        $k1 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ead4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27ead8:
    // 0x27ead8: 0x0  nop
    ctx->pc = 0x27ead8u;
    // NOP
label_27eadc:
    // 0x27eadc: 0x0  nop
    ctx->pc = 0x27eadcu;
    // NOP
label_27eae0:
    // 0x27eae0: 0x17a63  .word       0x00017A63                   # negu        $t7, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eae0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27eae4:
    // 0x27eae4: 0x26bc0  sll         $t5, $v0, 15
    ctx->pc = 0x27eae4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_27eae8:
    // 0x27eae8: 0x0  nop
    ctx->pc = 0x27eae8u;
    // NOP
label_27eaec:
    // 0x27eaec: 0x0  nop
    ctx->pc = 0x27eaecu;
    // NOP
label_27eaf0:
    // 0x27eaf0: 0x17ab1  tgeu        $zero, $at, 490
    ctx->pc = 0x27eaf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27eaf4:
    // 0x27eaf4: 0x270b0  tge         $zero, $v0, 450
    ctx->pc = 0x27eaf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27eaf8:
    // 0x27eaf8: 0x0  nop
    ctx->pc = 0x27eaf8u;
    // NOP
label_27eafc:
    // 0x27eafc: 0x0  nop
    ctx->pc = 0x27eafcu;
    // NOP
label_27eb00:
    // 0x27eb00: 0x17b00  sll         $t7, $at, 12
    ctx->pc = 0x27eb00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_27eb04:
    // 0x27eb04: 0x2adb0  tge         $zero, $v0, 694
    ctx->pc = 0x27eb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27eb08:
    // 0x27eb08: 0x0  nop
    ctx->pc = 0x27eb08u;
    // NOP
label_27eb0c:
    // 0x27eb0c: 0x0  nop
    ctx->pc = 0x27eb0cu;
    // NOP
label_27eb10:
    // 0x27eb10: 0x17b56  .word       0x00017B56                   # dsrlv       $t7, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27eb14:
    // 0x27eb14: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x27eb14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27eb18:
    // 0x27eb18: 0x0  nop
    ctx->pc = 0x27eb18u;
    // NOP
label_27eb1c:
    // 0x27eb1c: 0x0  nop
    ctx->pc = 0x27eb1cu;
    // NOP
label_27eb20:
    // 0x27eb20: 0x17bb3  tltu        $zero, $at, 494
    ctx->pc = 0x27eb20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27eb24:
    // 0x27eb24: 0x2d3a0  .word       0x0002D3A0                   # add         $k0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27eb28:
    // 0x27eb28: 0x0  nop
    ctx->pc = 0x27eb28u;
    // NOP
label_27eb2c:
    // 0x27eb2c: 0x0  nop
    ctx->pc = 0x27eb2cu;
    // NOP
label_27eb30:
    // 0x27eb30: 0x17c0e  .word       0x00017C0E                   # INVALID     $zero, $at, 0x7C0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27EB30 raw=0x00017C0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27eb34:
    // 0x27eb34: 0x2cbb0  tge         $zero, $v0, 814
    ctx->pc = 0x27eb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27eb38:
    // 0x27eb38: 0x0  nop
    ctx->pc = 0x27eb38u;
    // NOP
label_27eb3c:
    // 0x27eb3c: 0x0  nop
    ctx->pc = 0x27eb3cu;
    // NOP
label_27eb40:
    // 0x27eb40: 0x17c68  .word       0x00017C68                   # mfsa        $t7 # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27eb40u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_27eb44:
    // 0x27eb44: 0x31d50  .word       0x00031D50                   # mfhi        $v1 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27eb48:
    // 0x27eb48: 0x0  nop
    ctx->pc = 0x27eb48u;
    // NOP
label_27eb4c:
    // 0x27eb4c: 0x0  nop
    ctx->pc = 0x27eb4cu;
    // NOP
label_27eb50:
    // 0x27eb50: 0x17ccc  .word       0x00017CCC                   # syscall     499 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb50u;
    ctx->pc = 0x27EB54u;
runtime->handleSyscall(rdram, ctx, 0x5F3u);
label_27eb54:
    // 0x27eb54: 0x1ed40  sll         $sp, $at, 21
    ctx->pc = 0x27eb54u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 21));
label_27eb58:
    // 0x27eb58: 0x0  nop
    ctx->pc = 0x27eb58u;
    // NOP
label_27eb5c:
    // 0x27eb5c: 0x0  nop
    ctx->pc = 0x27eb5cu;
    // NOP
label_27eb60:
    // 0x27eb60: 0x17d0a  .word       0x00017D0A                   # movz        $t7, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb60u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_27eb64:
    // 0x27eb64: 0x2f2d0  .word       0x0002F2D0                   # mfhi        $fp # 000202C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb64u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_27eb68:
    // 0x27eb68: 0x0  nop
    ctx->pc = 0x27eb68u;
    // NOP
label_27eb6c:
    // 0x27eb6c: 0x0  nop
    ctx->pc = 0x27eb6cu;
    // NOP
label_27eb70:
    // 0x27eb70: 0x17d69  .word       0x00017D69                   # mtsa        $zero # 00017D40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27eb70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27eb74:
    // 0x27eb74: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x27eb74u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27eb78:
    // 0x27eb78: 0x0  nop
    ctx->pc = 0x27eb78u;
    // NOP
label_27eb7c:
    // 0x27eb7c: 0x0  nop
    ctx->pc = 0x27eb7cu;
    // NOP
label_27eb80:
    // 0x27eb80: 0x17dc8  .word       0x00017DC8                   # jr          $zero # 00017DC0 <InstrIdType: CPU_SPECIAL>
label_27eb84:
    if (ctx->pc == 0x27EB84u) {
        ctx->pc = 0x27EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB80u;
        // 0x27eb84: 0x30820  add         $at, $zero, $v1 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EB88u;
        goto label_27eb88;
    }
    ctx->pc = 0x27EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB80u;
        // 0x27eb84: 0x30820  add         $at, $zero, $v1 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EB80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27EB88u;
label_27eb88:
    // 0x27eb88: 0x0  nop
    ctx->pc = 0x27eb88u;
    // NOP
label_27eb8c:
    // 0x27eb8c: 0x0  nop
    ctx->pc = 0x27eb8cu;
    // NOP
label_27eb90:
    // 0x27eb90: 0x17e2a  .word       0x00017E2A                   # slt         $t7, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eb90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27eb94:
    // 0x27eb94: 0x22df0  tge         $zero, $v0, 183
    ctx->pc = 0x27eb94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27eb98:
    // 0x27eb98: 0x0  nop
    ctx->pc = 0x27eb98u;
    // NOP
label_27eb9c:
    // 0x27eb9c: 0x0  nop
    ctx->pc = 0x27eb9cu;
    // NOP
label_27eba0:
    // 0x27eba0: 0x17e70  tge         $zero, $at, 505
    ctx->pc = 0x27eba0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27eba4:
    // 0x27eba4: 0x27b40  sll         $t7, $v0, 13
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_27eba8:
    // 0x27eba8: 0x0  nop
    ctx->pc = 0x27eba8u;
    // NOP
label_27ebac:
    // 0x27ebac: 0x0  nop
    ctx->pc = 0x27ebacu;
    // NOP
label_27ebb0:
    // 0x27ebb0: 0x17ec0  sll         $t7, $at, 27
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_27ebb4:
    // 0x27ebb4: 0x2cd70  tge         $zero, $v0, 821
    ctx->pc = 0x27ebb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ebb8:
    // 0x27ebb8: 0x0  nop
    ctx->pc = 0x27ebb8u;
    // NOP
label_27ebbc:
    // 0x27ebbc: 0x0  nop
    ctx->pc = 0x27ebbcu;
    // NOP
label_27ebc0:
    // 0x27ebc0: 0x17f1a  .word       0x00017F1A                   # div         $t7, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ebc0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27ebc4:
    // 0x27ebc4: 0x2d600  sll         $k0, $v0, 24
    ctx->pc = 0x27ebc4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_27ebc8:
    // 0x27ebc8: 0x0  nop
    ctx->pc = 0x27ebc8u;
    // NOP
label_27ebcc:
    // 0x27ebcc: 0x0  nop
    ctx->pc = 0x27ebccu;
    // NOP
label_27ebd0:
    // 0x27ebd0: 0x17f75  .word       0x00017F75                   # INVALID     $zero, $at, 0x7F75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ebd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27EBD0 raw=0x00017F75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ebd4:
    // 0x27ebd4: 0x1e510  .word       0x0001E510                   # mfhi        $gp # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ebd4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27ebd8:
    // 0x27ebd8: 0x0  nop
    ctx->pc = 0x27ebd8u;
    // NOP
label_27ebdc:
    // 0x27ebdc: 0x0  nop
    ctx->pc = 0x27ebdcu;
    // NOP
label_27ebe0:
    // 0x27ebe0: 0x17fb2  tlt         $zero, $at, 510
    ctx->pc = 0x27ebe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ebe4:
    // 0x27ebe4: 0x37230  tge         $zero, $v1, 456
    ctx->pc = 0x27ebe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ebe8:
    // 0x27ebe8: 0x0  nop
    ctx->pc = 0x27ebe8u;
    // NOP
label_27ebec:
    // 0x27ebec: 0x0  nop
    ctx->pc = 0x27ebecu;
    // NOP
label_27ebf0:
    // 0x27ebf0: 0x18021  addu        $s0, $zero, $at
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ebf4:
    // 0x27ebf4: 0x2b0f0  tge         $zero, $v0, 707
    ctx->pc = 0x27ebf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ebf8:
    // 0x27ebf8: 0x0  nop
    ctx->pc = 0x27ebf8u;
    // NOP
label_27ebfc:
    // 0x27ebfc: 0x0  nop
    ctx->pc = 0x27ebfcu;
    // NOP
label_27ec00:
    // 0x27ec00: 0x18078  dsll        $s0, $at, 1
    ctx->pc = 0x27ec00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << 1);
label_27ec04:
    // 0x27ec04: 0x1dbc0  sll         $k1, $at, 15
    ctx->pc = 0x27ec04u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_27ec08:
    // 0x27ec08: 0x0  nop
    ctx->pc = 0x27ec08u;
    // NOP
label_27ec0c:
    // 0x27ec0c: 0x0  nop
    ctx->pc = 0x27ec0cu;
    // NOP
label_27ec10:
    // 0x27ec10: 0x180b4  teq         $zero, $at, 514
    ctx->pc = 0x27ec10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ec14:
    // 0x27ec14: 0x37710  .word       0x00037710                   # mfhi        $t6 # 00030700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27ec18:
    // 0x27ec18: 0x0  nop
    ctx->pc = 0x27ec18u;
    // NOP
label_27ec1c:
    // 0x27ec1c: 0x0  nop
    ctx->pc = 0x27ec1cu;
    // NOP
label_27ec20:
    // 0x27ec20: 0x18123  .word       0x00018123                   # negu        $s0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ec24:
    // 0x27ec24: 0x214e0  .word       0x000214E0                   # add         $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27ec28:
    // 0x27ec28: 0x0  nop
    ctx->pc = 0x27ec28u;
    // NOP
label_27ec2c:
    // 0x27ec2c: 0x0  nop
    ctx->pc = 0x27ec2cu;
    // NOP
label_27ec30:
    // 0x27ec30: 0x18166  .word       0x00018166                   # xor         $s0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27ec34:
    // 0x27ec34: 0x24f40  sll         $t1, $v0, 29
    ctx->pc = 0x27ec34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_27ec38:
    // 0x27ec38: 0x0  nop
    ctx->pc = 0x27ec38u;
    // NOP
label_27ec3c:
    // 0x27ec3c: 0x0  nop
    ctx->pc = 0x27ec3cu;
    // NOP
label_27ec40:
    // 0x27ec40: 0x181b0  tge         $zero, $at, 518
    ctx->pc = 0x27ec40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ec44:
    // 0x27ec44: 0x2d6f0  tge         $zero, $v0, 859
    ctx->pc = 0x27ec44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ec48:
    // 0x27ec48: 0x0  nop
    ctx->pc = 0x27ec48u;
    // NOP
label_27ec4c:
    // 0x27ec4c: 0x0  nop
    ctx->pc = 0x27ec4cu;
    // NOP
label_27ec50:
    // 0x27ec50: 0x1820b  .word       0x0001820B                   # movn        $s0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec50u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_27ec54:
    // 0x27ec54: 0x364a0  .word       0x000364A0                   # add         $t4, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27ec58:
    // 0x27ec58: 0x0  nop
    ctx->pc = 0x27ec58u;
    // NOP
label_27ec5c:
    // 0x27ec5c: 0x0  nop
    ctx->pc = 0x27ec5cu;
    // NOP
label_27ec60:
    // 0x27ec60: 0x18278  dsll        $s0, $at, 9
    ctx->pc = 0x27ec60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << 9);
label_27ec64:
    // 0x27ec64: 0x2dbe0  .word       0x0002DBE0                   # add         $k1, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27ec68:
    // 0x27ec68: 0x0  nop
    ctx->pc = 0x27ec68u;
    // NOP
label_27ec6c:
    // 0x27ec6c: 0x0  nop
    ctx->pc = 0x27ec6cu;
    // NOP
label_27ec70:
    // 0x27ec70: 0x182d4  .word       0x000182D4                   # dsllv       $s0, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ec74:
    // 0x27ec74: 0x34240  sll         $t0, $v1, 9
    ctx->pc = 0x27ec74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_27ec78:
    // 0x27ec78: 0x0  nop
    ctx->pc = 0x27ec78u;
    // NOP
label_27ec7c:
    // 0x27ec7c: 0x0  nop
    ctx->pc = 0x27ec7cu;
    // NOP
label_27ec80:
    // 0x27ec80: 0x1833d  .word       0x0001833D                   # INVALID     $zero, $at, -0x7CC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27EC80 raw=0x0001833D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ec84:
    // 0x27ec84: 0x2dbe0  .word       0x0002DBE0                   # add         $k1, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27ec88:
    // 0x27ec88: 0x0  nop
    ctx->pc = 0x27ec88u;
    // NOP
label_27ec8c:
    // 0x27ec8c: 0x0  nop
    ctx->pc = 0x27ec8cu;
    // NOP
label_27ec90:
    // 0x27ec90: 0x18399  .word       0x00018399                   # multu       $zero, $at # 00008380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_27ec94:
    // 0x27ec94: 0x36910  .word       0x00036910                   # mfhi        $t5 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ec94u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27ec98:
    // 0x27ec98: 0x0  nop
    ctx->pc = 0x27ec98u;
    // NOP
label_27ec9c:
    // 0x27ec9c: 0x0  nop
    ctx->pc = 0x27ec9cu;
    // NOP
label_27eca0:
    // 0x27eca0: 0x18407  .word       0x00018407                   # srav        $s0, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eca0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27eca4:
    // 0x27eca4: 0x2dbe0  .word       0x0002DBE0                   # add         $k1, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27eca8:
    // 0x27eca8: 0x0  nop
    ctx->pc = 0x27eca8u;
    // NOP
label_27ecac:
    // 0x27ecac: 0x0  nop
    ctx->pc = 0x27ecacu;
    // NOP
label_27ecb0:
    // 0x27ecb0: 0x18463  .word       0x00018463                   # negu        $s0, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ecb4:
    // 0x27ecb4: 0x36b60  .word       0x00036B60                   # add         $t5, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27ecb8:
    // 0x27ecb8: 0x0  nop
    ctx->pc = 0x27ecb8u;
    // NOP
label_27ecbc:
    // 0x27ecbc: 0x0  nop
    ctx->pc = 0x27ecbcu;
    // NOP
label_27ecc0:
    // 0x27ecc0: 0x184d1  .word       0x000184D1                   # mthi        $zero # 000184C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27ecc4:
    // 0x27ecc4: 0x26a50  .word       0x00026A50                   # mfhi        $t5 # 00020240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27ecc8:
    // 0x27ecc8: 0x0  nop
    ctx->pc = 0x27ecc8u;
    // NOP
label_27eccc:
    // 0x27eccc: 0x0  nop
    ctx->pc = 0x27ecccu;
    // NOP
label_27ecd0:
    // 0x27ecd0: 0x1851f  .word       0x0001851F                   # ddivu       $s0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27ECD0 raw=0x0001851F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ecd4:
    // 0x27ecd4: 0x2cfd0  .word       0x0002CFD0                   # mfhi        $t9 # 000207C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecd4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27ecd8:
    // 0x27ecd8: 0x0  nop
    ctx->pc = 0x27ecd8u;
    // NOP
label_27ecdc:
    // 0x27ecdc: 0x0  nop
    ctx->pc = 0x27ecdcu;
    // NOP
label_27ece0:
    // 0x27ece0: 0x18579  .word       0x00018579                   # INVALID     $zero, $at, -0x7A87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ece0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27ECE0 raw=0x00018579"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ece4:
    // 0x27ece4: 0x26a50  .word       0x00026A50                   # mfhi        $t5 # 00020240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ece4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27ece8:
    // 0x27ece8: 0x0  nop
    ctx->pc = 0x27ece8u;
    // NOP
label_27ecec:
    // 0x27ecec: 0x0  nop
    ctx->pc = 0x27ececu;
    // NOP
label_27ecf0:
    // 0x27ecf0: 0x185c7  .word       0x000185C7                   # srav        $s0, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ecf0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27ecf4:
    // 0x27ecf4: 0x2b140  sll         $s6, $v0, 5
    ctx->pc = 0x27ecf4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_27ecf8:
    // 0x27ecf8: 0x0  nop
    ctx->pc = 0x27ecf8u;
    // NOP
label_27ecfc:
    // 0x27ecfc: 0x0  nop
    ctx->pc = 0x27ecfcu;
    // NOP
label_27ed00:
    // 0x27ed00: 0x1861e  .word       0x0001861E                   # ddiv        $s0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27ED00 raw=0x0001861E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ed04:
    // 0x27ed04: 0x320b0  tge         $zero, $v1, 130
    ctx->pc = 0x27ed04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ed08:
    // 0x27ed08: 0x0  nop
    ctx->pc = 0x27ed08u;
    // NOP
label_27ed0c:
    // 0x27ed0c: 0x0  nop
    ctx->pc = 0x27ed0cu;
    // NOP
label_27ed10:
    // 0x27ed10: 0x18683  sra         $s0, $at, 26
    ctx->pc = 0x27ed10u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 1), 26));
label_27ed14:
    // 0x27ed14: 0x34cc0  sll         $t1, $v1, 19
    ctx->pc = 0x27ed14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_27ed18:
    // 0x27ed18: 0x0  nop
    ctx->pc = 0x27ed18u;
    // NOP
label_27ed1c:
    // 0x27ed1c: 0x0  nop
    ctx->pc = 0x27ed1cu;
    // NOP
label_27ed20:
    // 0x27ed20: 0x186ed  .word       0x000186ED                   # daddu       $s0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27ed24:
    // 0x27ed24: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_27ed28:
    // 0x27ed28: 0x0  nop
    ctx->pc = 0x27ed28u;
    // NOP
label_27ed2c:
    // 0x27ed2c: 0x0  nop
    ctx->pc = 0x27ed2cu;
    // NOP
label_27ed30:
    // 0x27ed30: 0x18751  .word       0x00018751                   # mthi        $zero # 00018740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed30u;
    ctx->hi = GPR_U64(ctx, 0);
label_27ed34:
    // 0x27ed34: 0x34b30  tge         $zero, $v1, 300
    ctx->pc = 0x27ed34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ed38:
    // 0x27ed38: 0x0  nop
    ctx->pc = 0x27ed38u;
    // NOP
label_27ed3c:
    // 0x27ed3c: 0x0  nop
    ctx->pc = 0x27ed3cu;
    // NOP
label_27ed40:
    // 0x27ed40: 0x187bb  dsra        $s0, $at, 30
    ctx->pc = 0x27ed40u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> 30);
label_27ed44:
    // 0x27ed44: 0x28530  tge         $zero, $v0, 532
    ctx->pc = 0x27ed44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ed48:
    // 0x27ed48: 0x0  nop
    ctx->pc = 0x27ed48u;
    // NOP
label_27ed4c:
    // 0x27ed4c: 0x0  nop
    ctx->pc = 0x27ed4cu;
    // NOP
label_27ed50:
    // 0x27ed50: 0x1880c  .word       0x0001880C                   # syscall     544 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed50u;
    ctx->pc = 0x27ED54u;
runtime->handleSyscall(rdram, ctx, 0x620u);
label_27ed54:
    // 0x27ed54: 0x28480  sll         $s0, $v0, 18
    ctx->pc = 0x27ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_27ed58:
    // 0x27ed58: 0x0  nop
    ctx->pc = 0x27ed58u;
    // NOP
label_27ed5c:
    // 0x27ed5c: 0x0  nop
    ctx->pc = 0x27ed5cu;
    // NOP
label_27ed60:
    // 0x27ed60: 0x1885d  .word       0x0001885D                   # dmultu      $zero, $at # 00008840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27ED60 raw=0x0001885D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ed64:
    // 0x27ed64: 0x2b400  sll         $s6, $v0, 16
    ctx->pc = 0x27ed64u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27ed68:
    // 0x27ed68: 0x0  nop
    ctx->pc = 0x27ed68u;
    // NOP
label_27ed6c:
    // 0x27ed6c: 0x0  nop
    ctx->pc = 0x27ed6cu;
    // NOP
label_27ed70:
    // 0x27ed70: 0x188b4  teq         $zero, $at, 546
    ctx->pc = 0x27ed70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ed74:
    // 0x27ed74: 0x2a070  tge         $zero, $v0, 641
    ctx->pc = 0x27ed74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ed78:
    // 0x27ed78: 0x0  nop
    ctx->pc = 0x27ed78u;
    // NOP
label_27ed7c:
    // 0x27ed7c: 0x0  nop
    ctx->pc = 0x27ed7cu;
    // NOP
label_27ed80:
    // 0x27ed80: 0x18909  .word       0x00018909                   # jalr        $s1, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_27ed84:
    if (ctx->pc == 0x27ED84u) {
        ctx->pc = 0x27ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED80u;
        // 0x27ed84: 0x2c4d0  .word       0x0002C4D0                   # mfhi        $t8 # 000204C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED88u;
        goto label_27ed88;
    }
    ctx->pc = 0x27ED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x27ED88u);
        ctx->pc = 0x27ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED80u;
        // 0x27ed84: 0x2c4d0  .word       0x0002C4D0                   # mfhi        $t8 # 000204C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED80u, 0x27ED88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27ED88u;
label_27ed88:
    // 0x27ed88: 0x0  nop
    ctx->pc = 0x27ed88u;
    // NOP
label_27ed8c:
    // 0x27ed8c: 0x0  nop
    ctx->pc = 0x27ed8cu;
    // NOP
label_27ed90:
    // 0x27ed90: 0x18962  .word       0x00018962                   # neg         $s1, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ed90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_27ed94:
    // 0x27ed94: 0x2d100  sll         $k0, $v0, 4
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27ed98:
    // 0x27ed98: 0x0  nop
    ctx->pc = 0x27ed98u;
    // NOP
label_27ed9c:
    // 0x27ed9c: 0x0  nop
    ctx->pc = 0x27ed9cu;
    // NOP
label_27eda0:
    // 0x27eda0: 0x189bd  .word       0x000189BD                   # INVALID     $zero, $at, -0x7643 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eda0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27EDA0 raw=0x000189BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27eda4:
    // 0x27eda4: 0x2bd10  .word       0x0002BD10                   # mfhi        $s7 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eda4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27eda8:
    // 0x27eda8: 0x0  nop
    ctx->pc = 0x27eda8u;
    // NOP
label_27edac:
    // 0x27edac: 0x0  nop
    ctx->pc = 0x27edacu;
    // NOP
label_27edb0:
    // 0x27edb0: 0x18a15  .word       0x00018A15                   # INVALID     $zero, $at, -0x75EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27edb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27EDB0 raw=0x00018A15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27edb4:
    // 0x27edb4: 0x2eb00  sll         $sp, $v0, 12
    ctx->pc = 0x27edb4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_27edb8:
    // 0x27edb8: 0x0  nop
    ctx->pc = 0x27edb8u;
    // NOP
label_27edbc:
    // 0x27edbc: 0x0  nop
    ctx->pc = 0x27edbcu;
    // NOP
label_27edc0:
    // 0x27edc0: 0x18a73  tltu        $zero, $at, 553
    ctx->pc = 0x27edc0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27edc4:
    // 0x27edc4: 0x2bea0  .word       0x0002BEA0                   # add         $s7, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27edc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27edc8:
    // 0x27edc8: 0x0  nop
    ctx->pc = 0x27edc8u;
    // NOP
label_27edcc:
    // 0x27edcc: 0x0  nop
    ctx->pc = 0x27edccu;
    // NOP
label_27edd0:
    // 0x27edd0: 0x18acb  .word       0x00018ACB                   # movn        $s1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27edd0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_27edd4:
    // 0x27edd4: 0x30160  .word       0x00030160                   # add         $zero, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27edd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27edd8:
    // 0x27edd8: 0x0  nop
    ctx->pc = 0x27edd8u;
    // NOP
label_27eddc:
    // 0x27eddc: 0x0  nop
    ctx->pc = 0x27eddcu;
    // NOP
label_27ede0:
    // 0x27ede0: 0x18b2c  .word       0x00018B2C                   # dadd        $s1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ede0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_27ede4:
    // 0x27ede4: 0x29120  .word       0x00029120                   # add         $s2, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ede4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27ede8:
    // 0x27ede8: 0x0  nop
    ctx->pc = 0x27ede8u;
    // NOP
label_27edec:
    // 0x27edec: 0x0  nop
    ctx->pc = 0x27edecu;
    // NOP
label_27edf0:
    // 0x27edf0: 0x18b7f  dsra32      $s1, $at, 13
    ctx->pc = 0x27edf0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> (32 + 13));
label_27edf4:
    // 0x27edf4: 0x278f0  tge         $zero, $v0, 483
    ctx->pc = 0x27edf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27edf8:
    // 0x27edf8: 0x0  nop
    ctx->pc = 0x27edf8u;
    // NOP
label_27edfc:
    // 0x27edfc: 0x0  nop
    ctx->pc = 0x27edfcu;
    // NOP
label_27ee00:
    // 0x27ee00: 0x18bcf  .word       0x00018BCF                   # sync # 00018800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27ee04:
    // 0x27ee04: 0x297c0  sll         $s2, $v0, 31
    ctx->pc = 0x27ee04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
label_27ee08:
    // 0x27ee08: 0x0  nop
    ctx->pc = 0x27ee08u;
    // NOP
label_27ee0c:
    // 0x27ee0c: 0x0  nop
    ctx->pc = 0x27ee0cu;
    // NOP
label_27ee10:
    // 0x27ee10: 0x18c22  .word       0x00018C22                   # neg         $s1, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_27ee14:
    // 0x27ee14: 0x27c50  .word       0x00027C50                   # mfhi        $t7 # 00020440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27ee18:
    // 0x27ee18: 0x0  nop
    ctx->pc = 0x27ee18u;
    // NOP
label_27ee1c:
    // 0x27ee1c: 0x0  nop
    ctx->pc = 0x27ee1cu;
    // NOP
label_27ee20:
    // 0x27ee20: 0x18c72  tlt         $zero, $at, 561
    ctx->pc = 0x27ee20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ee24:
    // 0x27ee24: 0x28ed0  .word       0x00028ED0                   # mfhi        $s1 # 000206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee24u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27ee28:
    // 0x27ee28: 0x0  nop
    ctx->pc = 0x27ee28u;
    // NOP
label_27ee2c:
    // 0x27ee2c: 0x0  nop
    ctx->pc = 0x27ee2cu;
    // NOP
label_27ee30:
    // 0x27ee30: 0x18cc4  .word       0x00018CC4                   # sllv        $s1, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27ee34:
    // 0x27ee34: 0x28eb0  tge         $zero, $v0, 570
    ctx->pc = 0x27ee34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ee38:
    // 0x27ee38: 0x0  nop
    ctx->pc = 0x27ee38u;
    // NOP
label_27ee3c:
    // 0x27ee3c: 0x0  nop
    ctx->pc = 0x27ee3cu;
    // NOP
label_27ee40:
    // 0x27ee40: 0x18d16  .word       0x00018D16                   # dsrlv       $s1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ee44:
    // 0x27ee44: 0x29870  tge         $zero, $v0, 609
    ctx->pc = 0x27ee44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ee48:
    // 0x27ee48: 0x0  nop
    ctx->pc = 0x27ee48u;
    // NOP
label_27ee4c:
    // 0x27ee4c: 0x0  nop
    ctx->pc = 0x27ee4cu;
    // NOP
label_27ee50:
    // 0x27ee50: 0x18d6a  .word       0x00018D6A                   # slt         $s1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee50u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27ee54:
    // 0x27ee54: 0x2a5b0  tge         $zero, $v0, 662
    ctx->pc = 0x27ee54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ee58:
    // 0x27ee58: 0x0  nop
    ctx->pc = 0x27ee58u;
    // NOP
label_27ee5c:
    // 0x27ee5c: 0x0  nop
    ctx->pc = 0x27ee5cu;
    // NOP
label_27ee60:
    // 0x27ee60: 0x18dbf  dsra32      $s1, $at, 22
    ctx->pc = 0x27ee60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> (32 + 22));
label_27ee64:
    // 0x27ee64: 0x33420  .word       0x00033420                   # add         $a2, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27ee68:
    // 0x27ee68: 0x0  nop
    ctx->pc = 0x27ee68u;
    // NOP
label_27ee6c:
    // 0x27ee6c: 0x0  nop
    ctx->pc = 0x27ee6cu;
    // NOP
label_27ee70:
    // 0x27ee70: 0x18e26  .word       0x00018E26                   # xor         $s1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27ee74:
    // 0x27ee74: 0x2e080  sll         $gp, $v0, 2
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27ee78:
    // 0x27ee78: 0x0  nop
    ctx->pc = 0x27ee78u;
    // NOP
label_27ee7c:
    // 0x27ee7c: 0x0  nop
    ctx->pc = 0x27ee7cu;
    // NOP
label_27ee80:
    // 0x27ee80: 0x18e83  sra         $s1, $at, 26
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 1), 26));
label_27ee84:
    // 0x27ee84: 0x318a0  .word       0x000318A0                   # add         $v1, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27ee88:
    // 0x27ee88: 0x0  nop
    ctx->pc = 0x27ee88u;
    // NOP
label_27ee8c:
    // 0x27ee8c: 0x0  nop
    ctx->pc = 0x27ee8cu;
    // NOP
label_27ee90:
    // 0x27ee90: 0x18ee7  .word       0x00018EE7                   # nor         $s1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee90u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27ee94:
    // 0x27ee94: 0x2af20  .word       0x0002AF20                   # add         $s5, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ee94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27ee98:
    // 0x27ee98: 0x0  nop
    ctx->pc = 0x27ee98u;
    // NOP
label_27ee9c:
    // 0x27ee9c: 0x0  nop
    ctx->pc = 0x27ee9cu;
    // NOP
label_27eea0:
    // 0x27eea0: 0x18f3d  .word       0x00018F3D                   # INVALID     $zero, $at, -0x70C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27EEA0 raw=0x00018F3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27eea4:
    // 0x27eea4: 0x2a500  sll         $s4, $v0, 20
    ctx->pc = 0x27eea4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_27eea8:
    // 0x27eea8: 0x0  nop
    ctx->pc = 0x27eea8u;
    // NOP
label_27eeac:
    // 0x27eeac: 0x0  nop
    ctx->pc = 0x27eeacu;
    // NOP
label_27eeb0:
    // 0x27eeb0: 0x18f92  .word       0x00018F92                   # mflo        $s1 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_27eeb4:
    // 0x27eeb4: 0x2c850  .word       0x0002C850                   # mfhi        $t9 # 00020040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eeb4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27eeb8:
    // 0x27eeb8: 0x0  nop
    ctx->pc = 0x27eeb8u;
    // NOP
label_27eebc:
    // 0x27eebc: 0x0  nop
    ctx->pc = 0x27eebcu;
    // NOP
label_27eec0:
    // 0x27eec0: 0x18fec  .word       0x00018FEC                   # dadd        $s1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_27eec4:
    // 0x27eec4: 0x2bac0  sll         $s7, $v0, 11
    ctx->pc = 0x27eec4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27eec8:
    // 0x27eec8: 0x0  nop
    ctx->pc = 0x27eec8u;
    // NOP
label_27eecc:
    // 0x27eecc: 0x0  nop
    ctx->pc = 0x27eeccu;
    // NOP
label_27eed0:
    // 0x27eed0: 0x19044  .word       0x00019044                   # sllv        $s2, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27eed4:
    // 0x27eed4: 0x2a000  sll         $s4, $v0, 0
    ctx->pc = 0x27eed4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_27eed8:
    // 0x27eed8: 0x0  nop
    ctx->pc = 0x27eed8u;
    // NOP
label_27eedc:
    // 0x27eedc: 0x0  nop
    ctx->pc = 0x27eedcu;
    // NOP
label_27eee0:
    // 0x27eee0: 0x19098  .word       0x00019098                   # mult        $s2, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27eee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_27eee4:
    // 0x27eee4: 0x2cdc0  sll         $t9, $v0, 23
    ctx->pc = 0x27eee4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_27eee8:
    // 0x27eee8: 0x0  nop
    ctx->pc = 0x27eee8u;
    // NOP
label_27eeec:
    // 0x27eeec: 0x0  nop
    ctx->pc = 0x27eeecu;
    // NOP
label_27eef0:
    // 0x27eef0: 0x190f2  tlt         $zero, $at, 579
    ctx->pc = 0x27eef0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27eef4:
    // 0x27eef4: 0x300d0  .word       0x000300D0                   # mfhi        $zero # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27eef4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27eef8:
    // 0x27eef8: 0x0  nop
    ctx->pc = 0x27eef8u;
    // NOP
label_27eefc:
    // 0x27eefc: 0x0  nop
    ctx->pc = 0x27eefcu;
    // NOP
label_27ef00:
    // 0x27ef00: 0x19153  .word       0x00019153                   # mtlo        $zero # 00019140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef00u;
    ctx->lo = GPR_U64(ctx, 0);
label_27ef04:
    // 0x27ef04: 0x2b7b0  tge         $zero, $v0, 734
    ctx->pc = 0x27ef04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ef08:
    // 0x27ef08: 0x0  nop
    ctx->pc = 0x27ef08u;
    // NOP
label_27ef0c:
    // 0x27ef0c: 0x0  nop
    ctx->pc = 0x27ef0cu;
    // NOP
label_27ef10:
    // 0x27ef10: 0x191aa  .word       0x000191AA                   # slt         $s2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef10u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27ef14:
    // 0x27ef14: 0x2fbe0  .word       0x0002FBE0                   # add         $ra, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_27ef18:
    // 0x27ef18: 0x0  nop
    ctx->pc = 0x27ef18u;
    // NOP
label_27ef1c:
    // 0x27ef1c: 0x0  nop
    ctx->pc = 0x27ef1cu;
    // NOP
label_27ef20:
    // 0x27ef20: 0x1920a  .word       0x0001920A                   # movz        $s2, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_27ef24:
    // 0x27ef24: 0x2c580  sll         $t8, $v0, 22
    ctx->pc = 0x27ef24u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
label_27ef28:
    // 0x27ef28: 0x0  nop
    ctx->pc = 0x27ef28u;
    // NOP
label_27ef2c:
    // 0x27ef2c: 0x0  nop
    ctx->pc = 0x27ef2cu;
    // NOP
label_27ef30:
    // 0x27ef30: 0x19263  .word       0x00019263                   # negu        $s2, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ef34:
    // 0x27ef34: 0x270b0  tge         $zero, $v0, 450
    ctx->pc = 0x27ef34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ef38:
    // 0x27ef38: 0x0  nop
    ctx->pc = 0x27ef38u;
    // NOP
label_27ef3c:
    // 0x27ef3c: 0x0  nop
    ctx->pc = 0x27ef3cu;
    // NOP
label_27ef40:
    // 0x27ef40: 0x192b2  tlt         $zero, $at, 586
    ctx->pc = 0x27ef40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ef44:
    // 0x27ef44: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x27ef44u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27ef48:
    // 0x27ef48: 0x0  nop
    ctx->pc = 0x27ef48u;
    // NOP
label_27ef4c:
    // 0x27ef4c: 0x0  nop
    ctx->pc = 0x27ef4cu;
    // NOP
label_27ef50:
    // 0x27ef50: 0x1930a  .word       0x0001930A                   # movz        $s2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef50u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_27ef54:
    // 0x27ef54: 0x25d00  sll         $t3, $v0, 20
    ctx->pc = 0x27ef54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_27ef58:
    // 0x27ef58: 0x0  nop
    ctx->pc = 0x27ef58u;
    // NOP
label_27ef5c:
    // 0x27ef5c: 0x0  nop
    ctx->pc = 0x27ef5cu;
    // NOP
label_27ef60:
    // 0x27ef60: 0x19356  .word       0x00019356                   # dsrlv       $s2, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ef64:
    // 0x27ef64: 0x25fd0  .word       0x00025FD0                   # mfhi        $t3 # 000207C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27ef68:
    // 0x27ef68: 0x0  nop
    ctx->pc = 0x27ef68u;
    // NOP
label_27ef6c:
    // 0x27ef6c: 0x0  nop
    ctx->pc = 0x27ef6cu;
    // NOP
label_27ef70:
    // 0x27ef70: 0x193a2  .word       0x000193A2                   # neg         $s2, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_27ef74:
    // 0x27ef74: 0x29fe0  .word       0x00029FE0                   # add         $s3, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27ef78:
    // 0x27ef78: 0x0  nop
    ctx->pc = 0x27ef78u;
    // NOP
label_27ef7c:
    // 0x27ef7c: 0x0  nop
    ctx->pc = 0x27ef7cu;
    // NOP
label_27ef80:
    // 0x27ef80: 0x193f6  tne         $zero, $at, 591
    ctx->pc = 0x27ef80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ef84:
    // 0x27ef84: 0x25cd0  .word       0x00025CD0                   # mfhi        $t3 # 000204C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27ef88:
    // 0x27ef88: 0x0  nop
    ctx->pc = 0x27ef88u;
    // NOP
label_27ef8c:
    // 0x27ef8c: 0x0  nop
    ctx->pc = 0x27ef8cu;
    // NOP
label_27ef90:
    // 0x27ef90: 0x19442  srl         $s2, $at, 17
    ctx->pc = 0x27ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 1), 17));
label_27ef94:
    // 0x27ef94: 0x29fe0  .word       0x00029FE0                   # add         $s3, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ef94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27ef98:
    // 0x27ef98: 0x0  nop
    ctx->pc = 0x27ef98u;
    // NOP
label_27ef9c:
    // 0x27ef9c: 0x0  nop
    ctx->pc = 0x27ef9cu;
    // NOP
label_27efa0:
    // 0x27efa0: 0x19496  .word       0x00019496                   # dsrlv       $s2, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27efa4:
    // 0x27efa4: 0x30510  .word       0x00030510                   # mfhi        $zero # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efa4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27efa8:
    // 0x27efa8: 0x0  nop
    ctx->pc = 0x27efa8u;
    // NOP
label_27efac:
    // 0x27efac: 0x0  nop
    ctx->pc = 0x27efacu;
    // NOP
label_27efb0:
    // 0x27efb0: 0x194f7  .word       0x000194F7                   # INVALID     $zero, $at, -0x6B09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27EFB0 raw=0x000194F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27efb4:
    // 0x27efb4: 0x1fbb0  tge         $zero, $at, 1006
    ctx->pc = 0x27efb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27efb8:
    // 0x27efb8: 0x0  nop
    ctx->pc = 0x27efb8u;
    // NOP
label_27efbc:
    // 0x27efbc: 0x0  nop
    ctx->pc = 0x27efbcu;
    // NOP
label_27efc0:
    // 0x27efc0: 0x19537  .word       0x00019537                   # INVALID     $zero, $at, -0x6AC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27EFC0 raw=0x00019537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27efc4:
    // 0x27efc4: 0x286b0  tge         $zero, $v0, 538
    ctx->pc = 0x27efc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27efc8:
    // 0x27efc8: 0x0  nop
    ctx->pc = 0x27efc8u;
    // NOP
label_27efcc:
    // 0x27efcc: 0x0  nop
    ctx->pc = 0x27efccu;
    // NOP
label_27efd0:
    // 0x27efd0: 0x19588  .word       0x00019588                   # jr          $zero # 00019580 <InstrIdType: CPU_SPECIAL>
label_27efd4:
    if (ctx->pc == 0x27EFD4u) {
        ctx->pc = 0x27EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD0u;
        // 0x27efd4: 0x26c40  sll         $t5, $v0, 17 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EFD8u;
        goto label_27efd8;
    }
    ctx->pc = 0x27EFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD0u;
        // 0x27efd4: 0x26c40  sll         $t5, $v0, 17 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27EFD8u;
label_27efd8:
    // 0x27efd8: 0x0  nop
    ctx->pc = 0x27efd8u;
    // NOP
label_27efdc:
    // 0x27efdc: 0x0  nop
    ctx->pc = 0x27efdcu;
    // NOP
label_27efe0:
    // 0x27efe0: 0x195d6  .word       0x000195D6                   # dsrlv       $s2, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27efe4:
    // 0x27efe4: 0x28b90  .word       0x00028B90                   # mfhi        $s1 # 00020380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27efe4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27efe8:
    // 0x27efe8: 0x0  nop
    ctx->pc = 0x27efe8u;
    // NOP
label_27efec:
    // 0x27efec: 0x0  nop
    ctx->pc = 0x27efecu;
    // NOP
label_27eff0:
    // 0x27eff0: 0x19628  .word       0x00019628                   # mfsa        $s2 # 00010600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27eff0u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_27eff4:
    // 0x27eff4: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x27eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_27eff8:
    // 0x27eff8: 0x0  nop
    ctx->pc = 0x27eff8u;
    // NOP
label_27effc:
    // 0x27effc: 0x0  nop
    ctx->pc = 0x27effcu;
    // NOP
label_27f000:
    // 0x27f000: 0x1968f  .word       0x0001968F                   # sync.p # 00019000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f000u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27f004:
    // 0x27f004: 0x31250  .word       0x00031250                   # mfhi        $v0 # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f004u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27f008:
    // 0x27f008: 0x0  nop
    ctx->pc = 0x27f008u;
    // NOP
label_27f00c:
    // 0x27f00c: 0x0  nop
    ctx->pc = 0x27f00cu;
    // NOP
label_27f010:
    // 0x27f010: 0x196f2  tlt         $zero, $at, 603
    ctx->pc = 0x27f010u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f014:
    // 0x27f014: 0x249b0  tge         $zero, $v0, 294
    ctx->pc = 0x27f014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f018:
    // 0x27f018: 0x0  nop
    ctx->pc = 0x27f018u;
    // NOP
label_27f01c:
    // 0x27f01c: 0x0  nop
    ctx->pc = 0x27f01cu;
    // NOP
label_27f020:
    // 0x27f020: 0x1973c  dsll32      $s2, $at, 28
    ctx->pc = 0x27f020u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) << (32 + 28));
label_27f024:
    // 0x27f024: 0x29700  sll         $s2, $v0, 28
    ctx->pc = 0x27f024u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
label_27f028:
    // 0x27f028: 0x0  nop
    ctx->pc = 0x27f028u;
    // NOP
label_27f02c:
    // 0x27f02c: 0x0  nop
    ctx->pc = 0x27f02cu;
    // NOP
label_27f030:
    // 0x27f030: 0x1978f  .word       0x0001978F                   # sync.p # 00019000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27f034:
    // 0x27f034: 0x33630  tge         $zero, $v1, 216
    ctx->pc = 0x27f034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f038:
    // 0x27f038: 0x0  nop
    ctx->pc = 0x27f038u;
    // NOP
label_27f03c:
    // 0x27f03c: 0x0  nop
    ctx->pc = 0x27f03cu;
    // NOP
label_27f040:
    // 0x27f040: 0x197f6  tne         $zero, $at, 607
    ctx->pc = 0x27f040u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f044:
    // 0x27f044: 0x21390  .word       0x00021390                   # mfhi        $v0 # 00020380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f044u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27f048:
    // 0x27f048: 0x0  nop
    ctx->pc = 0x27f048u;
    // NOP
label_27f04c:
    // 0x27f04c: 0x0  nop
    ctx->pc = 0x27f04cu;
    // NOP
label_27f050:
    // 0x27f050: 0x19839  .word       0x00019839                   # INVALID     $zero, $at, -0x67C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F050 raw=0x00019839"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f054:
    // 0x27f054: 0x241a0  .word       0x000241A0                   # add         $t0, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27f058:
    // 0x27f058: 0x0  nop
    ctx->pc = 0x27f058u;
    // NOP
label_27f05c:
    // 0x27f05c: 0x0  nop
    ctx->pc = 0x27f05cu;
    // NOP
label_27f060:
    // 0x27f060: 0x19882  srl         $s3, $at, 2
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 1), 2));
label_27f064:
    // 0x27f064: 0x27e00  sll         $t7, $v0, 24
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_27f068:
    // 0x27f068: 0x0  nop
    ctx->pc = 0x27f068u;
    // NOP
label_27f06c:
    // 0x27f06c: 0x0  nop
    ctx->pc = 0x27f06cu;
    // NOP
label_27f070:
    // 0x27f070: 0x198d2  .word       0x000198D2                   # mflo        $s3 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f070u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_27f074:
    // 0x27f074: 0x28d70  tge         $zero, $v0, 565
    ctx->pc = 0x27f074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f078:
    // 0x27f078: 0x0  nop
    ctx->pc = 0x27f078u;
    // NOP
label_27f07c:
    // 0x27f07c: 0x0  nop
    ctx->pc = 0x27f07cu;
    // NOP
label_27f080:
    // 0x27f080: 0x19924  .word       0x00019924                   # and         $s3, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f080u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27f084:
    // 0x27f084: 0x2d5e0  .word       0x0002D5E0                   # add         $k0, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27f088:
    // 0x27f088: 0x0  nop
    ctx->pc = 0x27f088u;
    // NOP
label_27f08c:
    // 0x27f08c: 0x0  nop
    ctx->pc = 0x27f08cu;
    // NOP
label_27f090:
    // 0x27f090: 0x1997f  dsra32      $s3, $at, 5
    ctx->pc = 0x27f090u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 1) >> (32 + 5));
label_27f094:
    // 0x27f094: 0x30450  .word       0x00030450                   # mfhi        $zero # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f094u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27f098:
    // 0x27f098: 0x0  nop
    ctx->pc = 0x27f098u;
    // NOP
label_27f09c:
    // 0x27f09c: 0x0  nop
    ctx->pc = 0x27f09cu;
    // NOP
label_27f0a0:
    // 0x27f0a0: 0x199e0  .word       0x000199E0                   # add         $s3, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f0a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27f0a4:
    // 0x27f0a4: 0x31f50  .word       0x00031F50                   # mfhi        $v1 # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f0a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    ctx->pc = 0x27f0a8u;
    return;
}

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


void FUN_0014eba0_part656(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9d4u: goto label_28e9d4;
        case 0x28e9d8u: goto label_28e9d8;
        case 0x28e9dcu: goto label_28e9dc;
        case 0x28e9e0u: goto label_28e9e0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9e8u: goto label_28e9e8;
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28e9f4u: goto label_28e9f4;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28e9fcu: goto label_28e9fc;
        case 0x28ea00u: goto label_28ea00;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea0cu: goto label_28ea0c;
        case 0x28ea10u: goto label_28ea10;
        case 0x28ea14u: goto label_28ea14;
        case 0x28ea18u: goto label_28ea18;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea24u: goto label_28ea24;
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea2cu: goto label_28ea2c;
        case 0x28ea30u: goto label_28ea30;
        case 0x28ea34u: goto label_28ea34;
        case 0x28ea38u: goto label_28ea38;
        case 0x28ea3cu: goto label_28ea3c;
        case 0x28ea40u: goto label_28ea40;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea48u: goto label_28ea48;
        case 0x28ea4cu: goto label_28ea4c;
        case 0x28ea50u: goto label_28ea50;
        case 0x28ea54u: goto label_28ea54;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea5cu: goto label_28ea5c;
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea68u: goto label_28ea68;
        case 0x28ea6cu: goto label_28ea6c;
        case 0x28ea70u: goto label_28ea70;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea7cu: goto label_28ea7c;
        case 0x28ea80u: goto label_28ea80;
        case 0x28ea84u: goto label_28ea84;
        case 0x28ea88u: goto label_28ea88;
        case 0x28ea8cu: goto label_28ea8c;
        case 0x28ea90u: goto label_28ea90;
        case 0x28ea94u: goto label_28ea94;
        case 0x28ea98u: goto label_28ea98;
        case 0x28ea9cu: goto label_28ea9c;
        case 0x28eaa0u: goto label_28eaa0;
        case 0x28eaa4u: goto label_28eaa4;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eaacu: goto label_28eaac;
        case 0x28eab0u: goto label_28eab0;
        case 0x28eab4u: goto label_28eab4;
        case 0x28eab8u: goto label_28eab8;
        case 0x28eabcu: goto label_28eabc;
        case 0x28eac0u: goto label_28eac0;
        case 0x28eac4u: goto label_28eac4;
        case 0x28eac8u: goto label_28eac8;
        case 0x28eaccu: goto label_28eacc;
        case 0x28ead0u: goto label_28ead0;
        case 0x28ead4u: goto label_28ead4;
        case 0x28ead8u: goto label_28ead8;
        case 0x28eadcu: goto label_28eadc;
        case 0x28eae0u: goto label_28eae0;
        case 0x28eae4u: goto label_28eae4;
        case 0x28eae8u: goto label_28eae8;
        case 0x28eaecu: goto label_28eaec;
        case 0x28eaf0u: goto label_28eaf0;
        case 0x28eaf4u: goto label_28eaf4;
        case 0x28eaf8u: goto label_28eaf8;
        case 0x28eafcu: goto label_28eafc;
        case 0x28eb00u: goto label_28eb00;
        case 0x28eb04u: goto label_28eb04;
        case 0x28eb08u: goto label_28eb08;
        case 0x28eb0cu: goto label_28eb0c;
        case 0x28eb10u: goto label_28eb10;
        case 0x28eb14u: goto label_28eb14;
        case 0x28eb18u: goto label_28eb18;
        case 0x28eb1cu: goto label_28eb1c;
        case 0x28eb20u: goto label_28eb20;
        case 0x28eb24u: goto label_28eb24;
        case 0x28eb28u: goto label_28eb28;
        case 0x28eb2cu: goto label_28eb2c;
        case 0x28eb30u: goto label_28eb30;
        case 0x28eb34u: goto label_28eb34;
        case 0x28eb38u: goto label_28eb38;
        case 0x28eb3cu: goto label_28eb3c;
        case 0x28eb40u: goto label_28eb40;
        case 0x28eb44u: goto label_28eb44;
        case 0x28eb48u: goto label_28eb48;
        case 0x28eb4cu: goto label_28eb4c;
        case 0x28eb50u: goto label_28eb50;
        case 0x28eb54u: goto label_28eb54;
        case 0x28eb58u: goto label_28eb58;
        case 0x28eb5cu: goto label_28eb5c;
        case 0x28eb60u: goto label_28eb60;
        case 0x28eb64u: goto label_28eb64;
        case 0x28eb68u: goto label_28eb68;
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eb70u: goto label_28eb70;
        case 0x28eb74u: goto label_28eb74;
        case 0x28eb78u: goto label_28eb78;
        case 0x28eb7cu: goto label_28eb7c;
        case 0x28eb80u: goto label_28eb80;
        case 0x28eb84u: goto label_28eb84;
        case 0x28eb88u: goto label_28eb88;
        case 0x28eb8cu: goto label_28eb8c;
        case 0x28eb90u: goto label_28eb90;
        case 0x28eb94u: goto label_28eb94;
        case 0x28eb98u: goto label_28eb98;
        case 0x28eb9cu: goto label_28eb9c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28eba4u: goto label_28eba4;
        case 0x28eba8u: goto label_28eba8;
        case 0x28ebacu: goto label_28ebac;
        case 0x28ebb0u: goto label_28ebb0;
        case 0x28ebb4u: goto label_28ebb4;
        case 0x28ebb8u: goto label_28ebb8;
        case 0x28ebbcu: goto label_28ebbc;
        case 0x28ebc0u: goto label_28ebc0;
        case 0x28ebc4u: goto label_28ebc4;
        case 0x28ebc8u: goto label_28ebc8;
        case 0x28ebccu: goto label_28ebcc;
        case 0x28ebd0u: goto label_28ebd0;
        case 0x28ebd4u: goto label_28ebd4;
        case 0x28ebd8u: goto label_28ebd8;
        case 0x28ebdcu: goto label_28ebdc;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ebe4u: goto label_28ebe4;
        case 0x28ebe8u: goto label_28ebe8;
        case 0x28ebecu: goto label_28ebec;
        case 0x28ebf0u: goto label_28ebf0;
        case 0x28ebf4u: goto label_28ebf4;
        case 0x28ebf8u: goto label_28ebf8;
        case 0x28ebfcu: goto label_28ebfc;
        case 0x28ec00u: goto label_28ec00;
        case 0x28ec04u: goto label_28ec04;
        case 0x28ec08u: goto label_28ec08;
        case 0x28ec0cu: goto label_28ec0c;
        case 0x28ec10u: goto label_28ec10;
        case 0x28ec14u: goto label_28ec14;
        case 0x28ec18u: goto label_28ec18;
        case 0x28ec1cu: goto label_28ec1c;
        case 0x28ec20u: goto label_28ec20;
        case 0x28ec24u: goto label_28ec24;
        case 0x28ec28u: goto label_28ec28;
        case 0x28ec2cu: goto label_28ec2c;
        case 0x28ec30u: goto label_28ec30;
        case 0x28ec34u: goto label_28ec34;
        case 0x28ec38u: goto label_28ec38;
        case 0x28ec3cu: goto label_28ec3c;
        case 0x28ec40u: goto label_28ec40;
        case 0x28ec44u: goto label_28ec44;
        case 0x28ec48u: goto label_28ec48;
        case 0x28ec4cu: goto label_28ec4c;
        case 0x28ec50u: goto label_28ec50;
        case 0x28ec54u: goto label_28ec54;
        case 0x28ec58u: goto label_28ec58;
        case 0x28ec5cu: goto label_28ec5c;
        case 0x28ec60u: goto label_28ec60;
        case 0x28ec64u: goto label_28ec64;
        case 0x28ec68u: goto label_28ec68;
        case 0x28ec6cu: goto label_28ec6c;
        case 0x28ec70u: goto label_28ec70;
        case 0x28ec74u: goto label_28ec74;
        case 0x28ec78u: goto label_28ec78;
        case 0x28ec7cu: goto label_28ec7c;
        case 0x28ec80u: goto label_28ec80;
        case 0x28ec84u: goto label_28ec84;
        case 0x28ec88u: goto label_28ec88;
        case 0x28ec8cu: goto label_28ec8c;
        case 0x28ec90u: goto label_28ec90;
        case 0x28ec94u: goto label_28ec94;
        case 0x28ec98u: goto label_28ec98;
        case 0x28ec9cu: goto label_28ec9c;
        case 0x28eca0u: goto label_28eca0;
        case 0x28eca4u: goto label_28eca4;
        case 0x28eca8u: goto label_28eca8;
        case 0x28ecacu: goto label_28ecac;
        case 0x28ecb0u: goto label_28ecb0;
        case 0x28ecb4u: goto label_28ecb4;
        case 0x28ecb8u: goto label_28ecb8;
        case 0x28ecbcu: goto label_28ecbc;
        case 0x28ecc0u: goto label_28ecc0;
        case 0x28ecc4u: goto label_28ecc4;
        case 0x28ecc8u: goto label_28ecc8;
        case 0x28ecccu: goto label_28eccc;
        case 0x28ecd0u: goto label_28ecd0;
        case 0x28ecd4u: goto label_28ecd4;
        case 0x28ecd8u: goto label_28ecd8;
        case 0x28ecdcu: goto label_28ecdc;
        case 0x28ece0u: goto label_28ece0;
        case 0x28ece4u: goto label_28ece4;
        case 0x28ece8u: goto label_28ece8;
        case 0x28ececu: goto label_28ecec;
        case 0x28ecf0u: goto label_28ecf0;
        case 0x28ecf4u: goto label_28ecf4;
        case 0x28ecf8u: goto label_28ecf8;
        case 0x28ecfcu: goto label_28ecfc;
        case 0x28ed00u: goto label_28ed00;
        case 0x28ed04u: goto label_28ed04;
        case 0x28ed08u: goto label_28ed08;
        case 0x28ed0cu: goto label_28ed0c;
        case 0x28ed10u: goto label_28ed10;
        case 0x28ed14u: goto label_28ed14;
        case 0x28ed18u: goto label_28ed18;
        case 0x28ed1cu: goto label_28ed1c;
        case 0x28ed20u: goto label_28ed20;
        case 0x28ed24u: goto label_28ed24;
        case 0x28ed28u: goto label_28ed28;
        case 0x28ed2cu: goto label_28ed2c;
        case 0x28ed30u: goto label_28ed30;
        case 0x28ed34u: goto label_28ed34;
        case 0x28ed38u: goto label_28ed38;
        case 0x28ed3cu: goto label_28ed3c;
        case 0x28ed40u: goto label_28ed40;
        case 0x28ed44u: goto label_28ed44;
        case 0x28ed48u: goto label_28ed48;
        case 0x28ed4cu: goto label_28ed4c;
        case 0x28ed50u: goto label_28ed50;
        case 0x28ed54u: goto label_28ed54;
        case 0x28ed58u: goto label_28ed58;
        case 0x28ed5cu: goto label_28ed5c;
        case 0x28ed60u: goto label_28ed60;
        case 0x28ed64u: goto label_28ed64;
        case 0x28ed68u: goto label_28ed68;
        case 0x28ed6cu: goto label_28ed6c;
        case 0x28ed70u: goto label_28ed70;
        case 0x28ed74u: goto label_28ed74;
        case 0x28ed78u: goto label_28ed78;
        case 0x28ed7cu: goto label_28ed7c;
        case 0x28ed80u: goto label_28ed80;
        case 0x28ed84u: goto label_28ed84;
        case 0x28ed88u: goto label_28ed88;
        case 0x28ed8cu: goto label_28ed8c;
        case 0x28ed90u: goto label_28ed90;
        case 0x28ed94u: goto label_28ed94;
        case 0x28ed98u: goto label_28ed98;
        case 0x28ed9cu: goto label_28ed9c;
        case 0x28eda0u: goto label_28eda0;
        case 0x28eda4u: goto label_28eda4;
        case 0x28eda8u: goto label_28eda8;
        case 0x28edacu: goto label_28edac;
        case 0x28edb0u: goto label_28edb0;
        case 0x28edb4u: goto label_28edb4;
        case 0x28edb8u: goto label_28edb8;
        case 0x28edbcu: goto label_28edbc;
        case 0x28edc0u: goto label_28edc0;
        case 0x28edc4u: goto label_28edc4;
        case 0x28edc8u: goto label_28edc8;
        case 0x28edccu: goto label_28edcc;
        case 0x28edd0u: goto label_28edd0;
        case 0x28edd4u: goto label_28edd4;
        case 0x28edd8u: goto label_28edd8;
        case 0x28eddcu: goto label_28eddc;
        case 0x28ede0u: goto label_28ede0;
        case 0x28ede4u: goto label_28ede4;
        case 0x28ede8u: goto label_28ede8;
        case 0x28edecu: goto label_28edec;
        case 0x28edf0u: goto label_28edf0;
        case 0x28edf4u: goto label_28edf4;
        case 0x28edf8u: goto label_28edf8;
        case 0x28edfcu: goto label_28edfc;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee04u: goto label_28ee04;
        case 0x28ee08u: goto label_28ee08;
        case 0x28ee0cu: goto label_28ee0c;
        case 0x28ee10u: goto label_28ee10;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee18u: goto label_28ee18;
        case 0x28ee1cu: goto label_28ee1c;
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ee28u: goto label_28ee28;
        case 0x28ee2cu: goto label_28ee2c;
        case 0x28ee30u: goto label_28ee30;
        case 0x28ee34u: goto label_28ee34;
        case 0x28ee38u: goto label_28ee38;
        case 0x28ee3cu: goto label_28ee3c;
        case 0x28ee40u: goto label_28ee40;
        case 0x28ee44u: goto label_28ee44;
        case 0x28ee48u: goto label_28ee48;
        case 0x28ee4cu: goto label_28ee4c;
        case 0x28ee50u: goto label_28ee50;
        case 0x28ee54u: goto label_28ee54;
        case 0x28ee58u: goto label_28ee58;
        case 0x28ee5cu: goto label_28ee5c;
        case 0x28ee60u: goto label_28ee60;
        case 0x28ee64u: goto label_28ee64;
        case 0x28ee68u: goto label_28ee68;
        case 0x28ee6cu: goto label_28ee6c;
        case 0x28ee70u: goto label_28ee70;
        case 0x28ee74u: goto label_28ee74;
        case 0x28ee78u: goto label_28ee78;
        case 0x28ee7cu: goto label_28ee7c;
        case 0x28ee80u: goto label_28ee80;
        case 0x28ee84u: goto label_28ee84;
        case 0x28ee88u: goto label_28ee88;
        case 0x28ee8cu: goto label_28ee8c;
        case 0x28ee90u: goto label_28ee90;
        case 0x28ee94u: goto label_28ee94;
        case 0x28ee98u: goto label_28ee98;
        case 0x28ee9cu: goto label_28ee9c;
        case 0x28eea0u: goto label_28eea0;
        case 0x28eea4u: goto label_28eea4;
        case 0x28eea8u: goto label_28eea8;
        case 0x28eeacu: goto label_28eeac;
        case 0x28eeb0u: goto label_28eeb0;
        case 0x28eeb4u: goto label_28eeb4;
        case 0x28eeb8u: goto label_28eeb8;
        case 0x28eebcu: goto label_28eebc;
        case 0x28eec0u: goto label_28eec0;
        case 0x28eec4u: goto label_28eec4;
        case 0x28eec8u: goto label_28eec8;
        case 0x28eeccu: goto label_28eecc;
        case 0x28eed0u: goto label_28eed0;
        case 0x28eed4u: goto label_28eed4;
        case 0x28eed8u: goto label_28eed8;
        case 0x28eedcu: goto label_28eedc;
        case 0x28eee0u: goto label_28eee0;
        case 0x28eee4u: goto label_28eee4;
        case 0x28eee8u: goto label_28eee8;
        case 0x28eeecu: goto label_28eeec;
        case 0x28eef0u: goto label_28eef0;
        case 0x28eef4u: goto label_28eef4;
        case 0x28eef8u: goto label_28eef8;
        case 0x28eefcu: goto label_28eefc;
        case 0x28ef00u: goto label_28ef00;
        case 0x28ef04u: goto label_28ef04;
        case 0x28ef08u: goto label_28ef08;
        case 0x28ef0cu: goto label_28ef0c;
        case 0x28ef10u: goto label_28ef10;
        case 0x28ef14u: goto label_28ef14;
        case 0x28ef18u: goto label_28ef18;
        case 0x28ef1cu: goto label_28ef1c;
        case 0x28ef20u: goto label_28ef20;
        case 0x28ef24u: goto label_28ef24;
        case 0x28ef28u: goto label_28ef28;
        case 0x28ef2cu: goto label_28ef2c;
        case 0x28ef30u: goto label_28ef30;
        case 0x28ef34u: goto label_28ef34;
        case 0x28ef38u: goto label_28ef38;
        case 0x28ef3cu: goto label_28ef3c;
        case 0x28ef40u: goto label_28ef40;
        case 0x28ef44u: goto label_28ef44;
        case 0x28ef48u: goto label_28ef48;
        case 0x28ef4cu: goto label_28ef4c;
        case 0x28ef50u: goto label_28ef50;
        case 0x28ef54u: goto label_28ef54;
        case 0x28ef58u: goto label_28ef58;
        case 0x28ef5cu: goto label_28ef5c;
        case 0x28ef60u: goto label_28ef60;
        case 0x28ef64u: goto label_28ef64;
        case 0x28ef68u: goto label_28ef68;
        case 0x28ef6cu: goto label_28ef6c;
        case 0x28ef70u: goto label_28ef70;
        case 0x28ef74u: goto label_28ef74;
        case 0x28ef78u: goto label_28ef78;
        case 0x28ef7cu: goto label_28ef7c;
        case 0x28ef80u: goto label_28ef80;
        case 0x28ef84u: goto label_28ef84;
        case 0x28ef88u: goto label_28ef88;
        case 0x28ef8cu: goto label_28ef8c;
        case 0x28ef90u: goto label_28ef90;
        case 0x28ef94u: goto label_28ef94;
        case 0x28ef98u: goto label_28ef98;
        case 0x28ef9cu: goto label_28ef9c;
        case 0x28efa0u: goto label_28efa0;
        case 0x28efa4u: goto label_28efa4;
        case 0x28efa8u: goto label_28efa8;
        case 0x28efacu: goto label_28efac;
        case 0x28efb0u: goto label_28efb0;
        case 0x28efb4u: goto label_28efb4;
        case 0x28efb8u: goto label_28efb8;
        case 0x28efbcu: goto label_28efbc;
        case 0x28efc0u: goto label_28efc0;
        case 0x28efc4u: goto label_28efc4;
        case 0x28efc8u: goto label_28efc8;
        case 0x28efccu: goto label_28efcc;
        case 0x28efd0u: goto label_28efd0;
        case 0x28efd4u: goto label_28efd4;
        case 0x28efd8u: goto label_28efd8;
        case 0x28efdcu: goto label_28efdc;
        case 0x28efe0u: goto label_28efe0;
        case 0x28efe4u: goto label_28efe4;
        case 0x28efe8u: goto label_28efe8;
        case 0x28efecu: goto label_28efec;
        case 0x28eff0u: goto label_28eff0;
        case 0x28eff4u: goto label_28eff4;
        case 0x28eff8u: goto label_28eff8;
        case 0x28effcu: goto label_28effc;
        case 0x28f000u: goto label_28f000;
        case 0x28f004u: goto label_28f004;
        case 0x28f008u: goto label_28f008;
        case 0x28f00cu: goto label_28f00c;
        case 0x28f010u: goto label_28f010;
        case 0x28f014u: goto label_28f014;
        case 0x28f018u: goto label_28f018;
        case 0x28f01cu: goto label_28f01c;
        case 0x28f020u: goto label_28f020;
        case 0x28f024u: goto label_28f024;
        case 0x28f028u: goto label_28f028;
        case 0x28f02cu: goto label_28f02c;
        case 0x28f030u: goto label_28f030;
        case 0x28f034u: goto label_28f034;
        case 0x28f038u: goto label_28f038;
        case 0x28f03cu: goto label_28f03c;
        case 0x28f040u: goto label_28f040;
        case 0x28f044u: goto label_28f044;
        case 0x28f048u: goto label_28f048;
        case 0x28f04cu: goto label_28f04c;
        case 0x28f050u: goto label_28f050;
        case 0x28f054u: goto label_28f054;
        case 0x28f058u: goto label_28f058;
        case 0x28f05cu: goto label_28f05c;
        case 0x28f060u: goto label_28f060;
        case 0x28f064u: goto label_28f064;
        case 0x28f068u: goto label_28f068;
        case 0x28f06cu: goto label_28f06c;
        case 0x28f070u: goto label_28f070;
        case 0x28f074u: goto label_28f074;
        case 0x28f078u: goto label_28f078;
        case 0x28f07cu: goto label_28f07c;
        case 0x28f080u: goto label_28f080;
        case 0x28f084u: goto label_28f084;
        case 0x28f088u: goto label_28f088;
        case 0x28f08cu: goto label_28f08c;
        case 0x28f090u: goto label_28f090;
        case 0x28f094u: goto label_28f094;
        case 0x28f098u: goto label_28f098;
        case 0x28f09cu: goto label_28f09c;
        default: return;
    }

label_28e8d0:
    // 0x28e8d0: 0x717  .word       0x00000717                   # dsrav       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e8d4:
    // 0x28e8d4: 0x71b  .word       0x0000071B                   # divu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e8d8:
    // 0x28e8d8: 0x71f  .word       0x0000071F                   # ddivu       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E8D8 raw=0x0000071F");
 /* MITIGATED */
label_28e8dc:
    // 0x28e8dc: 0x723  .word       0x00000723                   # negu        $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e8e0:
    // 0x28e8e0: 0x727  .word       0x00000727                   # not         $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e8e4:
    // 0x28e8e4: 0x72b  .word       0x0000072B                   # sltu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e8e8:
    // 0x28e8e8: 0x72f  .word       0x0000072F                   # dsubu       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e8ec:
    // 0x28e8ec: 0x733  tltu        $zero, $zero, 28
    ctx->pc = 0x28e8ecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e8f0:
    // 0x28e8f0: 0x737  .word       0x00000737                   # INVALID     $zero, $zero, 0x737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E8F0 raw=0x00000737");
 /* MITIGATED */
label_28e8f4:
    // 0x28e8f4: 0x73b  dsra        $zero, $zero, 28
    ctx->pc = 0x28e8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 28);
label_28e8f8:
    // 0x28e8f8: 0x73f  dsra32      $zero, $zero, 28
    ctx->pc = 0x28e8f8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 28));
label_28e8fc:
    // 0x28e8fc: 0x743  sra         $zero, $zero, 29
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_28e900:
    // 0x28e900: 0x747  .word       0x00000747                   # srav        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e904:
    // 0x28e904: 0x74b  .word       0x0000074B                   # movn        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e904u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28e908:
    // 0x28e908: 0x74f  sync.p
    ctx->pc = 0x28e908u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e90c:
    // 0x28e90c: 0x753  .word       0x00000753                   # mtlo        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e90cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e910:
    // 0x28e910: 0x757  .word       0x00000757                   # dsrav       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e910u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e914:
    // 0x28e914: 0x75b  .word       0x0000075B                   # divu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e914u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e918:
    // 0x28e918: 0x75f  .word       0x0000075F                   # ddivu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e918u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E918 raw=0x0000075F");
 /* MITIGATED */
label_28e91c:
    // 0x28e91c: 0x763  .word       0x00000763                   # negu        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e920:
    // 0x28e920: 0x767  .word       0x00000767                   # not         $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e920u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e924:
    // 0x28e924: 0x76b  .word       0x0000076B                   # sltu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e924u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e928:
    // 0x28e928: 0x76f  .word       0x0000076F                   # dsubu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e92c:
    // 0x28e92c: 0x773  tltu        $zero, $zero, 29
    ctx->pc = 0x28e92cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e930:
    // 0x28e930: 0x777  .word       0x00000777                   # INVALID     $zero, $zero, 0x777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e930u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E930 raw=0x00000777");
 /* MITIGATED */
label_28e934:
    // 0x28e934: 0x77b  dsra        $zero, $zero, 29
    ctx->pc = 0x28e934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 29);
label_28e938:
    // 0x28e938: 0x77f  dsra32      $zero, $zero, 29
    ctx->pc = 0x28e938u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 29));
label_28e93c:
    // 0x28e93c: 0x783  sra         $zero, $zero, 30
    ctx->pc = 0x28e93cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 30));
label_28e940:
    // 0x28e940: 0x787  .word       0x00000787                   # srav        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e944:
    // 0x28e944: 0x78b  .word       0x0000078B                   # movn        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e944u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28e948:
    // 0x28e948: 0x78f  sync.p
    ctx->pc = 0x28e948u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e94c:
    // 0x28e94c: 0x793  .word       0x00000793                   # mtlo        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e94cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e950:
    // 0x28e950: 0x797  .word       0x00000797                   # dsrav       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e950u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e954:
    // 0x28e954: 0x79b  .word       0x0000079B                   # divu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e954u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e958:
    // 0x28e958: 0x79f  .word       0x0000079F                   # ddivu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e958u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E958 raw=0x0000079F");
 /* MITIGATED */
label_28e95c:
    // 0x28e95c: 0x7a3  .word       0x000007A3                   # negu        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e95cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e960:
    // 0x28e960: 0x7a7  .word       0x000007A7                   # not         $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e960u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e964:
    // 0x28e964: 0x7ab  .word       0x000007AB                   # sltu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e964u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e968:
    // 0x28e968: 0x7af  .word       0x000007AF                   # dsubu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e968u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e96c:
    // 0x28e96c: 0x7b3  tltu        $zero, $zero, 30
    ctx->pc = 0x28e96cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e970:
    // 0x28e970: 0xa47  .word       0x00000A47                   # srav        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e970u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e974:
    // 0x28e974: 0xa4b  .word       0x00000A4B                   # movn        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e974u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e978:
    // 0x28e978: 0xa4f  .word       0x00000A4F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e978u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e97c:
    // 0x28e97c: 0xa53  .word       0x00000A53                   # mtlo        $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e97cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e980:
    // 0x28e980: 0xa57  .word       0x00000A57                   # dsrav       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e980u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e984:
    // 0x28e984: 0xa5b  .word       0x00000A5B                   # divu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e984u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e988:
    // 0x28e988: 0xa5f  .word       0x00000A5F                   # ddivu       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e988u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E988 raw=0x00000A5F");
 /* MITIGATED */
label_28e98c:
    // 0x28e98c: 0xa63  .word       0x00000A63                   # negu        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e990:
    // 0x28e990: 0xa67  .word       0x00000A67                   # not         $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e990u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e994:
    // 0x28e994: 0xa6b  .word       0x00000A6B                   # sltu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e994u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e998:
    // 0x28e998: 0xa6f  .word       0x00000A6F                   # dsubu       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e99c:
    // 0x28e99c: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x28e99cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e9a0:
    // 0x28e9a0: 0xa77  .word       0x00000A77                   # INVALID     $zero, $zero, 0xA77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E9A0 raw=0x00000A77");
 /* MITIGATED */
label_28e9a4:
    // 0x28e9a4: 0xa7b  dsra        $at, $zero, 9
    ctx->pc = 0x28e9a4u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 9);
label_28e9a8:
    // 0x28e9a8: 0xa7f  dsra32      $at, $zero, 9
    ctx->pc = 0x28e9a8u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 9));
label_28e9ac:
    // 0x28e9ac: 0xa83  sra         $at, $zero, 10
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 10));
label_28e9b0:
    // 0x28e9b0: 0xa87  .word       0x00000A87                   # srav        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e9b4:
    // 0x28e9b4: 0xa8b  .word       0x00000A8B                   # movn        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e9b8:
    // 0x28e9b8: 0xa8f  .word       0x00000A8F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e9bc:
    // 0x28e9bc: 0xa93  .word       0x00000A93                   # mtlo        $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9bcu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e9c0:
    // 0x28e9c0: 0xa97  .word       0x00000A97                   # dsrav       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e9c4:
    // 0x28e9c4: 0xa9b  .word       0x00000A9B                   # divu        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e9c8:
    // 0x28e9c8: 0xa9f  .word       0x00000A9F                   # ddivu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E9C8 raw=0x00000A9F");
 /* MITIGATED */
label_28e9cc:
    // 0x28e9cc: 0xaa3  .word       0x00000AA3                   # negu        $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e9d0:
    // 0x28e9d0: 0xaa7  .word       0x00000AA7                   # not         $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e9d4:
    // 0x28e9d4: 0xaab  .word       0x00000AAB                   # sltu        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e9d8:
    // 0x28e9d8: 0xaaf  .word       0x00000AAF                   # dsubu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e9dc:
    // 0x28e9dc: 0xab3  tltu        $zero, $zero, 42
    ctx->pc = 0x28e9dcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e9e0:
    // 0x28e9e0: 0xab7  .word       0x00000AB7                   # INVALID     $zero, $zero, 0xAB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E9E0 raw=0x00000AB7");
 /* MITIGATED */
label_28e9e4:
    // 0x28e9e4: 0xabb  dsra        $at, $zero, 10
    ctx->pc = 0x28e9e4u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 10);
label_28e9e8:
    // 0x28e9e8: 0xabf  dsra32      $at, $zero, 10
    ctx->pc = 0x28e9e8u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 10));
label_28e9ec:
    // 0x28e9ec: 0xac3  sra         $at, $zero, 11
    ctx->pc = 0x28e9ecu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 11));
label_28e9f0:
    // 0x28e9f0: 0xac7  .word       0x00000AC7                   # srav        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e9f4:
    // 0x28e9f4: 0xacb  .word       0x00000ACB                   # movn        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e9f8:
    // 0x28e9f8: 0xacf  .word       0x00000ACF                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e9fc:
    // 0x28e9fc: 0xad3  .word       0x00000AD3                   # mtlo        $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9fcu;
    ctx->lo = GPR_U64(ctx, 0);
label_28ea00:
    // 0x28ea00: 0xad7  .word       0x00000AD7                   # dsrav       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea00u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28ea04:
    // 0x28ea04: 0xadb  .word       0x00000ADB                   # divu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea04u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28ea08:
    // 0x28ea08: 0xadf  .word       0x00000ADF                   # ddivu       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea08u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28EA08 raw=0x00000ADF");
 /* MITIGATED */
label_28ea0c:
    // 0x28ea0c: 0xae3  .word       0x00000AE3                   # negu        $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28ea10:
    // 0x28ea10: 0xae7  .word       0x00000AE7                   # not         $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28ea14:
    // 0x28ea14: 0xaeb  .word       0x00000AEB                   # sltu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28ea18:
    // 0x28ea18: 0xaef  .word       0x00000AEF                   # dsubu       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28ea1c:
    // 0x28ea1c: 0xaf3  tltu        $zero, $zero, 43
    ctx->pc = 0x28ea1cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ea20:
    // 0x28ea20: 0xaf7  .word       0x00000AF7                   # INVALID     $zero, $zero, 0xAF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28EA20 raw=0x00000AF7");
 /* MITIGATED */
label_28ea24:
    // 0x28ea24: 0x0  nop
    ctx->pc = 0x28ea24u;
    // NOP
label_28ea28:
    // 0x28ea28: 0x0  nop
    ctx->pc = 0x28ea28u;
    // NOP
label_28ea2c:
    // 0x28ea2c: 0x0  nop
    ctx->pc = 0x28ea2cu;
    // NOP
label_28ea30:
    // 0x28ea30: 0x7010900  bgez        $t8, . + 4 + (0x900 << 2)
label_28ea34:
    if (ctx->pc == 0x28EA34u) {
        ctx->pc = 0x28EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA30u;
        // 0x28ea34: 0x9010901  j           func_4042404 (Delay Slot)
        // J 0x4042404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA38u;
        goto label_28ea38;
    }
    ctx->pc = 0x28EA30u;
    {
        const bool branch_taken_0x28ea30 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x28EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA30u;
        // 0x28ea34: 0x9010901  j           func_4042404 (Delay Slot)
        // J 0x4042404 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea30) {
            ctx->pc = 0x290E34u;
            { ctx->pc = 0x290e34; return; }
        }
    }
    ctx->pc = 0x28EA38u;
label_28ea38:
    // 0x28ea38: 0x9010701  j           func_4041C04
label_28ea3c:
    if (ctx->pc == 0x28EA3Cu) {
        ctx->pc = 0x28EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA38u;
        // 0x28ea3c: 0x9010701  j           func_4041C04 (Delay Slot)
        // J 0x4041C04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA40u;
        goto label_28ea40;
    }
    ctx->pc = 0x28EA38u;
    ctx->pc = 0x28EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA38u;
    // 0x28ea3c: 0x9010701  j           func_4041C04 (Delay Slot)
    // J 0x4041C04 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4041C04u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4041C04u, 0x28EA38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA40u;
label_28ea40:
    // 0x28ea40: 0x9010901  j           func_4042404
label_28ea44:
    if (ctx->pc == 0x28EA44u) {
        ctx->pc = 0x28EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA40u;
        // 0x28ea44: 0xb020b02  j           func_C082C08 (Delay Slot)
        // J 0xC082C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA48u;
        goto label_28ea48;
    }
    ctx->pc = 0x28EA40u;
    ctx->pc = 0x28EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA40u;
    // 0x28ea44: 0xb020b02  j           func_C082C08 (Delay Slot)
    // J 0xC082C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4042404u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4042404u, 0x28EA40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA48u;
label_28ea48:
    // 0x28ea48: 0xb020b02  j           func_C082C08
label_28ea4c:
    if (ctx->pc == 0x28EA4Cu) {
        ctx->pc = 0x28EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA48u;
        // 0x28ea4c: 0xb020b02  j           func_C082C08 (Delay Slot)
        // J 0xC082C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA50u;
        goto label_28ea50;
    }
    ctx->pc = 0x28EA48u;
    ctx->pc = 0x28EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA48u;
    // 0x28ea4c: 0xb020b02  j           func_C082C08 (Delay Slot)
    // J 0xC082C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC082C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC082C08u, 0x28EA48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA50u;
label_28ea50:
    // 0x28ea50: 0xb020b02  j           func_C082C08
label_28ea54:
    if (ctx->pc == 0x28EA54u) {
        ctx->pc = 0x28EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA50u;
        // 0x28ea54: 0x8030803  j           func_0C200C (Delay Slot)
        // J 0xC200C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA58u;
        goto label_28ea58;
    }
    ctx->pc = 0x28EA50u;
    ctx->pc = 0x28EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA50u;
    // 0x28ea54: 0x8030803  j           func_0C200C (Delay Slot)
    // J 0xC200C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC082C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC082C08u, 0x28EA50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA58u;
label_28ea58:
    // 0x28ea58: 0x8030803  j           func_0C200C
label_28ea5c:
    if (ctx->pc == 0x28EA5Cu) {
        ctx->pc = 0x28EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA58u;
        // 0x28ea5c: 0xf020803  jal         func_C08200C (Delay Slot)
        // JAL 0xC08200C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA60u;
        goto label_28ea60;
    }
    ctx->pc = 0x28EA58u;
    ctx->pc = 0x28EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA58u;
    // 0x28ea5c: 0xf020803  jal         func_C08200C (Delay Slot)
    // JAL 0xC08200C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC200Cu, 0x28EA58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0xf020f02  jal         func_C083C08
label_28ea64:
    if (ctx->pc == 0x28EA64u) {
        ctx->pc = 0x28EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA60u;
        // 0x28ea64: 0x9020902  j           func_4082408 (Delay Slot)
        // J 0x4082408 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA68u;
        goto label_28ea68;
    }
    ctx->pc = 0x28EA60u;
    SET_GPR_U32(ctx, 31, 0x28EA68u);
    ctx->pc = 0x28EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA60u;
    // 0x28ea64: 0x9020902  j           func_4082408 (Delay Slot)
    // J 0x4082408 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC083C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC083C08u, 0x28EA60u, 0x28EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA68u;
label_28ea68:
    // 0x28ea68: 0xf030f03  jal         func_C0C3C0C
label_28ea6c:
    if (ctx->pc == 0x28EA6Cu) {
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0xf030f03  jal         func_C0C3C0C (Delay Slot)
        // JAL 0xC0C3C0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA70u;
        goto label_28ea70;
    }
    ctx->pc = 0x28EA68u;
    SET_GPR_U32(ctx, 31, 0x28EA70u);
    ctx->pc = 0x28EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA68u;
    // 0x28ea6c: 0xf030f03  jal         func_C0C3C0C (Delay Slot)
    // JAL 0xC0C3C0C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3C0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3C0Cu, 0x28EA68u, 0x28EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA70u;
label_28ea70:
    // 0x28ea70: 0xf000f03  jal         func_C003C0C
label_28ea74:
    if (ctx->pc == 0x28EA74u) {
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0xf000f00  jal         func_C003C00 (Delay Slot)
        // JAL 0xC003C00 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA78u;
        goto label_28ea78;
    }
    ctx->pc = 0x28EA70u;
    SET_GPR_U32(ctx, 31, 0x28EA78u);
    ctx->pc = 0x28EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA70u;
    // 0x28ea74: 0xf000f00  jal         func_C003C00 (Delay Slot)
    // JAL 0xC003C00 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC003C0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC003C0Cu, 0x28EA70u, 0x28EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA78u;
label_28ea78:
    // 0x28ea78: 0xf000f00  jal         func_C003C00
label_28ea7c:
    if (ctx->pc == 0x28EA7Cu) {
        ctx->pc = 0x28EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA78u;
        // 0x28ea7c: 0xa000a00  j           func_8002800 (Delay Slot)
        // J 0x8002800 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA80u;
        goto label_28ea80;
    }
    ctx->pc = 0x28EA78u;
    SET_GPR_U32(ctx, 31, 0x28EA80u);
    ctx->pc = 0x28EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA78u;
    // 0x28ea7c: 0xa000a00  j           func_8002800 (Delay Slot)
    // J 0x8002800 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC003C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC003C00u, 0x28EA78u, 0x28EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA80u;
label_28ea80:
    // 0x28ea80: 0xa010a00  j           func_8042800
label_28ea84:
    if (ctx->pc == 0x28EA84u) {
        ctx->pc = 0x28EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA80u;
        // 0x28ea84: 0xa010a01  j           func_8042804 (Delay Slot)
        // J 0x8042804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA88u;
        goto label_28ea88;
    }
    ctx->pc = 0x28EA80u;
    ctx->pc = 0x28EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA80u;
    // 0x28ea84: 0xa010a01  j           func_8042804 (Delay Slot)
    // J 0x8042804 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8042800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8042800u, 0x28EA80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA88u;
label_28ea88:
    // 0x28ea88: 0xf020f02  jal         func_C083C08
label_28ea8c:
    if (ctx->pc == 0x28EA8Cu) {
        ctx->pc = 0x28EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA88u;
        // 0x28ea8c: 0xf020f02  jal         func_C083C08 (Delay Slot)
        // JAL 0xC083C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA90u;
        goto label_28ea90;
    }
    ctx->pc = 0x28EA88u;
    SET_GPR_U32(ctx, 31, 0x28EA90u);
    ctx->pc = 0x28EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA88u;
    // 0x28ea8c: 0xf020f02  jal         func_C083C08 (Delay Slot)
    // JAL 0xC083C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC083C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC083C08u, 0x28EA88u, 0x28EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA90u;
label_28ea90:
    // 0x28ea90: 0xf020f02  jal         func_C083C08
label_28ea94:
    if (ctx->pc == 0x28EA94u) {
        ctx->pc = 0x28EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA90u;
        // 0x28ea94: 0xa010902  j           func_8042408 (Delay Slot)
        // J 0x8042408 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA98u;
        goto label_28ea98;
    }
    ctx->pc = 0x28EA90u;
    SET_GPR_U32(ctx, 31, 0x28EA98u);
    ctx->pc = 0x28EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA90u;
    // 0x28ea94: 0xa010902  j           func_8042408 (Delay Slot)
    // J 0x8042408 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC083C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC083C08u, 0x28EA90u, 0x28EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA98u;
label_28ea98:
    // 0x28ea98: 0xa010a01  j           func_8042804
label_28ea9c:
    if (ctx->pc == 0x28EA9Cu) {
        ctx->pc = 0x28EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA98u;
        // 0x28ea9c: 0xa010a01  j           func_8042804 (Delay Slot)
        // J 0x8042804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAA0u;
        goto label_28eaa0;
    }
    ctx->pc = 0x28EA98u;
    ctx->pc = 0x28EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA98u;
    // 0x28ea9c: 0xa010a01  j           func_8042804 (Delay Slot)
    // J 0x8042804 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8042804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8042804u, 0x28EA98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EAA0u;
label_28eaa0:
    // 0x28eaa0: 0x9020902  j           func_4082408
label_28eaa4:
    if (ctx->pc == 0x28EAA4u) {
        ctx->pc = 0x28EAA8u;
        goto label_28eaa8;
    }
    ctx->pc = 0x28EAA0u;
    ctx->pc = 0x4082408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4082408u, 0x28EAA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EAA8u;
label_28eaa8:
    // 0x28eaa8: 0x0  nop
    ctx->pc = 0x28eaa8u;
    // NOP
label_28eaac:
    // 0x28eaac: 0x0  nop
    ctx->pc = 0x28eaacu;
    // NOP
label_28eab0:
    // 0x28eab0: 0x6d8  .word       0x000006D8                   # mult        $zero, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28eab4:
    // 0x28eab4: 0x6dc  .word       0x000006DC                   # dmult       $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eab4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EAB4 raw=0x000006DC");
 /* MITIGATED */
label_28eab8:
    // 0x28eab8: 0x6e0  .word       0x000006E0                   # add         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eab8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28eabc:
    // 0x28eabc: 0x6e4  .word       0x000006E4                   # and         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eabcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28eac0:
    // 0x28eac0: 0x6e8  .word       0x000006E8                   # mfsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eac0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28eac4:
    // 0x28eac4: 0x6ec  .word       0x000006EC                   # dadd        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eac4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28eac8:
    // 0x28eac8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x28eac8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eacc:
    // 0x28eacc: 0x6f4  teq         $zero, $zero, 27
    ctx->pc = 0x28eaccu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ead0:
    // 0x28ead0: 0x6f8  dsll        $zero, $zero, 27
    ctx->pc = 0x28ead0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 27);
label_28ead4:
    // 0x28ead4: 0x6fc  dsll32      $zero, $zero, 27
    ctx->pc = 0x28ead4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 27));
label_28ead8:
    // 0x28ead8: 0x700  sll         $zero, $zero, 28
    ctx->pc = 0x28ead8u;
    
label_28eadc:
    // 0x28eadc: 0x704  .word       0x00000704                   # sllv        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eadcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28eae0:
    // 0x28eae0: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_28eae4:
    if (ctx->pc == 0x28EAE4u) {
        ctx->pc = 0x28EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE0u;
        // 0x28eae4: 0x70c  syscall     28 (Delay Slot)
        ctx->pc = 0x28EAE8u;
        runtime->handleSyscall(rdram, ctx, 0x1Cu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAE8u;
        goto label_28eae8;
    }
    ctx->pc = 0x28EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE0u;
        // 0x28eae4: 0x70c  syscall     28 (Delay Slot)
        ctx->pc = 0x28EAE8u;
        runtime->handleSyscall(rdram, ctx, 0x1Cu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EAE8u;
label_28eae8:
    // 0x28eae8: 0x710  .word       0x00000710                   # mfhi        $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eae8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28eaec:
    // 0x28eaec: 0x714  .word       0x00000714                   # dsllv       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eaecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28eaf0:
    // 0x28eaf0: 0x718  .word       0x00000718                   # mult        $zero, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28eaf4:
    // 0x28eaf4: 0x71c  .word       0x0000071C                   # dmult       $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eaf4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EAF4 raw=0x0000071C");
 /* MITIGATED */
label_28eaf8:
    // 0x28eaf8: 0x720  .word       0x00000720                   # add         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eaf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28eafc:
    // 0x28eafc: 0x724  .word       0x00000724                   # and         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eafcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28eb00:
    // 0x28eb00: 0x728  .word       0x00000728                   # mfsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eb00u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28eb04:
    // 0x28eb04: 0x72c  .word       0x0000072C                   # dadd        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28eb08:
    // 0x28eb08: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x28eb08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb0c:
    // 0x28eb0c: 0x734  teq         $zero, $zero, 28
    ctx->pc = 0x28eb0cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb10:
    // 0x28eb10: 0x738  dsll        $zero, $zero, 28
    ctx->pc = 0x28eb10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 28);
label_28eb14:
    // 0x28eb14: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x28eb14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_28eb18:
    // 0x28eb18: 0x740  sll         $zero, $zero, 29
    ctx->pc = 0x28eb18u;
    
label_28eb1c:
    // 0x28eb1c: 0x744  .word       0x00000744                   # sllv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28eb20:
    // 0x28eb20: 0x748  .word       0x00000748                   # jr          $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_28eb24:
    if (ctx->pc == 0x28EB24u) {
        ctx->pc = 0x28EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB20u;
        // 0x28eb24: 0x74c  syscall     29 (Delay Slot)
        ctx->pc = 0x28EB28u;
        runtime->handleSyscall(rdram, ctx, 0x1Du);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB28u;
        goto label_28eb28;
    }
    ctx->pc = 0x28EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB20u;
        // 0x28eb24: 0x74c  syscall     29 (Delay Slot)
        ctx->pc = 0x28EB28u;
        runtime->handleSyscall(rdram, ctx, 0x1Du);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EB28u;
label_28eb28:
    // 0x28eb28: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28eb2c:
    // 0x28eb2c: 0x754  .word       0x00000754                   # dsllv       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28eb30:
    // 0x28eb30: 0x758  .word       0x00000758                   # mult        $zero, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28eb34:
    // 0x28eb34: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EB34 raw=0x0000075C");
 /* MITIGATED */
label_28eb38:
    // 0x28eb38: 0x760  .word       0x00000760                   # add         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28eb3c:
    // 0x28eb3c: 0x764  .word       0x00000764                   # and         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28eb40:
    // 0x28eb40: 0x768  .word       0x00000768                   # mfsa        $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eb40u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28eb44:
    // 0x28eb44: 0x76c  .word       0x0000076C                   # dadd        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28eb48:
    // 0x28eb48: 0x770  tge         $zero, $zero, 29
    ctx->pc = 0x28eb48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb4c:
    // 0x28eb4c: 0x774  teq         $zero, $zero, 29
    ctx->pc = 0x28eb4cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb50:
    // 0x28eb50: 0x778  dsll        $zero, $zero, 29
    ctx->pc = 0x28eb50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 29);
label_28eb54:
    // 0x28eb54: 0x77c  dsll32      $zero, $zero, 29
    ctx->pc = 0x28eb54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 29));
label_28eb58:
    // 0x28eb58: 0x780  sll         $zero, $zero, 30
    ctx->pc = 0x28eb58u;
    
label_28eb5c:
    // 0x28eb5c: 0x784  .word       0x00000784                   # sllv        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28eb60:
    // 0x28eb60: 0x788  .word       0x00000788                   # jr          $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_28eb64:
    if (ctx->pc == 0x28EB64u) {
        ctx->pc = 0x28EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB60u;
        // 0x28eb64: 0x78c  syscall     30 (Delay Slot)
        ctx->pc = 0x28EB68u;
        runtime->handleSyscall(rdram, ctx, 0x1Eu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB68u;
        goto label_28eb68;
    }
    ctx->pc = 0x28EB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB60u;
        // 0x28eb64: 0x78c  syscall     30 (Delay Slot)
        ctx->pc = 0x28EB68u;
        runtime->handleSyscall(rdram, ctx, 0x1Eu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EB68u;
label_28eb68:
    // 0x28eb68: 0x790  .word       0x00000790                   # mfhi        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb68u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28eb6c:
    // 0x28eb6c: 0x794  .word       0x00000794                   # dsllv       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28eb70:
    // 0x28eb70: 0x798  .word       0x00000798                   # mult        $zero, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eb70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28eb74:
    // 0x28eb74: 0x79c  .word       0x0000079C                   # dmult       $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EB74 raw=0x0000079C");
 /* MITIGATED */
label_28eb78:
    // 0x28eb78: 0x7a0  .word       0x000007A0                   # add         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28eb7c:
    // 0x28eb7c: 0x7a4  .word       0x000007A4                   # and         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb7cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28eb80:
    // 0x28eb80: 0x7a8  .word       0x000007A8                   # mfsa        $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eb80u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28eb84:
    // 0x28eb84: 0x7ac  .word       0x000007AC                   # dadd        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28eb88:
    // 0x28eb88: 0x7b0  tge         $zero, $zero, 30
    ctx->pc = 0x28eb88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb8c:
    // 0x28eb8c: 0x7b4  teq         $zero, $zero, 30
    ctx->pc = 0x28eb8cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28eb90:
    // 0x28eb90: 0xa48  .word       0x00000A48                   # jr          $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
label_28eb94:
    if (ctx->pc == 0x28EB94u) {
        ctx->pc = 0x28EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB90u;
        // 0x28eb94: 0xa4c  syscall     41 (Delay Slot)
        ctx->pc = 0x28EB98u;
        runtime->handleSyscall(rdram, ctx, 0x29u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB98u;
        goto label_28eb98;
    }
    ctx->pc = 0x28EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB90u;
        // 0x28eb94: 0xa4c  syscall     41 (Delay Slot)
        ctx->pc = 0x28EB98u;
        runtime->handleSyscall(rdram, ctx, 0x29u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EB98u;
label_28eb98:
    // 0x28eb98: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_28eb9c:
    // 0x28eb9c: 0xa54  .word       0x00000A54                   # dsllv       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28eba0:
    // 0x28eba0: 0xa58  .word       0x00000A58                   # mult        $at, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28eba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_28eba4:
    // 0x28eba4: 0xa5c  .word       0x00000A5C                   # dmult       $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eba4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EBA4 raw=0x00000A5C");
 /* MITIGATED */
label_28eba8:
    // 0x28eba8: 0xa60  .word       0x00000A60                   # add         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_28ebac:
    // 0x28ebac: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28ebb0:
    // 0x28ebb0: 0xa68  .word       0x00000A68                   # mfsa        $at # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ebb0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_28ebb4:
    // 0x28ebb4: 0xa6c  .word       0x00000A6C                   # dadd        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebb4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_28ebb8:
    // 0x28ebb8: 0xa70  tge         $zero, $zero, 41
    ctx->pc = 0x28ebb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ebbc:
    // 0x28ebbc: 0xa74  teq         $zero, $zero, 41
    ctx->pc = 0x28ebbcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ebc0:
    // 0x28ebc0: 0xa78  dsll        $at, $zero, 9
    ctx->pc = 0x28ebc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 9);
label_28ebc4:
    // 0x28ebc4: 0xa7c  dsll32      $at, $zero, 9
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 9));
label_28ebc8:
    // 0x28ebc8: 0xa80  sll         $at, $zero, 10
    ctx->pc = 0x28ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_28ebcc:
    // 0x28ebcc: 0xa84  .word       0x00000A84                   # sllv        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ebd0:
    // 0x28ebd0: 0xa88  .word       0x00000A88                   # jr          $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
label_28ebd4:
    if (ctx->pc == 0x28EBD4u) {
        ctx->pc = 0x28EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD0u;
        // 0x28ebd4: 0xa8c  syscall     42 (Delay Slot)
        ctx->pc = 0x28EBD8u;
        runtime->handleSyscall(rdram, ctx, 0x2Au);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBD8u;
        goto label_28ebd8;
    }
    ctx->pc = 0x28EBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD0u;
        // 0x28ebd4: 0xa8c  syscall     42 (Delay Slot)
        ctx->pc = 0x28EBD8u;
        runtime->handleSyscall(rdram, ctx, 0x2Au);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EBD8u;
label_28ebd8:
    // 0x28ebd8: 0xa90  .word       0x00000A90                   # mfhi        $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebd8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_28ebdc:
    // 0x28ebdc: 0xa94  .word       0x00000A94                   # dsllv       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ebe0:
    // 0x28ebe0: 0xa98  .word       0x00000A98                   # mult        $at, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ebe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_28ebe4:
    // 0x28ebe4: 0xa9c  .word       0x00000A9C                   # dmult       $zero, $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebe4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EBE4 raw=0x00000A9C");
 /* MITIGATED */
label_28ebe8:
    // 0x28ebe8: 0xaa0  .word       0x00000AA0                   # add         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebe8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_28ebec:
    // 0x28ebec: 0xaa4  .word       0x00000AA4                   # and         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28ebf0:
    // 0x28ebf0: 0xaa8  .word       0x00000AA8                   # mfsa        $at # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ebf0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_28ebf4:
    // 0x28ebf4: 0xaac  .word       0x00000AAC                   # dadd        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ebf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_28ebf8:
    // 0x28ebf8: 0xab0  tge         $zero, $zero, 42
    ctx->pc = 0x28ebf8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ebfc:
    // 0x28ebfc: 0xab4  teq         $zero, $zero, 42
    ctx->pc = 0x28ebfcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ec00:
    // 0x28ec00: 0xab8  dsll        $at, $zero, 10
    ctx->pc = 0x28ec00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 10);
label_28ec04:
    // 0x28ec04: 0xabc  dsll32      $at, $zero, 10
    ctx->pc = 0x28ec04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 10));
label_28ec08:
    // 0x28ec08: 0xac0  sll         $at, $zero, 11
    ctx->pc = 0x28ec08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_28ec0c:
    // 0x28ec0c: 0xac4  .word       0x00000AC4                   # sllv        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ec10:
    // 0x28ec10: 0xac8  .word       0x00000AC8                   # jr          $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
label_28ec14:
    if (ctx->pc == 0x28EC14u) {
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0xacc  syscall     43 (Delay Slot)
        ctx->pc = 0x28EC18u;
        runtime->handleSyscall(rdram, ctx, 0x2Bu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC18u;
        goto label_28ec18;
    }
    ctx->pc = 0x28EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0xacc  syscall     43 (Delay Slot)
        ctx->pc = 0x28EC18u;
        runtime->handleSyscall(rdram, ctx, 0x2Bu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EC18u;
label_28ec18:
    // 0x28ec18: 0xad0  .word       0x00000AD0                   # mfhi        $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec18u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_28ec1c:
    // 0x28ec1c: 0xad4  .word       0x00000AD4                   # dsllv       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ec20:
    // 0x28ec20: 0xad8  .word       0x00000AD8                   # mult        $at, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ec20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_28ec24:
    // 0x28ec24: 0xadc  .word       0x00000ADC                   # dmult       $zero, $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28EC24 raw=0x00000ADC");
 /* MITIGATED */
label_28ec28:
    // 0x28ec28: 0xae0  .word       0x00000AE0                   # add         $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_28ec2c:
    // 0x28ec2c: 0xae4  .word       0x00000AE4                   # and         $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28ec30:
    // 0x28ec30: 0xae8  .word       0x00000AE8                   # mfsa        $at # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ec30u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_28ec34:
    // 0x28ec34: 0xaec  .word       0x00000AEC                   # dadd        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_28ec38:
    // 0x28ec38: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x28ec38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ec3c:
    // 0x28ec3c: 0xaf4  teq         $zero, $zero, 43
    ctx->pc = 0x28ec3cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ec40:
    // 0x28ec40: 0xaf8  dsll        $at, $zero, 11
    ctx->pc = 0x28ec40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 11);
label_28ec44:
    // 0x28ec44: 0x0  nop
    ctx->pc = 0x28ec44u;
    // NOP
label_28ec48:
    // 0x28ec48: 0x0  nop
    ctx->pc = 0x28ec48u;
    // NOP
label_28ec4c:
    // 0x28ec4c: 0x0  nop
    ctx->pc = 0x28ec4cu;
    // NOP
label_28ec50:
    // 0x28ec50: 0xb0e0b0c  j           func_C382C30
label_28ec54:
    if (ctx->pc == 0x28EC54u) {
        ctx->pc = 0x28EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC50u;
        // 0x28ec54: 0xe0d0c0d  jal         func_8343034 (Delay Slot)
        // JAL 0x8343034 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC58u;
        goto label_28ec58;
    }
    ctx->pc = 0x28EC50u;
    ctx->pc = 0x28EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC50u;
    // 0x28ec54: 0xe0d0c0d  jal         func_8343034 (Delay Slot)
    // JAL 0x8343034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC382C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC382C30u, 0x28EC50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EC58u;
label_28ec58:
    // 0x28ec58: 0xe110d10  jal         func_8443440
label_28ec5c:
    if (ctx->pc == 0x28EC5Cu) {
        ctx->pc = 0x28EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC58u;
        // 0x28ec5c: 0x10110f12  beq         $zero, $s1, . + 4 + (0xF12 << 2) (Delay Slot)
        // Likely branch instruction at 0x28EC5C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC60u;
        goto label_28ec60;
    }
    ctx->pc = 0x28EC58u;
    SET_GPR_U32(ctx, 31, 0x28EC60u);
    ctx->pc = 0x28EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC58u;
    // 0x28ec5c: 0x10110f12  beq         $zero, $s1, . + 4 + (0xF12 << 2) (Delay Slot)
    // Likely branch instruction at 0x28EC5C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8443440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8443440u, 0x28EC58u, 0x28EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC60u;
label_28ec60:
    // 0x28ec60: 0xe151015  jal         func_8544054
label_28ec64:
    if (ctx->pc == 0x28EC64u) {
        ctx->pc = 0x28EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC60u;
        // 0x28ec64: 0xc15  .word       0x00000C15                   # INVALID     $zero, $zero, 0xC15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28EC64 raw=0x00000C15");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC68u;
        goto label_28ec68;
    }
    ctx->pc = 0x28EC60u;
    SET_GPR_U32(ctx, 31, 0x28EC68u);
    ctx->pc = 0x28EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC60u;
    // 0x28ec64: 0xc15  .word       0x00000C15                   # INVALID     $zero, $zero, 0xC15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28EC64 raw=0x00000C15");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x8544054u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8544054u, 0x28EC60u, 0x28EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC68u;
label_28ec68:
    // 0x28ec68: 0x0  nop
    ctx->pc = 0x28ec68u;
    // NOP
label_28ec6c:
    // 0x28ec6c: 0x0  nop
    ctx->pc = 0x28ec6cu;
    // NOP
label_28ec70:
    // 0x28ec70: 0x80d060d  j           func_341834
label_28ec74:
    if (ctx->pc == 0x28EC74u) {
        ctx->pc = 0x28EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC70u;
        // 0x28ec74: 0x910090c  j           func_4402430 (Delay Slot)
        // J 0x4402430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC78u;
        goto label_28ec78;
    }
    ctx->pc = 0x28EC70u;
    ctx->pc = 0x28EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC70u;
    // 0x28ec74: 0x910090c  j           func_4402430 (Delay Slot)
    // J 0x4402430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x341834u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341834u, 0x28EC70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EC78u;
label_28ec78:
    // 0x28ec78: 0xa150b10  j           func_8542C40
label_28ec7c:
    if (ctx->pc == 0x28EC7Cu) {
        ctx->pc = 0x28EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC78u;
        // 0x28ec7c: 0x6150916  .word       0x06150916                   # INVALID     $s0, $s5, 0x916 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x15 at 0x28EC7C raw=0x06150916");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC80u;
        goto label_28ec80;
    }
    ctx->pc = 0x28EC78u;
    ctx->pc = 0x28EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC78u;
    // 0x28ec7c: 0x6150916  .word       0x06150916                   # INVALID     $s0, $s5, 0x916 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x15 at 0x28EC7C raw=0x06150916");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x8542C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8542C40u, 0x28EC78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EC80u;
label_28ec80:
    // 0x28ec80: 0x70e  .word       0x0000070E                   # INVALID     $zero, $zero, 0x70E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ec80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28EC80 raw=0x0000070E");
 /* MITIGATED */
label_28ec84:
    // 0x28ec84: 0x0  nop
    ctx->pc = 0x28ec84u;
    // NOP
label_28ec88:
    // 0x28ec88: 0x0  nop
    ctx->pc = 0x28ec88u;
    // NOP
label_28ec8c:
    // 0x28ec8c: 0x0  nop
    ctx->pc = 0x28ec8cu;
    // NOP
label_28ec90:
    // 0x28ec90: 0x6060506  .word       0x06060506                   # INVALID     $s0, $a2, 0x506 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28ec90u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28EC90 raw=0x06060506");
 /* MITIGATED */
label_28ec94:
    // 0x28ec94: 0x5060406  .word       0x05060406                   # INVALID     $t0, $a2, 0x406 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28ec94u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28EC94 raw=0x05060406");
 /* MITIGATED */
label_28ec98:
    // 0x28ec98: 0x4060306  .word       0x04060306                   # INVALID     $zero, $a2, 0x306 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28ec98u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28EC98 raw=0x04060306");
 /* MITIGATED */
label_28ec9c:
    // 0x28ec9c: 0x7080508  tgei        $t8, 0x508
    ctx->pc = 0x28ec9cu;
    if (GPR_S64(ctx, 24) >= (int64_t)(int32_t)1288) { runtime->handleTrap(rdram, ctx); }
label_28eca0:
    // 0x28eca0: 0x6080408  tgei        $s0, 0x408
    ctx->pc = 0x28eca0u;
    if (GPR_S64(ctx, 16) >= (int64_t)(int32_t)1032) { runtime->handleTrap(rdram, ctx); }
label_28eca4:
    // 0x28eca4: 0x70a050a  tlti        $t8, 0x50A
    ctx->pc = 0x28eca4u;
    if (GPR_S64(ctx, 24) < (int64_t)(int32_t)1290) { runtime->handleTrap(rdram, ctx); }
label_28eca8:
    // 0x28eca8: 0x60a040a  tlti        $s0, 0x40A
    ctx->pc = 0x28eca8u;
    if (GPR_S64(ctx, 16) < (int64_t)(int32_t)1034) { runtime->handleTrap(rdram, ctx); }
label_28ecac:
    // 0x28ecac: 0x50a030a  tlti        $t0, 0x30A
    ctx->pc = 0x28ecacu;
    if (GPR_S64(ctx, 8) < (int64_t)(int32_t)778) { runtime->handleTrap(rdram, ctx); }
label_28ecb0:
    // 0x28ecb0: 0x472dd400  .word       0x472DD400                   # INVALID     $t9, $t5, -0x2C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ECB0 raw=0x472DD400");
 /* MITIGATED */
label_28ecb4:
    // 0x28ecb4: 0x47115000  .word       0x47115000                   # INVALID     $t8, $s1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecb4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ECB4 raw=0x47115000");
 /* MITIGATED */
label_28ecb8:
    // 0x28ecb8: 0x47567400  .word       0x47567400                   # INVALID     $k0, $s6, 0x7400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecb8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ECB8 raw=0x47567400");
 /* MITIGATED */
label_28ecbc:
    // 0x28ecbc: 0x46c4e000  .word       0x46C4E000                   # INVALID     $s6, $a0, -0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecbcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECBC raw=0x46C4E000");
 /* MITIGATED */
label_28ecc0:
    // 0x28ecc0: 0x472fc800  .word       0x472FC800                   # INVALID     $t9, $t7, -0x3800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecc0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ECC0 raw=0x472FC800");
 /* MITIGATED */
label_28ecc4:
    // 0x28ecc4: 0x4713a800  .word       0x4713A800                   # INVALID     $t8, $s3, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecc4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ECC4 raw=0x4713A800");
 /* MITIGATED */
label_28ecc8:
    // 0x28ecc8: 0x4756d800  .word       0x4756D800                   # INVALID     $k0, $s6, -0x2800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecc8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ECC8 raw=0x4756D800");
 /* MITIGATED */
label_28eccc:
    // 0x28eccc: 0x46dac000  .word       0x46DAC000                   # INVALID     $s6, $k0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecccu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECCC raw=0x46DAC000");
 /* MITIGATED */
label_28ecd0:
    // 0x28ecd0: 0x472b1800  .word       0x472B1800                   # INVALID     $t9, $t3, 0x1800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecd0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ECD0 raw=0x472B1800");
 /* MITIGATED */
label_28ecd4:
    // 0x28ecd4: 0x46d3b800  .word       0x46D3B800                   # INVALID     $s6, $s3, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecd4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECD4 raw=0x46D3B800");
 /* MITIGATED */
label_28ecd8:
    // 0x28ecd8: 0x4753b800  .word       0x4753B800                   # INVALID     $k0, $s3, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecd8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ECD8 raw=0x4753B800");
 /* MITIGATED */
label_28ecdc:
    // 0x28ecdc: 0x46866000  .word       0x46866000                   # INVALID     $s4, $a2, 0x6000 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x28ecdcu;
//     throw std::runtime_error("Unhandled FPU.W instruction: function 0x0 at 0x28ECDC raw=0x46866000");
 /* MITIGATED */
label_28ece0:
    // 0x28ece0: 0x472fc800  .word       0x472FC800                   # INVALID     $t9, $t7, -0x3800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ece0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ECE0 raw=0x472FC800");
 /* MITIGATED */
label_28ece4:
    // 0x28ece4: 0x47115000  .word       0x47115000                   # INVALID     $t8, $s1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ece4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ECE4 raw=0x47115000");
 /* MITIGATED */
label_28ece8:
    // 0x28ece8: 0x4756d800  .word       0x4756D800                   # INVALID     $k0, $s6, -0x2800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ece8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ECE8 raw=0x4756D800");
 /* MITIGATED */
label_28ecec:
    // 0x28ecec: 0x46c4e000  .word       0x46C4E000                   # INVALID     $s6, $a0, -0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ececu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECEC raw=0x46C4E000");
 /* MITIGATED */
label_28ecf0:
    // 0x28ecf0: 0x46e93400  .word       0x46E93400                   # INVALID     $s7, $t1, 0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecf0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ECF0 raw=0x46E93400");
 /* MITIGATED */
label_28ecf4:
    // 0x28ecf4: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecf4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECF4 raw=0x46D48000");
 /* MITIGATED */
label_28ecf8:
    // 0x28ecf8: 0x4708b800  .word       0x4708B800                   # INVALID     $t8, $t0, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecf8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ECF8 raw=0x4708B800");
 /* MITIGATED */
label_28ecfc:
    // 0x28ecfc: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ecfcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ECFC raw=0x46D48000");
 /* MITIGATED */
label_28ed00:
    // 0x28ed00: 0x471baa00  .word       0x471BAA00                   # INVALID     $t8, $k1, -0x5600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed00u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED00 raw=0x471BAA00");
 /* MITIGATED */
label_28ed04:
    // 0x28ed04: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed04u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED04 raw=0x46FB9000");
 /* MITIGATED */
label_28ed08:
    // 0x28ed08: 0x46fbf400  .word       0x46FBF400                   # INVALID     $s7, $k1, -0xC00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed08u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED08 raw=0x46FBF400");
 /* MITIGATED */
label_28ed0c:
    // 0x28ed0c: 0x4708b800  .word       0x4708B800                   # INVALID     $t8, $t0, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed0cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED0C raw=0x4708B800");
 /* MITIGATED */
label_28ed10:
    // 0x28ed10: 0x47309000  .word       0x47309000                   # INVALID     $t9, $s0, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed10u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ED10 raw=0x47309000");
 /* MITIGATED */
label_28ed14:
    // 0x28ed14: 0x4713a800  .word       0x4713A800                   # INVALID     $t8, $s3, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed14u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED14 raw=0x4713A800");
 /* MITIGATED */
label_28ed18:
    // 0x28ed18: 0x4758cc00  .word       0x4758CC00                   # INVALID     $k0, $t8, -0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed18u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ED18 raw=0x4758CC00");
 /* MITIGATED */
label_28ed1c:
    // 0x28ed1c: 0x46dac000  .word       0x46DAC000                   # INVALID     $s6, $k0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed1cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ED1C raw=0x46DAC000");
 /* MITIGATED */
label_28ed20:
    // 0x28ed20: 0x46ea6000  .word       0x46EA6000                   # INVALID     $s7, $t2, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed20u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED20 raw=0x46EA6000");
 /* MITIGATED */
label_28ed24:
    // 0x28ed24: 0x46d93000  .word       0x46D93000                   # INVALID     $s6, $t9, 0x3000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed24u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ED24 raw=0x46D93000");
 /* MITIGATED */
label_28ed28:
    // 0x28ed28: 0x47094e00  .word       0x47094E00                   # INVALID     $t8, $t1, 0x4E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed28u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED28 raw=0x47094E00");
 /* MITIGATED */
label_28ed2c:
    // 0x28ed2c: 0x46d93000  .word       0x46D93000                   # INVALID     $s6, $t9, 0x3000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed2cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ED2C raw=0x46D93000");
 /* MITIGATED */
label_28ed30:
    // 0x28ed30: 0x471c4000  .word       0x471C4000                   # INVALID     $t8, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed30u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED30 raw=0x471C4000");
 /* MITIGATED */
label_28ed34:
    // 0x28ed34: 0x47002000  .word       0x47002000                   # INVALID     $t8, $zero, 0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed34u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED34 raw=0x47002000");
 /* MITIGATED */
label_28ed38:
    // 0x28ed38: 0x46ffdc00  .word       0x46FFDC00                   # INVALID     $s7, $ra, -0x2400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed38u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED38 raw=0x46FFDC00");
 /* MITIGATED */
label_28ed3c:
    // 0x28ed3c: 0x470b4200  .word       0x470B4200                   # INVALID     $t8, $t3, 0x4200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed3cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED3C raw=0x470B4200");
 /* MITIGATED */
label_28ed40:
    // 0x28ed40: 0x472d0c00  .word       0x472D0C00                   # INVALID     $t9, $t5, 0xC00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed40u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28ED40 raw=0x472D0C00");
 /* MITIGATED */
label_28ed44:
    // 0x28ed44: 0x46d3b800  .word       0x46D3B800                   # INVALID     $s6, $s3, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed44u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ED44 raw=0x46D3B800");
 /* MITIGATED */
label_28ed48:
    // 0x28ed48: 0x47541c00  .word       0x47541C00                   # INVALID     $k0, $s4, 0x1C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed48u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28ED48 raw=0x47541C00");
 /* MITIGATED */
label_28ed4c:
    // 0x28ed4c: 0x46866000  .word       0x46866000                   # INVALID     $s4, $a2, 0x6000 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x28ed4cu;
//     throw std::runtime_error("Unhandled FPU.W instruction: function 0x0 at 0x28ED4C raw=0x46866000");
 /* MITIGATED */
label_28ed50:
    // 0x28ed50: 0x46ecb800  .word       0x46ECB800                   # INVALID     $s7, $t4, -0x4800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed50u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED50 raw=0x46ECB800");
 /* MITIGATED */
label_28ed54:
    // 0x28ed54: 0x46ad7000  .word       0x46AD7000                   # INVALID     $s5, $t5, 0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed54u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x15, function 0x0 at 0x28ED54 raw=0x46AD7000");
 /* MITIGATED */
label_28ed58:
    // 0x28ed58: 0x47098000  .word       0x47098000                   # INVALID     $t8, $t1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed58u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED58 raw=0x47098000");
 /* MITIGATED */
label_28ed5c:
    // 0x28ed5c: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed5cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28ED5C raw=0x46D48000");
 /* MITIGATED */
label_28ed60:
    // 0x28ed60: 0x471ae200  .word       0x471AE200                   # INVALID     $t8, $k0, -0x1E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed60u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED60 raw=0x471AE200");
 /* MITIGATED */
label_28ed64:
    // 0x28ed64: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed64u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED64 raw=0x46FB9000");
 /* MITIGATED */
label_28ed68:
    // 0x28ed68: 0x46fbf400  .word       0x46FBF400                   # INVALID     $s7, $k1, -0xC00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28ED68 raw=0x46FBF400");
 /* MITIGATED */
label_28ed6c:
    // 0x28ed6c: 0x470b7400  .word       0x470B7400                   # INVALID     $t8, $t3, 0x7400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ed6cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28ED6C raw=0x470B7400");
 /* MITIGATED */
label_28ed70:
    // 0x28ed70: 0xd0c0d0a  jal         func_4303428
label_28ed74:
    if (ctx->pc == 0x28ED74u) {
        ctx->pc = 0x28ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED70u;
        // 0x28ed74: 0xa0d0c0d  j           func_8343034 (Delay Slot)
        // J 0x8343034 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED78u;
        goto label_28ed78;
    }
    ctx->pc = 0x28ED70u;
    SET_GPR_U32(ctx, 31, 0x28ED78u);
    ctx->pc = 0x28ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED70u;
    // 0x28ed74: 0xa0d0c0d  j           func_8343034 (Delay Slot)
    // J 0x8343034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4303428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4303428u, 0x28ED70u, 0x28ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED78u;
label_28ed78:
    // 0x28ed78: 0x90e0d0e  j           func_4383438
label_28ed7c:
    if (ctx->pc == 0x28ED7Cu) {
        ctx->pc = 0x28ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED78u;
        // 0x28ed7c: 0x70c050c  teqi        $t8, 0x50C (Delay Slot)
        if (GPR_S64(ctx, 24) == (int64_t)(int32_t)1292) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED80u;
        goto label_28ed80;
    }
    ctx->pc = 0x28ED78u;
    ctx->pc = 0x28ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED78u;
    // 0x28ed7c: 0x70c050c  teqi        $t8, 0x50C (Delay Slot)
    if (GPR_S64(ctx, 24) == (int64_t)(int32_t)1292) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4383438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4383438u, 0x28ED78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28ED80u;
label_28ed80:
    // 0x28ed80: 0x607070a  .word       0x0607070A                   # INVALID     $s0, $a3, 0x70A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28ed80u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x28ED80 raw=0x0607070A");
 /* MITIGATED */
label_28ed84:
    // 0x28ed84: 0x906  .word       0x00000906                   # srlv        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ed88:
    // 0x28ed88: 0x0  nop
    ctx->pc = 0x28ed88u;
    // NOP
label_28ed8c:
    // 0x28ed8c: 0x0  nop
    ctx->pc = 0x28ed8cu;
    // NOP
label_28ed90:
    // 0x28ed90: 0xc0b0e0b  jal         func_2C382C
label_28ed94:
    if (ctx->pc == 0x28ED94u) {
        ctx->pc = 0x28ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED90u;
        // 0x28ed94: 0xb0e0b0c  j           func_C382C30 (Delay Slot)
        // J 0xC382C30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED98u;
        goto label_28ed98;
    }
    ctx->pc = 0x28ED90u;
    SET_GPR_U32(ctx, 31, 0x28ED98u);
    ctx->pc = 0x28ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED90u;
    // 0x28ed94: 0xb0e0b0c  j           func_C382C30 (Delay Slot)
    // J 0xC382C30 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C382Cu;
    { ctx->pc = 0x2c382c; return; }
    ctx->pc = 0x28ED98u;
label_28ed98:
    // 0x28ed98: 0x80f0a0f  j           func_3C283C
label_28ed9c:
    if (ctx->pc == 0x28ED9Cu) {
        ctx->pc = 0x28ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED98u;
        // 0x28ed9c: 0x80b060b  j           func_2C182C (Delay Slot)
        // J 0x2C182C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDA0u;
        goto label_28eda0;
    }
    ctx->pc = 0x28ED98u;
    ctx->pc = 0x28ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED98u;
    // 0x28ed9c: 0x80b060b  j           func_2C182C (Delay Slot)
    // J 0x2C182C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C283Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C283Cu, 0x28ED98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EDA0u;
label_28eda0:
    // 0x28eda0: 0x5060508  .word       0x05060508                   # INVALID     $t0, $a2, 0x508 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28eda0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28EDA0 raw=0x05060508");
 /* MITIGATED */
label_28eda4:
    // 0x28eda4: 0xa050805  j           func_8142014
label_28eda8:
    if (ctx->pc == 0x28EDA8u) {
        ctx->pc = 0x28EDACu;
        goto label_28edac;
    }
    ctx->pc = 0x28EDA4u;
    ctx->pc = 0x8142014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8142014u, 0x28EDA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EDACu;
label_28edac:
    // 0x28edac: 0x0  nop
    ctx->pc = 0x28edacu;
    // NOP
label_28edb0:
    // 0x28edb0: 0x471b2041  .word       0x471B2041                   # INVALID     $t8, $k1, 0x2041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28edb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x1 at 0x28EDB0 raw=0x471B2041");
 /* MITIGATED */
label_28edb4:
    // 0x28edb4: 0x6c617632  ldr         $at, 0x7632($v1)
    ctx->pc = 0x28edb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30258); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_28edb8:
    // 0x28edb8: 0x6c626175  ldr         $v0, 0x6175($v1)
    ctx->pc = 0x28edb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24949); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_28edbc:
    // 0x28edbc: 0x74692065  .word       0x74692065                   # INVALID     $v1, $t1, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28edbcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28EDBC raw=0x74692065");
 /* MITIGATED */
label_28edc0:
    // 0x28edc0: 0x471b6d65  .word       0x471B6D65                   # INVALID     $t8, $k1, 0x6D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28edc0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x25 at 0x28EDC0 raw=0x471B6D65");
 /* MITIGATED */
label_28edc4:
    // 0x28edc4: 0x73616837  .word       0x73616837                   # psrah       $t5, $at, 0 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28edc4u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 1), 0));
label_28edc8:
    // 0x28edc8: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x28edc8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_28edcc:
    // 0x28edcc: 0x6f66206e  ldr         $a2, 0x206E($k1)
    ctx->pc = 0x28edccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_28edd0:
    // 0x28edd0: 0x21646e75  addi        $a0, $t3, 0x6E75
    ctx->pc = 0x28edd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28277, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_28edd4:
    // 0x28edd4: 0x0  nop
    ctx->pc = 0x28edd4u;
    // NOP
label_28edd8:
    // 0x28edd8: 0x0  nop
    ctx->pc = 0x28edd8u;
    // NOP
label_28eddc:
    // 0x28eddc: 0x0  nop
    ctx->pc = 0x28eddcu;
    // NOP
label_28ede0:
    // 0x28ede0: 0x1c141d1c  .word       0x1C141D1C                   # bgtz        $zero, . + 4 + (0x1D1C << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_28ede4:
    if (ctx->pc == 0x28EDE4u) {
        ctx->pc = 0x28EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDE0u;
        // 0x28ede4: 0x1c161c15  .word       0x1C161C15                   # bgtz        $zero, . + 4 + (0x1C15 << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDE8u;
        goto label_28ede8;
    }
    ctx->pc = 0x28EDE0u;
    {
        const bool branch_taken_0x28ede0 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDE0u;
        // 0x28ede4: 0x1c161c15  .word       0x1C161C15                   # bgtz        $zero, . + 4 + (0x1C15 << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ede0) {
            ctx->pc = 0x296254u;
            { ctx->pc = 0x296254; return; }
        }
    }
    ctx->pc = 0x28EDE8u;
label_28ede8:
    // 0x28ede8: 0x1c181c17  .word       0x1C181C17                   # bgtz        $zero, . + 4 + (0x1C17 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_28edec:
    if (ctx->pc == 0x28EDECu) {
        ctx->pc = 0x28EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDE8u;
        // 0x28edec: 0x1c1a1c19  .word       0x1C1A1C19                   # bgtz        $zero, . + 4 + (0x1C19 << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDEC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDF0u;
        goto label_28edf0;
    }
    ctx->pc = 0x28EDE8u;
    {
        const bool branch_taken_0x28ede8 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDE8u;
        // 0x28edec: 0x1c1a1c19  .word       0x1C1A1C19                   # bgtz        $zero, . + 4 + (0x1C19 << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDEC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ede8) {
            ctx->pc = 0x295E48u;
            { ctx->pc = 0x295e48; return; }
        }
    }
    ctx->pc = 0x28EDF0u;
label_28edf0:
    // 0x28edf0: 0x1c1c1c1b  .word       0x1C1C1C1B                   # bgtz        $zero, . + 4 + (0x1C1B << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_28edf4:
    if (ctx->pc == 0x28EDF4u) {
        ctx->pc = 0x28EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF0u;
        // 0x28edf4: 0x1a061b14  .word       0x1A061B14                   # blez        $s0, . + 4 + (0x1B14 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDF8u;
        goto label_28edf8;
    }
    ctx->pc = 0x28EDF0u;
    {
        const bool branch_taken_0x28edf0 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF0u;
        // 0x28edf4: 0x1a061b14  .word       0x1A061B14                   # blez        $s0, . + 4 + (0x1B14 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edf0) {
            ctx->pc = 0x295E60u;
            { ctx->pc = 0x295e60; return; }
        }
    }
    ctx->pc = 0x28EDF8u;
label_28edf8:
    // 0x28edf8: 0x1a081a07  .word       0x1A081A07                   # blez        $s0, . + 4 + (0x1A07 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_28edfc:
    if (ctx->pc == 0x28EDFCu) {
        ctx->pc = 0x28EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF8u;
        // 0x28edfc: 0x1a0a1a09  .word       0x1A0A1A09                   # blez        $s0, . + 4 + (0x1A09 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE00u;
        goto label_28ee00;
    }
    ctx->pc = 0x28EDF8u;
    {
        const bool branch_taken_0x28edf8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF8u;
        // 0x28edfc: 0x1a0a1a09  .word       0x1A0A1A09                   # blez        $s0, . + 4 + (0x1A09 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EDFC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edf8) {
            ctx->pc = 0x295618u;
            { ctx->pc = 0x295618; return; }
        }
    }
    ctx->pc = 0x28EE00u;
label_28ee00:
    // 0x28ee00: 0x1a0c1a0b  .word       0x1A0C1A0B                   # blez        $s0, . + 4 + (0x1A0B << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28ee04:
    if (ctx->pc == 0x28EE04u) {
        ctx->pc = 0x28EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE00u;
        // 0x28ee04: 0x1a0e1a0d  .word       0x1A0E1A0D                   # blez        $s0, . + 4 + (0x1A0D << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE08u;
        goto label_28ee08;
    }
    ctx->pc = 0x28EE00u;
    {
        const bool branch_taken_0x28ee00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE00u;
        // 0x28ee04: 0x1a0e1a0d  .word       0x1A0E1A0D                   # blez        $s0, . + 4 + (0x1A0D << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE04 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee00) {
            ctx->pc = 0x295630u;
            { ctx->pc = 0x295630; return; }
        }
    }
    ctx->pc = 0x28EE08u;
label_28ee08:
    // 0x28ee08: 0x1a101a0f  .word       0x1A101A0F                   # blez        $s0, . + 4 + (0x1A0F << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_28ee0c:
    if (ctx->pc == 0x28EE0Cu) {
        ctx->pc = 0x28EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE08u;
        // 0x28ee0c: 0x1a121a11  .word       0x1A121A11                   # blez        $s0, . + 4 + (0x1A11 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE10u;
        goto label_28ee10;
    }
    ctx->pc = 0x28EE08u;
    {
        const bool branch_taken_0x28ee08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE08u;
        // 0x28ee0c: 0x1a121a11  .word       0x1A121A11                   # blez        $s0, . + 4 + (0x1A11 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE0C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee08) {
            ctx->pc = 0x295648u;
            { ctx->pc = 0x295648; return; }
        }
    }
    ctx->pc = 0x28EE10u;
label_28ee10:
    // 0x28ee10: 0x1a141a13  .word       0x1A141A13                   # blez        $s0, . + 4 + (0x1A13 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_28ee14:
    if (ctx->pc == 0x28EE14u) {
        ctx->pc = 0x28EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE10u;
        // 0x28ee14: 0x190e1906  .word       0x190E1906                   # blez        $t0, . + 4 + (0x1906 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE14 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE18u;
        goto label_28ee18;
    }
    ctx->pc = 0x28EE10u;
    {
        const bool branch_taken_0x28ee10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE10u;
        // 0x28ee14: 0x190e1906  .word       0x190E1906                   # blez        $t0, . + 4 + (0x1906 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28EE14 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee10) {
            ctx->pc = 0x295660u;
            { ctx->pc = 0x295660; return; }
        }
    }
    ctx->pc = 0x28EE18u;
label_28ee18:
    // 0x28ee18: 0x180e1806  .word       0x180E1806                   # blez        $zero, . + 4 + (0x1806 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_28ee1c:
    if (ctx->pc == 0x28EE1Cu) {
        ctx->pc = 0x28EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE18u;
        // 0x28ee1c: 0x1706180f  bne         $t8, $a2, . + 4 + (0x180F << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE1C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE20u;
        goto label_28ee20;
    }
    ctx->pc = 0x28EE18u;
    {
        const bool branch_taken_0x28ee18 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE18u;
        // 0x28ee1c: 0x1706180f  bne         $t8, $a2, . + 4 + (0x180F << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE1C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee18) {
            ctx->pc = 0x294E34u;
            { ctx->pc = 0x294e34; return; }
        }
    }
    ctx->pc = 0x28EE20u;
label_28ee20:
    // 0x28ee20: 0x1603170e  bne         $s0, $v1, . + 4 + (0x170E << 2)
label_28ee24:
    if (ctx->pc == 0x28EE24u) {
        ctx->pc = 0x28EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE20u;
        // 0x28ee24: 0x16061604  bne         $s0, $a2, . + 4 + (0x1604 << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE28u;
        goto label_28ee28;
    }
    ctx->pc = 0x28EE20u;
    {
        const bool branch_taken_0x28ee20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x28EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE20u;
        // 0x28ee24: 0x16061604  bne         $s0, $a2, . + 4 + (0x1604 << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE24 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee20) {
            ctx->pc = 0x294A5Cu;
            { ctx->pc = 0x294a5c; return; }
        }
    }
    ctx->pc = 0x28EE28u;
label_28ee28:
    // 0x28ee28: 0x16081607  bne         $s0, $t0, . + 4 + (0x1607 << 2)
label_28ee2c:
    if (ctx->pc == 0x28EE2Cu) {
        ctx->pc = 0x28EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE28u;
        // 0x28ee2c: 0x160a1609  bne         $s0, $t2, . + 4 + (0x1609 << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE30u;
        goto label_28ee30;
    }
    ctx->pc = 0x28EE28u;
    {
        const bool branch_taken_0x28ee28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        ctx->pc = 0x28EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE28u;
        // 0x28ee2c: 0x160a1609  bne         $s0, $t2, . + 4 + (0x1609 << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE2C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee28) {
            ctx->pc = 0x294648u;
            { ctx->pc = 0x294648; return; }
        }
    }
    ctx->pc = 0x28EE30u;
label_28ee30:
    // 0x28ee30: 0x160c160b  bne         $s0, $t4, . + 4 + (0x160B << 2)
label_28ee34:
    if (ctx->pc == 0x28EE34u) {
        ctx->pc = 0x28EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE30u;
        // 0x28ee34: 0x160e160d  bne         $s0, $t6, . + 4 + (0x160D << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE34 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE38u;
        goto label_28ee38;
    }
    ctx->pc = 0x28EE30u;
    {
        const bool branch_taken_0x28ee30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        ctx->pc = 0x28EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE30u;
        // 0x28ee34: 0x160e160d  bne         $s0, $t6, . + 4 + (0x160D << 2) (Delay Slot)
        // Likely branch instruction at 0x28EE34 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee30) {
            ctx->pc = 0x294660u;
            { ctx->pc = 0x294660; return; }
        }
    }
    ctx->pc = 0x28EE38u;
label_28ee38:
    // 0x28ee38: 0x150a  .word       0x0000150A                   # movz        $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee38u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_28ee3c:
    // 0x28ee3c: 0x0  nop
    ctx->pc = 0x28ee3cu;
    // NOP
label_28ee40:
    // 0x28ee40: 0x227e40  .word       0x00227E40                   # sll         $t7, $v0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_28ee44:
    // 0x28ee44: 0x227d10  .word       0x00227D10                   # mfhi        $t7 # 00220500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_28ee48:
    // 0x28ee48: 0x227c70  tge         $at, $v0, 497
    ctx->pc = 0x28ee48u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28ee4c:
    // 0x28ee4c: 0x227be0  .word       0x00227BE0                   # add         $t7, $at, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_28ee50:
    // 0x28ee50: 0x227ae0  .word       0x00227AE0                   # add         $t7, $at, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_28ee54:
    // 0x28ee54: 0x227a10  .word       0x00227A10                   # mfhi        $t7 # 00220200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee54u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_28ee58:
    // 0x28ee58: 0x227930  tge         $at, $v0, 484
    ctx->pc = 0x28ee58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28ee5c:
    // 0x28ee5c: 0x227900  .word       0x00227900                   # sll         $t7, $v0, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28ee60:
    // 0x28ee60: 0x227890  .word       0x00227890                   # mfhi        $t7 # 00220080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_28ee64:
    // 0x28ee64: 0x2276d0  .word       0x002276D0                   # mfhi        $t6 # 002206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_28ee68:
    // 0x28ee68: 0x227670  tge         $at, $v0, 473
    ctx->pc = 0x28ee68u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28ee6c:
    // 0x28ee6c: 0x227610  .word       0x00227610                   # mfhi        $t6 # 00220600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee6cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_28ee70:
    // 0x28ee70: 0x227510  .word       0x00227510                   # mfhi        $t6 # 00220500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee70u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_28ee74:
    // 0x28ee74: 0x2273c0  .word       0x002273C0                   # sll         $t6, $v0, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_28ee78:
    // 0x28ee78: 0x227250  .word       0x00227250                   # mfhi        $t6 # 00220240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee78u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_28ee7c:
    // 0x28ee7c: 0x2271c0  .word       0x002271C0                   # sll         $t6, $v0, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_28ee80:
    // 0x28ee80: 0x227130  tge         $at, $v0, 452
    ctx->pc = 0x28ee80u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28ee84:
    // 0x28ee84: 0x227010  .word       0x00227010                   # mfhi        $t6 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_28ee88:
    // 0x28ee88: 0x226ee0  .word       0x00226EE0                   # add         $t5, $at, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee88u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_28ee8c:
    // 0x28ee8c: 0x226db0  tge         $at, $v0, 438
    ctx->pc = 0x28ee8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28ee90:
    // 0x28ee90: 0x226d50  .word       0x00226D50                   # mfhi        $t5 # 00220540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee90u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_28ee94:
    // 0x28ee94: 0x226d10  .word       0x00226D10                   # mfhi        $t5 # 00220500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee94u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_28ee98:
    // 0x28ee98: 0x226c60  .word       0x00226C60                   # add         $t5, $at, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ee98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_28ee9c:
    // 0x28ee9c: 0x226ab0  tge         $at, $v0, 426
    ctx->pc = 0x28ee9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eea0:
    // 0x28eea0: 0x226a20  .word       0x00226A20                   # add         $t5, $at, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eea0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_28eea4:
    // 0x28eea4: 0x226920  .word       0x00226920                   # add         $t5, $at, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eea4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_28eea8:
    // 0x28eea8: 0x2268c0  .word       0x002268C0                   # sll         $t5, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eea8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28eeac:
    // 0x28eeac: 0x2267f0  tge         $at, $v0, 415
    ctx->pc = 0x28eeacu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eeb0:
    // 0x28eeb0: 0x226660  .word       0x00226660                   # add         $t4, $at, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eeb0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_28eeb4:
    // 0x28eeb4: 0x226630  tge         $at, $v0, 408
    ctx->pc = 0x28eeb4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eeb8:
    // 0x28eeb8: 0x2265a0  .word       0x002265A0                   # add         $t4, $at, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eeb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_28eebc:
    // 0x28eebc: 0x226530  tge         $at, $v0, 404
    ctx->pc = 0x28eebcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eec0:
    // 0x28eec0: 0x2265e0  .word       0x002265E0                   # add         $t4, $at, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eec0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_28eec4:
    // 0x28eec4: 0x2262e0  .word       0x002262E0                   # add         $t4, $at, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eec4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_28eec8:
    // 0x28eec8: 0x226190  .word       0x00226190                   # mfhi        $t4 # 00220180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eec8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_28eecc:
    // 0x28eecc: 0x225f80  .word       0x00225F80                   # sll         $t3, $v0, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eeccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_28eed0:
    // 0x28eed0: 0x225f00  .word       0x00225F00                   # sll         $t3, $v0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eed0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
label_28eed4:
    // 0x28eed4: 0x225e60  .word       0x00225E60                   # add         $t3, $at, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eed4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_28eed8:
    // 0x28eed8: 0x225d70  tge         $at, $v0, 373
    ctx->pc = 0x28eed8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eedc:
    // 0x28eedc: 0x225d10  .word       0x00225D10                   # mfhi        $t3 # 00220500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eedcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_28eee0:
    // 0x28eee0: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eee0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eee4:
    // 0x28eee4: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eee4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eee8:
    // 0x28eee8: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eee8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eeec:
    // 0x28eeec: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eeecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eef0:
    // 0x28eef0: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eef0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eef4:
    // 0x28eef4: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eef4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eef8:
    // 0x28eef8: 0x225cf0  tge         $at, $v0, 371
    ctx->pc = 0x28eef8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28eefc:
    // 0x28eefc: 0x225d00  .word       0x00225D00                   # sll         $t3, $v0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_28ef00:
    // 0x28ef00: 0x9080504  j           func_4201410
label_28ef04:
    if (ctx->pc == 0x28EF04u) {
        ctx->pc = 0x28EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF00u;
        // 0x28ef04: 0x4080004  tgei        $zero, 0x4 (Delay Slot)
        if (GPR_S64(ctx, 0) >= (int64_t)(int32_t)4) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF08u;
        goto label_28ef08;
    }
    ctx->pc = 0x28EF00u;
    ctx->pc = 0x28EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF00u;
    // 0x28ef04: 0x4080004  tgei        $zero, 0x4 (Delay Slot)
    if (GPR_S64(ctx, 0) >= (int64_t)(int32_t)4) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4201410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4201410u, 0x28EF00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EF08u;
label_28ef08:
    // 0x28ef08: 0x3030000  .word       0x03030000                   # sll         $zero, $v1, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef08u;
    
label_28ef0c:
    // 0x28ef0c: 0x9030400  j           func_40C1000
label_28ef10:
    if (ctx->pc == 0x28EF10u) {
        ctx->pc = 0x28EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF0Cu;
        // 0x28ef10: 0x46010e  .word       0x0046010E                   # INVALID     $v0, $a2, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28EF10 raw=0x0046010E");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF14u;
        goto label_28ef14;
    }
    ctx->pc = 0x28EF0Cu;
    ctx->pc = 0x28EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF0Cu;
    // 0x28ef10: 0x46010e  .word       0x0046010E                   # INVALID     $v0, $a2, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28EF10 raw=0x0046010E");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1000u, 0x28EF0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EF14u;
label_28ef14:
    // 0x28ef14: 0x1402c6  .word       0x001402C6                   # srlv        $zero, $s4, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_28ef18:
    // 0x28ef18: 0x640311  .word       0x00640311                   # mthi        $v1 # 00040300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef18u;
    ctx->hi = GPR_U64(ctx, 3);
label_28ef1c:
    // 0x28ef1c: 0x3e87fff  .word       0x03E87FFF                   # dsra32      $t7, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef1cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 8) >> (32 + 31));
label_28ef20:
    // 0x28ef20: 0x28ef10  .word       0x0028EF10                   # mfhi        $sp # 00280700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef20u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_28ef24:
    // 0x28ef24: 0x2d0418  .word       0x002D0418                   # mult        $zero, $at, $t5 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ef24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28ef28:
    // 0x28ef28: 0x2d0430  tge         $at, $t5, 16
    ctx->pc = 0x28ef28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_28ef2c:
    // 0x28ef2c: 0x2d0420  .word       0x002D0420                   # add         $zero, $at, $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28ef30:
    // 0x28ef30: 0x2d0424  .word       0x002D0424                   # and         $zero, $at, $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_28ef34:
    // 0x28ef34: 0x2d0428  .word       0x002D0428                   # mfsa        $zero # 002D0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ef34u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28ef38:
    // 0x28ef38: 0x2d042c  .word       0x002D042C                   # dadd        $zero, $at, $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 13); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28ef3c:
    // 0x28ef3c: 0x0  nop
    ctx->pc = 0x28ef3cu;
    // NOP
label_28ef40:
    // 0x28ef40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28ef40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28ef44:
    // 0x28ef44: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28ef44u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28ef48:
    // 0x28ef48: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28ef48u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28ef4c:
    // 0x28ef4c: 0x0  nop
    ctx->pc = 0x28ef4cu;
    // NOP
label_28ef50:
    // 0x28ef50: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28ef50u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28ef54:
    // 0x28ef54: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28ef58:
    if (ctx->pc == 0x28EF58u) {
        ctx->pc = 0x28EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF54u;
        // 0x28ef58: 0x40c00000  ctc0        $zero, Index (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28EF58 raw=0x40C00000");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF5Cu;
        goto label_28ef5c;
    }
    ctx->pc = 0x28EF54u;
    {
        const bool branch_taken_0x28ef54 = (false);
        ctx->pc = 0x28EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF54u;
        // 0x28ef58: 0x40c00000  ctc0        $zero, Index (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28EF58 raw=0x40C00000");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef54) {
            ctx->pc = 0x28EF58u;
            goto label_28ef58;
        }
    }
    ctx->pc = 0x28EF5Cu;
label_28ef5c:
    // 0x28ef5c: 0x0  nop
    ctx->pc = 0x28ef5cu;
    // NOP
label_28ef60:
    // 0x28ef60: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef60u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF60 raw=0x40400000");
 /* MITIGATED */
label_28ef64:
    // 0x28ef64: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef64u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF64 raw=0x40400000");
 /* MITIGATED */
label_28ef68:
    // 0x28ef68: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef68u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF68 raw=0x40400000");
 /* MITIGATED */
label_28ef6c:
    // 0x28ef6c: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef6cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF6C raw=0x40400000");
 /* MITIGATED */
label_28ef70:
    // 0x28ef70: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef70u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF70 raw=0x40400000");
 /* MITIGATED */
label_28ef74:
    // 0x28ef74: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28ef74u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28EF74 raw=0x40C00000");
 /* MITIGATED */
label_28ef78:
    // 0x28ef78: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x28ef78u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28EF78 raw=0x40400000");
 /* MITIGATED */
label_28ef7c:
    // 0x28ef7c: 0x0  nop
    ctx->pc = 0x28ef7cu;
    // NOP
label_28ef80:
    // 0x28ef80: 0x960000  .word       0x00960000                   # sll         $zero, $s6, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef80u;
    
label_28ef84:
    // 0x28ef84: 0xff38fe0c  sd          $t8, -0x1F4($t9)
    ctx->pc = 0x28ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 4294966796), GPR_U64(ctx, 24));
label_28ef88:
    // 0x28ef88: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28ef8c:
    // 0x28ef8c: 0xff38  dsll        $ra, $zero, 28
    ctx->pc = 0x28ef8cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 28);
label_28ef90:
    // 0x28ef90: 0x7d0046  .word       0x007D0046                   # srlv        $zero, $sp, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef90u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 29), GPR_U32(ctx, 3) & 0x1F));
label_28ef94:
    // 0x28ef94: 0x7afe0c  .word       0x007AFE0C                   # syscall     1016 # 007A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef94u;
    ctx->pc = 0x28EF98u;
runtime->handleSyscall(rdram, ctx, 0x1EBF8u);
label_28ef98:
    // 0x28ef98: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ef98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28EF98 raw=0x0000007D");
 /* MITIGATED */
label_28ef9c:
    // 0x28ef9c: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x28ef9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_28efa0:
    // 0x28efa0: 0xfef30064  sd          $s3, 0x64($s7)
    ctx->pc = 0x28efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 100), GPR_U64(ctx, 19));
label_28efa4:
    // 0x28efa4: 0xff6ffe0c  sd          $t7, -0x1F4($k1)
    ctx->pc = 0x28efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294966796), GPR_U64(ctx, 15));
label_28efa8:
    // 0x28efa8: 0xfef3  tltu        $zero, $zero, 1019
    ctx->pc = 0x28efa8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28efac:
    // 0x28efac: 0xff6f  .word       0x0000FF6F                   # dsubu       $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28efacu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28efb0:
    // 0x28efb0: 0xc80000  .word       0x00C80000                   # sll         $zero, $t0, 0 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28efb0u;
    
label_28efb4:
    // 0x28efb4: 0xe73201f4  swc1        $f18, 0x1F4($t9)
    ctx->pc = 0x28efb4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 500), bits); }
label_28efb8:
    // 0x28efb8: 0x3e800c8  .word       0x03E800C8                   # jr          $ra # 000800C0 <InstrIdType: CPU_SPECIAL>
label_28efbc:
    if (ctx->pc == 0x28EFBCu) {
        ctx->pc = 0x28EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFB8u;
        // 0x28efbc: 0xe732  tlt         $zero, $zero, 924 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFC0u;
        goto label_28efc0;
    }
    ctx->pc = 0x28EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFB8u;
        // 0x28efbc: 0xe732  tlt         $zero, $zero, 924 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EFC0u;
label_28efc0:
    // 0x28efc0: 0x190001e  ddiv        $zero, $t4, $s0
    ctx->pc = 0x28efc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28EFC0 raw=0x0190001E");
 /* MITIGATED */
label_28efc4:
    // 0x28efc4: 0xe7fa01f4  swc1        $f26, 0x1F4($ra)
    ctx->pc = 0x28efc4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 31), 500), bits); }
label_28efc8:
    // 0x28efc8: 0x3e80190  .word       0x03E80190                   # mfhi        $zero # 03E80180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28efc8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28efcc:
    // 0x28efcc: 0xe7fa  dsrl        $gp, $zero, 31
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> 31);
label_28efd0:
    // 0x28efd0: 0x12c0014  dsllv       $zero, $t4, $t1
    ctx->pc = 0x28efd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) << (GPR_U32(ctx, 9) & 0x3F));
label_28efd4:
    // 0x28efd4: 0xe7c801f4  swc1        $f8, 0x1F4($fp)
    ctx->pc = 0x28efd4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 500), bits); }
label_28efd8:
    // 0x28efd8: 0x3e8012c  .word       0x03E8012C                   # dadd        $zero, $ra, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28efd8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 31); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28efdc:
    // 0x28efdc: 0xe7c8  .word       0x0000E7C8                   # jr          $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
label_28efe0:
    if (ctx->pc == 0x28EFE0u) {
        ctx->pc = 0x28EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFDCu;
        // 0x28efe0: 0xc80028  .word       0x00C80028                   # mfsa        $zero # 00C80000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFE4u;
        goto label_28efe4;
    }
    ctx->pc = 0x28EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFDCu;
        // 0x28efe0: 0xc80028  .word       0x00C80028                   # mfsa        $zero # 00C80000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EFE4u;
label_28efe4:
    // 0x28efe4: 0xe73201f4  swc1        $f18, 0x1F4($t9)
    ctx->pc = 0x28efe4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 500), bits); }
label_28efe8:
    // 0x28efe8: 0x3e800c8  .word       0x03E800C8                   # jr          $ra # 000800C0 <InstrIdType: CPU_SPECIAL>
label_28efec:
    if (ctx->pc == 0x28EFECu) {
        ctx->pc = 0x28EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFE8u;
        // 0x28efec: 0xe732  tlt         $zero, $zero, 924 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFF0u;
        goto label_28eff0;
    }
    ctx->pc = 0x28EFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFE8u;
        // 0x28efec: 0xe732  tlt         $zero, $zero, 924 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EFF0u;
label_28eff0:
    // 0x28eff0: 0x4600e800  add.s       $f0, $f29, $f0
    ctx->pc = 0x28eff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
label_28eff4:
    // 0x28eff4: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28eff8:
    // 0x28eff8: 0x476b5a00  .word       0x476B5A00                   # INVALID     $k1, $t3, 0x5A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28eff8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28EFF8 raw=0x476B5A00");
 /* MITIGATED */
label_28effc:
    // 0x28effc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28effcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f000:
    // 0x28f000: 0x0  nop
    ctx->pc = 0x28f000u;
    // NOP
label_28f004:
    // 0x28f004: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28f004u;
    // CACHE instruction (ignored)
label_28f008:
    // 0x28f008: 0x0  nop
    ctx->pc = 0x28f008u;
    // NOP
label_28f00c:
    // 0x28f00c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f00cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f010:
    // 0x28f010: 0x0  nop
    ctx->pc = 0x28f010u;
    // NOP
label_28f014:
    // 0x28f014: 0x0  nop
    ctx->pc = 0x28f014u;
    // NOP
label_28f018:
    // 0x28f018: 0x0  nop
    ctx->pc = 0x28f018u;
    // NOP
label_28f01c:
    // 0x28f01c: 0x0  nop
    ctx->pc = 0x28f01cu;
    // NOP
label_28f020:
    // 0x28f020: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f020u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F020 raw=0x45C35000");
 /* MITIGATED */
label_28f024:
    // 0x28f024: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f028:
    // 0x28f028: 0x47713600  .word       0x47713600                   # INVALID     $k1, $s1, 0x3600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f028u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F028 raw=0x47713600");
 /* MITIGATED */
label_28f02c:
    // 0x28f02c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f02cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f030:
    // 0x28f030: 0x0  nop
    ctx->pc = 0x28f030u;
    // NOP
label_28f034:
    // 0x28f034: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f034u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f038:
    // 0x28f038: 0x0  nop
    ctx->pc = 0x28f038u;
    // NOP
label_28f03c:
    // 0x28f03c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f03cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f040:
    // 0x28f040: 0x0  nop
    ctx->pc = 0x28f040u;
    // NOP
label_28f044:
    // 0x28f044: 0x0  nop
    ctx->pc = 0x28f044u;
    // NOP
label_28f048:
    // 0x28f048: 0x0  nop
    ctx->pc = 0x28f048u;
    // NOP
label_28f04c:
    // 0x28f04c: 0x0  nop
    ctx->pc = 0x28f04cu;
    // NOP
label_28f050:
    // 0x28f050: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f050u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F050 raw=0x45C35000");
 /* MITIGATED */
label_28f054:
    // 0x28f054: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f058:
    // 0x28f058: 0x47751e00  .word       0x47751E00                   # INVALID     $k1, $s5, 0x1E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f058u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F058 raw=0x47751E00");
 /* MITIGATED */
label_28f05c:
    // 0x28f05c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f05cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f060:
    // 0x28f060: 0x0  nop
    ctx->pc = 0x28f060u;
    // NOP
label_28f064:
    // 0x28f064: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f064u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f068:
    // 0x28f068: 0x0  nop
    ctx->pc = 0x28f068u;
    // NOP
label_28f06c:
    // 0x28f06c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f06cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f070:
    // 0x28f070: 0x0  nop
    ctx->pc = 0x28f070u;
    // NOP
label_28f074:
    // 0x28f074: 0x0  nop
    ctx->pc = 0x28f074u;
    // NOP
label_28f078:
    // 0x28f078: 0x0  nop
    ctx->pc = 0x28f078u;
    // NOP
label_28f07c:
    // 0x28f07c: 0x0  nop
    ctx->pc = 0x28f07cu;
    // NOP
label_28f080:
    // 0x28f080: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f080u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F080 raw=0x45C35000");
 /* MITIGATED */
label_28f084:
    // 0x28f084: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f088:
    // 0x28f088: 0x47771200  .word       0x47771200                   # INVALID     $k1, $s7, 0x1200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f088u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F088 raw=0x47771200");
 /* MITIGATED */
label_28f08c:
    // 0x28f08c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f08cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f090:
    // 0x28f090: 0x0  nop
    ctx->pc = 0x28f090u;
    // NOP
label_28f094:
    // 0x28f094: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f094u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f098:
    // 0x28f098: 0x0  nop
    ctx->pc = 0x28f098u;
    // NOP
label_28f09c:
    // 0x28f09c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f09cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x28f0a0u;
    return;
}

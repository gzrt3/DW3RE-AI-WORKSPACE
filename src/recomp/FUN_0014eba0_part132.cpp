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


void FUN_0014eba0_part132(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18eb10u: goto label_18eb10;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb1cu: goto label_18eb1c;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb30u: goto label_18eb30;
        case 0x18eb34u: goto label_18eb34;
        case 0x18eb38u: goto label_18eb38;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb40u: goto label_18eb40;
        case 0x18eb44u: goto label_18eb44;
        case 0x18eb48u: goto label_18eb48;
        case 0x18eb4cu: goto label_18eb4c;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb54u: goto label_18eb54;
        case 0x18eb58u: goto label_18eb58;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb64u: goto label_18eb64;
        case 0x18eb68u: goto label_18eb68;
        case 0x18eb6cu: goto label_18eb6c;
        case 0x18eb70u: goto label_18eb70;
        case 0x18eb74u: goto label_18eb74;
        case 0x18eb78u: goto label_18eb78;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb80u: goto label_18eb80;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb88u: goto label_18eb88;
        case 0x18eb8cu: goto label_18eb8c;
        case 0x18eb90u: goto label_18eb90;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eb98u: goto label_18eb98;
        case 0x18eb9cu: goto label_18eb9c;
        case 0x18eba0u: goto label_18eba0;
        case 0x18eba4u: goto label_18eba4;
        case 0x18eba8u: goto label_18eba8;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebb0u: goto label_18ebb0;
        case 0x18ebb4u: goto label_18ebb4;
        case 0x18ebb8u: goto label_18ebb8;
        case 0x18ebbcu: goto label_18ebbc;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ebc4u: goto label_18ebc4;
        case 0x18ebc8u: goto label_18ebc8;
        case 0x18ebccu: goto label_18ebcc;
        case 0x18ebd0u: goto label_18ebd0;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ebd8u: goto label_18ebd8;
        case 0x18ebdcu: goto label_18ebdc;
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ebe4u: goto label_18ebe4;
        case 0x18ebe8u: goto label_18ebe8;
        case 0x18ebecu: goto label_18ebec;
        case 0x18ebf0u: goto label_18ebf0;
        case 0x18ebf4u: goto label_18ebf4;
        case 0x18ebf8u: goto label_18ebf8;
        case 0x18ebfcu: goto label_18ebfc;
        case 0x18ec00u: goto label_18ec00;
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec08u: goto label_18ec08;
        case 0x18ec0cu: goto label_18ec0c;
        case 0x18ec10u: goto label_18ec10;
        case 0x18ec14u: goto label_18ec14;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec1cu: goto label_18ec1c;
        case 0x18ec20u: goto label_18ec20;
        case 0x18ec24u: goto label_18ec24;
        case 0x18ec28u: goto label_18ec28;
        case 0x18ec2cu: goto label_18ec2c;
        case 0x18ec30u: goto label_18ec30;
        case 0x18ec34u: goto label_18ec34;
        case 0x18ec38u: goto label_18ec38;
        case 0x18ec3cu: goto label_18ec3c;
        case 0x18ec40u: goto label_18ec40;
        case 0x18ec44u: goto label_18ec44;
        case 0x18ec48u: goto label_18ec48;
        case 0x18ec4cu: goto label_18ec4c;
        case 0x18ec50u: goto label_18ec50;
        case 0x18ec54u: goto label_18ec54;
        case 0x18ec58u: goto label_18ec58;
        case 0x18ec5cu: goto label_18ec5c;
        case 0x18ec60u: goto label_18ec60;
        case 0x18ec64u: goto label_18ec64;
        case 0x18ec68u: goto label_18ec68;
        case 0x18ec6cu: goto label_18ec6c;
        case 0x18ec70u: goto label_18ec70;
        case 0x18ec74u: goto label_18ec74;
        case 0x18ec78u: goto label_18ec78;
        case 0x18ec7cu: goto label_18ec7c;
        case 0x18ec80u: goto label_18ec80;
        case 0x18ec84u: goto label_18ec84;
        case 0x18ec88u: goto label_18ec88;
        case 0x18ec8cu: goto label_18ec8c;
        case 0x18ec90u: goto label_18ec90;
        case 0x18ec94u: goto label_18ec94;
        case 0x18ec98u: goto label_18ec98;
        case 0x18ec9cu: goto label_18ec9c;
        case 0x18eca0u: goto label_18eca0;
        case 0x18eca4u: goto label_18eca4;
        case 0x18eca8u: goto label_18eca8;
        case 0x18ecacu: goto label_18ecac;
        case 0x18ecb0u: goto label_18ecb0;
        case 0x18ecb4u: goto label_18ecb4;
        case 0x18ecb8u: goto label_18ecb8;
        case 0x18ecbcu: goto label_18ecbc;
        case 0x18ecc0u: goto label_18ecc0;
        case 0x18ecc4u: goto label_18ecc4;
        case 0x18ecc8u: goto label_18ecc8;
        case 0x18ecccu: goto label_18eccc;
        case 0x18ecd0u: goto label_18ecd0;
        case 0x18ecd4u: goto label_18ecd4;
        case 0x18ecd8u: goto label_18ecd8;
        case 0x18ecdcu: goto label_18ecdc;
        case 0x18ece0u: goto label_18ece0;
        case 0x18ece4u: goto label_18ece4;
        case 0x18ece8u: goto label_18ece8;
        case 0x18ececu: goto label_18ecec;
        case 0x18ecf0u: goto label_18ecf0;
        case 0x18ecf4u: goto label_18ecf4;
        case 0x18ecf8u: goto label_18ecf8;
        case 0x18ecfcu: goto label_18ecfc;
        case 0x18ed00u: goto label_18ed00;
        case 0x18ed04u: goto label_18ed04;
        case 0x18ed08u: goto label_18ed08;
        case 0x18ed0cu: goto label_18ed0c;
        case 0x18ed10u: goto label_18ed10;
        case 0x18ed14u: goto label_18ed14;
        case 0x18ed18u: goto label_18ed18;
        case 0x18ed1cu: goto label_18ed1c;
        case 0x18ed20u: goto label_18ed20;
        case 0x18ed24u: goto label_18ed24;
        case 0x18ed28u: goto label_18ed28;
        case 0x18ed2cu: goto label_18ed2c;
        case 0x18ed30u: goto label_18ed30;
        case 0x18ed34u: goto label_18ed34;
        case 0x18ed38u: goto label_18ed38;
        case 0x18ed3cu: goto label_18ed3c;
        case 0x18ed40u: goto label_18ed40;
        case 0x18ed44u: goto label_18ed44;
        case 0x18ed48u: goto label_18ed48;
        case 0x18ed4cu: goto label_18ed4c;
        case 0x18ed50u: goto label_18ed50;
        case 0x18ed54u: goto label_18ed54;
        case 0x18ed58u: goto label_18ed58;
        case 0x18ed5cu: goto label_18ed5c;
        case 0x18ed60u: goto label_18ed60;
        case 0x18ed64u: goto label_18ed64;
        case 0x18ed68u: goto label_18ed68;
        case 0x18ed6cu: goto label_18ed6c;
        case 0x18ed70u: goto label_18ed70;
        case 0x18ed74u: goto label_18ed74;
        case 0x18ed78u: goto label_18ed78;
        case 0x18ed7cu: goto label_18ed7c;
        case 0x18ed80u: goto label_18ed80;
        case 0x18ed84u: goto label_18ed84;
        case 0x18ed88u: goto label_18ed88;
        case 0x18ed8cu: goto label_18ed8c;
        case 0x18ed90u: goto label_18ed90;
        case 0x18ed94u: goto label_18ed94;
        case 0x18ed98u: goto label_18ed98;
        case 0x18ed9cu: goto label_18ed9c;
        case 0x18eda0u: goto label_18eda0;
        case 0x18eda4u: goto label_18eda4;
        case 0x18eda8u: goto label_18eda8;
        case 0x18edacu: goto label_18edac;
        case 0x18edb0u: goto label_18edb0;
        case 0x18edb4u: goto label_18edb4;
        case 0x18edb8u: goto label_18edb8;
        case 0x18edbcu: goto label_18edbc;
        case 0x18edc0u: goto label_18edc0;
        case 0x18edc4u: goto label_18edc4;
        case 0x18edc8u: goto label_18edc8;
        case 0x18edccu: goto label_18edcc;
        case 0x18edd0u: goto label_18edd0;
        case 0x18edd4u: goto label_18edd4;
        case 0x18edd8u: goto label_18edd8;
        case 0x18eddcu: goto label_18eddc;
        case 0x18ede0u: goto label_18ede0;
        case 0x18ede4u: goto label_18ede4;
        case 0x18ede8u: goto label_18ede8;
        case 0x18edecu: goto label_18edec;
        case 0x18edf0u: goto label_18edf0;
        case 0x18edf4u: goto label_18edf4;
        case 0x18edf8u: goto label_18edf8;
        case 0x18edfcu: goto label_18edfc;
        case 0x18ee00u: goto label_18ee00;
        case 0x18ee04u: goto label_18ee04;
        case 0x18ee08u: goto label_18ee08;
        case 0x18ee0cu: goto label_18ee0c;
        case 0x18ee10u: goto label_18ee10;
        case 0x18ee14u: goto label_18ee14;
        case 0x18ee18u: goto label_18ee18;
        case 0x18ee1cu: goto label_18ee1c;
        case 0x18ee20u: goto label_18ee20;
        case 0x18ee24u: goto label_18ee24;
        case 0x18ee28u: goto label_18ee28;
        case 0x18ee2cu: goto label_18ee2c;
        case 0x18ee30u: goto label_18ee30;
        case 0x18ee34u: goto label_18ee34;
        case 0x18ee38u: goto label_18ee38;
        case 0x18ee3cu: goto label_18ee3c;
        case 0x18ee40u: goto label_18ee40;
        case 0x18ee44u: goto label_18ee44;
        case 0x18ee48u: goto label_18ee48;
        case 0x18ee4cu: goto label_18ee4c;
        case 0x18ee50u: goto label_18ee50;
        case 0x18ee54u: goto label_18ee54;
        case 0x18ee58u: goto label_18ee58;
        case 0x18ee5cu: goto label_18ee5c;
        case 0x18ee60u: goto label_18ee60;
        case 0x18ee64u: goto label_18ee64;
        case 0x18ee68u: goto label_18ee68;
        case 0x18ee6cu: goto label_18ee6c;
        case 0x18ee70u: goto label_18ee70;
        case 0x18ee74u: goto label_18ee74;
        case 0x18ee78u: goto label_18ee78;
        case 0x18ee7cu: goto label_18ee7c;
        case 0x18ee80u: goto label_18ee80;
        case 0x18ee84u: goto label_18ee84;
        case 0x18ee88u: goto label_18ee88;
        case 0x18ee8cu: goto label_18ee8c;
        case 0x18ee90u: goto label_18ee90;
        case 0x18ee94u: goto label_18ee94;
        case 0x18ee98u: goto label_18ee98;
        case 0x18ee9cu: goto label_18ee9c;
        case 0x18eea0u: goto label_18eea0;
        case 0x18eea4u: goto label_18eea4;
        case 0x18eea8u: goto label_18eea8;
        case 0x18eeacu: goto label_18eeac;
        case 0x18eeb0u: goto label_18eeb0;
        case 0x18eeb4u: goto label_18eeb4;
        case 0x18eeb8u: goto label_18eeb8;
        case 0x18eebcu: goto label_18eebc;
        case 0x18eec0u: goto label_18eec0;
        case 0x18eec4u: goto label_18eec4;
        case 0x18eec8u: goto label_18eec8;
        case 0x18eeccu: goto label_18eecc;
        case 0x18eed0u: goto label_18eed0;
        case 0x18eed4u: goto label_18eed4;
        case 0x18eed8u: goto label_18eed8;
        case 0x18eedcu: goto label_18eedc;
        case 0x18eee0u: goto label_18eee0;
        case 0x18eee4u: goto label_18eee4;
        case 0x18eee8u: goto label_18eee8;
        case 0x18eeecu: goto label_18eeec;
        case 0x18eef0u: goto label_18eef0;
        case 0x18eef4u: goto label_18eef4;
        case 0x18eef8u: goto label_18eef8;
        case 0x18eefcu: goto label_18eefc;
        case 0x18ef00u: goto label_18ef00;
        case 0x18ef04u: goto label_18ef04;
        case 0x18ef08u: goto label_18ef08;
        case 0x18ef0cu: goto label_18ef0c;
        case 0x18ef10u: goto label_18ef10;
        case 0x18ef14u: goto label_18ef14;
        case 0x18ef18u: goto label_18ef18;
        case 0x18ef1cu: goto label_18ef1c;
        case 0x18ef20u: goto label_18ef20;
        case 0x18ef24u: goto label_18ef24;
        case 0x18ef28u: goto label_18ef28;
        case 0x18ef2cu: goto label_18ef2c;
        case 0x18ef30u: goto label_18ef30;
        case 0x18ef34u: goto label_18ef34;
        case 0x18ef38u: goto label_18ef38;
        case 0x18ef3cu: goto label_18ef3c;
        case 0x18ef40u: goto label_18ef40;
        case 0x18ef44u: goto label_18ef44;
        case 0x18ef48u: goto label_18ef48;
        case 0x18ef4cu: goto label_18ef4c;
        case 0x18ef50u: goto label_18ef50;
        case 0x18ef54u: goto label_18ef54;
        case 0x18ef58u: goto label_18ef58;
        case 0x18ef5cu: goto label_18ef5c;
        case 0x18ef60u: goto label_18ef60;
        case 0x18ef64u: goto label_18ef64;
        case 0x18ef68u: goto label_18ef68;
        case 0x18ef6cu: goto label_18ef6c;
        case 0x18ef70u: goto label_18ef70;
        case 0x18ef74u: goto label_18ef74;
        case 0x18ef78u: goto label_18ef78;
        case 0x18ef7cu: goto label_18ef7c;
        case 0x18ef80u: goto label_18ef80;
        case 0x18ef84u: goto label_18ef84;
        case 0x18ef88u: goto label_18ef88;
        case 0x18ef8cu: goto label_18ef8c;
        case 0x18ef90u: goto label_18ef90;
        case 0x18ef94u: goto label_18ef94;
        case 0x18ef98u: goto label_18ef98;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18efa0u: goto label_18efa0;
        case 0x18efa4u: goto label_18efa4;
        case 0x18efa8u: goto label_18efa8;
        case 0x18efacu: goto label_18efac;
        case 0x18efb0u: goto label_18efb0;
        case 0x18efb4u: goto label_18efb4;
        case 0x18efb8u: goto label_18efb8;
        case 0x18efbcu: goto label_18efbc;
        case 0x18efc0u: goto label_18efc0;
        case 0x18efc4u: goto label_18efc4;
        case 0x18efc8u: goto label_18efc8;
        case 0x18efccu: goto label_18efcc;
        case 0x18efd0u: goto label_18efd0;
        case 0x18efd4u: goto label_18efd4;
        case 0x18efd8u: goto label_18efd8;
        case 0x18efdcu: goto label_18efdc;
        case 0x18efe0u: goto label_18efe0;
        case 0x18efe4u: goto label_18efe4;
        case 0x18efe8u: goto label_18efe8;
        case 0x18efecu: goto label_18efec;
        case 0x18eff0u: goto label_18eff0;
        case 0x18eff4u: goto label_18eff4;
        case 0x18eff8u: goto label_18eff8;
        case 0x18effcu: goto label_18effc;
        case 0x18f000u: goto label_18f000;
        case 0x18f004u: goto label_18f004;
        case 0x18f008u: goto label_18f008;
        case 0x18f00cu: goto label_18f00c;
        case 0x18f010u: goto label_18f010;
        case 0x18f014u: goto label_18f014;
        case 0x18f018u: goto label_18f018;
        case 0x18f01cu: goto label_18f01c;
        case 0x18f020u: goto label_18f020;
        case 0x18f024u: goto label_18f024;
        case 0x18f028u: goto label_18f028;
        case 0x18f02cu: goto label_18f02c;
        case 0x18f030u: goto label_18f030;
        case 0x18f034u: goto label_18f034;
        case 0x18f038u: goto label_18f038;
        case 0x18f03cu: goto label_18f03c;
        case 0x18f040u: goto label_18f040;
        case 0x18f044u: goto label_18f044;
        case 0x18f048u: goto label_18f048;
        case 0x18f04cu: goto label_18f04c;
        case 0x18f050u: goto label_18f050;
        case 0x18f054u: goto label_18f054;
        case 0x18f058u: goto label_18f058;
        case 0x18f05cu: goto label_18f05c;
        case 0x18f060u: goto label_18f060;
        case 0x18f064u: goto label_18f064;
        case 0x18f068u: goto label_18f068;
        case 0x18f06cu: goto label_18f06c;
        case 0x18f070u: goto label_18f070;
        case 0x18f074u: goto label_18f074;
        case 0x18f078u: goto label_18f078;
        case 0x18f07cu: goto label_18f07c;
        case 0x18f080u: goto label_18f080;
        case 0x18f084u: goto label_18f084;
        case 0x18f088u: goto label_18f088;
        case 0x18f08cu: goto label_18f08c;
        case 0x18f090u: goto label_18f090;
        case 0x18f094u: goto label_18f094;
        case 0x18f098u: goto label_18f098;
        case 0x18f09cu: goto label_18f09c;
        case 0x18f0a0u: goto label_18f0a0;
        case 0x18f0a4u: goto label_18f0a4;
        case 0x18f0a8u: goto label_18f0a8;
        case 0x18f0acu: goto label_18f0ac;
        case 0x18f0b0u: goto label_18f0b0;
        case 0x18f0b4u: goto label_18f0b4;
        case 0x18f0b8u: goto label_18f0b8;
        case 0x18f0bcu: goto label_18f0bc;
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f0c8u: goto label_18f0c8;
        case 0x18f0ccu: goto label_18f0cc;
        case 0x18f0d0u: goto label_18f0d0;
        case 0x18f0d4u: goto label_18f0d4;
        case 0x18f0d8u: goto label_18f0d8;
        case 0x18f0dcu: goto label_18f0dc;
        case 0x18f0e0u: goto label_18f0e0;
        case 0x18f0e4u: goto label_18f0e4;
        case 0x18f0e8u: goto label_18f0e8;
        case 0x18f0ecu: goto label_18f0ec;
        case 0x18f0f0u: goto label_18f0f0;
        case 0x18f0f4u: goto label_18f0f4;
        case 0x18f0f8u: goto label_18f0f8;
        case 0x18f0fcu: goto label_18f0fc;
        case 0x18f100u: goto label_18f100;
        case 0x18f104u: goto label_18f104;
        case 0x18f108u: goto label_18f108;
        case 0x18f10cu: goto label_18f10c;
        case 0x18f110u: goto label_18f110;
        case 0x18f114u: goto label_18f114;
        case 0x18f118u: goto label_18f118;
        case 0x18f11cu: goto label_18f11c;
        case 0x18f120u: goto label_18f120;
        case 0x18f124u: goto label_18f124;
        case 0x18f128u: goto label_18f128;
        case 0x18f12cu: goto label_18f12c;
        case 0x18f130u: goto label_18f130;
        case 0x18f134u: goto label_18f134;
        case 0x18f138u: goto label_18f138;
        case 0x18f13cu: goto label_18f13c;
        case 0x18f140u: goto label_18f140;
        case 0x18f144u: goto label_18f144;
        case 0x18f148u: goto label_18f148;
        case 0x18f14cu: goto label_18f14c;
        case 0x18f150u: goto label_18f150;
        case 0x18f154u: goto label_18f154;
        case 0x18f158u: goto label_18f158;
        case 0x18f15cu: goto label_18f15c;
        case 0x18f160u: goto label_18f160;
        case 0x18f164u: goto label_18f164;
        case 0x18f168u: goto label_18f168;
        case 0x18f16cu: goto label_18f16c;
        case 0x18f170u: goto label_18f170;
        case 0x18f174u: goto label_18f174;
        case 0x18f178u: goto label_18f178;
        case 0x18f17cu: goto label_18f17c;
        case 0x18f180u: goto label_18f180;
        case 0x18f184u: goto label_18f184;
        case 0x18f188u: goto label_18f188;
        case 0x18f18cu: goto label_18f18c;
        case 0x18f190u: goto label_18f190;
        case 0x18f194u: goto label_18f194;
        case 0x18f198u: goto label_18f198;
        case 0x18f19cu: goto label_18f19c;
        case 0x18f1a0u: goto label_18f1a0;
        case 0x18f1a4u: goto label_18f1a4;
        case 0x18f1a8u: goto label_18f1a8;
        case 0x18f1acu: goto label_18f1ac;
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1b4u: goto label_18f1b4;
        case 0x18f1b8u: goto label_18f1b8;
        case 0x18f1bcu: goto label_18f1bc;
        case 0x18f1c0u: goto label_18f1c0;
        case 0x18f1c4u: goto label_18f1c4;
        case 0x18f1c8u: goto label_18f1c8;
        case 0x18f1ccu: goto label_18f1cc;
        case 0x18f1d0u: goto label_18f1d0;
        case 0x18f1d4u: goto label_18f1d4;
        case 0x18f1d8u: goto label_18f1d8;
        case 0x18f1dcu: goto label_18f1dc;
        case 0x18f1e0u: goto label_18f1e0;
        case 0x18f1e4u: goto label_18f1e4;
        case 0x18f1e8u: goto label_18f1e8;
        case 0x18f1ecu: goto label_18f1ec;
        case 0x18f1f0u: goto label_18f1f0;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f1f8u: goto label_18f1f8;
        case 0x18f1fcu: goto label_18f1fc;
        case 0x18f200u: goto label_18f200;
        case 0x18f204u: goto label_18f204;
        case 0x18f208u: goto label_18f208;
        case 0x18f20cu: goto label_18f20c;
        case 0x18f210u: goto label_18f210;
        case 0x18f214u: goto label_18f214;
        case 0x18f218u: goto label_18f218;
        case 0x18f21cu: goto label_18f21c;
        case 0x18f220u: goto label_18f220;
        case 0x18f224u: goto label_18f224;
        case 0x18f228u: goto label_18f228;
        case 0x18f22cu: goto label_18f22c;
        case 0x18f230u: goto label_18f230;
        case 0x18f234u: goto label_18f234;
        case 0x18f238u: goto label_18f238;
        case 0x18f23cu: goto label_18f23c;
        case 0x18f240u: goto label_18f240;
        case 0x18f244u: goto label_18f244;
        case 0x18f248u: goto label_18f248;
        case 0x18f24cu: goto label_18f24c;
        case 0x18f250u: goto label_18f250;
        case 0x18f254u: goto label_18f254;
        case 0x18f258u: goto label_18f258;
        case 0x18f25cu: goto label_18f25c;
        case 0x18f260u: goto label_18f260;
        case 0x18f264u: goto label_18f264;
        case 0x18f268u: goto label_18f268;
        case 0x18f26cu: goto label_18f26c;
        case 0x18f270u: goto label_18f270;
        case 0x18f274u: goto label_18f274;
        case 0x18f278u: goto label_18f278;
        case 0x18f27cu: goto label_18f27c;
        case 0x18f280u: goto label_18f280;
        case 0x18f284u: goto label_18f284;
        case 0x18f288u: goto label_18f288;
        case 0x18f28cu: goto label_18f28c;
        case 0x18f290u: goto label_18f290;
        case 0x18f294u: goto label_18f294;
        case 0x18f298u: goto label_18f298;
        case 0x18f29cu: goto label_18f29c;
        case 0x18f2a0u: goto label_18f2a0;
        case 0x18f2a4u: goto label_18f2a4;
        case 0x18f2a8u: goto label_18f2a8;
        case 0x18f2acu: goto label_18f2ac;
        case 0x18f2b0u: goto label_18f2b0;
        case 0x18f2b4u: goto label_18f2b4;
        case 0x18f2b8u: goto label_18f2b8;
        case 0x18f2bcu: goto label_18f2bc;
        case 0x18f2c0u: goto label_18f2c0;
        case 0x18f2c4u: goto label_18f2c4;
        case 0x18f2c8u: goto label_18f2c8;
        case 0x18f2ccu: goto label_18f2cc;
        case 0x18f2d0u: goto label_18f2d0;
        case 0x18f2d4u: goto label_18f2d4;
        case 0x18f2d8u: goto label_18f2d8;
        case 0x18f2dcu: goto label_18f2dc;
        default: return;
    }

label_18eb10:
    // 0x18eb10: 0x0  nop
    ctx->pc = 0x18eb10u;
    // NOP
label_18eb14:
    // 0x18eb14: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18eb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18eb18:
    // 0x18eb18: 0x0  nop
    ctx->pc = 0x18eb18u;
    // NOP
label_18eb1c:
    // 0x18eb1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_18eb20:
    if (ctx->pc == 0x18EB20u) {
        ctx->pc = 0x18EB24u;
        goto label_18eb24;
    }
    ctx->pc = 0x18EB1Cu;
    {
        const bool branch_taken_0x18eb1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18eb1c) {
            ctx->pc = 0x18EB64u;
            goto label_18eb64;
        }
    }
    ctx->pc = 0x18EB24u;
label_18eb24:
    // 0x18eb24: 0xc7808834  lwc1        $f0, -0x77CC($gp)
    ctx->pc = 0x18eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18eb28:
    // 0x18eb28: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_18eb2c:
    // 0x18eb2c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18eb30:
    // 0x18eb30: 0x34428880  ori         $v0, $v0, 0x8880
    ctx->pc = 0x18eb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34944);
label_18eb34:
    // 0x18eb34: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18eb34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18eb38:
    // 0x18eb38: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18eb3c:
    // 0x18eb3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18eb40:
    // 0x18eb40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18eb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18eb44:
    // 0x18eb44: 0x24c69930  addiu       $a2, $a2, -0x66D0
    ctx->pc = 0x18eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940976));
label_18eb48:
    // 0x18eb48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18eb48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18eb4c:
    // 0x18eb4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18eb4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18eb50:
    // 0x18eb50: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18eb50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18eb54:
    // 0x18eb54: 0xc063d10  jal         func_18F440
label_18eb58:
    if (ctx->pc == 0x18EB58u) {
        ctx->pc = 0x18EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB54u;
        // 0x18eb58: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB5Cu;
        goto label_18eb5c;
    }
    ctx->pc = 0x18EB54u;
    SET_GPR_U32(ctx, 31, 0x18EB5Cu);
    ctx->pc = 0x18EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB54u;
    // 0x18eb58: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18EB5Cu;
label_18eb5c:
    // 0x18eb5c: 0x1000000f  b           . + 4 + (0xF << 2)
label_18eb60:
    if (ctx->pc == 0x18EB60u) {
        ctx->pc = 0x18EB64u;
        goto label_18eb64;
    }
    ctx->pc = 0x18EB5Cu;
    {
        const bool branch_taken_0x18eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb5c) {
            ctx->pc = 0x18EB9Cu;
            goto label_18eb9c;
        }
    }
    ctx->pc = 0x18EB64u;
label_18eb64:
    // 0x18eb64: 0xc7808834  lwc1        $f0, -0x77CC($gp)
    ctx->pc = 0x18eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18eb68:
    // 0x18eb68: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_18eb6c:
    // 0x18eb6c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18eb70:
    // 0x18eb70: 0x34428880  ori         $v0, $v0, 0x8880
    ctx->pc = 0x18eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34944);
label_18eb74:
    // 0x18eb74: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18eb74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18eb78:
    // 0x18eb78: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18eb7c:
    // 0x18eb7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18eb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18eb80:
    // 0x18eb80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18eb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18eb84:
    // 0x18eb84: 0x24c69930  addiu       $a2, $a2, -0x66D0
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940976));
label_18eb88:
    // 0x18eb88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18eb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18eb8c:
    // 0x18eb8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18eb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18eb90:
    // 0x18eb90: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18eb90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18eb94:
    // 0x18eb94: 0xc063d10  jal         func_18F440
label_18eb98:
    if (ctx->pc == 0x18EB98u) {
        ctx->pc = 0x18EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB94u;
        // 0x18eb98: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB9Cu;
        goto label_18eb9c;
    }
    ctx->pc = 0x18EB94u;
    SET_GPR_U32(ctx, 31, 0x18EB9Cu);
    ctx->pc = 0x18EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB94u;
    // 0x18eb98: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18EB9Cu;
label_18eb9c:
    // 0x18eb9c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_18eba0:
    // 0x18eba0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18eba4:
    // 0x18eba4: 0x24846380  addiu       $a0, $a0, 0x6380
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
label_18eba8:
    // 0x18eba8: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18ebac:
    // 0x18ebac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18ebb0:
    // 0x18ebb0: 0x24e79940  addiu       $a3, $a3, -0x66C0
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940992));
label_18ebb4:
    // 0x18ebb4: 0xc064978  jal         func_1925E0
label_18ebb8:
    if (ctx->pc == 0x18EBB8u) {
        ctx->pc = 0x18EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBB4u;
        // 0x18ebb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBBCu;
        goto label_18ebbc;
    }
    ctx->pc = 0x18EBB4u;
    SET_GPR_U32(ctx, 31, 0x18EBBCu);
    ctx->pc = 0x18EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBB4u;
    // 0x18ebb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18EBBCu;
label_18ebbc:
    // 0x18ebbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18ebc0:
    if (ctx->pc == 0x18EBC0u) {
        ctx->pc = 0x18EBC4u;
        goto label_18ebc4;
    }
    ctx->pc = 0x18EBBCu;
    {
        const bool branch_taken_0x18ebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebbc) {
            ctx->pc = 0x18EBE4u;
            goto label_18ebe4;
        }
    }
    ctx->pc = 0x18EBC4u;
label_18ebc4:
    // 0x18ebc4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x18ebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebc8:
    // 0x18ebc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18ebcc:
    // 0x18ebcc: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x18ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_18ebd0:
    // 0x18ebd0: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x18ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebd4:
    // 0x18ebd4: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18ebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18ebd8:
    // 0x18ebd8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x18ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebdc:
    // 0x18ebdc: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x18ebdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_18ebe0:
    // 0x18ebe0: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x18ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_18ebe4:
    // 0x18ebe4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18ebe8:
    // 0x18ebe8: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_18ebec:
    // 0x18ebec: 0xc066e26  jal         func_19B898
label_18ebf0:
    if (ctx->pc == 0x18EBF0u) {
        ctx->pc = 0x18EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBECu;
        // 0x18ebf0: 0x24a59930  addiu       $a1, $a1, -0x66D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBF4u;
        goto label_18ebf4;
    }
    ctx->pc = 0x18EBECu;
    SET_GPR_U32(ctx, 31, 0x18EBF4u);
    ctx->pc = 0x18EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBECu;
    // 0x18ebf0: 0x24a59930  addiu       $a1, $a1, -0x66D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EBF4u;
label_18ebf4:
    // 0x18ebf4: 0xc7808834  lwc1        $f0, -0x77CC($gp)
    ctx->pc = 0x18ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebf8:
    // 0x18ebf8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18ebfc:
    // 0x18ebfc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec00:
    // 0x18ec00: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x18ec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
label_18ec04:
    // 0x18ec04: 0xc066e44  jal         func_19B910
label_18ec08:
    if (ctx->pc == 0x18EC08u) {
        ctx->pc = 0x18EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC04u;
        // 0x18ec08: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC0Cu;
        goto label_18ec0c;
    }
    ctx->pc = 0x18EC04u;
    SET_GPR_U32(ctx, 31, 0x18EC0Cu);
    ctx->pc = 0x18EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC04u;
    // 0x18ec08: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18EC0Cu;
label_18ec0c:
    // 0x18ec0c: 0xc68c0028  lwc1        $f12, 0x28($s4)
    ctx->pc = 0x18ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ec10:
    // 0x18ec10: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x18ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec14:
    // 0x18ec14: 0xc066e6c  jal         func_19B9B0
label_18ec18:
    if (ctx->pc == 0x18EC18u) {
        ctx->pc = 0x18EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC14u;
        // 0x18ec18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC1Cu;
        goto label_18ec1c;
    }
    ctx->pc = 0x18EC14u;
    SET_GPR_U32(ctx, 31, 0x18EC1Cu);
    ctx->pc = 0x18EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC14u;
    // 0x18ec18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x18EC1Cu;
label_18ec1c:
    // 0x18ec1c: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x18ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ec20:
    // 0x18ec20: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x18ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec24:
    // 0x18ec24: 0xc066e96  jal         func_19BA58
label_18ec28:
    if (ctx->pc == 0x18EC28u) {
        ctx->pc = 0x18EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC24u;
        // 0x18ec28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC2Cu;
        goto label_18ec2c;
    }
    ctx->pc = 0x18EC24u;
    SET_GPR_U32(ctx, 31, 0x18EC2Cu);
    ctx->pc = 0x18EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC24u;
    // 0x18ec28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x18EC2Cu;
label_18ec2c:
    // 0x18ec2c: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x18ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ec30:
    // 0x18ec30: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x18ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec34:
    // 0x18ec34: 0xc066ec0  jal         func_19BB00
label_18ec38:
    if (ctx->pc == 0x18EC38u) {
        ctx->pc = 0x18EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC34u;
        // 0x18ec38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC3Cu;
        goto label_18ec3c;
    }
    ctx->pc = 0x18EC34u;
    SET_GPR_U32(ctx, 31, 0x18EC3Cu);
    ctx->pc = 0x18EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC34u;
    // 0x18ec38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18EC3Cu;
label_18ec3c:
    // 0x18ec3c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18ec40:
    // 0x18ec40: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18ec44:
    // 0x18ec44: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x18ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec48:
    // 0x18ec48: 0xc066d7a  jal         func_19B5E8
label_18ec4c:
    if (ctx->pc == 0x18EC4Cu) {
        ctx->pc = 0x18EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC48u;
        // 0x18ec4c: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC50u;
        goto label_18ec50;
    }
    ctx->pc = 0x18EC48u;
    SET_GPR_U32(ctx, 31, 0x18EC50u);
    ctx->pc = 0x18EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC48u;
    // 0x18ec4c: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18EC50u;
label_18ec50:
    // 0x18ec50: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18ec54:
    // 0x18ec54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18ec58:
    // 0x18ec58: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x18ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_18ec5c:
    // 0x18ec5c: 0xc066d7a  jal         func_19B5E8
label_18ec60:
    if (ctx->pc == 0x18EC60u) {
        ctx->pc = 0x18EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC5Cu;
        // 0x18ec60: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC64u;
        goto label_18ec64;
    }
    ctx->pc = 0x18EC5Cu;
    SET_GPR_U32(ctx, 31, 0x18EC64u);
    ctx->pc = 0x18EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC5Cu;
    // 0x18ec60: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18EC64u;
label_18ec64:
    // 0x18ec64: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18ec68:
    // 0x18ec68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_18ec6c:
    // 0x18ec6c: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_18ec70:
    // 0x18ec70: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18ec74:
    // 0x18ec74: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18ec78:
    // 0x18ec78: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18ec78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18ec7c:
    // 0x18ec7c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_18ec80:
    // 0x18ec80: 0xc066f08  jal         func_19BC20
label_18ec84:
    if (ctx->pc == 0x18EC84u) {
        ctx->pc = 0x18EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC80u;
        // 0x18ec84: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC88u;
        goto label_18ec88;
    }
    ctx->pc = 0x18EC80u;
    SET_GPR_U32(ctx, 31, 0x18EC88u);
    ctx->pc = 0x18EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC80u;
    // 0x18ec84: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x18EC88u;
label_18ec88:
    // 0x18ec88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18ec8c:
    // 0x18ec8c: 0xc0643e4  jal         func_190F90
label_18ec90:
    if (ctx->pc == 0x18EC90u) {
        ctx->pc = 0x18EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC8Cu;
        // 0x18ec90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC94u;
        goto label_18ec94;
    }
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC8Cu;
    // 0x18ec90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    { ctx->pc = 0x190f90; return; }
    ctx->pc = 0x18EC94u;
label_18ec94:
    // 0x18ec94: 0x1000014f  b           . + 4 + (0x14F << 2)
label_18ec98:
    if (ctx->pc == 0x18EC98u) {
        ctx->pc = 0x18EC9Cu;
        goto label_18ec9c;
    }
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18EC9Cu;
label_18ec9c:
    // 0x18ec9c: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18eca0:
    // 0x18eca0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18eca4:
    // 0x18eca4: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18eca8:
    // 0x18eca8: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18ecac:
    // 0x18ecac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18ecb0:
    // 0x18ecb0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ecb4:
    // 0x18ecb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18ecb8:
    // 0x18ecb8: 0xc066e26  jal         func_19B898
label_18ecbc:
    if (ctx->pc == 0x18ECBCu) {
        ctx->pc = 0x18ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECB8u;
        // 0x18ecbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECC0u;
        goto label_18ecc0;
    }
    ctx->pc = 0x18ECB8u;
    SET_GPR_U32(ctx, 31, 0x18ECC0u);
    ctx->pc = 0x18ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECB8u;
    // 0x18ecbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18ECC0u;
label_18ecc0:
    // 0x18ecc0: 0x10000144  b           . + 4 + (0x144 << 2)
label_18ecc4:
    if (ctx->pc == 0x18ECC4u) {
        ctx->pc = 0x18ECC8u;
        goto label_18ecc8;
    }
    ctx->pc = 0x18ECC0u;
    {
        const bool branch_taken_0x18ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecc0) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18ECC8u;
label_18ecc8:
    // 0x18ecc8: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_18eccc:
    // 0x18eccc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_18ecd0:
    if (ctx->pc == 0x18ECD0u) {
        ctx->pc = 0x18ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECCCu;
        // 0x18ecd0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECD4u;
        goto label_18ecd4;
    }
    ctx->pc = 0x18ECCCu;
    {
        const bool branch_taken_0x18eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECCCu;
        // 0x18ecd0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eccc) {
            ctx->pc = 0x18ED84u;
            goto label_18ed84;
        }
    }
    ctx->pc = 0x18ECD4u;
label_18ecd4:
    // 0x18ecd4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_18ecd8:
    // 0x18ecd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ecd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ecdc:
    // 0x18ecdc: 0x0  nop
    ctx->pc = 0x18ecdcu;
    // NOP
label_18ece0:
    // 0x18ece0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18ece0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ece4:
    // 0x18ece4: 0x0  nop
    ctx->pc = 0x18ece4u;
    // NOP
label_18ece8:
    // 0x18ece8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_18ecec:
    if (ctx->pc == 0x18ECECu) {
        ctx->pc = 0x18ECF0u;
        goto label_18ecf0;
    }
    ctx->pc = 0x18ECE8u;
    {
        const bool branch_taken_0x18ece8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ece8) {
            ctx->pc = 0x18ED38u;
            goto label_18ed38;
        }
    }
    ctx->pc = 0x18ECF0u;
label_18ecf0:
    // 0x18ecf0: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x18ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ecf4:
    // 0x18ecf4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_18ecf8:
    // 0x18ecf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ecf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ecfc:
    // 0x18ecfc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18ed00:
    // 0x18ed00: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18ed00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18ed04:
    // 0x18ed04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18ed08:
    // 0x18ed08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18ed0c:
    // 0x18ed0c: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x18ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_18ed10:
    // 0x18ed10: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x18ed10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_18ed14:
    // 0x18ed14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18ed14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18ed18:
    // 0x18ed18: 0x0  nop
    ctx->pc = 0x18ed18u;
    // NOP
label_18ed1c:
    // 0x18ed1c: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18ed1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18ed20:
    // 0x18ed20: 0x0  nop
    ctx->pc = 0x18ed20u;
    // NOP
label_18ed24:
    // 0x18ed24: 0x0  nop
    ctx->pc = 0x18ed24u;
    // NOP
label_18ed28:
    // 0x18ed28: 0xc063d10  jal         func_18F440
label_18ed2c:
    if (ctx->pc == 0x18ED2Cu) {
        ctx->pc = 0x18ED30u;
        goto label_18ed30;
    }
    ctx->pc = 0x18ED28u;
    SET_GPR_U32(ctx, 31, 0x18ED30u);
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18ED30u;
label_18ed30:
    // 0x18ed30: 0x10000128  b           . + 4 + (0x128 << 2)
label_18ed34:
    if (ctx->pc == 0x18ED34u) {
        ctx->pc = 0x18ED38u;
        goto label_18ed38;
    }
    ctx->pc = 0x18ED30u;
    {
        const bool branch_taken_0x18ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed30) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18ED38u;
label_18ed38:
    // 0x18ed38: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x18ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ed3c:
    // 0x18ed3c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_18ed40:
    // 0x18ed40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ed40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ed44:
    // 0x18ed44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18ed48:
    // 0x18ed48: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18ed48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18ed4c:
    // 0x18ed4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18ed50:
    // 0x18ed50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18ed54:
    // 0x18ed54: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_18ed58:
    // 0x18ed58: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x18ed58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_18ed5c:
    // 0x18ed5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18ed5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18ed60:
    // 0x18ed60: 0x0  nop
    ctx->pc = 0x18ed60u;
    // NOP
label_18ed64:
    // 0x18ed64: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18ed64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18ed68:
    // 0x18ed68: 0x0  nop
    ctx->pc = 0x18ed68u;
    // NOP
label_18ed6c:
    // 0x18ed6c: 0x0  nop
    ctx->pc = 0x18ed6cu;
    // NOP
label_18ed70:
    // 0x18ed70: 0xc063d10  jal         func_18F440
label_18ed74:
    if (ctx->pc == 0x18ED74u) {
        ctx->pc = 0x18ED78u;
        goto label_18ed78;
    }
    ctx->pc = 0x18ED70u;
    SET_GPR_U32(ctx, 31, 0x18ED78u);
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18ED78u;
label_18ed78:
    // 0x18ed78: 0x10000116  b           . + 4 + (0x116 << 2)
label_18ed7c:
    if (ctx->pc == 0x18ED7Cu) {
        ctx->pc = 0x18ED80u;
        goto label_18ed80;
    }
    ctx->pc = 0x18ED78u;
    {
        const bool branch_taken_0x18ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed78) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18ED80u;
label_18ed80:
    // 0x18ed80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ed84:
    // 0x18ed84: 0x1623003c  bne         $s1, $v1, . + 4 + (0x3C << 2)
label_18ed88:
    if (ctx->pc == 0x18ED88u) {
        ctx->pc = 0x18ED8Cu;
        goto label_18ed8c;
    }
    ctx->pc = 0x18ED84u;
    {
        const bool branch_taken_0x18ed84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ed84) {
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18ED8Cu;
label_18ed8c:
    // 0x18ed8c: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
label_18ed90:
    if (ctx->pc == 0x18ED90u) {
        ctx->pc = 0x18ED94u;
        goto label_18ed94;
    }
    ctx->pc = 0x18ED8Cu;
    {
        const bool branch_taken_0x18ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ed8c) {
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18ED94u;
label_18ed94:
    // 0x18ed94: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18ed98:
    // 0x18ed98: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18ed9c:
    // 0x18ed9c: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
label_18eda0:
    // 0x18eda0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eda4:
    // 0x18eda4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18eda4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18eda8:
    // 0x18eda8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18eda8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18edac:
    // 0x18edac: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18edacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18edb0:
    // 0x18edb0: 0x4a0002ff  vnop
    ctx->pc = 0x18edb0u;
    // NOP operation, no action needed for VU0
label_18edb4:
    // 0x18edb4: 0x4a0002ff  vnop
    ctx->pc = 0x18edb4u;
    // NOP operation, no action needed for VU0
label_18edb8:
    // 0x18edb8: 0x4a0002ff  vnop
    ctx->pc = 0x18edb8u;
    // NOP operation, no action needed for VU0
label_18edbc:
    // 0x18edbc: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18edbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18edc0:
    // 0x18edc0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18edc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18edc4:
    // 0x18edc4: 0x4a0002ff  vnop
    ctx->pc = 0x18edc4u;
    // NOP operation, no action needed for VU0
label_18edc8:
    // 0x18edc8: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18edc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18edcc:
    // 0x18edcc: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18edccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18edd0:
    // 0x18edd0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18edd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18edd4:
    // 0x18edd4: 0x4a0002ff  vnop
    ctx->pc = 0x18edd4u;
    // NOP operation, no action needed for VU0
label_18edd8:
    // 0x18edd8: 0x4a0002ff  vnop
    ctx->pc = 0x18edd8u;
    // NOP operation, no action needed for VU0
label_18eddc:
    // 0x18eddc: 0x4a0002ff  vnop
    ctx->pc = 0x18eddcu;
    // NOP operation, no action needed for VU0
label_18ede0:
    // 0x18ede0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ede0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18ede4:
    // 0x18ede4: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ede4u;
    // VWAITQ (Q already resolved in this runtime)
label_18ede8:
    // 0x18ede8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ede8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18edec:
    // 0x18edec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18edecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18edf0:
    // 0x18edf0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18edf4:
    // 0x18edf4: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x18edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
label_18edf8:
    // 0x18edf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18edf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18edfc:
    // 0x18edfc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18edfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ee00:
    // 0x18ee00: 0x4a0002ff  vnop
    ctx->pc = 0x18ee00u;
    // NOP operation, no action needed for VU0
label_18ee04:
    // 0x18ee04: 0x4a0002ff  vnop
    ctx->pc = 0x18ee04u;
    // NOP operation, no action needed for VU0
label_18ee08:
    // 0x18ee08: 0x4a0002ff  vnop
    ctx->pc = 0x18ee08u;
    // NOP operation, no action needed for VU0
label_18ee0c:
    // 0x18ee0c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18ee0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ee10:
    // 0x18ee10: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ee10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18ee14:
    // 0x18ee14: 0x4a0002ff  vnop
    ctx->pc = 0x18ee14u;
    // NOP operation, no action needed for VU0
label_18ee18:
    // 0x18ee18: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ee18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18ee1c:
    // 0x18ee1c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18ee1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18ee20:
    // 0x18ee20: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18ee20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ee24:
    // 0x18ee24: 0x4a0002ff  vnop
    ctx->pc = 0x18ee24u;
    // NOP operation, no action needed for VU0
label_18ee28:
    // 0x18ee28: 0x4a0002ff  vnop
    ctx->pc = 0x18ee28u;
    // NOP operation, no action needed for VU0
label_18ee2c:
    // 0x18ee2c: 0x4a0002ff  vnop
    ctx->pc = 0x18ee2cu;
    // NOP operation, no action needed for VU0
label_18ee30:
    // 0x18ee30: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ee30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18ee34:
    // 0x18ee34: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ee34u;
    // VWAITQ (Q already resolved in this runtime)
label_18ee38:
    // 0x18ee38: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ee38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18ee3c:
    // 0x18ee3c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18ee3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ee40:
    // 0x18ee40: 0x0  nop
    ctx->pc = 0x18ee40u;
    // NOP
label_18ee44:
    // 0x18ee44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ee44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ee48:
    // 0x18ee48: 0x0  nop
    ctx->pc = 0x18ee48u;
    // NOP
label_18ee4c:
    // 0x18ee4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18ee50:
    if (ctx->pc == 0x18EE50u) {
        ctx->pc = 0x18EE54u;
        goto label_18ee54;
    }
    ctx->pc = 0x18EE4Cu;
    {
        const bool branch_taken_0x18ee4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ee4c) {
            ctx->pc = 0x18EE64u;
            goto label_18ee64;
        }
    }
    ctx->pc = 0x18EE54u;
label_18ee54:
    // 0x18ee54: 0xc066e26  jal         func_19B898
label_18ee58:
    if (ctx->pc == 0x18EE58u) {
        ctx->pc = 0x18EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE54u;
        // 0x18ee58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE5Cu;
        goto label_18ee5c;
    }
    ctx->pc = 0x18EE54u;
    SET_GPR_U32(ctx, 31, 0x18EE5Cu);
    ctx->pc = 0x18EE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE54u;
    // 0x18ee58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EE5Cu;
label_18ee5c:
    // 0x18ee5c: 0x100000dd  b           . + 4 + (0xDD << 2)
label_18ee60:
    if (ctx->pc == 0x18EE60u) {
        ctx->pc = 0x18EE64u;
        goto label_18ee64;
    }
    ctx->pc = 0x18EE5Cu;
    {
        const bool branch_taken_0x18ee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee5c) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18EE64u;
label_18ee64:
    // 0x18ee64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ee68:
    // 0x18ee68: 0xc066e26  jal         func_19B898
label_18ee6c:
    if (ctx->pc == 0x18EE6Cu) {
        ctx->pc = 0x18EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE68u;
        // 0x18ee6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE70u;
        goto label_18ee70;
    }
    ctx->pc = 0x18EE68u;
    SET_GPR_U32(ctx, 31, 0x18EE70u);
    ctx->pc = 0x18EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE68u;
    // 0x18ee6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EE70u;
label_18ee70:
    // 0x18ee70: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_18ee74:
    if (ctx->pc == 0x18EE74u) {
        ctx->pc = 0x18EE78u;
        goto label_18ee78;
    }
    ctx->pc = 0x18EE70u;
    {
        const bool branch_taken_0x18ee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee70) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18EE78u;
label_18ee78:
    // 0x18ee78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ee7c:
    // 0x18ee7c: 0x1623003d  bne         $s1, $v1, . + 4 + (0x3D << 2)
label_18ee80:
    if (ctx->pc == 0x18EE80u) {
        ctx->pc = 0x18EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE7Cu;
        // 0x18ee80: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE84u;
        goto label_18ee84;
    }
    ctx->pc = 0x18EE7Cu;
    {
        const bool branch_taken_0x18ee7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE7Cu;
        // 0x18ee80: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee7c) {
            ctx->pc = 0x18EF74u;
            goto label_18ef74;
        }
    }
    ctx->pc = 0x18EE84u;
label_18ee84:
    // 0x18ee84: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_18ee88:
    if (ctx->pc == 0x18EE88u) {
        ctx->pc = 0x18EE8Cu;
        goto label_18ee8c;
    }
    ctx->pc = 0x18EE84u;
    {
        const bool branch_taken_0x18ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee84) {
            ctx->pc = 0x18EF70u;
            goto label_18ef70;
        }
    }
    ctx->pc = 0x18EE8Cu;
label_18ee8c:
    // 0x18ee8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18ee90:
    // 0x18ee90: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18ee94:
    // 0x18ee94: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
label_18ee98:
    // 0x18ee98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ee9c:
    // 0x18ee9c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18ee9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18eea0:
    // 0x18eea0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18eea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18eea4:
    // 0x18eea4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18eea8:
    // 0x18eea8: 0x4a0002ff  vnop
    ctx->pc = 0x18eea8u;
    // NOP operation, no action needed for VU0
label_18eeac:
    // 0x18eeac: 0x4a0002ff  vnop
    ctx->pc = 0x18eeacu;
    // NOP operation, no action needed for VU0
label_18eeb0:
    // 0x18eeb0: 0x4a0002ff  vnop
    ctx->pc = 0x18eeb0u;
    // NOP operation, no action needed for VU0
label_18eeb4:
    // 0x18eeb4: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18eeb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18eeb8:
    // 0x18eeb8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18eeb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18eebc:
    // 0x18eebc: 0x4a0002ff  vnop
    ctx->pc = 0x18eebcu;
    // NOP operation, no action needed for VU0
label_18eec0:
    // 0x18eec0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18eec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18eec4:
    // 0x18eec4: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18eec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18eec8:
    // 0x18eec8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18eec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18eecc:
    // 0x18eecc: 0x4a0002ff  vnop
    ctx->pc = 0x18eeccu;
    // NOP operation, no action needed for VU0
label_18eed0:
    // 0x18eed0: 0x4a0002ff  vnop
    ctx->pc = 0x18eed0u;
    // NOP operation, no action needed for VU0
label_18eed4:
    // 0x18eed4: 0x4a0002ff  vnop
    ctx->pc = 0x18eed4u;
    // NOP operation, no action needed for VU0
label_18eed8:
    // 0x18eed8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18eed8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18eedc:
    // 0x18eedc: 0x4a0003bf  vwaitq
    ctx->pc = 0x18eedcu;
    // VWAITQ (Q already resolved in this runtime)
label_18eee0:
    // 0x18eee0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18eee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18eee4:
    // 0x18eee4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18eee4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eee8:
    // 0x18eee8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18eeec:
    // 0x18eeec: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
label_18eef0:
    // 0x18eef0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18eef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18eef4:
    // 0x18eef4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18eef8:
    // 0x18eef8: 0x4a0002ff  vnop
    ctx->pc = 0x18eef8u;
    // NOP operation, no action needed for VU0
label_18eefc:
    // 0x18eefc: 0x4a0002ff  vnop
    ctx->pc = 0x18eefcu;
    // NOP operation, no action needed for VU0
label_18ef00:
    // 0x18ef00: 0x4a0002ff  vnop
    ctx->pc = 0x18ef00u;
    // NOP operation, no action needed for VU0
label_18ef04:
    // 0x18ef04: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18ef04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ef08:
    // 0x18ef08: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ef08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18ef0c:
    // 0x18ef0c: 0x4a0002ff  vnop
    ctx->pc = 0x18ef0cu;
    // NOP operation, no action needed for VU0
label_18ef10:
    // 0x18ef10: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ef10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18ef14:
    // 0x18ef14: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18ef14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18ef18:
    // 0x18ef18: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18ef18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ef1c:
    // 0x18ef1c: 0x4a0002ff  vnop
    ctx->pc = 0x18ef1cu;
    // NOP operation, no action needed for VU0
label_18ef20:
    // 0x18ef20: 0x4a0002ff  vnop
    ctx->pc = 0x18ef20u;
    // NOP operation, no action needed for VU0
label_18ef24:
    // 0x18ef24: 0x4a0002ff  vnop
    ctx->pc = 0x18ef24u;
    // NOP operation, no action needed for VU0
label_18ef28:
    // 0x18ef28: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ef28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18ef2c:
    // 0x18ef2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ef2cu;
    // VWAITQ (Q already resolved in this runtime)
label_18ef30:
    // 0x18ef30: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ef30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18ef34:
    // 0x18ef34: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18ef34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ef38:
    // 0x18ef38: 0x0  nop
    ctx->pc = 0x18ef38u;
    // NOP
label_18ef3c:
    // 0x18ef3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ef3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ef40:
    // 0x18ef40: 0x0  nop
    ctx->pc = 0x18ef40u;
    // NOP
label_18ef44:
    // 0x18ef44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18ef48:
    if (ctx->pc == 0x18EF48u) {
        ctx->pc = 0x18EF4Cu;
        goto label_18ef4c;
    }
    ctx->pc = 0x18EF44u;
    {
        const bool branch_taken_0x18ef44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ef44) {
            ctx->pc = 0x18EF5Cu;
            goto label_18ef5c;
        }
    }
    ctx->pc = 0x18EF4Cu;
label_18ef4c:
    // 0x18ef4c: 0xc066e26  jal         func_19B898
label_18ef50:
    if (ctx->pc == 0x18EF50u) {
        ctx->pc = 0x18EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF4Cu;
        // 0x18ef50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF54u;
        goto label_18ef54;
    }
    ctx->pc = 0x18EF4Cu;
    SET_GPR_U32(ctx, 31, 0x18EF54u);
    ctx->pc = 0x18EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF4Cu;
    // 0x18ef50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EF54u;
label_18ef54:
    // 0x18ef54: 0x1000009f  b           . + 4 + (0x9F << 2)
label_18ef58:
    if (ctx->pc == 0x18EF58u) {
        ctx->pc = 0x18EF5Cu;
        goto label_18ef5c;
    }
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18EF5Cu;
label_18ef5c:
    // 0x18ef5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ef5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ef60:
    // 0x18ef60: 0xc066e26  jal         func_19B898
label_18ef64:
    if (ctx->pc == 0x18EF64u) {
        ctx->pc = 0x18EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF60u;
        // 0x18ef64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF68u;
        goto label_18ef68;
    }
    ctx->pc = 0x18EF60u;
    SET_GPR_U32(ctx, 31, 0x18EF68u);
    ctx->pc = 0x18EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF60u;
    // 0x18ef64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EF68u;
label_18ef68:
    // 0x18ef68: 0x1000009a  b           . + 4 + (0x9A << 2)
label_18ef6c:
    if (ctx->pc == 0x18EF6Cu) {
        ctx->pc = 0x18EF70u;
        goto label_18ef70;
    }
    ctx->pc = 0x18EF68u;
    {
        const bool branch_taken_0x18ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef68) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18EF70u;
label_18ef70:
    // 0x18ef70: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x18ef70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_18ef74:
    // 0x18ef74: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
label_18ef78:
    if (ctx->pc == 0x18EF78u) {
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0x28410003  slti        $at, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF7Cu;
        goto label_18ef7c;
    }
    ctx->pc = 0x18EF74u;
    {
        const bool branch_taken_0x18ef74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0x28410003  slti        $at, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef74) {
            ctx->pc = 0x18F098u;
            goto label_18f098;
        }
    }
    ctx->pc = 0x18EF7Cu;
label_18ef7c:
    // 0x18ef7c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x18ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_18ef80:
    // 0x18ef80: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18ef84:
    // 0x18ef84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ef84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ef88:
    // 0x18ef88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ef8c:
    // 0x18ef8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ef90:
    // 0x18ef90: 0x10000032  b           . + 4 + (0x32 << 2)
label_18ef94:
    if (ctx->pc == 0x18EF94u) {
        ctx->pc = 0x18EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF90u;
        // 0x18ef94: 0x246362e0  addiu       $v1, $v1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF98u;
        goto label_18ef98;
    }
    ctx->pc = 0x18EF90u;
    {
        const bool branch_taken_0x18ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF90u;
        // 0x18ef94: 0x246362e0  addiu       $v1, $v1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef90) {
            ctx->pc = 0x18F05Cu;
            goto label_18f05c;
        }
    }
    ctx->pc = 0x18EF98u;
label_18ef98:
    // 0x18ef98: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18ef9c:
    // 0x18ef9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18efa0:
    // 0x18efa0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18efa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18efa4:
    // 0x18efa4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18efa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18efa8:
    // 0x18efa8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18efa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18efac:
    // 0x18efac: 0x4a0002ff  vnop
    ctx->pc = 0x18efacu;
    // NOP operation, no action needed for VU0
label_18efb0:
    // 0x18efb0: 0x4a0002ff  vnop
    ctx->pc = 0x18efb0u;
    // NOP operation, no action needed for VU0
label_18efb4:
    // 0x18efb4: 0x4a0002ff  vnop
    ctx->pc = 0x18efb4u;
    // NOP operation, no action needed for VU0
label_18efb8:
    // 0x18efb8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18efb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18efbc:
    // 0x18efbc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18efbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18efc0:
    // 0x18efc0: 0x4a0002ff  vnop
    ctx->pc = 0x18efc0u;
    // NOP operation, no action needed for VU0
label_18efc4:
    // 0x18efc4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18efc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18efc8:
    // 0x18efc8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18efc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18efcc:
    // 0x18efcc: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18efccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18efd0:
    // 0x18efd0: 0x4a0002ff  vnop
    ctx->pc = 0x18efd0u;
    // NOP operation, no action needed for VU0
label_18efd4:
    // 0x18efd4: 0x4a0002ff  vnop
    ctx->pc = 0x18efd4u;
    // NOP operation, no action needed for VU0
label_18efd8:
    // 0x18efd8: 0x4a0002ff  vnop
    ctx->pc = 0x18efd8u;
    // NOP operation, no action needed for VU0
label_18efdc:
    // 0x18efdc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18efdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18efe0:
    // 0x18efe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18efe0u;
    // VWAITQ (Q already resolved in this runtime)
label_18efe4:
    // 0x18efe4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18efe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18efe8:
    // 0x18efe8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18efe8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18efec:
    // 0x18efec: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18eff0:
    // 0x18eff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18eff4:
    // 0x18eff4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18eff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18eff8:
    // 0x18eff8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18effc:
    // 0x18effc: 0x4a0002ff  vnop
    ctx->pc = 0x18effcu;
    // NOP operation, no action needed for VU0
label_18f000:
    // 0x18f000: 0x4a0002ff  vnop
    ctx->pc = 0x18f000u;
    // NOP operation, no action needed for VU0
label_18f004:
    // 0x18f004: 0x4a0002ff  vnop
    ctx->pc = 0x18f004u;
    // NOP operation, no action needed for VU0
label_18f008:
    // 0x18f008: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18f00c:
    // 0x18f00c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f010:
    // 0x18f010: 0x4a0002ff  vnop
    ctx->pc = 0x18f010u;
    // NOP operation, no action needed for VU0
label_18f014:
    // 0x18f014: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f018:
    // 0x18f018: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f01c:
    // 0x18f01c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f01cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f020:
    // 0x18f020: 0x4a0002ff  vnop
    ctx->pc = 0x18f020u;
    // NOP operation, no action needed for VU0
label_18f024:
    // 0x18f024: 0x4a0002ff  vnop
    ctx->pc = 0x18f024u;
    // NOP operation, no action needed for VU0
label_18f028:
    // 0x18f028: 0x4a0002ff  vnop
    ctx->pc = 0x18f028u;
    // NOP operation, no action needed for VU0
label_18f02c:
    // 0x18f02c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f02cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f030:
    // 0x18f030: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f030u;
    // VWAITQ (Q already resolved in this runtime)
label_18f034:
    // 0x18f034: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f038:
    // 0x18f038: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18f038u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f03c:
    // 0x18f03c: 0x0  nop
    ctx->pc = 0x18f03cu;
    // NOP
label_18f040:
    // 0x18f040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f044:
    // 0x18f044: 0x0  nop
    ctx->pc = 0x18f044u;
    // NOP
label_18f048:
    // 0x18f048: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18f04c:
    if (ctx->pc == 0x18F04Cu) {
        ctx->pc = 0x18F050u;
        goto label_18f050;
    }
    ctx->pc = 0x18F048u;
    {
        const bool branch_taken_0x18f048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f048) {
            ctx->pc = 0x18F054u;
            goto label_18f054;
        }
    }
    ctx->pc = 0x18F050u;
label_18f050:
    // 0x18f050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18f050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f054:
    // 0x18f054: 0x0  nop
    ctx->pc = 0x18f054u;
    // NOP
label_18f058:
    // 0x18f058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18f05c:
    // 0x18f05c: 0x0  nop
    ctx->pc = 0x18f05cu;
    // NOP
label_18f060:
    // 0x18f060: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x18f060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_18f064:
    // 0x18f064: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_18f068:
    if (ctx->pc == 0x18F068u) {
        ctx->pc = 0x18F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F064u;
        // 0x18f068: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F06Cu;
        goto label_18f06c;
    }
    ctx->pc = 0x18F064u;
    {
        const bool branch_taken_0x18f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F064u;
        // 0x18f068: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f064) {
            ctx->pc = 0x18EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef9c;
        }
    }
    ctx->pc = 0x18F06Cu;
label_18f06c:
    // 0x18f06c: 0xaf848828  sw          $a0, -0x77D8($gp)
    ctx->pc = 0x18f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936616), GPR_U32(ctx, 4));
label_18f070:
    // 0x18f070: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18f074:
    // 0x18f074: 0x8f838828  lw          $v1, -0x77D8($gp)
    ctx->pc = 0x18f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
label_18f078:
    // 0x18f078: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18f07c:
    // 0x18f07c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18f080:
    // 0x18f080: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18f084:
    // 0x18f084: 0xc066e26  jal         func_19B898
label_18f088:
    if (ctx->pc == 0x18F088u) {
        ctx->pc = 0x18F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F084u;
        // 0x18f088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F08Cu;
        goto label_18f08c;
    }
    ctx->pc = 0x18F084u;
    SET_GPR_U32(ctx, 31, 0x18F08Cu);
    ctx->pc = 0x18F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F084u;
    // 0x18f088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F08Cu;
label_18f08c:
    // 0x18f08c: 0x10000051  b           . + 4 + (0x51 << 2)
label_18f090:
    if (ctx->pc == 0x18F090u) {
        ctx->pc = 0x18F094u;
        goto label_18f094;
    }
    ctx->pc = 0x18F08Cu;
    {
        const bool branch_taken_0x18f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f08c) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F094u;
label_18f094:
    // 0x18f094: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x18f094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_18f098:
    // 0x18f098: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
label_18f09c:
    if (ctx->pc == 0x18F09Cu) {
        ctx->pc = 0x18F0A0u;
        goto label_18f0a0;
    }
    ctx->pc = 0x18F098u;
    {
        const bool branch_taken_0x18f098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f098) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F0A0u;
label_18f0a0:
    // 0x18f0a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_18f0a4:
    // 0x18f0a4: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18f0a8:
    // 0x18f0a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18f0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f0ac:
    // 0x18f0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f0b0:
    // 0x18f0b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f0b4:
    // 0x18f0b4: 0x10000031  b           . + 4 + (0x31 << 2)
label_18f0b8:
    if (ctx->pc == 0x18F0B8u) {
        ctx->pc = 0x18F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B4u;
        // 0x18f0b8: 0x24846380  addiu       $a0, $a0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0BCu;
        goto label_18f0bc;
    }
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B4u;
        // 0x18f0b8: 0x24846380  addiu       $a0, $a0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F17Cu;
            goto label_18f17c;
        }
    }
    ctx->pc = 0x18F0BCu;
label_18f0bc:
    // 0x18f0bc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18f0c0:
    // 0x18f0c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18f0c4:
    // 0x18f0c4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18f0c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18f0c8:
    // 0x18f0c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18f0c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18f0cc:
    // 0x18f0cc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f0ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18f0d0:
    // 0x18f0d0: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d0u;
    // NOP operation, no action needed for VU0
label_18f0d4:
    // 0x18f0d4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d4u;
    // NOP operation, no action needed for VU0
label_18f0d8:
    // 0x18f0d8: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d8u;
    // NOP operation, no action needed for VU0
label_18f0dc:
    // 0x18f0dc: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18f0e0:
    // 0x18f0e0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f0e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f0e4:
    // 0x18f0e4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0e4u;
    // NOP operation, no action needed for VU0
label_18f0e8:
    // 0x18f0e8: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f0ec:
    // 0x18f0ec: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f0ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f0f0:
    // 0x18f0f0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f0f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f0f4:
    // 0x18f0f4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0f4u;
    // NOP operation, no action needed for VU0
label_18f0f8:
    // 0x18f0f8: 0x4a0002ff  vnop
    ctx->pc = 0x18f0f8u;
    // NOP operation, no action needed for VU0
label_18f0fc:
    // 0x18f0fc: 0x4a0002ff  vnop
    ctx->pc = 0x18f0fcu;
    // NOP operation, no action needed for VU0
label_18f100:
    // 0x18f100: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f100u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f104:
    // 0x18f104: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f104u;
    // VWAITQ (Q already resolved in this runtime)
label_18f108:
    // 0x18f108: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f10c:
    // 0x18f10c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18f10cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f110:
    // 0x18f110: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_18f114:
    // 0x18f114: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18f118:
    // 0x18f118: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18f118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18f11c:
    // 0x18f11c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f11cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18f120:
    // 0x18f120: 0x4a0002ff  vnop
    ctx->pc = 0x18f120u;
    // NOP operation, no action needed for VU0
label_18f124:
    // 0x18f124: 0x4a0002ff  vnop
    ctx->pc = 0x18f124u;
    // NOP operation, no action needed for VU0
label_18f128:
    // 0x18f128: 0x4a0002ff  vnop
    ctx->pc = 0x18f128u;
    // NOP operation, no action needed for VU0
label_18f12c:
    // 0x18f12c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18f130:
    // 0x18f130: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f134:
    // 0x18f134: 0x4a0002ff  vnop
    ctx->pc = 0x18f134u;
    // NOP operation, no action needed for VU0
label_18f138:
    // 0x18f138: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f13c:
    // 0x18f13c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f140:
    // 0x18f140: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f144:
    // 0x18f144: 0x4a0002ff  vnop
    ctx->pc = 0x18f144u;
    // NOP operation, no action needed for VU0
label_18f148:
    // 0x18f148: 0x4a0002ff  vnop
    ctx->pc = 0x18f148u;
    // NOP operation, no action needed for VU0
label_18f14c:
    // 0x18f14c: 0x4a0002ff  vnop
    ctx->pc = 0x18f14cu;
    // NOP operation, no action needed for VU0
label_18f150:
    // 0x18f150: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f150u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f154:
    // 0x18f154: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f154u;
    // VWAITQ (Q already resolved in this runtime)
label_18f158:
    // 0x18f158: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f15c:
    // 0x18f15c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18f15cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f160:
    // 0x18f160: 0x0  nop
    ctx->pc = 0x18f160u;
    // NOP
label_18f164:
    // 0x18f164: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f168:
    // 0x18f168: 0x0  nop
    ctx->pc = 0x18f168u;
    // NOP
label_18f16c:
    // 0x18f16c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18f170:
    if (ctx->pc == 0x18F170u) {
        ctx->pc = 0x18F174u;
        goto label_18f174;
    }
    ctx->pc = 0x18F16Cu;
    {
        const bool branch_taken_0x18f16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f16c) {
            ctx->pc = 0x18F178u;
            goto label_18f178;
        }
    }
    ctx->pc = 0x18F174u;
label_18f174:
    // 0x18f174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18f174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18f178:
    // 0x18f178: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18f17c:
    // 0x18f17c: 0x0  nop
    ctx->pc = 0x18f17cu;
    // NOP
label_18f180:
    // 0x18f180: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x18f180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18f184:
    // 0x18f184: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_18f188:
    if (ctx->pc == 0x18F188u) {
        ctx->pc = 0x18F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F184u;
        // 0x18f188: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F18Cu;
        goto label_18f18c;
    }
    ctx->pc = 0x18F184u;
    {
        const bool branch_taken_0x18f184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F184u;
        // 0x18f188: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f184) {
            ctx->pc = 0x18F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F18Cu;
label_18f18c:
    // 0x18f18c: 0xaf858824  sw          $a1, -0x77DC($gp)
    ctx->pc = 0x18f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936612), GPR_U32(ctx, 5));
label_18f190:
    // 0x18f190: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18f194:
    // 0x18f194: 0x8f838824  lw          $v1, -0x77DC($gp)
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936612)));
label_18f198:
    // 0x18f198: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18f19c:
    // 0x18f19c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18f1a0:
    // 0x18f1a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18f1a4:
    // 0x18f1a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18f1a8:
    // 0x18f1a8: 0xc066e26  jal         func_19B898
label_18f1ac:
    if (ctx->pc == 0x18F1ACu) {
        ctx->pc = 0x18F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A8u;
        // 0x18f1ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1B0u;
        goto label_18f1b0;
    }
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_18f1b4:
    if (ctx->pc == 0x18F1B4u) {
        ctx->pc = 0x18F1B8u;
        goto label_18f1b8;
    }
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F1B8u;
label_18f1b8:
    // 0x18f1b8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_18f1bc:
    if (ctx->pc == 0x18F1BCu) {
        ctx->pc = 0x18F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B8u;
        // 0x18f1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1C0u;
        goto label_18f1c0;
    }
    ctx->pc = 0x18F1B8u;
    {
        const bool branch_taken_0x18f1b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B8u;
        // 0x18f1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1b8) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F1C0u;
label_18f1c0:
    // 0x18f1c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18f1c4:
    if (ctx->pc == 0x18F1C4u) {
        ctx->pc = 0x18F1C8u;
        goto label_18f1c8;
    }
    ctx->pc = 0x18F1C0u;
    {
        const bool branch_taken_0x18f1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f1c0) {
            ctx->pc = 0x18F1D0u;
            goto label_18f1d0;
        }
    }
    ctx->pc = 0x18F1C8u;
label_18f1c8:
    // 0x18f1c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f1cc:
    if (ctx->pc == 0x18F1CCu) {
        ctx->pc = 0x18F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C8u;
        // 0x18f1cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1D0u;
        goto label_18f1d0;
    }
    ctx->pc = 0x18F1C8u;
    {
        const bool branch_taken_0x18f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C8u;
        // 0x18f1cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c8) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F1D0u;
label_18f1d0:
    // 0x18f1d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f1d4:
    // 0x18f1d4: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x18f1d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
label_18f1d8:
    // 0x18f1d8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_18f1dc:
    if (ctx->pc == 0x18F1DCu) {
        ctx->pc = 0x18F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1D8u;
        // 0x18f1dc: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1E0u;
        goto label_18f1e0;
    }
    ctx->pc = 0x18F1D8u;
    {
        const bool branch_taken_0x18f1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1D8u;
        // 0x18f1dc: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1d8) {
            ctx->pc = 0x18F258u;
            goto label_18f258;
        }
    }
    ctx->pc = 0x18F1E0u;
label_18f1e0:
    // 0x18f1e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18f1e4:
    // 0x18f1e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18f1e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18f1e8:
    // 0x18f1e8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18f1e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18f1ec:
    // 0x18f1ec: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f1ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18f1f0:
    // 0x18f1f0: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f0u;
    // NOP operation, no action needed for VU0
label_18f1f4:
    // 0x18f1f4: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f4u;
    // NOP operation, no action needed for VU0
label_18f1f8:
    // 0x18f1f8: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f8u;
    // NOP operation, no action needed for VU0
label_18f1fc:
    // 0x18f1fc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f200:
    // 0x18f200: 0x4a0002ff  vnop
    ctx->pc = 0x18f200u;
    // NOP operation, no action needed for VU0
label_18f204:
    // 0x18f204: 0x4a0002ff  vnop
    ctx->pc = 0x18f204u;
    // NOP operation, no action needed for VU0
label_18f208:
    // 0x18f208: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f20c:
    // 0x18f20c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f20cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f210:
    // 0x18f210: 0x4a0002ff  vnop
    ctx->pc = 0x18f210u;
    // NOP operation, no action needed for VU0
label_18f214:
    // 0x18f214: 0x4a0002ff  vnop
    ctx->pc = 0x18f214u;
    // NOP operation, no action needed for VU0
label_18f218:
    // 0x18f218: 0x4a0002ff  vnop
    ctx->pc = 0x18f218u;
    // NOP operation, no action needed for VU0
label_18f21c:
    // 0x18f21c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f21cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f220:
    // 0x18f220: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f220u;
    // VWAITQ (Q already resolved in this runtime)
label_18f224:
    // 0x18f224: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f228:
    // 0x18f228: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x18f228u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18f22c:
    // 0x18f22c: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x18f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
label_18f230:
    // 0x18f230: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f234:
    // 0x18f234: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18f238:
    // 0x18f238: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_18f23c:
    // 0x18f23c: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x18f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
label_18f240:
    // 0x18f240: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x18f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f244:
    // 0x18f244: 0xc7808820  lwc1        $f0, -0x77E0($gp)
    ctx->pc = 0x18f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f248:
    // 0x18f248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18f24c:
    // 0x18f24c: 0xc066e26  jal         func_19B898
label_18f250:
    if (ctx->pc == 0x18F250u) {
        ctx->pc = 0x18F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F24Cu;
        // 0x18f250: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F254u;
        goto label_18f254;
    }
    ctx->pc = 0x18F24Cu;
    SET_GPR_U32(ctx, 31, 0x18F254u);
    ctx->pc = 0x18F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F24Cu;
    // 0x18f250: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F254u;
label_18f254:
    // 0x18f254: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_18f258:
    // 0x18f258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f25c:
    // 0x18f25c: 0x0  nop
    ctx->pc = 0x18f25cu;
    // NOP
label_18f260:
    // 0x18f260: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18f260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f264:
    // 0x18f264: 0x0  nop
    ctx->pc = 0x18f264u;
    // NOP
label_18f268:
    // 0x18f268: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18f26c:
    if (ctx->pc == 0x18F26Cu) {
        ctx->pc = 0x18F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F268u;
        // 0x18f26c: 0xaf80881c  sw          $zero, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F270u;
        goto label_18f270;
    }
    ctx->pc = 0x18F268u;
    {
        const bool branch_taken_0x18f268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F268u;
        // 0x18f26c: 0xaf80881c  sw          $zero, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f268) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F270u;
label_18f270:
    // 0x18f270: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18f274:
    // 0x18f274: 0x10000010  b           . + 4 + (0x10 << 2)
label_18f278:
    if (ctx->pc == 0x18F278u) {
        ctx->pc = 0x18F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F274u;
        // 0x18f278: 0xaf82881c  sw          $v0, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F27Cu;
        goto label_18f27c;
    }
    ctx->pc = 0x18F274u;
    {
        const bool branch_taken_0x18f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F274u;
        // 0x18f278: 0xaf82881c  sw          $v0, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f274) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F27Cu;
label_18f27c:
    // 0x18f27c: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x18f27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f280:
    // 0x18f280: 0x0  nop
    ctx->pc = 0x18f280u;
    // NOP
label_18f284:
    // 0x18f284: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18f288:
    if (ctx->pc == 0x18F288u) {
        ctx->pc = 0x18F28Cu;
        goto label_18f28c;
    }
    ctx->pc = 0x18F284u;
    {
        const bool branch_taken_0x18f284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f284) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F28Cu;
label_18f28c:
    // 0x18f28c: 0x4600b881  sub.s       $f2, $f23, $f0
    ctx->pc = 0x18f28cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_18f290:
    // 0x18f290: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x18f290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_18f294:
    // 0x18f294: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18f298:
    // 0x18f298: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18f298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18f29c:
    // 0x18f29c: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x18f29cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_18f2a0:
    // 0x18f2a0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x18f2a0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_18f2a4:
    // 0x18f2a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18f2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f2a8:
    // 0x18f2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f2ac:
    // 0x18f2ac: 0x0  nop
    ctx->pc = 0x18f2acu;
    // NOP
label_18f2b0:
    // 0x18f2b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18f2b4:
    // 0x18f2b4: 0xe780881c  swc1        $f0, -0x77E4($gp)
    ctx->pc = 0x18f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), bits); }
label_18f2b8:
    // 0x18f2b8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x18f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f2bc:
    // 0x18f2bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f2c0:
    // 0x18f2c0: 0xc780881c  lwc1        $f0, -0x77E4($gp)
    ctx->pc = 0x18f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f2c4:
    // 0x18f2c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18f2c8:
    // 0x18f2c8: 0xc064294  jal         func_190A50
label_18f2cc:
    if (ctx->pc == 0x18F2CCu) {
        ctx->pc = 0x18F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2C8u;
        // 0x18f2cc: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2D0u;
        goto label_18f2d0;
    }
    ctx->pc = 0x18F2C8u;
    SET_GPR_U32(ctx, 31, 0x18F2D0u);
    ctx->pc = 0x18F2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2C8u;
    // 0x18f2cc: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A50u;
    { ctx->pc = 0x190a50; return; }
    ctx->pc = 0x18F2D0u;
label_18f2d0:
    // 0x18f2d0: 0xc066e44  jal         func_19B910
label_18f2d4:
    if (ctx->pc == 0x18F2D4u) {
        ctx->pc = 0x18F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2D0u;
        // 0x18f2d4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2D8u;
        goto label_18f2d8;
    }
    ctx->pc = 0x18F2D0u;
    SET_GPR_U32(ctx, 31, 0x18F2D8u);
    ctx->pc = 0x18F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2D0u;
    // 0x18f2d4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18F2D8u;
label_18f2d8:
    // 0x18f2d8: 0xc68c0028  lwc1        $f12, 0x28($s4)
    ctx->pc = 0x18f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f2dc:
    // 0x18f2dc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->pc = 0x18f2e0u;
    return;
}

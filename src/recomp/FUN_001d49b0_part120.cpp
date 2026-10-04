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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        default: return;
    }

label_20eb60:
    if (ctx->pc == 0x20EB60u) {
        ctx->pc = 0x20EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB5Cu;
        // 0x20eb60: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB64u;
        goto label_20eb64;
    }
    ctx->pc = 0x20EB5Cu;
    SET_GPR_U32(ctx, 31, 0x20EB64u);
    ctx->pc = 0x20EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB5Cu;
    // 0x20eb60: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20EB5Cu, 0x20EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB64u;
label_20eb64:
    // 0x20eb64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20eb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20eb68:
    // 0x20eb68: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x20eb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_20eb6c:
    // 0x20eb6c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_20eb70:
    if (ctx->pc == 0x20EB70u) {
        ctx->pc = 0x20EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB6Cu;
        // 0x20eb70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB74u;
        goto label_20eb74;
    }
    ctx->pc = 0x20EB6Cu;
    {
        const bool branch_taken_0x20eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB6Cu;
        // 0x20eb70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb6c) {
            ctx->pc = 0x20EB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20eb0c; return; }
        }
    }
    ctx->pc = 0x20EB74u;
label_20eb74:
    // 0x20eb74: 0xc04e19c  jal         func_138670
label_20eb78:
    if (ctx->pc == 0x20EB78u) {
        ctx->pc = 0x20EB7Cu;
        goto label_20eb7c;
    }
    ctx->pc = 0x20EB74u;
    SET_GPR_U32(ctx, 31, 0x20EB7Cu);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x20EB74u, 0x20EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB7Cu;
label_20eb7c:
    // 0x20eb7c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x20eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_20eb80:
    // 0x20eb80: 0xc05af64  jal         func_16BD90
label_20eb84:
    if (ctx->pc == 0x20EB84u) {
        ctx->pc = 0x20EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB80u;
        // 0x20eb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB88u;
        goto label_20eb88;
    }
    ctx->pc = 0x20EB80u;
    SET_GPR_U32(ctx, 31, 0x20EB88u);
    ctx->pc = 0x20EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB80u;
    // 0x20eb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x20EB80u, 0x20EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB88u;
label_20eb88:
    // 0x20eb88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20eb8c:
    // 0x20eb8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20eb90:
    // 0x20eb90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20eb94:
    // 0x20eb94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20eb98:
    // 0x20eb98: 0x3e00008  jr          $ra
label_20eb9c:
    if (ctx->pc == 0x20EB9Cu) {
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBA0u;
        goto label_20eba0;
    }
    ctx->pc = 0x20EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EBA0u;
label_20eba0:
    // 0x20eba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eba4:
    // 0x20eba4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20eba8:
    // 0x20eba8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20ebac:
    // 0x20ebac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20ebb0:
    // 0x20ebb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20ebb4:
    // 0x20ebb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20ebb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ebb8:
    // 0x20ebb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20ebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20ebbc:
    // 0x20ebbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20ebbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc0:
    // 0x20ebc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ebc4:
    // 0x20ebc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20ebc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc8:
    // 0x20ebc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20ebc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20ebcc:
    // 0x20ebcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ebd0:
    // 0x20ebd0: 0xc040058  jal         func_100160
label_20ebd4:
    if (ctx->pc == 0x20EBD4u) {
        ctx->pc = 0x20EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD0u;
        // 0x20ebd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBD8u;
        goto label_20ebd8;
    }
    ctx->pc = 0x20EBD0u;
    SET_GPR_U32(ctx, 31, 0x20EBD8u);
    ctx->pc = 0x20EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD0u;
    // 0x20ebd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20EBD0u, 0x20EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBD8u;
label_20ebd8:
    // 0x20ebd8: 0xc040058  jal         func_100160
label_20ebdc:
    if (ctx->pc == 0x20EBDCu) {
        ctx->pc = 0x20EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD8u;
        // 0x20ebdc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBE0u;
        goto label_20ebe0;
    }
    ctx->pc = 0x20EBD8u;
    SET_GPR_U32(ctx, 31, 0x20EBE0u);
    ctx->pc = 0x20EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD8u;
    // 0x20ebdc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20EBD8u, 0x20EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBE0u;
label_20ebe0:
    // 0x20ebe0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20ebe4:
    // 0x20ebe4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20ebe8:
    // 0x20ebe8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20ebec:
    // 0x20ebec: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20ebf0:
    // 0x20ebf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ebf4:
    // 0x20ebf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ebf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ebf8:
    // 0x20ebf8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20ebfc:
    // 0x20ebfc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ec00:
    // 0x20ec00: 0xc05eab4  jal         func_17AAD0
label_20ec04:
    if (ctx->pc == 0x20EC04u) {
        ctx->pc = 0x20EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC00u;
        // 0x20ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC08u;
        goto label_20ec08;
    }
    ctx->pc = 0x20EC00u;
    SET_GPR_U32(ctx, 31, 0x20EC08u);
    ctx->pc = 0x20EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC00u;
    // 0x20ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAD0u, 0x20EC00u, 0x20EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC08u;
label_20ec08:
    // 0x20ec08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec0c:
    // 0x20ec0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ec10:
    // 0x20ec10: 0xc05ea18  jal         func_17A860
label_20ec14:
    if (ctx->pc == 0x20EC14u) {
        ctx->pc = 0x20EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC10u;
        // 0x20ec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC18u;
        goto label_20ec18;
    }
    ctx->pc = 0x20EC10u;
    SET_GPR_U32(ctx, 31, 0x20EC18u);
    ctx->pc = 0x20EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC10u;
    // 0x20ec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x20EC10u, 0x20EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC18u;
label_20ec18:
    // 0x20ec18: 0x8f82918c  lw          $v0, -0x6E74($gp)
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20ec1c:
    // 0x20ec1c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_20ec20:
    // 0x20ec20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec24:
    // 0x20ec24: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_20ec28:
    // 0x20ec28: 0xc066d0a  jal         func_19B428
label_20ec2c:
    if (ctx->pc == 0x20EC2Cu) {
        ctx->pc = 0x20EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC28u;
        // 0x20ec2c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC30u;
        goto label_20ec30;
    }
    ctx->pc = 0x20EC28u;
    SET_GPR_U32(ctx, 31, 0x20EC30u);
    ctx->pc = 0x20EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC28u;
    // 0x20ec2c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EC28u, 0x20EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC30u;
label_20ec30:
    // 0x20ec30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20ec30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ec34:
    // 0x20ec34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ec38:
    // 0x20ec38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ec3c:
    // 0x20ec3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ec40:
    // 0x20ec40: 0xc05e990  jal         func_17A640
label_20ec44:
    if (ctx->pc == 0x20EC44u) {
        ctx->pc = 0x20EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC40u;
        // 0x20ec44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC48u;
        goto label_20ec48;
    }
    ctx->pc = 0x20EC40u;
    SET_GPR_U32(ctx, 31, 0x20EC48u);
    ctx->pc = 0x20EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC40u;
    // 0x20ec44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x20EC40u, 0x20EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC48u;
label_20ec48:
    // 0x20ec48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ec4c:
    // 0x20ec4c: 0xc066e26  jal         func_19B898
label_20ec50:
    if (ctx->pc == 0x20EC50u) {
        ctx->pc = 0x20EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC4Cu;
        // 0x20ec50: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC54u;
        goto label_20ec54;
    }
    ctx->pc = 0x20EC4Cu;
    SET_GPR_U32(ctx, 31, 0x20EC54u);
    ctx->pc = 0x20EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC4Cu;
    // 0x20ec50: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x20EC4Cu, 0x20EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC54u;
label_20ec54:
    // 0x20ec54: 0xe694005c  swc1        $f20, 0x5C($s4)
    ctx->pc = 0x20ec54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_20ec58:
    // 0x20ec58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec5c:
    // 0x20ec5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ec60:
    // 0x20ec60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ec60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ec64:
    // 0x20ec64: 0x8f83918c  lw          $v1, -0x6E74($gp)
    ctx->pc = 0x20ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20ec68:
    // 0x20ec68: 0xc083b9c  jal         func_20EE70
label_20ec6c:
    if (ctx->pc == 0x20EC6Cu) {
        ctx->pc = 0x20EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC68u;
        // 0x20ec6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC70u;
        goto label_20ec70;
    }
    ctx->pc = 0x20EC68u;
    SET_GPR_U32(ctx, 31, 0x20EC70u);
    ctx->pc = 0x20EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC68u;
    // 0x20ec6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EE70u;
    goto label_20ee70;
    ctx->pc = 0x20EC70u;
label_20ec70:
    // 0x20ec70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20ec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ec74:
    // 0x20ec74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ec78:
    // 0x20ec78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20ec78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ec7c:
    // 0x20ec7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20ec7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ec80:
    // 0x20ec80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ec80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ec84:
    // 0x20ec84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ec88:
    // 0x20ec88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ec88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ec8c:
    // 0x20ec8c: 0x3e00008  jr          $ra
label_20ec90:
    if (ctx->pc == 0x20EC90u) {
        ctx->pc = 0x20EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC8Cu;
        // 0x20ec90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC94u;
        goto label_20ec94;
    }
    ctx->pc = 0x20EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC8Cu;
        // 0x20ec90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EC94u;
label_20ec94:
    // 0x20ec94: 0x0  nop
    ctx->pc = 0x20ec94u;
    // NOP
label_20ec98:
    // 0x20ec98: 0x0  nop
    ctx->pc = 0x20ec98u;
    // NOP
label_20ec9c:
    // 0x20ec9c: 0x0  nop
    ctx->pc = 0x20ec9cu;
    // NOP
label_20eca0:
    // 0x20eca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eca4:
    // 0x20eca4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_20eca8:
    // 0x20eca8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20ecac:
    // 0x20ecac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20ecb0:
    // 0x20ecb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20ecb4:
    // 0x20ecb4: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x20ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_20ecb8:
    // 0x20ecb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ecbc:
    // 0x20ecbc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20ecc0:
    // 0x20ecc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ecc4:
    // 0x20ecc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20ecc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ecc8:
    // 0x20ecc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20eccc:
    // 0x20eccc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20ecccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ecd0:
    // 0x20ecd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ecd4:
    // 0x20ecd4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20ecd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ecd8:
    // 0x20ecd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ecdc:
    // 0x20ecdc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20ece0:
    // 0x20ece0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ece4:
    // 0x20ece4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ece4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ece8:
    // 0x20ece8: 0x8f859198  lw          $a1, -0x6E68($gp)
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20ecec:
    // 0x20ecec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ececu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ecf0:
    // 0x20ecf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ecf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ecf4:
    // 0x20ecf4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20ecf8:
    // 0x20ecf8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ecfc:
    // 0x20ecfc: 0xc066c72  jal         func_19B1C8
label_20ed00:
    if (ctx->pc == 0x20ED00u) {
        ctx->pc = 0x20ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECFCu;
        // 0x20ed00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED04u;
        goto label_20ed04;
    }
    ctx->pc = 0x20ECFCu;
    SET_GPR_U32(ctx, 31, 0x20ED04u);
    ctx->pc = 0x20ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECFCu;
    // 0x20ed00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20ECFCu, 0x20ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED04u;
label_20ed04:
    // 0x20ed04: 0x8f85919c  lw          $a1, -0x6E64($gp)
    ctx->pc = 0x20ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
label_20ed08:
    // 0x20ed08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ed0c:
    // 0x20ed0c: 0x24061008  addiu       $a2, $zero, 0x1008
    ctx->pc = 0x20ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
label_20ed10:
    // 0x20ed10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ed10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ed14:
    // 0x20ed14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ed14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ed18:
    // 0x20ed18: 0xc066c72  jal         func_19B1C8
label_20ed1c:
    if (ctx->pc == 0x20ED1Cu) {
        ctx->pc = 0x20ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED18u;
        // 0x20ed1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED20u;
        goto label_20ed20;
    }
    ctx->pc = 0x20ED18u;
    SET_GPR_U32(ctx, 31, 0x20ED20u);
    ctx->pc = 0x20ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED18u;
    // 0x20ed1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20ED18u, 0x20ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED20u;
label_20ed20:
    // 0x20ed20: 0xc040058  jal         func_100160
label_20ed24:
    if (ctx->pc == 0x20ED24u) {
        ctx->pc = 0x20ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED20u;
        // 0x20ed24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED28u;
        goto label_20ed28;
    }
    ctx->pc = 0x20ED20u;
    SET_GPR_U32(ctx, 31, 0x20ED28u);
    ctx->pc = 0x20ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED20u;
    // 0x20ed24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20ED20u, 0x20ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED28u;
label_20ed28:
    // 0x20ed28: 0xc040058  jal         func_100160
label_20ed2c:
    if (ctx->pc == 0x20ED2Cu) {
        ctx->pc = 0x20ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED28u;
        // 0x20ed2c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED30u;
        goto label_20ed30;
    }
    ctx->pc = 0x20ED28u;
    SET_GPR_U32(ctx, 31, 0x20ED30u);
    ctx->pc = 0x20ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED28u;
    // 0x20ed2c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20ED28u, 0x20ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED30u;
label_20ed30:
    // 0x20ed30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20ed34:
    // 0x20ed34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20ed38:
    // 0x20ed38: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20ed3c:
    // 0x20ed3c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20ed40:
    // 0x20ed40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed44:
    // 0x20ed44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ed44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ed48:
    // 0x20ed48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20ed4c:
    // 0x20ed4c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x20ed4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ed50:
    // 0x20ed50: 0xc05eab4  jal         func_17AAD0
label_20ed54:
    if (ctx->pc == 0x20ED54u) {
        ctx->pc = 0x20ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED50u;
        // 0x20ed54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED58u;
        goto label_20ed58;
    }
    ctx->pc = 0x20ED50u;
    SET_GPR_U32(ctx, 31, 0x20ED58u);
    ctx->pc = 0x20ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED50u;
    // 0x20ed54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAD0u, 0x20ED50u, 0x20ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED58u;
label_20ed58:
    // 0x20ed58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ed5c:
    // 0x20ed5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed60:
    // 0x20ed60: 0xc05ea18  jal         func_17A860
label_20ed64:
    if (ctx->pc == 0x20ED64u) {
        ctx->pc = 0x20ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED60u;
        // 0x20ed64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED68u;
        goto label_20ed68;
    }
    ctx->pc = 0x20ED60u;
    SET_GPR_U32(ctx, 31, 0x20ED68u);
    ctx->pc = 0x20ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED60u;
    // 0x20ed64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x20ED60u, 0x20ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED68u;
label_20ed68:
    // 0x20ed68: 0x8f9291a4  lw          $s2, -0x6E5C($gp)
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
label_20ed6c:
    // 0x20ed6c: 0x0  nop
    ctx->pc = 0x20ed6cu;
    // NOP
label_20ed70:
    // 0x20ed70: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20ed74:
    // 0x20ed74: 0x30a31700  andi        $v1, $a1, 0x1700
    ctx->pc = 0x20ed74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)5888);
label_20ed78:
    // 0x20ed78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20ed7c:
    if (ctx->pc == 0x20ED7Cu) {
        ctx->pc = 0x20ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED78u;
        // 0x20ed7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED80u;
        goto label_20ed80;
    }
    ctx->pc = 0x20ED78u;
    {
        const bool branch_taken_0x20ed78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED78u;
        // 0x20ed7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed78) {
            ctx->pc = 0x20ED88u;
            goto label_20ed88;
        }
    }
    ctx->pc = 0x20ED80u;
label_20ed80:
    // 0x20ed80: 0x10000007  b           . + 4 + (0x7 << 2)
label_20ed84:
    if (ctx->pc == 0x20ED84u) {
        ctx->pc = 0x20ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED80u;
        // 0x20ed84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED88u;
        goto label_20ed88;
    }
    ctx->pc = 0x20ED80u;
    {
        const bool branch_taken_0x20ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED80u;
        // 0x20ed84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed80) {
            ctx->pc = 0x20EDA0u;
            goto label_20eda0;
        }
    }
    ctx->pc = 0x20ED88u;
label_20ed88:
    // 0x20ed88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_20ed8c:
    // 0x20ed8c: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
label_20ed90:
    if (ctx->pc == 0x20ED90u) {
        ctx->pc = 0x20ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED8Cu;
        // 0x20ed90: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED94u;
        goto label_20ed94;
    }
    ctx->pc = 0x20ED8Cu;
    {
        const bool branch_taken_0x20ed8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x20ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED8Cu;
        // 0x20ed90: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed8c) {
            ctx->pc = 0x20EDA0u;
            goto label_20eda0;
        }
    }
    ctx->pc = 0x20ED94u;
label_20ed94:
    // 0x20ed94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20ed98:
    if (ctx->pc == 0x20ED98u) {
        ctx->pc = 0x20ED9Cu;
        goto label_20ed9c;
    }
    ctx->pc = 0x20ED94u;
    {
        const bool branch_taken_0x20ed94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ed94) {
            ctx->pc = 0x20EDA0u;
            goto label_20eda0;
        }
    }
    ctx->pc = 0x20ED9Cu;
label_20ed9c:
    // 0x20ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20eda0:
    // 0x20eda0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_20eda4:
    if (ctx->pc == 0x20EDA4u) {
        ctx->pc = 0x20EDA8u;
        goto label_20eda8;
    }
    ctx->pc = 0x20EDA0u;
    {
        const bool branch_taken_0x20eda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eda0) {
            ctx->pc = 0x20EE20u;
            goto label_20ee20;
        }
    }
    ctx->pc = 0x20EDA8u;
label_20eda8:
    // 0x20eda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20edac:
    // 0x20edac: 0xc066d0a  jal         func_19B428
label_20edb0:
    if (ctx->pc == 0x20EDB0u) {
        ctx->pc = 0x20EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDACu;
        // 0x20edb0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDB4u;
        goto label_20edb4;
    }
    ctx->pc = 0x20EDACu;
    SET_GPR_U32(ctx, 31, 0x20EDB4u);
    ctx->pc = 0x20EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDACu;
    // 0x20edb0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EDACu, 0x20EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB4u;
label_20edb4:
    // 0x20edb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20edb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20edb8:
    // 0x20edb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20edb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20edbc:
    // 0x20edbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20edbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20edc0:
    // 0x20edc0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20edc4:
    // 0x20edc4: 0xc05e990  jal         func_17A640
label_20edc8:
    if (ctx->pc == 0x20EDC8u) {
        ctx->pc = 0x20EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC4u;
        // 0x20edc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDCCu;
        goto label_20edcc;
    }
    ctx->pc = 0x20EDC4u;
    SET_GPR_U32(ctx, 31, 0x20EDCCu);
    ctx->pc = 0x20EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDC4u;
    // 0x20edc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x20EDC4u, 0x20EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDCCu;
label_20edcc:
    // 0x20edcc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20edd0:
    // 0x20edd0: 0xc066e26  jal         func_19B898
label_20edd4:
    if (ctx->pc == 0x20EDD4u) {
        ctx->pc = 0x20EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD0u;
        // 0x20edd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDD8u;
        goto label_20edd8;
    }
    ctx->pc = 0x20EDD0u;
    SET_GPR_U32(ctx, 31, 0x20EDD8u);
    ctx->pc = 0x20EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDD0u;
    // 0x20edd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x20EDD0u, 0x20EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD8u;
label_20edd8:
    // 0x20edd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_20eddc:
    // 0x20eddc: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x20eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_20ede0:
    // 0x20ede0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20ede4:
    // 0x20ede4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20ede8:
    // 0x20ede8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20edec:
    if (ctx->pc == 0x20EDECu) {
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDF0u;
        goto label_20edf0;
    }
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EE08u;
            goto label_20ee08;
        }
    }
    ctx->pc = 0x20EDF0u;
label_20edf0:
    // 0x20edf0: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_20edf4:
    if (ctx->pc == 0x20EDF4u) {
        ctx->pc = 0x20EDF8u;
        goto label_20edf8;
    }
    ctx->pc = 0x20EDF0u;
    {
        const bool branch_taken_0x20edf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x20edf0) {
            ctx->pc = 0x20EE00u;
            goto label_20ee00;
        }
    }
    ctx->pc = 0x20EDF8u;
label_20edf8:
    // 0x20edf8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x20edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_20edfc:
    // 0x20edfc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x20edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_20ee00:
    // 0x20ee00: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_20ee04:
    // 0x20ee04: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x20ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_20ee08:
    // 0x20ee08: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
label_20ee0c:
    // 0x20ee0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ee10:
    // 0x20ee10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ee14:
    // 0x20ee14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ee18:
    // 0x20ee18: 0xc083b9c  jal         func_20EE70
label_20ee1c:
    if (ctx->pc == 0x20EE1Cu) {
        ctx->pc = 0x20EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE18u;
        // 0x20ee1c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE20u;
        goto label_20ee20;
    }
    ctx->pc = 0x20EE18u;
    SET_GPR_U32(ctx, 31, 0x20EE20u);
    ctx->pc = 0x20EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE18u;
    // 0x20ee1c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EE70u;
    goto label_20ee70;
    ctx->pc = 0x20EE20u;
label_20ee20:
    // 0x20ee20: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x20ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20ee24:
    // 0x20ee24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x20ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_20ee28:
    // 0x20ee28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_20ee2c:
    // 0x20ee2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20ee30:
    if (ctx->pc == 0x20EE30u) {
        ctx->pc = 0x20EE34u;
        goto label_20ee34;
    }
    ctx->pc = 0x20EE2Cu;
    {
        const bool branch_taken_0x20ee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee2c) {
            ctx->pc = 0x20EE3Cu;
            goto label_20ee3c;
        }
    }
    ctx->pc = 0x20EE34u;
label_20ee34:
    // 0x20ee34: 0x1000ffce  b           . + 4 + (-0x32 << 2)
label_20ee38:
    if (ctx->pc == 0x20EE38u) {
        ctx->pc = 0x20EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE34u;
        // 0x20ee38: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE3Cu;
        goto label_20ee3c;
    }
    ctx->pc = 0x20EE34u;
    {
        const bool branch_taken_0x20ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE34u;
        // 0x20ee38: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee34) {
            ctx->pc = 0x20ED70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ed70;
        }
    }
    ctx->pc = 0x20EE3Cu;
label_20ee3c:
    // 0x20ee3c: 0x0  nop
    ctx->pc = 0x20ee3cu;
    // NOP
label_20ee40:
    // 0x20ee40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20ee40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ee44:
    // 0x20ee44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20ee44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ee48:
    // 0x20ee48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ee48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ee4c:
    // 0x20ee4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ee4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ee50:
    // 0x20ee50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ee54:
    // 0x20ee54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ee54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ee58:
    // 0x20ee58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ee58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ee5c:
    // 0x20ee5c: 0x3e00008  jr          $ra
label_20ee60:
    if (ctx->pc == 0x20EE60u) {
        ctx->pc = 0x20EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE5Cu;
        // 0x20ee60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE64u;
        goto label_20ee64;
    }
    ctx->pc = 0x20EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE5Cu;
        // 0x20ee60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE64u;
label_20ee64:
    // 0x20ee64: 0x0  nop
    ctx->pc = 0x20ee64u;
    // NOP
label_20ee68:
    // 0x20ee68: 0x0  nop
    ctx->pc = 0x20ee68u;
    // NOP
label_20ee6c:
    // 0x20ee6c: 0x0  nop
    ctx->pc = 0x20ee6cu;
    // NOP
label_20ee70:
    // 0x20ee70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20ee74:
    // 0x20ee74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20ee78:
    // 0x20ee78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ee7c:
    // 0x20ee7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ee80:
    // 0x20ee80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20ee80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ee84:
    // 0x20ee84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20ee88:
    // 0x20ee88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20ee88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ee8c:
    // 0x20ee8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ee90:
    // 0x20ee90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20ee90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ee94:
    // 0x20ee94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ee98:
    // 0x20ee98: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_20ee9c:
    if (ctx->pc == 0x20EE9Cu) {
        ctx->pc = 0x20EEA0u;
        goto label_20eea0;
    }
    ctx->pc = 0x20EE98u;
    {
        const bool branch_taken_0x20ee98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee98) {
            ctx->pc = 0x20EEACu;
            goto label_20eeac;
        }
    }
    ctx->pc = 0x20EEA0u;
label_20eea0:
    // 0x20eea0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x20eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20eea4:
    // 0x20eea4: 0xc083bd0  jal         func_20EF40
label_20eea8:
    if (ctx->pc == 0x20EEA8u) {
        ctx->pc = 0x20EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA4u;
        // 0x20eea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEACu;
        goto label_20eeac;
    }
    ctx->pc = 0x20EEA4u;
    SET_GPR_U32(ctx, 31, 0x20EEACu);
    ctx->pc = 0x20EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEA4u;
    // 0x20eea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF40u;
    goto label_20ef40;
    ctx->pc = 0x20EEACu;
label_20eeac:
    // 0x20eeac: 0x0  nop
    ctx->pc = 0x20eeacu;
    // NOP
label_20eeb0:
    // 0x20eeb0: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20eeb4:
    // 0x20eeb4: 0x1000000d  b           . + 4 + (0xD << 2)
label_20eeb8:
    if (ctx->pc == 0x20EEB8u) {
        ctx->pc = 0x20EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEB4u;
        // 0x20eeb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEBCu;
        goto label_20eebc;
    }
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEB4u;
        // 0x20eeb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EEECu;
            goto label_20eeec;
        }
    }
    ctx->pc = 0x20EEBCu;
label_20eebc:
    // 0x20eebc: 0x0  nop
    ctx->pc = 0x20eebcu;
    // NOP
label_20eec0:
    // 0x20eec0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x20eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20eec4:
    // 0x20eec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20eec8:
    // 0x20eec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20eec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20eecc:
    // 0x20eecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20eeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eed0:
    // 0x20eed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20eed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eed4:
    // 0x20eed4: 0xc066c72  jal         func_19B1C8
label_20eed8:
    if (ctx->pc == 0x20EED8u) {
        ctx->pc = 0x20EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EED4u;
        // 0x20eed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEDCu;
        goto label_20eedc;
    }
    ctx->pc = 0x20EED4u;
    SET_GPR_U32(ctx, 31, 0x20EEDCu);
    ctx->pc = 0x20EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EED4u;
    // 0x20eed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20EED4u, 0x20EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEDCu;
label_20eedc:
    // 0x20eedc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x20eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20eee0:
    // 0x20eee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20eee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20eee4:
    // 0x20eee4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20eee8:
    // 0x20eee8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20eeec:
    // 0x20eeec: 0x0  nop
    ctx->pc = 0x20eeecu;
    // NOP
label_20eef0:
    // 0x20eef0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x20eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_20eef4:
    // 0x20eef4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x20eef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20eef8:
    // 0x20eef8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_20eefc:
    if (ctx->pc == 0x20EEFCu) {
        ctx->pc = 0x20EF00u;
        goto label_20ef00;
    }
    ctx->pc = 0x20EEF8u;
    {
        const bool branch_taken_0x20eef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eef8) {
            ctx->pc = 0x20EEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20eebc;
        }
    }
    ctx->pc = 0x20EF00u;
label_20ef00:
    // 0x20ef00: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x20ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20ef04:
    // 0x20ef04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ef08:
    // 0x20ef08: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_20ef0c:
    if (ctx->pc == 0x20EF0Cu) {
        ctx->pc = 0x20EF10u;
        goto label_20ef10;
    }
    ctx->pc = 0x20EF08u;
    {
        const bool branch_taken_0x20ef08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ef08) {
            ctx->pc = 0x20EF18u;
            goto label_20ef18;
        }
    }
    ctx->pc = 0x20EF10u;
label_20ef10:
    // 0x20ef10: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_20ef14:
    if (ctx->pc == 0x20EF14u) {
        ctx->pc = 0x20EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF10u;
        // 0x20ef14: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF18u;
        goto label_20ef18;
    }
    ctx->pc = 0x20EF10u;
    {
        const bool branch_taken_0x20ef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF10u;
        // 0x20ef14: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef10) {
            ctx->pc = 0x20EE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ee98;
        }
    }
    ctx->pc = 0x20EF18u;
label_20ef18:
    // 0x20ef18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20ef1c:
    // 0x20ef1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ef1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ef20:
    // 0x20ef20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ef20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ef24:
    // 0x20ef24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ef24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ef28:
    // 0x20ef28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ef28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ef2c:
    // 0x20ef2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ef2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ef30:
    // 0x20ef30: 0x3e00008  jr          $ra
label_20ef34:
    if (ctx->pc == 0x20EF34u) {
        ctx->pc = 0x20EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF30u;
        // 0x20ef34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF38u;
        goto label_20ef38;
    }
    ctx->pc = 0x20EF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF30u;
        // 0x20ef34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EF38u;
label_20ef38:
    // 0x20ef38: 0x0  nop
    ctx->pc = 0x20ef38u;
    // NOP
label_20ef3c:
    // 0x20ef3c: 0x0  nop
    ctx->pc = 0x20ef3cu;
    // NOP
label_20ef40:
    // 0x20ef40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ef44:
    // 0x20ef44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20ef48:
    // 0x20ef48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20ef4c:
    // 0x20ef4c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x20ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20ef50:
    // 0x20ef50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ef54:
    // 0x20ef54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20ef58:
    // 0x20ef58: 0x8f8291a0  lw          $v0, -0x6E60($gp)
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
label_20ef5c:
    // 0x20ef5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20ef60:
    // 0x20ef60: 0xc066d0a  jal         func_19B428
label_20ef64:
    if (ctx->pc == 0x20EF64u) {
        ctx->pc = 0x20EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF60u;
        // 0x20ef64: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF68u;
        goto label_20ef68;
    }
    ctx->pc = 0x20EF60u;
    SET_GPR_U32(ctx, 31, 0x20EF68u);
    ctx->pc = 0x20EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF60u;
    // 0x20ef64: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EF60u, 0x20EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF68u;
label_20ef68:
    // 0x20ef68: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x20ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_20ef6c:
    // 0x20ef6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_20ef70:
    // 0x20ef70: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x20ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
label_20ef74:
    // 0x20ef74: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x20ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_20ef78:
    // 0x20ef78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20ef7c:
    // 0x20ef7c: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x20ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
label_20ef80:
    // 0x20ef80: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x20ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
label_20ef84:
    // 0x20ef84: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x20ef84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_20ef88:
    // 0x20ef88: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x20ef88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
label_20ef8c:
    // 0x20ef8c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x20ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_20ef90:
    // 0x20ef90: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_20ef94:
    // 0x20ef94: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x20ef94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20ef98:
    // 0x20ef98: 0x34630403  ori         $v1, $v1, 0x403
    ctx->pc = 0x20ef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1027);
label_20ef9c:
    // 0x20ef9c: 0x7c440020  sq          $a0, 0x20($v0)
    ctx->pc = 0x20ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 4));
label_20efa0:
    // 0x20efa0: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x20efa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_20efa4:
    // 0x20efa4: 0x7c440030  sq          $a0, 0x30($v0)
    ctx->pc = 0x20efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
label_20efa8:
    // 0x20efa8: 0x7a040040  lq          $a0, 0x40($s0)
    ctx->pc = 0x20efa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_20efac:
    // 0x20efac: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x20efacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_20efb0:
    // 0x20efb0: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x20efb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_20efb4:
    // 0x20efb4: 0x7c440050  sq          $a0, 0x50($v0)
    ctx->pc = 0x20efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 4));
label_20efb8:
    // 0x20efb8: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x20efb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_20efbc:
    // 0x20efbc: 0x7c440060  sq          $a0, 0x60($v0)
    ctx->pc = 0x20efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 4));
label_20efc0:
    // 0x20efc0: 0xfc400070  sd          $zero, 0x70($v0)
    ctx->pc = 0x20efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 0));
label_20efc4:
    // 0x20efc4: 0xfc400078  sd          $zero, 0x78($v0)
    ctx->pc = 0x20efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 0));
label_20efc8:
    // 0x20efc8: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x20efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
label_20efcc:
    // 0x20efcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20efccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20efd0:
    // 0x20efd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20efd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20efd4:
    // 0x20efd4: 0x3e00008  jr          $ra
label_20efd8:
    if (ctx->pc == 0x20EFD8u) {
        ctx->pc = 0x20EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD4u;
        // 0x20efd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFDCu;
        goto label_20efdc;
    }
    ctx->pc = 0x20EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD4u;
        // 0x20efd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EFDCu;
label_20efdc:
    // 0x20efdc: 0x0  nop
    ctx->pc = 0x20efdcu;
    // NOP
label_20efe0:
    // 0x20efe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20efe4:
    // 0x20efe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20efe8:
    // 0x20efe8: 0x8f84919c  lw          $a0, -0x6E64($gp)
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
label_20efec:
    // 0x20efec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20eff0:
    if (ctx->pc == 0x20EFF0u) {
        ctx->pc = 0x20EFF4u;
        goto label_20eff4;
    }
    ctx->pc = 0x20EFECu;
    {
        const bool branch_taken_0x20efec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20efec) {
            ctx->pc = 0x20F000u;
            goto label_20f000;
        }
    }
    ctx->pc = 0x20EFF4u;
label_20eff4:
    // 0x20eff4: 0xc070038  jal         func_1C00E0
label_20eff8:
    if (ctx->pc == 0x20EFF8u) {
        ctx->pc = 0x20EFFCu;
        goto label_20effc;
    }
    ctx->pc = 0x20EFF4u;
    SET_GPR_U32(ctx, 31, 0x20EFFCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20EFF4u, 0x20EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFFCu;
label_20effc:
    // 0x20effc: 0xaf80919c  sw          $zero, -0x6E64($gp)
    ctx->pc = 0x20effcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 0));
label_20f000:
    // 0x20f000: 0x8f849198  lw          $a0, -0x6E68($gp)
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20f004:
    // 0x20f004: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20f008:
    if (ctx->pc == 0x20F008u) {
        ctx->pc = 0x20F00Cu;
        goto label_20f00c;
    }
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F018u;
            goto label_20f018;
        }
    }
    ctx->pc = 0x20F00Cu;
label_20f00c:
    // 0x20f00c: 0xc070038  jal         func_1C00E0
label_20f010:
    if (ctx->pc == 0x20F010u) {
        ctx->pc = 0x20F014u;
        goto label_20f014;
    }
    ctx->pc = 0x20F00Cu;
    SET_GPR_U32(ctx, 31, 0x20F014u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F00Cu, 0x20F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F014u;
label_20f014:
    // 0x20f014: 0xaf809198  sw          $zero, -0x6E68($gp)
    ctx->pc = 0x20f014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 0));
label_20f018:
    // 0x20f018: 0x8f8491a4  lw          $a0, -0x6E5C($gp)
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
label_20f01c:
    // 0x20f01c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20f020:
    if (ctx->pc == 0x20F020u) {
        ctx->pc = 0x20F024u;
        goto label_20f024;
    }
    ctx->pc = 0x20F01Cu;
    {
        const bool branch_taken_0x20f01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f01c) {
            ctx->pc = 0x20F030u;
            goto label_20f030;
        }
    }
    ctx->pc = 0x20F024u;
label_20f024:
    // 0x20f024: 0xc070038  jal         func_1C00E0
label_20f028:
    if (ctx->pc == 0x20F028u) {
        ctx->pc = 0x20F02Cu;
        goto label_20f02c;
    }
    ctx->pc = 0x20F024u;
    SET_GPR_U32(ctx, 31, 0x20F02Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F024u, 0x20F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F02Cu;
label_20f02c:
    // 0x20f02c: 0xaf8091a4  sw          $zero, -0x6E5C($gp)
    ctx->pc = 0x20f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 0));
label_20f030:
    // 0x20f030: 0x8f849188  lw          $a0, -0x6E78($gp)
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
label_20f034:
    // 0x20f034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20f038:
    if (ctx->pc == 0x20F038u) {
        ctx->pc = 0x20F03Cu;
        goto label_20f03c;
    }
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F048u;
            goto label_20f048;
        }
    }
    ctx->pc = 0x20F03Cu;
label_20f03c:
    // 0x20f03c: 0xc070038  jal         func_1C00E0
label_20f040:
    if (ctx->pc == 0x20F040u) {
        ctx->pc = 0x20F044u;
        goto label_20f044;
    }
    ctx->pc = 0x20F03Cu;
    SET_GPR_U32(ctx, 31, 0x20F044u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F03Cu, 0x20F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F044u;
label_20f044:
    // 0x20f044: 0xaf809188  sw          $zero, -0x6E78($gp)
    ctx->pc = 0x20f044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 0));
label_20f048:
    // 0x20f048: 0x8f8491a0  lw          $a0, -0x6E60($gp)
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
label_20f04c:
    // 0x20f04c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_20f050:
    if (ctx->pc == 0x20F050u) {
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F054u;
        goto label_20f054;
    }
    ctx->pc = 0x20F04Cu;
    {
        const bool branch_taken_0x20f04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f04c) {
            ctx->pc = 0x20F064u;
            goto label_20f064;
        }
    }
    ctx->pc = 0x20F054u;
label_20f054:
    // 0x20f054: 0xc070038  jal         func_1C00E0
label_20f058:
    if (ctx->pc == 0x20F058u) {
        ctx->pc = 0x20F05Cu;
        goto label_20f05c;
    }
    ctx->pc = 0x20F054u;
    SET_GPR_U32(ctx, 31, 0x20F05Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F054u, 0x20F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F05Cu;
label_20f05c:
    // 0x20f05c: 0xaf8091a0  sw          $zero, -0x6E60($gp)
    ctx->pc = 0x20f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
label_20f060:
    // 0x20f060: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_20f064:
    // 0x20f064: 0xaf838288  sw          $v1, -0x7D78($gp)
    ctx->pc = 0x20f064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 3));
label_20f068:
    // 0x20f068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f06c:
    // 0x20f06c: 0x3e00008  jr          $ra
label_20f070:
    if (ctx->pc == 0x20F070u) {
        ctx->pc = 0x20F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F06Cu;
        // 0x20f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F074u;
        goto label_20f074;
    }
    ctx->pc = 0x20F06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F06Cu;
        // 0x20f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F074u;
label_20f074:
    // 0x20f074: 0x0  nop
    ctx->pc = 0x20f074u;
    // NOP
label_20f078:
    // 0x20f078: 0x0  nop
    ctx->pc = 0x20f078u;
    // NOP
label_20f07c:
    // 0x20f07c: 0x0  nop
    ctx->pc = 0x20f07cu;
    // NOP
label_20f080:
    // 0x20f080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20f084:
    // 0x20f084: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_20f088:
    // 0x20f088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20f08c:
    // 0x20f08c: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_20f090:
    // 0x20f090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20f094:
    // 0x20f094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f098:
    // 0x20f098: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20f09c:
    // 0x20f09c: 0xaf848288  sw          $a0, -0x7D78($gp)
    ctx->pc = 0x20f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 4));
label_20f0a0:
    // 0x20f0a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20f0a4:
    // 0x20f0a4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f0a8:
    // 0x20f0a8: 0xc041738  jal         func_105CE0
label_20f0ac:
    if (ctx->pc == 0x20F0ACu) {
        ctx->pc = 0x20F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0A8u;
        // 0x20f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0B0u;
        goto label_20f0b0;
    }
    ctx->pc = 0x20F0A8u;
    SET_GPR_U32(ctx, 31, 0x20F0B0u);
    ctx->pc = 0x20F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0A8u;
    // 0x20f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F0A8u, 0x20F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0B0u;
label_20f0b0:
    // 0x20f0b0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f0b4:
    // 0x20f0b4: 0xc070080  jal         func_1C0200
label_20f0b8:
    if (ctx->pc == 0x20F0B8u) {
        ctx->pc = 0x20F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0B4u;
        // 0x20f0b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0BCu;
        goto label_20f0bc;
    }
    ctx->pc = 0x20F0B4u;
    SET_GPR_U32(ctx, 31, 0x20F0BCu);
    ctx->pc = 0x20F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0B4u;
    // 0x20f0b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F0B4u, 0x20F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0BCu;
label_20f0bc:
    // 0x20f0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f0c0:
    // 0x20f0c0: 0xc0416e4  jal         func_105B90
label_20f0c4:
    if (ctx->pc == 0x20F0C4u) {
        ctx->pc = 0x20F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C0u;
        // 0x20f0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0C8u;
        goto label_20f0c8;
    }
    ctx->pc = 0x20F0C0u;
    SET_GPR_U32(ctx, 31, 0x20F0C8u);
    ctx->pc = 0x20F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0C0u;
    // 0x20f0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F0C0u, 0x20F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0C8u;
label_20f0c8:
    // 0x20f0c8: 0xaf8291a0  sw          $v0, -0x6E60($gp)
    ctx->pc = 0x20f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 2));
label_20f0cc:
    // 0x20f0cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_20f0d0:
    // 0x20f0d0: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
label_20f0d4:
    // 0x20f0d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20f0d8:
    // 0x20f0d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f0dc:
    // 0x20f0dc: 0xc041738  jal         func_105CE0
label_20f0e0:
    if (ctx->pc == 0x20F0E0u) {
        ctx->pc = 0x20F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0DCu;
        // 0x20f0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0E4u;
        goto label_20f0e4;
    }
    ctx->pc = 0x20F0DCu;
    SET_GPR_U32(ctx, 31, 0x20F0E4u);
    ctx->pc = 0x20F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0DCu;
    // 0x20f0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F0DCu, 0x20F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0E4u;
label_20f0e4:
    // 0x20f0e4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f0e8:
    // 0x20f0e8: 0xc070080  jal         func_1C0200
label_20f0ec:
    if (ctx->pc == 0x20F0ECu) {
        ctx->pc = 0x20F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E8u;
        // 0x20f0ec: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0F0u;
        goto label_20f0f0;
    }
    ctx->pc = 0x20F0E8u;
    SET_GPR_U32(ctx, 31, 0x20F0F0u);
    ctx->pc = 0x20F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0E8u;
    // 0x20f0ec: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F0E8u, 0x20F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0F0u;
label_20f0f0:
    // 0x20f0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f0f4:
    // 0x20f0f4: 0xc0416e4  jal         func_105B90
label_20f0f8:
    if (ctx->pc == 0x20F0F8u) {
        ctx->pc = 0x20F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F4u;
        // 0x20f0f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0FCu;
        goto label_20f0fc;
    }
    ctx->pc = 0x20F0F4u;
    SET_GPR_U32(ctx, 31, 0x20F0FCu);
    ctx->pc = 0x20F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0F4u;
    // 0x20f0f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F0F4u, 0x20F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0FCu;
label_20f0fc:
    // 0x20f0fc: 0xaf829188  sw          $v0, -0x6E78($gp)
    ctx->pc = 0x20f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
label_20f100:
    // 0x20f100: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_20f104:
    // 0x20f104: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20f108:
    // 0x20f108: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20f10c:
    // 0x20f10c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f110:
    // 0x20f110: 0xc041738  jal         func_105CE0
label_20f114:
    if (ctx->pc == 0x20F114u) {
        ctx->pc = 0x20F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F110u;
        // 0x20f114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F118u;
        goto label_20f118;
    }
    ctx->pc = 0x20F110u;
    SET_GPR_U32(ctx, 31, 0x20F118u);
    ctx->pc = 0x20F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F110u;
    // 0x20f114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F110u, 0x20F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F118u;
label_20f118:
    // 0x20f118: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f11c:
    // 0x20f11c: 0xc070080  jal         func_1C0200
label_20f120:
    if (ctx->pc == 0x20F120u) {
        ctx->pc = 0x20F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F11Cu;
        // 0x20f120: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F124u;
        goto label_20f124;
    }
    ctx->pc = 0x20F11Cu;
    SET_GPR_U32(ctx, 31, 0x20F124u);
    ctx->pc = 0x20F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F11Cu;
    // 0x20f120: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F11Cu, 0x20F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F124u;
label_20f124:
    // 0x20f124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f128:
    // 0x20f128: 0xc0416e4  jal         func_105B90
label_20f12c:
    if (ctx->pc == 0x20F12Cu) {
        ctx->pc = 0x20F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F128u;
        // 0x20f12c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F130u;
        goto label_20f130;
    }
    ctx->pc = 0x20F128u;
    SET_GPR_U32(ctx, 31, 0x20F130u);
    ctx->pc = 0x20F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F128u;
    // 0x20f12c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F128u, 0x20F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F130u;
label_20f130:
    // 0x20f130: 0xaf8291a4  sw          $v0, -0x6E5C($gp)
    ctx->pc = 0x20f130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 2));
label_20f134:
    // 0x20f134: 0x8f82919c  lw          $v0, -0x6E64($gp)
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
label_20f138:
    // 0x20f138: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20f13c:
    if (ctx->pc == 0x20F13Cu) {
        ctx->pc = 0x20F140u;
        goto label_20f140;
    }
    ctx->pc = 0x20F138u;
    {
        const bool branch_taken_0x20f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f138) {
            ctx->pc = 0x20F154u;
            goto label_20f154;
        }
    }
    ctx->pc = 0x20F140u;
label_20f140:
    // 0x20f140: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20f144:
    // 0x20f144: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20f148:
    // 0x20f148: 0xc070080  jal         func_1C0200
label_20f14c:
    if (ctx->pc == 0x20F14Cu) {
        ctx->pc = 0x20F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F148u;
        // 0x20f14c: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F150u;
        goto label_20f150;
    }
    ctx->pc = 0x20F148u;
    SET_GPR_U32(ctx, 31, 0x20F150u);
    ctx->pc = 0x20F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F148u;
    // 0x20f14c: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F148u, 0x20F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F150u;
label_20f150:
    // 0x20f150: 0xaf82919c  sw          $v0, -0x6E64($gp)
    ctx->pc = 0x20f150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 2));
label_20f154:
    // 0x20f154: 0x8f829198  lw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20f158:
    // 0x20f158: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20f15c:
    if (ctx->pc == 0x20F15Cu) {
        ctx->pc = 0x20F160u;
        goto label_20f160;
    }
    ctx->pc = 0x20F158u;
    {
        const bool branch_taken_0x20f158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f158) {
            ctx->pc = 0x20F170u;
            goto label_20f170;
        }
    }
    ctx->pc = 0x20F160u;
label_20f160:
    // 0x20f160: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20f164:
    // 0x20f164: 0xc070080  jal         func_1C0200
label_20f168:
    if (ctx->pc == 0x20F168u) {
        ctx->pc = 0x20F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F164u;
        // 0x20f168: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F16Cu;
        goto label_20f16c;
    }
    ctx->pc = 0x20F164u;
    SET_GPR_U32(ctx, 31, 0x20F16Cu);
    ctx->pc = 0x20F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F164u;
    // 0x20f168: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F164u, 0x20F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F16Cu;
label_20f16c:
    // 0x20f16c: 0xaf829198  sw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 2));
label_20f170:
    // 0x20f170: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_20f174:
    // 0x20f174: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
label_20f178:
    // 0x20f178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20f17c:
    // 0x20f17c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f180:
    // 0x20f180: 0xc041738  jal         func_105CE0
label_20f184:
    if (ctx->pc == 0x20F184u) {
        ctx->pc = 0x20F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F180u;
        // 0x20f184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F188u;
        goto label_20f188;
    }
    ctx->pc = 0x20F180u;
    SET_GPR_U32(ctx, 31, 0x20F188u);
    ctx->pc = 0x20F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F180u;
    // 0x20f184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F180u, 0x20F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F188u;
label_20f188:
    // 0x20f188: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f18c:
    // 0x20f18c: 0xc070080  jal         func_1C0200
label_20f190:
    if (ctx->pc == 0x20F190u) {
        ctx->pc = 0x20F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F18Cu;
        // 0x20f190: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F194u;
        goto label_20f194;
    }
    ctx->pc = 0x20F18Cu;
    SET_GPR_U32(ctx, 31, 0x20F194u);
    ctx->pc = 0x20F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F18Cu;
    // 0x20f190: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F18Cu, 0x20F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F194u;
label_20f194:
    // 0x20f194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f198:
    // 0x20f198: 0xc0416e4  jal         func_105B90
label_20f19c:
    if (ctx->pc == 0x20F19Cu) {
        ctx->pc = 0x20F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F198u;
        // 0x20f19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1A0u;
        goto label_20f1a0;
    }
    ctx->pc = 0x20F198u;
    SET_GPR_U32(ctx, 31, 0x20F1A0u);
    ctx->pc = 0x20F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F198u;
    // 0x20f19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F198u, 0x20F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1A0u;
label_20f1a0:
    // 0x20f1a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_20f1a4:
    // 0x20f1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20f1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f1a8:
    // 0x20f1a8: 0xc083c80  jal         func_20F200
label_20f1ac:
    if (ctx->pc == 0x20F1ACu) {
        ctx->pc = 0x20F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1A8u;
        // 0x20f1ac: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1B0u;
        goto label_20f1b0;
    }
    ctx->pc = 0x20F1A8u;
    SET_GPR_U32(ctx, 31, 0x20F1B0u);
    ctx->pc = 0x20F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1A8u;
    // 0x20f1ac: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F200u;
    goto label_20f200;
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f1b4:
    // 0x20f1b4: 0xc070038  jal         func_1C00E0
label_20f1b8:
    if (ctx->pc == 0x20F1B8u) {
        ctx->pc = 0x20F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1B4u;
        // 0x20f1b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1BCu;
        goto label_20f1bc;
    }
    ctx->pc = 0x20F1B4u;
    SET_GPR_U32(ctx, 31, 0x20F1BCu);
    ctx->pc = 0x20F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1B4u;
    // 0x20f1b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F1B4u, 0x20F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1BCu;
label_20f1bc:
    // 0x20f1bc: 0x8f8591a0  lw          $a1, -0x6E60($gp)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
label_20f1c0:
    // 0x20f1c0: 0x0  nop
    ctx->pc = 0x20f1c0u;
    // NOP
label_20f1c4:
    // 0x20f1c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_20f1c8:
    // 0x20f1c8: 0xfcb00040  sd          $s0, 0x40($a1)
    ctx->pc = 0x20f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 16));
label_20f1cc:
    // 0x20f1cc: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_20f1d0:
    // 0x20f1d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_20f1d4:
    if (ctx->pc == 0x20F1D4u) {
        ctx->pc = 0x20F1D8u;
        goto label_20f1d8;
    }
    ctx->pc = 0x20F1D0u;
    {
        const bool branch_taken_0x20f1d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20f1d0) {
            ctx->pc = 0x20F1E0u;
            goto label_20f1e0;
        }
    }
    ctx->pc = 0x20F1D8u;
label_20f1d8:
    // 0x20f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f1dc:
    if (ctx->pc == 0x20F1DCu) {
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E0u;
        goto label_20f1e0;
    }
    ctx->pc = 0x20F1D8u;
    {
        const bool branch_taken_0x20f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1d8) {
            ctx->pc = 0x20F1E8u;
            goto label_20f1e8;
        }
    }
    ctx->pc = 0x20F1E0u;
label_20f1e0:
    // 0x20f1e0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_20f1e4:
    if (ctx->pc == 0x20F1E4u) {
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E8u;
        goto label_20f1e8;
    }
    ctx->pc = 0x20F1E0u;
    {
        const bool branch_taken_0x20f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1e0) {
            ctx->pc = 0x20F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f1c8;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f1ec:
    // 0x20f1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f1f0:
    // 0x20f1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f1f4:
    // 0x20f1f4: 0x3e00008  jr          $ra
label_20f1f8:
    if (ctx->pc == 0x20F1F8u) {
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1FCu;
        goto label_20f1fc;
    }
    ctx->pc = 0x20F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F1FCu;
label_20f1fc:
    // 0x20f1fc: 0x0  nop
    ctx->pc = 0x20f1fcu;
    // NOP
label_20f200:
    // 0x20f200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20f204:
    // 0x20f204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20f208:
    // 0x20f208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20f20c:
    // 0x20f20c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20f210:
    // 0x20f210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20f210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f214:
    // 0x20f214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f218:
    // 0x20f218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20f218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f21c:
    // 0x20f21c: 0x8f91919c  lw          $s1, -0x6E64($gp)
    ctx->pc = 0x20f21cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
label_20f220:
    // 0x20f220: 0xc060678  jal         func_1819E0
label_20f224:
    if (ctx->pc == 0x20F224u) {
        ctx->pc = 0x20F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F220u;
        // 0x20f224: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F228u;
        goto label_20f228;
    }
    ctx->pc = 0x20F220u;
    SET_GPR_U32(ctx, 31, 0x20F228u);
    ctx->pc = 0x20F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F220u;
    // 0x20f224: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x20F220u, 0x20F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F228u;
label_20f228:
    // 0x20f228: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f22c:
    // 0x20f22c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f230:
    // 0x20f230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f234:
    // 0x20f234: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f238:
    // 0x20f238: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20f23c:
    // 0x20f23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f240:
    // 0x20f240: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f244:
    // 0x20f244: 0xc060300  jal         func_180C00
label_20f248:
    if (ctx->pc == 0x20F248u) {
        ctx->pc = 0x20F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F244u;
        // 0x20f248: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F24Cu;
        goto label_20f24c;
    }
    ctx->pc = 0x20F244u;
    SET_GPR_U32(ctx, 31, 0x20F24Cu);
    ctx->pc = 0x20F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F244u;
    // 0x20f248: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x20F244u, 0x20F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F24Cu;
label_20f24c:
    // 0x20f24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f250:
    // 0x20f250: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x20f250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20f254:
    // 0x20f254: 0xc08e93e  jal         func_23A4F8
label_20f258:
    if (ctx->pc == 0x20F258u) {
        ctx->pc = 0x20F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F254u;
        // 0x20f258: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F25Cu;
        goto label_20f25c;
    }
    ctx->pc = 0x20F254u;
    SET_GPR_U32(ctx, 31, 0x20F25Cu);
    ctx->pc = 0x20F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F254u;
    // 0x20f258: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F25Cu;
label_20f25c:
    // 0x20f25c: 0x8f909198  lw          $s0, -0x6E68($gp)
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20f260:
    // 0x20f260: 0xc060668  jal         func_1819A0
label_20f264:
    if (ctx->pc == 0x20F264u) {
        ctx->pc = 0x20F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F260u;
        // 0x20f264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F268u;
        goto label_20f268;
    }
    ctx->pc = 0x20F260u;
    SET_GPR_U32(ctx, 31, 0x20F268u);
    ctx->pc = 0x20F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F260u;
    // 0x20f264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x20F260u, 0x20F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F268u;
label_20f268:
    // 0x20f268: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20f268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20f26c:
    // 0x20f26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f270:
    // 0x20f270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f274:
    // 0x20f274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f278:
    // 0x20f278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f27c:
    // 0x20f27c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f280:
    // 0x20f280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f284:
    // 0x20f284: 0xc060300  jal         func_180C00
label_20f288:
    if (ctx->pc == 0x20F288u) {
        ctx->pc = 0x20F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F284u;
        // 0x20f288: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F28Cu;
        goto label_20f28c;
    }
    ctx->pc = 0x20F284u;
    SET_GPR_U32(ctx, 31, 0x20F28Cu);
    ctx->pc = 0x20F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F284u;
    // 0x20f288: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x20F284u, 0x20F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F28Cu;
label_20f28c:
    // 0x20f28c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f290:
    // 0x20f290: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20f294:
    // 0x20f294: 0x34210040  ori         $at, $at, 0x40
    ctx->pc = 0x20f294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64);
label_20f298:
    // 0x20f298: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_20f29c:
    // 0x20f29c: 0xc08e93e  jal         func_23A4F8
label_20f2a0:
    if (ctx->pc == 0x20F2A0u) {
        ctx->pc = 0x20F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F29Cu;
        // 0x20f2a0: 0x2412821  addu        $a1, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2A4u;
        goto label_20f2a4;
    }
    ctx->pc = 0x20F29Cu;
    SET_GPR_U32(ctx, 31, 0x20F2A4u);
    ctx->pc = 0x20F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F29Cu;
    // 0x20f2a0: 0x2412821  addu        $a1, $s2, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F2A4u;
label_20f2a4:
    // 0x20f2a4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f2a8:
    // 0x20f2a8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20f2ac:
    // 0x20f2ac: 0xc07091c  jal         func_1C2470
label_20f2b0:
    if (ctx->pc == 0x20F2B0u) {
        ctx->pc = 0x20F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ACu;
        // 0x20f2b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2B4u;
        goto label_20f2b4;
    }
    ctx->pc = 0x20F2ACu;
    SET_GPR_U32(ctx, 31, 0x20F2B4u);
    ctx->pc = 0x20F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2ACu;
    // 0x20f2b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x20F2ACu, 0x20F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2B4u;
label_20f2b4:
    // 0x20f2b4: 0xff829190  sd          $v0, -0x6E70($gp)
    ctx->pc = 0x20f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U64(ctx, 2));
label_20f2b8:
    // 0x20f2b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20f2bc:
    // 0x20f2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20f2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f2c0:
    // 0x20f2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f2c4:
    // 0x20f2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f2c8:
    // 0x20f2c8: 0x3e00008  jr          $ra
label_20f2cc:
    if (ctx->pc == 0x20F2CCu) {
        ctx->pc = 0x20F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2C8u;
        // 0x20f2cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2D0u;
        goto label_20f2d0;
    }
    ctx->pc = 0x20F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2C8u;
        // 0x20f2cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2D0u;
label_20f2d0:
    // 0x20f2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20f2d4:
    // 0x20f2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f2d8:
    // 0x20f2d8: 0x8f83918c  lw          $v1, -0x6E74($gp)
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20f2dc:
    // 0x20f2dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_20f2e0:
    if (ctx->pc == 0x20F2E0u) {
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2E4u;
        goto label_20f2e4;
    }
    ctx->pc = 0x20F2DCu;
    {
        const bool branch_taken_0x20f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2dc) {
            ctx->pc = 0x20F308u;
            goto label_20f308;
        }
    }
    ctx->pc = 0x20F2E4u;
label_20f2e4:
    // 0x20f2e4: 0xc041738  jal         func_105CE0
label_20f2e8:
    if (ctx->pc == 0x20F2E8u) {
        ctx->pc = 0x20F2ECu;
        goto label_20f2ec;
    }
    ctx->pc = 0x20F2E4u;
    SET_GPR_U32(ctx, 31, 0x20F2ECu);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F2E4u, 0x20F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2ECu;
label_20f2ec:
    // 0x20f2ec: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f2f0:
    // 0x20f2f0: 0xc070080  jal         func_1C0200
label_20f2f4:
    if (ctx->pc == 0x20F2F4u) {
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2F8u;
        goto label_20f2f8;
    }
    ctx->pc = 0x20F2F0u;
    SET_GPR_U32(ctx, 31, 0x20F2F8u);
    ctx->pc = 0x20F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2F0u;
    // 0x20f2f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F2F0u, 0x20F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2F8u;
label_20f2f8:
    // 0x20f2f8: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x20f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_20f2fc:
    // 0x20f2fc: 0xc0416e4  jal         func_105B90
label_20f300:
    if (ctx->pc == 0x20F300u) {
        ctx->pc = 0x20F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2FCu;
        // 0x20f300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F304u;
        goto label_20f304;
    }
    ctx->pc = 0x20F2FCu;
    SET_GPR_U32(ctx, 31, 0x20F304u);
    ctx->pc = 0x20F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2FCu;
    // 0x20f300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F2FCu, 0x20F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F304u;
label_20f304:
    // 0x20f304: 0xaf82918c  sw          $v0, -0x6E74($gp)
    ctx->pc = 0x20f304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939020), GPR_U32(ctx, 2));
label_20f308:
    // 0x20f308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f30c:
    // 0x20f30c: 0x3e00008  jr          $ra
label_20f310:
    if (ctx->pc == 0x20F310u) {
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F314u;
        goto label_20f314;
    }
    ctx->pc = 0x20F30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F314u;
label_20f314:
    // 0x20f314: 0x0  nop
    ctx->pc = 0x20f314u;
    // NOP
label_20f318:
    // 0x20f318: 0x0  nop
    ctx->pc = 0x20f318u;
    // NOP
label_20f31c:
    // 0x20f31c: 0x0  nop
    ctx->pc = 0x20f31cu;
    // NOP
label_20f320:
    // 0x20f320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20f324:
    // 0x20f324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20f328:
    // 0x20f328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f32c:
    // 0x20f32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20f32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20f330u;
    return;
}

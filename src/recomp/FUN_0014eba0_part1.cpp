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


void FUN_0014eba0_part1(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x14eba0u: goto label_14eba0;
        case 0x14eba4u: goto label_14eba4;
        case 0x14eba8u: goto label_14eba8;
        case 0x14ebacu: goto label_14ebac;
        case 0x14ebb0u: goto label_14ebb0;
        case 0x14ebb4u: goto label_14ebb4;
        case 0x14ebb8u: goto label_14ebb8;
        case 0x14ebbcu: goto label_14ebbc;
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebc4u: goto label_14ebc4;
        case 0x14ebc8u: goto label_14ebc8;
        case 0x14ebccu: goto label_14ebcc;
        case 0x14ebd0u: goto label_14ebd0;
        case 0x14ebd4u: goto label_14ebd4;
        case 0x14ebd8u: goto label_14ebd8;
        case 0x14ebdcu: goto label_14ebdc;
        case 0x14ebe0u: goto label_14ebe0;
        case 0x14ebe4u: goto label_14ebe4;
        case 0x14ebe8u: goto label_14ebe8;
        case 0x14ebecu: goto label_14ebec;
        case 0x14ebf0u: goto label_14ebf0;
        case 0x14ebf4u: goto label_14ebf4;
        case 0x14ebf8u: goto label_14ebf8;
        case 0x14ebfcu: goto label_14ebfc;
        case 0x14ec00u: goto label_14ec00;
        case 0x14ec04u: goto label_14ec04;
        case 0x14ec08u: goto label_14ec08;
        case 0x14ec0cu: goto label_14ec0c;
        case 0x14ec10u: goto label_14ec10;
        case 0x14ec14u: goto label_14ec14;
        case 0x14ec18u: goto label_14ec18;
        case 0x14ec1cu: goto label_14ec1c;
        case 0x14ec20u: goto label_14ec20;
        case 0x14ec24u: goto label_14ec24;
        case 0x14ec28u: goto label_14ec28;
        case 0x14ec2cu: goto label_14ec2c;
        case 0x14ec30u: goto label_14ec30;
        case 0x14ec34u: goto label_14ec34;
        case 0x14ec38u: goto label_14ec38;
        case 0x14ec3cu: goto label_14ec3c;
        case 0x14ec40u: goto label_14ec40;
        case 0x14ec44u: goto label_14ec44;
        case 0x14ec48u: goto label_14ec48;
        case 0x14ec4cu: goto label_14ec4c;
        case 0x14ec50u: goto label_14ec50;
        case 0x14ec54u: goto label_14ec54;
        case 0x14ec58u: goto label_14ec58;
        case 0x14ec5cu: goto label_14ec5c;
        case 0x14ec60u: goto label_14ec60;
        case 0x14ec64u: goto label_14ec64;
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec6cu: goto label_14ec6c;
        case 0x14ec70u: goto label_14ec70;
        case 0x14ec74u: goto label_14ec74;
        case 0x14ec78u: goto label_14ec78;
        case 0x14ec7cu: goto label_14ec7c;
        case 0x14ec80u: goto label_14ec80;
        case 0x14ec84u: goto label_14ec84;
        case 0x14ec88u: goto label_14ec88;
        case 0x14ec8cu: goto label_14ec8c;
        case 0x14ec90u: goto label_14ec90;
        case 0x14ec94u: goto label_14ec94;
        case 0x14ec98u: goto label_14ec98;
        case 0x14ec9cu: goto label_14ec9c;
        case 0x14eca0u: goto label_14eca0;
        case 0x14eca4u: goto label_14eca4;
        case 0x14eca8u: goto label_14eca8;
        case 0x14ecacu: goto label_14ecac;
        case 0x14ecb0u: goto label_14ecb0;
        case 0x14ecb4u: goto label_14ecb4;
        case 0x14ecb8u: goto label_14ecb8;
        case 0x14ecbcu: goto label_14ecbc;
        case 0x14ecc0u: goto label_14ecc0;
        case 0x14ecc4u: goto label_14ecc4;
        case 0x14ecc8u: goto label_14ecc8;
        case 0x14ecccu: goto label_14eccc;
        case 0x14ecd0u: goto label_14ecd0;
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ecd8u: goto label_14ecd8;
        case 0x14ecdcu: goto label_14ecdc;
        case 0x14ece0u: goto label_14ece0;
        case 0x14ece4u: goto label_14ece4;
        case 0x14ece8u: goto label_14ece8;
        case 0x14ececu: goto label_14ecec;
        case 0x14ecf0u: goto label_14ecf0;
        case 0x14ecf4u: goto label_14ecf4;
        case 0x14ecf8u: goto label_14ecf8;
        case 0x14ecfcu: goto label_14ecfc;
        case 0x14ed00u: goto label_14ed00;
        case 0x14ed04u: goto label_14ed04;
        case 0x14ed08u: goto label_14ed08;
        case 0x14ed0cu: goto label_14ed0c;
        case 0x14ed10u: goto label_14ed10;
        case 0x14ed14u: goto label_14ed14;
        case 0x14ed18u: goto label_14ed18;
        case 0x14ed1cu: goto label_14ed1c;
        case 0x14ed20u: goto label_14ed20;
        case 0x14ed24u: goto label_14ed24;
        case 0x14ed28u: goto label_14ed28;
        case 0x14ed2cu: goto label_14ed2c;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed34u: goto label_14ed34;
        case 0x14ed38u: goto label_14ed38;
        case 0x14ed3cu: goto label_14ed3c;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed44u: goto label_14ed44;
        case 0x14ed48u: goto label_14ed48;
        case 0x14ed4cu: goto label_14ed4c;
        case 0x14ed50u: goto label_14ed50;
        case 0x14ed54u: goto label_14ed54;
        case 0x14ed58u: goto label_14ed58;
        case 0x14ed5cu: goto label_14ed5c;
        case 0x14ed60u: goto label_14ed60;
        case 0x14ed64u: goto label_14ed64;
        case 0x14ed68u: goto label_14ed68;
        case 0x14ed6cu: goto label_14ed6c;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed74u: goto label_14ed74;
        case 0x14ed78u: goto label_14ed78;
        case 0x14ed7cu: goto label_14ed7c;
        case 0x14ed80u: goto label_14ed80;
        case 0x14ed84u: goto label_14ed84;
        case 0x14ed88u: goto label_14ed88;
        case 0x14ed8cu: goto label_14ed8c;
        case 0x14ed90u: goto label_14ed90;
        case 0x14ed94u: goto label_14ed94;
        case 0x14ed98u: goto label_14ed98;
        case 0x14ed9cu: goto label_14ed9c;
        case 0x14eda0u: goto label_14eda0;
        case 0x14eda4u: goto label_14eda4;
        case 0x14eda8u: goto label_14eda8;
        case 0x14edacu: goto label_14edac;
        case 0x14edb0u: goto label_14edb0;
        case 0x14edb4u: goto label_14edb4;
        case 0x14edb8u: goto label_14edb8;
        case 0x14edbcu: goto label_14edbc;
        case 0x14edc0u: goto label_14edc0;
        case 0x14edc4u: goto label_14edc4;
        case 0x14edc8u: goto label_14edc8;
        case 0x14edccu: goto label_14edcc;
        case 0x14edd0u: goto label_14edd0;
        case 0x14edd4u: goto label_14edd4;
        case 0x14edd8u: goto label_14edd8;
        case 0x14eddcu: goto label_14eddc;
        case 0x14ede0u: goto label_14ede0;
        case 0x14ede4u: goto label_14ede4;
        case 0x14ede8u: goto label_14ede8;
        case 0x14edecu: goto label_14edec;
        case 0x14edf0u: goto label_14edf0;
        case 0x14edf4u: goto label_14edf4;
        case 0x14edf8u: goto label_14edf8;
        case 0x14edfcu: goto label_14edfc;
        case 0x14ee00u: goto label_14ee00;
        case 0x14ee04u: goto label_14ee04;
        case 0x14ee08u: goto label_14ee08;
        case 0x14ee0cu: goto label_14ee0c;
        case 0x14ee10u: goto label_14ee10;
        case 0x14ee14u: goto label_14ee14;
        case 0x14ee18u: goto label_14ee18;
        case 0x14ee1cu: goto label_14ee1c;
        case 0x14ee20u: goto label_14ee20;
        case 0x14ee24u: goto label_14ee24;
        case 0x14ee28u: goto label_14ee28;
        case 0x14ee2cu: goto label_14ee2c;
        case 0x14ee30u: goto label_14ee30;
        case 0x14ee34u: goto label_14ee34;
        case 0x14ee38u: goto label_14ee38;
        case 0x14ee3cu: goto label_14ee3c;
        case 0x14ee40u: goto label_14ee40;
        case 0x14ee44u: goto label_14ee44;
        case 0x14ee48u: goto label_14ee48;
        case 0x14ee4cu: goto label_14ee4c;
        case 0x14ee50u: goto label_14ee50;
        case 0x14ee54u: goto label_14ee54;
        case 0x14ee58u: goto label_14ee58;
        case 0x14ee5cu: goto label_14ee5c;
        case 0x14ee60u: goto label_14ee60;
        case 0x14ee64u: goto label_14ee64;
        case 0x14ee68u: goto label_14ee68;
        case 0x14ee6cu: goto label_14ee6c;
        case 0x14ee70u: goto label_14ee70;
        case 0x14ee74u: goto label_14ee74;
        case 0x14ee78u: goto label_14ee78;
        case 0x14ee7cu: goto label_14ee7c;
        case 0x14ee80u: goto label_14ee80;
        case 0x14ee84u: goto label_14ee84;
        case 0x14ee88u: goto label_14ee88;
        case 0x14ee8cu: goto label_14ee8c;
        case 0x14ee90u: goto label_14ee90;
        case 0x14ee94u: goto label_14ee94;
        case 0x14ee98u: goto label_14ee98;
        case 0x14ee9cu: goto label_14ee9c;
        case 0x14eea0u: goto label_14eea0;
        case 0x14eea4u: goto label_14eea4;
        case 0x14eea8u: goto label_14eea8;
        case 0x14eeacu: goto label_14eeac;
        case 0x14eeb0u: goto label_14eeb0;
        case 0x14eeb4u: goto label_14eeb4;
        case 0x14eeb8u: goto label_14eeb8;
        case 0x14eebcu: goto label_14eebc;
        case 0x14eec0u: goto label_14eec0;
        case 0x14eec4u: goto label_14eec4;
        case 0x14eec8u: goto label_14eec8;
        case 0x14eeccu: goto label_14eecc;
        case 0x14eed0u: goto label_14eed0;
        case 0x14eed4u: goto label_14eed4;
        case 0x14eed8u: goto label_14eed8;
        case 0x14eedcu: goto label_14eedc;
        case 0x14eee0u: goto label_14eee0;
        case 0x14eee4u: goto label_14eee4;
        case 0x14eee8u: goto label_14eee8;
        case 0x14eeecu: goto label_14eeec;
        case 0x14eef0u: goto label_14eef0;
        case 0x14eef4u: goto label_14eef4;
        case 0x14eef8u: goto label_14eef8;
        case 0x14eefcu: goto label_14eefc;
        case 0x14ef00u: goto label_14ef00;
        case 0x14ef04u: goto label_14ef04;
        case 0x14ef08u: goto label_14ef08;
        case 0x14ef0cu: goto label_14ef0c;
        case 0x14ef10u: goto label_14ef10;
        case 0x14ef14u: goto label_14ef14;
        case 0x14ef18u: goto label_14ef18;
        case 0x14ef1cu: goto label_14ef1c;
        case 0x14ef20u: goto label_14ef20;
        case 0x14ef24u: goto label_14ef24;
        case 0x14ef28u: goto label_14ef28;
        case 0x14ef2cu: goto label_14ef2c;
        case 0x14ef30u: goto label_14ef30;
        case 0x14ef34u: goto label_14ef34;
        case 0x14ef38u: goto label_14ef38;
        case 0x14ef3cu: goto label_14ef3c;
        case 0x14ef40u: goto label_14ef40;
        case 0x14ef44u: goto label_14ef44;
        case 0x14ef48u: goto label_14ef48;
        case 0x14ef4cu: goto label_14ef4c;
        case 0x14ef50u: goto label_14ef50;
        case 0x14ef54u: goto label_14ef54;
        case 0x14ef58u: goto label_14ef58;
        case 0x14ef5cu: goto label_14ef5c;
        case 0x14ef60u: goto label_14ef60;
        case 0x14ef64u: goto label_14ef64;
        case 0x14ef68u: goto label_14ef68;
        case 0x14ef6cu: goto label_14ef6c;
        case 0x14ef70u: goto label_14ef70;
        case 0x14ef74u: goto label_14ef74;
        case 0x14ef78u: goto label_14ef78;
        case 0x14ef7cu: goto label_14ef7c;
        case 0x14ef80u: goto label_14ef80;
        case 0x14ef84u: goto label_14ef84;
        case 0x14ef88u: goto label_14ef88;
        case 0x14ef8cu: goto label_14ef8c;
        case 0x14ef90u: goto label_14ef90;
        case 0x14ef94u: goto label_14ef94;
        case 0x14ef98u: goto label_14ef98;
        case 0x14ef9cu: goto label_14ef9c;
        case 0x14efa0u: goto label_14efa0;
        case 0x14efa4u: goto label_14efa4;
        case 0x14efa8u: goto label_14efa8;
        case 0x14efacu: goto label_14efac;
        case 0x14efb0u: goto label_14efb0;
        case 0x14efb4u: goto label_14efb4;
        case 0x14efb8u: goto label_14efb8;
        case 0x14efbcu: goto label_14efbc;
        case 0x14efc0u: goto label_14efc0;
        case 0x14efc4u: goto label_14efc4;
        case 0x14efc8u: goto label_14efc8;
        case 0x14efccu: goto label_14efcc;
        case 0x14efd0u: goto label_14efd0;
        case 0x14efd4u: goto label_14efd4;
        case 0x14efd8u: goto label_14efd8;
        case 0x14efdcu: goto label_14efdc;
        case 0x14efe0u: goto label_14efe0;
        case 0x14efe4u: goto label_14efe4;
        case 0x14efe8u: goto label_14efe8;
        case 0x14efecu: goto label_14efec;
        case 0x14eff0u: goto label_14eff0;
        case 0x14eff4u: goto label_14eff4;
        case 0x14eff8u: goto label_14eff8;
        case 0x14effcu: goto label_14effc;
        case 0x14f000u: goto label_14f000;
        case 0x14f004u: goto label_14f004;
        case 0x14f008u: goto label_14f008;
        case 0x14f00cu: goto label_14f00c;
        case 0x14f010u: goto label_14f010;
        case 0x14f014u: goto label_14f014;
        case 0x14f018u: goto label_14f018;
        case 0x14f01cu: goto label_14f01c;
        case 0x14f020u: goto label_14f020;
        case 0x14f024u: goto label_14f024;
        case 0x14f028u: goto label_14f028;
        case 0x14f02cu: goto label_14f02c;
        case 0x14f030u: goto label_14f030;
        case 0x14f034u: goto label_14f034;
        case 0x14f038u: goto label_14f038;
        case 0x14f03cu: goto label_14f03c;
        case 0x14f040u: goto label_14f040;
        case 0x14f044u: goto label_14f044;
        case 0x14f048u: goto label_14f048;
        case 0x14f04cu: goto label_14f04c;
        case 0x14f050u: goto label_14f050;
        case 0x14f054u: goto label_14f054;
        case 0x14f058u: goto label_14f058;
        case 0x14f05cu: goto label_14f05c;
        case 0x14f060u: goto label_14f060;
        case 0x14f064u: goto label_14f064;
        case 0x14f068u: goto label_14f068;
        case 0x14f06cu: goto label_14f06c;
        case 0x14f070u: goto label_14f070;
        case 0x14f074u: goto label_14f074;
        case 0x14f078u: goto label_14f078;
        case 0x14f07cu: goto label_14f07c;
        case 0x14f080u: goto label_14f080;
        case 0x14f084u: goto label_14f084;
        case 0x14f088u: goto label_14f088;
        case 0x14f08cu: goto label_14f08c;
        case 0x14f090u: goto label_14f090;
        case 0x14f094u: goto label_14f094;
        case 0x14f098u: goto label_14f098;
        case 0x14f09cu: goto label_14f09c;
        case 0x14f0a0u: goto label_14f0a0;
        case 0x14f0a4u: goto label_14f0a4;
        case 0x14f0a8u: goto label_14f0a8;
        case 0x14f0acu: goto label_14f0ac;
        case 0x14f0b0u: goto label_14f0b0;
        case 0x14f0b4u: goto label_14f0b4;
        case 0x14f0b8u: goto label_14f0b8;
        case 0x14f0bcu: goto label_14f0bc;
        case 0x14f0c0u: goto label_14f0c0;
        case 0x14f0c4u: goto label_14f0c4;
        case 0x14f0c8u: goto label_14f0c8;
        case 0x14f0ccu: goto label_14f0cc;
        case 0x14f0d0u: goto label_14f0d0;
        case 0x14f0d4u: goto label_14f0d4;
        case 0x14f0d8u: goto label_14f0d8;
        case 0x14f0dcu: goto label_14f0dc;
        case 0x14f0e0u: goto label_14f0e0;
        case 0x14f0e4u: goto label_14f0e4;
        case 0x14f0e8u: goto label_14f0e8;
        case 0x14f0ecu: goto label_14f0ec;
        case 0x14f0f0u: goto label_14f0f0;
        case 0x14f0f4u: goto label_14f0f4;
        case 0x14f0f8u: goto label_14f0f8;
        case 0x14f0fcu: goto label_14f0fc;
        case 0x14f100u: goto label_14f100;
        case 0x14f104u: goto label_14f104;
        case 0x14f108u: goto label_14f108;
        case 0x14f10cu: goto label_14f10c;
        case 0x14f110u: goto label_14f110;
        case 0x14f114u: goto label_14f114;
        case 0x14f118u: goto label_14f118;
        case 0x14f11cu: goto label_14f11c;
        case 0x14f120u: goto label_14f120;
        case 0x14f124u: goto label_14f124;
        case 0x14f128u: goto label_14f128;
        case 0x14f12cu: goto label_14f12c;
        case 0x14f130u: goto label_14f130;
        case 0x14f134u: goto label_14f134;
        case 0x14f138u: goto label_14f138;
        case 0x14f13cu: goto label_14f13c;
        case 0x14f140u: goto label_14f140;
        case 0x14f144u: goto label_14f144;
        case 0x14f148u: goto label_14f148;
        case 0x14f14cu: goto label_14f14c;
        case 0x14f150u: goto label_14f150;
        case 0x14f154u: goto label_14f154;
        case 0x14f158u: goto label_14f158;
        case 0x14f15cu: goto label_14f15c;
        case 0x14f160u: goto label_14f160;
        case 0x14f164u: goto label_14f164;
        case 0x14f168u: goto label_14f168;
        case 0x14f16cu: goto label_14f16c;
        case 0x14f170u: goto label_14f170;
        case 0x14f174u: goto label_14f174;
        case 0x14f178u: goto label_14f178;
        case 0x14f17cu: goto label_14f17c;
        case 0x14f180u: goto label_14f180;
        case 0x14f184u: goto label_14f184;
        case 0x14f188u: goto label_14f188;
        case 0x14f18cu: goto label_14f18c;
        case 0x14f190u: goto label_14f190;
        case 0x14f194u: goto label_14f194;
        case 0x14f198u: goto label_14f198;
        case 0x14f19cu: goto label_14f19c;
        case 0x14f1a0u: goto label_14f1a0;
        case 0x14f1a4u: goto label_14f1a4;
        case 0x14f1a8u: goto label_14f1a8;
        case 0x14f1acu: goto label_14f1ac;
        case 0x14f1b0u: goto label_14f1b0;
        case 0x14f1b4u: goto label_14f1b4;
        case 0x14f1b8u: goto label_14f1b8;
        case 0x14f1bcu: goto label_14f1bc;
        case 0x14f1c0u: goto label_14f1c0;
        case 0x14f1c4u: goto label_14f1c4;
        case 0x14f1c8u: goto label_14f1c8;
        case 0x14f1ccu: goto label_14f1cc;
        case 0x14f1d0u: goto label_14f1d0;
        case 0x14f1d4u: goto label_14f1d4;
        case 0x14f1d8u: goto label_14f1d8;
        case 0x14f1dcu: goto label_14f1dc;
        case 0x14f1e0u: goto label_14f1e0;
        case 0x14f1e4u: goto label_14f1e4;
        case 0x14f1e8u: goto label_14f1e8;
        case 0x14f1ecu: goto label_14f1ec;
        case 0x14f1f0u: goto label_14f1f0;
        case 0x14f1f4u: goto label_14f1f4;
        case 0x14f1f8u: goto label_14f1f8;
        case 0x14f1fcu: goto label_14f1fc;
        case 0x14f200u: goto label_14f200;
        case 0x14f204u: goto label_14f204;
        case 0x14f208u: goto label_14f208;
        case 0x14f20cu: goto label_14f20c;
        case 0x14f210u: goto label_14f210;
        case 0x14f214u: goto label_14f214;
        case 0x14f218u: goto label_14f218;
        case 0x14f21cu: goto label_14f21c;
        case 0x14f220u: goto label_14f220;
        case 0x14f224u: goto label_14f224;
        case 0x14f228u: goto label_14f228;
        case 0x14f22cu: goto label_14f22c;
        case 0x14f230u: goto label_14f230;
        case 0x14f234u: goto label_14f234;
        case 0x14f238u: goto label_14f238;
        case 0x14f23cu: goto label_14f23c;
        case 0x14f240u: goto label_14f240;
        case 0x14f244u: goto label_14f244;
        case 0x14f248u: goto label_14f248;
        case 0x14f24cu: goto label_14f24c;
        case 0x14f250u: goto label_14f250;
        case 0x14f254u: goto label_14f254;
        case 0x14f258u: goto label_14f258;
        case 0x14f25cu: goto label_14f25c;
        case 0x14f260u: goto label_14f260;
        case 0x14f264u: goto label_14f264;
        case 0x14f268u: goto label_14f268;
        case 0x14f26cu: goto label_14f26c;
        case 0x14f270u: goto label_14f270;
        case 0x14f274u: goto label_14f274;
        case 0x14f278u: goto label_14f278;
        case 0x14f27cu: goto label_14f27c;
        case 0x14f280u: goto label_14f280;
        case 0x14f284u: goto label_14f284;
        case 0x14f288u: goto label_14f288;
        case 0x14f28cu: goto label_14f28c;
        case 0x14f290u: goto label_14f290;
        case 0x14f294u: goto label_14f294;
        case 0x14f298u: goto label_14f298;
        case 0x14f29cu: goto label_14f29c;
        case 0x14f2a0u: goto label_14f2a0;
        case 0x14f2a4u: goto label_14f2a4;
        case 0x14f2a8u: goto label_14f2a8;
        case 0x14f2acu: goto label_14f2ac;
        case 0x14f2b0u: goto label_14f2b0;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2b8u: goto label_14f2b8;
        case 0x14f2bcu: goto label_14f2bc;
        case 0x14f2c0u: goto label_14f2c0;
        case 0x14f2c4u: goto label_14f2c4;
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2ccu: goto label_14f2cc;
        case 0x14f2d0u: goto label_14f2d0;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f2d8u: goto label_14f2d8;
        case 0x14f2dcu: goto label_14f2dc;
        case 0x14f2e0u: goto label_14f2e0;
        case 0x14f2e4u: goto label_14f2e4;
        case 0x14f2e8u: goto label_14f2e8;
        case 0x14f2ecu: goto label_14f2ec;
        case 0x14f2f0u: goto label_14f2f0;
        case 0x14f2f4u: goto label_14f2f4;
        case 0x14f2f8u: goto label_14f2f8;
        case 0x14f2fcu: goto label_14f2fc;
        case 0x14f300u: goto label_14f300;
        case 0x14f304u: goto label_14f304;
        case 0x14f308u: goto label_14f308;
        case 0x14f30cu: goto label_14f30c;
        case 0x14f310u: goto label_14f310;
        case 0x14f314u: goto label_14f314;
        case 0x14f318u: goto label_14f318;
        case 0x14f31cu: goto label_14f31c;
        case 0x14f320u: goto label_14f320;
        case 0x14f324u: goto label_14f324;
        case 0x14f328u: goto label_14f328;
        case 0x14f32cu: goto label_14f32c;
        case 0x14f330u: goto label_14f330;
        case 0x14f334u: goto label_14f334;
        case 0x14f338u: goto label_14f338;
        case 0x14f33cu: goto label_14f33c;
        case 0x14f340u: goto label_14f340;
        case 0x14f344u: goto label_14f344;
        case 0x14f348u: goto label_14f348;
        case 0x14f34cu: goto label_14f34c;
        case 0x14f350u: goto label_14f350;
        case 0x14f354u: goto label_14f354;
        case 0x14f358u: goto label_14f358;
        case 0x14f35cu: goto label_14f35c;
        case 0x14f360u: goto label_14f360;
        case 0x14f364u: goto label_14f364;
        case 0x14f368u: goto label_14f368;
        case 0x14f36cu: goto label_14f36c;
        default: return;
    }


    ctx->pc = 0x14eba0u;

label_14eba0:
    // 0x14eba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_14eba4:
    // 0x14eba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14eba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eba8:
    // 0x14eba8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14eba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14ebac:
    // 0x14ebac: 0x10000007  b           . + 4 + (0x7 << 2)
label_14ebb0:
    if (ctx->pc == 0x14EBB0u) {
        ctx->pc = 0x14EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBACu;
        // 0x14ebb0: 0x27a60000  addiu       $a2, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBB4u;
        goto label_14ebb4;
    }
    ctx->pc = 0x14EBACu;
    {
        const bool branch_taken_0x14ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBACu;
        // 0x14ebb0: 0x27a60000  addiu       $a2, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebac) {
            ctx->pc = 0x14EBCCu;
            goto label_14ebcc;
        }
    }
    ctx->pc = 0x14EBB4u;
label_14ebb4:
    // 0x14ebb4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_14ebb8:
    // 0x14ebb8: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_14ebbc:
    // 0x14ebbc: 0x0  nop
    ctx->pc = 0x14ebbcu;
    // NOP
label_14ebc0:
    // 0x14ebc0: 0x0  nop
    ctx->pc = 0x14ebc0u;
    // NOP
label_14ebc4:
    // 0x14ebc4: 0x8ce70088  lw          $a3, 0x88($a3)
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_14ebc8:
    // 0x14ebc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14ebcc:
    // 0x14ebcc: 0x0  nop
    ctx->pc = 0x14ebccu;
    // NOP
label_14ebd0:
    // 0x14ebd0: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
label_14ebd4:
    if (ctx->pc == 0x14EBD4u) {
        ctx->pc = 0x14EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD0u;
        // 0x14ebd4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBD8u;
        goto label_14ebd8;
    }
    ctx->pc = 0x14EBD0u;
    {
        const bool branch_taken_0x14ebd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD0u;
        // 0x14ebd4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebd0) {
            ctx->pc = 0x14EBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ebb4;
        }
    }
    ctx->pc = 0x14EBD8u;
label_14ebd8:
    // 0x14ebd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ebd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ebdc:
    // 0x14ebdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14ebe0:
    // 0x14ebe0: 0x1000000a  b           . + 4 + (0xA << 2)
label_14ebe4:
    if (ctx->pc == 0x14EBE4u) {
        ctx->pc = 0x14EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE0u;
        // 0x14ebe4: 0x27a60000  addiu       $a2, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBE8u;
        goto label_14ebe8;
    }
    ctx->pc = 0x14EBE0u;
    {
        const bool branch_taken_0x14ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE0u;
        // 0x14ebe4: 0x27a60000  addiu       $a2, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe0) {
            ctx->pc = 0x14EC0Cu;
            goto label_14ec0c;
        }
    }
    ctx->pc = 0x14EBE8u;
label_14ebe8:
    // 0x14ebe8: 0x0  nop
    ctx->pc = 0x14ebe8u;
    // NOP
label_14ebec:
    // 0x14ebec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x14ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14ebf0:
    // 0x14ebf0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_14ebf4:
    // 0x14ebf4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14ebf8:
    // 0x14ebf8: 0x90a5008c  lbu         $a1, 0x8C($a1)
    ctx->pc = 0x14ebf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
label_14ebfc:
    // 0x14ebfc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_14ec00:
    if (ctx->pc == 0x14EC00u) {
        ctx->pc = 0x14EC04u;
        goto label_14ec04;
    }
    ctx->pc = 0x14EBFCu;
    {
        const bool branch_taken_0x14ebfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebfc) {
            ctx->pc = 0x14EC18u;
            goto label_14ec18;
        }
    }
    ctx->pc = 0x14EC04u;
label_14ec04:
    // 0x14ec04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14ec08:
    // 0x14ec08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14ec0c:
    // 0x14ec0c: 0x0  nop
    ctx->pc = 0x14ec0cu;
    // NOP
label_14ec10:
    // 0x14ec10: 0x461fff5  bgez        $v1, . + 4 + (-0xB << 2)
label_14ec14:
    if (ctx->pc == 0x14EC14u) {
        ctx->pc = 0x14EC18u;
        goto label_14ec18;
    }
    ctx->pc = 0x14EC10u;
    {
        const bool branch_taken_0x14ec10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14ec10) {
            ctx->pc = 0x14EBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ebe8;
        }
    }
    ctx->pc = 0x14EC18u;
label_14ec18:
    // 0x14ec18: 0x14e00048  bnez        $a3, . + 4 + (0x48 << 2)
label_14ec1c:
    if (ctx->pc == 0x14EC1Cu) {
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC20u;
        goto label_14ec20;
    }
    ctx->pc = 0x14EC18u;
    {
        const bool branch_taken_0x14ec18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec18) {
            ctx->pc = 0x14ED3Cu;
            goto label_14ed3c;
        }
    }
    ctx->pc = 0x14EC20u;
label_14ec20:
    // 0x14ec20: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_14ec24:
    // 0x14ec24: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14ec28:
    // 0x14ec28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14ec2c:
    // 0x14ec2c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x14ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_14ec30:
    // 0x14ec30: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_14ec34:
    // 0x14ec34: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x14ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14ec38:
    // 0x14ec38: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x14ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_14ec3c:
    // 0x14ec3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14ec40:
    // 0x14ec40: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_14ec44:
    // 0x14ec44: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14ec48:
    // 0x14ec48: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x14ec48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_14ec4c:
    // 0x14ec4c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x14ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_14ec50:
    // 0x14ec50: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x14ec50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_14ec54:
    // 0x14ec54: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x14ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_14ec58:
    // 0x14ec58: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x14ec58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_14ec5c:
    // 0x14ec5c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x14ec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_14ec60:
    // 0x14ec60: 0xd8e10030  lqc2        $vf1, 0x30($a3)
    ctx->pc = 0x14ec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_14ec64:
    // 0x14ec64: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x14ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_14ec68:
    // 0x14ec68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ec6c:
    // 0x14ec6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14ec70:
    // 0x14ec70: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_14ec74:
    // 0x14ec74: 0x10000031  b           . + 4 + (0x31 << 2)
label_14ec78:
    if (ctx->pc == 0x14EC78u) {
        ctx->pc = 0x14EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC74u;
        // 0x14ec78: 0xa0a6008c  sb          $a2, 0x8C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC7Cu;
        goto label_14ec7c;
    }
    ctx->pc = 0x14EC74u;
    {
        const bool branch_taken_0x14ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC74u;
        // 0x14ec78: 0xa0a6008c  sb          $a2, 0x8C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec74) {
            ctx->pc = 0x14ED3Cu;
            goto label_14ed3c;
        }
    }
    ctx->pc = 0x14EC7Cu;
label_14ec7c:
    // 0x14ec7c: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x14ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_14ec80:
    // 0x14ec80: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x14ec80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_14ec84:
    // 0x14ec84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14ec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14ec88:
    // 0x14ec88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_14ec8c:
    // 0x14ec8c: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x14ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_14ec90:
    // 0x14ec90: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_14ec94:
    // 0x14ec94: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x14ec94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_14ec98:
    // 0x14ec98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14ec9c:
    // 0x14ec9c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x14ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_14eca0:
    // 0x14eca0: 0x25060080  addiu       $a2, $t0, 0x80
    ctx->pc = 0x14eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_14eca4:
    // 0x14eca4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x14eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_14eca8:
    // 0x14eca8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x14eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_14ecac:
    // 0x14ecac: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x14ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_14ecb0:
    // 0x14ecb0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_14ecb4:
    // 0x14ecb4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14ecb8:
    // 0x14ecb8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14ecbc:
    // 0x14ecbc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x14ecbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_14ecc0:
    // 0x14ecc0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x14ecc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_14ecc4:
    // 0x14ecc4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x14ecc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_14ecc8:
    // 0x14ecc8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x14ecc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_14eccc:
    // 0x14eccc: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x14ecccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_14ecd0:
    // 0x14ecd0: 0xd9060010  lqc2        $vf6, 0x10($t0)
    ctx->pc = 0x14ecd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_14ecd4:
    // 0x14ecd4: 0xd9070020  lqc2        $vf7, 0x20($t0)
    ctx->pc = 0x14ecd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_14ecd8:
    // 0x14ecd8: 0xd9080030  lqc2        $vf8, 0x30($t0)
    ctx->pc = 0x14ecd8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_14ecdc:
    // 0x14ecdc: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x14ecdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ece0:
    // 0x14ece0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x14ece0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ece4:
    // 0x14ece4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x14ece4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ece8:
    // 0x14ece8: 0x4be5224b  vmaddw.xyzw $vf9, $vf4, $vf5w
    ctx->pc = 0x14ece8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_14ecec:
    // 0x14ecec: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x14ececu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ecf0:
    // 0x14ecf0: 0x4be610bd  vmadday.xyzw $ACC, $vf2, $vf6y
    ctx->pc = 0x14ecf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ecf4:
    // 0x14ecf4: 0x4be618be  vmaddaz.xyzw $ACC, $vf3, $vf6z
    ctx->pc = 0x14ecf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ecf8:
    // 0x14ecf8: 0x4be6228b  vmaddw.xyzw $vf10, $vf4, $vf6w
    ctx->pc = 0x14ecf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_14ecfc:
    // 0x14ecfc: 0x4be709bc  vmulax.xyzw $ACC, $vf1, $vf7x
    ctx->pc = 0x14ecfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed00:
    // 0x14ed00: 0x4be710bd  vmadday.xyzw $ACC, $vf2, $vf7y
    ctx->pc = 0x14ed00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed04:
    // 0x14ed04: 0x4be718be  vmaddaz.xyzw $ACC, $vf3, $vf7z
    ctx->pc = 0x14ed04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed08:
    // 0x14ed08: 0x4be722cb  vmaddw.xyzw $vf11, $vf4, $vf7w
    ctx->pc = 0x14ed08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_14ed0c:
    // 0x14ed0c: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x14ed0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed10:
    // 0x14ed10: 0x4be810bd  vmadday.xyzw $ACC, $vf2, $vf8y
    ctx->pc = 0x14ed10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed14:
    // 0x14ed14: 0x4be818be  vmaddaz.xyzw $ACC, $vf3, $vf8z
    ctx->pc = 0x14ed14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14ed18:
    // 0x14ed18: 0x4be8230b  vmaddw.xyzw $vf12, $vf4, $vf8w
    ctx->pc = 0x14ed18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_14ed1c:
    // 0x14ed1c: 0xf8c90000  sqc2        $vf9, 0x0($a2)
    ctx->pc = 0x14ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_14ed20:
    // 0x14ed20: 0xf8ca0010  sqc2        $vf10, 0x10($a2)
    ctx->pc = 0x14ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[10]));
label_14ed24:
    // 0x14ed24: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x14ed24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
label_14ed28:
    // 0x14ed28: 0xf8cc0030  sqc2        $vf12, 0x30($a2)
    ctx->pc = 0x14ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[12]));
label_14ed2c:
    // 0x14ed2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14ed30:
    // 0x14ed30: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_14ed34:
    // 0x14ed34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ed34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ed38:
    // 0x14ed38: 0xa0a6008c  sb          $a2, 0x8C($a1)
    ctx->pc = 0x14ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 6));
label_14ed3c:
    // 0x14ed3c: 0x0  nop
    ctx->pc = 0x14ed3cu;
    // NOP
label_14ed40:
    // 0x14ed40: 0x461ffce  bgez        $v1, . + 4 + (-0x32 << 2)
label_14ed44:
    if (ctx->pc == 0x14ED44u) {
        ctx->pc = 0x14ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED40u;
        // 0x14ed44: 0x33880  sll         $a3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED48u;
        goto label_14ed48;
    }
    ctx->pc = 0x14ED40u;
    {
        const bool branch_taken_0x14ed40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED40u;
        // 0x14ed44: 0x33880  sll         $a3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed40) {
            ctx->pc = 0x14EC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ec7c;
        }
    }
    ctx->pc = 0x14ED48u;
label_14ed48:
    // 0x14ed48: 0x2483008e  addiu       $v1, $a0, 0x8E
    ctx->pc = 0x14ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 142));
label_14ed4c:
    // 0x14ed4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14ed4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14ed50:
    // 0x14ed50: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x14ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_14ed54:
    // 0x14ed54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ed58:
    // 0x14ed58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14ed5c:
    // 0x14ed5c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x14ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_14ed60:
    // 0x14ed60: 0x3e00008  jr          $ra
label_14ed64:
    if (ctx->pc == 0x14ED64u) {
        ctx->pc = 0x14ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED60u;
        // 0x14ed64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED68u;
        goto label_14ed68;
    }
    ctx->pc = 0x14ED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED60u;
        // 0x14ed64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ED68u;
label_14ed68:
    // 0x14ed68: 0x0  nop
    ctx->pc = 0x14ed68u;
    // NOP
label_14ed6c:
    // 0x14ed6c: 0x0  nop
    ctx->pc = 0x14ed6cu;
    // NOP
label_14ed70:
    // 0x14ed70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14ed74:
    // 0x14ed74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14ed78:
    // 0x14ed78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14ed7c:
    // 0x14ed7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14ed80:
    // 0x14ed80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ed80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14ed84:
    // 0x14ed84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14ed88:
    // 0x14ed88: 0xc066e44  jal         func_19B910
label_14ed8c:
    if (ctx->pc == 0x14ED8Cu) {
        ctx->pc = 0x14ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED88u;
        // 0x14ed8c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED90u;
        goto label_14ed90;
    }
    ctx->pc = 0x14ED88u;
    SET_GPR_U32(ctx, 31, 0x14ED90u);
    ctx->pc = 0x14ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED88u;
    // 0x14ed8c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x14ED90u;
label_14ed90:
    // 0x14ed90: 0xae110088  sw          $s1, 0x88($s0)
    ctx->pc = 0x14ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 17));
label_14ed94:
    // 0x14ed94: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x14ed94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
label_14ed98:
    // 0x14ed98: 0xa200008f  sb          $zero, 0x8F($s0)
    ctx->pc = 0x14ed98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 0));
label_14ed9c:
    // 0x14ed9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14eda0:
    // 0x14eda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14eda4:
    // 0x14eda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14eda8:
    // 0x14eda8: 0x3e00008  jr          $ra
label_14edac:
    if (ctx->pc == 0x14EDACu) {
        ctx->pc = 0x14EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDA8u;
        // 0x14edac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EDB0u;
        goto label_14edb0;
    }
    ctx->pc = 0x14EDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDA8u;
        // 0x14edac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EDB0u;
label_14edb0:
    // 0x14edb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_14edb4:
    // 0x14edb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x14edb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_14edb8:
    // 0x14edb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14edb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14edbc:
    // 0x14edbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14edc0:
    // 0x14edc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14edc4:
    // 0x14edc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14edc8:
    // 0x14edc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14edcc:
    // 0x14edcc: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x14edccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_14edd0:
    // 0x14edd0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x14edd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_14edd4:
    // 0x14edd4: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
label_14edd8:
    if (ctx->pc == 0x14EDD8u) {
        ctx->pc = 0x14EDDCu;
        goto label_14eddc;
    }
    ctx->pc = 0x14EDD4u;
    {
        const bool branch_taken_0x14edd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14edd4) {
            ctx->pc = 0x14EF90u;
            goto label_14ef90;
        }
    }
    ctx->pc = 0x14EDDCu;
label_14eddc:
    // 0x14eddc: 0x8f908128  lw          $s0, -0x7ED8($gp)
    ctx->pc = 0x14eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_14ede0:
    // 0x14ede0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ede4:
    // 0x14ede4: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x14ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_14ede8:
    // 0x14ede8: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_14edec:
    if (ctx->pc == 0x14EDECu) {
        ctx->pc = 0x14EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE8u;
        // 0x14edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EDF0u;
        goto label_14edf0;
    }
    ctx->pc = 0x14EDE8u;
    {
        const bool branch_taken_0x14ede8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE8u;
        // 0x14edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede8) {
            ctx->pc = 0x14EF80u;
            goto label_14ef80;
        }
    }
    ctx->pc = 0x14EDF0u;
label_14edf0:
    // 0x14edf0: 0xc053bec  jal         func_14EFB0
label_14edf4:
    if (ctx->pc == 0x14EDF4u) {
        ctx->pc = 0x14EDF8u;
        goto label_14edf8;
    }
    ctx->pc = 0x14EDF0u;
    SET_GPR_U32(ctx, 31, 0x14EDF8u);
    ctx->pc = 0x14EFB0u;
    goto label_14efb0;
    ctx->pc = 0x14EDF8u;
label_14edf8:
    // 0x14edf8: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
label_14edfc:
    // 0x14edfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14ee00:
    // 0x14ee00: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_14ee04:
    if (ctx->pc == 0x14EE04u) {
        ctx->pc = 0x14EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE00u;
        // 0x14ee04: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE08u;
        goto label_14ee08;
    }
    ctx->pc = 0x14EE00u;
    {
        const bool branch_taken_0x14ee00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE00u;
        // 0x14ee04: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee00) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14EE08u;
label_14ee08:
    // 0x14ee08: 0xc08c0f8  jal         func_2303E0
label_14ee0c:
    if (ctx->pc == 0x14EE0Cu) {
        ctx->pc = 0x14EE10u;
        goto label_14ee10;
    }
    ctx->pc = 0x14EE08u;
    SET_GPR_U32(ctx, 31, 0x14EE10u);
    ctx->pc = 0x2303E0u;
    { ctx->pc = 0x2303e0; return; }
    ctx->pc = 0x14EE10u;
label_14ee10:
    // 0x14ee10: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_14ee14:
    // 0x14ee14: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
label_14ee18:
    if (ctx->pc == 0x14EE18u) {
        ctx->pc = 0x14EE1Cu;
        goto label_14ee1c;
    }
    ctx->pc = 0x14EE14u;
    {
        const bool branch_taken_0x14ee14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee14) {
            ctx->pc = 0x14EF1Cu;
            goto label_14ef1c;
        }
    }
    ctx->pc = 0x14EE1Cu;
label_14ee1c:
    // 0x14ee1c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_14ee20:
    // 0x14ee20: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x14ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_14ee24:
    // 0x14ee24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14ee28:
    if (ctx->pc == 0x14EE28u) {
        ctx->pc = 0x14EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE24u;
        // 0x14ee28: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE2Cu;
        goto label_14ee2c;
    }
    ctx->pc = 0x14EE24u;
    {
        const bool branch_taken_0x14ee24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE24u;
        // 0x14ee28: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee24) {
            ctx->pc = 0x14EE34u;
            goto label_14ee34;
        }
    }
    ctx->pc = 0x14EE2Cu;
label_14ee2c:
    // 0x14ee2c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_14ee30:
    if (ctx->pc == 0x14EE30u) {
        ctx->pc = 0x14EE34u;
        goto label_14ee34;
    }
    ctx->pc = 0x14EE2Cu;
    {
        const bool branch_taken_0x14ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee2c) {
            ctx->pc = 0x14EF1Cu;
            goto label_14ef1c;
        }
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x0  nop
    ctx->pc = 0x14ee34u;
    // NOP
label_14ee38:
    // 0x14ee38: 0x86030208  lh          $v1, 0x208($s0)
    ctx->pc = 0x14ee38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 520)));
label_14ee3c:
    // 0x14ee3c: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x14ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_14ee40:
    // 0x14ee40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ee44:
    // 0x14ee44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ee44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ee48:
    // 0x14ee48: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x14ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
label_14ee4c:
    // 0x14ee4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14ee50:
    // 0x14ee50: 0xa6030208  sh          $v1, 0x208($s0)
    ctx->pc = 0x14ee50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 3));
label_14ee54:
    // 0x14ee54: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x14ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
label_14ee58:
    // 0x14ee58: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x14ee58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_14ee5c:
    // 0x14ee5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ee5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ee60:
    // 0x14ee60: 0x0  nop
    ctx->pc = 0x14ee60u;
    // NOP
label_14ee64:
    // 0x14ee64: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_14ee68:
    // 0x14ee68: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_14ee6c:
    if (ctx->pc == 0x14EE6Cu) {
        ctx->pc = 0x14EE70u;
        goto label_14ee70;
    }
    ctx->pc = 0x14EE68u;
    {
        const bool branch_taken_0x14ee68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee68) {
            ctx->pc = 0x14EEC4u;
            goto label_14eec4;
        }
    }
    ctx->pc = 0x14EE70u;
label_14ee70:
    // 0x14ee70: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x14ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_14ee74:
    // 0x14ee74: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_14ee78:
    if (ctx->pc == 0x14EE78u) {
        ctx->pc = 0x14EE7Cu;
        goto label_14ee7c;
    }
    ctx->pc = 0x14EE74u;
    {
        const bool branch_taken_0x14ee74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ee74) {
            ctx->pc = 0x14EE84u;
            goto label_14ee84;
        }
    }
    ctx->pc = 0x14EE7Cu;
label_14ee7c:
    // 0x14ee7c: 0x10000016  b           . + 4 + (0x16 << 2)
label_14ee80:
    if (ctx->pc == 0x14EE80u) {
        ctx->pc = 0x14EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE7Cu;
        // 0x14ee80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE84u;
        goto label_14ee84;
    }
    ctx->pc = 0x14EE7Cu;
    {
        const bool branch_taken_0x14ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE7Cu;
        // 0x14ee80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee7c) {
            ctx->pc = 0x14EED8u;
            goto label_14eed8;
        }
    }
    ctx->pc = 0x14EE84u;
label_14ee84:
    // 0x14ee84: 0x0  nop
    ctx->pc = 0x14ee84u;
    // NOP
label_14ee88:
    // 0x14ee88: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_14ee8c:
    // 0x14ee8c: 0xc6030150  lwc1        $f3, 0x150($s0)
    ctx->pc = 0x14ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14ee90:
    // 0x14ee90: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x14ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14ee94:
    // 0x14ee94: 0xc4640150  lwc1        $f4, 0x150($v1)
    ctx->pc = 0x14ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14ee98:
    // 0x14ee98: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x14ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ee9c:
    // 0x14ee9c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x14ee9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_14eea0:
    // 0x14eea0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14eea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_14eea4:
    // 0x14eea4: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x14eea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_14eea8:
    // 0x14eea8: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x14eea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_14eeac:
    // 0x14eeac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14eeacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14eeb0:
    // 0x14eeb0: 0x0  nop
    ctx->pc = 0x14eeb0u;
    // NOP
label_14eeb4:
    // 0x14eeb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14eeb8:
    if (ctx->pc == 0x14EEB8u) {
        ctx->pc = 0x14EEBCu;
        goto label_14eebc;
    }
    ctx->pc = 0x14EEB4u;
    {
        const bool branch_taken_0x14eeb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14eeb4) {
            ctx->pc = 0x14EEC4u;
            goto label_14eec4;
        }
    }
    ctx->pc = 0x14EEBCu;
label_14eebc:
    // 0x14eebc: 0x10000006  b           . + 4 + (0x6 << 2)
label_14eec0:
    if (ctx->pc == 0x14EEC0u) {
        ctx->pc = 0x14EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEBCu;
        // 0x14eec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EEC4u;
        goto label_14eec4;
    }
    ctx->pc = 0x14EEBCu;
    {
        const bool branch_taken_0x14eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEBCu;
        // 0x14eec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eebc) {
            ctx->pc = 0x14EED8u;
            goto label_14eed8;
        }
    }
    ctx->pc = 0x14EEC4u;
label_14eec4:
    // 0x14eec4: 0x0  nop
    ctx->pc = 0x14eec4u;
    // NOP
label_14eec8:
    // 0x14eec8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14eecc:
    // 0x14eecc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x14eeccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_14eed0:
    // 0x14eed0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_14eed4:
    if (ctx->pc == 0x14EED4u) {
        ctx->pc = 0x14EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EED0u;
        // 0x14eed4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EED8u;
        goto label_14eed8;
    }
    ctx->pc = 0x14EED0u;
    {
        const bool branch_taken_0x14eed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EED0u;
        // 0x14eed4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eed0) {
            ctx->pc = 0x14EE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ee60;
        }
    }
    ctx->pc = 0x14EED8u;
label_14eed8:
    // 0x14eed8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_14eedc:
    if (ctx->pc == 0x14EEDCu) {
        ctx->pc = 0x14EEE0u;
        goto label_14eee0;
    }
    ctx->pc = 0x14EED8u;
    {
        const bool branch_taken_0x14eed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eed8) {
            ctx->pc = 0x14EF1Cu;
            goto label_14ef1c;
        }
    }
    ctx->pc = 0x14EEE0u;
label_14eee0:
    // 0x14eee0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_14eee4:
    // 0x14eee4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_14eee8:
    if (ctx->pc == 0x14EEE8u) {
        ctx->pc = 0x14EEECu;
        goto label_14eeec;
    }
    ctx->pc = 0x14EEE4u;
    {
        const bool branch_taken_0x14eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eee4) {
            ctx->pc = 0x14EF1Cu;
            goto label_14ef1c;
        }
    }
    ctx->pc = 0x14EEECu;
label_14eeec:
    // 0x14eeec: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_14eef0:
    if (ctx->pc == 0x14EEF0u) {
        ctx->pc = 0x14EEF4u;
        goto label_14eef4;
    }
    ctx->pc = 0x14EEECu;
    {
        const bool branch_taken_0x14eeec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eeec) {
            ctx->pc = 0x14EF80u;
            goto label_14ef80;
        }
    }
    ctx->pc = 0x14EEF4u;
label_14eef4:
    // 0x14eef4: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x14eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_14eef8:
    // 0x14eef8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14eefc:
    if (ctx->pc == 0x14EEFCu) {
        ctx->pc = 0x14EF00u;
        goto label_14ef00;
    }
    ctx->pc = 0x14EEF8u;
    {
        const bool branch_taken_0x14eef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eef8) {
            ctx->pc = 0x14EF08u;
            goto label_14ef08;
        }
    }
    ctx->pc = 0x14EF00u;
label_14ef00:
    // 0x14ef00: 0xc0542ec  jal         func_150BB0
label_14ef04:
    if (ctx->pc == 0x14EF04u) {
        ctx->pc = 0x14EF08u;
        goto label_14ef08;
    }
    ctx->pc = 0x14EF00u;
    SET_GPR_U32(ctx, 31, 0x14EF08u);
    ctx->pc = 0x150BB0u;
    { ctx->pc = 0x150bb0; return; }
    ctx->pc = 0x14EF08u;
label_14ef08:
    // 0x14ef08: 0xc0452cc  jal         func_114B30
label_14ef0c:
    if (ctx->pc == 0x14EF0Cu) {
        ctx->pc = 0x14EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF08u;
        // 0x14ef0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF10u;
        goto label_14ef10;
    }
    ctx->pc = 0x14EF08u;
    SET_GPR_U32(ctx, 31, 0x14EF10u);
    ctx->pc = 0x14EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF08u;
    // 0x14ef0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x14EF08u, 0x14EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF10u;
label_14ef10:
    // 0x14ef10: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x14ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_14ef14:
    // 0x14ef14: 0x1000001a  b           . + 4 + (0x1A << 2)
label_14ef18:
    if (ctx->pc == 0x14EF18u) {
        ctx->pc = 0x14EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF14u;
        // 0x14ef18: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF1Cu;
        goto label_14ef1c;
    }
    ctx->pc = 0x14EF14u;
    {
        const bool branch_taken_0x14ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF14u;
        // 0x14ef18: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef14) {
            ctx->pc = 0x14EF80u;
            goto label_14ef80;
        }
    }
    ctx->pc = 0x14EF1Cu;
label_14ef1c:
    // 0x14ef1c: 0x0  nop
    ctx->pc = 0x14ef1cu;
    // NOP
label_14ef20:
    // 0x14ef20: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_14ef24:
    // 0x14ef24: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x14ef24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14ef28:
    // 0x14ef28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ef2c:
    // 0x14ef2c: 0x30840400  andi        $a0, $a0, 0x400
    ctx->pc = 0x14ef2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_14ef30:
    // 0x14ef30: 0x64900a  movz        $s2, $v1, $a0
    ctx->pc = 0x14ef30u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_14ef34:
    // 0x14ef34: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x14ef34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_14ef38:
    // 0x14ef38: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_14ef3c:
    if (ctx->pc == 0x14EF3Cu) {
        ctx->pc = 0x14EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF38u;
        // 0x14ef3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF40u;
        goto label_14ef40;
    }
    ctx->pc = 0x14EF38u;
    {
        const bool branch_taken_0x14ef38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF38u;
        // 0x14ef3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef38) {
            ctx->pc = 0x14EF80u;
            goto label_14ef80;
        }
    }
    ctx->pc = 0x14EF40u;
label_14ef40:
    // 0x14ef40: 0x920401a2  lbu         $a0, 0x1A2($s0)
    ctx->pc = 0x14ef40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
label_14ef44:
    // 0x14ef44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ef48:
    // 0x14ef48: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x14ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_14ef4c:
    // 0x14ef4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14ef50:
    // 0x14ef50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_14ef54:
    if (ctx->pc == 0x14EF54u) {
        ctx->pc = 0x14EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF50u;
        // 0x14ef54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF58u;
        goto label_14ef58;
    }
    ctx->pc = 0x14EF50u;
    {
        const bool branch_taken_0x14ef50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF50u;
        // 0x14ef54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef50) {
            ctx->pc = 0x14EF70u;
            goto label_14ef70;
        }
    }
    ctx->pc = 0x14EF58u;
label_14ef58:
    // 0x14ef58: 0xc045100  jal         func_114400
label_14ef5c:
    if (ctx->pc == 0x14EF5Cu) {
        ctx->pc = 0x14EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF58u;
        // 0x14ef5c: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF60u;
        goto label_14ef60;
    }
    ctx->pc = 0x14EF58u;
    SET_GPR_U32(ctx, 31, 0x14EF60u);
    ctx->pc = 0x14EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF58u;
    // 0x14ef5c: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114400u, 0x14EF58u, 0x14EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF60u;
label_14ef60:
    // 0x14ef60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14ef64:
    if (ctx->pc == 0x14EF64u) {
        ctx->pc = 0x14EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF60u;
        // 0x14ef64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF68u;
        goto label_14ef68;
    }
    ctx->pc = 0x14EF60u;
    {
        const bool branch_taken_0x14ef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF60u;
        // 0x14ef64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef60) {
            ctx->pc = 0x14EF70u;
            goto label_14ef70;
        }
    }
    ctx->pc = 0x14EF68u;
label_14ef68:
    // 0x14ef68: 0xc045340  jal         func_114D00
label_14ef6c:
    if (ctx->pc == 0x14EF6Cu) {
        ctx->pc = 0x14EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF68u;
        // 0x14ef6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF70u;
        goto label_14ef70;
    }
    ctx->pc = 0x14EF68u;
    SET_GPR_U32(ctx, 31, 0x14EF70u);
    ctx->pc = 0x14EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF68u;
    // 0x14ef6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D00u, 0x14EF68u, 0x14EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF70u;
label_14ef70:
    // 0x14ef70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14ef70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14ef74:
    // 0x14ef74: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x14ef74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_14ef78:
    // 0x14ef78: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_14ef7c:
    if (ctx->pc == 0x14EF7Cu) {
        ctx->pc = 0x14EF80u;
        goto label_14ef80;
    }
    ctx->pc = 0x14EF78u;
    {
        const bool branch_taken_0x14ef78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef78) {
            ctx->pc = 0x14EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ef40;
        }
    }
    ctx->pc = 0x14EF80u;
label_14ef80:
    // 0x14ef80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ef80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14ef84:
    // 0x14ef84: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x14ef84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_14ef88:
    // 0x14ef88: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
label_14ef8c:
    if (ctx->pc == 0x14EF8Cu) {
        ctx->pc = 0x14EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF88u;
        // 0x14ef8c: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF90u;
        goto label_14ef90;
    }
    ctx->pc = 0x14EF88u;
    {
        const bool branch_taken_0x14ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF88u;
        // 0x14ef8c: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef88) {
            ctx->pc = 0x14EDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ede4;
        }
    }
    ctx->pc = 0x14EF90u;
label_14ef90:
    // 0x14ef90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14ef94:
    // 0x14ef94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ef94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14ef98:
    // 0x14ef98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ef98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14ef9c:
    // 0x14ef9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ef9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14efa0:
    // 0x14efa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14efa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14efa4:
    // 0x14efa4: 0x3e00008  jr          $ra
label_14efa8:
    if (ctx->pc == 0x14EFA8u) {
        ctx->pc = 0x14EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA4u;
        // 0x14efa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFACu;
        goto label_14efac;
    }
    ctx->pc = 0x14EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA4u;
        // 0x14efa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EFACu;
label_14efac:
    // 0x14efac: 0x0  nop
    ctx->pc = 0x14efacu;
    // NOP
label_14efb0:
    // 0x14efb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_14efb4:
    // 0x14efb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14efb8:
    // 0x14efb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14efbc:
    // 0x14efbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14efc0:
    // 0x14efc0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_14efc4:
    // 0x14efc4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_14efc8:
    // 0x14efc8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_14efcc:
    if (ctx->pc == 0x14EFCCu) {
        ctx->pc = 0x14EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC8u;
        // 0x14efcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFD0u;
        goto label_14efd0;
    }
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC8u;
        // 0x14efcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14F1A8u;
            goto label_14f1a8;
        }
    }
    ctx->pc = 0x14EFD0u;
label_14efd0:
    // 0x14efd0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x14efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_14efd4:
    // 0x14efd4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_14efd8:
    if (ctx->pc == 0x14EFD8u) {
        ctx->pc = 0x14EFDCu;
        goto label_14efdc;
    }
    ctx->pc = 0x14EFD4u;
    {
        const bool branch_taken_0x14efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efd4) {
            ctx->pc = 0x14F1A8u;
            goto label_14f1a8;
        }
    }
    ctx->pc = 0x14EFDCu;
label_14efdc:
    // 0x14efdc: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_14efe0:
    // 0x14efe0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14efe4:
    // 0x14efe4: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
label_14efe8:
    if (ctx->pc == 0x14EFE8u) {
        ctx->pc = 0x14EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFE4u;
        // 0x14efe8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFECu;
        goto label_14efec;
    }
    ctx->pc = 0x14EFE4u;
    {
        const bool branch_taken_0x14efe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFE4u;
        // 0x14efe8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efe4) {
            ctx->pc = 0x14F11Cu;
            goto label_14f11c;
        }
    }
    ctx->pc = 0x14EFECu;
label_14efec:
    // 0x14efec: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_14eff0:
    if (ctx->pc == 0x14EFF0u) {
        ctx->pc = 0x14EFF4u;
        goto label_14eff4;
    }
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14F09Cu;
            goto label_14f09c;
        }
    }
    ctx->pc = 0x14EFF4u;
label_14eff4:
    // 0x14eff4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14eff8:
    // 0x14eff8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_14effc:
    if (ctx->pc == 0x14EFFCu) {
        ctx->pc = 0x14EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFF8u;
        // 0x14effc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F000u;
        goto label_14f000;
    }
    ctx->pc = 0x14EFF8u;
    {
        const bool branch_taken_0x14eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFF8u;
        // 0x14effc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eff8) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14F000u;
label_14f000:
    // 0x14f000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14f004:
    if (ctx->pc == 0x14F004u) {
        ctx->pc = 0x14F008u;
        goto label_14f008;
    }
    ctx->pc = 0x14F000u;
    {
        const bool branch_taken_0x14f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f000) {
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14F008u;
label_14f008:
    // 0x14f008: 0x10000064  b           . + 4 + (0x64 << 2)
label_14f00c:
    if (ctx->pc == 0x14F00Cu) {
        ctx->pc = 0x14F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F008u;
        // 0x14f00c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F010u;
        goto label_14f010;
    }
    ctx->pc = 0x14F008u;
    {
        const bool branch_taken_0x14f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F008u;
        // 0x14f00c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f008) {
            ctx->pc = 0x14F19Cu;
            goto label_14f19c;
        }
    }
    ctx->pc = 0x14F010u;
label_14f010:
    // 0x14f010: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f014:
    // 0x14f014: 0x10000074  b           . + 4 + (0x74 << 2)
label_14f018:
    if (ctx->pc == 0x14F018u) {
        ctx->pc = 0x14F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F014u;
        // 0x14f018: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F01Cu;
        goto label_14f01c;
    }
    ctx->pc = 0x14F014u;
    {
        const bool branch_taken_0x14f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F014u;
        // 0x14f018: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f014) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F01Cu;
label_14f01c:
    // 0x14f01c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f020:
    // 0x14f020: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f024:
    // 0x14f024: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f028:
    // 0x14f028: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14f02c:
    // 0x14f02c: 0x0  nop
    ctx->pc = 0x14f02cu;
    // NOP
label_14f030:
    // 0x14f030: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x14f030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_14f034:
    // 0x14f034: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x14f034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f038:
    // 0x14f038: 0x0  nop
    ctx->pc = 0x14f038u;
    // NOP
label_14f03c:
    // 0x14f03c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_14f040:
    if (ctx->pc == 0x14F040u) {
        ctx->pc = 0x14F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F03Cu;
        // 0x14f040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F044u;
        goto label_14f044;
    }
    ctx->pc = 0x14F03Cu;
    {
        const bool branch_taken_0x14f03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F03Cu;
        // 0x14f040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f03c) {
            ctx->pc = 0x14F048u;
            goto label_14f048;
        }
    }
    ctx->pc = 0x14F044u;
label_14f044:
    // 0x14f044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f048:
    // 0x14f048: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14f04c:
    if (ctx->pc == 0x14F04Cu) {
        ctx->pc = 0x14F050u;
        goto label_14f050;
    }
    ctx->pc = 0x14F048u;
    {
        const bool branch_taken_0x14f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f048) {
            ctx->pc = 0x14F064u;
            goto label_14f064;
        }
    }
    ctx->pc = 0x14F050u;
label_14f050:
    // 0x14f050: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f054:
    // 0x14f054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f058:
    // 0x14f058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f05c:
    // 0x14f05c: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f060:
    if (ctx->pc == 0x14F060u) {
        ctx->pc = 0x14F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F05Cu;
        // 0x14f060: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F064u;
        goto label_14f064;
    }
    ctx->pc = 0x14F05Cu;
    {
        const bool branch_taken_0x14f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F05Cu;
        // 0x14f060: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f05c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F064u;
label_14f064:
    // 0x14f064: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_14f068:
    // 0x14f068: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f06c:
    // 0x14f06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f070:
    // 0x14f070: 0x0  nop
    ctx->pc = 0x14f070u;
    // NOP
label_14f074:
    // 0x14f074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f078:
    // 0x14f078: 0x0  nop
    ctx->pc = 0x14f078u;
    // NOP
label_14f07c:
    // 0x14f07c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14f080:
    if (ctx->pc == 0x14F080u) {
        ctx->pc = 0x14F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F07Cu;
        // 0x14f080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F084u;
        goto label_14f084;
    }
    ctx->pc = 0x14F07Cu;
    {
        const bool branch_taken_0x14f07c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F07Cu;
        // 0x14f080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f07c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F084u;
label_14f084:
    // 0x14f084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f088:
    // 0x14f088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f08c:
    // 0x14f08c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f090:
    if (ctx->pc == 0x14F090u) {
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F08Cu;
        // 0x14f090: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F094u;
        goto label_14f094;
    }
    ctx->pc = 0x14F08Cu;
    {
        const bool branch_taken_0x14f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F08Cu;
        // 0x14f090: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f08c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F094u;
label_14f094:
    // 0x14f094: 0x10000054  b           . + 4 + (0x54 << 2)
label_14f098:
    if (ctx->pc == 0x14F098u) {
        ctx->pc = 0x14F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F094u;
        // 0x14f098: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F09Cu;
        goto label_14f09c;
    }
    ctx->pc = 0x14F094u;
    {
        const bool branch_taken_0x14f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F094u;
        // 0x14f098: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f094) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F09Cu;
label_14f09c:
    // 0x14f09c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14f0a0:
    // 0x14f0a0: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_14f0a4:
    // 0x14f0a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f0a8:
    // 0x14f0a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f0ac:
    // 0x14f0ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f0b0:
    // 0x14f0b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f0b4:
    // 0x14f0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f0b8:
    // 0x14f0b8: 0x0  nop
    ctx->pc = 0x14f0b8u;
    // NOP
label_14f0bc:
    // 0x14f0bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_14f0c0:
    // 0x14f0c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f0c4:
    // 0x14f0c4: 0x0  nop
    ctx->pc = 0x14f0c4u;
    // NOP
label_14f0c8:
    // 0x14f0c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14f0cc:
    if (ctx->pc == 0x14F0CCu) {
        ctx->pc = 0x14F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0C8u;
        // 0x14f0cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F0D0u;
        goto label_14f0d0;
    }
    ctx->pc = 0x14F0C8u;
    {
        const bool branch_taken_0x14f0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0C8u;
        // 0x14f0cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0c8) {
            ctx->pc = 0x14F0E4u;
            goto label_14f0e4;
        }
    }
    ctx->pc = 0x14F0D0u;
label_14f0d0:
    // 0x14f0d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f0d4:
    // 0x14f0d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f0d8:
    // 0x14f0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f0dc:
    // 0x14f0dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f0e0:
    if (ctx->pc == 0x14F0E0u) {
        ctx->pc = 0x14F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0DCu;
        // 0x14f0e0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F0E4u;
        goto label_14f0e4;
    }
    ctx->pc = 0x14F0DCu;
    {
        const bool branch_taken_0x14f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0DCu;
        // 0x14f0e0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0dc) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F0E4u;
label_14f0e4:
    // 0x14f0e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f0e8:
    // 0x14f0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f0ec:
    // 0x14f0ec: 0x0  nop
    ctx->pc = 0x14f0ecu;
    // NOP
label_14f0f0:
    // 0x14f0f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f0f4:
    // 0x14f0f4: 0x0  nop
    ctx->pc = 0x14f0f4u;
    // NOP
label_14f0f8:
    // 0x14f0f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14f0fc:
    if (ctx->pc == 0x14F0FCu) {
        ctx->pc = 0x14F100u;
        goto label_14f100;
    }
    ctx->pc = 0x14F0F8u;
    {
        const bool branch_taken_0x14f0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f0f8) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F100u;
label_14f100:
    // 0x14f100: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f104:
    // 0x14f104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f108:
    // 0x14f108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f10c:
    // 0x14f10c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f110:
    if (ctx->pc == 0x14F110u) {
        ctx->pc = 0x14F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F10Cu;
        // 0x14f110: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F114u;
        goto label_14f114;
    }
    ctx->pc = 0x14F10Cu;
    {
        const bool branch_taken_0x14f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F10Cu;
        // 0x14f110: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f10c) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F114u;
label_14f114:
    // 0x14f114: 0x10000034  b           . + 4 + (0x34 << 2)
label_14f118:
    if (ctx->pc == 0x14F118u) {
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F114u;
        // 0x14f118: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F11Cu;
        goto label_14f11c;
    }
    ctx->pc = 0x14F114u;
    {
        const bool branch_taken_0x14f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F114u;
        // 0x14f118: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f114) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F11Cu;
label_14f11c:
    // 0x14f11c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14f120:
    // 0x14f120: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_14f124:
    // 0x14f124: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f128:
    // 0x14f128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f12c:
    // 0x14f12c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f130:
    // 0x14f130: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f134:
    // 0x14f134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f138:
    // 0x14f138: 0x0  nop
    ctx->pc = 0x14f138u;
    // NOP
label_14f13c:
    // 0x14f13c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_14f140:
    // 0x14f140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f144:
    // 0x14f144: 0x0  nop
    ctx->pc = 0x14f144u;
    // NOP
label_14f148:
    // 0x14f148: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14f14c:
    if (ctx->pc == 0x14F14Cu) {
        ctx->pc = 0x14F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F148u;
        // 0x14f14c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F150u;
        goto label_14f150;
    }
    ctx->pc = 0x14F148u;
    {
        const bool branch_taken_0x14f148 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F148u;
        // 0x14f14c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f148) {
            ctx->pc = 0x14F164u;
            goto label_14f164;
        }
    }
    ctx->pc = 0x14F150u;
label_14f150:
    // 0x14f150: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f154:
    // 0x14f154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f158:
    // 0x14f158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f15c:
    // 0x14f15c: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f160:
    if (ctx->pc == 0x14F160u) {
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F15Cu;
        // 0x14f160: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F164u;
        goto label_14f164;
    }
    ctx->pc = 0x14F15Cu;
    {
        const bool branch_taken_0x14f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F15Cu;
        // 0x14f160: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f15c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F164u;
label_14f164:
    // 0x14f164: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f168:
    // 0x14f168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f16c:
    // 0x14f16c: 0x0  nop
    ctx->pc = 0x14f16cu;
    // NOP
label_14f170:
    // 0x14f170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f174:
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
label_14f178:
    // 0x14f178: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14f17c:
    if (ctx->pc == 0x14F17Cu) {
        ctx->pc = 0x14F180u;
        goto label_14f180;
    }
    ctx->pc = 0x14F178u;
    {
        const bool branch_taken_0x14f178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f178) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F180u;
label_14f180:
    // 0x14f180: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f184:
    // 0x14f184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f188:
    // 0x14f188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f18c:
    // 0x14f18c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f190:
    if (ctx->pc == 0x14F190u) {
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F18Cu;
        // 0x14f190: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F194u;
        goto label_14f194;
    }
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F18Cu;
        // 0x14f190: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x10000014  b           . + 4 + (0x14 << 2)
label_14f198:
    if (ctx->pc == 0x14F198u) {
        ctx->pc = 0x14F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F194u;
        // 0x14f198: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F19Cu;
        goto label_14f19c;
    }
    ctx->pc = 0x14F194u;
    {
        const bool branch_taken_0x14f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F194u;
        // 0x14f198: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f194) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F19Cu;
label_14f19c:
    // 0x14f19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f1a0:
    // 0x14f1a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_14f1a4:
    if (ctx->pc == 0x14F1A4u) {
        ctx->pc = 0x14F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A0u;
        // 0x14f1a4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1A8u;
        goto label_14f1a8;
    }
    ctx->pc = 0x14F1A0u;
    {
        const bool branch_taken_0x14f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A0u;
        // 0x14f1a4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1a0) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F1A8u;
label_14f1a8:
    // 0x14f1a8: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
label_14f1ac:
    // 0x14f1ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_14f1b0:
    if (ctx->pc == 0x14F1B0u) {
        ctx->pc = 0x14F1B4u;
        goto label_14f1b4;
    }
    ctx->pc = 0x14F1ACu;
    {
        const bool branch_taken_0x14f1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f1ac) {
            ctx->pc = 0x14F1C0u;
            goto label_14f1c0;
        }
    }
    ctx->pc = 0x14F1B4u;
label_14f1b4:
    // 0x14f1b4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
label_14f1b8:
    // 0x14f1b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14f1bc:
    if (ctx->pc == 0x14F1BCu) {
        ctx->pc = 0x14F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1B8u;
        // 0x14f1bc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1C0u;
        goto label_14f1c0;
    }
    ctx->pc = 0x14F1B8u;
    {
        const bool branch_taken_0x14f1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1B8u;
        // 0x14f1bc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1b8) {
            ctx->pc = 0x14F1E0u;
            goto label_14f1e0;
        }
    }
    ctx->pc = 0x14F1C0u;
label_14f1c0:
    // 0x14f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f1c4:
    // 0x14f1c4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
label_14f1c8:
    // 0x14f1c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x14f1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_14f1cc:
    // 0x14f1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f1d0:
    // 0x14f1d0: 0xc06d51e  jal         func_1B5478
label_14f1d4:
    if (ctx->pc == 0x14F1D4u) {
        ctx->pc = 0x14F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D0u;
        // 0x14f1d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1D8u;
        goto label_14f1d8;
    }
    ctx->pc = 0x14F1D0u;
    SET_GPR_U32(ctx, 31, 0x14F1D8u);
    ctx->pc = 0x14F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1D0u;
    // 0x14f1d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x14F1D8u;
label_14f1d8:
    // 0x14f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_14f1dc:
    if (ctx->pc == 0x14F1DCu) {
        ctx->pc = 0x14F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D8u;
        // 0x14f1dc: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1E0u;
        goto label_14f1e0;
    }
    ctx->pc = 0x14F1D8u;
    {
        const bool branch_taken_0x14f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D8u;
        // 0x14f1dc: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1d8) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F1E0u;
label_14f1e0:
    // 0x14f1e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f1e4:
    // 0x14f1e4: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x14f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_14f1e8:
    // 0x14f1e8: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x14f1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
label_14f1ec:
    // 0x14f1ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14f1f0:
    // 0x14f1f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_14f1f4:
    if (ctx->pc == 0x14F1F4u) {
        ctx->pc = 0x14F1F8u;
        goto label_14f1f8;
    }
    ctx->pc = 0x14F1F0u;
    {
        const bool branch_taken_0x14f1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f1f0) {
            ctx->pc = 0x14F204u;
            goto label_14f204;
        }
    }
    ctx->pc = 0x14F1F8u;
label_14f1f8:
    // 0x14f1f8: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_14f1fc:
    // 0x14f1fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14f200:
    // 0x14f200: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x14f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_14f204:
    // 0x14f204: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_14f208:
    // 0x14f208: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x14f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_14f20c:
    // 0x14f20c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f210:
    if (ctx->pc == 0x14F210u) {
        ctx->pc = 0x14F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F20Cu;
        // 0x14f210: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F214u;
        goto label_14f214;
    }
    ctx->pc = 0x14F20Cu;
    {
        const bool branch_taken_0x14f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F20Cu;
        // 0x14f210: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f20c) {
            ctx->pc = 0x14F21Cu;
            goto label_14f21c;
        }
    }
    ctx->pc = 0x14F214u;
label_14f214:
    // 0x14f214: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_14f218:
    if (ctx->pc == 0x14F218u) {
        ctx->pc = 0x14F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F214u;
        // 0x14f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F21Cu;
        goto label_14f21c;
    }
    ctx->pc = 0x14F214u;
    {
        const bool branch_taken_0x14f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F214u;
        // 0x14f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f214) {
            ctx->pc = 0x14F29Cu;
            goto label_14f29c;
        }
    }
    ctx->pc = 0x14F21Cu;
label_14f21c:
    // 0x14f21c: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_14f220:
    // 0x14f220: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_14f224:
    // 0x14f224: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_14f228:
    if (ctx->pc == 0x14F228u) {
        ctx->pc = 0x14F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F224u;
        // 0x14f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F22Cu;
        goto label_14f22c;
    }
    ctx->pc = 0x14F224u;
    {
        const bool branch_taken_0x14f224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F224u;
        // 0x14f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f224) {
            ctx->pc = 0x14F290u;
            goto label_14f290;
        }
    }
    ctx->pc = 0x14F22Cu;
label_14f22c:
    // 0x14f22c: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x14f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_14f230:
    // 0x14f230: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_14f234:
    if (ctx->pc == 0x14F234u) {
        ctx->pc = 0x14F238u;
        goto label_14f238;
    }
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F238u;
label_14f238:
    // 0x14f238: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_14f23c:
    // 0x14f23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f240:
    // 0x14f240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14f244:
    // 0x14f244: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_14f248:
    if (ctx->pc == 0x14F248u) {
        ctx->pc = 0x14F24Cu;
        goto label_14f24c;
    }
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F24Cu;
label_14f24c:
    // 0x14f24c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_14f250:
    // 0x14f250: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_14f254:
    // 0x14f254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14f258:
    // 0x14f258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f25c:
    // 0x14f25c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14f260:
    if (ctx->pc == 0x14F260u) {
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F264u;
        goto label_14f264;
    }
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F264u;
label_14f264:
    // 0x14f264: 0xc075224  jal         func_1D4890
label_14f268:
    if (ctx->pc == 0x14F268u) {
        ctx->pc = 0x14F26Cu;
        goto label_14f26c;
    }
    ctx->pc = 0x14F264u;
    SET_GPR_U32(ctx, 31, 0x14F26Cu);
    ctx->pc = 0x1D4890u;
    { ctx->pc = 0x1d4890; return; }
    ctx->pc = 0x14F26Cu;
label_14f26c:
    // 0x14f26c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14f270:
    if (ctx->pc == 0x14F270u) {
        ctx->pc = 0x14F274u;
        goto label_14f274;
    }
    ctx->pc = 0x14F26Cu;
    {
        const bool branch_taken_0x14f26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f26c) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F274u;
label_14f274:
    // 0x14f274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f278:
    // 0x14f278: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_14f27c:
    // 0x14f27c: 0xc050f08  jal         func_143C20
label_14f280:
    if (ctx->pc == 0x14F280u) {
        ctx->pc = 0x14F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F27Cu;
        // 0x14f280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F284u;
        goto label_14f284;
    }
    ctx->pc = 0x14F27Cu;
    SET_GPR_U32(ctx, 31, 0x14F284u);
    ctx->pc = 0x14F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F27Cu;
    // 0x14f280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14F27Cu, 0x14F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x10000004  b           . + 4 + (0x4 << 2)
label_14f288:
    if (ctx->pc == 0x14F288u) {
        ctx->pc = 0x14F28Cu;
        goto label_14f28c;
    }
    ctx->pc = 0x14F284u;
    {
        const bool branch_taken_0x14f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f284) {
            ctx->pc = 0x14F298u;
            goto label_14f298;
        }
    }
    ctx->pc = 0x14F28Cu;
label_14f28c:
    // 0x14f28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f290:
    // 0x14f290: 0xc053df4  jal         func_14F7D0
label_14f294:
    if (ctx->pc == 0x14F294u) {
        ctx->pc = 0x14F298u;
        goto label_14f298;
    }
    ctx->pc = 0x14F290u;
    SET_GPR_U32(ctx, 31, 0x14F298u);
    ctx->pc = 0x14F7D0u;
    { ctx->pc = 0x14f7d0; return; }
    ctx->pc = 0x14F298u;
label_14f298:
    // 0x14f298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f29c:
    // 0x14f29c: 0xc053d20  jal         func_14F480
label_14f2a0:
    if (ctx->pc == 0x14F2A0u) {
        ctx->pc = 0x14F2A4u;
        goto label_14f2a4;
    }
    ctx->pc = 0x14F29Cu;
    SET_GPR_U32(ctx, 31, 0x14F2A4u);
    ctx->pc = 0x14F480u;
    { ctx->pc = 0x14f480; return; }
    ctx->pc = 0x14F2A4u;
label_14f2a4:
    // 0x14f2a4: 0xc05409c  jal         func_150270
label_14f2a8:
    if (ctx->pc == 0x14F2A8u) {
        ctx->pc = 0x14F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2A4u;
        // 0x14f2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2ACu;
        goto label_14f2ac;
    }
    ctx->pc = 0x14F2A4u;
    SET_GPR_U32(ctx, 31, 0x14F2ACu);
    ctx->pc = 0x14F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2A4u;
    // 0x14f2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150270u;
    { ctx->pc = 0x150270; return; }
    ctx->pc = 0x14F2ACu;
label_14f2ac:
    // 0x14f2ac: 0xc053db0  jal         func_14F6C0
label_14f2b0:
    if (ctx->pc == 0x14F2B0u) {
        ctx->pc = 0x14F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2ACu;
        // 0x14f2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2B4u;
        goto label_14f2b4;
    }
    ctx->pc = 0x14F2ACu;
    SET_GPR_U32(ctx, 31, 0x14F2B4u);
    ctx->pc = 0x14F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2ACu;
    // 0x14f2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6C0u;
    { ctx->pc = 0x14f6c0; return; }
    ctx->pc = 0x14F2B4u;
label_14f2b4:
    // 0x14f2b4: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x14f2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
label_14f2b8:
    // 0x14f2b8: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_14f2bc:
    if (ctx->pc == 0x14F2BCu) {
        ctx->pc = 0x14F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B8u;
        // 0x14f2bc: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2C0u;
        goto label_14f2c0;
    }
    ctx->pc = 0x14F2B8u;
    {
        const bool branch_taken_0x14f2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B8u;
        // 0x14f2bc: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2b8) {
            ctx->pc = 0x14F3B4u;
            { ctx->pc = 0x14f3b4; return; }
        }
    }
    ctx->pc = 0x14F2C0u;
label_14f2c0:
    // 0x14f2c0: 0xc066e26  jal         func_19B898
label_14f2c4:
    if (ctx->pc == 0x14F2C4u) {
        ctx->pc = 0x14F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2C0u;
        // 0x14f2c4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2C8u;
        goto label_14f2c8;
    }
    ctx->pc = 0x14F2C0u;
    SET_GPR_U32(ctx, 31, 0x14F2C8u);
    ctx->pc = 0x14F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2C0u;
    // 0x14f2c4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x14F2C8u;
label_14f2c8:
    // 0x14f2c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14f2cc:
    // 0x14f2cc: 0xc066e26  jal         func_19B898
label_14f2d0:
    if (ctx->pc == 0x14F2D0u) {
        ctx->pc = 0x14F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2CCu;
        // 0x14f2d0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2D4u;
        goto label_14f2d4;
    }
    ctx->pc = 0x14F2CCu;
    SET_GPR_U32(ctx, 31, 0x14F2D4u);
    ctx->pc = 0x14F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2CCu;
    // 0x14f2d0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x14F2D4u;
label_14f2d4:
    // 0x14f2d4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_14f2d8:
    // 0x14f2d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14f2dc:
    if (ctx->pc == 0x14F2DCu) {
        ctx->pc = 0x14F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D8u;
        // 0x14f2dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2E0u;
        goto label_14f2e0;
    }
    ctx->pc = 0x14F2D8u;
    {
        const bool branch_taken_0x14f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D8u;
        // 0x14f2dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d8) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2E0u;
label_14f2e0:
    // 0x14f2e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_14f2e4:
    if (ctx->pc == 0x14F2E4u) {
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2E8u;
        goto label_14f2e8;
    }
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F2FCu;
            goto label_14f2fc;
        }
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x90430232  lbu         $v1, 0x232($v0)
    ctx->pc = 0x14f2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
label_14f2ec:
    // 0x14f2ec: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x14f2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14f2f0:
    // 0x14f2f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f2f4:
    // 0x14f2f4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x14f2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_14f2f8:
    // 0x14f2f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f2fc:
    // 0x14f2fc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14f300:
    // 0x14f300: 0xc066e08  jal         func_19B820
label_14f304:
    if (ctx->pc == 0x14F304u) {
        ctx->pc = 0x14F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F300u;
        // 0x14f304: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F308u;
        goto label_14f308;
    }
    ctx->pc = 0x14F300u;
    SET_GPR_U32(ctx, 31, 0x14F308u);
    ctx->pc = 0x14F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F300u;
    // 0x14f304: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x14F308u;
label_14f308:
    // 0x14f308: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f30c:
    // 0x14f30c: 0xc066daa  jal         func_19B6A8
label_14f310:
    if (ctx->pc == 0x14F310u) {
        ctx->pc = 0x14F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F30Cu;
        // 0x14f310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F314u;
        goto label_14f314;
    }
    ctx->pc = 0x14F30Cu;
    SET_GPR_U32(ctx, 31, 0x14F314u);
    ctx->pc = 0x14F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F30Cu;
    // 0x14f310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x14F314u;
label_14f314:
    // 0x14f314: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_14f318:
    // 0x14f318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f31c:
    // 0x14f31c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f320:
    // 0x14f320: 0xc066e14  jal         func_19B850
label_14f324:
    if (ctx->pc == 0x14F324u) {
        ctx->pc = 0x14F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F320u;
        // 0x14f324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F328u;
        goto label_14f328;
    }
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x14F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F320u;
    // 0x14f324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x14F328u;
label_14f328:
    // 0x14f328: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14f32c:
    // 0x14f32c: 0xc066e26  jal         func_19B898
label_14f330:
    if (ctx->pc == 0x14F330u) {
        ctx->pc = 0x14F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F32Cu;
        // 0x14f330: 0x26050160  addiu       $a1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F334u;
        goto label_14f334;
    }
    ctx->pc = 0x14F32Cu;
    SET_GPR_U32(ctx, 31, 0x14F334u);
    ctx->pc = 0x14F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F32Cu;
    // 0x14f330: 0x26050160  addiu       $a1, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x14F334u;
label_14f334:
    // 0x14f334: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x14f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f338:
    // 0x14f338: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f33c:
    // 0x14f33c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14f340:
    // 0x14f340: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f344:
    // 0x14f344: 0xc066e02  jal         func_19B808
label_14f348:
    if (ctx->pc == 0x14F348u) {
        ctx->pc = 0x14F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F344u;
        // 0x14f348: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F34Cu;
        goto label_14f34c;
    }
    ctx->pc = 0x14F344u;
    SET_GPR_U32(ctx, 31, 0x14F34Cu);
    ctx->pc = 0x14F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F344u;
    // 0x14f348: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x14F34Cu;
label_14f34c:
    // 0x14f34c: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x14f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f350:
    // 0x14f350: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x14f350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
label_14f354:
    // 0x14f354: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x14f354u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_14f358:
    // 0x14f358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f35c:
    // 0x14f35c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_14f360:
    // 0x14f360: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14f364:
    // 0x14f364: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x14f364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f368:
    // 0x14f368: 0xc043274  jal         func_10C9D0
label_14f36c:
    if (ctx->pc == 0x14F36Cu) {
        ctx->pc = 0x14F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F368u;
        // 0x14f36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F370u;
        { ctx->pc = 0x14f370; return; }
    }
    ctx->pc = 0x14F368u;
    SET_GPR_U32(ctx, 31, 0x14F370u);
    ctx->pc = 0x14F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F368u;
    // 0x14f36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x14F368u, 0x14F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F370u;
    ctx->pc = 0x14f370u;
    return;
}

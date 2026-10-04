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


void FUN_0017d410_part430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24eba0u: goto label_24eba0;
        case 0x24eba4u: goto label_24eba4;
        case 0x24eba8u: goto label_24eba8;
        case 0x24ebacu: goto label_24ebac;
        case 0x24ebb0u: goto label_24ebb0;
        case 0x24ebb4u: goto label_24ebb4;
        case 0x24ebb8u: goto label_24ebb8;
        case 0x24ebbcu: goto label_24ebbc;
        case 0x24ebc0u: goto label_24ebc0;
        case 0x24ebc4u: goto label_24ebc4;
        case 0x24ebc8u: goto label_24ebc8;
        case 0x24ebccu: goto label_24ebcc;
        case 0x24ebd0u: goto label_24ebd0;
        case 0x24ebd4u: goto label_24ebd4;
        case 0x24ebd8u: goto label_24ebd8;
        case 0x24ebdcu: goto label_24ebdc;
        case 0x24ebe0u: goto label_24ebe0;
        case 0x24ebe4u: goto label_24ebe4;
        case 0x24ebe8u: goto label_24ebe8;
        case 0x24ebecu: goto label_24ebec;
        case 0x24ebf0u: goto label_24ebf0;
        case 0x24ebf4u: goto label_24ebf4;
        case 0x24ebf8u: goto label_24ebf8;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec00u: goto label_24ec00;
        case 0x24ec04u: goto label_24ec04;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec0cu: goto label_24ec0c;
        case 0x24ec10u: goto label_24ec10;
        case 0x24ec14u: goto label_24ec14;
        case 0x24ec18u: goto label_24ec18;
        case 0x24ec1cu: goto label_24ec1c;
        case 0x24ec20u: goto label_24ec20;
        case 0x24ec24u: goto label_24ec24;
        case 0x24ec28u: goto label_24ec28;
        case 0x24ec2cu: goto label_24ec2c;
        case 0x24ec30u: goto label_24ec30;
        case 0x24ec34u: goto label_24ec34;
        case 0x24ec38u: goto label_24ec38;
        case 0x24ec3cu: goto label_24ec3c;
        case 0x24ec40u: goto label_24ec40;
        case 0x24ec44u: goto label_24ec44;
        case 0x24ec48u: goto label_24ec48;
        case 0x24ec4cu: goto label_24ec4c;
        case 0x24ec50u: goto label_24ec50;
        case 0x24ec54u: goto label_24ec54;
        case 0x24ec58u: goto label_24ec58;
        case 0x24ec5cu: goto label_24ec5c;
        case 0x24ec60u: goto label_24ec60;
        case 0x24ec64u: goto label_24ec64;
        case 0x24ec68u: goto label_24ec68;
        case 0x24ec6cu: goto label_24ec6c;
        case 0x24ec70u: goto label_24ec70;
        case 0x24ec74u: goto label_24ec74;
        case 0x24ec78u: goto label_24ec78;
        case 0x24ec7cu: goto label_24ec7c;
        case 0x24ec80u: goto label_24ec80;
        case 0x24ec84u: goto label_24ec84;
        case 0x24ec88u: goto label_24ec88;
        case 0x24ec8cu: goto label_24ec8c;
        case 0x24ec90u: goto label_24ec90;
        case 0x24ec94u: goto label_24ec94;
        case 0x24ec98u: goto label_24ec98;
        case 0x24ec9cu: goto label_24ec9c;
        case 0x24eca0u: goto label_24eca0;
        case 0x24eca4u: goto label_24eca4;
        case 0x24eca8u: goto label_24eca8;
        case 0x24ecacu: goto label_24ecac;
        case 0x24ecb0u: goto label_24ecb0;
        case 0x24ecb4u: goto label_24ecb4;
        case 0x24ecb8u: goto label_24ecb8;
        case 0x24ecbcu: goto label_24ecbc;
        case 0x24ecc0u: goto label_24ecc0;
        case 0x24ecc4u: goto label_24ecc4;
        case 0x24ecc8u: goto label_24ecc8;
        case 0x24ecccu: goto label_24eccc;
        case 0x24ecd0u: goto label_24ecd0;
        case 0x24ecd4u: goto label_24ecd4;
        case 0x24ecd8u: goto label_24ecd8;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ece0u: goto label_24ece0;
        case 0x24ece4u: goto label_24ece4;
        case 0x24ece8u: goto label_24ece8;
        case 0x24ececu: goto label_24ecec;
        case 0x24ecf0u: goto label_24ecf0;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ecf8u: goto label_24ecf8;
        case 0x24ecfcu: goto label_24ecfc;
        case 0x24ed00u: goto label_24ed00;
        case 0x24ed04u: goto label_24ed04;
        case 0x24ed08u: goto label_24ed08;
        case 0x24ed0cu: goto label_24ed0c;
        case 0x24ed10u: goto label_24ed10;
        case 0x24ed14u: goto label_24ed14;
        case 0x24ed18u: goto label_24ed18;
        case 0x24ed1cu: goto label_24ed1c;
        case 0x24ed20u: goto label_24ed20;
        case 0x24ed24u: goto label_24ed24;
        case 0x24ed28u: goto label_24ed28;
        case 0x24ed2cu: goto label_24ed2c;
        case 0x24ed30u: goto label_24ed30;
        case 0x24ed34u: goto label_24ed34;
        case 0x24ed38u: goto label_24ed38;
        case 0x24ed3cu: goto label_24ed3c;
        case 0x24ed40u: goto label_24ed40;
        case 0x24ed44u: goto label_24ed44;
        case 0x24ed48u: goto label_24ed48;
        case 0x24ed4cu: goto label_24ed4c;
        case 0x24ed50u: goto label_24ed50;
        case 0x24ed54u: goto label_24ed54;
        case 0x24ed58u: goto label_24ed58;
        case 0x24ed5cu: goto label_24ed5c;
        case 0x24ed60u: goto label_24ed60;
        case 0x24ed64u: goto label_24ed64;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed6cu: goto label_24ed6c;
        case 0x24ed70u: goto label_24ed70;
        case 0x24ed74u: goto label_24ed74;
        case 0x24ed78u: goto label_24ed78;
        case 0x24ed7cu: goto label_24ed7c;
        case 0x24ed80u: goto label_24ed80;
        case 0x24ed84u: goto label_24ed84;
        case 0x24ed88u: goto label_24ed88;
        case 0x24ed8cu: goto label_24ed8c;
        case 0x24ed90u: goto label_24ed90;
        case 0x24ed94u: goto label_24ed94;
        case 0x24ed98u: goto label_24ed98;
        case 0x24ed9cu: goto label_24ed9c;
        case 0x24eda0u: goto label_24eda0;
        case 0x24eda4u: goto label_24eda4;
        case 0x24eda8u: goto label_24eda8;
        case 0x24edacu: goto label_24edac;
        case 0x24edb0u: goto label_24edb0;
        case 0x24edb4u: goto label_24edb4;
        case 0x24edb8u: goto label_24edb8;
        case 0x24edbcu: goto label_24edbc;
        case 0x24edc0u: goto label_24edc0;
        case 0x24edc4u: goto label_24edc4;
        case 0x24edc8u: goto label_24edc8;
        case 0x24edccu: goto label_24edcc;
        case 0x24edd0u: goto label_24edd0;
        case 0x24edd4u: goto label_24edd4;
        case 0x24edd8u: goto label_24edd8;
        case 0x24eddcu: goto label_24eddc;
        case 0x24ede0u: goto label_24ede0;
        case 0x24ede4u: goto label_24ede4;
        case 0x24ede8u: goto label_24ede8;
        case 0x24edecu: goto label_24edec;
        case 0x24edf0u: goto label_24edf0;
        case 0x24edf4u: goto label_24edf4;
        case 0x24edf8u: goto label_24edf8;
        case 0x24edfcu: goto label_24edfc;
        case 0x24ee00u: goto label_24ee00;
        case 0x24ee04u: goto label_24ee04;
        case 0x24ee08u: goto label_24ee08;
        case 0x24ee0cu: goto label_24ee0c;
        case 0x24ee10u: goto label_24ee10;
        case 0x24ee14u: goto label_24ee14;
        case 0x24ee18u: goto label_24ee18;
        case 0x24ee1cu: goto label_24ee1c;
        case 0x24ee20u: goto label_24ee20;
        case 0x24ee24u: goto label_24ee24;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee2cu: goto label_24ee2c;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee34u: goto label_24ee34;
        case 0x24ee38u: goto label_24ee38;
        case 0x24ee3cu: goto label_24ee3c;
        case 0x24ee40u: goto label_24ee40;
        case 0x24ee44u: goto label_24ee44;
        case 0x24ee48u: goto label_24ee48;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee50u: goto label_24ee50;
        case 0x24ee54u: goto label_24ee54;
        case 0x24ee58u: goto label_24ee58;
        case 0x24ee5cu: goto label_24ee5c;
        case 0x24ee60u: goto label_24ee60;
        case 0x24ee64u: goto label_24ee64;
        case 0x24ee68u: goto label_24ee68;
        case 0x24ee6cu: goto label_24ee6c;
        case 0x24ee70u: goto label_24ee70;
        case 0x24ee74u: goto label_24ee74;
        case 0x24ee78u: goto label_24ee78;
        case 0x24ee7cu: goto label_24ee7c;
        case 0x24ee80u: goto label_24ee80;
        case 0x24ee84u: goto label_24ee84;
        case 0x24ee88u: goto label_24ee88;
        case 0x24ee8cu: goto label_24ee8c;
        case 0x24ee90u: goto label_24ee90;
        case 0x24ee94u: goto label_24ee94;
        case 0x24ee98u: goto label_24ee98;
        case 0x24ee9cu: goto label_24ee9c;
        case 0x24eea0u: goto label_24eea0;
        case 0x24eea4u: goto label_24eea4;
        case 0x24eea8u: goto label_24eea8;
        case 0x24eeacu: goto label_24eeac;
        case 0x24eeb0u: goto label_24eeb0;
        case 0x24eeb4u: goto label_24eeb4;
        case 0x24eeb8u: goto label_24eeb8;
        case 0x24eebcu: goto label_24eebc;
        case 0x24eec0u: goto label_24eec0;
        case 0x24eec4u: goto label_24eec4;
        case 0x24eec8u: goto label_24eec8;
        case 0x24eeccu: goto label_24eecc;
        case 0x24eed0u: goto label_24eed0;
        case 0x24eed4u: goto label_24eed4;
        case 0x24eed8u: goto label_24eed8;
        case 0x24eedcu: goto label_24eedc;
        case 0x24eee0u: goto label_24eee0;
        case 0x24eee4u: goto label_24eee4;
        case 0x24eee8u: goto label_24eee8;
        case 0x24eeecu: goto label_24eeec;
        case 0x24eef0u: goto label_24eef0;
        case 0x24eef4u: goto label_24eef4;
        case 0x24eef8u: goto label_24eef8;
        case 0x24eefcu: goto label_24eefc;
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef04u: goto label_24ef04;
        case 0x24ef08u: goto label_24ef08;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef10u: goto label_24ef10;
        case 0x24ef14u: goto label_24ef14;
        case 0x24ef18u: goto label_24ef18;
        case 0x24ef1cu: goto label_24ef1c;
        case 0x24ef20u: goto label_24ef20;
        case 0x24ef24u: goto label_24ef24;
        case 0x24ef28u: goto label_24ef28;
        case 0x24ef2cu: goto label_24ef2c;
        case 0x24ef30u: goto label_24ef30;
        case 0x24ef34u: goto label_24ef34;
        case 0x24ef38u: goto label_24ef38;
        case 0x24ef3cu: goto label_24ef3c;
        case 0x24ef40u: goto label_24ef40;
        case 0x24ef44u: goto label_24ef44;
        case 0x24ef48u: goto label_24ef48;
        case 0x24ef4cu: goto label_24ef4c;
        case 0x24ef50u: goto label_24ef50;
        case 0x24ef54u: goto label_24ef54;
        case 0x24ef58u: goto label_24ef58;
        case 0x24ef5cu: goto label_24ef5c;
        case 0x24ef60u: goto label_24ef60;
        case 0x24ef64u: goto label_24ef64;
        case 0x24ef68u: goto label_24ef68;
        case 0x24ef6cu: goto label_24ef6c;
        case 0x24ef70u: goto label_24ef70;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef78u: goto label_24ef78;
        case 0x24ef7cu: goto label_24ef7c;
        case 0x24ef80u: goto label_24ef80;
        case 0x24ef84u: goto label_24ef84;
        case 0x24ef88u: goto label_24ef88;
        case 0x24ef8cu: goto label_24ef8c;
        case 0x24ef90u: goto label_24ef90;
        case 0x24ef94u: goto label_24ef94;
        case 0x24ef98u: goto label_24ef98;
        case 0x24ef9cu: goto label_24ef9c;
        case 0x24efa0u: goto label_24efa0;
        case 0x24efa4u: goto label_24efa4;
        case 0x24efa8u: goto label_24efa8;
        case 0x24efacu: goto label_24efac;
        case 0x24efb0u: goto label_24efb0;
        case 0x24efb4u: goto label_24efb4;
        case 0x24efb8u: goto label_24efb8;
        case 0x24efbcu: goto label_24efbc;
        case 0x24efc0u: goto label_24efc0;
        case 0x24efc4u: goto label_24efc4;
        case 0x24efc8u: goto label_24efc8;
        case 0x24efccu: goto label_24efcc;
        case 0x24efd0u: goto label_24efd0;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efd8u: goto label_24efd8;
        case 0x24efdcu: goto label_24efdc;
        case 0x24efe0u: goto label_24efe0;
        case 0x24efe4u: goto label_24efe4;
        case 0x24efe8u: goto label_24efe8;
        case 0x24efecu: goto label_24efec;
        case 0x24eff0u: goto label_24eff0;
        case 0x24eff4u: goto label_24eff4;
        case 0x24eff8u: goto label_24eff8;
        case 0x24effcu: goto label_24effc;
        case 0x24f000u: goto label_24f000;
        case 0x24f004u: goto label_24f004;
        case 0x24f008u: goto label_24f008;
        case 0x24f00cu: goto label_24f00c;
        case 0x24f010u: goto label_24f010;
        case 0x24f014u: goto label_24f014;
        case 0x24f018u: goto label_24f018;
        case 0x24f01cu: goto label_24f01c;
        case 0x24f020u: goto label_24f020;
        case 0x24f024u: goto label_24f024;
        case 0x24f028u: goto label_24f028;
        case 0x24f02cu: goto label_24f02c;
        case 0x24f030u: goto label_24f030;
        case 0x24f034u: goto label_24f034;
        case 0x24f038u: goto label_24f038;
        case 0x24f03cu: goto label_24f03c;
        case 0x24f040u: goto label_24f040;
        case 0x24f044u: goto label_24f044;
        case 0x24f048u: goto label_24f048;
        case 0x24f04cu: goto label_24f04c;
        case 0x24f050u: goto label_24f050;
        case 0x24f054u: goto label_24f054;
        case 0x24f058u: goto label_24f058;
        case 0x24f05cu: goto label_24f05c;
        case 0x24f060u: goto label_24f060;
        case 0x24f064u: goto label_24f064;
        case 0x24f068u: goto label_24f068;
        case 0x24f06cu: goto label_24f06c;
        case 0x24f070u: goto label_24f070;
        case 0x24f074u: goto label_24f074;
        case 0x24f078u: goto label_24f078;
        case 0x24f07cu: goto label_24f07c;
        case 0x24f080u: goto label_24f080;
        case 0x24f084u: goto label_24f084;
        case 0x24f088u: goto label_24f088;
        case 0x24f08cu: goto label_24f08c;
        case 0x24f090u: goto label_24f090;
        case 0x24f094u: goto label_24f094;
        case 0x24f098u: goto label_24f098;
        case 0x24f09cu: goto label_24f09c;
        case 0x24f0a0u: goto label_24f0a0;
        case 0x24f0a4u: goto label_24f0a4;
        case 0x24f0a8u: goto label_24f0a8;
        case 0x24f0acu: goto label_24f0ac;
        case 0x24f0b0u: goto label_24f0b0;
        case 0x24f0b4u: goto label_24f0b4;
        case 0x24f0b8u: goto label_24f0b8;
        case 0x24f0bcu: goto label_24f0bc;
        case 0x24f0c0u: goto label_24f0c0;
        case 0x24f0c4u: goto label_24f0c4;
        case 0x24f0c8u: goto label_24f0c8;
        case 0x24f0ccu: goto label_24f0cc;
        case 0x24f0d0u: goto label_24f0d0;
        case 0x24f0d4u: goto label_24f0d4;
        case 0x24f0d8u: goto label_24f0d8;
        case 0x24f0dcu: goto label_24f0dc;
        case 0x24f0e0u: goto label_24f0e0;
        case 0x24f0e4u: goto label_24f0e4;
        case 0x24f0e8u: goto label_24f0e8;
        case 0x24f0ecu: goto label_24f0ec;
        case 0x24f0f0u: goto label_24f0f0;
        case 0x24f0f4u: goto label_24f0f4;
        case 0x24f0f8u: goto label_24f0f8;
        case 0x24f0fcu: goto label_24f0fc;
        case 0x24f100u: goto label_24f100;
        case 0x24f104u: goto label_24f104;
        case 0x24f108u: goto label_24f108;
        case 0x24f10cu: goto label_24f10c;
        case 0x24f110u: goto label_24f110;
        case 0x24f114u: goto label_24f114;
        case 0x24f118u: goto label_24f118;
        case 0x24f11cu: goto label_24f11c;
        case 0x24f120u: goto label_24f120;
        case 0x24f124u: goto label_24f124;
        case 0x24f128u: goto label_24f128;
        case 0x24f12cu: goto label_24f12c;
        case 0x24f130u: goto label_24f130;
        case 0x24f134u: goto label_24f134;
        case 0x24f138u: goto label_24f138;
        case 0x24f13cu: goto label_24f13c;
        case 0x24f140u: goto label_24f140;
        case 0x24f144u: goto label_24f144;
        case 0x24f148u: goto label_24f148;
        case 0x24f14cu: goto label_24f14c;
        case 0x24f150u: goto label_24f150;
        case 0x24f154u: goto label_24f154;
        case 0x24f158u: goto label_24f158;
        case 0x24f15cu: goto label_24f15c;
        case 0x24f160u: goto label_24f160;
        case 0x24f164u: goto label_24f164;
        case 0x24f168u: goto label_24f168;
        case 0x24f16cu: goto label_24f16c;
        case 0x24f170u: goto label_24f170;
        case 0x24f174u: goto label_24f174;
        case 0x24f178u: goto label_24f178;
        case 0x24f17cu: goto label_24f17c;
        case 0x24f180u: goto label_24f180;
        case 0x24f184u: goto label_24f184;
        case 0x24f188u: goto label_24f188;
        case 0x24f18cu: goto label_24f18c;
        case 0x24f190u: goto label_24f190;
        case 0x24f194u: goto label_24f194;
        case 0x24f198u: goto label_24f198;
        case 0x24f19cu: goto label_24f19c;
        case 0x24f1a0u: goto label_24f1a0;
        case 0x24f1a4u: goto label_24f1a4;
        case 0x24f1a8u: goto label_24f1a8;
        case 0x24f1acu: goto label_24f1ac;
        case 0x24f1b0u: goto label_24f1b0;
        case 0x24f1b4u: goto label_24f1b4;
        case 0x24f1b8u: goto label_24f1b8;
        case 0x24f1bcu: goto label_24f1bc;
        case 0x24f1c0u: goto label_24f1c0;
        case 0x24f1c4u: goto label_24f1c4;
        case 0x24f1c8u: goto label_24f1c8;
        case 0x24f1ccu: goto label_24f1cc;
        case 0x24f1d0u: goto label_24f1d0;
        case 0x24f1d4u: goto label_24f1d4;
        case 0x24f1d8u: goto label_24f1d8;
        case 0x24f1dcu: goto label_24f1dc;
        case 0x24f1e0u: goto label_24f1e0;
        case 0x24f1e4u: goto label_24f1e4;
        case 0x24f1e8u: goto label_24f1e8;
        case 0x24f1ecu: goto label_24f1ec;
        case 0x24f1f0u: goto label_24f1f0;
        case 0x24f1f4u: goto label_24f1f4;
        case 0x24f1f8u: goto label_24f1f8;
        case 0x24f1fcu: goto label_24f1fc;
        case 0x24f200u: goto label_24f200;
        case 0x24f204u: goto label_24f204;
        case 0x24f208u: goto label_24f208;
        case 0x24f20cu: goto label_24f20c;
        case 0x24f210u: goto label_24f210;
        case 0x24f214u: goto label_24f214;
        case 0x24f218u: goto label_24f218;
        case 0x24f21cu: goto label_24f21c;
        case 0x24f220u: goto label_24f220;
        case 0x24f224u: goto label_24f224;
        case 0x24f228u: goto label_24f228;
        case 0x24f22cu: goto label_24f22c;
        case 0x24f230u: goto label_24f230;
        case 0x24f234u: goto label_24f234;
        case 0x24f238u: goto label_24f238;
        case 0x24f23cu: goto label_24f23c;
        case 0x24f240u: goto label_24f240;
        case 0x24f244u: goto label_24f244;
        case 0x24f248u: goto label_24f248;
        case 0x24f24cu: goto label_24f24c;
        case 0x24f250u: goto label_24f250;
        case 0x24f254u: goto label_24f254;
        case 0x24f258u: goto label_24f258;
        case 0x24f25cu: goto label_24f25c;
        case 0x24f260u: goto label_24f260;
        case 0x24f264u: goto label_24f264;
        case 0x24f268u: goto label_24f268;
        case 0x24f26cu: goto label_24f26c;
        case 0x24f270u: goto label_24f270;
        case 0x24f274u: goto label_24f274;
        case 0x24f278u: goto label_24f278;
        case 0x24f27cu: goto label_24f27c;
        case 0x24f280u: goto label_24f280;
        case 0x24f284u: goto label_24f284;
        case 0x24f288u: goto label_24f288;
        case 0x24f28cu: goto label_24f28c;
        case 0x24f290u: goto label_24f290;
        case 0x24f294u: goto label_24f294;
        case 0x24f298u: goto label_24f298;
        case 0x24f29cu: goto label_24f29c;
        case 0x24f2a0u: goto label_24f2a0;
        case 0x24f2a4u: goto label_24f2a4;
        case 0x24f2a8u: goto label_24f2a8;
        case 0x24f2acu: goto label_24f2ac;
        case 0x24f2b0u: goto label_24f2b0;
        case 0x24f2b4u: goto label_24f2b4;
        case 0x24f2b8u: goto label_24f2b8;
        case 0x24f2bcu: goto label_24f2bc;
        case 0x24f2c0u: goto label_24f2c0;
        case 0x24f2c4u: goto label_24f2c4;
        case 0x24f2c8u: goto label_24f2c8;
        case 0x24f2ccu: goto label_24f2cc;
        case 0x24f2d0u: goto label_24f2d0;
        case 0x24f2d4u: goto label_24f2d4;
        case 0x24f2d8u: goto label_24f2d8;
        case 0x24f2dcu: goto label_24f2dc;
        case 0x24f2e0u: goto label_24f2e0;
        case 0x24f2e4u: goto label_24f2e4;
        case 0x24f2e8u: goto label_24f2e8;
        case 0x24f2ecu: goto label_24f2ec;
        case 0x24f2f0u: goto label_24f2f0;
        case 0x24f2f4u: goto label_24f2f4;
        case 0x24f2f8u: goto label_24f2f8;
        case 0x24f2fcu: goto label_24f2fc;
        case 0x24f300u: goto label_24f300;
        case 0x24f304u: goto label_24f304;
        case 0x24f308u: goto label_24f308;
        case 0x24f30cu: goto label_24f30c;
        case 0x24f310u: goto label_24f310;
        case 0x24f314u: goto label_24f314;
        case 0x24f318u: goto label_24f318;
        case 0x24f31cu: goto label_24f31c;
        case 0x24f320u: goto label_24f320;
        case 0x24f324u: goto label_24f324;
        case 0x24f328u: goto label_24f328;
        case 0x24f32cu: goto label_24f32c;
        case 0x24f330u: goto label_24f330;
        case 0x24f334u: goto label_24f334;
        case 0x24f338u: goto label_24f338;
        case 0x24f33cu: goto label_24f33c;
        case 0x24f340u: goto label_24f340;
        case 0x24f344u: goto label_24f344;
        case 0x24f348u: goto label_24f348;
        case 0x24f34cu: goto label_24f34c;
        case 0x24f350u: goto label_24f350;
        case 0x24f354u: goto label_24f354;
        case 0x24f358u: goto label_24f358;
        case 0x24f35cu: goto label_24f35c;
        case 0x24f360u: goto label_24f360;
        case 0x24f364u: goto label_24f364;
        case 0x24f368u: goto label_24f368;
        case 0x24f36cu: goto label_24f36c;
        default: return;
    }

label_24eba0:
    // 0x24eba0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24eba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eba4:
    // 0x24eba4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24eba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eba8:
    // 0x24eba8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24eba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ebac:
    // 0x24ebac: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ebacu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EBAC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebb0:
    // 0x24ebb0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ebb0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EBB0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebb4:
    // 0x24ebb4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ebb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24EBB4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebb8:
    // 0x24ebb8: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ebb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24EBB8 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebbc:
    // 0x24ebbc: 0x90005  .word       0x00090005                   # INVALID     $zero, $t1, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ebbcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24EBBC raw=0x00090005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebc0:
    // 0x24ebc0: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24ebc0u;
    
label_24ebc4:
    // 0x24ebc4: 0x10200da  .word       0x010200DA                   # div         $zero, $t0, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ebc4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24ebc8:
    // 0x24ebc8: 0x750075  .word       0x00750075                   # INVALID     $v1, $s5, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ebc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24EBC8 raw=0x00750075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ebcc:
    // 0x24ebcc: 0x13b013b  .word       0x013B013B                   # dsra        $zero, $k1, 4 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ebccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 27) >> 4);
label_24ebd0:
    // 0x24ebd0: 0xc2d0c2d  jal         func_B430B4
label_24ebd4:
    if (ctx->pc == 0x24EBD4u) {
        ctx->pc = 0x24EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBD0u;
        // 0x24ebd4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBD8u;
        goto label_24ebd8;
    }
    ctx->pc = 0x24EBD0u;
    SET_GPR_U32(ctx, 31, 0x24EBD8u);
    ctx->pc = 0x24EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBD0u;
    // 0x24ebd4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24EBD0u, 0x24EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBD8u;
label_24ebd8:
    // 0x24ebd8: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ebd8u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ebdc:
    // 0x24ebdc: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24ebdcu;
    
label_24ebe0:
    // 0x24ebe0: 0x0  nop
    ctx->pc = 0x24ebe0u;
    // NOP
label_24ebe4:
    // 0x24ebe4: 0x0  nop
    ctx->pc = 0x24ebe4u;
    // NOP
label_24ebe8:
    // 0x24ebe8: 0x0  nop
    ctx->pc = 0x24ebe8u;
    // NOP
label_24ebec:
    // 0x24ebec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ebf0:
    // 0x24ebf0: 0x0  nop
    ctx->pc = 0x24ebf0u;
    // NOP
label_24ebf4:
    // 0x24ebf4: 0x0  nop
    ctx->pc = 0x24ebf4u;
    // NOP
label_24ebf8:
    // 0x24ebf8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ebf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ebfc:
    // 0x24ebfc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ebfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24EBFC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec00:
    // 0x24ec00: 0x0  nop
    ctx->pc = 0x24ec00u;
    // NOP
label_24ec04:
    // 0x24ec04: 0x0  nop
    ctx->pc = 0x24ec04u;
    // NOP
label_24ec08:
    // 0x24ec08: 0x0  nop
    ctx->pc = 0x24ec08u;
    // NOP
label_24ec0c:
    // 0x24ec0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ec0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ec10:
    // 0x24ec10: 0x0  nop
    ctx->pc = 0x24ec10u;
    // NOP
label_24ec14:
    // 0x24ec14: 0x0  nop
    ctx->pc = 0x24ec14u;
    // NOP
label_24ec18:
    // 0x24ec18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ec1c:
    // 0x24ec1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24EC1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec20:
    // 0x24ec20: 0x0  nop
    ctx->pc = 0x24ec20u;
    // NOP
label_24ec24:
    // 0x24ec24: 0x0  nop
    ctx->pc = 0x24ec24u;
    // NOP
label_24ec28:
    // 0x24ec28: 0x0  nop
    ctx->pc = 0x24ec28u;
    // NOP
label_24ec2c:
    // 0x24ec2c: 0x0  nop
    ctx->pc = 0x24ec2cu;
    // NOP
label_24ec30:
    // 0x24ec30: 0x0  nop
    ctx->pc = 0x24ec30u;
    // NOP
label_24ec34:
    // 0x24ec34: 0x0  nop
    ctx->pc = 0x24ec34u;
    // NOP
label_24ec38:
    // 0x24ec38: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec3c:
    // 0x24ec3c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ec3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec40:
    // 0x24ec40: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec44:
    // 0x24ec44: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EC44 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec48:
    // 0x24ec48: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ec48u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EC48 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec4c:
    // 0x24ec4c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ec4cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EC4C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec50:
    // 0x24ec50: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec54:
    // 0x24ec54: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec58:
    // 0x24ec58: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ec58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec5c:
    // 0x24ec5c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EC5C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec60:
    // 0x24ec60: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ec60u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EC60 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec64:
    // 0x24ec64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ec64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EC64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec68:
    // 0x24ec68: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ec68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec6c:
    // 0x24ec6c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ec6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec70:
    // 0x24ec70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec74:
    // 0x24ec74: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EC74 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec78:
    // 0x24ec78: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ec78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EC78 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec7c:
    // 0x24ec7c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24EC7C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec80:
    // 0x24ec80: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec84:
    // 0x24ec84: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec88:
    // 0x24ec88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ec88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec8c:
    // 0x24ec8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EC8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec90:
    // 0x24ec90: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24EC90 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec94:
    // 0x24ec94: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ec94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24EC94 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ec98:
    // 0x24ec98: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ec98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ec9c:
    // 0x24ec9c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24ec9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eca0:
    // 0x24eca0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24eca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eca4:
    // 0x24eca4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eca4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24ECA4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eca8:
    // 0x24eca8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eca8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24ECA8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecac:
    // 0x24ecac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ecacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24ECAC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecb0:
    // 0x24ecb0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24ecb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ecb4:
    // 0x24ecb4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ecb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ecb8:
    // 0x24ecb8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ecb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ecbc:
    // 0x24ecbc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ecbcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ECBC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecc0:
    // 0x24ecc0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ecc0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ECC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecc4:
    // 0x24ecc4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ecc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24ECC4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecc8:
    // 0x24ecc8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ecc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24ECC8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eccc:
    // 0x24eccc: 0xa0005  .word       0x000A0005                   # INVALID     $zero, $t2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ecccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24ECCC raw=0x000A0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ecd0:
    // 0x24ecd0: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24ecd0u;
    
label_24ecd4:
    // 0x24ecd4: 0x10300db  .word       0x010300DB                   # divu        $zero, $t0, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ecd4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_24ecd8:
    // 0x24ecd8: 0x760076  tne         $v1, $s6, 1
    ctx->pc = 0x24ecd8u;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_24ecdc:
    // 0x24ecdc: 0x13c013c  .word       0x013C013C                   # dsll32      $zero, $gp, 4 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ecdcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << (32 + 4));
label_24ece0:
    // 0x24ece0: 0xc2d0c2d  jal         func_B430B4
label_24ece4:
    if (ctx->pc == 0x24ECE4u) {
        ctx->pc = 0x24ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE0u;
        // 0x24ece4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECE8u;
        goto label_24ece8;
    }
    ctx->pc = 0x24ECE0u;
    SET_GPR_U32(ctx, 31, 0x24ECE8u);
    ctx->pc = 0x24ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECE0u;
    // 0x24ece4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24ECE0u, 0x24ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECE8u;
label_24ece8:
    // 0x24ece8: 0x30c2d  .word       0x00030C2D                   # daddu       $at, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ece8u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_24ecec:
    // 0x24ecec: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24ececu;
    
label_24ecf0:
    // 0x24ecf0: 0x0  nop
    ctx->pc = 0x24ecf0u;
    // NOP
label_24ecf4:
    // 0x24ecf4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ecf8:
    // 0x24ecf8: 0x0  nop
    ctx->pc = 0x24ecf8u;
    // NOP
label_24ecfc:
    // 0x24ecfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ecfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ed00:
    // 0x24ed00: 0x42860000  .word       0x42860000                   # INVALID     $s4, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24ED00 raw=0x42860000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed04:
    // 0x24ed04: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24ED04 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed08:
    // 0x24ed08: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ed08u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ed0c:
    // 0x24ed0c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24ED0C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed10:
    // 0x24ed10: 0x0  nop
    ctx->pc = 0x24ed10u;
    // NOP
label_24ed14:
    // 0x24ed14: 0x0  nop
    ctx->pc = 0x24ed14u;
    // NOP
label_24ed18:
    // 0x24ed18: 0x0  nop
    ctx->pc = 0x24ed18u;
    // NOP
label_24ed1c:
    // 0x24ed1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ed20:
    // 0x24ed20: 0x0  nop
    ctx->pc = 0x24ed20u;
    // NOP
label_24ed24:
    // 0x24ed24: 0x0  nop
    ctx->pc = 0x24ed24u;
    // NOP
label_24ed28:
    // 0x24ed28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ed28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ed2c:
    // 0x24ed2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24ED2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed30:
    // 0x24ed30: 0x0  nop
    ctx->pc = 0x24ed30u;
    // NOP
label_24ed34:
    // 0x24ed34: 0x0  nop
    ctx->pc = 0x24ed34u;
    // NOP
label_24ed38:
    // 0x24ed38: 0x0  nop
    ctx->pc = 0x24ed38u;
    // NOP
label_24ed3c:
    // 0x24ed3c: 0x0  nop
    ctx->pc = 0x24ed3cu;
    // NOP
label_24ed40:
    // 0x24ed40: 0x0  nop
    ctx->pc = 0x24ed40u;
    // NOP
label_24ed44:
    // 0x24ed44: 0x0  nop
    ctx->pc = 0x24ed44u;
    // NOP
label_24ed48:
    // 0x24ed48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ed48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed4c:
    // 0x24ed4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ed4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed50:
    // 0x24ed50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ed50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed54:
    // 0x24ed54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24ED54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed58:
    // 0x24ed58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ed58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ED58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed5c:
    // 0x24ed5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ed5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ED5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed60:
    // 0x24ed60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ed60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed64:
    // 0x24ed64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ed64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed68:
    // 0x24ed68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ed68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed6c:
    // 0x24ed6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24ED6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed70:
    // 0x24ed70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ed70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ED70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed74:
    // 0x24ed74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ed74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ED74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed78:
    // 0x24ed78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ed78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed7c:
    // 0x24ed7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ed7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed80:
    // 0x24ed80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ed80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed84:
    // 0x24ed84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24ED84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed88:
    // 0x24ed88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ed88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24ED88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed8c:
    // 0x24ed8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24ED8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ed90:
    // 0x24ed90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ed90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed94:
    // 0x24ed94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ed94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed98:
    // 0x24ed98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ed98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ed9c:
    // 0x24ed9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ed9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24ED9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eda0:
    // 0x24eda0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eda0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24EDA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eda4:
    // 0x24eda4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eda4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24EDA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eda8:
    // 0x24eda8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24eda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edac:
    // 0x24edac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24edacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edb0:
    // 0x24edb0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24edb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edb4:
    // 0x24edb4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24edb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24EDB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edb8:
    // 0x24edb8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24edb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24EDB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edbc:
    // 0x24edbc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24edbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24EDBC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edc0:
    // 0x24edc0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24edc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edc4:
    // 0x24edc4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24edc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edc8:
    // 0x24edc8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24edc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24edcc:
    // 0x24edcc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24edccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EDCC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edd0:
    // 0x24edd0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24edd0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EDD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edd4:
    // 0x24edd4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24edd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24EDD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edd8:
    // 0x24edd8: 0x42eeeb85  .word       0x42EEEB85                   # INVALID     $s7, $t6, -0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24edd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24EDD8 raw=0x42EEEB85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eddc:
    // 0x24eddc: 0xb0005  .word       0x000B0005                   # INVALID     $zero, $t3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24eddcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24EDDC raw=0x000B0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ede0:
    // 0x24ede0: 0x20011  .word       0x00020011                   # mthi        $zero # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ede0u;
    ctx->hi = GPR_U64(ctx, 0);
label_24ede4:
    // 0x24ede4: 0x10400dc  .word       0x010400DC                   # dmult       $t0, $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ede4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24EDE4 raw=0x010400DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ede8:
    // 0x24ede8: 0x770077  .word       0x00770077                   # INVALID     $v1, $s7, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ede8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24EDE8 raw=0x00770077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edec:
    // 0x24edec: 0x13d013d  .word       0x013D013D                   # INVALID     $t1, $sp, 0x13D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24edecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24EDEC raw=0x013D013D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edf0:
    // 0x24edf0: 0xc2d0c2d  jal         func_B430B4
label_24edf4:
    if (ctx->pc == 0x24EDF4u) {
        ctx->pc = 0x24EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDF0u;
        // 0x24edf4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDF8u;
        goto label_24edf8;
    }
    ctx->pc = 0x24EDF0u;
    SET_GPR_U32(ctx, 31, 0x24EDF8u);
    ctx->pc = 0x24EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDF0u;
    // 0x24edf4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24EDF0u, 0x24EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDF8u;
label_24edf8:
    // 0x24edf8: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24edf8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24EDF8 raw=0x000000DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24edfc:
    // 0x24edfc: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24edfcu;
    
label_24ee00:
    // 0x24ee00: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24EE00 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee04:
    // 0x24ee04: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee04u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE04 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee08:
    // 0x24ee08: 0x42860000  .word       0x42860000                   # INVALID     $s4, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EE08 raw=0x42860000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee0c:
    // 0x24ee0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ee0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ee10:
    // 0x24ee10: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x24EE10 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee14:
    // 0x24ee14: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee14u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE14 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee18:
    // 0x24ee18: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24ee1c:
    if (ctx->pc == 0x24EE1Cu) {
        ctx->pc = 0x24EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE18u;
        // 0x24ee1c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24EE1C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE20u;
        goto label_24ee20;
    }
    ctx->pc = 0x24EE18u;
    {
        const bool branch_taken_0x24ee18 = (false);
        ctx->pc = 0x24EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE18u;
        // 0x24ee1c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24EE1C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee18) {
            ctx->pc = 0x24EE1Cu;
            goto label_24ee1c;
        }
    }
    ctx->pc = 0x24EE20u;
label_24ee20:
    // 0x24ee20: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee20u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24EE20 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee24:
    // 0x24ee24: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee24u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE24 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee28:
    // 0x24ee28: 0xc2860000  ll          $a2, 0x0($s4)
    ctx->pc = 0x24ee28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee2c:
    // 0x24ee2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ee2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ee30:
    // 0x24ee30: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x24EE30 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee34:
    // 0x24ee34: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee34u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE34 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee38:
    // 0x24ee38: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24ee3c:
    if (ctx->pc == 0x24EE3Cu) {
        ctx->pc = 0x24EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE38u;
        // 0x24ee3c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24EE3C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE40u;
        goto label_24ee40;
    }
    ctx->pc = 0x24EE38u;
    {
        const bool branch_taken_0x24ee38 = (false);
        ctx->pc = 0x24EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE38u;
        // 0x24ee3c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24EE3C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee38) {
            ctx->pc = 0x24EE3Cu;
            goto label_24ee3c;
        }
    }
    ctx->pc = 0x24EE40u;
label_24ee40:
    // 0x24ee40: 0x0  nop
    ctx->pc = 0x24ee40u;
    // NOP
label_24ee44:
    // 0x24ee44: 0x0  nop
    ctx->pc = 0x24ee44u;
    // NOP
label_24ee48:
    // 0x24ee48: 0x0  nop
    ctx->pc = 0x24ee48u;
    // NOP
label_24ee4c:
    // 0x24ee4c: 0x0  nop
    ctx->pc = 0x24ee4cu;
    // NOP
label_24ee50:
    // 0x24ee50: 0x0  nop
    ctx->pc = 0x24ee50u;
    // NOP
label_24ee54:
    // 0x24ee54: 0x0  nop
    ctx->pc = 0x24ee54u;
    // NOP
label_24ee58:
    // 0x24ee58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ee58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee5c:
    // 0x24ee5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ee5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee60:
    // 0x24ee60: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee64:
    // 0x24ee64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EE64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee68:
    // 0x24ee68: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE68 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee6c:
    // 0x24ee6c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee6cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE6C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee70:
    // 0x24ee70: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee74:
    // 0x24ee74: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ee74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee78:
    // 0x24ee78: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ee78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee7c:
    // 0x24ee7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EE7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee80:
    // 0x24ee80: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE80 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee84:
    // 0x24ee84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee88:
    // 0x24ee88: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ee88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee8c:
    // 0x24ee8c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ee8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee90:
    // 0x24ee90: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ee90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ee94:
    // 0x24ee94: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EE94 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee98:
    // 0x24ee98: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ee98u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EE98 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ee9c:
    // 0x24ee9c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ee9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24EE9C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eea0:
    // 0x24eea0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24eea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eea4:
    // 0x24eea4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24eea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eea8:
    // 0x24eea8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24eea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eeac:
    // 0x24eeac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eeacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EEAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eeb0:
    // 0x24eeb0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eeb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24EEB0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eeb4:
    // 0x24eeb4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eeb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24EEB4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eeb8:
    // 0x24eeb8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24eeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eebc:
    // 0x24eebc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24eebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eec0:
    // 0x24eec0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24eec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eec4:
    // 0x24eec4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eec4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24EEC4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eec8:
    // 0x24eec8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eec8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24EEC8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eecc:
    // 0x24eecc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eeccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24EECC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eed0:
    // 0x24eed0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24eed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eed4:
    // 0x24eed4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24eed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eed8:
    // 0x24eed8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24eed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24eedc:
    // 0x24eedc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24eedcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EEDC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eee0:
    // 0x24eee0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24eee0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EEE0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eee4:
    // 0x24eee4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eee4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24EEE4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eee8:
    // 0x24eee8: 0x43048f5c  .word       0x43048F5C                   # INVALID     $t8, $a0, -0x70A4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eee8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24EEE8 raw=0x43048F5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eeec:
    // 0x24eeec: 0xc0009  .word       0x000C0009                   # jalr        $zero, $zero # 000C0000 <InstrIdType: CPU_SPECIAL>
label_24eef0:
    if (ctx->pc == 0x24EEF0u) {
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEF4u;
        goto label_24eef4;
    }
    ctx->pc = 0x24EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEECu, 0x24EEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EEF4u;
label_24eef4:
    // 0x24eef4: 0x8510851  j           func_1442144
label_24eef8:
    if (ctx->pc == 0x24EEF8u) {
        ctx->pc = 0x24EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEF4u;
        // 0x24eef8: 0x84f084f  j           func_13C213C (Delay Slot)
        // J 0x13C213C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEFCu;
        goto label_24eefc;
    }
    ctx->pc = 0x24EEF4u;
    ctx->pc = 0x24EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEF4u;
    // 0x24eef8: 0x84f084f  j           func_13C213C (Delay Slot)
    // J 0x13C213C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1442144u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442144u, 0x24EEF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24EEFCu;
label_24eefc:
    // 0x24eefc: 0x87c087c  j           func_1F021F0
label_24ef00:
    if (ctx->pc == 0x24EF00u) {
        ctx->pc = 0x24EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEFCu;
        // 0x24ef00: 0x1b801b7  .word       0x01B801B7                   # INVALID     $t5, $t8, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24EF00 raw=0x01B801B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF04u;
        goto label_24ef04;
    }
    ctx->pc = 0x24EEFCu;
    ctx->pc = 0x24EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEFCu;
    // 0x24ef00: 0x1b801b7  .word       0x01B801B7                   # INVALID     $t5, $t8, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24EF00 raw=0x01B801B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F021F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F021F0u, 0x24EEFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24EF04u;
label_24ef04:
    // 0x24ef04: 0x173014a  .word       0x0173014A                   # movz        $zero, $t3, $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ef04u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 11));
label_24ef08:
    // 0x24ef08: 0x3e0091  .word       0x003E0091                   # mthi        $at # 001E0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ef08u;
    ctx->hi = GPR_U64(ctx, 1);
label_24ef0c:
    // 0x24ef0c: 0x8  jr          $zero
label_24ef10:
    if (ctx->pc == 0x24EF10u) {
        ctx->pc = 0x24EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF0Cu;
        // 0x24ef10: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24EF10 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF14u;
        goto label_24ef14;
    }
    ctx->pc = 0x24EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF0Cu;
        // 0x24ef10: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24EF10 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24EF14u;
label_24ef14:
    // 0x24ef14: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24EF14 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef18:
    // 0x24ef18: 0x0  nop
    ctx->pc = 0x24ef18u;
    // NOP
label_24ef1c:
    // 0x24ef1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ef1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ef20:
    // 0x24ef20: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef20u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EF20 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef24:
    // 0x24ef24: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24EF24 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef28:
    // 0x24ef28: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24ef28u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24ef2c:
    // 0x24ef2c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24EF2C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef30:
    // 0x24ef30: 0x0  nop
    ctx->pc = 0x24ef30u;
    // NOP
label_24ef34:
    // 0x24ef34: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24EF34 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef38:
    // 0x24ef38: 0x0  nop
    ctx->pc = 0x24ef38u;
    // NOP
label_24ef3c:
    // 0x24ef3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ef3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ef40:
    // 0x24ef40: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24EF40 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef44:
    // 0x24ef44: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24EF44 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef48:
    // 0x24ef48: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24ef48u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24ef4c:
    // 0x24ef4c: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24ef50:
    if (ctx->pc == 0x24EF50u) {
        ctx->pc = 0x24EF54u;
        goto label_24ef54;
    }
    ctx->pc = 0x24EF4Cu;
    {
        const bool branch_taken_0x24ef4c = (false);
        if (branch_taken_0x24ef4c) {
            ctx->pc = 0x24EF50u;
            goto label_24ef50;
        }
    }
    ctx->pc = 0x24EF54u;
label_24ef54:
    // 0x24ef54: 0x0  nop
    ctx->pc = 0x24ef54u;
    // NOP
label_24ef58:
    // 0x24ef58: 0x0  nop
    ctx->pc = 0x24ef58u;
    // NOP
label_24ef5c:
    // 0x24ef5c: 0x0  nop
    ctx->pc = 0x24ef5cu;
    // NOP
label_24ef60:
    // 0x24ef60: 0x0  nop
    ctx->pc = 0x24ef60u;
    // NOP
label_24ef64:
    // 0x24ef64: 0x0  nop
    ctx->pc = 0x24ef64u;
    // NOP
label_24ef68:
    // 0x24ef68: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ef68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef6c:
    // 0x24ef6c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ef6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef70:
    // 0x24ef70: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ef70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef74:
    // 0x24ef74: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EF74 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef78:
    // 0x24ef78: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ef78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EF78 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef7c:
    // 0x24ef7c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ef7cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EF7C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef80:
    // 0x24ef80: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ef80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef84:
    // 0x24ef84: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ef84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef88:
    // 0x24ef88: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ef88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef8c:
    // 0x24ef8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ef8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EF8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef90:
    // 0x24ef90: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ef90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EF90 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef94:
    // 0x24ef94: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ef94u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EF94 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ef98:
    // 0x24ef98: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24ef98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ef9c:
    // 0x24ef9c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ef9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efa0:
    // 0x24efa0: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x24efa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efa4:
    // 0x24efa4: 0x42920000  .word       0x42920000                   # INVALID     $s4, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EFA4 raw=0x42920000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efa8:
    // 0x24efa8: 0x41e00000  .word       0x41E00000                   # INVALID     $t7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efa8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24EFA8 raw=0x41E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efac:
    // 0x24efac: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24EFAC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efb0:
    // 0x24efb0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24efb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efb4:
    // 0x24efb4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24efb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efb8:
    // 0x24efb8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24efb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efbc:
    // 0x24efbc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24EFBC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efc0:
    // 0x24efc0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24EFC0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efc4:
    // 0x24efc4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24EFC4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efc8:
    // 0x24efc8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24efc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efcc:
    // 0x24efcc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24efccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efd0:
    // 0x24efd0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24efd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efd4:
    // 0x24efd4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24EFD4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efd8:
    // 0x24efd8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24EFD8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efdc:
    // 0x24efdc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24efdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24EFDC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24efe0:
    // 0x24efe0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24efe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efe4:
    // 0x24efe4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24efe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efe8:
    // 0x24efe8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24efe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24efec:
    // 0x24efec: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24efecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EFEC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eff0:
    // 0x24eff0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24eff0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24EFF0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eff4:
    // 0x24eff4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eff4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24EFF4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24eff8:
    // 0x24eff8: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24eff8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24EFF8 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24effc:
    // 0x24effc: 0xd0009  .word       0x000D0009                   # jalr        $zero, $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
label_24f000:
    if (ctx->pc == 0x24F000u) {
        ctx->pc = 0x24F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFFCu;
        // 0x24f000: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F004u;
        goto label_24f004;
    }
    ctx->pc = 0x24EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFFCu;
        // 0x24f000: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EFFCu, 0x24F004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F004u;
label_24f004:
    // 0x24f004: 0x8520852  j           func_1482148
label_24f008:
    if (ctx->pc == 0x24F008u) {
        ctx->pc = 0x24F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F004u;
        // 0x24f008: 0x8500850  j           func_1402140 (Delay Slot)
        // J 0x1402140 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F00Cu;
        goto label_24f00c;
    }
    ctx->pc = 0x24F004u;
    ctx->pc = 0x24F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F004u;
    // 0x24f008: 0x8500850  j           func_1402140 (Delay Slot)
    // J 0x1402140 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482148u, 0x24F004u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24F00Cu;
label_24f00c:
    // 0x24f00c: 0x87d087d  j           func_1F421F4
label_24f010:
    if (ctx->pc == 0x24F010u) {
        ctx->pc = 0x24F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F00Cu;
        // 0x24f010: 0x1bb01ba  .word       0x01BB01BA                   # dsrl        $zero, $k1, 6 # 01A00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 27) >> 6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F014u;
        goto label_24f014;
    }
    ctx->pc = 0x24F00Cu;
    ctx->pc = 0x24F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F00Cu;
    // 0x24f010: 0x1bb01ba  .word       0x01BB01BA                   # dsrl        $zero, $k1, 6 # 01A00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 27) >> 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F421F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F421F4u, 0x24F00Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24F014u;
label_24f014:
    // 0x24f014: 0x174014b  .word       0x0174014B                   # movn        $zero, $t3, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f014u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 11));
label_24f018:
    // 0x24f018: 0x3f0093  .word       0x003F0093                   # mtlo        $at # 001F0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f018u;
    ctx->lo = GPR_U64(ctx, 1);
label_24f01c:
    // 0x24f01c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f01cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f020:
    // 0x24f020: 0x284  .word       0x00000284                   # sllv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f020u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f024:
    // 0x24f024: 0x296  .word       0x00000296                   # dsrlv       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f028:
    // 0x24f028: 0x2af  .word       0x000002AF                   # dsubu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24f02c:
    // 0x24f02c: 0x2c1  .word       0x000002C1                   # INVALID     $zero, $zero, 0x2C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f02cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F02C raw=0x000002C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f030:
    // 0x24f030: 0x2d4  .word       0x000002D4                   # dsllv       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f030u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24f034:
    // 0x24f034: 0x2eb  .word       0x000002EB                   # sltu        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f034u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24f038:
    // 0x24f038: 0x2fe  dsrl32      $zero, $zero, 11
    ctx->pc = 0x24f038u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 11));
label_24f03c:
    // 0x24f03c: 0x311  .word       0x00000311                   # mthi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f03cu;
    ctx->hi = GPR_U64(ctx, 0);
label_24f040:
    // 0x24f040: 0x328  .word       0x00000328                   # mfsa        $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f040u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24f044:
    // 0x24f044: 0x33d  .word       0x0000033D                   # INVALID     $zero, $zero, 0x33D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F044 raw=0x0000033D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f048:
    // 0x24f048: 0x350  .word       0x00000350                   # mfhi        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f048u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24f04c:
    // 0x24f04c: 0x365  .word       0x00000365                   # move        $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f04cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f050:
    // 0x24f050: 0x378  dsll        $zero, $zero, 13
    ctx->pc = 0x24f050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 13);
label_24f054:
    // 0x24f054: 0x390  .word       0x00000390                   # mfhi        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f054u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24f058:
    // 0x24f058: 0x3a7  .word       0x000003A7                   # not         $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f058u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24f05c:
    // 0x24f05c: 0x3bd  .word       0x000003BD                   # INVALID     $zero, $zero, 0x3BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f05cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F05C raw=0x000003BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f060:
    // 0x24f060: 0x3d1  .word       0x000003D1                   # mthi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f060u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f064:
    // 0x24f064: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f064u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24f068:
    // 0x24f068: 0x3f6  tne         $zero, $zero, 15
    ctx->pc = 0x24f068u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f06c:
    // 0x24f06c: 0x40c  syscall     16
    ctx->pc = 0x24f06cu;
    ctx->pc = 0x24F070u;
runtime->handleSyscall(rdram, ctx, 0x10u);
label_24f070:
    // 0x24f070: 0x41b  .word       0x0000041B                   # divu        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f070u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24f074:
    // 0x24f074: 0x42e  .word       0x0000042E                   # dsub        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f074u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f078:
    // 0x24f078: 0x443  sra         $zero, $zero, 17
    ctx->pc = 0x24f078u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_24f07c:
    // 0x24f07c: 0x0  nop
    ctx->pc = 0x24f07cu;
    // NOP
label_24f080:
    // 0x24f080: 0x908  .word       0x00000908                   # jr          $zero # 00000900 <InstrIdType: CPU_SPECIAL>
label_24f084:
    if (ctx->pc == 0x24F084u) {
        ctx->pc = 0x24F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F080u;
        // 0x24f084: 0x90e  .word       0x0000090E                   # INVALID     $zero, $zero, 0x90E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F084 raw=0x0000090E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F088u;
        goto label_24f088;
    }
    ctx->pc = 0x24F080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F080u;
        // 0x24f084: 0x90e  .word       0x0000090E                   # INVALID     $zero, $zero, 0x90E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F084 raw=0x0000090E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F088u;
label_24f088:
    // 0x24f088: 0x914  .word       0x00000914                   # dsllv       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24f08c:
    // 0x24f08c: 0x91a  .word       0x0000091A                   # div         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f08cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f090:
    // 0x24f090: 0x920  .word       0x00000920                   # add         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f090u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_24f094:
    // 0x24f094: 0x926  .word       0x00000926                   # xor         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f098:
    // 0x24f098: 0x92c  .word       0x0000092C                   # dadd        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f098u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24f09c:
    // 0x24f09c: 0x932  tlt         $zero, $zero, 36
    ctx->pc = 0x24f09cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f0a0:
    // 0x24f0a0: 0x938  dsll        $at, $zero, 4
    ctx->pc = 0x24f0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 4);
label_24f0a4:
    // 0x24f0a4: 0x93e  dsrl32      $at, $zero, 4
    ctx->pc = 0x24f0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 4));
label_24f0a8:
    // 0x24f0a8: 0x944  .word       0x00000944                   # sllv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f0ac:
    // 0x24f0ac: 0x94a  .word       0x0000094A                   # movz        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0acu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_24f0b0:
    // 0x24f0b0: 0x950  .word       0x00000950                   # mfhi        $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0b0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_24f0b4:
    // 0x24f0b4: 0x956  .word       0x00000956                   # dsrlv       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f0b8:
    // 0x24f0b8: 0x95f  .word       0x0000095F                   # ddivu       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24F0B8 raw=0x0000095F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f0bc:
    // 0x24f0bc: 0x965  .word       0x00000965                   # move        $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f0c0:
    // 0x24f0c0: 0x96b  .word       0x0000096B                   # sltu        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24f0c4:
    // 0x24f0c4: 0x971  tgeu        $zero, $zero, 37
    ctx->pc = 0x24f0c4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f0c8:
    // 0x24f0c8: 0x977  .word       0x00000977                   # INVALID     $zero, $zero, 0x977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24F0C8 raw=0x00000977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f0cc:
    // 0x24f0cc: 0x97e  dsrl32      $at, $zero, 5
    ctx->pc = 0x24f0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 5));
label_24f0d0:
    // 0x24f0d0: 0x984  .word       0x00000984                   # sllv        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f0d4:
    // 0x24f0d4: 0x98a  .word       0x0000098A                   # movz        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0d4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_24f0d8:
    // 0x24f0d8: 0x993  .word       0x00000993                   # mtlo        $zero # 00000980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0d8u;
    ctx->lo = GPR_U64(ctx, 0);
label_24f0dc:
    // 0x24f0dc: 0x0  nop
    ctx->pc = 0x24f0dcu;
    // NOP
label_24f0e0:
    // 0x24f0e0: 0x284  .word       0x00000284                   # sllv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f0e4:
    // 0x24f0e4: 0x29e  .word       0x0000029E                   # ddiv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F0E4 raw=0x0000029E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f0e8:
    // 0x24f0e8: 0x2af  .word       0x000002AF                   # dsubu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24f0ec:
    // 0x24f0ec: 0x2c1  .word       0x000002C1                   # INVALID     $zero, $zero, 0x2C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F0EC raw=0x000002C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f0f0:
    // 0x24f0f0: 0x2da  .word       0x000002DA                   # div         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f0f4:
    // 0x24f0f4: 0x2eb  .word       0x000002EB                   # sltu        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f0f4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24f0f8:
    // 0x24f0f8: 0x2fe  dsrl32      $zero, $zero, 11
    ctx->pc = 0x24f0f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 11));
label_24f0fc:
    // 0x24f0fc: 0x318  .word       0x00000318                   # mult        $zero, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f100:
    // 0x24f100: 0x330  tge         $zero, $zero, 12
    ctx->pc = 0x24f100u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f104:
    // 0x24f104: 0x33d  .word       0x0000033D                   # INVALID     $zero, $zero, 0x33D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f104u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F104 raw=0x0000033D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f108:
    // 0x24f108: 0x357  .word       0x00000357                   # dsrav       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f108u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f10c:
    // 0x24f10c: 0x365  .word       0x00000365                   # move        $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f10cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f110:
    // 0x24f110: 0x37f  dsra32      $zero, $zero, 13
    ctx->pc = 0x24f110u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 13));
label_24f114:
    // 0x24f114: 0x396  .word       0x00000396                   # dsrlv       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f114u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f118:
    // 0x24f118: 0x3ad  .word       0x000003AD                   # daddu       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f118u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f11c:
    // 0x24f11c: 0x3bd  .word       0x000003BD                   # INVALID     $zero, $zero, 0x3BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f11cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F11C raw=0x000003BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f120:
    // 0x24f120: 0x3d6  .word       0x000003D6                   # dsrlv       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f120u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f124:
    // 0x24f124: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f124u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24f128:
    // 0x24f128: 0x3f6  tne         $zero, $zero, 15
    ctx->pc = 0x24f128u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f12c:
    // 0x24f12c: 0x40c  syscall     16
    ctx->pc = 0x24f12cu;
    ctx->pc = 0x24F130u;
runtime->handleSyscall(rdram, ctx, 0x10u);
label_24f130:
    // 0x24f130: 0x41b  .word       0x0000041B                   # divu        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f130u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24f134:
    // 0x24f134: 0x435  .word       0x00000435                   # INVALID     $zero, $zero, 0x435 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f134u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F134 raw=0x00000435"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f138:
    // 0x24f138: 0x443  sra         $zero, $zero, 17
    ctx->pc = 0x24f138u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_24f13c:
    // 0x24f13c: 0x0  nop
    ctx->pc = 0x24f13cu;
    // NOP
label_24f140:
    // 0x24f140: 0x908  .word       0x00000908                   # jr          $zero # 00000900 <InstrIdType: CPU_SPECIAL>
label_24f144:
    if (ctx->pc == 0x24F144u) {
        ctx->pc = 0x24F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F140u;
        // 0x24f144: 0x90e  .word       0x0000090E                   # INVALID     $zero, $zero, 0x90E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F144 raw=0x0000090E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F148u;
        goto label_24f148;
    }
    ctx->pc = 0x24F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F140u;
        // 0x24f144: 0x90e  .word       0x0000090E                   # INVALID     $zero, $zero, 0x90E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F144 raw=0x0000090E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F148u;
label_24f148:
    // 0x24f148: 0x914  .word       0x00000914                   # dsllv       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24f14c:
    // 0x24f14c: 0x91a  .word       0x0000091A                   # div         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f14cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f150:
    // 0x24f150: 0x920  .word       0x00000920                   # add         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f150u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_24f154:
    // 0x24f154: 0x926  .word       0x00000926                   # xor         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f158:
    // 0x24f158: 0x92c  .word       0x0000092C                   # dadd        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f158u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24f15c:
    // 0x24f15c: 0x932  tlt         $zero, $zero, 36
    ctx->pc = 0x24f15cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f160:
    // 0x24f160: 0x938  dsll        $at, $zero, 4
    ctx->pc = 0x24f160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 4);
label_24f164:
    // 0x24f164: 0x93e  dsrl32      $at, $zero, 4
    ctx->pc = 0x24f164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 4));
label_24f168:
    // 0x24f168: 0x944  .word       0x00000944                   # sllv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f168u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f16c:
    // 0x24f16c: 0x94a  .word       0x0000094A                   # movz        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f16cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_24f170:
    // 0x24f170: 0x950  .word       0x00000950                   # mfhi        $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f170u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_24f174:
    // 0x24f174: 0x958  .word       0x00000958                   # mult        $at, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24f178:
    // 0x24f178: 0x95f  .word       0x0000095F                   # ddivu       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f178u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24F178 raw=0x0000095F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f17c:
    // 0x24f17c: 0x965  .word       0x00000965                   # move        $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f180:
    // 0x24f180: 0x96b  .word       0x0000096B                   # sltu        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24f184:
    // 0x24f184: 0x971  tgeu        $zero, $zero, 37
    ctx->pc = 0x24f184u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f188:
    // 0x24f188: 0x977  .word       0x00000977                   # INVALID     $zero, $zero, 0x977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24F188 raw=0x00000977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f18c:
    // 0x24f18c: 0x97e  dsrl32      $at, $zero, 5
    ctx->pc = 0x24f18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 5));
label_24f190:
    // 0x24f190: 0x984  .word       0x00000984                   # sllv        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f190u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f194:
    // 0x24f194: 0x98c  syscall     38
    ctx->pc = 0x24f194u;
    ctx->pc = 0x24F198u;
runtime->handleSyscall(rdram, ctx, 0x26u);
label_24f198:
    // 0x24f198: 0x993  .word       0x00000993                   # mtlo        $zero # 00000980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f198u;
    ctx->lo = GPR_U64(ctx, 0);
label_24f19c:
    // 0x24f19c: 0x0  nop
    ctx->pc = 0x24f19cu;
    // NOP
label_24f1a0:
    // 0x24f1a0: 0x479c4000  .word       0x479C4000                   # INVALID     $gp, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24f1a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24F1A0 raw=0x479C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1a4:
    // 0x24f1a4: 0x479c4000  .word       0x479C4000                   # INVALID     $gp, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24f1a4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24F1A4 raw=0x479C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1a8:
    // 0x24f1a8: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x24f1a8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x24F1A8 raw=0x481C4000");
 /* MITIGATED */
label_24f1ac:
    // 0x24f1ac: 0x0  nop
    ctx->pc = 0x24f1acu;
    // NOP
label_24f1b0:
    // 0x24f1b0: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x24f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_24f1b4:
    // 0x24f1b4: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x24f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_24f1b8:
    // 0x24f1b8: 0xc81c4000  lwc2        $28, 0x4000($zero)
    ctx->pc = 0x24f1b8u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x24F1B8 raw=0xC81C4000");
 /* MITIGATED */
label_24f1bc:
    // 0x24f1bc: 0x0  nop
    ctx->pc = 0x24f1bcu;
    // NOP
label_24f1c0:
    // 0x24f1c0: 0x479c4000  .word       0x479C4000                   # INVALID     $gp, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24f1c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24F1C0 raw=0x479C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1c4:
    // 0x24f1c4: 0x479c4000  .word       0x479C4000                   # INVALID     $gp, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24f1c4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24F1C4 raw=0x479C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1c8:
    // 0x24f1c8: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x24f1c8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x24F1C8 raw=0x481C4000");
 /* MITIGATED */
label_24f1cc:
    // 0x24f1cc: 0x0  nop
    ctx->pc = 0x24f1ccu;
    // NOP
label_24f1d0:
    // 0x24f1d0: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x24f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_24f1d4:
    // 0x24f1d4: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x24f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_24f1d8:
    // 0x24f1d8: 0xc81c4000  lwc2        $28, 0x4000($zero)
    ctx->pc = 0x24f1d8u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x24F1D8 raw=0xC81C4000");
 /* MITIGATED */
label_24f1dc:
    // 0x24f1dc: 0x0  nop
    ctx->pc = 0x24f1dcu;
    // NOP
label_24f1e0:
    // 0x24f1e0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f1e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24F1E0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1e4:
    // 0x24f1e4: 0x0  nop
    ctx->pc = 0x24f1e4u;
    // NOP
label_24f1e8:
    // 0x24f1e8: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f1e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24F1E8 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1ec:
    // 0x24f1ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24f1ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24f1f0:
    // 0x24f1f0: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f1f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24F1F0 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1f4:
    // 0x24f1f4: 0x0  nop
    ctx->pc = 0x24f1f4u;
    // NOP
label_24f1f8:
    // 0x24f1f8: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f1f8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24F1F8 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f1fc:
    // 0x24f1fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24f200:
    // 0x24f200: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f200u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24F200 raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f204:
    // 0x24f204: 0x0  nop
    ctx->pc = 0x24f204u;
    // NOP
label_24f208:
    // 0x24f208: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f208u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24F208 raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f20c:
    // 0x24f20c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24f20cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24f210:
    // 0x24f210: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24f210u;
    
label_24f214:
    // 0x24f214: 0x10001  .word       0x00010001                   # INVALID     $zero, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F214 raw=0x00010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f218:
    // 0x24f218: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f218u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F218 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f21c:
    // 0x24f21c: 0xffff0001  sd          $ra, 0x1($ra)
    ctx->pc = 0x24f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 1), GPR_U64(ctx, 31));
label_24f220:
    // 0x24f220: 0xffff0000  sd          $ra, 0x0($ra)
    ctx->pc = 0x24f220u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 31));
label_24f224:
    // 0x24f224: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24f224u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24f228:
    // 0x24f228: 0xffff  dsra32      $ra, $zero, 31
    ctx->pc = 0x24f228u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 31));
label_24f22c:
    // 0x24f22c: 0x1ffff  dsra32      $ra, $at, 31
    ctx->pc = 0x24f22cu;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 31));
label_24f230:
    // 0x24f230: 0x0  nop
    ctx->pc = 0x24f230u;
    // NOP
label_24f234:
    // 0x24f234: 0x0  nop
    ctx->pc = 0x24f234u;
    // NOP
label_24f238:
    // 0x24f238: 0x0  nop
    ctx->pc = 0x24f238u;
    // NOP
label_24f23c:
    // 0x24f23c: 0x0  nop
    ctx->pc = 0x24f23cu;
    // NOP
label_24f240:
    // 0x24f240: 0x54b  .word       0x0000054B                   # movn        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f240u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24f244:
    // 0x24f244: 0x54c  syscall     21
    ctx->pc = 0x24f244u;
    ctx->pc = 0x24F248u;
runtime->handleSyscall(rdram, ctx, 0x15u);
label_24f248:
    // 0x24f248: 0x54e  .word       0x0000054E                   # INVALID     $zero, $zero, 0x54E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F248 raw=0x0000054E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f24c:
    // 0x24f24c: 0x54f  sync.p
    ctx->pc = 0x24f24cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24f250:
    // 0x24f250: 0x551  .word       0x00000551                   # mthi        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f250u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f254:
    // 0x24f254: 0x552  .word       0x00000552                   # mflo        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f254u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f258:
    // 0x24f258: 0x554  .word       0x00000554                   # dsllv       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f258u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24f25c:
    // 0x24f25c: 0x555  .word       0x00000555                   # INVALID     $zero, $zero, 0x555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f25cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F25C raw=0x00000555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f260:
    // 0x24f260: 0x557  .word       0x00000557                   # dsrav       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f260u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f264:
    // 0x24f264: 0x558  .word       0x00000558                   # mult        $zero, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f268:
    // 0x24f268: 0x55a  .word       0x0000055A                   # div         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f268u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f26c:
    // 0x24f26c: 0x55b  .word       0x0000055B                   # divu        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f26cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24f270:
    // 0x24f270: 0x55d  .word       0x0000055D                   # dmultu      $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F270 raw=0x0000055D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f274:
    // 0x24f274: 0x55e  .word       0x0000055E                   # ddiv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F274 raw=0x0000055E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f278:
    // 0x24f278: 0x560  .word       0x00000560                   # add         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f278u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24f27c:
    // 0x24f27c: 0x561  .word       0x00000561                   # addu        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f27cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f280:
    // 0x24f280: 0x563  .word       0x00000563                   # negu        $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f280u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f284:
    // 0x24f284: 0x564  .word       0x00000564                   # and         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f284u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24f288:
    // 0x24f288: 0x566  .word       0x00000566                   # xor         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f288u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f28c:
    // 0x24f28c: 0x567  .word       0x00000567                   # not         $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f28cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24f290:
    // 0x24f290: 0x569  .word       0x00000569                   # mtsa        $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f290u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f294:
    // 0x24f294: 0x56a  .word       0x0000056A                   # slt         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f294u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f298:
    // 0x24f298: 0x56c  .word       0x0000056C                   # dadd        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f298u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f29c:
    // 0x24f29c: 0x56d  .word       0x0000056D                   # daddu       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f2a0:
    // 0x24f2a0: 0x56f  .word       0x0000056F                   # dsubu       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24f2a4:
    // 0x24f2a4: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x24f2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f2a8:
    // 0x24f2a8: 0x572  tlt         $zero, $zero, 21
    ctx->pc = 0x24f2a8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f2ac:
    // 0x24f2ac: 0x573  tltu        $zero, $zero, 21
    ctx->pc = 0x24f2acu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f2b0:
    // 0x24f2b0: 0x575  .word       0x00000575                   # INVALID     $zero, $zero, 0x575 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F2B0 raw=0x00000575"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f2b4:
    // 0x24f2b4: 0x576  tne         $zero, $zero, 21
    ctx->pc = 0x24f2b4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f2b8:
    // 0x24f2b8: 0x578  dsll        $zero, $zero, 21
    ctx->pc = 0x24f2b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 21);
label_24f2bc:
    // 0x24f2bc: 0x579  .word       0x00000579                   # INVALID     $zero, $zero, 0x579 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F2BC raw=0x00000579"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f2c0:
    // 0x24f2c0: 0x57b  dsra        $zero, $zero, 21
    ctx->pc = 0x24f2c0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 21);
label_24f2c4:
    // 0x24f2c4: 0x57c  dsll32      $zero, $zero, 21
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 21));
label_24f2c8:
    // 0x24f2c8: 0x57e  dsrl32      $zero, $zero, 21
    ctx->pc = 0x24f2c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 21));
label_24f2cc:
    // 0x24f2cc: 0x57f  dsra32      $zero, $zero, 21
    ctx->pc = 0x24f2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 21));
label_24f2d0:
    // 0x24f2d0: 0x581  .word       0x00000581                   # INVALID     $zero, $zero, 0x581 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F2D0 raw=0x00000581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f2d4:
    // 0x24f2d4: 0x582  srl         $zero, $zero, 22
    ctx->pc = 0x24f2d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_24f2d8:
    // 0x24f2d8: 0x584  .word       0x00000584                   # sllv        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f2dc:
    // 0x24f2dc: 0x585  .word       0x00000585                   # INVALID     $zero, $zero, 0x585 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F2DC raw=0x00000585"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f2e0:
    // 0x24f2e0: 0x587  .word       0x00000587                   # srav        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f2e4:
    // 0x24f2e4: 0x588  .word       0x00000588                   # jr          $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_24f2e8:
    if (ctx->pc == 0x24F2E8u) {
        ctx->pc = 0x24F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2E4u;
        // 0x24f2e8: 0x58a  .word       0x0000058A                   # movz        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F2ECu;
        goto label_24f2ec;
    }
    ctx->pc = 0x24F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2E4u;
        // 0x24f2e8: 0x58a  .word       0x0000058A                   # movz        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F2E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F2ECu;
label_24f2ec:
    // 0x24f2ec: 0x58b  .word       0x0000058B                   # movn        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2ecu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24f2f0:
    // 0x24f2f0: 0x58d  break       0, 22
    ctx->pc = 0x24f2f0u;
    runtime->handleBreak(rdram, ctx);
label_24f2f4:
    // 0x24f2f4: 0x58e  .word       0x0000058E                   # INVALID     $zero, $zero, 0x58E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f2f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F2F4 raw=0x0000058E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f2f8:
    // 0x24f2f8: 0x0  nop
    ctx->pc = 0x24f2f8u;
    // NOP
label_24f2fc:
    // 0x24f2fc: 0x0  nop
    ctx->pc = 0x24f2fcu;
    // NOP
label_24f300:
    // 0x24f300: 0x54b  .word       0x0000054B                   # movn        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f300u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24f304:
    // 0x24f304: 0x902  srl         $at, $zero, 4
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_24f308:
    // 0x24f308: 0x54e  .word       0x0000054E                   # INVALID     $zero, $zero, 0x54E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f308u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F308 raw=0x0000054E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f30c:
    // 0x24f30c: 0x54f  sync.p
    ctx->pc = 0x24f30cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24f310:
    // 0x24f310: 0x551  .word       0x00000551                   # mthi        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f310u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f314:
    // 0x24f314: 0x552  .word       0x00000552                   # mflo        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f318:
    // 0x24f318: 0x554  .word       0x00000554                   # dsllv       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f318u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24f31c:
    // 0x24f31c: 0x555  .word       0x00000555                   # INVALID     $zero, $zero, 0x555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f31cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F31C raw=0x00000555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f320:
    // 0x24f320: 0x557  .word       0x00000557                   # dsrav       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f320u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f324:
    // 0x24f324: 0x558  .word       0x00000558                   # mult        $zero, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f328:
    // 0x24f328: 0x55a  .word       0x0000055A                   # div         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f328u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f32c:
    // 0x24f32c: 0x55b  .word       0x0000055B                   # divu        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f32cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24f330:
    // 0x24f330: 0x55d  .word       0x0000055D                   # dmultu      $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F330 raw=0x0000055D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f334:
    // 0x24f334: 0x55e  .word       0x0000055E                   # ddiv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F334 raw=0x0000055E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f338:
    // 0x24f338: 0x560  .word       0x00000560                   # add         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f338u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24f33c:
    // 0x24f33c: 0x561  .word       0x00000561                   # addu        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f340:
    // 0x24f340: 0x563  .word       0x00000563                   # negu        $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f340u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f344:
    // 0x24f344: 0x564  .word       0x00000564                   # and         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f344u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24f348:
    // 0x24f348: 0x566  .word       0x00000566                   # xor         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f348u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f34c:
    // 0x24f34c: 0x567  .word       0x00000567                   # not         $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f34cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24f350:
    // 0x24f350: 0x569  .word       0x00000569                   # mtsa        $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f350u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f354:
    // 0x24f354: 0x56a  .word       0x0000056A                   # slt         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f354u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f358:
    // 0x24f358: 0x56c  .word       0x0000056C                   # dadd        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f358u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f35c:
    // 0x24f35c: 0x56d  .word       0x0000056D                   # daddu       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f35cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f360:
    // 0x24f360: 0x56f  .word       0x0000056F                   # dsubu       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f360u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24f364:
    // 0x24f364: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x24f364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f368:
    // 0x24f368: 0x572  tlt         $zero, $zero, 21
    ctx->pc = 0x24f368u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f36c:
    // 0x24f36c: 0x573  tltu        $zero, $zero, 21
    ctx->pc = 0x24f36cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x24f370u;
    return;
}

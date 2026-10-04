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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21eba8u: goto label_21eba8;
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebb0u: goto label_21ebb0;
        case 0x21ebb4u: goto label_21ebb4;
        case 0x21ebb8u: goto label_21ebb8;
        case 0x21ebbcu: goto label_21ebbc;
        case 0x21ebc0u: goto label_21ebc0;
        case 0x21ebc4u: goto label_21ebc4;
        case 0x21ebc8u: goto label_21ebc8;
        case 0x21ebccu: goto label_21ebcc;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebd4u: goto label_21ebd4;
        case 0x21ebd8u: goto label_21ebd8;
        case 0x21ebdcu: goto label_21ebdc;
        case 0x21ebe0u: goto label_21ebe0;
        case 0x21ebe4u: goto label_21ebe4;
        case 0x21ebe8u: goto label_21ebe8;
        case 0x21ebecu: goto label_21ebec;
        case 0x21ebf0u: goto label_21ebf0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ebf8u: goto label_21ebf8;
        case 0x21ebfcu: goto label_21ebfc;
        case 0x21ec00u: goto label_21ec00;
        case 0x21ec04u: goto label_21ec04;
        case 0x21ec08u: goto label_21ec08;
        case 0x21ec0cu: goto label_21ec0c;
        case 0x21ec10u: goto label_21ec10;
        case 0x21ec14u: goto label_21ec14;
        case 0x21ec18u: goto label_21ec18;
        case 0x21ec1cu: goto label_21ec1c;
        case 0x21ec20u: goto label_21ec20;
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec28u: goto label_21ec28;
        case 0x21ec2cu: goto label_21ec2c;
        case 0x21ec30u: goto label_21ec30;
        case 0x21ec34u: goto label_21ec34;
        case 0x21ec38u: goto label_21ec38;
        case 0x21ec3cu: goto label_21ec3c;
        case 0x21ec40u: goto label_21ec40;
        case 0x21ec44u: goto label_21ec44;
        case 0x21ec48u: goto label_21ec48;
        case 0x21ec4cu: goto label_21ec4c;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ec54u: goto label_21ec54;
        case 0x21ec58u: goto label_21ec58;
        case 0x21ec5cu: goto label_21ec5c;
        case 0x21ec60u: goto label_21ec60;
        case 0x21ec64u: goto label_21ec64;
        case 0x21ec68u: goto label_21ec68;
        case 0x21ec6cu: goto label_21ec6c;
        case 0x21ec70u: goto label_21ec70;
        case 0x21ec74u: goto label_21ec74;
        case 0x21ec78u: goto label_21ec78;
        case 0x21ec7cu: goto label_21ec7c;
        case 0x21ec80u: goto label_21ec80;
        case 0x21ec84u: goto label_21ec84;
        case 0x21ec88u: goto label_21ec88;
        case 0x21ec8cu: goto label_21ec8c;
        case 0x21ec90u: goto label_21ec90;
        case 0x21ec94u: goto label_21ec94;
        case 0x21ec98u: goto label_21ec98;
        case 0x21ec9cu: goto label_21ec9c;
        case 0x21eca0u: goto label_21eca0;
        case 0x21eca4u: goto label_21eca4;
        case 0x21eca8u: goto label_21eca8;
        case 0x21ecacu: goto label_21ecac;
        case 0x21ecb0u: goto label_21ecb0;
        case 0x21ecb4u: goto label_21ecb4;
        case 0x21ecb8u: goto label_21ecb8;
        case 0x21ecbcu: goto label_21ecbc;
        case 0x21ecc0u: goto label_21ecc0;
        case 0x21ecc4u: goto label_21ecc4;
        case 0x21ecc8u: goto label_21ecc8;
        case 0x21ecccu: goto label_21eccc;
        case 0x21ecd0u: goto label_21ecd0;
        case 0x21ecd4u: goto label_21ecd4;
        case 0x21ecd8u: goto label_21ecd8;
        case 0x21ecdcu: goto label_21ecdc;
        case 0x21ece0u: goto label_21ece0;
        case 0x21ece4u: goto label_21ece4;
        case 0x21ece8u: goto label_21ece8;
        case 0x21ececu: goto label_21ecec;
        case 0x21ecf0u: goto label_21ecf0;
        case 0x21ecf4u: goto label_21ecf4;
        case 0x21ecf8u: goto label_21ecf8;
        case 0x21ecfcu: goto label_21ecfc;
        case 0x21ed00u: goto label_21ed00;
        case 0x21ed04u: goto label_21ed04;
        case 0x21ed08u: goto label_21ed08;
        case 0x21ed0cu: goto label_21ed0c;
        case 0x21ed10u: goto label_21ed10;
        case 0x21ed14u: goto label_21ed14;
        case 0x21ed18u: goto label_21ed18;
        case 0x21ed1cu: goto label_21ed1c;
        case 0x21ed20u: goto label_21ed20;
        case 0x21ed24u: goto label_21ed24;
        case 0x21ed28u: goto label_21ed28;
        case 0x21ed2cu: goto label_21ed2c;
        case 0x21ed30u: goto label_21ed30;
        case 0x21ed34u: goto label_21ed34;
        case 0x21ed38u: goto label_21ed38;
        case 0x21ed3cu: goto label_21ed3c;
        case 0x21ed40u: goto label_21ed40;
        case 0x21ed44u: goto label_21ed44;
        case 0x21ed48u: goto label_21ed48;
        case 0x21ed4cu: goto label_21ed4c;
        case 0x21ed50u: goto label_21ed50;
        case 0x21ed54u: goto label_21ed54;
        case 0x21ed58u: goto label_21ed58;
        case 0x21ed5cu: goto label_21ed5c;
        case 0x21ed60u: goto label_21ed60;
        case 0x21ed64u: goto label_21ed64;
        case 0x21ed68u: goto label_21ed68;
        case 0x21ed6cu: goto label_21ed6c;
        case 0x21ed70u: goto label_21ed70;
        case 0x21ed74u: goto label_21ed74;
        case 0x21ed78u: goto label_21ed78;
        case 0x21ed7cu: goto label_21ed7c;
        case 0x21ed80u: goto label_21ed80;
        case 0x21ed84u: goto label_21ed84;
        case 0x21ed88u: goto label_21ed88;
        case 0x21ed8cu: goto label_21ed8c;
        case 0x21ed90u: goto label_21ed90;
        case 0x21ed94u: goto label_21ed94;
        case 0x21ed98u: goto label_21ed98;
        case 0x21ed9cu: goto label_21ed9c;
        case 0x21eda0u: goto label_21eda0;
        case 0x21eda4u: goto label_21eda4;
        case 0x21eda8u: goto label_21eda8;
        case 0x21edacu: goto label_21edac;
        case 0x21edb0u: goto label_21edb0;
        case 0x21edb4u: goto label_21edb4;
        case 0x21edb8u: goto label_21edb8;
        case 0x21edbcu: goto label_21edbc;
        case 0x21edc0u: goto label_21edc0;
        case 0x21edc4u: goto label_21edc4;
        case 0x21edc8u: goto label_21edc8;
        case 0x21edccu: goto label_21edcc;
        case 0x21edd0u: goto label_21edd0;
        case 0x21edd4u: goto label_21edd4;
        case 0x21edd8u: goto label_21edd8;
        case 0x21eddcu: goto label_21eddc;
        case 0x21ede0u: goto label_21ede0;
        case 0x21ede4u: goto label_21ede4;
        case 0x21ede8u: goto label_21ede8;
        case 0x21edecu: goto label_21edec;
        case 0x21edf0u: goto label_21edf0;
        case 0x21edf4u: goto label_21edf4;
        case 0x21edf8u: goto label_21edf8;
        case 0x21edfcu: goto label_21edfc;
        case 0x21ee00u: goto label_21ee00;
        case 0x21ee04u: goto label_21ee04;
        case 0x21ee08u: goto label_21ee08;
        case 0x21ee0cu: goto label_21ee0c;
        case 0x21ee10u: goto label_21ee10;
        case 0x21ee14u: goto label_21ee14;
        case 0x21ee18u: goto label_21ee18;
        case 0x21ee1cu: goto label_21ee1c;
        case 0x21ee20u: goto label_21ee20;
        case 0x21ee24u: goto label_21ee24;
        case 0x21ee28u: goto label_21ee28;
        case 0x21ee2cu: goto label_21ee2c;
        case 0x21ee30u: goto label_21ee30;
        case 0x21ee34u: goto label_21ee34;
        case 0x21ee38u: goto label_21ee38;
        case 0x21ee3cu: goto label_21ee3c;
        case 0x21ee40u: goto label_21ee40;
        case 0x21ee44u: goto label_21ee44;
        case 0x21ee48u: goto label_21ee48;
        case 0x21ee4cu: goto label_21ee4c;
        case 0x21ee50u: goto label_21ee50;
        case 0x21ee54u: goto label_21ee54;
        case 0x21ee58u: goto label_21ee58;
        case 0x21ee5cu: goto label_21ee5c;
        case 0x21ee60u: goto label_21ee60;
        case 0x21ee64u: goto label_21ee64;
        case 0x21ee68u: goto label_21ee68;
        case 0x21ee6cu: goto label_21ee6c;
        case 0x21ee70u: goto label_21ee70;
        case 0x21ee74u: goto label_21ee74;
        case 0x21ee78u: goto label_21ee78;
        case 0x21ee7cu: goto label_21ee7c;
        case 0x21ee80u: goto label_21ee80;
        case 0x21ee84u: goto label_21ee84;
        case 0x21ee88u: goto label_21ee88;
        case 0x21ee8cu: goto label_21ee8c;
        case 0x21ee90u: goto label_21ee90;
        case 0x21ee94u: goto label_21ee94;
        case 0x21ee98u: goto label_21ee98;
        case 0x21ee9cu: goto label_21ee9c;
        case 0x21eea0u: goto label_21eea0;
        case 0x21eea4u: goto label_21eea4;
        case 0x21eea8u: goto label_21eea8;
        case 0x21eeacu: goto label_21eeac;
        case 0x21eeb0u: goto label_21eeb0;
        case 0x21eeb4u: goto label_21eeb4;
        case 0x21eeb8u: goto label_21eeb8;
        case 0x21eebcu: goto label_21eebc;
        case 0x21eec0u: goto label_21eec0;
        case 0x21eec4u: goto label_21eec4;
        case 0x21eec8u: goto label_21eec8;
        case 0x21eeccu: goto label_21eecc;
        case 0x21eed0u: goto label_21eed0;
        case 0x21eed4u: goto label_21eed4;
        case 0x21eed8u: goto label_21eed8;
        case 0x21eedcu: goto label_21eedc;
        case 0x21eee0u: goto label_21eee0;
        case 0x21eee4u: goto label_21eee4;
        case 0x21eee8u: goto label_21eee8;
        case 0x21eeecu: goto label_21eeec;
        case 0x21eef0u: goto label_21eef0;
        case 0x21eef4u: goto label_21eef4;
        case 0x21eef8u: goto label_21eef8;
        case 0x21eefcu: goto label_21eefc;
        case 0x21ef00u: goto label_21ef00;
        case 0x21ef04u: goto label_21ef04;
        case 0x21ef08u: goto label_21ef08;
        case 0x21ef0cu: goto label_21ef0c;
        case 0x21ef10u: goto label_21ef10;
        case 0x21ef14u: goto label_21ef14;
        case 0x21ef18u: goto label_21ef18;
        case 0x21ef1cu: goto label_21ef1c;
        case 0x21ef20u: goto label_21ef20;
        case 0x21ef24u: goto label_21ef24;
        case 0x21ef28u: goto label_21ef28;
        case 0x21ef2cu: goto label_21ef2c;
        case 0x21ef30u: goto label_21ef30;
        case 0x21ef34u: goto label_21ef34;
        case 0x21ef38u: goto label_21ef38;
        case 0x21ef3cu: goto label_21ef3c;
        case 0x21ef40u: goto label_21ef40;
        case 0x21ef44u: goto label_21ef44;
        case 0x21ef48u: goto label_21ef48;
        case 0x21ef4cu: goto label_21ef4c;
        case 0x21ef50u: goto label_21ef50;
        case 0x21ef54u: goto label_21ef54;
        case 0x21ef58u: goto label_21ef58;
        case 0x21ef5cu: goto label_21ef5c;
        case 0x21ef60u: goto label_21ef60;
        case 0x21ef64u: goto label_21ef64;
        case 0x21ef68u: goto label_21ef68;
        case 0x21ef6cu: goto label_21ef6c;
        case 0x21ef70u: goto label_21ef70;
        case 0x21ef74u: goto label_21ef74;
        case 0x21ef78u: goto label_21ef78;
        case 0x21ef7cu: goto label_21ef7c;
        case 0x21ef80u: goto label_21ef80;
        case 0x21ef84u: goto label_21ef84;
        case 0x21ef88u: goto label_21ef88;
        case 0x21ef8cu: goto label_21ef8c;
        case 0x21ef90u: goto label_21ef90;
        case 0x21ef94u: goto label_21ef94;
        case 0x21ef98u: goto label_21ef98;
        case 0x21ef9cu: goto label_21ef9c;
        case 0x21efa0u: goto label_21efa0;
        case 0x21efa4u: goto label_21efa4;
        case 0x21efa8u: goto label_21efa8;
        case 0x21efacu: goto label_21efac;
        case 0x21efb0u: goto label_21efb0;
        case 0x21efb4u: goto label_21efb4;
        case 0x21efb8u: goto label_21efb8;
        case 0x21efbcu: goto label_21efbc;
        case 0x21efc0u: goto label_21efc0;
        case 0x21efc4u: goto label_21efc4;
        case 0x21efc8u: goto label_21efc8;
        case 0x21efccu: goto label_21efcc;
        case 0x21efd0u: goto label_21efd0;
        case 0x21efd4u: goto label_21efd4;
        case 0x21efd8u: goto label_21efd8;
        case 0x21efdcu: goto label_21efdc;
        case 0x21efe0u: goto label_21efe0;
        case 0x21efe4u: goto label_21efe4;
        case 0x21efe8u: goto label_21efe8;
        case 0x21efecu: goto label_21efec;
        case 0x21eff0u: goto label_21eff0;
        case 0x21eff4u: goto label_21eff4;
        case 0x21eff8u: goto label_21eff8;
        case 0x21effcu: goto label_21effc;
        case 0x21f000u: goto label_21f000;
        case 0x21f004u: goto label_21f004;
        case 0x21f008u: goto label_21f008;
        case 0x21f00cu: goto label_21f00c;
        case 0x21f010u: goto label_21f010;
        case 0x21f014u: goto label_21f014;
        case 0x21f018u: goto label_21f018;
        case 0x21f01cu: goto label_21f01c;
        case 0x21f020u: goto label_21f020;
        case 0x21f024u: goto label_21f024;
        case 0x21f028u: goto label_21f028;
        case 0x21f02cu: goto label_21f02c;
        case 0x21f030u: goto label_21f030;
        case 0x21f034u: goto label_21f034;
        case 0x21f038u: goto label_21f038;
        case 0x21f03cu: goto label_21f03c;
        case 0x21f040u: goto label_21f040;
        case 0x21f044u: goto label_21f044;
        case 0x21f048u: goto label_21f048;
        case 0x21f04cu: goto label_21f04c;
        case 0x21f050u: goto label_21f050;
        case 0x21f054u: goto label_21f054;
        case 0x21f058u: goto label_21f058;
        case 0x21f05cu: goto label_21f05c;
        case 0x21f060u: goto label_21f060;
        case 0x21f064u: goto label_21f064;
        case 0x21f068u: goto label_21f068;
        case 0x21f06cu: goto label_21f06c;
        case 0x21f070u: goto label_21f070;
        case 0x21f074u: goto label_21f074;
        case 0x21f078u: goto label_21f078;
        case 0x21f07cu: goto label_21f07c;
        case 0x21f080u: goto label_21f080;
        case 0x21f084u: goto label_21f084;
        case 0x21f088u: goto label_21f088;
        case 0x21f08cu: goto label_21f08c;
        case 0x21f090u: goto label_21f090;
        case 0x21f094u: goto label_21f094;
        case 0x21f098u: goto label_21f098;
        case 0x21f09cu: goto label_21f09c;
        case 0x21f0a0u: goto label_21f0a0;
        case 0x21f0a4u: goto label_21f0a4;
        case 0x21f0a8u: goto label_21f0a8;
        case 0x21f0acu: goto label_21f0ac;
        case 0x21f0b0u: goto label_21f0b0;
        case 0x21f0b4u: goto label_21f0b4;
        case 0x21f0b8u: goto label_21f0b8;
        case 0x21f0bcu: goto label_21f0bc;
        case 0x21f0c0u: goto label_21f0c0;
        case 0x21f0c4u: goto label_21f0c4;
        case 0x21f0c8u: goto label_21f0c8;
        case 0x21f0ccu: goto label_21f0cc;
        case 0x21f0d0u: goto label_21f0d0;
        case 0x21f0d4u: goto label_21f0d4;
        case 0x21f0d8u: goto label_21f0d8;
        case 0x21f0dcu: goto label_21f0dc;
        case 0x21f0e0u: goto label_21f0e0;
        case 0x21f0e4u: goto label_21f0e4;
        case 0x21f0e8u: goto label_21f0e8;
        case 0x21f0ecu: goto label_21f0ec;
        case 0x21f0f0u: goto label_21f0f0;
        case 0x21f0f4u: goto label_21f0f4;
        case 0x21f0f8u: goto label_21f0f8;
        case 0x21f0fcu: goto label_21f0fc;
        case 0x21f100u: goto label_21f100;
        case 0x21f104u: goto label_21f104;
        case 0x21f108u: goto label_21f108;
        case 0x21f10cu: goto label_21f10c;
        case 0x21f110u: goto label_21f110;
        case 0x21f114u: goto label_21f114;
        case 0x21f118u: goto label_21f118;
        case 0x21f11cu: goto label_21f11c;
        case 0x21f120u: goto label_21f120;
        case 0x21f124u: goto label_21f124;
        case 0x21f128u: goto label_21f128;
        case 0x21f12cu: goto label_21f12c;
        case 0x21f130u: goto label_21f130;
        case 0x21f134u: goto label_21f134;
        case 0x21f138u: goto label_21f138;
        case 0x21f13cu: goto label_21f13c;
        case 0x21f140u: goto label_21f140;
        case 0x21f144u: goto label_21f144;
        case 0x21f148u: goto label_21f148;
        case 0x21f14cu: goto label_21f14c;
        case 0x21f150u: goto label_21f150;
        case 0x21f154u: goto label_21f154;
        case 0x21f158u: goto label_21f158;
        case 0x21f15cu: goto label_21f15c;
        case 0x21f160u: goto label_21f160;
        case 0x21f164u: goto label_21f164;
        case 0x21f168u: goto label_21f168;
        case 0x21f16cu: goto label_21f16c;
        case 0x21f170u: goto label_21f170;
        case 0x21f174u: goto label_21f174;
        case 0x21f178u: goto label_21f178;
        case 0x21f17cu: goto label_21f17c;
        case 0x21f180u: goto label_21f180;
        case 0x21f184u: goto label_21f184;
        case 0x21f188u: goto label_21f188;
        case 0x21f18cu: goto label_21f18c;
        case 0x21f190u: goto label_21f190;
        case 0x21f194u: goto label_21f194;
        case 0x21f198u: goto label_21f198;
        case 0x21f19cu: goto label_21f19c;
        case 0x21f1a0u: goto label_21f1a0;
        case 0x21f1a4u: goto label_21f1a4;
        case 0x21f1a8u: goto label_21f1a8;
        case 0x21f1acu: goto label_21f1ac;
        case 0x21f1b0u: goto label_21f1b0;
        case 0x21f1b4u: goto label_21f1b4;
        case 0x21f1b8u: goto label_21f1b8;
        case 0x21f1bcu: goto label_21f1bc;
        case 0x21f1c0u: goto label_21f1c0;
        case 0x21f1c4u: goto label_21f1c4;
        case 0x21f1c8u: goto label_21f1c8;
        case 0x21f1ccu: goto label_21f1cc;
        case 0x21f1d0u: goto label_21f1d0;
        case 0x21f1d4u: goto label_21f1d4;
        case 0x21f1d8u: goto label_21f1d8;
        case 0x21f1dcu: goto label_21f1dc;
        case 0x21f1e0u: goto label_21f1e0;
        case 0x21f1e4u: goto label_21f1e4;
        case 0x21f1e8u: goto label_21f1e8;
        case 0x21f1ecu: goto label_21f1ec;
        case 0x21f1f0u: goto label_21f1f0;
        case 0x21f1f4u: goto label_21f1f4;
        case 0x21f1f8u: goto label_21f1f8;
        case 0x21f1fcu: goto label_21f1fc;
        case 0x21f200u: goto label_21f200;
        case 0x21f204u: goto label_21f204;
        case 0x21f208u: goto label_21f208;
        case 0x21f20cu: goto label_21f20c;
        case 0x21f210u: goto label_21f210;
        case 0x21f214u: goto label_21f214;
        case 0x21f218u: goto label_21f218;
        case 0x21f21cu: goto label_21f21c;
        case 0x21f220u: goto label_21f220;
        case 0x21f224u: goto label_21f224;
        case 0x21f228u: goto label_21f228;
        case 0x21f22cu: goto label_21f22c;
        case 0x21f230u: goto label_21f230;
        case 0x21f234u: goto label_21f234;
        case 0x21f238u: goto label_21f238;
        case 0x21f23cu: goto label_21f23c;
        case 0x21f240u: goto label_21f240;
        case 0x21f244u: goto label_21f244;
        case 0x21f248u: goto label_21f248;
        case 0x21f24cu: goto label_21f24c;
        case 0x21f250u: goto label_21f250;
        case 0x21f254u: goto label_21f254;
        case 0x21f258u: goto label_21f258;
        case 0x21f25cu: goto label_21f25c;
        case 0x21f260u: goto label_21f260;
        case 0x21f264u: goto label_21f264;
        case 0x21f268u: goto label_21f268;
        case 0x21f26cu: goto label_21f26c;
        case 0x21f270u: goto label_21f270;
        case 0x21f274u: goto label_21f274;
        case 0x21f278u: goto label_21f278;
        case 0x21f27cu: goto label_21f27c;
        case 0x21f280u: goto label_21f280;
        case 0x21f284u: goto label_21f284;
        case 0x21f288u: goto label_21f288;
        case 0x21f28cu: goto label_21f28c;
        case 0x21f290u: goto label_21f290;
        case 0x21f294u: goto label_21f294;
        case 0x21f298u: goto label_21f298;
        case 0x21f29cu: goto label_21f29c;
        case 0x21f2a0u: goto label_21f2a0;
        case 0x21f2a4u: goto label_21f2a4;
        case 0x21f2a8u: goto label_21f2a8;
        case 0x21f2acu: goto label_21f2ac;
        case 0x21f2b0u: goto label_21f2b0;
        case 0x21f2b4u: goto label_21f2b4;
        case 0x21f2b8u: goto label_21f2b8;
        case 0x21f2bcu: goto label_21f2bc;
        case 0x21f2c0u: goto label_21f2c0;
        case 0x21f2c4u: goto label_21f2c4;
        case 0x21f2c8u: goto label_21f2c8;
        case 0x21f2ccu: goto label_21f2cc;
        case 0x21f2d0u: goto label_21f2d0;
        case 0x21f2d4u: goto label_21f2d4;
        case 0x21f2d8u: goto label_21f2d8;
        case 0x21f2dcu: goto label_21f2dc;
        case 0x21f2e0u: goto label_21f2e0;
        case 0x21f2e4u: goto label_21f2e4;
        case 0x21f2e8u: goto label_21f2e8;
        case 0x21f2ecu: goto label_21f2ec;
        case 0x21f2f0u: goto label_21f2f0;
        case 0x21f2f4u: goto label_21f2f4;
        case 0x21f2f8u: goto label_21f2f8;
        case 0x21f2fcu: goto label_21f2fc;
        case 0x21f300u: goto label_21f300;
        case 0x21f304u: goto label_21f304;
        case 0x21f308u: goto label_21f308;
        case 0x21f30cu: goto label_21f30c;
        case 0x21f310u: goto label_21f310;
        case 0x21f314u: goto label_21f314;
        case 0x21f318u: goto label_21f318;
        case 0x21f31cu: goto label_21f31c;
        case 0x21f320u: goto label_21f320;
        case 0x21f324u: goto label_21f324;
        case 0x21f328u: goto label_21f328;
        case 0x21f32cu: goto label_21f32c;
        case 0x21f330u: goto label_21f330;
        case 0x21f334u: goto label_21f334;
        case 0x21f338u: goto label_21f338;
        case 0x21f33cu: goto label_21f33c;
        case 0x21f340u: goto label_21f340;
        case 0x21f344u: goto label_21f344;
        case 0x21f348u: goto label_21f348;
        case 0x21f34cu: goto label_21f34c;
        case 0x21f350u: goto label_21f350;
        case 0x21f354u: goto label_21f354;
        case 0x21f358u: goto label_21f358;
        case 0x21f35cu: goto label_21f35c;
        case 0x21f360u: goto label_21f360;
        case 0x21f364u: goto label_21f364;
        case 0x21f368u: goto label_21f368;
        case 0x21f36cu: goto label_21f36c;
        case 0x21f370u: goto label_21f370;
        case 0x21f374u: goto label_21f374;
        default: return;
    }

label_21eba8:
    // 0x21eba8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21eba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21ebac:
    // 0x21ebac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21ebb0:
    // 0x21ebb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ebb4:
    // 0x21ebb4: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21ebb8:
    // 0x21ebb8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21ebbc:
    // 0x21ebbc: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21ebbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21ebc0:
    // 0x21ebc0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21ebc4:
    if (ctx->pc == 0x21EBC4u) {
        ctx->pc = 0x21EBC8u;
        goto label_21ebc8;
    }
    ctx->pc = 0x21EBC0u;
    {
        const bool branch_taken_0x21ebc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ebc0) {
            ctx->pc = 0x21EBD8u;
            goto label_21ebd8;
        }
    }
    ctx->pc = 0x21EBC8u;
label_21ebc8:
    // 0x21ebc8: 0x285001b  divu        $zero, $s4, $a1
    ctx->pc = 0x21ebc8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21ebcc:
    // 0x21ebcc: 0x0  nop
    ctx->pc = 0x21ebccu;
    // NOP
label_21ebd0:
    // 0x21ebd0: 0x0  nop
    ctx->pc = 0x21ebd0u;
    // NOP
label_21ebd4:
    // 0x21ebd4: 0xa010  mfhi        $s4
    ctx->pc = 0x21ebd4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21ebd8:
    // 0x21ebd8: 0xde150000  ld          $s5, 0x0($s0)
    ctx->pc = 0x21ebd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ebdc:
    // 0x21ebdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ebe0:
    // 0x21ebe0: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21ebe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21ebe4:
    // 0x21ebe4: 0xc06d9fe  jal         func_1B67F8
label_21ebe8:
    if (ctx->pc == 0x21EBE8u) {
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBE4u;
        // 0x21ebe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBECu;
        goto label_21ebec;
    }
    ctx->pc = 0x21EBE4u;
    SET_GPR_U32(ctx, 31, 0x21EBECu);
    ctx->pc = 0x21EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBE4u;
    // 0x21ebe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21EBECu;
label_21ebec:
    // 0x21ebec: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x21ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21ebf0:
    // 0x21ebf0: 0x2951816  dsrlv       $v1, $s5, $s4
    ctx->pc = 0x21ebf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21ebf4:
    // 0x21ebf4: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x21ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21ebf8:
    // 0x21ebf8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ebf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ebfc:
    // 0x21ebfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ebfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ec00:
    // 0x21ec00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21ec04:
    // 0x21ec04: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21ec08:
    // 0x21ec08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ec0c:
    // 0x21ec0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ec10:
    // 0x21ec10: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21ec14:
    // 0x21ec14: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x21ec14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21ec18:
    // 0x21ec18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ec1c:
    // 0x21ec1c: 0x0  nop
    ctx->pc = 0x21ec1cu;
    // NOP
label_21ec20:
    // 0x21ec20: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x21ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21ec24:
    // 0x21ec24: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21ec28:
    // 0x21ec28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21ec28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_21ec2c:
    // 0x21ec2c: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x21ec2cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_21ec30:
    // 0x21ec30: 0x0  nop
    ctx->pc = 0x21ec30u;
    // NOP
label_21ec34:
    // 0x21ec34: 0x2810  mfhi        $a1
    ctx->pc = 0x21ec34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21ec38:
    // 0x21ec38: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x21ec38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_21ec3c:
    // 0x21ec3c: 0x0  nop
    ctx->pc = 0x21ec3cu;
    // NOP
label_21ec40:
    // 0x21ec40: 0x0  nop
    ctx->pc = 0x21ec40u;
    // NOP
label_21ec44:
    // 0x21ec44: 0x3010  mfhi        $a2
    ctx->pc = 0x21ec44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21ec48:
    // 0x21ec48: 0xc087588  jal         func_21D620
label_21ec4c:
    if (ctx->pc == 0x21EC4Cu) {
        ctx->pc = 0x21EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC48u;
        // 0x21ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC50u;
        goto label_21ec50;
    }
    ctx->pc = 0x21EC48u;
    SET_GPR_U32(ctx, 31, 0x21EC50u);
    ctx->pc = 0x21EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC48u;
    // 0x21ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21EC50u;
label_21ec50:
    // 0x21ec50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21ec54:
    // 0x21ec54: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_21ec58:
    // 0x21ec58: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_21ec5c:
    if (ctx->pc == 0x21EC5Cu) {
        ctx->pc = 0x21EC60u;
        goto label_21ec60;
    }
    ctx->pc = 0x21EC58u;
    {
        const bool branch_taken_0x21ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ec58) {
            ctx->pc = 0x21EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ec20;
        }
    }
    ctx->pc = 0x21EC60u;
label_21ec60:
    // 0x21ec60: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21ec64:
    // 0x21ec64: 0x9ee30000  lwu         $v1, 0x0($s7)
    ctx->pc = 0x21ec64u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21ec68:
    // 0x21ec68: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ec68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ec6c:
    // 0x21ec6c: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
label_21ec70:
    // 0x21ec70: 0x4233e  dsrl32      $a0, $a0, 12
    ctx->pc = 0x21ec70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 12));
label_21ec74:
    // 0x21ec74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ec74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ec78:
    // 0x21ec78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x21ec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_21ec7c:
    // 0x21ec7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_21ec80:
    // 0x21ec80: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ec84:
    // 0x21ec84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21ec88:
    // 0x21ec88: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x21ec88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ec8c:
    // 0x21ec8c: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21ec8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21ec90:
    // 0x21ec90: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21ec94:
    if (ctx->pc == 0x21EC94u) {
        ctx->pc = 0x21EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC90u;
        // 0x21ec94: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC98u;
        goto label_21ec98;
    }
    ctx->pc = 0x21EC90u;
    {
        const bool branch_taken_0x21ec90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC90u;
        // 0x21ec94: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec90) {
            ctx->pc = 0x21ECA8u;
            goto label_21eca8;
        }
    }
    ctx->pc = 0x21EC98u;
label_21ec98:
    // 0x21ec98: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x21ec98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21ec9c:
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
label_21eca0:
    // 0x21eca0: 0x0  nop
    ctx->pc = 0x21eca0u;
    // NOP
label_21eca4:
    // 0x21eca4: 0xa010  mfhi        $s4
    ctx->pc = 0x21eca4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21eca8:
    // 0x21eca8: 0xde150000  ld          $s5, 0x0($s0)
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ecac:
    // 0x21ecac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ecb0:
    // 0x21ecb0: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21ecb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21ecb4:
    // 0x21ecb4: 0xc06d9fe  jal         func_1B67F8
label_21ecb8:
    if (ctx->pc == 0x21ECB8u) {
        ctx->pc = 0x21ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB4u;
        // 0x21ecb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECBCu;
        goto label_21ecbc;
    }
    ctx->pc = 0x21ECB4u;
    SET_GPR_U32(ctx, 31, 0x21ECBCu);
    ctx->pc = 0x21ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECB4u;
    // 0x21ecb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21ECBCu;
label_21ecbc:
    // 0x21ecbc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21ecc0:
    // 0x21ecc0: 0x2952016  dsrlv       $a0, $s5, $s4
    ctx->pc = 0x21ecc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21ecc4:
    // 0x21ecc4: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x21ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21ecc8:
    // 0x21ecc8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x21ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_21eccc:
    // 0x21eccc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21ecccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21ecd0:
    // 0x21ecd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21ecd4:
    // 0x21ecd4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x21ecd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_21ecd8:
    // 0x21ecd8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x21ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21ecdc:
    // 0x21ecdc: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x21ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_21ece0:
    // 0x21ece0: 0x3353c  dsll32      $a2, $v1, 20
    ctx->pc = 0x21ece0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 20));
label_21ece4:
    // 0x21ece4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21ece8:
    // 0x21ece8: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x21ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21ecec:
    // 0x21ecec: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x21ececu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_21ecf0:
    // 0x21ecf0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_21ecf4:
    // 0x21ecf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21ecf8:
    // 0x21ecf8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21ecfc:
    // 0x21ecfc: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x21ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_21ed00:
    // 0x21ed00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21ed04:
    // 0x21ed04: 0x9c470000  lwu         $a3, 0x0($v0)
    ctx->pc = 0x21ed04u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ed08:
    // 0x21ed08: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21ed0c:
    // 0x21ed0c: 0x21d3c  dsll32      $v1, $v0, 20
    ctx->pc = 0x21ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 20));
label_21ed10:
    // 0x21ed10: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ed10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ed14:
    // 0x21ed14: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x21ed14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21ed18:
    // 0x21ed18: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ed1c:
    // 0x21ed1c: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x21ed1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21ed20:
    // 0x21ed20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x21ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_21ed24:
    // 0x21ed24: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21ed28:
    // 0x21ed28: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ed28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ed2c:
    // 0x21ed2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ed30:
    // 0x21ed30: 0xc087484  jal         func_21D210
label_21ed34:
    if (ctx->pc == 0x21ED34u) {
        ctx->pc = 0x21ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED30u;
        // 0x21ed34: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED38u;
        goto label_21ed38;
    }
    ctx->pc = 0x21ED30u;
    SET_GPR_U32(ctx, 31, 0x21ED38u);
    ctx->pc = 0x21ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED30u;
    // 0x21ed34: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D210u;
    { ctx->pc = 0x21d210; return; }
    ctx->pc = 0x21ED38u;
label_21ed38:
    // 0x21ed38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21ed3c:
    // 0x21ed3c: 0xc08782c  jal         func_21E0B0
label_21ed40:
    if (ctx->pc == 0x21ED40u) {
        ctx->pc = 0x21ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED3Cu;
        // 0x21ed40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED44u;
        goto label_21ed44;
    }
    ctx->pc = 0x21ED3Cu;
    SET_GPR_U32(ctx, 31, 0x21ED44u);
    ctx->pc = 0x21ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED3Cu;
    // 0x21ed40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0B0u;
    { ctx->pc = 0x21e0b0; return; }
    ctx->pc = 0x21ED44u;
label_21ed44:
    // 0x21ed44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ed48:
    // 0x21ed48: 0xc08730c  jal         func_21CC30
label_21ed4c:
    if (ctx->pc == 0x21ED4Cu) {
        ctx->pc = 0x21ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED48u;
        // 0x21ed4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED50u;
        goto label_21ed50;
    }
    ctx->pc = 0x21ED48u;
    SET_GPR_U32(ctx, 31, 0x21ED50u);
    ctx->pc = 0x21ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED48u;
    // 0x21ed4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CC30u;
    { ctx->pc = 0x21cc30; return; }
    ctx->pc = 0x21ED50u;
label_21ed50:
    // 0x21ed50: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_21ed54:
    if (ctx->pc == 0x21ED54u) {
        ctx->pc = 0x21ED58u;
        goto label_21ed58;
    }
    ctx->pc = 0x21ED50u;
    {
        const bool branch_taken_0x21ed50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21ed50) {
            ctx->pc = 0x21ED5Cu;
            goto label_21ed5c;
        }
    }
    ctx->pc = 0x21ED58u;
label_21ed58:
    // 0x21ed58: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x21ed58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_21ed5c:
    // 0x21ed5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21ed5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ed60:
    // 0x21ed60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21ed60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21ed64:
    // 0x21ed64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21ed64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21ed68:
    // 0x21ed68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ed68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21ed6c:
    // 0x21ed6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ed6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21ed70:
    // 0x21ed70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ed70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21ed74:
    // 0x21ed74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ed74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21ed78:
    // 0x21ed78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ed78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ed7c:
    // 0x21ed7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ed7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ed80:
    // 0x21ed80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ed80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ed84:
    // 0x21ed84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21ed88:
    // 0x21ed88: 0x3e00008  jr          $ra
label_21ed8c:
    if (ctx->pc == 0x21ED8Cu) {
        ctx->pc = 0x21ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED88u;
        // 0x21ed8c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED90u;
        goto label_21ed90;
    }
    ctx->pc = 0x21ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED88u;
        // 0x21ed8c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ED90u;
label_21ed90:
    // 0x21ed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21ed94:
    // 0x21ed94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21ed98:
    // 0x21ed98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21ed9c:
    // 0x21ed9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21eda0:
    // 0x21eda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21eda4:
    // 0x21eda4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21eda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21eda8:
    // 0x21eda8: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x21eda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_21edac:
    // 0x21edac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_21edb0:
    if (ctx->pc == 0x21EDB0u) {
        ctx->pc = 0x21EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDACu;
        // 0x21edb0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDB4u;
        goto label_21edb4;
    }
    ctx->pc = 0x21EDACu;
    {
        const bool branch_taken_0x21edac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDACu;
        // 0x21edb0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edac) {
            ctx->pc = 0x21EDC0u;
            goto label_21edc0;
        }
    }
    ctx->pc = 0x21EDB4u;
label_21edb4:
    // 0x21edb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x21edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21edb8:
    // 0x21edb8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_21edbc:
    if (ctx->pc == 0x21EDBCu) {
        ctx->pc = 0x21EDC0u;
        goto label_21edc0;
    }
    ctx->pc = 0x21EDB8u;
    {
        const bool branch_taken_0x21edb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21edb8) {
            ctx->pc = 0x21EDD4u;
            goto label_21edd4;
        }
    }
    ctx->pc = 0x21EDC0u;
label_21edc0:
    // 0x21edc0: 0x9025490f  lbu         $a1, 0x490F($at)
    ctx->pc = 0x21edc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
label_21edc4:
    // 0x21edc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21edc8:
    // 0x21edc8: 0x90264910  lbu         $a2, 0x4910($at)
    ctx->pc = 0x21edc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21edcc:
    // 0x21edcc: 0xc088128  jal         func_2204A0
label_21edd0:
    if (ctx->pc == 0x21EDD0u) {
        ctx->pc = 0x21EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDCCu;
        // 0x21edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDD4u;
        goto label_21edd4;
    }
    ctx->pc = 0x21EDCCu;
    SET_GPR_U32(ctx, 31, 0x21EDD4u);
    ctx->pc = 0x21EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDCCu;
    // 0x21edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2204A0u;
    { ctx->pc = 0x2204a0; return; }
    ctx->pc = 0x21EDD4u;
label_21edd4:
    // 0x21edd4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21edd8:
    // 0x21edd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21eddc:
    // 0x21eddc: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_21ede0:
    // 0x21ede0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_21ede4:
    if (ctx->pc == 0x21EDE4u) {
        ctx->pc = 0x21EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE0u;
        // 0x21ede4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDE8u;
        goto label_21ede8;
    }
    ctx->pc = 0x21EDE0u;
    {
        const bool branch_taken_0x21ede0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE0u;
        // 0x21ede4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede0) {
            ctx->pc = 0x21EDF8u;
            goto label_21edf8;
        }
    }
    ctx->pc = 0x21EDE8u;
label_21ede8:
    // 0x21ede8: 0xc087e84  jal         func_21FA10
label_21edec:
    if (ctx->pc == 0x21EDECu) {
        ctx->pc = 0x21EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE8u;
        // 0x21edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDF0u;
        goto label_21edf0;
    }
    ctx->pc = 0x21EDE8u;
    SET_GPR_U32(ctx, 31, 0x21EDF0u);
    ctx->pc = 0x21EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDE8u;
    // 0x21edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    { ctx->pc = 0x21fa10; return; }
    ctx->pc = 0x21EDF0u;
label_21edf0:
    // 0x21edf0: 0x1000000d  b           . + 4 + (0xD << 2)
label_21edf4:
    if (ctx->pc == 0x21EDF4u) {
        ctx->pc = 0x21EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF0u;
        // 0x21edf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDF8u;
        goto label_21edf8;
    }
    ctx->pc = 0x21EDF0u;
    {
        const bool branch_taken_0x21edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF0u;
        // 0x21edf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf0) {
            ctx->pc = 0x21EE28u;
            goto label_21ee28;
        }
    }
    ctx->pc = 0x21EDF8u;
label_21edf8:
    // 0x21edf8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_21edfc:
    if (ctx->pc == 0x21EDFCu) {
        ctx->pc = 0x21EE00u;
        goto label_21ee00;
    }
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EE10u;
            goto label_21ee10;
        }
    }
    ctx->pc = 0x21EE00u;
label_21ee00:
    // 0x21ee00: 0xc087be8  jal         func_21EFA0
label_21ee04:
    if (ctx->pc == 0x21EE04u) {
        ctx->pc = 0x21EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE00u;
        // 0x21ee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE08u;
        goto label_21ee08;
    }
    ctx->pc = 0x21EE00u;
    SET_GPR_U32(ctx, 31, 0x21EE08u);
    ctx->pc = 0x21EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE00u;
    // 0x21ee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFA0u;
    goto label_21efa0;
    ctx->pc = 0x21EE08u;
label_21ee08:
    // 0x21ee08: 0x10000006  b           . + 4 + (0x6 << 2)
label_21ee0c:
    if (ctx->pc == 0x21EE0Cu) {
        ctx->pc = 0x21EE10u;
        goto label_21ee10;
    }
    ctx->pc = 0x21EE08u;
    {
        const bool branch_taken_0x21ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee08) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE10u;
label_21ee10:
    // 0x21ee10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21ee14:
    // 0x21ee14: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_21ee18:
    if (ctx->pc == 0x21EE18u) {
        ctx->pc = 0x21EE1Cu;
        goto label_21ee1c;
    }
    ctx->pc = 0x21EE14u;
    {
        const bool branch_taken_0x21ee14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ee14) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE1Cu;
label_21ee1c:
    // 0x21ee1c: 0xc087b90  jal         func_21EE40
label_21ee20:
    if (ctx->pc == 0x21EE20u) {
        ctx->pc = 0x21EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE1Cu;
        // 0x21ee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE24u;
        goto label_21ee24;
    }
    ctx->pc = 0x21EE1Cu;
    SET_GPR_U32(ctx, 31, 0x21EE24u);
    ctx->pc = 0x21EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE1Cu;
    // 0x21ee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE40u;
    goto label_21ee40;
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21ee28:
    // 0x21ee28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21ee2c:
    // 0x21ee2c: 0x3e00008  jr          $ra
label_21ee30:
    if (ctx->pc == 0x21EE30u) {
        ctx->pc = 0x21EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE2Cu;
        // 0x21ee30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE34u;
        goto label_21ee34;
    }
    ctx->pc = 0x21EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE2Cu;
        // 0x21ee30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EE34u;
label_21ee34:
    // 0x21ee34: 0x0  nop
    ctx->pc = 0x21ee34u;
    // NOP
label_21ee38:
    // 0x21ee38: 0x0  nop
    ctx->pc = 0x21ee38u;
    // NOP
label_21ee3c:
    // 0x21ee3c: 0x0  nop
    ctx->pc = 0x21ee3cu;
    // NOP
label_21ee40:
    // 0x21ee40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21ee44:
    // 0x21ee44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21ee44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21ee48:
    // 0x21ee48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21ee4c:
    // 0x21ee4c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x21ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_21ee50:
    // 0x21ee50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21ee54:
    // 0x21ee54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21ee58:
    // 0x21ee58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21ee58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ee5c:
    // 0x21ee5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21ee60:
    // 0x21ee60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21ee64:
    // 0x21ee64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ee64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ee68:
    // 0x21ee68: 0x84244970  lh          $a0, 0x4970($at)
    ctx->pc = 0x21ee68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 18800)));
label_21ee6c:
    // 0x21ee6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_21ee70:
    // 0x21ee70: 0x12630011  beq         $s3, $v1, . + 4 + (0x11 << 2)
label_21ee74:
    if (ctx->pc == 0x21EE74u) {
        ctx->pc = 0x21EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE70u;
        // 0x21ee74: 0xa424b4ea  sh          $a0, -0x4B16($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE78u;
        goto label_21ee78;
    }
    ctx->pc = 0x21EE70u;
    {
        const bool branch_taken_0x21ee70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x21EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE70u;
        // 0x21ee74: 0xa424b4ea  sh          $a0, -0x4B16($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee70) {
            ctx->pc = 0x21EEB8u;
            goto label_21eeb8;
        }
    }
    ctx->pc = 0x21EE78u;
label_21ee78:
    // 0x21ee78: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x21ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_21ee7c:
    // 0x21ee7c: 0x1263000a  beq         $s3, $v1, . + 4 + (0xA << 2)
label_21ee80:
    if (ctx->pc == 0x21EE80u) {
        ctx->pc = 0x21EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE7Cu;
        // 0x21ee80: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE84u;
        goto label_21ee84;
    }
    ctx->pc = 0x21EE7Cu;
    {
        const bool branch_taken_0x21ee7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x21EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE7Cu;
        // 0x21ee80: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee7c) {
            ctx->pc = 0x21EEA8u;
            goto label_21eea8;
        }
    }
    ctx->pc = 0x21EE84u;
label_21ee84:
    // 0x21ee84: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x21ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_21ee88:
    // 0x21ee88: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
label_21ee8c:
    if (ctx->pc == 0x21EE8Cu) {
        ctx->pc = 0x21EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE88u;
        // 0x21ee8c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE90u;
        goto label_21ee90;
    }
    ctx->pc = 0x21EE88u;
    {
        const bool branch_taken_0x21ee88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x21EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE88u;
        // 0x21ee8c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee88) {
            ctx->pc = 0x21EE98u;
            goto label_21ee98;
        }
    }
    ctx->pc = 0x21EE90u;
label_21ee90:
    // 0x21ee90: 0x1000000a  b           . + 4 + (0xA << 2)
label_21ee94:
    if (ctx->pc == 0x21EE94u) {
        ctx->pc = 0x21EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE90u;
        // 0x21ee94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE98u;
        goto label_21ee98;
    }
    ctx->pc = 0x21EE90u;
    {
        const bool branch_taken_0x21ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE90u;
        // 0x21ee94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee90) {
            ctx->pc = 0x21EEBCu;
            goto label_21eebc;
        }
    }
    ctx->pc = 0x21EE98u;
label_21ee98:
    // 0x21ee98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ee98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21ee9c:
    // 0x21ee9c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x21ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_21eea0:
    // 0x21eea0: 0x10000006  b           . + 4 + (0x6 << 2)
label_21eea4:
    if (ctx->pc == 0x21EEA4u) {
        ctx->pc = 0x21EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEA0u;
        // 0x21eea4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEA8u;
        goto label_21eea8;
    }
    ctx->pc = 0x21EEA0u;
    {
        const bool branch_taken_0x21eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEA0u;
        // 0x21eea4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eea0) {
            ctx->pc = 0x21EEBCu;
            goto label_21eebc;
        }
    }
    ctx->pc = 0x21EEA8u;
label_21eea8:
    // 0x21eea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21eea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21eeac:
    // 0x21eeac: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x21eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_21eeb0:
    // 0x21eeb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_21eeb4:
    if (ctx->pc == 0x21EEB4u) {
        ctx->pc = 0x21EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB0u;
        // 0x21eeb4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEB8u;
        goto label_21eeb8;
    }
    ctx->pc = 0x21EEB0u;
    {
        const bool branch_taken_0x21eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB0u;
        // 0x21eeb4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeb0) {
            ctx->pc = 0x21EEBCu;
            goto label_21eebc;
        }
    }
    ctx->pc = 0x21EEB8u;
label_21eeb8:
    // 0x21eeb8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21eebc:
    // 0x21eebc: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
label_21eec0:
    if (ctx->pc == 0x21EEC0u) {
        ctx->pc = 0x21EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEBCu;
        // 0x21eec0: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEC4u;
        goto label_21eec4;
    }
    ctx->pc = 0x21EEBCu;
    {
        const bool branch_taken_0x21eebc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEBCu;
        // 0x21eec0: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eebc) {
            ctx->pc = 0x21EF74u;
            goto label_21ef74;
        }
    }
    ctx->pc = 0x21EEC4u;
label_21eec4:
    // 0x21eec4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_21eec8:
    if (ctx->pc == 0x21EEC8u) {
        ctx->pc = 0x21EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEC4u;
        // 0x21eec8: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EECCu;
        goto label_21eecc;
    }
    ctx->pc = 0x21EEC4u;
    {
        const bool branch_taken_0x21eec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEC4u;
        // 0x21eec8: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eec4) {
            ctx->pc = 0x21EF18u;
            goto label_21ef18;
        }
    }
    ctx->pc = 0x21EECCu;
label_21eecc:
    // 0x21eecc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x21eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_21eed0:
    // 0x21eed0: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_21eed4:
    if (ctx->pc == 0x21EED4u) {
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED0u;
        // 0x21eed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EED8u;
        goto label_21eed8;
    }
    ctx->pc = 0x21EED0u;
    {
        const bool branch_taken_0x21eed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED0u;
        // 0x21eed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed0) {
            ctx->pc = 0x21EEF0u;
            goto label_21eef0;
        }
    }
    ctx->pc = 0x21EED8u;
label_21eed8:
    // 0x21eed8: 0xc087d40  jal         func_21F500
label_21eedc:
    if (ctx->pc == 0x21EEDCu) {
        ctx->pc = 0x21EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED8u;
        // 0x21eedc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEE0u;
        goto label_21eee0;
    }
    ctx->pc = 0x21EED8u;
    SET_GPR_U32(ctx, 31, 0x21EEE0u);
    ctx->pc = 0x21EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EED8u;
    // 0x21eedc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F500u;
    { ctx->pc = 0x21f500; return; }
    ctx->pc = 0x21EEE0u;
label_21eee0:
    // 0x21eee0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21eee4:
    // 0x21eee4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_21eee8:
    // 0x21eee8: 0x10000007  b           . + 4 + (0x7 << 2)
label_21eeec:
    if (ctx->pc == 0x21EEECu) {
        ctx->pc = 0x21EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEE8u;
        // 0x21eeec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEF0u;
        goto label_21eef0;
    }
    ctx->pc = 0x21EEE8u;
    {
        const bool branch_taken_0x21eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEE8u;
        // 0x21eeec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eee8) {
            ctx->pc = 0x21EF08u;
            goto label_21ef08;
        }
    }
    ctx->pc = 0x21EEF0u;
label_21eef0:
    // 0x21eef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21eef4:
    // 0x21eef4: 0xc087d98  jal         func_21F660
label_21eef8:
    if (ctx->pc == 0x21EEF8u) {
        ctx->pc = 0x21EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEF4u;
        // 0x21eef8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEFCu;
        goto label_21eefc;
    }
    ctx->pc = 0x21EEF4u;
    SET_GPR_U32(ctx, 31, 0x21EEFCu);
    ctx->pc = 0x21EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEF4u;
    // 0x21eef8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F660u;
    { ctx->pc = 0x21f660; return; }
    ctx->pc = 0x21EEFCu;
label_21eefc:
    // 0x21eefc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x21eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21ef00:
    // 0x21ef00: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_21ef04:
    // 0x21ef04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21ef08:
    // 0x21ef08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ef08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21ef0c:
    // 0x21ef0c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x21ef0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_21ef10:
    // 0x21ef10: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_21ef14:
    if (ctx->pc == 0x21EF14u) {
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF18u;
        goto label_21ef18;
    }
    ctx->pc = 0x21EF10u;
    {
        const bool branch_taken_0x21ef10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef10) {
            ctx->pc = 0x21EECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eecc;
        }
    }
    ctx->pc = 0x21EF18u;
label_21ef18:
    // 0x21ef18: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x21ef18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_21ef1c:
    // 0x21ef1c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_21ef20:
    if (ctx->pc == 0x21EF20u) {
        ctx->pc = 0x21EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF1Cu;
        // 0x21ef20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF24u;
        goto label_21ef24;
    }
    ctx->pc = 0x21EF1Cu;
    {
        const bool branch_taken_0x21ef1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF1Cu;
        // 0x21ef20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef1c) {
            ctx->pc = 0x21EF74u;
            goto label_21ef74;
        }
    }
    ctx->pc = 0x21EF24u;
label_21ef24:
    // 0x21ef24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21ef24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ef28:
    // 0x21ef28: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x21ef28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ef2c:
    // 0x21ef2c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x21ef2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
label_21ef30:
    // 0x21ef30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21ef34:
    // 0x21ef34: 0x2508b4e0  addiu       $t0, $t0, -0x4B20
    ctx->pc = 0x21ef34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
label_21ef38:
    // 0x21ef38: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x21ef38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21ef3c:
    // 0x21ef3c: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x21ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_21ef40:
    // 0x21ef40: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x21ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_21ef44:
    // 0x21ef44: 0x10b3821  addu        $a3, $t0, $t3
    ctx->pc = 0x21ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_21ef48:
    // 0x21ef48: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21ef48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21ef4c:
    // 0x21ef4c: 0x24ea1fe0  addiu       $t2, $a3, 0x1FE0
    ctx->pc = 0x21ef4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8160));
label_21ef50:
    // 0x21ef50: 0x12650002  beq         $s3, $a1, . + 4 + (0x2 << 2)
label_21ef54:
    if (ctx->pc == 0x21EF54u) {
        ctx->pc = 0x21EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF50u;
        // 0x21ef54: 0xa4e31fea  sh          $v1, 0x1FEA($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 8170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF58u;
        goto label_21ef58;
    }
    ctx->pc = 0x21EF50u;
    {
        const bool branch_taken_0x21ef50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x21EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF50u;
        // 0x21ef54: 0xa4e31fea  sh          $v1, 0x1FEA($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 8170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef50) {
            ctx->pc = 0x21EF5Cu;
            goto label_21ef5c;
        }
    }
    ctx->pc = 0x21EF58u;
label_21ef58:
    // 0x21ef58: 0xa1440010  sb          $a0, 0x10($t2)
    ctx->pc = 0x21ef58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 4));
label_21ef5c:
    // 0x21ef5c: 0x0  nop
    ctx->pc = 0x21ef5cu;
    // NOP
label_21ef60:
    // 0x21ef60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21ef60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21ef64:
    // 0x21ef64: 0x130182a  slt         $v1, $t1, $s0
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_21ef68:
    // 0x21ef68: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x21ef68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_21ef6c:
    // 0x21ef6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_21ef70:
    if (ctx->pc == 0x21EF70u) {
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF74u;
        goto label_21ef74;
    }
    ctx->pc = 0x21EF6Cu;
    {
        const bool branch_taken_0x21ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef6c) {
            ctx->pc = 0x21EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ef40;
        }
    }
    ctx->pc = 0x21EF74u;
label_21ef74:
    // 0x21ef74: 0x0  nop
    ctx->pc = 0x21ef74u;
    // NOP
label_21ef78:
    // 0x21ef78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21ef7c:
    // 0x21ef7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ef7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ef80:
    // 0x21ef80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ef80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ef84:
    // 0x21ef84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ef84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ef88:
    // 0x21ef88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ef88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21ef8c:
    // 0x21ef8c: 0x3e00008  jr          $ra
label_21ef90:
    if (ctx->pc == 0x21EF90u) {
        ctx->pc = 0x21EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF8Cu;
        // 0x21ef90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF94u;
        goto label_21ef94;
    }
    ctx->pc = 0x21EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF8Cu;
        // 0x21ef90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF94u;
label_21ef94:
    // 0x21ef94: 0x0  nop
    ctx->pc = 0x21ef94u;
    // NOP
label_21ef98:
    // 0x21ef98: 0x0  nop
    ctx->pc = 0x21ef98u;
    // NOP
label_21ef9c:
    // 0x21ef9c: 0x0  nop
    ctx->pc = 0x21ef9cu;
    // NOP
label_21efa0:
    // 0x21efa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21efa4:
    // 0x21efa4: 0x2083ffd2  addi        $v1, $a0, -0x2E
    ctx->pc = 0x21efa4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967250, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_21efa8:
    // 0x21efa8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21efac:
    // 0x21efac: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x21efacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_21efb0:
    // 0x21efb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21efb4:
    // 0x21efb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21efb8:
    // 0x21efb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21efbc:
    // 0x21efbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21efc0:
    // 0x21efc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21efc4:
    // 0x21efc4: 0x2484da70  addiu       $a0, $a0, -0x2590
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
label_21efc8:
    // 0x21efc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21efcc:
    // 0x21efcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21efd0:
    // 0x21efd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21efd4:
    // 0x21efd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21efd8:
    // 0x21efd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21efd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21efdc:
    // 0x21efdc: 0x90264910  lbu         $a2, 0x4910($at)
    ctx->pc = 0x21efdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21efe0:
    // 0x21efe0: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x21efe0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21efe4:
    // 0x21efe4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x21efe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_21efe8:
    // 0x21efe8: 0x0  nop
    ctx->pc = 0x21efe8u;
    // NOP
label_21efec:
    // 0x21efec: 0x3010  mfhi        $a2
    ctx->pc = 0x21efecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21eff0:
    // 0x21eff0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x21eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_21eff4:
    // 0x21eff4: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x21eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21eff8:
    // 0x21eff8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21effc:
    // 0x21effc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x21effcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21f000:
    // 0x21f000: 0x102000c4  beqz        $at, . + 4 + (0xC4 << 2)
label_21f004:
    if (ctx->pc == 0x21F004u) {
        ctx->pc = 0x21F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F000u;
        // 0x21f004: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F008u;
        goto label_21f008;
    }
    ctx->pc = 0x21F000u;
    {
        const bool branch_taken_0x21f000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F000u;
        // 0x21f004: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f000) {
            ctx->pc = 0x21F314u;
            goto label_21f314;
        }
    }
    ctx->pc = 0x21F008u;
label_21f008:
    // 0x21f008: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_21f00c:
    // 0x21f00c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21f010:
    // 0x21f010: 0x2484e160  addiu       $a0, $a0, -0x1EA0
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
label_21f014:
    // 0x21f014: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21f014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f018:
    // 0x21f018: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f01c:
    // 0x21f01c: 0x600008  jr          $v1
label_21f020:
    if (ctx->pc == 0x21F020u) {
        ctx->pc = 0x21F024u;
        goto label_21f024;
    }
    ctx->pc = 0x21F01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F024u: goto label_21f024;
            case 0x21F048u: goto label_21f048;
            case 0x21F0B0u: goto label_21f0b0;
            case 0x21F0D4u: goto label_21f0d4;
            case 0x21F188u: goto label_21f188;
            case 0x21F23Cu: goto label_21f23c;
            case 0x21F2F0u: goto label_21f2f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F01Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F024u;
label_21f024:
    // 0x21f024: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f028:
    // 0x21f028: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21f028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_21f02c:
    // 0x21f02c: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x21f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f030:
    // 0x21f030: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21f034:
    // 0x21f034: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f038:
    // 0x21f038: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f03c:
    // 0x21f03c: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f040:
    // 0x21f040: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_21f044:
    if (ctx->pc == 0x21F044u) {
        ctx->pc = 0x21F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F040u;
        // 0x21f044: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F048u;
        goto label_21f048;
    }
    ctx->pc = 0x21F040u;
    {
        const bool branch_taken_0x21f040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F040u;
        // 0x21f044: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f040) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F048u;
label_21f048:
    // 0x21f048: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f04c:
    // 0x21f04c: 0x8c274970  lw          $a3, 0x4970($at)
    ctx->pc = 0x21f04cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f050:
    // 0x21f050: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f054:
    // 0x21f054: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x21f054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_21f058:
    // 0x21f058: 0x8c284a00  lw          $t0, 0x4A00($at)
    ctx->pc = 0x21f058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f05c:
    // 0x21f05c: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x21f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
label_21f060:
    // 0x21f060: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x21f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21f064:
    // 0x21f064: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x21f064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_21f068:
    // 0x21f068: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_21f06c:
    if (ctx->pc == 0x21F06Cu) {
        ctx->pc = 0x21F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F068u;
        // 0x21f06c: 0x90a60002  lbu         $a2, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F070u;
        goto label_21f070;
    }
    ctx->pc = 0x21F068u;
    {
        const bool branch_taken_0x21f068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x21F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F068u;
        // 0x21f06c: 0x90a60002  lbu         $a2, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f068) {
            ctx->pc = 0x21F078u;
            goto label_21f078;
        }
    }
    ctx->pc = 0x21F070u;
label_21f070:
    // 0x21f070: 0x15030009  bne         $t0, $v1, . + 4 + (0x9 << 2)
label_21f074:
    if (ctx->pc == 0x21F074u) {
        ctx->pc = 0x21F078u;
        goto label_21f078;
    }
    ctx->pc = 0x21F070u;
    {
        const bool branch_taken_0x21f070 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x21f070) {
            ctx->pc = 0x21F098u;
            goto label_21f098;
        }
    }
    ctx->pc = 0x21F078u;
label_21f078:
    // 0x21f078: 0x10e40003  beq         $a3, $a0, . + 4 + (0x3 << 2)
label_21f07c:
    if (ctx->pc == 0x21F07Cu) {
        ctx->pc = 0x21F080u;
        goto label_21f080;
    }
    ctx->pc = 0x21F078u;
    {
        const bool branch_taken_0x21f078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x21f078) {
            ctx->pc = 0x21F088u;
            goto label_21f088;
        }
    }
    ctx->pc = 0x21F080u;
label_21f080:
    // 0x21f080: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
label_21f084:
    if (ctx->pc == 0x21F084u) {
        ctx->pc = 0x21F088u;
        goto label_21f088;
    }
    ctx->pc = 0x21F080u;
    {
        const bool branch_taken_0x21f080 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f080) {
            ctx->pc = 0x21F090u;
            goto label_21f090;
        }
    }
    ctx->pc = 0x21F088u;
label_21f088:
    // 0x21f088: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f08c:
    if (ctx->pc == 0x21F08Cu) {
        ctx->pc = 0x21F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F088u;
        // 0x21f08c: 0xafa60088  sw          $a2, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F090u;
        goto label_21f090;
    }
    ctx->pc = 0x21F088u;
    {
        const bool branch_taken_0x21f088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F088u;
        // 0x21f08c: 0xafa60088  sw          $a2, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f088) {
            ctx->pc = 0x21F09Cu;
            goto label_21f09c;
        }
    }
    ctx->pc = 0x21F090u;
label_21f090:
    // 0x21f090: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f094:
    if (ctx->pc == 0x21F094u) {
        ctx->pc = 0x21F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F090u;
        // 0x21f094: 0xafa40088  sw          $a0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F098u;
        goto label_21f098;
    }
    ctx->pc = 0x21F090u;
    {
        const bool branch_taken_0x21f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F090u;
        // 0x21f094: 0xafa40088  sw          $a0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f090) {
            ctx->pc = 0x21F09Cu;
            goto label_21f09c;
        }
    }
    ctx->pc = 0x21F098u;
label_21f098:
    // 0x21f098: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x21f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_21f09c:
    // 0x21f09c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x21f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_21f0a0:
    // 0x21f0a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21f0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21f0a4:
    // 0x21f0a4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21f0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21f0a8:
    // 0x21f0a8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_21f0ac:
    if (ctx->pc == 0x21F0ACu) {
        ctx->pc = 0x21F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0A8u;
        // 0x21f0ac: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0B0u;
        goto label_21f0b0;
    }
    ctx->pc = 0x21F0A8u;
    {
        const bool branch_taken_0x21f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0A8u;
        // 0x21f0ac: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0a8) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F0B0u;
label_21f0b0:
    // 0x21f0b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f0b4:
    // 0x21f0b4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21f0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_21f0b8:
    // 0x21f0b8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x21f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f0bc:
    // 0x21f0bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21f0c0:
    // 0x21f0c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f0c4:
    // 0x21f0c4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f0c8:
    // 0x21f0c8: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f0cc:
    // 0x21f0cc: 0x10000092  b           . + 4 + (0x92 << 2)
label_21f0d0:
    if (ctx->pc == 0x21F0D0u) {
        ctx->pc = 0x21F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0CCu;
        // 0x21f0d0: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0D4u;
        goto label_21f0d4;
    }
    ctx->pc = 0x21F0CCu;
    {
        const bool branch_taken_0x21f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0CCu;
        // 0x21f0d0: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0cc) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f0d8:
    // 0x21f0d8: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x21f0d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_21f0dc:
    // 0x21f0dc: 0x8c284970  lw          $t0, 0x4970($at)
    ctx->pc = 0x21f0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f0e0:
    // 0x21f0e0: 0x90a60013  lbu         $a2, 0x13($a1)
    ctx->pc = 0x21f0e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
label_21f0e4:
    // 0x21f0e4: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f0e8:
    if (ctx->pc == 0x21F0E8u) {
        ctx->pc = 0x21F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0E4u;
        // 0x21f0e8: 0x90a70014  lbu         $a3, 0x14($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0ECu;
        goto label_21f0ec;
    }
    ctx->pc = 0x21F0E4u;
    {
        const bool branch_taken_0x21f0e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0E4u;
        // 0x21f0e8: 0x90a70014  lbu         $a3, 0x14($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0e4) {
            ctx->pc = 0x21F0FCu;
            goto label_21f0fc;
        }
    }
    ctx->pc = 0x21F0ECu;
label_21f0ec:
    // 0x21f0ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f0f0:
    // 0x21f0f0: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f0f4:
    // 0x21f0f4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f0f8:
    if (ctx->pc == 0x21F0F8u) {
        ctx->pc = 0x21F0FCu;
        goto label_21f0fc;
    }
    ctx->pc = 0x21F0F4u;
    {
        const bool branch_taken_0x21f0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f0f4) {
            ctx->pc = 0x21F120u;
            goto label_21f120;
        }
    }
    ctx->pc = 0x21F0FCu;
label_21f0fc:
    // 0x21f0fc: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f100:
    if (ctx->pc == 0x21F100u) {
        ctx->pc = 0x21F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0FCu;
        // 0x21f100: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F104u;
        goto label_21f104;
    }
    ctx->pc = 0x21F0FCu;
    {
        const bool branch_taken_0x21f0fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0FCu;
        // 0x21f100: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0fc) {
            ctx->pc = 0x21F110u;
            goto label_21f110;
        }
    }
    ctx->pc = 0x21F104u;
label_21f104:
    // 0x21f104: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f108:
    // 0x21f108: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f10c:
    if (ctx->pc == 0x21F10Cu) {
        ctx->pc = 0x21F110u;
        goto label_21f110;
    }
    ctx->pc = 0x21F108u;
    {
        const bool branch_taken_0x21f108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f108) {
            ctx->pc = 0x21F118u;
            goto label_21f118;
        }
    }
    ctx->pc = 0x21F110u;
label_21f110:
    // 0x21f110: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f114:
    if (ctx->pc == 0x21F114u) {
        ctx->pc = 0x21F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F110u;
        // 0x21f114: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F118u;
        goto label_21f118;
    }
    ctx->pc = 0x21F110u;
    {
        const bool branch_taken_0x21f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F110u;
        // 0x21f114: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f110) {
            ctx->pc = 0x21F124u;
            goto label_21f124;
        }
    }
    ctx->pc = 0x21F118u;
label_21f118:
    // 0x21f118: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f11c:
    if (ctx->pc == 0x21F11Cu) {
        ctx->pc = 0x21F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F118u;
        // 0x21f11c: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F120u;
        goto label_21f120;
    }
    ctx->pc = 0x21F118u;
    {
        const bool branch_taken_0x21f118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F118u;
        // 0x21f11c: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f118) {
            ctx->pc = 0x21F124u;
            goto label_21f124;
        }
    }
    ctx->pc = 0x21F120u;
label_21f120:
    // 0x21f120: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f124:
    // 0x21f124: 0x90a4000c  lbu         $a0, 0xC($a1)
    ctx->pc = 0x21f124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
label_21f128:
    // 0x21f128: 0x90a6000d  lbu         $a2, 0xD($a1)
    ctx->pc = 0x21f128u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_21f12c:
    // 0x21f12c: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f130:
    if (ctx->pc == 0x21F130u) {
        ctx->pc = 0x21F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F12Cu;
        // 0x21f130: 0x90a7000e  lbu         $a3, 0xE($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F134u;
        goto label_21f134;
    }
    ctx->pc = 0x21F12Cu;
    {
        const bool branch_taken_0x21f12c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F12Cu;
        // 0x21f130: 0x90a7000e  lbu         $a3, 0xE($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f12c) {
            ctx->pc = 0x21F144u;
            goto label_21f144;
        }
    }
    ctx->pc = 0x21F134u;
label_21f134:
    // 0x21f134: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f138:
    // 0x21f138: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f13c:
    // 0x21f13c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f140:
    if (ctx->pc == 0x21F140u) {
        ctx->pc = 0x21F144u;
        goto label_21f144;
    }
    ctx->pc = 0x21F13Cu;
    {
        const bool branch_taken_0x21f13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f13c) {
            ctx->pc = 0x21F168u;
            goto label_21f168;
        }
    }
    ctx->pc = 0x21F144u;
label_21f144:
    // 0x21f144: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f148:
    if (ctx->pc == 0x21F148u) {
        ctx->pc = 0x21F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F144u;
        // 0x21f148: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F14Cu;
        goto label_21f14c;
    }
    ctx->pc = 0x21F144u;
    {
        const bool branch_taken_0x21f144 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F144u;
        // 0x21f148: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f144) {
            ctx->pc = 0x21F158u;
            goto label_21f158;
        }
    }
    ctx->pc = 0x21F14Cu;
label_21f14c:
    // 0x21f14c: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f150:
    // 0x21f150: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f154:
    if (ctx->pc == 0x21F154u) {
        ctx->pc = 0x21F158u;
        goto label_21f158;
    }
    ctx->pc = 0x21F150u;
    {
        const bool branch_taken_0x21f150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f150) {
            ctx->pc = 0x21F160u;
            goto label_21f160;
        }
    }
    ctx->pc = 0x21F158u;
label_21f158:
    // 0x21f158: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f15c:
    if (ctx->pc == 0x21F15Cu) {
        ctx->pc = 0x21F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F158u;
        // 0x21f15c: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F160u;
        goto label_21f160;
    }
    ctx->pc = 0x21F158u;
    {
        const bool branch_taken_0x21f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F158u;
        // 0x21f15c: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f158) {
            ctx->pc = 0x21F16Cu;
            goto label_21f16c;
        }
    }
    ctx->pc = 0x21F160u;
label_21f160:
    // 0x21f160: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f164:
    if (ctx->pc == 0x21F164u) {
        ctx->pc = 0x21F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F160u;
        // 0x21f164: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F168u;
        goto label_21f168;
    }
    ctx->pc = 0x21F160u;
    {
        const bool branch_taken_0x21f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F160u;
        // 0x21f164: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f160) {
            ctx->pc = 0x21F16Cu;
            goto label_21f16c;
        }
    }
    ctx->pc = 0x21F168u;
label_21f168:
    // 0x21f168: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x21f168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_21f16c:
    // 0x21f16c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f170:
    // 0x21f170: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x21f170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_21f174:
    // 0x21f174: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f178:
    // 0x21f178: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21f178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21f17c:
    // 0x21f17c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x21f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f180:
    // 0x21f180: 0x10000065  b           . + 4 + (0x65 << 2)
label_21f184:
    if (ctx->pc == 0x21F184u) {
        ctx->pc = 0x21F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F180u;
        // 0x21f184: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F188u;
        goto label_21f188;
    }
    ctx->pc = 0x21F180u;
    {
        const bool branch_taken_0x21f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F180u;
        // 0x21f184: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f180) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F188u;
label_21f188:
    // 0x21f188: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f18c:
    // 0x21f18c: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x21f18cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
label_21f190:
    // 0x21f190: 0x8c284970  lw          $t0, 0x4970($at)
    ctx->pc = 0x21f190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f194:
    // 0x21f194: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x21f194u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21f198:
    // 0x21f198: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f19c:
    if (ctx->pc == 0x21F19Cu) {
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x90a7000f  lbu         $a3, 0xF($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1A0u;
        goto label_21f1a0;
    }
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x90a7000f  lbu         $a3, 0xF($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F1B0u;
            goto label_21f1b0;
        }
    }
    ctx->pc = 0x21F1A0u;
label_21f1a0:
    // 0x21f1a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f1a4:
    // 0x21f1a4: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f1a8:
    // 0x21f1a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f1ac:
    if (ctx->pc == 0x21F1ACu) {
        ctx->pc = 0x21F1B0u;
        goto label_21f1b0;
    }
    ctx->pc = 0x21F1A8u;
    {
        const bool branch_taken_0x21f1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f1a8) {
            ctx->pc = 0x21F1D4u;
            goto label_21f1d4;
        }
    }
    ctx->pc = 0x21F1B0u;
label_21f1b0:
    // 0x21f1b0: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f1b4:
    if (ctx->pc == 0x21F1B4u) {
        ctx->pc = 0x21F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1B0u;
        // 0x21f1b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1B8u;
        goto label_21f1b8;
    }
    ctx->pc = 0x21F1B0u;
    {
        const bool branch_taken_0x21f1b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1B0u;
        // 0x21f1b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1b0) {
            ctx->pc = 0x21F1C4u;
            goto label_21f1c4;
        }
    }
    ctx->pc = 0x21F1B8u;
label_21f1b8:
    // 0x21f1b8: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f1bc:
    // 0x21f1bc: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f1c0:
    if (ctx->pc == 0x21F1C0u) {
        ctx->pc = 0x21F1C4u;
        goto label_21f1c4;
    }
    ctx->pc = 0x21F1BCu;
    {
        const bool branch_taken_0x21f1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f1bc) {
            ctx->pc = 0x21F1CCu;
            goto label_21f1cc;
        }
    }
    ctx->pc = 0x21F1C4u;
label_21f1c4:
    // 0x21f1c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f1c8:
    if (ctx->pc == 0x21F1C8u) {
        ctx->pc = 0x21F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1C4u;
        // 0x21f1c8: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1CCu;
        goto label_21f1cc;
    }
    ctx->pc = 0x21F1C4u;
    {
        const bool branch_taken_0x21f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1C4u;
        // 0x21f1c8: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1c4) {
            ctx->pc = 0x21F1D8u;
            goto label_21f1d8;
        }
    }
    ctx->pc = 0x21F1CCu;
label_21f1cc:
    // 0x21f1cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f1d0:
    if (ctx->pc == 0x21F1D0u) {
        ctx->pc = 0x21F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1CCu;
        // 0x21f1d0: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1D4u;
        goto label_21f1d4;
    }
    ctx->pc = 0x21F1CCu;
    {
        const bool branch_taken_0x21f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1CCu;
        // 0x21f1d0: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1cc) {
            ctx->pc = 0x21F1D8u;
            goto label_21f1d8;
        }
    }
    ctx->pc = 0x21F1D4u;
label_21f1d4:
    // 0x21f1d4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f1d8:
    // 0x21f1d8: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x21f1d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_21f1dc:
    // 0x21f1dc: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x21f1dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_21f1e0:
    // 0x21f1e0: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f1e4:
    if (ctx->pc == 0x21F1E4u) {
        ctx->pc = 0x21F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E0u;
        // 0x21f1e4: 0x90a70004  lbu         $a3, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1E8u;
        goto label_21f1e8;
    }
    ctx->pc = 0x21F1E0u;
    {
        const bool branch_taken_0x21f1e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E0u;
        // 0x21f1e4: 0x90a70004  lbu         $a3, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1e0) {
            ctx->pc = 0x21F1F8u;
            goto label_21f1f8;
        }
    }
    ctx->pc = 0x21F1E8u;
label_21f1e8:
    // 0x21f1e8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f1ec:
    // 0x21f1ec: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f1f0:
    // 0x21f1f0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f1f4:
    if (ctx->pc == 0x21F1F4u) {
        ctx->pc = 0x21F1F8u;
        goto label_21f1f8;
    }
    ctx->pc = 0x21F1F0u;
    {
        const bool branch_taken_0x21f1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f1f0) {
            ctx->pc = 0x21F21Cu;
            goto label_21f21c;
        }
    }
    ctx->pc = 0x21F1F8u;
label_21f1f8:
    // 0x21f1f8: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f1fc:
    if (ctx->pc == 0x21F1FCu) {
        ctx->pc = 0x21F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1F8u;
        // 0x21f1fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F200u;
        goto label_21f200;
    }
    ctx->pc = 0x21F1F8u;
    {
        const bool branch_taken_0x21f1f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1F8u;
        // 0x21f1fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1f8) {
            ctx->pc = 0x21F20Cu;
            goto label_21f20c;
        }
    }
    ctx->pc = 0x21F200u;
label_21f200:
    // 0x21f200: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f204:
    // 0x21f204: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f208:
    if (ctx->pc == 0x21F208u) {
        ctx->pc = 0x21F20Cu;
        goto label_21f20c;
    }
    ctx->pc = 0x21F204u;
    {
        const bool branch_taken_0x21f204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f204) {
            ctx->pc = 0x21F214u;
            goto label_21f214;
        }
    }
    ctx->pc = 0x21F20Cu;
label_21f20c:
    // 0x21f20c: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f210:
    if (ctx->pc == 0x21F210u) {
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F214u;
        goto label_21f214;
    }
    ctx->pc = 0x21F20Cu;
    {
        const bool branch_taken_0x21f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f20c) {
            ctx->pc = 0x21F220u;
            goto label_21f220;
        }
    }
    ctx->pc = 0x21F214u;
label_21f214:
    // 0x21f214: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f218:
    if (ctx->pc == 0x21F218u) {
        ctx->pc = 0x21F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F214u;
        // 0x21f218: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F21Cu;
        goto label_21f21c;
    }
    ctx->pc = 0x21F214u;
    {
        const bool branch_taken_0x21f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F214u;
        // 0x21f218: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f214) {
            ctx->pc = 0x21F220u;
            goto label_21f220;
        }
    }
    ctx->pc = 0x21F21Cu;
label_21f21c:
    // 0x21f21c: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x21f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_21f220:
    // 0x21f220: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f224:
    // 0x21f224: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x21f224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_21f228:
    // 0x21f228: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f22c:
    // 0x21f22c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21f22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21f230:
    // 0x21f230: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x21f230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f234:
    // 0x21f234: 0x10000038  b           . + 4 + (0x38 << 2)
label_21f238:
    if (ctx->pc == 0x21F238u) {
        ctx->pc = 0x21F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F234u;
        // 0x21f238: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F23Cu;
        goto label_21f23c;
    }
    ctx->pc = 0x21F234u;
    {
        const bool branch_taken_0x21f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F234u;
        // 0x21f238: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f234) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F23Cu;
label_21f23c:
    // 0x21f23c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f240:
    // 0x21f240: 0x90a40010  lbu         $a0, 0x10($a1)
    ctx->pc = 0x21f240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21f244:
    // 0x21f244: 0x8c284970  lw          $t0, 0x4970($at)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f248:
    // 0x21f248: 0x90a6000f  lbu         $a2, 0xF($a1)
    ctx->pc = 0x21f248u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
label_21f24c:
    // 0x21f24c: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f250:
    if (ctx->pc == 0x21F250u) {
        ctx->pc = 0x21F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F24Cu;
        // 0x21f250: 0x90a70011  lbu         $a3, 0x11($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F254u;
        goto label_21f254;
    }
    ctx->pc = 0x21F24Cu;
    {
        const bool branch_taken_0x21f24c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F24Cu;
        // 0x21f250: 0x90a70011  lbu         $a3, 0x11($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f24c) {
            ctx->pc = 0x21F264u;
            goto label_21f264;
        }
    }
    ctx->pc = 0x21F254u;
label_21f254:
    // 0x21f254: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f258:
    // 0x21f258: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f25c:
    // 0x21f25c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f260:
    if (ctx->pc == 0x21F260u) {
        ctx->pc = 0x21F264u;
        goto label_21f264;
    }
    ctx->pc = 0x21F25Cu;
    {
        const bool branch_taken_0x21f25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f25c) {
            ctx->pc = 0x21F288u;
            goto label_21f288;
        }
    }
    ctx->pc = 0x21F264u;
label_21f264:
    // 0x21f264: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f268:
    if (ctx->pc == 0x21F268u) {
        ctx->pc = 0x21F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F264u;
        // 0x21f268: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F26Cu;
        goto label_21f26c;
    }
    ctx->pc = 0x21F264u;
    {
        const bool branch_taken_0x21f264 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F264u;
        // 0x21f268: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f264) {
            ctx->pc = 0x21F278u;
            goto label_21f278;
        }
    }
    ctx->pc = 0x21F26Cu;
label_21f26c:
    // 0x21f26c: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f270:
    // 0x21f270: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f274:
    if (ctx->pc == 0x21F274u) {
        ctx->pc = 0x21F278u;
        goto label_21f278;
    }
    ctx->pc = 0x21F270u;
    {
        const bool branch_taken_0x21f270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f270) {
            ctx->pc = 0x21F280u;
            goto label_21f280;
        }
    }
    ctx->pc = 0x21F278u;
label_21f278:
    // 0x21f278: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f27c:
    if (ctx->pc == 0x21F27Cu) {
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F278u;
        // 0x21f27c: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F280u;
        goto label_21f280;
    }
    ctx->pc = 0x21F278u;
    {
        const bool branch_taken_0x21f278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F278u;
        // 0x21f27c: 0xafa70080  sw          $a3, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f278) {
            ctx->pc = 0x21F28Cu;
            goto label_21f28c;
        }
    }
    ctx->pc = 0x21F280u;
label_21f280:
    // 0x21f280: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f284:
    if (ctx->pc == 0x21F284u) {
        ctx->pc = 0x21F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F280u;
        // 0x21f284: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F288u;
        goto label_21f288;
    }
    ctx->pc = 0x21F280u;
    {
        const bool branch_taken_0x21f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F280u;
        // 0x21f284: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f280) {
            ctx->pc = 0x21F28Cu;
            goto label_21f28c;
        }
    }
    ctx->pc = 0x21F288u;
label_21f288:
    // 0x21f288: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f28c:
    // 0x21f28c: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x21f28cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
label_21f290:
    // 0x21f290: 0x90a6000b  lbu         $a2, 0xB($a1)
    ctx->pc = 0x21f290u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
label_21f294:
    // 0x21f294: 0x11040005  beq         $t0, $a0, . + 4 + (0x5 << 2)
label_21f298:
    if (ctx->pc == 0x21F298u) {
        ctx->pc = 0x21F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F294u;
        // 0x21f298: 0x90a7000c  lbu         $a3, 0xC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F29Cu;
        goto label_21f29c;
    }
    ctx->pc = 0x21F294u;
    {
        const bool branch_taken_0x21f294 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F294u;
        // 0x21f298: 0x90a7000c  lbu         $a3, 0xC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f294) {
            ctx->pc = 0x21F2ACu;
            goto label_21f2ac;
        }
    }
    ctx->pc = 0x21F29Cu;
label_21f29c:
    // 0x21f29c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f2a0:
    // 0x21f2a0: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f2a4:
    // 0x21f2a4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_21f2a8:
    if (ctx->pc == 0x21F2A8u) {
        ctx->pc = 0x21F2ACu;
        goto label_21f2ac;
    }
    ctx->pc = 0x21F2A4u;
    {
        const bool branch_taken_0x21f2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f2a4) {
            ctx->pc = 0x21F2D0u;
            goto label_21f2d0;
        }
    }
    ctx->pc = 0x21F2ACu;
label_21f2ac:
    // 0x21f2ac: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
label_21f2b0:
    if (ctx->pc == 0x21F2B0u) {
        ctx->pc = 0x21F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2ACu;
        // 0x21f2b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2B4u;
        goto label_21f2b4;
    }
    ctx->pc = 0x21F2ACu;
    {
        const bool branch_taken_0x21f2ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x21F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2ACu;
        // 0x21f2b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2ac) {
            ctx->pc = 0x21F2C0u;
            goto label_21f2c0;
        }
    }
    ctx->pc = 0x21F2B4u;
label_21f2b4:
    // 0x21f2b4: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f2b8:
    // 0x21f2b8: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_21f2bc:
    if (ctx->pc == 0x21F2BCu) {
        ctx->pc = 0x21F2C0u;
        goto label_21f2c0;
    }
    ctx->pc = 0x21F2B8u;
    {
        const bool branch_taken_0x21f2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x21f2b8) {
            ctx->pc = 0x21F2C8u;
            goto label_21f2c8;
        }
    }
    ctx->pc = 0x21F2C0u;
label_21f2c0:
    // 0x21f2c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f2c4:
    if (ctx->pc == 0x21F2C4u) {
        ctx->pc = 0x21F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C0u;
        // 0x21f2c4: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2C8u;
        goto label_21f2c8;
    }
    ctx->pc = 0x21F2C0u;
    {
        const bool branch_taken_0x21f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C0u;
        // 0x21f2c4: 0xafa70084  sw          $a3, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2c0) {
            ctx->pc = 0x21F2D4u;
            goto label_21f2d4;
        }
    }
    ctx->pc = 0x21F2C8u;
label_21f2c8:
    // 0x21f2c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f2cc:
    if (ctx->pc == 0x21F2CCu) {
        ctx->pc = 0x21F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C8u;
        // 0x21f2cc: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2D0u;
        goto label_21f2d0;
    }
    ctx->pc = 0x21F2C8u;
    {
        const bool branch_taken_0x21f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C8u;
        // 0x21f2cc: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2c8) {
            ctx->pc = 0x21F2D4u;
            goto label_21f2d4;
        }
    }
    ctx->pc = 0x21F2D0u;
label_21f2d0:
    // 0x21f2d0: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x21f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_21f2d4:
    // 0x21f2d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f2d8:
    // 0x21f2d8: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x21f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_21f2dc:
    // 0x21f2dc: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f2e0:
    // 0x21f2e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21f2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_21f2e4:
    // 0x21f2e4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x21f2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f2e8:
    // 0x21f2e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_21f2ec:
    if (ctx->pc == 0x21F2ECu) {
        ctx->pc = 0x21F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2E8u;
        // 0x21f2ec: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2F0u;
        goto label_21f2f0;
    }
    ctx->pc = 0x21F2E8u;
    {
        const bool branch_taken_0x21f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2E8u;
        // 0x21f2ec: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2e8) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F2F0u;
label_21f2f0:
    // 0x21f2f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f2f4:
    // 0x21f2f4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21f2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_21f2f8:
    // 0x21f2f8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x21f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_21f2fc:
    // 0x21f2fc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21f2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21f300:
    // 0x21f300: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f304:
    // 0x21f304: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21f304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_21f308:
    // 0x21f308: 0x8c234a00  lw          $v1, 0x4A00($at)
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_21f30c:
    // 0x21f30c: 0x10000002  b           . + 4 + (0x2 << 2)
label_21f310:
    if (ctx->pc == 0x21F310u) {
        ctx->pc = 0x21F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F30Cu;
        // 0x21f310: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F314u;
        goto label_21f314;
    }
    ctx->pc = 0x21F30Cu;
    {
        const bool branch_taken_0x21f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F30Cu;
        // 0x21f310: 0xafa30084  sw          $v1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f30c) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F314u;
label_21f314:
    // 0x21f314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f318:
    // 0x21f318: 0x1a00006f  blez        $s0, . + 4 + (0x6F << 2)
label_21f31c:
    if (ctx->pc == 0x21F31Cu) {
        ctx->pc = 0x21F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F318u;
        // 0x21f31c: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F320u;
        goto label_21f320;
    }
    ctx->pc = 0x21F318u;
    {
        const bool branch_taken_0x21f318 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F318u;
        // 0x21f31c: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f318) {
            ctx->pc = 0x21F4D8u;
            { ctx->pc = 0x21f4d8; return; }
        }
    }
    ctx->pc = 0x21F320u;
label_21f320:
    // 0x21f320: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_21f324:
    if (ctx->pc == 0x21F324u) {
        ctx->pc = 0x21F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F320u;
        // 0x21f324: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F328u;
        goto label_21f328;
    }
    ctx->pc = 0x21F320u;
    {
        const bool branch_taken_0x21f320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F320u;
        // 0x21f324: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f320) {
            ctx->pc = 0x21F350u;
            goto label_21f350;
        }
    }
    ctx->pc = 0x21F328u;
label_21f328:
    // 0x21f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f32c:
    // 0x21f32c: 0xc087d98  jal         func_21F660
label_21f330:
    if (ctx->pc == 0x21F330u) {
        ctx->pc = 0x21F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F32Cu;
        // 0x21f330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F334u;
        goto label_21f334;
    }
    ctx->pc = 0x21F32Cu;
    SET_GPR_U32(ctx, 31, 0x21F334u);
    ctx->pc = 0x21F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F32Cu;
    // 0x21f330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F660u;
    { ctx->pc = 0x21f660; return; }
    ctx->pc = 0x21F334u;
label_21f334:
    // 0x21f334: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x21f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21f338:
    // 0x21f338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21f33c:
    // 0x21f33c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_21f340:
    // 0x21f340: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x21f340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_21f344:
    // 0x21f344: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21f348:
    // 0x21f348: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_21f34c:
    if (ctx->pc == 0x21F34Cu) {
        ctx->pc = 0x21F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F348u;
        // 0x21f34c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F350u;
        goto label_21f350;
    }
    ctx->pc = 0x21F348u;
    {
        const bool branch_taken_0x21f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F348u;
        // 0x21f34c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f348) {
            ctx->pc = 0x21F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f328;
        }
    }
    ctx->pc = 0x21F350u;
label_21f350:
    // 0x21f350: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x21f350u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f354:
    // 0x21f354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f358:
    // 0x21f358: 0x3c0c0030  lui         $t4, 0x30
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)48 << 16));
label_21f35c:
    // 0x21f35c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x21f35cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21f360:
    // 0x21f360: 0x258cb4e0  addiu       $t4, $t4, -0x4B20
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294948064));
label_21f364:
    // 0x21f364: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x21f364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f368:
    // 0x21f368: 0x260d0001  addiu       $t5, $s0, 0x1
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21f36c:
    // 0x21f36c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x21f36cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f370:
    // 0x21f370: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
label_21f374:
    if (ctx->pc == 0x21F374u) {
        ctx->pc = 0x21F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F370u;
        // 0x21f374: 0x109843  sra         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F378u;
        { ctx->pc = 0x21f378; return; }
    }
    ctx->pc = 0x21F370u;
    {
        const bool branch_taken_0x21f370 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F370u;
        // 0x21f374: 0x109843  sra         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f370) {
            ctx->pc = 0x21F37Cu;
            { ctx->pc = 0x21f37c; return; }
        }
    }
    ctx->pc = 0x21F378u;
    ctx->pc = 0x21f378u;
    return;
}

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


void FUN_0017d410_part4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17eb80u: goto label_17eb80;
        case 0x17eb84u: goto label_17eb84;
        case 0x17eb88u: goto label_17eb88;
        case 0x17eb8cu: goto label_17eb8c;
        case 0x17eb90u: goto label_17eb90;
        case 0x17eb94u: goto label_17eb94;
        case 0x17eb98u: goto label_17eb98;
        case 0x17eb9cu: goto label_17eb9c;
        case 0x17eba0u: goto label_17eba0;
        case 0x17eba4u: goto label_17eba4;
        case 0x17eba8u: goto label_17eba8;
        case 0x17ebacu: goto label_17ebac;
        case 0x17ebb0u: goto label_17ebb0;
        case 0x17ebb4u: goto label_17ebb4;
        case 0x17ebb8u: goto label_17ebb8;
        case 0x17ebbcu: goto label_17ebbc;
        case 0x17ebc0u: goto label_17ebc0;
        case 0x17ebc4u: goto label_17ebc4;
        case 0x17ebc8u: goto label_17ebc8;
        case 0x17ebccu: goto label_17ebcc;
        case 0x17ebd0u: goto label_17ebd0;
        case 0x17ebd4u: goto label_17ebd4;
        case 0x17ebd8u: goto label_17ebd8;
        case 0x17ebdcu: goto label_17ebdc;
        case 0x17ebe0u: goto label_17ebe0;
        case 0x17ebe4u: goto label_17ebe4;
        case 0x17ebe8u: goto label_17ebe8;
        case 0x17ebecu: goto label_17ebec;
        case 0x17ebf0u: goto label_17ebf0;
        case 0x17ebf4u: goto label_17ebf4;
        case 0x17ebf8u: goto label_17ebf8;
        case 0x17ebfcu: goto label_17ebfc;
        case 0x17ec00u: goto label_17ec00;
        case 0x17ec04u: goto label_17ec04;
        case 0x17ec08u: goto label_17ec08;
        case 0x17ec0cu: goto label_17ec0c;
        case 0x17ec10u: goto label_17ec10;
        case 0x17ec14u: goto label_17ec14;
        case 0x17ec18u: goto label_17ec18;
        case 0x17ec1cu: goto label_17ec1c;
        case 0x17ec20u: goto label_17ec20;
        case 0x17ec24u: goto label_17ec24;
        case 0x17ec28u: goto label_17ec28;
        case 0x17ec2cu: goto label_17ec2c;
        case 0x17ec30u: goto label_17ec30;
        case 0x17ec34u: goto label_17ec34;
        case 0x17ec38u: goto label_17ec38;
        case 0x17ec3cu: goto label_17ec3c;
        case 0x17ec40u: goto label_17ec40;
        case 0x17ec44u: goto label_17ec44;
        case 0x17ec48u: goto label_17ec48;
        case 0x17ec4cu: goto label_17ec4c;
        case 0x17ec50u: goto label_17ec50;
        case 0x17ec54u: goto label_17ec54;
        case 0x17ec58u: goto label_17ec58;
        case 0x17ec5cu: goto label_17ec5c;
        case 0x17ec60u: goto label_17ec60;
        case 0x17ec64u: goto label_17ec64;
        case 0x17ec68u: goto label_17ec68;
        case 0x17ec6cu: goto label_17ec6c;
        case 0x17ec70u: goto label_17ec70;
        case 0x17ec74u: goto label_17ec74;
        case 0x17ec78u: goto label_17ec78;
        case 0x17ec7cu: goto label_17ec7c;
        case 0x17ec80u: goto label_17ec80;
        case 0x17ec84u: goto label_17ec84;
        case 0x17ec88u: goto label_17ec88;
        case 0x17ec8cu: goto label_17ec8c;
        case 0x17ec90u: goto label_17ec90;
        case 0x17ec94u: goto label_17ec94;
        case 0x17ec98u: goto label_17ec98;
        case 0x17ec9cu: goto label_17ec9c;
        case 0x17eca0u: goto label_17eca0;
        case 0x17eca4u: goto label_17eca4;
        case 0x17eca8u: goto label_17eca8;
        case 0x17ecacu: goto label_17ecac;
        case 0x17ecb0u: goto label_17ecb0;
        case 0x17ecb4u: goto label_17ecb4;
        case 0x17ecb8u: goto label_17ecb8;
        case 0x17ecbcu: goto label_17ecbc;
        case 0x17ecc0u: goto label_17ecc0;
        case 0x17ecc4u: goto label_17ecc4;
        case 0x17ecc8u: goto label_17ecc8;
        case 0x17ecccu: goto label_17eccc;
        case 0x17ecd0u: goto label_17ecd0;
        case 0x17ecd4u: goto label_17ecd4;
        case 0x17ecd8u: goto label_17ecd8;
        case 0x17ecdcu: goto label_17ecdc;
        case 0x17ece0u: goto label_17ece0;
        case 0x17ece4u: goto label_17ece4;
        case 0x17ece8u: goto label_17ece8;
        case 0x17ececu: goto label_17ecec;
        case 0x17ecf0u: goto label_17ecf0;
        case 0x17ecf4u: goto label_17ecf4;
        case 0x17ecf8u: goto label_17ecf8;
        case 0x17ecfcu: goto label_17ecfc;
        case 0x17ed00u: goto label_17ed00;
        case 0x17ed04u: goto label_17ed04;
        case 0x17ed08u: goto label_17ed08;
        case 0x17ed0cu: goto label_17ed0c;
        case 0x17ed10u: goto label_17ed10;
        case 0x17ed14u: goto label_17ed14;
        case 0x17ed18u: goto label_17ed18;
        case 0x17ed1cu: goto label_17ed1c;
        case 0x17ed20u: goto label_17ed20;
        case 0x17ed24u: goto label_17ed24;
        case 0x17ed28u: goto label_17ed28;
        case 0x17ed2cu: goto label_17ed2c;
        case 0x17ed30u: goto label_17ed30;
        case 0x17ed34u: goto label_17ed34;
        case 0x17ed38u: goto label_17ed38;
        case 0x17ed3cu: goto label_17ed3c;
        case 0x17ed40u: goto label_17ed40;
        case 0x17ed44u: goto label_17ed44;
        case 0x17ed48u: goto label_17ed48;
        case 0x17ed4cu: goto label_17ed4c;
        case 0x17ed50u: goto label_17ed50;
        case 0x17ed54u: goto label_17ed54;
        case 0x17ed58u: goto label_17ed58;
        case 0x17ed5cu: goto label_17ed5c;
        case 0x17ed60u: goto label_17ed60;
        case 0x17ed64u: goto label_17ed64;
        case 0x17ed68u: goto label_17ed68;
        case 0x17ed6cu: goto label_17ed6c;
        case 0x17ed70u: goto label_17ed70;
        case 0x17ed74u: goto label_17ed74;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed7cu: goto label_17ed7c;
        case 0x17ed80u: goto label_17ed80;
        case 0x17ed84u: goto label_17ed84;
        case 0x17ed88u: goto label_17ed88;
        case 0x17ed8cu: goto label_17ed8c;
        case 0x17ed90u: goto label_17ed90;
        case 0x17ed94u: goto label_17ed94;
        case 0x17ed98u: goto label_17ed98;
        case 0x17ed9cu: goto label_17ed9c;
        case 0x17eda0u: goto label_17eda0;
        case 0x17eda4u: goto label_17eda4;
        case 0x17eda8u: goto label_17eda8;
        case 0x17edacu: goto label_17edac;
        case 0x17edb0u: goto label_17edb0;
        case 0x17edb4u: goto label_17edb4;
        case 0x17edb8u: goto label_17edb8;
        case 0x17edbcu: goto label_17edbc;
        case 0x17edc0u: goto label_17edc0;
        case 0x17edc4u: goto label_17edc4;
        case 0x17edc8u: goto label_17edc8;
        case 0x17edccu: goto label_17edcc;
        case 0x17edd0u: goto label_17edd0;
        case 0x17edd4u: goto label_17edd4;
        case 0x17edd8u: goto label_17edd8;
        case 0x17eddcu: goto label_17eddc;
        case 0x17ede0u: goto label_17ede0;
        case 0x17ede4u: goto label_17ede4;
        case 0x17ede8u: goto label_17ede8;
        case 0x17edecu: goto label_17edec;
        case 0x17edf0u: goto label_17edf0;
        case 0x17edf4u: goto label_17edf4;
        case 0x17edf8u: goto label_17edf8;
        case 0x17edfcu: goto label_17edfc;
        case 0x17ee00u: goto label_17ee00;
        case 0x17ee04u: goto label_17ee04;
        case 0x17ee08u: goto label_17ee08;
        case 0x17ee0cu: goto label_17ee0c;
        case 0x17ee10u: goto label_17ee10;
        case 0x17ee14u: goto label_17ee14;
        case 0x17ee18u: goto label_17ee18;
        case 0x17ee1cu: goto label_17ee1c;
        case 0x17ee20u: goto label_17ee20;
        case 0x17ee24u: goto label_17ee24;
        case 0x17ee28u: goto label_17ee28;
        case 0x17ee2cu: goto label_17ee2c;
        case 0x17ee30u: goto label_17ee30;
        case 0x17ee34u: goto label_17ee34;
        case 0x17ee38u: goto label_17ee38;
        case 0x17ee3cu: goto label_17ee3c;
        case 0x17ee40u: goto label_17ee40;
        case 0x17ee44u: goto label_17ee44;
        case 0x17ee48u: goto label_17ee48;
        case 0x17ee4cu: goto label_17ee4c;
        case 0x17ee50u: goto label_17ee50;
        case 0x17ee54u: goto label_17ee54;
        case 0x17ee58u: goto label_17ee58;
        case 0x17ee5cu: goto label_17ee5c;
        case 0x17ee60u: goto label_17ee60;
        case 0x17ee64u: goto label_17ee64;
        case 0x17ee68u: goto label_17ee68;
        case 0x17ee6cu: goto label_17ee6c;
        case 0x17ee70u: goto label_17ee70;
        case 0x17ee74u: goto label_17ee74;
        case 0x17ee78u: goto label_17ee78;
        case 0x17ee7cu: goto label_17ee7c;
        case 0x17ee80u: goto label_17ee80;
        case 0x17ee84u: goto label_17ee84;
        case 0x17ee88u: goto label_17ee88;
        case 0x17ee8cu: goto label_17ee8c;
        case 0x17ee90u: goto label_17ee90;
        case 0x17ee94u: goto label_17ee94;
        case 0x17ee98u: goto label_17ee98;
        case 0x17ee9cu: goto label_17ee9c;
        case 0x17eea0u: goto label_17eea0;
        case 0x17eea4u: goto label_17eea4;
        case 0x17eea8u: goto label_17eea8;
        case 0x17eeacu: goto label_17eeac;
        case 0x17eeb0u: goto label_17eeb0;
        case 0x17eeb4u: goto label_17eeb4;
        case 0x17eeb8u: goto label_17eeb8;
        case 0x17eebcu: goto label_17eebc;
        case 0x17eec0u: goto label_17eec0;
        case 0x17eec4u: goto label_17eec4;
        case 0x17eec8u: goto label_17eec8;
        case 0x17eeccu: goto label_17eecc;
        case 0x17eed0u: goto label_17eed0;
        case 0x17eed4u: goto label_17eed4;
        case 0x17eed8u: goto label_17eed8;
        case 0x17eedcu: goto label_17eedc;
        case 0x17eee0u: goto label_17eee0;
        case 0x17eee4u: goto label_17eee4;
        case 0x17eee8u: goto label_17eee8;
        case 0x17eeecu: goto label_17eeec;
        case 0x17eef0u: goto label_17eef0;
        case 0x17eef4u: goto label_17eef4;
        case 0x17eef8u: goto label_17eef8;
        case 0x17eefcu: goto label_17eefc;
        case 0x17ef00u: goto label_17ef00;
        case 0x17ef04u: goto label_17ef04;
        case 0x17ef08u: goto label_17ef08;
        case 0x17ef0cu: goto label_17ef0c;
        case 0x17ef10u: goto label_17ef10;
        case 0x17ef14u: goto label_17ef14;
        case 0x17ef18u: goto label_17ef18;
        case 0x17ef1cu: goto label_17ef1c;
        case 0x17ef20u: goto label_17ef20;
        case 0x17ef24u: goto label_17ef24;
        case 0x17ef28u: goto label_17ef28;
        case 0x17ef2cu: goto label_17ef2c;
        case 0x17ef30u: goto label_17ef30;
        case 0x17ef34u: goto label_17ef34;
        case 0x17ef38u: goto label_17ef38;
        case 0x17ef3cu: goto label_17ef3c;
        case 0x17ef40u: goto label_17ef40;
        case 0x17ef44u: goto label_17ef44;
        case 0x17ef48u: goto label_17ef48;
        case 0x17ef4cu: goto label_17ef4c;
        case 0x17ef50u: goto label_17ef50;
        case 0x17ef54u: goto label_17ef54;
        case 0x17ef58u: goto label_17ef58;
        case 0x17ef5cu: goto label_17ef5c;
        case 0x17ef60u: goto label_17ef60;
        case 0x17ef64u: goto label_17ef64;
        case 0x17ef68u: goto label_17ef68;
        case 0x17ef6cu: goto label_17ef6c;
        case 0x17ef70u: goto label_17ef70;
        case 0x17ef74u: goto label_17ef74;
        case 0x17ef78u: goto label_17ef78;
        case 0x17ef7cu: goto label_17ef7c;
        case 0x17ef80u: goto label_17ef80;
        case 0x17ef84u: goto label_17ef84;
        case 0x17ef88u: goto label_17ef88;
        case 0x17ef8cu: goto label_17ef8c;
        case 0x17ef90u: goto label_17ef90;
        case 0x17ef94u: goto label_17ef94;
        case 0x17ef98u: goto label_17ef98;
        case 0x17ef9cu: goto label_17ef9c;
        case 0x17efa0u: goto label_17efa0;
        case 0x17efa4u: goto label_17efa4;
        case 0x17efa8u: goto label_17efa8;
        case 0x17efacu: goto label_17efac;
        case 0x17efb0u: goto label_17efb0;
        case 0x17efb4u: goto label_17efb4;
        case 0x17efb8u: goto label_17efb8;
        case 0x17efbcu: goto label_17efbc;
        case 0x17efc0u: goto label_17efc0;
        case 0x17efc4u: goto label_17efc4;
        case 0x17efc8u: goto label_17efc8;
        case 0x17efccu: goto label_17efcc;
        case 0x17efd0u: goto label_17efd0;
        case 0x17efd4u: goto label_17efd4;
        case 0x17efd8u: goto label_17efd8;
        case 0x17efdcu: goto label_17efdc;
        case 0x17efe0u: goto label_17efe0;
        case 0x17efe4u: goto label_17efe4;
        case 0x17efe8u: goto label_17efe8;
        case 0x17efecu: goto label_17efec;
        case 0x17eff0u: goto label_17eff0;
        case 0x17eff4u: goto label_17eff4;
        case 0x17eff8u: goto label_17eff8;
        case 0x17effcu: goto label_17effc;
        case 0x17f000u: goto label_17f000;
        case 0x17f004u: goto label_17f004;
        case 0x17f008u: goto label_17f008;
        case 0x17f00cu: goto label_17f00c;
        case 0x17f010u: goto label_17f010;
        case 0x17f014u: goto label_17f014;
        case 0x17f018u: goto label_17f018;
        case 0x17f01cu: goto label_17f01c;
        case 0x17f020u: goto label_17f020;
        case 0x17f024u: goto label_17f024;
        case 0x17f028u: goto label_17f028;
        case 0x17f02cu: goto label_17f02c;
        case 0x17f030u: goto label_17f030;
        case 0x17f034u: goto label_17f034;
        case 0x17f038u: goto label_17f038;
        case 0x17f03cu: goto label_17f03c;
        case 0x17f040u: goto label_17f040;
        case 0x17f044u: goto label_17f044;
        case 0x17f048u: goto label_17f048;
        case 0x17f04cu: goto label_17f04c;
        case 0x17f050u: goto label_17f050;
        case 0x17f054u: goto label_17f054;
        case 0x17f058u: goto label_17f058;
        case 0x17f05cu: goto label_17f05c;
        case 0x17f060u: goto label_17f060;
        case 0x17f064u: goto label_17f064;
        case 0x17f068u: goto label_17f068;
        case 0x17f06cu: goto label_17f06c;
        case 0x17f070u: goto label_17f070;
        case 0x17f074u: goto label_17f074;
        case 0x17f078u: goto label_17f078;
        case 0x17f07cu: goto label_17f07c;
        case 0x17f080u: goto label_17f080;
        case 0x17f084u: goto label_17f084;
        case 0x17f088u: goto label_17f088;
        case 0x17f08cu: goto label_17f08c;
        case 0x17f090u: goto label_17f090;
        case 0x17f094u: goto label_17f094;
        case 0x17f098u: goto label_17f098;
        case 0x17f09cu: goto label_17f09c;
        case 0x17f0a0u: goto label_17f0a0;
        case 0x17f0a4u: goto label_17f0a4;
        case 0x17f0a8u: goto label_17f0a8;
        case 0x17f0acu: goto label_17f0ac;
        case 0x17f0b0u: goto label_17f0b0;
        case 0x17f0b4u: goto label_17f0b4;
        case 0x17f0b8u: goto label_17f0b8;
        case 0x17f0bcu: goto label_17f0bc;
        case 0x17f0c0u: goto label_17f0c0;
        case 0x17f0c4u: goto label_17f0c4;
        case 0x17f0c8u: goto label_17f0c8;
        case 0x17f0ccu: goto label_17f0cc;
        case 0x17f0d0u: goto label_17f0d0;
        case 0x17f0d4u: goto label_17f0d4;
        case 0x17f0d8u: goto label_17f0d8;
        case 0x17f0dcu: goto label_17f0dc;
        case 0x17f0e0u: goto label_17f0e0;
        case 0x17f0e4u: goto label_17f0e4;
        case 0x17f0e8u: goto label_17f0e8;
        case 0x17f0ecu: goto label_17f0ec;
        case 0x17f0f0u: goto label_17f0f0;
        case 0x17f0f4u: goto label_17f0f4;
        case 0x17f0f8u: goto label_17f0f8;
        case 0x17f0fcu: goto label_17f0fc;
        case 0x17f100u: goto label_17f100;
        case 0x17f104u: goto label_17f104;
        case 0x17f108u: goto label_17f108;
        case 0x17f10cu: goto label_17f10c;
        case 0x17f110u: goto label_17f110;
        case 0x17f114u: goto label_17f114;
        case 0x17f118u: goto label_17f118;
        case 0x17f11cu: goto label_17f11c;
        case 0x17f120u: goto label_17f120;
        case 0x17f124u: goto label_17f124;
        case 0x17f128u: goto label_17f128;
        case 0x17f12cu: goto label_17f12c;
        case 0x17f130u: goto label_17f130;
        case 0x17f134u: goto label_17f134;
        case 0x17f138u: goto label_17f138;
        case 0x17f13cu: goto label_17f13c;
        case 0x17f140u: goto label_17f140;
        case 0x17f144u: goto label_17f144;
        case 0x17f148u: goto label_17f148;
        case 0x17f14cu: goto label_17f14c;
        case 0x17f150u: goto label_17f150;
        case 0x17f154u: goto label_17f154;
        case 0x17f158u: goto label_17f158;
        case 0x17f15cu: goto label_17f15c;
        case 0x17f160u: goto label_17f160;
        case 0x17f164u: goto label_17f164;
        case 0x17f168u: goto label_17f168;
        case 0x17f16cu: goto label_17f16c;
        case 0x17f170u: goto label_17f170;
        case 0x17f174u: goto label_17f174;
        case 0x17f178u: goto label_17f178;
        case 0x17f17cu: goto label_17f17c;
        case 0x17f180u: goto label_17f180;
        case 0x17f184u: goto label_17f184;
        case 0x17f188u: goto label_17f188;
        case 0x17f18cu: goto label_17f18c;
        case 0x17f190u: goto label_17f190;
        case 0x17f194u: goto label_17f194;
        case 0x17f198u: goto label_17f198;
        case 0x17f19cu: goto label_17f19c;
        case 0x17f1a0u: goto label_17f1a0;
        case 0x17f1a4u: goto label_17f1a4;
        case 0x17f1a8u: goto label_17f1a8;
        case 0x17f1acu: goto label_17f1ac;
        case 0x17f1b0u: goto label_17f1b0;
        case 0x17f1b4u: goto label_17f1b4;
        case 0x17f1b8u: goto label_17f1b8;
        case 0x17f1bcu: goto label_17f1bc;
        case 0x17f1c0u: goto label_17f1c0;
        case 0x17f1c4u: goto label_17f1c4;
        case 0x17f1c8u: goto label_17f1c8;
        case 0x17f1ccu: goto label_17f1cc;
        case 0x17f1d0u: goto label_17f1d0;
        case 0x17f1d4u: goto label_17f1d4;
        case 0x17f1d8u: goto label_17f1d8;
        case 0x17f1dcu: goto label_17f1dc;
        case 0x17f1e0u: goto label_17f1e0;
        case 0x17f1e4u: goto label_17f1e4;
        case 0x17f1e8u: goto label_17f1e8;
        case 0x17f1ecu: goto label_17f1ec;
        case 0x17f1f0u: goto label_17f1f0;
        case 0x17f1f4u: goto label_17f1f4;
        case 0x17f1f8u: goto label_17f1f8;
        case 0x17f1fcu: goto label_17f1fc;
        case 0x17f200u: goto label_17f200;
        case 0x17f204u: goto label_17f204;
        case 0x17f208u: goto label_17f208;
        case 0x17f20cu: goto label_17f20c;
        case 0x17f210u: goto label_17f210;
        case 0x17f214u: goto label_17f214;
        case 0x17f218u: goto label_17f218;
        case 0x17f21cu: goto label_17f21c;
        case 0x17f220u: goto label_17f220;
        case 0x17f224u: goto label_17f224;
        case 0x17f228u: goto label_17f228;
        case 0x17f22cu: goto label_17f22c;
        case 0x17f230u: goto label_17f230;
        case 0x17f234u: goto label_17f234;
        case 0x17f238u: goto label_17f238;
        case 0x17f23cu: goto label_17f23c;
        case 0x17f240u: goto label_17f240;
        case 0x17f244u: goto label_17f244;
        case 0x17f248u: goto label_17f248;
        case 0x17f24cu: goto label_17f24c;
        case 0x17f250u: goto label_17f250;
        case 0x17f254u: goto label_17f254;
        case 0x17f258u: goto label_17f258;
        case 0x17f25cu: goto label_17f25c;
        case 0x17f260u: goto label_17f260;
        case 0x17f264u: goto label_17f264;
        case 0x17f268u: goto label_17f268;
        case 0x17f26cu: goto label_17f26c;
        case 0x17f270u: goto label_17f270;
        case 0x17f274u: goto label_17f274;
        case 0x17f278u: goto label_17f278;
        case 0x17f27cu: goto label_17f27c;
        case 0x17f280u: goto label_17f280;
        case 0x17f284u: goto label_17f284;
        case 0x17f288u: goto label_17f288;
        case 0x17f28cu: goto label_17f28c;
        case 0x17f290u: goto label_17f290;
        case 0x17f294u: goto label_17f294;
        case 0x17f298u: goto label_17f298;
        case 0x17f29cu: goto label_17f29c;
        case 0x17f2a0u: goto label_17f2a0;
        case 0x17f2a4u: goto label_17f2a4;
        case 0x17f2a8u: goto label_17f2a8;
        case 0x17f2acu: goto label_17f2ac;
        case 0x17f2b0u: goto label_17f2b0;
        case 0x17f2b4u: goto label_17f2b4;
        case 0x17f2b8u: goto label_17f2b8;
        case 0x17f2bcu: goto label_17f2bc;
        case 0x17f2c0u: goto label_17f2c0;
        case 0x17f2c4u: goto label_17f2c4;
        case 0x17f2c8u: goto label_17f2c8;
        case 0x17f2ccu: goto label_17f2cc;
        case 0x17f2d0u: goto label_17f2d0;
        case 0x17f2d4u: goto label_17f2d4;
        case 0x17f2d8u: goto label_17f2d8;
        case 0x17f2dcu: goto label_17f2dc;
        case 0x17f2e0u: goto label_17f2e0;
        case 0x17f2e4u: goto label_17f2e4;
        case 0x17f2e8u: goto label_17f2e8;
        case 0x17f2ecu: goto label_17f2ec;
        case 0x17f2f0u: goto label_17f2f0;
        case 0x17f2f4u: goto label_17f2f4;
        case 0x17f2f8u: goto label_17f2f8;
        case 0x17f2fcu: goto label_17f2fc;
        case 0x17f300u: goto label_17f300;
        case 0x17f304u: goto label_17f304;
        case 0x17f308u: goto label_17f308;
        case 0x17f30cu: goto label_17f30c;
        case 0x17f310u: goto label_17f310;
        case 0x17f314u: goto label_17f314;
        case 0x17f318u: goto label_17f318;
        case 0x17f31cu: goto label_17f31c;
        case 0x17f320u: goto label_17f320;
        case 0x17f324u: goto label_17f324;
        case 0x17f328u: goto label_17f328;
        case 0x17f32cu: goto label_17f32c;
        case 0x17f330u: goto label_17f330;
        case 0x17f334u: goto label_17f334;
        case 0x17f338u: goto label_17f338;
        case 0x17f33cu: goto label_17f33c;
        case 0x17f340u: goto label_17f340;
        case 0x17f344u: goto label_17f344;
        case 0x17f348u: goto label_17f348;
        case 0x17f34cu: goto label_17f34c;
        default: return;
    }

label_17eb80:
    // 0x17eb80: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17eb84:
    // 0x17eb84: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eb88:
    // 0x17eb88: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17eb8c:
    // 0x17eb8c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eb90:
    // 0x17eb90: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17eb94:
    // 0x17eb94: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17eb98:
    // 0x17eb98: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eb9c:
    // 0x17eb9c: 0x10000018  b           . + 4 + (0x18 << 2)
label_17eba0:
    if (ctx->pc == 0x17EBA0u) {
        ctx->pc = 0x17EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB9Cu;
        // 0x17eba0: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EBA4u;
        goto label_17eba4;
    }
    ctx->pc = 0x17EB9Cu;
    {
        const bool branch_taken_0x17eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB9Cu;
        // 0x17eba0: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb9c) {
            ctx->pc = 0x17EC00u;
            goto label_17ec00;
        }
    }
    ctx->pc = 0x17EBA4u;
label_17eba4:
    // 0x17eba4: 0x0  nop
    ctx->pc = 0x17eba4u;
    // NOP
label_17eba8:
    // 0x17eba8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17ebac:
    // 0x17ebac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17ebb0:
    if (ctx->pc == 0x17EBB0u) {
        ctx->pc = 0x17EBB4u;
        goto label_17ebb4;
    }
    ctx->pc = 0x17EBACu;
    {
        const bool branch_taken_0x17ebac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ebac) {
            ctx->pc = 0x17EBBCu;
            goto label_17ebbc;
        }
    }
    ctx->pc = 0x17EBB4u;
label_17ebb4:
    // 0x17ebb4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17ebb8:
    if (ctx->pc == 0x17EBB8u) {
        ctx->pc = 0x17EBBCu;
        goto label_17ebbc;
    }
    ctx->pc = 0x17EBB4u;
    {
        const bool branch_taken_0x17ebb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ebb4) {
            ctx->pc = 0x17EBD8u;
            goto label_17ebd8;
        }
    }
    ctx->pc = 0x17EBBCu;
label_17ebbc:
    // 0x17ebbc: 0x0  nop
    ctx->pc = 0x17ebbcu;
    // NOP
label_17ebc0:
    // 0x17ebc0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebc4:
    // 0x17ebc4: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17ebc8:
    // 0x17ebc8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17ebcc:
    // 0x17ebcc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebd0:
    // 0x17ebd0: 0x1000000b  b           . + 4 + (0xB << 2)
label_17ebd4:
    if (ctx->pc == 0x17EBD4u) {
        ctx->pc = 0x17EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBD0u;
        // 0x17ebd4: 0xaf83877c  sw          $v1, -0x7884($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EBD8u;
        goto label_17ebd8;
    }
    ctx->pc = 0x17EBD0u;
    {
        const bool branch_taken_0x17ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBD0u;
        // 0x17ebd4: 0xaf83877c  sw          $v1, -0x7884($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebd0) {
            ctx->pc = 0x17EC00u;
            goto label_17ec00;
        }
    }
    ctx->pc = 0x17EBD8u;
label_17ebd8:
    // 0x17ebd8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebdc:
    // 0x17ebdc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17ebe0:
    // 0x17ebe0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17ebe4:
    // 0x17ebe4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebe8:
    // 0x17ebe8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17ebec:
    // 0x17ebec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebf0:
    // 0x17ebf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_17ebf4:
    if (ctx->pc == 0x17EBF4u) {
        ctx->pc = 0x17EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBF0u;
        // 0x17ebf4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EBF8u;
        goto label_17ebf8;
    }
    ctx->pc = 0x17EBF0u;
    {
        const bool branch_taken_0x17ebf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBF0u;
        // 0x17ebf4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebf0) {
            ctx->pc = 0x17EC00u;
            goto label_17ec00;
        }
    }
    ctx->pc = 0x17EBF8u;
label_17ebf8:
    // 0x17ebf8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ebfc:
    // 0x17ebfc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17ec00:
    // 0x17ec00: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17ec00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17ec04:
    // 0x17ec04: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ec08:
    // 0x17ec08: 0xaf848790  sw          $a0, -0x7870($gp)
    ctx->pc = 0x17ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 4));
label_17ec0c:
    // 0x17ec0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_17ec10:
    if (ctx->pc == 0x17EC10u) {
        ctx->pc = 0x17EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC0Cu;
        // 0x17ec10: 0xaf838788  sw          $v1, -0x7878($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EC14u;
        goto label_17ec14;
    }
    ctx->pc = 0x17EC0Cu;
    {
        const bool branch_taken_0x17ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC0Cu;
        // 0x17ec10: 0xaf838788  sw          $v1, -0x7878($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec0c) {
            ctx->pc = 0x17EC2Cu;
            goto label_17ec2c;
        }
    }
    ctx->pc = 0x17EC14u;
label_17ec14:
    // 0x17ec14: 0x0  nop
    ctx->pc = 0x17ec14u;
    // NOP
label_17ec18:
    // 0x17ec18: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ec1c:
    // 0x17ec1c: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17ec20:
    // 0x17ec20: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17ec24:
    // 0x17ec24: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ec28:
    // 0x17ec28: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17ec2c:
    // 0x17ec2c: 0x0  nop
    ctx->pc = 0x17ec2cu;
    // NOP
label_17ec30:
    // 0x17ec30: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ec34:
    // 0x17ec34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17ec38:
    // 0x17ec38: 0x34213fb1  ori         $at, $at, 0x3FB1
    ctx->pc = 0x17ec38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16305);
label_17ec3c:
    // 0x17ec3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_17ec40:
    // 0x17ec40: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17ec44:
    // 0x17ec44: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ec48:
    // 0x17ec48: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17ec48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_17ec4c:
    // 0x17ec4c: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
label_17ec50:
    if (ctx->pc == 0x17EC50u) {
        ctx->pc = 0x17EC54u;
        goto label_17ec54;
    }
    ctx->pc = 0x17EC4Cu;
    {
        const bool branch_taken_0x17ec4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ec4c) {
            ctx->pc = 0x17ECE0u;
            goto label_17ece0;
        }
    }
    ctx->pc = 0x17EC54u;
label_17ec54:
    // 0x17ec54: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17ec58:
    // 0x17ec58: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17ec5c:
    // 0x17ec5c: 0xc05e75c  jal         func_179D70
label_17ec60:
    if (ctx->pc == 0x17EC60u) {
        ctx->pc = 0x17EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC5Cu;
        // 0x17ec60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EC64u;
        goto label_17ec64;
    }
    ctx->pc = 0x17EC5Cu;
    SET_GPR_U32(ctx, 31, 0x17EC64u);
    ctx->pc = 0x17EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC5Cu;
    // 0x17ec60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D70u, 0x17EC5Cu, 0x17EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC64u;
label_17ec64:
    // 0x17ec64: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17ec68:
    // 0x17ec68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17ec6c:
    // 0x17ec6c: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17ec70:
    // 0x17ec70: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17ec74:
    // 0x17ec74: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17ec78:
    // 0x17ec78: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17ec7c:
    // 0x17ec7c: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17ec80:
    // 0x17ec80: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17ec84:
    // 0x17ec84: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17ec88:
    // 0x17ec88: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17ec8c:
    // 0x17ec8c: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17ec90:
    // 0x17ec90: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17ec94:
    // 0x17ec94: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17ec98:
    // 0x17ec98: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17ec9c:
    // 0x17ec9c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17ec9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17eca0:
    // 0x17eca0: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17eca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17eca4:
    // 0x17eca4: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17eca4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17eca8:
    // 0x17eca8: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17eca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17ecac:
    // 0x17ecac: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17ecacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17ecb0:
    // 0x17ecb0: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17ecb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17ecb4:
    // 0x17ecb4: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17ecb4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17ecb8:
    // 0x17ecb8: 0x10000009  b           . + 4 + (0x9 << 2)
label_17ecbc:
    if (ctx->pc == 0x17ECBCu) {
        ctx->pc = 0x17ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECB8u;
        // 0x17ecbc: 0xd8680030  lqc2        $vf8, 0x30($v1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ECC0u;
        goto label_17ecc0;
    }
    ctx->pc = 0x17ECB8u;
    {
        const bool branch_taken_0x17ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECB8u;
        // 0x17ecbc: 0xd8680030  lqc2        $vf8, 0x30($v1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecb8) {
            ctx->pc = 0x17ECE0u;
            goto label_17ece0;
        }
    }
    ctx->pc = 0x17ECC0u;
label_17ecc0:
    // 0x17ecc0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_17ecc4:
    if (ctx->pc == 0x17ECC4u) {
        ctx->pc = 0x17ECC8u;
        goto label_17ecc8;
    }
    ctx->pc = 0x17ECC0u;
    {
        const bool branch_taken_0x17ecc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ecc0) {
            ctx->pc = 0x17ECE0u;
            goto label_17ece0;
        }
    }
    ctx->pc = 0x17ECC8u;
label_17ecc8:
    // 0x17ecc8: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17eccc:
    // 0x17eccc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x17ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_17ecd0:
    // 0x17ecd0: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_17ecd4:
    // 0x17ecd4: 0x802027  not         $a0, $a0
    ctx->pc = 0x17ecd4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_17ecd8:
    // 0x17ecd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17ecdc:
    // 0x17ecdc: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17ece0:
    // 0x17ece0: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17ece4:
    // 0x17ece4: 0x2402027  not         $a0, $s2
    ctx->pc = 0x17ece4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 18) | GPR_U64(ctx, 0)));
label_17ece8:
    // 0x17ece8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17ecec:
    // 0x17ecec: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17ececu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17ecf0:
    // 0x17ecf0: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17ecf4:
    // 0x17ecf4: 0x8f838794  lw          $v1, -0x786C($gp)
    ctx->pc = 0x17ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17ecf8:
    // 0x17ecf8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17ecfc:
    // 0x17ecfc: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17ed00:
    // 0x17ed00: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x17ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_17ed04:
    // 0x17ed04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17ed04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17ed08:
    // 0x17ed08: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x17ed08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_17ed0c:
    // 0x17ed0c: 0x1460fee7  bnez        $v1, . + 4 + (-0x119 << 2)
label_17ed10:
    if (ctx->pc == 0x17ED10u) {
        ctx->pc = 0x17ED14u;
        goto label_17ed14;
    }
    ctx->pc = 0x17ED0Cu;
    {
        const bool branch_taken_0x17ed0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ed0c) {
            ctx->pc = 0x17E8ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17e8ac; return; }
        }
    }
    ctx->pc = 0x17ED14u;
label_17ed14:
    // 0x17ed14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17ed18:
    // 0x17ed18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17ed18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ed1c:
    // 0x17ed1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17ed1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17ed20:
    // 0x17ed20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17ed20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17ed24:
    // 0x17ed24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ed24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17ed28:
    // 0x17ed28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ed28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17ed2c:
    // 0x17ed2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ed2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ed30:
    // 0x17ed30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ed30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ed34:
    // 0x17ed34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ed34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ed38:
    // 0x17ed38: 0x3e00008  jr          $ra
label_17ed3c:
    if (ctx->pc == 0x17ED3Cu) {
        ctx->pc = 0x17ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED38u;
        // 0x17ed3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED40u;
        goto label_17ed40;
    }
    ctx->pc = 0x17ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED38u;
        // 0x17ed3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED40u;
label_17ed40:
    // 0x17ed40: 0x4be929bc  vmulax.xyzw $ACC, $vf5, $vf9x
    ctx->pc = 0x17ed40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed44:
    // 0x17ed44: 0x4be930bd  vmadday.xyzw $ACC, $vf6, $vf9y
    ctx->pc = 0x17ed44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed48:
    // 0x17ed48: 0x4be938be  vmaddaz.xyzw $ACC, $vf7, $vf9z
    ctx->pc = 0x17ed48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed4c:
    // 0x17ed4c: 0x4be0444b  vmaddw.xyzw $vf17, $vf8, $vf0w
    ctx->pc = 0x17ed4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ed50:
    // 0x17ed50: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ed50u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ed54:
    // 0x17ed54: 0x4bea29bc  vmulax.xyzw $ACC, $vf5, $vf10x
    ctx->pc = 0x17ed54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed58:
    // 0x17ed58: 0x4bea30bd  vmadday.xyzw $ACC, $vf6, $vf10y
    ctx->pc = 0x17ed58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed5c:
    // 0x17ed5c: 0x4bea38be  vmaddaz.xyzw $ACC, $vf7, $vf10z
    ctx->pc = 0x17ed5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed60:
    // 0x17ed60: 0x4be0444b  vmaddw.xyzw $vf17, $vf8, $vf0w
    ctx->pc = 0x17ed60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ed64:
    // 0x17ed64: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ed64u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ed68:
    // 0x17ed68: 0x4beb29bc  vmulax.xyzw $ACC, $vf5, $vf11x
    ctx->pc = 0x17ed68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed6c:
    // 0x17ed6c: 0x4beb30bd  vmadday.xyzw $ACC, $vf6, $vf11y
    ctx->pc = 0x17ed6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed70:
    // 0x17ed70: 0x4beb38be  vmaddaz.xyzw $ACC, $vf7, $vf11z
    ctx->pc = 0x17ed70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed74:
    // 0x17ed74: 0x4be0444b  vmaddw.xyzw $vf17, $vf8, $vf0w
    ctx->pc = 0x17ed74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ed78:
    // 0x17ed78: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ed78u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ed7c:
    // 0x17ed7c: 0x4bec29bc  vmulax.xyzw $ACC, $vf5, $vf12x
    ctx->pc = 0x17ed7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed80:
    // 0x17ed80: 0x4bec30bd  vmadday.xyzw $ACC, $vf6, $vf12y
    ctx->pc = 0x17ed80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed84:
    // 0x17ed84: 0x4bec38be  vmaddaz.xyzw $ACC, $vf7, $vf12z
    ctx->pc = 0x17ed84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed88:
    // 0x17ed88: 0x4be0444b  vmaddw.xyzw $vf17, $vf8, $vf0w
    ctx->pc = 0x17ed88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ed8c:
    // 0x17ed8c: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ed8cu;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ed90:
    // 0x17ed90: 0x4bed29bc  vmulax.xyzw $ACC, $vf5, $vf13x
    ctx->pc = 0x17ed90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed94:
    // 0x17ed94: 0x4bed30bd  vmadday.xyzw $ACC, $vf6, $vf13y
    ctx->pc = 0x17ed94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed98:
    // 0x17ed98: 0x4bed38be  vmaddaz.xyzw $ACC, $vf7, $vf13z
    ctx->pc = 0x17ed98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ed9c:
    // 0x17ed9c: 0x4be0448b  vmaddw.xyzw $vf18, $vf8, $vf0w
    ctx->pc = 0x17ed9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17eda0:
    // 0x17eda0: 0x4bee29bc  vmulax.xyzw $ACC, $vf5, $vf14x
    ctx->pc = 0x17eda0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eda4:
    // 0x17eda4: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x17eda4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17eda8:
    // 0x17eda8: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17eda8u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17edac:
    // 0x17edac: 0x4bee30bd  vmadday.xyzw $ACC, $vf6, $vf14y
    ctx->pc = 0x17edacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edb0:
    // 0x17edb0: 0x4bee38be  vmaddaz.xyzw $ACC, $vf7, $vf14z
    ctx->pc = 0x17edb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edb4:
    // 0x17edb4: 0x4be0448b  vmaddw.xyzw $vf18, $vf8, $vf0w
    ctx->pc = 0x17edb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17edb8:
    // 0x17edb8: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17edb8u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17edbc:
    // 0x17edbc: 0x4bef29bc  vmulax.xyzw $ACC, $vf5, $vf15x
    ctx->pc = 0x17edbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edc0:
    // 0x17edc0: 0x4bef30bd  vmadday.xyzw $ACC, $vf6, $vf15y
    ctx->pc = 0x17edc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edc4:
    // 0x17edc4: 0x4bef38be  vmaddaz.xyzw $ACC, $vf7, $vf15z
    ctx->pc = 0x17edc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edc8:
    // 0x17edc8: 0x4be0448b  vmaddw.xyzw $vf18, $vf8, $vf0w
    ctx->pc = 0x17edc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17edcc:
    // 0x17edcc: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17edccu;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17edd0:
    // 0x17edd0: 0x4bf029bc  vmulax.xyzw $ACC, $vf5, $vf16x
    ctx->pc = 0x17edd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edd4:
    // 0x17edd4: 0x4bf030bd  vmadday.xyzw $ACC, $vf6, $vf16y
    ctx->pc = 0x17edd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17edd8:
    // 0x17edd8: 0x4bf038be  vmaddaz.xyzw $ACC, $vf7, $vf16z
    ctx->pc = 0x17edd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eddc:
    // 0x17eddc: 0x4be0448b  vmaddw.xyzw $vf18, $vf8, $vf0w
    ctx->pc = 0x17eddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17ede0:
    // 0x17ede0: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ede0u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ede4:
    // 0x17ede4: 0x4a0002ff  vnop
    ctx->pc = 0x17ede4u;
    // NOP operation, no action needed for VU0
label_17ede8:
    // 0x17ede8: 0x4a0002ff  vnop
    ctx->pc = 0x17ede8u;
    // NOP operation, no action needed for VU0
label_17edec:
    // 0x17edec: 0x4a0002ff  vnop
    ctx->pc = 0x17edecu;
    // NOP operation, no action needed for VU0
label_17edf0:
    // 0x17edf0: 0x4a0002ff  vnop
    ctx->pc = 0x17edf0u;
    // NOP operation, no action needed for VU0
label_17edf4:
    // 0x17edf4: 0x4a0002ff  vnop
    ctx->pc = 0x17edf4u;
    // NOP operation, no action needed for VU0
label_17edf8:
    // 0x17edf8: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x17edf8u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17edfc:
    // 0x17edfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17ee00:
    // 0x17ee00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17ee00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_17ee04:
    // 0x17ee04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ee04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17ee08:
    // 0x17ee08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17ee08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_17ee0c:
    // 0x17ee0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x17ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_17ee10:
    // 0x17ee10: 0x3e00008  jr          $ra
label_17ee14:
    if (ctx->pc == 0x17EE14u) {
        ctx->pc = 0x17EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE10u;
        // 0x17ee14: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE18u;
        goto label_17ee18;
    }
    ctx->pc = 0x17EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE10u;
        // 0x17ee14: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE18u;
label_17ee18:
    // 0x17ee18: 0x0  nop
    ctx->pc = 0x17ee18u;
    // NOP
label_17ee1c:
    // 0x17ee1c: 0x0  nop
    ctx->pc = 0x17ee1cu;
    // NOP
label_17ee20:
    // 0x17ee20: 0x4be909bc  vmulax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17ee20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee24:
    // 0x17ee24: 0x4be910bd  vmadday.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17ee24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee28:
    // 0x17ee28: 0x4be918be  vmaddaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17ee28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee2c:
    // 0x17ee2c: 0x4be0244b  vmaddw.xyzw $vf17, $vf4, $vf0w
    ctx->pc = 0x17ee2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ee30:
    // 0x17ee30: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee30u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee34:
    // 0x17ee34: 0x4bea09bc  vmulax.xyzw $ACC, $vf1, $vf10x
    ctx->pc = 0x17ee34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee38:
    // 0x17ee38: 0x4bea10bd  vmadday.xyzw $ACC, $vf2, $vf10y
    ctx->pc = 0x17ee38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee3c:
    // 0x17ee3c: 0x4bea18be  vmaddaz.xyzw $ACC, $vf3, $vf10z
    ctx->pc = 0x17ee3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee40:
    // 0x17ee40: 0x4be0244b  vmaddw.xyzw $vf17, $vf4, $vf0w
    ctx->pc = 0x17ee40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ee44:
    // 0x17ee44: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee44u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee48:
    // 0x17ee48: 0x4beb09bc  vmulax.xyzw $ACC, $vf1, $vf11x
    ctx->pc = 0x17ee48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee4c:
    // 0x17ee4c: 0x4beb10bd  vmadday.xyzw $ACC, $vf2, $vf11y
    ctx->pc = 0x17ee4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee50:
    // 0x17ee50: 0x4beb18be  vmaddaz.xyzw $ACC, $vf3, $vf11z
    ctx->pc = 0x17ee50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee54:
    // 0x17ee54: 0x4be0244b  vmaddw.xyzw $vf17, $vf4, $vf0w
    ctx->pc = 0x17ee54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ee58:
    // 0x17ee58: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee58u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee5c:
    // 0x17ee5c: 0x4bec09bc  vmulax.xyzw $ACC, $vf1, $vf12x
    ctx->pc = 0x17ee5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee60:
    // 0x17ee60: 0x4bec10bd  vmadday.xyzw $ACC, $vf2, $vf12y
    ctx->pc = 0x17ee60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee64:
    // 0x17ee64: 0x4bec18be  vmaddaz.xyzw $ACC, $vf3, $vf12z
    ctx->pc = 0x17ee64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee68:
    // 0x17ee68: 0x4be0244b  vmaddw.xyzw $vf17, $vf4, $vf0w
    ctx->pc = 0x17ee68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_17ee6c:
    // 0x17ee6c: 0x4bd189ff  .word       0x4BD189FF                   # vclipw.xyz  $vf17, $vf17w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee6cu;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee70:
    // 0x17ee70: 0x4bed09bc  vmulax.xyzw $ACC, $vf1, $vf13x
    ctx->pc = 0x17ee70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee74:
    // 0x17ee74: 0x4bed10bd  vmadday.xyzw $ACC, $vf2, $vf13y
    ctx->pc = 0x17ee74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee78:
    // 0x17ee78: 0x4bed18be  vmaddaz.xyzw $ACC, $vf3, $vf13z
    ctx->pc = 0x17ee78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee7c:
    // 0x17ee7c: 0x4be0248b  vmaddw.xyzw $vf18, $vf4, $vf0w
    ctx->pc = 0x17ee7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17ee80:
    // 0x17ee80: 0x4bee09bc  vmulax.xyzw $ACC, $vf1, $vf14x
    ctx->pc = 0x17ee80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee84:
    // 0x17ee84: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x17ee84u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17ee88:
    // 0x17ee88: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee88u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee8c:
    // 0x17ee8c: 0x4bee10bd  vmadday.xyzw $ACC, $vf2, $vf14y
    ctx->pc = 0x17ee8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee90:
    // 0x17ee90: 0x4bee18be  vmaddaz.xyzw $ACC, $vf3, $vf14z
    ctx->pc = 0x17ee90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17ee94:
    // 0x17ee94: 0x4be0248b  vmaddw.xyzw $vf18, $vf4, $vf0w
    ctx->pc = 0x17ee94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17ee98:
    // 0x17ee98: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ee98u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17ee9c:
    // 0x17ee9c: 0x4bef09bc  vmulax.xyzw $ACC, $vf1, $vf15x
    ctx->pc = 0x17ee9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eea0:
    // 0x17eea0: 0x4bef10bd  vmadday.xyzw $ACC, $vf2, $vf15y
    ctx->pc = 0x17eea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eea4:
    // 0x17eea4: 0x4bef18be  vmaddaz.xyzw $ACC, $vf3, $vf15z
    ctx->pc = 0x17eea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eea8:
    // 0x17eea8: 0x4be0248b  vmaddw.xyzw $vf18, $vf4, $vf0w
    ctx->pc = 0x17eea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17eeac:
    // 0x17eeac: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17eeacu;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17eeb0:
    // 0x17eeb0: 0x4bf009bc  vmulax.xyzw $ACC, $vf1, $vf16x
    ctx->pc = 0x17eeb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eeb4:
    // 0x17eeb4: 0x4bf010bd  vmadday.xyzw $ACC, $vf2, $vf16y
    ctx->pc = 0x17eeb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eeb8:
    // 0x17eeb8: 0x4bf018be  vmaddaz.xyzw $ACC, $vf3, $vf16z
    ctx->pc = 0x17eeb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17eebc:
    // 0x17eebc: 0x4be0248b  vmaddw.xyzw $vf18, $vf4, $vf0w
    ctx->pc = 0x17eebcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
label_17eec0:
    // 0x17eec0: 0x4bd291ff  .word       0x4BD291FF                   # vclipw.xyz  $vf18, $vf18w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17eec0u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17eec4:
    // 0x17eec4: 0x4a0002ff  vnop
    ctx->pc = 0x17eec4u;
    // NOP operation, no action needed for VU0
label_17eec8:
    // 0x17eec8: 0x4a0002ff  vnop
    ctx->pc = 0x17eec8u;
    // NOP operation, no action needed for VU0
label_17eecc:
    // 0x17eecc: 0x4a0002ff  vnop
    ctx->pc = 0x17eeccu;
    // NOP operation, no action needed for VU0
label_17eed0:
    // 0x17eed0: 0x4a0002ff  vnop
    ctx->pc = 0x17eed0u;
    // NOP operation, no action needed for VU0
label_17eed4:
    // 0x17eed4: 0x4a0002ff  vnop
    ctx->pc = 0x17eed4u;
    // NOP operation, no action needed for VU0
label_17eed8:
    // 0x17eed8: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x17eed8u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17eedc:
    // 0x17eedc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17eee0:
    // 0x17eee0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17eee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_17eee4:
    // 0x17eee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17eee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17eee8:
    // 0x17eee8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17eee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_17eeec:
    // 0x17eeec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x17eeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_17eef0:
    // 0x17eef0: 0x3e00008  jr          $ra
label_17eef4:
    if (ctx->pc == 0x17EEF4u) {
        ctx->pc = 0x17EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF0u;
        // 0x17eef4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEF8u;
        goto label_17eef8;
    }
    ctx->pc = 0x17EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF0u;
        // 0x17eef4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EEF8u;
label_17eef8:
    // 0x17eef8: 0x0  nop
    ctx->pc = 0x17eef8u;
    // NOP
label_17eefc:
    // 0x17eefc: 0x0  nop
    ctx->pc = 0x17eefcu;
    // NOP
label_17ef00:
    // 0x17ef00: 0x2407befb  addiu       $a3, $zero, -0x4105
    ctx->pc = 0x17ef00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950651));
label_17ef04:
    // 0x17ef04: 0x3403efbe  ori         $v1, $zero, 0xEFBE
    ctx->pc = 0x17ef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61374);
label_17ef08:
    // 0x17ef08: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x17ef08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_17ef0c:
    // 0x17ef0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17ef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_17ef10:
    // 0x17ef10: 0x3467fbef  ori         $a3, $v1, 0xFBEF
    ctx->pc = 0x17ef10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64495);
label_17ef14:
    // 0x17ef14: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x17ef14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17ef18:
    // 0x17ef18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17ef1c:
    // 0x17ef1c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x17ef1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_17ef20:
    // 0x17ef20: 0x884025  or          $t0, $a0, $t0
    ctx->pc = 0x17ef20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_17ef24:
    // 0x17ef24: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17ef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17ef28:
    // 0x17ef28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_17ef2c:
    // 0x17ef2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_17ef30:
    // 0x17ef30: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x17ef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_17ef34:
    // 0x17ef34: 0x1103006e  beq         $t0, $v1, . + 4 + (0x6E << 2)
label_17ef38:
    if (ctx->pc == 0x17EF38u) {
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF34u;
        // 0x17ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF3Cu;
        goto label_17ef3c;
    }
    ctx->pc = 0x17EF34u;
    {
        const bool branch_taken_0x17ef34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF34u;
        // 0x17ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef34) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EF3Cu;
label_17ef3c:
    // 0x17ef3c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_17ef40:
    // 0x17ef40: 0x3407df7d  ori         $a3, $zero, 0xDF7D
    ctx->pc = 0x17ef40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57213);
label_17ef44:
    // 0x17ef44: 0x35087df7  ori         $t0, $t0, 0x7DF7
    ctx->pc = 0x17ef44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32247);
label_17ef48:
    // 0x17ef48: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x17ef48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_17ef4c:
    // 0x17ef4c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17ef4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_17ef50:
    // 0x17ef50: 0x34e7f7df  ori         $a3, $a3, 0xF7DF
    ctx->pc = 0x17ef50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)63455);
label_17ef54:
    // 0x17ef54: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17ef54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17ef58:
    // 0x17ef58: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x17ef58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_17ef5c:
    // 0x17ef5c: 0x10e30064  beq         $a3, $v1, . + 4 + (0x64 << 2)
label_17ef60:
    if (ctx->pc == 0x17EF60u) {
        ctx->pc = 0x17EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF5Cu;
        // 0x17ef60: 0x3407befb  ori         $a3, $zero, 0xBEFB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48891);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF64u;
        goto label_17ef64;
    }
    ctx->pc = 0x17EF5Cu;
    {
        const bool branch_taken_0x17ef5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x17EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF5Cu;
        // 0x17ef60: 0x3407befb  ori         $a3, $zero, 0xBEFB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48891);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef5c) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EF64u;
label_17ef64:
    // 0x17ef64: 0x2408fbef  addiu       $t0, $zero, -0x411
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966255));
label_17ef68:
    // 0x17ef68: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x17ef68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_17ef6c:
    // 0x17ef6c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17ef6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_17ef70:
    // 0x17ef70: 0x34e7efbe  ori         $a3, $a3, 0xEFBE
    ctx->pc = 0x17ef70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61374);
label_17ef74:
    // 0x17ef74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17ef74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17ef78:
    // 0x17ef78: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x17ef78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_17ef7c:
    // 0x17ef7c: 0x10e3005c  beq         $a3, $v1, . + 4 + (0x5C << 2)
label_17ef80:
    if (ctx->pc == 0x17EF80u) {
        ctx->pc = 0x17EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF7Cu;
        // 0x17ef80: 0x2408f7df  addiu       $t0, $zero, -0x821 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965215));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF84u;
        goto label_17ef84;
    }
    ctx->pc = 0x17EF7Cu;
    {
        const bool branch_taken_0x17ef7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x17EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF7Cu;
        // 0x17ef80: 0x2408f7df  addiu       $t0, $zero, -0x821 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef7c) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EF84u;
label_17ef84:
    // 0x17ef84: 0x3c077df7  lui         $a3, 0x7DF7
    ctx->pc = 0x17ef84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32247 << 16));
label_17ef88:
    // 0x17ef88: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17ef88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_17ef8c:
    // 0x17ef8c: 0x34e7df7d  ori         $a3, $a3, 0xDF7D
    ctx->pc = 0x17ef8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57213);
label_17ef90:
    // 0x17ef90: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17ef90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17ef94:
    // 0x17ef94: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x17ef94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_17ef98:
    // 0x17ef98: 0x10e30055  beq         $a3, $v1, . + 4 + (0x55 << 2)
label_17ef9c:
    if (ctx->pc == 0x17EF9Cu) {
        ctx->pc = 0x17EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF98u;
        // 0x17ef9c: 0x3407fbef  ori         $a3, $zero, 0xFBEF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64495);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EFA0u;
        goto label_17efa0;
    }
    ctx->pc = 0x17EF98u;
    {
        const bool branch_taken_0x17ef98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x17EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF98u;
        // 0x17ef9c: 0x3407fbef  ori         $a3, $zero, 0xFBEF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64495);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef98) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EFA0u;
label_17efa0:
    // 0x17efa0: 0x2408efbe  addiu       $t0, $zero, -0x1042
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963134));
label_17efa4:
    // 0x17efa4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x17efa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_17efa8:
    // 0x17efa8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17efa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_17efac:
    // 0x17efac: 0x34e7befb  ori         $a3, $a3, 0xBEFB
    ctx->pc = 0x17efacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)48891);
label_17efb0:
    // 0x17efb0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17efb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17efb4:
    // 0x17efb4: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x17efb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_17efb8:
    // 0x17efb8: 0x10e3004d  beq         $a3, $v1, . + 4 + (0x4D << 2)
label_17efbc:
    if (ctx->pc == 0x17EFBCu) {
        ctx->pc = 0x17EFC0u;
        goto label_17efc0;
    }
    ctx->pc = 0x17EFB8u;
    {
        const bool branch_taken_0x17efb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x17efb8) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EFC0u;
label_17efc0:
    // 0x17efc0: 0x3407f7df  ori         $a3, $zero, 0xF7DF
    ctx->pc = 0x17efc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63455);
label_17efc4:
    // 0x17efc4: 0x2408df7d  addiu       $t0, $zero, -0x2083
    ctx->pc = 0x17efc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294958973));
label_17efc8:
    // 0x17efc8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x17efc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_17efcc:
    // 0x17efcc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17efccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_17efd0:
    // 0x17efd0: 0x34e77df7  ori         $a3, $a3, 0x7DF7
    ctx->pc = 0x17efd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32247);
label_17efd4:
    // 0x17efd4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17efd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_17efd8:
    // 0x17efd8: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x17efd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_17efdc:
    // 0x17efdc: 0x10e30044  beq         $a3, $v1, . + 4 + (0x44 << 2)
label_17efe0:
    if (ctx->pc == 0x17EFE0u) {
        ctx->pc = 0x17EFE4u;
        goto label_17efe4;
    }
    ctx->pc = 0x17EFDCu;
    {
        const bool branch_taken_0x17efdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x17efdc) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17EFE4u;
label_17efe4:
    // 0x17efe4: 0x34038208  ori         $v1, $zero, 0x8208
    ctx->pc = 0x17efe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33288);
label_17efe8:
    // 0x17efe8: 0x3c022082  lui         $v0, 0x2082
    ctx->pc = 0x17efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8322 << 16));
label_17efec:
    // 0x17efec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17eff0:
    // 0x17eff0: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x17eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
label_17eff4:
    // 0x17eff4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17eff8:
    // 0x17eff8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_17effc:
    // 0x17effc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17f000:
    if (ctx->pc == 0x17F000u) {
        ctx->pc = 0x17F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFFCu;
        // 0x17f000: 0x24030410  addiu       $v1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F004u;
        goto label_17f004;
    }
    ctx->pc = 0x17EFFCu;
    {
        const bool branch_taken_0x17effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFFCu;
        // 0x17f000: 0x24030410  addiu       $v1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17effc) {
            ctx->pc = 0x17F028u;
            goto label_17f028;
        }
    }
    ctx->pc = 0x17F004u;
label_17f004:
    // 0x17f004: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_17f008:
    if (ctx->pc == 0x17F008u) {
        ctx->pc = 0x17F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F004u;
        // 0x17f008: 0x3c024104  lui         $v0, 0x4104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F00Cu;
        goto label_17f00c;
    }
    ctx->pc = 0x17F004u;
    {
        const bool branch_taken_0x17f004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F004u;
        // 0x17f008: 0x3c024104  lui         $v0, 0x4104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f004) {
            ctx->pc = 0x17F02Cu;
            goto label_17f02c;
        }
    }
    ctx->pc = 0x17F00Cu;
label_17f00c:
    // 0x17f00c: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x17f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_17f010:
    // 0x17f010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f014:
    if (ctx->pc == 0x17F014u) {
        ctx->pc = 0x17F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F010u;
        // 0x17f014: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F018u;
        goto label_17f018;
    }
    ctx->pc = 0x17F010u;
    {
        const bool branch_taken_0x17f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F010u;
        // 0x17f014: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f010) {
            ctx->pc = 0x17F020u;
            goto label_17f020;
        }
    }
    ctx->pc = 0x17F018u;
label_17f018:
    // 0x17f018: 0x10000035  b           . + 4 + (0x35 << 2)
label_17f01c:
    if (ctx->pc == 0x17F01Cu) {
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F020u;
        goto label_17f020;
    }
    ctx->pc = 0x17F018u;
    {
        const bool branch_taken_0x17f018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f018) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F020u;
label_17f020:
    // 0x17f020: 0x10000033  b           . + 4 + (0x33 << 2)
label_17f024:
    if (ctx->pc == 0x17F024u) {
        ctx->pc = 0x17F028u;
        goto label_17f028;
    }
    ctx->pc = 0x17F020u;
    {
        const bool branch_taken_0x17f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f020) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F028u;
label_17f028:
    // 0x17f028: 0x3c024104  lui         $v0, 0x4104
    ctx->pc = 0x17f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
label_17f02c:
    // 0x17f02c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17f02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17f030:
    // 0x17f030: 0x34421041  ori         $v0, $v0, 0x1041
    ctx->pc = 0x17f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4161);
label_17f034:
    // 0x17f034: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17f034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17f038:
    // 0x17f038: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x17f038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17f03c:
    // 0x17f03c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17f040:
    if (ctx->pc == 0x17F040u) {
        ctx->pc = 0x17F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F03Cu;
        // 0x17f040: 0x34028208  ori         $v0, $zero, 0x8208 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F044u;
        goto label_17f044;
    }
    ctx->pc = 0x17F03Cu;
    {
        const bool branch_taken_0x17f03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F03Cu;
        // 0x17f040: 0x34028208  ori         $v0, $zero, 0x8208 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f03c) {
            ctx->pc = 0x17F054u;
            goto label_17f054;
        }
    }
    ctx->pc = 0x17F044u;
label_17f044:
    // 0x17f044: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17f048:
    // 0x17f048: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_17f04c:
    if (ctx->pc == 0x17F04Cu) {
        ctx->pc = 0x17F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F048u;
        // 0x17f04c: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F050u;
        goto label_17f050;
    }
    ctx->pc = 0x17F048u;
    {
        const bool branch_taken_0x17f048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F048u;
        // 0x17f04c: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f048) {
            ctx->pc = 0x17F0D4u;
            goto label_17f0d4;
        }
    }
    ctx->pc = 0x17F050u;
label_17f050:
    // 0x17f050: 0x34028208  ori         $v0, $zero, 0x8208
    ctx->pc = 0x17f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33288);
label_17f054:
    // 0x17f054: 0x24030820  addiu       $v1, $zero, 0x820
    ctx->pc = 0x17f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
label_17f058:
    // 0x17f058: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_17f05c:
    // 0x17f05c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17f060:
    // 0x17f060: 0x34422082  ori         $v0, $v0, 0x2082
    ctx->pc = 0x17f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8322);
label_17f064:
    // 0x17f064: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17f064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17f068:
    // 0x17f068: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x17f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17f06c:
    // 0x17f06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f070:
    if (ctx->pc == 0x17F070u) {
        ctx->pc = 0x17F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F06Cu;
        // 0x17f070: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F074u;
        goto label_17f074;
    }
    ctx->pc = 0x17F06Cu;
    {
        const bool branch_taken_0x17f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F06Cu;
        // 0x17f070: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f06c) {
            ctx->pc = 0x17F07Cu;
            goto label_17f07c;
        }
    }
    ctx->pc = 0x17F074u;
label_17f074:
    // 0x17f074: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_17f078:
    if (ctx->pc == 0x17F078u) {
        ctx->pc = 0x17F07Cu;
        goto label_17f07c;
    }
    ctx->pc = 0x17F074u;
    {
        const bool branch_taken_0x17f074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f074) {
            ctx->pc = 0x17F0D0u;
            goto label_17f0d0;
        }
    }
    ctx->pc = 0x17F07Cu;
label_17f07c:
    // 0x17f07c: 0x24031041  addiu       $v1, $zero, 0x1041
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4161));
label_17f080:
    // 0x17f080: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x17f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
label_17f084:
    // 0x17f084: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17f084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17f088:
    // 0x17f088: 0x34424104  ori         $v0, $v0, 0x4104
    ctx->pc = 0x17f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16644);
label_17f08c:
    // 0x17f08c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17f08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17f090:
    // 0x17f090: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x17f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17f094:
    // 0x17f094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f098:
    if (ctx->pc == 0x17F098u) {
        ctx->pc = 0x17F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F094u;
        // 0x17f098: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F09Cu;
        goto label_17f09c;
    }
    ctx->pc = 0x17F094u;
    {
        const bool branch_taken_0x17f094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F094u;
        // 0x17f098: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f094) {
            ctx->pc = 0x17F0A4u;
            goto label_17f0a4;
        }
    }
    ctx->pc = 0x17F09Cu;
label_17f09c:
    // 0x17f09c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_17f0a0:
    if (ctx->pc == 0x17F0A0u) {
        ctx->pc = 0x17F0A4u;
        goto label_17f0a4;
    }
    ctx->pc = 0x17F09Cu;
    {
        const bool branch_taken_0x17f09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f09c) {
            ctx->pc = 0x17F0D0u;
            goto label_17f0d0;
        }
    }
    ctx->pc = 0x17F0A4u;
label_17f0a4:
    // 0x17f0a4: 0x24032082  addiu       $v1, $zero, 0x2082
    ctx->pc = 0x17f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8322));
label_17f0a8:
    // 0x17f0a8: 0x3c020820  lui         $v0, 0x820
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2080 << 16));
label_17f0ac:
    // 0x17f0ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17f0b0:
    // 0x17f0b0: 0x34428208  ori         $v0, $v0, 0x8208
    ctx->pc = 0x17f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33288);
label_17f0b4:
    // 0x17f0b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17f0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17f0b8:
    // 0x17f0b8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x17f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17f0bc:
    // 0x17f0bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_17f0c0:
    if (ctx->pc == 0x17F0C0u) {
        ctx->pc = 0x17F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0BCu;
        // 0x17f0c0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0C4u;
        goto label_17f0c4;
    }
    ctx->pc = 0x17F0BCu;
    {
        const bool branch_taken_0x17f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0BCu;
        // 0x17f0c0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0bc) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0C4u;
label_17f0c4:
    // 0x17f0c4: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17f0c8:
    // 0x17f0c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17f0cc:
    if (ctx->pc == 0x17F0CCu) {
        ctx->pc = 0x17F0D0u;
        goto label_17f0d0;
    }
    ctx->pc = 0x17F0C8u;
    {
        const bool branch_taken_0x17f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0c8) {
            ctx->pc = 0x17F0ECu;
            goto label_17f0ec;
        }
    }
    ctx->pc = 0x17F0D0u;
label_17f0d0:
    // 0x17f0d0: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x17f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_17f0d4:
    // 0x17f0d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f0d8:
    if (ctx->pc == 0x17F0D8u) {
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0DCu;
        goto label_17f0dc;
    }
    ctx->pc = 0x17F0D4u;
    {
        const bool branch_taken_0x17f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0d4) {
            ctx->pc = 0x17F0E4u;
            goto label_17f0e4;
        }
    }
    ctx->pc = 0x17F0DCu;
label_17f0dc:
    // 0x17f0dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_17f0e0:
    if (ctx->pc == 0x17F0E0u) {
        ctx->pc = 0x17F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0DCu;
        // 0x17f0e0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0E4u;
        goto label_17f0e4;
    }
    ctx->pc = 0x17F0DCu;
    {
        const bool branch_taken_0x17f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0DCu;
        // 0x17f0e0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0dc) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0E4u;
label_17f0e4:
    // 0x17f0e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_17f0e8:
    if (ctx->pc == 0x17F0E8u) {
        ctx->pc = 0x17F0ECu;
        goto label_17f0ec;
    }
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0ECu;
label_17f0ec:
    // 0x17f0ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_17f0f0:
    // 0x17f0f0: 0x3e00008  jr          $ra
label_17f0f4:
    if (ctx->pc == 0x17F0F4u) {
        ctx->pc = 0x17F0F8u;
        goto label_17f0f8;
    }
    ctx->pc = 0x17F0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F0F8u;
label_17f0f8:
    // 0x17f0f8: 0x0  nop
    ctx->pc = 0x17f0f8u;
    // NOP
label_17f0fc:
    // 0x17f0fc: 0x0  nop
    ctx->pc = 0x17f0fcu;
    // NOP
label_17f100:
    // 0x17f100: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x17f100u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17f104:
    // 0x17f104: 0xd8af0000  lqc2        $vf15, 0x0($a1)
    ctx->pc = 0x17f104u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17f108:
    // 0x17f108: 0x4ae04a9b  vmulw.yzw   $vf10, $vf9, $vf0w
    ctx->pc = 0x17f108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17f10c:
    // 0x17f10c: 0x4b007a9b  vmulw.x     $vf10, $vf15, $vf0w
    ctx->pc = 0x17f10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17f110:
    // 0x17f110: 0x4b607adb  vmulw.xzw   $vf11, $vf15, $vf0w
    ctx->pc = 0x17f110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_17f114:
    // 0x17f114: 0x4a804adb  vmulw.y     $vf11, $vf9, $vf0w
    ctx->pc = 0x17f114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_17f118:
    // 0x17f118: 0x4ba04b1b  vmulw.xyw   $vf12, $vf9, $vf0w
    ctx->pc = 0x17f118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f11c:
    // 0x17f11c: 0x4a407b1b  vmulw.z     $vf12, $vf15, $vf0w
    ctx->pc = 0x17f11cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f120:
    // 0x17f120: 0x4b604b5b  vmulw.xzw   $vf13, $vf9, $vf0w
    ctx->pc = 0x17f120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_17f124:
    // 0x17f124: 0x4a807b5b  vmulw.y     $vf13, $vf15, $vf0w
    ctx->pc = 0x17f124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_17f128:
    // 0x17f128: 0x4ba07b9b  vmulw.xyw   $vf14, $vf15, $vf0w
    ctx->pc = 0x17f128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_17f12c:
    // 0x17f12c: 0x4a404b9b  vmulw.z     $vf14, $vf9, $vf0w
    ctx->pc = 0x17f12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_17f130:
    // 0x17f130: 0x4ae07c1b  vmulw.yzw   $vf16, $vf15, $vf0w
    ctx->pc = 0x17f130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_17f134:
    // 0x17f134: 0x3e00008  jr          $ra
label_17f138:
    if (ctx->pc == 0x17F138u) {
        ctx->pc = 0x17F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F134u;
        // 0x17f138: 0x4b004c1b  vmulw.x     $vf16, $vf9, $vf0w (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F13Cu;
        goto label_17f13c;
    }
    ctx->pc = 0x17F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F134u;
        // 0x17f138: 0x4b004c1b  vmulw.x     $vf16, $vf9, $vf0w (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F13Cu;
label_17f13c:
    // 0x17f13c: 0x0  nop
    ctx->pc = 0x17f13cu;
    // NOP
label_17f140:
    // 0x17f140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_17f144:
    // 0x17f144: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_17f148:
    // 0x17f148: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17f14c:
    // 0x17f14c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x17f14cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_17f150:
    // 0x17f150: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17f154:
    // 0x17f154: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f158:
    // 0x17f158: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17f15c:
    // 0x17f15c: 0x25089400  addiu       $t0, $t0, -0x6C00
    ctx->pc = 0x17f15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939648));
label_17f160:
    // 0x17f160: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17f164:
    // 0x17f164: 0x24e793c0  addiu       $a3, $a3, -0x6C40
    ctx->pc = 0x17f164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939584));
label_17f168:
    // 0x17f168: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17f16c:
    // 0x17f16c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17f170:
    // 0x17f170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17f174:
    // 0x17f174: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
label_17f178:
    // 0x17f178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f17c:
    // 0x17f17c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17f180:
    // 0x17f180: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17f184:
    // 0x17f184: 0x8c235224  lw          $v1, 0x5224($at)
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21028)));
label_17f188:
    // 0x17f188: 0xaf808768  sw          $zero, -0x7898($gp)
    ctx->pc = 0x17f188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 0));
label_17f18c:
    // 0x17f18c: 0xaf808764  sw          $zero, -0x789C($gp)
    ctx->pc = 0x17f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 0));
label_17f190:
    // 0x17f190: 0xaf80875c  sw          $zero, -0x78A4($gp)
    ctx->pc = 0x17f190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 0));
label_17f194:
    // 0x17f194: 0xaf808760  sw          $zero, -0x78A0($gp)
    ctx->pc = 0x17f194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 0));
label_17f198:
    // 0x17f198: 0x8f91844c  lw          $s1, -0x7BB4($gp)
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
label_17f19c:
    // 0x17f19c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f1a0:
    // 0x17f1a0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17f1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17f1a4:
    // 0x17f1a4: 0x8c255220  lw          $a1, 0x5220($at)
    ctx->pc = 0x17f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21024)));
label_17f1a8:
    // 0x17f1a8: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x17f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_17f1ac:
    // 0x17f1ac: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x17f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_17f1b0:
    // 0x17f1b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17f1b4:
    // 0x17f1b4: 0x24730020  addiu       $s3, $v1, 0x20
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_17f1b8:
    // 0x17f1b8: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_17f1bc:
    // 0x17f1bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17f1c0:
    // 0x17f1c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_17f1c4:
    // 0x17f1c4: 0xaf83876c  sw          $v1, -0x7894($gp)
    ctx->pc = 0x17f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 3));
label_17f1c8:
    // 0x17f1c8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x17f1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_17f1cc:
    // 0x17f1cc: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x17f1ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_17f1d0:
    // 0x17f1d0: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x17f1d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_17f1d4:
    // 0x17f1d4: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x17f1d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_17f1d8:
    // 0x17f1d8: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x17f1d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_17f1dc:
    // 0x17f1dc: 0xd8e60010  lqc2        $vf6, 0x10($a3)
    ctx->pc = 0x17f1dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_17f1e0:
    // 0x17f1e0: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x17f1e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_17f1e4:
    // 0x17f1e4: 0xd8e80030  lqc2        $vf8, 0x30($a3)
    ctx->pc = 0x17f1e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_17f1e8:
    // 0x17f1e8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f1ec:
    // 0x17f1ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17f1ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f1f0:
    // 0x17f1f0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17f1f4:
    // 0x17f1f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17f1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17f1f8:
    // 0x17f1f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f1fc:
    // 0x17f1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17f200:
    // 0x17f200: 0x8c36522c  lw          $s6, 0x522C($at)
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21036)));
label_17f204:
    // 0x17f204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17f204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17f208:
    // 0x17f208: 0x8f848448  lw          $a0, -0x7BB8($gp)
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17f20c:
    // 0x17f20c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x17f20cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17f210:
    // 0x17f210: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f214:
    // 0x17f214: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17f214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17f218:
    // 0x17f218: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f21c:
    // 0x17f21c: 0x8c345228  lw          $s4, 0x5228($at)
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21032)));
label_17f220:
    // 0x17f220: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x17f220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_17f224:
    // 0x17f224: 0x24950001  addiu       $s5, $a0, 0x1
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17f228:
    // 0x17f228: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x17f228u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f22c:
    // 0x17f22c: 0x2951818  mult        $v1, $s4, $s5
    ctx->pc = 0x17f22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17f230:
    // 0x17f230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17f234:
    // 0x17f234: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_17f238:
    // 0x17f238: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_17f23c:
    // 0x17f23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17f240:
    // 0x17f240: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17f244:
    // 0x17f244: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x17f244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_17f248:
    // 0x17f248: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x17f248u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17f24c:
    // 0x17f24c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_17f250:
    if (ctx->pc == 0x17F250u) {
        ctx->pc = 0x17F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F24Cu;
        // 0x17f250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F254u;
        goto label_17f254;
    }
    ctx->pc = 0x17F24Cu;
    {
        const bool branch_taken_0x17f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F24Cu;
        // 0x17f250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f24c) {
            ctx->pc = 0x17F308u;
            goto label_17f308;
        }
    }
    ctx->pc = 0x17F254u;
label_17f254:
    // 0x17f254: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x17f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_17f258:
    // 0x17f258: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17f258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_17f25c:
    // 0x17f25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f260:
    if (ctx->pc == 0x17F260u) {
        ctx->pc = 0x17F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F25Cu;
        // 0x17f260: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F264u;
        goto label_17f264;
    }
    ctx->pc = 0x17F25Cu;
    {
        const bool branch_taken_0x17f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F25Cu;
        // 0x17f260: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f25c) {
            ctx->pc = 0x17F26Cu;
            goto label_17f26c;
        }
    }
    ctx->pc = 0x17F264u;
label_17f264:
    // 0x17f264: 0x10000003  b           . + 4 + (0x3 << 2)
label_17f268:
    if (ctx->pc == 0x17F268u) {
        ctx->pc = 0x17F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F264u;
        // 0x17f268: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F26Cu;
        goto label_17f26c;
    }
    ctx->pc = 0x17F264u;
    {
        const bool branch_taken_0x17f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F264u;
        // 0x17f268: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f264) {
            ctx->pc = 0x17F274u;
            goto label_17f274;
        }
    }
    ctx->pc = 0x17F26Cu;
label_17f26c:
    // 0x17f26c: 0x0  nop
    ctx->pc = 0x17f26cu;
    // NOP
label_17f270:
    // 0x17f270: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17f270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f274:
    // 0x17f274: 0x0  nop
    ctx->pc = 0x17f274u;
    // NOP
label_17f278:
    // 0x17f278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f27c:
    // 0x17f27c: 0xc05fdac  jal         func_17F6B0
label_17f280:
    if (ctx->pc == 0x17F280u) {
        ctx->pc = 0x17F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F27Cu;
        // 0x17f280: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F284u;
        goto label_17f284;
    }
    ctx->pc = 0x17F27Cu;
    SET_GPR_U32(ctx, 31, 0x17F284u);
    ctx->pc = 0x17F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F27Cu;
    // 0x17f280: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6B0u;
    { ctx->pc = 0x17f6b0; return; }
    ctx->pc = 0x17F284u;
label_17f284:
    // 0x17f284: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
label_17f288:
    if (ctx->pc == 0x17F288u) {
        ctx->pc = 0x17F28Cu;
        goto label_17f28c;
    }
    ctx->pc = 0x17F284u;
    {
        const bool branch_taken_0x17f284 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x17f284) {
            ctx->pc = 0x17F2E0u;
            goto label_17f2e0;
        }
    }
    ctx->pc = 0x17F28Cu;
label_17f28c:
    // 0x17f28c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x17f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_17f290:
    // 0x17f290: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17f294:
    if (ctx->pc == 0x17F294u) {
        ctx->pc = 0x17F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F290u;
        // 0x17f294: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F298u;
        goto label_17f298;
    }
    ctx->pc = 0x17F290u;
    {
        const bool branch_taken_0x17f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F290u;
        // 0x17f294: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f290) {
            ctx->pc = 0x17F2BCu;
            goto label_17f2bc;
        }
    }
    ctx->pc = 0x17F298u;
label_17f298:
    // 0x17f298: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x17f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_17f29c:
    // 0x17f29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f2a0:
    // 0x17f2a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f2a4:
    // 0x17f2a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f2a8:
    // 0x17f2a8: 0x4600ab41  sub.s       $f13, $f21, $f0
    ctx->pc = 0x17f2a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_17f2ac:
    // 0x17f2ac: 0xc05fcd4  jal         func_17F350
label_17f2b0:
    if (ctx->pc == 0x17F2B0u) {
        ctx->pc = 0x17F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2ACu;
        // 0x17f2b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F2B4u;
        goto label_17f2b4;
    }
    ctx->pc = 0x17F2ACu;
    SET_GPR_U32(ctx, 31, 0x17F2B4u);
    ctx->pc = 0x17F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2ACu;
    // 0x17f2b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F350u;
    { ctx->pc = 0x17f350; return; }
    ctx->pc = 0x17F2B4u;
label_17f2b4:
    // 0x17f2b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_17f2b8:
    if (ctx->pc == 0x17F2B8u) {
        ctx->pc = 0x17F2BCu;
        goto label_17f2bc;
    }
    ctx->pc = 0x17F2B4u;
    {
        const bool branch_taken_0x17f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2b4) {
            ctx->pc = 0x17F2E0u;
            goto label_17f2e0;
        }
    }
    ctx->pc = 0x17F2BCu;
label_17f2bc:
    // 0x17f2bc: 0x0  nop
    ctx->pc = 0x17f2bcu;
    // NOP
label_17f2c0:
    // 0x17f2c0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_17f2c4:
    // 0x17f2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f2c8:
    // 0x17f2c8: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_17f2cc:
    // 0x17f2cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17f2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f2d0:
    // 0x17f2d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17f2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f2d4:
    // 0x17f2d4: 0x4600ab41  sub.s       $f13, $f21, $f0
    ctx->pc = 0x17f2d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_17f2d8:
    // 0x17f2d8: 0xc05fcd4  jal         func_17F350
label_17f2dc:
    if (ctx->pc == 0x17F2DCu) {
        ctx->pc = 0x17F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2D8u;
        // 0x17f2dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F2E0u;
        goto label_17f2e0;
    }
    ctx->pc = 0x17F2D8u;
    SET_GPR_U32(ctx, 31, 0x17F2E0u);
    ctx->pc = 0x17F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2D8u;
    // 0x17f2dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F350u;
    { ctx->pc = 0x17f350; return; }
    ctx->pc = 0x17F2E0u;
label_17f2e0:
    // 0x17f2e0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17f2e4:
    // 0x17f2e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f2e8:
    // 0x17f2e8: 0x152040  sll         $a0, $s5, 1
    ctx->pc = 0x17f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_17f2ec:
    // 0x17f2ec: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x17f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_17f2f0:
    // 0x17f2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f2f4:
    // 0x17f2f4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x17f2f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_17f2f8:
    // 0x17f2f8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17f2fc:
    // 0x17f2fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17f300:
    // 0x17f300: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17f304:
    // 0x17f304: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x17f304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_17f308:
    // 0x17f308: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x17f308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17f30c:
    // 0x17f30c: 0x1020ffd1  beqz        $at, . + 4 + (-0x2F << 2)
label_17f310:
    if (ctx->pc == 0x17F310u) {
        ctx->pc = 0x17F314u;
        goto label_17f314;
    }
    ctx->pc = 0x17F30Cu;
    {
        const bool branch_taken_0x17f30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f30c) {
            ctx->pc = 0x17F254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f254;
        }
    }
    ctx->pc = 0x17F314u;
label_17f314:
    // 0x17f314: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17f314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17f318:
    // 0x17f318: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17f31c:
    // 0x17f31c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17f31cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17f320:
    // 0x17f320: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17f324:
    // 0x17f324: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17f324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f328:
    // 0x17f328: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17f328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17f32c:
    // 0x17f32c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17f32cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17f330:
    // 0x17f330: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17f330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f334:
    // 0x17f334: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f338:
    // 0x17f338: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f33c:
    // 0x17f33c: 0x3e00008  jr          $ra
label_17f340:
    if (ctx->pc == 0x17F340u) {
        ctx->pc = 0x17F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F33Cu;
        // 0x17f340: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F344u;
        goto label_17f344;
    }
    ctx->pc = 0x17F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F33Cu;
        // 0x17f340: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F344u;
label_17f344:
    // 0x17f344: 0x0  nop
    ctx->pc = 0x17f344u;
    // NOP
label_17f348:
    // 0x17f348: 0x0  nop
    ctx->pc = 0x17f348u;
    // NOP
label_17f34c:
    // 0x17f34c: 0x0  nop
    ctx->pc = 0x17f34cu;
    // NOP
    ctx->pc = 0x17f350u;
    return;
}

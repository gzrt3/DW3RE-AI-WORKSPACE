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


void FUN_0019b618_part401(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb5cu: goto label_25eb5c;
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec2cu: goto label_25ec2c;
        case 0x25ec30u: goto label_25ec30;
        case 0x25ec34u: goto label_25ec34;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec40u: goto label_25ec40;
        case 0x25ec44u: goto label_25ec44;
        case 0x25ec48u: goto label_25ec48;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec50u: goto label_25ec50;
        case 0x25ec54u: goto label_25ec54;
        case 0x25ec58u: goto label_25ec58;
        case 0x25ec5cu: goto label_25ec5c;
        case 0x25ec60u: goto label_25ec60;
        case 0x25ec64u: goto label_25ec64;
        case 0x25ec68u: goto label_25ec68;
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec70u: goto label_25ec70;
        case 0x25ec74u: goto label_25ec74;
        case 0x25ec78u: goto label_25ec78;
        case 0x25ec7cu: goto label_25ec7c;
        case 0x25ec80u: goto label_25ec80;
        case 0x25ec84u: goto label_25ec84;
        case 0x25ec88u: goto label_25ec88;
        case 0x25ec8cu: goto label_25ec8c;
        case 0x25ec90u: goto label_25ec90;
        case 0x25ec94u: goto label_25ec94;
        case 0x25ec98u: goto label_25ec98;
        case 0x25ec9cu: goto label_25ec9c;
        case 0x25eca0u: goto label_25eca0;
        case 0x25eca4u: goto label_25eca4;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecb0u: goto label_25ecb0;
        case 0x25ecb4u: goto label_25ecb4;
        case 0x25ecb8u: goto label_25ecb8;
        case 0x25ecbcu: goto label_25ecbc;
        case 0x25ecc0u: goto label_25ecc0;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ecc8u: goto label_25ecc8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ecd4u: goto label_25ecd4;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ece4u: goto label_25ece4;
        case 0x25ece8u: goto label_25ece8;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecf0u: goto label_25ecf0;
        case 0x25ecf4u: goto label_25ecf4;
        case 0x25ecf8u: goto label_25ecf8;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed00u: goto label_25ed00;
        case 0x25ed04u: goto label_25ed04;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed0cu: goto label_25ed0c;
        case 0x25ed10u: goto label_25ed10;
        case 0x25ed14u: goto label_25ed14;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed1cu: goto label_25ed1c;
        case 0x25ed20u: goto label_25ed20;
        case 0x25ed24u: goto label_25ed24;
        case 0x25ed28u: goto label_25ed28;
        case 0x25ed2cu: goto label_25ed2c;
        case 0x25ed30u: goto label_25ed30;
        case 0x25ed34u: goto label_25ed34;
        case 0x25ed38u: goto label_25ed38;
        case 0x25ed3cu: goto label_25ed3c;
        case 0x25ed40u: goto label_25ed40;
        case 0x25ed44u: goto label_25ed44;
        case 0x25ed48u: goto label_25ed48;
        case 0x25ed4cu: goto label_25ed4c;
        case 0x25ed50u: goto label_25ed50;
        case 0x25ed54u: goto label_25ed54;
        case 0x25ed58u: goto label_25ed58;
        case 0x25ed5cu: goto label_25ed5c;
        case 0x25ed60u: goto label_25ed60;
        case 0x25ed64u: goto label_25ed64;
        case 0x25ed68u: goto label_25ed68;
        case 0x25ed6cu: goto label_25ed6c;
        case 0x25ed70u: goto label_25ed70;
        case 0x25ed74u: goto label_25ed74;
        case 0x25ed78u: goto label_25ed78;
        case 0x25ed7cu: goto label_25ed7c;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed84u: goto label_25ed84;
        case 0x25ed88u: goto label_25ed88;
        case 0x25ed8cu: goto label_25ed8c;
        case 0x25ed90u: goto label_25ed90;
        case 0x25ed94u: goto label_25ed94;
        case 0x25ed98u: goto label_25ed98;
        case 0x25ed9cu: goto label_25ed9c;
        case 0x25eda0u: goto label_25eda0;
        case 0x25eda4u: goto label_25eda4;
        case 0x25eda8u: goto label_25eda8;
        case 0x25edacu: goto label_25edac;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edb4u: goto label_25edb4;
        case 0x25edb8u: goto label_25edb8;
        case 0x25edbcu: goto label_25edbc;
        case 0x25edc0u: goto label_25edc0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edc8u: goto label_25edc8;
        case 0x25edccu: goto label_25edcc;
        case 0x25edd0u: goto label_25edd0;
        case 0x25edd4u: goto label_25edd4;
        case 0x25edd8u: goto label_25edd8;
        case 0x25eddcu: goto label_25eddc;
        case 0x25ede0u: goto label_25ede0;
        case 0x25ede4u: goto label_25ede4;
        case 0x25ede8u: goto label_25ede8;
        case 0x25edecu: goto label_25edec;
        case 0x25edf0u: goto label_25edf0;
        case 0x25edf4u: goto label_25edf4;
        case 0x25edf8u: goto label_25edf8;
        case 0x25edfcu: goto label_25edfc;
        case 0x25ee00u: goto label_25ee00;
        case 0x25ee04u: goto label_25ee04;
        case 0x25ee08u: goto label_25ee08;
        case 0x25ee0cu: goto label_25ee0c;
        case 0x25ee10u: goto label_25ee10;
        case 0x25ee14u: goto label_25ee14;
        case 0x25ee18u: goto label_25ee18;
        case 0x25ee1cu: goto label_25ee1c;
        case 0x25ee20u: goto label_25ee20;
        case 0x25ee24u: goto label_25ee24;
        case 0x25ee28u: goto label_25ee28;
        case 0x25ee2cu: goto label_25ee2c;
        case 0x25ee30u: goto label_25ee30;
        case 0x25ee34u: goto label_25ee34;
        case 0x25ee38u: goto label_25ee38;
        case 0x25ee3cu: goto label_25ee3c;
        case 0x25ee40u: goto label_25ee40;
        case 0x25ee44u: goto label_25ee44;
        case 0x25ee48u: goto label_25ee48;
        case 0x25ee4cu: goto label_25ee4c;
        case 0x25ee50u: goto label_25ee50;
        case 0x25ee54u: goto label_25ee54;
        case 0x25ee58u: goto label_25ee58;
        case 0x25ee5cu: goto label_25ee5c;
        case 0x25ee60u: goto label_25ee60;
        case 0x25ee64u: goto label_25ee64;
        case 0x25ee68u: goto label_25ee68;
        case 0x25ee6cu: goto label_25ee6c;
        case 0x25ee70u: goto label_25ee70;
        case 0x25ee74u: goto label_25ee74;
        case 0x25ee78u: goto label_25ee78;
        case 0x25ee7cu: goto label_25ee7c;
        case 0x25ee80u: goto label_25ee80;
        case 0x25ee84u: goto label_25ee84;
        case 0x25ee88u: goto label_25ee88;
        case 0x25ee8cu: goto label_25ee8c;
        case 0x25ee90u: goto label_25ee90;
        case 0x25ee94u: goto label_25ee94;
        case 0x25ee98u: goto label_25ee98;
        case 0x25ee9cu: goto label_25ee9c;
        case 0x25eea0u: goto label_25eea0;
        case 0x25eea4u: goto label_25eea4;
        case 0x25eea8u: goto label_25eea8;
        case 0x25eeacu: goto label_25eeac;
        case 0x25eeb0u: goto label_25eeb0;
        case 0x25eeb4u: goto label_25eeb4;
        case 0x25eeb8u: goto label_25eeb8;
        case 0x25eebcu: goto label_25eebc;
        case 0x25eec0u: goto label_25eec0;
        case 0x25eec4u: goto label_25eec4;
        case 0x25eec8u: goto label_25eec8;
        case 0x25eeccu: goto label_25eecc;
        case 0x25eed0u: goto label_25eed0;
        case 0x25eed4u: goto label_25eed4;
        case 0x25eed8u: goto label_25eed8;
        case 0x25eedcu: goto label_25eedc;
        case 0x25eee0u: goto label_25eee0;
        case 0x25eee4u: goto label_25eee4;
        case 0x25eee8u: goto label_25eee8;
        case 0x25eeecu: goto label_25eeec;
        case 0x25eef0u: goto label_25eef0;
        case 0x25eef4u: goto label_25eef4;
        case 0x25eef8u: goto label_25eef8;
        case 0x25eefcu: goto label_25eefc;
        case 0x25ef00u: goto label_25ef00;
        case 0x25ef04u: goto label_25ef04;
        case 0x25ef08u: goto label_25ef08;
        case 0x25ef0cu: goto label_25ef0c;
        case 0x25ef10u: goto label_25ef10;
        case 0x25ef14u: goto label_25ef14;
        case 0x25ef18u: goto label_25ef18;
        case 0x25ef1cu: goto label_25ef1c;
        case 0x25ef20u: goto label_25ef20;
        case 0x25ef24u: goto label_25ef24;
        case 0x25ef28u: goto label_25ef28;
        case 0x25ef2cu: goto label_25ef2c;
        case 0x25ef30u: goto label_25ef30;
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef38u: goto label_25ef38;
        case 0x25ef3cu: goto label_25ef3c;
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef48u: goto label_25ef48;
        case 0x25ef4cu: goto label_25ef4c;
        case 0x25ef50u: goto label_25ef50;
        case 0x25ef54u: goto label_25ef54;
        case 0x25ef58u: goto label_25ef58;
        case 0x25ef5cu: goto label_25ef5c;
        case 0x25ef60u: goto label_25ef60;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef68u: goto label_25ef68;
        case 0x25ef6cu: goto label_25ef6c;
        case 0x25ef70u: goto label_25ef70;
        case 0x25ef74u: goto label_25ef74;
        case 0x25ef78u: goto label_25ef78;
        case 0x25ef7cu: goto label_25ef7c;
        case 0x25ef80u: goto label_25ef80;
        case 0x25ef84u: goto label_25ef84;
        case 0x25ef88u: goto label_25ef88;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25ef90u: goto label_25ef90;
        case 0x25ef94u: goto label_25ef94;
        case 0x25ef98u: goto label_25ef98;
        case 0x25ef9cu: goto label_25ef9c;
        case 0x25efa0u: goto label_25efa0;
        case 0x25efa4u: goto label_25efa4;
        case 0x25efa8u: goto label_25efa8;
        case 0x25efacu: goto label_25efac;
        case 0x25efb0u: goto label_25efb0;
        case 0x25efb4u: goto label_25efb4;
        case 0x25efb8u: goto label_25efb8;
        case 0x25efbcu: goto label_25efbc;
        case 0x25efc0u: goto label_25efc0;
        case 0x25efc4u: goto label_25efc4;
        case 0x25efc8u: goto label_25efc8;
        case 0x25efccu: goto label_25efcc;
        case 0x25efd0u: goto label_25efd0;
        case 0x25efd4u: goto label_25efd4;
        case 0x25efd8u: goto label_25efd8;
        case 0x25efdcu: goto label_25efdc;
        case 0x25efe0u: goto label_25efe0;
        case 0x25efe4u: goto label_25efe4;
        case 0x25efe8u: goto label_25efe8;
        case 0x25efecu: goto label_25efec;
        case 0x25eff0u: goto label_25eff0;
        case 0x25eff4u: goto label_25eff4;
        case 0x25eff8u: goto label_25eff8;
        case 0x25effcu: goto label_25effc;
        case 0x25f000u: goto label_25f000;
        case 0x25f004u: goto label_25f004;
        case 0x25f008u: goto label_25f008;
        case 0x25f00cu: goto label_25f00c;
        case 0x25f010u: goto label_25f010;
        case 0x25f014u: goto label_25f014;
        case 0x25f018u: goto label_25f018;
        case 0x25f01cu: goto label_25f01c;
        case 0x25f020u: goto label_25f020;
        case 0x25f024u: goto label_25f024;
        case 0x25f028u: goto label_25f028;
        case 0x25f02cu: goto label_25f02c;
        case 0x25f030u: goto label_25f030;
        case 0x25f034u: goto label_25f034;
        case 0x25f038u: goto label_25f038;
        case 0x25f03cu: goto label_25f03c;
        case 0x25f040u: goto label_25f040;
        case 0x25f044u: goto label_25f044;
        case 0x25f048u: goto label_25f048;
        case 0x25f04cu: goto label_25f04c;
        case 0x25f050u: goto label_25f050;
        case 0x25f054u: goto label_25f054;
        case 0x25f058u: goto label_25f058;
        case 0x25f05cu: goto label_25f05c;
        case 0x25f060u: goto label_25f060;
        case 0x25f064u: goto label_25f064;
        case 0x25f068u: goto label_25f068;
        case 0x25f06cu: goto label_25f06c;
        case 0x25f070u: goto label_25f070;
        case 0x25f074u: goto label_25f074;
        case 0x25f078u: goto label_25f078;
        case 0x25f07cu: goto label_25f07c;
        case 0x25f080u: goto label_25f080;
        case 0x25f084u: goto label_25f084;
        case 0x25f088u: goto label_25f088;
        case 0x25f08cu: goto label_25f08c;
        case 0x25f090u: goto label_25f090;
        case 0x25f094u: goto label_25f094;
        case 0x25f098u: goto label_25f098;
        case 0x25f09cu: goto label_25f09c;
        case 0x25f0a0u: goto label_25f0a0;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0a8u: goto label_25f0a8;
        case 0x25f0acu: goto label_25f0ac;
        case 0x25f0b0u: goto label_25f0b0;
        case 0x25f0b4u: goto label_25f0b4;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f0bcu: goto label_25f0bc;
        case 0x25f0c0u: goto label_25f0c0;
        case 0x25f0c4u: goto label_25f0c4;
        case 0x25f0c8u: goto label_25f0c8;
        case 0x25f0ccu: goto label_25f0cc;
        case 0x25f0d0u: goto label_25f0d0;
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0d8u: goto label_25f0d8;
        case 0x25f0dcu: goto label_25f0dc;
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f0e4u: goto label_25f0e4;
        case 0x25f0e8u: goto label_25f0e8;
        case 0x25f0ecu: goto label_25f0ec;
        case 0x25f0f0u: goto label_25f0f0;
        case 0x25f0f4u: goto label_25f0f4;
        case 0x25f0f8u: goto label_25f0f8;
        case 0x25f0fcu: goto label_25f0fc;
        case 0x25f100u: goto label_25f100;
        case 0x25f104u: goto label_25f104;
        case 0x25f108u: goto label_25f108;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f110u: goto label_25f110;
        case 0x25f114u: goto label_25f114;
        case 0x25f118u: goto label_25f118;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f120u: goto label_25f120;
        case 0x25f124u: goto label_25f124;
        case 0x25f128u: goto label_25f128;
        case 0x25f12cu: goto label_25f12c;
        case 0x25f130u: goto label_25f130;
        case 0x25f134u: goto label_25f134;
        case 0x25f138u: goto label_25f138;
        case 0x25f13cu: goto label_25f13c;
        case 0x25f140u: goto label_25f140;
        case 0x25f144u: goto label_25f144;
        case 0x25f148u: goto label_25f148;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f150u: goto label_25f150;
        case 0x25f154u: goto label_25f154;
        case 0x25f158u: goto label_25f158;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f160u: goto label_25f160;
        case 0x25f164u: goto label_25f164;
        case 0x25f168u: goto label_25f168;
        case 0x25f16cu: goto label_25f16c;
        case 0x25f170u: goto label_25f170;
        case 0x25f174u: goto label_25f174;
        case 0x25f178u: goto label_25f178;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f180u: goto label_25f180;
        case 0x25f184u: goto label_25f184;
        case 0x25f188u: goto label_25f188;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f200u: goto label_25f200;
        case 0x25f204u: goto label_25f204;
        case 0x25f208u: goto label_25f208;
        case 0x25f20cu: goto label_25f20c;
        case 0x25f210u: goto label_25f210;
        case 0x25f214u: goto label_25f214;
        case 0x25f218u: goto label_25f218;
        case 0x25f21cu: goto label_25f21c;
        case 0x25f220u: goto label_25f220;
        case 0x25f224u: goto label_25f224;
        case 0x25f228u: goto label_25f228;
        case 0x25f22cu: goto label_25f22c;
        case 0x25f230u: goto label_25f230;
        case 0x25f234u: goto label_25f234;
        case 0x25f238u: goto label_25f238;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f240u: goto label_25f240;
        case 0x25f244u: goto label_25f244;
        case 0x25f248u: goto label_25f248;
        case 0x25f24cu: goto label_25f24c;
        case 0x25f250u: goto label_25f250;
        case 0x25f254u: goto label_25f254;
        case 0x25f258u: goto label_25f258;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f260u: goto label_25f260;
        case 0x25f264u: goto label_25f264;
        case 0x25f268u: goto label_25f268;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f270u: goto label_25f270;
        case 0x25f274u: goto label_25f274;
        case 0x25f278u: goto label_25f278;
        case 0x25f27cu: goto label_25f27c;
        case 0x25f280u: goto label_25f280;
        case 0x25f284u: goto label_25f284;
        case 0x25f288u: goto label_25f288;
        case 0x25f28cu: goto label_25f28c;
        case 0x25f290u: goto label_25f290;
        case 0x25f294u: goto label_25f294;
        case 0x25f298u: goto label_25f298;
        case 0x25f29cu: goto label_25f29c;
        case 0x25f2a0u: goto label_25f2a0;
        case 0x25f2a4u: goto label_25f2a4;
        case 0x25f2a8u: goto label_25f2a8;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2b0u: goto label_25f2b0;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c0u: goto label_25f2c0;
        case 0x25f2c4u: goto label_25f2c4;
        case 0x25f2c8u: goto label_25f2c8;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2d0u: goto label_25f2d0;
        case 0x25f2d4u: goto label_25f2d4;
        case 0x25f2d8u: goto label_25f2d8;
        case 0x25f2dcu: goto label_25f2dc;
        case 0x25f2e0u: goto label_25f2e0;
        case 0x25f2e4u: goto label_25f2e4;
        default: return;
    }

label_25eb18:
    // 0x25eb18: 0x0  nop
    ctx->pc = 0x25eb18u;
    // NOP
label_25eb1c:
    // 0x25eb1c: 0x0  nop
    ctx->pc = 0x25eb1cu;
    // NOP
label_25eb20:
    // 0x25eb20: 0x8947  .word       0x00008947                   # srav        $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25eb24:
    // 0x25eb24: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25eb28:
    // 0x25eb28: 0x0  nop
    ctx->pc = 0x25eb28u;
    // NOP
label_25eb2c:
    // 0x25eb2c: 0x0  nop
    ctx->pc = 0x25eb2cu;
    // NOP
label_25eb30:
    // 0x25eb30: 0x8953  .word       0x00008953                   # mtlo        $zero # 00008940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb30u;
    ctx->lo = GPR_U64(ctx, 0);
label_25eb34:
    // 0x25eb34: 0x7e70  tge         $zero, $zero, 505
    ctx->pc = 0x25eb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb38:
    // 0x25eb38: 0x0  nop
    ctx->pc = 0x25eb38u;
    // NOP
label_25eb3c:
    // 0x25eb3c: 0x0  nop
    ctx->pc = 0x25eb3cu;
    // NOP
label_25eb40:
    // 0x25eb40: 0x8963  .word       0x00008963                   # negu        $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25eb44:
    // 0x25eb44: 0x6bc0  sll         $t5, $zero, 15
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25eb48:
    // 0x25eb48: 0x0  nop
    ctx->pc = 0x25eb48u;
    // NOP
label_25eb4c:
    // 0x25eb4c: 0x0  nop
    ctx->pc = 0x25eb4cu;
    // NOP
label_25eb50:
    // 0x25eb50: 0x8971  tgeu        $zero, $zero, 549
    ctx->pc = 0x25eb50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb54:
    // 0x25eb54: 0xac00  sll         $s5, $zero, 16
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25eb58:
    // 0x25eb58: 0x0  nop
    ctx->pc = 0x25eb58u;
    // NOP
label_25eb5c:
    // 0x25eb5c: 0x0  nop
    ctx->pc = 0x25eb5cu;
    // NOP
label_25eb60:
    // 0x25eb60: 0x8987  .word       0x00008987                   # srav        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25eb64:
    // 0x25eb64: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25eb68:
    // 0x25eb68: 0x0  nop
    ctx->pc = 0x25eb68u;
    // NOP
label_25eb6c:
    // 0x25eb6c: 0x0  nop
    ctx->pc = 0x25eb6cu;
    // NOP
label_25eb70:
    // 0x25eb70: 0x8998  .word       0x00008998                   # mult        $s1, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25eb70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_25eb74:
    // 0x25eb74: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25eb78:
    // 0x25eb78: 0x0  nop
    ctx->pc = 0x25eb78u;
    // NOP
label_25eb7c:
    // 0x25eb7c: 0x0  nop
    ctx->pc = 0x25eb7cu;
    // NOP
label_25eb80:
    // 0x25eb80: 0x89ab  .word       0x000089AB                   # sltu        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb80u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25eb84:
    // 0x25eb84: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25eb88:
    // 0x25eb88: 0x0  nop
    ctx->pc = 0x25eb88u;
    // NOP
label_25eb8c:
    // 0x25eb8c: 0x0  nop
    ctx->pc = 0x25eb8cu;
    // NOP
label_25eb90:
    // 0x25eb90: 0x89b4  teq         $zero, $zero, 550
    ctx->pc = 0x25eb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb94:
    // 0x25eb94: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25eb98:
    // 0x25eb98: 0x0  nop
    ctx->pc = 0x25eb98u;
    // NOP
label_25eb9c:
    // 0x25eb9c: 0x0  nop
    ctx->pc = 0x25eb9cu;
    // NOP
label_25eba0:
    // 0x25eba0: 0x89bd  .word       0x000089BD                   # INVALID     $zero, $zero, -0x7643 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25EBA0 raw=0x000089BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25eba4:
    // 0x25eba4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25eba4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25eba8:
    // 0x25eba8: 0x0  nop
    ctx->pc = 0x25eba8u;
    // NOP
label_25ebac:
    // 0x25ebac: 0x0  nop
    ctx->pc = 0x25ebacu;
    // NOP
label_25ebb0:
    // 0x25ebb0: 0x89cc  syscall     551
    ctx->pc = 0x25ebb0u;
    ctx->pc = 0x25EBB4u;
runtime->handleSyscall(rdram, ctx, 0x227u);
label_25ebb4:
    // 0x25ebb4: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ebb8:
    // 0x25ebb8: 0x0  nop
    ctx->pc = 0x25ebb8u;
    // NOP
label_25ebbc:
    // 0x25ebbc: 0x0  nop
    ctx->pc = 0x25ebbcu;
    // NOP
label_25ebc0:
    // 0x25ebc0: 0x89db  .word       0x000089DB                   # divu        $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25ebc4:
    // 0x25ebc4: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ebc8:
    // 0x25ebc8: 0x0  nop
    ctx->pc = 0x25ebc8u;
    // NOP
label_25ebcc:
    // 0x25ebcc: 0x0  nop
    ctx->pc = 0x25ebccu;
    // NOP
label_25ebd0:
    // 0x25ebd0: 0x89e9  .word       0x000089E9                   # mtsa        $zero # 000089C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ebd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25ebd4:
    // 0x25ebd4: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ebd8:
    // 0x25ebd8: 0x0  nop
    ctx->pc = 0x25ebd8u;
    // NOP
label_25ebdc:
    // 0x25ebdc: 0x0  nop
    ctx->pc = 0x25ebdcu;
    // NOP
label_25ebe0:
    // 0x25ebe0: 0x89f5  .word       0x000089F5                   # INVALID     $zero, $zero, -0x760B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25EBE0 raw=0x000089F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ebe4:
    // 0x25ebe4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ebe8:
    // 0x25ebe8: 0x0  nop
    ctx->pc = 0x25ebe8u;
    // NOP
label_25ebec:
    // 0x25ebec: 0x0  nop
    ctx->pc = 0x25ebecu;
    // NOP
label_25ebf0:
    // 0x25ebf0: 0x8a01  .word       0x00008A01                   # INVALID     $zero, $zero, -0x75FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25EBF0 raw=0x00008A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ebf4:
    // 0x25ebf4: 0x66e0  .word       0x000066E0                   # add         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25ebf8:
    // 0x25ebf8: 0x0  nop
    ctx->pc = 0x25ebf8u;
    // NOP
label_25ebfc:
    // 0x25ebfc: 0x0  nop
    ctx->pc = 0x25ebfcu;
    // NOP
label_25ec00:
    // 0x25ec00: 0x8a0e  .word       0x00008A0E                   # INVALID     $zero, $zero, -0x75F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25EC00 raw=0x00008A0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec04:
    // 0x25ec04: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x25ec04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25ec08:
    // 0x25ec08: 0x0  nop
    ctx->pc = 0x25ec08u;
    // NOP
label_25ec0c:
    // 0x25ec0c: 0x0  nop
    ctx->pc = 0x25ec0cu;
    // NOP
label_25ec10:
    // 0x25ec10: 0x8a1d  .word       0x00008A1D                   # dmultu      $zero, $zero # 00008A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25EC10 raw=0x00008A1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec14:
    // 0x25ec14: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ec18:
    // 0x25ec18: 0x0  nop
    ctx->pc = 0x25ec18u;
    // NOP
label_25ec1c:
    // 0x25ec1c: 0x0  nop
    ctx->pc = 0x25ec1cu;
    // NOP
label_25ec20:
    // 0x25ec20: 0x8a28  .word       0x00008A28                   # mfsa        $s1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ec20u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_25ec24:
    // 0x25ec24: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ec28:
    // 0x25ec28: 0x0  nop
    ctx->pc = 0x25ec28u;
    // NOP
label_25ec2c:
    // 0x25ec2c: 0x0  nop
    ctx->pc = 0x25ec2cu;
    // NOP
label_25ec30:
    // 0x25ec30: 0x8a36  tne         $zero, $zero, 552
    ctx->pc = 0x25ec30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ec34:
    // 0x25ec34: 0x59d0  .word       0x000059D0                   # mfhi        $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ec38:
    // 0x25ec38: 0x0  nop
    ctx->pc = 0x25ec38u;
    // NOP
label_25ec3c:
    // 0x25ec3c: 0x0  nop
    ctx->pc = 0x25ec3cu;
    // NOP
label_25ec40:
    // 0x25ec40: 0x8a42  srl         $s1, $zero, 9
    ctx->pc = 0x25ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_25ec44:
    // 0x25ec44: 0x6980  sll         $t5, $zero, 6
    ctx->pc = 0x25ec44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25ec48:
    // 0x25ec48: 0x0  nop
    ctx->pc = 0x25ec48u;
    // NOP
label_25ec4c:
    // 0x25ec4c: 0x0  nop
    ctx->pc = 0x25ec4cu;
    // NOP
label_25ec50:
    // 0x25ec50: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec50u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ec54:
    // 0x25ec54: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ec58:
    // 0x25ec58: 0x0  nop
    ctx->pc = 0x25ec58u;
    // NOP
label_25ec5c:
    // 0x25ec5c: 0x0  nop
    ctx->pc = 0x25ec5cu;
    // NOP
label_25ec60:
    // 0x25ec60: 0x8a5c  .word       0x00008A5C                   # dmult       $zero, $zero # 00008A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25EC60 raw=0x00008A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec64:
    // 0x25ec64: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x25ec64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25ec68:
    // 0x25ec68: 0x0  nop
    ctx->pc = 0x25ec68u;
    // NOP
label_25ec6c:
    // 0x25ec6c: 0x0  nop
    ctx->pc = 0x25ec6cu;
    // NOP
label_25ec70:
    // 0x25ec70: 0x8a69  .word       0x00008A69                   # mtsa        $zero # 00008A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ec70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25ec74:
    // 0x25ec74: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec74u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ec78:
    // 0x25ec78: 0x0  nop
    ctx->pc = 0x25ec78u;
    // NOP
label_25ec7c:
    // 0x25ec7c: 0x0  nop
    ctx->pc = 0x25ec7cu;
    // NOP
label_25ec80:
    // 0x25ec80: 0x8a77  .word       0x00008A77                   # INVALID     $zero, $zero, -0x7589 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25EC80 raw=0x00008A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec84:
    // 0x25ec84: 0x5a70  tge         $zero, $zero, 361
    ctx->pc = 0x25ec84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ec88:
    // 0x25ec88: 0x0  nop
    ctx->pc = 0x25ec88u;
    // NOP
label_25ec8c:
    // 0x25ec8c: 0x0  nop
    ctx->pc = 0x25ec8cu;
    // NOP
label_25ec90:
    // 0x25ec90: 0x8a83  sra         $s1, $zero, 10
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 10));
label_25ec94:
    // 0x25ec94: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x25ec94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25ec98:
    // 0x25ec98: 0x0  nop
    ctx->pc = 0x25ec98u;
    // NOP
label_25ec9c:
    // 0x25ec9c: 0x0  nop
    ctx->pc = 0x25ec9cu;
    // NOP
label_25eca0:
    // 0x25eca0: 0x8a93  .word       0x00008A93                   # mtlo        $zero # 00008A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eca0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25eca4:
    // 0x25eca4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25eca8:
    // 0x25eca8: 0x0  nop
    ctx->pc = 0x25eca8u;
    // NOP
label_25ecac:
    // 0x25ecac: 0x0  nop
    ctx->pc = 0x25ecacu;
    // NOP
label_25ecb0:
    // 0x25ecb0: 0x8aa1  .word       0x00008AA1                   # addu        $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ecb4:
    // 0x25ecb4: 0x5ce0  .word       0x00005CE0                   # add         $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ecb8:
    // 0x25ecb8: 0x0  nop
    ctx->pc = 0x25ecb8u;
    // NOP
label_25ecbc:
    // 0x25ecbc: 0x0  nop
    ctx->pc = 0x25ecbcu;
    // NOP
label_25ecc0:
    // 0x25ecc0: 0x8aad  .word       0x00008AAD                   # daddu       $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ecc4:
    // 0x25ecc4: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25ecc8:
    // 0x25ecc8: 0x0  nop
    ctx->pc = 0x25ecc8u;
    // NOP
label_25eccc:
    // 0x25eccc: 0x0  nop
    ctx->pc = 0x25ecccu;
    // NOP
label_25ecd0:
    // 0x25ecd0: 0x8ac0  sll         $s1, $zero, 11
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25ecd4:
    // 0x25ecd4: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ecd8:
    // 0x25ecd8: 0x0  nop
    ctx->pc = 0x25ecd8u;
    // NOP
label_25ecdc:
    // 0x25ecdc: 0x0  nop
    ctx->pc = 0x25ecdcu;
    // NOP
label_25ece0:
    // 0x25ece0: 0x8acd  break       0, 555
    ctx->pc = 0x25ece0u;
    runtime->handleBreak(rdram, ctx);
label_25ece4:
    // 0x25ece4: 0x81e0  .word       0x000081E0                   # add         $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ece4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25ece8:
    // 0x25ece8: 0x0  nop
    ctx->pc = 0x25ece8u;
    // NOP
label_25ecec:
    // 0x25ecec: 0x0  nop
    ctx->pc = 0x25ececu;
    // NOP
label_25ecf0:
    // 0x25ecf0: 0x8ade  .word       0x00008ADE                   # ddiv        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25ECF0 raw=0x00008ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ecf4:
    // 0x25ecf4: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x25ecf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ecf8:
    // 0x25ecf8: 0x0  nop
    ctx->pc = 0x25ecf8u;
    // NOP
label_25ecfc:
    // 0x25ecfc: 0x0  nop
    ctx->pc = 0x25ecfcu;
    // NOP
label_25ed00:
    // 0x25ed00: 0x8aea  .word       0x00008AEA                   # slt         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed00u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25ed04:
    // 0x25ed04: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ed08:
    // 0x25ed08: 0x0  nop
    ctx->pc = 0x25ed08u;
    // NOP
label_25ed0c:
    // 0x25ed0c: 0x0  nop
    ctx->pc = 0x25ed0cu;
    // NOP
label_25ed10:
    // 0x25ed10: 0x8af8  dsll        $s1, $zero, 11
    ctx->pc = 0x25ed10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 11);
label_25ed14:
    // 0x25ed14: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed14u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ed18:
    // 0x25ed18: 0x0  nop
    ctx->pc = 0x25ed18u;
    // NOP
label_25ed1c:
    // 0x25ed1c: 0x0  nop
    ctx->pc = 0x25ed1cu;
    // NOP
label_25ed20:
    // 0x25ed20: 0x8b05  .word       0x00008B05                   # INVALID     $zero, $zero, -0x74FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25ED20 raw=0x00008B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ed24:
    // 0x25ed24: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ed28:
    // 0x25ed28: 0x0  nop
    ctx->pc = 0x25ed28u;
    // NOP
label_25ed2c:
    // 0x25ed2c: 0x0  nop
    ctx->pc = 0x25ed2cu;
    // NOP
label_25ed30:
    // 0x25ed30: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed30u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ed34:
    // 0x25ed34: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25ed38:
    // 0x25ed38: 0x0  nop
    ctx->pc = 0x25ed38u;
    // NOP
label_25ed3c:
    // 0x25ed3c: 0x0  nop
    ctx->pc = 0x25ed3cu;
    // NOP
label_25ed40:
    // 0x25ed40: 0x8b1d  .word       0x00008B1D                   # dmultu      $zero, $zero # 00008B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25ED40 raw=0x00008B1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ed44:
    // 0x25ed44: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ed48:
    // 0x25ed48: 0x0  nop
    ctx->pc = 0x25ed48u;
    // NOP
label_25ed4c:
    // 0x25ed4c: 0x0  nop
    ctx->pc = 0x25ed4cu;
    // NOP
label_25ed50:
    // 0x25ed50: 0x8b2b  .word       0x00008B2B                   # sltu        $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed50u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ed54:
    // 0x25ed54: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ed58:
    // 0x25ed58: 0x0  nop
    ctx->pc = 0x25ed58u;
    // NOP
label_25ed5c:
    // 0x25ed5c: 0x0  nop
    ctx->pc = 0x25ed5cu;
    // NOP
label_25ed60:
    // 0x25ed60: 0x8b39  .word       0x00008B39                   # INVALID     $zero, $zero, -0x74C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25ED60 raw=0x00008B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ed64:
    // 0x25ed64: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x25ed64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25ed68:
    // 0x25ed68: 0x0  nop
    ctx->pc = 0x25ed68u;
    // NOP
label_25ed6c:
    // 0x25ed6c: 0x0  nop
    ctx->pc = 0x25ed6cu;
    // NOP
label_25ed70:
    // 0x25ed70: 0x8b46  .word       0x00008B46                   # srlv        $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed70u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ed74:
    // 0x25ed74: 0x5950  .word       0x00005950                   # mfhi        $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ed78:
    // 0x25ed78: 0x0  nop
    ctx->pc = 0x25ed78u;
    // NOP
label_25ed7c:
    // 0x25ed7c: 0x0  nop
    ctx->pc = 0x25ed7cu;
    // NOP
label_25ed80:
    // 0x25ed80: 0x8b52  .word       0x00008B52                   # mflo        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed80u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_25ed84:
    // 0x25ed84: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x25ed84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25ed88:
    // 0x25ed88: 0x0  nop
    ctx->pc = 0x25ed88u;
    // NOP
label_25ed8c:
    // 0x25ed8c: 0x0  nop
    ctx->pc = 0x25ed8cu;
    // NOP
label_25ed90:
    // 0x25ed90: 0x8b65  .word       0x00008B65                   # move        $s1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25ed94:
    // 0x25ed94: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25ed98:
    // 0x25ed98: 0x0  nop
    ctx->pc = 0x25ed98u;
    // NOP
label_25ed9c:
    // 0x25ed9c: 0x0  nop
    ctx->pc = 0x25ed9cu;
    // NOP
label_25eda0:
    // 0x25eda0: 0x8b78  dsll        $s1, $zero, 13
    ctx->pc = 0x25eda0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 13);
label_25eda4:
    // 0x25eda4: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25eda8:
    // 0x25eda8: 0x0  nop
    ctx->pc = 0x25eda8u;
    // NOP
label_25edac:
    // 0x25edac: 0x0  nop
    ctx->pc = 0x25edacu;
    // NOP
label_25edb0:
    // 0x25edb0: 0x8b82  srl         $s1, $zero, 14
    ctx->pc = 0x25edb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_25edb4:
    // 0x25edb4: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x25edb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25edb8:
    // 0x25edb8: 0x0  nop
    ctx->pc = 0x25edb8u;
    // NOP
label_25edbc:
    // 0x25edbc: 0x0  nop
    ctx->pc = 0x25edbcu;
    // NOP
label_25edc0:
    // 0x25edc0: 0x8b8f  .word       0x00008B8F                   # sync # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25edc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25edc4:
    // 0x25edc4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x25edc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25edc8:
    // 0x25edc8: 0x0  nop
    ctx->pc = 0x25edc8u;
    // NOP
label_25edcc:
    // 0x25edcc: 0x0  nop
    ctx->pc = 0x25edccu;
    // NOP
label_25edd0:
    // 0x25edd0: 0x8b99  .word       0x00008B99                   # multu       $zero, $zero # 00008B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25edd0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_25edd4:
    // 0x25edd4: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x25edd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25edd8:
    // 0x25edd8: 0x0  nop
    ctx->pc = 0x25edd8u;
    // NOP
label_25eddc:
    // 0x25eddc: 0x0  nop
    ctx->pc = 0x25eddcu;
    // NOP
label_25ede0:
    // 0x25ede0: 0x8ba6  .word       0x00008BA6                   # xor         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ede0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25ede4:
    // 0x25ede4: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ede4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ede8:
    // 0x25ede8: 0x0  nop
    ctx->pc = 0x25ede8u;
    // NOP
label_25edec:
    // 0x25edec: 0x0  nop
    ctx->pc = 0x25edecu;
    // NOP
label_25edf0:
    // 0x25edf0: 0x8bb2  tlt         $zero, $zero, 558
    ctx->pc = 0x25edf0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25edf4:
    // 0x25edf4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25edf4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25edf8:
    // 0x25edf8: 0x0  nop
    ctx->pc = 0x25edf8u;
    // NOP
label_25edfc:
    // 0x25edfc: 0x0  nop
    ctx->pc = 0x25edfcu;
    // NOP
label_25ee00:
    // 0x25ee00: 0x8bbe  dsrl32      $s1, $zero, 14
    ctx->pc = 0x25ee00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 14));
label_25ee04:
    // 0x25ee04: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ee08:
    // 0x25ee08: 0x0  nop
    ctx->pc = 0x25ee08u;
    // NOP
label_25ee0c:
    // 0x25ee0c: 0x0  nop
    ctx->pc = 0x25ee0cu;
    // NOP
label_25ee10:
    // 0x25ee10: 0x8bcb  .word       0x00008BCB                   # movn        $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee10u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_25ee14:
    // 0x25ee14: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee14u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25ee18:
    // 0x25ee18: 0x0  nop
    ctx->pc = 0x25ee18u;
    // NOP
label_25ee1c:
    // 0x25ee1c: 0x0  nop
    ctx->pc = 0x25ee1cu;
    // NOP
label_25ee20:
    // 0x25ee20: 0x8bd5  .word       0x00008BD5                   # INVALID     $zero, $zero, -0x742B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25EE20 raw=0x00008BD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ee24:
    // 0x25ee24: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ee28:
    // 0x25ee28: 0x0  nop
    ctx->pc = 0x25ee28u;
    // NOP
label_25ee2c:
    // 0x25ee2c: 0x0  nop
    ctx->pc = 0x25ee2cu;
    // NOP
label_25ee30:
    // 0x25ee30: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25ee34:
    // 0x25ee34: 0x6210  .word       0x00006210                   # mfhi        $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ee38:
    // 0x25ee38: 0x0  nop
    ctx->pc = 0x25ee38u;
    // NOP
label_25ee3c:
    // 0x25ee3c: 0x0  nop
    ctx->pc = 0x25ee3cu;
    // NOP
label_25ee40:
    // 0x25ee40: 0x8bed  .word       0x00008BED                   # daddu       $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ee44:
    // 0x25ee44: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ee48:
    // 0x25ee48: 0x0  nop
    ctx->pc = 0x25ee48u;
    // NOP
label_25ee4c:
    // 0x25ee4c: 0x0  nop
    ctx->pc = 0x25ee4cu;
    // NOP
label_25ee50:
    // 0x25ee50: 0x8bfa  dsrl        $s1, $zero, 15
    ctx->pc = 0x25ee50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 15);
label_25ee54:
    // 0x25ee54: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee54u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25ee58:
    // 0x25ee58: 0x0  nop
    ctx->pc = 0x25ee58u;
    // NOP
label_25ee5c:
    // 0x25ee5c: 0x0  nop
    ctx->pc = 0x25ee5cu;
    // NOP
label_25ee60:
    // 0x25ee60: 0x8c10  .word       0x00008C10                   # mfhi        $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee60u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ee64:
    // 0x25ee64: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x25ee64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ee68:
    // 0x25ee68: 0x0  nop
    ctx->pc = 0x25ee68u;
    // NOP
label_25ee6c:
    // 0x25ee6c: 0x0  nop
    ctx->pc = 0x25ee6cu;
    // NOP
label_25ee70:
    // 0x25ee70: 0x8c2c  .word       0x00008C2C                   # dadd        $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_25ee74:
    // 0x25ee74: 0x86c0  sll         $s0, $zero, 27
    ctx->pc = 0x25ee74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25ee78:
    // 0x25ee78: 0x0  nop
    ctx->pc = 0x25ee78u;
    // NOP
label_25ee7c:
    // 0x25ee7c: 0x0  nop
    ctx->pc = 0x25ee7cu;
    // NOP
label_25ee80:
    // 0x25ee80: 0x8c3d  .word       0x00008C3D                   # INVALID     $zero, $zero, -0x73C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25EE80 raw=0x00008C3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ee84:
    // 0x25ee84: 0xac90  .word       0x0000AC90                   # mfhi        $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25ee88:
    // 0x25ee88: 0x0  nop
    ctx->pc = 0x25ee88u;
    // NOP
label_25ee8c:
    // 0x25ee8c: 0x0  nop
    ctx->pc = 0x25ee8cu;
    // NOP
label_25ee90:
    // 0x25ee90: 0x8c53  .word       0x00008C53                   # mtlo        $zero # 00008C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ee90u;
    ctx->lo = GPR_U64(ctx, 0);
label_25ee94:
    // 0x25ee94: 0x6cf0  tge         $zero, $zero, 435
    ctx->pc = 0x25ee94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ee98:
    // 0x25ee98: 0x0  nop
    ctx->pc = 0x25ee98u;
    // NOP
label_25ee9c:
    // 0x25ee9c: 0x0  nop
    ctx->pc = 0x25ee9cu;
    // NOP
label_25eea0:
    // 0x25eea0: 0x8c61  .word       0x00008C61                   # addu        $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25eea4:
    // 0x25eea4: 0xa5a0  .word       0x0000A5A0                   # add         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25eea8:
    // 0x25eea8: 0x0  nop
    ctx->pc = 0x25eea8u;
    // NOP
label_25eeac:
    // 0x25eeac: 0x0  nop
    ctx->pc = 0x25eeacu;
    // NOP
label_25eeb0:
    // 0x25eeb0: 0x8c76  tne         $zero, $zero, 561
    ctx->pc = 0x25eeb0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eeb4:
    // 0x25eeb4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x25eeb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eeb8:
    // 0x25eeb8: 0x0  nop
    ctx->pc = 0x25eeb8u;
    // NOP
label_25eebc:
    // 0x25eebc: 0x0  nop
    ctx->pc = 0x25eebcu;
    // NOP
label_25eec0:
    // 0x25eec0: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eec0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25eec4:
    // 0x25eec4: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x25eec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25eec8:
    // 0x25eec8: 0x0  nop
    ctx->pc = 0x25eec8u;
    // NOP
label_25eecc:
    // 0x25eecc: 0x0  nop
    ctx->pc = 0x25eeccu;
    // NOP
label_25eed0:
    // 0x25eed0: 0x8ca1  .word       0x00008CA1                   # addu        $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25eed4:
    // 0x25eed4: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eed4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25eed8:
    // 0x25eed8: 0x0  nop
    ctx->pc = 0x25eed8u;
    // NOP
label_25eedc:
    // 0x25eedc: 0x0  nop
    ctx->pc = 0x25eedcu;
    // NOP
label_25eee0:
    // 0x25eee0: 0x8cb8  dsll        $s1, $zero, 18
    ctx->pc = 0x25eee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 18);
label_25eee4:
    // 0x25eee4: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eee4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25eee8:
    // 0x25eee8: 0x0  nop
    ctx->pc = 0x25eee8u;
    // NOP
label_25eeec:
    // 0x25eeec: 0x0  nop
    ctx->pc = 0x25eeecu;
    // NOP
label_25eef0:
    // 0x25eef0: 0x8cc9  .word       0x00008CC9                   # jalr        $s1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_25eef4:
    if (ctx->pc == 0x25EEF4u) {
        ctx->pc = 0x25EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEF0u;
        // 0x25eef4: 0x8230  tge         $zero, $zero, 520 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EEF8u;
        goto label_25eef8;
    }
    ctx->pc = 0x25EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x25EEF8u);
        ctx->pc = 0x25EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEF0u;
        // 0x25eef4: 0x8230  tge         $zero, $zero, 520 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EEF0u, 0x25EEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EEF8u;
label_25eef8:
    // 0x25eef8: 0x0  nop
    ctx->pc = 0x25eef8u;
    // NOP
label_25eefc:
    // 0x25eefc: 0x0  nop
    ctx->pc = 0x25eefcu;
    // NOP
label_25ef00:
    // 0x25ef00: 0x8cda  .word       0x00008CDA                   # div         $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25ef04:
    // 0x25ef04: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x25ef04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25ef08:
    // 0x25ef08: 0x0  nop
    ctx->pc = 0x25ef08u;
    // NOP
label_25ef0c:
    // 0x25ef0c: 0x0  nop
    ctx->pc = 0x25ef0cu;
    // NOP
label_25ef10:
    // 0x25ef10: 0x8ceb  .word       0x00008CEB                   # sltu        $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef10u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ef14:
    // 0x25ef14: 0x7d00  sll         $t7, $zero, 20
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25ef18:
    // 0x25ef18: 0x0  nop
    ctx->pc = 0x25ef18u;
    // NOP
label_25ef1c:
    // 0x25ef1c: 0x0  nop
    ctx->pc = 0x25ef1cu;
    // NOP
label_25ef20:
    // 0x25ef20: 0x8cfb  dsra        $s1, $zero, 19
    ctx->pc = 0x25ef20u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 19);
label_25ef24:
    // 0x25ef24: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef24u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25ef28:
    // 0x25ef28: 0x0  nop
    ctx->pc = 0x25ef28u;
    // NOP
label_25ef2c:
    // 0x25ef2c: 0x0  nop
    ctx->pc = 0x25ef2cu;
    // NOP
label_25ef30:
    // 0x25ef30: 0x8d10  .word       0x00008D10                   # mfhi        $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef30u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ef34:
    // 0x25ef34: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x25ef34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef38:
    // 0x25ef38: 0x0  nop
    ctx->pc = 0x25ef38u;
    // NOP
label_25ef3c:
    // 0x25ef3c: 0x0  nop
    ctx->pc = 0x25ef3cu;
    // NOP
label_25ef40:
    // 0x25ef40: 0x8d22  .word       0x00008D22                   # neg         $s1, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_25ef44:
    // 0x25ef44: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25ef48:
    // 0x25ef48: 0x0  nop
    ctx->pc = 0x25ef48u;
    // NOP
label_25ef4c:
    // 0x25ef4c: 0x0  nop
    ctx->pc = 0x25ef4cu;
    // NOP
label_25ef50:
    // 0x25ef50: 0x8d31  tgeu        $zero, $zero, 564
    ctx->pc = 0x25ef50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef54:
    // 0x25ef54: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef54u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25ef58:
    // 0x25ef58: 0x0  nop
    ctx->pc = 0x25ef58u;
    // NOP
label_25ef5c:
    // 0x25ef5c: 0x0  nop
    ctx->pc = 0x25ef5cu;
    // NOP
label_25ef60:
    // 0x25ef60: 0x8d49  .word       0x00008D49                   # jalr        $s1, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
label_25ef64:
    if (ctx->pc == 0x25EF64u) {
        ctx->pc = 0x25EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF60u;
        // 0x25ef64: 0x8a80  sll         $s1, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF68u;
        goto label_25ef68;
    }
    ctx->pc = 0x25EF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x25EF68u);
        ctx->pc = 0x25EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF60u;
        // 0x25ef64: 0x8a80  sll         $s1, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF60u, 0x25EF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EF68u;
label_25ef68:
    // 0x25ef68: 0x0  nop
    ctx->pc = 0x25ef68u;
    // NOP
label_25ef6c:
    // 0x25ef6c: 0x0  nop
    ctx->pc = 0x25ef6cu;
    // NOP
label_25ef70:
    // 0x25ef70: 0x8d5b  .word       0x00008D5B                   # divu        $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ef70u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25ef74:
    // 0x25ef74: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x25ef74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef78:
    // 0x25ef78: 0x0  nop
    ctx->pc = 0x25ef78u;
    // NOP
label_25ef7c:
    // 0x25ef7c: 0x0  nop
    ctx->pc = 0x25ef7cu;
    // NOP
label_25ef80:
    // 0x25ef80: 0x8d69  .word       0x00008D69                   # mtsa        $zero # 00008D40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ef80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25ef84:
    // 0x25ef84: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x25ef84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef88:
    // 0x25ef88: 0x0  nop
    ctx->pc = 0x25ef88u;
    // NOP
label_25ef8c:
    // 0x25ef8c: 0x0  nop
    ctx->pc = 0x25ef8cu;
    // NOP
label_25ef90:
    // 0x25ef90: 0x8d73  tltu        $zero, $zero, 565
    ctx->pc = 0x25ef90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef94:
    // 0x25ef94: 0xafb0  tge         $zero, $zero, 702
    ctx->pc = 0x25ef94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ef98:
    // 0x25ef98: 0x0  nop
    ctx->pc = 0x25ef98u;
    // NOP
label_25ef9c:
    // 0x25ef9c: 0x0  nop
    ctx->pc = 0x25ef9cu;
    // NOP
label_25efa0:
    // 0x25efa0: 0x8d89  .word       0x00008D89                   # jalr        $s1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_25efa4:
    if (ctx->pc == 0x25EFA4u) {
        ctx->pc = 0x25EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA0u;
        // 0x25efa4: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFA8u;
        goto label_25efa8;
    }
    ctx->pc = 0x25EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x25EFA8u);
        ctx->pc = 0x25EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA0u;
        // 0x25efa4: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFA0u, 0x25EFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EFA8u;
label_25efa8:
    // 0x25efa8: 0x0  nop
    ctx->pc = 0x25efa8u;
    // NOP
label_25efac:
    // 0x25efac: 0x0  nop
    ctx->pc = 0x25efacu;
    // NOP
label_25efb0:
    // 0x25efb0: 0x8d9b  .word       0x00008D9B                   # divu        $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efb0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25efb4:
    // 0x25efb4: 0xc010  mfhi        $t8
    ctx->pc = 0x25efb4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25efb8:
    // 0x25efb8: 0x0  nop
    ctx->pc = 0x25efb8u;
    // NOP
label_25efbc:
    // 0x25efbc: 0x0  nop
    ctx->pc = 0x25efbcu;
    // NOP
label_25efc0:
    // 0x25efc0: 0x8db4  teq         $zero, $zero, 566
    ctx->pc = 0x25efc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25efc4:
    // 0x25efc4: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25efc8:
    // 0x25efc8: 0x0  nop
    ctx->pc = 0x25efc8u;
    // NOP
label_25efcc:
    // 0x25efcc: 0x0  nop
    ctx->pc = 0x25efccu;
    // NOP
label_25efd0:
    // 0x25efd0: 0x8dca  .word       0x00008DCA                   # movz        $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efd0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_25efd4:
    // 0x25efd4: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efd4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25efd8:
    // 0x25efd8: 0x0  nop
    ctx->pc = 0x25efd8u;
    // NOP
label_25efdc:
    // 0x25efdc: 0x0  nop
    ctx->pc = 0x25efdcu;
    // NOP
label_25efe0:
    // 0x25efe0: 0x8dde  .word       0x00008DDE                   # ddiv        $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25EFE0 raw=0x00008DDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25efe4:
    // 0x25efe4: 0x3f20  .word       0x00003F20                   # add         $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25efe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25efe8:
    // 0x25efe8: 0x0  nop
    ctx->pc = 0x25efe8u;
    // NOP
label_25efec:
    // 0x25efec: 0x0  nop
    ctx->pc = 0x25efecu;
    // NOP
label_25eff0:
    // 0x25eff0: 0x8de6  .word       0x00008DE6                   # xor         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eff0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25eff4:
    // 0x25eff4: 0x96e0  .word       0x000096E0                   # add         $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25eff8:
    // 0x25eff8: 0x0  nop
    ctx->pc = 0x25eff8u;
    // NOP
label_25effc:
    // 0x25effc: 0x0  nop
    ctx->pc = 0x25effcu;
    // NOP
label_25f000:
    // 0x25f000: 0x8df9  .word       0x00008DF9                   # INVALID     $zero, $zero, -0x7207 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25F000 raw=0x00008DF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f004:
    // 0x25f004: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x25f004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25f008:
    // 0x25f008: 0x0  nop
    ctx->pc = 0x25f008u;
    // NOP
label_25f00c:
    // 0x25f00c: 0x0  nop
    ctx->pc = 0x25f00cu;
    // NOP
label_25f010:
    // 0x25f010: 0x8e09  .word       0x00008E09                   # jalr        $s1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_25f014:
    if (ctx->pc == 0x25F014u) {
        ctx->pc = 0x25F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F010u;
        // 0x25f014: 0x9900  sll         $s3, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F018u;
        goto label_25f018;
    }
    ctx->pc = 0x25F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x25F018u);
        ctx->pc = 0x25F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F010u;
        // 0x25f014: 0x9900  sll         $s3, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F010u, 0x25F018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F018u;
label_25f018:
    // 0x25f018: 0x0  nop
    ctx->pc = 0x25f018u;
    // NOP
label_25f01c:
    // 0x25f01c: 0x0  nop
    ctx->pc = 0x25f01cu;
    // NOP
label_25f020:
    // 0x25f020: 0x8e1d  .word       0x00008E1D                   # dmultu      $zero, $zero # 00008E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25F020 raw=0x00008E1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f024:
    // 0x25f024: 0x9070  tge         $zero, $zero, 577
    ctx->pc = 0x25f024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f028:
    // 0x25f028: 0x0  nop
    ctx->pc = 0x25f028u;
    // NOP
label_25f02c:
    // 0x25f02c: 0x0  nop
    ctx->pc = 0x25f02cu;
    // NOP
label_25f030:
    // 0x25f030: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x25f030u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f034:
    // 0x25f034: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25f038:
    // 0x25f038: 0x0  nop
    ctx->pc = 0x25f038u;
    // NOP
label_25f03c:
    // 0x25f03c: 0x0  nop
    ctx->pc = 0x25f03cu;
    // NOP
label_25f040:
    // 0x25f040: 0x8e45  .word       0x00008E45                   # INVALID     $zero, $zero, -0x71BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25F040 raw=0x00008E45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f044:
    // 0x25f044: 0x9e10  .word       0x00009E10                   # mfhi        $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f044u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25f048:
    // 0x25f048: 0x0  nop
    ctx->pc = 0x25f048u;
    // NOP
label_25f04c:
    // 0x25f04c: 0x0  nop
    ctx->pc = 0x25f04cu;
    // NOP
label_25f050:
    // 0x25f050: 0x8e59  .word       0x00008E59                   # multu       $zero, $zero # 00008E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f050u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_25f054:
    // 0x25f054: 0x8c60  .word       0x00008C60                   # add         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25f058:
    // 0x25f058: 0x0  nop
    ctx->pc = 0x25f058u;
    // NOP
label_25f05c:
    // 0x25f05c: 0x0  nop
    ctx->pc = 0x25f05cu;
    // NOP
label_25f060:
    // 0x25f060: 0x8e6b  .word       0x00008E6B                   # sltu        $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f060u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25f064:
    // 0x25f064: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x25f064u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25f068:
    // 0x25f068: 0x0  nop
    ctx->pc = 0x25f068u;
    // NOP
label_25f06c:
    // 0x25f06c: 0x0  nop
    ctx->pc = 0x25f06cu;
    // NOP
label_25f070:
    // 0x25f070: 0x8e79  .word       0x00008E79                   # INVALID     $zero, $zero, -0x7187 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25F070 raw=0x00008E79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f074:
    // 0x25f074: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f074u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25f078:
    // 0x25f078: 0x0  nop
    ctx->pc = 0x25f078u;
    // NOP
label_25f07c:
    // 0x25f07c: 0x0  nop
    ctx->pc = 0x25f07cu;
    // NOP
label_25f080:
    // 0x25f080: 0x8e8a  .word       0x00008E8A                   # movz        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f080u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_25f084:
    // 0x25f084: 0x9250  .word       0x00009250                   # mfhi        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f084u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25f088:
    // 0x25f088: 0x0  nop
    ctx->pc = 0x25f088u;
    // NOP
label_25f08c:
    // 0x25f08c: 0x0  nop
    ctx->pc = 0x25f08cu;
    // NOP
label_25f090:
    // 0x25f090: 0x8e9d  .word       0x00008E9D                   # dmultu      $zero, $zero # 00008E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25F090 raw=0x00008E9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f094:
    // 0x25f094: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x25f094u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25f098:
    // 0x25f098: 0x0  nop
    ctx->pc = 0x25f098u;
    // NOP
label_25f09c:
    // 0x25f09c: 0x0  nop
    ctx->pc = 0x25f09cu;
    // NOP
label_25f0a0:
    // 0x25f0a0: 0x8eac  .word       0x00008EAC                   # dadd        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f0a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_25f0a4:
    // 0x25f0a4: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f0a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25f0a8:
    // 0x25f0a8: 0x0  nop
    ctx->pc = 0x25f0a8u;
    // NOP
label_25f0ac:
    // 0x25f0ac: 0x0  nop
    ctx->pc = 0x25f0acu;
    // NOP
label_25f0b0:
    // 0x25f0b0: 0x8ebe  dsrl32      $s1, $zero, 26
    ctx->pc = 0x25f0b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 26));
label_25f0b4:
    // 0x25f0b4: 0x98f0  tge         $zero, $zero, 611
    ctx->pc = 0x25f0b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f0b8:
    // 0x25f0b8: 0x0  nop
    ctx->pc = 0x25f0b8u;
    // NOP
label_25f0bc:
    // 0x25f0bc: 0x0  nop
    ctx->pc = 0x25f0bcu;
    // NOP
label_25f0c0:
    // 0x25f0c0: 0x8ed2  .word       0x00008ED2                   # mflo        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f0c0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_25f0c4:
    // 0x25f0c4: 0x9e30  tge         $zero, $zero, 632
    ctx->pc = 0x25f0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f0c8:
    // 0x25f0c8: 0x0  nop
    ctx->pc = 0x25f0c8u;
    // NOP
label_25f0cc:
    // 0x25f0cc: 0x0  nop
    ctx->pc = 0x25f0ccu;
    // NOP
label_25f0d0:
    // 0x25f0d0: 0x8ee6  .word       0x00008EE6                   # xor         $s1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f0d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25f0d4:
    // 0x25f0d4: 0xc100  sll         $t8, $zero, 4
    ctx->pc = 0x25f0d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25f0d8:
    // 0x25f0d8: 0x0  nop
    ctx->pc = 0x25f0d8u;
    // NOP
label_25f0dc:
    // 0x25f0dc: 0x0  nop
    ctx->pc = 0x25f0dcu;
    // NOP
label_25f0e0:
    // 0x25f0e0: 0x8eff  dsra32      $s1, $zero, 27
    ctx->pc = 0x25f0e0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 27));
label_25f0e4:
    // 0x25f0e4: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25f0e8:
    // 0x25f0e8: 0x0  nop
    ctx->pc = 0x25f0e8u;
    // NOP
label_25f0ec:
    // 0x25f0ec: 0x0  nop
    ctx->pc = 0x25f0ecu;
    // NOP
label_25f0f0:
    // 0x25f0f0: 0x8f0c  syscall     572
    ctx->pc = 0x25f0f0u;
    ctx->pc = 0x25F0F4u;
runtime->handleSyscall(rdram, ctx, 0x23Cu);
label_25f0f4:
    // 0x25f0f4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x25f0f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f0f8:
    // 0x25f0f8: 0x0  nop
    ctx->pc = 0x25f0f8u;
    // NOP
label_25f0fc:
    // 0x25f0fc: 0x0  nop
    ctx->pc = 0x25f0fcu;
    // NOP
label_25f100:
    // 0x25f100: 0x8f17  .word       0x00008F17                   # dsrav       $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f100u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f104:
    // 0x25f104: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25f108:
    // 0x25f108: 0x0  nop
    ctx->pc = 0x25f108u;
    // NOP
label_25f10c:
    // 0x25f10c: 0x0  nop
    ctx->pc = 0x25f10cu;
    // NOP
label_25f110:
    // 0x25f110: 0x8f28  .word       0x00008F28                   # mfsa        $s1 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f110u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_25f114:
    // 0x25f114: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x25f114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f118:
    // 0x25f118: 0x0  nop
    ctx->pc = 0x25f118u;
    // NOP
label_25f11c:
    // 0x25f11c: 0x0  nop
    ctx->pc = 0x25f11cu;
    // NOP
label_25f120:
    // 0x25f120: 0x8f34  teq         $zero, $zero, 572
    ctx->pc = 0x25f120u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f124:
    // 0x25f124: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25f128:
    // 0x25f128: 0x0  nop
    ctx->pc = 0x25f128u;
    // NOP
label_25f12c:
    // 0x25f12c: 0x0  nop
    ctx->pc = 0x25f12cu;
    // NOP
label_25f130:
    // 0x25f130: 0x8f43  sra         $s1, $zero, 29
    ctx->pc = 0x25f130u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 29));
label_25f134:
    // 0x25f134: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x25f134u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25f138:
    // 0x25f138: 0x0  nop
    ctx->pc = 0x25f138u;
    // NOP
label_25f13c:
    // 0x25f13c: 0x0  nop
    ctx->pc = 0x25f13cu;
    // NOP
label_25f140:
    // 0x25f140: 0x8f56  .word       0x00008F56                   # dsrlv       $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f144:
    // 0x25f144: 0x63d0  .word       0x000063D0                   # mfhi        $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f144u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25f148:
    // 0x25f148: 0x0  nop
    ctx->pc = 0x25f148u;
    // NOP
label_25f14c:
    // 0x25f14c: 0x0  nop
    ctx->pc = 0x25f14cu;
    // NOP
label_25f150:
    // 0x25f150: 0x8f63  .word       0x00008F63                   # negu        $s1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f150u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f154:
    // 0x25f154: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25f158:
    // 0x25f158: 0x0  nop
    ctx->pc = 0x25f158u;
    // NOP
label_25f15c:
    // 0x25f15c: 0x0  nop
    ctx->pc = 0x25f15cu;
    // NOP
label_25f160:
    // 0x25f160: 0x8f6d  .word       0x00008F6D                   # daddu       $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f164:
    // 0x25f164: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25f168:
    // 0x25f168: 0x0  nop
    ctx->pc = 0x25f168u;
    // NOP
label_25f16c:
    // 0x25f16c: 0x0  nop
    ctx->pc = 0x25f16cu;
    // NOP
label_25f170:
    // 0x25f170: 0x8f7b  dsra        $s1, $zero, 29
    ctx->pc = 0x25f170u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 29);
label_25f174:
    // 0x25f174: 0x4d40  sll         $t1, $zero, 21
    ctx->pc = 0x25f174u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25f178:
    // 0x25f178: 0x0  nop
    ctx->pc = 0x25f178u;
    // NOP
label_25f17c:
    // 0x25f17c: 0x0  nop
    ctx->pc = 0x25f17cu;
    // NOP
label_25f180:
    // 0x25f180: 0x8f85  .word       0x00008F85                   # INVALID     $zero, $zero, -0x707B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25F180 raw=0x00008F85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f184:
    // 0x25f184: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25f188:
    // 0x25f188: 0x0  nop
    ctx->pc = 0x25f188u;
    // NOP
label_25f18c:
    // 0x25f18c: 0x0  nop
    ctx->pc = 0x25f18cu;
    // NOP
label_25f190:
    // 0x25f190: 0x8f95  .word       0x00008F95                   # INVALID     $zero, $zero, -0x706B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25F190 raw=0x00008F95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f194:
    // 0x25f194: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x25f194u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25f198:
    // 0x25f198: 0x0  nop
    ctx->pc = 0x25f198u;
    // NOP
label_25f19c:
    // 0x25f19c: 0x0  nop
    ctx->pc = 0x25f19cu;
    // NOP
label_25f1a0:
    // 0x25f1a0: 0x8fa1  .word       0x00008FA1                   # addu        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f1a4:
    // 0x25f1a4: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25f1a8:
    // 0x25f1a8: 0x0  nop
    ctx->pc = 0x25f1a8u;
    // NOP
label_25f1ac:
    // 0x25f1ac: 0x0  nop
    ctx->pc = 0x25f1acu;
    // NOP
label_25f1b0:
    // 0x25f1b0: 0x8fae  .word       0x00008FAE                   # dsub        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_25f1b4:
    // 0x25f1b4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25f1b8:
    // 0x25f1b8: 0x0  nop
    ctx->pc = 0x25f1b8u;
    // NOP
label_25f1bc:
    // 0x25f1bc: 0x0  nop
    ctx->pc = 0x25f1bcu;
    // NOP
label_25f1c0:
    // 0x25f1c0: 0x8fbd  .word       0x00008FBD                   # INVALID     $zero, $zero, -0x7043 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25F1C0 raw=0x00008FBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f1c4:
    // 0x25f1c4: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25f1c8:
    // 0x25f1c8: 0x0  nop
    ctx->pc = 0x25f1c8u;
    // NOP
label_25f1cc:
    // 0x25f1cc: 0x0  nop
    ctx->pc = 0x25f1ccu;
    // NOP
label_25f1d0:
    // 0x25f1d0: 0x8fca  .word       0x00008FCA                   # movz        $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_25f1d4:
    // 0x25f1d4: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25f1d8:
    // 0x25f1d8: 0x0  nop
    ctx->pc = 0x25f1d8u;
    // NOP
label_25f1dc:
    // 0x25f1dc: 0x0  nop
    ctx->pc = 0x25f1dcu;
    // NOP
label_25f1e0:
    // 0x25f1e0: 0x8fd7  .word       0x00008FD7                   # dsrav       $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1e0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f1e4:
    // 0x25f1e4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25f1e8:
    // 0x25f1e8: 0x0  nop
    ctx->pc = 0x25f1e8u;
    // NOP
label_25f1ec:
    // 0x25f1ec: 0x0  nop
    ctx->pc = 0x25f1ecu;
    // NOP
label_25f1f0:
    // 0x25f1f0: 0x8fe2  .word       0x00008FE2                   # neg         $s1, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f1f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_25f1f4:
    // 0x25f1f4: 0xa240  sll         $s4, $zero, 9
    ctx->pc = 0x25f1f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25f1f8:
    // 0x25f1f8: 0x0  nop
    ctx->pc = 0x25f1f8u;
    // NOP
label_25f1fc:
    // 0x25f1fc: 0x0  nop
    ctx->pc = 0x25f1fcu;
    // NOP
label_25f200:
    // 0x25f200: 0x8ff7  .word       0x00008FF7                   # INVALID     $zero, $zero, -0x7009 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25F200 raw=0x00008FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f204:
    // 0x25f204: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x25f204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f208:
    // 0x25f208: 0x0  nop
    ctx->pc = 0x25f208u;
    // NOP
label_25f20c:
    // 0x25f20c: 0x0  nop
    ctx->pc = 0x25f20cu;
    // NOP
label_25f210:
    // 0x25f210: 0x9007  srav        $s2, $zero, $zero
    ctx->pc = 0x25f210u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f214:
    // 0x25f214: 0x6930  tge         $zero, $zero, 420
    ctx->pc = 0x25f214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f218:
    // 0x25f218: 0x0  nop
    ctx->pc = 0x25f218u;
    // NOP
label_25f21c:
    // 0x25f21c: 0x0  nop
    ctx->pc = 0x25f21cu;
    // NOP
label_25f220:
    // 0x25f220: 0x9015  .word       0x00009015                   # INVALID     $zero, $zero, -0x6FEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25F220 raw=0x00009015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f224:
    // 0x25f224: 0x98f0  tge         $zero, $zero, 611
    ctx->pc = 0x25f224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f228:
    // 0x25f228: 0x0  nop
    ctx->pc = 0x25f228u;
    // NOP
label_25f22c:
    // 0x25f22c: 0x0  nop
    ctx->pc = 0x25f22cu;
    // NOP
label_25f230:
    // 0x25f230: 0x9029  .word       0x00009029                   # mtsa        $zero # 00009000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f230u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25f234:
    // 0x25f234: 0x6d70  tge         $zero, $zero, 437
    ctx->pc = 0x25f234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f238:
    // 0x25f238: 0x0  nop
    ctx->pc = 0x25f238u;
    // NOP
label_25f23c:
    // 0x25f23c: 0x0  nop
    ctx->pc = 0x25f23cu;
    // NOP
label_25f240:
    // 0x25f240: 0x9037  .word       0x00009037                   # INVALID     $zero, $zero, -0x6FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25F240 raw=0x00009037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f244:
    // 0x25f244: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x25f244u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25f248:
    // 0x25f248: 0x0  nop
    ctx->pc = 0x25f248u;
    // NOP
label_25f24c:
    // 0x25f24c: 0x0  nop
    ctx->pc = 0x25f24cu;
    // NOP
label_25f250:
    // 0x25f250: 0x9044  .word       0x00009044                   # sllv        $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f254:
    // 0x25f254: 0x7d70  tge         $zero, $zero, 501
    ctx->pc = 0x25f254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f258:
    // 0x25f258: 0x0  nop
    ctx->pc = 0x25f258u;
    // NOP
label_25f25c:
    // 0x25f25c: 0x0  nop
    ctx->pc = 0x25f25cu;
    // NOP
label_25f260:
    // 0x25f260: 0x9054  .word       0x00009054                   # dsllv       $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f260u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25f264:
    // 0x25f264: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25f268:
    // 0x25f268: 0x0  nop
    ctx->pc = 0x25f268u;
    // NOP
label_25f26c:
    // 0x25f26c: 0x0  nop
    ctx->pc = 0x25f26cu;
    // NOP
label_25f270:
    // 0x25f270: 0x9062  .word       0x00009062                   # neg         $s2, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f270u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_25f274:
    // 0x25f274: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x25f274u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25f278:
    // 0x25f278: 0x0  nop
    ctx->pc = 0x25f278u;
    // NOP
label_25f27c:
    // 0x25f27c: 0x0  nop
    ctx->pc = 0x25f27cu;
    // NOP
label_25f280:
    // 0x25f280: 0x906c  .word       0x0000906C                   # dadd        $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f284:
    // 0x25f284: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25f288:
    // 0x25f288: 0x0  nop
    ctx->pc = 0x25f288u;
    // NOP
label_25f28c:
    // 0x25f28c: 0x0  nop
    ctx->pc = 0x25f28cu;
    // NOP
label_25f290:
    // 0x25f290: 0x9078  dsll        $s2, $zero, 1
    ctx->pc = 0x25f290u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 1);
label_25f294:
    // 0x25f294: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x25f294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f298:
    // 0x25f298: 0x0  nop
    ctx->pc = 0x25f298u;
    // NOP
label_25f29c:
    // 0x25f29c: 0x0  nop
    ctx->pc = 0x25f29cu;
    // NOP
label_25f2a0:
    // 0x25f2a0: 0x9084  .word       0x00009084                   # sllv        $s2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f2a4:
    // 0x25f2a4: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x25f2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f2a8:
    // 0x25f2a8: 0x0  nop
    ctx->pc = 0x25f2a8u;
    // NOP
label_25f2ac:
    // 0x25f2ac: 0x0  nop
    ctx->pc = 0x25f2acu;
    // NOP
label_25f2b0:
    // 0x25f2b0: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2b0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25f2b4:
    // 0x25f2b4: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25f2b8:
    // 0x25f2b8: 0x0  nop
    ctx->pc = 0x25f2b8u;
    // NOP
label_25f2bc:
    // 0x25f2bc: 0x0  nop
    ctx->pc = 0x25f2bcu;
    // NOP
label_25f2c0:
    // 0x25f2c0: 0x90ac  .word       0x000090AC                   # dadd        $s2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f2c4:
    // 0x25f2c4: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25f2c8:
    // 0x25f2c8: 0x0  nop
    ctx->pc = 0x25f2c8u;
    // NOP
label_25f2cc:
    // 0x25f2cc: 0x0  nop
    ctx->pc = 0x25f2ccu;
    // NOP
label_25f2d0:
    // 0x25f2d0: 0x90b8  dsll        $s2, $zero, 2
    ctx->pc = 0x25f2d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 2);
label_25f2d4:
    // 0x25f2d4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f2d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25f2d8:
    // 0x25f2d8: 0x0  nop
    ctx->pc = 0x25f2d8u;
    // NOP
label_25f2dc:
    // 0x25f2dc: 0x0  nop
    ctx->pc = 0x25f2dcu;
    // NOP
label_25f2e0:
    // 0x25f2e0: 0x90c8  .word       0x000090C8                   # jr          $zero # 000090C0 <InstrIdType: CPU_SPECIAL>
label_25f2e4:
    if (ctx->pc == 0x25F2E4u) {
        ctx->pc = 0x25F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2E0u;
        // 0x25f2e4: 0x71c0  sll         $t6, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2E8u;
        { ctx->pc = 0x25f2e8; return; }
    }
    ctx->pc = 0x25F2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2E0u;
        // 0x25f2e4: 0x71c0  sll         $t6, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F2E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F2E8u;
    ctx->pc = 0x25f2e8u;
    return;
}

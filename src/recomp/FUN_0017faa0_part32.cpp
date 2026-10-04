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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part32(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x18f2e0u: goto label_18f2e0;
        case 0x18f2e4u: goto label_18f2e4;
        case 0x18f2e8u: goto label_18f2e8;
        case 0x18f2ecu: goto label_18f2ec;
        case 0x18f2f0u: goto label_18f2f0;
        case 0x18f2f4u: goto label_18f2f4;
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f2fcu: goto label_18f2fc;
        case 0x18f300u: goto label_18f300;
        case 0x18f304u: goto label_18f304;
        case 0x18f308u: goto label_18f308;
        case 0x18f30cu: goto label_18f30c;
        case 0x18f310u: goto label_18f310;
        case 0x18f314u: goto label_18f314;
        case 0x18f318u: goto label_18f318;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f320u: goto label_18f320;
        case 0x18f324u: goto label_18f324;
        case 0x18f328u: goto label_18f328;
        case 0x18f32cu: goto label_18f32c;
        case 0x18f330u: goto label_18f330;
        case 0x18f334u: goto label_18f334;
        case 0x18f338u: goto label_18f338;
        case 0x18f33cu: goto label_18f33c;
        case 0x18f340u: goto label_18f340;
        case 0x18f344u: goto label_18f344;
        case 0x18f348u: goto label_18f348;
        case 0x18f34cu: goto label_18f34c;
        case 0x18f350u: goto label_18f350;
        case 0x18f354u: goto label_18f354;
        case 0x18f358u: goto label_18f358;
        case 0x18f35cu: goto label_18f35c;
        case 0x18f360u: goto label_18f360;
        case 0x18f364u: goto label_18f364;
        case 0x18f368u: goto label_18f368;
        case 0x18f36cu: goto label_18f36c;
        case 0x18f370u: goto label_18f370;
        case 0x18f374u: goto label_18f374;
        case 0x18f378u: goto label_18f378;
        case 0x18f37cu: goto label_18f37c;
        case 0x18f380u: goto label_18f380;
        case 0x18f384u: goto label_18f384;
        case 0x18f388u: goto label_18f388;
        case 0x18f38cu: goto label_18f38c;
        case 0x18f390u: goto label_18f390;
        case 0x18f394u: goto label_18f394;
        case 0x18f398u: goto label_18f398;
        case 0x18f39cu: goto label_18f39c;
        case 0x18f3a0u: goto label_18f3a0;
        case 0x18f3a4u: goto label_18f3a4;
        case 0x18f3a8u: goto label_18f3a8;
        case 0x18f3acu: goto label_18f3ac;
        case 0x18f3b0u: goto label_18f3b0;
        case 0x18f3b4u: goto label_18f3b4;
        case 0x18f3b8u: goto label_18f3b8;
        case 0x18f3bcu: goto label_18f3bc;
        case 0x18f3c0u: goto label_18f3c0;
        case 0x18f3c4u: goto label_18f3c4;
        case 0x18f3c8u: goto label_18f3c8;
        case 0x18f3ccu: goto label_18f3cc;
        case 0x18f3d0u: goto label_18f3d0;
        case 0x18f3d4u: goto label_18f3d4;
        case 0x18f3d8u: goto label_18f3d8;
        case 0x18f3dcu: goto label_18f3dc;
        case 0x18f3e0u: goto label_18f3e0;
        case 0x18f3e4u: goto label_18f3e4;
        case 0x18f3e8u: goto label_18f3e8;
        case 0x18f3ecu: goto label_18f3ec;
        case 0x18f3f0u: goto label_18f3f0;
        case 0x18f3f4u: goto label_18f3f4;
        case 0x18f3f8u: goto label_18f3f8;
        case 0x18f3fcu: goto label_18f3fc;
        case 0x18f400u: goto label_18f400;
        case 0x18f404u: goto label_18f404;
        case 0x18f408u: goto label_18f408;
        case 0x18f40cu: goto label_18f40c;
        case 0x18f410u: goto label_18f410;
        case 0x18f414u: goto label_18f414;
        case 0x18f418u: goto label_18f418;
        case 0x18f41cu: goto label_18f41c;
        case 0x18f420u: goto label_18f420;
        case 0x18f424u: goto label_18f424;
        case 0x18f428u: goto label_18f428;
        case 0x18f42cu: goto label_18f42c;
        case 0x18f430u: goto label_18f430;
        case 0x18f434u: goto label_18f434;
        case 0x18f438u: goto label_18f438;
        case 0x18f43cu: goto label_18f43c;
        case 0x18f440u: goto label_18f440;
        case 0x18f444u: goto label_18f444;
        case 0x18f448u: goto label_18f448;
        case 0x18f44cu: goto label_18f44c;
        case 0x18f450u: goto label_18f450;
        case 0x18f454u: goto label_18f454;
        case 0x18f458u: goto label_18f458;
        case 0x18f45cu: goto label_18f45c;
        case 0x18f460u: goto label_18f460;
        case 0x18f464u: goto label_18f464;
        case 0x18f468u: goto label_18f468;
        case 0x18f46cu: goto label_18f46c;
        case 0x18f470u: goto label_18f470;
        case 0x18f474u: goto label_18f474;
        case 0x18f478u: goto label_18f478;
        case 0x18f47cu: goto label_18f47c;
        case 0x18f480u: goto label_18f480;
        case 0x18f484u: goto label_18f484;
        case 0x18f488u: goto label_18f488;
        case 0x18f48cu: goto label_18f48c;
        case 0x18f490u: goto label_18f490;
        case 0x18f494u: goto label_18f494;
        case 0x18f498u: goto label_18f498;
        case 0x18f49cu: goto label_18f49c;
        default: return;
    }

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
    goto label_18f440;
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
    goto label_18f440;
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
label_18f2e0:
    // 0x18f2e0: 0xc066e6c  jal         func_19B9B0
label_18f2e4:
    if (ctx->pc == 0x18F2E4u) {
        ctx->pc = 0x18F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2E0u;
        // 0x18f2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2E8u;
        goto label_18f2e8;
    }
    ctx->pc = 0x18F2E0u;
    SET_GPR_U32(ctx, 31, 0x18F2E8u);
    ctx->pc = 0x18F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2E0u;
    // 0x18f2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x18F2E8u;
label_18f2e8:
    // 0x18f2e8: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x18f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f2ec:
    // 0x18f2ec: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18f2f0:
    // 0x18f2f0: 0xc066e96  jal         func_19BA58
label_18f2f4:
    if (ctx->pc == 0x18F2F4u) {
        ctx->pc = 0x18F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2F0u;
        // 0x18f2f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2F8u;
        goto label_18f2f8;
    }
    ctx->pc = 0x18F2F0u;
    SET_GPR_U32(ctx, 31, 0x18F2F8u);
    ctx->pc = 0x18F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2F0u;
    // 0x18f2f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x18F2F8u;
label_18f2f8:
    // 0x18f2f8: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x18f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f2fc:
    // 0x18f2fc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18f300:
    // 0x18f300: 0xc066ec0  jal         func_19BB00
label_18f304:
    if (ctx->pc == 0x18F304u) {
        ctx->pc = 0x18F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F300u;
        // 0x18f304: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F308u;
        goto label_18f308;
    }
    ctx->pc = 0x18F300u;
    SET_GPR_U32(ctx, 31, 0x18F308u);
    ctx->pc = 0x18F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F300u;
    // 0x18f304: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18F308u;
label_18f308:
    // 0x18f308: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18f30c:
    // 0x18f30c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18f310:
    // 0x18f310: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18f314:
    // 0x18f314: 0xc066d7a  jal         func_19B5E8
label_18f318:
    if (ctx->pc == 0x18F318u) {
        ctx->pc = 0x18F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F314u;
        // 0x18f318: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F31Cu;
        goto label_18f31c;
    }
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F314u;
    // 0x18f318: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18f320:
    // 0x18f320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f324:
    // 0x18f324: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18f328:
    // 0x18f328: 0xc066d7a  jal         func_19B5E8
label_18f32c:
    if (ctx->pc == 0x18F32Cu) {
        ctx->pc = 0x18F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F328u;
        // 0x18f32c: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F330u;
        goto label_18f330;
    }
    ctx->pc = 0x18F328u;
    SET_GPR_U32(ctx, 31, 0x18F330u);
    ctx->pc = 0x18F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F328u;
    // 0x18f32c: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18F330u;
label_18f330:
    // 0x18f330: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18f334:
    // 0x18f334: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_18f338:
    // 0x18f338: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_18f33c:
    // 0x18f33c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18f340:
    // 0x18f340: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18f344:
    // 0x18f344: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18f344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f348:
    // 0x18f348: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_18f34c:
    // 0x18f34c: 0xc066f08  jal         func_19BC20
label_18f350:
    if (ctx->pc == 0x18F350u) {
        ctx->pc = 0x18F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F34Cu;
        // 0x18f350: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F354u;
        goto label_18f354;
    }
    ctx->pc = 0x18F34Cu;
    SET_GPR_U32(ctx, 31, 0x18F354u);
    ctx->pc = 0x18F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F34Cu;
    // 0x18f350: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f358:
    // 0x18f358: 0xc0643e4  jal         func_190F90
label_18f35c:
    if (ctx->pc == 0x18F35Cu) {
        ctx->pc = 0x18F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F358u;
        // 0x18f35c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F360u;
        goto label_18f360;
    }
    ctx->pc = 0x18F358u;
    SET_GPR_U32(ctx, 31, 0x18F360u);
    ctx->pc = 0x18F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F358u;
    // 0x18f35c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    { ctx->pc = 0x190f90; return; }
    ctx->pc = 0x18F360u;
label_18f360:
    // 0x18f360: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18f364:
    // 0x18f364: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18f368:
    // 0x18f368: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18f368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18f36c:
    // 0x18f36c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f36cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18f370:
    // 0x18f370: 0x4a0002ff  vnop
    ctx->pc = 0x18f370u;
    // NOP operation, no action needed for VU0
label_18f374:
    // 0x18f374: 0x4a0002ff  vnop
    ctx->pc = 0x18f374u;
    // NOP operation, no action needed for VU0
label_18f378:
    // 0x18f378: 0x4a0002ff  vnop
    ctx->pc = 0x18f378u;
    // NOP operation, no action needed for VU0
label_18f37c:
    // 0x18f37c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f380:
    // 0x18f380: 0x4a0002ff  vnop
    ctx->pc = 0x18f380u;
    // NOP operation, no action needed for VU0
label_18f384:
    // 0x18f384: 0x4a0002ff  vnop
    ctx->pc = 0x18f384u;
    // NOP operation, no action needed for VU0
label_18f388:
    // 0x18f388: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f38c:
    // 0x18f38c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f38cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f390:
    // 0x18f390: 0x4a0002ff  vnop
    ctx->pc = 0x18f390u;
    // NOP operation, no action needed for VU0
label_18f394:
    // 0x18f394: 0x4a0002ff  vnop
    ctx->pc = 0x18f394u;
    // NOP operation, no action needed for VU0
label_18f398:
    // 0x18f398: 0x4a0002ff  vnop
    ctx->pc = 0x18f398u;
    // NOP operation, no action needed for VU0
label_18f39c:
    // 0x18f39c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f39cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f3a0:
    // 0x18f3a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f3a0u;
    // VWAITQ (Q already resolved in this runtime)
label_18f3a4:
    // 0x18f3a4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f3a8:
    // 0x18f3a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18f3a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f3ac:
    // 0x18f3ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_18f3b0:
    // 0x18f3b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f3b4:
    // 0x18f3b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18f3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f3b8:
    // 0x18f3b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f3bc:
    // 0x18f3bc: 0x0  nop
    ctx->pc = 0x18f3bcu;
    // NOP
label_18f3c0:
    // 0x18f3c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18f3c4:
    if (ctx->pc == 0x18F3C4u) {
        ctx->pc = 0x18F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C0u;
        // 0x18f3c4: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3C8u;
        goto label_18f3c8;
    }
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C0u;
        // 0x18f3c4: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F3E4u;
            goto label_18f3e4;
        }
    }
    ctx->pc = 0x18F3C8u;
label_18f3c8:
    // 0x18f3c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18f3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18f3cc:
    // 0x18f3cc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_18f3d0:
    // 0x18f3d0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x18f3d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_18f3d4:
    // 0x18f3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f3d8:
    // 0x18f3d8: 0x0  nop
    ctx->pc = 0x18f3d8u;
    // NOP
label_18f3dc:
    // 0x18f3dc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x18f3dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18f3e0:
    // 0x18f3e0: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
label_18f3e4:
    // 0x18f3e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f3e8:
    // 0x18f3e8: 0x344227f0  ori         $v0, $v0, 0x27F0
    ctx->pc = 0x18f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
label_18f3ec:
    // 0x18f3ec: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_18f3f0:
    // 0x18f3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f3f4:
    // 0x18f3f4: 0x0  nop
    ctx->pc = 0x18f3f4u;
    // NOP
label_18f3f8:
    // 0x18f3f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18f3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_18f3fc:
    // 0x18f3fc: 0xc066e26  jal         func_19B898
label_18f400:
    if (ctx->pc == 0x18F400u) {
        ctx->pc = 0x18F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3FCu;
        // 0x18f400: 0xe6800098  swc1        $f0, 0x98($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F404u;
        goto label_18f404;
    }
    ctx->pc = 0x18F3FCu;
    SET_GPR_U32(ctx, 31, 0x18F404u);
    ctx->pc = 0x18F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3FCu;
    // 0x18f400: 0xe6800098  swc1        $f0, 0x98($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F404u;
label_18f404:
    // 0x18f404: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18f404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18f408:
    // 0x18f408: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x18f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_18f40c:
    // 0x18f40c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18f40cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18f410:
    // 0x18f410: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18f414:
    // 0x18f414: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18f414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18f418:
    // 0x18f418: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_18f41c:
    // 0x18f41c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18f41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f420:
    // 0x18f420: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18f420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18f424:
    // 0x18f424: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f428:
    // 0x18f428: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18f42c:
    // 0x18f42c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f430:
    // 0x18f430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f434:
    // 0x18f434: 0x3e00008  jr          $ra
label_18f438:
    if (ctx->pc == 0x18F438u) {
        ctx->pc = 0x18F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F434u;
        // 0x18f438: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F43Cu;
        goto label_18f43c;
    }
    ctx->pc = 0x18F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F434u;
        // 0x18f438: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F43Cu;
label_18f43c:
    // 0x18f43c: 0x0  nop
    ctx->pc = 0x18f43cu;
    // NOP
label_18f440:
    // 0x18f440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_18f444:
    // 0x18f444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_18f448:
    // 0x18f448: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_18f44c:
    // 0x18f44c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18f450:
    // 0x18f450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f454:
    // 0x18f454: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18f458:
    // 0x18f458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18f458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f45c:
    // 0x18f45c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18f45cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18f460:
    // 0x18f460: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18f464:
    // 0x18f464: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18f464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_18f468:
    // 0x18f468: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18f468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18f46c:
    // 0x18f46c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18f46cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18f470:
    // 0x18f470: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18f470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18f474:
    // 0x18f474: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18f478:
    // 0x18f478: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x18f478u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_18f47c:
    // 0x18f47c: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
label_18f480:
    if (ctx->pc == 0x18F480u) {
        ctx->pc = 0x18F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F47Cu;
        // 0x18f480: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F484u;
        goto label_18f484;
    }
    ctx->pc = 0x18F47Cu;
    {
        const bool branch_taken_0x18f47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F47Cu;
        // 0x18f480: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f47c) {
            ctx->pc = 0x18F67Cu;
            { ctx->pc = 0x18f67c; return; }
        }
    }
    ctx->pc = 0x18F484u;
label_18f484:
    // 0x18f484: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x18f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_18f488:
    // 0x18f488: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_18f48c:
    if (ctx->pc == 0x18F48Cu) {
        ctx->pc = 0x18F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F488u;
        // 0x18f48c: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F490u;
        goto label_18f490;
    }
    ctx->pc = 0x18F488u;
    {
        const bool branch_taken_0x18f488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F488u;
        // 0x18f48c: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f488) {
            ctx->pc = 0x18F67Cu;
            { ctx->pc = 0x18f67c; return; }
        }
    }
    ctx->pc = 0x18F490u;
label_18f490:
    // 0x18f490: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x18f490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_18f494:
    // 0x18f494: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18f494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18f498:
    // 0x18f498: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18f49c:
    // 0x18f49c: 0x4a0002ff  vnop
    ctx->pc = 0x18f49cu;
    // NOP operation, no action needed for VU0
    ctx->pc = 0x18f4a0u;
    return;
}

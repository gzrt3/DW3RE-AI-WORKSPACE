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


void FUN_0014eba0_part165(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef20u: goto label_19ef20;
        case 0x19ef24u: goto label_19ef24;
        case 0x19ef28u: goto label_19ef28;
        case 0x19ef2cu: goto label_19ef2c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef34u: goto label_19ef34;
        case 0x19ef38u: goto label_19ef38;
        case 0x19ef3cu: goto label_19ef3c;
        case 0x19ef40u: goto label_19ef40;
        case 0x19ef44u: goto label_19ef44;
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef50u: goto label_19ef50;
        case 0x19ef54u: goto label_19ef54;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19ef60u: goto label_19ef60;
        case 0x19ef64u: goto label_19ef64;
        case 0x19ef68u: goto label_19ef68;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef70u: goto label_19ef70;
        case 0x19ef74u: goto label_19ef74;
        case 0x19ef78u: goto label_19ef78;
        case 0x19ef7cu: goto label_19ef7c;
        case 0x19ef80u: goto label_19ef80;
        case 0x19ef84u: goto label_19ef84;
        case 0x19ef88u: goto label_19ef88;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef90u: goto label_19ef90;
        case 0x19ef94u: goto label_19ef94;
        case 0x19ef98u: goto label_19ef98;
        case 0x19ef9cu: goto label_19ef9c;
        case 0x19efa0u: goto label_19efa0;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efa8u: goto label_19efa8;
        case 0x19efacu: goto label_19efac;
        case 0x19efb0u: goto label_19efb0;
        case 0x19efb4u: goto label_19efb4;
        case 0x19efb8u: goto label_19efb8;
        case 0x19efbcu: goto label_19efbc;
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        case 0x19f1d4u: goto label_19f1d4;
        case 0x19f1d8u: goto label_19f1d8;
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1e0u: goto label_19f1e0;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f1e8u: goto label_19f1e8;
        case 0x19f1ecu: goto label_19f1ec;
        case 0x19f1f0u: goto label_19f1f0;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f1fcu: goto label_19f1fc;
        case 0x19f200u: goto label_19f200;
        case 0x19f204u: goto label_19f204;
        case 0x19f208u: goto label_19f208;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f210u: goto label_19f210;
        case 0x19f214u: goto label_19f214;
        case 0x19f218u: goto label_19f218;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f220u: goto label_19f220;
        case 0x19f224u: goto label_19f224;
        case 0x19f228u: goto label_19f228;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f230u: goto label_19f230;
        case 0x19f234u: goto label_19f234;
        case 0x19f238u: goto label_19f238;
        case 0x19f23cu: goto label_19f23c;
        case 0x19f240u: goto label_19f240;
        case 0x19f244u: goto label_19f244;
        case 0x19f248u: goto label_19f248;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f250u: goto label_19f250;
        case 0x19f254u: goto label_19f254;
        case 0x19f258u: goto label_19f258;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f260u: goto label_19f260;
        case 0x19f264u: goto label_19f264;
        case 0x19f268u: goto label_19f268;
        case 0x19f26cu: goto label_19f26c;
        case 0x19f270u: goto label_19f270;
        case 0x19f274u: goto label_19f274;
        case 0x19f278u: goto label_19f278;
        case 0x19f27cu: goto label_19f27c;
        case 0x19f280u: goto label_19f280;
        case 0x19f284u: goto label_19f284;
        case 0x19f288u: goto label_19f288;
        case 0x19f28cu: goto label_19f28c;
        case 0x19f290u: goto label_19f290;
        case 0x19f294u: goto label_19f294;
        case 0x19f298u: goto label_19f298;
        case 0x19f29cu: goto label_19f29c;
        case 0x19f2a0u: goto label_19f2a0;
        case 0x19f2a4u: goto label_19f2a4;
        case 0x19f2a8u: goto label_19f2a8;
        case 0x19f2acu: goto label_19f2ac;
        case 0x19f2b0u: goto label_19f2b0;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2b8u: goto label_19f2b8;
        case 0x19f2bcu: goto label_19f2bc;
        case 0x19f2c0u: goto label_19f2c0;
        case 0x19f2c4u: goto label_19f2c4;
        case 0x19f2c8u: goto label_19f2c8;
        case 0x19f2ccu: goto label_19f2cc;
        case 0x19f2d0u: goto label_19f2d0;
        case 0x19f2d4u: goto label_19f2d4;
        case 0x19f2d8u: goto label_19f2d8;
        case 0x19f2dcu: goto label_19f2dc;
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f2ecu: goto label_19f2ec;
        case 0x19f2f0u: goto label_19f2f0;
        case 0x19f2f4u: goto label_19f2f4;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f2fcu: goto label_19f2fc;
        case 0x19f300u: goto label_19f300;
        case 0x19f304u: goto label_19f304;
        case 0x19f308u: goto label_19f308;
        case 0x19f30cu: goto label_19f30c;
        case 0x19f310u: goto label_19f310;
        case 0x19f314u: goto label_19f314;
        case 0x19f318u: goto label_19f318;
        case 0x19f31cu: goto label_19f31c;
        case 0x19f320u: goto label_19f320;
        case 0x19f324u: goto label_19f324;
        case 0x19f328u: goto label_19f328;
        case 0x19f32cu: goto label_19f32c;
        case 0x19f330u: goto label_19f330;
        case 0x19f334u: goto label_19f334;
        case 0x19f338u: goto label_19f338;
        case 0x19f33cu: goto label_19f33c;
        case 0x19f340u: goto label_19f340;
        case 0x19f344u: goto label_19f344;
        case 0x19f348u: goto label_19f348;
        case 0x19f34cu: goto label_19f34c;
        case 0x19f350u: goto label_19f350;
        case 0x19f354u: goto label_19f354;
        case 0x19f358u: goto label_19f358;
        case 0x19f35cu: goto label_19f35c;
        case 0x19f360u: goto label_19f360;
        case 0x19f364u: goto label_19f364;
        case 0x19f368u: goto label_19f368;
        case 0x19f36cu: goto label_19f36c;
        case 0x19f370u: goto label_19f370;
        case 0x19f374u: goto label_19f374;
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        default: return;
    }

label_19ece0:
    // 0x19ece0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ece4:
    // 0x19ece4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ece8:
    // 0x19ece8: 0xc067bd8  jal         func_19EF60
label_19ecec:
    if (ctx->pc == 0x19ECECu) {
        ctx->pc = 0x19ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECE8u;
        // 0x19ecec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF0u;
        goto label_19ecf0;
    }
    ctx->pc = 0x19ECE8u;
    SET_GPR_U32(ctx, 31, 0x19ECF0u);
    ctx->pc = 0x19ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECE8u;
    // 0x19ecec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    goto label_19ef60;
    ctx->pc = 0x19ECF0u;
label_19ecf0:
    // 0x19ecf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ecf4:
    if (ctx->pc == 0x19ECF4u) {
        ctx->pc = 0x19ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF0u;
        // 0x19ecf4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF8u;
        goto label_19ecf8;
    }
    ctx->pc = 0x19ECF0u;
    {
        const bool branch_taken_0x19ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF0u;
        // 0x19ecf4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecf0) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ECF8u;
label_19ecf8:
    // 0x19ecf8: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_19ecfc:
    // 0x19ecfc: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_19ed00:
    // 0x19ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed04:
    // 0x19ed04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19ed08:
    // 0x19ed08: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x19ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_19ed0c:
    // 0x19ed0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ed0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ed10:
    // 0x19ed10: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ed10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19ed14:
    // 0x19ed14: 0xc067c40  jal         func_19F100
label_19ed18:
    if (ctx->pc == 0x19ED18u) {
        ctx->pc = 0x19ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED14u;
        // 0x19ed18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED1Cu;
        goto label_19ed1c;
    }
    ctx->pc = 0x19ED14u;
    SET_GPR_U32(ctx, 31, 0x19ED1Cu);
    ctx->pc = 0x19ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED14u;
    // 0x19ed18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19ED1Cu;
label_19ed1c:
    // 0x19ed1c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ed20:
    // 0x19ed20: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
label_19ed24:
    if (ctx->pc == 0x19ED24u) {
        ctx->pc = 0x19ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED20u;
        // 0x19ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED28u;
        goto label_19ed28;
    }
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED20u;
        // 0x19ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19ED28u;
label_19ed28:
    // 0x19ed28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed2c:
    // 0x19ed2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19ed30:
    // 0x19ed30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19ed34:
    if (ctx->pc == 0x19ED34u) {
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED30u;
        // 0x19ed34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED38u;
        goto label_19ed38;
    }
    ctx->pc = 0x19ED30u;
    {
        const bool branch_taken_0x19ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED30u;
        // 0x19ed34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed30) {
            ctx->pc = 0x19ED54u;
            goto label_19ed54;
        }
    }
    ctx->pc = 0x19ED38u;
label_19ed38:
    // 0x19ed38: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ed3c:
    // 0x19ed3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19ed40:
    if (ctx->pc == 0x19ED40u) {
        ctx->pc = 0x19ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED3Cu;
        // 0x19ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED44u;
        goto label_19ed44;
    }
    ctx->pc = 0x19ED3Cu;
    {
        const bool branch_taken_0x19ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED3Cu;
        // 0x19ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed3c) {
            ctx->pc = 0x19ED50u;
            goto label_19ed50;
        }
    }
    ctx->pc = 0x19ED44u;
label_19ed44:
    // 0x19ed44: 0xc067d96  jal         func_19F658
label_19ed48:
    if (ctx->pc == 0x19ED48u) {
        ctx->pc = 0x19ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED44u;
        // 0x19ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED4Cu;
        goto label_19ed4c;
    }
    ctx->pc = 0x19ED44u;
    SET_GPR_U32(ctx, 31, 0x19ED4Cu);
    ctx->pc = 0x19ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED44u;
    // 0x19ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19ED4Cu;
label_19ed4c:
    // 0x19ed4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed50:
    // 0x19ed50: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x19ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_19ed54:
    // 0x19ed54: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_19ed58:
    if (ctx->pc == 0x19ED58u) {
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED5Cu;
        goto label_19ed5c;
    }
    ctx->pc = 0x19ED54u;
    {
        const bool branch_taken_0x19ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed54) {
            ctx->pc = 0x19EDC8u;
            goto label_19edc8;
        }
    }
    ctx->pc = 0x19ED5Cu;
label_19ed5c:
    // 0x19ed5c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19ed60:
    // 0x19ed60: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_19ed64:
    // 0x19ed64: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19ed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19ed68:
    // 0x19ed68: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19ed6c:
    // 0x19ed6c: 0xc0683c8  jal         func_1A0F20
label_19ed70:
    if (ctx->pc == 0x19ED70u) {
        ctx->pc = 0x19ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED6Cu;
        // 0x19ed70: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED74u;
        goto label_19ed74;
    }
    ctx->pc = 0x19ED6Cu;
    SET_GPR_U32(ctx, 31, 0x19ED74u);
    ctx->pc = 0x19ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED6Cu;
    // 0x19ed70: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0F20u;
    { ctx->pc = 0x1a0f20; return; }
    ctx->pc = 0x19ED74u;
label_19ed74:
    // 0x19ed74: 0xc067ca0  jal         func_19F280
label_19ed78:
    if (ctx->pc == 0x19ED78u) {
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED74u;
        // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED7Cu;
        goto label_19ed7c;
    }
    ctx->pc = 0x19ED74u;
    SET_GPR_U32(ctx, 31, 0x19ED7Cu);
    ctx->pc = 0x19ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED74u;
    // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    goto label_19f280;
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed80:
    // 0x19ed80: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_19ed84:
    // 0x19ed84: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_19ed88:
    // 0x19ed88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed8c:
    // 0x19ed8c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_19ed90:
    // 0x19ed90: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19ed94:
    // 0x19ed94: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ed98:
    // 0x19ed98: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x19ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
label_19ed9c:
    // 0x19ed9c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_19eda0:
    // 0x19eda0: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_19eda4:
    // 0x19eda4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19eda8:
    // 0x19eda8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x19eda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_19edac:
    // 0x19edac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x19edacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_19edb0:
    // 0x19edb0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19edb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19edb4:
    // 0x19edb4: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_19edb8:
    // 0x19edb8: 0xc067c94  jal         func_19F250
label_19edbc:
    if (ctx->pc == 0x19EDBCu) {
        ctx->pc = 0x19EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDB8u;
        // 0x19edbc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC0u;
        goto label_19edc0;
    }
    ctx->pc = 0x19EDB8u;
    SET_GPR_U32(ctx, 31, 0x19EDC0u);
    ctx->pc = 0x19EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDB8u;
    // 0x19edbc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    goto label_19f250;
    ctx->pc = 0x19EDC0u;
label_19edc0:
    // 0x19edc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_19edc4:
    if (ctx->pc == 0x19EDC4u) {
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC8u;
        goto label_19edc8;
    }
    ctx->pc = 0x19EDC0u;
    {
        const bool branch_taken_0x19edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edc0) {
            ctx->pc = 0x19EDE0u;
            goto label_19ede0;
        }
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19edcc:
    // 0x19edcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19edd0:
    // 0x19edd0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19edd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19edd4:
    // 0x19edd4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_19edd8:
    // 0x19edd8: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x19edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
label_19eddc:
    // 0x19eddc: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ede0:
    // 0x19ede0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19ede4:
    if (ctx->pc == 0x19EDE4u) {
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE0u;
        // 0x19ede4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDE8u;
        goto label_19ede8;
    }
    ctx->pc = 0x19EDE0u;
    {
        const bool branch_taken_0x19ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE0u;
        // 0x19ede4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede0) {
            ctx->pc = 0x19EDF0u;
            goto label_19edf0;
        }
    }
    ctx->pc = 0x19EDE8u;
label_19ede8:
    // 0x19ede8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_19edec:
    if (ctx->pc == 0x19EDECu) {
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDF0u;
        goto label_19edf0;
    }
    ctx->pc = 0x19EDE8u;
    {
        const bool branch_taken_0x19ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede8) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EDF0u;
label_19edf0:
    // 0x19edf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19edf4:
    // 0x19edf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19edf8:
    // 0x19edf8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_19edfc:
    if (ctx->pc == 0x19EDFCu) {
        ctx->pc = 0x19EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDF8u;
        // 0x19edfc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE00u;
        goto label_19ee00;
    }
    ctx->pc = 0x19EDF8u;
    {
        const bool branch_taken_0x19edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19edf8) {
            ctx->pc = 0x19EDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EDF8u;
            // 0x19edfc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE1Cu;
            goto label_19ee1c;
        }
    }
    ctx->pc = 0x19EE00u;
label_19ee00:
    // 0x19ee00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ee04:
    // 0x19ee04: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
label_19ee08:
    // 0x19ee08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ee0c:
    // 0x19ee0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ee10:
    // 0x19ee10: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_19ee14:
    if (ctx->pc == 0x19EE14u) {
        ctx->pc = 0x19EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE10u;
        // 0x19ee14: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE18u;
        goto label_19ee18;
    }
    ctx->pc = 0x19EE10u;
    {
        const bool branch_taken_0x19ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee10) {
            ctx->pc = 0x19EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE10u;
            // 0x19ee14: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE18u;
label_19ee18:
    // 0x19ee18: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ee1c:
    // 0x19ee1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_19ee20:
    if (ctx->pc == 0x19EE20u) {
        ctx->pc = 0x19EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE1Cu;
        // 0x19ee20: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE24u;
        goto label_19ee24;
    }
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE1Cu;
            // 0x19ee20: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE24u;
label_19ee24:
    // 0x19ee24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_19ee28:
    // 0x19ee28: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19ee2c:
    // 0x19ee2c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19ee30:
    // 0x19ee30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19ee34:
    // 0x19ee34: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_19ee38:
    // 0x19ee38: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_19ee3c:
    // 0x19ee3c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19ee40:
    // 0x19ee40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_19ee44:
    // 0x19ee44: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19ee48:
    // 0x19ee48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ee4c:
    // 0x19ee4c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
label_19ee50:
    if (ctx->pc == 0x19EE50u) {
        ctx->pc = 0x19EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE4Cu;
        // 0x19ee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE54u;
        goto label_19ee54;
    }
    ctx->pc = 0x19EE4Cu;
    {
        const bool branch_taken_0x19ee4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE4Cu;
        // 0x19ee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee4c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE54u;
label_19ee54:
    // 0x19ee54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ee58:
    // 0x19ee58: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x19ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
label_19ee5c:
    // 0x19ee5c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19ee60:
    if (ctx->pc == 0x19EE60u) {
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE5Cu;
        // 0x19ee60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE64u;
        goto label_19ee64;
    }
    ctx->pc = 0x19EE5Cu;
    {
        const bool branch_taken_0x19ee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE5Cu;
        // 0x19ee60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee5c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE64u;
label_19ee64:
    // 0x19ee64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19ee68:
    // 0x19ee68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ee6c:
    // 0x19ee6c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_19ee70:
    // 0x19ee70: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19ee74:
    // 0x19ee74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19ee78:
    // 0x19ee78: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19ee7c:
    // 0x19ee7c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_19ee80:
    if (ctx->pc == 0x19EE80u) {
        ctx->pc = 0x19EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE7Cu;
        // 0x19ee80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE84u;
        goto label_19ee84;
    }
    ctx->pc = 0x19EE7Cu;
    {
        const bool branch_taken_0x19ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE7Cu;
        // 0x19ee80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee7c) {
            ctx->pc = 0x19EE8Cu;
            goto label_19ee8c;
        }
    }
    ctx->pc = 0x19EE84u;
label_19ee84:
    // 0x19ee84: 0x10000007  b           . + 4 + (0x7 << 2)
label_19ee88:
    if (ctx->pc == 0x19EE88u) {
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE8Cu;
        goto label_19ee8c;
    }
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EEA4u;
            goto label_19eea4;
        }
    }
    ctx->pc = 0x19EE8Cu;
label_19ee8c:
    // 0x19ee8c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19ee90:
    // 0x19ee90: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19ee94:
    // 0x19ee94: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19ee98:
    // 0x19ee98: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_19ee9c:
    // 0x19ee9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19ee9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19eea0:
    // 0x19eea0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x19eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_19eea4:
    // 0x19eea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eea8:
    // 0x19eea8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19eeac:
    // 0x19eeac: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x19eeacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19eeb0:
    // 0x19eeb0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x19eeb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19eeb4:
    // 0x19eeb4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x19eeb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19eeb8:
    // 0x19eeb8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x19eeb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19eebc:
    // 0x19eebc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x19eebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19eec0:
    // 0x19eec0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19eec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19eec4:
    // 0x19eec4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19eec8:
    // 0x19eec8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19eec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19eecc:
    // 0x19eecc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19eeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19eed0:
    // 0x19eed0: 0x3e00008  jr          $ra
label_19eed4:
    if (ctx->pc == 0x19EED4u) {
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EED8u;
        goto label_19eed8;
    }
    ctx->pc = 0x19EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EED8u;
label_19eed8:
    // 0x19eed8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19eed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19eedc:
    // 0x19eedc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19eee0:
    // 0x19eee0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_19eee4:
    // 0x19eee4: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19eee8:
    // 0x19eee8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x19eee8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_19eeec:
    // 0x19eeec: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_19eef0:
    if (ctx->pc == 0x19EEF0u) {
        ctx->pc = 0x19EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEECu;
        // 0x19eef0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEF4u;
        goto label_19eef4;
    }
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEECu;
        // 0x19eef0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EEF4u;
label_19eef4:
    // 0x19eef4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_19eef8:
    // 0x19eef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19eefc:
    // 0x19eefc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19ef00:
    // 0x19ef00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19ef04:
    // 0x19ef04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ef08:
    // 0x19ef08: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x19ef08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_19ef0c:
    // 0x19ef0c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_19ef10:
    if (ctx->pc == 0x19EF10u) {
        ctx->pc = 0x19EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF0Cu;
        // 0x19ef10: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF14u;
        goto label_19ef14;
    }
    ctx->pc = 0x19EF0Cu;
    {
        const bool branch_taken_0x19ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF0Cu;
        // 0x19ef10: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef0c) {
            ctx->pc = 0x19EF54u;
            goto label_19ef54;
        }
    }
    ctx->pc = 0x19EF14u;
label_19ef14:
    // 0x19ef14: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_19ef18:
    // 0x19ef18: 0x1000000d  b           . + 4 + (0xD << 2)
label_19ef1c:
    if (ctx->pc == 0x19EF1Cu) {
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF20u;
        goto label_19ef20;
    }
    ctx->pc = 0x19EF18u;
    {
        const bool branch_taken_0x19ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef18) {
            ctx->pc = 0x19EF50u;
            goto label_19ef50;
        }
    }
    ctx->pc = 0x19EF20u;
label_19ef20:
    // 0x19ef20: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
label_19ef24:
    if (ctx->pc == 0x19EF24u) {
        ctx->pc = 0x19EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF20u;
        // 0x19ef24: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF28u;
        goto label_19ef28;
    }
    ctx->pc = 0x19EF20u;
    {
        const bool branch_taken_0x19ef20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF20u;
        // 0x19ef24: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef20) {
            ctx->pc = 0x19EF54u;
            goto label_19ef54;
        }
    }
    ctx->pc = 0x19EF28u;
label_19ef28:
    // 0x19ef28: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x19ef28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_19ef2c:
    // 0x19ef2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19ef30:
    // 0x19ef30: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19ef34:
    // 0x19ef34: 0x91823  negu        $v1, $t1
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_19ef38:
    // 0x19ef38: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19ef3c:
    // 0x19ef3c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ef40:
    // 0x19ef40: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19ef40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19ef44:
    // 0x19ef44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_19ef48:
    if (ctx->pc == 0x19EF48u) {
        ctx->pc = 0x19EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF44u;
        // 0x19ef48: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF4Cu;
        goto label_19ef4c;
    }
    ctx->pc = 0x19EF44u;
    {
        const bool branch_taken_0x19ef44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF44u;
        // 0x19ef48: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef44) {
            ctx->pc = 0x19EF50u;
            goto label_19ef50;
        }
    }
    ctx->pc = 0x19EF4Cu;
label_19ef4c:
    // 0x19ef4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ef50:
    // 0x19ef50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19ef54:
    // 0x19ef54: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x19ef54u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_19ef58:
    // 0x19ef58: 0x3e00008  jr          $ra
label_19ef5c:
    if (ctx->pc == 0x19EF5Cu) {
        ctx->pc = 0x19EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF58u;
        // 0x19ef5c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF60u;
        goto label_19ef60;
    }
    ctx->pc = 0x19EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF58u;
        // 0x19ef5c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF60u;
label_19ef60:
    // 0x19ef60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19ef64:
    // 0x19ef64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ef68:
    // 0x19ef68: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_19ef6c:
    // 0x19ef6c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_19ef70:
    // 0x19ef70: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_19ef74:
    // 0x19ef74: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ef78:
    // 0x19ef78: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_19ef7c:
    // 0x19ef7c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_19ef80:
    // 0x19ef80: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x19ef80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_19ef84:
    // 0x19ef84: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_19ef88:
    // 0x19ef88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19ef88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ef8c:
    // 0x19ef8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19ef90:
    // 0x19ef90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19ef94:
    // 0x19ef94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ef94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ef98:
    // 0x19ef98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19ef9c:
    // 0x19ef9c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19ef9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19efa0:
    // 0x19efa0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19efa4:
    // 0x19efa4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x19efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_19efa8:
    // 0x19efa8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_19efac:
    // 0x19efac: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x19efacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_19efb0:
    // 0x19efb0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
label_19efb4:
    if (ctx->pc == 0x19EFB4u) {
        ctx->pc = 0x19EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB0u;
        // 0x19efb4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFB8u;
        goto label_19efb8;
    }
    ctx->pc = 0x19EFB0u;
    {
        const bool branch_taken_0x19efb0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB0u;
        // 0x19efb4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efb0) {
            ctx->pc = 0x19EFE8u;
            goto label_19efe8;
        }
    }
    ctx->pc = 0x19EFB8u;
label_19efb8:
    // 0x19efb8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
label_19efbc:
    if (ctx->pc == 0x19EFBCu) {
        ctx->pc = 0x19EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB8u;
        // 0x19efbc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFC0u;
        goto label_19efc0;
    }
    ctx->pc = 0x19EFB8u;
    {
        const bool branch_taken_0x19efb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efb8) {
            ctx->pc = 0x19EFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFB8u;
            // 0x19efbc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F094u;
            goto label_19f094;
        }
    }
    ctx->pc = 0x19EFC0u;
label_19efc0:
    // 0x19efc0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
label_19efc4:
    if (ctx->pc == 0x19EFC4u) {
        ctx->pc = 0x19EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFC0u;
        // 0x19efc4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFC8u;
        goto label_19efc8;
    }
    ctx->pc = 0x19EFC0u;
    {
        const bool branch_taken_0x19efc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efc0) {
            ctx->pc = 0x19EFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFC0u;
            // 0x19efc4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F094u;
            goto label_19f094;
        }
    }
    ctx->pc = 0x19EFC8u;
label_19efc8:
    // 0x19efc8: 0xc067dd2  jal         func_19F748
label_19efcc:
    if (ctx->pc == 0x19EFCCu) {
        ctx->pc = 0x19EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFC8u;
        // 0x19efcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFD0u;
        goto label_19efd0;
    }
    ctx->pc = 0x19EFC8u;
    SET_GPR_U32(ctx, 31, 0x19EFD0u);
    ctx->pc = 0x19EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFC8u;
    // 0x19efcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EFD0u;
label_19efd0:
    // 0x19efd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19efd4:
    // 0x19efd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19efd8:
    // 0x19efd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19efdc:
    // 0x19efdc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x19efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_19efe0:
    // 0x19efe0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_19efe4:
    if (ctx->pc == 0x19EFE4u) {
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFE8u;
        goto label_19efe8;
    }
    ctx->pc = 0x19EFE0u;
    {
        const bool branch_taken_0x19efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efe0) {
            ctx->pc = 0x19F090u;
            goto label_19f090;
        }
    }
    ctx->pc = 0x19EFE8u;
label_19efe8:
    // 0x19efe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19efec:
    // 0x19efec: 0xc067dd2  jal         func_19F748
label_19eff0:
    if (ctx->pc == 0x19EFF0u) {
        ctx->pc = 0x19EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFECu;
        // 0x19eff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFF4u;
        goto label_19eff4;
    }
    ctx->pc = 0x19EFECu;
    SET_GPR_U32(ctx, 31, 0x19EFF4u);
    ctx->pc = 0x19EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFECu;
    // 0x19eff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EFF4u;
label_19eff4:
    // 0x19eff4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_19eff8:
    // 0x19eff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19effc:
    // 0x19effc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19f000:
    // 0x19f000: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_19f004:
    // 0x19f004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f008:
    // 0x19f008: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_19f00c:
    // 0x19f00c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f010:
    // 0x19f010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19f014:
    // 0x19f014: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f018:
    // 0x19f018: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f01c:
    // 0x19f01c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f020:
    // 0x19f020: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f024:
    // 0x19f024: 0xc067c40  jal         func_19F100
label_19f028:
    if (ctx->pc == 0x19F028u) {
        ctx->pc = 0x19F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F024u;
        // 0x19f028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F02Cu;
        goto label_19f02c;
    }
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F024u;
    // 0x19f028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f030:
    // 0x19f030: 0xc067dd2  jal         func_19F748
label_19f034:
    if (ctx->pc == 0x19F034u) {
        ctx->pc = 0x19F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F030u;
        // 0x19f034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F038u;
        goto label_19f038;
    }
    ctx->pc = 0x19F030u;
    SET_GPR_U32(ctx, 31, 0x19F038u);
    ctx->pc = 0x19F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F030u;
    // 0x19f034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F038u;
label_19f038:
    // 0x19f038: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_19f03c:
    // 0x19f03c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_19f040:
    // 0x19f040: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_19f044:
    // 0x19f044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f048:
    // 0x19f048: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f04c:
    // 0x19f04c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f050:
    // 0x19f050: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f054:
    // 0x19f054: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f058:
    // 0x19f058: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f05c:
    // 0x19f05c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19f060:
    // 0x19f060: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f060u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f064:
    // 0x19f064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19f064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f068:
    // 0x19f068: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f06c:
    // 0x19f06c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f070:
    // 0x19f070: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f074:
    // 0x19f074: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f078:
    // 0x19f078: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f07c:
    // 0x19f07c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f080:
    // 0x19f080: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f084:
    // 0x19f084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f088:
    // 0x19f088: 0x8067c40  j           func_19F100
label_19f08c:
    if (ctx->pc == 0x19F08Cu) {
        ctx->pc = 0x19F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F088u;
        // 0x19f08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F090u;
        goto label_19f090;
    }
    ctx->pc = 0x19F088u;
    ctx->pc = 0x19F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F088u;
    // 0x19f08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F090u;
label_19f090:
    // 0x19f090: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_19f094:
    // 0x19f094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f098:
    // 0x19f098: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_19f09c:
    // 0x19f09c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a0:
    // 0x19f0a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a4:
    // 0x19f0a4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f0a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a8:
    // 0x19f0a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f0ac:
    // 0x19f0ac: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b0:
    // 0x19f0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b4:
    // 0x19f0b4: 0xc067c40  jal         func_19F100
label_19f0b8:
    if (ctx->pc == 0x19F0B8u) {
        ctx->pc = 0x19F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B4u;
        // 0x19f0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0BCu;
        goto label_19f0bc;
    }
    ctx->pc = 0x19F0B4u;
    SET_GPR_U32(ctx, 31, 0x19F0BCu);
    ctx->pc = 0x19F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B4u;
    // 0x19f0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F0BCu;
label_19f0bc:
    // 0x19f0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f0c0:
    // 0x19f0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19f0c4:
    // 0x19f0c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_19f0c8:
    // 0x19f0c8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x19f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_19f0cc:
    // 0x19f0cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19f0d0:
    // 0x19f0d0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f0d4:
    // 0x19f0d4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f0d8:
    // 0x19f0d8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f0dc:
    // 0x19f0dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f0e0:
    // 0x19f0e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f0e4:
    // 0x19f0e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f0e8:
    // 0x19f0e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f0ec:
    // 0x19f0ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f0f0:
    // 0x19f0f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f0f4:
    // 0x19f0f4: 0x3e00008  jr          $ra
label_19f0f8:
    if (ctx->pc == 0x19F0F8u) {
        ctx->pc = 0x19F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F4u;
        // 0x19f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0FCu;
        goto label_19f0fc;
    }
    ctx->pc = 0x19F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F4u;
        // 0x19f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0FCu;
label_19f0fc:
    // 0x19f0fc: 0x0  nop
    ctx->pc = 0x19f0fcu;
    // NOP
label_19f100:
    // 0x19f100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19f104:
    // 0x19f104: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f108:
    // 0x19f108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f10c:
    // 0x19f10c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f110:
    // 0x19f110: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x19f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_19f114:
    // 0x19f114: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f118:
    // 0x19f118: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x19f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_19f11c:
    // 0x19f11c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19f11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f120:
    // 0x19f120: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x19f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_19f124:
    // 0x19f124: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x19f124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19f128:
    // 0x19f128: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_19f12c:
    // 0x19f12c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19f12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19f130:
    // 0x19f130: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19f134:
    // 0x19f134: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_19f138:
    // 0x19f138: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f13c:
    // 0x19f13c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19f140:
    // 0x19f140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f144:
    // 0x19f144: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f148:
    // 0x19f148: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_19f14c:
    // 0x19f14c: 0xc067cf6  jal         func_19F3D8
label_19f150:
    if (ctx->pc == 0x19F150u) {
        ctx->pc = 0x19F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F14Cu;
        // 0x19f150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F154u;
        goto label_19f154;
    }
    ctx->pc = 0x19F14Cu;
    SET_GPR_U32(ctx, 31, 0x19F154u);
    ctx->pc = 0x19F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F14Cu;
    // 0x19f150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    goto label_19f3d8;
    ctx->pc = 0x19F154u;
label_19f154:
    // 0x19f154: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_19f158:
    if (ctx->pc == 0x19F158u) {
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F15Cu;
        goto label_19f15c;
    }
    ctx->pc = 0x19F154u;
    {
        const bool branch_taken_0x19f154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f154) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F15Cu;
label_19f15c:
    // 0x19f15c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_19f160:
    if (ctx->pc == 0x19F160u) {
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F164u;
        goto label_19f164;
    }
    ctx->pc = 0x19F15Cu;
    {
        const bool branch_taken_0x19f15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f15c) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F164u;
label_19f164:
    // 0x19f164: 0xc067dd2  jal         func_19F748
label_19f168:
    if (ctx->pc == 0x19F168u) {
        ctx->pc = 0x19F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F164u;
        // 0x19f168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F16Cu;
        goto label_19f16c;
    }
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F164u;
    // 0x19f168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f170:
    if (ctx->pc == 0x19F170u) {
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F174u;
        goto label_19f174;
    }
    ctx->pc = 0x19F16Cu;
    {
        const bool branch_taken_0x19f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f16c) {
            ctx->pc = 0x19F178u;
            goto label_19f178;
        }
    }
    ctx->pc = 0x19F174u;
label_19f174:
    // 0x19f174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f178:
    // 0x19f178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f17c:
    // 0x19f17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f180:
    // 0x19f180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f184:
    // 0x19f184: 0xc067bb6  jal         func_19EED8
label_19f188:
    if (ctx->pc == 0x19F188u) {
        ctx->pc = 0x19F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F184u;
        // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F18Cu;
        goto label_19f18c;
    }
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F184u;
    // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    goto label_19eed8;
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_19f190:
    if (ctx->pc == 0x19F190u) {
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F194u;
        goto label_19f194;
    }
    ctx->pc = 0x19F18Cu;
    {
        const bool branch_taken_0x19f18c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f18c) {
            ctx->pc = 0x19F1A4u;
            goto label_19f1a4;
        }
    }
    ctx->pc = 0x19F194u;
label_19f194:
    // 0x19f194: 0xc0678a4  jal         func_19E290
label_19f198:
    if (ctx->pc == 0x19F198u) {
        ctx->pc = 0x19F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F194u;
        // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F19Cu;
        goto label_19f19c;
    }
    ctx->pc = 0x19F194u;
    SET_GPR_U32(ctx, 31, 0x19F19Cu);
    ctx->pc = 0x19F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F194u;
    // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    { ctx->pc = 0x19e290; return; }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_19f1a0:
    // 0x19f1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1a4:
    // 0x19f1a4: 0xc067cf6  jal         func_19F3D8
label_19f1a8:
    if (ctx->pc == 0x19F1A8u) {
        ctx->pc = 0x19F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A4u;
        // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1ACu;
        goto label_19f1ac;
    }
    ctx->pc = 0x19F1A4u;
    SET_GPR_U32(ctx, 31, 0x19F1ACu);
    ctx->pc = 0x19F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1A4u;
    // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    goto label_19f3d8;
    ctx->pc = 0x19F1ACu;
label_19f1ac:
    // 0x19f1ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_19f1b0:
    if (ctx->pc == 0x19F1B0u) {
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1B4u;
        goto label_19f1b4;
    }
    ctx->pc = 0x19F1ACu;
    {
        const bool branch_taken_0x19f1ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1ac) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1B4u;
label_19f1b4:
    // 0x19f1b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_19f1b8:
    if (ctx->pc == 0x19F1B8u) {
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1BCu;
        goto label_19f1bc;
    }
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1BCu;
label_19f1bc:
    // 0x19f1bc: 0xc067dd2  jal         func_19F748
label_19f1c0:
    if (ctx->pc == 0x19F1C0u) {
        ctx->pc = 0x19F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1BCu;
        // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1C4u;
        goto label_19f1c4;
    }
    ctx->pc = 0x19F1BCu;
    SET_GPR_U32(ctx, 31, 0x19F1C4u);
    ctx->pc = 0x19F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1BCu;
    // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F1C4u;
label_19f1c4:
    // 0x19f1c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f1c8:
    if (ctx->pc == 0x19F1C8u) {
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1CCu;
        goto label_19f1cc;
    }
    ctx->pc = 0x19F1C4u;
    {
        const bool branch_taken_0x19f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c4) {
            ctx->pc = 0x19F1D0u;
            goto label_19f1d0;
        }
    }
    ctx->pc = 0x19F1CCu;
label_19f1cc:
    // 0x19f1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f1d0:
    // 0x19f1d0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_19f1d4:
    if (ctx->pc == 0x19F1D4u) {
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1D8u;
        goto label_19f1d8;
    }
    ctx->pc = 0x19F1D0u;
    {
        const bool branch_taken_0x19f1d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d0) {
            ctx->pc = 0x19F1E4u;
            goto label_19f1e4;
        }
    }
    ctx->pc = 0x19F1D8u;
label_19f1d8:
    // 0x19f1d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19f1dc:
    // 0x19f1dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19f1e0:
    // 0x19f1e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f1e4:
    // 0x19f1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f1e8:
    // 0x19f1e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x19f1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f1ec:
    // 0x19f1ec: 0xc067bb6  jal         func_19EED8
label_19f1f0:
    if (ctx->pc == 0x19F1F0u) {
        ctx->pc = 0x19F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ECu;
        // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1F4u;
        goto label_19f1f4;
    }
    ctx->pc = 0x19F1ECu;
    SET_GPR_U32(ctx, 31, 0x19F1F4u);
    ctx->pc = 0x19F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ECu;
    // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    goto label_19eed8;
    ctx->pc = 0x19F1F4u;
label_19f1f4:
    // 0x19f1f4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_19f1f8:
    if (ctx->pc == 0x19F1F8u) {
        ctx->pc = 0x19F1FCu;
        goto label_19f1fc;
    }
    ctx->pc = 0x19F1F4u;
    {
        const bool branch_taken_0x19f1f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f4) {
            ctx->pc = 0x19F208u;
            goto label_19f208;
        }
    }
    ctx->pc = 0x19F1FCu;
label_19f1fc:
    // 0x19f1fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19f200:
    // 0x19f200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_19f204:
    // 0x19f204: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f208:
    // 0x19f208: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_19f20c:
    if (ctx->pc == 0x19F20Cu) {
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F210u;
        goto label_19f210;
    }
    ctx->pc = 0x19F208u;
    {
        const bool branch_taken_0x19f208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f208) {
            ctx->pc = 0x19F220u;
            goto label_19f220;
        }
    }
    ctx->pc = 0x19F210u;
label_19f210:
    // 0x19f210: 0xc0678a4  jal         func_19E290
label_19f214:
    if (ctx->pc == 0x19F214u) {
        ctx->pc = 0x19F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F210u;
        // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F218u;
        goto label_19f218;
    }
    ctx->pc = 0x19F210u;
    SET_GPR_U32(ctx, 31, 0x19F218u);
    ctx->pc = 0x19F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F210u;
    // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    { ctx->pc = 0x19e290; return; }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_19f21c:
    // 0x19f21c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f220:
    // 0x19f220: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f224:
    // 0x19f224: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x19f224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f228:
    // 0x19f228: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x19f228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f22c:
    // 0x19f22c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19f22cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f230:
    // 0x19f230: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19f230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f234:
    // 0x19f234: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f238:
    // 0x19f238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f23c:
    // 0x19f23c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f240:
    // 0x19f240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f244:
    // 0x19f244: 0x3e00008  jr          $ra
label_19f248:
    if (ctx->pc == 0x19F248u) {
        ctx->pc = 0x19F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F244u;
        // 0x19f248: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F24Cu;
        goto label_19f24c;
    }
    ctx->pc = 0x19F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F244u;
        // 0x19f248: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F24Cu;
label_19f24c:
    // 0x19f24c: 0x0  nop
    ctx->pc = 0x19f24cu;
    // NOP
label_19f250:
    // 0x19f250: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f254:
    // 0x19f254: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
label_19f258:
    // 0x19f258: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f25c:
    // 0x19f25c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19f260:
    // 0x19f260: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19f264:
    // 0x19f264: 0x24635910  addiu       $v1, $v1, 0x5910
    ctx->pc = 0x19f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22800));
label_19f268:
    // 0x19f268: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19f268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19f26c:
    // 0x19f26c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_19f270:
    // 0x19f270: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19f274:
    // 0x19f274: 0x3e00008  jr          $ra
label_19f278:
    if (ctx->pc == 0x19F278u) {
        ctx->pc = 0x19F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F274u;
        // 0x19f278: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F27Cu;
        goto label_19f27c;
    }
    ctx->pc = 0x19F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F274u;
        // 0x19f278: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F27Cu;
label_19f27c:
    // 0x19f27c: 0x0  nop
    ctx->pc = 0x19f27cu;
    // NOP
label_19f280:
    // 0x19f280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f284:
    // 0x19f284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f288:
    // 0x19f288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f28c:
    // 0x19f28c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f290:
    // 0x19f290: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f294:
    // 0x19f294: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f298:
    // 0x19f298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f29c:
    // 0x19f29c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x19f29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_19f2a0:
    // 0x19f2a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f2a4:
    // 0x19f2a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f2a8:
    // 0x19f2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f2ac:
    // 0x19f2ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2b0:
    // 0x19f2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f2b4:
    // 0x19f2b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f2b8:
    // 0x19f2b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_19f2bc:
    // 0x19f2bc: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_19f2c0:
    if (ctx->pc == 0x19F2C0u) {
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2C4u;
        goto label_19f2c4;
    }
    ctx->pc = 0x19F2BCu;
    {
        const bool branch_taken_0x19f2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2bc) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2C4u;
label_19f2c4:
    // 0x19f2c4: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_19f2c8:
    // 0x19f2c8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
label_19f2cc:
    // 0x19f2cc: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x19f2ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
label_19f2d0:
    // 0x19f2d0: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x19f2d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_19f2d4:
    // 0x19f2d4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_19f2d8:
    // 0x19f2d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f2dc:
    // 0x19f2dc: 0x0  nop
    ctx->pc = 0x19f2dcu;
    // NOP
label_19f2e0:
    // 0x19f2e0: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f2e4:
    // 0x19f2e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f2e8:
    if (ctx->pc == 0x19F2E8u) {
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2ECu;
        goto label_19f2ec;
    }
    ctx->pc = 0x19F2E4u;
    {
        const bool branch_taken_0x19f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e4) {
            ctx->pc = 0x19F2F8u;
            goto label_19f2f8;
        }
    }
    ctx->pc = 0x19F2ECu;
label_19f2ec:
    // 0x19f2ec: 0xc068b26  jal         func_1A2C98
label_19f2f0:
    if (ctx->pc == 0x19F2F0u) {
        ctx->pc = 0x19F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ECu;
        // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2F4u;
        goto label_19f2f4;
    }
    ctx->pc = 0x19F2ECu;
    SET_GPR_U32(ctx, 31, 0x19F2F4u);
    ctx->pc = 0x19F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2ECu;
    // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F2F4u;
label_19f2f4:
    // 0x19f2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f8:
    // 0x19f2f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19f2fc:
    // 0x19f2fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_19f300:
    // 0x19f300: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
label_19f304:
    if (ctx->pc == 0x19F304u) {
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F308u;
        goto label_19f308;
    }
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f2e0;
        }
    }
    ctx->pc = 0x19F308u;
label_19f308:
    // 0x19f308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f30c:
    // 0x19f30c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f310:
    // 0x19f310: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f314:
    // 0x19f314: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f318:
    // 0x19f318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f31c:
    // 0x19f31c: 0x3e00008  jr          $ra
label_19f320:
    if (ctx->pc == 0x19F320u) {
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F324u;
        goto label_19f324;
    }
    ctx->pc = 0x19F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F324u;
label_19f324:
    // 0x19f324: 0x0  nop
    ctx->pc = 0x19f324u;
    // NOP
label_19f328:
    // 0x19f328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f32c:
    // 0x19f32c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f330:
    // 0x19f330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f334:
    // 0x19f334: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f338:
    // 0x19f338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19f33c:
    // 0x19f33c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f340:
    // 0x19f340: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f344:
    // 0x19f344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f348:
    // 0x19f348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f34c:
    // 0x19f34c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x19f34cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_19f350:
    // 0x19f350: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
label_19f354:
    if (ctx->pc == 0x19F354u) {
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F358u;
        goto label_19f358;
    }
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f35c:
    // 0x19f35c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f360:
    // 0x19f360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f364:
    // 0x19f364: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_19f368:
    // 0x19f368: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_19f36c:
    if (ctx->pc == 0x19F36Cu) {
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F370u;
        goto label_19f370;
    }
    ctx->pc = 0x19F368u;
    {
        const bool branch_taken_0x19f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f368) {
            ctx->pc = 0x19F3C4u;
            goto label_19f3c4;
        }
    }
    ctx->pc = 0x19F370u;
label_19f370:
    // 0x19f370: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_19f374:
    // 0x19f374: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_19f378:
    // 0x19f378: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x19f378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
label_19f37c:
    // 0x19f37c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_19f380:
    // 0x19f380: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f384:
    // 0x19f384: 0x0  nop
    ctx->pc = 0x19f384u;
    // NOP
label_19f388:
    // 0x19f388: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f38c:
    // 0x19f38c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f390:
    if (ctx->pc == 0x19F390u) {
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F394u;
        goto label_19f394;
    }
    ctx->pc = 0x19F38Cu;
    {
        const bool branch_taken_0x19f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f38c) {
            ctx->pc = 0x19F3A0u;
            goto label_19f3a0;
        }
    }
    ctx->pc = 0x19F394u;
label_19f394:
    // 0x19f394: 0xc068b26  jal         func_1A2C98
label_19f398:
    if (ctx->pc == 0x19F398u) {
        ctx->pc = 0x19F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F394u;
        // 0x19f398: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F39Cu;
        goto label_19f39c;
    }
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x19F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F394u;
    // 0x19f398: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F39Cu;
label_19f39c:
    // 0x19f39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f3a0:
    // 0x19f3a0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_19f3a4:
    // 0x19f3a4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
label_19f3a8:
    if (ctx->pc == 0x19F3A8u) {
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3ACu;
        goto label_19f3ac;
    }
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F3ACu;
label_19f3ac:
    // 0x19f3ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f3b0:
    // 0x19f3b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_19f3b4:
    // 0x19f3b4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_19f3b8:
    if (ctx->pc == 0x19F3B8u) {
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3BCu;
        goto label_19f3bc;
    }
    ctx->pc = 0x19F3B4u;
    {
        const bool branch_taken_0x19f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b4) {
            ctx->pc = 0x19F388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f388;
        }
    }
    ctx->pc = 0x19F3BCu;
label_19f3bc:
    // 0x19f3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f3c0:
    // 0x19f3c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f3c4:
    // 0x19f3c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f3c8:
    // 0x19f3c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f3cc:
    // 0x19f3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f3d0:
    // 0x19f3d0: 0x3e00008  jr          $ra
label_19f3d4:
    if (ctx->pc == 0x19F3D4u) {
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D0u;
        // 0x19f3d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3D8u;
        goto label_19f3d8;
    }
    ctx->pc = 0x19F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D0u;
        // 0x19f3d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3D8u;
label_19f3d8:
    // 0x19f3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f3dc:
    // 0x19f3dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f3e0:
    // 0x19f3e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f3e4:
    // 0x19f3e4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f3e8:
    // 0x19f3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f3ec:
    // 0x19f3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19f3f0:
    // 0x19f3f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f3f4:
    // 0x19f3f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x19f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_19f3f8:
    // 0x19f3f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f3fc:
    // 0x19f3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f400:
    // 0x19f400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f404:
    // 0x19f404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f408:
    // 0x19f408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f40c:
    // 0x19f40c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f410:
    // 0x19f410: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f414:
    // 0x19f414: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19f414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19f418:
    // 0x19f418: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
label_19f41c:
    if (ctx->pc == 0x19F41Cu) {
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F420u;
        goto label_19f420;
    }
    ctx->pc = 0x19F418u;
    {
        const bool branch_taken_0x19f418 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f418) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F420u;
label_19f420:
    // 0x19f420: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_19f424:
    // 0x19f424: 0x0  nop
    ctx->pc = 0x19f424u;
    // NOP
label_19f428:
    // 0x19f428: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f42c:
    // 0x19f42c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f430:
    // 0x19f430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f434:
    if (ctx->pc == 0x19F434u) {
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F438u;
        goto label_19f438;
    }
    ctx->pc = 0x19F430u;
    {
        const bool branch_taken_0x19f430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f430) {
            ctx->pc = 0x19F444u;
            goto label_19f444;
        }
    }
    ctx->pc = 0x19F438u;
label_19f438:
    // 0x19f438: 0xc068b26  jal         func_1A2C98
label_19f43c:
    if (ctx->pc == 0x19F43Cu) {
        ctx->pc = 0x19F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F438u;
        // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F440u;
        goto label_19f440;
    }
    ctx->pc = 0x19F438u;
    SET_GPR_U32(ctx, 31, 0x19F440u);
    ctx->pc = 0x19F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F438u;
    // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f444:
    // 0x19f444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f448:
    // 0x19f448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f44c:
    // 0x19f44c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_19f450:
    // 0x19f450: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f454:
    // 0x19f454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f458:
    // 0x19f458: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f45c:
    // 0x19f45c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19f460:
    // 0x19f460: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
label_19f464:
    if (ctx->pc == 0x19F464u) {
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F468u;
        goto label_19f468;
    }
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f428;
        }
    }
    ctx->pc = 0x19F468u;
label_19f468:
    // 0x19f468: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f46c:
    if (ctx->pc == 0x19F46Cu) {
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F470u;
        goto label_19f470;
    }
    ctx->pc = 0x19F468u;
    {
        const bool branch_taken_0x19f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f468) {
            ctx->pc = 0x19F47Cu;
            goto label_19f47c;
        }
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_19f474:
    // 0x19f474: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_19f478:
    // 0x19f478: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19f47c:
    // 0x19f47c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_19f480:
    // 0x19f480: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x19f480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_19f484:
    // 0x19f484: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
label_19f488:
    // 0x19f488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19f48c:
    // 0x19f48c: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
label_19f490:
    // 0x19f490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19f494:
    // 0x19f494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19f498:
    // 0x19f498: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_19f49c:
    // 0x19f49c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f4a0:
    // 0x19f4a0: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
label_19f4a4:
    if (ctx->pc == 0x19F4A4u) {
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4A8u;
        goto label_19f4a8;
    }
    ctx->pc = 0x19F4A0u;
    {
        const bool branch_taken_0x19f4a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4a0) {
            ctx->pc = 0x19F4DCu;
            { ctx->pc = 0x19f4dc; return; }
        }
    }
    ctx->pc = 0x19F4A8u;
label_19f4a8:
    // 0x19f4a8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_19f4ac:
    // 0x19f4ac: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    ctx->pc = 0x19f4b0u;
    return;
}

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


void FUN_0014eba0_part34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed74u: goto label_15ed74;
        case 0x15ed78u: goto label_15ed78;
        case 0x15ed7cu: goto label_15ed7c;
        case 0x15ed80u: goto label_15ed80;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed88u: goto label_15ed88;
        case 0x15ed8cu: goto label_15ed8c;
        case 0x15ed90u: goto label_15ed90;
        case 0x15ed94u: goto label_15ed94;
        case 0x15ed98u: goto label_15ed98;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15eda0u: goto label_15eda0;
        case 0x15eda4u: goto label_15eda4;
        case 0x15eda8u: goto label_15eda8;
        case 0x15edacu: goto label_15edac;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edb4u: goto label_15edb4;
        case 0x15edb8u: goto label_15edb8;
        case 0x15edbcu: goto label_15edbc;
        case 0x15edc0u: goto label_15edc0;
        case 0x15edc4u: goto label_15edc4;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edccu: goto label_15edcc;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd4u: goto label_15edd4;
        case 0x15edd8u: goto label_15edd8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15ede0u: goto label_15ede0;
        case 0x15ede4u: goto label_15ede4;
        case 0x15ede8u: goto label_15ede8;
        case 0x15edecu: goto label_15edec;
        case 0x15edf0u: goto label_15edf0;
        case 0x15edf4u: goto label_15edf4;
        case 0x15edf8u: goto label_15edf8;
        case 0x15edfcu: goto label_15edfc;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee04u: goto label_15ee04;
        case 0x15ee08u: goto label_15ee08;
        case 0x15ee0cu: goto label_15ee0c;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee14u: goto label_15ee14;
        case 0x15ee18u: goto label_15ee18;
        case 0x15ee1cu: goto label_15ee1c;
        case 0x15ee20u: goto label_15ee20;
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee2cu: goto label_15ee2c;
        case 0x15ee30u: goto label_15ee30;
        case 0x15ee34u: goto label_15ee34;
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee40u: goto label_15ee40;
        case 0x15ee44u: goto label_15ee44;
        case 0x15ee48u: goto label_15ee48;
        case 0x15ee4cu: goto label_15ee4c;
        case 0x15ee50u: goto label_15ee50;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee58u: goto label_15ee58;
        case 0x15ee5cu: goto label_15ee5c;
        case 0x15ee60u: goto label_15ee60;
        case 0x15ee64u: goto label_15ee64;
        case 0x15ee68u: goto label_15ee68;
        case 0x15ee6cu: goto label_15ee6c;
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee74u: goto label_15ee74;
        case 0x15ee78u: goto label_15ee78;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee80u: goto label_15ee80;
        case 0x15ee84u: goto label_15ee84;
        case 0x15ee88u: goto label_15ee88;
        case 0x15ee8cu: goto label_15ee8c;
        case 0x15ee90u: goto label_15ee90;
        case 0x15ee94u: goto label_15ee94;
        case 0x15ee98u: goto label_15ee98;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea0u: goto label_15eea0;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eea8u: goto label_15eea8;
        case 0x15eeacu: goto label_15eeac;
        case 0x15eeb0u: goto label_15eeb0;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eebcu: goto label_15eebc;
        case 0x15eec0u: goto label_15eec0;
        case 0x15eec4u: goto label_15eec4;
        case 0x15eec8u: goto label_15eec8;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed0u: goto label_15eed0;
        case 0x15eed4u: goto label_15eed4;
        case 0x15eed8u: goto label_15eed8;
        case 0x15eedcu: goto label_15eedc;
        case 0x15eee0u: goto label_15eee0;
        case 0x15eee4u: goto label_15eee4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15eeecu: goto label_15eeec;
        case 0x15eef0u: goto label_15eef0;
        case 0x15eef4u: goto label_15eef4;
        case 0x15eef8u: goto label_15eef8;
        case 0x15eefcu: goto label_15eefc;
        case 0x15ef00u: goto label_15ef00;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef08u: goto label_15ef08;
        case 0x15ef0cu: goto label_15ef0c;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef14u: goto label_15ef14;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef1cu: goto label_15ef1c;
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef28u: goto label_15ef28;
        case 0x15ef2cu: goto label_15ef2c;
        case 0x15ef30u: goto label_15ef30;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef38u: goto label_15ef38;
        case 0x15ef3cu: goto label_15ef3c;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef48u: goto label_15ef48;
        case 0x15ef4cu: goto label_15ef4c;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef58u: goto label_15ef58;
        case 0x15ef5cu: goto label_15ef5c;
        case 0x15ef60u: goto label_15ef60;
        case 0x15ef64u: goto label_15ef64;
        case 0x15ef68u: goto label_15ef68;
        case 0x15ef6cu: goto label_15ef6c;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef74u: goto label_15ef74;
        case 0x15ef78u: goto label_15ef78;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef80u: goto label_15ef80;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef88u: goto label_15ef88;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef98u: goto label_15ef98;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa0u: goto label_15efa0;
        case 0x15efa4u: goto label_15efa4;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efacu: goto label_15efac;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efc4u: goto label_15efc4;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd4u: goto label_15efd4;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efdcu: goto label_15efdc;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efe4u: goto label_15efe4;
        case 0x15efe8u: goto label_15efe8;
        case 0x15efecu: goto label_15efec;
        case 0x15eff0u: goto label_15eff0;
        case 0x15eff4u: goto label_15eff4;
        case 0x15eff8u: goto label_15eff8;
        case 0x15effcu: goto label_15effc;
        case 0x15f000u: goto label_15f000;
        case 0x15f004u: goto label_15f004;
        case 0x15f008u: goto label_15f008;
        case 0x15f00cu: goto label_15f00c;
        case 0x15f010u: goto label_15f010;
        case 0x15f014u: goto label_15f014;
        case 0x15f018u: goto label_15f018;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f020u: goto label_15f020;
        case 0x15f024u: goto label_15f024;
        case 0x15f028u: goto label_15f028;
        case 0x15f02cu: goto label_15f02c;
        case 0x15f030u: goto label_15f030;
        case 0x15f034u: goto label_15f034;
        case 0x15f038u: goto label_15f038;
        case 0x15f03cu: goto label_15f03c;
        case 0x15f040u: goto label_15f040;
        case 0x15f044u: goto label_15f044;
        case 0x15f048u: goto label_15f048;
        case 0x15f04cu: goto label_15f04c;
        case 0x15f050u: goto label_15f050;
        case 0x15f054u: goto label_15f054;
        case 0x15f058u: goto label_15f058;
        case 0x15f05cu: goto label_15f05c;
        case 0x15f060u: goto label_15f060;
        case 0x15f064u: goto label_15f064;
        case 0x15f068u: goto label_15f068;
        case 0x15f06cu: goto label_15f06c;
        case 0x15f070u: goto label_15f070;
        case 0x15f074u: goto label_15f074;
        case 0x15f078u: goto label_15f078;
        case 0x15f07cu: goto label_15f07c;
        case 0x15f080u: goto label_15f080;
        case 0x15f084u: goto label_15f084;
        case 0x15f088u: goto label_15f088;
        case 0x15f08cu: goto label_15f08c;
        case 0x15f090u: goto label_15f090;
        case 0x15f094u: goto label_15f094;
        case 0x15f098u: goto label_15f098;
        case 0x15f09cu: goto label_15f09c;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0acu: goto label_15f0ac;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0b8u: goto label_15f0b8;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c0u: goto label_15f0c0;
        case 0x15f0c4u: goto label_15f0c4;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0ccu: goto label_15f0cc;
        case 0x15f0d0u: goto label_15f0d0;
        case 0x15f0d4u: goto label_15f0d4;
        case 0x15f0d8u: goto label_15f0d8;
        case 0x15f0dcu: goto label_15f0dc;
        case 0x15f0e0u: goto label_15f0e0;
        case 0x15f0e4u: goto label_15f0e4;
        case 0x15f0e8u: goto label_15f0e8;
        case 0x15f0ecu: goto label_15f0ec;
        case 0x15f0f0u: goto label_15f0f0;
        case 0x15f0f4u: goto label_15f0f4;
        case 0x15f0f8u: goto label_15f0f8;
        case 0x15f0fcu: goto label_15f0fc;
        case 0x15f100u: goto label_15f100;
        case 0x15f104u: goto label_15f104;
        case 0x15f108u: goto label_15f108;
        case 0x15f10cu: goto label_15f10c;
        case 0x15f110u: goto label_15f110;
        case 0x15f114u: goto label_15f114;
        case 0x15f118u: goto label_15f118;
        case 0x15f11cu: goto label_15f11c;
        case 0x15f120u: goto label_15f120;
        case 0x15f124u: goto label_15f124;
        case 0x15f128u: goto label_15f128;
        case 0x15f12cu: goto label_15f12c;
        case 0x15f130u: goto label_15f130;
        case 0x15f134u: goto label_15f134;
        case 0x15f138u: goto label_15f138;
        case 0x15f13cu: goto label_15f13c;
        case 0x15f140u: goto label_15f140;
        case 0x15f144u: goto label_15f144;
        case 0x15f148u: goto label_15f148;
        case 0x15f14cu: goto label_15f14c;
        case 0x15f150u: goto label_15f150;
        case 0x15f154u: goto label_15f154;
        case 0x15f158u: goto label_15f158;
        case 0x15f15cu: goto label_15f15c;
        case 0x15f160u: goto label_15f160;
        case 0x15f164u: goto label_15f164;
        case 0x15f168u: goto label_15f168;
        case 0x15f16cu: goto label_15f16c;
        case 0x15f170u: goto label_15f170;
        case 0x15f174u: goto label_15f174;
        case 0x15f178u: goto label_15f178;
        case 0x15f17cu: goto label_15f17c;
        case 0x15f180u: goto label_15f180;
        case 0x15f184u: goto label_15f184;
        case 0x15f188u: goto label_15f188;
        case 0x15f18cu: goto label_15f18c;
        case 0x15f190u: goto label_15f190;
        case 0x15f194u: goto label_15f194;
        case 0x15f198u: goto label_15f198;
        case 0x15f19cu: goto label_15f19c;
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1a8u: goto label_15f1a8;
        case 0x15f1acu: goto label_15f1ac;
        case 0x15f1b0u: goto label_15f1b0;
        case 0x15f1b4u: goto label_15f1b4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1c0u: goto label_15f1c0;
        case 0x15f1c4u: goto label_15f1c4;
        case 0x15f1c8u: goto label_15f1c8;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1d0u: goto label_15f1d0;
        case 0x15f1d4u: goto label_15f1d4;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1dcu: goto label_15f1dc;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f1e4u: goto label_15f1e4;
        case 0x15f1e8u: goto label_15f1e8;
        case 0x15f1ecu: goto label_15f1ec;
        case 0x15f1f0u: goto label_15f1f0;
        case 0x15f1f4u: goto label_15f1f4;
        case 0x15f1f8u: goto label_15f1f8;
        case 0x15f1fcu: goto label_15f1fc;
        case 0x15f200u: goto label_15f200;
        case 0x15f204u: goto label_15f204;
        case 0x15f208u: goto label_15f208;
        case 0x15f20cu: goto label_15f20c;
        case 0x15f210u: goto label_15f210;
        case 0x15f214u: goto label_15f214;
        case 0x15f218u: goto label_15f218;
        case 0x15f21cu: goto label_15f21c;
        case 0x15f220u: goto label_15f220;
        case 0x15f224u: goto label_15f224;
        case 0x15f228u: goto label_15f228;
        case 0x15f22cu: goto label_15f22c;
        case 0x15f230u: goto label_15f230;
        case 0x15f234u: goto label_15f234;
        case 0x15f238u: goto label_15f238;
        case 0x15f23cu: goto label_15f23c;
        case 0x15f240u: goto label_15f240;
        case 0x15f244u: goto label_15f244;
        case 0x15f248u: goto label_15f248;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f250u: goto label_15f250;
        case 0x15f254u: goto label_15f254;
        case 0x15f258u: goto label_15f258;
        case 0x15f25cu: goto label_15f25c;
        case 0x15f260u: goto label_15f260;
        case 0x15f264u: goto label_15f264;
        case 0x15f268u: goto label_15f268;
        case 0x15f26cu: goto label_15f26c;
        case 0x15f270u: goto label_15f270;
        case 0x15f274u: goto label_15f274;
        case 0x15f278u: goto label_15f278;
        case 0x15f27cu: goto label_15f27c;
        case 0x15f280u: goto label_15f280;
        case 0x15f284u: goto label_15f284;
        case 0x15f288u: goto label_15f288;
        case 0x15f28cu: goto label_15f28c;
        case 0x15f290u: goto label_15f290;
        case 0x15f294u: goto label_15f294;
        case 0x15f298u: goto label_15f298;
        case 0x15f29cu: goto label_15f29c;
        case 0x15f2a0u: goto label_15f2a0;
        case 0x15f2a4u: goto label_15f2a4;
        case 0x15f2a8u: goto label_15f2a8;
        case 0x15f2acu: goto label_15f2ac;
        case 0x15f2b0u: goto label_15f2b0;
        case 0x15f2b4u: goto label_15f2b4;
        case 0x15f2b8u: goto label_15f2b8;
        case 0x15f2bcu: goto label_15f2bc;
        case 0x15f2c0u: goto label_15f2c0;
        case 0x15f2c4u: goto label_15f2c4;
        case 0x15f2c8u: goto label_15f2c8;
        case 0x15f2ccu: goto label_15f2cc;
        case 0x15f2d0u: goto label_15f2d0;
        case 0x15f2d4u: goto label_15f2d4;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f2e0u: goto label_15f2e0;
        case 0x15f2e4u: goto label_15f2e4;
        case 0x15f2e8u: goto label_15f2e8;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f2f0u: goto label_15f2f0;
        case 0x15f2f4u: goto label_15f2f4;
        case 0x15f2f8u: goto label_15f2f8;
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f300u: goto label_15f300;
        case 0x15f304u: goto label_15f304;
        case 0x15f308u: goto label_15f308;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f310u: goto label_15f310;
        case 0x15f314u: goto label_15f314;
        case 0x15f318u: goto label_15f318;
        case 0x15f31cu: goto label_15f31c;
        case 0x15f320u: goto label_15f320;
        case 0x15f324u: goto label_15f324;
        case 0x15f328u: goto label_15f328;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f330u: goto label_15f330;
        case 0x15f334u: goto label_15f334;
        case 0x15f338u: goto label_15f338;
        case 0x15f33cu: goto label_15f33c;
        case 0x15f340u: goto label_15f340;
        case 0x15f344u: goto label_15f344;
        case 0x15f348u: goto label_15f348;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f350u: goto label_15f350;
        case 0x15f354u: goto label_15f354;
        case 0x15f358u: goto label_15f358;
        case 0x15f35cu: goto label_15f35c;
        case 0x15f360u: goto label_15f360;
        case 0x15f364u: goto label_15f364;
        case 0x15f368u: goto label_15f368;
        case 0x15f36cu: goto label_15f36c;
        case 0x15f370u: goto label_15f370;
        case 0x15f374u: goto label_15f374;
        case 0x15f378u: goto label_15f378;
        case 0x15f37cu: goto label_15f37c;
        case 0x15f380u: goto label_15f380;
        case 0x15f384u: goto label_15f384;
        case 0x15f388u: goto label_15f388;
        case 0x15f38cu: goto label_15f38c;
        case 0x15f390u: goto label_15f390;
        case 0x15f394u: goto label_15f394;
        case 0x15f398u: goto label_15f398;
        case 0x15f39cu: goto label_15f39c;
        case 0x15f3a0u: goto label_15f3a0;
        case 0x15f3a4u: goto label_15f3a4;
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f3acu: goto label_15f3ac;
        case 0x15f3b0u: goto label_15f3b0;
        case 0x15f3b4u: goto label_15f3b4;
        case 0x15f3b8u: goto label_15f3b8;
        case 0x15f3bcu: goto label_15f3bc;
        case 0x15f3c0u: goto label_15f3c0;
        case 0x15f3c4u: goto label_15f3c4;
        case 0x15f3c8u: goto label_15f3c8;
        case 0x15f3ccu: goto label_15f3cc;
        case 0x15f3d0u: goto label_15f3d0;
        case 0x15f3d4u: goto label_15f3d4;
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f3dcu: goto label_15f3dc;
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3e4u: goto label_15f3e4;
        case 0x15f3e8u: goto label_15f3e8;
        case 0x15f3ecu: goto label_15f3ec;
        case 0x15f3f0u: goto label_15f3f0;
        case 0x15f3f4u: goto label_15f3f4;
        case 0x15f3f8u: goto label_15f3f8;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f400u: goto label_15f400;
        case 0x15f404u: goto label_15f404;
        case 0x15f408u: goto label_15f408;
        case 0x15f40cu: goto label_15f40c;
        case 0x15f410u: goto label_15f410;
        case 0x15f414u: goto label_15f414;
        case 0x15f418u: goto label_15f418;
        case 0x15f41cu: goto label_15f41c;
        case 0x15f420u: goto label_15f420;
        case 0x15f424u: goto label_15f424;
        case 0x15f428u: goto label_15f428;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f430u: goto label_15f430;
        case 0x15f434u: goto label_15f434;
        case 0x15f438u: goto label_15f438;
        case 0x15f43cu: goto label_15f43c;
        case 0x15f440u: goto label_15f440;
        case 0x15f444u: goto label_15f444;
        case 0x15f448u: goto label_15f448;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f450u: goto label_15f450;
        case 0x15f454u: goto label_15f454;
        case 0x15f458u: goto label_15f458;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f460u: goto label_15f460;
        case 0x15f464u: goto label_15f464;
        case 0x15f468u: goto label_15f468;
        case 0x15f46cu: goto label_15f46c;
        case 0x15f470u: goto label_15f470;
        case 0x15f474u: goto label_15f474;
        case 0x15f478u: goto label_15f478;
        case 0x15f47cu: goto label_15f47c;
        case 0x15f480u: goto label_15f480;
        case 0x15f484u: goto label_15f484;
        case 0x15f488u: goto label_15f488;
        case 0x15f48cu: goto label_15f48c;
        case 0x15f490u: goto label_15f490;
        case 0x15f494u: goto label_15f494;
        case 0x15f498u: goto label_15f498;
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4a0u: goto label_15f4a0;
        case 0x15f4a4u: goto label_15f4a4;
        case 0x15f4a8u: goto label_15f4a8;
        case 0x15f4acu: goto label_15f4ac;
        case 0x15f4b0u: goto label_15f4b0;
        case 0x15f4b4u: goto label_15f4b4;
        case 0x15f4b8u: goto label_15f4b8;
        case 0x15f4bcu: goto label_15f4bc;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f4c4u: goto label_15f4c4;
        case 0x15f4c8u: goto label_15f4c8;
        case 0x15f4ccu: goto label_15f4cc;
        case 0x15f4d0u: goto label_15f4d0;
        case 0x15f4d4u: goto label_15f4d4;
        case 0x15f4d8u: goto label_15f4d8;
        case 0x15f4dcu: goto label_15f4dc;
        case 0x15f4e0u: goto label_15f4e0;
        case 0x15f4e4u: goto label_15f4e4;
        case 0x15f4e8u: goto label_15f4e8;
        case 0x15f4ecu: goto label_15f4ec;
        case 0x15f4f0u: goto label_15f4f0;
        case 0x15f4f4u: goto label_15f4f4;
        case 0x15f4f8u: goto label_15f4f8;
        case 0x15f4fcu: goto label_15f4fc;
        case 0x15f500u: goto label_15f500;
        case 0x15f504u: goto label_15f504;
        case 0x15f508u: goto label_15f508;
        case 0x15f50cu: goto label_15f50c;
        case 0x15f510u: goto label_15f510;
        case 0x15f514u: goto label_15f514;
        case 0x15f518u: goto label_15f518;
        case 0x15f51cu: goto label_15f51c;
        case 0x15f520u: goto label_15f520;
        case 0x15f524u: goto label_15f524;
        case 0x15f528u: goto label_15f528;
        case 0x15f52cu: goto label_15f52c;
        case 0x15f530u: goto label_15f530;
        case 0x15f534u: goto label_15f534;
        case 0x15f538u: goto label_15f538;
        case 0x15f53cu: goto label_15f53c;
        default: return;
    }

label_15ed70:
    if (ctx->pc == 0x15ED70u) {
        ctx->pc = 0x15ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED6Cu;
        // 0x15ed70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED74u;
        goto label_15ed74;
    }
    ctx->pc = 0x15ED6Cu;
    SET_GPR_U32(ctx, 31, 0x15ED74u);
    ctx->pc = 0x15ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED6Cu;
    // 0x15ed70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615A0u;
    { ctx->pc = 0x1615a0; return; }
    ctx->pc = 0x15ED74u;
label_15ed74:
    // 0x15ed74: 0xc057f28  jal         func_15FCA0
label_15ed78:
    if (ctx->pc == 0x15ED78u) {
        ctx->pc = 0x15ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED74u;
        // 0x15ed78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED7Cu;
        goto label_15ed7c;
    }
    ctx->pc = 0x15ED74u;
    SET_GPR_U32(ctx, 31, 0x15ED7Cu);
    ctx->pc = 0x15ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED74u;
    // 0x15ed78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCA0u;
    { ctx->pc = 0x15fca0; return; }
    ctx->pc = 0x15ED7Cu;
label_15ed7c:
    // 0x15ed7c: 0xc058748  jal         func_161D20
label_15ed80:
    if (ctx->pc == 0x15ED80u) {
        ctx->pc = 0x15ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED7Cu;
        // 0x15ed80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED84u;
        goto label_15ed84;
    }
    ctx->pc = 0x15ED7Cu;
    SET_GPR_U32(ctx, 31, 0x15ED84u);
    ctx->pc = 0x15ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED7Cu;
    // 0x15ed80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161D20u;
    { ctx->pc = 0x161d20; return; }
    ctx->pc = 0x15ED84u;
label_15ed84:
    // 0x15ed84: 0x1000001b  b           . + 4 + (0x1B << 2)
label_15ed88:
    if (ctx->pc == 0x15ED88u) {
        ctx->pc = 0x15ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED84u;
        // 0x15ed88: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED8Cu;
        goto label_15ed8c;
    }
    ctx->pc = 0x15ED84u;
    {
        const bool branch_taken_0x15ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED84u;
        // 0x15ed88: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed84) {
            ctx->pc = 0x15EDF4u;
            goto label_15edf4;
        }
    }
    ctx->pc = 0x15ED8Cu;
label_15ed8c:
    // 0x15ed8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ed90:
    // 0x15ed90: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15ed94:
    // 0x15ed94: 0x9024761f  lbu         $a0, 0x761F($at)
    ctx->pc = 0x15ed94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30239)));
label_15ed98:
    // 0x15ed98: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x15ed98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_15ed9c:
    // 0x15ed9c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15eda0:
    if (ctx->pc == 0x15EDA0u) {
        ctx->pc = 0x15EDA4u;
        goto label_15eda4;
    }
    ctx->pc = 0x15ED9Cu;
    {
        const bool branch_taken_0x15ed9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ed9c) {
            ctx->pc = 0x15EDB4u;
            goto label_15edb4;
        }
    }
    ctx->pc = 0x15EDA4u;
label_15eda4:
    // 0x15eda4: 0xc0645f4  jal         func_1917D0
label_15eda8:
    if (ctx->pc == 0x15EDA8u) {
        ctx->pc = 0x15EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA4u;
        // 0x15eda8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDACu;
        goto label_15edac;
    }
    ctx->pc = 0x15EDA4u;
    SET_GPR_U32(ctx, 31, 0x15EDACu);
    ctx->pc = 0x15EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA4u;
    // 0x15eda8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1917D0u;
    { ctx->pc = 0x1917d0; return; }
    ctx->pc = 0x15EDACu;
label_15edac:
    // 0x15edac: 0x10000004  b           . + 4 + (0x4 << 2)
label_15edb0:
    if (ctx->pc == 0x15EDB0u) {
        ctx->pc = 0x15EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDACu;
        // 0x15edb0: 0x27b10094  addiu       $s1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDB4u;
        goto label_15edb4;
    }
    ctx->pc = 0x15EDACu;
    {
        const bool branch_taken_0x15edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDACu;
        // 0x15edb0: 0x27b10094  addiu       $s1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15edac) {
            ctx->pc = 0x15EDC0u;
            goto label_15edc0;
        }
    }
    ctx->pc = 0x15EDB4u;
label_15edb4:
    // 0x15edb4: 0xc0645cc  jal         func_191730
label_15edb8:
    if (ctx->pc == 0x15EDB8u) {
        ctx->pc = 0x15EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDB4u;
        // 0x15edb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDBCu;
        goto label_15edbc;
    }
    ctx->pc = 0x15EDB4u;
    SET_GPR_U32(ctx, 31, 0x15EDBCu);
    ctx->pc = 0x15EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDB4u;
    // 0x15edb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191730u;
    { ctx->pc = 0x191730; return; }
    ctx->pc = 0x15EDBCu;
label_15edbc:
    // 0x15edbc: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x15edbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_15edc0:
    // 0x15edc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_15edc4:
    // 0x15edc4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x15edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15edc8:
    // 0x15edc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15edcc:
    // 0x15edcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15edccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15edd0:
    // 0x15edd0: 0x0  nop
    ctx->pc = 0x15edd0u;
    // NOP
label_15edd4:
    // 0x15edd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15edd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15edd8:
    // 0x15edd8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_15eddc:
    // 0x15eddc: 0xc0582e8  jal         func_160BA0
label_15ede0:
    if (ctx->pc == 0x15EDE0u) {
        ctx->pc = 0x15EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDDCu;
        // 0x15ede0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDE4u;
        goto label_15ede4;
    }
    ctx->pc = 0x15EDDCu;
    SET_GPR_U32(ctx, 31, 0x15EDE4u);
    ctx->pc = 0x15EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDDCu;
    // 0x15ede0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x160BA0u;
    { ctx->pc = 0x160ba0; return; }
    ctx->pc = 0x15EDE4u;
label_15ede4:
    // 0x15ede4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x15ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15ede8:
    // 0x15ede8: 0xc057fd0  jal         func_15FF40
label_15edec:
    if (ctx->pc == 0x15EDECu) {
        ctx->pc = 0x15EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDE8u;
        // 0x15edec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDF0u;
        goto label_15edf0;
    }
    ctx->pc = 0x15EDE8u;
    SET_GPR_U32(ctx, 31, 0x15EDF0u);
    ctx->pc = 0x15EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDE8u;
    // 0x15edec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FF40u;
    { ctx->pc = 0x15ff40; return; }
    ctx->pc = 0x15EDF0u;
label_15edf0:
    // 0x15edf0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_15edf4:
    // 0x15edf4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_15edf8:
    // 0x15edf8: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x15edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_15edfc:
    // 0x15edfc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x15edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_15ee00:
    // 0x15ee00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee04:
    // 0x15ee04: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15ee08:
    // 0x15ee08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ee08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee0c:
    // 0x15ee0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ee0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee10:
    // 0x15ee10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ee10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee14:
    // 0x15ee14: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_15ee18:
    // 0x15ee18: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15ee1c:
    // 0x15ee1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ee20:
    // 0x15ee20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15ee24:
    // 0x15ee24: 0x3893c  dsll32      $s1, $v1, 4
    ctx->pc = 0x15ee24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 4));
label_15ee28:
    // 0x15ee28: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15ee2c:
    // 0x15ee2c: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x15ee2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
label_15ee30:
    // 0x15ee30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15ee34:
    // 0x15ee34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee38:
    // 0x15ee38: 0xc066c72  jal         func_19B1C8
label_15ee3c:
    if (ctx->pc == 0x15EE3Cu) {
        ctx->pc = 0x15EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE38u;
        // 0x15ee3c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE40u;
        goto label_15ee40;
    }
    ctx->pc = 0x15EE38u;
    SET_GPR_U32(ctx, 31, 0x15EE40u);
    ctx->pc = 0x15EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE38u;
    // 0x15ee3c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EE40u;
label_15ee40:
    // 0x15ee40: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x15ee40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_15ee44:
    // 0x15ee44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15ee48:
    if (ctx->pc == 0x15EE48u) {
        ctx->pc = 0x15EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE44u;
        // 0x15ee48: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE4Cu;
        goto label_15ee4c;
    }
    ctx->pc = 0x15EE44u;
    {
        const bool branch_taken_0x15ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE44u;
        // 0x15ee48: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee44) {
            ctx->pc = 0x15EE5Cu;
            goto label_15ee5c;
        }
    }
    ctx->pc = 0x15EE4Cu;
label_15ee4c:
    // 0x15ee4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ee50:
    // 0x15ee50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15ee54:
    if (ctx->pc == 0x15EE54u) {
        ctx->pc = 0x15EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE50u;
        // 0x15ee54: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE58u;
        goto label_15ee58;
    }
    ctx->pc = 0x15EE50u;
    {
        const bool branch_taken_0x15ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE50u;
        // 0x15ee54: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee50) {
            ctx->pc = 0x15EE98u;
            goto label_15ee98;
        }
    }
    ctx->pc = 0x15EE58u;
label_15ee58:
    // 0x15ee58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15ee5c:
    // 0x15ee5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee60:
    // 0x15ee60: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15ee64:
    // 0x15ee64: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15ee68:
    // 0x15ee68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ee68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee6c:
    // 0x15ee6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ee6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee70:
    // 0x15ee70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ee70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ee74:
    // 0x15ee74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15ee78:
    // 0x15ee78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ee7c:
    // 0x15ee7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15ee80:
    // 0x15ee80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15ee84:
    // 0x15ee84: 0xc066c72  jal         func_19B1C8
label_15ee88:
    if (ctx->pc == 0x15EE88u) {
        ctx->pc = 0x15EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE84u;
        // 0x15ee88: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE8Cu;
        goto label_15ee8c;
    }
    ctx->pc = 0x15EE84u;
    SET_GPR_U32(ctx, 31, 0x15EE8Cu);
    ctx->pc = 0x15EE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE84u;
    // 0x15ee88: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EE8Cu;
label_15ee8c:
    // 0x15ee8c: 0x1000000e  b           . + 4 + (0xE << 2)
label_15ee90:
    if (ctx->pc == 0x15EE90u) {
        ctx->pc = 0x15EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE8Cu;
        // 0x15ee90: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE94u;
        goto label_15ee94;
    }
    ctx->pc = 0x15EE8Cu;
    {
        const bool branch_taken_0x15ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE8Cu;
        // 0x15ee90: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee8c) {
            ctx->pc = 0x15EEC8u;
            goto label_15eec8;
        }
    }
    ctx->pc = 0x15EE94u;
label_15ee94:
    // 0x15ee94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ee94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15ee98:
    // 0x15ee98: 0x24021a30  addiu       $v0, $zero, 0x1A30
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6704));
label_15ee9c:
    // 0x15ee9c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15eea0:
    // 0x15eea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15eea4:
    // 0x15eea4: 0x240601a3  addiu       $a2, $zero, 0x1A3
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
label_15eea8:
    // 0x15eea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15eea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eeac:
    // 0x15eeac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15eeacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eeb0:
    // 0x15eeb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15eeb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eeb4:
    // 0x15eeb4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x15eeb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15eeb8:
    // 0x15eeb8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15eebc:
    // 0x15eebc: 0xc066c72  jal         func_19B1C8
label_15eec0:
    if (ctx->pc == 0x15EEC0u) {
        ctx->pc = 0x15EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEBCu;
        // 0x15eec0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EEC4u;
        goto label_15eec4;
    }
    ctx->pc = 0x15EEBCu;
    SET_GPR_U32(ctx, 31, 0x15EEC4u);
    ctx->pc = 0x15EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEBCu;
    // 0x15eec0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EEC4u;
label_15eec4:
    // 0x15eec4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15eec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15eec8:
    // 0x15eec8: 0x8e424d10  lw          $v0, 0x4D10($s2)
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19728)));
label_15eecc:
    // 0x15eecc: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15eed0:
    // 0x15eed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15eed4:
    // 0x15eed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15eed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eed8:
    // 0x15eed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15eed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eedc:
    // 0x15eedc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15eedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eee0:
    // 0x15eee0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15eee4:
    // 0x15eee4: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x15eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_15eee8:
    // 0x15eee8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_15eeec:
    // 0x15eeec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15eef0:
    // 0x15eef0: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_15eef4:
    // 0x15eef4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15eef8:
    // 0x15eef8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15eefc:
    // 0x15eefc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_15ef00:
    // 0x15ef00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15ef04:
    // 0x15ef04: 0xc066c72  jal         func_19B1C8
label_15ef08:
    if (ctx->pc == 0x15EF08u) {
        ctx->pc = 0x15EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF04u;
        // 0x15ef08: 0x24454d20  addiu       $a1, $v0, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF0Cu;
        goto label_15ef0c;
    }
    ctx->pc = 0x15EF04u;
    SET_GPR_U32(ctx, 31, 0x15EF0Cu);
    ctx->pc = 0x15EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF04u;
    // 0x15ef08: 0x24454d20  addiu       $a1, $v0, 0x4D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EF0Cu;
label_15ef0c:
    // 0x15ef0c: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x15ef0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_15ef10:
    // 0x15ef10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15ef14:
    if (ctx->pc == 0x15EF14u) {
        ctx->pc = 0x15EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF10u;
        // 0x15ef14: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF18u;
        goto label_15ef18;
    }
    ctx->pc = 0x15EF10u;
    {
        const bool branch_taken_0x15ef10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF10u;
        // 0x15ef14: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef10) {
            ctx->pc = 0x15EF28u;
            goto label_15ef28;
        }
    }
    ctx->pc = 0x15EF18u;
label_15ef18:
    // 0x15ef18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ef1c:
    // 0x15ef1c: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_15ef20:
    if (ctx->pc == 0x15EF20u) {
        ctx->pc = 0x15EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF1Cu;
        // 0x15ef20: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF24u;
        goto label_15ef24;
    }
    ctx->pc = 0x15EF1Cu;
    {
        const bool branch_taken_0x15ef1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF1Cu;
        // 0x15ef20: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef1c) {
            ctx->pc = 0x15F11Cu;
            goto label_15f11c;
        }
    }
    ctx->pc = 0x15EF24u;
label_15ef24:
    // 0x15ef24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ef28:
    // 0x15ef28: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15ef2c:
    // 0x15ef2c: 0x8c237720  lw          $v1, 0x7720($at)
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30496)));
label_15ef30:
    // 0x15ef30: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_15ef34:
    if (ctx->pc == 0x15EF34u) {
        ctx->pc = 0x15EF38u;
        goto label_15ef38;
    }
    ctx->pc = 0x15EF30u;
    {
        const bool branch_taken_0x15ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef30) {
            ctx->pc = 0x15EFE8u;
            goto label_15efe8;
        }
    }
    ctx->pc = 0x15EF38u;
label_15ef38:
    // 0x15ef38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ef3c:
    // 0x15ef3c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15ef40:
    // 0x15ef40: 0x90234c65  lbu         $v1, 0x4C65($at)
    ctx->pc = 0x15ef40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19557)));
label_15ef44:
    // 0x15ef44: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_15ef48:
    if (ctx->pc == 0x15EF48u) {
        ctx->pc = 0x15EF4Cu;
        goto label_15ef4c;
    }
    ctx->pc = 0x15EF44u;
    {
        const bool branch_taken_0x15ef44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef44) {
            ctx->pc = 0x15EFE8u;
            goto label_15efe8;
        }
    }
    ctx->pc = 0x15EF4Cu;
label_15ef4c:
    // 0x15ef4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ef4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ef50:
    // 0x15ef50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15ef54:
    // 0x15ef54: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15ef58:
    // 0x15ef58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15ef58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15ef5c:
    // 0x15ef5c: 0x8c254c70  lw          $a1, 0x4C70($at)
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_15ef60:
    // 0x15ef60: 0xdca40270  ld          $a0, 0x270($a1)
    ctx->pc = 0x15ef60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 624)));
label_15ef64:
    // 0x15ef64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15ef64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15ef68:
    // 0x15ef68: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_15ef6c:
    if (ctx->pc == 0x15EF6Cu) {
        ctx->pc = 0x15EF70u;
        goto label_15ef70;
    }
    ctx->pc = 0x15EF68u;
    {
        const bool branch_taken_0x15ef68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef68) {
            ctx->pc = 0x15EFE8u;
            goto label_15efe8;
        }
    }
    ctx->pc = 0x15EF70u;
label_15ef70:
    // 0x15ef70: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_15ef74:
    // 0x15ef74: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_15ef78:
    if (ctx->pc == 0x15EF78u) {
        ctx->pc = 0x15EF7Cu;
        goto label_15ef7c;
    }
    ctx->pc = 0x15EF74u;
    {
        const bool branch_taken_0x15ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ef74) {
            ctx->pc = 0x15EFE8u;
            goto label_15efe8;
        }
    }
    ctx->pc = 0x15EF7Cu;
label_15ef7c:
    // 0x15ef7c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_15ef80:
    // 0x15ef80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ef84:
    // 0x15ef84: 0x24c612a0  addiu       $a2, $a2, 0x12A0
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4768));
label_15ef88:
    // 0x15ef88: 0x8cc30204  lw          $v1, 0x204($a2)
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
label_15ef8c:
    // 0x15ef8c: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_15ef90:
    if (ctx->pc == 0x15EF90u) {
        ctx->pc = 0x15EF94u;
        goto label_15ef94;
    }
    ctx->pc = 0x15EF8Cu;
    {
        const bool branch_taken_0x15ef8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ef8c) {
            ctx->pc = 0x15EFD8u;
            goto label_15efd8;
        }
    }
    ctx->pc = 0x15EF94u;
label_15ef94:
    // 0x15ef94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15ef98:
    // 0x15ef98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ef9c:
    // 0x15ef9c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15efa0:
    // 0x15efa0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15efa4:
    // 0x15efa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15efa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15efa8:
    // 0x15efa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15efa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15efac:
    // 0x15efac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15efacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15efb0:
    // 0x15efb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15efb4:
    // 0x15efb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15efb8:
    // 0x15efb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15efbc:
    // 0x15efbc: 0x34217660  ori         $at, $at, 0x7660
    ctx->pc = 0x15efbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30304);
label_15efc0:
    // 0x15efc0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15efc4:
    // 0x15efc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15efc8:
    // 0x15efc8: 0xc066c72  jal         func_19B1C8
label_15efcc:
    if (ctx->pc == 0x15EFCCu) {
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFD0u;
        goto label_15efd0;
    }
    ctx->pc = 0x15EFC8u;
    SET_GPR_U32(ctx, 31, 0x15EFD0u);
    ctx->pc = 0x15EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC8u;
    // 0x15efcc: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_15efd4:
    if (ctx->pc == 0x15EFD4u) {
        ctx->pc = 0x15EFD8u;
        goto label_15efd8;
    }
    ctx->pc = 0x15EFD0u;
    {
        const bool branch_taken_0x15efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15efd0) {
            ctx->pc = 0x15EFE8u;
            goto label_15efe8;
        }
    }
    ctx->pc = 0x15EFD8u;
label_15efd8:
    // 0x15efd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15efdc:
    // 0x15efdc: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x15efdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_15efe0:
    // 0x15efe0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_15efe4:
    if (ctx->pc == 0x15EFE4u) {
        ctx->pc = 0x15EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE0u;
        // 0x15efe4: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFE8u;
        goto label_15efe8;
    }
    ctx->pc = 0x15EFE0u;
    {
        const bool branch_taken_0x15efe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE0u;
        // 0x15efe4: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efe0) {
            ctx->pc = 0x15EF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ef88;
        }
    }
    ctx->pc = 0x15EFE8u;
label_15efe8:
    // 0x15efe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15efe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15efec:
    // 0x15efec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15efecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eff0:
    // 0x15eff0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15eff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eff4:
    // 0x15eff4: 0x0  nop
    ctx->pc = 0x15eff4u;
    // NOP
label_15eff8:
    // 0x15eff8: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_15effc:
    // 0x15effc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f000:
    // 0x15f000: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_15f004:
    // 0x15f004: 0x90234c65  lbu         $v1, 0x4C65($at)
    ctx->pc = 0x15f004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19557)));
label_15f008:
    // 0x15f008: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_15f00c:
    if (ctx->pc == 0x15F00Cu) {
        ctx->pc = 0x15F010u;
        goto label_15f010;
    }
    ctx->pc = 0x15F008u;
    {
        const bool branch_taken_0x15f008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f008) {
            ctx->pc = 0x15F050u;
            goto label_15f050;
        }
    }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15f014:
    // 0x15f014: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_15f018:
    // 0x15f018: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15f01c:
    // 0x15f01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f020:
    // 0x15f020: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15f024:
    // 0x15f024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f028:
    // 0x15f028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f02c:
    // 0x15f02c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f030:
    // 0x15f030: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f034:
    // 0x15f034: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f038:
    // 0x15f038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15f03c:
    // 0x15f03c: 0x34214c90  ori         $at, $at, 0x4C90
    ctx->pc = 0x15f03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19600);
label_15f040:
    // 0x15f040: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15f044:
    // 0x15f044: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15f048:
    // 0x15f048: 0xc066c72  jal         func_19B1C8
label_15f04c:
    if (ctx->pc == 0x15F04Cu) {
        ctx->pc = 0x15F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F048u;
        // 0x15f04c: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F050u;
        goto label_15f050;
    }
    ctx->pc = 0x15F048u;
    SET_GPR_U32(ctx, 31, 0x15F050u);
    ctx->pc = 0x15F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F048u;
    // 0x15f04c: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15F050u;
label_15f050:
    // 0x15f050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f054:
    // 0x15f054: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x15f054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f058:
    // 0x15f058: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x15f058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_15f05c:
    // 0x15f05c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_15f060:
    if (ctx->pc == 0x15F060u) {
        ctx->pc = 0x15F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F05Cu;
        // 0x15f060: 0x26940140  addiu       $s4, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F064u;
        goto label_15f064;
    }
    ctx->pc = 0x15F05Cu;
    {
        const bool branch_taken_0x15f05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F05Cu;
        // 0x15f060: 0x26940140  addiu       $s4, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f05c) {
            ctx->pc = 0x15EFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eff4;
        }
    }
    ctx->pc = 0x15F064u;
label_15f064:
    // 0x15f064: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15f064u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f068:
    // 0x15f068: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15f068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f06c:
    // 0x15f06c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f06cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f070:
    // 0x15f070: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15f070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f074:
    // 0x15f074: 0x0  nop
    ctx->pc = 0x15f074u;
    // NOP
label_15f078:
    // 0x15f078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f07c:
    // 0x15f07c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f080:
    // 0x15f080: 0x0  nop
    ctx->pc = 0x15f080u;
    // NOP
label_15f084:
    // 0x15f084: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_15f088:
    // 0x15f088: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f08c:
    // 0x15f08c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15f090:
    // 0x15f090: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x15f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f094:
    // 0x15f094: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_15f098:
    // 0x15f098: 0x84234fd8  lh          $v1, 0x4FD8($at)
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20440)));
label_15f09c:
    // 0x15f09c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_15f0a0:
    if (ctx->pc == 0x15F0A0u) {
        ctx->pc = 0x15F0A4u;
        goto label_15f0a4;
    }
    ctx->pc = 0x15F09Cu;
    {
        const bool branch_taken_0x15f09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f09c) {
            ctx->pc = 0x15F0E0u;
            goto label_15f0e0;
        }
    }
    ctx->pc = 0x15F0A4u;
label_15f0a4:
    // 0x15f0a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15f0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15f0a8:
    // 0x15f0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f0ac:
    // 0x15f0ac: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15f0b0:
    // 0x15f0b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15f0b4:
    // 0x15f0b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f0b8:
    // 0x15f0b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f0b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f0bc:
    // 0x15f0bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f0bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f0c0:
    // 0x15f0c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15f0c4:
    // 0x15f0c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f0c8:
    // 0x15f0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15f0cc:
    // 0x15f0cc: 0x34214f10  ori         $at, $at, 0x4F10
    ctx->pc = 0x15f0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20240);
label_15f0d0:
    // 0x15f0d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15f0d4:
    // 0x15f0d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15f0d8:
    // 0x15f0d8: 0xc066c72  jal         func_19B1C8
label_15f0dc:
    if (ctx->pc == 0x15F0DCu) {
        ctx->pc = 0x15F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0D8u;
        // 0x15f0dc: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0E0u;
        goto label_15f0e0;
    }
    ctx->pc = 0x15F0D8u;
    SET_GPR_U32(ctx, 31, 0x15F0E0u);
    ctx->pc = 0x15F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F0D8u;
    // 0x15f0dc: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15F0E0u;
label_15f0e0:
    // 0x15f0e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f0e4:
    // 0x15f0e4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x15f0e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_15f0e8:
    // 0x15f0e8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_15f0ec:
    if (ctx->pc == 0x15F0ECu) {
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0F0u;
        goto label_15f0f0;
    }
    ctx->pc = 0x15F0E8u;
    {
        const bool branch_taken_0x15f0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e8) {
            ctx->pc = 0x15F080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f080;
        }
    }
    ctx->pc = 0x15F0F0u;
label_15f0f0:
    // 0x15f0f0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15f0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_15f0f4:
    // 0x15f0f4: 0x2ac30008  slti        $v1, $s6, 0x8
    ctx->pc = 0x15f0f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_15f0f8:
    // 0x15f0f8: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_15f0fc:
    if (ctx->pc == 0x15F0FCu) {
        ctx->pc = 0x15F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0F8u;
        // 0x15f0fc: 0x26940270  addiu       $s4, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F100u;
        goto label_15f100;
    }
    ctx->pc = 0x15F0F8u;
    {
        const bool branch_taken_0x15f0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0F8u;
        // 0x15f0fc: 0x26940270  addiu       $s4, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0f8) {
            ctx->pc = 0x15F074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f074;
        }
    }
    ctx->pc = 0x15F100u;
label_15f100:
    // 0x15f100: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_15f104:
    // 0x15f104: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x15f104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f108:
    // 0x15f108: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_15f10c:
    if (ctx->pc == 0x15F10Cu) {
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x26b51380  addiu       $s5, $s5, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F110u;
        goto label_15f110;
    }
    ctx->pc = 0x15F108u;
    {
        const bool branch_taken_0x15f108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x26b51380  addiu       $s5, $s5, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f108) {
            ctx->pc = 0x15F06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f06c;
        }
    }
    ctx->pc = 0x15F110u;
label_15f110:
    // 0x15f110: 0x1000005e  b           . + 4 + (0x5E << 2)
label_15f114:
    if (ctx->pc == 0x15F114u) {
        ctx->pc = 0x15F118u;
        goto label_15f118;
    }
    ctx->pc = 0x15F110u;
    {
        const bool branch_taken_0x15f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f110) {
            ctx->pc = 0x15F28Cu;
            goto label_15f28c;
        }
    }
    ctx->pc = 0x15F118u;
label_15f118:
    // 0x15f118: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f11c:
    // 0x15f11c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15f120:
    // 0x15f120: 0x8c237720  lw          $v1, 0x7720($at)
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30496)));
label_15f124:
    // 0x15f124: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_15f128:
    if (ctx->pc == 0x15F128u) {
        ctx->pc = 0x15F12Cu;
        goto label_15f12c;
    }
    ctx->pc = 0x15F124u;
    {
        const bool branch_taken_0x15f124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f124) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F12Cu;
label_15f12c:
    // 0x15f12c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f130:
    // 0x15f130: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15f130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15f134:
    // 0x15f134: 0x8c254c70  lw          $a1, 0x4C70($at)
    ctx->pc = 0x15f134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_15f138:
    // 0x15f138: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_15f13c:
    if (ctx->pc == 0x15F13Cu) {
        ctx->pc = 0x15F140u;
        goto label_15f140;
    }
    ctx->pc = 0x15F138u;
    {
        const bool branch_taken_0x15f138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f138) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F140u;
label_15f140:
    // 0x15f140: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x15f140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_15f144:
    // 0x15f144: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_15f148:
    if (ctx->pc == 0x15F148u) {
        ctx->pc = 0x15F14Cu;
        goto label_15f14c;
    }
    ctx->pc = 0x15F144u;
    {
        const bool branch_taken_0x15f144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f144) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F14Cu;
label_15f14c:
    // 0x15f14c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f150:
    // 0x15f150: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15f154:
    // 0x15f154: 0x90234c79  lbu         $v1, 0x4C79($at)
    ctx->pc = 0x15f154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19577)));
label_15f158:
    // 0x15f158: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_15f15c:
    if (ctx->pc == 0x15F15Cu) {
        ctx->pc = 0x15F160u;
        goto label_15f160;
    }
    ctx->pc = 0x15F158u;
    {
        const bool branch_taken_0x15f158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f158) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F160u;
label_15f160:
    // 0x15f160: 0xdca40270  ld          $a0, 0x270($a1)
    ctx->pc = 0x15f160u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 624)));
label_15f164:
    // 0x15f164: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f168:
    // 0x15f168: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15f168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15f16c:
    // 0x15f16c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15f16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15f170:
    // 0x15f170: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_15f174:
    if (ctx->pc == 0x15F174u) {
        ctx->pc = 0x15F178u;
        goto label_15f178;
    }
    ctx->pc = 0x15F170u;
    {
        const bool branch_taken_0x15f170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f170) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F178u;
label_15f178:
    // 0x15f178: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_15f17c:
    // 0x15f17c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_15f180:
    if (ctx->pc == 0x15F180u) {
        ctx->pc = 0x15F184u;
        goto label_15f184;
    }
    ctx->pc = 0x15F17Cu;
    {
        const bool branch_taken_0x15f17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f17c) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F184u;
label_15f184:
    // 0x15f184: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_15f188:
    // 0x15f188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f18c:
    // 0x15f18c: 0x248412a0  addiu       $a0, $a0, 0x12A0
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
label_15f190:
    // 0x15f190: 0x8c830204  lw          $v1, 0x204($a0)
    ctx->pc = 0x15f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
label_15f194:
    // 0x15f194: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_15f198:
    if (ctx->pc == 0x15F198u) {
        ctx->pc = 0x15F19Cu;
        goto label_15f19c;
    }
    ctx->pc = 0x15F194u;
    {
        const bool branch_taken_0x15f194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15f194) {
            ctx->pc = 0x15F1E0u;
            goto label_15f1e0;
        }
    }
    ctx->pc = 0x15F19Cu;
label_15f19c:
    // 0x15f19c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15f1a0:
    // 0x15f1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f1a4:
    // 0x15f1a4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15f1a8:
    // 0x15f1a8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15f1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15f1ac:
    // 0x15f1ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b0:
    // 0x15f1b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b4:
    // 0x15f1b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f1b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b8:
    // 0x15f1b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15f1bc:
    // 0x15f1bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f1c0:
    // 0x15f1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15f1c4:
    // 0x15f1c4: 0x34217660  ori         $at, $at, 0x7660
    ctx->pc = 0x15f1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30304);
label_15f1c8:
    // 0x15f1c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15f1cc:
    // 0x15f1cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f1d0:
    // 0x15f1d0: 0xc066c72  jal         func_19B1C8
label_15f1d4:
    if (ctx->pc == 0x15F1D4u) {
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1D8u;
        goto label_15f1d8;
    }
    ctx->pc = 0x15F1D0u;
    SET_GPR_U32(ctx, 31, 0x15F1D8u);
    ctx->pc = 0x15F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1D0u;
    // 0x15f1d4: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_15f1dc:
    if (ctx->pc == 0x15F1DCu) {
        ctx->pc = 0x15F1E0u;
        goto label_15f1e0;
    }
    ctx->pc = 0x15F1D8u;
    {
        const bool branch_taken_0x15f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f1d8) {
            ctx->pc = 0x15F1F0u;
            goto label_15f1f0;
        }
    }
    ctx->pc = 0x15F1E0u;
label_15f1e0:
    // 0x15f1e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15f1e4:
    // 0x15f1e4: 0x28c30028  slti        $v1, $a2, 0x28
    ctx->pc = 0x15f1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
label_15f1e8:
    // 0x15f1e8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_15f1ec:
    if (ctx->pc == 0x15F1ECu) {
        ctx->pc = 0x15F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E8u;
        // 0x15f1ec: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1F0u;
        goto label_15f1f0;
    }
    ctx->pc = 0x15F1E8u;
    {
        const bool branch_taken_0x15f1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E8u;
        // 0x15f1ec: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1e8) {
            ctx->pc = 0x15F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f190;
        }
    }
    ctx->pc = 0x15F1F0u;
label_15f1f0:
    // 0x15f1f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15f1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1f4:
    // 0x15f1f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1f8:
    // 0x15f1f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f1f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f1fc:
    // 0x15f1fc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_15f200:
    // 0x15f200: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f204:
    // 0x15f204: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_15f208:
    // 0x15f208: 0x8c234c70  lw          $v1, 0x4C70($at)
    ctx->pc = 0x15f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_15f20c:
    // 0x15f20c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_15f210:
    if (ctx->pc == 0x15F210u) {
        ctx->pc = 0x15F214u;
        goto label_15f214;
    }
    ctx->pc = 0x15F20Cu;
    {
        const bool branch_taken_0x15f20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f20c) {
            ctx->pc = 0x15F274u;
            goto label_15f274;
        }
    }
    ctx->pc = 0x15F214u;
label_15f214:
    // 0x15f214: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x15f214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
label_15f218:
    // 0x15f218: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_15f21c:
    if (ctx->pc == 0x15F21Cu) {
        ctx->pc = 0x15F220u;
        goto label_15f220;
    }
    ctx->pc = 0x15F218u;
    {
        const bool branch_taken_0x15f218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f218) {
            ctx->pc = 0x15F274u;
            goto label_15f274;
        }
    }
    ctx->pc = 0x15F220u;
label_15f220:
    // 0x15f220: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f224:
    // 0x15f224: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_15f228:
    // 0x15f228: 0x90234c79  lbu         $v1, 0x4C79($at)
    ctx->pc = 0x15f228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19577)));
label_15f22c:
    // 0x15f22c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_15f230:
    if (ctx->pc == 0x15F230u) {
        ctx->pc = 0x15F234u;
        goto label_15f234;
    }
    ctx->pc = 0x15F22Cu;
    {
        const bool branch_taken_0x15f22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f22c) {
            ctx->pc = 0x15F274u;
            goto label_15f274;
        }
    }
    ctx->pc = 0x15F234u;
label_15f234:
    // 0x15f234: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15f238:
    // 0x15f238: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x15f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_15f23c:
    // 0x15f23c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15f240:
    // 0x15f240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f244:
    // 0x15f244: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15f248:
    // 0x15f248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f24c:
    // 0x15f24c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f24cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f250:
    // 0x15f250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f254:
    // 0x15f254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15f254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f258:
    // 0x15f258: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f25c:
    // 0x15f25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15f260:
    // 0x15f260: 0x34214c90  ori         $at, $at, 0x4C90
    ctx->pc = 0x15f260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19600);
label_15f264:
    // 0x15f264: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15f264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15f268:
    // 0x15f268: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15f26c:
    // 0x15f26c: 0xc066c72  jal         func_19B1C8
label_15f270:
    if (ctx->pc == 0x15F270u) {
        ctx->pc = 0x15F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F26Cu;
        // 0x15f270: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F274u;
        goto label_15f274;
    }
    ctx->pc = 0x15F26Cu;
    SET_GPR_U32(ctx, 31, 0x15F274u);
    ctx->pc = 0x15F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F26Cu;
    // 0x15f270: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15F274u;
label_15f274:
    // 0x15f274: 0x0  nop
    ctx->pc = 0x15f274u;
    // NOP
label_15f278:
    // 0x15f278: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15f27c:
    // 0x15f27c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x15f27cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f280:
    // 0x15f280: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15f280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15f284:
    // 0x15f284: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_15f288:
    if (ctx->pc == 0x15F288u) {
        ctx->pc = 0x15F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F284u;
        // 0x15f288: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F28Cu;
        goto label_15f28c;
    }
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F284u;
        // 0x15f288: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F1FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f1fc;
        }
    }
    ctx->pc = 0x15F28Cu;
label_15f28c:
    // 0x15f28c: 0x0  nop
    ctx->pc = 0x15f28cu;
    // NOP
label_15f290:
    // 0x15f290: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15f294:
    // 0x15f294: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15f294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15f298:
    // 0x15f298: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15f298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15f29c:
    // 0x15f29c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15f29cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15f2a0:
    // 0x15f2a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f2a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15f2a4:
    // 0x15f2a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f2a8:
    // 0x15f2a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f2a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f2ac:
    // 0x15f2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f2b0:
    // 0x15f2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15f2b4:
    // 0x15f2b4: 0x3e00008  jr          $ra
label_15f2b8:
    if (ctx->pc == 0x15F2B8u) {
        ctx->pc = 0x15F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2B4u;
        // 0x15f2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2BCu;
        goto label_15f2bc;
    }
    ctx->pc = 0x15F2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2B4u;
        // 0x15f2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F2BCu;
label_15f2bc:
    // 0x15f2bc: 0x0  nop
    ctx->pc = 0x15f2bcu;
    // NOP
label_15f2c0:
    // 0x15f2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15f2c4:
    // 0x15f2c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15f2c8:
    // 0x15f2c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15f2cc:
    // 0x15f2cc: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_15f2d0:
    // 0x15f2d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15f2d4:
    // 0x15f2d4: 0x24424b40  addiu       $v0, $v0, 0x4B40
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19264));
label_15f2d8:
    // 0x15f2d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15f2dc:
    // 0x15f2dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f2e0:
    // 0x15f2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f2e4:
    // 0x15f2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15f2e8:
    // 0x15f2e8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15f2ec:
    // 0x15f2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f2f0:
    // 0x15f2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f2f4:
    // 0x15f2f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f2f8:
    // 0x15f2f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f2fc:
    // 0x15f2fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f300:
    // 0x15f300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f304:
    // 0x15f304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f308:
    // 0x15f308: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15f30c:
    // 0x15f30c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15f30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15f310:
    // 0x15f310: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_15f314:
    // 0x15f314: 0x8c224c70  lw          $v0, 0x4C70($at)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_15f318:
    // 0x15f318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f31c:
    // 0x15f31c: 0xc066e26  jal         func_19B898
label_15f320:
    if (ctx->pc == 0x15F320u) {
        ctx->pc = 0x15F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F31Cu;
        // 0x15f320: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F324u;
        goto label_15f324;
    }
    ctx->pc = 0x15F31Cu;
    SET_GPR_U32(ctx, 31, 0x15F324u);
    ctx->pc = 0x15F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F31Cu;
    // 0x15f320: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x15F324u;
label_15f324:
    // 0x15f324: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15f324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15f328:
    // 0x15f328: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15f328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_15f32c:
    // 0x15f32c: 0x34847610  ori         $a0, $a0, 0x7610
    ctx->pc = 0x15f32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30224);
label_15f330:
    // 0x15f330: 0x30630024  andi        $v1, $v1, 0x24
    ctx->pc = 0x15f330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)36);
label_15f334:
    // 0x15f334: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_15f338:
    if (ctx->pc == 0x15F338u) {
        ctx->pc = 0x15F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F334u;
        // 0x15f338: 0x2042821  addu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F33Cu;
        goto label_15f33c;
    }
    ctx->pc = 0x15F334u;
    {
        const bool branch_taken_0x15f334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F334u;
        // 0x15f338: 0x2042821  addu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f334) {
            ctx->pc = 0x15F38Cu;
            goto label_15f38c;
        }
    }
    ctx->pc = 0x15F33Cu;
label_15f33c:
    // 0x15f33c: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_15f340:
    // 0x15f340: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_15f344:
    // 0x15f344: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_15f348:
    // 0x15f348: 0x246303c4  addiu       $v1, $v1, 0x3C4
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_15f34c:
    // 0x15f34c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f350:
    // 0x15f350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f354:
    // 0x15f354: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15f358:
    // 0x15f358: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_15f35c:
    // 0x15f35c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x15f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_15f360:
    // 0x15f360: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_15f364:
    if (ctx->pc == 0x15F364u) {
        ctx->pc = 0x15F368u;
        goto label_15f368;
    }
    ctx->pc = 0x15F360u;
    {
        const bool branch_taken_0x15f360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f360) {
            ctx->pc = 0x15F38Cu;
            goto label_15f38c;
        }
    }
    ctx->pc = 0x15F368u;
label_15f368:
    // 0x15f368: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f36c:
    // 0x15f36c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15f370:
    if (ctx->pc == 0x15F370u) {
        ctx->pc = 0x15F374u;
        goto label_15f374;
    }
    ctx->pc = 0x15F36Cu;
    {
        const bool branch_taken_0x15f36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f36c) {
            ctx->pc = 0x15F380u;
            goto label_15f380;
        }
    }
    ctx->pc = 0x15F374u;
label_15f374:
    // 0x15f374: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15f374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_15f378:
    // 0x15f378: 0x10000004  b           . + 4 + (0x4 << 2)
label_15f37c:
    if (ctx->pc == 0x15F37Cu) {
        ctx->pc = 0x15F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F378u;
        // 0x15f37c: 0xa0a0000d  sb          $zero, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F380u;
        goto label_15f380;
    }
    ctx->pc = 0x15F378u;
    {
        const bool branch_taken_0x15f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F378u;
        // 0x15f37c: 0xa0a0000d  sb          $zero, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f378) {
            ctx->pc = 0x15F38Cu;
            goto label_15f38c;
        }
    }
    ctx->pc = 0x15F380u;
label_15f380:
    // 0x15f380: 0x90a3000d  lbu         $v1, 0xD($a1)
    ctx->pc = 0x15f380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_15f384:
    // 0x15f384: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15f384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_15f388:
    // 0x15f388: 0xa0a3000d  sb          $v1, 0xD($a1)
    ctx->pc = 0x15f388u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
label_15f38c:
    // 0x15f38c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15f390:
    // 0x15f390: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x15f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_15f394:
    // 0x15f394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15f398:
    if (ctx->pc == 0x15F398u) {
        ctx->pc = 0x15F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F394u;
        // 0x15f398: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F39Cu;
        goto label_15f39c;
    }
    ctx->pc = 0x15F394u;
    {
        const bool branch_taken_0x15f394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F394u;
        // 0x15f398: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f394) {
            ctx->pc = 0x15F3A8u;
            goto label_15f3a8;
        }
    }
    ctx->pc = 0x15F39Cu;
label_15f39c:
    // 0x15f39c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x15f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_15f3a0:
    // 0x15f3a0: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_15f3a4:
    if (ctx->pc == 0x15F3A4u) {
        ctx->pc = 0x15F3A8u;
        goto label_15f3a8;
    }
    ctx->pc = 0x15F3A0u;
    {
        const bool branch_taken_0x15f3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3a0) {
            ctx->pc = 0x15F4F4u;
            goto label_15f4f4;
        }
    }
    ctx->pc = 0x15F3A8u;
label_15f3a8:
    // 0x15f3a8: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15f3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_15f3ac:
    // 0x15f3ac: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x15f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_15f3b0:
    // 0x15f3b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15f3b4:
    // 0x15f3b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15f3b8:
    if (ctx->pc == 0x15F3B8u) {
        ctx->pc = 0x15F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3B4u;
        // 0x15f3b8: 0x9083000c  lbu         $v1, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3BCu;
        goto label_15f3bc;
    }
    ctx->pc = 0x15F3B4u;
    {
        const bool branch_taken_0x15f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3B4u;
        // 0x15f3b8: 0x9083000c  lbu         $v1, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3b4) {
            ctx->pc = 0x15F3D4u;
            goto label_15f3d4;
        }
    }
    ctx->pc = 0x15F3BCu;
label_15f3bc:
    // 0x15f3bc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_15f3c0:
    // 0x15f3c0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x15f3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_15f3c4:
    // 0x15f3c4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_15f3c8:
    if (ctx->pc == 0x15F3C8u) {
        ctx->pc = 0x15F3CCu;
        goto label_15f3cc;
    }
    ctx->pc = 0x15F3C4u;
    {
        const bool branch_taken_0x15f3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3c4) {
            ctx->pc = 0x15F3E4u;
            goto label_15f3e4;
        }
    }
    ctx->pc = 0x15F3CCu;
label_15f3cc:
    // 0x15f3cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_15f3d0:
    if (ctx->pc == 0x15F3D0u) {
        ctx->pc = 0x15F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3CCu;
        // 0x15f3d0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3D4u;
        goto label_15f3d4;
    }
    ctx->pc = 0x15F3CCu;
    {
        const bool branch_taken_0x15f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3CCu;
        // 0x15f3d0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3cc) {
            ctx->pc = 0x15F3E4u;
            goto label_15f3e4;
        }
    }
    ctx->pc = 0x15F3D4u;
label_15f3d4:
    // 0x15f3d4: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_15f3d8:
    // 0x15f3d8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_15f3dc:
    if (ctx->pc == 0x15F3DCu) {
        ctx->pc = 0x15F3E0u;
        goto label_15f3e0;
    }
    ctx->pc = 0x15F3D8u;
    {
        const bool branch_taken_0x15f3d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15f3d8) {
            ctx->pc = 0x15F3E4u;
            goto label_15f3e4;
        }
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f3e4:
    // 0x15f3e4: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x15f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
label_15f3e8:
    // 0x15f3e8: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x15f3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_15f3ec:
    // 0x15f3ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15f3f0:
    if (ctx->pc == 0x15F3F0u) {
        ctx->pc = 0x15F3F4u;
        goto label_15f3f4;
    }
    ctx->pc = 0x15F3ECu;
    {
        const bool branch_taken_0x15f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3ec) {
            ctx->pc = 0x15F400u;
            goto label_15f400;
        }
    }
    ctx->pc = 0x15F3F4u;
label_15f3f4:
    // 0x15f3f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f3f8:
    // 0x15f3f8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_15f3fc:
    if (ctx->pc == 0x15F3FCu) {
        ctx->pc = 0x15F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3F8u;
        // 0x15f3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F400u;
        goto label_15f400;
    }
    ctx->pc = 0x15F3F8u;
    {
        const bool branch_taken_0x15f3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3F8u;
        // 0x15f3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3f8) {
            ctx->pc = 0x15F4E0u;
            goto label_15f4e0;
        }
    }
    ctx->pc = 0x15F400u;
label_15f400:
    // 0x15f400: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x15f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f404:
    // 0x15f404: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_15f408:
    // 0x15f408: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15f408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f40c:
    // 0x15f40c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f410:
    // 0x15f410: 0x34214c60  ori         $at, $at, 0x4C60
    ctx->pc = 0x15f410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19552);
label_15f414:
    // 0x15f414: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f418:
    // 0x15f418: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_15f41c:
    // 0x15f41c: 0x2018821  addu        $s1, $s0, $at
    ctx->pc = 0x15f41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_15f420:
    // 0x15f420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f424:
    // 0x15f424: 0x0  nop
    ctx->pc = 0x15f424u;
    // NOP
label_15f428:
    // 0x15f428: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15f428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15f42c:
    // 0x15f42c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x15f42cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_15f430:
    // 0x15f430: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15f434:
    // 0x15f434: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_15f438:
    if (ctx->pc == 0x15F438u) {
        ctx->pc = 0x15F43Cu;
        goto label_15f43c;
    }
    ctx->pc = 0x15F434u;
    {
        const bool branch_taken_0x15f434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f434) {
            ctx->pc = 0x15F4ACu;
            goto label_15f4ac;
        }
    }
    ctx->pc = 0x15F43Cu;
label_15f43c:
    // 0x15f43c: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x15f43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_15f440:
    // 0x15f440: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_15f444:
    if (ctx->pc == 0x15F444u) {
        ctx->pc = 0x15F448u;
        goto label_15f448;
    }
    ctx->pc = 0x15F440u;
    {
        const bool branch_taken_0x15f440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f440) {
            ctx->pc = 0x15F4ACu;
            goto label_15f4ac;
        }
    }
    ctx->pc = 0x15F448u;
label_15f448:
    // 0x15f448: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x15f448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_15f44c:
    // 0x15f44c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f450:
    // 0x15f450: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x15f450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_15f454:
    // 0x15f454: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15f458:
    // 0x15f458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15f45c:
    // 0x15f45c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f460:
    // 0x15f460: 0xc04494c  jal         func_112530
label_15f464:
    if (ctx->pc == 0x15F464u) {
        ctx->pc = 0x15F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F460u;
        // 0x15f464: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F468u;
        goto label_15f468;
    }
    ctx->pc = 0x15F460u;
    SET_GPR_U32(ctx, 31, 0x15F468u);
    ctx->pc = 0x15F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F460u;
    // 0x15f464: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x15F460u, 0x15F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F468u;
label_15f468:
    // 0x15f468: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_15f46c:
    if (ctx->pc == 0x15F46Cu) {
        ctx->pc = 0x15F470u;
        goto label_15f470;
    }
    ctx->pc = 0x15F468u;
    {
        const bool branch_taken_0x15f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f468) {
            ctx->pc = 0x15F4ACu;
            goto label_15f4ac;
        }
    }
    ctx->pc = 0x15F470u;
label_15f470:
    // 0x15f470: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15f474:
    // 0x15f474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f478:
    // 0x15f478: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f47c:
    // 0x15f47c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x15f47cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_15f480:
    // 0x15f480: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f484:
    // 0x15f484: 0x0  nop
    ctx->pc = 0x15f484u;
    // NOP
label_15f488:
    // 0x15f488: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_15f48c:
    if (ctx->pc == 0x15F48Cu) {
        ctx->pc = 0x15F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F488u;
        // 0x15f48c: 0x3c02479c  lui         $v0, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F490u;
        goto label_15f490;
    }
    ctx->pc = 0x15F488u;
    {
        const bool branch_taken_0x15f488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F488u;
        // 0x15f48c: 0x3c02479c  lui         $v0, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f488) {
            ctx->pc = 0x15F4ACu;
            goto label_15f4ac;
        }
    }
    ctx->pc = 0x15F490u;
label_15f490:
    // 0x15f490: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15f494:
    // 0x15f494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f498:
    // 0x15f498: 0x0  nop
    ctx->pc = 0x15f498u;
    // NOP
label_15f49c:
    // 0x15f49c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f4a0:
    // 0x15f4a0: 0x0  nop
    ctx->pc = 0x15f4a0u;
    // NOP
label_15f4a4:
    // 0x15f4a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_15f4a8:
    if (ctx->pc == 0x15F4A8u) {
        ctx->pc = 0x15F4ACu;
        goto label_15f4ac;
    }
    ctx->pc = 0x15F4A4u;
    {
        const bool branch_taken_0x15f4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f4a4) {
            ctx->pc = 0x15F4B8u;
            goto label_15f4b8;
        }
    }
    ctx->pc = 0x15F4ACu;
label_15f4ac:
    // 0x15f4ac: 0x0  nop
    ctx->pc = 0x15f4acu;
    // NOP
label_15f4b0:
    // 0x15f4b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_15f4b4:
    if (ctx->pc == 0x15F4B4u) {
        ctx->pc = 0x15F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B0u;
        // 0x15f4b4: 0xa2200005  sb          $zero, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4B8u;
        goto label_15f4b8;
    }
    ctx->pc = 0x15F4B0u;
    {
        const bool branch_taken_0x15f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B0u;
        // 0x15f4b4: 0xa2200005  sb          $zero, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4b0) {
            ctx->pc = 0x15F4C0u;
            goto label_15f4c0;
        }
    }
    ctx->pc = 0x15F4B8u;
label_15f4b8:
    // 0x15f4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f4bc:
    // 0x15f4bc: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x15f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_15f4c0:
    // 0x15f4c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15f4c4:
    // 0x15f4c4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x15f4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f4c8:
    // 0x15f4c8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_15f4cc:
    if (ctx->pc == 0x15F4CCu) {
        ctx->pc = 0x15F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C8u;
        // 0x15f4cc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4D0u;
        goto label_15f4d0;
    }
    ctx->pc = 0x15F4C8u;
    {
        const bool branch_taken_0x15f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C8u;
        // 0x15f4cc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4c8) {
            ctx->pc = 0x15F430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f430;
        }
    }
    ctx->pc = 0x15F4D0u;
label_15f4d0:
    // 0x15f4d0: 0xc057e9c  jal         func_15FA70
label_15f4d4:
    if (ctx->pc == 0x15F4D4u) {
        ctx->pc = 0x15F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D0u;
        // 0x15f4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4D8u;
        goto label_15f4d8;
    }
    ctx->pc = 0x15F4D0u;
    SET_GPR_U32(ctx, 31, 0x15F4D8u);
    ctx->pc = 0x15F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F4D0u;
    // 0x15f4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FA70u;
    { ctx->pc = 0x15fa70; return; }
    ctx->pc = 0x15F4D8u;
label_15f4d8:
    // 0x15f4d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15f4dc:
    if (ctx->pc == 0x15F4DCu) {
        ctx->pc = 0x15F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D8u;
        // 0x15f4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4E0u;
        goto label_15f4e0;
    }
    ctx->pc = 0x15F4D8u;
    {
        const bool branch_taken_0x15f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D8u;
        // 0x15f4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4d8) {
            ctx->pc = 0x15F4ECu;
            goto label_15f4ec;
        }
    }
    ctx->pc = 0x15F4E0u;
label_15f4e0:
    // 0x15f4e0: 0xc057dc4  jal         func_15F710
label_15f4e4:
    if (ctx->pc == 0x15F4E4u) {
        ctx->pc = 0x15F4E8u;
        goto label_15f4e8;
    }
    ctx->pc = 0x15F4E0u;
    SET_GPR_U32(ctx, 31, 0x15F4E8u);
    ctx->pc = 0x15F710u;
    { ctx->pc = 0x15f710; return; }
    ctx->pc = 0x15F4E8u;
label_15f4e8:
    // 0x15f4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f4ec:
    // 0x15f4ec: 0xc057d44  jal         func_15F510
label_15f4f0:
    if (ctx->pc == 0x15F4F0u) {
        ctx->pc = 0x15F4F4u;
        goto label_15f4f4;
    }
    ctx->pc = 0x15F4ECu;
    SET_GPR_U32(ctx, 31, 0x15F4F4u);
    ctx->pc = 0x15F510u;
    goto label_15f510;
    ctx->pc = 0x15F4F4u;
label_15f4f4:
    // 0x15f4f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f4f8:
    // 0x15f4f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15f4fc:
    // 0x15f4fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15f4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f500:
    // 0x15f500: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f504:
    // 0x15f504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15f504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f508:
    // 0x15f508: 0x3e00008  jr          $ra
label_15f50c:
    if (ctx->pc == 0x15F50Cu) {
        ctx->pc = 0x15F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F508u;
        // 0x15f50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F510u;
        goto label_15f510;
    }
    ctx->pc = 0x15F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F508u;
        // 0x15f50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F510u;
label_15f510:
    // 0x15f510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f514:
    // 0x15f514: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15f514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_15f518:
    // 0x15f518: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15f518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_15f51c:
    // 0x15f51c: 0x34634f10  ori         $v1, $v1, 0x4F10
    ctx->pc = 0x15f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20240);
label_15f520:
    // 0x15f520: 0x814821  addu        $t1, $a0, $at
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_15f524:
    // 0x15f524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f528:
    // 0x15f528: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15f52c:
    // 0x15f52c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15f52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f530:
    // 0x15f530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f534:
    // 0x15f534: 0x240e003c  addiu       $t6, $zero, 0x3C
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_15f538:
    // 0x15f538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f53c:
    // 0x15f53c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15f53cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15f540u;
    return;
}

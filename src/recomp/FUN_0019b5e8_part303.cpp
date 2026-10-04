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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part303(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22ed48u: goto label_22ed48;
        case 0x22ed4cu: goto label_22ed4c;
        case 0x22ed50u: goto label_22ed50;
        case 0x22ed54u: goto label_22ed54;
        case 0x22ed58u: goto label_22ed58;
        case 0x22ed5cu: goto label_22ed5c;
        case 0x22ed60u: goto label_22ed60;
        case 0x22ed64u: goto label_22ed64;
        case 0x22ed68u: goto label_22ed68;
        case 0x22ed6cu: goto label_22ed6c;
        case 0x22ed70u: goto label_22ed70;
        case 0x22ed74u: goto label_22ed74;
        case 0x22ed78u: goto label_22ed78;
        case 0x22ed7cu: goto label_22ed7c;
        case 0x22ed80u: goto label_22ed80;
        case 0x22ed84u: goto label_22ed84;
        case 0x22ed88u: goto label_22ed88;
        case 0x22ed8cu: goto label_22ed8c;
        case 0x22ed90u: goto label_22ed90;
        case 0x22ed94u: goto label_22ed94;
        case 0x22ed98u: goto label_22ed98;
        case 0x22ed9cu: goto label_22ed9c;
        case 0x22eda0u: goto label_22eda0;
        case 0x22eda4u: goto label_22eda4;
        case 0x22eda8u: goto label_22eda8;
        case 0x22edacu: goto label_22edac;
        case 0x22edb0u: goto label_22edb0;
        case 0x22edb4u: goto label_22edb4;
        case 0x22edb8u: goto label_22edb8;
        case 0x22edbcu: goto label_22edbc;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edc4u: goto label_22edc4;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edccu: goto label_22edcc;
        case 0x22edd0u: goto label_22edd0;
        case 0x22edd4u: goto label_22edd4;
        case 0x22edd8u: goto label_22edd8;
        case 0x22eddcu: goto label_22eddc;
        case 0x22ede0u: goto label_22ede0;
        case 0x22ede4u: goto label_22ede4;
        case 0x22ede8u: goto label_22ede8;
        case 0x22edecu: goto label_22edec;
        case 0x22edf0u: goto label_22edf0;
        case 0x22edf4u: goto label_22edf4;
        case 0x22edf8u: goto label_22edf8;
        case 0x22edfcu: goto label_22edfc;
        case 0x22ee00u: goto label_22ee00;
        case 0x22ee04u: goto label_22ee04;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee0cu: goto label_22ee0c;
        case 0x22ee10u: goto label_22ee10;
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee1cu: goto label_22ee1c;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ee24u: goto label_22ee24;
        case 0x22ee28u: goto label_22ee28;
        case 0x22ee2cu: goto label_22ee2c;
        case 0x22ee30u: goto label_22ee30;
        case 0x22ee34u: goto label_22ee34;
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee3cu: goto label_22ee3c;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee48u: goto label_22ee48;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee54u: goto label_22ee54;
        case 0x22ee58u: goto label_22ee58;
        case 0x22ee5cu: goto label_22ee5c;
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee64u: goto label_22ee64;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee6cu: goto label_22ee6c;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee74u: goto label_22ee74;
        case 0x22ee78u: goto label_22ee78;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee80u: goto label_22ee80;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee88u: goto label_22ee88;
        case 0x22ee8cu: goto label_22ee8c;
        case 0x22ee90u: goto label_22ee90;
        case 0x22ee94u: goto label_22ee94;
        case 0x22ee98u: goto label_22ee98;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eea0u: goto label_22eea0;
        case 0x22eea4u: goto label_22eea4;
        case 0x22eea8u: goto label_22eea8;
        case 0x22eeacu: goto label_22eeac;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eeb4u: goto label_22eeb4;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eebcu: goto label_22eebc;
        case 0x22eec0u: goto label_22eec0;
        case 0x22eec4u: goto label_22eec4;
        case 0x22eec8u: goto label_22eec8;
        case 0x22eeccu: goto label_22eecc;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eed4u: goto label_22eed4;
        case 0x22eed8u: goto label_22eed8;
        case 0x22eedcu: goto label_22eedc;
        case 0x22eee0u: goto label_22eee0;
        case 0x22eee4u: goto label_22eee4;
        case 0x22eee8u: goto label_22eee8;
        case 0x22eeecu: goto label_22eeec;
        case 0x22eef0u: goto label_22eef0;
        case 0x22eef4u: goto label_22eef4;
        case 0x22eef8u: goto label_22eef8;
        case 0x22eefcu: goto label_22eefc;
        case 0x22ef00u: goto label_22ef00;
        case 0x22ef04u: goto label_22ef04;
        case 0x22ef08u: goto label_22ef08;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef10u: goto label_22ef10;
        case 0x22ef14u: goto label_22ef14;
        case 0x22ef18u: goto label_22ef18;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef20u: goto label_22ef20;
        case 0x22ef24u: goto label_22ef24;
        case 0x22ef28u: goto label_22ef28;
        case 0x22ef2cu: goto label_22ef2c;
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef3cu: goto label_22ef3c;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef44u: goto label_22ef44;
        case 0x22ef48u: goto label_22ef48;
        case 0x22ef4cu: goto label_22ef4c;
        case 0x22ef50u: goto label_22ef50;
        case 0x22ef54u: goto label_22ef54;
        case 0x22ef58u: goto label_22ef58;
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22ef60u: goto label_22ef60;
        case 0x22ef64u: goto label_22ef64;
        case 0x22ef68u: goto label_22ef68;
        case 0x22ef6cu: goto label_22ef6c;
        case 0x22ef70u: goto label_22ef70;
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef78u: goto label_22ef78;
        case 0x22ef7cu: goto label_22ef7c;
        case 0x22ef80u: goto label_22ef80;
        case 0x22ef84u: goto label_22ef84;
        case 0x22ef88u: goto label_22ef88;
        case 0x22ef8cu: goto label_22ef8c;
        case 0x22ef90u: goto label_22ef90;
        case 0x22ef94u: goto label_22ef94;
        case 0x22ef98u: goto label_22ef98;
        case 0x22ef9cu: goto label_22ef9c;
        case 0x22efa0u: goto label_22efa0;
        case 0x22efa4u: goto label_22efa4;
        case 0x22efa8u: goto label_22efa8;
        case 0x22efacu: goto label_22efac;
        case 0x22efb0u: goto label_22efb0;
        case 0x22efb4u: goto label_22efb4;
        case 0x22efb8u: goto label_22efb8;
        case 0x22efbcu: goto label_22efbc;
        case 0x22efc0u: goto label_22efc0;
        case 0x22efc4u: goto label_22efc4;
        case 0x22efc8u: goto label_22efc8;
        case 0x22efccu: goto label_22efcc;
        case 0x22efd0u: goto label_22efd0;
        case 0x22efd4u: goto label_22efd4;
        case 0x22efd8u: goto label_22efd8;
        case 0x22efdcu: goto label_22efdc;
        case 0x22efe0u: goto label_22efe0;
        case 0x22efe4u: goto label_22efe4;
        case 0x22efe8u: goto label_22efe8;
        case 0x22efecu: goto label_22efec;
        case 0x22eff0u: goto label_22eff0;
        case 0x22eff4u: goto label_22eff4;
        case 0x22eff8u: goto label_22eff8;
        case 0x22effcu: goto label_22effc;
        case 0x22f000u: goto label_22f000;
        case 0x22f004u: goto label_22f004;
        case 0x22f008u: goto label_22f008;
        case 0x22f00cu: goto label_22f00c;
        case 0x22f010u: goto label_22f010;
        case 0x22f014u: goto label_22f014;
        case 0x22f018u: goto label_22f018;
        case 0x22f01cu: goto label_22f01c;
        case 0x22f020u: goto label_22f020;
        case 0x22f024u: goto label_22f024;
        case 0x22f028u: goto label_22f028;
        case 0x22f02cu: goto label_22f02c;
        case 0x22f030u: goto label_22f030;
        case 0x22f034u: goto label_22f034;
        case 0x22f038u: goto label_22f038;
        case 0x22f03cu: goto label_22f03c;
        case 0x22f040u: goto label_22f040;
        case 0x22f044u: goto label_22f044;
        case 0x22f048u: goto label_22f048;
        case 0x22f04cu: goto label_22f04c;
        case 0x22f050u: goto label_22f050;
        case 0x22f054u: goto label_22f054;
        case 0x22f058u: goto label_22f058;
        case 0x22f05cu: goto label_22f05c;
        case 0x22f060u: goto label_22f060;
        case 0x22f064u: goto label_22f064;
        case 0x22f068u: goto label_22f068;
        case 0x22f06cu: goto label_22f06c;
        case 0x22f070u: goto label_22f070;
        case 0x22f074u: goto label_22f074;
        case 0x22f078u: goto label_22f078;
        case 0x22f07cu: goto label_22f07c;
        case 0x22f080u: goto label_22f080;
        case 0x22f084u: goto label_22f084;
        case 0x22f088u: goto label_22f088;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f090u: goto label_22f090;
        case 0x22f094u: goto label_22f094;
        case 0x22f098u: goto label_22f098;
        case 0x22f09cu: goto label_22f09c;
        case 0x22f0a0u: goto label_22f0a0;
        case 0x22f0a4u: goto label_22f0a4;
        case 0x22f0a8u: goto label_22f0a8;
        case 0x22f0acu: goto label_22f0ac;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f0b4u: goto label_22f0b4;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0bcu: goto label_22f0bc;
        case 0x22f0c0u: goto label_22f0c0;
        case 0x22f0c4u: goto label_22f0c4;
        case 0x22f0c8u: goto label_22f0c8;
        case 0x22f0ccu: goto label_22f0cc;
        case 0x22f0d0u: goto label_22f0d0;
        case 0x22f0d4u: goto label_22f0d4;
        case 0x22f0d8u: goto label_22f0d8;
        case 0x22f0dcu: goto label_22f0dc;
        case 0x22f0e0u: goto label_22f0e0;
        case 0x22f0e4u: goto label_22f0e4;
        case 0x22f0e8u: goto label_22f0e8;
        case 0x22f0ecu: goto label_22f0ec;
        case 0x22f0f0u: goto label_22f0f0;
        case 0x22f0f4u: goto label_22f0f4;
        case 0x22f0f8u: goto label_22f0f8;
        case 0x22f0fcu: goto label_22f0fc;
        case 0x22f100u: goto label_22f100;
        case 0x22f104u: goto label_22f104;
        case 0x22f108u: goto label_22f108;
        case 0x22f10cu: goto label_22f10c;
        case 0x22f110u: goto label_22f110;
        case 0x22f114u: goto label_22f114;
        case 0x22f118u: goto label_22f118;
        case 0x22f11cu: goto label_22f11c;
        case 0x22f120u: goto label_22f120;
        case 0x22f124u: goto label_22f124;
        case 0x22f128u: goto label_22f128;
        case 0x22f12cu: goto label_22f12c;
        case 0x22f130u: goto label_22f130;
        case 0x22f134u: goto label_22f134;
        case 0x22f138u: goto label_22f138;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f140u: goto label_22f140;
        case 0x22f144u: goto label_22f144;
        case 0x22f148u: goto label_22f148;
        case 0x22f14cu: goto label_22f14c;
        case 0x22f150u: goto label_22f150;
        case 0x22f154u: goto label_22f154;
        case 0x22f158u: goto label_22f158;
        case 0x22f15cu: goto label_22f15c;
        case 0x22f160u: goto label_22f160;
        case 0x22f164u: goto label_22f164;
        case 0x22f168u: goto label_22f168;
        case 0x22f16cu: goto label_22f16c;
        case 0x22f170u: goto label_22f170;
        case 0x22f174u: goto label_22f174;
        case 0x22f178u: goto label_22f178;
        case 0x22f17cu: goto label_22f17c;
        case 0x22f180u: goto label_22f180;
        case 0x22f184u: goto label_22f184;
        case 0x22f188u: goto label_22f188;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f190u: goto label_22f190;
        case 0x22f194u: goto label_22f194;
        case 0x22f198u: goto label_22f198;
        case 0x22f19cu: goto label_22f19c;
        case 0x22f1a0u: goto label_22f1a0;
        case 0x22f1a4u: goto label_22f1a4;
        case 0x22f1a8u: goto label_22f1a8;
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1b0u: goto label_22f1b0;
        case 0x22f1b4u: goto label_22f1b4;
        case 0x22f1b8u: goto label_22f1b8;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1c0u: goto label_22f1c0;
        case 0x22f1c4u: goto label_22f1c4;
        case 0x22f1c8u: goto label_22f1c8;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d0u: goto label_22f1d0;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f1d8u: goto label_22f1d8;
        case 0x22f1dcu: goto label_22f1dc;
        case 0x22f1e0u: goto label_22f1e0;
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1e8u: goto label_22f1e8;
        case 0x22f1ecu: goto label_22f1ec;
        case 0x22f1f0u: goto label_22f1f0;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1f8u: goto label_22f1f8;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f200u: goto label_22f200;
        case 0x22f204u: goto label_22f204;
        case 0x22f208u: goto label_22f208;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f210u: goto label_22f210;
        case 0x22f214u: goto label_22f214;
        case 0x22f218u: goto label_22f218;
        case 0x22f21cu: goto label_22f21c;
        case 0x22f220u: goto label_22f220;
        case 0x22f224u: goto label_22f224;
        case 0x22f228u: goto label_22f228;
        case 0x22f22cu: goto label_22f22c;
        case 0x22f230u: goto label_22f230;
        case 0x22f234u: goto label_22f234;
        case 0x22f238u: goto label_22f238;
        case 0x22f23cu: goto label_22f23c;
        case 0x22f240u: goto label_22f240;
        case 0x22f244u: goto label_22f244;
        case 0x22f248u: goto label_22f248;
        case 0x22f24cu: goto label_22f24c;
        case 0x22f250u: goto label_22f250;
        case 0x22f254u: goto label_22f254;
        case 0x22f258u: goto label_22f258;
        case 0x22f25cu: goto label_22f25c;
        case 0x22f260u: goto label_22f260;
        case 0x22f264u: goto label_22f264;
        case 0x22f268u: goto label_22f268;
        case 0x22f26cu: goto label_22f26c;
        case 0x22f270u: goto label_22f270;
        case 0x22f274u: goto label_22f274;
        case 0x22f278u: goto label_22f278;
        case 0x22f27cu: goto label_22f27c;
        case 0x22f280u: goto label_22f280;
        case 0x22f284u: goto label_22f284;
        case 0x22f288u: goto label_22f288;
        case 0x22f28cu: goto label_22f28c;
        case 0x22f290u: goto label_22f290;
        case 0x22f294u: goto label_22f294;
        case 0x22f298u: goto label_22f298;
        case 0x22f29cu: goto label_22f29c;
        case 0x22f2a0u: goto label_22f2a0;
        case 0x22f2a4u: goto label_22f2a4;
        case 0x22f2a8u: goto label_22f2a8;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f2b0u: goto label_22f2b0;
        case 0x22f2b4u: goto label_22f2b4;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2bcu: goto label_22f2bc;
        case 0x22f2c0u: goto label_22f2c0;
        case 0x22f2c4u: goto label_22f2c4;
        case 0x22f2c8u: goto label_22f2c8;
        case 0x22f2ccu: goto label_22f2cc;
        case 0x22f2d0u: goto label_22f2d0;
        case 0x22f2d4u: goto label_22f2d4;
        case 0x22f2d8u: goto label_22f2d8;
        case 0x22f2dcu: goto label_22f2dc;
        case 0x22f2e0u: goto label_22f2e0;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f2e8u: goto label_22f2e8;
        case 0x22f2ecu: goto label_22f2ec;
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f2f4u: goto label_22f2f4;
        case 0x22f2f8u: goto label_22f2f8;
        case 0x22f2fcu: goto label_22f2fc;
        case 0x22f300u: goto label_22f300;
        case 0x22f304u: goto label_22f304;
        case 0x22f308u: goto label_22f308;
        case 0x22f30cu: goto label_22f30c;
        case 0x22f310u: goto label_22f310;
        case 0x22f314u: goto label_22f314;
        case 0x22f318u: goto label_22f318;
        case 0x22f31cu: goto label_22f31c;
        case 0x22f320u: goto label_22f320;
        case 0x22f324u: goto label_22f324;
        case 0x22f328u: goto label_22f328;
        case 0x22f32cu: goto label_22f32c;
        case 0x22f330u: goto label_22f330;
        case 0x22f334u: goto label_22f334;
        case 0x22f338u: goto label_22f338;
        case 0x22f33cu: goto label_22f33c;
        case 0x22f340u: goto label_22f340;
        case 0x22f344u: goto label_22f344;
        case 0x22f348u: goto label_22f348;
        case 0x22f34cu: goto label_22f34c;
        case 0x22f350u: goto label_22f350;
        case 0x22f354u: goto label_22f354;
        case 0x22f358u: goto label_22f358;
        case 0x22f35cu: goto label_22f35c;
        case 0x22f360u: goto label_22f360;
        case 0x22f364u: goto label_22f364;
        case 0x22f368u: goto label_22f368;
        case 0x22f36cu: goto label_22f36c;
        case 0x22f370u: goto label_22f370;
        case 0x22f374u: goto label_22f374;
        case 0x22f378u: goto label_22f378;
        case 0x22f37cu: goto label_22f37c;
        case 0x22f380u: goto label_22f380;
        case 0x22f384u: goto label_22f384;
        case 0x22f388u: goto label_22f388;
        case 0x22f38cu: goto label_22f38c;
        case 0x22f390u: goto label_22f390;
        case 0x22f394u: goto label_22f394;
        case 0x22f398u: goto label_22f398;
        case 0x22f39cu: goto label_22f39c;
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3a4u: goto label_22f3a4;
        case 0x22f3a8u: goto label_22f3a8;
        case 0x22f3acu: goto label_22f3ac;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3b4u: goto label_22f3b4;
        case 0x22f3b8u: goto label_22f3b8;
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3c0u: goto label_22f3c0;
        case 0x22f3c4u: goto label_22f3c4;
        case 0x22f3c8u: goto label_22f3c8;
        case 0x22f3ccu: goto label_22f3cc;
        case 0x22f3d0u: goto label_22f3d0;
        case 0x22f3d4u: goto label_22f3d4;
        case 0x22f3d8u: goto label_22f3d8;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3e0u: goto label_22f3e0;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f3e8u: goto label_22f3e8;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f4u: goto label_22f3f4;
        case 0x22f3f8u: goto label_22f3f8;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f400u: goto label_22f400;
        case 0x22f404u: goto label_22f404;
        case 0x22f408u: goto label_22f408;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f410u: goto label_22f410;
        case 0x22f414u: goto label_22f414;
        case 0x22f418u: goto label_22f418;
        case 0x22f41cu: goto label_22f41c;
        case 0x22f420u: goto label_22f420;
        case 0x22f424u: goto label_22f424;
        case 0x22f428u: goto label_22f428;
        case 0x22f42cu: goto label_22f42c;
        case 0x22f430u: goto label_22f430;
        case 0x22f434u: goto label_22f434;
        case 0x22f438u: goto label_22f438;
        case 0x22f43cu: goto label_22f43c;
        case 0x22f440u: goto label_22f440;
        case 0x22f444u: goto label_22f444;
        case 0x22f448u: goto label_22f448;
        case 0x22f44cu: goto label_22f44c;
        case 0x22f450u: goto label_22f450;
        case 0x22f454u: goto label_22f454;
        case 0x22f458u: goto label_22f458;
        case 0x22f45cu: goto label_22f45c;
        case 0x22f460u: goto label_22f460;
        case 0x22f464u: goto label_22f464;
        case 0x22f468u: goto label_22f468;
        case 0x22f46cu: goto label_22f46c;
        case 0x22f470u: goto label_22f470;
        case 0x22f474u: goto label_22f474;
        case 0x22f478u: goto label_22f478;
        case 0x22f47cu: goto label_22f47c;
        case 0x22f480u: goto label_22f480;
        case 0x22f484u: goto label_22f484;
        case 0x22f488u: goto label_22f488;
        case 0x22f48cu: goto label_22f48c;
        case 0x22f490u: goto label_22f490;
        case 0x22f494u: goto label_22f494;
        case 0x22f498u: goto label_22f498;
        case 0x22f49cu: goto label_22f49c;
        case 0x22f4a0u: goto label_22f4a0;
        case 0x22f4a4u: goto label_22f4a4;
        case 0x22f4a8u: goto label_22f4a8;
        case 0x22f4acu: goto label_22f4ac;
        case 0x22f4b0u: goto label_22f4b0;
        case 0x22f4b4u: goto label_22f4b4;
        case 0x22f4b8u: goto label_22f4b8;
        case 0x22f4bcu: goto label_22f4bc;
        case 0x22f4c0u: goto label_22f4c0;
        case 0x22f4c4u: goto label_22f4c4;
        case 0x22f4c8u: goto label_22f4c8;
        case 0x22f4ccu: goto label_22f4cc;
        case 0x22f4d0u: goto label_22f4d0;
        case 0x22f4d4u: goto label_22f4d4;
        case 0x22f4d8u: goto label_22f4d8;
        case 0x22f4dcu: goto label_22f4dc;
        case 0x22f4e0u: goto label_22f4e0;
        case 0x22f4e4u: goto label_22f4e4;
        case 0x22f4e8u: goto label_22f4e8;
        case 0x22f4ecu: goto label_22f4ec;
        case 0x22f4f0u: goto label_22f4f0;
        case 0x22f4f4u: goto label_22f4f4;
        case 0x22f4f8u: goto label_22f4f8;
        case 0x22f4fcu: goto label_22f4fc;
        case 0x22f500u: goto label_22f500;
        case 0x22f504u: goto label_22f504;
        case 0x22f508u: goto label_22f508;
        case 0x22f50cu: goto label_22f50c;
        case 0x22f510u: goto label_22f510;
        case 0x22f514u: goto label_22f514;
        default: return;
    }

label_22ed48:
    // 0x22ed48: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
label_22ed4c:
    // 0x22ed4c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x22ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_22ed50:
    // 0x22ed50: 0x906401c0  lbu         $a0, 0x1C0($v1)
    ctx->pc = 0x22ed50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
label_22ed54:
    // 0x22ed54: 0x247001c0  addiu       $s0, $v1, 0x1C0
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_22ed58:
    // 0x22ed58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_22ed5c:
    // 0x22ed5c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_22ed60:
    if (ctx->pc == 0x22ED60u) {
        ctx->pc = 0x22ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED5Cu;
        // 0x22ed60: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED64u;
        goto label_22ed64;
    }
    ctx->pc = 0x22ED5Cu;
    {
        const bool branch_taken_0x22ed5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED5Cu;
        // 0x22ed60: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed5c) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED64u;
label_22ed64:
    // 0x22ed64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22ed68:
    if (ctx->pc == 0x22ED68u) {
        ctx->pc = 0x22ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED64u;
        // 0x22ed68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED6Cu;
        goto label_22ed6c;
    }
    ctx->pc = 0x22ED64u;
    {
        const bool branch_taken_0x22ed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED64u;
        // 0x22ed68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed64) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED6Cu;
label_22ed6c:
    // 0x22ed6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_22ed70:
    if (ctx->pc == 0x22ED70u) {
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED74u;
        goto label_22ed74;
    }
    ctx->pc = 0x22ED6Cu;
    {
        const bool branch_taken_0x22ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed6c) {
            ctx->pc = 0x22ED8Cu;
            goto label_22ed8c;
        }
    }
    ctx->pc = 0x22ED74u;
label_22ed74:
    // 0x22ed74: 0x0  nop
    ctx->pc = 0x22ed74u;
    // NOP
label_22ed78:
    // 0x22ed78: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_22ed7c:
    // 0x22ed7c: 0xc05ff64  jal         func_17FD90
label_22ed80:
    if (ctx->pc == 0x22ED80u) {
        ctx->pc = 0x22ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED7Cu;
        // 0x22ed80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED84u;
        goto label_22ed84;
    }
    ctx->pc = 0x22ED7Cu;
    SET_GPR_U32(ctx, 31, 0x22ED84u);
    ctx->pc = 0x22ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED7Cu;
    // 0x22ed80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22ED7Cu, 0x22ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED84u;
label_22ed84:
    // 0x22ed84: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_22ed88:
    // 0x22ed88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22ed8c:
    // 0x22ed8c: 0x0  nop
    ctx->pc = 0x22ed8cu;
    // NOP
label_22ed90:
    // 0x22ed90: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x22ed90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_22ed94:
    // 0x22ed94: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22ed94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22ed98:
    // 0x22ed98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_22ed9c:
    if (ctx->pc == 0x22ED9Cu) {
        ctx->pc = 0x22EDA0u;
        goto label_22eda0;
    }
    ctx->pc = 0x22ED98u;
    {
        const bool branch_taken_0x22ed98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed98) {
            ctx->pc = 0x22ED74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ed74;
        }
    }
    ctx->pc = 0x22EDA0u;
label_22eda0:
    // 0x22eda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22eda4:
    // 0x22eda4: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x22eda4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_22eda8:
    // 0x22eda8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_22edac:
    if (ctx->pc == 0x22EDACu) {
        ctx->pc = 0x22EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDA8u;
        // 0x22edac: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDB0u;
        goto label_22edb0;
    }
    ctx->pc = 0x22EDA8u;
    {
        const bool branch_taken_0x22eda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDA8u;
        // 0x22edac: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eda8) {
            ctx->pc = 0x22ED44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22ed44; return; }
        }
    }
    ctx->pc = 0x22EDB0u;
label_22edb0:
    // 0x22edb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22edb4:
    // 0x22edb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22edb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22edb8:
    // 0x22edb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22edb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22edbc:
    // 0x22edbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22edbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22edc0:
    // 0x22edc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22edc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22edc4:
    // 0x22edc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22edc8:
    // 0x22edc8: 0x3e00008  jr          $ra
label_22edcc:
    if (ctx->pc == 0x22EDCCu) {
        ctx->pc = 0x22EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDC8u;
        // 0x22edcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDD0u;
        goto label_22edd0;
    }
    ctx->pc = 0x22EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDC8u;
        // 0x22edcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EDD0u;
label_22edd0:
    // 0x22edd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22edd4:
    // 0x22edd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22edd8:
    // 0x22edd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22eddc:
    // 0x22eddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ede0:
    // 0x22ede0: 0xc066e44  jal         func_19B910
label_22ede4:
    if (ctx->pc == 0x22EDE4u) {
        ctx->pc = 0x22EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE0u;
        // 0x22ede4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDE8u;
        goto label_22ede8;
    }
    ctx->pc = 0x22EDE0u;
    SET_GPR_U32(ctx, 31, 0x22EDE8u);
    ctx->pc = 0x22EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDE0u;
    // 0x22ede4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22EDE8u;
label_22ede8:
    // 0x22ede8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22edec:
    // 0x22edec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22edf0:
    // 0x22edf0: 0xc066e96  jal         func_19BA58
label_22edf4:
    if (ctx->pc == 0x22EDF4u) {
        ctx->pc = 0x22EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDF0u;
        // 0x22edf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDF8u;
        goto label_22edf8;
    }
    ctx->pc = 0x22EDF0u;
    SET_GPR_U32(ctx, 31, 0x22EDF8u);
    ctx->pc = 0x22EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDF0u;
    // 0x22edf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22EDF8u;
label_22edf8:
    // 0x22edf8: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22edfc:
    // 0x22edfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22ee00:
    // 0x22ee00: 0xc066e6c  jal         func_19B9B0
label_22ee04:
    if (ctx->pc == 0x22EE04u) {
        ctx->pc = 0x22EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE00u;
        // 0x22ee04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE08u;
        goto label_22ee08;
    }
    ctx->pc = 0x22EE00u;
    SET_GPR_U32(ctx, 31, 0x22EE08u);
    ctx->pc = 0x22EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE00u;
    // 0x22ee04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22EE08u;
label_22ee08:
    // 0x22ee08: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22ee0c:
    // 0x22ee0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22ee10:
    // 0x22ee10: 0xc066ec0  jal         func_19BB00
label_22ee14:
    if (ctx->pc == 0x22EE14u) {
        ctx->pc = 0x22EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE10u;
        // 0x22ee14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE18u;
        goto label_22ee18;
    }
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE10u;
    // 0x22ee14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee1c:
    // 0x22ee1c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x22ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22ee20:
    // 0x22ee20: 0xc066e1a  jal         func_19B868
label_22ee24:
    if (ctx->pc == 0x22EE24u) {
        ctx->pc = 0x22EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE20u;
        // 0x22ee24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE28u;
        goto label_22ee28;
    }
    ctx->pc = 0x22EE20u;
    SET_GPR_U32(ctx, 31, 0x22EE28u);
    ctx->pc = 0x22EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE20u;
    // 0x22ee24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22EE28u;
label_22ee28:
    // 0x22ee28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ee2c:
    // 0x22ee2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ee30:
    // 0x22ee30: 0x3e00008  jr          $ra
label_22ee34:
    if (ctx->pc == 0x22EE34u) {
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE38u;
        goto label_22ee38;
    }
    ctx->pc = 0x22EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE38u;
label_22ee38:
    // 0x22ee38: 0x0  nop
    ctx->pc = 0x22ee38u;
    // NOP
label_22ee3c:
    // 0x22ee3c: 0x0  nop
    ctx->pc = 0x22ee3cu;
    // NOP
label_22ee40:
    // 0x22ee40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22ee44:
    // 0x22ee44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ee48:
    // 0x22ee48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22ee4c:
    // 0x22ee4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22ee50:
    // 0x22ee50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ee54:
    // 0x22ee54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22ee54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_22ee58:
    // 0x22ee58: 0xc066e44  jal         func_19B910
label_22ee5c:
    if (ctx->pc == 0x22EE5Cu) {
        ctx->pc = 0x22EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE58u;
        // 0x22ee5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE60u;
        goto label_22ee60;
    }
    ctx->pc = 0x22EE58u;
    SET_GPR_U32(ctx, 31, 0x22EE60u);
    ctx->pc = 0x22EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE58u;
    // 0x22ee5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22EE60u;
label_22ee60:
    // 0x22ee60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22ee64:
    // 0x22ee64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ee64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22ee68:
    // 0x22ee68: 0xc066ec0  jal         func_19BB00
label_22ee6c:
    if (ctx->pc == 0x22EE6Cu) {
        ctx->pc = 0x22EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE68u;
        // 0x22ee6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE70u;
        goto label_22ee70;
    }
    ctx->pc = 0x22EE68u;
    SET_GPR_U32(ctx, 31, 0x22EE70u);
    ctx->pc = 0x22EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE68u;
    // 0x22ee6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22EE70u;
label_22ee70:
    // 0x22ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee74:
    // 0x22ee74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee78:
    // 0x22ee78: 0xc066d7a  jal         func_19B5E8
label_22ee7c:
    if (ctx->pc == 0x22EE7Cu) {
        ctx->pc = 0x22EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE78u;
        // 0x22ee7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE80u;
        goto label_22ee80;
    }
    ctx->pc = 0x22EE78u;
    SET_GPR_U32(ctx, 31, 0x22EE80u);
    ctx->pc = 0x22EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE78u;
    // 0x22ee7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22EE80u;
label_22ee80:
    // 0x22ee80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ee84:
    // 0x22ee84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22ee88:
    // 0x22ee88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ee88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ee8c:
    // 0x22ee8c: 0x3e00008  jr          $ra
label_22ee90:
    if (ctx->pc == 0x22EE90u) {
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE94u;
        goto label_22ee94;
    }
    ctx->pc = 0x22EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE94u;
label_22ee94:
    // 0x22ee94: 0x0  nop
    ctx->pc = 0x22ee94u;
    // NOP
label_22ee98:
    // 0x22ee98: 0x0  nop
    ctx->pc = 0x22ee98u;
    // NOP
label_22ee9c:
    // 0x22ee9c: 0x0  nop
    ctx->pc = 0x22ee9cu;
    // NOP
label_22eea0:
    // 0x22eea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22eea4:
    // 0x22eea4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22eea8:
    // 0x22eea8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22eeac:
    // 0x22eeac: 0x0  nop
    ctx->pc = 0x22eeacu;
    // NOP
label_22eeb0:
    // 0x22eeb0: 0x3e00008  jr          $ra
label_22eeb4:
    if (ctx->pc == 0x22EEB4u) {
        ctx->pc = 0x22EEB8u;
        goto label_22eeb8;
    }
    ctx->pc = 0x22EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EEB8u;
label_22eeb8:
    // 0x22eeb8: 0x0  nop
    ctx->pc = 0x22eeb8u;
    // NOP
label_22eebc:
    // 0x22eebc: 0x0  nop
    ctx->pc = 0x22eebcu;
    // NOP
label_22eec0:
    // 0x22eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22eec4:
    // 0x22eec4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22eec8:
    // 0x22eec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22eecc:
    // 0x22eecc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22eed0:
    // 0x22eed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22eed4:
    // 0x22eed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22eed8:
    // 0x22eed8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22eedc:
    // 0x22eedc: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_22eee0:
    if (ctx->pc == 0x22EEE0u) {
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEDCu;
        // 0x22eee0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEE4u;
        goto label_22eee4;
    }
    ctx->pc = 0x22EEDCu;
    {
        const bool branch_taken_0x22eedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEDCu;
        // 0x22eee0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eedc) {
            ctx->pc = 0x22EF7Cu;
            goto label_22ef7c;
        }
    }
    ctx->pc = 0x22EEE4u;
label_22eee4:
    // 0x22eee4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_22eee8:
    // 0x22eee8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x22eee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_22eeec:
    // 0x22eeec: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22eef0:
    // 0x22eef0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_22eef4:
    if (ctx->pc == 0x22EEF4u) {
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0x2484a2b0  addiu       $a0, $a0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEF8u;
        goto label_22eef8;
    }
    ctx->pc = 0x22EEF0u;
    {
        const bool branch_taken_0x22eef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0x2484a2b0  addiu       $a0, $a0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef0) {
            ctx->pc = 0x22EF0Cu;
            goto label_22ef0c;
        }
    }
    ctx->pc = 0x22EEF8u;
label_22eef8:
    // 0x22eef8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_22eefc:
    // 0x22eefc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22ef00:
    if (ctx->pc == 0x22EF00u) {
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF04u;
        goto label_22ef04;
    }
    ctx->pc = 0x22EEFCu;
    {
        const bool branch_taken_0x22eefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eefc) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF04u;
label_22ef04:
    // 0x22ef04: 0x10000002  b           . + 4 + (0x2 << 2)
label_22ef08:
    if (ctx->pc == 0x22EF08u) {
        ctx->pc = 0x22EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF04u;
        // 0x22ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF0Cu;
        goto label_22ef0c;
    }
    ctx->pc = 0x22EF04u;
    {
        const bool branch_taken_0x22ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF04u;
        // 0x22ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef04) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF0Cu;
label_22ef0c:
    // 0x22ef0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef10:
    // 0x22ef10: 0xa0820234  sb          $v0, 0x234($a0)
    ctx->pc = 0x22ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 564), (uint8_t)GPR_U32(ctx, 2));
label_22ef14:
    // 0x22ef14: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_22ef18:
    // 0x22ef18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22ef1c:
    // 0x22ef1c: 0xa0800245  sb          $zero, 0x245($a0)
    ctx->pc = 0x22ef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 581), (uint8_t)GPR_U32(ctx, 0));
label_22ef20:
    // 0x22ef20: 0xa0820232  sb          $v0, 0x232($a0)
    ctx->pc = 0x22ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 562), (uint8_t)GPR_U32(ctx, 2));
label_22ef24:
    // 0x22ef24: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_22ef28:
    // 0x22ef28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ef28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef2c:
    // 0x22ef2c: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x22ef2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
label_22ef30:
    // 0x22ef30: 0xc08f0cc  jal         func_23C330
label_22ef34:
    if (ctx->pc == 0x22EF34u) {
        ctx->pc = 0x22EF38u;
        goto label_22ef38;
    }
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ef3c:
    // 0x22ef3c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22ef40:
    // 0x22ef40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ef40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ef44:
    // 0x22ef44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22ef48:
    // 0x22ef48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ef48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ef4c:
    // 0x22ef4c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22ef50:
    // 0x22ef50: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22ef50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_22ef54:
    // 0x22ef54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22ef54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ef58:
    // 0x22ef58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22ef58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ef5c:
    // 0x22ef5c: 0x0  nop
    ctx->pc = 0x22ef5cu;
    // NOP
label_22ef60:
    // 0x22ef60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22ef60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22ef64:
    // 0x22ef64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ef64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22ef68:
    // 0x22ef68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x22ef68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_22ef6c:
    // 0x22ef6c: 0x0  nop
    ctx->pc = 0x22ef6cu;
    // NOP
label_22ef70:
    // 0x22ef70: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x22ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_22ef74:
    // 0x22ef74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_22ef78:
    if (ctx->pc == 0x22EF78u) {
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF7Cu;
        goto label_22ef7c;
    }
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ef80:
    // 0x22ef80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ef80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ef84:
    // 0x22ef84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ef88:
    // 0x22ef88: 0x3e00008  jr          $ra
label_22ef8c:
    if (ctx->pc == 0x22EF8Cu) {
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF90u;
        goto label_22ef90;
    }
    ctx->pc = 0x22EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF90u;
label_22ef90:
    // 0x22ef90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22ef94:
    // 0x22ef94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22ef98:
    // 0x22ef98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ef9c:
    // 0x22ef9c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22efa0:
    // 0x22efa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22efa4:
    // 0x22efa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22efa8:
    // 0x22efa8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22efa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22efac:
    // 0x22efac: 0x1483004c  bne         $a0, $v1, . + 4 + (0x4C << 2)
label_22efb0:
    if (ctx->pc == 0x22EFB0u) {
        ctx->pc = 0x22EFB4u;
        goto label_22efb4;
    }
    ctx->pc = 0x22EFACu;
    {
        const bool branch_taken_0x22efac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22efac) {
            ctx->pc = 0x22F0E0u;
            goto label_22f0e0;
        }
    }
    ctx->pc = 0x22EFB4u;
label_22efb4:
    // 0x22efb4: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_22efb8:
    // 0x22efb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22efbc:
    // 0x22efbc: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22efbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_22efc0:
    // 0x22efc0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_22efc4:
    // 0x22efc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22efc8:
    // 0x22efc8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
label_22efcc:
    // 0x22efcc: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
label_22efd0:
    // 0x22efd0: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x22efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_22efd4:
    // 0x22efd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22efd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22efd8:
    // 0x22efd8: 0x0  nop
    ctx->pc = 0x22efd8u;
    // NOP
label_22efdc:
    // 0x22efdc: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x22efdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_22efe0:
    // 0x22efe0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22efe4:
    if (ctx->pc == 0x22EFE4u) {
        ctx->pc = 0x22EFE8u;
        goto label_22efe8;
    }
    ctx->pc = 0x22EFE0u;
    {
        const bool branch_taken_0x22efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22efe0) {
            ctx->pc = 0x22F01Cu;
            goto label_22f01c;
        }
    }
    ctx->pc = 0x22EFE8u;
label_22efe8:
    // 0x22efe8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_22efec:
    // 0x22efec: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x22efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22eff0:
    // 0x22eff0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22eff4:
    // 0x22eff4: 0xc4640150  lwc1        $f4, 0x150($v1)
    ctx->pc = 0x22eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22eff8:
    // 0x22eff8: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x22eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22effc:
    // 0x22effc: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x22effcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_22f000:
    // 0x22f000: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22f000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_22f004:
    // 0x22f004: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x22f004u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_22f008:
    // 0x22f008: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22f008u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_22f00c:
    // 0x22f00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22f00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22f010:
    // 0x22f010: 0x0  nop
    ctx->pc = 0x22f010u;
    // NOP
label_22f014:
    // 0x22f014: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22f018:
    if (ctx->pc == 0x22F018u) {
        ctx->pc = 0x22F01Cu;
        goto label_22f01c;
    }
    ctx->pc = 0x22F014u;
    {
        const bool branch_taken_0x22f014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f014) {
            ctx->pc = 0x22F030u;
            goto label_22f030;
        }
    }
    ctx->pc = 0x22F01Cu;
label_22f01c:
    // 0x22f01c: 0x0  nop
    ctx->pc = 0x22f01cu;
    // NOP
label_22f020:
    // 0x22f020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22f024:
    // 0x22f024: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22f024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f028:
    // 0x22f028: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_22f02c:
    if (ctx->pc == 0x22F02Cu) {
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F030u;
        goto label_22f030;
    }
    ctx->pc = 0x22F028u;
    {
        const bool branch_taken_0x22f028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f028) {
            ctx->pc = 0x22EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22efd8;
        }
    }
    ctx->pc = 0x22F030u;
label_22f030:
    // 0x22f030: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x22f030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f034:
    // 0x22f034: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_22f038:
    if (ctx->pc == 0x22F038u) {
        ctx->pc = 0x22F03Cu;
        goto label_22f03c;
    }
    ctx->pc = 0x22F034u;
    {
        const bool branch_taken_0x22f034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f034) {
            ctx->pc = 0x22F0CCu;
            goto label_22f0cc;
        }
    }
    ctx->pc = 0x22F03Cu;
label_22f03c:
    // 0x22f03c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22f040:
    // 0x22f040: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_22f044:
    // 0x22f044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22f048:
    // 0x22f048: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22f048u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_22f04c:
    // 0x22f04c: 0x0  nop
    ctx->pc = 0x22f04cu;
    // NOP
label_22f050:
    // 0x22f050: 0x0  nop
    ctx->pc = 0x22f050u;
    // NOP
label_22f054:
    // 0x22f054: 0x1810  mfhi        $v1
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_22f058:
    // 0x22f058: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_22f05c:
    if (ctx->pc == 0x22F05Cu) {
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F058u;
        // 0x22f05c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F060u;
        goto label_22f060;
    }
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F058u;
        // 0x22f05c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F0CCu;
            goto label_22f0cc;
        }
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_22f064:
    // 0x22f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f068:
    // 0x22f068: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_22f06c:
    // 0x22f06c: 0x24c6a2b0  addiu       $a2, $a2, -0x5D50
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943408));
label_22f070:
    // 0x22f070: 0xc07a518  jal         func_1E9460
label_22f074:
    if (ctx->pc == 0x22F074u) {
        ctx->pc = 0x22F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F070u;
        // 0x22f074: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F078u;
        goto label_22f078;
    }
    ctx->pc = 0x22F070u;
    SET_GPR_U32(ctx, 31, 0x22F078u);
    ctx->pc = 0x22F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F070u;
    // 0x22f074: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9460u;
    { ctx->pc = 0x1e9460; return; }
    ctx->pc = 0x22F078u;
label_22f078:
    // 0x22f078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22f07c:
    // 0x22f07c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22f080:
    // 0x22f080: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_22f084:
    // 0x22f084: 0xc05ae1c  jal         func_16B870
label_22f088:
    if (ctx->pc == 0x22F088u) {
        ctx->pc = 0x22F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F084u;
        // 0x22f088: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F08Cu;
        goto label_22f08c;
    }
    ctx->pc = 0x22F084u;
    SET_GPR_U32(ctx, 31, 0x22F08Cu);
    ctx->pc = 0x22F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F084u;
    // 0x22f088: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x22F084u, 0x22F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F08Cu;
label_22f08c:
    // 0x22f08c: 0xc08f0cc  jal         func_23C330
label_22f090:
    if (ctx->pc == 0x22F090u) {
        ctx->pc = 0x22F094u;
        goto label_22f094;
    }
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22f098:
    // 0x22f098: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_22f09c:
    // 0x22f09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f0a0:
    // 0x22f0a0: 0x0  nop
    ctx->pc = 0x22f0a0u;
    // NOP
label_22f0a4:
    // 0x22f0a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22f0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22f0a8:
    // 0x22f0a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22f0ac:
    // 0x22f0ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22f0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22f0b0:
    // 0x22f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f0b4:
    // 0x22f0b4: 0x0  nop
    ctx->pc = 0x22f0b4u;
    // NOP
label_22f0b8:
    // 0x22f0b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22f0b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22f0bc:
    // 0x22f0bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22f0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22f0c0:
    // 0x22f0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22f0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_22f0c4:
    // 0x22f0c4: 0x0  nop
    ctx->pc = 0x22f0c4u;
    // NOP
label_22f0c8:
    // 0x22f0c8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x22f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_22f0cc:
    // 0x22f0cc: 0x0  nop
    ctx->pc = 0x22f0ccu;
    // NOP
label_22f0d0:
    // 0x22f0d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22f0d4:
    // 0x22f0d4: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22f0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_22f0d8:
    // 0x22f0d8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_22f0dc:
    if (ctx->pc == 0x22F0DCu) {
        ctx->pc = 0x22F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D8u;
        // 0x22f0dc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0E0u;
        goto label_22f0e0;
    }
    ctx->pc = 0x22F0D8u;
    {
        const bool branch_taken_0x22f0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D8u;
        // 0x22f0dc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0d8) {
            ctx->pc = 0x22EFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22F0E0u;
label_22f0e0:
    // 0x22f0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22f0e4:
    // 0x22f0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f0e8:
    // 0x22f0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f0ec:
    // 0x22f0ec: 0x3e00008  jr          $ra
label_22f0f0:
    if (ctx->pc == 0x22F0F0u) {
        ctx->pc = 0x22F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0ECu;
        // 0x22f0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0F4u;
        goto label_22f0f4;
    }
    ctx->pc = 0x22F0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0ECu;
        // 0x22f0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F0F4u;
label_22f0f4:
    // 0x22f0f4: 0x0  nop
    ctx->pc = 0x22f0f4u;
    // NOP
label_22f0f8:
    // 0x22f0f8: 0x0  nop
    ctx->pc = 0x22f0f8u;
    // NOP
label_22f0fc:
    // 0x22f0fc: 0x0  nop
    ctx->pc = 0x22f0fcu;
    // NOP
label_22f100:
    // 0x22f100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22f104:
    // 0x22f104: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x22f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22f108:
    // 0x22f108: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
label_22f10c:
    if (ctx->pc == 0x22F10Cu) {
        ctx->pc = 0x22F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F108u;
        // 0x22f10c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F110u;
        goto label_22f110;
    }
    ctx->pc = 0x22F108u;
    {
        const bool branch_taken_0x22f108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F108u;
        // 0x22f10c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f108) {
            ctx->pc = 0x22F4B0u;
            goto label_22f4b0;
        }
    }
    ctx->pc = 0x22F110u;
label_22f110:
    // 0x22f110: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x22f110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_22f114:
    // 0x22f114: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
label_22f118:
    if (ctx->pc == 0x22F118u) {
        ctx->pc = 0x22F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F114u;
        // 0x22f118: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F11Cu;
        goto label_22f11c;
    }
    ctx->pc = 0x22F114u;
    {
        const bool branch_taken_0x22f114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F114u;
        // 0x22f118: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f114) {
            ctx->pc = 0x22F490u;
            goto label_22f490;
        }
    }
    ctx->pc = 0x22F11Cu;
label_22f11c:
    // 0x22f11c: 0x108300d0  beq         $a0, $v1, . + 4 + (0xD0 << 2)
label_22f120:
    if (ctx->pc == 0x22F120u) {
        ctx->pc = 0x22F124u;
        goto label_22f124;
    }
    ctx->pc = 0x22F11Cu;
    {
        const bool branch_taken_0x22f11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f11c) {
            ctx->pc = 0x22F460u;
            goto label_22f460;
        }
    }
    ctx->pc = 0x22F124u;
label_22f124:
    // 0x22f124: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x22f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22f128:
    // 0x22f128: 0x108300cd  beq         $a0, $v1, . + 4 + (0xCD << 2)
label_22f12c:
    if (ctx->pc == 0x22F12Cu) {
        ctx->pc = 0x22F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F128u;
        // 0x22f12c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F130u;
        goto label_22f130;
    }
    ctx->pc = 0x22F128u;
    {
        const bool branch_taken_0x22f128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F128u;
        // 0x22f12c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f128) {
            ctx->pc = 0x22F460u;
            goto label_22f460;
        }
    }
    ctx->pc = 0x22F130u;
label_22f130:
    // 0x22f130: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
label_22f134:
    if (ctx->pc == 0x22F134u) {
        ctx->pc = 0x22F138u;
        goto label_22f138;
    }
    ctx->pc = 0x22F130u;
    {
        const bool branch_taken_0x22f130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f130) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F138u;
label_22f138:
    // 0x22f138: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_22f13c:
    // 0x22f13c: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
label_22f140:
    if (ctx->pc == 0x22F140u) {
        ctx->pc = 0x22F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F13Cu;
        // 0x22f140: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F144u;
        goto label_22f144;
    }
    ctx->pc = 0x22F13Cu;
    {
        const bool branch_taken_0x22f13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F13Cu;
        // 0x22f140: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f13c) {
            ctx->pc = 0x22F430u;
            goto label_22f430;
        }
    }
    ctx->pc = 0x22F144u;
label_22f144:
    // 0x22f144: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
label_22f148:
    if (ctx->pc == 0x22F148u) {
        ctx->pc = 0x22F14Cu;
        goto label_22f14c;
    }
    ctx->pc = 0x22F144u;
    {
        const bool branch_taken_0x22f144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f144) {
            ctx->pc = 0x22F3F4u;
            goto label_22f3f4;
        }
    }
    ctx->pc = 0x22F14Cu;
label_22f14c:
    // 0x22f14c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x22f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_22f150:
    // 0x22f150: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
label_22f154:
    if (ctx->pc == 0x22F154u) {
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F150u;
        // 0x22f154: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F158u;
        goto label_22f158;
    }
    ctx->pc = 0x22F150u;
    {
        const bool branch_taken_0x22f150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F150u;
        // 0x22f154: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f150) {
            ctx->pc = 0x22F3D4u;
            goto label_22f3d4;
        }
    }
    ctx->pc = 0x22F158u;
label_22f158:
    // 0x22f158: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
label_22f15c:
    if (ctx->pc == 0x22F15Cu) {
        ctx->pc = 0x22F160u;
        goto label_22f160;
    }
    ctx->pc = 0x22F158u;
    {
        const bool branch_taken_0x22f158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f158) {
            ctx->pc = 0x22F398u;
            goto label_22f398;
        }
    }
    ctx->pc = 0x22F160u;
label_22f160:
    // 0x22f160: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f164:
    // 0x22f164: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
label_22f168:
    if (ctx->pc == 0x22F168u) {
        ctx->pc = 0x22F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F164u;
        // 0x22f168: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F16Cu;
        goto label_22f16c;
    }
    ctx->pc = 0x22F164u;
    {
        const bool branch_taken_0x22f164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F164u;
        // 0x22f168: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f164) {
            ctx->pc = 0x22F360u;
            goto label_22f360;
        }
    }
    ctx->pc = 0x22F16Cu;
label_22f16c:
    // 0x22f16c: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
label_22f170:
    if (ctx->pc == 0x22F170u) {
        ctx->pc = 0x22F174u;
        goto label_22f174;
    }
    ctx->pc = 0x22F16Cu;
    {
        const bool branch_taken_0x22f16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f16c) {
            ctx->pc = 0x22F338u;
            goto label_22f338;
        }
    }
    ctx->pc = 0x22F174u;
label_22f174:
    // 0x22f174: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22f178:
    // 0x22f178: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
label_22f17c:
    if (ctx->pc == 0x22F17Cu) {
        ctx->pc = 0x22F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F178u;
        // 0x22f17c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F180u;
        goto label_22f180;
    }
    ctx->pc = 0x22F178u;
    {
        const bool branch_taken_0x22f178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F178u;
        // 0x22f17c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f178) {
            ctx->pc = 0x22F318u;
            goto label_22f318;
        }
    }
    ctx->pc = 0x22F180u;
label_22f180:
    // 0x22f180: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
label_22f184:
    if (ctx->pc == 0x22F184u) {
        ctx->pc = 0x22F188u;
        goto label_22f188;
    }
    ctx->pc = 0x22F180u;
    {
        const bool branch_taken_0x22f180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f180) {
            ctx->pc = 0x22F2F8u;
            goto label_22f2f8;
        }
    }
    ctx->pc = 0x22F188u;
label_22f188:
    // 0x22f188: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22f18c:
    // 0x22f18c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_22f190:
    if (ctx->pc == 0x22F190u) {
        ctx->pc = 0x22F194u;
        goto label_22f194;
    }
    ctx->pc = 0x22F18Cu;
    {
        const bool branch_taken_0x22f18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f18c) {
            ctx->pc = 0x22F1DCu;
            goto label_22f1dc;
        }
    }
    ctx->pc = 0x22F194u;
label_22f194:
    // 0x22f194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22f198:
    if (ctx->pc == 0x22F198u) {
        ctx->pc = 0x22F19Cu;
        goto label_22f19c;
    }
    ctx->pc = 0x22F194u;
    {
        const bool branch_taken_0x22f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f194) {
            ctx->pc = 0x22F1A4u;
            goto label_22f1a4;
        }
    }
    ctx->pc = 0x22F19Cu;
label_22f19c:
    // 0x22f19c: 0x100000cb  b           . + 4 + (0xCB << 2)
label_22f1a0:
    if (ctx->pc == 0x22F1A0u) {
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F19Cu;
        // 0x22f1a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1A4u;
        goto label_22f1a4;
    }
    ctx->pc = 0x22F19Cu;
    {
        const bool branch_taken_0x22f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F19Cu;
        // 0x22f1a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f19c) {
            ctx->pc = 0x22F4CCu;
            goto label_22f4cc;
        }
    }
    ctx->pc = 0x22F1A4u;
label_22f1a4:
    // 0x22f1a4: 0xc08be78  jal         func_22F9E0
label_22f1a8:
    if (ctx->pc == 0x22F1A8u) {
        ctx->pc = 0x22F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A4u;
        // 0x22f1a8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1ACu;
        goto label_22f1ac;
    }
    ctx->pc = 0x22F1A4u;
    SET_GPR_U32(ctx, 31, 0x22F1ACu);
    ctx->pc = 0x22F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1A4u;
    // 0x22f1a8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_22f1b0:
    if (ctx->pc == 0x22F1B0u) {
        ctx->pc = 0x22F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ACu;
        // 0x22f1b0: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1B4u;
        goto label_22f1b4;
    }
    ctx->pc = 0x22F1ACu;
    {
        const bool branch_taken_0x22f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ACu;
        // 0x22f1b0: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1ac) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1B4u;
label_22f1b4:
    // 0x22f1b4: 0xc08be78  jal         func_22F9E0
label_22f1b8:
    if (ctx->pc == 0x22F1B8u) {
        ctx->pc = 0x22F1BCu;
        goto label_22f1bc;
    }
    ctx->pc = 0x22F1B4u;
    SET_GPR_U32(ctx, 31, 0x22F1BCu);
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F1BCu;
label_22f1bc:
    // 0x22f1bc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_22f1c0:
    if (ctx->pc == 0x22F1C0u) {
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1C4u;
        goto label_22f1c4;
    }
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1C4u;
label_22f1c4:
    // 0x22f1c4: 0xc09018c  jal         func_240630
label_22f1c8:
    if (ctx->pc == 0x22F1C8u) {
        ctx->pc = 0x22F1CCu;
        goto label_22f1cc;
    }
    ctx->pc = 0x22F1C4u;
    SET_GPR_U32(ctx, 31, 0x22F1CCu);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F1CCu;
label_22f1cc:
    // 0x22f1cc: 0xc0901ac  jal         func_2406B0
label_22f1d0:
    if (ctx->pc == 0x22F1D0u) {
        ctx->pc = 0x22F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1CCu;
        // 0x22f1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1D4u;
        goto label_22f1d4;
    }
    ctx->pc = 0x22F1CCu;
    SET_GPR_U32(ctx, 31, 0x22F1D4u);
    ctx->pc = 0x22F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1CCu;
    // 0x22f1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F1D4u;
label_22f1d4:
    // 0x22f1d4: 0x100000bc  b           . + 4 + (0xBC << 2)
label_22f1d8:
    if (ctx->pc == 0x22F1D8u) {
        ctx->pc = 0x22F1DCu;
        goto label_22f1dc;
    }
    ctx->pc = 0x22F1D4u;
    {
        const bool branch_taken_0x22f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1d4) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1DCu;
label_22f1dc:
    // 0x22f1dc: 0xc08be78  jal         func_22F9E0
label_22f1e0:
    if (ctx->pc == 0x22F1E0u) {
        ctx->pc = 0x22F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1DCu;
        // 0x22f1e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1E4u;
        goto label_22f1e4;
    }
    ctx->pc = 0x22F1DCu;
    SET_GPR_U32(ctx, 31, 0x22F1E4u);
    ctx->pc = 0x22F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1DCu;
    // 0x22f1e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F1E4u;
label_22f1e4:
    // 0x22f1e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_22f1e8:
    if (ctx->pc == 0x22F1E8u) {
        ctx->pc = 0x22F1ECu;
        goto label_22f1ec;
    }
    ctx->pc = 0x22F1E4u;
    {
        const bool branch_taken_0x22f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1e4) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F1ECu;
label_22f1ec:
    // 0x22f1ec: 0xc09018c  jal         func_240630
label_22f1f0:
    if (ctx->pc == 0x22F1F0u) {
        ctx->pc = 0x22F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ECu;
        // 0x22f1f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1F4u;
        goto label_22f1f4;
    }
    ctx->pc = 0x22F1ECu;
    SET_GPR_U32(ctx, 31, 0x22F1F4u);
    ctx->pc = 0x22F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1ECu;
    // 0x22f1f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F1F4u;
label_22f1f4:
    // 0x22f1f4: 0xc08be78  jal         func_22F9E0
label_22f1f8:
    if (ctx->pc == 0x22F1F8u) {
        ctx->pc = 0x22F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1F4u;
        // 0x22f1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1FCu;
        goto label_22f1fc;
    }
    ctx->pc = 0x22F1F4u;
    SET_GPR_U32(ctx, 31, 0x22F1FCu);
    ctx->pc = 0x22F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1F4u;
    // 0x22f1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F1FCu;
label_22f1fc:
    // 0x22f1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f200:
    if (ctx->pc == 0x22F200u) {
        ctx->pc = 0x22F204u;
        goto label_22f204;
    }
    ctx->pc = 0x22F1FCu;
    {
        const bool branch_taken_0x22f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1fc) {
            ctx->pc = 0x22F214u;
            goto label_22f214;
        }
    }
    ctx->pc = 0x22F204u;
label_22f204:
    // 0x22f204: 0xc09018c  jal         func_240630
label_22f208:
    if (ctx->pc == 0x22F208u) {
        ctx->pc = 0x22F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F204u;
        // 0x22f208: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F20Cu;
        goto label_22f20c;
    }
    ctx->pc = 0x22F204u;
    SET_GPR_U32(ctx, 31, 0x22F20Cu);
    ctx->pc = 0x22F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F204u;
    // 0x22f208: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F20Cu;
label_22f20c:
    // 0x22f20c: 0xc0901ac  jal         func_2406B0
label_22f210:
    if (ctx->pc == 0x22F210u) {
        ctx->pc = 0x22F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F20Cu;
        // 0x22f210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F214u;
        goto label_22f214;
    }
    ctx->pc = 0x22F20Cu;
    SET_GPR_U32(ctx, 31, 0x22F214u);
    ctx->pc = 0x22F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F20Cu;
    // 0x22f210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F214u;
label_22f214:
    // 0x22f214: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f218:
    // 0x22f218: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f21c:
    // 0x22f21c: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 604)));
label_22f220:
    // 0x22f220: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_22f224:
    if (ctx->pc == 0x22F224u) {
        ctx->pc = 0x22F228u;
        goto label_22f228;
    }
    ctx->pc = 0x22F220u;
    {
        const bool branch_taken_0x22f220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f220) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F228u;
label_22f228:
    // 0x22f228: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f22c:
    // 0x22f22c: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 196)));
label_22f230:
    // 0x22f230: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_22f234:
    if (ctx->pc == 0x22F234u) {
        ctx->pc = 0x22F238u;
        goto label_22f238;
    }
    ctx->pc = 0x22F230u;
    {
        const bool branch_taken_0x22f230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f230) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F238u;
label_22f238:
    // 0x22f238: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f23c:
    // 0x22f23c: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 772)));
label_22f240:
    // 0x22f240: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_22f244:
    if (ctx->pc == 0x22F244u) {
        ctx->pc = 0x22F248u;
        goto label_22f248;
    }
    ctx->pc = 0x22F240u;
    {
        const bool branch_taken_0x22f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f240) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F248u;
label_22f248:
    // 0x22f248: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f24c:
    // 0x22f24c: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 796)));
label_22f250:
    // 0x22f250: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_22f254:
    if (ctx->pc == 0x22F254u) {
        ctx->pc = 0x22F258u;
        goto label_22f258;
    }
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F258u;
label_22f258:
    // 0x22f258: 0xc09018c  jal         func_240630
label_22f25c:
    if (ctx->pc == 0x22F25Cu) {
        ctx->pc = 0x22F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F258u;
        // 0x22f25c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F260u;
        goto label_22f260;
    }
    ctx->pc = 0x22F258u;
    SET_GPR_U32(ctx, 31, 0x22F260u);
    ctx->pc = 0x22F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F258u;
    // 0x22f25c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F260u;
label_22f260:
    // 0x22f260: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_22f264:
    // 0x22f264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f268:
    // 0x22f268: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
label_22f26c:
    // 0x22f26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f270:
    // 0x22f270: 0x0  nop
    ctx->pc = 0x22f270u;
    // NOP
label_22f274:
    // 0x22f274: 0x90a3005c  lbu         $v1, 0x5C($a1)
    ctx->pc = 0x22f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 92)));
label_22f278:
    // 0x22f278: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22f27c:
    if (ctx->pc == 0x22F27Cu) {
        ctx->pc = 0x22F280u;
        goto label_22f280;
    }
    ctx->pc = 0x22F278u;
    {
        const bool branch_taken_0x22f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f278) {
            ctx->pc = 0x22F298u;
            goto label_22f298;
        }
    }
    ctx->pc = 0x22F280u;
label_22f280:
    // 0x22f280: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_22f284:
    // 0x22f284: 0x286303e8  slti        $v1, $v1, 0x3E8
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
label_22f288:
    // 0x22f288: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22f28c:
    if (ctx->pc == 0x22F28Cu) {
        ctx->pc = 0x22F290u;
        goto label_22f290;
    }
    ctx->pc = 0x22F288u;
    {
        const bool branch_taken_0x22f288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f288) {
            ctx->pc = 0x22F298u;
            goto label_22f298;
        }
    }
    ctx->pc = 0x22F290u;
label_22f290:
    // 0x22f290: 0x10000005  b           . + 4 + (0x5 << 2)
label_22f294:
    if (ctx->pc == 0x22F294u) {
        ctx->pc = 0x22F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F290u;
        // 0x22f294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F298u;
        goto label_22f298;
    }
    ctx->pc = 0x22F290u;
    {
        const bool branch_taken_0x22f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F290u;
        // 0x22f294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f290) {
            ctx->pc = 0x22F2A8u;
            goto label_22f2a8;
        }
    }
    ctx->pc = 0x22F298u;
label_22f298:
    // 0x22f298: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f29c:
    // 0x22f29c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x22f29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f2a0:
    // 0x22f2a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_22f2a4:
    if (ctx->pc == 0x22F2A4u) {
        ctx->pc = 0x22F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2A0u;
        // 0x22f2a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2A8u;
        goto label_22f2a8;
    }
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2A0u;
        // 0x22f2a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f270;
        }
    }
    ctx->pc = 0x22F2A8u;
label_22f2a8:
    // 0x22f2a8: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
label_22f2ac:
    if (ctx->pc == 0x22F2ACu) {
        ctx->pc = 0x22F2B0u;
        goto label_22f2b0;
    }
    ctx->pc = 0x22F2A8u;
    {
        const bool branch_taken_0x22f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2a8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2B0u;
label_22f2b0:
    // 0x22f2b0: 0xc09018c  jal         func_240630
label_22f2b4:
    if (ctx->pc == 0x22F2B4u) {
        ctx->pc = 0x22F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B0u;
        // 0x22f2b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2B8u;
        goto label_22f2b8;
    }
    ctx->pc = 0x22F2B0u;
    SET_GPR_U32(ctx, 31, 0x22F2B8u);
    ctx->pc = 0x22F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B0u;
    // 0x22f2b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f2bc:
    // 0x22f2bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f2c0:
    // 0x22f2c0: 0x8c230094  lw          $v1, 0x94($at)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 148)));
label_22f2c4:
    // 0x22f2c4: 0x14640080  bne         $v1, $a0, . + 4 + (0x80 << 2)
label_22f2c8:
    if (ctx->pc == 0x22F2C8u) {
        ctx->pc = 0x22F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2C4u;
        // 0x22f2c8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2CCu;
        goto label_22f2cc;
    }
    ctx->pc = 0x22F2C4u;
    {
        const bool branch_taken_0x22f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2C4u;
        // 0x22f2c8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2c4) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2CCu;
label_22f2cc:
    // 0x22f2cc: 0x8c2300f4  lw          $v1, 0xF4($at)
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
label_22f2d0:
    // 0x22f2d0: 0x1464007d  bne         $v1, $a0, . + 4 + (0x7D << 2)
label_22f2d4:
    if (ctx->pc == 0x22F2D4u) {
        ctx->pc = 0x22F2D8u;
        goto label_22f2d8;
    }
    ctx->pc = 0x22F2D0u;
    {
        const bool branch_taken_0x22f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2d0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2D8u;
label_22f2d8:
    // 0x22f2d8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f2dc:
    // 0x22f2dc: 0x8c2300dc  lw          $v1, 0xDC($at)
    ctx->pc = 0x22f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 220)));
label_22f2e0:
    // 0x22f2e0: 0x14640079  bne         $v1, $a0, . + 4 + (0x79 << 2)
label_22f2e4:
    if (ctx->pc == 0x22F2E4u) {
        ctx->pc = 0x22F2E8u;
        goto label_22f2e8;
    }
    ctx->pc = 0x22F2E0u;
    {
        const bool branch_taken_0x22f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2e0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2E8u;
label_22f2e8:
    // 0x22f2e8: 0xc09018c  jal         func_240630
label_22f2ec:
    if (ctx->pc == 0x22F2ECu) {
        ctx->pc = 0x22F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2E8u;
        // 0x22f2ec: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2F0u;
        goto label_22f2f0;
    }
    ctx->pc = 0x22F2E8u;
    SET_GPR_U32(ctx, 31, 0x22F2F0u);
    ctx->pc = 0x22F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2E8u;
    // 0x22f2ec: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F2F0u;
label_22f2f0:
    // 0x22f2f0: 0x10000075  b           . + 4 + (0x75 << 2)
label_22f2f4:
    if (ctx->pc == 0x22F2F4u) {
        ctx->pc = 0x22F2F8u;
        goto label_22f2f8;
    }
    ctx->pc = 0x22F2F0u;
    {
        const bool branch_taken_0x22f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2f0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2F8u;
label_22f2f8:
    // 0x22f2f8: 0xc084b7c  jal         func_212DF0
label_22f2fc:
    if (ctx->pc == 0x22F2FCu) {
        ctx->pc = 0x22F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2F8u;
        // 0x22f2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F300u;
        goto label_22f300;
    }
    ctx->pc = 0x22F2F8u;
    SET_GPR_U32(ctx, 31, 0x22F300u);
    ctx->pc = 0x22F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2F8u;
    // 0x22f2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F300u;
label_22f300:
    // 0x22f300: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_22f304:
    if (ctx->pc == 0x22F304u) {
        ctx->pc = 0x22F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F300u;
        // 0x22f304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F308u;
        goto label_22f308;
    }
    ctx->pc = 0x22F300u;
    {
        const bool branch_taken_0x22f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F300u;
        // 0x22f304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f300) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F308u;
label_22f308:
    // 0x22f308: 0xc0901ac  jal         func_2406B0
label_22f30c:
    if (ctx->pc == 0x22F30Cu) {
        ctx->pc = 0x22F310u;
        goto label_22f310;
    }
    ctx->pc = 0x22F308u;
    SET_GPR_U32(ctx, 31, 0x22F310u);
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F310u;
label_22f310:
    // 0x22f310: 0x1000006d  b           . + 4 + (0x6D << 2)
label_22f314:
    if (ctx->pc == 0x22F314u) {
        ctx->pc = 0x22F318u;
        goto label_22f318;
    }
    ctx->pc = 0x22F310u;
    {
        const bool branch_taken_0x22f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f310) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F318u;
label_22f318:
    // 0x22f318: 0xc084b7c  jal         func_212DF0
label_22f31c:
    if (ctx->pc == 0x22F31Cu) {
        ctx->pc = 0x22F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F318u;
        // 0x22f31c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F320u;
        goto label_22f320;
    }
    ctx->pc = 0x22F318u;
    SET_GPR_U32(ctx, 31, 0x22F320u);
    ctx->pc = 0x22F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F318u;
    // 0x22f31c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F320u;
label_22f320:
    // 0x22f320: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_22f324:
    if (ctx->pc == 0x22F324u) {
        ctx->pc = 0x22F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F320u;
        // 0x22f324: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F328u;
        goto label_22f328;
    }
    ctx->pc = 0x22F320u;
    {
        const bool branch_taken_0x22f320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F320u;
        // 0x22f324: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f320) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F328u;
label_22f328:
    // 0x22f328: 0xc0901ac  jal         func_2406B0
label_22f32c:
    if (ctx->pc == 0x22F32Cu) {
        ctx->pc = 0x22F330u;
        goto label_22f330;
    }
    ctx->pc = 0x22F328u;
    SET_GPR_U32(ctx, 31, 0x22F330u);
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F330u;
label_22f330:
    // 0x22f330: 0x10000065  b           . + 4 + (0x65 << 2)
label_22f334:
    if (ctx->pc == 0x22F334u) {
        ctx->pc = 0x22F338u;
        goto label_22f338;
    }
    ctx->pc = 0x22F330u;
    {
        const bool branch_taken_0x22f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f330) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F338u;
label_22f338:
    // 0x22f338: 0xc084b7c  jal         func_212DF0
label_22f33c:
    if (ctx->pc == 0x22F33Cu) {
        ctx->pc = 0x22F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F338u;
        // 0x22f33c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F340u;
        goto label_22f340;
    }
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x22F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F338u;
    // 0x22f33c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F340u;
label_22f340:
    // 0x22f340: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_22f344:
    if (ctx->pc == 0x22F344u) {
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F348u;
        goto label_22f348;
    }
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F348u;
label_22f348:
    // 0x22f348: 0xc09018c  jal         func_240630
label_22f34c:
    if (ctx->pc == 0x22F34Cu) {
        ctx->pc = 0x22F350u;
        goto label_22f350;
    }
    ctx->pc = 0x22F348u;
    SET_GPR_U32(ctx, 31, 0x22F350u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F350u;
label_22f350:
    // 0x22f350: 0xc0901ac  jal         func_2406B0
label_22f354:
    if (ctx->pc == 0x22F354u) {
        ctx->pc = 0x22F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F350u;
        // 0x22f354: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F358u;
        goto label_22f358;
    }
    ctx->pc = 0x22F350u;
    SET_GPR_U32(ctx, 31, 0x22F358u);
    ctx->pc = 0x22F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F350u;
    // 0x22f354: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F358u;
label_22f358:
    // 0x22f358: 0x1000005b  b           . + 4 + (0x5B << 2)
label_22f35c:
    if (ctx->pc == 0x22F35Cu) {
        ctx->pc = 0x22F360u;
        goto label_22f360;
    }
    ctx->pc = 0x22F358u;
    {
        const bool branch_taken_0x22f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f358) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F360u;
label_22f360:
    // 0x22f360: 0xc08be78  jal         func_22F9E0
label_22f364:
    if (ctx->pc == 0x22F364u) {
        ctx->pc = 0x22F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F360u;
        // 0x22f364: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F368u;
        goto label_22f368;
    }
    ctx->pc = 0x22F360u;
    SET_GPR_U32(ctx, 31, 0x22F368u);
    ctx->pc = 0x22F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F360u;
    // 0x22f364: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F368u;
label_22f368:
    // 0x22f368: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_22f36c:
    if (ctx->pc == 0x22F36Cu) {
        ctx->pc = 0x22F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F368u;
        // 0x22f36c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F370u;
        goto label_22f370;
    }
    ctx->pc = 0x22F368u;
    {
        const bool branch_taken_0x22f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F368u;
        // 0x22f36c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f368) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F370u;
label_22f370:
    // 0x22f370: 0xc08be78  jal         func_22F9E0
label_22f374:
    if (ctx->pc == 0x22F374u) {
        ctx->pc = 0x22F378u;
        goto label_22f378;
    }
    ctx->pc = 0x22F370u;
    SET_GPR_U32(ctx, 31, 0x22F378u);
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F378u;
label_22f378:
    // 0x22f378: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_22f37c:
    if (ctx->pc == 0x22F37Cu) {
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F378u;
        // 0x22f37c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F380u;
        goto label_22f380;
    }
    ctx->pc = 0x22F378u;
    {
        const bool branch_taken_0x22f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F378u;
        // 0x22f37c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f378) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F380u;
label_22f380:
    // 0x22f380: 0xc09018c  jal         func_240630
label_22f384:
    if (ctx->pc == 0x22F384u) {
        ctx->pc = 0x22F388u;
        goto label_22f388;
    }
    ctx->pc = 0x22F380u;
    SET_GPR_U32(ctx, 31, 0x22F388u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F388u;
label_22f388:
    // 0x22f388: 0xc0901ac  jal         func_2406B0
label_22f38c:
    if (ctx->pc == 0x22F38Cu) {
        ctx->pc = 0x22F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F388u;
        // 0x22f38c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F390u;
        goto label_22f390;
    }
    ctx->pc = 0x22F388u;
    SET_GPR_U32(ctx, 31, 0x22F390u);
    ctx->pc = 0x22F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F388u;
    // 0x22f38c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F390u;
label_22f390:
    // 0x22f390: 0x1000004d  b           . + 4 + (0x4D << 2)
label_22f394:
    if (ctx->pc == 0x22F394u) {
        ctx->pc = 0x22F398u;
        goto label_22f398;
    }
    ctx->pc = 0x22F390u;
    {
        const bool branch_taken_0x22f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f390) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F398u;
label_22f398:
    // 0x22f398: 0xc084b7c  jal         func_212DF0
label_22f39c:
    if (ctx->pc == 0x22F39Cu) {
        ctx->pc = 0x22F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F398u;
        // 0x22f39c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3A0u;
        goto label_22f3a0;
    }
    ctx->pc = 0x22F398u;
    SET_GPR_U32(ctx, 31, 0x22F3A0u);
    ctx->pc = 0x22F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F398u;
    // 0x22f39c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F3A0u;
label_22f3a0:
    // 0x22f3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22f3a4:
    if (ctx->pc == 0x22F3A4u) {
        ctx->pc = 0x22F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A0u;
        // 0x22f3a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3A8u;
        goto label_22f3a8;
    }
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A0u;
        // 0x22f3a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F3B4u;
            goto label_22f3b4;
        }
    }
    ctx->pc = 0x22F3A8u;
label_22f3a8:
    // 0x22f3a8: 0xc09018c  jal         func_240630
label_22f3ac:
    if (ctx->pc == 0x22F3ACu) {
        ctx->pc = 0x22F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A8u;
        // 0x22f3ac: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3B0u;
        goto label_22f3b0;
    }
    ctx->pc = 0x22F3A8u;
    SET_GPR_U32(ctx, 31, 0x22F3B0u);
    ctx->pc = 0x22F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A8u;
    // 0x22f3ac: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F3B0u;
label_22f3b0:
    // 0x22f3b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22f3b4:
    // 0x22f3b4: 0xc084b7c  jal         func_212DF0
label_22f3b8:
    if (ctx->pc == 0x22F3B8u) {
        ctx->pc = 0x22F3BCu;
        goto label_22f3bc;
    }
    ctx->pc = 0x22F3B4u;
    SET_GPR_U32(ctx, 31, 0x22F3BCu);
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F3BCu;
label_22f3bc:
    // 0x22f3bc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_22f3c0:
    if (ctx->pc == 0x22F3C0u) {
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3C4u;
        goto label_22f3c4;
    }
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0xc0901ac  jal         func_2406B0
label_22f3c8:
    if (ctx->pc == 0x22F3C8u) {
        ctx->pc = 0x22F3CCu;
        goto label_22f3cc;
    }
    ctx->pc = 0x22F3C4u;
    SET_GPR_U32(ctx, 31, 0x22F3CCu);
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F3CCu;
label_22f3cc:
    // 0x22f3cc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_22f3d0:
    if (ctx->pc == 0x22F3D0u) {
        ctx->pc = 0x22F3D4u;
        goto label_22f3d4;
    }
    ctx->pc = 0x22F3CCu;
    {
        const bool branch_taken_0x22f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3cc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3D4u;
label_22f3d4:
    // 0x22f3d4: 0xc08be78  jal         func_22F9E0
label_22f3d8:
    if (ctx->pc == 0x22F3D8u) {
        ctx->pc = 0x22F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3D4u;
        // 0x22f3d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3DCu;
        goto label_22f3dc;
    }
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_22f3e0:
    if (ctx->pc == 0x22F3E0u) {
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3E4u;
        goto label_22f3e4;
    }
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3E4u;
label_22f3e4:
    // 0x22f3e4: 0xc09018c  jal         func_240630
label_22f3e8:
    if (ctx->pc == 0x22F3E8u) {
        ctx->pc = 0x22F3ECu;
        goto label_22f3ec;
    }
    ctx->pc = 0x22F3E4u;
    SET_GPR_U32(ctx, 31, 0x22F3ECu);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F3ECu;
label_22f3ec:
    // 0x22f3ec: 0x10000036  b           . + 4 + (0x36 << 2)
label_22f3f0:
    if (ctx->pc == 0x22F3F0u) {
        ctx->pc = 0x22F3F4u;
        goto label_22f3f4;
    }
    ctx->pc = 0x22F3ECu;
    {
        const bool branch_taken_0x22f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3ec) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3F4u;
label_22f3f4:
    // 0x22f3f4: 0xc08be78  jal         func_22F9E0
label_22f3f8:
    if (ctx->pc == 0x22F3F8u) {
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F4u;
        // 0x22f3f8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3FCu;
        goto label_22f3fc;
    }
    ctx->pc = 0x22F3F4u;
    SET_GPR_U32(ctx, 31, 0x22F3FCu);
    ctx->pc = 0x22F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3F4u;
    // 0x22f3f8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f400:
    if (ctx->pc == 0x22F400u) {
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F404u;
        goto label_22f404;
    }
    ctx->pc = 0x22F3FCu;
    {
        const bool branch_taken_0x22f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3fc) {
            ctx->pc = 0x22F410u;
            goto label_22f410;
        }
    }
    ctx->pc = 0x22F404u;
label_22f404:
    // 0x22f404: 0xc09018c  jal         func_240630
label_22f408:
    if (ctx->pc == 0x22F408u) {
        ctx->pc = 0x22F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F404u;
        // 0x22f408: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F40Cu;
        goto label_22f40c;
    }
    ctx->pc = 0x22F404u;
    SET_GPR_U32(ctx, 31, 0x22F40Cu);
    ctx->pc = 0x22F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F404u;
    // 0x22f408: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F40Cu;
label_22f40c:
    // 0x22f40c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22f410:
    // 0x22f410: 0xc084b7c  jal         func_212DF0
label_22f414:
    if (ctx->pc == 0x22F414u) {
        ctx->pc = 0x22F418u;
        goto label_22f418;
    }
    ctx->pc = 0x22F410u;
    SET_GPR_U32(ctx, 31, 0x22F418u);
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_22f41c:
    if (ctx->pc == 0x22F41Cu) {
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F420u;
        goto label_22f420;
    }
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F420u;
label_22f420:
    // 0x22f420: 0xc09018c  jal         func_240630
label_22f424:
    if (ctx->pc == 0x22F424u) {
        ctx->pc = 0x22F428u;
        goto label_22f428;
    }
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F428u;
label_22f428:
    // 0x22f428: 0x10000027  b           . + 4 + (0x27 << 2)
label_22f42c:
    if (ctx->pc == 0x22F42Cu) {
        ctx->pc = 0x22F430u;
        goto label_22f430;
    }
    ctx->pc = 0x22F428u;
    {
        const bool branch_taken_0x22f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f428) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F430u;
label_22f430:
    // 0x22f430: 0xc09018c  jal         func_240630
label_22f434:
    if (ctx->pc == 0x22F434u) {
        ctx->pc = 0x22F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F430u;
        // 0x22f434: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F438u;
        goto label_22f438;
    }
    ctx->pc = 0x22F430u;
    SET_GPR_U32(ctx, 31, 0x22F438u);
    ctx->pc = 0x22F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F430u;
    // 0x22f434: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F438u;
label_22f438:
    // 0x22f438: 0x10000023  b           . + 4 + (0x23 << 2)
label_22f43c:
    if (ctx->pc == 0x22F43Cu) {
        ctx->pc = 0x22F440u;
        goto label_22f440;
    }
    ctx->pc = 0x22F438u;
    {
        const bool branch_taken_0x22f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f438) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F440u;
label_22f440:
    // 0x22f440: 0xc08be78  jal         func_22F9E0
label_22f444:
    if (ctx->pc == 0x22F444u) {
        ctx->pc = 0x22F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F440u;
        // 0x22f444: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F448u;
        goto label_22f448;
    }
    ctx->pc = 0x22F440u;
    SET_GPR_U32(ctx, 31, 0x22F448u);
    ctx->pc = 0x22F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F440u;
    // 0x22f444: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F448u;
label_22f448:
    // 0x22f448: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_22f44c:
    if (ctx->pc == 0x22F44Cu) {
        ctx->pc = 0x22F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F448u;
        // 0x22f44c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F450u;
        goto label_22f450;
    }
    ctx->pc = 0x22F448u;
    {
        const bool branch_taken_0x22f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F448u;
        // 0x22f44c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f448) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F450u;
label_22f450:
    // 0x22f450: 0xc09018c  jal         func_240630
label_22f454:
    if (ctx->pc == 0x22F454u) {
        ctx->pc = 0x22F458u;
        goto label_22f458;
    }
    ctx->pc = 0x22F450u;
    SET_GPR_U32(ctx, 31, 0x22F458u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F458u;
label_22f458:
    // 0x22f458: 0x1000001b  b           . + 4 + (0x1B << 2)
label_22f45c:
    if (ctx->pc == 0x22F45Cu) {
        ctx->pc = 0x22F460u;
        goto label_22f460;
    }
    ctx->pc = 0x22F458u;
    {
        const bool branch_taken_0x22f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f458) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F460u;
label_22f460:
    // 0x22f460: 0xc09018c  jal         func_240630
label_22f464:
    if (ctx->pc == 0x22F464u) {
        ctx->pc = 0x22F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F460u;
        // 0x22f464: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F468u;
        goto label_22f468;
    }
    ctx->pc = 0x22F460u;
    SET_GPR_U32(ctx, 31, 0x22F468u);
    ctx->pc = 0x22F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F460u;
    // 0x22f464: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F468u;
label_22f468:
    // 0x22f468: 0xc084b7c  jal         func_212DF0
label_22f46c:
    if (ctx->pc == 0x22F46Cu) {
        ctx->pc = 0x22F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F468u;
        // 0x22f46c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F470u;
        goto label_22f470;
    }
    ctx->pc = 0x22F468u;
    SET_GPR_U32(ctx, 31, 0x22F470u);
    ctx->pc = 0x22F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F468u;
    // 0x22f46c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x22F470u;
label_22f470:
    // 0x22f470: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_22f474:
    if (ctx->pc == 0x22F474u) {
        ctx->pc = 0x22F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F470u;
        // 0x22f474: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F478u;
        goto label_22f478;
    }
    ctx->pc = 0x22F470u;
    {
        const bool branch_taken_0x22f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F470u;
        // 0x22f474: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f470) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F478u;
label_22f478:
    // 0x22f478: 0xc09018c  jal         func_240630
label_22f47c:
    if (ctx->pc == 0x22F47Cu) {
        ctx->pc = 0x22F480u;
        goto label_22f480;
    }
    ctx->pc = 0x22F478u;
    SET_GPR_U32(ctx, 31, 0x22F480u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F480u;
label_22f480:
    // 0x22f480: 0xc0901ac  jal         func_2406B0
label_22f484:
    if (ctx->pc == 0x22F484u) {
        ctx->pc = 0x22F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F480u;
        // 0x22f484: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F488u;
        goto label_22f488;
    }
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x22F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F480u;
    // 0x22f484: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    { ctx->pc = 0x2406b0; return; }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0x1000000f  b           . + 4 + (0xF << 2)
label_22f48c:
    if (ctx->pc == 0x22F48Cu) {
        ctx->pc = 0x22F490u;
        goto label_22f490;
    }
    ctx->pc = 0x22F488u;
    {
        const bool branch_taken_0x22f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f488) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F490u;
label_22f490:
    // 0x22f490: 0xc08be78  jal         func_22F9E0
label_22f494:
    if (ctx->pc == 0x22F494u) {
        ctx->pc = 0x22F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F490u;
        // 0x22f494: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F498u;
        goto label_22f498;
    }
    ctx->pc = 0x22F490u;
    SET_GPR_U32(ctx, 31, 0x22F498u);
    ctx->pc = 0x22F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F490u;
    // 0x22f494: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F498u;
label_22f498:
    // 0x22f498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22f49c:
    if (ctx->pc == 0x22F49Cu) {
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4A0u;
        goto label_22f4a0;
    }
    ctx->pc = 0x22F498u;
    {
        const bool branch_taken_0x22f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f498) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4A0u;
label_22f4a0:
    // 0x22f4a0: 0xc09018c  jal         func_240630
label_22f4a4:
    if (ctx->pc == 0x22F4A4u) {
        ctx->pc = 0x22F4A8u;
        goto label_22f4a8;
    }
    ctx->pc = 0x22F4A0u;
    SET_GPR_U32(ctx, 31, 0x22F4A8u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F4A8u;
label_22f4a8:
    // 0x22f4a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_22f4ac:
    if (ctx->pc == 0x22F4ACu) {
        ctx->pc = 0x22F4B0u;
        goto label_22f4b0;
    }
    ctx->pc = 0x22F4A8u;
    {
        const bool branch_taken_0x22f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4a8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4B0u;
label_22f4b0:
    // 0x22f4b0: 0xc08be78  jal         func_22F9E0
label_22f4b4:
    if (ctx->pc == 0x22F4B4u) {
        ctx->pc = 0x22F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B0u;
        // 0x22f4b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4B8u;
        goto label_22f4b8;
    }
    ctx->pc = 0x22F4B0u;
    SET_GPR_U32(ctx, 31, 0x22F4B8u);
    ctx->pc = 0x22F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4B0u;
    // 0x22f4b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    { ctx->pc = 0x22f9e0; return; }
    ctx->pc = 0x22F4B8u;
label_22f4b8:
    // 0x22f4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22f4bc:
    if (ctx->pc == 0x22F4BCu) {
        ctx->pc = 0x22F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B8u;
        // 0x22f4bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4C0u;
        goto label_22f4c0;
    }
    ctx->pc = 0x22F4B8u;
    {
        const bool branch_taken_0x22f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B8u;
        // 0x22f4bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4b8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4C0u;
label_22f4c0:
    // 0x22f4c0: 0xc09018c  jal         func_240630
label_22f4c4:
    if (ctx->pc == 0x22F4C4u) {
        ctx->pc = 0x22F4C8u;
        goto label_22f4c8;
    }
    ctx->pc = 0x22F4C0u;
    SET_GPR_U32(ctx, 31, 0x22F4C8u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F4C8u;
label_22f4c8:
    // 0x22f4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f4cc:
    // 0x22f4cc: 0x3e00008  jr          $ra
label_22f4d0:
    if (ctx->pc == 0x22F4D0u) {
        ctx->pc = 0x22F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4CCu;
        // 0x22f4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4D4u;
        goto label_22f4d4;
    }
    ctx->pc = 0x22F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4CCu;
        // 0x22f4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F4D4u;
label_22f4d4:
    // 0x22f4d4: 0x0  nop
    ctx->pc = 0x22f4d4u;
    // NOP
label_22f4d8:
    // 0x22f4d8: 0x0  nop
    ctx->pc = 0x22f4d8u;
    // NOP
label_22f4dc:
    // 0x22f4dc: 0x0  nop
    ctx->pc = 0x22f4dcu;
    // NOP
label_22f4e0:
    // 0x22f4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22f4e4:
    // 0x22f4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f4e8:
    // 0x22f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22f4ec:
    // 0x22f4ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f4f0:
    // 0x22f4f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f4f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f4f4:
    // 0x22f4f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_22f4f8:
    // 0x22f4f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_22f4fc:
    // 0x22f4fc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_22f500:
    // 0x22f500: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_22f504:
    // 0x22f504: 0x344935fc  ori         $t1, $v0, 0x35FC
    ctx->pc = 0x22f504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13820);
label_22f508:
    // 0x22f508: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_22f50c:
    // 0x22f50c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f510:
    // 0x22f510: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22f514:
    // 0x22f514: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x22f518u;
    return;
}

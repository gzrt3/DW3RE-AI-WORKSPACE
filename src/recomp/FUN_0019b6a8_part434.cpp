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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26ed78u: goto label_26ed78;
        case 0x26ed7cu: goto label_26ed7c;
        case 0x26ed80u: goto label_26ed80;
        case 0x26ed84u: goto label_26ed84;
        case 0x26ed88u: goto label_26ed88;
        case 0x26ed8cu: goto label_26ed8c;
        case 0x26ed90u: goto label_26ed90;
        case 0x26ed94u: goto label_26ed94;
        case 0x26ed98u: goto label_26ed98;
        case 0x26ed9cu: goto label_26ed9c;
        case 0x26eda0u: goto label_26eda0;
        case 0x26eda4u: goto label_26eda4;
        case 0x26eda8u: goto label_26eda8;
        case 0x26edacu: goto label_26edac;
        case 0x26edb0u: goto label_26edb0;
        case 0x26edb4u: goto label_26edb4;
        case 0x26edb8u: goto label_26edb8;
        case 0x26edbcu: goto label_26edbc;
        case 0x26edc0u: goto label_26edc0;
        case 0x26edc4u: goto label_26edc4;
        case 0x26edc8u: goto label_26edc8;
        case 0x26edccu: goto label_26edcc;
        case 0x26edd0u: goto label_26edd0;
        case 0x26edd4u: goto label_26edd4;
        case 0x26edd8u: goto label_26edd8;
        case 0x26eddcu: goto label_26eddc;
        case 0x26ede0u: goto label_26ede0;
        case 0x26ede4u: goto label_26ede4;
        case 0x26ede8u: goto label_26ede8;
        case 0x26edecu: goto label_26edec;
        case 0x26edf0u: goto label_26edf0;
        case 0x26edf4u: goto label_26edf4;
        case 0x26edf8u: goto label_26edf8;
        case 0x26edfcu: goto label_26edfc;
        case 0x26ee00u: goto label_26ee00;
        case 0x26ee04u: goto label_26ee04;
        case 0x26ee08u: goto label_26ee08;
        case 0x26ee0cu: goto label_26ee0c;
        case 0x26ee10u: goto label_26ee10;
        case 0x26ee14u: goto label_26ee14;
        case 0x26ee18u: goto label_26ee18;
        case 0x26ee1cu: goto label_26ee1c;
        case 0x26ee20u: goto label_26ee20;
        case 0x26ee24u: goto label_26ee24;
        case 0x26ee28u: goto label_26ee28;
        case 0x26ee2cu: goto label_26ee2c;
        case 0x26ee30u: goto label_26ee30;
        case 0x26ee34u: goto label_26ee34;
        case 0x26ee38u: goto label_26ee38;
        case 0x26ee3cu: goto label_26ee3c;
        case 0x26ee40u: goto label_26ee40;
        case 0x26ee44u: goto label_26ee44;
        case 0x26ee48u: goto label_26ee48;
        case 0x26ee4cu: goto label_26ee4c;
        case 0x26ee50u: goto label_26ee50;
        case 0x26ee54u: goto label_26ee54;
        case 0x26ee58u: goto label_26ee58;
        case 0x26ee5cu: goto label_26ee5c;
        case 0x26ee60u: goto label_26ee60;
        case 0x26ee64u: goto label_26ee64;
        case 0x26ee68u: goto label_26ee68;
        case 0x26ee6cu: goto label_26ee6c;
        case 0x26ee70u: goto label_26ee70;
        case 0x26ee74u: goto label_26ee74;
        case 0x26ee78u: goto label_26ee78;
        case 0x26ee7cu: goto label_26ee7c;
        case 0x26ee80u: goto label_26ee80;
        case 0x26ee84u: goto label_26ee84;
        case 0x26ee88u: goto label_26ee88;
        case 0x26ee8cu: goto label_26ee8c;
        case 0x26ee90u: goto label_26ee90;
        case 0x26ee94u: goto label_26ee94;
        case 0x26ee98u: goto label_26ee98;
        case 0x26ee9cu: goto label_26ee9c;
        case 0x26eea0u: goto label_26eea0;
        case 0x26eea4u: goto label_26eea4;
        case 0x26eea8u: goto label_26eea8;
        case 0x26eeacu: goto label_26eeac;
        case 0x26eeb0u: goto label_26eeb0;
        case 0x26eeb4u: goto label_26eeb4;
        case 0x26eeb8u: goto label_26eeb8;
        case 0x26eebcu: goto label_26eebc;
        case 0x26eec0u: goto label_26eec0;
        case 0x26eec4u: goto label_26eec4;
        case 0x26eec8u: goto label_26eec8;
        case 0x26eeccu: goto label_26eecc;
        case 0x26eed0u: goto label_26eed0;
        case 0x26eed4u: goto label_26eed4;
        case 0x26eed8u: goto label_26eed8;
        case 0x26eedcu: goto label_26eedc;
        case 0x26eee0u: goto label_26eee0;
        case 0x26eee4u: goto label_26eee4;
        case 0x26eee8u: goto label_26eee8;
        case 0x26eeecu: goto label_26eeec;
        case 0x26eef0u: goto label_26eef0;
        case 0x26eef4u: goto label_26eef4;
        case 0x26eef8u: goto label_26eef8;
        case 0x26eefcu: goto label_26eefc;
        case 0x26ef00u: goto label_26ef00;
        case 0x26ef04u: goto label_26ef04;
        case 0x26ef08u: goto label_26ef08;
        case 0x26ef0cu: goto label_26ef0c;
        case 0x26ef10u: goto label_26ef10;
        case 0x26ef14u: goto label_26ef14;
        case 0x26ef18u: goto label_26ef18;
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef20u: goto label_26ef20;
        case 0x26ef24u: goto label_26ef24;
        case 0x26ef28u: goto label_26ef28;
        case 0x26ef2cu: goto label_26ef2c;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef34u: goto label_26ef34;
        case 0x26ef38u: goto label_26ef38;
        case 0x26ef3cu: goto label_26ef3c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef44u: goto label_26ef44;
        case 0x26ef48u: goto label_26ef48;
        case 0x26ef4cu: goto label_26ef4c;
        case 0x26ef50u: goto label_26ef50;
        case 0x26ef54u: goto label_26ef54;
        case 0x26ef58u: goto label_26ef58;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef60u: goto label_26ef60;
        case 0x26ef64u: goto label_26ef64;
        case 0x26ef68u: goto label_26ef68;
        case 0x26ef6cu: goto label_26ef6c;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef74u: goto label_26ef74;
        case 0x26ef78u: goto label_26ef78;
        case 0x26ef7cu: goto label_26ef7c;
        case 0x26ef80u: goto label_26ef80;
        case 0x26ef84u: goto label_26ef84;
        case 0x26ef88u: goto label_26ef88;
        case 0x26ef8cu: goto label_26ef8c;
        case 0x26ef90u: goto label_26ef90;
        case 0x26ef94u: goto label_26ef94;
        case 0x26ef98u: goto label_26ef98;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efa0u: goto label_26efa0;
        case 0x26efa4u: goto label_26efa4;
        case 0x26efa8u: goto label_26efa8;
        case 0x26efacu: goto label_26efac;
        case 0x26efb0u: goto label_26efb0;
        case 0x26efb4u: goto label_26efb4;
        case 0x26efb8u: goto label_26efb8;
        case 0x26efbcu: goto label_26efbc;
        case 0x26efc0u: goto label_26efc0;
        case 0x26efc4u: goto label_26efc4;
        case 0x26efc8u: goto label_26efc8;
        case 0x26efccu: goto label_26efcc;
        case 0x26efd0u: goto label_26efd0;
        case 0x26efd4u: goto label_26efd4;
        case 0x26efd8u: goto label_26efd8;
        case 0x26efdcu: goto label_26efdc;
        case 0x26efe0u: goto label_26efe0;
        case 0x26efe4u: goto label_26efe4;
        case 0x26efe8u: goto label_26efe8;
        case 0x26efecu: goto label_26efec;
        case 0x26eff0u: goto label_26eff0;
        case 0x26eff4u: goto label_26eff4;
        case 0x26eff8u: goto label_26eff8;
        case 0x26effcu: goto label_26effc;
        case 0x26f000u: goto label_26f000;
        case 0x26f004u: goto label_26f004;
        case 0x26f008u: goto label_26f008;
        case 0x26f00cu: goto label_26f00c;
        case 0x26f010u: goto label_26f010;
        case 0x26f014u: goto label_26f014;
        case 0x26f018u: goto label_26f018;
        case 0x26f01cu: goto label_26f01c;
        case 0x26f020u: goto label_26f020;
        case 0x26f024u: goto label_26f024;
        case 0x26f028u: goto label_26f028;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f030u: goto label_26f030;
        case 0x26f034u: goto label_26f034;
        case 0x26f038u: goto label_26f038;
        case 0x26f03cu: goto label_26f03c;
        case 0x26f040u: goto label_26f040;
        case 0x26f044u: goto label_26f044;
        case 0x26f048u: goto label_26f048;
        case 0x26f04cu: goto label_26f04c;
        case 0x26f050u: goto label_26f050;
        case 0x26f054u: goto label_26f054;
        case 0x26f058u: goto label_26f058;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f060u: goto label_26f060;
        case 0x26f064u: goto label_26f064;
        case 0x26f068u: goto label_26f068;
        case 0x26f06cu: goto label_26f06c;
        case 0x26f070u: goto label_26f070;
        case 0x26f074u: goto label_26f074;
        case 0x26f078u: goto label_26f078;
        case 0x26f07cu: goto label_26f07c;
        case 0x26f080u: goto label_26f080;
        case 0x26f084u: goto label_26f084;
        case 0x26f088u: goto label_26f088;
        case 0x26f08cu: goto label_26f08c;
        case 0x26f090u: goto label_26f090;
        case 0x26f094u: goto label_26f094;
        case 0x26f098u: goto label_26f098;
        case 0x26f09cu: goto label_26f09c;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f0a4u: goto label_26f0a4;
        case 0x26f0a8u: goto label_26f0a8;
        case 0x26f0acu: goto label_26f0ac;
        case 0x26f0b0u: goto label_26f0b0;
        case 0x26f0b4u: goto label_26f0b4;
        case 0x26f0b8u: goto label_26f0b8;
        case 0x26f0bcu: goto label_26f0bc;
        case 0x26f0c0u: goto label_26f0c0;
        case 0x26f0c4u: goto label_26f0c4;
        case 0x26f0c8u: goto label_26f0c8;
        case 0x26f0ccu: goto label_26f0cc;
        case 0x26f0d0u: goto label_26f0d0;
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f0d8u: goto label_26f0d8;
        case 0x26f0dcu: goto label_26f0dc;
        case 0x26f0e0u: goto label_26f0e0;
        case 0x26f0e4u: goto label_26f0e4;
        case 0x26f0e8u: goto label_26f0e8;
        case 0x26f0ecu: goto label_26f0ec;
        case 0x26f0f0u: goto label_26f0f0;
        case 0x26f0f4u: goto label_26f0f4;
        case 0x26f0f8u: goto label_26f0f8;
        case 0x26f0fcu: goto label_26f0fc;
        case 0x26f100u: goto label_26f100;
        case 0x26f104u: goto label_26f104;
        case 0x26f108u: goto label_26f108;
        case 0x26f10cu: goto label_26f10c;
        case 0x26f110u: goto label_26f110;
        case 0x26f114u: goto label_26f114;
        case 0x26f118u: goto label_26f118;
        case 0x26f11cu: goto label_26f11c;
        case 0x26f120u: goto label_26f120;
        case 0x26f124u: goto label_26f124;
        case 0x26f128u: goto label_26f128;
        case 0x26f12cu: goto label_26f12c;
        case 0x26f130u: goto label_26f130;
        case 0x26f134u: goto label_26f134;
        case 0x26f138u: goto label_26f138;
        case 0x26f13cu: goto label_26f13c;
        case 0x26f140u: goto label_26f140;
        case 0x26f144u: goto label_26f144;
        case 0x26f148u: goto label_26f148;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f150u: goto label_26f150;
        case 0x26f154u: goto label_26f154;
        case 0x26f158u: goto label_26f158;
        case 0x26f15cu: goto label_26f15c;
        case 0x26f160u: goto label_26f160;
        case 0x26f164u: goto label_26f164;
        case 0x26f168u: goto label_26f168;
        case 0x26f16cu: goto label_26f16c;
        case 0x26f170u: goto label_26f170;
        case 0x26f174u: goto label_26f174;
        case 0x26f178u: goto label_26f178;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f180u: goto label_26f180;
        case 0x26f184u: goto label_26f184;
        case 0x26f188u: goto label_26f188;
        case 0x26f18cu: goto label_26f18c;
        case 0x26f190u: goto label_26f190;
        case 0x26f194u: goto label_26f194;
        case 0x26f198u: goto label_26f198;
        case 0x26f19cu: goto label_26f19c;
        case 0x26f1a0u: goto label_26f1a0;
        case 0x26f1a4u: goto label_26f1a4;
        case 0x26f1a8u: goto label_26f1a8;
        case 0x26f1acu: goto label_26f1ac;
        case 0x26f1b0u: goto label_26f1b0;
        case 0x26f1b4u: goto label_26f1b4;
        case 0x26f1b8u: goto label_26f1b8;
        case 0x26f1bcu: goto label_26f1bc;
        case 0x26f1c0u: goto label_26f1c0;
        case 0x26f1c4u: goto label_26f1c4;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f1ccu: goto label_26f1cc;
        case 0x26f1d0u: goto label_26f1d0;
        case 0x26f1d4u: goto label_26f1d4;
        case 0x26f1d8u: goto label_26f1d8;
        case 0x26f1dcu: goto label_26f1dc;
        case 0x26f1e0u: goto label_26f1e0;
        case 0x26f1e4u: goto label_26f1e4;
        case 0x26f1e8u: goto label_26f1e8;
        case 0x26f1ecu: goto label_26f1ec;
        case 0x26f1f0u: goto label_26f1f0;
        case 0x26f1f4u: goto label_26f1f4;
        case 0x26f1f8u: goto label_26f1f8;
        case 0x26f1fcu: goto label_26f1fc;
        case 0x26f200u: goto label_26f200;
        case 0x26f204u: goto label_26f204;
        case 0x26f208u: goto label_26f208;
        case 0x26f20cu: goto label_26f20c;
        case 0x26f210u: goto label_26f210;
        case 0x26f214u: goto label_26f214;
        case 0x26f218u: goto label_26f218;
        case 0x26f21cu: goto label_26f21c;
        case 0x26f220u: goto label_26f220;
        case 0x26f224u: goto label_26f224;
        case 0x26f228u: goto label_26f228;
        case 0x26f22cu: goto label_26f22c;
        case 0x26f230u: goto label_26f230;
        case 0x26f234u: goto label_26f234;
        case 0x26f238u: goto label_26f238;
        case 0x26f23cu: goto label_26f23c;
        case 0x26f240u: goto label_26f240;
        case 0x26f244u: goto label_26f244;
        case 0x26f248u: goto label_26f248;
        case 0x26f24cu: goto label_26f24c;
        case 0x26f250u: goto label_26f250;
        case 0x26f254u: goto label_26f254;
        case 0x26f258u: goto label_26f258;
        case 0x26f25cu: goto label_26f25c;
        case 0x26f260u: goto label_26f260;
        case 0x26f264u: goto label_26f264;
        case 0x26f268u: goto label_26f268;
        case 0x26f26cu: goto label_26f26c;
        case 0x26f270u: goto label_26f270;
        case 0x26f274u: goto label_26f274;
        case 0x26f278u: goto label_26f278;
        case 0x26f27cu: goto label_26f27c;
        case 0x26f280u: goto label_26f280;
        case 0x26f284u: goto label_26f284;
        case 0x26f288u: goto label_26f288;
        case 0x26f28cu: goto label_26f28c;
        case 0x26f290u: goto label_26f290;
        case 0x26f294u: goto label_26f294;
        case 0x26f298u: goto label_26f298;
        case 0x26f29cu: goto label_26f29c;
        case 0x26f2a0u: goto label_26f2a0;
        case 0x26f2a4u: goto label_26f2a4;
        case 0x26f2a8u: goto label_26f2a8;
        case 0x26f2acu: goto label_26f2ac;
        case 0x26f2b0u: goto label_26f2b0;
        case 0x26f2b4u: goto label_26f2b4;
        case 0x26f2b8u: goto label_26f2b8;
        case 0x26f2bcu: goto label_26f2bc;
        case 0x26f2c0u: goto label_26f2c0;
        case 0x26f2c4u: goto label_26f2c4;
        case 0x26f2c8u: goto label_26f2c8;
        case 0x26f2ccu: goto label_26f2cc;
        case 0x26f2d0u: goto label_26f2d0;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2d8u: goto label_26f2d8;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f2e0u: goto label_26f2e0;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f2f0u: goto label_26f2f0;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f2f8u: goto label_26f2f8;
        case 0x26f2fcu: goto label_26f2fc;
        case 0x26f300u: goto label_26f300;
        case 0x26f304u: goto label_26f304;
        case 0x26f308u: goto label_26f308;
        case 0x26f30cu: goto label_26f30c;
        case 0x26f310u: goto label_26f310;
        case 0x26f314u: goto label_26f314;
        case 0x26f318u: goto label_26f318;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f320u: goto label_26f320;
        case 0x26f324u: goto label_26f324;
        case 0x26f328u: goto label_26f328;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f330u: goto label_26f330;
        case 0x26f334u: goto label_26f334;
        case 0x26f338u: goto label_26f338;
        case 0x26f33cu: goto label_26f33c;
        case 0x26f340u: goto label_26f340;
        case 0x26f344u: goto label_26f344;
        case 0x26f348u: goto label_26f348;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f350u: goto label_26f350;
        case 0x26f354u: goto label_26f354;
        case 0x26f358u: goto label_26f358;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f360u: goto label_26f360;
        case 0x26f364u: goto label_26f364;
        case 0x26f368u: goto label_26f368;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f370u: goto label_26f370;
        case 0x26f374u: goto label_26f374;
        case 0x26f378u: goto label_26f378;
        case 0x26f37cu: goto label_26f37c;
        case 0x26f380u: goto label_26f380;
        case 0x26f384u: goto label_26f384;
        case 0x26f388u: goto label_26f388;
        case 0x26f38cu: goto label_26f38c;
        case 0x26f390u: goto label_26f390;
        case 0x26f394u: goto label_26f394;
        case 0x26f398u: goto label_26f398;
        case 0x26f39cu: goto label_26f39c;
        case 0x26f3a0u: goto label_26f3a0;
        case 0x26f3a4u: goto label_26f3a4;
        case 0x26f3a8u: goto label_26f3a8;
        case 0x26f3acu: goto label_26f3ac;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f3bcu: goto label_26f3bc;
        case 0x26f3c0u: goto label_26f3c0;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f3c8u: goto label_26f3c8;
        case 0x26f3ccu: goto label_26f3cc;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3d4u: goto label_26f3d4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f3dcu: goto label_26f3dc;
        case 0x26f3e0u: goto label_26f3e0;
        case 0x26f3e4u: goto label_26f3e4;
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        default: return;
    }

label_26ed78:
    // 0x26ed78: 0x0  nop
    ctx->pc = 0x26ed78u;
    // NOP
label_26ed7c:
    // 0x26ed7c: 0x0  nop
    ctx->pc = 0x26ed7cu;
    // NOP
label_26ed80:
    // 0x26ed80: 0x4a81  .word       0x00004A81                   # INVALID     $zero, $zero, 0x4A81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ed80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26ED80 raw=0x00004A81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ed84:
    // 0x26ed84: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26ed88:
    // 0x26ed88: 0x0  nop
    ctx->pc = 0x26ed88u;
    // NOP
label_26ed8c:
    // 0x26ed8c: 0x0  nop
    ctx->pc = 0x26ed8cu;
    // NOP
label_26ed90:
    // 0x26ed90: 0x4a88  .word       0x00004A88                   # jr          $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
label_26ed94:
    if (ctx->pc == 0x26ED94u) {
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x2700  sll         $a0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED98u;
        goto label_26ed98;
    }
    ctx->pc = 0x26ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x2700  sll         $a0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26ED98u;
label_26ed98:
    // 0x26ed98: 0x0  nop
    ctx->pc = 0x26ed98u;
    // NOP
label_26ed9c:
    // 0x26ed9c: 0x0  nop
    ctx->pc = 0x26ed9cu;
    // NOP
label_26eda0:
    // 0x26eda0: 0x4a8d  break       0, 298
    ctx->pc = 0x26eda0u;
    runtime->handleBreak(rdram, ctx);
label_26eda4:
    // 0x26eda4: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x26eda4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eda8:
    // 0x26eda8: 0x0  nop
    ctx->pc = 0x26eda8u;
    // NOP
label_26edac:
    // 0x26edac: 0x0  nop
    ctx->pc = 0x26edacu;
    // NOP
label_26edb0:
    // 0x26edb0: 0x4a97  .word       0x00004A97                   # dsrav       $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26edb4:
    // 0x26edb4: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x26edb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26edb8:
    // 0x26edb8: 0x0  nop
    ctx->pc = 0x26edb8u;
    // NOP
label_26edbc:
    // 0x26edbc: 0x0  nop
    ctx->pc = 0x26edbcu;
    // NOP
label_26edc0:
    // 0x26edc0: 0x4a9d  .word       0x00004A9D                   # dmultu      $zero, $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26EDC0 raw=0x00004A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26edc4:
    // 0x26edc4: 0x2220  .word       0x00002220                   # add         $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26edc8:
    // 0x26edc8: 0x0  nop
    ctx->pc = 0x26edc8u;
    // NOP
label_26edcc:
    // 0x26edcc: 0x0  nop
    ctx->pc = 0x26edccu;
    // NOP
label_26edd0:
    // 0x26edd0: 0x4aa2  .word       0x00004AA2                   # neg         $t1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26edd4:
    // 0x26edd4: 0x8cd0  .word       0x00008CD0                   # mfhi        $s1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edd4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26edd8:
    // 0x26edd8: 0x0  nop
    ctx->pc = 0x26edd8u;
    // NOP
label_26eddc:
    // 0x26eddc: 0x0  nop
    ctx->pc = 0x26eddcu;
    // NOP
label_26ede0:
    // 0x26ede0: 0x4ab4  teq         $zero, $zero, 298
    ctx->pc = 0x26ede0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ede4:
    // 0x26ede4: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x26ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26ede8:
    // 0x26ede8: 0x0  nop
    ctx->pc = 0x26ede8u;
    // NOP
label_26edec:
    // 0x26edec: 0x0  nop
    ctx->pc = 0x26edecu;
    // NOP
label_26edf0:
    // 0x26edf0: 0x4aba  dsrl        $t1, $zero, 10
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 10);
label_26edf4:
    // 0x26edf4: 0x2d20  .word       0x00002D20                   # add         $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26edf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26edf8:
    // 0x26edf8: 0x0  nop
    ctx->pc = 0x26edf8u;
    // NOP
label_26edfc:
    // 0x26edfc: 0x0  nop
    ctx->pc = 0x26edfcu;
    // NOP
label_26ee00:
    // 0x26ee00: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x26ee00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26ee04:
    // 0x26ee04: 0x3b50  .word       0x00003B50                   # mfhi        $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ee08:
    // 0x26ee08: 0x0  nop
    ctx->pc = 0x26ee08u;
    // NOP
label_26ee0c:
    // 0x26ee0c: 0x0  nop
    ctx->pc = 0x26ee0cu;
    // NOP
label_26ee10:
    // 0x26ee10: 0x4ac8  .word       0x00004AC8                   # jr          $zero # 00004AC0 <InstrIdType: CPU_SPECIAL>
label_26ee14:
    if (ctx->pc == 0x26EE14u) {
        ctx->pc = 0x26EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE10u;
        // 0x26ee14: 0x3cc0  sll         $a3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE18u;
        goto label_26ee18;
    }
    ctx->pc = 0x26EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE10u;
        // 0x26ee14: 0x3cc0  sll         $a3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EE18u;
label_26ee18:
    // 0x26ee18: 0x0  nop
    ctx->pc = 0x26ee18u;
    // NOP
label_26ee1c:
    // 0x26ee1c: 0x0  nop
    ctx->pc = 0x26ee1cu;
    // NOP
label_26ee20:
    // 0x26ee20: 0x4ad0  .word       0x00004AD0                   # mfhi        $t1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ee24:
    // 0x26ee24: 0x2d60  .word       0x00002D60                   # add         $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ee28:
    // 0x26ee28: 0x0  nop
    ctx->pc = 0x26ee28u;
    // NOP
label_26ee2c:
    // 0x26ee2c: 0x0  nop
    ctx->pc = 0x26ee2cu;
    // NOP
label_26ee30:
    // 0x26ee30: 0x4ad6  .word       0x00004AD6                   # dsrlv       $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ee34:
    // 0x26ee34: 0x3d20  .word       0x00003D20                   # add         $a3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26ee38:
    // 0x26ee38: 0x0  nop
    ctx->pc = 0x26ee38u;
    // NOP
label_26ee3c:
    // 0x26ee3c: 0x0  nop
    ctx->pc = 0x26ee3cu;
    // NOP
label_26ee40:
    // 0x26ee40: 0x4ade  .word       0x00004ADE                   # ddiv        $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26EE40 raw=0x00004ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ee44:
    // 0x26ee44: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26ee48:
    // 0x26ee48: 0x0  nop
    ctx->pc = 0x26ee48u;
    // NOP
label_26ee4c:
    // 0x26ee4c: 0x0  nop
    ctx->pc = 0x26ee4cu;
    // NOP
label_26ee50:
    // 0x26ee50: 0x4aec  .word       0x00004AEC                   # dadd        $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26ee54:
    // 0x26ee54: 0x2820  add         $a1, $zero, $zero
    ctx->pc = 0x26ee54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ee58:
    // 0x26ee58: 0x0  nop
    ctx->pc = 0x26ee58u;
    // NOP
label_26ee5c:
    // 0x26ee5c: 0x0  nop
    ctx->pc = 0x26ee5cu;
    // NOP
label_26ee60:
    // 0x26ee60: 0x4af2  tlt         $zero, $zero, 299
    ctx->pc = 0x26ee60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ee64:
    // 0x26ee64: 0x3ad0  .word       0x00003AD0                   # mfhi        $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee64u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ee68:
    // 0x26ee68: 0x0  nop
    ctx->pc = 0x26ee68u;
    // NOP
label_26ee6c:
    // 0x26ee6c: 0x0  nop
    ctx->pc = 0x26ee6cu;
    // NOP
label_26ee70:
    // 0x26ee70: 0x4afa  dsrl        $t1, $zero, 11
    ctx->pc = 0x26ee70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 11);
label_26ee74:
    // 0x26ee74: 0x4f60  .word       0x00004F60                   # add         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ee78:
    // 0x26ee78: 0x0  nop
    ctx->pc = 0x26ee78u;
    // NOP
label_26ee7c:
    // 0x26ee7c: 0x0  nop
    ctx->pc = 0x26ee7cu;
    // NOP
label_26ee80:
    // 0x26ee80: 0x4b04  .word       0x00004B04                   # sllv        $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ee84:
    // 0x26ee84: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ee84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26ee88:
    // 0x26ee88: 0x0  nop
    ctx->pc = 0x26ee88u;
    // NOP
label_26ee8c:
    // 0x26ee8c: 0x0  nop
    ctx->pc = 0x26ee8cu;
    // NOP
label_26ee90:
    // 0x26ee90: 0x4b0d  break       0, 300
    ctx->pc = 0x26ee90u;
    runtime->handleBreak(rdram, ctx);
label_26ee94:
    // 0x26ee94: 0x26c0  sll         $a0, $zero, 27
    ctx->pc = 0x26ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26ee98:
    // 0x26ee98: 0x0  nop
    ctx->pc = 0x26ee98u;
    // NOP
label_26ee9c:
    // 0x26ee9c: 0x0  nop
    ctx->pc = 0x26ee9cu;
    // NOP
label_26eea0:
    // 0x26eea0: 0x4b12  .word       0x00004B12                   # mflo        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eea0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26eea4:
    // 0x26eea4: 0x24c0  sll         $a0, $zero, 19
    ctx->pc = 0x26eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eea8:
    // 0x26eea8: 0x0  nop
    ctx->pc = 0x26eea8u;
    // NOP
label_26eeac:
    // 0x26eeac: 0x0  nop
    ctx->pc = 0x26eeacu;
    // NOP
label_26eeb0:
    // 0x26eeb0: 0x4b17  .word       0x00004B17                   # dsrav       $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eeb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26eeb4:
    // 0x26eeb4: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26eeb8:
    // 0x26eeb8: 0x0  nop
    ctx->pc = 0x26eeb8u;
    // NOP
label_26eebc:
    // 0x26eebc: 0x0  nop
    ctx->pc = 0x26eebcu;
    // NOP
label_26eec0:
    // 0x26eec0: 0x4b2d  .word       0x00004B2D                   # daddu       $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eec4:
    // 0x26eec4: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26eec8:
    // 0x26eec8: 0x0  nop
    ctx->pc = 0x26eec8u;
    // NOP
label_26eecc:
    // 0x26eecc: 0x0  nop
    ctx->pc = 0x26eeccu;
    // NOP
label_26eed0:
    // 0x26eed0: 0x4b37  .word       0x00004B37                   # INVALID     $zero, $zero, 0x4B37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26EED0 raw=0x00004B37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eed4:
    // 0x26eed4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x26eed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eed8:
    // 0x26eed8: 0x0  nop
    ctx->pc = 0x26eed8u;
    // NOP
label_26eedc:
    // 0x26eedc: 0x0  nop
    ctx->pc = 0x26eedcu;
    // NOP
label_26eee0:
    // 0x26eee0: 0x4b47  .word       0x00004B47                   # srav        $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eee0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26eee4:
    // 0x26eee4: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x26eee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eee8:
    // 0x26eee8: 0x0  nop
    ctx->pc = 0x26eee8u;
    // NOP
label_26eeec:
    // 0x26eeec: 0x0  nop
    ctx->pc = 0x26eeecu;
    // NOP
label_26eef0:
    // 0x26eef0: 0x4b52  .word       0x00004B52                   # mflo        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eef0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26eef4:
    // 0x26eef4: 0xa020  add         $s4, $zero, $zero
    ctx->pc = 0x26eef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26eef8:
    // 0x26eef8: 0x0  nop
    ctx->pc = 0x26eef8u;
    // NOP
label_26eefc:
    // 0x26eefc: 0x0  nop
    ctx->pc = 0x26eefcu;
    // NOP
label_26ef00:
    // 0x26ef00: 0x4b67  .word       0x00004B67                   # not         $t1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef00u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ef04:
    // 0x26ef04: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26ef08:
    // 0x26ef08: 0x0  nop
    ctx->pc = 0x26ef08u;
    // NOP
label_26ef0c:
    // 0x26ef0c: 0x0  nop
    ctx->pc = 0x26ef0cu;
    // NOP
label_26ef10:
    // 0x26ef10: 0x4b7b  dsra        $t1, $zero, 13
    ctx->pc = 0x26ef10u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 13);
label_26ef14:
    // 0x26ef14: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x26ef14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26ef18:
    // 0x26ef18: 0x0  nop
    ctx->pc = 0x26ef18u;
    // NOP
label_26ef1c:
    // 0x26ef1c: 0x0  nop
    ctx->pc = 0x26ef1cu;
    // NOP
label_26ef20:
    // 0x26ef20: 0x4b90  .word       0x00004B90                   # mfhi        $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef24:
    // 0x26ef24: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26ef28:
    // 0x26ef28: 0x0  nop
    ctx->pc = 0x26ef28u;
    // NOP
label_26ef2c:
    // 0x26ef2c: 0x0  nop
    ctx->pc = 0x26ef2cu;
    // NOP
label_26ef30:
    // 0x26ef30: 0x4ba7  .word       0x00004BA7                   # not         $t1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ef34:
    // 0x26ef34: 0x4b50  .word       0x00004B50                   # mfhi        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef38:
    // 0x26ef38: 0x0  nop
    ctx->pc = 0x26ef38u;
    // NOP
label_26ef3c:
    // 0x26ef3c: 0x0  nop
    ctx->pc = 0x26ef3cu;
    // NOP
label_26ef40:
    // 0x26ef40: 0x4bb1  tgeu        $zero, $zero, 302
    ctx->pc = 0x26ef40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef44:
    // 0x26ef44: 0xf230  tge         $zero, $zero, 968
    ctx->pc = 0x26ef44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef48:
    // 0x26ef48: 0x0  nop
    ctx->pc = 0x26ef48u;
    // NOP
label_26ef4c:
    // 0x26ef4c: 0x0  nop
    ctx->pc = 0x26ef4cu;
    // NOP
label_26ef50:
    // 0x26ef50: 0x4bd0  .word       0x00004BD0                   # mfhi        $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef54:
    // 0x26ef54: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26ef58:
    // 0x26ef58: 0x0  nop
    ctx->pc = 0x26ef58u;
    // NOP
label_26ef5c:
    // 0x26ef5c: 0x0  nop
    ctx->pc = 0x26ef5cu;
    // NOP
label_26ef60:
    // 0x26ef60: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ef64:
    // 0x26ef64: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26ef68:
    // 0x26ef68: 0x0  nop
    ctx->pc = 0x26ef68u;
    // NOP
label_26ef6c:
    // 0x26ef6c: 0x0  nop
    ctx->pc = 0x26ef6cu;
    // NOP
label_26ef70:
    // 0x26ef70: 0x4bf5  .word       0x00004BF5                   # INVALID     $zero, $zero, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26EF70 raw=0x00004BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ef74:
    // 0x26ef74: 0x8270  tge         $zero, $zero, 521
    ctx->pc = 0x26ef74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef78:
    // 0x26ef78: 0x0  nop
    ctx->pc = 0x26ef78u;
    // NOP
label_26ef7c:
    // 0x26ef7c: 0x0  nop
    ctx->pc = 0x26ef7cu;
    // NOP
label_26ef80:
    // 0x26ef80: 0x4c06  .word       0x00004C06                   # srlv        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ef84:
    // 0x26ef84: 0x88a0  .word       0x000088A0                   # add         $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26ef88:
    // 0x26ef88: 0x0  nop
    ctx->pc = 0x26ef88u;
    // NOP
label_26ef8c:
    // 0x26ef8c: 0x0  nop
    ctx->pc = 0x26ef8cu;
    // NOP
label_26ef90:
    // 0x26ef90: 0x4c18  .word       0x00004C18                   # mult        $t1, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ef90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ef94:
    // 0x26ef94: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x26ef94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef98:
    // 0x26ef98: 0x0  nop
    ctx->pc = 0x26ef98u;
    // NOP
label_26ef9c:
    // 0x26ef9c: 0x0  nop
    ctx->pc = 0x26ef9cu;
    // NOP
label_26efa0:
    // 0x26efa0: 0x4c2b  .word       0x00004C2B                   # sltu        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26efa4:
    // 0x26efa4: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26efa8:
    // 0x26efa8: 0x0  nop
    ctx->pc = 0x26efa8u;
    // NOP
label_26efac:
    // 0x26efac: 0x0  nop
    ctx->pc = 0x26efacu;
    // NOP
label_26efb0:
    // 0x26efb0: 0x4c33  tltu        $zero, $zero, 304
    ctx->pc = 0x26efb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb4:
    // 0x26efb4: 0x96f0  tge         $zero, $zero, 603
    ctx->pc = 0x26efb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb8:
    // 0x26efb8: 0x0  nop
    ctx->pc = 0x26efb8u;
    // NOP
label_26efbc:
    // 0x26efbc: 0x0  nop
    ctx->pc = 0x26efbcu;
    // NOP
label_26efc0:
    // 0x26efc0: 0x4c46  .word       0x00004C46                   # srlv        $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26efc4:
    // 0x26efc4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x26efc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efc8:
    // 0x26efc8: 0x0  nop
    ctx->pc = 0x26efc8u;
    // NOP
label_26efcc:
    // 0x26efcc: 0x0  nop
    ctx->pc = 0x26efccu;
    // NOP
label_26efd0:
    // 0x26efd0: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26efd4:
    // 0x26efd4: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26efd8:
    // 0x26efd8: 0x0  nop
    ctx->pc = 0x26efd8u;
    // NOP
label_26efdc:
    // 0x26efdc: 0x0  nop
    ctx->pc = 0x26efdcu;
    // NOP
label_26efe0:
    // 0x26efe0: 0x4c6f  .word       0x00004C6F                   # dsubu       $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26efe4:
    // 0x26efe4: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x26efe4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26efe8:
    // 0x26efe8: 0x0  nop
    ctx->pc = 0x26efe8u;
    // NOP
label_26efec:
    // 0x26efec: 0x0  nop
    ctx->pc = 0x26efecu;
    // NOP
label_26eff0:
    // 0x26eff0: 0x4c7a  dsrl        $t1, $zero, 17
    ctx->pc = 0x26eff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 17);
label_26eff4:
    // 0x26eff4: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x26eff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26eff8:
    // 0x26eff8: 0x0  nop
    ctx->pc = 0x26eff8u;
    // NOP
label_26effc:
    // 0x26effc: 0x0  nop
    ctx->pc = 0x26effcu;
    // NOP
label_26f000:
    // 0x26f000: 0x4c8c  syscall     306
    ctx->pc = 0x26f000u;
    ctx->pc = 0x26F004u;
runtime->handleSyscall(rdram, ctx, 0x132u);
label_26f004:
    // 0x26f004: 0xa800  sll         $s5, $zero, 0
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26f008:
    // 0x26f008: 0x0  nop
    ctx->pc = 0x26f008u;
    // NOP
label_26f00c:
    // 0x26f00c: 0x0  nop
    ctx->pc = 0x26f00cu;
    // NOP
label_26f010:
    // 0x26f010: 0x4ca1  .word       0x00004CA1                   # addu        $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f014:
    // 0x26f014: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26f018:
    // 0x26f018: 0x0  nop
    ctx->pc = 0x26f018u;
    // NOP
label_26f01c:
    // 0x26f01c: 0x0  nop
    ctx->pc = 0x26f01cu;
    // NOP
label_26f020:
    // 0x26f020: 0x4cb1  tgeu        $zero, $zero, 306
    ctx->pc = 0x26f020u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f024:
    // 0x26f024: 0x70c0  sll         $t6, $zero, 3
    ctx->pc = 0x26f024u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f028:
    // 0x26f028: 0x0  nop
    ctx->pc = 0x26f028u;
    // NOP
label_26f02c:
    // 0x26f02c: 0x0  nop
    ctx->pc = 0x26f02cu;
    // NOP
label_26f030:
    // 0x26f030: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x26f030u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f034:
    // 0x26f034: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f038:
    // 0x26f038: 0x0  nop
    ctx->pc = 0x26f038u;
    // NOP
label_26f03c:
    // 0x26f03c: 0x0  nop
    ctx->pc = 0x26f03cu;
    // NOP
label_26f040:
    // 0x26f040: 0x4ccd  break       0, 307
    ctx->pc = 0x26f040u;
    runtime->handleBreak(rdram, ctx);
label_26f044:
    // 0x26f044: 0x9f70  tge         $zero, $zero, 637
    ctx->pc = 0x26f044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f048:
    // 0x26f048: 0x0  nop
    ctx->pc = 0x26f048u;
    // NOP
label_26f04c:
    // 0x26f04c: 0x0  nop
    ctx->pc = 0x26f04cu;
    // NOP
label_26f050:
    // 0x26f050: 0x4ce1  .word       0x00004CE1                   # addu        $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f054:
    // 0x26f054: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26f054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f058:
    // 0x26f058: 0x0  nop
    ctx->pc = 0x26f058u;
    // NOP
label_26f05c:
    // 0x26f05c: 0x0  nop
    ctx->pc = 0x26f05cu;
    // NOP
label_26f060:
    // 0x26f060: 0x4cf5  .word       0x00004CF5                   # INVALID     $zero, $zero, 0x4CF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26F060 raw=0x00004CF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f064:
    // 0x26f064: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26f068:
    // 0x26f068: 0x0  nop
    ctx->pc = 0x26f068u;
    // NOP
label_26f06c:
    // 0x26f06c: 0x0  nop
    ctx->pc = 0x26f06cu;
    // NOP
label_26f070:
    // 0x26f070: 0x4d0a  .word       0x00004D0A                   # movz        $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f070u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f074:
    // 0x26f074: 0x3fa0  .word       0x00003FA0                   # add         $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f078:
    // 0x26f078: 0x0  nop
    ctx->pc = 0x26f078u;
    // NOP
label_26f07c:
    // 0x26f07c: 0x0  nop
    ctx->pc = 0x26f07cu;
    // NOP
label_26f080:
    // 0x26f080: 0x4d12  .word       0x00004D12                   # mflo        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f080u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26f084:
    // 0x26f084: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x26f084u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26f088:
    // 0x26f088: 0x0  nop
    ctx->pc = 0x26f088u;
    // NOP
label_26f08c:
    // 0x26f08c: 0x0  nop
    ctx->pc = 0x26f08cu;
    // NOP
label_26f090:
    // 0x26f090: 0x4d25  .word       0x00004D25                   # move        $t1, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f094:
    // 0x26f094: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x26f094u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f098:
    // 0x26f098: 0x0  nop
    ctx->pc = 0x26f098u;
    // NOP
label_26f09c:
    // 0x26f09c: 0x0  nop
    ctx->pc = 0x26f09cu;
    // NOP
label_26f0a0:
    // 0x26f0a0: 0x4d30  tge         $zero, $zero, 308
    ctx->pc = 0x26f0a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f0a4:
    // 0x26f0a4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26f0a8:
    // 0x26f0a8: 0x0  nop
    ctx->pc = 0x26f0a8u;
    // NOP
label_26f0ac:
    // 0x26f0ac: 0x0  nop
    ctx->pc = 0x26f0acu;
    // NOP
label_26f0b0:
    // 0x26f0b0: 0x4d3e  dsrl32      $t1, $zero, 20
    ctx->pc = 0x26f0b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 20));
label_26f0b4:
    // 0x26f0b4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0b4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26f0b8:
    // 0x26f0b8: 0x0  nop
    ctx->pc = 0x26f0b8u;
    // NOP
label_26f0bc:
    // 0x26f0bc: 0x0  nop
    ctx->pc = 0x26f0bcu;
    // NOP
label_26f0c0:
    // 0x26f0c0: 0x4d4f  .word       0x00004D4F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f0c4:
    // 0x26f0c4: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f0c8:
    // 0x26f0c8: 0x0  nop
    ctx->pc = 0x26f0c8u;
    // NOP
label_26f0cc:
    // 0x26f0cc: 0x0  nop
    ctx->pc = 0x26f0ccu;
    // NOP
label_26f0d0:
    // 0x26f0d0: 0x4d58  .word       0x00004D58                   # mult        $t1, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f0d4:
    // 0x26f0d4: 0x11120  .word       0x00011120                   # add         $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f0d8:
    // 0x26f0d8: 0x0  nop
    ctx->pc = 0x26f0d8u;
    // NOP
label_26f0dc:
    // 0x26f0dc: 0x0  nop
    ctx->pc = 0x26f0dcu;
    // NOP
label_26f0e0:
    // 0x26f0e0: 0x4d7b  dsra        $t1, $zero, 21
    ctx->pc = 0x26f0e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 21);
label_26f0e4:
    // 0x26f0e4: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26f0e8:
    // 0x26f0e8: 0x0  nop
    ctx->pc = 0x26f0e8u;
    // NOP
label_26f0ec:
    // 0x26f0ec: 0x0  nop
    ctx->pc = 0x26f0ecu;
    // NOP
label_26f0f0:
    // 0x26f0f0: 0x4d8c  syscall     310
    ctx->pc = 0x26f0f0u;
    ctx->pc = 0x26F0F4u;
runtime->handleSyscall(rdram, ctx, 0x136u);
label_26f0f4:
    // 0x26f0f4: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x26f0f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26f0f8:
    // 0x26f0f8: 0x0  nop
    ctx->pc = 0x26f0f8u;
    // NOP
label_26f0fc:
    // 0x26f0fc: 0x0  nop
    ctx->pc = 0x26f0fcu;
    // NOP
label_26f100:
    // 0x26f100: 0x4d99  .word       0x00004D99                   # multu       $zero, $zero # 00004D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f100u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f104:
    // 0x26f104: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x26f104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f108:
    // 0x26f108: 0x0  nop
    ctx->pc = 0x26f108u;
    // NOP
label_26f10c:
    // 0x26f10c: 0x0  nop
    ctx->pc = 0x26f10cu;
    // NOP
label_26f110:
    // 0x26f110: 0x4daa  .word       0x00004DAA                   # slt         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f110u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26f114:
    // 0x26f114: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f118:
    // 0x26f118: 0x0  nop
    ctx->pc = 0x26f118u;
    // NOP
label_26f11c:
    // 0x26f11c: 0x0  nop
    ctx->pc = 0x26f11cu;
    // NOP
label_26f120:
    // 0x26f120: 0x4db4  teq         $zero, $zero, 310
    ctx->pc = 0x26f120u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f124:
    // 0x26f124: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x26f124u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26f128:
    // 0x26f128: 0x0  nop
    ctx->pc = 0x26f128u;
    // NOP
label_26f12c:
    // 0x26f12c: 0x0  nop
    ctx->pc = 0x26f12cu;
    // NOP
label_26f130:
    // 0x26f130: 0x4dca  .word       0x00004DCA                   # movz        $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f130u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f134:
    // 0x26f134: 0x9ad0  .word       0x00009AD0                   # mfhi        $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26f138:
    // 0x26f138: 0x0  nop
    ctx->pc = 0x26f138u;
    // NOP
label_26f13c:
    // 0x26f13c: 0x0  nop
    ctx->pc = 0x26f13cu;
    // NOP
label_26f140:
    // 0x26f140: 0x4dde  .word       0x00004DDE                   # ddiv        $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F140 raw=0x00004DDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f144:
    // 0x26f144: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26f148:
    // 0x26f148: 0x0  nop
    ctx->pc = 0x26f148u;
    // NOP
label_26f14c:
    // 0x26f14c: 0x0  nop
    ctx->pc = 0x26f14cu;
    // NOP
label_26f150:
    // 0x26f150: 0x4ded  .word       0x00004DED                   # daddu       $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f154:
    // 0x26f154: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26f158:
    // 0x26f158: 0x0  nop
    ctx->pc = 0x26f158u;
    // NOP
label_26f15c:
    // 0x26f15c: 0x0  nop
    ctx->pc = 0x26f15cu;
    // NOP
label_26f160:
    // 0x26f160: 0x4dfb  dsra        $t1, $zero, 23
    ctx->pc = 0x26f160u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 23);
label_26f164:
    // 0x26f164: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f168:
    // 0x26f168: 0x0  nop
    ctx->pc = 0x26f168u;
    // NOP
label_26f16c:
    // 0x26f16c: 0x0  nop
    ctx->pc = 0x26f16cu;
    // NOP
label_26f170:
    // 0x26f170: 0x4e04  .word       0x00004E04                   # sllv        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f170u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f174:
    // 0x26f174: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f178:
    // 0x26f178: 0x0  nop
    ctx->pc = 0x26f178u;
    // NOP
label_26f17c:
    // 0x26f17c: 0x0  nop
    ctx->pc = 0x26f17cu;
    // NOP
label_26f180:
    // 0x26f180: 0x4e0e  .word       0x00004E0E                   # INVALID     $zero, $zero, 0x4E0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F180 raw=0x00004E0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f184:
    // 0x26f184: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x26f184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f188:
    // 0x26f188: 0x0  nop
    ctx->pc = 0x26f188u;
    // NOP
label_26f18c:
    // 0x26f18c: 0x0  nop
    ctx->pc = 0x26f18cu;
    // NOP
label_26f190:
    // 0x26f190: 0x4e18  .word       0x00004E18                   # mult        $t1, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f194:
    // 0x26f194: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x26f194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f198:
    // 0x26f198: 0x0  nop
    ctx->pc = 0x26f198u;
    // NOP
label_26f19c:
    // 0x26f19c: 0x0  nop
    ctx->pc = 0x26f19cu;
    // NOP
label_26f1a0:
    // 0x26f1a0: 0x4e26  .word       0x00004E26                   # xor         $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f1a4:
    // 0x26f1a4: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f1a8:
    // 0x26f1a8: 0x0  nop
    ctx->pc = 0x26f1a8u;
    // NOP
label_26f1ac:
    // 0x26f1ac: 0x0  nop
    ctx->pc = 0x26f1acu;
    // NOP
label_26f1b0:
    // 0x26f1b0: 0x4e33  tltu        $zero, $zero, 312
    ctx->pc = 0x26f1b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1b4:
    // 0x26f1b4: 0x4270  tge         $zero, $zero, 265
    ctx->pc = 0x26f1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1b8:
    // 0x26f1b8: 0x0  nop
    ctx->pc = 0x26f1b8u;
    // NOP
label_26f1bc:
    // 0x26f1bc: 0x0  nop
    ctx->pc = 0x26f1bcu;
    // NOP
label_26f1c0:
    // 0x26f1c0: 0x4e3c  dsll32      $t1, $zero, 24
    ctx->pc = 0x26f1c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 24));
label_26f1c4:
    // 0x26f1c4: 0x3dc0  sll         $a3, $zero, 23
    ctx->pc = 0x26f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26f1c8:
    // 0x26f1c8: 0x0  nop
    ctx->pc = 0x26f1c8u;
    // NOP
label_26f1cc:
    // 0x26f1cc: 0x0  nop
    ctx->pc = 0x26f1ccu;
    // NOP
label_26f1d0:
    // 0x26f1d0: 0x4e44  .word       0x00004E44                   # sllv        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f1d4:
    // 0x26f1d4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x26f1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1d8:
    // 0x26f1d8: 0x0  nop
    ctx->pc = 0x26f1d8u;
    // NOP
label_26f1dc:
    // 0x26f1dc: 0x0  nop
    ctx->pc = 0x26f1dcu;
    // NOP
label_26f1e0:
    // 0x26f1e0: 0x4e4e  .word       0x00004E4E                   # INVALID     $zero, $zero, 0x4E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F1E0 raw=0x00004E4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f1e4:
    // 0x26f1e4: 0x3100  sll         $a2, $zero, 4
    ctx->pc = 0x26f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26f1e8:
    // 0x26f1e8: 0x0  nop
    ctx->pc = 0x26f1e8u;
    // NOP
label_26f1ec:
    // 0x26f1ec: 0x0  nop
    ctx->pc = 0x26f1ecu;
    // NOP
label_26f1f0:
    // 0x26f1f0: 0x4e55  .word       0x00004E55                   # INVALID     $zero, $zero, 0x4E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26F1F0 raw=0x00004E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f1f4:
    // 0x26f1f4: 0x2870  tge         $zero, $zero, 161
    ctx->pc = 0x26f1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1f8:
    // 0x26f1f8: 0x0  nop
    ctx->pc = 0x26f1f8u;
    // NOP
label_26f1fc:
    // 0x26f1fc: 0x0  nop
    ctx->pc = 0x26f1fcu;
    // NOP
label_26f200:
    // 0x26f200: 0x4e5b  .word       0x00004E5B                   # divu        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f200u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26f204:
    // 0x26f204: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x26f204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f208:
    // 0x26f208: 0x0  nop
    ctx->pc = 0x26f208u;
    // NOP
label_26f20c:
    // 0x26f20c: 0x0  nop
    ctx->pc = 0x26f20cu;
    // NOP
label_26f210:
    // 0x26f210: 0x4e62  .word       0x00004E62                   # neg         $t1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f210u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f214:
    // 0x26f214: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f218:
    // 0x26f218: 0x0  nop
    ctx->pc = 0x26f218u;
    // NOP
label_26f21c:
    // 0x26f21c: 0x0  nop
    ctx->pc = 0x26f21cu;
    // NOP
label_26f220:
    // 0x26f220: 0x4e66  .word       0x00004E66                   # xor         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f220u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f224:
    // 0x26f224: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f224u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f228:
    // 0x26f228: 0x0  nop
    ctx->pc = 0x26f228u;
    // NOP
label_26f22c:
    // 0x26f22c: 0x0  nop
    ctx->pc = 0x26f22cu;
    // NOP
label_26f230:
    // 0x26f230: 0x4e71  tgeu        $zero, $zero, 313
    ctx->pc = 0x26f230u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f234:
    // 0x26f234: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f238:
    // 0x26f238: 0x0  nop
    ctx->pc = 0x26f238u;
    // NOP
label_26f23c:
    // 0x26f23c: 0x0  nop
    ctx->pc = 0x26f23cu;
    // NOP
label_26f240:
    // 0x26f240: 0x4e82  srl         $t1, $zero, 26
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_26f244:
    // 0x26f244: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f248:
    // 0x26f248: 0x0  nop
    ctx->pc = 0x26f248u;
    // NOP
label_26f24c:
    // 0x26f24c: 0x0  nop
    ctx->pc = 0x26f24cu;
    // NOP
label_26f250:
    // 0x26f250: 0x4e93  .word       0x00004E93                   # mtlo        $zero # 00004E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f250u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f254:
    // 0x26f254: 0x55f0  tge         $zero, $zero, 343
    ctx->pc = 0x26f254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f258:
    // 0x26f258: 0x0  nop
    ctx->pc = 0x26f258u;
    // NOP
label_26f25c:
    // 0x26f25c: 0x0  nop
    ctx->pc = 0x26f25cu;
    // NOP
label_26f260:
    // 0x26f260: 0x4e9e  .word       0x00004E9E                   # ddiv        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F260 raw=0x00004E9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f264:
    // 0x26f264: 0x50a0  .word       0x000050A0                   # add         $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f268:
    // 0x26f268: 0x0  nop
    ctx->pc = 0x26f268u;
    // NOP
label_26f26c:
    // 0x26f26c: 0x0  nop
    ctx->pc = 0x26f26cu;
    // NOP
label_26f270:
    // 0x26f270: 0x4ea9  .word       0x00004EA9                   # mtsa        $zero # 00004E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f270u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f274:
    // 0x26f274: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f278:
    // 0x26f278: 0x0  nop
    ctx->pc = 0x26f278u;
    // NOP
label_26f27c:
    // 0x26f27c: 0x0  nop
    ctx->pc = 0x26f27cu;
    // NOP
label_26f280:
    // 0x26f280: 0x4eb2  tlt         $zero, $zero, 314
    ctx->pc = 0x26f280u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f284:
    // 0x26f284: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f284u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f288:
    // 0x26f288: 0x0  nop
    ctx->pc = 0x26f288u;
    // NOP
label_26f28c:
    // 0x26f28c: 0x0  nop
    ctx->pc = 0x26f28cu;
    // NOP
label_26f290:
    // 0x26f290: 0x4ebe  dsrl32      $t1, $zero, 26
    ctx->pc = 0x26f290u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 26));
label_26f294:
    // 0x26f294: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f294u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f298:
    // 0x26f298: 0x0  nop
    ctx->pc = 0x26f298u;
    // NOP
label_26f29c:
    // 0x26f29c: 0x0  nop
    ctx->pc = 0x26f29cu;
    // NOP
label_26f2a0:
    // 0x26f2a0: 0x4eca  .word       0x00004ECA                   # movz        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f2a4:
    // 0x26f2a4: 0x4580  sll         $t0, $zero, 22
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26f2a8:
    // 0x26f2a8: 0x0  nop
    ctx->pc = 0x26f2a8u;
    // NOP
label_26f2ac:
    // 0x26f2ac: 0x0  nop
    ctx->pc = 0x26f2acu;
    // NOP
label_26f2b0:
    // 0x26f2b0: 0x4ed3  .word       0x00004ED3                   # mtlo        $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f2b4:
    // 0x26f2b4: 0x2150  .word       0x00002150                   # mfhi        $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26f2b8:
    // 0x26f2b8: 0x0  nop
    ctx->pc = 0x26f2b8u;
    // NOP
label_26f2bc:
    // 0x26f2bc: 0x0  nop
    ctx->pc = 0x26f2bcu;
    // NOP
label_26f2c0:
    // 0x26f2c0: 0x4ed8  .word       0x00004ED8                   # mult        $t1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f2c4:
    // 0x26f2c4: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26f2c8:
    // 0x26f2c8: 0x0  nop
    ctx->pc = 0x26f2c8u;
    // NOP
label_26f2cc:
    // 0x26f2cc: 0x0  nop
    ctx->pc = 0x26f2ccu;
    // NOP
label_26f2d0:
    // 0x26f2d0: 0x4ee6  .word       0x00004EE6                   # xor         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f2d4:
    // 0x26f2d4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f2d8:
    // 0x26f2d8: 0x0  nop
    ctx->pc = 0x26f2d8u;
    // NOP
label_26f2dc:
    // 0x26f2dc: 0x0  nop
    ctx->pc = 0x26f2dcu;
    // NOP
label_26f2e0:
    // 0x26f2e0: 0x4ef2  tlt         $zero, $zero, 315
    ctx->pc = 0x26f2e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f2e4:
    // 0x26f2e4: 0x54a0  .word       0x000054A0                   # add         $t2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f2e8:
    // 0x26f2e8: 0x0  nop
    ctx->pc = 0x26f2e8u;
    // NOP
label_26f2ec:
    // 0x26f2ec: 0x0  nop
    ctx->pc = 0x26f2ecu;
    // NOP
label_26f2f0:
    // 0x26f2f0: 0x4efd  .word       0x00004EFD                   # INVALID     $zero, $zero, 0x4EFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F2F0 raw=0x00004EFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f2f4:
    // 0x26f2f4: 0x3160  .word       0x00003160                   # add         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f2f8:
    // 0x26f2f8: 0x0  nop
    ctx->pc = 0x26f2f8u;
    // NOP
label_26f2fc:
    // 0x26f2fc: 0x0  nop
    ctx->pc = 0x26f2fcu;
    // NOP
label_26f300:
    // 0x26f300: 0x4f04  .word       0x00004F04                   # sllv        $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f300u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f304:
    // 0x26f304: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f304u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26f308:
    // 0x26f308: 0x0  nop
    ctx->pc = 0x26f308u;
    // NOP
label_26f30c:
    // 0x26f30c: 0x0  nop
    ctx->pc = 0x26f30cu;
    // NOP
label_26f310:
    // 0x26f310: 0x4f0e  .word       0x00004F0E                   # INVALID     $zero, $zero, 0x4F0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F310 raw=0x00004F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f314:
    // 0x26f314: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x26f314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f318:
    // 0x26f318: 0x0  nop
    ctx->pc = 0x26f318u;
    // NOP
label_26f31c:
    // 0x26f31c: 0x0  nop
    ctx->pc = 0x26f31cu;
    // NOP
label_26f320:
    // 0x26f320: 0x4f19  .word       0x00004F19                   # multu       $zero, $zero # 00004F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f320u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f324:
    // 0x26f324: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f324u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f328:
    // 0x26f328: 0x0  nop
    ctx->pc = 0x26f328u;
    // NOP
label_26f32c:
    // 0x26f32c: 0x0  nop
    ctx->pc = 0x26f32cu;
    // NOP
label_26f330:
    // 0x26f330: 0x4f22  .word       0x00004F22                   # neg         $t1, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f330u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f334:
    // 0x26f334: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x26f334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f338:
    // 0x26f338: 0x0  nop
    ctx->pc = 0x26f338u;
    // NOP
label_26f33c:
    // 0x26f33c: 0x0  nop
    ctx->pc = 0x26f33cu;
    // NOP
label_26f340:
    // 0x26f340: 0x4f2f  .word       0x00004F2F                   # dsubu       $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f340u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26f344:
    // 0x26f344: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f348:
    // 0x26f348: 0x0  nop
    ctx->pc = 0x26f348u;
    // NOP
label_26f34c:
    // 0x26f34c: 0x0  nop
    ctx->pc = 0x26f34cu;
    // NOP
label_26f350:
    // 0x26f350: 0x4f40  sll         $t1, $zero, 29
    ctx->pc = 0x26f350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26f354:
    // 0x26f354: 0x3f70  tge         $zero, $zero, 253
    ctx->pc = 0x26f354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f358:
    // 0x26f358: 0x0  nop
    ctx->pc = 0x26f358u;
    // NOP
label_26f35c:
    // 0x26f35c: 0x0  nop
    ctx->pc = 0x26f35cu;
    // NOP
label_26f360:
    // 0x26f360: 0x4f48  .word       0x00004F48                   # jr          $zero # 00004F40 <InstrIdType: CPU_SPECIAL>
label_26f364:
    if (ctx->pc == 0x26F364u) {
        ctx->pc = 0x26F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F360u;
        // 0x26f364: 0x8f30  tge         $zero, $zero, 572 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F368u;
        goto label_26f368;
    }
    ctx->pc = 0x26F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F360u;
        // 0x26f364: 0x8f30  tge         $zero, $zero, 572 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F360u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F368u;
label_26f368:
    // 0x26f368: 0x0  nop
    ctx->pc = 0x26f368u;
    // NOP
label_26f36c:
    // 0x26f36c: 0x0  nop
    ctx->pc = 0x26f36cu;
    // NOP
label_26f370:
    // 0x26f370: 0x4f5a  .word       0x00004F5A                   # div         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f370u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26f374:
    // 0x26f374: 0x4a20  .word       0x00004A20                   # add         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f378:
    // 0x26f378: 0x0  nop
    ctx->pc = 0x26f378u;
    // NOP
label_26f37c:
    // 0x26f37c: 0x0  nop
    ctx->pc = 0x26f37cu;
    // NOP
label_26f380:
    // 0x26f380: 0x4f64  .word       0x00004F64                   # and         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26f384:
    // 0x26f384: 0x38d0  .word       0x000038D0                   # mfhi        $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f388:
    // 0x26f388: 0x0  nop
    ctx->pc = 0x26f388u;
    // NOP
label_26f38c:
    // 0x26f38c: 0x0  nop
    ctx->pc = 0x26f38cu;
    // NOP
label_26f390:
    // 0x26f390: 0x4f6c  .word       0x00004F6C                   # dadd        $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26f394:
    // 0x26f394: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f398:
    // 0x26f398: 0x0  nop
    ctx->pc = 0x26f398u;
    // NOP
label_26f39c:
    // 0x26f39c: 0x0  nop
    ctx->pc = 0x26f39cu;
    // NOP
label_26f3a0:
    // 0x26f3a0: 0x4f75  .word       0x00004F75                   # INVALID     $zero, $zero, 0x4F75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26F3A0 raw=0x00004F75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f3a4:
    // 0x26f3a4: 0x3c30  tge         $zero, $zero, 240
    ctx->pc = 0x26f3a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f3a8:
    // 0x26f3a8: 0x0  nop
    ctx->pc = 0x26f3a8u;
    // NOP
label_26f3ac:
    // 0x26f3ac: 0x0  nop
    ctx->pc = 0x26f3acu;
    // NOP
label_26f3b0:
    // 0x26f3b0: 0x4f7d  .word       0x00004F7D                   # INVALID     $zero, $zero, 0x4F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F3B0 raw=0x00004F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f3b4:
    // 0x26f3b4: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26f3b8:
    // 0x26f3b8: 0x0  nop
    ctx->pc = 0x26f3b8u;
    // NOP
label_26f3bc:
    // 0x26f3bc: 0x0  nop
    ctx->pc = 0x26f3bcu;
    // NOP
label_26f3c0:
    // 0x26f3c0: 0x4f86  .word       0x00004F86                   # srlv        $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f3c4:
    // 0x26f3c4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f3c8:
    // 0x26f3c8: 0x0  nop
    ctx->pc = 0x26f3c8u;
    // NOP
label_26f3cc:
    // 0x26f3cc: 0x0  nop
    ctx->pc = 0x26f3ccu;
    // NOP
label_26f3d0:
    // 0x26f3d0: 0x4f8f  .word       0x00004F8F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f3d4:
    // 0x26f3d4: 0x3d90  .word       0x00003D90                   # mfhi        $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f3d8:
    // 0x26f3d8: 0x0  nop
    ctx->pc = 0x26f3d8u;
    // NOP
label_26f3dc:
    // 0x26f3dc: 0x0  nop
    ctx->pc = 0x26f3dcu;
    // NOP
label_26f3e0:
    // 0x26f3e0: 0x4f97  .word       0x00004F97                   # dsrav       $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f3e4:
    // 0x26f3e4: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f3e8:
    // 0x26f3e8: 0x0  nop
    ctx->pc = 0x26f3e8u;
    // NOP
label_26f3ec:
    // 0x26f3ec: 0x0  nop
    ctx->pc = 0x26f3ecu;
    // NOP
label_26f3f0:
    // 0x26f3f0: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f3f4:
    // 0x26f3f4: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26f3f8:
    // 0x26f3f8: 0x0  nop
    ctx->pc = 0x26f3f8u;
    // NOP
label_26f3fc:
    // 0x26f3fc: 0x0  nop
    ctx->pc = 0x26f3fcu;
    // NOP
label_26f400:
    // 0x26f400: 0x4fac  .word       0x00004FAC                   # dadd        $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26f404:
    // 0x26f404: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x26f404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f408:
    // 0x26f408: 0x0  nop
    ctx->pc = 0x26f408u;
    // NOP
label_26f40c:
    // 0x26f40c: 0x0  nop
    ctx->pc = 0x26f40cu;
    // NOP
label_26f410:
    // 0x26f410: 0x4fb4  teq         $zero, $zero, 318
    ctx->pc = 0x26f410u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f414:
    // 0x26f414: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x26f414u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f418:
    // 0x26f418: 0x0  nop
    ctx->pc = 0x26f418u;
    // NOP
label_26f41c:
    // 0x26f41c: 0x0  nop
    ctx->pc = 0x26f41cu;
    // NOP
label_26f420:
    // 0x26f420: 0x4fbf  dsra32      $t1, $zero, 30
    ctx->pc = 0x26f420u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (32 + 30));
label_26f424:
    // 0x26f424: 0xc6c0  sll         $t8, $zero, 27
    ctx->pc = 0x26f424u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f428:
    // 0x26f428: 0x0  nop
    ctx->pc = 0x26f428u;
    // NOP
label_26f42c:
    // 0x26f42c: 0x0  nop
    ctx->pc = 0x26f42cu;
    // NOP
label_26f430:
    // 0x26f430: 0x4fd8  .word       0x00004FD8                   # mult        $t1, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f434:
    // 0x26f434: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x26f434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f438:
    // 0x26f438: 0x0  nop
    ctx->pc = 0x26f438u;
    // NOP
label_26f43c:
    // 0x26f43c: 0x0  nop
    ctx->pc = 0x26f43cu;
    // NOP
label_26f440:
    // 0x26f440: 0x4fe2  .word       0x00004FE2                   # neg         $t1, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f440u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f444:
    // 0x26f444: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f444u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f448:
    // 0x26f448: 0x0  nop
    ctx->pc = 0x26f448u;
    // NOP
label_26f44c:
    // 0x26f44c: 0x0  nop
    ctx->pc = 0x26f44cu;
    // NOP
label_26f450:
    // 0x26f450: 0x4fea  .word       0x00004FEA                   # slt         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f450u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26f454:
    // 0x26f454: 0x49f0  tge         $zero, $zero, 295
    ctx->pc = 0x26f454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f458:
    // 0x26f458: 0x0  nop
    ctx->pc = 0x26f458u;
    // NOP
label_26f45c:
    // 0x26f45c: 0x0  nop
    ctx->pc = 0x26f45cu;
    // NOP
label_26f460:
    // 0x26f460: 0x4ff4  teq         $zero, $zero, 319
    ctx->pc = 0x26f460u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f464:
    // 0x26f464: 0x3ba0  .word       0x00003BA0                   # add         $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f468:
    // 0x26f468: 0x0  nop
    ctx->pc = 0x26f468u;
    // NOP
label_26f46c:
    // 0x26f46c: 0x0  nop
    ctx->pc = 0x26f46cu;
    // NOP
label_26f470:
    // 0x26f470: 0x4ffc  dsll32      $t1, $zero, 31
    ctx->pc = 0x26f470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 31));
label_26f474:
    // 0x26f474: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f478:
    // 0x26f478: 0x0  nop
    ctx->pc = 0x26f478u;
    // NOP
label_26f47c:
    // 0x26f47c: 0x0  nop
    ctx->pc = 0x26f47cu;
    // NOP
label_26f480:
    // 0x26f480: 0x5004  sllv        $t2, $zero, $zero
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f484:
    // 0x26f484: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f488:
    // 0x26f488: 0x0  nop
    ctx->pc = 0x26f488u;
    // NOP
label_26f48c:
    // 0x26f48c: 0x0  nop
    ctx->pc = 0x26f48cu;
    // NOP
label_26f490:
    // 0x26f490: 0x500e  .word       0x0000500E                   # INVALID     $zero, $zero, 0x500E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F490 raw=0x0000500E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f494:
    // 0x26f494: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f498:
    // 0x26f498: 0x0  nop
    ctx->pc = 0x26f498u;
    // NOP
label_26f49c:
    // 0x26f49c: 0x0  nop
    ctx->pc = 0x26f49cu;
    // NOP
label_26f4a0:
    // 0x26f4a0: 0x5016  dsrlv       $t2, $zero, $zero
    ctx->pc = 0x26f4a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4a4:
    // 0x26f4a4: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x26f4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4a8:
    // 0x26f4a8: 0x0  nop
    ctx->pc = 0x26f4a8u;
    // NOP
label_26f4ac:
    // 0x26f4ac: 0x0  nop
    ctx->pc = 0x26f4acu;
    // NOP
label_26f4b0:
    // 0x26f4b0: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x26f4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26F4B0 raw=0x0000501F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f4b4:
    // 0x26f4b4: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26f4b8:
    // 0x26f4b8: 0x0  nop
    ctx->pc = 0x26f4b8u;
    // NOP
label_26f4bc:
    // 0x26f4bc: 0x0  nop
    ctx->pc = 0x26f4bcu;
    // NOP
label_26f4c0:
    // 0x26f4c0: 0x5029  .word       0x00005029                   # mtsa        $zero # 00005000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f4c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f4c4:
    // 0x26f4c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4c8:
    // 0x26f4c8: 0x0  nop
    ctx->pc = 0x26f4c8u;
    // NOP
label_26f4cc:
    // 0x26f4cc: 0x0  nop
    ctx->pc = 0x26f4ccu;
    // NOP
label_26f4d0:
    // 0x26f4d0: 0x503a  dsrl        $t2, $zero, 0
    ctx->pc = 0x26f4d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 0);
label_26f4d4:
    // 0x26f4d4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4d8:
    // 0x26f4d8: 0x0  nop
    ctx->pc = 0x26f4d8u;
    // NOP
label_26f4dc:
    // 0x26f4dc: 0x0  nop
    ctx->pc = 0x26f4dcu;
    // NOP
label_26f4e0:
    // 0x26f4e0: 0x504b  .word       0x0000504B                   # movn        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f4e4:
    // 0x26f4e4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x26f4e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4e8:
    // 0x26f4e8: 0x0  nop
    ctx->pc = 0x26f4e8u;
    // NOP
label_26f4ec:
    // 0x26f4ec: 0x0  nop
    ctx->pc = 0x26f4ecu;
    // NOP
label_26f4f0:
    // 0x26f4f0: 0x5056  .word       0x00005056                   # dsrlv       $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4f4:
    // 0x26f4f4: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f4f8:
    // 0x26f4f8: 0x0  nop
    ctx->pc = 0x26f4f8u;
    // NOP
label_26f4fc:
    // 0x26f4fc: 0x0  nop
    ctx->pc = 0x26f4fcu;
    // NOP
label_26f500:
    // 0x26f500: 0x5061  .word       0x00005061                   # addu        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f504:
    // 0x26f504: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26f508:
    // 0x26f508: 0x0  nop
    ctx->pc = 0x26f508u;
    // NOP
label_26f50c:
    // 0x26f50c: 0x0  nop
    ctx->pc = 0x26f50cu;
    // NOP
label_26f510:
    // 0x26f510: 0x5069  .word       0x00005069                   # mtsa        $zero # 00005040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f514:
    // 0x26f514: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26f518:
    // 0x26f518: 0x0  nop
    ctx->pc = 0x26f518u;
    // NOP
label_26f51c:
    // 0x26f51c: 0x0  nop
    ctx->pc = 0x26f51cu;
    // NOP
label_26f520:
    // 0x26f520: 0x5076  tne         $zero, $zero, 321
    ctx->pc = 0x26f520u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f524:
    // 0x26f524: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26f528:
    // 0x26f528: 0x0  nop
    ctx->pc = 0x26f528u;
    // NOP
label_26f52c:
    // 0x26f52c: 0x0  nop
    ctx->pc = 0x26f52cu;
    // NOP
label_26f530:
    // 0x26f530: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26f534:
    // 0x26f534: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f534u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26f538:
    // 0x26f538: 0x0  nop
    ctx->pc = 0x26f538u;
    // NOP
label_26f53c:
    // 0x26f53c: 0x0  nop
    ctx->pc = 0x26f53cu;
    // NOP
label_26f540:
    // 0x26f540: 0x5087  .word       0x00005087                   # srav        $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f544:
    // 0x26f544: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    ctx->pc = 0x26f548u;
    return;
}

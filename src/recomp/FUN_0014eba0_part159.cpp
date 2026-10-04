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


void FUN_0014eba0_part159(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19be00u: goto label_19be00;
        case 0x19be04u: goto label_19be04;
        case 0x19be08u: goto label_19be08;
        case 0x19be0cu: goto label_19be0c;
        case 0x19be10u: goto label_19be10;
        case 0x19be14u: goto label_19be14;
        case 0x19be18u: goto label_19be18;
        case 0x19be1cu: goto label_19be1c;
        case 0x19be20u: goto label_19be20;
        case 0x19be24u: goto label_19be24;
        case 0x19be28u: goto label_19be28;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be30u: goto label_19be30;
        case 0x19be34u: goto label_19be34;
        case 0x19be38u: goto label_19be38;
        case 0x19be3cu: goto label_19be3c;
        case 0x19be40u: goto label_19be40;
        case 0x19be44u: goto label_19be44;
        case 0x19be48u: goto label_19be48;
        case 0x19be4cu: goto label_19be4c;
        case 0x19be50u: goto label_19be50;
        case 0x19be54u: goto label_19be54;
        case 0x19be58u: goto label_19be58;
        case 0x19be5cu: goto label_19be5c;
        case 0x19be60u: goto label_19be60;
        case 0x19be64u: goto label_19be64;
        case 0x19be68u: goto label_19be68;
        case 0x19be6cu: goto label_19be6c;
        case 0x19be70u: goto label_19be70;
        case 0x19be74u: goto label_19be74;
        case 0x19be78u: goto label_19be78;
        case 0x19be7cu: goto label_19be7c;
        case 0x19be80u: goto label_19be80;
        case 0x19be84u: goto label_19be84;
        case 0x19be88u: goto label_19be88;
        case 0x19be8cu: goto label_19be8c;
        case 0x19be90u: goto label_19be90;
        case 0x19be94u: goto label_19be94;
        case 0x19be98u: goto label_19be98;
        case 0x19be9cu: goto label_19be9c;
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beacu: goto label_19beac;
        case 0x19beb0u: goto label_19beb0;
        case 0x19beb4u: goto label_19beb4;
        case 0x19beb8u: goto label_19beb8;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec0u: goto label_19bec0;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bec8u: goto label_19bec8;
        case 0x19beccu: goto label_19becc;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bed4u: goto label_19bed4;
        case 0x19bed8u: goto label_19bed8;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bee0u: goto label_19bee0;
        case 0x19bee4u: goto label_19bee4;
        case 0x19bee8u: goto label_19bee8;
        case 0x19beecu: goto label_19beec;
        case 0x19bef0u: goto label_19bef0;
        case 0x19bef4u: goto label_19bef4;
        case 0x19bef8u: goto label_19bef8;
        case 0x19befcu: goto label_19befc;
        case 0x19bf00u: goto label_19bf00;
        case 0x19bf04u: goto label_19bf04;
        case 0x19bf08u: goto label_19bf08;
        case 0x19bf0cu: goto label_19bf0c;
        case 0x19bf10u: goto label_19bf10;
        case 0x19bf14u: goto label_19bf14;
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf1cu: goto label_19bf1c;
        case 0x19bf20u: goto label_19bf20;
        case 0x19bf24u: goto label_19bf24;
        case 0x19bf28u: goto label_19bf28;
        case 0x19bf2cu: goto label_19bf2c;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf34u: goto label_19bf34;
        case 0x19bf38u: goto label_19bf38;
        case 0x19bf3cu: goto label_19bf3c;
        case 0x19bf40u: goto label_19bf40;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf48u: goto label_19bf48;
        case 0x19bf4cu: goto label_19bf4c;
        case 0x19bf50u: goto label_19bf50;
        case 0x19bf54u: goto label_19bf54;
        case 0x19bf58u: goto label_19bf58;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf60u: goto label_19bf60;
        case 0x19bf64u: goto label_19bf64;
        case 0x19bf68u: goto label_19bf68;
        case 0x19bf6cu: goto label_19bf6c;
        case 0x19bf70u: goto label_19bf70;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf78u: goto label_19bf78;
        case 0x19bf7cu: goto label_19bf7c;
        case 0x19bf80u: goto label_19bf80;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf8cu: goto label_19bf8c;
        case 0x19bf90u: goto label_19bf90;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bf98u: goto label_19bf98;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfacu: goto label_19bfac;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19bfb8u: goto label_19bfb8;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bfc0u: goto label_19bfc0;
        case 0x19bfc4u: goto label_19bfc4;
        case 0x19bfc8u: goto label_19bfc8;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bfd4u: goto label_19bfd4;
        case 0x19bfd8u: goto label_19bfd8;
        case 0x19bfdcu: goto label_19bfdc;
        case 0x19bfe0u: goto label_19bfe0;
        case 0x19bfe4u: goto label_19bfe4;
        case 0x19bfe8u: goto label_19bfe8;
        case 0x19bfecu: goto label_19bfec;
        case 0x19bff0u: goto label_19bff0;
        case 0x19bff4u: goto label_19bff4;
        case 0x19bff8u: goto label_19bff8;
        case 0x19bffcu: goto label_19bffc;
        case 0x19c000u: goto label_19c000;
        case 0x19c004u: goto label_19c004;
        case 0x19c008u: goto label_19c008;
        case 0x19c00cu: goto label_19c00c;
        case 0x19c010u: goto label_19c010;
        case 0x19c014u: goto label_19c014;
        case 0x19c018u: goto label_19c018;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c020u: goto label_19c020;
        case 0x19c024u: goto label_19c024;
        case 0x19c028u: goto label_19c028;
        case 0x19c02cu: goto label_19c02c;
        case 0x19c030u: goto label_19c030;
        case 0x19c034u: goto label_19c034;
        case 0x19c038u: goto label_19c038;
        case 0x19c03cu: goto label_19c03c;
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        case 0x19c278u: goto label_19c278;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c280u: goto label_19c280;
        case 0x19c284u: goto label_19c284;
        case 0x19c288u: goto label_19c288;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c290u: goto label_19c290;
        case 0x19c294u: goto label_19c294;
        case 0x19c298u: goto label_19c298;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2a4u: goto label_19c2a4;
        case 0x19c2a8u: goto label_19c2a8;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2b0u: goto label_19c2b0;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2b8u: goto label_19c2b8;
        case 0x19c2bcu: goto label_19c2bc;
        case 0x19c2c0u: goto label_19c2c0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2c8u: goto label_19c2c8;
        case 0x19c2ccu: goto label_19c2cc;
        case 0x19c2d0u: goto label_19c2d0;
        case 0x19c2d4u: goto label_19c2d4;
        case 0x19c2d8u: goto label_19c2d8;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c2e0u: goto label_19c2e0;
        case 0x19c2e4u: goto label_19c2e4;
        case 0x19c2e8u: goto label_19c2e8;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c2f8u: goto label_19c2f8;
        case 0x19c2fcu: goto label_19c2fc;
        case 0x19c300u: goto label_19c300;
        case 0x19c304u: goto label_19c304;
        case 0x19c308u: goto label_19c308;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c310u: goto label_19c310;
        case 0x19c314u: goto label_19c314;
        case 0x19c318u: goto label_19c318;
        case 0x19c31cu: goto label_19c31c;
        case 0x19c320u: goto label_19c320;
        case 0x19c324u: goto label_19c324;
        case 0x19c328u: goto label_19c328;
        case 0x19c32cu: goto label_19c32c;
        case 0x19c330u: goto label_19c330;
        case 0x19c334u: goto label_19c334;
        case 0x19c338u: goto label_19c338;
        case 0x19c33cu: goto label_19c33c;
        case 0x19c340u: goto label_19c340;
        case 0x19c344u: goto label_19c344;
        case 0x19c348u: goto label_19c348;
        case 0x19c34cu: goto label_19c34c;
        case 0x19c350u: goto label_19c350;
        case 0x19c354u: goto label_19c354;
        case 0x19c358u: goto label_19c358;
        case 0x19c35cu: goto label_19c35c;
        case 0x19c360u: goto label_19c360;
        case 0x19c364u: goto label_19c364;
        case 0x19c368u: goto label_19c368;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c370u: goto label_19c370;
        case 0x19c374u: goto label_19c374;
        case 0x19c378u: goto label_19c378;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c380u: goto label_19c380;
        case 0x19c384u: goto label_19c384;
        case 0x19c388u: goto label_19c388;
        case 0x19c38cu: goto label_19c38c;
        case 0x19c390u: goto label_19c390;
        case 0x19c394u: goto label_19c394;
        case 0x19c398u: goto label_19c398;
        case 0x19c39cu: goto label_19c39c;
        case 0x19c3a0u: goto label_19c3a0;
        case 0x19c3a4u: goto label_19c3a4;
        case 0x19c3a8u: goto label_19c3a8;
        case 0x19c3acu: goto label_19c3ac;
        case 0x19c3b0u: goto label_19c3b0;
        case 0x19c3b4u: goto label_19c3b4;
        case 0x19c3b8u: goto label_19c3b8;
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3c0u: goto label_19c3c0;
        case 0x19c3c4u: goto label_19c3c4;
        case 0x19c3c8u: goto label_19c3c8;
        case 0x19c3ccu: goto label_19c3cc;
        case 0x19c3d0u: goto label_19c3d0;
        case 0x19c3d4u: goto label_19c3d4;
        case 0x19c3d8u: goto label_19c3d8;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3e0u: goto label_19c3e0;
        case 0x19c3e4u: goto label_19c3e4;
        case 0x19c3e8u: goto label_19c3e8;
        case 0x19c3ecu: goto label_19c3ec;
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c3f8u: goto label_19c3f8;
        case 0x19c3fcu: goto label_19c3fc;
        case 0x19c400u: goto label_19c400;
        case 0x19c404u: goto label_19c404;
        case 0x19c408u: goto label_19c408;
        case 0x19c40cu: goto label_19c40c;
        case 0x19c410u: goto label_19c410;
        case 0x19c414u: goto label_19c414;
        case 0x19c418u: goto label_19c418;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c420u: goto label_19c420;
        case 0x19c424u: goto label_19c424;
        case 0x19c428u: goto label_19c428;
        case 0x19c42cu: goto label_19c42c;
        case 0x19c430u: goto label_19c430;
        case 0x19c434u: goto label_19c434;
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        case 0x19c500u: goto label_19c500;
        case 0x19c504u: goto label_19c504;
        case 0x19c508u: goto label_19c508;
        case 0x19c50cu: goto label_19c50c;
        case 0x19c510u: goto label_19c510;
        case 0x19c514u: goto label_19c514;
        case 0x19c518u: goto label_19c518;
        case 0x19c51cu: goto label_19c51c;
        case 0x19c520u: goto label_19c520;
        case 0x19c524u: goto label_19c524;
        case 0x19c528u: goto label_19c528;
        case 0x19c52cu: goto label_19c52c;
        case 0x19c530u: goto label_19c530;
        case 0x19c534u: goto label_19c534;
        case 0x19c538u: goto label_19c538;
        case 0x19c53cu: goto label_19c53c;
        case 0x19c540u: goto label_19c540;
        case 0x19c544u: goto label_19c544;
        case 0x19c548u: goto label_19c548;
        case 0x19c54cu: goto label_19c54c;
        case 0x19c550u: goto label_19c550;
        case 0x19c554u: goto label_19c554;
        case 0x19c558u: goto label_19c558;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c560u: goto label_19c560;
        case 0x19c564u: goto label_19c564;
        case 0x19c568u: goto label_19c568;
        case 0x19c56cu: goto label_19c56c;
        case 0x19c570u: goto label_19c570;
        case 0x19c574u: goto label_19c574;
        case 0x19c578u: goto label_19c578;
        case 0x19c57cu: goto label_19c57c;
        case 0x19c580u: goto label_19c580;
        case 0x19c584u: goto label_19c584;
        case 0x19c588u: goto label_19c588;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c590u: goto label_19c590;
        case 0x19c594u: goto label_19c594;
        case 0x19c598u: goto label_19c598;
        case 0x19c59cu: goto label_19c59c;
        case 0x19c5a0u: goto label_19c5a0;
        case 0x19c5a4u: goto label_19c5a4;
        case 0x19c5a8u: goto label_19c5a8;
        case 0x19c5acu: goto label_19c5ac;
        case 0x19c5b0u: goto label_19c5b0;
        case 0x19c5b4u: goto label_19c5b4;
        case 0x19c5b8u: goto label_19c5b8;
        case 0x19c5bcu: goto label_19c5bc;
        case 0x19c5c0u: goto label_19c5c0;
        case 0x19c5c4u: goto label_19c5c4;
        case 0x19c5c8u: goto label_19c5c8;
        case 0x19c5ccu: goto label_19c5cc;
        default: return;
    }

label_19be00:
    // 0x19be00: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x19be00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_19be04:
    // 0x19be04: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x19be04u;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
label_19be08:
    // 0x19be08: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x19be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19be0c:
    // 0x19be0c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x19be0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_19be10:
    // 0x19be10: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x19be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
label_19be14:
    // 0x19be14: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x19be14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
label_19be18:
    // 0x19be18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_19be1c:
    // 0x19be1c: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x19be1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
label_19be20:
    // 0x19be20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19be24:
    // 0x19be24: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x19be24u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
label_19be28:
    // 0x19be28: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x19be28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_19be2c:
    // 0x19be2c: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x19be2cu;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
label_19be30:
    // 0x19be30: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x19be30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_19be34:
    // 0x19be34: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x19be34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_19be38:
    // 0x19be38: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x19be38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_19be3c:
    // 0x19be3c: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x19be3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
label_19be40:
    // 0x19be40: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x19be40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_19be44:
    // 0x19be44: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x19be44u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
label_19be48:
    // 0x19be48: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x19be48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_19be4c:
    // 0x19be4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x19be4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_19be50:
    // 0x19be50: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x19be50u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_19be54:
    // 0x19be54: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x19be54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_19be58:
    // 0x19be58: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x19be58u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
label_19be5c:
    // 0x19be5c: 0x0  nop
    ctx->pc = 0x19be5cu;
    // NOP
label_19be60:
    // 0x19be60: 0x0  nop
    ctx->pc = 0x19be60u;
    // NOP
label_19be64:
    // 0x19be64: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x19be64u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
label_19be68:
    // 0x19be68: 0x0  nop
    ctx->pc = 0x19be68u;
    // NOP
label_19be6c:
    // 0x19be6c: 0x0  nop
    ctx->pc = 0x19be6cu;
    // NOP
label_19be70:
    // 0x19be70: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x19be70u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
label_19be74:
    // 0x19be74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19be78:
    // 0x19be78: 0xc066e44  jal         func_19B910
label_19be7c:
    if (ctx->pc == 0x19BE7Cu) {
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE80u;
        goto label_19be80;
    }
    ctx->pc = 0x19BE78u;
    SET_GPR_U32(ctx, 31, 0x19BE80u);
    ctx->pc = 0x19BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE78u;
    // 0x19be7c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19be84:
    // 0x19be84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19be84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19be88:
    // 0x19be88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19be8c:
    // 0x19be8c: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x19be8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_19be90:
    // 0x19be90: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x19be90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_19be94:
    // 0x19be94: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x19be94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_19be98:
    // 0x19be98: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_19be9c:
    // 0x19be9c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x19be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19bea0:
    // 0x19bea0: 0xc066e44  jal         func_19B910
label_19bea4:
    if (ctx->pc == 0x19BEA4u) {
        ctx->pc = 0x19BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEA0u;
        // 0x19bea4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEA8u;
        goto label_19bea8;
    }
    ctx->pc = 0x19BEA0u;
    SET_GPR_U32(ctx, 31, 0x19BEA8u);
    ctx->pc = 0x19BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEA0u;
    // 0x19bea4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19beac:
    // 0x19beac: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x19beacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19beb0:
    // 0x19beb0: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x19beb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19beb4:
    // 0x19beb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19beb8:
    // 0x19beb8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x19beb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_19bebc:
    // 0x19bebc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bec0:
    // 0x19bec0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x19bec0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19bec4:
    // 0x19bec4: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x19bec4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_19bec8:
    // 0x19bec8: 0xc066d86  jal         func_19B618
label_19becc:
    if (ctx->pc == 0x19BECCu) {
        ctx->pc = 0x19BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEC8u;
        // 0x19becc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BED0u;
        goto label_19bed0;
    }
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x19BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEC8u;
    // 0x19becc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x19BED0u;
label_19bed0:
    // 0x19bed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19bed4:
    // 0x19bed4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19bed8:
    // 0x19bed8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x19bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_19bedc:
    // 0x19bedc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x19bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19bee0:
    // 0x19bee0: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x19bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_19bee4:
    // 0x19bee4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x19bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19bee8:
    // 0x19bee8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x19bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19beec:
    // 0x19beec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x19beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19bef0:
    // 0x19bef0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x19bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19bef4:
    // 0x19bef4: 0x3e00008  jr          $ra
label_19bef8:
    if (ctx->pc == 0x19BEF8u) {
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEFCu;
        goto label_19befc;
    }
    ctx->pc = 0x19BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x0  nop
    ctx->pc = 0x19befcu;
    // NOP
label_19bf00:
    // 0x19bf00: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x19bf00u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_19bf04:
    // 0x19bf04: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
label_19bf08:
    if (ctx->pc == 0x19BF08u) {
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF04u;
        // 0x19bf08: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF0Cu;
        goto label_19bf0c;
    }
    ctx->pc = 0x19BF04u;
    {
        const bool branch_taken_0x19bf04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF04u;
        // 0x19bf08: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf04) {
            ctx->pc = 0x19BFB0u;
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19BF0Cu;
label_19bf0c:
    // 0x19bf0c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bf10:
    // 0x19bf10: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x19bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19bf14:
    // 0x19bf14: 0x46018242  mul.s       $f9, $f16, $f1
    ctx->pc = 0x19bf14u;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
label_19bf18:
    // 0x19bf18: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x19bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19bf1c:
    // 0x19bf1c: 0x46027a82  mul.s       $f10, $f15, $f2
    ctx->pc = 0x19bf1cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
label_19bf20:
    // 0x19bf20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19bf24:
    // 0x19bf24: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19bf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19bf28:
    // 0x19bf28: 0x46037182  mul.s       $f6, $f14, $f3
    ctx->pc = 0x19bf28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
label_19bf2c:
    // 0x19bf2c: 0xe490000c  swc1        $f16, 0xC($a0)
    ctx->pc = 0x19bf2cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_19bf30:
    // 0x19bf30: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x19bf30u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
label_19bf34:
    // 0x19bf34: 0xe48f001c  swc1        $f15, 0x1C($a0)
    ctx->pc = 0x19bf34u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_19bf38:
    // 0x19bf38: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x19bf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
label_19bf3c:
    // 0x19bf3c: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x19bf3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_19bf40:
    // 0x19bf40: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x19bf40u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_19bf44:
    // 0x19bf44: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x19bf44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_19bf48:
    // 0x19bf48: 0x46001a07  neg.s       $f8, $f3
    ctx->pc = 0x19bf48u;
    ctx->f[8] = FPU_NEG_S(ctx->f[3]);
label_19bf4c:
    // 0x19bf4c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x19bf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_19bf50:
    // 0x19bf50: 0xe4840034  swc1        $f4, 0x34($a0)
    ctx->pc = 0x19bf50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_19bf54:
    // 0x19bf54: 0x460179c2  mul.s       $f7, $f15, $f1
    ctx->pc = 0x19bf54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
label_19bf58:
    // 0x19bf58: 0x46028102  mul.s       $f4, $f16, $f2
    ctx->pc = 0x19bf58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
label_19bf5c:
    // 0x19bf5c: 0xe4880038  swc1        $f8, 0x38($a0)
    ctx->pc = 0x19bf5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_19bf60:
    // 0x19bf60: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x19bf60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19bf64:
    // 0x19bf64: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x19bf64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_19bf68:
    // 0x19bf68: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x19bf68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_19bf6c:
    // 0x19bf6c: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x19bf6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_19bf70:
    // 0x19bf70: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x19bf70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19bf74:
    // 0x19bf74: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x19bf74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_19bf78:
    // 0x19bf78: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x19bf78u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_19bf7c:
    // 0x19bf7c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x19bf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_19bf80:
    // 0x19bf80: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x19bf80u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
label_19bf84:
    // 0x19bf84: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x19bf84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_19bf88:
    // 0x19bf88: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x19bf88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_19bf8c:
    // 0x19bf8c: 0xe485003c  swc1        $f5, 0x3C($a0)
    ctx->pc = 0x19bf8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_19bf90:
    // 0x19bf90: 0x46038002  mul.s       $f0, $f16, $f3
    ctx->pc = 0x19bf90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
label_19bf94:
    // 0x19bf94: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x19bf94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19bf98:
    // 0x19bf98: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x19bf98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
label_19bf9c:
    // 0x19bf9c: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x19bf9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_19bfa0:
    // 0x19bfa0: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x19bfa0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_19bfa4:
    // 0x19bfa4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x19bfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19bfa8:
    // 0x19bfa8: 0x3e00008  jr          $ra
label_19bfac:
    if (ctx->pc == 0x19BFACu) {
        ctx->pc = 0x19BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA8u;
        // 0x19bfac: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFB0u;
        goto label_19bfb0;
    }
    ctx->pc = 0x19BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA8u;
        // 0x19bfac: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BFB0u;
label_19bfb0:
    // 0x19bfb0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x19bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19bfb4:
    // 0x19bfb4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x19bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19bfb8:
    // 0x19bfb8: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x19bfb8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
label_19bfbc:
    // 0x19bfbc: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x19bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19bfc0:
    // 0x19bfc0: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x19bfc0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
label_19bfc4:
    // 0x19bfc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19bfc8:
    // 0x19bfc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bfcc:
    // 0x19bfcc: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x19bfccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_19bfd0:
    // 0x19bfd0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x19bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_19bfd4:
    // 0x19bfd4: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x19bfd4u;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
label_19bfd8:
    // 0x19bfd8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x19bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_19bfdc:
    // 0x19bfdc: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x19bfdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_19bfe0:
    // 0x19bfe0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x19bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_19bfe4:
    // 0x19bfe4: 0x46047282  mul.s       $f10, $f14, $f4
    ctx->pc = 0x19bfe4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
label_19bfe8:
    // 0x19bfe8: 0x460022c7  neg.s       $f11, $f4
    ctx->pc = 0x19bfe8u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
label_19bfec:
    // 0x19bfec: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x19bfecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_19bff0:
    // 0x19bff0: 0x460278c2  mul.s       $f3, $f15, $f2
    ctx->pc = 0x19bff0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
label_19bff4:
    // 0x19bff4: 0x46078302  mul.s       $f12, $f16, $f7
    ctx->pc = 0x19bff4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
label_19bff8:
    // 0x19bff8: 0x0  nop
    ctx->pc = 0x19bff8u;
    // NOP
label_19bffc:
    // 0x19bffc: 0x0  nop
    ctx->pc = 0x19bffcu;
    // NOP
label_19c000:
    // 0x19c000: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19c000u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_19c004:
    // 0x19c004: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19c004u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19c008:
    // 0x19c008: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x19c008u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_19c00c:
    // 0x19c00c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x19c00cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_19c010:
    // 0x19c010: 0x46077b42  mul.s       $f13, $f15, $f7
    ctx->pc = 0x19c010u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
label_19c014:
    // 0x19c014: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c014u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19c018:
    // 0x19c018: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x19c018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_19c01c:
    // 0x19c01c: 0x46048102  mul.s       $f4, $f16, $f4
    ctx->pc = 0x19c01cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
label_19c020:
    // 0x19c020: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x19c020u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_19c024:
    // 0x19c024: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19c028:
    // 0x19c028: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x19c028u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_19c02c:
    // 0x19c02c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x19c02cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_19c030:
    // 0x19c030: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x19c030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_19c034:
    // 0x19c034: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x19c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_19c038:
    // 0x19c038: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x19c038u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_19c03c:
    // 0x19c03c: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x19c03cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c040:
    // 0x19c040: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x19c040u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_19c044:
    // 0x19c044: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x19c044u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_19c048:
    // 0x19c048: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x19c048u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_19c04c:
    // 0x19c04c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x19c04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_19c050:
    // 0x19c050: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x19c050u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_19c054:
    // 0x19c054: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x19c054u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_19c058:
    // 0x19c058: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x19c058u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_19c05c:
    // 0x19c05c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x19c05cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19c060:
    // 0x19c060: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x19c060u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_19c064:
    // 0x19c064: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x19c064u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_19c068:
    // 0x19c068: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x19c068u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_19c06c:
    // 0x19c06c: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x19c06cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_19c070:
    // 0x19c070: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x19c070u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_19c074:
    // 0x19c074: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x19c074u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_19c078:
    // 0x19c078: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x19c078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_19c07c:
    // 0x19c07c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x19c07cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19c080:
    // 0x19c080: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x19c080u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_19c084:
    // 0x19c084: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x19c084u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_19c088:
    // 0x19c088: 0x3e00008  jr          $ra
label_19c08c:
    if (ctx->pc == 0x19C08Cu) {
        ctx->pc = 0x19C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C088u;
        // 0x19c08c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C090u;
        goto label_19c090;
    }
    ctx->pc = 0x19C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C088u;
        // 0x19c08c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C090u;
label_19c090:
    // 0x19c090: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c094:
    // 0x19c094: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19c094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19c098:
    // 0x19c098: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19c098u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19c09c:
    // 0x19c09c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19c09cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19c0a0:
    // 0x19c0a0: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19c0a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c0a4:
    // 0x19c0a4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0a8:
    // 0x19c0a8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0ac:
    // 0x19c0ac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0b0:
    // 0x19c0b0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x19c0b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c0b4:
    // 0x19c0b4: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x19c0b4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_19c0b8:
    // 0x19c0b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x19c0b8u;
    // VWAITQ (Q already resolved in this runtime)
label_19c0bc:
    // 0x19c0bc: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x19c0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c0c0:
    // 0x19c0c0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_19c0c4:
    if (ctx->pc == 0x19C0C4u) {
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0C8u;
        goto label_19c0c8;
    }
    ctx->pc = 0x19C0C0u;
    {
        const bool branch_taken_0x19c0c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0c0) {
            ctx->pc = 0x19C0CCu;
            goto label_19c0cc;
        }
    }
    ctx->pc = 0x19C0C8u;
label_19c0c8:
    // 0x19c0c8: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x19c0c8u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_19c0cc:
    // 0x19c0cc: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x19c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
label_19c0d0:
    // 0x19c0d0: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19c0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19c0d4:
    // 0x19c0d4: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x19c0d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_19c0d8:
    // 0x19c0d8: 0x1407fff1  bne         $zero, $a3, . + 4 + (-0xF << 2)
label_19c0dc:
    if (ctx->pc == 0x19C0DCu) {
        ctx->pc = 0x19C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D8u;
        // 0x19c0dc: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0E0u;
        goto label_19c0e0;
    }
    ctx->pc = 0x19C0D8u;
    {
        const bool branch_taken_0x19c0d8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x19C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D8u;
        // 0x19c0dc: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0d8) {
            ctx->pc = 0x19C0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c0a0;
        }
    }
    ctx->pc = 0x19C0E0u;
label_19c0e0:
    // 0x19c0e0: 0x3e00008  jr          $ra
label_19c0e4:
    if (ctx->pc == 0x19C0E4u) {
        ctx->pc = 0x19C0E8u;
        goto label_19c0e8;
    }
    ctx->pc = 0x19C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0E8u;
label_19c0e8:
    // 0x19c0e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c0ec:
    // 0x19c0ec: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19c0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19c0f0:
    // 0x19c0f0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19c0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19c0f4:
    // 0x19c0f4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19c0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19c0f8:
    // 0x19c0f8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19c0f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c0fc:
    // 0x19c0fc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c0fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c100:
    // 0x19c100: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c104:
    // 0x19c104: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c108:
    // 0x19c108: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x19c108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c10c:
    // 0x19c10c: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x19c10cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_19c110:
    // 0x19c110: 0x4a0003bf  vwaitq
    ctx->pc = 0x19c110u;
    // VWAITQ (Q already resolved in this runtime)
label_19c114:
    // 0x19c114: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x19c114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c118:
    // 0x19c118: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_19c11c:
    if (ctx->pc == 0x19C11Cu) {
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C120u;
        goto label_19c120;
    }
    ctx->pc = 0x19C118u;
    {
        const bool branch_taken_0x19c118 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c118) {
            ctx->pc = 0x19C124u;
            goto label_19c124;
        }
    }
    ctx->pc = 0x19C120u;
label_19c120:
    // 0x19c120: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x19c120u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_19c124:
    // 0x19c124: 0x3e00008  jr          $ra
label_19c128:
    if (ctx->pc == 0x19C128u) {
        ctx->pc = 0x19C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C124u;
        // 0x19c128: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C12Cu;
        goto label_19c12c;
    }
    ctx->pc = 0x19C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C124u;
        // 0x19c128: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C12Cu;
label_19c12c:
    // 0x19c12c: 0x0  nop
    ctx->pc = 0x19c12cu;
    // NOP
label_19c130:
    // 0x19c130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c134:
    // 0x19c134: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c138:
    // 0x19c138: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c13c:
    // 0x19c13c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x19c13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19c140:
    // 0x19c140: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c144:
    // 0x19c144: 0x3e00008  jr          $ra
label_19c148:
    if (ctx->pc == 0x19C148u) {
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C14Cu;
        goto label_19c14c;
    }
    ctx->pc = 0x19C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C14Cu;
label_19c14c:
    // 0x19c14c: 0x0  nop
    ctx->pc = 0x19c14cu;
    // NOP
label_19c150:
    // 0x19c150: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c154:
    // 0x19c154: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19c154u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c158:
    // 0x19c158: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19c158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19c15c:
    // 0x19c15c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19c15cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19c160:
    // 0x19c160: 0x4a29233c  vmove.w     $vf9, $vf4
    ctx->pc = 0x19c160u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
label_19c164:
    // 0x19c164: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x19c164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19c168:
    // 0x19c168: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x19c168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19c16c:
    // 0x19c16c: 0x4bc621bc  vmulax.xyz  $ACC, $vf4, $vf6x
    ctx->pc = 0x19c16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19c170:
    // 0x19c170: 0x4bc82a48  vmaddx.xyz  $vf9, $vf5, $vf8x
    ctx->pc = 0x19c170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c174:
    // 0x19c174: 0x3e00008  jr          $ra
label_19c178:
    if (ctx->pc == 0x19C178u) {
        ctx->pc = 0x19C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C174u;
        // 0x19c178: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C17Cu;
        goto label_19c17c;
    }
    ctx->pc = 0x19C174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C174u;
        // 0x19c178: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C17Cu;
label_19c17c:
    // 0x19c17c: 0x0  nop
    ctx->pc = 0x19c17cu;
    // NOP
label_19c180:
    // 0x19c180: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c184:
    // 0x19c184: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19c184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19c188:
    // 0x19c188: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19c188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19c18c:
    // 0x19c18c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19c18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c190:
    // 0x19c190: 0x3e00008  jr          $ra
label_19c194:
    if (ctx->pc == 0x19C194u) {
        ctx->pc = 0x19C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C190u;
        // 0x19c194: 0xf8840000  sqc2        $vf4, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C198u;
        goto label_19c198;
    }
    ctx->pc = 0x19C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C190u;
        // 0x19c194: 0xf8840000  sqc2        $vf4, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C198u;
label_19c198:
    // 0x19c198: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19c198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c19c:
    // 0x19c19c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
label_19c1a0:
    // 0x19c1a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1a4:
    // 0x19c1a4: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x19c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
label_19c1a8:
    // 0x19c1a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1ac:
    // 0x19c1ac: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x19c1acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c1b0:
    // 0x19c1b0: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x19c1b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19c1b4:
    // 0x19c1b4: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c1b4u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c1b8:
    // 0x19c1b8: 0x4ba4396c  vsub.xyw    $vf5, $vf7, $vf4
    ctx->pc = 0x19c1b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c1bc:
    // 0x19c1bc: 0x4b87316c  vsub.xy     $vf5, $vf6, $vf7
    ctx->pc = 0x19c1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c1c0:
    // 0x19c1c0: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c0u;
    // NOP operation, no action needed for VU0
label_19c1c4:
    // 0x19c1c4: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c4u;
    // NOP operation, no action needed for VU0
label_19c1c8:
    // 0x19c1c8: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c8u;
    // NOP operation, no action needed for VU0
label_19c1cc:
    // 0x19c1cc: 0x4a0002ff  vnop
    ctx->pc = 0x19c1ccu;
    // NOP operation, no action needed for VU0
label_19c1d0:
    // 0x19c1d0: 0x4a0002ff  vnop
    ctx->pc = 0x19c1d0u;
    // NOP operation, no action needed for VU0
label_19c1d4:
    // 0x19c1d4: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c1d4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c1d8:
    // 0x19c1d8: 0x3e00008  jr          $ra
label_19c1dc:
    if (ctx->pc == 0x19C1DCu) {
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1E0u;
        goto label_19c1e0;
    }
    ctx->pc = 0x19C1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C1E0u;
label_19c1e0:
    // 0x19c1e0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19c1e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c1e4:
    // 0x19c1e4: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
label_19c1e8:
    // 0x19c1e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1ec:
    // 0x19c1ec: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x19c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
label_19c1f0:
    // 0x19c1f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1f4:
    // 0x19c1f4: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x19c1f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c1f8:
    // 0x19c1f8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x19c1f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c1fc:
    // 0x19c1fc: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x19c1fcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c200:
    // 0x19c200: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x19c200u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19c204:
    // 0x19c204: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c204u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c208:
    // 0x19c208: 0x4ba4316c  vsub.xyw    $vf5, $vf6, $vf4
    ctx->pc = 0x19c208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c20c:
    // 0x19c20c: 0x4b86396c  vsub.xy     $vf5, $vf7, $vf6
    ctx->pc = 0x19c20cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c210:
    // 0x19c210: 0x4ba4416c  vsub.xyw    $vf5, $vf8, $vf4
    ctx->pc = 0x19c210u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c214:
    // 0x19c214: 0x4b88396c  vsub.xy     $vf5, $vf7, $vf8
    ctx->pc = 0x19c214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c218:
    // 0x19c218: 0x4ba4496c  vsub.xyw    $vf5, $vf9, $vf4
    ctx->pc = 0x19c218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c21c:
    // 0x19c21c: 0x4b89396c  vsub.xy     $vf5, $vf7, $vf9
    ctx->pc = 0x19c21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c220:
    // 0x19c220: 0x4a0002ff  vnop
    ctx->pc = 0x19c220u;
    // NOP operation, no action needed for VU0
label_19c224:
    // 0x19c224: 0x4a0002ff  vnop
    ctx->pc = 0x19c224u;
    // NOP operation, no action needed for VU0
label_19c228:
    // 0x19c228: 0x4a0002ff  vnop
    ctx->pc = 0x19c228u;
    // NOP operation, no action needed for VU0
label_19c22c:
    // 0x19c22c: 0x4a0002ff  vnop
    ctx->pc = 0x19c22cu;
    // NOP operation, no action needed for VU0
label_19c230:
    // 0x19c230: 0x4a0002ff  vnop
    ctx->pc = 0x19c230u;
    // NOP operation, no action needed for VU0
label_19c234:
    // 0x19c234: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c234u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c238:
    // 0x19c238: 0x3e00008  jr          $ra
label_19c23c:
    if (ctx->pc == 0x19C23Cu) {
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C238u;
        // 0x19c23c: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C240u;
        goto label_19c240;
    }
    ctx->pc = 0x19C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C238u;
        // 0x19c23c: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C240u;
label_19c240:
    // 0x19c240: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x19c240u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19c244:
    // 0x19c244: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19c244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c248:
    // 0x19c248: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x19c248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_19c24c:
    // 0x19c24c: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x19c24cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_19c250:
    // 0x19c250: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x19c250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_19c254:
    // 0x19c254: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x19c254u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c258:
    // 0x19c258: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x19c258u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c25c:
    // 0x19c25c: 0xd88b0000  lqc2        $vf11, 0x0($a0)
    ctx->pc = 0x19c25cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c260:
    // 0x19c260: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x19c260u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c264:
    // 0x19c264: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c268:
    // 0x19c268: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c26c:
    // 0x19c26c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c26cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c270:
    // 0x19c270: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x19c270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19c274:
    // 0x19c274: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x19c274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_19c278:
    // 0x19c278: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x19c278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_19c27c:
    // 0x19c27c: 0x4a0002ff  vnop
    ctx->pc = 0x19c27cu;
    // NOP operation, no action needed for VU0
label_19c280:
    // 0x19c280: 0x4a0002ff  vnop
    ctx->pc = 0x19c280u;
    // NOP operation, no action needed for VU0
label_19c284:
    // 0x19c284: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c284u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c288:
    // 0x19c288: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x19c288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_19c28c:
    // 0x19c28c: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x19c28cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_19c290:
    // 0x19c290: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x19c290u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
label_19c294:
    // 0x19c294: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x19c294u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
label_19c298:
    // 0x19c298: 0x4a0002ff  vnop
    ctx->pc = 0x19c298u;
    // NOP operation, no action needed for VU0
label_19c29c:
    // 0x19c29c: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x19c29cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19c2a0:
    // 0x19c2a0: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x19c2a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19c2a4:
    // 0x19c2a4: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x19c2a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_19c2a8:
    // 0x19c2a8: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c2a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c2ac:
    // 0x19c2ac: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x19c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_19c2b0:
    // 0x19c2b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19c2b4:
    if (ctx->pc == 0x19C2B4u) {
        ctx->pc = 0x19C2B8u;
        goto label_19c2b8;
    }
    ctx->pc = 0x19C2B0u;
    {
        const bool branch_taken_0x19c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2b0) {
            ctx->pc = 0x19C2C4u;
            goto label_19c2c4;
        }
    }
    ctx->pc = 0x19C2B8u;
label_19c2b8:
    // 0x19c2b8: 0x1408ffea  bne         $zero, $t0, . + 4 + (-0x16 << 2)
label_19c2bc:
    if (ctx->pc == 0x19C2BCu) {
        ctx->pc = 0x19C2C0u;
        goto label_19c2c0;
    }
    ctx->pc = 0x19C2B8u;
    {
        const bool branch_taken_0x19c2b8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        if (branch_taken_0x19c2b8) {
            ctx->pc = 0x19C264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c264;
        }
    }
    ctx->pc = 0x19C2C0u;
label_19c2c0:
    // 0x19c2c0: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x19c2c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_19c2c4:
    // 0x19c2c4: 0x3e00008  jr          $ra
label_19c2c8:
    if (ctx->pc == 0x19C2C8u) {
        ctx->pc = 0x19C2CCu;
        goto label_19c2cc;
    }
    ctx->pc = 0x19C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C2CCu;
label_19c2cc:
    // 0x19c2cc: 0x0  nop
    ctx->pc = 0x19c2ccu;
    // NOP
label_19c2d0:
    // 0x19c2d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19c2d4:
    // 0x19c2d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19c2d8:
    // 0x19c2d8: 0x34423830  ori         $v0, $v0, 0x3830
    ctx->pc = 0x19c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14384);
label_19c2dc:
    // 0x19c2dc: 0x34843820  ori         $a0, $a0, 0x3820
    ctx->pc = 0x19c2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14368);
label_19c2e0:
    // 0x19c2e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19c2e4:
    // 0x19c2e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19c2e8:
    // 0x19c2e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_19c2ec:
    // 0x19c2ec: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
label_19c2f0:
    // 0x19c2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c2f4:
    // 0x19c2f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c2f8:
    // 0x19c2f8: 0x4848e000  cfc2.ni     $t0, $vi28
    ctx->pc = 0x19c2f8u;
    SET_GPR_U32(ctx, 8, ctx->vu0_fbrst);
label_19c2fc:
    // 0x19c2fc: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x19c2fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_19c300:
    // 0x19c300: 0x48c8e000  ctc2.ni     $t0, $vi28
    ctx->pc = 0x19c300u;
    ctx->vu0_fbrst = GPR_U32(ctx, 8) & 0x00000C0Cu;
label_19c304:
    // 0x19c304: 0x40f  sync.p
    ctx->pc = 0x19c304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_19c308:
    // 0x19c308: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x19c308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_19c30c:
    // 0x19c30c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19c310:
    // 0x19c310: 0x248458b0  addiu       $a0, $a0, 0x58B0
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22704));
label_19c314:
    // 0x19c314: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x19c314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_19c318:
    // 0x19c318: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19c318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c31c:
    // 0x19c31c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_19c320:
    // 0x19c320: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x19c320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_19c324:
    // 0x19c324: 0x3e00008  jr          $ra
label_19c328:
    if (ctx->pc == 0x19C328u) {
        ctx->pc = 0x19C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C324u;
        // 0x19c328: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C32Cu;
        goto label_19c32c;
    }
    ctx->pc = 0x19C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C324u;
        // 0x19c328: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C32Cu;
label_19c32c:
    // 0x19c32c: 0x0  nop
    ctx->pc = 0x19c32cu;
    // NOP
label_19c330:
    // 0x19c330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19c334:
    // 0x19c334: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_19c338:
    // 0x19c338: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_19c33c:
    // 0x19c33c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19c33cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c340:
    // 0x19c340: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_19c344:
    // 0x19c344: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_19c348:
    // 0x19c348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19c34c:
    // 0x19c34c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19c350:
    // 0x19c350: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19c354:
    // 0x19c354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c358:
    // 0x19c358: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_19c35c:
    // 0x19c35c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x19c35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_19c360:
    // 0x19c360: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_19c364:
    // 0x19c364: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19c368:
    // 0x19c368: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19c36c:
    // 0x19c36c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_19c370:
    // 0x19c370: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c374:
    // 0x19c374: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x19c374u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19c378:
    // 0x19c378: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_19c37c:
    if (ctx->pc == 0x19C37Cu) {
        ctx->pc = 0x19C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C378u;
        // 0x19c37c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C380u;
        goto label_19c380;
    }
    ctx->pc = 0x19C378u;
    {
        const bool branch_taken_0x19c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c378) {
            ctx->pc = 0x19C37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C378u;
            // 0x19c37c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C380u;
            goto label_19c380;
        }
    }
    ctx->pc = 0x19C380u;
label_19c380:
    // 0x19c380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c384:
    // 0x19c384: 0x1810  mfhi        $v1
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19c388:
    // 0x19c388: 0xb812  mflo        $s7
    ctx->pc = 0x19c388u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_19c38c:
    // 0x19c38c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x19c38cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19c390:
    // 0x19c390: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_19c394:
    // 0x19c394: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_19c398:
    if (ctx->pc == 0x19C398u) {
        ctx->pc = 0x19C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C394u;
        // 0x19c398: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C39Cu;
        goto label_19c39c;
    }
    ctx->pc = 0x19C394u;
    {
        const bool branch_taken_0x19c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C394u;
        // 0x19c398: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c394) {
            ctx->pc = 0x19C3E0u;
            goto label_19c3e0;
        }
    }
    ctx->pc = 0x19C39Cu;
label_19c39c:
    // 0x19c39c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c3a0:
    // 0x19c3a0: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_19c3a4:
    // 0x19c3a4: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
label_19c3a8:
    // 0x19c3a8: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_19c3ac:
    // 0x19c3ac: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_19c3b0:
    // 0x19c3b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19c3b4:
    // 0x19c3b4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x19c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
label_19c3b8:
    // 0x19c3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c3bc:
    // 0x19c3bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_19c3c0:
    // 0x19c3c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19c3c4:
    // 0x19c3c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_19c3c8:
    if (ctx->pc == 0x19C3C8u) {
        ctx->pc = 0x19C3CCu;
        goto label_19c3cc;
    }
    ctx->pc = 0x19C3C4u;
    {
        const bool branch_taken_0x19c3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c3c4) {
            ctx->pc = 0x19C3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c3b0;
        }
    }
    ctx->pc = 0x19C3CCu;
label_19c3cc:
    // 0x19c3cc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c3d0:
    // 0x19c3d0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x19c3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c3d4:
    // 0x19c3d4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19c3d8:
    // 0x19c3d8: 0x10000026  b           . + 4 + (0x26 << 2)
label_19c3dc:
    if (ctx->pc == 0x19C3DCu) {
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3E0u;
        goto label_19c3e0;
    }
    ctx->pc = 0x19C3D8u;
    {
        const bool branch_taken_0x19c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3d8) {
            ctx->pc = 0x19C474u;
            goto label_19c474;
        }
    }
    ctx->pc = 0x19C3E0u;
label_19c3e0:
    // 0x19c3e0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_19c3e4:
    // 0x19c3e4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x19c3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c3e8:
    // 0x19c3e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19c3ec:
    if (ctx->pc == 0x19C3ECu) {
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3F0u;
        goto label_19c3f0;
    }
    ctx->pc = 0x19C3E8u;
    {
        const bool branch_taken_0x19c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3e8) {
            ctx->pc = 0x19C414u;
            goto label_19c414;
        }
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19c3f4:
    // 0x19c3f4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x19c3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19c3f8:
    // 0x19c3f8: 0x24a59fa8  addiu       $a1, $a1, -0x6058
    ctx->pc = 0x19c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942632));
label_19c3fc:
    // 0x19c3fc: 0xc068d1e  jal         func_1A3478
label_19c400:
    if (ctx->pc == 0x19C400u) {
        ctx->pc = 0x19C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3FCu;
        // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C404u;
        goto label_19c404;
    }
    ctx->pc = 0x19C3FCu;
    SET_GPR_U32(ctx, 31, 0x19C404u);
    ctx->pc = 0x19C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3FCu;
    // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19C404u;
label_19c404:
    // 0x19c404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c408:
    // 0x19c408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c40c:
    // 0x19c40c: 0x10000050  b           . + 4 + (0x50 << 2)
label_19c410:
    if (ctx->pc == 0x19C410u) {
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C40Cu;
        // 0x19c410: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C414u;
        goto label_19c414;
    }
    ctx->pc = 0x19C40Cu;
    {
        const bool branch_taken_0x19c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C40Cu;
        // 0x19c410: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c40c) {
            ctx->pc = 0x19C550u;
            goto label_19c550;
        }
    }
    ctx->pc = 0x19C414u;
label_19c414:
    // 0x19c414: 0xc067160  jal         func_19C580
label_19c418:
    if (ctx->pc == 0x19C418u) {
        ctx->pc = 0x19C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C414u;
        // 0x19c418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C41Cu;
        goto label_19c41c;
    }
    ctx->pc = 0x19C414u;
    SET_GPR_U32(ctx, 31, 0x19C41Cu);
    ctx->pc = 0x19C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C414u;
    // 0x19c418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C580u;
    goto label_19c580;
    ctx->pc = 0x19C41Cu;
label_19c41c:
    // 0x19c41c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19c420:
    // 0x19c420: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_19c424:
    // 0x19c424: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
label_19c428:
    // 0x19c428: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_19c42c:
    // 0x19c42c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x19c42cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_19c430:
    // 0x19c430: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x19c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_19c434:
    // 0x19c434: 0x0  nop
    ctx->pc = 0x19c434u;
    // NOP
label_19c438:
    // 0x19c438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c43c:
    // 0x19c43c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19c440:
    // 0x19c440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19c444:
    // 0x19c444: 0x0  nop
    ctx->pc = 0x19c444u;
    // NOP
label_19c448:
    // 0x19c448: 0x0  nop
    ctx->pc = 0x19c448u;
    // NOP
label_19c44c:
    // 0x19c44c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19c450:
    if (ctx->pc == 0x19C450u) {
        ctx->pc = 0x19C454u;
        goto label_19c454;
    }
    ctx->pc = 0x19C44Cu;
    {
        const bool branch_taken_0x19c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c44c) {
            ctx->pc = 0x19C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c438;
        }
    }
    ctx->pc = 0x19C454u;
label_19c454:
    // 0x19c454: 0xc068372  jal         func_1A0DC8
label_19c458:
    if (ctx->pc == 0x19C458u) {
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C45Cu;
        goto label_19c45c;
    }
    ctx->pc = 0x19C454u;
    SET_GPR_U32(ctx, 31, 0x19C45Cu);
    ctx->pc = 0x19C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C454u;
    // 0x19c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DC8u;
    { ctx->pc = 0x1a0dc8; return; }
    ctx->pc = 0x19C45Cu;
label_19c45c:
    // 0x19c45c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c460:
    // 0x19c460: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c464:
    // 0x19c464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c468:
    // 0x19c468: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19c468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19c46c:
    // 0x19c46c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_19c470:
    // 0x19c470: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19c470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_19c474:
    // 0x19c474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c478:
    // 0x19c478: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
label_19c47c:
    if (ctx->pc == 0x19C47Cu) {
        ctx->pc = 0x19C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C478u;
        // 0x19c47c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C480u;
        goto label_19c480;
    }
    ctx->pc = 0x19C478u;
    {
        const bool branch_taken_0x19c478 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c478) {
            ctx->pc = 0x19C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C478u;
            // 0x19c47c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4A4u;
            goto label_19c4a4;
        }
    }
    ctx->pc = 0x19C480u;
label_19c480:
    // 0x19c480: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x19c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_19c484:
    // 0x19c484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19c488:
    if (ctx->pc == 0x19C488u) {
        ctx->pc = 0x19C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C484u;
        // 0x19c488: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C48Cu;
        goto label_19c48c;
    }
    ctx->pc = 0x19C484u;
    {
        const bool branch_taken_0x19c484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C484u;
        // 0x19c488: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c484) {
            ctx->pc = 0x19C4A0u;
            goto label_19c4a0;
        }
    }
    ctx->pc = 0x19C48Cu;
label_19c48c:
    // 0x19c48c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c490:
    // 0x19c490: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19c490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c494:
    // 0x19c494: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_19c498:
    // 0x19c498: 0x10000006  b           . + 4 + (0x6 << 2)
label_19c49c:
    if (ctx->pc == 0x19C49Cu) {
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4A0u;
        goto label_19c4a0;
    }
    ctx->pc = 0x19C498u;
    {
        const bool branch_taken_0x19c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c498) {
            ctx->pc = 0x19C4B4u;
            goto label_19c4b4;
        }
    }
    ctx->pc = 0x19C4A0u;
label_19c4a0:
    // 0x19c4a0: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4a4:
    // 0x19c4a4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c4a8:
    // 0x19c4a8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19c4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c4ac:
    // 0x19c4ac: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_19c4b0:
    // 0x19c4b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19c4b4:
    // 0x19c4b4: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4b8:
    // 0x19c4b8: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c4bc:
    // 0x19c4bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c4c0:
    // 0x19c4c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c4c4:
    // 0x19c4c4: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x19c4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c4c8:
    // 0x19c4c8: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_19c4cc:
    // 0x19c4cc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19c4d0:
    // 0x19c4d0: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x19c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19c4d4:
    // 0x19c4d4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_19c4d8:
    if (ctx->pc == 0x19C4D8u) {
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4DCu;
        goto label_19c4dc;
    }
    ctx->pc = 0x19C4D4u;
    {
        const bool branch_taken_0x19c4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4d4) {
            ctx->pc = 0x19C510u;
            goto label_19c510;
        }
    }
    ctx->pc = 0x19C4DCu;
label_19c4dc:
    // 0x19c4dc: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4e0:
    // 0x19c4e0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19c4e4:
    // 0x19c4e4: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_19c4e8:
    // 0x19c4e8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x19c4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c4ec:
    // 0x19c4ec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19c4f0:
    // 0x19c4f0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_19c4f4:
    // 0x19c4f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19c4f8:
    // 0x19c4f8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x19c4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19c4fc:
    // 0x19c4fc: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x19c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_19c500:
    // 0x19c500: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x19c500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19c504:
    // 0x19c504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19c508:
    // 0x19c508: 0x10000010  b           . + 4 + (0x10 << 2)
label_19c50c:
    if (ctx->pc == 0x19C50Cu) {
        ctx->pc = 0x19C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C508u;
        // 0x19c50c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C510u;
        goto label_19c510;
    }
    ctx->pc = 0x19C508u;
    {
        const bool branch_taken_0x19c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C508u;
        // 0x19c50c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c508) {
            ctx->pc = 0x19C54Cu;
            goto label_19c54c;
        }
    }
    ctx->pc = 0x19C510u;
label_19c510:
    // 0x19c510: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_19c514:
    if (ctx->pc == 0x19C514u) {
        ctx->pc = 0x19C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C510u;
        // 0x19c514: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C518u;
        goto label_19c518;
    }
    ctx->pc = 0x19C510u;
    {
        const bool branch_taken_0x19c510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c510) {
            ctx->pc = 0x19C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C510u;
            // 0x19c514: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C51Cu;
            goto label_19c51c;
        }
    }
    ctx->pc = 0x19C518u;
label_19c518:
    // 0x19c518: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x19c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_19c51c:
    // 0x19c51c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_19c520:
    // 0x19c520: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19c524:
    // 0x19c524: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c528:
    // 0x19c528: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c52c:
    // 0x19c52c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x19c52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19c530:
    // 0x19c530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c534:
    // 0x19c534: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_19c538:
    // 0x19c538: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x19c538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19c53c:
    // 0x19c53c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x19c53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c540:
    // 0x19c540: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_19c544:
    // 0x19c544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c548:
    // 0x19c548: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19c548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_19c54c:
    // 0x19c54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c550:
    // 0x19c550: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19c554:
    // 0x19c554: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19c554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19c558:
    // 0x19c558: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19c558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19c55c:
    // 0x19c55c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19c55cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19c560:
    // 0x19c560: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19c560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19c564:
    // 0x19c564: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19c564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19c568:
    // 0x19c568: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19c568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19c56c:
    // 0x19c56c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19c56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19c570:
    // 0x19c570: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c574:
    // 0x19c574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19c574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c578:
    // 0x19c578: 0x3e00008  jr          $ra
label_19c57c:
    if (ctx->pc == 0x19C57Cu) {
        ctx->pc = 0x19C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C578u;
        // 0x19c57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C580u;
        goto label_19c580;
    }
    ctx->pc = 0x19C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C578u;
        // 0x19c57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C580u;
label_19c580:
    // 0x19c580: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_19c584:
    // 0x19c584: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c588:
    // 0x19c588: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x19c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_19c58c:
    // 0x19c58c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x19c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_19c590:
    // 0x19c590: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19c594:
    // 0x19c594: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x19c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_19c598:
    // 0x19c598: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c59c:
    // 0x19c59c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x19c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_19c5a0:
    // 0x19c5a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19c5a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c5a4:
    // 0x19c5a4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x19c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_19c5a8:
    // 0x19c5a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19c5ac:
    // 0x19c5ac: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x19c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_19c5b0:
    // 0x19c5b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c5b4:
    // 0x19c5b4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x19c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_19c5b8:
    // 0x19c5b8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x19c5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19c5bc:
    // 0x19c5bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_19c5c0:
    // 0x19c5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c5c4:
    // 0x19c5c4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x19c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_19c5c8:
    // 0x19c5c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c5cc:
    // 0x19c5cc: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x19c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    ctx->pc = 0x19c5d0u;
    return;
}

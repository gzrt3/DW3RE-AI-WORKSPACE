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


void FUN_0017faa0_part26(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        case 0x18be10u: goto label_18be10;
        case 0x18be14u: goto label_18be14;
        case 0x18be18u: goto label_18be18;
        case 0x18be1cu: goto label_18be1c;
        case 0x18be20u: goto label_18be20;
        case 0x18be24u: goto label_18be24;
        case 0x18be28u: goto label_18be28;
        case 0x18be2cu: goto label_18be2c;
        case 0x18be30u: goto label_18be30;
        case 0x18be34u: goto label_18be34;
        case 0x18be38u: goto label_18be38;
        case 0x18be3cu: goto label_18be3c;
        case 0x18be40u: goto label_18be40;
        case 0x18be44u: goto label_18be44;
        case 0x18be48u: goto label_18be48;
        case 0x18be4cu: goto label_18be4c;
        case 0x18be50u: goto label_18be50;
        case 0x18be54u: goto label_18be54;
        case 0x18be58u: goto label_18be58;
        case 0x18be5cu: goto label_18be5c;
        case 0x18be60u: goto label_18be60;
        case 0x18be64u: goto label_18be64;
        case 0x18be68u: goto label_18be68;
        case 0x18be6cu: goto label_18be6c;
        case 0x18be70u: goto label_18be70;
        case 0x18be74u: goto label_18be74;
        case 0x18be78u: goto label_18be78;
        case 0x18be7cu: goto label_18be7c;
        case 0x18be80u: goto label_18be80;
        case 0x18be84u: goto label_18be84;
        case 0x18be88u: goto label_18be88;
        case 0x18be8cu: goto label_18be8c;
        case 0x18be90u: goto label_18be90;
        case 0x18be94u: goto label_18be94;
        case 0x18be98u: goto label_18be98;
        case 0x18be9cu: goto label_18be9c;
        case 0x18bea0u: goto label_18bea0;
        case 0x18bea4u: goto label_18bea4;
        case 0x18bea8u: goto label_18bea8;
        case 0x18beacu: goto label_18beac;
        case 0x18beb0u: goto label_18beb0;
        case 0x18beb4u: goto label_18beb4;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bebcu: goto label_18bebc;
        case 0x18bec0u: goto label_18bec0;
        case 0x18bec4u: goto label_18bec4;
        case 0x18bec8u: goto label_18bec8;
        case 0x18beccu: goto label_18becc;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bed4u: goto label_18bed4;
        case 0x18bed8u: goto label_18bed8;
        case 0x18bedcu: goto label_18bedc;
        case 0x18bee0u: goto label_18bee0;
        case 0x18bee4u: goto label_18bee4;
        case 0x18bee8u: goto label_18bee8;
        case 0x18beecu: goto label_18beec;
        case 0x18bef0u: goto label_18bef0;
        case 0x18bef4u: goto label_18bef4;
        case 0x18bef8u: goto label_18bef8;
        case 0x18befcu: goto label_18befc;
        case 0x18bf00u: goto label_18bf00;
        case 0x18bf04u: goto label_18bf04;
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        case 0x18bf68u: goto label_18bf68;
        case 0x18bf6cu: goto label_18bf6c;
        case 0x18bf70u: goto label_18bf70;
        case 0x18bf74u: goto label_18bf74;
        case 0x18bf78u: goto label_18bf78;
        case 0x18bf7cu: goto label_18bf7c;
        case 0x18bf80u: goto label_18bf80;
        case 0x18bf84u: goto label_18bf84;
        case 0x18bf88u: goto label_18bf88;
        case 0x18bf8cu: goto label_18bf8c;
        case 0x18bf90u: goto label_18bf90;
        case 0x18bf94u: goto label_18bf94;
        case 0x18bf98u: goto label_18bf98;
        case 0x18bf9cu: goto label_18bf9c;
        case 0x18bfa0u: goto label_18bfa0;
        case 0x18bfa4u: goto label_18bfa4;
        case 0x18bfa8u: goto label_18bfa8;
        case 0x18bfacu: goto label_18bfac;
        case 0x18bfb0u: goto label_18bfb0;
        case 0x18bfb4u: goto label_18bfb4;
        case 0x18bfb8u: goto label_18bfb8;
        case 0x18bfbcu: goto label_18bfbc;
        case 0x18bfc0u: goto label_18bfc0;
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfc8u: goto label_18bfc8;
        case 0x18bfccu: goto label_18bfcc;
        case 0x18bfd0u: goto label_18bfd0;
        case 0x18bfd4u: goto label_18bfd4;
        case 0x18bfd8u: goto label_18bfd8;
        case 0x18bfdcu: goto label_18bfdc;
        case 0x18bfe0u: goto label_18bfe0;
        case 0x18bfe4u: goto label_18bfe4;
        case 0x18bfe8u: goto label_18bfe8;
        case 0x18bfecu: goto label_18bfec;
        case 0x18bff0u: goto label_18bff0;
        case 0x18bff4u: goto label_18bff4;
        case 0x18bff8u: goto label_18bff8;
        case 0x18bffcu: goto label_18bffc;
        case 0x18c000u: goto label_18c000;
        case 0x18c004u: goto label_18c004;
        case 0x18c008u: goto label_18c008;
        case 0x18c00cu: goto label_18c00c;
        case 0x18c010u: goto label_18c010;
        case 0x18c014u: goto label_18c014;
        case 0x18c018u: goto label_18c018;
        case 0x18c01cu: goto label_18c01c;
        case 0x18c020u: goto label_18c020;
        case 0x18c024u: goto label_18c024;
        case 0x18c028u: goto label_18c028;
        case 0x18c02cu: goto label_18c02c;
        case 0x18c030u: goto label_18c030;
        case 0x18c034u: goto label_18c034;
        case 0x18c038u: goto label_18c038;
        case 0x18c03cu: goto label_18c03c;
        case 0x18c040u: goto label_18c040;
        case 0x18c044u: goto label_18c044;
        case 0x18c048u: goto label_18c048;
        case 0x18c04cu: goto label_18c04c;
        case 0x18c050u: goto label_18c050;
        case 0x18c054u: goto label_18c054;
        case 0x18c058u: goto label_18c058;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c060u: goto label_18c060;
        case 0x18c064u: goto label_18c064;
        case 0x18c068u: goto label_18c068;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c070u: goto label_18c070;
        case 0x18c074u: goto label_18c074;
        case 0x18c078u: goto label_18c078;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c080u: goto label_18c080;
        case 0x18c084u: goto label_18c084;
        case 0x18c088u: goto label_18c088;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c090u: goto label_18c090;
        case 0x18c094u: goto label_18c094;
        case 0x18c098u: goto label_18c098;
        case 0x18c09cu: goto label_18c09c;
        case 0x18c0a0u: goto label_18c0a0;
        case 0x18c0a4u: goto label_18c0a4;
        case 0x18c0a8u: goto label_18c0a8;
        case 0x18c0acu: goto label_18c0ac;
        case 0x18c0b0u: goto label_18c0b0;
        case 0x18c0b4u: goto label_18c0b4;
        case 0x18c0b8u: goto label_18c0b8;
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0c0u: goto label_18c0c0;
        case 0x18c0c4u: goto label_18c0c4;
        case 0x18c0c8u: goto label_18c0c8;
        case 0x18c0ccu: goto label_18c0cc;
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0d4u: goto label_18c0d4;
        case 0x18c0d8u: goto label_18c0d8;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0e0u: goto label_18c0e0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c0e8u: goto label_18c0e8;
        case 0x18c0ecu: goto label_18c0ec;
        case 0x18c0f0u: goto label_18c0f0;
        case 0x18c0f4u: goto label_18c0f4;
        case 0x18c0f8u: goto label_18c0f8;
        case 0x18c0fcu: goto label_18c0fc;
        case 0x18c100u: goto label_18c100;
        case 0x18c104u: goto label_18c104;
        case 0x18c108u: goto label_18c108;
        case 0x18c10cu: goto label_18c10c;
        case 0x18c110u: goto label_18c110;
        case 0x18c114u: goto label_18c114;
        case 0x18c118u: goto label_18c118;
        case 0x18c11cu: goto label_18c11c;
        case 0x18c120u: goto label_18c120;
        case 0x18c124u: goto label_18c124;
        case 0x18c128u: goto label_18c128;
        case 0x18c12cu: goto label_18c12c;
        case 0x18c130u: goto label_18c130;
        case 0x18c134u: goto label_18c134;
        case 0x18c138u: goto label_18c138;
        case 0x18c13cu: goto label_18c13c;
        case 0x18c140u: goto label_18c140;
        case 0x18c144u: goto label_18c144;
        case 0x18c148u: goto label_18c148;
        case 0x18c14cu: goto label_18c14c;
        case 0x18c150u: goto label_18c150;
        case 0x18c154u: goto label_18c154;
        case 0x18c158u: goto label_18c158;
        case 0x18c15cu: goto label_18c15c;
        case 0x18c160u: goto label_18c160;
        case 0x18c164u: goto label_18c164;
        case 0x18c168u: goto label_18c168;
        case 0x18c16cu: goto label_18c16c;
        case 0x18c170u: goto label_18c170;
        case 0x18c174u: goto label_18c174;
        case 0x18c178u: goto label_18c178;
        case 0x18c17cu: goto label_18c17c;
        case 0x18c180u: goto label_18c180;
        case 0x18c184u: goto label_18c184;
        case 0x18c188u: goto label_18c188;
        case 0x18c18cu: goto label_18c18c;
        case 0x18c190u: goto label_18c190;
        case 0x18c194u: goto label_18c194;
        case 0x18c198u: goto label_18c198;
        case 0x18c19cu: goto label_18c19c;
        case 0x18c1a0u: goto label_18c1a0;
        case 0x18c1a4u: goto label_18c1a4;
        case 0x18c1a8u: goto label_18c1a8;
        case 0x18c1acu: goto label_18c1ac;
        case 0x18c1b0u: goto label_18c1b0;
        case 0x18c1b4u: goto label_18c1b4;
        case 0x18c1b8u: goto label_18c1b8;
        case 0x18c1bcu: goto label_18c1bc;
        case 0x18c1c0u: goto label_18c1c0;
        case 0x18c1c4u: goto label_18c1c4;
        case 0x18c1c8u: goto label_18c1c8;
        case 0x18c1ccu: goto label_18c1cc;
        case 0x18c1d0u: goto label_18c1d0;
        case 0x18c1d4u: goto label_18c1d4;
        case 0x18c1d8u: goto label_18c1d8;
        case 0x18c1dcu: goto label_18c1dc;
        case 0x18c1e0u: goto label_18c1e0;
        case 0x18c1e4u: goto label_18c1e4;
        case 0x18c1e8u: goto label_18c1e8;
        case 0x18c1ecu: goto label_18c1ec;
        case 0x18c1f0u: goto label_18c1f0;
        case 0x18c1f4u: goto label_18c1f4;
        case 0x18c1f8u: goto label_18c1f8;
        case 0x18c1fcu: goto label_18c1fc;
        case 0x18c200u: goto label_18c200;
        case 0x18c204u: goto label_18c204;
        case 0x18c208u: goto label_18c208;
        case 0x18c20cu: goto label_18c20c;
        case 0x18c210u: goto label_18c210;
        case 0x18c214u: goto label_18c214;
        case 0x18c218u: goto label_18c218;
        case 0x18c21cu: goto label_18c21c;
        case 0x18c220u: goto label_18c220;
        case 0x18c224u: goto label_18c224;
        case 0x18c228u: goto label_18c228;
        case 0x18c22cu: goto label_18c22c;
        case 0x18c230u: goto label_18c230;
        case 0x18c234u: goto label_18c234;
        case 0x18c238u: goto label_18c238;
        case 0x18c23cu: goto label_18c23c;
        case 0x18c240u: goto label_18c240;
        case 0x18c244u: goto label_18c244;
        case 0x18c248u: goto label_18c248;
        case 0x18c24cu: goto label_18c24c;
        case 0x18c250u: goto label_18c250;
        case 0x18c254u: goto label_18c254;
        case 0x18c258u: goto label_18c258;
        case 0x18c25cu: goto label_18c25c;
        case 0x18c260u: goto label_18c260;
        case 0x18c264u: goto label_18c264;
        case 0x18c268u: goto label_18c268;
        case 0x18c26cu: goto label_18c26c;
        case 0x18c270u: goto label_18c270;
        case 0x18c274u: goto label_18c274;
        case 0x18c278u: goto label_18c278;
        case 0x18c27cu: goto label_18c27c;
        case 0x18c280u: goto label_18c280;
        case 0x18c284u: goto label_18c284;
        case 0x18c288u: goto label_18c288;
        case 0x18c28cu: goto label_18c28c;
        case 0x18c290u: goto label_18c290;
        case 0x18c294u: goto label_18c294;
        case 0x18c298u: goto label_18c298;
        case 0x18c29cu: goto label_18c29c;
        case 0x18c2a0u: goto label_18c2a0;
        case 0x18c2a4u: goto label_18c2a4;
        case 0x18c2a8u: goto label_18c2a8;
        case 0x18c2acu: goto label_18c2ac;
        case 0x18c2b0u: goto label_18c2b0;
        case 0x18c2b4u: goto label_18c2b4;
        case 0x18c2b8u: goto label_18c2b8;
        case 0x18c2bcu: goto label_18c2bc;
        case 0x18c2c0u: goto label_18c2c0;
        case 0x18c2c4u: goto label_18c2c4;
        case 0x18c2c8u: goto label_18c2c8;
        case 0x18c2ccu: goto label_18c2cc;
        case 0x18c2d0u: goto label_18c2d0;
        case 0x18c2d4u: goto label_18c2d4;
        case 0x18c2d8u: goto label_18c2d8;
        case 0x18c2dcu: goto label_18c2dc;
        case 0x18c2e0u: goto label_18c2e0;
        case 0x18c2e4u: goto label_18c2e4;
        case 0x18c2e8u: goto label_18c2e8;
        case 0x18c2ecu: goto label_18c2ec;
        case 0x18c2f0u: goto label_18c2f0;
        case 0x18c2f4u: goto label_18c2f4;
        case 0x18c2f8u: goto label_18c2f8;
        case 0x18c2fcu: goto label_18c2fc;
        case 0x18c300u: goto label_18c300;
        case 0x18c304u: goto label_18c304;
        case 0x18c308u: goto label_18c308;
        case 0x18c30cu: goto label_18c30c;
        case 0x18c310u: goto label_18c310;
        case 0x18c314u: goto label_18c314;
        case 0x18c318u: goto label_18c318;
        case 0x18c31cu: goto label_18c31c;
        case 0x18c320u: goto label_18c320;
        case 0x18c324u: goto label_18c324;
        case 0x18c328u: goto label_18c328;
        case 0x18c32cu: goto label_18c32c;
        case 0x18c330u: goto label_18c330;
        case 0x18c334u: goto label_18c334;
        case 0x18c338u: goto label_18c338;
        case 0x18c33cu: goto label_18c33c;
        case 0x18c340u: goto label_18c340;
        case 0x18c344u: goto label_18c344;
        case 0x18c348u: goto label_18c348;
        case 0x18c34cu: goto label_18c34c;
        case 0x18c350u: goto label_18c350;
        case 0x18c354u: goto label_18c354;
        case 0x18c358u: goto label_18c358;
        case 0x18c35cu: goto label_18c35c;
        case 0x18c360u: goto label_18c360;
        case 0x18c364u: goto label_18c364;
        case 0x18c368u: goto label_18c368;
        case 0x18c36cu: goto label_18c36c;
        case 0x18c370u: goto label_18c370;
        case 0x18c374u: goto label_18c374;
        case 0x18c378u: goto label_18c378;
        case 0x18c37cu: goto label_18c37c;
        case 0x18c380u: goto label_18c380;
        case 0x18c384u: goto label_18c384;
        case 0x18c388u: goto label_18c388;
        case 0x18c38cu: goto label_18c38c;
        case 0x18c390u: goto label_18c390;
        case 0x18c394u: goto label_18c394;
        case 0x18c398u: goto label_18c398;
        case 0x18c39cu: goto label_18c39c;
        case 0x18c3a0u: goto label_18c3a0;
        case 0x18c3a4u: goto label_18c3a4;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c3acu: goto label_18c3ac;
        case 0x18c3b0u: goto label_18c3b0;
        case 0x18c3b4u: goto label_18c3b4;
        case 0x18c3b8u: goto label_18c3b8;
        case 0x18c3bcu: goto label_18c3bc;
        case 0x18c3c0u: goto label_18c3c0;
        case 0x18c3c4u: goto label_18c3c4;
        case 0x18c3c8u: goto label_18c3c8;
        case 0x18c3ccu: goto label_18c3cc;
        case 0x18c3d0u: goto label_18c3d0;
        case 0x18c3d4u: goto label_18c3d4;
        case 0x18c3d8u: goto label_18c3d8;
        case 0x18c3dcu: goto label_18c3dc;
        case 0x18c3e0u: goto label_18c3e0;
        case 0x18c3e4u: goto label_18c3e4;
        case 0x18c3e8u: goto label_18c3e8;
        case 0x18c3ecu: goto label_18c3ec;
        case 0x18c3f0u: goto label_18c3f0;
        case 0x18c3f4u: goto label_18c3f4;
        case 0x18c3f8u: goto label_18c3f8;
        case 0x18c3fcu: goto label_18c3fc;
        case 0x18c400u: goto label_18c400;
        case 0x18c404u: goto label_18c404;
        case 0x18c408u: goto label_18c408;
        case 0x18c40cu: goto label_18c40c;
        case 0x18c410u: goto label_18c410;
        case 0x18c414u: goto label_18c414;
        case 0x18c418u: goto label_18c418;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c420u: goto label_18c420;
        case 0x18c424u: goto label_18c424;
        case 0x18c428u: goto label_18c428;
        case 0x18c42cu: goto label_18c42c;
        case 0x18c430u: goto label_18c430;
        case 0x18c434u: goto label_18c434;
        case 0x18c438u: goto label_18c438;
        case 0x18c43cu: goto label_18c43c;
        case 0x18c440u: goto label_18c440;
        case 0x18c444u: goto label_18c444;
        case 0x18c448u: goto label_18c448;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c450u: goto label_18c450;
        case 0x18c454u: goto label_18c454;
        case 0x18c458u: goto label_18c458;
        case 0x18c45cu: goto label_18c45c;
        case 0x18c460u: goto label_18c460;
        case 0x18c464u: goto label_18c464;
        case 0x18c468u: goto label_18c468;
        case 0x18c46cu: goto label_18c46c;
        case 0x18c470u: goto label_18c470;
        case 0x18c474u: goto label_18c474;
        case 0x18c478u: goto label_18c478;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c480u: goto label_18c480;
        case 0x18c484u: goto label_18c484;
        case 0x18c488u: goto label_18c488;
        case 0x18c48cu: goto label_18c48c;
        case 0x18c490u: goto label_18c490;
        case 0x18c494u: goto label_18c494;
        case 0x18c498u: goto label_18c498;
        case 0x18c49cu: goto label_18c49c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c4a4u: goto label_18c4a4;
        case 0x18c4a8u: goto label_18c4a8;
        case 0x18c4acu: goto label_18c4ac;
        case 0x18c4b0u: goto label_18c4b0;
        case 0x18c4b4u: goto label_18c4b4;
        case 0x18c4b8u: goto label_18c4b8;
        case 0x18c4bcu: goto label_18c4bc;
        case 0x18c4c0u: goto label_18c4c0;
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4c8u: goto label_18c4c8;
        case 0x18c4ccu: goto label_18c4cc;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4d4u: goto label_18c4d4;
        case 0x18c4d8u: goto label_18c4d8;
        case 0x18c4dcu: goto label_18c4dc;
        case 0x18c4e0u: goto label_18c4e0;
        case 0x18c4e4u: goto label_18c4e4;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4ecu: goto label_18c4ec;
        case 0x18c4f0u: goto label_18c4f0;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c4f8u: goto label_18c4f8;
        case 0x18c4fcu: goto label_18c4fc;
        case 0x18c500u: goto label_18c500;
        case 0x18c504u: goto label_18c504;
        case 0x18c508u: goto label_18c508;
        case 0x18c50cu: goto label_18c50c;
        case 0x18c510u: goto label_18c510;
        case 0x18c514u: goto label_18c514;
        case 0x18c518u: goto label_18c518;
        case 0x18c51cu: goto label_18c51c;
        case 0x18c520u: goto label_18c520;
        case 0x18c524u: goto label_18c524;
        case 0x18c528u: goto label_18c528;
        case 0x18c52cu: goto label_18c52c;
        case 0x18c530u: goto label_18c530;
        case 0x18c534u: goto label_18c534;
        case 0x18c538u: goto label_18c538;
        case 0x18c53cu: goto label_18c53c;
        case 0x18c540u: goto label_18c540;
        case 0x18c544u: goto label_18c544;
        case 0x18c548u: goto label_18c548;
        case 0x18c54cu: goto label_18c54c;
        case 0x18c550u: goto label_18c550;
        case 0x18c554u: goto label_18c554;
        case 0x18c558u: goto label_18c558;
        case 0x18c55cu: goto label_18c55c;
        case 0x18c560u: goto label_18c560;
        case 0x18c564u: goto label_18c564;
        case 0x18c568u: goto label_18c568;
        case 0x18c56cu: goto label_18c56c;
        case 0x18c570u: goto label_18c570;
        case 0x18c574u: goto label_18c574;
        case 0x18c578u: goto label_18c578;
        case 0x18c57cu: goto label_18c57c;
        case 0x18c580u: goto label_18c580;
        case 0x18c584u: goto label_18c584;
        case 0x18c588u: goto label_18c588;
        case 0x18c58cu: goto label_18c58c;
        case 0x18c590u: goto label_18c590;
        case 0x18c594u: goto label_18c594;
        case 0x18c598u: goto label_18c598;
        case 0x18c59cu: goto label_18c59c;
        case 0x18c5a0u: goto label_18c5a0;
        case 0x18c5a4u: goto label_18c5a4;
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5acu: goto label_18c5ac;
        case 0x18c5b0u: goto label_18c5b0;
        case 0x18c5b4u: goto label_18c5b4;
        case 0x18c5b8u: goto label_18c5b8;
        case 0x18c5bcu: goto label_18c5bc;
        default: return;
    }

label_18bdf0:
    // 0x18bdf0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18bdf4:
    // 0x18bdf4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_18bdf8:
    // 0x18bdf8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_18bdfc:
    // 0x18bdfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18be00:
    // 0x18be00: 0x3e00008  jr          $ra
label_18be04:
    if (ctx->pc == 0x18BE04u) {
        ctx->pc = 0x18BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE00u;
        // 0x18be04: 0xa0670038  sb          $a3, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE08u;
        goto label_18be08;
    }
    ctx->pc = 0x18BE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE00u;
        // 0x18be04: 0xa0670038  sb          $a3, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BE08u;
label_18be08:
    // 0x18be08: 0x0  nop
    ctx->pc = 0x18be08u;
    // NOP
label_18be0c:
    // 0x18be0c: 0x0  nop
    ctx->pc = 0x18be0cu;
    // NOP
label_18be10:
    // 0x18be10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18be14:
    // 0x18be14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18be18:
    // 0x18be18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18be1c:
    // 0x18be1c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x18be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_18be20:
    // 0x18be20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18be24:
    // 0x18be24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18be28:
    // 0x18be28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18be2c:
    // 0x18be2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18be30:
    // 0x18be30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18be30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18be34:
    // 0x18be34: 0x9027490c  lbu         $a3, 0x490C($at)
    ctx->pc = 0x18be34u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_18be38:
    // 0x18be38: 0x14e30035  bne         $a3, $v1, . + 4 + (0x35 << 2)
label_18be3c:
    if (ctx->pc == 0x18BE3Cu) {
        ctx->pc = 0x18BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE38u;
        // 0x18be3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE40u;
        goto label_18be40;
    }
    ctx->pc = 0x18BE38u;
    {
        const bool branch_taken_0x18be38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE38u;
        // 0x18be3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be38) {
            ctx->pc = 0x18BF10u;
            goto label_18bf10;
        }
    }
    ctx->pc = 0x18BE40u;
label_18be40:
    // 0x18be40: 0x92030234  lbu         $v1, 0x234($s0)
    ctx->pc = 0x18be40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
label_18be44:
    // 0x18be44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18be48:
    // 0x18be48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_18be4c:
    if (ctx->pc == 0x18BE4Cu) {
        ctx->pc = 0x18BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE48u;
        // 0x18be4c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE50u;
        goto label_18be50;
    }
    ctx->pc = 0x18BE48u;
    {
        const bool branch_taken_0x18be48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE48u;
        // 0x18be4c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be48) {
            ctx->pc = 0x18BE5Cu;
            goto label_18be5c;
        }
    }
    ctx->pc = 0x18BE50u;
label_18be50:
    // 0x18be50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18be54:
    // 0x18be54: 0x10000003  b           . + 4 + (0x3 << 2)
label_18be58:
    if (ctx->pc == 0x18BE58u) {
        ctx->pc = 0x18BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE54u;
        // 0x18be58: 0x8c324968  lw          $s2, 0x4968($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE5Cu;
        goto label_18be5c;
    }
    ctx->pc = 0x18BE54u;
    {
        const bool branch_taken_0x18be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE54u;
        // 0x18be58: 0x8c324968  lw          $s2, 0x4968($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be54) {
            ctx->pc = 0x18BE64u;
            goto label_18be64;
        }
    }
    ctx->pc = 0x18BE5Cu;
label_18be5c:
    // 0x18be5c: 0x8c3249f8  lw          $s2, 0x49F8($at)
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_18be60:
    // 0x18be60: 0x0  nop
    ctx->pc = 0x18be60u;
    // NOP
label_18be64:
    // 0x18be64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18be68:
    // 0x18be68: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_18be6c:
    // 0x18be6c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x18be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_18be70:
    // 0x18be70: 0x92080239  lbu         $t0, 0x239($s0)
    ctx->pc = 0x18be70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
label_18be74:
    // 0x18be74: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x18be74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18be78:
    // 0x18be78: 0x92460234  lbu         $a2, 0x234($s2)
    ctx->pc = 0x18be78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_18be7c:
    // 0x18be7c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18be80:
    // 0x18be80: 0x25292570  addiu       $t1, $t1, 0x2570
    ctx->pc = 0x18be80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9584));
label_18be84:
    // 0x18be84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18be88:
    // 0x18be88: 0x92430239  lbu         $v1, 0x239($s2)
    ctx->pc = 0x18be88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 569)));
label_18be8c:
    // 0x18be8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18be90:
    // 0x18be90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18be94:
    // 0x18be94: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x18be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_18be98:
    // 0x18be98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18be98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18be9c:
    // 0x18be9c: 0x24470000  addiu       $a3, $v0, 0x0
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_18bea0:
    // 0x18bea0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x18bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_18bea4:
    // 0x18bea4: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x18bea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_18bea8:
    // 0x18bea8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x18bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_18beac:
    // 0x18beac: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x18beacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18beb0:
    // 0x18beb0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_18beb4:
    // 0x18beb4: 0xe28821  addu        $s1, $a3, $v0
    ctx->pc = 0x18beb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_18beb8:
    // 0x18beb8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18bebc:
    // 0x18bebc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_18bec0:
    // 0x18bec0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18bec4:
    // 0x18bec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18bec8:
    // 0x18bec8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18becc:
    // 0x18becc: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_18bed0:
    // 0x18bed0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18bed4:
    // 0x18bed4: 0x24c20000  addiu       $v0, $a2, 0x0
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_18bed8:
    // 0x18bed8: 0xc072d00  jal         func_1CB400
label_18bedc:
    if (ctx->pc == 0x18BEDCu) {
        ctx->pc = 0x18BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED8u;
        // 0x18bedc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEE0u;
        goto label_18bee0;
    }
    ctx->pc = 0x18BED8u;
    SET_GPR_U32(ctx, 31, 0x18BEE0u);
    ctx->pc = 0x18BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BED8u;
    // 0x18bedc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB400u;
    { ctx->pc = 0x1cb400; return; }
    ctx->pc = 0x18BEE0u;
label_18bee0:
    // 0x18bee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18bee4:
    // 0x18bee4: 0xc06ee28  jal         func_1BB8A0
label_18bee8:
    if (ctx->pc == 0x18BEE8u) {
        ctx->pc = 0x18BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEE4u;
        // 0x18bee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEECu;
        goto label_18beec;
    }
    ctx->pc = 0x18BEE4u;
    SET_GPR_U32(ctx, 31, 0x18BEECu);
    ctx->pc = 0x18BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEE4u;
    // 0x18bee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A0u;
    { ctx->pc = 0x1bb8a0; return; }
    ctx->pc = 0x18BEECu;
label_18beec:
    // 0x18beec: 0x92060233  lbu         $a2, 0x233($s0)
    ctx->pc = 0x18beecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18bef0:
    // 0x18bef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bef4:
    // 0x18bef4: 0xc06ee04  jal         func_1BB810
label_18bef8:
    if (ctx->pc == 0x18BEF8u) {
        ctx->pc = 0x18BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEF4u;
        // 0x18bef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEFCu;
        goto label_18befc;
    }
    ctx->pc = 0x18BEF4u;
    SET_GPR_U32(ctx, 31, 0x18BEFCu);
    ctx->pc = 0x18BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEF4u;
    // 0x18bef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB810u;
    { ctx->pc = 0x1bb810; return; }
    ctx->pc = 0x18BEFCu;
label_18befc:
    // 0x18befc: 0x92430238  lbu         $v1, 0x238($s2)
    ctx->pc = 0x18befcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_18bf00:
    // 0x18bf00: 0xa2030236  sb          $v1, 0x236($s0)
    ctx->pc = 0x18bf00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
label_18bf04:
    // 0x18bf04: 0x92430233  lbu         $v1, 0x233($s2)
    ctx->pc = 0x18bf04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_18bf08:
    // 0x18bf08: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_18bf0c:
    if (ctx->pc == 0x18BF0Cu) {
        ctx->pc = 0x18BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF08u;
        // 0x18bf0c: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF10u;
        goto label_18bf10;
    }
    ctx->pc = 0x18BF08u;
    {
        const bool branch_taken_0x18bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF08u;
        // 0x18bf0c: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf08) {
            ctx->pc = 0x18C29Cu;
            goto label_18c29c;
        }
    }
    ctx->pc = 0x18BF10u;
label_18bf10:
    // 0x18bf10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18bf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18bf14:
    // 0x18bf14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x18bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18bf18:
    // 0x18bf18: 0x84274af4  lh          $a3, 0x4AF4($at)
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_18bf1c:
    // 0x18bf1c: 0x14e30030  bne         $a3, $v1, . + 4 + (0x30 << 2)
label_18bf20:
    if (ctx->pc == 0x18BF20u) {
        ctx->pc = 0x18BF24u;
        goto label_18bf24;
    }
    ctx->pc = 0x18BF1Cu;
    {
        const bool branch_taken_0x18bf1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bf1c) {
            ctx->pc = 0x18BFE0u;
            goto label_18bfe0;
        }
    }
    ctx->pc = 0x18BF24u;
label_18bf24:
    // 0x18bf24: 0x92040234  lbu         $a0, 0x234($s0)
    ctx->pc = 0x18bf24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
label_18bf28:
    // 0x18bf28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bf2c:
    // 0x18bf2c: 0x148300db  bne         $a0, $v1, . + 4 + (0xDB << 2)
label_18bf30:
    if (ctx->pc == 0x18BF30u) {
        ctx->pc = 0x18BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF2Cu;
        // 0x18bf30: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF34u;
        goto label_18bf34;
    }
    ctx->pc = 0x18BF2Cu;
    {
        const bool branch_taken_0x18bf2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF2Cu;
        // 0x18bf30: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf2c) {
            ctx->pc = 0x18C29Cu;
            goto label_18c29c;
        }
    }
    ctx->pc = 0x18BF34u;
label_18bf34:
    // 0x18bf34: 0x92080239  lbu         $t0, 0x239($s0)
    ctx->pc = 0x18bf34u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
label_18bf38:
    // 0x18bf38: 0x8c314968  lw          $s1, 0x4968($at)
    ctx->pc = 0x18bf38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_18bf3c:
    // 0x18bf3c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x18bf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_18bf40:
    // 0x18bf40: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_18bf44:
    // 0x18bf44: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_18bf48:
    // 0x18bf48: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18bf4c:
    // 0x18bf4c: 0x25292570  addiu       $t1, $t1, 0x2570
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9584));
label_18bf50:
    // 0x18bf50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18bf54:
    // 0x18bf54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18bf58:
    // 0x18bf58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18bf5c:
    // 0x18bf5c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_18bf60:
    // 0x18bf60: 0x92260234  lbu         $a2, 0x234($s1)
    ctx->pc = 0x18bf60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_18bf64:
    // 0x18bf64: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x18bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_18bf68:
    // 0x18bf68: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_18bf6c:
    // 0x18bf6c: 0x92230239  lbu         $v1, 0x239($s1)
    ctx->pc = 0x18bf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_18bf70:
    // 0x18bf70: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_18bf74:
    // 0x18bf74: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18bf74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18bf78:
    // 0x18bf78: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x18bf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_18bf7c:
    // 0x18bf7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bf80:
    // 0x18bf80: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x18bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_18bf84:
    // 0x18bf84: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x18bf84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18bf88:
    // 0x18bf88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18bf8c:
    // 0x18bf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18bf90:
    // 0x18bf90: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18bf94:
    // 0x18bf94: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_18bf98:
    // 0x18bf98: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18bf9c:
    // 0x18bf9c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18bfa0:
    // 0x18bfa0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x18bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_18bfa4:
    // 0x18bfa4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x18bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_18bfa8:
    // 0x18bfa8: 0xc072d00  jal         func_1CB400
label_18bfac:
    if (ctx->pc == 0x18BFACu) {
        ctx->pc = 0x18BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFA8u;
        // 0x18bfac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFB0u;
        goto label_18bfb0;
    }
    ctx->pc = 0x18BFA8u;
    SET_GPR_U32(ctx, 31, 0x18BFB0u);
    ctx->pc = 0x18BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFA8u;
    // 0x18bfac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB400u;
    { ctx->pc = 0x1cb400; return; }
    ctx->pc = 0x18BFB0u;
label_18bfb0:
    // 0x18bfb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18bfb4:
    // 0x18bfb4: 0xc06ee28  jal         func_1BB8A0
label_18bfb8:
    if (ctx->pc == 0x18BFB8u) {
        ctx->pc = 0x18BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFB4u;
        // 0x18bfb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFBCu;
        goto label_18bfbc;
    }
    ctx->pc = 0x18BFB4u;
    SET_GPR_U32(ctx, 31, 0x18BFBCu);
    ctx->pc = 0x18BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFB4u;
    // 0x18bfb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A0u;
    { ctx->pc = 0x1bb8a0; return; }
    ctx->pc = 0x18BFBCu;
label_18bfbc:
    // 0x18bfbc: 0x92060233  lbu         $a2, 0x233($s0)
    ctx->pc = 0x18bfbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18bfc0:
    // 0x18bfc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18bfc4:
    // 0x18bfc4: 0xc06ee04  jal         func_1BB810
label_18bfc8:
    if (ctx->pc == 0x18BFC8u) {
        ctx->pc = 0x18BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFC4u;
        // 0x18bfc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFCCu;
        goto label_18bfcc;
    }
    ctx->pc = 0x18BFC4u;
    SET_GPR_U32(ctx, 31, 0x18BFCCu);
    ctx->pc = 0x18BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFC4u;
    // 0x18bfc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB810u;
    { ctx->pc = 0x1bb810; return; }
    ctx->pc = 0x18BFCCu;
label_18bfcc:
    // 0x18bfcc: 0x92230238  lbu         $v1, 0x238($s1)
    ctx->pc = 0x18bfccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_18bfd0:
    // 0x18bfd0: 0xa2030236  sb          $v1, 0x236($s0)
    ctx->pc = 0x18bfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
label_18bfd4:
    // 0x18bfd4: 0x92230233  lbu         $v1, 0x233($s1)
    ctx->pc = 0x18bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_18bfd8:
    // 0x18bfd8: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_18bfdc:
    if (ctx->pc == 0x18BFDCu) {
        ctx->pc = 0x18BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFD8u;
        // 0x18bfdc: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFE0u;
        goto label_18bfe0;
    }
    ctx->pc = 0x18BFD8u;
    {
        const bool branch_taken_0x18bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFD8u;
        // 0x18bfdc: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfd8) {
            ctx->pc = 0x18C29Cu;
            goto label_18c29c;
        }
    }
    ctx->pc = 0x18BFE0u;
label_18bfe0:
    // 0x18bfe0: 0x920b0234  lbu         $t3, 0x234($s0)
    ctx->pc = 0x18bfe0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
label_18bfe4:
    // 0x18bfe4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x18bfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_18bfe8:
    // 0x18bfe8: 0x92080239  lbu         $t0, 0x239($s0)
    ctx->pc = 0x18bfe8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
label_18bfec:
    // 0x18bfec: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x18bfecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_18bff0:
    // 0x18bff0: 0x92290234  lbu         $t1, 0x234($s1)
    ctx->pc = 0x18bff0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_18bff4:
    // 0x18bff4: 0xb1a00  sll         $v1, $t3, 8
    ctx->pc = 0x18bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_18bff8:
    // 0x18bff8: 0x6b5023  subu        $t2, $v1, $t3
    ctx->pc = 0x18bff8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_18bffc:
    // 0x18bffc: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x18bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_18c000:
    // 0x18c000: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_18c004:
    // 0x18c004: 0xa40c0  sll         $t0, $t2, 3
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_18c008:
    // 0x18c008: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_18c00c:
    // 0x18c00c: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x18c00cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18c010:
    // 0x18c010: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x18c010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_18c014:
    // 0x18c014: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x18c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_18c018:
    // 0x18c018: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x18c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_18c01c:
    // 0x18c01c: 0x112b008f  beq         $t1, $t3, . + 4 + (0x8F << 2)
label_18c020:
    if (ctx->pc == 0x18C020u) {
        ctx->pc = 0x18C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C01Cu;
        // 0x18c020: 0x689821  addu        $s3, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C024u;
        goto label_18c024;
    }
    ctx->pc = 0x18C01Cu;
    {
        const bool branch_taken_0x18c01c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x18C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C01Cu;
        // 0x18c020: 0x689821  addu        $s3, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c01c) {
            ctx->pc = 0x18C25Cu;
            goto label_18c25c;
        }
    }
    ctx->pc = 0x18C024u;
label_18c024:
    // 0x18c024: 0x92230238  lbu         $v1, 0x238($s1)
    ctx->pc = 0x18c024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_18c028:
    // 0x18c028: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x18c028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_18c02c:
    // 0x18c02c: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
label_18c030:
    if (ctx->pc == 0x18C030u) {
        ctx->pc = 0x18C034u;
        goto label_18c034;
    }
    ctx->pc = 0x18C02Cu;
    {
        const bool branch_taken_0x18c02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c02c) {
            ctx->pc = 0x18C25Cu;
            goto label_18c25c;
        }
    }
    ctx->pc = 0x18C034u;
label_18c034:
    // 0x18c034: 0x92280233  lbu         $t0, 0x233($s1)
    ctx->pc = 0x18c034u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_18c038:
    // 0x18c038: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x18c038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
label_18c03c:
    // 0x18c03c: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
label_18c040:
    if (ctx->pc == 0x18C040u) {
        ctx->pc = 0x18C044u;
        goto label_18c044;
    }
    ctx->pc = 0x18C03Cu;
    {
        const bool branch_taken_0x18c03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c03c) {
            ctx->pc = 0x18C25Cu;
            goto label_18c25c;
        }
    }
    ctx->pc = 0x18C044u;
label_18c044:
    // 0x18c044: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x18c044u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_18c048:
    // 0x18c048: 0x92280239  lbu         $t0, 0x239($s1)
    ctx->pc = 0x18c048u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_18c04c:
    // 0x18c04c: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x18c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_18c050:
    // 0x18c050: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_18c054:
    // 0x18c054: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_18c058:
    // 0x18c058: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_18c05c:
    // 0x18c05c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18c060:
    // 0x18c060: 0xe24821  addu        $t1, $a3, $v0
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_18c064:
    // 0x18c064: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_18c068:
    // 0x18c068: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x18c068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_18c06c:
    // 0x18c06c: 0x25220000  addiu       $v0, $t1, 0x0
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_18c070:
    // 0x18c070: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18c070u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18c074:
    // 0x18c074: 0x14c0001d  bnez        $a2, . + 4 + (0x1D << 2)
label_18c078:
    if (ctx->pc == 0x18C078u) {
        ctx->pc = 0x18C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C074u;
        // 0x18c078: 0x479021  addu        $s2, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C07Cu;
        goto label_18c07c;
    }
    ctx->pc = 0x18C074u;
    {
        const bool branch_taken_0x18c074 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C074u;
        // 0x18c078: 0x479021  addu        $s2, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c074) {
            ctx->pc = 0x18C0ECu;
            goto label_18c0ec;
        }
    }
    ctx->pc = 0x18C07Cu;
label_18c07c:
    // 0x18c07c: 0x92220232  lbu         $v0, 0x232($s1)
    ctx->pc = 0x18c07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_18c080:
    // 0x18c080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_18c084:
    if (ctx->pc == 0x18C084u) {
        ctx->pc = 0x18C088u;
        goto label_18c088;
    }
    ctx->pc = 0x18C080u;
    {
        const bool branch_taken_0x18c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c080) {
            ctx->pc = 0x18C0B4u;
            goto label_18c0b4;
        }
    }
    ctx->pc = 0x18C088u;
label_18c088:
    // 0x18c088: 0xc072d00  jal         func_1CB400
label_18c08c:
    if (ctx->pc == 0x18C08Cu) {
        ctx->pc = 0x18C090u;
        goto label_18c090;
    }
    ctx->pc = 0x18C088u;
    SET_GPR_U32(ctx, 31, 0x18C090u);
    ctx->pc = 0x1CB400u;
    { ctx->pc = 0x1cb400; return; }
    ctx->pc = 0x18C090u;
label_18c090:
    // 0x18c090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c094:
    // 0x18c094: 0xc06ee28  jal         func_1BB8A0
label_18c098:
    if (ctx->pc == 0x18C098u) {
        ctx->pc = 0x18C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C094u;
        // 0x18c098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C09Cu;
        goto label_18c09c;
    }
    ctx->pc = 0x18C094u;
    SET_GPR_U32(ctx, 31, 0x18C09Cu);
    ctx->pc = 0x18C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C094u;
    // 0x18c098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A0u;
    { ctx->pc = 0x1bb8a0; return; }
    ctx->pc = 0x18C09Cu;
label_18c09c:
    // 0x18c09c: 0x92060233  lbu         $a2, 0x233($s0)
    ctx->pc = 0x18c09cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18c0a0:
    // 0x18c0a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18c0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c0a4:
    // 0x18c0a4: 0xc06ee04  jal         func_1BB810
label_18c0a8:
    if (ctx->pc == 0x18C0A8u) {
        ctx->pc = 0x18C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0A4u;
        // 0x18c0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0ACu;
        goto label_18c0ac;
    }
    ctx->pc = 0x18C0A4u;
    SET_GPR_U32(ctx, 31, 0x18C0ACu);
    ctx->pc = 0x18C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0A4u;
    // 0x18c0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB810u;
    { ctx->pc = 0x1bb810; return; }
    ctx->pc = 0x18C0ACu;
label_18c0ac:
    // 0x18c0ac: 0x10000010  b           . + 4 + (0x10 << 2)
label_18c0b0:
    if (ctx->pc == 0x18C0B0u) {
        ctx->pc = 0x18C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0ACu;
        // 0x18c0b0: 0x92220238  lbu         $v0, 0x238($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0B4u;
        goto label_18c0b4;
    }
    ctx->pc = 0x18C0ACu;
    {
        const bool branch_taken_0x18c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0ACu;
        // 0x18c0b0: 0x92220238  lbu         $v0, 0x238($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0ac) {
            ctx->pc = 0x18C0F0u;
            goto label_18c0f0;
        }
    }
    ctx->pc = 0x18C0B4u;
label_18c0b4:
    // 0x18c0b4: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x18c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_18c0b8:
    // 0x18c0b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18c0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18c0bc:
    // 0x18c0bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_18c0c0:
    // 0x18c0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c0c4:
    // 0x18c0c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c0c8:
    // 0x18c0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c0cc:
    // 0x18c0cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c0d0:
    // 0x18c0d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18c0d4:
    if (ctx->pc == 0x18C0D4u) {
        ctx->pc = 0x18C0D8u;
        goto label_18c0d8;
    }
    ctx->pc = 0x18C0D0u;
    {
        const bool branch_taken_0x18c0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0d0) {
            ctx->pc = 0x18C0ECu;
            goto label_18c0ec;
        }
    }
    ctx->pc = 0x18C0D8u;
label_18c0d8:
    // 0x18c0d8: 0x90420232  lbu         $v0, 0x232($v0)
    ctx->pc = 0x18c0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
label_18c0dc:
    // 0x18c0dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18c0e0:
    if (ctx->pc == 0x18C0E0u) {
        ctx->pc = 0x18C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0DCu;
        // 0x18c0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0E4u;
        goto label_18c0e4;
    }
    ctx->pc = 0x18C0DCu;
    {
        const bool branch_taken_0x18c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0DCu;
        // 0x18c0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0dc) {
            ctx->pc = 0x18C0ECu;
            goto label_18c0ec;
        }
    }
    ctx->pc = 0x18C0E4u;
label_18c0e4:
    // 0x18c0e4: 0xc06ee28  jal         func_1BB8A0
label_18c0e8:
    if (ctx->pc == 0x18C0E8u) {
        ctx->pc = 0x18C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0E4u;
        // 0x18c0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0ECu;
        goto label_18c0ec;
    }
    ctx->pc = 0x18C0E4u;
    SET_GPR_U32(ctx, 31, 0x18C0ECu);
    ctx->pc = 0x18C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0E4u;
    // 0x18c0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A0u;
    { ctx->pc = 0x1bb8a0; return; }
    ctx->pc = 0x18C0ECu;
label_18c0ec:
    // 0x18c0ec: 0x92220238  lbu         $v0, 0x238($s1)
    ctx->pc = 0x18c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_18c0f0:
    // 0x18c0f0: 0xa2020236  sb          $v0, 0x236($s0)
    ctx->pc = 0x18c0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 2));
label_18c0f4:
    // 0x18c0f4: 0x92220233  lbu         $v0, 0x233($s1)
    ctx->pc = 0x18c0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_18c0f8:
    // 0x18c0f8: 0xa2020235  sb          $v0, 0x235($s0)
    ctx->pc = 0x18c0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
label_18c0fc:
    // 0x18c0fc: 0x92640034  lbu         $a0, 0x34($s3)
    ctx->pc = 0x18c0fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_18c100:
    // 0x18c100: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_18c104:
    if (ctx->pc == 0x18C104u) {
        ctx->pc = 0x18C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C100u;
        // 0x18c104: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C108u;
        goto label_18c108;
    }
    ctx->pc = 0x18C100u;
    {
        const bool branch_taken_0x18c100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C100u;
        // 0x18c104: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c100) {
            ctx->pc = 0x18C16Cu;
            goto label_18c16c;
        }
    }
    ctx->pc = 0x18C108u;
label_18c108:
    // 0x18c108: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18c108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18c10c:
    // 0x18c10c: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x18c10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_18c110:
    // 0x18c110: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_18c114:
    if (ctx->pc == 0x18C114u) {
        ctx->pc = 0x18C118u;
        goto label_18c118;
    }
    ctx->pc = 0x18C110u;
    {
        const bool branch_taken_0x18c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c110) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C118u;
label_18c118:
    // 0x18c118: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18c11c:
    // 0x18c11c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18c120:
    // 0x18c120: 0x8c234968  lw          $v1, 0x4968($at)
    ctx->pc = 0x18c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_18c124:
    // 0x18c124: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c128:
    // 0x18c128: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x18c128u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_18c12c:
    // 0x18c12c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c130:
    // 0x18c130: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18c134:
    if (ctx->pc == 0x18C134u) {
        ctx->pc = 0x18C138u;
        goto label_18c138;
    }
    ctx->pc = 0x18C130u;
    {
        const bool branch_taken_0x18c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c130) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C138u;
label_18c138:
    // 0x18c138: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c13c:
    // 0x18c13c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18c140:
    // 0x18c140: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x18c140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_18c144:
    // 0x18c144: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18c148:
    if (ctx->pc == 0x18C148u) {
        ctx->pc = 0x18C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C144u;
        // 0x18c148: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C14Cu;
        goto label_18c14c;
    }
    ctx->pc = 0x18C144u;
    {
        const bool branch_taken_0x18c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C144u;
        // 0x18c148: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c144) {
            ctx->pc = 0x18C16Cu;
            goto label_18c16c;
        }
    }
    ctx->pc = 0x18C14Cu;
label_18c14c:
    // 0x18c14c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18c150:
    // 0x18c150: 0x8c2349f8  lw          $v1, 0x49F8($at)
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_18c154:
    // 0x18c154: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c158:
    // 0x18c158: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x18c158u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_18c15c:
    // 0x18c15c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c160:
    // 0x18c160: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18c164:
    if (ctx->pc == 0x18C164u) {
        ctx->pc = 0x18C168u;
        goto label_18c168;
    }
    ctx->pc = 0x18C160u;
    {
        const bool branch_taken_0x18c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c160) {
            ctx->pc = 0x18C16Cu;
            goto label_18c16c;
        }
    }
    ctx->pc = 0x18C168u;
label_18c168:
    // 0x18c168: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c16c:
    // 0x18c16c: 0x92020233  lbu         $v0, 0x233($s0)
    ctx->pc = 0x18c16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18c170:
    // 0x18c170: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_18c174:
    if (ctx->pc == 0x18C174u) {
        ctx->pc = 0x18C178u;
        goto label_18c178;
    }
    ctx->pc = 0x18C170u;
    {
        const bool branch_taken_0x18c170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c170) {
            ctx->pc = 0x18C244u;
            goto label_18c244;
        }
    }
    ctx->pc = 0x18C178u;
label_18c178:
    // 0x18c178: 0x9263003f  lbu         $v1, 0x3F($s3)
    ctx->pc = 0x18c178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 63)));
label_18c17c:
    // 0x18c17c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18c180:
    // 0x18c180: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_18c184:
    if (ctx->pc == 0x18C184u) {
        ctx->pc = 0x18C188u;
        goto label_18c188;
    }
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C1DCu;
            goto label_18c1dc;
        }
    }
    ctx->pc = 0x18C188u;
label_18c188:
    // 0x18c188: 0xc08f0cc  jal         func_23C330
label_18c18c:
    if (ctx->pc == 0x18C18Cu) {
        ctx->pc = 0x18C190u;
        goto label_18c190;
    }
    ctx->pc = 0x18C188u;
    SET_GPR_U32(ctx, 31, 0x18C190u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18C190u;
label_18c190:
    // 0x18c190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c194:
    // 0x18c194: 0x0  nop
    ctx->pc = 0x18c194u;
    // NOP
label_18c198:
    // 0x18c198: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18c19c:
    // 0x18c19c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_18c1a0:
    // 0x18c1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1a4:
    // 0x18c1a4: 0x0  nop
    ctx->pc = 0x18c1a4u;
    // NOP
label_18c1a8:
    // 0x18c1a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18c1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18c1ac:
    // 0x18c1ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_18c1b0:
    // 0x18c1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1b4:
    // 0x18c1b4: 0x0  nop
    ctx->pc = 0x18c1b4u;
    // NOP
label_18c1b8:
    // 0x18c1b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18c1b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18c1bc:
    // 0x18c1bc: 0x0  nop
    ctx->pc = 0x18c1bcu;
    // NOP
label_18c1c0:
    // 0x18c1c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c1c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18c1c4:
    // 0x18c1c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c1c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18c1c8:
    // 0x18c1c8: 0x0  nop
    ctx->pc = 0x18c1c8u;
    // NOP
label_18c1cc:
    // 0x18c1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18c1d0:
    if (ctx->pc == 0x18C1D0u) {
        ctx->pc = 0x18C1D4u;
        goto label_18c1d4;
    }
    ctx->pc = 0x18C1CCu;
    {
        const bool branch_taken_0x18c1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c1cc) {
            ctx->pc = 0x18C1DCu;
            goto label_18c1dc;
        }
    }
    ctx->pc = 0x18C1D4u;
label_18c1d4:
    // 0x18c1d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18c1d8:
    // 0x18c1d8: 0xa2620036  sb          $v0, 0x36($s3)
    ctx->pc = 0x18c1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 2));
label_18c1dc:
    // 0x18c1dc: 0x92220239  lbu         $v0, 0x239($s1)
    ctx->pc = 0x18c1dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_18c1e0:
    // 0x18c1e0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x18c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_18c1e4:
    // 0x18c1e4: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x18c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_18c1e8:
    // 0x18c1e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c1ec:
    // 0x18c1ec: 0xa2620038  sb          $v0, 0x38($s3)
    ctx->pc = 0x18c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 2));
label_18c1f0:
    // 0x18c1f0: 0x92260234  lbu         $a2, 0x234($s1)
    ctx->pc = 0x18c1f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_18c1f4:
    // 0x18c1f4: 0x92230239  lbu         $v1, 0x239($s1)
    ctx->pc = 0x18c1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_18c1f8:
    // 0x18c1f8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x18c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_18c1fc:
    // 0x18c1fc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x18c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18c200:
    // 0x18c200: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18c204:
    // 0x18c204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c208:
    // 0x18c208: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18c208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18c20c:
    // 0x18c20c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_18c210:
    // 0x18c210: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18c210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18c214:
    // 0x18c214: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18c218:
    // 0x18c218: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18c21c:
    // 0x18c21c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x18c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_18c220:
    // 0x18c220: 0xc072c58  jal         func_1CB160
label_18c224:
    if (ctx->pc == 0x18C224u) {
        ctx->pc = 0x18C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C220u;
        // 0x18c224: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C228u;
        goto label_18c228;
    }
    ctx->pc = 0x18C220u;
    SET_GPR_U32(ctx, 31, 0x18C228u);
    ctx->pc = 0x18C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C220u;
    // 0x18c224: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB160u;
    { ctx->pc = 0x1cb160; return; }
    ctx->pc = 0x18C228u;
label_18c228:
    // 0x18c228: 0x92640034  lbu         $a0, 0x34($s3)
    ctx->pc = 0x18c228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_18c22c:
    // 0x18c22c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_18c230:
    // 0x18c230: 0x9265003e  lbu         $a1, 0x3E($s3)
    ctx->pc = 0x18c230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_18c234:
    // 0x18c234: 0xc0564fc  jal         func_1593F0
label_18c238:
    if (ctx->pc == 0x18C238u) {
        ctx->pc = 0x18C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C234u;
        // 0x18c238: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C23Cu;
        goto label_18c23c;
    }
    ctx->pc = 0x18C234u;
    SET_GPR_U32(ctx, 31, 0x18C23Cu);
    ctx->pc = 0x18C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C234u;
    // 0x18c238: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x18C234u, 0x18C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C23Cu;
label_18c23c:
    // 0x18c23c: 0x10000012  b           . + 4 + (0x12 << 2)
label_18c240:
    if (ctx->pc == 0x18C240u) {
        ctx->pc = 0x18C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C23Cu;
        // 0x18c240: 0x92040232  lbu         $a0, 0x232($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C244u;
        goto label_18c244;
    }
    ctx->pc = 0x18C23Cu;
    {
        const bool branch_taken_0x18c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C23Cu;
        // 0x18c240: 0x92040232  lbu         $a0, 0x232($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c23c) {
            ctx->pc = 0x18C288u;
            goto label_18c288;
        }
    }
    ctx->pc = 0x18C244u;
label_18c244:
    // 0x18c244: 0x9265003e  lbu         $a1, 0x3E($s3)
    ctx->pc = 0x18c244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_18c248:
    // 0x18c248: 0x121023  negu        $v0, $s2
    ctx->pc = 0x18c248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_18c24c:
    // 0x18c24c: 0xc0564fc  jal         func_1593F0
label_18c250:
    if (ctx->pc == 0x18C250u) {
        ctx->pc = 0x18C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C24Cu;
        // 0x18c250: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C254u;
        goto label_18c254;
    }
    ctx->pc = 0x18C24Cu;
    SET_GPR_U32(ctx, 31, 0x18C254u);
    ctx->pc = 0x18C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C24Cu;
    // 0x18c250: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x18C24Cu, 0x18C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C254u;
label_18c254:
    // 0x18c254: 0x1000000b  b           . + 4 + (0xB << 2)
label_18c258:
    if (ctx->pc == 0x18C258u) {
        ctx->pc = 0x18C25Cu;
        goto label_18c25c;
    }
    ctx->pc = 0x18C254u;
    {
        const bool branch_taken_0x18c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c254) {
            ctx->pc = 0x18C284u;
            goto label_18c284;
        }
    }
    ctx->pc = 0x18C25Cu;
label_18c25c:
    // 0x18c25c: 0x92030233  lbu         $v1, 0x233($s0)
    ctx->pc = 0x18c25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18c260:
    // 0x18c260: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_18c264:
    if (ctx->pc == 0x18C264u) {
        ctx->pc = 0x18C268u;
        goto label_18c268;
    }
    ctx->pc = 0x18C260u;
    {
        const bool branch_taken_0x18c260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c260) {
            ctx->pc = 0x18C284u;
            goto label_18c284;
        }
    }
    ctx->pc = 0x18C268u;
label_18c268:
    // 0x18c268: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18c26c:
    // 0x18c26c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18c270:
    // 0x18c270: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x18c270u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_18c274:
    // 0x18c274: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_18c278:
    if (ctx->pc == 0x18C278u) {
        ctx->pc = 0x18C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C274u;
        // 0x18c278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C27Cu;
        goto label_18c27c;
    }
    ctx->pc = 0x18C274u;
    {
        const bool branch_taken_0x18c274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C274u;
        // 0x18c278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c274) {
            ctx->pc = 0x18C284u;
            goto label_18c284;
        }
    }
    ctx->pc = 0x18C27Cu;
label_18c27c:
    // 0x18c27c: 0xc0448fc  jal         func_1123F0
label_18c280:
    if (ctx->pc == 0x18C280u) {
        ctx->pc = 0x18C284u;
        goto label_18c284;
    }
    ctx->pc = 0x18C27Cu;
    SET_GPR_U32(ctx, 31, 0x18C284u);
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x18C27Cu, 0x18C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C284u;
label_18c284:
    // 0x18c284: 0x92040232  lbu         $a0, 0x232($s0)
    ctx->pc = 0x18c284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_18c288:
    // 0x18c288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c28c:
    // 0x18c28c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_18c290:
    if (ctx->pc == 0x18C290u) {
        ctx->pc = 0x18C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C28Cu;
        // 0x18c290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C294u;
        goto label_18c294;
    }
    ctx->pc = 0x18C28Cu;
    {
        const bool branch_taken_0x18c28c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C28Cu;
        // 0x18c290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c28c) {
            ctx->pc = 0x18C29Cu;
            goto label_18c29c;
        }
    }
    ctx->pc = 0x18C294u;
label_18c294:
    // 0x18c294: 0xc072924  jal         func_1CA490
label_18c298:
    if (ctx->pc == 0x18C298u) {
        ctx->pc = 0x18C29Cu;
        goto label_18c29c;
    }
    ctx->pc = 0x18C294u;
    SET_GPR_U32(ctx, 31, 0x18C29Cu);
    ctx->pc = 0x1CA490u;
    { ctx->pc = 0x1ca490; return; }
    ctx->pc = 0x18C29Cu;
label_18c29c:
    // 0x18c29c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18c2a0:
    // 0x18c2a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c2a4:
    // 0x18c2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c2a8:
    // 0x18c2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c2ac:
    // 0x18c2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c2b0:
    // 0x18c2b0: 0x3e00008  jr          $ra
label_18c2b4:
    if (ctx->pc == 0x18C2B4u) {
        ctx->pc = 0x18C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2B0u;
        // 0x18c2b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C2B8u;
        goto label_18c2b8;
    }
    ctx->pc = 0x18C2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2B0u;
        // 0x18c2b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C2B8u;
label_18c2b8:
    // 0x18c2b8: 0x0  nop
    ctx->pc = 0x18c2b8u;
    // NOP
label_18c2bc:
    // 0x18c2bc: 0x0  nop
    ctx->pc = 0x18c2bcu;
    // NOP
label_18c2c0:
    // 0x18c2c0: 0x3c033d00  lui         $v1, 0x3D00
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15616 << 16));
label_18c2c4:
    // 0x18c2c4: 0x3465adfd  ori         $a1, $v1, 0xADFD
    ctx->pc = 0x18c2c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
label_18c2c8:
    // 0x18c2c8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c2cc:
    // 0x18c2cc: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c2d0:
    // 0x18c2d0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_18c2d4:
    // 0x18c2d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c2d8:
    // 0x18c2d8: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_18c2dc:
    // 0x18c2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c2e0:
    // 0x18c2e0: 0x3e00008  jr          $ra
label_18c2e4:
    if (ctx->pc == 0x18C2E4u) {
        ctx->pc = 0x18C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2E0u;
        // 0x18c2e4: 0xac6500c8  sw          $a1, 0xC8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C2E8u;
        goto label_18c2e8;
    }
    ctx->pc = 0x18C2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2E0u;
        // 0x18c2e4: 0xac6500c8  sw          $a1, 0xC8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C2E8u;
label_18c2e8:
    // 0x18c2e8: 0x0  nop
    ctx->pc = 0x18c2e8u;
    // NOP
label_18c2ec:
    // 0x18c2ec: 0x0  nop
    ctx->pc = 0x18c2ecu;
    // NOP
label_18c2f0:
    // 0x18c2f0: 0x3e00008  jr          $ra
label_18c2f4:
    if (ctx->pc == 0x18C2F4u) {
        ctx->pc = 0x18C2F8u;
        goto label_18c2f8;
    }
    ctx->pc = 0x18C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C2F8u;
label_18c2f8:
    // 0x18c2f8: 0x0  nop
    ctx->pc = 0x18c2f8u;
    // NOP
label_18c2fc:
    // 0x18c2fc: 0x0  nop
    ctx->pc = 0x18c2fcu;
    // NOP
label_18c300:
    // 0x18c300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18c304:
    // 0x18c304: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c308:
    // 0x18c308: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c30c:
    // 0x18c30c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c310:
    // 0x18c310: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c314:
    // 0x18c314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c318:
    // 0x18c318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c31c:
    // 0x18c31c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c320:
    // 0x18c320: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c324:
    // 0x18c324: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18c324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18c328:
    // 0x18c328: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c32c:
    // 0x18c32c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18c330:
    // 0x18c330: 0x962200e4  lhu         $v0, 0xE4($s1)
    ctx->pc = 0x18c330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_18c334:
    // 0x18c334: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_18c338:
    // 0x18c338: 0xc066e26  jal         func_19B898
label_18c33c:
    if (ctx->pc == 0x18C33Cu) {
        ctx->pc = 0x18C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C338u;
        // 0x18c33c: 0xa62200e4  sh          $v0, 0xE4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C340u;
        goto label_18c340;
    }
    ctx->pc = 0x18C338u;
    SET_GPR_U32(ctx, 31, 0x18C340u);
    ctx->pc = 0x18C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C338u;
    // 0x18c33c: 0xa62200e4  sh          $v0, 0xE4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C340u;
label_18c340:
    // 0x18c340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c344:
    // 0x18c344: 0xc066e26  jal         func_19B898
label_18c348:
    if (ctx->pc == 0x18C348u) {
        ctx->pc = 0x18C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C344u;
        // 0x18c348: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C34Cu;
        goto label_18c34c;
    }
    ctx->pc = 0x18C344u;
    SET_GPR_U32(ctx, 31, 0x18C34Cu);
    ctx->pc = 0x18C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C344u;
    // 0x18c348: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C34Cu;
label_18c34c:
    // 0x18c34c: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x18c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_18c350:
    // 0x18c350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c354:
    // 0x18c354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c358:
    // 0x18c358: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18c35c:
    // 0x18c35c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_18c360:
    // 0x18c360: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18c360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18c364:
    // 0x18c364: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x18c364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_18c368:
    // 0x18c368: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18c368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18c36c:
    // 0x18c36c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x18c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_18c370:
    // 0x18c370: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18c370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18c374:
    // 0x18c374: 0xc063428  jal         func_18D0A0
label_18c378:
    if (ctx->pc == 0x18C378u) {
        ctx->pc = 0x18C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C374u;
        // 0x18c378: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C37Cu;
        goto label_18c37c;
    }
    ctx->pc = 0x18C374u;
    SET_GPR_U32(ctx, 31, 0x18C37Cu);
    ctx->pc = 0x18C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C374u;
    // 0x18c378: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0A0u;
    { ctx->pc = 0x18d0a0; return; }
    ctx->pc = 0x18C37Cu;
label_18c37c:
    // 0x18c37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c380:
    // 0x18c380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c384:
    // 0x18c384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c388:
    // 0x18c388: 0x3e00008  jr          $ra
label_18c38c:
    if (ctx->pc == 0x18C38Cu) {
        ctx->pc = 0x18C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C388u;
        // 0x18c38c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C390u;
        goto label_18c390;
    }
    ctx->pc = 0x18C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C388u;
        // 0x18c38c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C390u;
label_18c390:
    // 0x18c390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c394:
    // 0x18c394: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c398:
    // 0x18c398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c39c:
    // 0x18c39c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c3a0:
    // 0x18c3a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c3a4:
    // 0x18c3a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c3a8:
    // 0x18c3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c3ac:
    // 0x18c3ac: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c3b0:
    // 0x18c3b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c3b4:
    // 0x18c3b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c3b8:
    // 0x18c3b8: 0xc064224  jal         func_190890
label_18c3bc:
    if (ctx->pc == 0x18C3BCu) {
        ctx->pc = 0x18C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3B8u;
        // 0x18c3bc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3C0u;
        goto label_18c3c0;
    }
    ctx->pc = 0x18C3B8u;
    SET_GPR_U32(ctx, 31, 0x18C3C0u);
    ctx->pc = 0x18C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3B8u;
    // 0x18c3bc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    { ctx->pc = 0x190890; return; }
    ctx->pc = 0x18C3C0u;
label_18c3c0:
    // 0x18c3c0: 0x3c023dab  lui         $v0, 0x3DAB
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15787 << 16));
label_18c3c4:
    // 0x18c3c4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x18c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_18c3c8:
    // 0x18c3c8: 0x344492a6  ori         $a0, $v0, 0x92A6
    ctx->pc = 0x18c3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
label_18c3cc:
    // 0x18c3cc: 0x24080069  addiu       $t0, $zero, 0x69
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_18c3d0:
    // 0x18c3d0: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x18c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
label_18c3d4:
    // 0x18c3d4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_18c3d8:
    // 0x18c3d8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x18c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_18c3dc:
    // 0x18c3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c3e0:
    // 0x18c3e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x18c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c3e4:
    // 0x18c3e4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x18c3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_18c3e8:
    // 0x18c3e8: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
label_18c3ec:
    // 0x18c3ec: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_18c3f0:
    // 0x18c3f0: 0x344727f0  ori         $a3, $v0, 0x27F0
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
label_18c3f4:
    // 0x18c3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c3f8:
    // 0x18c3f8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x18c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_18c3fc:
    // 0x18c3fc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18c400:
    // 0x18c400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c404:
    // 0x18c404: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c408:
    // 0x18c408: 0xae0800b0  sw          $t0, 0xB0($s0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 8));
label_18c40c:
    // 0x18c40c: 0xae070098  sw          $a3, 0x98($s0)
    ctx->pc = 0x18c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 7));
label_18c410:
    // 0x18c410: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_18c414:
    // 0x18c414: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_18c418:
    // 0x18c418: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x18c418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
label_18c41c:
    // 0x18c41c: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x18c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
label_18c420:
    // 0x18c420: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18c420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_18c424:
    // 0x18c424: 0xc066e26  jal         func_19B898
label_18c428:
    if (ctx->pc == 0x18C428u) {
        ctx->pc = 0x18C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C424u;
        // 0x18c428: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C42Cu;
        goto label_18c42c;
    }
    ctx->pc = 0x18C424u;
    SET_GPR_U32(ctx, 31, 0x18C42Cu);
    ctx->pc = 0x18C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C424u;
    // 0x18c428: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C42Cu;
label_18c42c:
    // 0x18c42c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c430:
    // 0x18c430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c434:
    // 0x18c434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c438:
    // 0x18c438: 0x3e00008  jr          $ra
label_18c43c:
    if (ctx->pc == 0x18C43Cu) {
        ctx->pc = 0x18C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C438u;
        // 0x18c43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C440u;
        goto label_18c440;
    }
    ctx->pc = 0x18C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C438u;
        // 0x18c43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C440u;
label_18c440:
    // 0x18c440: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c444:
    // 0x18c444: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18c448:
    // 0x18c448: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c44c:
    // 0x18c44c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c450:
    // 0x18c450: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c454:
    // 0x18c454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c458:
    // 0x18c458: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c45c:
    // 0x18c45c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c460:
    // 0x18c460: 0xc064224  jal         func_190890
label_18c464:
    if (ctx->pc == 0x18C464u) {
        ctx->pc = 0x18C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C460u;
        // 0x18c464: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C468u;
        goto label_18c468;
    }
    ctx->pc = 0x18C460u;
    SET_GPR_U32(ctx, 31, 0x18C468u);
    ctx->pc = 0x18C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C460u;
    // 0x18c464: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    { ctx->pc = 0x190890; return; }
    ctx->pc = 0x18C468u;
label_18c468:
    // 0x18c468: 0x3c033dab  lui         $v1, 0x3DAB
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15787 << 16));
label_18c46c:
    // 0x18c46c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_18c470:
    // 0x18c470: 0x346592a6  ori         $a1, $v1, 0x92A6
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37542);
label_18c474:
    // 0x18c474: 0xae0500b8  sw          $a1, 0xB8($s0)
    ctx->pc = 0x18c474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 5));
label_18c478:
    // 0x18c478: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_18c47c:
    // 0x18c47c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_18c480:
    // 0x18c480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c484:
    // 0x18c484: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x18c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c488:
    // 0x18c488: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_18c48c:
    // 0x18c48c: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
label_18c490:
    // 0x18c490: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
label_18c494:
    // 0x18c494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c498:
    // 0x18c498: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c49c:
    // 0x18c49c: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x18c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_18c4a0:
    // 0x18c4a0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_18c4a4:
    // 0x18c4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c4a8:
    // 0x18c4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c4ac:
    // 0x18c4ac: 0x3e00008  jr          $ra
label_18c4b0:
    if (ctx->pc == 0x18C4B0u) {
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4ACu;
        // 0x18c4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4B4u;
        goto label_18c4b4;
    }
    ctx->pc = 0x18C4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4ACu;
        // 0x18c4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C4B4u;
label_18c4b4:
    // 0x18c4b4: 0x0  nop
    ctx->pc = 0x18c4b4u;
    // NOP
label_18c4b8:
    // 0x18c4b8: 0x0  nop
    ctx->pc = 0x18c4b8u;
    // NOP
label_18c4bc:
    // 0x18c4bc: 0x0  nop
    ctx->pc = 0x18c4bcu;
    // NOP
label_18c4c0:
    // 0x18c4c0: 0x3e00008  jr          $ra
label_18c4c4:
    if (ctx->pc == 0x18C4C4u) {
        ctx->pc = 0x18C4C8u;
        goto label_18c4c8;
    }
    ctx->pc = 0x18C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C4C8u;
label_18c4c8:
    // 0x18c4c8: 0x0  nop
    ctx->pc = 0x18c4c8u;
    // NOP
label_18c4cc:
    // 0x18c4cc: 0x0  nop
    ctx->pc = 0x18c4ccu;
    // NOP
label_18c4d0:
    // 0x18c4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c4d4:
    // 0x18c4d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c4d8:
    // 0x18c4d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c4dc:
    // 0x18c4dc: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c4e0:
    // 0x18c4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c4e4:
    // 0x18c4e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_18c4e8:
    // 0x18c4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c4ec:
    // 0x18c4ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c4f0:
    // 0x18c4f0: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18c4f4:
    // 0x18c4f4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_18c4f8:
    // 0x18c4f8: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_18c4fc:
    // 0x18c4fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_18c500:
    if (ctx->pc == 0x18C500u) {
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4FCu;
        // 0x18c500: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C504u;
        goto label_18c504;
    }
    ctx->pc = 0x18C4FCu;
    {
        const bool branch_taken_0x18c4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4FCu;
        // 0x18c500: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4fc) {
            ctx->pc = 0x18C548u;
            goto label_18c548;
        }
    }
    ctx->pc = 0x18C504u;
label_18c504:
    // 0x18c504: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_18c508:
    // 0x18c508: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18c50c:
    if (ctx->pc == 0x18C50Cu) {
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C510u;
        goto label_18c510;
    }
    ctx->pc = 0x18C508u;
    {
        const bool branch_taken_0x18c508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c508) {
            ctx->pc = 0x18C51Cu;
            goto label_18c51c;
        }
    }
    ctx->pc = 0x18C510u;
label_18c510:
    // 0x18c510: 0xc064224  jal         func_190890
label_18c514:
    if (ctx->pc == 0x18C514u) {
        ctx->pc = 0x18C518u;
        goto label_18c518;
    }
    ctx->pc = 0x18C510u;
    SET_GPR_U32(ctx, 31, 0x18C518u);
    ctx->pc = 0x190890u;
    { ctx->pc = 0x190890; return; }
    ctx->pc = 0x18C518u;
label_18c518:
    // 0x18c518: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_18c51c:
    // 0x18c51c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_18c520:
    // 0x18c520: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x18c520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_18c524:
    // 0x18c524: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
label_18c528:
    // 0x18c528: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_18c52c:
    // 0x18c52c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_18c530:
    // 0x18c530: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x18c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_18c534:
    // 0x18c534: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c538:
    // 0x18c538: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
label_18c53c:
    // 0x18c53c: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
label_18c540:
    // 0x18c540: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c544:
    // 0x18c544: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_18c548:
    // 0x18c548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c54c:
    // 0x18c54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c550:
    // 0x18c550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c554:
    // 0x18c554: 0x3e00008  jr          $ra
label_18c558:
    if (ctx->pc == 0x18C558u) {
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C554u;
        // 0x18c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C55Cu;
        goto label_18c55c;
    }
    ctx->pc = 0x18C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C554u;
        // 0x18c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C55Cu;
label_18c55c:
    // 0x18c55c: 0x0  nop
    ctx->pc = 0x18c55cu;
    // NOP
label_18c560:
    // 0x18c560: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18c564:
    // 0x18c564: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c568:
    // 0x18c568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18c56c:
    // 0x18c56c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c570:
    // 0x18c570: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18c574:
    // 0x18c574: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18c574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c578:
    // 0x18c578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18c57c:
    // 0x18c57c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c580:
    // 0x18c580: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18c584:
    // 0x18c584: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_18c588:
    // 0x18c588: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18c58c:
    // 0x18c58c: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_18c590:
    // 0x18c590: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18c594:
    // 0x18c594: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
label_18c598:
    if (ctx->pc == 0x18C598u) {
        ctx->pc = 0x18C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C594u;
        // 0x18c598: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C59Cu;
        goto label_18c59c;
    }
    ctx->pc = 0x18C594u;
    {
        const bool branch_taken_0x18c594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C594u;
        // 0x18c598: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c594) {
            ctx->pc = 0x18C864u;
            { ctx->pc = 0x18c864; return; }
        }
    }
    ctx->pc = 0x18C59Cu;
label_18c59c:
    // 0x18c59c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c5a0:
    // 0x18c5a0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x18c5a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_18c5a4:
    // 0x18c5a4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18c5a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18c5a8:
    // 0x18c5a8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18c5a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18c5ac:
    // 0x18c5ac: 0x4a0002ff  vnop
    ctx->pc = 0x18c5acu;
    // NOP operation, no action needed for VU0
label_18c5b0:
    // 0x18c5b0: 0x4a0002ff  vnop
    ctx->pc = 0x18c5b0u;
    // NOP operation, no action needed for VU0
label_18c5b4:
    // 0x18c5b4: 0x4a0002ff  vnop
    ctx->pc = 0x18c5b4u;
    // NOP operation, no action needed for VU0
label_18c5b8:
    // 0x18c5b8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18c5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18c5bc:
    // 0x18c5bc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18c5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    ctx->pc = 0x18c5c0u;
    return;
}

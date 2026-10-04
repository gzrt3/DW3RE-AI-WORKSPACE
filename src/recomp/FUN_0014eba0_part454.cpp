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


void FUN_0014eba0_part454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bef4u: goto label_22bef4;
        case 0x22bef8u: goto label_22bef8;
        case 0x22befcu: goto label_22befc;
        case 0x22bf00u: goto label_22bf00;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf08u: goto label_22bf08;
        case 0x22bf0cu: goto label_22bf0c;
        case 0x22bf10u: goto label_22bf10;
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf18u: goto label_22bf18;
        case 0x22bf1cu: goto label_22bf1c;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf2cu: goto label_22bf2c;
        case 0x22bf30u: goto label_22bf30;
        case 0x22bf34u: goto label_22bf34;
        case 0x22bf38u: goto label_22bf38;
        case 0x22bf3cu: goto label_22bf3c;
        case 0x22bf40u: goto label_22bf40;
        case 0x22bf44u: goto label_22bf44;
        case 0x22bf48u: goto label_22bf48;
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf58u: goto label_22bf58;
        case 0x22bf5cu: goto label_22bf5c;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bf64u: goto label_22bf64;
        case 0x22bf68u: goto label_22bf68;
        case 0x22bf6cu: goto label_22bf6c;
        case 0x22bf70u: goto label_22bf70;
        case 0x22bf74u: goto label_22bf74;
        case 0x22bf78u: goto label_22bf78;
        case 0x22bf7cu: goto label_22bf7c;
        case 0x22bf80u: goto label_22bf80;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf88u: goto label_22bf88;
        case 0x22bf8cu: goto label_22bf8c;
        case 0x22bf90u: goto label_22bf90;
        case 0x22bf94u: goto label_22bf94;
        case 0x22bf98u: goto label_22bf98;
        case 0x22bf9cu: goto label_22bf9c;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bfa4u: goto label_22bfa4;
        case 0x22bfa8u: goto label_22bfa8;
        case 0x22bfacu: goto label_22bfac;
        case 0x22bfb0u: goto label_22bfb0;
        case 0x22bfb4u: goto label_22bfb4;
        case 0x22bfb8u: goto label_22bfb8;
        case 0x22bfbcu: goto label_22bfbc;
        case 0x22bfc0u: goto label_22bfc0;
        case 0x22bfc4u: goto label_22bfc4;
        case 0x22bfc8u: goto label_22bfc8;
        case 0x22bfccu: goto label_22bfcc;
        case 0x22bfd0u: goto label_22bfd0;
        case 0x22bfd4u: goto label_22bfd4;
        case 0x22bfd8u: goto label_22bfd8;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bfe0u: goto label_22bfe0;
        case 0x22bfe4u: goto label_22bfe4;
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        case 0x22c02cu: goto label_22c02c;
        case 0x22c030u: goto label_22c030;
        case 0x22c034u: goto label_22c034;
        case 0x22c038u: goto label_22c038;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c040u: goto label_22c040;
        case 0x22c044u: goto label_22c044;
        case 0x22c048u: goto label_22c048;
        case 0x22c04cu: goto label_22c04c;
        case 0x22c050u: goto label_22c050;
        case 0x22c054u: goto label_22c054;
        case 0x22c058u: goto label_22c058;
        case 0x22c05cu: goto label_22c05c;
        case 0x22c060u: goto label_22c060;
        case 0x22c064u: goto label_22c064;
        case 0x22c068u: goto label_22c068;
        case 0x22c06cu: goto label_22c06c;
        case 0x22c070u: goto label_22c070;
        case 0x22c074u: goto label_22c074;
        case 0x22c078u: goto label_22c078;
        case 0x22c07cu: goto label_22c07c;
        case 0x22c080u: goto label_22c080;
        case 0x22c084u: goto label_22c084;
        case 0x22c088u: goto label_22c088;
        case 0x22c08cu: goto label_22c08c;
        case 0x22c090u: goto label_22c090;
        case 0x22c094u: goto label_22c094;
        case 0x22c098u: goto label_22c098;
        case 0x22c09cu: goto label_22c09c;
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0a4u: goto label_22c0a4;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0acu: goto label_22c0ac;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0b8u: goto label_22c0b8;
        case 0x22c0bcu: goto label_22c0bc;
        case 0x22c0c0u: goto label_22c0c0;
        case 0x22c0c4u: goto label_22c0c4;
        case 0x22c0c8u: goto label_22c0c8;
        case 0x22c0ccu: goto label_22c0cc;
        case 0x22c0d0u: goto label_22c0d0;
        case 0x22c0d4u: goto label_22c0d4;
        case 0x22c0d8u: goto label_22c0d8;
        case 0x22c0dcu: goto label_22c0dc;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0e4u: goto label_22c0e4;
        case 0x22c0e8u: goto label_22c0e8;
        case 0x22c0ecu: goto label_22c0ec;
        case 0x22c0f0u: goto label_22c0f0;
        case 0x22c0f4u: goto label_22c0f4;
        case 0x22c0f8u: goto label_22c0f8;
        case 0x22c0fcu: goto label_22c0fc;
        case 0x22c100u: goto label_22c100;
        case 0x22c104u: goto label_22c104;
        case 0x22c108u: goto label_22c108;
        case 0x22c10cu: goto label_22c10c;
        case 0x22c110u: goto label_22c110;
        case 0x22c114u: goto label_22c114;
        case 0x22c118u: goto label_22c118;
        case 0x22c11cu: goto label_22c11c;
        case 0x22c120u: goto label_22c120;
        case 0x22c124u: goto label_22c124;
        case 0x22c128u: goto label_22c128;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c130u: goto label_22c130;
        case 0x22c134u: goto label_22c134;
        case 0x22c138u: goto label_22c138;
        case 0x22c13cu: goto label_22c13c;
        case 0x22c140u: goto label_22c140;
        case 0x22c144u: goto label_22c144;
        case 0x22c148u: goto label_22c148;
        case 0x22c14cu: goto label_22c14c;
        case 0x22c150u: goto label_22c150;
        case 0x22c154u: goto label_22c154;
        case 0x22c158u: goto label_22c158;
        case 0x22c15cu: goto label_22c15c;
        case 0x22c160u: goto label_22c160;
        case 0x22c164u: goto label_22c164;
        case 0x22c168u: goto label_22c168;
        case 0x22c16cu: goto label_22c16c;
        case 0x22c170u: goto label_22c170;
        case 0x22c174u: goto label_22c174;
        case 0x22c178u: goto label_22c178;
        case 0x22c17cu: goto label_22c17c;
        case 0x22c180u: goto label_22c180;
        case 0x22c184u: goto label_22c184;
        case 0x22c188u: goto label_22c188;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c190u: goto label_22c190;
        case 0x22c194u: goto label_22c194;
        case 0x22c198u: goto label_22c198;
        case 0x22c19cu: goto label_22c19c;
        case 0x22c1a0u: goto label_22c1a0;
        case 0x22c1a4u: goto label_22c1a4;
        case 0x22c1a8u: goto label_22c1a8;
        case 0x22c1acu: goto label_22c1ac;
        case 0x22c1b0u: goto label_22c1b0;
        case 0x22c1b4u: goto label_22c1b4;
        case 0x22c1b8u: goto label_22c1b8;
        case 0x22c1bcu: goto label_22c1bc;
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c1c4u: goto label_22c1c4;
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1ccu: goto label_22c1cc;
        case 0x22c1d0u: goto label_22c1d0;
        case 0x22c1d4u: goto label_22c1d4;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1dcu: goto label_22c1dc;
        case 0x22c1e0u: goto label_22c1e0;
        case 0x22c1e4u: goto label_22c1e4;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1ecu: goto label_22c1ec;
        case 0x22c1f0u: goto label_22c1f0;
        case 0x22c1f4u: goto label_22c1f4;
        case 0x22c1f8u: goto label_22c1f8;
        case 0x22c1fcu: goto label_22c1fc;
        case 0x22c200u: goto label_22c200;
        case 0x22c204u: goto label_22c204;
        case 0x22c208u: goto label_22c208;
        case 0x22c20cu: goto label_22c20c;
        case 0x22c210u: goto label_22c210;
        case 0x22c214u: goto label_22c214;
        case 0x22c218u: goto label_22c218;
        case 0x22c21cu: goto label_22c21c;
        case 0x22c220u: goto label_22c220;
        case 0x22c224u: goto label_22c224;
        case 0x22c228u: goto label_22c228;
        case 0x22c22cu: goto label_22c22c;
        case 0x22c230u: goto label_22c230;
        case 0x22c234u: goto label_22c234;
        case 0x22c238u: goto label_22c238;
        case 0x22c23cu: goto label_22c23c;
        case 0x22c240u: goto label_22c240;
        case 0x22c244u: goto label_22c244;
        case 0x22c248u: goto label_22c248;
        case 0x22c24cu: goto label_22c24c;
        case 0x22c250u: goto label_22c250;
        case 0x22c254u: goto label_22c254;
        case 0x22c258u: goto label_22c258;
        case 0x22c25cu: goto label_22c25c;
        case 0x22c260u: goto label_22c260;
        case 0x22c264u: goto label_22c264;
        case 0x22c268u: goto label_22c268;
        case 0x22c26cu: goto label_22c26c;
        case 0x22c270u: goto label_22c270;
        case 0x22c274u: goto label_22c274;
        case 0x22c278u: goto label_22c278;
        case 0x22c27cu: goto label_22c27c;
        case 0x22c280u: goto label_22c280;
        case 0x22c284u: goto label_22c284;
        case 0x22c288u: goto label_22c288;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c290u: goto label_22c290;
        case 0x22c294u: goto label_22c294;
        case 0x22c298u: goto label_22c298;
        case 0x22c29cu: goto label_22c29c;
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2a4u: goto label_22c2a4;
        case 0x22c2a8u: goto label_22c2a8;
        case 0x22c2acu: goto label_22c2ac;
        case 0x22c2b0u: goto label_22c2b0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c0u: goto label_22c2c0;
        case 0x22c2c4u: goto label_22c2c4;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2ccu: goto label_22c2cc;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d4u: goto label_22c2d4;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2dcu: goto label_22c2dc;
        case 0x22c2e0u: goto label_22c2e0;
        case 0x22c2e4u: goto label_22c2e4;
        case 0x22c2e8u: goto label_22c2e8;
        case 0x22c2ecu: goto label_22c2ec;
        case 0x22c2f0u: goto label_22c2f0;
        case 0x22c2f4u: goto label_22c2f4;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c2fcu: goto label_22c2fc;
        case 0x22c300u: goto label_22c300;
        case 0x22c304u: goto label_22c304;
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        case 0x22c378u: goto label_22c378;
        case 0x22c37cu: goto label_22c37c;
        case 0x22c380u: goto label_22c380;
        case 0x22c384u: goto label_22c384;
        case 0x22c388u: goto label_22c388;
        case 0x22c38cu: goto label_22c38c;
        case 0x22c390u: goto label_22c390;
        case 0x22c394u: goto label_22c394;
        case 0x22c398u: goto label_22c398;
        case 0x22c39cu: goto label_22c39c;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3a4u: goto label_22c3a4;
        case 0x22c3a8u: goto label_22c3a8;
        case 0x22c3acu: goto label_22c3ac;
        case 0x22c3b0u: goto label_22c3b0;
        case 0x22c3b4u: goto label_22c3b4;
        case 0x22c3b8u: goto label_22c3b8;
        case 0x22c3bcu: goto label_22c3bc;
        case 0x22c3c0u: goto label_22c3c0;
        case 0x22c3c4u: goto label_22c3c4;
        case 0x22c3c8u: goto label_22c3c8;
        case 0x22c3ccu: goto label_22c3cc;
        case 0x22c3d0u: goto label_22c3d0;
        case 0x22c3d4u: goto label_22c3d4;
        case 0x22c3d8u: goto label_22c3d8;
        case 0x22c3dcu: goto label_22c3dc;
        case 0x22c3e0u: goto label_22c3e0;
        case 0x22c3e4u: goto label_22c3e4;
        case 0x22c3e8u: goto label_22c3e8;
        case 0x22c3ecu: goto label_22c3ec;
        case 0x22c3f0u: goto label_22c3f0;
        case 0x22c3f4u: goto label_22c3f4;
        case 0x22c3f8u: goto label_22c3f8;
        case 0x22c3fcu: goto label_22c3fc;
        case 0x22c400u: goto label_22c400;
        case 0x22c404u: goto label_22c404;
        case 0x22c408u: goto label_22c408;
        case 0x22c40cu: goto label_22c40c;
        case 0x22c410u: goto label_22c410;
        case 0x22c414u: goto label_22c414;
        case 0x22c418u: goto label_22c418;
        case 0x22c41cu: goto label_22c41c;
        case 0x22c420u: goto label_22c420;
        case 0x22c424u: goto label_22c424;
        case 0x22c428u: goto label_22c428;
        case 0x22c42cu: goto label_22c42c;
        case 0x22c430u: goto label_22c430;
        case 0x22c434u: goto label_22c434;
        case 0x22c438u: goto label_22c438;
        case 0x22c43cu: goto label_22c43c;
        case 0x22c440u: goto label_22c440;
        case 0x22c444u: goto label_22c444;
        case 0x22c448u: goto label_22c448;
        case 0x22c44cu: goto label_22c44c;
        case 0x22c450u: goto label_22c450;
        case 0x22c454u: goto label_22c454;
        case 0x22c458u: goto label_22c458;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c460u: goto label_22c460;
        case 0x22c464u: goto label_22c464;
        case 0x22c468u: goto label_22c468;
        case 0x22c46cu: goto label_22c46c;
        case 0x22c470u: goto label_22c470;
        case 0x22c474u: goto label_22c474;
        case 0x22c478u: goto label_22c478;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c480u: goto label_22c480;
        case 0x22c484u: goto label_22c484;
        case 0x22c488u: goto label_22c488;
        case 0x22c48cu: goto label_22c48c;
        case 0x22c490u: goto label_22c490;
        case 0x22c494u: goto label_22c494;
        case 0x22c498u: goto label_22c498;
        case 0x22c49cu: goto label_22c49c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4a8u: goto label_22c4a8;
        case 0x22c4acu: goto label_22c4ac;
        case 0x22c4b0u: goto label_22c4b0;
        case 0x22c4b4u: goto label_22c4b4;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4bcu: goto label_22c4bc;
        case 0x22c4c0u: goto label_22c4c0;
        case 0x22c4c4u: goto label_22c4c4;
        case 0x22c4c8u: goto label_22c4c8;
        case 0x22c4ccu: goto label_22c4cc;
        case 0x22c4d0u: goto label_22c4d0;
        case 0x22c4d4u: goto label_22c4d4;
        case 0x22c4d8u: goto label_22c4d8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e0u: goto label_22c4e0;
        case 0x22c4e4u: goto label_22c4e4;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        case 0x22c638u: goto label_22c638;
        case 0x22c63cu: goto label_22c63c;
        case 0x22c640u: goto label_22c640;
        case 0x22c644u: goto label_22c644;
        case 0x22c648u: goto label_22c648;
        case 0x22c64cu: goto label_22c64c;
        case 0x22c650u: goto label_22c650;
        case 0x22c654u: goto label_22c654;
        case 0x22c658u: goto label_22c658;
        case 0x22c65cu: goto label_22c65c;
        case 0x22c660u: goto label_22c660;
        case 0x22c664u: goto label_22c664;
        case 0x22c668u: goto label_22c668;
        case 0x22c66cu: goto label_22c66c;
        case 0x22c670u: goto label_22c670;
        case 0x22c674u: goto label_22c674;
        case 0x22c678u: goto label_22c678;
        case 0x22c67cu: goto label_22c67c;
        default: return;
    }

label_22beb0:
    // 0x22beb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22beb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22beb4:
    // 0x22beb4: 0x0  nop
    ctx->pc = 0x22beb4u;
    // NOP
label_22beb8:
    // 0x22beb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22beb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22bebc:
    // 0x22bebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bec0:
    // 0x22bec0: 0x0  nop
    ctx->pc = 0x22bec0u;
    // NOP
label_22bec4:
    // 0x22bec4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_22bec8:
    if (ctx->pc == 0x22BEC8u) {
        ctx->pc = 0x22BECCu;
        goto label_22becc;
    }
    ctx->pc = 0x22BEC4u;
    {
        const bool branch_taken_0x22bec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bec4) {
            ctx->pc = 0x22BF18u;
            goto label_22bf18;
        }
    }
    ctx->pc = 0x22BECCu;
label_22becc:
    // 0x22becc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x22beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bed0:
    // 0x22bed0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_22bed4:
    // 0x22bed4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x22bed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22bed8:
    // 0x22bed8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22bed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bedc:
    // 0x22bedc: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x22bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_22bee0:
    // 0x22bee0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22bee4:
    // 0x22bee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bee8:
    // 0x22bee8: 0x0  nop
    ctx->pc = 0x22bee8u;
    // NOP
label_22beec:
    // 0x22beec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22beecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22bef0:
    // 0x22bef0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x22bef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_22bef4:
    // 0x22bef4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x22bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bef8:
    // 0x22bef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22befc:
    // 0x22befc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x22befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_22bf00:
    // 0x22bf00: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf04:
    // 0x22bf04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22bf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22bf08:
    // 0x22bf08: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_22bf0c:
    // 0x22bf0c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x22bf0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_22bf10:
    // 0x22bf10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22bf14:
    // 0x22bf14: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x22bf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_22bf18:
    // 0x22bf18: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf1c:
    // 0x22bf1c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_22bf20:
    // 0x22bf20: 0x3443b8c3  ori         $v1, $v0, 0xB8C3
    ctx->pc = 0x22bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22bf24:
    // 0x22bf24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22bf24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bf28:
    // 0x22bf28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22bf2c:
    // 0x22bf2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf30:
    // 0x22bf30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22bf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bf34:
    // 0x22bf34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22bf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bf38:
    // 0x22bf38: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22bf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bf3c:
    // 0x22bf3c: 0x0  nop
    ctx->pc = 0x22bf3cu;
    // NOP
label_22bf40:
    // 0x22bf40: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22bf44:
    if (ctx->pc == 0x22BF44u) {
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF48u;
        goto label_22bf48;
    }
    ctx->pc = 0x22BF40u;
    {
        const bool branch_taken_0x22bf40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf40) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF48u;
label_22bf48:
    // 0x22bf48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22bf4c:
    // 0x22bf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf50:
    // 0x22bf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf54:
    // 0x22bf54: 0x1000000d  b           . + 4 + (0xD << 2)
label_22bf58:
    if (ctx->pc == 0x22BF58u) {
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF5Cu;
        goto label_22bf5c;
    }
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF5Cu;
label_22bf5c:
    // 0x22bf5c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22bf60:
    // 0x22bf60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf64:
    // 0x22bf64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf68:
    // 0x22bf68: 0x0  nop
    ctx->pc = 0x22bf68u;
    // NOP
label_22bf6c:
    // 0x22bf6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bf70:
    // 0x22bf70: 0x0  nop
    ctx->pc = 0x22bf70u;
    // NOP
label_22bf74:
    // 0x22bf74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22bf78:
    if (ctx->pc == 0x22BF78u) {
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF7Cu;
        goto label_22bf7c;
    }
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF7Cu;
label_22bf7c:
    // 0x22bf7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf80:
    // 0x22bf80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf84:
    // 0x22bf84: 0x10000001  b           . + 4 + (0x1 << 2)
label_22bf88:
    if (ctx->pc == 0x22BF88u) {
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF8Cu;
        goto label_22bf8c;
    }
    ctx->pc = 0x22BF84u;
    {
        const bool branch_taken_0x22bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf84) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x22bf8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_22bf90:
    // 0x22bf90: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_22bf94:
    // 0x22bf94: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x22bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22bf98:
    // 0x22bf98: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22bf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22bf9c:
    // 0x22bf9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bfa0:
    // 0x22bfa0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22bfa4:
    // 0x22bfa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfa8:
    // 0x22bfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfac:
    // 0x22bfac: 0x0  nop
    ctx->pc = 0x22bfacu;
    // NOP
label_22bfb0:
    // 0x22bfb0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22bfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22bfb4:
    // 0x22bfb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bfb8:
    // 0x22bfb8: 0x0  nop
    ctx->pc = 0x22bfb8u;
    // NOP
label_22bfbc:
    // 0x22bfbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22bfc0:
    if (ctx->pc == 0x22BFC0u) {
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFC4u;
        goto label_22bfc4;
    }
    ctx->pc = 0x22BFBCu;
    {
        const bool branch_taken_0x22bfbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfbc) {
            ctx->pc = 0x22BFD8u;
            goto label_22bfd8;
        }
    }
    ctx->pc = 0x22BFC4u;
label_22bfc4:
    // 0x22bfc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22bfc8:
    // 0x22bfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfcc:
    // 0x22bfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfd0:
    // 0x22bfd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_22bfd4:
    if (ctx->pc == 0x22BFD4u) {
        ctx->pc = 0x22BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD0u;
        // 0x22bfd4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFD8u;
        goto label_22bfd8;
    }
    ctx->pc = 0x22BFD0u;
    {
        const bool branch_taken_0x22bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD0u;
        // 0x22bfd4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfd0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFD8u;
label_22bfd8:
    // 0x22bfd8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22bfdc:
    // 0x22bfdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfe0:
    // 0x22bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfe4:
    // 0x22bfe4: 0x0  nop
    ctx->pc = 0x22bfe4u;
    // NOP
label_22bfe8:
    // 0x22bfe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bfec:
    // 0x22bfec: 0x0  nop
    ctx->pc = 0x22bfecu;
    // NOP
label_22bff0:
    // 0x22bff0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22bff4:
    if (ctx->pc == 0x22BFF4u) {
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFF8u;
        goto label_22bff8;
    }
    ctx->pc = 0x22BFF0u;
    {
        const bool branch_taken_0x22bff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFF8u;
label_22bff8:
    // 0x22bff8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bffc:
    // 0x22bffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c000:
    // 0x22c000: 0x10000001  b           . + 4 + (0x1 << 2)
label_22c004:
    if (ctx->pc == 0x22C004u) {
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C000u;
        // 0x22c004: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C008u;
        goto label_22c008;
    }
    ctx->pc = 0x22C000u;
    {
        const bool branch_taken_0x22c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C000u;
        // 0x22c004: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c000) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22C008u;
label_22c008:
    // 0x22c008: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x22c008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_22c00c:
    // 0x22c00c: 0xc066e44  jal         func_19B910
label_22c010:
    if (ctx->pc == 0x22C010u) {
        ctx->pc = 0x22C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C00Cu;
        // 0x22c010: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C014u;
        goto label_22c014;
    }
    ctx->pc = 0x22C00Cu;
    SET_GPR_U32(ctx, 31, 0x22C014u);
    ctx->pc = 0x22C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C00Cu;
    // 0x22c010: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22C014u;
label_22c014:
    // 0x22c014: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_22c018:
    // 0x22c018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c01c:
    // 0x22c01c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22c020:
    // 0x22c020: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c024:
    // 0x22c024: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x22c024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_22c028:
    // 0x22c028: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22c02c:
    // 0x22c02c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x22c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_22c030:
    // 0x22c030: 0xc064f38  jal         func_193CE0
label_22c034:
    if (ctx->pc == 0x22C034u) {
        ctx->pc = 0x22C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C030u;
        // 0x22c034: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C038u;
        goto label_22c038;
    }
    ctx->pc = 0x22C030u;
    SET_GPR_U32(ctx, 31, 0x22C038u);
    ctx->pc = 0x22C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C030u;
    // 0x22c034: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    { ctx->pc = 0x193ce0; return; }
    ctx->pc = 0x22C038u;
label_22c038:
    // 0x22c038: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c03c:
    // 0x22c03c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c040:
    // 0x22c040: 0xc066e96  jal         func_19BA58
label_22c044:
    if (ctx->pc == 0x22C044u) {
        ctx->pc = 0x22C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C040u;
        // 0x22c044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C048u;
        goto label_22c048;
    }
    ctx->pc = 0x22C040u;
    SET_GPR_U32(ctx, 31, 0x22C048u);
    ctx->pc = 0x22C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C040u;
    // 0x22c044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22c048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c04c:
    // 0x22c04c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c050:
    // 0x22c050: 0xc066e6c  jal         func_19B9B0
label_22c054:
    if (ctx->pc == 0x22C054u) {
        ctx->pc = 0x22C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C050u;
        // 0x22c054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C058u;
        goto label_22c058;
    }
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c05c:
    // 0x22c05c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c060:
    // 0x22c060: 0xc066ec0  jal         func_19BB00
label_22c064:
    if (ctx->pc == 0x22C064u) {
        ctx->pc = 0x22C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C060u;
        // 0x22c064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C068u;
        goto label_22c068;
    }
    ctx->pc = 0x22C060u;
    SET_GPR_U32(ctx, 31, 0x22C068u);
    ctx->pc = 0x22C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C060u;
    // 0x22c064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c06c:
    // 0x22c06c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c070:
    // 0x22c070: 0xc066e1a  jal         func_19B868
label_22c074:
    if (ctx->pc == 0x22C074u) {
        ctx->pc = 0x22C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C070u;
        // 0x22c074: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C078u;
        goto label_22c078;
    }
    ctx->pc = 0x22C070u;
    SET_GPR_U32(ctx, 31, 0x22C078u);
    ctx->pc = 0x22C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C070u;
    // 0x22c074: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22C078u;
label_22c078:
    // 0x22c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c07c:
    // 0x22c07c: 0xc05ff64  jal         func_17FD90
label_22c080:
    if (ctx->pc == 0x22C080u) {
        ctx->pc = 0x22C084u;
        goto label_22c084;
    }
    ctx->pc = 0x22C07Cu;
    SET_GPR_U32(ctx, 31, 0x22C084u);
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x22C084u;
label_22c084:
    // 0x22c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22c088:
    // 0x22c088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c08c:
    // 0x22c08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c090:
    // 0x22c090: 0x3e00008  jr          $ra
label_22c094:
    if (ctx->pc == 0x22C094u) {
        ctx->pc = 0x22C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C090u;
        // 0x22c094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C098u;
        goto label_22c098;
    }
    ctx->pc = 0x22C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C090u;
        // 0x22c094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C098u;
label_22c098:
    // 0x22c098: 0x0  nop
    ctx->pc = 0x22c098u;
    // NOP
label_22c09c:
    // 0x22c09c: 0x0  nop
    ctx->pc = 0x22c09cu;
    // NOP
label_22c0a0:
    // 0x22c0a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22c0a4:
    // 0x22c0a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22c0a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c0a8:
    // 0x22c0a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22c0ac:
    // 0x22c0ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c0b0:
    // 0x22c0b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c0b4:
    // 0x22c0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c0b8:
    // 0x22c0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c0bc:
    // 0x22c0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c0c0:
    // 0x22c0c0: 0x8f8c85d0  lw          $t4, -0x7A30($gp)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22c0c4:
    // 0x22c0c4: 0x1180001d  beqz        $t4, . + 4 + (0x1D << 2)
label_22c0c8:
    if (ctx->pc == 0x22C0C8u) {
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0CCu;
        goto label_22c0cc;
    }
    ctx->pc = 0x22C0C4u;
    {
        const bool branch_taken_0x22c0c4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0c4) {
            ctx->pc = 0x22C13Cu;
            goto label_22c13c;
        }
    }
    ctx->pc = 0x22C0CCu;
label_22c0cc:
    // 0x22c0cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x22c0ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c0d0:
    // 0x22c0d0: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x22c0d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22c0d4:
    // 0x22c0d4: 0x2407008d  addiu       $a3, $zero, 0x8D
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_22c0d8:
    // 0x22c0d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22c0dc:
    // 0x22c0dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c0e0:
    // 0x22c0e0: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_22c0e4:
    // 0x22c0e4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x22c0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22c0e8:
    // 0x22c0e8: 0x91840094  lbu         $a0, 0x94($t4)
    ctx->pc = 0x22c0e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 148)));
label_22c0ec:
    // 0x22c0ec: 0x1489000f  bne         $a0, $t1, . + 4 + (0xF << 2)
label_22c0f0:
    if (ctx->pc == 0x22C0F0u) {
        ctx->pc = 0x22C0F4u;
        goto label_22c0f4;
    }
    ctx->pc = 0x22C0ECu;
    {
        const bool branch_taken_0x22c0ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x22c0ec) {
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C0F4u;
label_22c0f4:
    // 0x22c0f4: 0x91840096  lbu         $a0, 0x96($t4)
    ctx->pc = 0x22c0f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 150)));
label_22c0f8:
    // 0x22c0f8: 0x1488000c  bne         $a0, $t0, . + 4 + (0xC << 2)
label_22c0fc:
    if (ctx->pc == 0x22C0FCu) {
        ctx->pc = 0x22C100u;
        goto label_22c100;
    }
    ctx->pc = 0x22C0F8u;
    {
        const bool branch_taken_0x22c0f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x22c0f8) {
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C100u;
label_22c100:
    // 0x22c100: 0x9184009d  lbu         $a0, 0x9D($t4)
    ctx->pc = 0x22c100u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 157)));
label_22c104:
    // 0x22c104: 0x10870003  beq         $a0, $a3, . + 4 + (0x3 << 2)
label_22c108:
    if (ctx->pc == 0x22C108u) {
        ctx->pc = 0x22C10Cu;
        goto label_22c10c;
    }
    ctx->pc = 0x22C104u;
    {
        const bool branch_taken_0x22c104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x22c104) {
            ctx->pc = 0x22C114u;
            goto label_22c114;
        }
    }
    ctx->pc = 0x22C10Cu;
label_22c10c:
    // 0x22c10c: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
label_22c110:
    if (ctx->pc == 0x22C110u) {
        ctx->pc = 0x22C114u;
        goto label_22c114;
    }
    ctx->pc = 0x22C10Cu;
    {
        const bool branch_taken_0x22c10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x22c10c) {
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C114u;
label_22c114:
    // 0x22c114: 0x0  nop
    ctx->pc = 0x22c114u;
    // NOP
label_22c118:
    // 0x22c118: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_22c11c:
    // 0x22c11c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x22c11cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_22c120:
    // 0x22c120: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x22c120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
label_22c124:
    // 0x22c124: 0x11430005  beq         $t2, $v1, . + 4 + (0x5 << 2)
label_22c128:
    if (ctx->pc == 0x22C128u) {
        ctx->pc = 0x22C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C124u;
        // 0x22c128: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C12Cu;
        goto label_22c12c;
    }
    ctx->pc = 0x22C124u;
    {
        const bool branch_taken_0x22c124 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x22C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C124u;
        // 0x22c128: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c124) {
            ctx->pc = 0x22C13Cu;
            goto label_22c13c;
        }
    }
    ctx->pc = 0x22C12Cu;
label_22c12c:
    // 0x22c12c: 0x0  nop
    ctx->pc = 0x22c12cu;
    // NOP
label_22c130:
    // 0x22c130: 0x8d8c0084  lw          $t4, 0x84($t4)
    ctx->pc = 0x22c130u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 132)));
label_22c134:
    // 0x22c134: 0x1580ffec  bnez        $t4, . + 4 + (-0x14 << 2)
label_22c138:
    if (ctx->pc == 0x22C138u) {
        ctx->pc = 0x22C13Cu;
        goto label_22c13c;
    }
    ctx->pc = 0x22C134u;
    {
        const bool branch_taken_0x22c134 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c134) {
            ctx->pc = 0x22C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c0e8;
        }
    }
    ctx->pc = 0x22C13Cu;
label_22c13c:
    // 0x22c13c: 0x0  nop
    ctx->pc = 0x22c13cu;
    // NOP
label_22c140:
    // 0x22c140: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c144:
    // 0x22c144: 0x1543005a  bne         $t2, $v1, . + 4 + (0x5A << 2)
label_22c148:
    if (ctx->pc == 0x22C148u) {
        ctx->pc = 0x22C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C144u;
        // 0x22c148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C14Cu;
        goto label_22c14c;
    }
    ctx->pc = 0x22C144u;
    {
        const bool branch_taken_0x22c144 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x22C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C144u;
        // 0x22c148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c144) {
            ctx->pc = 0x22C2B0u;
            goto label_22c2b0;
        }
    }
    ctx->pc = 0x22C14Cu;
label_22c14c:
    // 0x22c14c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22c14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c150:
    // 0x22c150: 0xc0590dc  jal         func_164370
label_22c154:
    if (ctx->pc == 0x22C154u) {
        ctx->pc = 0x22C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C150u;
        // 0x22c154: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C158u;
        goto label_22c158;
    }
    ctx->pc = 0x22C150u;
    SET_GPR_U32(ctx, 31, 0x22C158u);
    ctx->pc = 0x22C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C150u;
    // 0x22c154: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x22C158u;
label_22c158:
    // 0x22c158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c15c:
    // 0x22c15c: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_22c160:
    if (ctx->pc == 0x22C160u) {
        ctx->pc = 0x22C164u;
        goto label_22c164;
    }
    ctx->pc = 0x22C15Cu;
    {
        const bool branch_taken_0x22c15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c15c) {
            ctx->pc = 0x22C2B0u;
            goto label_22c2b0;
        }
    }
    ctx->pc = 0x22C164u;
label_22c164:
    // 0x22c164: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_22c168:
    // 0x22c168: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22c16c:
    // 0x22c16c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22c170:
    // 0x22c170: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c174:
    // 0x22c174: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x22c174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22c178:
    // 0x22c178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c17c:
    // 0x22c17c: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c180:
    // 0x22c180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c184:
    // 0x22c184: 0x0  nop
    ctx->pc = 0x22c184u;
    // NOP
label_22c188:
    // 0x22c188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c18c:
    // 0x22c18c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c190:
    // 0x22c190: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c194:
    // 0x22c194: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22c198:
    // 0x22c198: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x22c198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_22c19c:
    // 0x22c19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1a0:
    // 0x22c1a0: 0x0  nop
    ctx->pc = 0x22c1a0u;
    // NOP
label_22c1a4:
    // 0x22c1a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1a8:
    // 0x22c1a8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x22c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22c1ac:
    // 0x22c1ac: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_22c1b0:
    // 0x22c1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1b4:
    // 0x22c1b4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x22c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_22c1b8:
    // 0x22c1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1bc:
    // 0x22c1bc: 0xc066d7a  jal         func_19B5E8
label_22c1c0:
    if (ctx->pc == 0x22C1C0u) {
        ctx->pc = 0x22C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1BCu;
        // 0x22c1c0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1C4u;
        goto label_22c1c4;
    }
    ctx->pc = 0x22C1BCu;
    SET_GPR_U32(ctx, 31, 0x22C1C4u);
    ctx->pc = 0x22C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C1BCu;
    // 0x22c1c0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22C1C4u;
label_22c1c4:
    // 0x22c1c4: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_22c1c8:
    // 0x22c1c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c1cc:
    // 0x22c1cc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c1d0:
    // 0x22c1d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c1d4:
    // 0x22c1d4: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c1d8:
    // 0x22c1d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c1dc:
    // 0x22c1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1e0:
    // 0x22c1e0: 0x0  nop
    ctx->pc = 0x22c1e0u;
    // NOP
label_22c1e4:
    // 0x22c1e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1e8:
    // 0x22c1e8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22c1ec:
    // 0x22c1ec: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_22c1f0:
    // 0x22c1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1f4:
    // 0x22c1f4: 0x0  nop
    ctx->pc = 0x22c1f4u;
    // NOP
label_22c1f8:
    // 0x22c1f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1fc:
    // 0x22c1fc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22c200:
    // 0x22c200: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_22c204:
    // 0x22c204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c208:
    // 0x22c208: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_22c20c:
    // 0x22c20c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c210:
    // 0x22c210: 0xc066d7a  jal         func_19B5E8
label_22c214:
    if (ctx->pc == 0x22C214u) {
        ctx->pc = 0x22C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C210u;
        // 0x22c214: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C218u;
        goto label_22c218;
    }
    ctx->pc = 0x22C210u;
    SET_GPR_U32(ctx, 31, 0x22C218u);
    ctx->pc = 0x22C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C210u;
    // 0x22c214: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22C218u;
label_22c218:
    // 0x22c218: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c21c:
    // 0x22c21c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x22c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c220:
    // 0x22c220: 0xc066e08  jal         func_19B820
label_22c224:
    if (ctx->pc == 0x22C224u) {
        ctx->pc = 0x22C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C220u;
        // 0x22c224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C228u;
        goto label_22c228;
    }
    ctx->pc = 0x22C220u;
    SET_GPR_U32(ctx, 31, 0x22C228u);
    ctx->pc = 0x22C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C220u;
    // 0x22c224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x22C228u;
label_22c228:
    // 0x22c228: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c22c:
    // 0x22c22c: 0xc066daa  jal         func_19B6A8
label_22c230:
    if (ctx->pc == 0x22C230u) {
        ctx->pc = 0x22C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C22Cu;
        // 0x22c230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C234u;
        goto label_22c234;
    }
    ctx->pc = 0x22C22Cu;
    SET_GPR_U32(ctx, 31, 0x22C234u);
    ctx->pc = 0x22C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C22Cu;
    // 0x22c230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x22C234u;
label_22c234:
    // 0x22c234: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22c238:
    // 0x22c238: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c23c:
    // 0x22c23c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c240:
    // 0x22c240: 0xc066e14  jal         func_19B850
label_22c244:
    if (ctx->pc == 0x22C244u) {
        ctx->pc = 0x22C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C240u;
        // 0x22c244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C248u;
        goto label_22c248;
    }
    ctx->pc = 0x22C240u;
    SET_GPR_U32(ctx, 31, 0x22C248u);
    ctx->pc = 0x22C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C240u;
    // 0x22c244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x22C248u;
label_22c248:
    // 0x22c248: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_22c24c:
    // 0x22c24c: 0xc066e26  jal         func_19B898
label_22c250:
    if (ctx->pc == 0x22C250u) {
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C24Cu;
        // 0x22c250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C254u;
        goto label_22c254;
    }
    ctx->pc = 0x22C24Cu;
    SET_GPR_U32(ctx, 31, 0x22C254u);
    ctx->pc = 0x22C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C24Cu;
    // 0x22c250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_22c258:
    // 0x22c258: 0xc066e26  jal         func_19B898
label_22c25c:
    if (ctx->pc == 0x22C25Cu) {
        ctx->pc = 0x22C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C258u;
        // 0x22c25c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C260u;
        goto label_22c260;
    }
    ctx->pc = 0x22C258u;
    SET_GPR_U32(ctx, 31, 0x22C260u);
    ctx->pc = 0x22C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C258u;
    // 0x22c25c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C260u;
label_22c260:
    // 0x22c260: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_22c264:
    // 0x22c264: 0xc066e26  jal         func_19B898
label_22c268:
    if (ctx->pc == 0x22C268u) {
        ctx->pc = 0x22C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C264u;
        // 0x22c268: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C26Cu;
        goto label_22c26c;
    }
    ctx->pc = 0x22C264u;
    SET_GPR_U32(ctx, 31, 0x22C26Cu);
    ctx->pc = 0x22C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C264u;
    // 0x22c268: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C26Cu;
label_22c26c:
    // 0x22c26c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22c270:
    // 0x22c270: 0xc066e26  jal         func_19B898
label_22c274:
    if (ctx->pc == 0x22C274u) {
        ctx->pc = 0x22C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C270u;
        // 0x22c274: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C278u;
        goto label_22c278;
    }
    ctx->pc = 0x22C270u;
    SET_GPR_U32(ctx, 31, 0x22C278u);
    ctx->pc = 0x22C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C270u;
    // 0x22c274: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C278u;
label_22c278:
    // 0x22c278: 0xae13005c  sw          $s3, 0x5C($s0)
    ctx->pc = 0x22c278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 19));
label_22c27c:
    // 0x22c27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c280:
    // 0x22c280: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x22c280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_22c284:
    // 0x22c284: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22c284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_22c288:
    // 0x22c288: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x22c288u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_22c28c:
    // 0x22c28c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22c290:
    // 0x22c290: 0x2484c2d0  addiu       $a0, $a0, -0x3D30
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951632));
label_22c294:
    // 0x22c294: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x22c294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_22c298:
    // 0x22c298: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_22c29c:
    // 0x22c29c: 0xa6050016  sh          $a1, 0x16($s0)
    ctx->pc = 0x22c29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 5));
label_22c2a0:
    // 0x22c2a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x22c2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_22c2a4:
    // 0x22c2a4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22c2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_22c2a8:
    // 0x22c2a8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_22c2ac:
    if (ctx->pc == 0x22C2ACu) {
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2B0u;
        goto label_22c2b0;
    }
    ctx->pc = 0x22C2A8u;
    {
        const bool branch_taken_0x22c2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2a8) {
            ctx->pc = 0x22C150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c150;
        }
    }
    ctx->pc = 0x22C2B0u;
label_22c2b0:
    // 0x22c2b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22c2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22c2b4:
    // 0x22c2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c2b8:
    // 0x22c2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c2bc:
    // 0x22c2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c2c0:
    // 0x22c2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c2c4:
    // 0x22c2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c2c8:
    // 0x22c2c8: 0x3e00008  jr          $ra
label_22c2cc:
    if (ctx->pc == 0x22C2CCu) {
        ctx->pc = 0x22C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C8u;
        // 0x22c2cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2D0u;
        goto label_22c2d0;
    }
    ctx->pc = 0x22C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C8u;
        // 0x22c2cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C2D0u;
label_22c2d0:
    // 0x22c2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22c2d4:
    // 0x22c2d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22c2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22c2d8:
    // 0x22c2d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22c2dc:
    // 0x22c2dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c2e0:
    // 0x22c2e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c2e4:
    // 0x22c2e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22c2e8:
    // 0x22c2e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c2ec:
    // 0x22c2ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22c2f0:
    // 0x22c2f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22c2f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22c2f4:
    // 0x22c2f4: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x22c2f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22c2f8:
    // 0x22c2f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22c2fc:
    if (ctx->pc == 0x22C2FCu) {
        ctx->pc = 0x22C300u;
        goto label_22c300;
    }
    ctx->pc = 0x22C2F8u;
    {
        const bool branch_taken_0x22c2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c2f8) {
            ctx->pc = 0x22C308u;
            goto label_22c308;
        }
    }
    ctx->pc = 0x22C300u;
label_22c300:
    // 0x22c300: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_22c304:
    if (ctx->pc == 0x22C304u) {
        ctx->pc = 0x22C308u;
        goto label_22c308;
    }
    ctx->pc = 0x22C300u;
    {
        const bool branch_taken_0x22c300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c300) {
            ctx->pc = 0x22C318u;
            goto label_22c318;
        }
    }
    ctx->pc = 0x22C308u;
label_22c308:
    // 0x22c308: 0xc0591f4  jal         func_1647D0
label_22c30c:
    if (ctx->pc == 0x22C30Cu) {
        ctx->pc = 0x22C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C308u;
        // 0x22c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C310u;
        goto label_22c310;
    }
    ctx->pc = 0x22C308u;
    SET_GPR_U32(ctx, 31, 0x22C310u);
    ctx->pc = 0x22C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C308u;
    // 0x22c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x22C310u;
label_22c310:
    // 0x22c310: 0x1000007b  b           . + 4 + (0x7B << 2)
label_22c314:
    if (ctx->pc == 0x22C314u) {
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C310u;
        // 0x22c314: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C318u;
        goto label_22c318;
    }
    ctx->pc = 0x22C310u;
    {
        const bool branch_taken_0x22c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C310u;
        // 0x22c314: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c310) {
            ctx->pc = 0x22C500u;
            goto label_22c500;
        }
    }
    ctx->pc = 0x22C318u;
label_22c318:
    // 0x22c318: 0x96440012  lhu         $a0, 0x12($s2)
    ctx->pc = 0x22c318u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22c31c:
    // 0x22c31c: 0x8e51005c  lw          $s1, 0x5C($s2)
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c320:
    // 0x22c320: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22c324:
    // 0x22c324: 0xa6430012  sh          $v1, 0x12($s2)
    ctx->pc = 0x22c324u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
label_22c328:
    // 0x22c328: 0x96430016  lhu         $v1, 0x16($s2)
    ctx->pc = 0x22c328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_22c32c:
    // 0x22c32c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22c32cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c330:
    // 0x22c330: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_22c334:
    if (ctx->pc == 0x22C334u) {
        ctx->pc = 0x22C338u;
        goto label_22c338;
    }
    ctx->pc = 0x22C330u;
    {
        const bool branch_taken_0x22c330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c330) {
            ctx->pc = 0x22C4FCu;
            goto label_22c4fc;
        }
    }
    ctx->pc = 0x22C338u;
label_22c338:
    // 0x22c338: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x22c338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_22c33c:
    // 0x22c33c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_22c340:
    if (ctx->pc == 0x22C340u) {
        ctx->pc = 0x22C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C33Cu;
        // 0x22c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C344u;
        goto label_22c344;
    }
    ctx->pc = 0x22C33Cu;
    {
        const bool branch_taken_0x22c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C33Cu;
        // 0x22c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c33c) {
            ctx->pc = 0x22C4F4u;
            goto label_22c4f4;
        }
    }
    ctx->pc = 0x22C344u;
label_22c344:
    // 0x22c344: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22c348:
    // 0x22c348: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c34c:
    // 0x22c34c: 0xc066e02  jal         func_19B808
label_22c350:
    if (ctx->pc == 0x22C350u) {
        ctx->pc = 0x22C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C34Cu;
        // 0x22c350: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C354u;
        goto label_22c354;
    }
    ctx->pc = 0x22C34Cu;
    SET_GPR_U32(ctx, 31, 0x22C354u);
    ctx->pc = 0x22C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C34Cu;
    // 0x22c350: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C354u;
label_22c354:
    // 0x22c354: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22c358:
    // 0x22c358: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c35c:
    // 0x22c35c: 0xc066e02  jal         func_19B808
label_22c360:
    if (ctx->pc == 0x22C360u) {
        ctx->pc = 0x22C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C35Cu;
        // 0x22c360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C364u;
        goto label_22c364;
    }
    ctx->pc = 0x22C35Cu;
    SET_GPR_U32(ctx, 31, 0x22C364u);
    ctx->pc = 0x22C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C35Cu;
    // 0x22c360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C364u;
label_22c364:
    // 0x22c364: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22c368:
    // 0x22c368: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c36c:
    // 0x22c36c: 0xc066e02  jal         func_19B808
label_22c370:
    if (ctx->pc == 0x22C370u) {
        ctx->pc = 0x22C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C36Cu;
        // 0x22c370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C374u;
        goto label_22c374;
    }
    ctx->pc = 0x22C36Cu;
    SET_GPR_U32(ctx, 31, 0x22C374u);
    ctx->pc = 0x22C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C36Cu;
    // 0x22c370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C374u;
label_22c374:
    // 0x22c374: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x22c374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c378:
    // 0x22c378: 0x3c023f09  lui         $v0, 0x3F09
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
label_22c37c:
    // 0x22c37c: 0x34421870  ori         $v0, $v0, 0x1870
    ctx->pc = 0x22c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22c380:
    // 0x22c380: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22c384:
    // 0x22c384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c388:
    // 0x22c388: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22c38c:
    // 0x22c38c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22c390:
    // 0x22c390: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x22c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_22c394:
    // 0x22c394: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22c394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22c398:
    // 0x22c398: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x22c398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22c39c:
    // 0x22c39c: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22c39cu;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22c3a0:
    // 0x22c3a0: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22c3a0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22c3a4:
    // 0x22c3a4: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22c3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22c3a8:
    // 0x22c3a8: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22c3ac:
    // 0x22c3ac: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22c3b0:
    // 0x22c3b0: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22c3b4:
    // 0x22c3b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c3b8:
    // 0x22c3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c3bc:
    // 0x22c3bc: 0xc05f3d0  jal         func_17CF40
label_22c3c0:
    if (ctx->pc == 0x22C3C0u) {
        ctx->pc = 0x22C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3BCu;
        // 0x22c3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3C4u;
        goto label_22c3c4;
    }
    ctx->pc = 0x22C3BCu;
    SET_GPR_U32(ctx, 31, 0x22C3C4u);
    ctx->pc = 0x22C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3BCu;
    // 0x22c3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x22C3C4u;
label_22c3c4:
    // 0x22c3c4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x22c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c3c8:
    // 0x22c3c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_22c3cc:
    // 0x22c3cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22c3ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22c3d0:
    // 0x22c3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c3d4:
    // 0x22c3d4: 0x0  nop
    ctx->pc = 0x22c3d4u;
    // NOP
label_22c3d8:
    // 0x22c3d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c3dc:
    // 0x22c3dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22c3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c3e0:
    // 0x22c3e0: 0x0  nop
    ctx->pc = 0x22c3e0u;
    // NOP
label_22c3e4:
    // 0x22c3e4: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_22c3e8:
    if (ctx->pc == 0x22C3E8u) {
        ctx->pc = 0x22C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E4u;
        // 0x22c3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3ECu;
        goto label_22c3ec;
    }
    ctx->pc = 0x22C3E4u;
    {
        const bool branch_taken_0x22c3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E4u;
        // 0x22c3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3e4) {
            ctx->pc = 0x22C4F0u;
            goto label_22c4f0;
        }
    }
    ctx->pc = 0x22C3ECu;
label_22c3ec:
    // 0x22c3ec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22c3f0:
    if (ctx->pc == 0x22C3F0u) {
        ctx->pc = 0x22C3F4u;
        goto label_22c3f4;
    }
    ctx->pc = 0x22C3ECu;
    {
        const bool branch_taken_0x22c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3ec) {
            ctx->pc = 0x22C4DCu;
            goto label_22c4dc;
        }
    }
    ctx->pc = 0x22C3F4u;
label_22c3f4:
    // 0x22c3f4: 0xc08f0cc  jal         func_23C330
label_22c3f8:
    if (ctx->pc == 0x22C3F8u) {
        ctx->pc = 0x22C3FCu;
        goto label_22c3fc;
    }
    ctx->pc = 0x22C3F4u;
    SET_GPR_U32(ctx, 31, 0x22C3FCu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C3FCu;
label_22c3fc:
    // 0x22c3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c400:
    // 0x22c400: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22c404:
    // 0x22c404: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22c404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22c408:
    // 0x22c408: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22c40c:
    // 0x22c40c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c410:
    // 0x22c410: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x22c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c414:
    // 0x22c414: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22c414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22c418:
    // 0x22c418: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_22c41c:
    // 0x22c41c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22c41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c420:
    // 0x22c420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c424:
    // 0x22c424: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22c424u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22c428:
    // 0x22c428: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22c428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22c42c:
    // 0x22c42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c430:
    // 0x22c430: 0xc08f0cc  jal         func_23C330
label_22c434:
    if (ctx->pc == 0x22C434u) {
        ctx->pc = 0x22C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C430u;
        // 0x22c434: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C438u;
        goto label_22c438;
    }
    ctx->pc = 0x22C430u;
    SET_GPR_U32(ctx, 31, 0x22C438u);
    ctx->pc = 0x22C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C430u;
    // 0x22c434: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C438u;
label_22c438:
    // 0x22c438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c43c:
    // 0x22c43c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22c440:
    // 0x22c440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22c444:
    // 0x22c444: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_22c448:
    // 0x22c448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c44c:
    // 0x22c44c: 0x0  nop
    ctx->pc = 0x22c44cu;
    // NOP
label_22c450:
    // 0x22c450: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22c450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c454:
    // 0x22c454: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_22c458:
    // 0x22c458: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_22c45c:
    // 0x22c45c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c460:
    // 0x22c460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c464:
    // 0x22c464: 0x0  nop
    ctx->pc = 0x22c464u;
    // NOP
label_22c468:
    // 0x22c468: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22c468u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22c46c:
    // 0x22c46c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22c46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c470:
    // 0x22c470: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22c470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_22c474:
    // 0x22c474: 0xc08f0cc  jal         func_23C330
label_22c478:
    if (ctx->pc == 0x22C478u) {
        ctx->pc = 0x22C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C474u;
        // 0x22c478: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C47Cu;
        goto label_22c47c;
    }
    ctx->pc = 0x22C474u;
    SET_GPR_U32(ctx, 31, 0x22C47Cu);
    ctx->pc = 0x22C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C474u;
    // 0x22c478: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C47Cu;
label_22c47c:
    // 0x22c47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c480:
    // 0x22c480: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x22c480u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_22c484:
    // 0x22c484: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x22c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
label_22c488:
    // 0x22c488: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22c48c:
    // 0x22c48c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22c48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22c490:
    // 0x22c490: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22c494:
    // 0x22c494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c498:
    // 0x22c498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c49c:
    // 0x22c49c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22c49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c4a0:
    // 0x22c4a0: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22c4a4:
    // 0x22c4a4: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22c4a8:
    // 0x22c4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c4ac:
    // 0x22c4ac: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x22c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c4b0:
    // 0x22c4b0: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22c4b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22c4b4:
    // 0x22c4b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c4b8:
    // 0x22c4b8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x22c4b8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c4bc:
    // 0x22c4bc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22c4c0:
    // 0x22c4c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c4c4:
    // 0x22c4c4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22c4c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22c4c8:
    // 0x22c4c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22c4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22c4cc:
    // 0x22c4cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c4d0:
    // 0x22c4d0: 0xc04bc90  jal         func_12F240
label_22c4d4:
    if (ctx->pc == 0x22C4D4u) {
        ctx->pc = 0x22C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D0u;
        // 0x22c4d4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4D8u;
        goto label_22c4d8;
    }
    ctx->pc = 0x22C4D0u;
    SET_GPR_U32(ctx, 31, 0x22C4D8u);
    ctx->pc = 0x22C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4D0u;
    // 0x22c4d4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22C4D0u, 0x22C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4D8u;
label_22c4d8:
    // 0x22c4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22c4dc:
    // 0x22c4dc: 0x0  nop
    ctx->pc = 0x22c4dcu;
    // NOP
label_22c4e0:
    // 0x22c4e0: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x22c4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_22c4e4:
    // 0x22c4e4: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_22c4e8:
    if (ctx->pc == 0x22C4E8u) {
        ctx->pc = 0x22C4ECu;
        goto label_22c4ec;
    }
    ctx->pc = 0x22C4E4u;
    {
        const bool branch_taken_0x22c4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c4e4) {
            ctx->pc = 0x22C3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c3f4;
        }
    }
    ctx->pc = 0x22C4ECu;
label_22c4ec:
    // 0x22c4ec: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x22c4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
label_22c4f0:
    // 0x22c4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c4f4:
    // 0x22c4f4: 0xc05ff64  jal         func_17FD90
label_22c4f8:
    if (ctx->pc == 0x22C4F8u) {
        ctx->pc = 0x22C4FCu;
        goto label_22c4fc;
    }
    ctx->pc = 0x22C4F4u;
    SET_GPR_U32(ctx, 31, 0x22C4FCu);
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x22C4FCu;
label_22c4fc:
    // 0x22c4fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22c500:
    // 0x22c500: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c504:
    // 0x22c504: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c508:
    // 0x22c508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c50c:
    // 0x22c50c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c510:
    // 0x22c510: 0x3e00008  jr          $ra
label_22c514:
    if (ctx->pc == 0x22C514u) {
        ctx->pc = 0x22C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C510u;
        // 0x22c514: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C518u;
        goto label_22c518;
    }
    ctx->pc = 0x22C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C510u;
        // 0x22c514: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C518u;
label_22c518:
    // 0x22c518: 0x0  nop
    ctx->pc = 0x22c518u;
    // NOP
label_22c51c:
    // 0x22c51c: 0x0  nop
    ctx->pc = 0x22c51cu;
    // NOP
label_22c520:
    // 0x22c520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_22c524:
    // 0x22c524: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c528:
    // 0x22c528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22c52c:
    // 0x22c52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c530:
    // 0x22c530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c534:
    // 0x22c534: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c538:
    // 0x22c538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c53c:
    // 0x22c53c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c540:
    // 0x22c540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c544:
    // 0x22c544: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x22c544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_22c548:
    // 0x22c548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c54c:
    // 0x22c54c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c550:
    // 0x22c550: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x22c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22c554:
    // 0x22c554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22c554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c558:
    // 0x22c558: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x22c558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_22c55c:
    // 0x22c55c: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_22c560:
    if (ctx->pc == 0x22C560u) {
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C564u;
        goto label_22c564;
    }
    ctx->pc = 0x22C55Cu;
    {
        const bool branch_taken_0x22c55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c55c) {
            ctx->pc = 0x22C6ECu;
            { ctx->pc = 0x22c6ec; return; }
        }
    }
    ctx->pc = 0x22C564u;
label_22c564:
    // 0x22c564: 0xc0590dc  jal         func_164370
label_22c568:
    if (ctx->pc == 0x22C568u) {
        ctx->pc = 0x22C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C564u;
        // 0x22c568: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C56Cu;
        goto label_22c56c;
    }
    ctx->pc = 0x22C564u;
    SET_GPR_U32(ctx, 31, 0x22C56Cu);
    ctx->pc = 0x22C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C564u;
    // 0x22c568: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x22C56Cu;
label_22c56c:
    // 0x22c56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c570:
    // 0x22c570: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
label_22c574:
    if (ctx->pc == 0x22C574u) {
        ctx->pc = 0x22C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C570u;
        // 0x22c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C578u;
        goto label_22c578;
    }
    ctx->pc = 0x22C570u;
    {
        const bool branch_taken_0x22c570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C570u;
        // 0x22c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c570) {
            ctx->pc = 0x22C6ECu;
            { ctx->pc = 0x22c6ec; return; }
        }
    }
    ctx->pc = 0x22C578u;
label_22c578:
    // 0x22c578: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c57c:
    // 0x22c57c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c580:
    // 0x22c580: 0xc08b1c8  jal         func_22C720
label_22c584:
    if (ctx->pc == 0x22C584u) {
        ctx->pc = 0x22C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C580u;
        // 0x22c584: 0xa6140014  sh          $s4, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C588u;
        goto label_22c588;
    }
    ctx->pc = 0x22C580u;
    SET_GPR_U32(ctx, 31, 0x22C588u);
    ctx->pc = 0x22C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C580u;
    // 0x22c584: 0xa6140014  sh          $s4, 0x14($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C720u;
    { ctx->pc = 0x22c720; return; }
    ctx->pc = 0x22C588u;
label_22c588:
    // 0x22c588: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22c58c:
    // 0x22c58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c590:
    if (ctx->pc == 0x22C590u) {
        ctx->pc = 0x22C594u;
        goto label_22c594;
    }
    ctx->pc = 0x22C58Cu;
    {
        const bool branch_taken_0x22c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c58c) {
            ctx->pc = 0x22C5A0u;
            goto label_22c5a0;
        }
    }
    ctx->pc = 0x22C594u;
label_22c594:
    // 0x22c594: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_22c598:
    // 0x22c598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22c59c:
    if (ctx->pc == 0x22C59Cu) {
        ctx->pc = 0x22C5A0u;
        goto label_22c5a0;
    }
    ctx->pc = 0x22C598u;
    {
        const bool branch_taken_0x22c598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c598) {
            ctx->pc = 0x22C5B0u;
            goto label_22c5b0;
        }
    }
    ctx->pc = 0x22C5A0u;
label_22c5a0:
    // 0x22c5a0: 0xc0591f4  jal         func_1647D0
label_22c5a4:
    if (ctx->pc == 0x22C5A4u) {
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A8u;
        goto label_22c5a8;
    }
    ctx->pc = 0x22C5A0u;
    SET_GPR_U32(ctx, 31, 0x22C5A8u);
    ctx->pc = 0x22C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5A0u;
    // 0x22c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x10000050  b           . + 4 + (0x50 << 2)
label_22c5ac:
    if (ctx->pc == 0x22C5ACu) {
        ctx->pc = 0x22C5B0u;
        goto label_22c5b0;
    }
    ctx->pc = 0x22C5A8u;
    {
        const bool branch_taken_0x22c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c5a8) {
            ctx->pc = 0x22C6ECu;
            { ctx->pc = 0x22c6ec; return; }
        }
    }
    ctx->pc = 0x22C5B0u;
label_22c5b0:
    // 0x22c5b0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22c5b4:
    // 0x22c5b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c5b8:
    // 0x22c5b8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c5bc:
    // 0x22c5bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c5c0:
    // 0x22c5c0: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c5c4:
    // 0x22c5c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c5c8:
    // 0x22c5c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5cc:
    // 0x22c5cc: 0x0  nop
    ctx->pc = 0x22c5ccu;
    // NOP
label_22c5d0:
    // 0x22c5d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5d4:
    // 0x22c5d4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x22c5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_22c5d8:
    // 0x22c5d8: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_22c5dc:
    // 0x22c5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5e0:
    // 0x22c5e0: 0x0  nop
    ctx->pc = 0x22c5e0u;
    // NOP
label_22c5e4:
    // 0x22c5e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5e8:
    // 0x22c5e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_22c5ec:
    // 0x22c5ec: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x22c5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22c5f0:
    // 0x22c5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5f4:
    // 0x22c5f4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x22c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_22c5f8:
    // 0x22c5f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5fc:
    // 0x22c5fc: 0xc066d7a  jal         func_19B5E8
label_22c600:
    if (ctx->pc == 0x22C600u) {
        ctx->pc = 0x22C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5FCu;
        // 0x22c600: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C604u;
        goto label_22c604;
    }
    ctx->pc = 0x22C5FCu;
    SET_GPR_U32(ctx, 31, 0x22C604u);
    ctx->pc = 0x22C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5FCu;
    // 0x22c600: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22C604u;
label_22c604:
    // 0x22c604: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x22c604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_22c608:
    // 0x22c608: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c60c:
    // 0x22c60c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c610:
    // 0x22c610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c614:
    // 0x22c614: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c618:
    // 0x22c618: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c61c:
    // 0x22c61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c620:
    // 0x22c620: 0x0  nop
    ctx->pc = 0x22c620u;
    // NOP
label_22c624:
    // 0x22c624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c628:
    // 0x22c628: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_22c62c:
    // 0x22c62c: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x22c62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_22c630:
    // 0x22c630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c634:
    // 0x22c634: 0x0  nop
    ctx->pc = 0x22c634u;
    // NOP
label_22c638:
    // 0x22c638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c63c:
    // 0x22c63c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22c640:
    // 0x22c640: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_22c644:
    // 0x22c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c648:
    // 0x22c648: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x22c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_22c64c:
    // 0x22c64c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c650:
    // 0x22c650: 0xc066d7a  jal         func_19B5E8
label_22c654:
    if (ctx->pc == 0x22C654u) {
        ctx->pc = 0x22C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C650u;
        // 0x22c654: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C658u;
        goto label_22c658;
    }
    ctx->pc = 0x22C650u;
    SET_GPR_U32(ctx, 31, 0x22C658u);
    ctx->pc = 0x22C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C650u;
    // 0x22c654: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x22C658u;
label_22c658:
    // 0x22c658: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c65c:
    // 0x22c65c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x22c65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c660:
    // 0x22c660: 0xc066e08  jal         func_19B820
label_22c664:
    if (ctx->pc == 0x22C664u) {
        ctx->pc = 0x22C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C660u;
        // 0x22c664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C668u;
        goto label_22c668;
    }
    ctx->pc = 0x22C660u;
    SET_GPR_U32(ctx, 31, 0x22C668u);
    ctx->pc = 0x22C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C660u;
    // 0x22c664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x22C668u;
label_22c668:
    // 0x22c668: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c66c:
    // 0x22c66c: 0xc066daa  jal         func_19B6A8
label_22c670:
    if (ctx->pc == 0x22C670u) {
        ctx->pc = 0x22C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C66Cu;
        // 0x22c670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C674u;
        goto label_22c674;
    }
    ctx->pc = 0x22C66Cu;
    SET_GPR_U32(ctx, 31, 0x22C674u);
    ctx->pc = 0x22C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C66Cu;
    // 0x22c670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x22C674u;
label_22c674:
    // 0x22c674: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22c678:
    // 0x22c678: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c67c:
    // 0x22c67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x22c680u;
    return;
}

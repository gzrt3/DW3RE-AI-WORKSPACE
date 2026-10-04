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


void FUN_0014eba0_part28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15be90u: goto label_15be90;
        case 0x15be94u: goto label_15be94;
        case 0x15be98u: goto label_15be98;
        case 0x15be9cu: goto label_15be9c;
        case 0x15bea0u: goto label_15bea0;
        case 0x15bea4u: goto label_15bea4;
        case 0x15bea8u: goto label_15bea8;
        case 0x15beacu: goto label_15beac;
        case 0x15beb0u: goto label_15beb0;
        case 0x15beb4u: goto label_15beb4;
        case 0x15beb8u: goto label_15beb8;
        case 0x15bebcu: goto label_15bebc;
        case 0x15bec0u: goto label_15bec0;
        case 0x15bec4u: goto label_15bec4;
        case 0x15bec8u: goto label_15bec8;
        case 0x15beccu: goto label_15becc;
        case 0x15bed0u: goto label_15bed0;
        case 0x15bed4u: goto label_15bed4;
        case 0x15bed8u: goto label_15bed8;
        case 0x15bedcu: goto label_15bedc;
        case 0x15bee0u: goto label_15bee0;
        case 0x15bee4u: goto label_15bee4;
        case 0x15bee8u: goto label_15bee8;
        case 0x15beecu: goto label_15beec;
        case 0x15bef0u: goto label_15bef0;
        case 0x15bef4u: goto label_15bef4;
        case 0x15bef8u: goto label_15bef8;
        case 0x15befcu: goto label_15befc;
        case 0x15bf00u: goto label_15bf00;
        case 0x15bf04u: goto label_15bf04;
        case 0x15bf08u: goto label_15bf08;
        case 0x15bf0cu: goto label_15bf0c;
        case 0x15bf10u: goto label_15bf10;
        case 0x15bf14u: goto label_15bf14;
        case 0x15bf18u: goto label_15bf18;
        case 0x15bf1cu: goto label_15bf1c;
        case 0x15bf20u: goto label_15bf20;
        case 0x15bf24u: goto label_15bf24;
        case 0x15bf28u: goto label_15bf28;
        case 0x15bf2cu: goto label_15bf2c;
        case 0x15bf30u: goto label_15bf30;
        case 0x15bf34u: goto label_15bf34;
        case 0x15bf38u: goto label_15bf38;
        case 0x15bf3cu: goto label_15bf3c;
        case 0x15bf40u: goto label_15bf40;
        case 0x15bf44u: goto label_15bf44;
        case 0x15bf48u: goto label_15bf48;
        case 0x15bf4cu: goto label_15bf4c;
        case 0x15bf50u: goto label_15bf50;
        case 0x15bf54u: goto label_15bf54;
        case 0x15bf58u: goto label_15bf58;
        case 0x15bf5cu: goto label_15bf5c;
        case 0x15bf60u: goto label_15bf60;
        case 0x15bf64u: goto label_15bf64;
        case 0x15bf68u: goto label_15bf68;
        case 0x15bf6cu: goto label_15bf6c;
        case 0x15bf70u: goto label_15bf70;
        case 0x15bf74u: goto label_15bf74;
        case 0x15bf78u: goto label_15bf78;
        case 0x15bf7cu: goto label_15bf7c;
        case 0x15bf80u: goto label_15bf80;
        case 0x15bf84u: goto label_15bf84;
        case 0x15bf88u: goto label_15bf88;
        case 0x15bf8cu: goto label_15bf8c;
        case 0x15bf90u: goto label_15bf90;
        case 0x15bf94u: goto label_15bf94;
        case 0x15bf98u: goto label_15bf98;
        case 0x15bf9cu: goto label_15bf9c;
        case 0x15bfa0u: goto label_15bfa0;
        case 0x15bfa4u: goto label_15bfa4;
        case 0x15bfa8u: goto label_15bfa8;
        case 0x15bfacu: goto label_15bfac;
        case 0x15bfb0u: goto label_15bfb0;
        case 0x15bfb4u: goto label_15bfb4;
        case 0x15bfb8u: goto label_15bfb8;
        case 0x15bfbcu: goto label_15bfbc;
        case 0x15bfc0u: goto label_15bfc0;
        case 0x15bfc4u: goto label_15bfc4;
        case 0x15bfc8u: goto label_15bfc8;
        case 0x15bfccu: goto label_15bfcc;
        case 0x15bfd0u: goto label_15bfd0;
        case 0x15bfd4u: goto label_15bfd4;
        case 0x15bfd8u: goto label_15bfd8;
        case 0x15bfdcu: goto label_15bfdc;
        case 0x15bfe0u: goto label_15bfe0;
        case 0x15bfe4u: goto label_15bfe4;
        case 0x15bfe8u: goto label_15bfe8;
        case 0x15bfecu: goto label_15bfec;
        case 0x15bff0u: goto label_15bff0;
        case 0x15bff4u: goto label_15bff4;
        case 0x15bff8u: goto label_15bff8;
        case 0x15bffcu: goto label_15bffc;
        case 0x15c000u: goto label_15c000;
        case 0x15c004u: goto label_15c004;
        case 0x15c008u: goto label_15c008;
        case 0x15c00cu: goto label_15c00c;
        case 0x15c010u: goto label_15c010;
        case 0x15c014u: goto label_15c014;
        case 0x15c018u: goto label_15c018;
        case 0x15c01cu: goto label_15c01c;
        case 0x15c020u: goto label_15c020;
        case 0x15c024u: goto label_15c024;
        case 0x15c028u: goto label_15c028;
        case 0x15c02cu: goto label_15c02c;
        case 0x15c030u: goto label_15c030;
        case 0x15c034u: goto label_15c034;
        case 0x15c038u: goto label_15c038;
        case 0x15c03cu: goto label_15c03c;
        case 0x15c040u: goto label_15c040;
        case 0x15c044u: goto label_15c044;
        case 0x15c048u: goto label_15c048;
        case 0x15c04cu: goto label_15c04c;
        case 0x15c050u: goto label_15c050;
        case 0x15c054u: goto label_15c054;
        case 0x15c058u: goto label_15c058;
        case 0x15c05cu: goto label_15c05c;
        case 0x15c060u: goto label_15c060;
        case 0x15c064u: goto label_15c064;
        case 0x15c068u: goto label_15c068;
        case 0x15c06cu: goto label_15c06c;
        case 0x15c070u: goto label_15c070;
        case 0x15c074u: goto label_15c074;
        case 0x15c078u: goto label_15c078;
        case 0x15c07cu: goto label_15c07c;
        case 0x15c080u: goto label_15c080;
        case 0x15c084u: goto label_15c084;
        case 0x15c088u: goto label_15c088;
        case 0x15c08cu: goto label_15c08c;
        case 0x15c090u: goto label_15c090;
        case 0x15c094u: goto label_15c094;
        case 0x15c098u: goto label_15c098;
        case 0x15c09cu: goto label_15c09c;
        case 0x15c0a0u: goto label_15c0a0;
        case 0x15c0a4u: goto label_15c0a4;
        case 0x15c0a8u: goto label_15c0a8;
        case 0x15c0acu: goto label_15c0ac;
        case 0x15c0b0u: goto label_15c0b0;
        case 0x15c0b4u: goto label_15c0b4;
        case 0x15c0b8u: goto label_15c0b8;
        case 0x15c0bcu: goto label_15c0bc;
        case 0x15c0c0u: goto label_15c0c0;
        case 0x15c0c4u: goto label_15c0c4;
        case 0x15c0c8u: goto label_15c0c8;
        case 0x15c0ccu: goto label_15c0cc;
        case 0x15c0d0u: goto label_15c0d0;
        case 0x15c0d4u: goto label_15c0d4;
        case 0x15c0d8u: goto label_15c0d8;
        case 0x15c0dcu: goto label_15c0dc;
        case 0x15c0e0u: goto label_15c0e0;
        case 0x15c0e4u: goto label_15c0e4;
        case 0x15c0e8u: goto label_15c0e8;
        case 0x15c0ecu: goto label_15c0ec;
        case 0x15c0f0u: goto label_15c0f0;
        case 0x15c0f4u: goto label_15c0f4;
        case 0x15c0f8u: goto label_15c0f8;
        case 0x15c0fcu: goto label_15c0fc;
        case 0x15c100u: goto label_15c100;
        case 0x15c104u: goto label_15c104;
        case 0x15c108u: goto label_15c108;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c110u: goto label_15c110;
        case 0x15c114u: goto label_15c114;
        case 0x15c118u: goto label_15c118;
        case 0x15c11cu: goto label_15c11c;
        case 0x15c120u: goto label_15c120;
        case 0x15c124u: goto label_15c124;
        case 0x15c128u: goto label_15c128;
        case 0x15c12cu: goto label_15c12c;
        case 0x15c130u: goto label_15c130;
        case 0x15c134u: goto label_15c134;
        case 0x15c138u: goto label_15c138;
        case 0x15c13cu: goto label_15c13c;
        case 0x15c140u: goto label_15c140;
        case 0x15c144u: goto label_15c144;
        case 0x15c148u: goto label_15c148;
        case 0x15c14cu: goto label_15c14c;
        case 0x15c150u: goto label_15c150;
        case 0x15c154u: goto label_15c154;
        case 0x15c158u: goto label_15c158;
        case 0x15c15cu: goto label_15c15c;
        case 0x15c160u: goto label_15c160;
        case 0x15c164u: goto label_15c164;
        case 0x15c168u: goto label_15c168;
        case 0x15c16cu: goto label_15c16c;
        case 0x15c170u: goto label_15c170;
        case 0x15c174u: goto label_15c174;
        case 0x15c178u: goto label_15c178;
        case 0x15c17cu: goto label_15c17c;
        case 0x15c180u: goto label_15c180;
        case 0x15c184u: goto label_15c184;
        case 0x15c188u: goto label_15c188;
        case 0x15c18cu: goto label_15c18c;
        case 0x15c190u: goto label_15c190;
        case 0x15c194u: goto label_15c194;
        case 0x15c198u: goto label_15c198;
        case 0x15c19cu: goto label_15c19c;
        case 0x15c1a0u: goto label_15c1a0;
        case 0x15c1a4u: goto label_15c1a4;
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1acu: goto label_15c1ac;
        case 0x15c1b0u: goto label_15c1b0;
        case 0x15c1b4u: goto label_15c1b4;
        case 0x15c1b8u: goto label_15c1b8;
        case 0x15c1bcu: goto label_15c1bc;
        case 0x15c1c0u: goto label_15c1c0;
        case 0x15c1c4u: goto label_15c1c4;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1ccu: goto label_15c1cc;
        case 0x15c1d0u: goto label_15c1d0;
        case 0x15c1d4u: goto label_15c1d4;
        case 0x15c1d8u: goto label_15c1d8;
        case 0x15c1dcu: goto label_15c1dc;
        case 0x15c1e0u: goto label_15c1e0;
        case 0x15c1e4u: goto label_15c1e4;
        case 0x15c1e8u: goto label_15c1e8;
        case 0x15c1ecu: goto label_15c1ec;
        case 0x15c1f0u: goto label_15c1f0;
        case 0x15c1f4u: goto label_15c1f4;
        case 0x15c1f8u: goto label_15c1f8;
        case 0x15c1fcu: goto label_15c1fc;
        case 0x15c200u: goto label_15c200;
        case 0x15c204u: goto label_15c204;
        case 0x15c208u: goto label_15c208;
        case 0x15c20cu: goto label_15c20c;
        case 0x15c210u: goto label_15c210;
        case 0x15c214u: goto label_15c214;
        case 0x15c218u: goto label_15c218;
        case 0x15c21cu: goto label_15c21c;
        case 0x15c220u: goto label_15c220;
        case 0x15c224u: goto label_15c224;
        case 0x15c228u: goto label_15c228;
        case 0x15c22cu: goto label_15c22c;
        case 0x15c230u: goto label_15c230;
        case 0x15c234u: goto label_15c234;
        case 0x15c238u: goto label_15c238;
        case 0x15c23cu: goto label_15c23c;
        case 0x15c240u: goto label_15c240;
        case 0x15c244u: goto label_15c244;
        case 0x15c248u: goto label_15c248;
        case 0x15c24cu: goto label_15c24c;
        case 0x15c250u: goto label_15c250;
        case 0x15c254u: goto label_15c254;
        case 0x15c258u: goto label_15c258;
        case 0x15c25cu: goto label_15c25c;
        case 0x15c260u: goto label_15c260;
        case 0x15c264u: goto label_15c264;
        case 0x15c268u: goto label_15c268;
        case 0x15c26cu: goto label_15c26c;
        case 0x15c270u: goto label_15c270;
        case 0x15c274u: goto label_15c274;
        case 0x15c278u: goto label_15c278;
        case 0x15c27cu: goto label_15c27c;
        case 0x15c280u: goto label_15c280;
        case 0x15c284u: goto label_15c284;
        case 0x15c288u: goto label_15c288;
        case 0x15c28cu: goto label_15c28c;
        case 0x15c290u: goto label_15c290;
        case 0x15c294u: goto label_15c294;
        case 0x15c298u: goto label_15c298;
        case 0x15c29cu: goto label_15c29c;
        case 0x15c2a0u: goto label_15c2a0;
        case 0x15c2a4u: goto label_15c2a4;
        case 0x15c2a8u: goto label_15c2a8;
        case 0x15c2acu: goto label_15c2ac;
        case 0x15c2b0u: goto label_15c2b0;
        case 0x15c2b4u: goto label_15c2b4;
        case 0x15c2b8u: goto label_15c2b8;
        case 0x15c2bcu: goto label_15c2bc;
        case 0x15c2c0u: goto label_15c2c0;
        case 0x15c2c4u: goto label_15c2c4;
        case 0x15c2c8u: goto label_15c2c8;
        case 0x15c2ccu: goto label_15c2cc;
        case 0x15c2d0u: goto label_15c2d0;
        case 0x15c2d4u: goto label_15c2d4;
        case 0x15c2d8u: goto label_15c2d8;
        case 0x15c2dcu: goto label_15c2dc;
        case 0x15c2e0u: goto label_15c2e0;
        case 0x15c2e4u: goto label_15c2e4;
        case 0x15c2e8u: goto label_15c2e8;
        case 0x15c2ecu: goto label_15c2ec;
        case 0x15c2f0u: goto label_15c2f0;
        case 0x15c2f4u: goto label_15c2f4;
        case 0x15c2f8u: goto label_15c2f8;
        case 0x15c2fcu: goto label_15c2fc;
        case 0x15c300u: goto label_15c300;
        case 0x15c304u: goto label_15c304;
        case 0x15c308u: goto label_15c308;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c310u: goto label_15c310;
        case 0x15c314u: goto label_15c314;
        case 0x15c318u: goto label_15c318;
        case 0x15c31cu: goto label_15c31c;
        case 0x15c320u: goto label_15c320;
        case 0x15c324u: goto label_15c324;
        case 0x15c328u: goto label_15c328;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c330u: goto label_15c330;
        case 0x15c334u: goto label_15c334;
        case 0x15c338u: goto label_15c338;
        case 0x15c33cu: goto label_15c33c;
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c400u: goto label_15c400;
        case 0x15c404u: goto label_15c404;
        case 0x15c408u: goto label_15c408;
        case 0x15c40cu: goto label_15c40c;
        case 0x15c410u: goto label_15c410;
        case 0x15c414u: goto label_15c414;
        case 0x15c418u: goto label_15c418;
        case 0x15c41cu: goto label_15c41c;
        case 0x15c420u: goto label_15c420;
        case 0x15c424u: goto label_15c424;
        case 0x15c428u: goto label_15c428;
        case 0x15c42cu: goto label_15c42c;
        case 0x15c430u: goto label_15c430;
        case 0x15c434u: goto label_15c434;
        case 0x15c438u: goto label_15c438;
        case 0x15c43cu: goto label_15c43c;
        case 0x15c440u: goto label_15c440;
        case 0x15c444u: goto label_15c444;
        case 0x15c448u: goto label_15c448;
        case 0x15c44cu: goto label_15c44c;
        case 0x15c450u: goto label_15c450;
        case 0x15c454u: goto label_15c454;
        case 0x15c458u: goto label_15c458;
        case 0x15c45cu: goto label_15c45c;
        case 0x15c460u: goto label_15c460;
        case 0x15c464u: goto label_15c464;
        case 0x15c468u: goto label_15c468;
        case 0x15c46cu: goto label_15c46c;
        case 0x15c470u: goto label_15c470;
        case 0x15c474u: goto label_15c474;
        case 0x15c478u: goto label_15c478;
        case 0x15c47cu: goto label_15c47c;
        case 0x15c480u: goto label_15c480;
        case 0x15c484u: goto label_15c484;
        case 0x15c488u: goto label_15c488;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c490u: goto label_15c490;
        case 0x15c494u: goto label_15c494;
        case 0x15c498u: goto label_15c498;
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4a0u: goto label_15c4a0;
        case 0x15c4a4u: goto label_15c4a4;
        case 0x15c4a8u: goto label_15c4a8;
        case 0x15c4acu: goto label_15c4ac;
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        default: return;
    }

label_15be90:
    // 0x15be90: 0x1660ffd2  bnez        $s3, . + 4 + (-0x2E << 2)
label_15be94:
    if (ctx->pc == 0x15BE94u) {
        ctx->pc = 0x15BE98u;
        goto label_15be98;
    }
    ctx->pc = 0x15BE90u;
    {
        const bool branch_taken_0x15be90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x15be90) {
            ctx->pc = 0x15BDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15bddc; return; }
        }
    }
    ctx->pc = 0x15BE98u;
label_15be98:
    // 0x15be98: 0x92440066  lbu         $a0, 0x66($s2)
    ctx->pc = 0x15be98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
label_15be9c:
    // 0x15be9c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15bea0:
    // 0x15bea0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bea4:
    // 0x15bea4: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x15bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_15bea8:
    // 0x15bea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15beac:
    // 0x15beac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15beacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15beb0:
    // 0x15beb0: 0xa243006a  sb          $v1, 0x6A($s2)
    ctx->pc = 0x15beb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 3));
label_15beb4:
    // 0x15beb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15beb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15beb8:
    // 0x15beb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15beb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15bebc:
    // 0x15bebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15bec0:
    // 0x15bec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bec4:
    // 0x15bec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15bec8:
    // 0x15bec8: 0x3e00008  jr          $ra
label_15becc:
    if (ctx->pc == 0x15BECCu) {
        ctx->pc = 0x15BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEC8u;
        // 0x15becc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BED0u;
        goto label_15bed0;
    }
    ctx->pc = 0x15BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEC8u;
        // 0x15becc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BED0u;
label_15bed0:
    // 0x15bed0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bed4:
    // 0x15bed4: 0x24423b50  addiu       $v0, $v0, 0x3B50
    ctx->pc = 0x15bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15184));
label_15bed8:
    // 0x15bed8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15bedc:
    // 0x15bedc: 0x3e00008  jr          $ra
label_15bee0:
    if (ctx->pc == 0x15BEE0u) {
        ctx->pc = 0x15BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEDCu;
        // 0x15bee0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEE4u;
        goto label_15bee4;
    }
    ctx->pc = 0x15BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEDCu;
        // 0x15bee0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BEE4u;
label_15bee4:
    // 0x15bee4: 0x0  nop
    ctx->pc = 0x15bee4u;
    // NOP
label_15bee8:
    // 0x15bee8: 0x0  nop
    ctx->pc = 0x15bee8u;
    // NOP
label_15beec:
    // 0x15beec: 0x0  nop
    ctx->pc = 0x15beecu;
    // NOP
label_15bef0:
    // 0x15bef0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15bef4:
    // 0x15bef4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15bef8:
    // 0x15bef8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15befc:
    // 0x15befc: 0x2463492e  addiu       $v1, $v1, 0x492E
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18734));
label_15bf00:
    // 0x15bf00: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15bf04:
    // 0x15bf04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15bf08:
    // 0x15bf08: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bf0c:
    // 0x15bf0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15bf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15bf10:
    // 0x15bf10: 0x24423b50  addiu       $v0, $v0, 0x3B50
    ctx->pc = 0x15bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15184));
label_15bf14:
    // 0x15bf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bf18:
    // 0x15bf18: 0x3e00008  jr          $ra
label_15bf1c:
    if (ctx->pc == 0x15BF1Cu) {
        ctx->pc = 0x15BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF18u;
        // 0x15bf1c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF20u;
        goto label_15bf20;
    }
    ctx->pc = 0x15BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF18u;
        // 0x15bf1c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF20u;
label_15bf20:
    // 0x15bf20: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_15bf24:
    // 0x15bf24: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
label_15bf28:
    if (ctx->pc == 0x15BF28u) {
        ctx->pc = 0x15BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF24u;
        // 0x15bf28: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF2Cu;
        goto label_15bf2c;
    }
    ctx->pc = 0x15BF24u;
    {
        const bool branch_taken_0x15bf24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF24u;
        // 0x15bf28: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf24) {
            ctx->pc = 0x15BF4Cu;
            goto label_15bf4c;
        }
    }
    ctx->pc = 0x15BF2Cu;
label_15bf2c:
    // 0x15bf2c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bf30:
    // 0x15bf30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15bf34:
    // 0x15bf34: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_15bf38:
    // 0x15bf38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bf3c:
    // 0x15bf3c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15bf40:
    // 0x15bf40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bf44:
    // 0x15bf44: 0x10000009  b           . + 4 + (0x9 << 2)
label_15bf48:
    if (ctx->pc == 0x15BF48u) {
        ctx->pc = 0x15BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF44u;
        // 0x15bf48: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF4Cu;
        goto label_15bf4c;
    }
    ctx->pc = 0x15BF44u;
    {
        const bool branch_taken_0x15bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF44u;
        // 0x15bf48: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf44) {
            ctx->pc = 0x15BF6Cu;
            goto label_15bf6c;
        }
    }
    ctx->pc = 0x15BF4Cu;
label_15bf4c:
    // 0x15bf4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bf50:
    // 0x15bf50: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
label_15bf54:
    // 0x15bf54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15bf58:
    // 0x15bf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bf5c:
    // 0x15bf5c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15bf60:
    // 0x15bf60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bf64:
    // 0x15bf64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15bf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15bf68:
    // 0x15bf68: 0x0  nop
    ctx->pc = 0x15bf68u;
    // NOP
label_15bf6c:
    // 0x15bf6c: 0x3e00008  jr          $ra
label_15bf70:
    if (ctx->pc == 0x15BF70u) {
        ctx->pc = 0x15BF74u;
        goto label_15bf74;
    }
    ctx->pc = 0x15BF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF74u;
label_15bf74:
    // 0x15bf74: 0x0  nop
    ctx->pc = 0x15bf74u;
    // NOP
label_15bf78:
    // 0x15bf78: 0x0  nop
    ctx->pc = 0x15bf78u;
    // NOP
label_15bf7c:
    // 0x15bf7c: 0x0  nop
    ctx->pc = 0x15bf7cu;
    // NOP
label_15bf80:
    // 0x15bf80: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_15bf84:
    // 0x15bf84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15bf88:
    if (ctx->pc == 0x15BF88u) {
        ctx->pc = 0x15BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF84u;
        // 0x15bf88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF8Cu;
        goto label_15bf8c;
    }
    ctx->pc = 0x15BF84u;
    {
        const bool branch_taken_0x15bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF84u;
        // 0x15bf88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf84) {
            ctx->pc = 0x15BFACu;
            goto label_15bfac;
        }
    }
    ctx->pc = 0x15BF8Cu;
label_15bf8c:
    // 0x15bf8c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bf90:
    // 0x15bf90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15bf94:
    // 0x15bf94: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_15bf98:
    // 0x15bf98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bf9c:
    // 0x15bf9c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15bfa0:
    // 0x15bfa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bfa4:
    // 0x15bfa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_15bfa8:
    if (ctx->pc == 0x15BFA8u) {
        ctx->pc = 0x15BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA4u;
        // 0x15bfa8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFACu;
        goto label_15bfac;
    }
    ctx->pc = 0x15BFA4u;
    {
        const bool branch_taken_0x15bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA4u;
        // 0x15bfa8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfa4) {
            ctx->pc = 0x15BFCCu;
            goto label_15bfcc;
        }
    }
    ctx->pc = 0x15BFACu;
label_15bfac:
    // 0x15bfac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15bfb0:
    // 0x15bfb0: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
label_15bfb4:
    // 0x15bfb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15bfb8:
    // 0x15bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bfbc:
    // 0x15bfbc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15bfc0:
    // 0x15bfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bfc4:
    // 0x15bfc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15bfc8:
    // 0x15bfc8: 0x0  nop
    ctx->pc = 0x15bfc8u;
    // NOP
label_15bfcc:
    // 0x15bfcc: 0x3e00008  jr          $ra
label_15bfd0:
    if (ctx->pc == 0x15BFD0u) {
        ctx->pc = 0x15BFD4u;
        goto label_15bfd4;
    }
    ctx->pc = 0x15BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BFD4u;
label_15bfd4:
    // 0x15bfd4: 0x0  nop
    ctx->pc = 0x15bfd4u;
    // NOP
label_15bfd8:
    // 0x15bfd8: 0x0  nop
    ctx->pc = 0x15bfd8u;
    // NOP
label_15bfdc:
    // 0x15bfdc: 0x0  nop
    ctx->pc = 0x15bfdcu;
    // NOP
label_15bfe0:
    // 0x15bfe0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_15bfe4:
    // 0x15bfe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15bfe8:
    // 0x15bfe8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15bfec:
    // 0x15bfec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15bff0:
    // 0x15bff0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15bff4:
    // 0x15bff4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15bff8:
    // 0x15bff8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15bffc:
    // 0x15bffc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c000:
    // 0x15c000: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15c000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c004:
    // 0x15c004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c008:
    // 0x15c008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c00c:
    // 0x15c00c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c010:
    // 0x15c010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c014:
    // 0x15c014: 0x14a20115  bne         $a1, $v0, . + 4 + (0x115 << 2)
label_15c018:
    if (ctx->pc == 0x15C018u) {
        ctx->pc = 0x15C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C014u;
        // 0x15c018: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C01Cu;
        goto label_15c01c;
    }
    ctx->pc = 0x15C014u;
    {
        const bool branch_taken_0x15c014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C014u;
        // 0x15c018: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c014) {
            ctx->pc = 0x15C46Cu;
            goto label_15c46c;
        }
    }
    ctx->pc = 0x15C01Cu;
label_15c01c:
    // 0x15c01c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x15c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_15c020:
    // 0x15c020: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x15c020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_15c024:
    // 0x15c024: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15c028:
    // 0x15c028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c02c:
    // 0x15c02c: 0x144300f2  bne         $v0, $v1, . + 4 + (0xF2 << 2)
label_15c030:
    if (ctx->pc == 0x15C030u) {
        ctx->pc = 0x15C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C02Cu;
        // 0x15c030: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C034u;
        goto label_15c034;
    }
    ctx->pc = 0x15C02Cu;
    {
        const bool branch_taken_0x15c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C02Cu;
        // 0x15c030: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c02c) {
            ctx->pc = 0x15C3F8u;
            goto label_15c3f8;
        }
    }
    ctx->pc = 0x15C034u;
label_15c034:
    // 0x15c034: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x15c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_15c038:
    // 0x15c038: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x15c038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_15c03c:
    // 0x15c03c: 0x0  nop
    ctx->pc = 0x15c03cu;
    // NOP
label_15c040:
    // 0x15c040: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15c044:
    // 0x15c044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c048:
    // 0x15c048: 0x144300cd  bne         $v0, $v1, . + 4 + (0xCD << 2)
label_15c04c:
    if (ctx->pc == 0x15C04Cu) {
        ctx->pc = 0x15C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C048u;
        // 0x15c04c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C050u;
        goto label_15c050;
    }
    ctx->pc = 0x15C048u;
    {
        const bool branch_taken_0x15c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C048u;
        // 0x15c04c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c048) {
            ctx->pc = 0x15C380u;
            goto label_15c380;
        }
    }
    ctx->pc = 0x15C050u;
label_15c050:
    // 0x15c050: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x15c050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_15c054:
    // 0x15c054: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x15c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_15c058:
    // 0x15c058: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_15c05c:
    // 0x15c05c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c060:
    // 0x15c060: 0x144300a9  bne         $v0, $v1, . + 4 + (0xA9 << 2)
label_15c064:
    if (ctx->pc == 0x15C064u) {
        ctx->pc = 0x15C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C060u;
        // 0x15c064: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C068u;
        goto label_15c068;
    }
    ctx->pc = 0x15C060u;
    {
        const bool branch_taken_0x15c060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C060u;
        // 0x15c064: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c060) {
            ctx->pc = 0x15C308u;
            goto label_15c308;
        }
    }
    ctx->pc = 0x15C068u;
label_15c068:
    // 0x15c068: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x15c068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_15c06c:
    // 0x15c06c: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x15c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_15c070:
    // 0x15c070: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x15c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_15c074:
    // 0x15c074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c078:
    // 0x15c078: 0x14430084  bne         $v0, $v1, . + 4 + (0x84 << 2)
label_15c07c:
    if (ctx->pc == 0x15C07Cu) {
        ctx->pc = 0x15C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C078u;
        // 0x15c07c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C080u;
        goto label_15c080;
    }
    ctx->pc = 0x15C078u;
    {
        const bool branch_taken_0x15c078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C078u;
        // 0x15c07c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c078) {
            ctx->pc = 0x15C28Cu;
            goto label_15c28c;
        }
    }
    ctx->pc = 0x15C080u;
label_15c080:
    // 0x15c080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c084:
    // 0x15c084: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x15c084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_15c088:
    // 0x15c088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c08c:
    // 0x15c08c: 0x16020064  bne         $s0, $v0, . + 4 + (0x64 << 2)
label_15c090:
    if (ctx->pc == 0x15C090u) {
        ctx->pc = 0x15C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C08Cu;
        // 0x15c090: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C094u;
        goto label_15c094;
    }
    ctx->pc = 0x15C08Cu;
    {
        const bool branch_taken_0x15c08c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C08Cu;
        // 0x15c090: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c08c) {
            ctx->pc = 0x15C220u;
            goto label_15c220;
        }
    }
    ctx->pc = 0x15C094u;
label_15c094:
    // 0x15c094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c098:
    // 0x15c098: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15c098u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c09c:
    // 0x15c09c: 0x0  nop
    ctx->pc = 0x15c09cu;
    // NOP
label_15c0a0:
    // 0x15c0a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c0a4:
    // 0x15c0a4: 0x16220048  bne         $s1, $v0, . + 4 + (0x48 << 2)
label_15c0a8:
    if (ctx->pc == 0x15C0A8u) {
        ctx->pc = 0x15C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A4u;
        // 0x15c0a8: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0ACu;
        goto label_15c0ac;
    }
    ctx->pc = 0x15C0A4u;
    {
        const bool branch_taken_0x15c0a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A4u;
        // 0x15c0a8: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0a4) {
            ctx->pc = 0x15C1C8u;
            goto label_15c1c8;
        }
    }
    ctx->pc = 0x15C0ACu;
label_15c0ac:
    // 0x15c0ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c0b0:
    // 0x15c0b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15c0b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c0b4:
    // 0x15c0b4: 0x0  nop
    ctx->pc = 0x15c0b4u;
    // NOP
label_15c0b8:
    // 0x15c0b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c0bc:
    // 0x15c0bc: 0x1642002c  bne         $s2, $v0, . + 4 + (0x2C << 2)
label_15c0c0:
    if (ctx->pc == 0x15C0C0u) {
        ctx->pc = 0x15C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0BCu;
        // 0x15c0c0: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0C4u;
        goto label_15c0c4;
    }
    ctx->pc = 0x15C0BCu;
    {
        const bool branch_taken_0x15c0bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0BCu;
        // 0x15c0c0: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0bc) {
            ctx->pc = 0x15C170u;
            goto label_15c170;
        }
    }
    ctx->pc = 0x15C0C4u;
label_15c0c4:
    // 0x15c0c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15c0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c0c8:
    // 0x15c0c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15c0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c0cc:
    // 0x15c0cc: 0x0  nop
    ctx->pc = 0x15c0ccu;
    // NOP
label_15c0d0:
    // 0x15c0d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c0d4:
    // 0x15c0d4: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_15c0d8:
    if (ctx->pc == 0x15C0D8u) {
        ctx->pc = 0x15C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0D4u;
        // 0x15c0d8: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0DCu;
        goto label_15c0dc;
    }
    ctx->pc = 0x15C0D4u;
    {
        const bool branch_taken_0x15c0d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0D4u;
        // 0x15c0d8: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0d4) {
            ctx->pc = 0x15C118u;
            goto label_15c118;
        }
    }
    ctx->pc = 0x15C0DCu;
label_15c0dc:
    // 0x15c0dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15c0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c0e0:
    // 0x15c0e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c0e4:
    // 0x15c0e4: 0xc056ff8  jal         func_15BFE0
label_15c0e8:
    if (ctx->pc == 0x15C0E8u) {
        ctx->pc = 0x15C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0E4u;
        // 0x15c0e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0ECu;
        goto label_15c0ec;
    }
    ctx->pc = 0x15C0E4u;
    SET_GPR_U32(ctx, 31, 0x15C0ECu);
    ctx->pc = 0x15C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0E4u;
    // 0x15c0e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    goto label_15bfe0;
    ctx->pc = 0x15C0ECu;
label_15c0ec:
    // 0x15c0ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15c0f0:
    if (ctx->pc == 0x15C0F0u) {
        ctx->pc = 0x15C0F4u;
        goto label_15c0f4;
    }
    ctx->pc = 0x15C0ECu;
    {
        const bool branch_taken_0x15c0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0ec) {
            ctx->pc = 0x15C100u;
            goto label_15c100;
        }
    }
    ctx->pc = 0x15C0F4u;
label_15c0f4:
    // 0x15c0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c0f8:
    // 0x15c0f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_15c0fc:
    if (ctx->pc == 0x15C0FCu) {
        ctx->pc = 0x15C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0F8u;
        // 0x15c0fc: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C100u;
        goto label_15c100;
    }
    ctx->pc = 0x15C0F8u;
    {
        const bool branch_taken_0x15c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0F8u;
        // 0x15c0fc: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0f8) {
            ctx->pc = 0x15C140u;
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C100u;
label_15c100:
    // 0x15c100: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15c104:
    // 0x15c104: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x15c104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c108:
    // 0x15c108: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_15c10c:
    if (ctx->pc == 0x15C10Cu) {
        ctx->pc = 0x15C110u;
        goto label_15c110;
    }
    ctx->pc = 0x15C108u;
    {
        const bool branch_taken_0x15c108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c108) {
            ctx->pc = 0x15C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c0e0;
        }
    }
    ctx->pc = 0x15C110u;
label_15c110:
    // 0x15c110: 0x1000000b  b           . + 4 + (0xB << 2)
label_15c114:
    if (ctx->pc == 0x15C114u) {
        ctx->pc = 0x15C118u;
        goto label_15c118;
    }
    ctx->pc = 0x15C110u;
    {
        const bool branch_taken_0x15c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c110) {
            ctx->pc = 0x15C140u;
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C118u;
label_15c118:
    // 0x15c118: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15c11c:
    // 0x15c11c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x15c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_15c120:
    // 0x15c120: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_15c124:
    // 0x15c124: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c128:
    // 0x15c128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c12c:
    if (ctx->pc == 0x15C12Cu) {
        ctx->pc = 0x15C130u;
        goto label_15c130;
    }
    ctx->pc = 0x15C128u;
    {
        const bool branch_taken_0x15c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c128) {
            ctx->pc = 0x15C140u;
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C130u;
label_15c130:
    // 0x15c130: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c134:
    // 0x15c134: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c138:
    if (ctx->pc == 0x15C138u) {
        ctx->pc = 0x15C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C134u;
        // 0x15c138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C13Cu;
        goto label_15c13c;
    }
    ctx->pc = 0x15C134u;
    {
        const bool branch_taken_0x15c134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C134u;
        // 0x15c138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c134) {
            ctx->pc = 0x15C140u;
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C13Cu;
label_15c13c:
    // 0x15c13c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x15c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_15c140:
    // 0x15c140: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_15c144:
    // 0x15c144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c148:
    if (ctx->pc == 0x15C148u) {
        ctx->pc = 0x15C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C144u;
        // 0x15c148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C14Cu;
        goto label_15c14c;
    }
    ctx->pc = 0x15C144u;
    {
        const bool branch_taken_0x15c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C144u;
        // 0x15c148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c144) {
            ctx->pc = 0x15C154u;
            goto label_15c154;
        }
    }
    ctx->pc = 0x15C14Cu;
label_15c14c:
    // 0x15c14c: 0x10000012  b           . + 4 + (0x12 << 2)
label_15c150:
    if (ctx->pc == 0x15C150u) {
        ctx->pc = 0x15C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C14Cu;
        // 0x15c150: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C154u;
        goto label_15c154;
    }
    ctx->pc = 0x15C14Cu;
    {
        const bool branch_taken_0x15c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C14Cu;
        // 0x15c150: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c14c) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C154u;
label_15c154:
    // 0x15c154: 0x0  nop
    ctx->pc = 0x15c154u;
    // NOP
label_15c158:
    // 0x15c158: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15c158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15c15c:
    // 0x15c15c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15c15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c160:
    // 0x15c160: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_15c164:
    if (ctx->pc == 0x15C164u) {
        ctx->pc = 0x15C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C160u;
        // 0x15c164: 0x26d60090  addiu       $s6, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C168u;
        goto label_15c168;
    }
    ctx->pc = 0x15C160u;
    {
        const bool branch_taken_0x15c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C160u;
        // 0x15c164: 0x26d60090  addiu       $s6, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c160) {
            ctx->pc = 0x15C0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c0cc;
        }
    }
    ctx->pc = 0x15C168u;
label_15c168:
    // 0x15c168: 0x1000000b  b           . + 4 + (0xB << 2)
label_15c16c:
    if (ctx->pc == 0x15C16Cu) {
        ctx->pc = 0x15C170u;
        goto label_15c170;
    }
    ctx->pc = 0x15C168u;
    {
        const bool branch_taken_0x15c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c168) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C170u;
label_15c170:
    // 0x15c170: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15c174:
    // 0x15c174: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_15c178:
    // 0x15c178: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_15c17c:
    // 0x15c17c: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c180:
    // 0x15c180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c184:
    if (ctx->pc == 0x15C184u) {
        ctx->pc = 0x15C188u;
        goto label_15c188;
    }
    ctx->pc = 0x15C180u;
    {
        const bool branch_taken_0x15c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c180) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C188u;
label_15c188:
    // 0x15c188: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c18c:
    // 0x15c18c: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c190:
    if (ctx->pc == 0x15C190u) {
        ctx->pc = 0x15C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C18Cu;
        // 0x15c190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C194u;
        goto label_15c194;
    }
    ctx->pc = 0x15C18Cu;
    {
        const bool branch_taken_0x15c18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C18Cu;
        // 0x15c190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c18c) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C194u;
label_15c194:
    // 0x15c194: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x15c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_15c198:
    // 0x15c198: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x15c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_15c19c:
    // 0x15c19c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c1a0:
    if (ctx->pc == 0x15C1A0u) {
        ctx->pc = 0x15C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C19Cu;
        // 0x15c1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1A4u;
        goto label_15c1a4;
    }
    ctx->pc = 0x15C19Cu;
    {
        const bool branch_taken_0x15c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C19Cu;
        // 0x15c1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c19c) {
            ctx->pc = 0x15C1ACu;
            goto label_15c1ac;
        }
    }
    ctx->pc = 0x15C1A4u;
label_15c1a4:
    // 0x15c1a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_15c1a8:
    if (ctx->pc == 0x15C1A8u) {
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1A4u;
        // 0x15c1a8: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1ACu;
        goto label_15c1ac;
    }
    ctx->pc = 0x15C1A4u;
    {
        const bool branch_taken_0x15c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1A4u;
        // 0x15c1a8: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1a4) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C1ACu;
label_15c1ac:
    // 0x15c1ac: 0x0  nop
    ctx->pc = 0x15c1acu;
    // NOP
label_15c1b0:
    // 0x15c1b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15c1b4:
    // 0x15c1b4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x15c1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c1b8:
    // 0x15c1b8: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_15c1bc:
    if (ctx->pc == 0x15C1BCu) {
        ctx->pc = 0x15C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1B8u;
        // 0x15c1bc: 0x26f70090  addiu       $s7, $s7, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1C0u;
        goto label_15c1c0;
    }
    ctx->pc = 0x15C1B8u;
    {
        const bool branch_taken_0x15c1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1B8u;
        // 0x15c1bc: 0x26f70090  addiu       $s7, $s7, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1b8) {
            ctx->pc = 0x15C0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c0b4;
        }
    }
    ctx->pc = 0x15C1C0u;
label_15c1c0:
    // 0x15c1c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_15c1c4:
    if (ctx->pc == 0x15C1C4u) {
        ctx->pc = 0x15C1C8u;
        goto label_15c1c8;
    }
    ctx->pc = 0x15C1C0u;
    {
        const bool branch_taken_0x15c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c1c0) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C1C8u;
label_15c1c8:
    // 0x15c1c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15c1cc:
    // 0x15c1cc: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_15c1d0:
    // 0x15c1d0: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_15c1d4:
    // 0x15c1d4: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c1d8:
    // 0x15c1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c1dc:
    if (ctx->pc == 0x15C1DCu) {
        ctx->pc = 0x15C1E0u;
        goto label_15c1e0;
    }
    ctx->pc = 0x15C1D8u;
    {
        const bool branch_taken_0x15c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c1d8) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C1E0u;
label_15c1e0:
    // 0x15c1e0: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c1e4:
    // 0x15c1e4: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c1e8:
    if (ctx->pc == 0x15C1E8u) {
        ctx->pc = 0x15C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1E4u;
        // 0x15c1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1ECu;
        goto label_15c1ec;
    }
    ctx->pc = 0x15C1E4u;
    {
        const bool branch_taken_0x15c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1E4u;
        // 0x15c1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1e4) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x15c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_15c1f0:
    // 0x15c1f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15c1f4:
    // 0x15c1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c1f8:
    if (ctx->pc == 0x15C1F8u) {
        ctx->pc = 0x15C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F4u;
        // 0x15c1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1FCu;
        goto label_15c1fc;
    }
    ctx->pc = 0x15C1F4u;
    {
        const bool branch_taken_0x15c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F4u;
        // 0x15c1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f4) {
            ctx->pc = 0x15C204u;
            goto label_15c204;
        }
    }
    ctx->pc = 0x15C1FCu;
label_15c1fc:
    // 0x15c1fc: 0x10000013  b           . + 4 + (0x13 << 2)
label_15c200:
    if (ctx->pc == 0x15C200u) {
        ctx->pc = 0x15C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1FCu;
        // 0x15c200: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C204u;
        goto label_15c204;
    }
    ctx->pc = 0x15C1FCu;
    {
        const bool branch_taken_0x15c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1FCu;
        // 0x15c200: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1fc) {
            ctx->pc = 0x15C24Cu;
            goto label_15c24c;
        }
    }
    ctx->pc = 0x15C204u;
label_15c204:
    // 0x15c204: 0x0  nop
    ctx->pc = 0x15c204u;
    // NOP
label_15c208:
    // 0x15c208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c20c:
    // 0x15c20c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x15c20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c210:
    // 0x15c210: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_15c214:
    if (ctx->pc == 0x15C214u) {
        ctx->pc = 0x15C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C210u;
        // 0x15c214: 0x27de0090  addiu       $fp, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C218u;
        goto label_15c218;
    }
    ctx->pc = 0x15C210u;
    {
        const bool branch_taken_0x15c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C210u;
        // 0x15c214: 0x27de0090  addiu       $fp, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c210) {
            ctx->pc = 0x15C09Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c09c;
        }
    }
    ctx->pc = 0x15C218u;
label_15c218:
    // 0x15c218: 0x1000000c  b           . + 4 + (0xC << 2)
label_15c21c:
    if (ctx->pc == 0x15C21Cu) {
        ctx->pc = 0x15C220u;
        goto label_15c220;
    }
    ctx->pc = 0x15C218u;
    {
        const bool branch_taken_0x15c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c218) {
            ctx->pc = 0x15C24Cu;
            goto label_15c24c;
        }
    }
    ctx->pc = 0x15C220u;
label_15c220:
    // 0x15c220: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_15c224:
    // 0x15c224: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15c228:
    // 0x15c228: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15c228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15c22c:
    // 0x15c22c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15c230:
    // 0x15c230: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c234:
    // 0x15c234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c238:
    if (ctx->pc == 0x15C238u) {
        ctx->pc = 0x15C23Cu;
        goto label_15c23c;
    }
    ctx->pc = 0x15C234u;
    {
        const bool branch_taken_0x15c234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c234) {
            ctx->pc = 0x15C24Cu;
            goto label_15c24c;
        }
    }
    ctx->pc = 0x15C23Cu;
label_15c23c:
    // 0x15c23c: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c240:
    // 0x15c240: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c244:
    if (ctx->pc == 0x15C244u) {
        ctx->pc = 0x15C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C240u;
        // 0x15c244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C248u;
        goto label_15c248;
    }
    ctx->pc = 0x15C240u;
    {
        const bool branch_taken_0x15c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C240u;
        // 0x15c244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c240) {
            ctx->pc = 0x15C24Cu;
            goto label_15c24c;
        }
    }
    ctx->pc = 0x15C248u;
label_15c248:
    // 0x15c248: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x15c248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_15c24c:
    // 0x15c24c: 0x0  nop
    ctx->pc = 0x15c24cu;
    // NOP
label_15c250:
    // 0x15c250: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x15c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_15c254:
    // 0x15c254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c258:
    if (ctx->pc == 0x15C258u) {
        ctx->pc = 0x15C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C254u;
        // 0x15c258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C25Cu;
        goto label_15c25c;
    }
    ctx->pc = 0x15C254u;
    {
        const bool branch_taken_0x15c254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C254u;
        // 0x15c258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c254) {
            ctx->pc = 0x15C264u;
            goto label_15c264;
        }
    }
    ctx->pc = 0x15C25Cu;
label_15c25c:
    // 0x15c25c: 0x10000017  b           . + 4 + (0x17 << 2)
label_15c260:
    if (ctx->pc == 0x15C260u) {
        ctx->pc = 0x15C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C25Cu;
        // 0x15c260: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C264u;
        goto label_15c264;
    }
    ctx->pc = 0x15C25Cu;
    {
        const bool branch_taken_0x15c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C25Cu;
        // 0x15c260: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c25c) {
            ctx->pc = 0x15C2BCu;
            goto label_15c2bc;
        }
    }
    ctx->pc = 0x15C264u;
label_15c264:
    // 0x15c264: 0x0  nop
    ctx->pc = 0x15c264u;
    // NOP
label_15c268:
    // 0x15c268: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_15c26c:
    // 0x15c26c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c270:
    // 0x15c270: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c274:
    // 0x15c274: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x15c274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_15c278:
    // 0x15c278: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x15c278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c27c:
    // 0x15c27c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_15c280:
    if (ctx->pc == 0x15C280u) {
        ctx->pc = 0x15C284u;
        goto label_15c284;
    }
    ctx->pc = 0x15C27Cu;
    {
        const bool branch_taken_0x15c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c27c) {
            ctx->pc = 0x15C088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c088;
        }
    }
    ctx->pc = 0x15C284u;
label_15c284:
    // 0x15c284: 0x1000000d  b           . + 4 + (0xD << 2)
label_15c288:
    if (ctx->pc == 0x15C288u) {
        ctx->pc = 0x15C28Cu;
        goto label_15c28c;
    }
    ctx->pc = 0x15C284u;
    {
        const bool branch_taken_0x15c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c284) {
            ctx->pc = 0x15C2BCu;
            goto label_15c2bc;
        }
    }
    ctx->pc = 0x15C28Cu;
label_15c28c:
    // 0x15c28c: 0x0  nop
    ctx->pc = 0x15c28cu;
    // NOP
label_15c290:
    // 0x15c290: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x15c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_15c294:
    // 0x15c294: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15c294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15c298:
    // 0x15c298: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15c29c:
    // 0x15c29c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15c2a0:
    // 0x15c2a0: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c2a4:
    // 0x15c2a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c2a8:
    if (ctx->pc == 0x15C2A8u) {
        ctx->pc = 0x15C2ACu;
        goto label_15c2ac;
    }
    ctx->pc = 0x15C2A4u;
    {
        const bool branch_taken_0x15c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c2a4) {
            ctx->pc = 0x15C2BCu;
            goto label_15c2bc;
        }
    }
    ctx->pc = 0x15C2ACu;
label_15c2ac:
    // 0x15c2ac: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c2b0:
    // 0x15c2b0: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c2b4:
    if (ctx->pc == 0x15C2B4u) {
        ctx->pc = 0x15C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B0u;
        // 0x15c2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2B8u;
        goto label_15c2b8;
    }
    ctx->pc = 0x15C2B0u;
    {
        const bool branch_taken_0x15c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B0u;
        // 0x15c2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2b0) {
            ctx->pc = 0x15C2BCu;
            goto label_15c2bc;
        }
    }
    ctx->pc = 0x15C2B8u;
label_15c2b8:
    // 0x15c2b8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x15c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_15c2bc:
    // 0x15c2bc: 0x0  nop
    ctx->pc = 0x15c2bcu;
    // NOP
label_15c2c0:
    // 0x15c2c0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_15c2c4:
    // 0x15c2c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c2c8:
    if (ctx->pc == 0x15C2C8u) {
        ctx->pc = 0x15C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2C4u;
        // 0x15c2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2CCu;
        goto label_15c2cc;
    }
    ctx->pc = 0x15C2C4u;
    {
        const bool branch_taken_0x15c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2C4u;
        // 0x15c2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2c4) {
            ctx->pc = 0x15C2D4u;
            goto label_15c2d4;
        }
    }
    ctx->pc = 0x15C2CCu;
label_15c2cc:
    // 0x15c2cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_15c2d0:
    if (ctx->pc == 0x15C2D0u) {
        ctx->pc = 0x15C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2CCu;
        // 0x15c2d0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2D4u;
        goto label_15c2d4;
    }
    ctx->pc = 0x15C2CCu;
    {
        const bool branch_taken_0x15c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2CCu;
        // 0x15c2d0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2cc) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C2D4u;
label_15c2d4:
    // 0x15c2d4: 0x0  nop
    ctx->pc = 0x15c2d4u;
    // NOP
label_15c2d8:
    // 0x15c2d8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_15c2dc:
    // 0x15c2dc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c2e0:
    // 0x15c2e0: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x15c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_15c2e4:
    // 0x15c2e4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x15c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_15c2e8:
    // 0x15c2e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15c2ec:
    // 0x15c2ec: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x15c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_15c2f0:
    // 0x15c2f0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_15c2f4:
    // 0x15c2f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x15c2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c2f8:
    // 0x15c2f8: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
label_15c2fc:
    if (ctx->pc == 0x15C2FCu) {
        ctx->pc = 0x15C300u;
        goto label_15c300;
    }
    ctx->pc = 0x15C2F8u;
    {
        const bool branch_taken_0x15c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c2f8) {
            ctx->pc = 0x15C070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c070;
        }
    }
    ctx->pc = 0x15C300u;
label_15c300:
    // 0x15c300: 0x1000000c  b           . + 4 + (0xC << 2)
label_15c304:
    if (ctx->pc == 0x15C304u) {
        ctx->pc = 0x15C308u;
        goto label_15c308;
    }
    ctx->pc = 0x15C300u;
    {
        const bool branch_taken_0x15c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c300) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C308u;
label_15c308:
    // 0x15c308: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x15c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_15c30c:
    // 0x15c30c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15c310:
    // 0x15c310: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15c314:
    // 0x15c314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15c318:
    // 0x15c318: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c31c:
    // 0x15c31c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c320:
    if (ctx->pc == 0x15C320u) {
        ctx->pc = 0x15C324u;
        goto label_15c324;
    }
    ctx->pc = 0x15C31Cu;
    {
        const bool branch_taken_0x15c31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c31c) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C324u;
label_15c324:
    // 0x15c324: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c328:
    // 0x15c328: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c32c:
    if (ctx->pc == 0x15C32Cu) {
        ctx->pc = 0x15C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C328u;
        // 0x15c32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C330u;
        goto label_15c330;
    }
    ctx->pc = 0x15C328u;
    {
        const bool branch_taken_0x15c328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C328u;
        // 0x15c32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c328) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C330u;
label_15c330:
    // 0x15c330: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x15c330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_15c334:
    // 0x15c334: 0x0  nop
    ctx->pc = 0x15c334u;
    // NOP
label_15c338:
    // 0x15c338: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_15c33c:
    // 0x15c33c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c340:
    if (ctx->pc == 0x15C340u) {
        ctx->pc = 0x15C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C33Cu;
        // 0x15c340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C344u;
        goto label_15c344;
    }
    ctx->pc = 0x15C33Cu;
    {
        const bool branch_taken_0x15c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C33Cu;
        // 0x15c340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c33c) {
            ctx->pc = 0x15C34Cu;
            goto label_15c34c;
        }
    }
    ctx->pc = 0x15C344u;
label_15c344:
    // 0x15c344: 0x10000019  b           . + 4 + (0x19 << 2)
label_15c348:
    if (ctx->pc == 0x15C348u) {
        ctx->pc = 0x15C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C344u;
        // 0x15c348: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C34Cu;
        goto label_15c34c;
    }
    ctx->pc = 0x15C344u;
    {
        const bool branch_taken_0x15c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C344u;
        // 0x15c348: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c344) {
            ctx->pc = 0x15C3ACu;
            goto label_15c3ac;
        }
    }
    ctx->pc = 0x15C34Cu;
label_15c34c:
    // 0x15c34c: 0x0  nop
    ctx->pc = 0x15c34cu;
    // NOP
label_15c350:
    // 0x15c350: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_15c354:
    // 0x15c354: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c358:
    // 0x15c358: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x15c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_15c35c:
    // 0x15c35c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_15c360:
    // 0x15c360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15c364:
    // 0x15c364: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x15c364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_15c368:
    // 0x15c368: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_15c36c:
    // 0x15c36c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x15c36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c370:
    // 0x15c370: 0x1440ff39  bnez        $v0, . + 4 + (-0xC7 << 2)
label_15c374:
    if (ctx->pc == 0x15C374u) {
        ctx->pc = 0x15C378u;
        goto label_15c378;
    }
    ctx->pc = 0x15C370u;
    {
        const bool branch_taken_0x15c370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c370) {
            ctx->pc = 0x15C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c058;
        }
    }
    ctx->pc = 0x15C378u;
label_15c378:
    // 0x15c378: 0x1000000c  b           . + 4 + (0xC << 2)
label_15c37c:
    if (ctx->pc == 0x15C37Cu) {
        ctx->pc = 0x15C380u;
        goto label_15c380;
    }
    ctx->pc = 0x15C378u;
    {
        const bool branch_taken_0x15c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c378) {
            ctx->pc = 0x15C3ACu;
            goto label_15c3ac;
        }
    }
    ctx->pc = 0x15C380u;
label_15c380:
    // 0x15c380: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x15c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_15c384:
    // 0x15c384: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15c388:
    // 0x15c388: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15c38c:
    // 0x15c38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15c390:
    // 0x15c390: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c394:
    // 0x15c394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c398:
    if (ctx->pc == 0x15C398u) {
        ctx->pc = 0x15C39Cu;
        goto label_15c39c;
    }
    ctx->pc = 0x15C394u;
    {
        const bool branch_taken_0x15c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c394) {
            ctx->pc = 0x15C3ACu;
            goto label_15c3ac;
        }
    }
    ctx->pc = 0x15C39Cu;
label_15c39c:
    // 0x15c39c: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c3a0:
    // 0x15c3a0: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c3a4:
    if (ctx->pc == 0x15C3A4u) {
        ctx->pc = 0x15C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A0u;
        // 0x15c3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3A8u;
        goto label_15c3a8;
    }
    ctx->pc = 0x15C3A0u;
    {
        const bool branch_taken_0x15c3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A0u;
        // 0x15c3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3a0) {
            ctx->pc = 0x15C3ACu;
            goto label_15c3ac;
        }
    }
    ctx->pc = 0x15C3A8u;
label_15c3a8:
    // 0x15c3a8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x15c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_15c3ac:
    // 0x15c3ac: 0x0  nop
    ctx->pc = 0x15c3acu;
    // NOP
label_15c3b0:
    // 0x15c3b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_15c3b4:
    // 0x15c3b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c3b8:
    if (ctx->pc == 0x15C3B8u) {
        ctx->pc = 0x15C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B4u;
        // 0x15c3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3BCu;
        goto label_15c3bc;
    }
    ctx->pc = 0x15C3B4u;
    {
        const bool branch_taken_0x15c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B4u;
        // 0x15c3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3b4) {
            ctx->pc = 0x15C3C4u;
            goto label_15c3c4;
        }
    }
    ctx->pc = 0x15C3BCu;
label_15c3bc:
    // 0x15c3bc: 0x10000019  b           . + 4 + (0x19 << 2)
label_15c3c0:
    if (ctx->pc == 0x15C3C0u) {
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3BCu;
        // 0x15c3c0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3C4u;
        goto label_15c3c4;
    }
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3BCu;
        // 0x15c3c0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C424u;
            goto label_15c424;
        }
    }
    ctx->pc = 0x15C3C4u;
label_15c3c4:
    // 0x15c3c4: 0x0  nop
    ctx->pc = 0x15c3c4u;
    // NOP
label_15c3c8:
    // 0x15c3c8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_15c3cc:
    // 0x15c3cc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c3d0:
    // 0x15c3d0: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x15c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_15c3d4:
    // 0x15c3d4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15c3d8:
    // 0x15c3d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15c3dc:
    // 0x15c3dc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_15c3e0:
    // 0x15c3e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15c3e4:
    // 0x15c3e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x15c3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c3e8:
    // 0x15c3e8: 0x1440ff14  bnez        $v0, . + 4 + (-0xEC << 2)
label_15c3ec:
    if (ctx->pc == 0x15C3ECu) {
        ctx->pc = 0x15C3F0u;
        goto label_15c3f0;
    }
    ctx->pc = 0x15C3E8u;
    {
        const bool branch_taken_0x15c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c3e8) {
            ctx->pc = 0x15C03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c03c;
        }
    }
    ctx->pc = 0x15C3F0u;
label_15c3f0:
    // 0x15c3f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_15c3f4:
    if (ctx->pc == 0x15C3F4u) {
        ctx->pc = 0x15C3F8u;
        goto label_15c3f8;
    }
    ctx->pc = 0x15C3F0u;
    {
        const bool branch_taken_0x15c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3f0) {
            ctx->pc = 0x15C424u;
            goto label_15c424;
        }
    }
    ctx->pc = 0x15C3F8u;
label_15c3f8:
    // 0x15c3f8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_15c3fc:
    // 0x15c3fc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15c400:
    // 0x15c400: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15c404:
    // 0x15c404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15c408:
    // 0x15c408: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x15c408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_15c40c:
    // 0x15c40c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c410:
    if (ctx->pc == 0x15C410u) {
        ctx->pc = 0x15C414u;
        goto label_15c414;
    }
    ctx->pc = 0x15C40Cu;
    {
        const bool branch_taken_0x15c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c40c) {
            ctx->pc = 0x15C424u;
            goto label_15c424;
        }
    }
    ctx->pc = 0x15C414u;
label_15c414:
    // 0x15c414: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x15c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_15c418:
    // 0x15c418: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_15c41c:
    if (ctx->pc == 0x15C41Cu) {
        ctx->pc = 0x15C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C418u;
        // 0x15c41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C420u;
        goto label_15c420;
    }
    ctx->pc = 0x15C418u;
    {
        const bool branch_taken_0x15c418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x15C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C418u;
        // 0x15c41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c418) {
            ctx->pc = 0x15C424u;
            goto label_15c424;
        }
    }
    ctx->pc = 0x15C420u;
label_15c420:
    // 0x15c420: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_15c424:
    // 0x15c424: 0x0  nop
    ctx->pc = 0x15c424u;
    // NOP
label_15c428:
    // 0x15c428: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15c42c:
    // 0x15c42c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c430:
    if (ctx->pc == 0x15C430u) {
        ctx->pc = 0x15C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C42Cu;
        // 0x15c430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C434u;
        goto label_15c434;
    }
    ctx->pc = 0x15C42Cu;
    {
        const bool branch_taken_0x15c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C42Cu;
        // 0x15c430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c42c) {
            ctx->pc = 0x15C43Cu;
            goto label_15c43c;
        }
    }
    ctx->pc = 0x15C434u;
label_15c434:
    // 0x15c434: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15c438:
    if (ctx->pc == 0x15C438u) {
        ctx->pc = 0x15C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C434u;
        // 0x15c438: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C43Cu;
        goto label_15c43c;
    }
    ctx->pc = 0x15C434u;
    {
        const bool branch_taken_0x15c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C434u;
        // 0x15c438: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c434) {
            ctx->pc = 0x15C4ACu;
            goto label_15c4ac;
        }
    }
    ctx->pc = 0x15C43Cu;
label_15c43c:
    // 0x15c43c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x15c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_15c440:
    // 0x15c440: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c444:
    // 0x15c444: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x15c444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_15c448:
    // 0x15c448: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15c44c:
    // 0x15c44c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15c450:
    // 0x15c450: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x15c450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_15c454:
    // 0x15c454: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15c458:
    // 0x15c458: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x15c458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c45c:
    // 0x15c45c: 0x1440fef1  bnez        $v0, . + 4 + (-0x10F << 2)
label_15c460:
    if (ctx->pc == 0x15C460u) {
        ctx->pc = 0x15C464u;
        goto label_15c464;
    }
    ctx->pc = 0x15C45Cu;
    {
        const bool branch_taken_0x15c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c45c) {
            ctx->pc = 0x15C024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c024;
        }
    }
    ctx->pc = 0x15C464u;
label_15c464:
    // 0x15c464: 0x10000012  b           . + 4 + (0x12 << 2)
label_15c468:
    if (ctx->pc == 0x15C468u) {
        ctx->pc = 0x15C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C464u;
        // 0x15c468: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C46Cu;
        goto label_15c46c;
    }
    ctx->pc = 0x15C464u;
    {
        const bool branch_taken_0x15c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C464u;
        // 0x15c468: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c464) {
            ctx->pc = 0x15C4B0u;
            goto label_15c4b0;
        }
    }
    ctx->pc = 0x15C46Cu;
label_15c46c:
    // 0x15c46c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x15c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_15c470:
    // 0x15c470: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15c474:
    // 0x15c474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15c474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15c478:
    // 0x15c478: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x15c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_15c47c:
    // 0x15c47c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c480:
    // 0x15c480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c484:
    // 0x15c484: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15c484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15c488:
    // 0x15c488: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_15c48c:
    if (ctx->pc == 0x15C48Cu) {
        ctx->pc = 0x15C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C488u;
        // 0x15c48c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C490u;
        goto label_15c490;
    }
    ctx->pc = 0x15C488u;
    {
        const bool branch_taken_0x15c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C488u;
        // 0x15c48c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c488) {
            ctx->pc = 0x15C4ACu;
            goto label_15c4ac;
        }
    }
    ctx->pc = 0x15C490u;
label_15c490:
    // 0x15c490: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x15c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_15c494:
    // 0x15c494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c498:
    // 0x15c498: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c49c:
    // 0x15c49c: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
label_15c4a0:
    if (ctx->pc == 0x15C4A0u) {
        ctx->pc = 0x15C4A4u;
        goto label_15c4a4;
    }
    ctx->pc = 0x15C49Cu;
    {
        const bool branch_taken_0x15c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x15c49c) {
            ctx->pc = 0x15C4ACu;
            goto label_15c4ac;
        }
    }
    ctx->pc = 0x15C4A4u;
label_15c4a4:
    // 0x15c4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c4a8:
    // 0x15c4a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x15c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_15c4ac:
    // 0x15c4ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15c4b0:
    // 0x15c4b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15c4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15c4b4:
    // 0x15c4b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15c4b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15c4b8:
    // 0x15c4b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c4b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15c4bc:
    // 0x15c4bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c4bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15c4c0:
    // 0x15c4c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c4c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15c4c4:
    // 0x15c4c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c4c8:
    // 0x15c4c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c4cc:
    // 0x15c4cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c4d0:
    // 0x15c4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c4d4:
    // 0x15c4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c4d8:
    // 0x15c4d8: 0x3e00008  jr          $ra
label_15c4dc:
    if (ctx->pc == 0x15C4DCu) {
        ctx->pc = 0x15C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D8u;
        // 0x15c4dc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4E0u;
        goto label_15c4e0;
    }
    ctx->pc = 0x15C4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D8u;
        // 0x15c4dc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C4E0u;
label_15c4e0:
    // 0x15c4e0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_15c4e4:
    // 0x15c4e4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_15c4e8:
    if (ctx->pc == 0x15C4E8u) {
        ctx->pc = 0x15C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4E4u;
        // 0x15c4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4ECu;
        goto label_15c4ec;
    }
    ctx->pc = 0x15C4E4u;
    {
        const bool branch_taken_0x15c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4E4u;
        // 0x15c4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4e4) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C4ECu;
label_15c4ec:
    // 0x15c4ec: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_15c4f0:
    // 0x15c4f0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_15c4f4:
    if (ctx->pc == 0x15C4F4u) {
        ctx->pc = 0x15C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F0u;
        // 0x15c4f4: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4F8u;
        goto label_15c4f8;
    }
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F0u;
        // 0x15c4f4: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C4F8u;
label_15c4f8:
    // 0x15c4f8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_15c4fc:
    if (ctx->pc == 0x15C4FCu) {
        ctx->pc = 0x15C500u;
        goto label_15c500;
    }
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C500u;
label_15c500:
    // 0x15c500: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_15c504:
    // 0x15c504: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_15c508:
    if (ctx->pc == 0x15C508u) {
        ctx->pc = 0x15C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C504u;
        // 0x15c508: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C50Cu;
        goto label_15c50c;
    }
    ctx->pc = 0x15C504u;
    {
        const bool branch_taken_0x15c504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C504u;
        // 0x15c508: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c504) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C50Cu;
label_15c50c:
    // 0x15c50c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_15c510:
    if (ctx->pc == 0x15C510u) {
        ctx->pc = 0x15C514u;
        goto label_15c514;
    }
    ctx->pc = 0x15C50Cu;
    {
        const bool branch_taken_0x15c50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c50c) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C514u;
label_15c514:
    // 0x15c514: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c518:
    // 0x15c518: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_15c51c:
    if (ctx->pc == 0x15C51Cu) {
        ctx->pc = 0x15C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C518u;
        // 0x15c51c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C520u;
        goto label_15c520;
    }
    ctx->pc = 0x15C518u;
    {
        const bool branch_taken_0x15c518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C518u;
        // 0x15c51c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c518) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C520u;
label_15c520:
    // 0x15c520: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_15c524:
    if (ctx->pc == 0x15C524u) {
        ctx->pc = 0x15C528u;
        goto label_15c528;
    }
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C528u;
label_15c528:
    // 0x15c528: 0x10000002  b           . + 4 + (0x2 << 2)
label_15c52c:
    if (ctx->pc == 0x15C52Cu) {
        ctx->pc = 0x15C530u;
        goto label_15c530;
    }
    ctx->pc = 0x15C528u;
    {
        const bool branch_taken_0x15c528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c528) {
            ctx->pc = 0x15C534u;
            goto label_15c534;
        }
    }
    ctx->pc = 0x15C530u;
label_15c530:
    // 0x15c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c534:
    // 0x15c534: 0x3e00008  jr          $ra
label_15c538:
    if (ctx->pc == 0x15C538u) {
        ctx->pc = 0x15C53Cu;
        goto label_15c53c;
    }
    ctx->pc = 0x15C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C53Cu;
label_15c53c:
    // 0x15c53c: 0x0  nop
    ctx->pc = 0x15c53cu;
    // NOP
label_15c540:
    // 0x15c540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15c544:
    // 0x15c544: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_15c548:
    // 0x15c548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15c54c:
    // 0x15c54c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15c550:
    // 0x15c550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c554:
    // 0x15c554: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x15c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_15c558:
    // 0x15c558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c55c:
    // 0x15c55c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c560:
    // 0x15c560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c564:
    // 0x15c564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15c564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15c568:
    // 0x15c568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c56c:
    // 0x15c56c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15c570:
    // 0x15c570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c574:
    // 0x15c574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c578:
    // 0x15c578: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15c57c:
    // 0x15c57c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_15c580:
    // 0x15c580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c584:
    // 0x15c584: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x15c584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_15c588:
    // 0x15c588: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_15c58c:
    // 0x15c58c: 0xc066c5c  jal         func_19B170
label_15c590:
    if (ctx->pc == 0x15C590u) {
        ctx->pc = 0x15C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C58Cu;
        // 0x15c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C594u;
        goto label_15c594;
    }
    ctx->pc = 0x15C58Cu;
    SET_GPR_U32(ctx, 31, 0x15C594u);
    ctx->pc = 0x15C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C58Cu;
    // 0x15c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15C594u;
label_15c594:
    // 0x15c594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c598:
    // 0x15c598: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c59c:
    // 0x15c59c: 0xc066d10  jal         func_19B440
label_15c5a0:
    if (ctx->pc == 0x15C5A0u) {
        ctx->pc = 0x15C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C59Cu;
        // 0x15c5a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5A4u;
        goto label_15c5a4;
    }
    ctx->pc = 0x15C59Cu;
    SET_GPR_U32(ctx, 31, 0x15C5A4u);
    ctx->pc = 0x15C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C59Cu;
    // 0x15c5a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15C5A4u;
label_15c5a4:
    // 0x15c5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c5a8:
    // 0x15c5a8: 0xc066d30  jal         func_19B4C0
label_15c5ac:
    if (ctx->pc == 0x15C5ACu) {
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5B0u;
        goto label_15c5b0;
    }
    ctx->pc = 0x15C5A8u;
    SET_GPR_U32(ctx, 31, 0x15C5B0u);
    ctx->pc = 0x15C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5A8u;
    // 0x15c5ac: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15C5B0u;
label_15c5b0:
    // 0x15c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c5b4:
    // 0x15c5b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c5b8:
    // 0x15c5b8: 0xc066d10  jal         func_19B440
label_15c5bc:
    if (ctx->pc == 0x15C5BCu) {
        ctx->pc = 0x15C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5B8u;
        // 0x15c5bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5C0u;
        goto label_15c5c0;
    }
    ctx->pc = 0x15C5B8u;
    SET_GPR_U32(ctx, 31, 0x15C5C0u);
    ctx->pc = 0x15C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5B8u;
    // 0x15c5bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15C5C0u;
label_15c5c0:
    // 0x15c5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c5c4:
    // 0x15c5c4: 0xc066ce8  jal         func_19B3A0
label_15c5c8:
    if (ctx->pc == 0x15C5C8u) {
        ctx->pc = 0x15C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5C4u;
        // 0x15c5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5CCu;
        goto label_15c5cc;
    }
    ctx->pc = 0x15C5C4u;
    SET_GPR_U32(ctx, 31, 0x15C5CCu);
    ctx->pc = 0x15C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5C4u;
    // 0x15c5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x15C5CCu;
label_15c5cc:
    // 0x15c5cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_15c5d0:
    // 0x15c5d0: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x15c5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
label_15c5d4:
    // 0x15c5d4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15c5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15c5d8:
    // 0x15c5d8: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_15c5dc:
    // 0x15c5dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15c5e0:
    // 0x15c5e0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_15c5e4:
    // 0x15c5e4: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c5e8:
    // 0x15c5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c5ec:
    // 0x15c5ec: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c5f0:
    // 0x15c5f0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c5f4:
    // 0x15c5f4: 0xc066d5c  jal         func_19B570
label_15c5f8:
    if (ctx->pc == 0x15C5F8u) {
        ctx->pc = 0x15C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F4u;
        // 0x15c5f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5FCu;
        goto label_15c5fc;
    }
    ctx->pc = 0x15C5F4u;
    SET_GPR_U32(ctx, 31, 0x15C5FCu);
    ctx->pc = 0x15C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5F4u;
    // 0x15c5f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C5FCu;
label_15c5fc:
    // 0x15c5fc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x15c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_15c600:
    // 0x15c600: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x15c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_15c604:
    // 0x15c604: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c608:
    // 0x15c608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c60c:
    // 0x15c60c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c610:
    // 0x15c610: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c614:
    // 0x15c614: 0xc066d5c  jal         func_19B570
label_15c618:
    if (ctx->pc == 0x15C618u) {
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C614u;
        // 0x15c618: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C61Cu;
        goto label_15c61c;
    }
    ctx->pc = 0x15C614u;
    SET_GPR_U32(ctx, 31, 0x15C61Cu);
    ctx->pc = 0x15C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C614u;
    // 0x15c618: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C61Cu;
label_15c61c:
    // 0x15c61c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15c620:
    // 0x15c620: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x15c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_15c624:
    // 0x15c624: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15c624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15c628:
    // 0x15c628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c62c:
    // 0x15c62c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15c630:
    // 0x15c630: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_15c634:
    // 0x15c634: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c638:
    // 0x15c638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c63c:
    // 0x15c63c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c640:
    // 0x15c640: 0xc066d5c  jal         func_19B570
label_15c644:
    if (ctx->pc == 0x15C644u) {
        ctx->pc = 0x15C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C640u;
        // 0x15c644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C648u;
        goto label_15c648;
    }
    ctx->pc = 0x15C640u;
    SET_GPR_U32(ctx, 31, 0x15C648u);
    ctx->pc = 0x15C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C640u;
    // 0x15c644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C648u;
label_15c648:
    // 0x15c648: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15c648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15c64c:
    // 0x15c64c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x15c64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_15c650:
    // 0x15c650: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15c650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15c654:
    // 0x15c654: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c658:
    // 0x15c658: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15c65c:
    // 0x15c65c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->pc = 0x15c660u;
    return;
}

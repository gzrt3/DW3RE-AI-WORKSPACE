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


void FUN_0017faa0_part583(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29bd80u: goto label_29bd80;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd90u: goto label_29bd90;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bda0u: goto label_29bda0;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bda8u: goto label_29bda8;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb0u: goto label_29bdb0;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bdbcu: goto label_29bdbc;
        case 0x29bdc0u: goto label_29bdc0;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bdd8u: goto label_29bdd8;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bde8u: goto label_29bde8;
        case 0x29bdecu: goto label_29bdec;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29bdf4u: goto label_29bdf4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29bdfcu: goto label_29bdfc;
        case 0x29be00u: goto label_29be00;
        case 0x29be04u: goto label_29be04;
        case 0x29be08u: goto label_29be08;
        case 0x29be0cu: goto label_29be0c;
        case 0x29be10u: goto label_29be10;
        case 0x29be14u: goto label_29be14;
        case 0x29be18u: goto label_29be18;
        case 0x29be1cu: goto label_29be1c;
        case 0x29be20u: goto label_29be20;
        case 0x29be24u: goto label_29be24;
        case 0x29be28u: goto label_29be28;
        case 0x29be2cu: goto label_29be2c;
        case 0x29be30u: goto label_29be30;
        case 0x29be34u: goto label_29be34;
        case 0x29be38u: goto label_29be38;
        case 0x29be3cu: goto label_29be3c;
        case 0x29be40u: goto label_29be40;
        case 0x29be44u: goto label_29be44;
        case 0x29be48u: goto label_29be48;
        case 0x29be4cu: goto label_29be4c;
        case 0x29be50u: goto label_29be50;
        case 0x29be54u: goto label_29be54;
        case 0x29be58u: goto label_29be58;
        case 0x29be5cu: goto label_29be5c;
        case 0x29be60u: goto label_29be60;
        case 0x29be64u: goto label_29be64;
        case 0x29be68u: goto label_29be68;
        case 0x29be6cu: goto label_29be6c;
        case 0x29be70u: goto label_29be70;
        case 0x29be74u: goto label_29be74;
        case 0x29be78u: goto label_29be78;
        case 0x29be7cu: goto label_29be7c;
        case 0x29be80u: goto label_29be80;
        case 0x29be84u: goto label_29be84;
        case 0x29be88u: goto label_29be88;
        case 0x29be8cu: goto label_29be8c;
        case 0x29be90u: goto label_29be90;
        case 0x29be94u: goto label_29be94;
        case 0x29be98u: goto label_29be98;
        case 0x29be9cu: goto label_29be9c;
        case 0x29bea0u: goto label_29bea0;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bea8u: goto label_29bea8;
        case 0x29beacu: goto label_29beac;
        case 0x29beb0u: goto label_29beb0;
        case 0x29beb4u: goto label_29beb4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bebcu: goto label_29bebc;
        case 0x29bec0u: goto label_29bec0;
        case 0x29bec4u: goto label_29bec4;
        case 0x29bec8u: goto label_29bec8;
        case 0x29beccu: goto label_29becc;
        case 0x29bed0u: goto label_29bed0;
        case 0x29bed4u: goto label_29bed4;
        case 0x29bed8u: goto label_29bed8;
        case 0x29bedcu: goto label_29bedc;
        case 0x29bee0u: goto label_29bee0;
        case 0x29bee4u: goto label_29bee4;
        case 0x29bee8u: goto label_29bee8;
        case 0x29beecu: goto label_29beec;
        case 0x29bef0u: goto label_29bef0;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bef8u: goto label_29bef8;
        case 0x29befcu: goto label_29befc;
        case 0x29bf00u: goto label_29bf00;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf08u: goto label_29bf08;
        case 0x29bf0cu: goto label_29bf0c;
        case 0x29bf10u: goto label_29bf10;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf18u: goto label_29bf18;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf28u: goto label_29bf28;
        case 0x29bf2cu: goto label_29bf2c;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf34u: goto label_29bf34;
        case 0x29bf38u: goto label_29bf38;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf40u: goto label_29bf40;
        case 0x29bf44u: goto label_29bf44;
        case 0x29bf48u: goto label_29bf48;
        case 0x29bf4cu: goto label_29bf4c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf54u: goto label_29bf54;
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        case 0x29bf60u: goto label_29bf60;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf68u: goto label_29bf68;
        case 0x29bf6cu: goto label_29bf6c;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf78u: goto label_29bf78;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bf80u: goto label_29bf80;
        case 0x29bf84u: goto label_29bf84;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf8cu: goto label_29bf8c;
        case 0x29bf90u: goto label_29bf90;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bf98u: goto label_29bf98;
        case 0x29bf9cu: goto label_29bf9c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfa4u: goto label_29bfa4;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfacu: goto label_29bfac;
        case 0x29bfb0u: goto label_29bfb0;
        case 0x29bfb4u: goto label_29bfb4;
        case 0x29bfb8u: goto label_29bfb8;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bfc4u: goto label_29bfc4;
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29bfccu: goto label_29bfcc;
        case 0x29bfd0u: goto label_29bfd0;
        case 0x29bfd4u: goto label_29bfd4;
        case 0x29bfd8u: goto label_29bfd8;
        case 0x29bfdcu: goto label_29bfdc;
        case 0x29bfe0u: goto label_29bfe0;
        case 0x29bfe4u: goto label_29bfe4;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29bfecu: goto label_29bfec;
        case 0x29bff0u: goto label_29bff0;
        case 0x29bff4u: goto label_29bff4;
        case 0x29bff8u: goto label_29bff8;
        case 0x29bffcu: goto label_29bffc;
        case 0x29c000u: goto label_29c000;
        case 0x29c004u: goto label_29c004;
        case 0x29c008u: goto label_29c008;
        case 0x29c00cu: goto label_29c00c;
        case 0x29c010u: goto label_29c010;
        case 0x29c014u: goto label_29c014;
        case 0x29c018u: goto label_29c018;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c020u: goto label_29c020;
        case 0x29c024u: goto label_29c024;
        case 0x29c028u: goto label_29c028;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c030u: goto label_29c030;
        case 0x29c034u: goto label_29c034;
        case 0x29c038u: goto label_29c038;
        case 0x29c03cu: goto label_29c03c;
        case 0x29c040u: goto label_29c040;
        case 0x29c044u: goto label_29c044;
        case 0x29c048u: goto label_29c048;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c050u: goto label_29c050;
        case 0x29c054u: goto label_29c054;
        case 0x29c058u: goto label_29c058;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c060u: goto label_29c060;
        case 0x29c064u: goto label_29c064;
        case 0x29c068u: goto label_29c068;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c070u: goto label_29c070;
        case 0x29c074u: goto label_29c074;
        case 0x29c078u: goto label_29c078;
        case 0x29c07cu: goto label_29c07c;
        case 0x29c080u: goto label_29c080;
        case 0x29c084u: goto label_29c084;
        case 0x29c088u: goto label_29c088;
        case 0x29c08cu: goto label_29c08c;
        case 0x29c090u: goto label_29c090;
        case 0x29c094u: goto label_29c094;
        case 0x29c098u: goto label_29c098;
        case 0x29c09cu: goto label_29c09c;
        case 0x29c0a0u: goto label_29c0a0;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0a8u: goto label_29c0a8;
        case 0x29c0acu: goto label_29c0ac;
        case 0x29c0b0u: goto label_29c0b0;
        case 0x29c0b4u: goto label_29c0b4;
        case 0x29c0b8u: goto label_29c0b8;
        case 0x29c0bcu: goto label_29c0bc;
        case 0x29c0c0u: goto label_29c0c0;
        case 0x29c0c4u: goto label_29c0c4;
        case 0x29c0c8u: goto label_29c0c8;
        case 0x29c0ccu: goto label_29c0cc;
        case 0x29c0d0u: goto label_29c0d0;
        case 0x29c0d4u: goto label_29c0d4;
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c0dcu: goto label_29c0dc;
        case 0x29c0e0u: goto label_29c0e0;
        case 0x29c0e4u: goto label_29c0e4;
        case 0x29c0e8u: goto label_29c0e8;
        case 0x29c0ecu: goto label_29c0ec;
        case 0x29c0f0u: goto label_29c0f0;
        case 0x29c0f4u: goto label_29c0f4;
        case 0x29c0f8u: goto label_29c0f8;
        case 0x29c0fcu: goto label_29c0fc;
        case 0x29c100u: goto label_29c100;
        case 0x29c104u: goto label_29c104;
        case 0x29c108u: goto label_29c108;
        case 0x29c10cu: goto label_29c10c;
        case 0x29c110u: goto label_29c110;
        case 0x29c114u: goto label_29c114;
        case 0x29c118u: goto label_29c118;
        case 0x29c11cu: goto label_29c11c;
        case 0x29c120u: goto label_29c120;
        case 0x29c124u: goto label_29c124;
        case 0x29c128u: goto label_29c128;
        case 0x29c12cu: goto label_29c12c;
        case 0x29c130u: goto label_29c130;
        case 0x29c134u: goto label_29c134;
        case 0x29c138u: goto label_29c138;
        case 0x29c13cu: goto label_29c13c;
        case 0x29c140u: goto label_29c140;
        case 0x29c144u: goto label_29c144;
        case 0x29c148u: goto label_29c148;
        case 0x29c14cu: goto label_29c14c;
        case 0x29c150u: goto label_29c150;
        case 0x29c154u: goto label_29c154;
        case 0x29c158u: goto label_29c158;
        case 0x29c15cu: goto label_29c15c;
        case 0x29c160u: goto label_29c160;
        case 0x29c164u: goto label_29c164;
        case 0x29c168u: goto label_29c168;
        case 0x29c16cu: goto label_29c16c;
        case 0x29c170u: goto label_29c170;
        case 0x29c174u: goto label_29c174;
        case 0x29c178u: goto label_29c178;
        case 0x29c17cu: goto label_29c17c;
        case 0x29c180u: goto label_29c180;
        case 0x29c184u: goto label_29c184;
        case 0x29c188u: goto label_29c188;
        case 0x29c18cu: goto label_29c18c;
        case 0x29c190u: goto label_29c190;
        case 0x29c194u: goto label_29c194;
        case 0x29c198u: goto label_29c198;
        case 0x29c19cu: goto label_29c19c;
        case 0x29c1a0u: goto label_29c1a0;
        case 0x29c1a4u: goto label_29c1a4;
        case 0x29c1a8u: goto label_29c1a8;
        case 0x29c1acu: goto label_29c1ac;
        case 0x29c1b0u: goto label_29c1b0;
        case 0x29c1b4u: goto label_29c1b4;
        case 0x29c1b8u: goto label_29c1b8;
        case 0x29c1bcu: goto label_29c1bc;
        case 0x29c1c0u: goto label_29c1c0;
        case 0x29c1c4u: goto label_29c1c4;
        case 0x29c1c8u: goto label_29c1c8;
        case 0x29c1ccu: goto label_29c1cc;
        case 0x29c1d0u: goto label_29c1d0;
        case 0x29c1d4u: goto label_29c1d4;
        case 0x29c1d8u: goto label_29c1d8;
        case 0x29c1dcu: goto label_29c1dc;
        case 0x29c1e0u: goto label_29c1e0;
        case 0x29c1e4u: goto label_29c1e4;
        case 0x29c1e8u: goto label_29c1e8;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c1f0u: goto label_29c1f0;
        case 0x29c1f4u: goto label_29c1f4;
        case 0x29c1f8u: goto label_29c1f8;
        case 0x29c1fcu: goto label_29c1fc;
        case 0x29c200u: goto label_29c200;
        case 0x29c204u: goto label_29c204;
        case 0x29c208u: goto label_29c208;
        case 0x29c20cu: goto label_29c20c;
        case 0x29c210u: goto label_29c210;
        case 0x29c214u: goto label_29c214;
        case 0x29c218u: goto label_29c218;
        case 0x29c21cu: goto label_29c21c;
        case 0x29c220u: goto label_29c220;
        case 0x29c224u: goto label_29c224;
        case 0x29c228u: goto label_29c228;
        case 0x29c22cu: goto label_29c22c;
        case 0x29c230u: goto label_29c230;
        case 0x29c234u: goto label_29c234;
        case 0x29c238u: goto label_29c238;
        case 0x29c23cu: goto label_29c23c;
        case 0x29c240u: goto label_29c240;
        case 0x29c244u: goto label_29c244;
        case 0x29c248u: goto label_29c248;
        case 0x29c24cu: goto label_29c24c;
        case 0x29c250u: goto label_29c250;
        case 0x29c254u: goto label_29c254;
        case 0x29c258u: goto label_29c258;
        case 0x29c25cu: goto label_29c25c;
        case 0x29c260u: goto label_29c260;
        case 0x29c264u: goto label_29c264;
        case 0x29c268u: goto label_29c268;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c270u: goto label_29c270;
        case 0x29c274u: goto label_29c274;
        case 0x29c278u: goto label_29c278;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c280u: goto label_29c280;
        case 0x29c284u: goto label_29c284;
        case 0x29c288u: goto label_29c288;
        case 0x29c28cu: goto label_29c28c;
        case 0x29c290u: goto label_29c290;
        case 0x29c294u: goto label_29c294;
        case 0x29c298u: goto label_29c298;
        case 0x29c29cu: goto label_29c29c;
        case 0x29c2a0u: goto label_29c2a0;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2a8u: goto label_29c2a8;
        case 0x29c2acu: goto label_29c2ac;
        case 0x29c2b0u: goto label_29c2b0;
        case 0x29c2b4u: goto label_29c2b4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2bcu: goto label_29c2bc;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2c4u: goto label_29c2c4;
        case 0x29c2c8u: goto label_29c2c8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2d8u: goto label_29c2d8;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c2e4u: goto label_29c2e4;
        case 0x29c2e8u: goto label_29c2e8;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2f0u: goto label_29c2f0;
        case 0x29c2f4u: goto label_29c2f4;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c300u: goto label_29c300;
        case 0x29c304u: goto label_29c304;
        case 0x29c308u: goto label_29c308;
        case 0x29c30cu: goto label_29c30c;
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c320u: goto label_29c320;
        case 0x29c324u: goto label_29c324;
        case 0x29c328u: goto label_29c328;
        case 0x29c32cu: goto label_29c32c;
        case 0x29c330u: goto label_29c330;
        case 0x29c334u: goto label_29c334;
        case 0x29c338u: goto label_29c338;
        case 0x29c33cu: goto label_29c33c;
        case 0x29c340u: goto label_29c340;
        case 0x29c344u: goto label_29c344;
        case 0x29c348u: goto label_29c348;
        case 0x29c34cu: goto label_29c34c;
        case 0x29c350u: goto label_29c350;
        case 0x29c354u: goto label_29c354;
        case 0x29c358u: goto label_29c358;
        case 0x29c35cu: goto label_29c35c;
        case 0x29c360u: goto label_29c360;
        case 0x29c364u: goto label_29c364;
        case 0x29c368u: goto label_29c368;
        case 0x29c36cu: goto label_29c36c;
        case 0x29c370u: goto label_29c370;
        case 0x29c374u: goto label_29c374;
        case 0x29c378u: goto label_29c378;
        case 0x29c37cu: goto label_29c37c;
        case 0x29c380u: goto label_29c380;
        case 0x29c384u: goto label_29c384;
        case 0x29c388u: goto label_29c388;
        case 0x29c38cu: goto label_29c38c;
        case 0x29c390u: goto label_29c390;
        case 0x29c394u: goto label_29c394;
        case 0x29c398u: goto label_29c398;
        case 0x29c39cu: goto label_29c39c;
        case 0x29c3a0u: goto label_29c3a0;
        case 0x29c3a4u: goto label_29c3a4;
        case 0x29c3a8u: goto label_29c3a8;
        case 0x29c3acu: goto label_29c3ac;
        case 0x29c3b0u: goto label_29c3b0;
        case 0x29c3b4u: goto label_29c3b4;
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3bcu: goto label_29c3bc;
        case 0x29c3c0u: goto label_29c3c0;
        case 0x29c3c4u: goto label_29c3c4;
        case 0x29c3c8u: goto label_29c3c8;
        case 0x29c3ccu: goto label_29c3cc;
        case 0x29c3d0u: goto label_29c3d0;
        case 0x29c3d4u: goto label_29c3d4;
        case 0x29c3d8u: goto label_29c3d8;
        case 0x29c3dcu: goto label_29c3dc;
        case 0x29c3e0u: goto label_29c3e0;
        case 0x29c3e4u: goto label_29c3e4;
        case 0x29c3e8u: goto label_29c3e8;
        case 0x29c3ecu: goto label_29c3ec;
        case 0x29c3f0u: goto label_29c3f0;
        case 0x29c3f4u: goto label_29c3f4;
        case 0x29c3f8u: goto label_29c3f8;
        case 0x29c3fcu: goto label_29c3fc;
        case 0x29c400u: goto label_29c400;
        case 0x29c404u: goto label_29c404;
        case 0x29c408u: goto label_29c408;
        case 0x29c40cu: goto label_29c40c;
        case 0x29c410u: goto label_29c410;
        case 0x29c414u: goto label_29c414;
        case 0x29c418u: goto label_29c418;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c420u: goto label_29c420;
        case 0x29c424u: goto label_29c424;
        case 0x29c428u: goto label_29c428;
        case 0x29c42cu: goto label_29c42c;
        case 0x29c430u: goto label_29c430;
        case 0x29c434u: goto label_29c434;
        case 0x29c438u: goto label_29c438;
        case 0x29c43cu: goto label_29c43c;
        case 0x29c440u: goto label_29c440;
        case 0x29c444u: goto label_29c444;
        case 0x29c448u: goto label_29c448;
        case 0x29c44cu: goto label_29c44c;
        case 0x29c450u: goto label_29c450;
        case 0x29c454u: goto label_29c454;
        case 0x29c458u: goto label_29c458;
        case 0x29c45cu: goto label_29c45c;
        case 0x29c460u: goto label_29c460;
        case 0x29c464u: goto label_29c464;
        case 0x29c468u: goto label_29c468;
        case 0x29c46cu: goto label_29c46c;
        case 0x29c470u: goto label_29c470;
        case 0x29c474u: goto label_29c474;
        case 0x29c478u: goto label_29c478;
        case 0x29c47cu: goto label_29c47c;
        case 0x29c480u: goto label_29c480;
        case 0x29c484u: goto label_29c484;
        case 0x29c488u: goto label_29c488;
        case 0x29c48cu: goto label_29c48c;
        case 0x29c490u: goto label_29c490;
        case 0x29c494u: goto label_29c494;
        case 0x29c498u: goto label_29c498;
        case 0x29c49cu: goto label_29c49c;
        case 0x29c4a0u: goto label_29c4a0;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4a8u: goto label_29c4a8;
        case 0x29c4acu: goto label_29c4ac;
        case 0x29c4b0u: goto label_29c4b0;
        case 0x29c4b4u: goto label_29c4b4;
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4bcu: goto label_29c4bc;
        case 0x29c4c0u: goto label_29c4c0;
        case 0x29c4c4u: goto label_29c4c4;
        case 0x29c4c8u: goto label_29c4c8;
        case 0x29c4ccu: goto label_29c4cc;
        case 0x29c4d0u: goto label_29c4d0;
        case 0x29c4d4u: goto label_29c4d4;
        case 0x29c4d8u: goto label_29c4d8;
        case 0x29c4dcu: goto label_29c4dc;
        case 0x29c4e0u: goto label_29c4e0;
        case 0x29c4e4u: goto label_29c4e4;
        case 0x29c4e8u: goto label_29c4e8;
        case 0x29c4ecu: goto label_29c4ec;
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c4f8u: goto label_29c4f8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c500u: goto label_29c500;
        case 0x29c504u: goto label_29c504;
        case 0x29c508u: goto label_29c508;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c510u: goto label_29c510;
        case 0x29c514u: goto label_29c514;
        case 0x29c518u: goto label_29c518;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        default: return;
    }

label_29bd80:
    // 0x29bd80: 0x34ccf  .word       0x00034CCF                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29bd84:
    // 0x29bd84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd88:
    // 0x29bd88: 0x1e8  .word       0x000001E8                   # mfsa        $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29bd88u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29bd8c:
    // 0x29bd8c: 0x0  nop
    ctx->pc = 0x29bd8cu;
    // NOP
label_29bd90:
    // 0x29bd90: 0x34cd0  .word       0x00034CD0                   # mfhi        $t1 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd90u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29bd94:
    // 0x29bd94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bd94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bd98:
    // 0x29bd98: 0x976  tne         $zero, $zero, 37
    ctx->pc = 0x29bd98u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29bd9c:
    // 0x29bd9c: 0x0  nop
    ctx->pc = 0x29bd9cu;
    // NOP
label_29bda0:
    // 0x29bda0: 0x34cd2  .word       0x00034CD2                   # mflo        $t1 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bda0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_29bda4:
    // 0x29bda4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bda4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BDA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bda8:
    // 0x29bda8: 0x4ae  .word       0x000004AE                   # dsub        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bda8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29bdac:
    // 0x29bdac: 0x0  nop
    ctx->pc = 0x29bdacu;
    // NOP
label_29bdb0:
    // 0x29bdb0: 0x34cd3  .word       0x00034CD3                   # mtlo        $zero # 00034CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29bdb4:
    // 0x29bdb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BDB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bdb8:
    // 0x29bdb8: 0x50a  .word       0x0000050A                   # movz        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdb8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29bdbc:
    // 0x29bdbc: 0x0  nop
    ctx->pc = 0x29bdbcu;
    // NOP
label_29bdc0:
    // 0x29bdc0: 0x34cd4  .word       0x00034CD4                   # dsllv       $t1, $v1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29bdc4:
    // 0x29bdc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BDC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bdc8:
    // 0x29bdc8: 0x314  .word       0x00000314                   # dsllv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29bdcc:
    // 0x29bdcc: 0x0  nop
    ctx->pc = 0x29bdccu;
    // NOP
label_29bdd0:
    // 0x29bdd0: 0x34cd5  .word       0x00034CD5                   # INVALID     $zero, $v1, 0x4CD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29BDD0 raw=0x00034CD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bdd4:
    // 0x29bdd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BDD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bdd8:
    // 0x29bdd8: 0x7a3  .word       0x000007A3                   # negu        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29bddc:
    // 0x29bddc: 0x0  nop
    ctx->pc = 0x29bddcu;
    // NOP
label_29bde0:
    // 0x29bde0: 0x34cd6  .word       0x00034CD6                   # dsrlv       $t1, $v1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bde0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29bde4:
    // 0x29bde4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bde8:
    // 0x29bde8: 0x80f  .word       0x0000080F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bde8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29bdec:
    // 0x29bdec: 0x0  nop
    ctx->pc = 0x29bdecu;
    // NOP
label_29bdf0:
    // 0x29bdf0: 0x34cd8  .word       0x00034CD8                   # mult        $t1, $zero, $v1 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29bdf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29bdf4:
    // 0x29bdf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BDF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bdf8:
    // 0x29bdf8: 0x165  .word       0x00000165                   # move        $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29bdfc:
    // 0x29bdfc: 0x0  nop
    ctx->pc = 0x29bdfcu;
    // NOP
label_29be00:
    // 0x29be00: 0x34cd9  .word       0x00034CD9                   # multu       $zero, $v1 # 00004CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29be04:
    // 0x29be04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be08:
    // 0x29be08: 0x189  .word       0x00000189                   # jalr        $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_29be0c:
    if (ctx->pc == 0x29BE0Cu) {
        ctx->pc = 0x29BE10u;
        goto label_29be10;
    }
    ctx->pc = 0x29BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE08u, 0x29BE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BE10u;
label_29be10:
    // 0x29be10: 0x34cda  .word       0x00034CDA                   # div         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be10u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29be14:
    // 0x29be14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be18:
    // 0x29be18: 0x242  srl         $zero, $zero, 9
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_29be1c:
    // 0x29be1c: 0x0  nop
    ctx->pc = 0x29be1cu;
    // NOP
label_29be20:
    // 0x29be20: 0x34cdb  .word       0x00034CDB                   # divu        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29be24:
    // 0x29be24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be28:
    // 0x29be28: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be28u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be2c:
    // 0x29be2c: 0x0  nop
    ctx->pc = 0x29be2cu;
    // NOP
label_29be30:
    // 0x29be30: 0x34cdc  .word       0x00034CDC                   # dmult       $zero, $v1 # 00004CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29BE30 raw=0x00034CDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be34:
    // 0x29be34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be38:
    // 0x29be38: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be38u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be3c:
    // 0x29be3c: 0x0  nop
    ctx->pc = 0x29be3cu;
    // NOP
label_29be40:
    // 0x29be40: 0x34cdd  .word       0x00034CDD                   # dmultu      $zero, $v1 # 00004CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29BE40 raw=0x00034CDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be44:
    // 0x29be44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be48:
    // 0x29be48: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be48u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be4c:
    // 0x29be4c: 0x0  nop
    ctx->pc = 0x29be4cu;
    // NOP
label_29be50:
    // 0x29be50: 0x34cde  .word       0x00034CDE                   # ddiv        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29BE50 raw=0x00034CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be54:
    // 0x29be54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be58:
    // 0x29be58: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be58u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be5c:
    // 0x29be5c: 0x0  nop
    ctx->pc = 0x29be5cu;
    // NOP
label_29be60:
    // 0x29be60: 0x34cdf  .word       0x00034CDF                   # ddivu       $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29BE60 raw=0x00034CDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be64:
    // 0x29be64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be68:
    // 0x29be68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be6c:
    // 0x29be6c: 0x0  nop
    ctx->pc = 0x29be6cu;
    // NOP
label_29be70:
    // 0x29be70: 0x34ce0  .word       0x00034CE0                   # add         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29be74:
    // 0x29be74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be78:
    // 0x29be78: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be78u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be7c:
    // 0x29be7c: 0x0  nop
    ctx->pc = 0x29be7cu;
    // NOP
label_29be80:
    // 0x29be80: 0x34ce1  .word       0x00034CE1                   # addu        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29be84:
    // 0x29be84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BE84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29be88:
    // 0x29be88: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29be8c:
    // 0x29be8c: 0x0  nop
    ctx->pc = 0x29be8cu;
    // NOP
label_29be90:
    // 0x29be90: 0x34ce2  .word       0x00034CE2                   # neg         $t1, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29be90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_29be94:
    // 0x29be94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29be94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29be98:
    // 0x29be98: 0xa3a  dsrl        $at, $zero, 8
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 8);
label_29be9c:
    // 0x29be9c: 0x0  nop
    ctx->pc = 0x29be9cu;
    // NOP
label_29bea0:
    // 0x29bea0: 0x34ce4  .word       0x00034CE4                   # and         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_29bea4:
    // 0x29bea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BEA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bea8:
    // 0x29bea8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bea8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29beac:
    // 0x29beac: 0x0  nop
    ctx->pc = 0x29beacu;
    // NOP
label_29beb0:
    // 0x29beb0: 0x34ce5  .word       0x00034CE5                   # or          $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29beb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29beb4:
    // 0x29beb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29beb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BEB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29beb8:
    // 0x29beb8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29beb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bebc:
    // 0x29bebc: 0x0  nop
    ctx->pc = 0x29bebcu;
    // NOP
label_29bec0:
    // 0x29bec0: 0x34ce6  .word       0x00034CE6                   # xor         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_29bec4:
    // 0x29bec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bec4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BEC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bec8:
    // 0x29bec8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bec8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29becc:
    // 0x29becc: 0x0  nop
    ctx->pc = 0x29beccu;
    // NOP
label_29bed0:
    // 0x29bed0: 0x34ce7  .word       0x00034CE7                   # nor         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bed0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29bed4:
    // 0x29bed4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bed4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BED4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bed8:
    // 0x29bed8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bed8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bedc:
    // 0x29bedc: 0x0  nop
    ctx->pc = 0x29bedcu;
    // NOP
label_29bee0:
    // 0x29bee0: 0x34ce8  .word       0x00034CE8                   # mfsa        $t1 # 000304C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29bee0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_29bee4:
    // 0x29bee4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bee4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bee8:
    // 0x29bee8: 0xaf6  tne         $zero, $zero, 43
    ctx->pc = 0x29bee8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29beec:
    // 0x29beec: 0x0  nop
    ctx->pc = 0x29beecu;
    // NOP
label_29bef0:
    // 0x29bef0: 0x34cea  .word       0x00034CEA                   # slt         $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bef0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29bef4:
    // 0x29bef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BEF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bef8:
    // 0x29bef8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bef8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29befc:
    // 0x29befc: 0x0  nop
    ctx->pc = 0x29befcu;
    // NOP
label_29bf00:
    // 0x29bf00: 0x34ceb  .word       0x00034CEB                   # sltu        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf00u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29bf04:
    // 0x29bf04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf08:
    // 0x29bf08: 0x9  jalr        $zero, $zero
label_29bf0c:
    if (ctx->pc == 0x29BF0Cu) {
        ctx->pc = 0x29BF10u;
        goto label_29bf10;
    }
    ctx->pc = 0x29BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF08u, 0x29BF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BF10u;
label_29bf10:
    // 0x29bf10: 0x34cec  .word       0x00034CEC                   # dadd        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29bf14:
    // 0x29bf14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf18:
    // 0x29bf18: 0x508  .word       0x00000508                   # jr          $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_29bf1c:
    if (ctx->pc == 0x29BF1Cu) {
        ctx->pc = 0x29BF20u;
        goto label_29bf20;
    }
    ctx->pc = 0x29BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29BF20u;
label_29bf20:
    // 0x29bf20: 0x34ced  .word       0x00034CED                   # daddu       $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29bf24:
    // 0x29bf24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf28:
    // 0x29bf28: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf28u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf2c:
    // 0x29bf2c: 0x0  nop
    ctx->pc = 0x29bf2cu;
    // NOP
label_29bf30:
    // 0x29bf30: 0x34cee  .word       0x00034CEE                   # dsub        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29bf34:
    // 0x29bf34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf38:
    // 0x29bf38: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf38u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf3c:
    // 0x29bf3c: 0x0  nop
    ctx->pc = 0x29bf3cu;
    // NOP
label_29bf40:
    // 0x29bf40: 0x34cef  .word       0x00034CEF                   # dsubu       $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29bf44:
    // 0x29bf44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf48:
    // 0x29bf48: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf48u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf4c:
    // 0x29bf4c: 0x0  nop
    ctx->pc = 0x29bf4cu;
    // NOP
label_29bf50:
    // 0x29bf50: 0x34cf0  tge         $zero, $v1, 307
    ctx->pc = 0x29bf50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bf54:
    // 0x29bf54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf58:
    // 0x29bf58: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf5c:
    // 0x29bf5c: 0x0  nop
    ctx->pc = 0x29bf5cu;
    // NOP
label_29bf60:
    // 0x29bf60: 0x34cf1  tgeu        $zero, $v1, 307
    ctx->pc = 0x29bf60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bf64:
    // 0x29bf64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bf64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bf68:
    // 0x29bf68: 0x886  .word       0x00000886                   # srlv        $at, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf68u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf6c:
    // 0x29bf6c: 0x0  nop
    ctx->pc = 0x29bf6cu;
    // NOP
label_29bf70:
    // 0x29bf70: 0x34cf3  tltu        $zero, $v1, 307
    ctx->pc = 0x29bf70u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bf74:
    // 0x29bf74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf78:
    // 0x29bf78: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf78u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf7c:
    // 0x29bf7c: 0x0  nop
    ctx->pc = 0x29bf7cu;
    // NOP
label_29bf80:
    // 0x29bf80: 0x34cf4  teq         $zero, $v1, 307
    ctx->pc = 0x29bf80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bf84:
    // 0x29bf84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BF84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf88:
    // 0x29bf88: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf88u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf8c:
    // 0x29bf8c: 0x0  nop
    ctx->pc = 0x29bf8cu;
    // NOP
label_29bf90:
    // 0x29bf90: 0x34cf5  .word       0x00034CF5                   # INVALID     $zero, $v1, 0x4CF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29BF90 raw=0x00034CF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf94:
    // 0x29bf94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bf94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bf98:
    // 0x29bf98: 0x1b0e  .word       0x00001B0E                   # INVALID     $zero, $zero, 0x1B0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bf98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29BF98 raw=0x00001B0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bf9c:
    // 0x29bf9c: 0x0  nop
    ctx->pc = 0x29bf9cu;
    // NOP
label_29bfa0:
    // 0x29bfa0: 0x34cf9  .word       0x00034CF9                   # INVALID     $zero, $v1, 0x4CF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29BFA0 raw=0x00034CF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bfa4:
    // 0x29bfa4: 0xf  sync
    ctx->pc = 0x29bfa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29bfa8:
    // 0x29bfa8: 0x750c  syscall     468
    ctx->pc = 0x29bfa8u;
    ctx->pc = 0x29BFACu;
runtime->handleSyscall(rdram, ctx, 0x1D4u);
label_29bfac:
    // 0x29bfac: 0x0  nop
    ctx->pc = 0x29bfacu;
    // NOP
label_29bfb0:
    // 0x29bfb0: 0x34d08  .word       0x00034D08                   # jr          $zero # 00034D00 <InstrIdType: CPU_SPECIAL>
label_29bfb4:
    if (ctx->pc == 0x29BFB4u) {
        ctx->pc = 0x29BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFB0u;
        // 0x29bfb4: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFB8u;
        goto label_29bfb8;
    }
    ctx->pc = 0x29BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFB0u;
        // 0x29bfb4: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BFB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29BFB8u;
label_29bfb8:
    // 0x29bfb8: 0x8da  .word       0x000008DA                   # div         $at, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfb8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29bfbc:
    // 0x29bfbc: 0x0  nop
    ctx->pc = 0x29bfbcu;
    // NOP
label_29bfc0:
    // 0x29bfc0: 0x34d0a  .word       0x00034D0A                   # movz        $t1, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29bfc4:
    // 0x29bfc4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29bfc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bfc8:
    // 0x29bfc8: 0x2bb1  tgeu        $zero, $zero, 174
    ctx->pc = 0x29bfc8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29bfcc:
    // 0x29bfcc: 0x0  nop
    ctx->pc = 0x29bfccu;
    // NOP
label_29bfd0:
    // 0x29bfd0: 0x34d10  .word       0x00034D10                   # mfhi        $t1 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfd0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29bfd4:
    // 0x29bfd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BFD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bfd8:
    // 0x29bfd8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x29bfd8u;
    
label_29bfdc:
    // 0x29bfdc: 0x0  nop
    ctx->pc = 0x29bfdcu;
    // NOP
label_29bfe0:
    // 0x29bfe0: 0x34d11  .word       0x00034D11                   # mthi        $zero # 00034D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bfe0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29bfe4:
    // 0x29bfe4: 0x27  not         $zero, $zero
    ctx->pc = 0x29bfe4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29bfe8:
    // 0x29bfe8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29bfec:
    // 0x29bfec: 0x0  nop
    ctx->pc = 0x29bfecu;
    // NOP
label_29bff0:
    // 0x29bff0: 0x34d38  dsll        $t1, $v1, 20
    ctx->pc = 0x29bff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 20);
label_29bff4:
    // 0x29bff4: 0x27  not         $zero, $zero
    ctx->pc = 0x29bff4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29bff8:
    // 0x29bff8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29bffc:
    // 0x29bffc: 0x0  nop
    ctx->pc = 0x29bffcu;
    // NOP
label_29c000:
    // 0x29c000: 0x34d5f  .word       0x00034D5F                   # ddivu       $t1, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29C000 raw=0x00034D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c004:
    // 0x29c004: 0x27  not         $zero, $zero
    ctx->pc = 0x29c004u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c008:
    // 0x29c008: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c00c:
    // 0x29c00c: 0x0  nop
    ctx->pc = 0x29c00cu;
    // NOP
label_29c010:
    // 0x29c010: 0x34d86  .word       0x00034D86                   # srlv        $t1, $v1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c014:
    // 0x29c014: 0x27  not         $zero, $zero
    ctx->pc = 0x29c014u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c018:
    // 0x29c018: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c018u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c01c:
    // 0x29c01c: 0x0  nop
    ctx->pc = 0x29c01cu;
    // NOP
label_29c020:
    // 0x29c020: 0x34dad  .word       0x00034DAD                   # daddu       $t1, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29c024:
    // 0x29c024: 0x27  not         $zero, $zero
    ctx->pc = 0x29c024u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c028:
    // 0x29c028: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c02c:
    // 0x29c02c: 0x0  nop
    ctx->pc = 0x29c02cu;
    // NOP
label_29c030:
    // 0x29c030: 0x34dd4  .word       0x00034DD4                   # dsllv       $t1, $v1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c030u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29c034:
    // 0x29c034: 0x27  not         $zero, $zero
    ctx->pc = 0x29c034u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c038:
    // 0x29c038: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c03c:
    // 0x29c03c: 0x0  nop
    ctx->pc = 0x29c03cu;
    // NOP
label_29c040:
    // 0x29c040: 0x34dfb  dsra        $t1, $v1, 23
    ctx->pc = 0x29c040u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 23);
label_29c044:
    // 0x29c044: 0x27  not         $zero, $zero
    ctx->pc = 0x29c044u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c048:
    // 0x29c048: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c04c:
    // 0x29c04c: 0x0  nop
    ctx->pc = 0x29c04cu;
    // NOP
label_29c050:
    // 0x29c050: 0x34e22  .word       0x00034E22                   # neg         $t1, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c050u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_29c054:
    // 0x29c054: 0x27  not         $zero, $zero
    ctx->pc = 0x29c054u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c058:
    // 0x29c058: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c05c:
    // 0x29c05c: 0x0  nop
    ctx->pc = 0x29c05cu;
    // NOP
label_29c060:
    // 0x29c060: 0x34e49  .word       0x00034E49                   # jalr        $t1, $zero # 00030640 <InstrIdType: CPU_SPECIAL>
label_29c064:
    if (ctx->pc == 0x29C064u) {
        ctx->pc = 0x29C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C060u;
        // 0x29c064: 0x27  not         $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C068u;
        goto label_29c068;
    }
    ctx->pc = 0x29C060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29C068u);
        ctx->pc = 0x29C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C060u;
        // 0x29c064: 0x27  not         $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C060u, 0x29C068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C068u;
label_29c068:
    // 0x29c068: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c068u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c06c:
    // 0x29c06c: 0x0  nop
    ctx->pc = 0x29c06cu;
    // NOP
label_29c070:
    // 0x29c070: 0x34e70  tge         $zero, $v1, 313
    ctx->pc = 0x29c070u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c074:
    // 0x29c074: 0x27  not         $zero, $zero
    ctx->pc = 0x29c074u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c078:
    // 0x29c078: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c078u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c07c:
    // 0x29c07c: 0x0  nop
    ctx->pc = 0x29c07cu;
    // NOP
label_29c080:
    // 0x29c080: 0x34e97  .word       0x00034E97                   # dsrav       $t1, $v1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c080u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29c084:
    // 0x29c084: 0x27  not         $zero, $zero
    ctx->pc = 0x29c084u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c088:
    // 0x29c088: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c08c:
    // 0x29c08c: 0x0  nop
    ctx->pc = 0x29c08cu;
    // NOP
label_29c090:
    // 0x29c090: 0x34ebe  dsrl32      $t1, $v1, 26
    ctx->pc = 0x29c090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 26));
label_29c094:
    // 0x29c094: 0x27  not         $zero, $zero
    ctx->pc = 0x29c094u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c098:
    // 0x29c098: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c09c:
    // 0x29c09c: 0x0  nop
    ctx->pc = 0x29c09cu;
    // NOP
label_29c0a0:
    // 0x29c0a0: 0x34ee5  .word       0x00034EE5                   # or          $t1, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c0a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29c0a4:
    // 0x29c0a4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0a4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0a8:
    // 0x29c0a8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0ac:
    // 0x29c0ac: 0x0  nop
    ctx->pc = 0x29c0acu;
    // NOP
label_29c0b0:
    // 0x29c0b0: 0x34f0c  .word       0x00034F0C                   # syscall     316 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c0b0u;
    ctx->pc = 0x29C0B4u;
runtime->handleSyscall(rdram, ctx, 0xD3Cu);
label_29c0b4:
    // 0x29c0b4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0b4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0b8:
    // 0x29c0b8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0bc:
    // 0x29c0bc: 0x0  nop
    ctx->pc = 0x29c0bcu;
    // NOP
label_29c0c0:
    // 0x29c0c0: 0x34f33  tltu        $zero, $v1, 316
    ctx->pc = 0x29c0c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c0c4:
    // 0x29c0c4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0c4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0c8:
    // 0x29c0c8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0cc:
    // 0x29c0cc: 0x0  nop
    ctx->pc = 0x29c0ccu;
    // NOP
label_29c0d0:
    // 0x29c0d0: 0x34f5a  .word       0x00034F5A                   # div         $t1, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c0d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29c0d4:
    // 0x29c0d4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0d8:
    // 0x29c0d8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0dc:
    // 0x29c0dc: 0x0  nop
    ctx->pc = 0x29c0dcu;
    // NOP
label_29c0e0:
    // 0x29c0e0: 0x34f81  .word       0x00034F81                   # INVALID     $zero, $v1, 0x4F81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C0E0 raw=0x00034F81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c0e4:
    // 0x29c0e4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0e8:
    // 0x29c0e8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0ec:
    // 0x29c0ec: 0x0  nop
    ctx->pc = 0x29c0ecu;
    // NOP
label_29c0f0:
    // 0x29c0f0: 0x34fa8  .word       0x00034FA8                   # mfsa        $t1 # 00030780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c0f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_29c0f4:
    // 0x29c0f4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c0f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c0f8:
    // 0x29c0f8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c0fc:
    // 0x29c0fc: 0x0  nop
    ctx->pc = 0x29c0fcu;
    // NOP
label_29c100:
    // 0x29c100: 0x34fcf  .word       0x00034FCF                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c104:
    // 0x29c104: 0x27  not         $zero, $zero
    ctx->pc = 0x29c104u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c108:
    // 0x29c108: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c10c:
    // 0x29c10c: 0x0  nop
    ctx->pc = 0x29c10cu;
    // NOP
label_29c110:
    // 0x29c110: 0x34ff6  tne         $zero, $v1, 319
    ctx->pc = 0x29c110u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c114:
    // 0x29c114: 0x27  not         $zero, $zero
    ctx->pc = 0x29c114u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c118:
    // 0x29c118: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c118u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c11c:
    // 0x29c11c: 0x0  nop
    ctx->pc = 0x29c11cu;
    // NOP
label_29c120:
    // 0x29c120: 0x3501d  .word       0x0003501D                   # dmultu      $zero, $v1 # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29C120 raw=0x0003501D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c124:
    // 0x29c124: 0x27  not         $zero, $zero
    ctx->pc = 0x29c124u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c128:
    // 0x29c128: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c12c:
    // 0x29c12c: 0x0  nop
    ctx->pc = 0x29c12cu;
    // NOP
label_29c130:
    // 0x29c130: 0x35044  .word       0x00035044                   # sllv        $t2, $v1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c130u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c134:
    // 0x29c134: 0x27  not         $zero, $zero
    ctx->pc = 0x29c134u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c138:
    // 0x29c138: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c13c:
    // 0x29c13c: 0x0  nop
    ctx->pc = 0x29c13cu;
    // NOP
label_29c140:
    // 0x29c140: 0x3506b  .word       0x0003506B                   # sltu        $t2, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c140u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c144:
    // 0x29c144: 0x27  not         $zero, $zero
    ctx->pc = 0x29c144u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c148:
    // 0x29c148: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c14c:
    // 0x29c14c: 0x0  nop
    ctx->pc = 0x29c14cu;
    // NOP
label_29c150:
    // 0x29c150: 0x35092  .word       0x00035092                   # mflo        $t2 # 00030080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c150u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_29c154:
    // 0x29c154: 0x27  not         $zero, $zero
    ctx->pc = 0x29c154u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c158:
    // 0x29c158: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c15c:
    // 0x29c15c: 0x0  nop
    ctx->pc = 0x29c15cu;
    // NOP
label_29c160:
    // 0x29c160: 0x350b9  .word       0x000350B9                   # INVALID     $zero, $v1, 0x50B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29C160 raw=0x000350B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c164:
    // 0x29c164: 0x27  not         $zero, $zero
    ctx->pc = 0x29c164u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c168:
    // 0x29c168: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c16c:
    // 0x29c16c: 0x0  nop
    ctx->pc = 0x29c16cu;
    // NOP
label_29c170:
    // 0x29c170: 0x350e0  .word       0x000350E0                   # add         $t2, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c170u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29c174:
    // 0x29c174: 0x27  not         $zero, $zero
    ctx->pc = 0x29c174u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c178:
    // 0x29c178: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c17c:
    // 0x29c17c: 0x0  nop
    ctx->pc = 0x29c17cu;
    // NOP
label_29c180:
    // 0x29c180: 0x35107  .word       0x00035107                   # srav        $t2, $v1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c180u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c184:
    // 0x29c184: 0x27  not         $zero, $zero
    ctx->pc = 0x29c184u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c188:
    // 0x29c188: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c188u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c18c:
    // 0x29c18c: 0x0  nop
    ctx->pc = 0x29c18cu;
    // NOP
label_29c190:
    // 0x29c190: 0x3512e  .word       0x0003512E                   # dsub        $t2, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_29c194:
    // 0x29c194: 0x27  not         $zero, $zero
    ctx->pc = 0x29c194u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c198:
    // 0x29c198: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c19c:
    // 0x29c19c: 0x0  nop
    ctx->pc = 0x29c19cu;
    // NOP
label_29c1a0:
    // 0x29c1a0: 0x35155  .word       0x00035155                   # INVALID     $zero, $v1, 0x5155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29C1A0 raw=0x00035155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c1a4:
    // 0x29c1a4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1a4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1a8:
    // 0x29c1a8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1ac:
    // 0x29c1ac: 0x0  nop
    ctx->pc = 0x29c1acu;
    // NOP
label_29c1b0:
    // 0x29c1b0: 0x3517c  dsll32      $t2, $v1, 5
    ctx->pc = 0x29c1b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 5));
label_29c1b4:
    // 0x29c1b4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1b4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1b8:
    // 0x29c1b8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1bc:
    // 0x29c1bc: 0x0  nop
    ctx->pc = 0x29c1bcu;
    // NOP
label_29c1c0:
    // 0x29c1c0: 0x351a3  .word       0x000351A3                   # negu        $t2, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29c1c4:
    // 0x29c1c4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1c4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1c8:
    // 0x29c1c8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1cc:
    // 0x29c1cc: 0x0  nop
    ctx->pc = 0x29c1ccu;
    // NOP
label_29c1d0:
    // 0x29c1d0: 0x351ca  .word       0x000351CA                   # movz        $t2, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c1d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_29c1d4:
    // 0x29c1d4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1d8:
    // 0x29c1d8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1dc:
    // 0x29c1dc: 0x0  nop
    ctx->pc = 0x29c1dcu;
    // NOP
label_29c1e0:
    // 0x29c1e0: 0x351f1  tgeu        $zero, $v1, 327
    ctx->pc = 0x29c1e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c1e4:
    // 0x29c1e4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1e8:
    // 0x29c1e8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1ec:
    // 0x29c1ec: 0x0  nop
    ctx->pc = 0x29c1ecu;
    // NOP
label_29c1f0:
    // 0x29c1f0: 0x35218  .word       0x00035218                   # mult        $t2, $zero, $v1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_29c1f4:
    // 0x29c1f4: 0x27  not         $zero, $zero
    ctx->pc = 0x29c1f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c1f8:
    // 0x29c1f8: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c1fc:
    // 0x29c1fc: 0x0  nop
    ctx->pc = 0x29c1fcu;
    // NOP
label_29c200:
    // 0x29c200: 0x3523f  dsra32      $t2, $v1, 8
    ctx->pc = 0x29c200u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 3) >> (32 + 8));
label_29c204:
    // 0x29c204: 0x27  not         $zero, $zero
    ctx->pc = 0x29c204u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c208:
    // 0x29c208: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c20c:
    // 0x29c20c: 0x0  nop
    ctx->pc = 0x29c20cu;
    // NOP
label_29c210:
    // 0x29c210: 0x35266  .word       0x00035266                   # xor         $t2, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c210u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_29c214:
    // 0x29c214: 0x27  not         $zero, $zero
    ctx->pc = 0x29c214u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c218:
    // 0x29c218: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c21c:
    // 0x29c21c: 0x0  nop
    ctx->pc = 0x29c21cu;
    // NOP
label_29c220:
    // 0x29c220: 0x3528d  break       3, 330
    ctx->pc = 0x29c220u;
    runtime->handleBreak(rdram, ctx);
label_29c224:
    // 0x29c224: 0x27  not         $zero, $zero
    ctx->pc = 0x29c224u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c228:
    // 0x29c228: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c228u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c22c:
    // 0x29c22c: 0x0  nop
    ctx->pc = 0x29c22cu;
    // NOP
label_29c230:
    // 0x29c230: 0x352b4  teq         $zero, $v1, 330
    ctx->pc = 0x29c230u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c234:
    // 0x29c234: 0x27  not         $zero, $zero
    ctx->pc = 0x29c234u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c238:
    // 0x29c238: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c238u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c23c:
    // 0x29c23c: 0x0  nop
    ctx->pc = 0x29c23cu;
    // NOP
label_29c240:
    // 0x29c240: 0x352db  .word       0x000352DB                   # divu        $t2, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29c244:
    // 0x29c244: 0x27  not         $zero, $zero
    ctx->pc = 0x29c244u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c248:
    // 0x29c248: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c24c:
    // 0x29c24c: 0x0  nop
    ctx->pc = 0x29c24cu;
    // NOP
label_29c250:
    // 0x29c250: 0x35302  srl         $t2, $v1, 12
    ctx->pc = 0x29c250u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_29c254:
    // 0x29c254: 0x27  not         $zero, $zero
    ctx->pc = 0x29c254u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c258:
    // 0x29c258: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c25c:
    // 0x29c25c: 0x0  nop
    ctx->pc = 0x29c25cu;
    // NOP
label_29c260:
    // 0x29c260: 0x35329  .word       0x00035329                   # mtsa        $zero # 00035300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c260u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29c264:
    // 0x29c264: 0x27  not         $zero, $zero
    ctx->pc = 0x29c264u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c268:
    // 0x29c268: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c26c:
    // 0x29c26c: 0x0  nop
    ctx->pc = 0x29c26cu;
    // NOP
label_29c270:
    // 0x29c270: 0x35350  .word       0x00035350                   # mfhi        $t2 # 00030340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c270u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_29c274:
    // 0x29c274: 0x27  not         $zero, $zero
    ctx->pc = 0x29c274u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c278:
    // 0x29c278: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c27c:
    // 0x29c27c: 0x0  nop
    ctx->pc = 0x29c27cu;
    // NOP
label_29c280:
    // 0x29c280: 0x35377  .word       0x00035377                   # INVALID     $zero, $v1, 0x5377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C280 raw=0x00035377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c284:
    // 0x29c284: 0x27  not         $zero, $zero
    ctx->pc = 0x29c284u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c288:
    // 0x29c288: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c28c:
    // 0x29c28c: 0x0  nop
    ctx->pc = 0x29c28cu;
    // NOP
label_29c290:
    // 0x29c290: 0x3539e  .word       0x0003539E                   # ddiv        $t2, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c290u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29C290 raw=0x0003539E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c294:
    // 0x29c294: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C294 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c298:
    // 0x29c298: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c29c:
    // 0x29c29c: 0x0  nop
    ctx->pc = 0x29c29cu;
    // NOP
label_29c2a0:
    // 0x29c2a0: 0x353db  .word       0x000353DB                   # divu        $t2, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29c2a4:
    // 0x29c2a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2A4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2a8:
    // 0x29c2a8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2ac:
    // 0x29c2ac: 0x0  nop
    ctx->pc = 0x29c2acu;
    // NOP
label_29c2b0:
    // 0x29c2b0: 0x35418  .word       0x00035418                   # mult        $t2, $zero, $v1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_29c2b4:
    // 0x29c2b4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2B4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2b8:
    // 0x29c2b8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2bc:
    // 0x29c2bc: 0x0  nop
    ctx->pc = 0x29c2bcu;
    // NOP
label_29c2c0:
    // 0x29c2c0: 0x35455  .word       0x00035455                   # INVALID     $zero, $v1, 0x5455 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29C2C0 raw=0x00035455"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2c4:
    // 0x29c2c4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2C4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2c8:
    // 0x29c2c8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2cc:
    // 0x29c2cc: 0x0  nop
    ctx->pc = 0x29c2ccu;
    // NOP
label_29c2d0:
    // 0x29c2d0: 0x35492  .word       0x00035492                   # mflo        $t2 # 00030480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2d0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_29c2d4:
    // 0x29c2d4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2D4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2d8:
    // 0x29c2d8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2dc:
    // 0x29c2dc: 0x0  nop
    ctx->pc = 0x29c2dcu;
    // NOP
label_29c2e0:
    // 0x29c2e0: 0x354cf  .word       0x000354CF                   # sync.p # 00035000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c2e4:
    // 0x29c2e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2E4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2e8:
    // 0x29c2e8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2ec:
    // 0x29c2ec: 0x0  nop
    ctx->pc = 0x29c2ecu;
    // NOP
label_29c2f0:
    // 0x29c2f0: 0x3550c  .word       0x0003550C                   # syscall     340 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2f0u;
    ctx->pc = 0x29C2F4u;
runtime->handleSyscall(rdram, ctx, 0xD54u);
label_29c2f4:
    // 0x29c2f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c2f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C2F4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c2f8:
    // 0x29c2f8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c2fc:
    // 0x29c2fc: 0x0  nop
    ctx->pc = 0x29c2fcu;
    // NOP
label_29c300:
    // 0x29c300: 0x35549  .word       0x00035549                   # jalr        $t2, $zero # 00030540 <InstrIdType: CPU_SPECIAL>
label_29c304:
    if (ctx->pc == 0x29C304u) {
        ctx->pc = 0x29C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C300u;
        // 0x29c304: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C304 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C308u;
        goto label_29c308;
    }
    ctx->pc = 0x29C300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x29C308u);
        ctx->pc = 0x29C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C300u;
        // 0x29c304: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C304 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C300u, 0x29C308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C308u;
label_29c308:
    // 0x29c308: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c308u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c30c:
    // 0x29c30c: 0x0  nop
    ctx->pc = 0x29c30cu;
    // NOP
label_29c310:
    // 0x29c310: 0x35586  .word       0x00035586                   # srlv        $t2, $v1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c310u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c314:
    // 0x29c314: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c314u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C314 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c318:
    // 0x29c318: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c318u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c31c:
    // 0x29c31c: 0x0  nop
    ctx->pc = 0x29c31cu;
    // NOP
label_29c320:
    // 0x29c320: 0x355c3  sra         $t2, $v1, 23
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 23));
label_29c324:
    // 0x29c324: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C324 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c328:
    // 0x29c328: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c328u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c32c:
    // 0x29c32c: 0x0  nop
    ctx->pc = 0x29c32cu;
    // NOP
label_29c330:
    // 0x29c330: 0x35600  sll         $t2, $v1, 24
    ctx->pc = 0x29c330u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_29c334:
    // 0x29c334: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C334 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c338:
    // 0x29c338: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c338u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c33c:
    // 0x29c33c: 0x0  nop
    ctx->pc = 0x29c33cu;
    // NOP
label_29c340:
    // 0x29c340: 0x3563d  .word       0x0003563D                   # INVALID     $zero, $v1, 0x563D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C340 raw=0x0003563D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c344:
    // 0x29c344: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C344 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c348:
    // 0x29c348: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c348u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c34c:
    // 0x29c34c: 0x0  nop
    ctx->pc = 0x29c34cu;
    // NOP
label_29c350:
    // 0x29c350: 0x3567a  dsrl        $t2, $v1, 25
    ctx->pc = 0x29c350u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) >> 25);
label_29c354:
    // 0x29c354: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c354u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C354 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c358:
    // 0x29c358: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c358u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c35c:
    // 0x29c35c: 0x0  nop
    ctx->pc = 0x29c35cu;
    // NOP
label_29c360:
    // 0x29c360: 0x356b7  .word       0x000356B7                   # INVALID     $zero, $v1, 0x56B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C360 raw=0x000356B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c364:
    // 0x29c364: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C364 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c368:
    // 0x29c368: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c368u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c36c:
    // 0x29c36c: 0x0  nop
    ctx->pc = 0x29c36cu;
    // NOP
label_29c370:
    // 0x29c370: 0x356f4  teq         $zero, $v1, 347
    ctx->pc = 0x29c370u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c374:
    // 0x29c374: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c374u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C374 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c378:
    // 0x29c378: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c378u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c37c:
    // 0x29c37c: 0x0  nop
    ctx->pc = 0x29c37cu;
    // NOP
label_29c380:
    // 0x29c380: 0x35731  tgeu        $zero, $v1, 348
    ctx->pc = 0x29c380u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c384:
    // 0x29c384: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C384 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c388:
    // 0x29c388: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c38c:
    // 0x29c38c: 0x0  nop
    ctx->pc = 0x29c38cu;
    // NOP
label_29c390:
    // 0x29c390: 0x3576e  .word       0x0003576E                   # dsub        $t2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_29c394:
    // 0x29c394: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C394 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c398:
    // 0x29c398: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c39c:
    // 0x29c39c: 0x0  nop
    ctx->pc = 0x29c39cu;
    // NOP
label_29c3a0:
    // 0x29c3a0: 0x357ab  .word       0x000357AB                   # sltu        $t2, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3a0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c3a4:
    // 0x29c3a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3A4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3a8:
    // 0x29c3a8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3ac:
    // 0x29c3ac: 0x0  nop
    ctx->pc = 0x29c3acu;
    // NOP
label_29c3b0:
    // 0x29c3b0: 0x357e8  .word       0x000357E8                   # mfsa        $t2 # 000307C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c3b0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_29c3b4:
    // 0x29c3b4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3B4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3b8:
    // 0x29c3b8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3bc:
    // 0x29c3bc: 0x0  nop
    ctx->pc = 0x29c3bcu;
    // NOP
label_29c3c0:
    // 0x29c3c0: 0x35825  or          $t3, $zero, $v1
    ctx->pc = 0x29c3c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29c3c4:
    // 0x29c3c4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3C4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3c8:
    // 0x29c3c8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3cc:
    // 0x29c3cc: 0x0  nop
    ctx->pc = 0x29c3ccu;
    // NOP
label_29c3d0:
    // 0x29c3d0: 0x35862  .word       0x00035862                   # neg         $t3, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_29c3d4:
    // 0x29c3d4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3D4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3d8:
    // 0x29c3d8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3dc:
    // 0x29c3dc: 0x0  nop
    ctx->pc = 0x29c3dcu;
    // NOP
label_29c3e0:
    // 0x29c3e0: 0x3589f  .word       0x0003589F                   # ddivu       $t3, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29C3E0 raw=0x0003589F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3e4:
    // 0x29c3e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3E4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3e8:
    // 0x29c3e8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3ec:
    // 0x29c3ec: 0x0  nop
    ctx->pc = 0x29c3ecu;
    // NOP
label_29c3f0:
    // 0x29c3f0: 0x358dc  .word       0x000358DC                   # dmult       $zero, $v1 # 000058C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29C3F0 raw=0x000358DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3f4:
    // 0x29c3f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3F4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c3f8:
    // 0x29c3f8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3fc:
    // 0x29c3fc: 0x0  nop
    ctx->pc = 0x29c3fcu;
    // NOP
label_29c400:
    // 0x29c400: 0x35919  .word       0x00035919                   # multu       $zero, $v1 # 00005900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c400u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_29c404:
    // 0x29c404: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C404 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c408:
    // 0x29c408: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c408u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c40c:
    // 0x29c40c: 0x0  nop
    ctx->pc = 0x29c40cu;
    // NOP
label_29c410:
    // 0x29c410: 0x35956  .word       0x00035956                   # dsrlv       $t3, $v1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c410u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29c414:
    // 0x29c414: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C414 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c418:
    // 0x29c418: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c418u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c41c:
    // 0x29c41c: 0x0  nop
    ctx->pc = 0x29c41cu;
    // NOP
label_29c420:
    // 0x29c420: 0x35993  .word       0x00035993                   # mtlo        $zero # 00035980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c420u;
    ctx->lo = GPR_U64(ctx, 0);
label_29c424:
    // 0x29c424: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C424 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c428:
    // 0x29c428: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c42c:
    // 0x29c42c: 0x0  nop
    ctx->pc = 0x29c42cu;
    // NOP
label_29c430:
    // 0x29c430: 0x359d0  .word       0x000359D0                   # mfhi        $t3 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29c434:
    // 0x29c434: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C434 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c438:
    // 0x29c438: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c43c:
    // 0x29c43c: 0x0  nop
    ctx->pc = 0x29c43cu;
    // NOP
label_29c440:
    // 0x29c440: 0x35a0d  break       3, 360
    ctx->pc = 0x29c440u;
    runtime->handleBreak(rdram, ctx);
label_29c444:
    // 0x29c444: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C444 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c448:
    // 0x29c448: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c448u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c44c:
    // 0x29c44c: 0x0  nop
    ctx->pc = 0x29c44cu;
    // NOP
label_29c450:
    // 0x29c450: 0x35a4a  .word       0x00035A4A                   # movz        $t3, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c450u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_29c454:
    // 0x29c454: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C454 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c458:
    // 0x29c458: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c458u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c45c:
    // 0x29c45c: 0x0  nop
    ctx->pc = 0x29c45cu;
    // NOP
label_29c460:
    // 0x29c460: 0x35a87  .word       0x00035A87                   # srav        $t3, $v1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c460u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c464:
    // 0x29c464: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C464 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c468:
    // 0x29c468: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c468u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c46c:
    // 0x29c46c: 0x0  nop
    ctx->pc = 0x29c46cu;
    // NOP
label_29c470:
    // 0x29c470: 0x35ac4  .word       0x00035AC4                   # sllv        $t3, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c470u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c474:
    // 0x29c474: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C474 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c478:
    // 0x29c478: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c47c:
    // 0x29c47c: 0x0  nop
    ctx->pc = 0x29c47cu;
    // NOP
label_29c480:
    // 0x29c480: 0x35b01  .word       0x00035B01                   # INVALID     $zero, $v1, 0x5B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C480 raw=0x00035B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c484:
    // 0x29c484: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C484 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c488:
    // 0x29c488: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c488u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c48c:
    // 0x29c48c: 0x0  nop
    ctx->pc = 0x29c48cu;
    // NOP
label_29c490:
    // 0x29c490: 0x35b3e  dsrl32      $t3, $v1, 12
    ctx->pc = 0x29c490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (32 + 12));
label_29c494:
    // 0x29c494: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c494u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C494 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c498:
    // 0x29c498: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c498u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c49c:
    // 0x29c49c: 0x0  nop
    ctx->pc = 0x29c49cu;
    // NOP
label_29c4a0:
    // 0x29c4a0: 0x35b7b  dsra        $t3, $v1, 13
    ctx->pc = 0x29c4a0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 13);
label_29c4a4:
    // 0x29c4a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4A4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4a8:
    // 0x29c4a8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4ac:
    // 0x29c4ac: 0x0  nop
    ctx->pc = 0x29c4acu;
    // NOP
label_29c4b0:
    // 0x29c4b0: 0x35bb8  dsll        $t3, $v1, 14
    ctx->pc = 0x29c4b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 14);
label_29c4b4:
    // 0x29c4b4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4B4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4b8:
    // 0x29c4b8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4bc:
    // 0x29c4bc: 0x0  nop
    ctx->pc = 0x29c4bcu;
    // NOP
label_29c4c0:
    // 0x29c4c0: 0x35bf5  .word       0x00035BF5                   # INVALID     $zero, $v1, 0x5BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C4C0 raw=0x00035BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4c4:
    // 0x29c4c4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4C4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4c8:
    // 0x29c4c8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4cc:
    // 0x29c4cc: 0x0  nop
    ctx->pc = 0x29c4ccu;
    // NOP
label_29c4d0:
    // 0x29c4d0: 0x35c32  tlt         $zero, $v1, 368
    ctx->pc = 0x29c4d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c4d4:
    // 0x29c4d4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4D4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4d8:
    // 0x29c4d8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4dc:
    // 0x29c4dc: 0x0  nop
    ctx->pc = 0x29c4dcu;
    // NOP
label_29c4e0:
    // 0x29c4e0: 0x35c6f  .word       0x00035C6F                   # dsubu       $t3, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29c4e4:
    // 0x29c4e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4E4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4e8:
    // 0x29c4e8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4ec:
    // 0x29c4ec: 0x0  nop
    ctx->pc = 0x29c4ecu;
    // NOP
label_29c4f0:
    // 0x29c4f0: 0x35cac  .word       0x00035CAC                   # dadd        $t3, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_29c4f4:
    // 0x29c4f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4F4 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c4f8:
    // 0x29c4f8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4fc:
    // 0x29c4fc: 0x0  nop
    ctx->pc = 0x29c4fcu;
    // NOP
label_29c500:
    // 0x29c500: 0x35ce9  .word       0x00035CE9                   # mtsa        $zero # 00035CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c500u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29c504:
    // 0x29c504: 0x27  not         $zero, $zero
    ctx->pc = 0x29c504u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c508:
    // 0x29c508: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c50c:
    // 0x29c50c: 0x0  nop
    ctx->pc = 0x29c50cu;
    // NOP
label_29c510:
    // 0x29c510: 0x35d10  .word       0x00035D10                   # mfhi        $t3 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c510u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29c514:
    // 0x29c514: 0x27  not         $zero, $zero
    ctx->pc = 0x29c514u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c518:
    // 0x29c518: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c51c:
    // 0x29c51c: 0x0  nop
    ctx->pc = 0x29c51cu;
    // NOP
label_29c520:
    // 0x29c520: 0x35d37  .word       0x00035D37                   # INVALID     $zero, $v1, 0x5D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C520 raw=0x00035D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c524:
    // 0x29c524: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c528:
    // 0x29c528: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x29c528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_29c52c:
    // 0x29c52c: 0x0  nop
    ctx->pc = 0x29c52cu;
    // NOP
label_29c530:
    // 0x29c530: 0x35d3b  dsra        $t3, $v1, 20
    ctx->pc = 0x29c530u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 20);
label_29c534:
    // 0x29c534: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c538:
    // 0x29c538: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c538u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29c53c:
    // 0x29c53c: 0x0  nop
    ctx->pc = 0x29c53cu;
    // NOP
label_29c540:
    // 0x29c540: 0x35d3f  dsra32      $t3, $v1, 20
    ctx->pc = 0x29c540u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> (32 + 20));
label_29c544:
    // 0x29c544: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c548:
    // 0x29c548: 0x28e0  .word       0x000028E0                   # add         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29c54c:
    // 0x29c54c: 0x0  nop
    ctx->pc = 0x29c54cu;
    // NOP
    ctx->pc = 0x29c550u;
    return;
}

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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part493(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28bc28u: goto label_28bc28;
        case 0x28bc2cu: goto label_28bc2c;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc34u: goto label_28bc34;
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc3cu: goto label_28bc3c;
        case 0x28bc40u: goto label_28bc40;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc48u: goto label_28bc48;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc54u: goto label_28bc54;
        case 0x28bc58u: goto label_28bc58;
        case 0x28bc5cu: goto label_28bc5c;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc64u: goto label_28bc64;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc70u: goto label_28bc70;
        case 0x28bc74u: goto label_28bc74;
        case 0x28bc78u: goto label_28bc78;
        case 0x28bc7cu: goto label_28bc7c;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc84u: goto label_28bc84;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc8cu: goto label_28bc8c;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bc94u: goto label_28bc94;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bc9cu: goto label_28bc9c;
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        case 0x28bec8u: goto label_28bec8;
        case 0x28beccu: goto label_28becc;
        case 0x28bed0u: goto label_28bed0;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bed8u: goto label_28bed8;
        case 0x28bedcu: goto label_28bedc;
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee4u: goto label_28bee4;
        case 0x28bee8u: goto label_28bee8;
        case 0x28beecu: goto label_28beec;
        case 0x28bef0u: goto label_28bef0;
        case 0x28bef4u: goto label_28bef4;
        case 0x28bef8u: goto label_28bef8;
        case 0x28befcu: goto label_28befc;
        case 0x28bf00u: goto label_28bf00;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf08u: goto label_28bf08;
        case 0x28bf0cu: goto label_28bf0c;
        case 0x28bf10u: goto label_28bf10;
        case 0x28bf14u: goto label_28bf14;
        case 0x28bf18u: goto label_28bf18;
        case 0x28bf1cu: goto label_28bf1c;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf24u: goto label_28bf24;
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf2cu: goto label_28bf2c;
        case 0x28bf30u: goto label_28bf30;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf38u: goto label_28bf38;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf40u: goto label_28bf40;
        case 0x28bf44u: goto label_28bf44;
        case 0x28bf48u: goto label_28bf48;
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bf54u: goto label_28bf54;
        case 0x28bf58u: goto label_28bf58;
        case 0x28bf5cu: goto label_28bf5c;
        case 0x28bf60u: goto label_28bf60;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf68u: goto label_28bf68;
        case 0x28bf6cu: goto label_28bf6c;
        case 0x28bf70u: goto label_28bf70;
        case 0x28bf74u: goto label_28bf74;
        case 0x28bf78u: goto label_28bf78;
        case 0x28bf7cu: goto label_28bf7c;
        case 0x28bf80u: goto label_28bf80;
        case 0x28bf84u: goto label_28bf84;
        case 0x28bf88u: goto label_28bf88;
        case 0x28bf8cu: goto label_28bf8c;
        case 0x28bf90u: goto label_28bf90;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bf98u: goto label_28bf98;
        case 0x28bf9cu: goto label_28bf9c;
        case 0x28bfa0u: goto label_28bfa0;
        case 0x28bfa4u: goto label_28bfa4;
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        case 0x28c140u: goto label_28c140;
        case 0x28c144u: goto label_28c144;
        case 0x28c148u: goto label_28c148;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c150u: goto label_28c150;
        case 0x28c154u: goto label_28c154;
        case 0x28c158u: goto label_28c158;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c160u: goto label_28c160;
        case 0x28c164u: goto label_28c164;
        case 0x28c168u: goto label_28c168;
        case 0x28c16cu: goto label_28c16c;
        case 0x28c170u: goto label_28c170;
        case 0x28c174u: goto label_28c174;
        case 0x28c178u: goto label_28c178;
        case 0x28c17cu: goto label_28c17c;
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        default: return;
    }

label_28bc28:
    // 0x28bc28: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bc28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bc2c:
    // 0x28bc2c: 0x0  nop
    ctx->pc = 0x28bc2cu;
    // NOP
label_28bc30:
    // 0x28bc30: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28BC30 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc34:
    // 0x28bc34: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BC34 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc38:
    // 0x28bc38: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x28bc38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
label_28bc3c:
    // 0x28bc3c: 0x0  nop
    ctx->pc = 0x28bc3cu;
    // NOP
label_28bc40:
    // 0x28bc40: 0x0  nop
    ctx->pc = 0x28bc40u;
    // NOP
label_28bc44:
    // 0x28bc44: 0x60000801  daddi       $zero, $zero, 0x801
    ctx->pc = 0x28bc44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)2049; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_28bc48:
    // 0x28bc48: 0x1e000000  bgtz        $s0, . + 4 + (0x0 << 2)
label_28bc4c:
    if (ctx->pc == 0x28BC4Cu) {
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC50u;
        goto label_28bc50;
    }
    ctx->pc = 0x28BC48u;
    {
        const bool branch_taken_0x28bc48 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc48) {
            ctx->pc = 0x28BC4Cu;
            goto label_28bc4c;
        }
    }
    ctx->pc = 0x28BC50u;
label_28bc50:
    // 0x28bc50: 0x1f001e  ddiv        $zero, $zero, $ra
    ctx->pc = 0x28bc50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28BC50 raw=0x001F001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc54:
    // 0x28bc54: 0x23080a  movz        $at, $at, $v1
    ctx->pc = 0x28bc54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 1));
label_28bc58:
    // 0x28bc58: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bc58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bc5c:
    // 0x28bc5c: 0x0  nop
    ctx->pc = 0x28bc5cu;
    // NOP
label_28bc60:
    // 0x28bc60: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc60u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28BC60 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc64:
    // 0x28bc64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BC64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc68:
    // 0x28bc68: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bc68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28bc6c:
    // 0x28bc6c: 0x0  nop
    ctx->pc = 0x28bc6cu;
    // NOP
label_28bc70:
    // 0x28bc70: 0x0  nop
    ctx->pc = 0x28bc70u;
    // NOP
label_28bc74:
    // 0x28bc74: 0x60000808  daddi       $zero, $zero, 0x808
    ctx->pc = 0x28bc74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)2056; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_28bc78:
    // 0x28bc78: 0xa000000  j           func_8000000
label_28bc7c:
    if (ctx->pc == 0x28BC7Cu) {
        ctx->pc = 0x28BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC78u;
        // 0x28bc7c: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC80u;
        goto label_28bc80;
    }
    ctx->pc = 0x28BC78u;
    ctx->pc = 0x28BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC78u;
    // 0x28bc7c: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8000000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8000000u, 0x28BC78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BC80u;
label_28bc80:
    // 0x28bc80: 0x23080a  movz        $at, $at, $v1
    ctx->pc = 0x28bc80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 1));
label_28bc84:
    // 0x28bc84: 0x23080a  movz        $at, $at, $v1
    ctx->pc = 0x28bc84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 1));
label_28bc88:
    // 0x28bc88: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bc88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bc8c:
    // 0x28bc8c: 0x0  nop
    ctx->pc = 0x28bc8cu;
    // NOP
label_28bc90:
    // 0x28bc90: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28BC90 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc94:
    // 0x28bc94: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bc94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BC94 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bc98:
    // 0x28bc98: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bc98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28bc9c:
    // 0x28bc9c: 0x0  nop
    ctx->pc = 0x28bc9cu;
    // NOP
label_28bca0:
    // 0x28bca0: 0x0  nop
    ctx->pc = 0x28bca0u;
    // NOP
label_28bca4:
    // 0x28bca4: 0x62000800  daddi       $zero, $s0, 0x800
    ctx->pc = 0x28bca4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 16); int64_t imm = (int64_t)(int32_t)2048; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_28bca8:
    // 0x28bca8: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bcac:
    if (ctx->pc == 0x28BCACu) {
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA8u;
        // 0x28bcac: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCB0u;
        goto label_28bcb0;
    }
    ctx->pc = 0x28BCA8u;
    {
        const bool branch_taken_0x28bca8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA8u;
        // 0x28bcac: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca8) {
            ctx->pc = 0x28BCACu;
            goto label_28bcac;
        }
    }
    ctx->pc = 0x28BCB0u;
label_28bcb0:
    // 0x28bcb0: 0x1d001e  ddiv        $zero, $zero, $sp
    ctx->pc = 0x28bcb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28BCB0 raw=0x001D001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bcb4:
    // 0x28bcb4: 0x250803  .word       0x00250803                   # sra         $at, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bcb4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), 0));
label_28bcb8:
    // 0x28bcb8: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bcbc:
    // 0x28bcbc: 0x0  nop
    ctx->pc = 0x28bcbcu;
    // NOP
label_28bcc0:
    // 0x28bcc0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bcc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BCC0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bcc4:
    // 0x28bcc4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bcc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BCC4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bcc8:
    // 0x28bcc8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28bcc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28bccc:
    // 0x28bccc: 0x10  mfhi        $zero
    ctx->pc = 0x28bcccu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28bcd0:
    // 0x28bcd0: 0x0  nop
    ctx->pc = 0x28bcd0u;
    // NOP
label_28bcd4:
    // 0x28bcd4: 0x60000800  daddi       $zero, $zero, 0x800
    ctx->pc = 0x28bcd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)2048; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_28bcd8:
    // 0x28bcd8: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bcdc:
    if (ctx->pc == 0x28BCDCu) {
        ctx->pc = 0x28BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD8u;
        // 0x28bcdc: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCE0u;
        goto label_28bce0;
    }
    ctx->pc = 0x28BCD8u;
    {
        const bool branch_taken_0x28bcd8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD8u;
        // 0x28bcdc: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd8) {
            ctx->pc = 0x28BCDCu;
            goto label_28bcdc;
        }
    }
    ctx->pc = 0x28BCE0u;
label_28bce0:
    // 0x28bce0: 0x11001e  ddiv        $zero, $zero, $s1
    ctx->pc = 0x28bce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28BCE0 raw=0x0011001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bce4:
    // 0x28bce4: 0x250803  .word       0x00250803                   # sra         $at, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), 0));
label_28bce8:
    // 0x28bce8: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bcec:
    // 0x28bcec: 0x0  nop
    ctx->pc = 0x28bcecu;
    // NOP
label_28bcf0:
    // 0x28bcf0: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bcf0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28BCF0 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bcf4:
    // 0x28bcf4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bcf4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BCF4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bcf8:
    // 0x28bcf8: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x28bcf8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
label_28bcfc:
    // 0x28bcfc: 0x0  nop
    ctx->pc = 0x28bcfcu;
    // NOP
label_28bd00:
    // 0x28bd00: 0x0  nop
    ctx->pc = 0x28bd00u;
    // NOP
label_28bd04:
    // 0x28bd04: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x28bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_28bd08:
    // 0x28bd08: 0x19000000  blez        $t0, . + 4 + (0x0 << 2)
label_28bd0c:
    if (ctx->pc == 0x28BD0Cu) {
        ctx->pc = 0x28BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD08u;
        // 0x28bd0c: 0xe00  sll         $at, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD10u;
        goto label_28bd10;
    }
    ctx->pc = 0x28BD08u;
    {
        const bool branch_taken_0x28bd08 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x28BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD08u;
        // 0x28bd0c: 0xe00  sll         $at, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd08) {
            ctx->pc = 0x28BD0Cu;
            goto label_28bd0c;
        }
    }
    ctx->pc = 0x28BD10u;
label_28bd10:
    // 0x28bd10: 0x1f0014  dsllv       $zero, $ra, $zero
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) << (GPR_U32(ctx, 0) & 0x3F));
label_28bd14:
    // 0x28bd14: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bd14u;
    
label_28bd18:
    // 0x28bd18: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28bd1c:
    // 0x28bd1c: 0x0  nop
    ctx->pc = 0x28bd1cu;
    // NOP
label_28bd20:
    // 0x28bd20: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd20u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BD20 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd24:
    // 0x28bd24: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28BD24 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd28:
    // 0x28bd28: 0xf  sync
    ctx->pc = 0x28bd28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28bd2c:
    // 0x28bd2c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bd2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28BD2C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd30:
    // 0x28bd30: 0x0  nop
    ctx->pc = 0x28bd30u;
    // NOP
label_28bd34:
    // 0x28bd34: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x28bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_28bd38:
    // 0x28bd38: 0x0  nop
    ctx->pc = 0x28bd38u;
    // NOP
label_28bd3c:
    // 0x28bd3c: 0x1d00  sll         $v1, $zero, 20
    ctx->pc = 0x28bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_28bd40:
    // 0x28bd40: 0x1f0014  dsllv       $zero, $ra, $zero
    ctx->pc = 0x28bd40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) << (GPR_U32(ctx, 0) & 0x3F));
label_28bd44:
    // 0x28bd44: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bd44u;
    
label_28bd48:
    // 0x28bd48: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28bd48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28bd4c:
    // 0x28bd4c: 0x0  nop
    ctx->pc = 0x28bd4cu;
    // NOP
label_28bd50:
    // 0x28bd50: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BD50 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd54:
    // 0x28bd54: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28BD54 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd58:
    // 0x28bd58: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28bd58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28bd5c:
    // 0x28bd5c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bd5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28BD5C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd60:
    // 0x28bd60: 0x0  nop
    ctx->pc = 0x28bd60u;
    // NOP
label_28bd64:
    // 0x28bd64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28bd64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28BD64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd68:
    // 0x28bd68: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bd6c:
    if (ctx->pc == 0x28BD6Cu) {
        ctx->pc = 0x28BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD68u;
        // 0x28bd6c: 0x1d00  sll         $v1, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD70u;
        goto label_28bd70;
    }
    ctx->pc = 0x28BD68u;
    {
        const bool branch_taken_0x28bd68 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD68u;
        // 0x28bd6c: 0x1d00  sll         $v1, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd68) {
            ctx->pc = 0x28BD6Cu;
            goto label_28bd6c;
        }
    }
    ctx->pc = 0x28BD70u;
label_28bd70:
    // 0x28bd70: 0x110014  dsllv       $zero, $s1, $zero
    ctx->pc = 0x28bd70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_28bd74:
    // 0x28bd74: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bd74u;
    
label_28bd78:
    // 0x28bd78: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28bd7c:
    // 0x28bd7c: 0x0  nop
    ctx->pc = 0x28bd7cu;
    // NOP
label_28bd80:
    // 0x28bd80: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BD80 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd84:
    // 0x28bd84: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bd84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28BD84 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd88:
    // 0x28bd88: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28bd88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28BD88 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd8c:
    // 0x28bd8c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28bd8cu;
    
label_28bd90:
    // 0x28bd90: 0x0  nop
    ctx->pc = 0x28bd90u;
    // NOP
label_28bd94:
    // 0x28bd94: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28bd94u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28BD94 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bd98:
    // 0x28bd98: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bd9c:
    if (ctx->pc == 0x28BD9Cu) {
        ctx->pc = 0x28BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD98u;
        // 0x28bd9c: 0xe00  sll         $at, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDA0u;
        goto label_28bda0;
    }
    ctx->pc = 0x28BD98u;
    {
        const bool branch_taken_0x28bd98 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD98u;
        // 0x28bd9c: 0xe00  sll         $at, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd98) {
            ctx->pc = 0x28BD9Cu;
            goto label_28bd9c;
        }
    }
    ctx->pc = 0x28BDA0u;
label_28bda0:
    // 0x28bda0: 0x110014  dsllv       $zero, $s1, $zero
    ctx->pc = 0x28bda0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_28bda4:
    // 0x28bda4: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bda4u;
    
label_28bda8:
    // 0x28bda8: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28bdac:
    // 0x28bdac: 0x0  nop
    ctx->pc = 0x28bdacu;
    // NOP
label_28bdb0:
    // 0x28bdb0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bdb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BDB0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bdb4:
    // 0x28bdb4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bdb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28BDB4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bdb8:
    // 0x28bdb8: 0xf  sync
    ctx->pc = 0x28bdb8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28bdbc:
    // 0x28bdbc: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_28bdc0:
    // 0x28bdc0: 0x0  nop
    ctx->pc = 0x28bdc0u;
    // NOP
label_28bdc4:
    // 0x28bdc4: 0x64000800  daddiu      $zero, $zero, 0x800
    ctx->pc = 0x28bdc4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2048);
label_28bdc8:
    // 0x28bdc8: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bdcc:
    if (ctx->pc == 0x28BDCCu) {
        ctx->pc = 0x28BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDC8u;
        // 0x28bdcc: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDD0u;
        goto label_28bdd0;
    }
    ctx->pc = 0x28BDC8u;
    {
        const bool branch_taken_0x28bdc8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDC8u;
        // 0x28bdcc: 0x32233b00  andi        $v1, $s1, 0x3B00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdc8) {
            ctx->pc = 0x28BDCCu;
            goto label_28bdcc;
        }
    }
    ctx->pc = 0x28BDD0u;
label_28bdd0:
    // 0x28bdd0: 0x25001e  ddiv        $zero, $at, $a1
    ctx->pc = 0x28bdd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28BDD0 raw=0x0025001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bdd4:
    // 0x28bdd4: 0x250803  .word       0x00250803                   # sra         $at, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bdd4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), 0));
label_28bdd8:
    // 0x28bdd8: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28bdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28bddc:
    // 0x28bddc: 0x0  nop
    ctx->pc = 0x28bddcu;
    // NOP
label_28bde0:
    // 0x28bde0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bde0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BDE0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bde4:
    // 0x28bde4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28bde4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28BDE4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bde8:
    // 0x28bde8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28bde8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28bdec:
    // 0x28bdec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28bdecu;
    
label_28bdf0:
    // 0x28bdf0: 0x0  nop
    ctx->pc = 0x28bdf0u;
    // NOP
label_28bdf4:
    // 0x28bdf4: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28bdf4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28bdf8:
    // 0x28bdf8: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28bdfc:
    if (ctx->pc == 0x28BDFCu) {
        ctx->pc = 0x28BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF8u;
        // 0x28bdfc: 0x1100  sll         $v0, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE00u;
        goto label_28be00;
    }
    ctx->pc = 0x28BDF8u;
    {
        const bool branch_taken_0x28bdf8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF8u;
        // 0x28bdfc: 0x1100  sll         $v0, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf8) {
            ctx->pc = 0x28BDFCu;
            goto label_28bdfc;
        }
    }
    ctx->pc = 0x28BE00u;
label_28be00:
    // 0x28be00: 0x25140e  .word       0x0025140E                   # INVALID     $at, $a1, 0x140E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28BE00 raw=0x0025140E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be04:
    // 0x28be04: 0x250000  .word       0x00250000                   # sll         $zero, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be04u;
    
label_28be08:
    // 0x28be08: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28be08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28be0c:
    // 0x28be0c: 0x0  nop
    ctx->pc = 0x28be0cu;
    // NOP
label_28be10:
    // 0x28be10: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28be10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x28BE10 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be14:
    // 0x28be14: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28be14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28BE14 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be18:
    // 0x28be18: 0x12  mflo        $zero
    ctx->pc = 0x28be18u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28be1c:
    // 0x28be1c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28be1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28be20:
    // 0x28be20: 0x0  nop
    ctx->pc = 0x28be20u;
    // NOP
label_28be24:
    // 0x28be24: 0x0  nop
    ctx->pc = 0x28be24u;
    // NOP
label_28be28:
    // 0x28be28: 0x0  nop
    ctx->pc = 0x28be28u;
    // NOP
label_28be2c:
    // 0x28be2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28be30:
    // 0x28be30: 0x2ccfb8  .word       0x002CCFB8                   # dsll        $t9, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be30u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 12) << 30);
label_28be34:
    // 0x28be34: 0x2ccfc8  .word       0x002CCFC8                   # jr          $at # 000CCFC0 <InstrIdType: CPU_SPECIAL>
label_28be38:
    if (ctx->pc == 0x28BE38u) {
        ctx->pc = 0x28BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE34u;
        // 0x28be38: 0x2ccfd8  .word       0x002CCFD8                   # mult        $t9, $at, $t4 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE3Cu;
        goto label_28be3c;
    }
    ctx->pc = 0x28BE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE34u;
        // 0x28be38: 0x2ccfd8  .word       0x002CCFD8                   # mult        $t9, $at, $t4 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BE34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28BE3Cu;
label_28be3c:
    // 0x28be3c: 0x2ccfe8  .word       0x002CCFE8                   # mfsa        $t9 # 002C07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28be3cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_28be40:
    // 0x28be40: 0x4684d000  .word       0x4684D000                   # INVALID     $s4, $a0, -0x3000 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x28be40u;
// //     throw std::runtime_error("Unhandled FPU.W instruction: function 0x0 at 0x28BE40 raw=0x4684D000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be44:
    // 0x28be44: 0xc51c8000  lwc1        $f28, -0x8000($t0)
    ctx->pc = 0x28be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294934528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_28be48:
    // 0x28be48: 0x47908800  .word       0x47908800                   # INVALID     $gp, $s0, -0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28be48u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28BE48 raw=0x47908800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be4c:
    // 0x28be4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28be4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28be50:
    // 0x28be50: 0x468ca000  .word       0x468CA000                   # INVALID     $s4, $t4, -0x6000 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x28be50u;
// //     throw std::runtime_error("Unhandled FPU.W instruction: function 0x0 at 0x28BE50 raw=0x468CA000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be54:
    // 0x28be54: 0xc51c0000  lwc1        $f28, 0x0($t0)
    ctx->pc = 0x28be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_28be58:
    // 0x28be58: 0x47908800  .word       0x47908800                   # INVALID     $gp, $s0, -0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28be58u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28BE58 raw=0x47908800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be5c:
    // 0x28be5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28be5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28be60:
    // 0x28be60: 0x1020203  .word       0x01020203                   # sra         $zero, $v0, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be60u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_28be64:
    // 0x28be64: 0x1010302  .word       0x01010302                   # srl         $zero, $at, 12 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 12));
label_28be68:
    // 0x28be68: 0x2010201  .word       0x02010201                   # INVALID     $s0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE68 raw=0x02010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be6c:
    // 0x28be6c: 0x2020102  .word       0x02020102                   # srl         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28be70:
    // 0x28be70: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE70 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be74:
    // 0x28be74: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28be78:
    // 0x28be78: 0x1020101  .word       0x01020101                   # INVALID     $t0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE78 raw=0x01020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be7c:
    // 0x28be7c: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_28be80:
    // 0x28be80: 0x1020201  .word       0x01020201                   # INVALID     $t0, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE80 raw=0x01020201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be84:
    // 0x28be84: 0x2020201  .word       0x02020201                   # INVALID     $s0, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE84 raw=0x02020201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be88:
    // 0x28be88: 0x1010102  .word       0x01010102                   # srl         $zero, $at, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_28be8c:
    // 0x28be8c: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_28be90:
    // 0x28be90: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE90 raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be94:
    // 0x28be94: 0x2010101  .word       0x02010101                   # INVALID     $s0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE94 raw=0x02010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28be98:
    // 0x28be98: 0x1020202  .word       0x01020202                   # srl         $zero, $v0, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be98u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28be9c:
    // 0x28be9c: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28be9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BE9C raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bea0:
    // 0x28bea0: 0x1020201  .word       0x01020201                   # INVALID     $t0, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEA0 raw=0x01020201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bea4:
    // 0x28bea4: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEA4 raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bea8:
    // 0x28bea8: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bea8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEA8 raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28beac:
    // 0x28beac: 0x3010101  .word       0x03010101                   # INVALID     $t8, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28beacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEAC raw=0x03010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28beb0:
    // 0x28beb0: 0x2030204  .word       0x02030204                   # sllv        $zero, $v1, $s0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28beb0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_28beb4:
    // 0x28beb4: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28beb4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_28beb8:
    // 0x28beb8: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28beb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEB8 raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bebc:
    // 0x28bebc: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bebcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28bec0:
    // 0x28bec0: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bec0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_28bec4:
    // 0x28bec4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bec4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BEC4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bec8:
    // 0x28bec8: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bec8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28becc:
    // 0x28becc: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28beccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BECC raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bed0:
    // 0x28bed0: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bed0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28bed4:
    // 0x28bed4: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28bed8:
    // 0x28bed8: 0x1020202  .word       0x01020202                   # srl         $zero, $v0, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bed8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_28bedc:
    // 0x28bedc: 0x0  nop
    ctx->pc = 0x28bedcu;
    // NOP
label_28bee0:
    // 0x28bee0: 0x1010000  .word       0x01010000                   # sll         $zero, $at, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bee0u;
    
label_28bee4:
    // 0x28bee4: 0x4020302  bltzl       $zero, . + 4 + (0x302 << 2)
label_28bee8:
    if (ctx->pc == 0x28BEE8u) {
        ctx->pc = 0x28BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEE4u;
        // 0x28bee8: 0x6050503  .word       0x06050503                   # INVALID     $s0, $a1, 0x503 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x28BEE8 raw=0x06050503");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEECu;
        goto label_28beec;
    }
    ctx->pc = 0x28BEE4u;
    {
        const bool branch_taken_0x28bee4 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x28bee4) {
            ctx->pc = 0x28BEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BEE4u;
            // 0x28bee8: 0x6050503  .word       0x06050503                   # INVALID     $s0, $a1, 0x503 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x28BEE8 raw=0x06050503");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAF0u;
            { ctx->pc = 0x28caf0; return; }
        }
    }
    ctx->pc = 0x28BEECu;
label_28beec:
    // 0x28beec: 0x7070606  .word       0x07070606                   # INVALID     $t8, $a3, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28beecu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x28BEEC raw=0x07070606");
 /* MITIGATED */
label_28bef0:
    // 0x28bef0: 0x7040707  .word       0x07040707                   # INVALID     $t8, $a0, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28bef0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28BEF0 raw=0x07040707");
 /* MITIGATED */
label_28bef4:
    // 0x28bef4: 0x17171717  bne         $t8, $s7, . + 4 + (0x1717 << 2)
label_28bef8:
    if (ctx->pc == 0x28BEF8u) {
        ctx->pc = 0x28BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF4u;
        // 0x28bef8: 0x8090808  j           func_242020 (Delay Slot)
        // J 0x242020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEFCu;
        goto label_28befc;
    }
    ctx->pc = 0x28BEF4u;
    {
        const bool branch_taken_0x28bef4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 23));
        ctx->pc = 0x28BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF4u;
        // 0x28bef8: 0x8090808  j           func_242020 (Delay Slot)
        // J 0x242020 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef4) {
            ctx->pc = 0x291B54u;
            { ctx->pc = 0x291b54; return; }
        }
    }
    ctx->pc = 0x28BEFCu;
label_28befc:
    // 0x28befc: 0xa060a0a  j           func_8182828
label_28bf00:
    if (ctx->pc == 0x28BF00u) {
        ctx->pc = 0x28BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEFCu;
        // 0x28bf00: 0xb0b0b08  j           func_C2C2C20 (Delay Slot)
        // J 0xC2C2C20 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF04u;
        goto label_28bf04;
    }
    ctx->pc = 0x28BEFCu;
    ctx->pc = 0x28BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEFCu;
    // 0x28bf00: 0xb0b0b08  j           func_C2C2C20 (Delay Slot)
    // J 0xC2C2C20 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8182828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8182828u, 0x28BEFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BF04u;
label_28bf04:
    // 0x28bf04: 0xc0c0c0b  jal         func_30302C
label_28bf08:
    if (ctx->pc == 0x28BF08u) {
        ctx->pc = 0x28BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF04u;
        // 0x28bf08: 0x90b0b0c  j           func_42C2C30 (Delay Slot)
        // J 0x42C2C30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF0Cu;
        goto label_28bf0c;
    }
    ctx->pc = 0x28BF04u;
    SET_GPR_U32(ctx, 31, 0x28BF0Cu);
    ctx->pc = 0x28BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF04u;
    // 0x28bf08: 0x90b0b0c  j           func_42C2C30 (Delay Slot)
    // J 0x42C2C30 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x30302Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30302Cu, 0x28BF04u, 0x28BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF0Cu;
label_28bf0c:
    // 0x28bf0c: 0xa0c0d0d  j           func_8303434
label_28bf10:
    if (ctx->pc == 0x28BF10u) {
        ctx->pc = 0x28BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF0Cu;
        // 0x28bf10: 0xe0e0d0c  jal         func_8383430 (Delay Slot)
        // JAL 0x8383430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF14u;
        goto label_28bf14;
    }
    ctx->pc = 0x28BF0Cu;
    ctx->pc = 0x28BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF0Cu;
    // 0x28bf10: 0xe0e0d0c  jal         func_8383430 (Delay Slot)
    // JAL 0x8383430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8303434u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8303434u, 0x28BF0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BF14u;
label_28bf14:
    // 0x28bf14: 0xf0e110e  jal         func_C384438
label_28bf18:
    if (ctx->pc == 0x28BF18u) {
        ctx->pc = 0x28BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF14u;
        // 0x28bf18: 0xc0f0f0f  jal         func_3C3C3C (Delay Slot)
        // JAL 0x3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF1Cu;
        goto label_28bf1c;
    }
    ctx->pc = 0x28BF14u;
    SET_GPR_U32(ctx, 31, 0x28BF1Cu);
    ctx->pc = 0x28BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF14u;
    // 0x28bf18: 0xc0f0f0f  jal         func_3C3C3C (Delay Slot)
    // JAL 0x3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC384438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC384438u, 0x28BF14u, 0x28BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF1Cu;
label_28bf1c:
    // 0x28bf1c: 0x10100f0d  beq         $zero, $s0, . + 4 + (0xF0D << 2)
label_28bf20:
    if (ctx->pc == 0x28BF20u) {
        ctx->pc = 0x28BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF1Cu;
        // 0x28bf20: 0x1011110f  beq         $zero, $s1, . + 4 + (0x110F << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF20 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF24u;
        goto label_28bf24;
    }
    ctx->pc = 0x28BF1Cu;
    {
        const bool branch_taken_0x28bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF1Cu;
        // 0x28bf20: 0x1011110f  beq         $zero, $s1, . + 4 + (0x110F << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF20 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf1c) {
            ctx->pc = 0x28FB54u;
            { ctx->pc = 0x28fb54; return; }
        }
    }
    ctx->pc = 0x28BF24u;
label_28bf24:
    // 0x28bf24: 0x12121111  beq         $s0, $s2, . + 4 + (0x1111 << 2)
label_28bf28:
    if (ctx->pc == 0x28BF28u) {
        ctx->pc = 0x28BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF24u;
        // 0x28bf28: 0x13131012  beq         $t8, $s3, . + 4 + (0x1012 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF28 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF2Cu;
        goto label_28bf2c;
    }
    ctx->pc = 0x28BF24u;
    {
        const bool branch_taken_0x28bf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x28BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF24u;
        // 0x28bf28: 0x13131012  beq         $t8, $s3, . + 4 + (0x1012 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF28 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf24) {
            ctx->pc = 0x29036Cu;
            { ctx->pc = 0x29036c; return; }
        }
    }
    ctx->pc = 0x28BF2Cu;
label_28bf2c:
    // 0x28bf2c: 0x161514  .word       0x00161514                   # dsllv       $v0, $s6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_28bf30:
    // 0x28bf30: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
label_28bf34:
    if (ctx->pc == 0x28BF34u) {
        ctx->pc = 0x28BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF30u;
        // 0x28bf34: 0xf0f0905  jal         func_C3C2414 (Delay Slot)
        // JAL 0xC3C2414 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF38u;
        goto label_28bf38;
    }
    ctx->pc = 0x28BF30u;
    {
        const bool branch_taken_0x28bf30 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x28bf30) {
            ctx->pc = 0x28BF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF30u;
            // 0x28bf34: 0xf0f0905  jal         func_C3C2414 (Delay Slot)
            // JAL 0xC3C2414 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C738u;
            { ctx->pc = 0x28c738; return; }
        }
    }
    ctx->pc = 0x28BF38u;
label_28bf38:
    // 0x28bf38: 0x17170402  bne         $t8, $s7, . + 4 + (0x402 << 2)
label_28bf3c:
    if (ctx->pc == 0x28BF3Cu) {
        ctx->pc = 0x28BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF38u;
        // 0x28bf3c: 0x17171717  bne         $t8, $s7, . + 4 + (0x1717 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF40u;
        goto label_28bf40;
    }
    ctx->pc = 0x28BF38u;
    {
        const bool branch_taken_0x28bf38 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 23));
        ctx->pc = 0x28BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF38u;
        // 0x28bf3c: 0x17171717  bne         $t8, $s7, . + 4 + (0x1717 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF3C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf38) {
            ctx->pc = 0x28CF44u;
            { ctx->pc = 0x28cf44; return; }
        }
    }
    ctx->pc = 0x28BF40u;
label_28bf40:
    // 0x28bf40: 0x8081717  j           func_205C5C
label_28bf44:
    if (ctx->pc == 0x28BF44u) {
        ctx->pc = 0x28BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF40u;
        // 0x28bf44: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF48u;
        goto label_28bf48;
    }
    ctx->pc = 0x28BF40u;
    ctx->pc = 0x28BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF40u;
    // 0x28bf44: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C5Cu;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x205c5c; return; }
    ctx->pc = 0x28BF48u;
label_28bf48:
    // 0x28bf48: 0xb0b0b0b  j           func_C2C2C2C
label_28bf4c:
    if (ctx->pc == 0x28BF4Cu) {
        ctx->pc = 0x28BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF48u;
        // 0x28bf4c: 0xb0b0b0b  j           func_C2C2C2C (Delay Slot)
        // J 0xC2C2C2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF50u;
        goto label_28bf50;
    }
    ctx->pc = 0x28BF48u;
    ctx->pc = 0x28BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF48u;
    // 0x28bf4c: 0xb0b0b0b  j           func_C2C2C2C (Delay Slot)
    // J 0xC2C2C2C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2C2Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2C2Cu, 0x28BF48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BF50u;
label_28bf50:
    // 0x28bf50: 0xc0c0c0c  jal         func_303030
label_28bf54:
    if (ctx->pc == 0x28BF54u) {
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF50u;
        // 0x28bf54: 0x12120f0f  beq         $s0, $s2, . + 4 + (0xF0F << 2) (Delay Slot)
        // Likely branch instruction at 0x28BF54 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF58u;
        goto label_28bf58;
    }
    ctx->pc = 0x28BF50u;
    SET_GPR_U32(ctx, 31, 0x28BF58u);
    ctx->pc = 0x28BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF50u;
    // 0x28bf54: 0x12120f0f  beq         $s0, $s2, . + 4 + (0xF0F << 2) (Delay Slot)
    // Likely branch instruction at 0x28BF54 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x303030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303030u, 0x28BF50u, 0x28BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF58u;
label_28bf58:
    // 0x28bf58: 0x9041212  j           func_4104848
label_28bf5c:
    if (ctx->pc == 0x28BF5Cu) {
        ctx->pc = 0x28BF60u;
        goto label_28bf60;
    }
    ctx->pc = 0x28BF58u;
    ctx->pc = 0x4104848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104848u, 0x28BF58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BF60u;
label_28bf60:
    // 0x28bf60: 0x4010204  bgez        $zero, . + 4 + (0x204 << 2)
label_28bf64:
    if (ctx->pc == 0x28BF64u) {
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF60u;
        // 0x28bf64: 0x1030404  .word       0x01030404                   # sllv        $zero, $v1, $t0 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF68u;
        goto label_28bf68;
    }
    ctx->pc = 0x28BF60u;
    {
        const bool branch_taken_0x28bf60 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF60u;
        // 0x28bf64: 0x1030404  .word       0x01030404                   # sllv        $zero, $v1, $t0 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf60) {
            ctx->pc = 0x28C774u;
            { ctx->pc = 0x28c774; return; }
        }
    }
    ctx->pc = 0x28BF68u;
label_28bf68:
    // 0x28bf68: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf6c:
    // 0x28bf6c: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf70:
    // 0x28bf70: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf70u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf74:
    // 0x28bf74: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_28bf78:
    // 0x28bf78: 0x1010201  .word       0x01010201                   # INVALID     $t0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BF78 raw=0x01010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bf7c:
    // 0x28bf7c: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf80:
    // 0x28bf80: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf84:
    // 0x28bf84: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_28bf88:
    // 0x28bf88: 0x2020101  .word       0x02020101                   # INVALID     $s0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BF88 raw=0x02020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bf8c:
    // 0x28bf8c: 0x2010201  .word       0x02010201                   # INVALID     $s0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BF8C raw=0x02010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bf90:
    // 0x28bf90: 0x1020101  .word       0x01020101                   # INVALID     $t0, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BF90 raw=0x01020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bf94:
    // 0x28bf94: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf98:
    // 0x28bf98: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf98u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bf9c:
    // 0x28bf9c: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bf9cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bfa0:
    // 0x28bfa0: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfa0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bfa4:
    // 0x28bfa4: 0x2030302  .word       0x02030302                   # srl         $zero, $v1, 12 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfa4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_28bfa8:
    // 0x28bfa8: 0x1010201  .word       0x01010201                   # INVALID     $t0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfa8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BFA8 raw=0x01010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bfac:
    // 0x28bfac: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfacu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bfb0:
    // 0x28bfb0: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfb0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_28bfb4:
    // 0x28bfb4: 0x1010102  .word       0x01010102                   # srl         $zero, $at, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_28bfb8:
    // 0x28bfb8: 0x20101  .word       0x00020101                   # INVALID     $zero, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28BFB8 raw=0x00020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bfbc:
    // 0x28bfbc: 0x0  nop
    ctx->pc = 0x28bfbcu;
    // NOP
label_28bfc0:
    // 0x28bfc0: 0x1181200  .word       0x01181200                   # sll         $v0, $t8, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 8));
label_28bfc4:
    // 0x28bfc4: 0x8010101  j           func_040404
label_28bfc8:
    if (ctx->pc == 0x28BFC8u) {
        ctx->pc = 0x28BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC4u;
        // 0x28bfc8: 0x5020701  bltzl       $t0, . + 4 + (0x701 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x28DBD0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFCCu;
        goto label_28bfcc;
    }
    ctx->pc = 0x28BFC4u;
    ctx->pc = 0x28BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFC4u;
    // 0x28bfc8: 0x5020701  bltzl       $t0, . + 4 + (0x701 << 2) (Delay Slot)
    // REGIMM branch instruction to 0x28DBD0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x40404u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40404u, 0x28BFC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BFCCu;
label_28bfcc:
    // 0x28bfcc: 0x1040e03  .word       0x01040E03                   # sra         $at, $a0, 24 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfccu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 4), 24));
label_28bfd0:
    // 0x28bfd0: 0x1050105  .word       0x01050105                   # INVALID     $t0, $a1, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28bfd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28BFD0 raw=0x01050105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28bfd4:
    // 0x28bfd4: 0x12050105  beq         $s0, $a1, . + 4 + (0x105 << 2)
label_28bfd8:
    if (ctx->pc == 0x28BFD8u) {
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD4u;
        // 0x28bfd8: 0x3061706  .word       0x03061706                   # srlv        $v0, $a2, $t8 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 24) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFDCu;
        goto label_28bfdc;
    }
    ctx->pc = 0x28BFD4u;
    {
        const bool branch_taken_0x28bfd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD4u;
        // 0x28bfd8: 0x3061706  .word       0x03061706                   # srlv        $v0, $a2, $t8 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 24) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd4) {
            ctx->pc = 0x28C3ECu;
            goto label_28c3ec;
        }
    }
    ctx->pc = 0x28BFDCu;
label_28bfdc:
    // 0x28bfdc: 0x14070507  bne         $zero, $a3, . + 4 + (0x507 << 2)
label_28bfe0:
    if (ctx->pc == 0x28BFE0u) {
        ctx->pc = 0x28BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFDCu;
        // 0x28bfe0: 0x6070907  .word       0x06070907                   # INVALID     $s0, $a3, 0x907 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x28BFE0 raw=0x06070907");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFE4u;
        goto label_28bfe4;
    }
    ctx->pc = 0x28BFDCu;
    {
        const bool branch_taken_0x28bfdc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x28BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFDCu;
        // 0x28bfe0: 0x6070907  .word       0x06070907                   # INVALID     $s0, $a3, 0x907 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x28BFE0 raw=0x06070907");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfdc) {
            ctx->pc = 0x28D3FCu;
            { ctx->pc = 0x28d3fc; return; }
        }
    }
    ctx->pc = 0x28BFE4u;
label_28bfe4:
    // 0x28bfe4: 0x13080e08  beq         $t8, $t0, . + 4 + (0xE08 << 2)
label_28bfe8:
    if (ctx->pc == 0x28BFE8u) {
        ctx->pc = 0x28BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE4u;
        // 0x28bfe8: 0x16080208  bne         $s0, $t0, . + 4 + (0x208 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BFE8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFECu;
        goto label_28bfec;
    }
    ctx->pc = 0x28BFE4u;
    {
        const bool branch_taken_0x28bfe4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 8));
        ctx->pc = 0x28BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE4u;
        // 0x28bfe8: 0x16080208  bne         $s0, $t0, . + 4 + (0x208 << 2) (Delay Slot)
        // Likely branch instruction at 0x28BFE8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfe4) {
            ctx->pc = 0x28F808u;
            { ctx->pc = 0x28f808; return; }
        }
    }
    ctx->pc = 0x28BFECu;
label_28bfec:
    // 0x28bfec: 0xb090f08  j           func_C243C20
label_28bff0:
    if (ctx->pc == 0x28BFF0u) {
        ctx->pc = 0x28BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFECu;
        // 0x28bff0: 0x150b050a  bne         $t0, $t3, . + 4 + (0x50A << 2) (Delay Slot)
        // Likely branch instruction at 0x28BFF0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFF4u;
        goto label_28bff4;
    }
    ctx->pc = 0x28BFECu;
    ctx->pc = 0x28BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFECu;
    // 0x28bff0: 0x150b050a  bne         $t0, $t3, . + 4 + (0x50A << 2) (Delay Slot)
    // Likely branch instruction at 0x28BFF0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC243C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC243C20u, 0x28BFECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28BFF4u;
label_28bff4:
    // 0x28bff4: 0x110b0c0b  beq         $t0, $t3, . + 4 + (0xC0B << 2)
label_28bff8:
    if (ctx->pc == 0x28BFF8u) {
        ctx->pc = 0x28BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF4u;
        // 0x28bff8: 0xb0c070b  j           func_C301C2C (Delay Slot)
        // J 0xC301C2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFFCu;
        goto label_28bffc;
    }
    ctx->pc = 0x28BFF4u;
    {
        const bool branch_taken_0x28bff4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x28BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF4u;
        // 0x28bff8: 0xb0c070b  j           func_C301C2C (Delay Slot)
        // J 0xC301C2C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bff4) {
            ctx->pc = 0x28F024u;
            { ctx->pc = 0x28f024; return; }
        }
    }
    ctx->pc = 0x28BFFCu;
label_28bffc:
    // 0x28bffc: 0x80e0d0d  j           func_383434
label_28c000:
    if (ctx->pc == 0x28C000u) {
        ctx->pc = 0x28C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFFCu;
        // 0x28c000: 0xe0e070e  jal         func_8381C38 (Delay Slot)
        // JAL 0x8381C38 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C004u;
        goto label_28c004;
    }
    ctx->pc = 0x28BFFCu;
    ctx->pc = 0x28C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFFCu;
    // 0x28c000: 0xe0e070e  jal         func_8381C38 (Delay Slot)
    // JAL 0x8381C38 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x383434u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383434u, 0x28BFFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C004u;
label_28c004:
    // 0x28c004: 0xb0f0f0f  j           func_C3C3C3C
label_28c008:
    if (ctx->pc == 0x28C008u) {
        ctx->pc = 0x28C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C004u;
        // 0x28c008: 0x7110110  bgezal      $t8, . + 4 + (0x110 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x28C44C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C00Cu;
        goto label_28c00c;
    }
    ctx->pc = 0x28C004u;
    ctx->pc = 0x28C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C004u;
    // 0x28c008: 0x7110110  bgezal      $t8, . + 4 + (0x110 << 2) (Delay Slot)
    // REGIMM branch instruction to 0x28C44C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x28C004u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C00Cu;
label_28c00c:
    // 0x28c00c: 0xb120412  j           func_C481048
label_28c010:
    if (ctx->pc == 0x28C010u) {
        ctx->pc = 0x28C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C00Cu;
        // 0x28c010: 0x10130a12  beq         $zero, $s3, . + 4 + (0xA12 << 2) (Delay Slot)
        // Likely branch instruction at 0x28C010 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C014u;
        goto label_28c014;
    }
    ctx->pc = 0x28C00Cu;
    ctx->pc = 0x28C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C00Cu;
    // 0x28c010: 0x10130a12  beq         $zero, $s3, . + 4 + (0xA12 << 2) (Delay Slot)
    // Likely branch instruction at 0x28C010 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC481048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC481048u, 0x28C00Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C014u;
label_28c014:
    // 0x28c014: 0x5140013  .word       0x05140013                   # INVALID     $t0, $s4, 0x13 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28c014u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x14 at 0x28C014 raw=0x05140013");
 /* MITIGATED */
label_28c018:
    // 0x28c018: 0x160f15  .word       0x00160F15                   # INVALID     $zero, $s6, 0xF15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c018u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28C018 raw=0x00160F15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c01c:
    // 0x28c01c: 0x0  nop
    ctx->pc = 0x28c01cu;
    // NOP
label_28c020:
    // 0x28c020: 0x17130fff  bne         $t8, $s3, . + 4 + (0xFFF << 2)
label_28c024:
    if (ctx->pc == 0x28C024u) {
        ctx->pc = 0x28C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C020u;
        // 0x28c024: 0x2d2b1a18  sltiu       $t3, $t1, 0x1A18 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6680) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C028u;
        goto label_28c028;
    }
    ctx->pc = 0x28C020u;
    {
        const bool branch_taken_0x28c020 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C020u;
        // 0x28c024: 0x2d2b1a18  sltiu       $t3, $t1, 0x1A18 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6680) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c020) {
            ctx->pc = 0x290020u;
            { ctx->pc = 0x290020; return; }
        }
    }
    ctx->pc = 0x28C028u;
label_28c028:
    // 0x28c028: 0x39363331  xori        $s6, $t1, 0x3331
    ctx->pc = 0x28c028u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)13105);
label_28c02c:
    // 0x28c02c: 0xffff4b3d  sd          $ra, 0x4B3D($ra)
    ctx->pc = 0x28c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19261), GPR_U64(ctx, 31));
label_28c030:
    // 0x28c030: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c030u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c034:
    // 0x28c034: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c038:
    // 0x28c038: 0xf0d0c03  jal         func_C34300C
label_28c03c:
    if (ctx->pc == 0x28C03Cu) {
        ctx->pc = 0x28C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C038u;
        // 0x28c03c: 0x33302813  andi        $s0, $t9, 0x2813 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)10259);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C040u;
        goto label_28c040;
    }
    ctx->pc = 0x28C038u;
    SET_GPR_U32(ctx, 31, 0x28C040u);
    ctx->pc = 0x28C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C038u;
    // 0x28c03c: 0x33302813  andi        $s0, $t9, 0x2813 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)10259);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC34300Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC34300Cu, 0x28C038u, 0x28C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C040u;
label_28c040:
    // 0x28c040: 0xffff4b36  sd          $ra, 0x4B36($ra)
    ctx->pc = 0x28c040u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19254), GPR_U64(ctx, 31));
label_28c044:
    // 0x28c044: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c044u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c048:
    // 0x28c048: 0xf030201  jal         func_C0C0804
label_28c04c:
    if (ctx->pc == 0x28C04Cu) {
        ctx->pc = 0x28C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C048u;
        // 0x28c04c: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C04C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C050u;
        goto label_28c050;
    }
    ctx->pc = 0x28C048u;
    SET_GPR_U32(ctx, 31, 0x28C050u);
    ctx->pc = 0x28C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C048u;
    // 0x28c04c: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C04C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C0804u, 0x28C048u, 0x28C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C050u;
label_28c050:
    // 0x28c050: 0x4dff337b  .word       0x4DFF337B                   # INVALID     $t7, $ra, 0x337B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c050u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C050 raw=0x4DFF337B");
 /* MITIGATED */
label_28c054:
    // 0x28c054: 0xffff3a36  sd          $ra, 0x3A36($ra)
    ctx->pc = 0x28c054u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14902), GPR_U64(ctx, 31));
label_28c058:
    // 0x28c058: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c058u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c05c:
    // 0x28c05c: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c05cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c060:
    // 0x28c060: 0xb0a0903  j           func_C28240C
label_28c064:
    if (ctx->pc == 0x28C064u) {
        ctx->pc = 0x28C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C060u;
        // 0x28c064: 0x3e2a211e  .word       0x3E2A211E                   # lui         $t2, 0x211E # 02200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8478 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C068u;
        goto label_28c068;
    }
    ctx->pc = 0x28C060u;
    ctx->pc = 0x28C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C060u;
    // 0x28c064: 0x3e2a211e  .word       0x3E2A211E                   # lui         $t2, 0x211E # 02200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8478 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC28240Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC28240Cu, 0x28C060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C068u;
label_28c068:
    // 0x28c068: 0xffff4a43  sd          $ra, 0x4A43($ra)
    ctx->pc = 0x28c068u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19011), GPR_U64(ctx, 31));
label_28c06c:
    // 0x28c06c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c070:
    // 0x28c070: 0x5030201  bgezl       $t0, . + 4 + (0x201 << 2)
label_28c074:
    if (ctx->pc == 0x28C074u) {
        ctx->pc = 0x28C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C070u;
        // 0x28c074: 0x15110e08  bne         $t0, $s1, . + 4 + (0xE08 << 2) (Delay Slot)
        // Likely branch instruction at 0x28C074 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C078u;
        goto label_28c078;
    }
    ctx->pc = 0x28C070u;
    {
        const bool branch_taken_0x28c070 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x28c070) {
            ctx->pc = 0x28C074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C070u;
            // 0x28c074: 0x15110e08  bne         $t0, $s1, . + 4 + (0xE08 << 2) (Delay Slot)
            // Likely branch instruction at 0x28C074 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C878u;
            { ctx->pc = 0x28c878; return; }
        }
    }
    ctx->pc = 0x28C078u;
label_28c078:
    // 0x28c078: 0x4129211b  .word       0x4129211B                   # INVALID     $t1, $t1, 0x211B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c078u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28C078 raw=0x4129211B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c07c:
    // 0x28c07c: 0xffff4644  sd          $ra, 0x4644($ra)
    ctx->pc = 0x28c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17988), GPR_U64(ctx, 31));
label_28c080:
    // 0x28c080: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c080u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c084:
    // 0x28c084: 0x9ff4cff  j           func_7FD33FC
label_28c088:
    if (ctx->pc == 0x28C088u) {
        ctx->pc = 0x28C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C084u;
        // 0x28c088: 0x14100e0a  bne         $zero, $s0, . + 4 + (0xE0A << 2) (Delay Slot)
        // Likely branch instruction at 0x28C088 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C08Cu;
        goto label_28c08c;
    }
    ctx->pc = 0x28C084u;
    ctx->pc = 0x28C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C084u;
    // 0x28c088: 0x14100e0a  bne         $zero, $s0, . + 4 + (0xE0A << 2) (Delay Slot)
    // Likely branch instruction at 0x28C088 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7FD33FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7FD33FCu, 0x28C084u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C08Cu;
label_28c08c:
    // 0x28c08c: 0x461f1c1b  .word       0x461F1C1B                   # INVALID     $s0, $ra, 0x1C1B # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c08cu;
// //     throw std::runtime_error("Unhandled FPU.S instruction: function 0x1B at 0x28C08C raw=0x461F1C1B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c090:
    // 0x28c090: 0xffff4a48  sd          $ra, 0x4A48($ra)
    ctx->pc = 0x28c090u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19016), GPR_U64(ctx, 31));
label_28c094:
    // 0x28c094: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c094u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c098:
    // 0x28c098: 0x2014cff  .word       0x02014CFF                   # dsra32      $t1, $at, 19 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c098u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 19));
label_28c09c:
    // 0x28c09c: 0x16120703  bne         $s0, $s2, . + 4 + (0x703 << 2)
label_28c0a0:
    if (ctx->pc == 0x28C0A0u) {
        ctx->pc = 0x28C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C09Cu;
        // 0x28c0a0: 0x32242220  andi        $a0, $s1, 0x2220 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0A4u;
        goto label_28c0a4;
    }
    ctx->pc = 0x28C09Cu;
    {
        const bool branch_taken_0x28c09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x28C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C09Cu;
        // 0x28c0a0: 0x32242220  andi        $a0, $s1, 0x2220 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c09c) {
            ctx->pc = 0x28DCACu;
            { ctx->pc = 0x28dcac; return; }
        }
    }
    ctx->pc = 0x28C0A4u;
label_28c0a4:
    // 0x28c0a4: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c0a8:
    // 0x28c0a8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c0ac:
    // 0x28c0ac: 0x222016ff  addi        $zero, $s1, 0x16FF
    ctx->pc = 0x28c0acu;
    // NOP (addi to $zero)
label_28c0b0:
    // 0x28c0b0: 0x322e2623  andi        $t6, $s1, 0x2623
    ctx->pc = 0x28c0b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9763);
label_28c0b4:
    // 0x28c0b4: 0x42403734  .word       0x42403734                   # INVALID     $s2, $zero, 0x3734 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c0b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28C0B4 raw=0x42403734"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c0b8:
    // 0x28c0b8: 0xffff4745  sd          $ra, 0x4745($ra)
    ctx->pc = 0x28c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18245), GPR_U64(ctx, 31));
label_28c0bc:
    // 0x28c0bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c0c0:
    // 0x28c0c0: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
label_28c0c4:
    if (ctx->pc == 0x28C0C4u) {
        ctx->pc = 0x28C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C0u;
        // 0x28c0c4: 0x22201606  addi        $zero, $s1, 0x1606 (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0C8u;
        goto label_28c0c8;
    }
    ctx->pc = 0x28C0C0u;
    {
        const bool branch_taken_0x28c0c0 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x28c0c0) {
            ctx->pc = 0x28C0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C0C0u;
            // 0x28c0c4: 0x22201606  addi        $zero, $s1, 0x1606 (Delay Slot)
            // NOP (addi to $zero)
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C8C8u;
            { ctx->pc = 0x28c8c8; return; }
        }
    }
    ctx->pc = 0x28C0C8u;
label_28c0c8:
    // 0x28c0c8: 0x32244dff  andi        $a0, $s1, 0x4DFF
    ctx->pc = 0x28c0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)19967);
label_28c0cc:
    // 0x28c0cc: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c0d0:
    // 0x28c0d0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c0d4:
    // 0x28c0d4: 0x121104ff  beq         $s0, $s1, . + 4 + (0x4FF << 2)
label_28c0d8:
    if (ctx->pc == 0x28C0D8u) {
        ctx->pc = 0x28C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D4u;
        // 0x28c0d8: 0x3c3b3231  .word       0x3C3B3231                   # lui         $k1, 0x3231 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)12849 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0DCu;
        goto label_28c0dc;
    }
    ctx->pc = 0x28C0D4u;
    {
        const bool branch_taken_0x28c0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D4u;
        // 0x28c0d8: 0x3c3b3231  .word       0x3C3B3231                   # lui         $k1, 0x3231 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)12849 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0d4) {
            ctx->pc = 0x28D4D4u;
            { ctx->pc = 0x28d4d4; return; }
        }
    }
    ctx->pc = 0x28C0DCu;
label_28c0dc:
    // 0x28c0dc: 0x26253e3d  addiu       $a1, $s1, 0x3E3D
    ctx->pc = 0x28c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15933));
label_28c0e0:
    // 0x28c0e0: 0xffff1a19  sd          $ra, 0x1A19($ra)
    ctx->pc = 0x28c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 6681), GPR_U64(ctx, 31));
label_28c0e4:
    // 0x28c0e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c0e8:
    // 0x28c0e8: 0xfff4cff  jal         func_FFD33FC
label_28c0ec:
    if (ctx->pc == 0x28C0ECu) {
        ctx->pc = 0x28C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0E8u;
        // 0x28c0ec: 0x33181713  andi        $t8, $t8, 0x1713 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)5907);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0F0u;
        goto label_28c0f0;
    }
    ctx->pc = 0x28C0E8u;
    SET_GPR_U32(ctx, 31, 0x28C0F0u);
    ctx->pc = 0x28C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0E8u;
    // 0x28c0ec: 0x33181713  andi        $t8, $t8, 0x1713 (Delay Slot)
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)5907);
    ctx->in_delay_slot = false;
    ctx->pc = 0xFFD33FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xFFD33FCu, 0x28C0E8u, 0x28C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0F0u;
label_28c0f0:
    // 0x28c0f0: 0x3f3d3936  .word       0x3F3D3936                   # lui         $sp, 0x3936 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)14646 << 16));
label_28c0f4:
    // 0x28c0f4: 0xffff4b49  sd          $ra, 0x4B49($ra)
    ctx->pc = 0x28c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19273), GPR_U64(ctx, 31));
label_28c0f8:
    // 0x28c0f8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c0fc:
    // 0x28c0fc: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c100:
    // 0x28c100: 0x9080503  j           func_420140C
label_28c104:
    if (ctx->pc == 0x28C104u) {
        ctx->pc = 0x28C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C100u;
        // 0x28c104: 0x1c1b140a  .word       0x1C1B140A                   # bgtz        $zero, . + 4 + (0x140A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C104 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C108u;
        goto label_28c108;
    }
    ctx->pc = 0x28C100u;
    ctx->pc = 0x28C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C100u;
    // 0x28c104: 0x1c1b140a  .word       0x1C1B140A                   # bgtz        $zero, . + 4 + (0x140A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C104 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x420140Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420140Cu, 0x28C100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C108u;
label_28c108:
    // 0x28c108: 0x2c29211f  sltiu       $t1, $at, 0x211F
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)8479) ? 1 : 0);
label_28c10c:
    // 0x28c10c: 0x4a48463c  .word       0x4A48463C                   # INVALID     $s2, $t0, 0x463C # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x28c10cu;
//     throw std::runtime_error("Unhandled VU0 Special2 function: 0x60 at 0x28C10C raw=0x4A48463C");
 /* MITIGATED */
label_28c110:
    // 0x28c110: 0x100f03ff  beq         $zero, $t7, . + 4 + (0x3FF << 2)
label_28c114:
    if (ctx->pc == 0x28C114u) {
        ctx->pc = 0x28C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C110u;
        // 0x28c114: 0x1c1b0c0b  .word       0x1C1B0C0B                   # bgtz        $zero, . + 4 + (0xC0B << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C114 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C118u;
        goto label_28c118;
    }
    ctx->pc = 0x28C110u;
    {
        const bool branch_taken_0x28c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x28C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C110u;
        // 0x28c114: 0x1c1b0c0b  .word       0x1C1B0C0B                   # bgtz        $zero, . + 4 + (0xC0B << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C114 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c110) {
            ctx->pc = 0x28D110u;
            { ctx->pc = 0x28d110; return; }
        }
    }
    ctx->pc = 0x28C118u;
label_28c118:
    // 0x28c118: 0x18174c4b  .word       0x18174C4B                   # blez        $zero, . + 4 + (0x4C4B << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_28c11c:
    if (ctx->pc == 0x28C11Cu) {
        ctx->pc = 0x28C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C118u;
        // 0x28c11c: 0xffff2423  sd          $ra, 0x2423($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 9251), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C120u;
        goto label_28c120;
    }
    ctx->pc = 0x28C118u;
    {
        const bool branch_taken_0x28c118 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C118u;
        // 0x28c11c: 0xffff2423  sd          $ra, 0x2423($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 9251), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c118) {
            ctx->pc = 0x29F248u;
            return;
        }
    }
    ctx->pc = 0x28C120u;
label_28c120:
    // 0x28c120: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c120u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c124:
    // 0x28c124: 0x16ff4cff  bne         $s7, $ra, . + 4 + (0x4CFF << 2)
label_28c128:
    if (ctx->pc == 0x28C128u) {
        ctx->pc = 0x28C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C124u;
        // 0x28c128: 0x32232220  andi        $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C12Cu;
        goto label_28c12c;
    }
    ctx->pc = 0x28C124u;
    {
        const bool branch_taken_0x28c124 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 31));
        ctx->pc = 0x28C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C124u;
        // 0x28c128: 0x32232220  andi        $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c124) {
            ctx->pc = 0x29F524u;
            return;
        }
    }
    ctx->pc = 0x28C12Cu;
label_28c12c:
    // 0x28c12c: 0x4dff3734  .word       0x4DFF3734                   # INVALID     $t7, $ra, 0x3734 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c12cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C12C raw=0x4DFF3734");
 /* MITIGATED */
label_28c130:
    // 0x28c130: 0xffff4740  sd          $ra, 0x4740($ra)
    ctx->pc = 0x28c130u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18240), GPR_U64(ctx, 31));
label_28c134:
    // 0x28c134: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c134u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c138:
    // 0x28c138: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c138u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c13c:
    // 0x28c13c: 0x17130f03  bne         $t8, $s3, . + 4 + (0xF03 << 2)
label_28c140:
    if (ctx->pc == 0x28C140u) {
        ctx->pc = 0x28C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C13Cu;
        // 0x28c140: 0x2d2b1a18  sltiu       $t3, $t1, 0x1A18 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6680) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C144u;
        goto label_28c144;
    }
    ctx->pc = 0x28C13Cu;
    {
        const bool branch_taken_0x28c13c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C13Cu;
        // 0x28c140: 0x2d2b1a18  sltiu       $t3, $t1, 0x1A18 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6680) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c13c) {
            ctx->pc = 0x28FD4Cu;
            { ctx->pc = 0x28fd4c; return; }
        }
    }
    ctx->pc = 0x28C144u;
label_28c144:
    // 0x28c144: 0x39363331  xori        $s6, $t1, 0x3331
    ctx->pc = 0x28c144u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)13105);
label_28c148:
    // 0x28c148: 0x4b493f3d  .word       0x4B493F3D                   # INVALID     $k0, $t1, 0x3F3D # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x28c148u;
//     throw std::runtime_error("Unhandled VU0 Special2 function: 0x71 at 0x28C148 raw=0x4B493F3D");
 /* MITIGATED */
label_28c14c:
    // 0x28c14c: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c150:
    // 0x28c150: 0x7060403  .word       0x07060403                   # INVALID     $t8, $a2, 0x403 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28c150u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28C150 raw=0x07060403");
 /* MITIGATED */
label_28c154:
    // 0x28c154: 0x22201612  addi        $zero, $s1, 0x1612
    ctx->pc = 0x28c154u;
    // NOP (addi to $zero)
label_28c158:
    // 0x28c158: 0x37343223  ori         $s4, $t9, 0x3223
    ctx->pc = 0x28c158u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12835);
label_28c15c:
    // 0x28c15c: 0x47454240  .word       0x47454240                   # INVALID     $k0, $a1, 0x4240 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c15cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x28C15C raw=0x47454240"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c160:
    // 0x28c160: 0x4dff16ff  .word       0x4DFF16FF                   # INVALID     $t7, $ra, 0x16FF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c160u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C160 raw=0x4DFF16FF");
 /* MITIGATED */
label_28c164:
    // 0x28c164: 0x32232220  andi        $v1, $s1, 0x2220
    ctx->pc = 0x28c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
label_28c168:
    // 0x28c168: 0x37354234  ori         $s5, $t9, 0x4234
    ctx->pc = 0x28c168u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)16948);
label_28c16c:
    // 0x28c16c: 0xffff4740  sd          $ra, 0x4740($ra)
    ctx->pc = 0x28c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18240), GPR_U64(ctx, 31));
label_28c170:
    // 0x28c170: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c170u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c174:
    // 0x28c174: 0x141305ff  bne         $zero, $s3, . + 4 + (0x5FF << 2)
label_28c178:
    if (ctx->pc == 0x28C178u) {
        ctx->pc = 0x28C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C174u;
        // 0x28c178: 0x34335857  ori         $s3, $at, 0x5857 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22615);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C17Cu;
        goto label_28c17c;
    }
    ctx->pc = 0x28C174u;
    {
        const bool branch_taken_0x28c174 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C174u;
        // 0x28c178: 0x34335857  ori         $s3, $at, 0x5857 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22615);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c174) {
            ctx->pc = 0x28D974u;
            { ctx->pc = 0x28d974; return; }
        }
    }
    ctx->pc = 0x28C17Cu;
label_28c17c:
    // 0x28c17c: 0x5251302f  beql        $s2, $s1, . + 4 + (0x302F << 2)
label_28c180:
    if (ctx->pc == 0x28C180u) {
        ctx->pc = 0x28C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C17Cu;
        // 0x28c180: 0xffff2827  sd          $ra, 0x2827($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 10279), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C184u;
        goto label_28c184;
    }
    ctx->pc = 0x28C17Cu;
    {
        const bool branch_taken_0x28c17c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x28c17c) {
            ctx->pc = 0x28C180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C17Cu;
            // 0x28c180: 0xffff2827  sd          $ra, 0x2827($ra) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 31), 10279), GPR_U64(ctx, 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29823Cu;
            { ctx->pc = 0x29823c; return; }
        }
    }
    ctx->pc = 0x28C184u;
label_28c184:
    // 0x28c184: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c184u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c188:
    // 0x28c188: 0x161506ff  bne         $s0, $s5, . + 4 + (0x6FF << 2)
label_28c18c:
    if (ctx->pc == 0x28C18Cu) {
        ctx->pc = 0x28C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C188u;
        // 0x28c18c: 0x3a391e1d  xori        $t9, $s1, 0x1E1D (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)7709);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C190u;
        goto label_28c190;
    }
    ctx->pc = 0x28C188u;
    {
        const bool branch_taken_0x28c188 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x28C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C188u;
        // 0x28c18c: 0x3a391e1d  xori        $t9, $s1, 0x1E1D (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)7709);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c188) {
            ctx->pc = 0x28DD88u;
            { ctx->pc = 0x28dd88; return; }
        }
    }
    ctx->pc = 0x28C190u;
label_28c190:
    // 0x28c190: 0x48473635  .word       0x48473635                   # cfc2.i      $a3, $vi6 # 00000634 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x28c190u;
    SET_GPR_U32(ctx, 7, static_cast<uint32_t>(ctx->vi[6]));
label_28c194:
    // 0x28c194: 0xffff5453  sd          $ra, 0x5453($ra)
    ctx->pc = 0x28c194u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 21587), GPR_U64(ctx, 31));
label_28c198:
    // 0x28c198: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c198u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c19c:
    // 0x28c19c: 0x17130fff  bne         $t8, $s3, . + 4 + (0xFFF << 2)
label_28c1a0:
    if (ctx->pc == 0x28C1A0u) {
        ctx->pc = 0x28C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C19Cu;
        // 0x28c1a0: 0x1d184cff  .word       0x1D184CFF                   # bgtz        $t0, . + 4 + (0x4CFF << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C1A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1A4u;
        goto label_28c1a4;
    }
    ctx->pc = 0x28C19Cu;
    {
        const bool branch_taken_0x28c19c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C19Cu;
        // 0x28c1a0: 0x1d184cff  .word       0x1D184CFF                   # bgtz        $t0, . + 4 + (0x4CFF << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C1A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c19c) {
            ctx->pc = 0x29019Cu;
            { ctx->pc = 0x29019c; return; }
        }
    }
    ctx->pc = 0x28C1A4u;
label_28c1a4:
    // 0x28c1a4: 0x3936332f  xori        $s6, $t1, 0x332F
    ctx->pc = 0x28c1a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)13103);
label_28c1a8:
    // 0x28c1a8: 0xffff4b3d  sd          $ra, 0x4B3D($ra)
    ctx->pc = 0x28c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19261), GPR_U64(ctx, 31));
label_28c1ac:
    // 0x28c1ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1b0:
    // 0x28c1b0: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c1b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c1b4:
    // 0x28c1b4: 0x1a130f03  .word       0x1A130F03                   # blez        $s0, . + 4 + (0xF03 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_28c1b8:
    if (ctx->pc == 0x28C1B8u) {
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x33312d2b  andi        $s1, $t9, 0x2D2B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)11563);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1BCu;
        goto label_28c1bc;
    }
    ctx->pc = 0x28C1B4u;
    {
        const bool branch_taken_0x28c1b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x33312d2b  andi        $s1, $t9, 0x2D2B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)11563);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1b4) {
            ctx->pc = 0x28FDC4u;
            { ctx->pc = 0x28fdc4; return; }
        }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0xffff4b36  sd          $ra, 0x4B36($ra)
    ctx->pc = 0x28c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19254), GPR_U64(ctx, 31));
label_28c1c0:
    // 0x28c1c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1c4:
    // 0x28c1c4: 0x4dff00ff  .word       0x4DFF00FF                   # INVALID     $t7, $ra, 0xFF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c1c4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1C4 raw=0x4DFF00FF");
 /* MITIGATED */
label_28c1c8:
    // 0x28c1c8: 0x9030201  j           func_40C0804
label_28c1cc:
    if (ctx->pc == 0x28C1CCu) {
        ctx->pc = 0x28C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1C8u;
        // 0x28c1cc: 0x2c2a210a  sltiu       $t2, $at, 0x210A (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)8458) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1D0u;
        goto label_28c1d0;
    }
    ctx->pc = 0x28C1C8u;
    ctx->pc = 0x28C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1C8u;
    // 0x28c1cc: 0x2c2a210a  sltiu       $t2, $at, 0x210A (Delay Slot)
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)8458) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C0804u, 0x28C1C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C1D0u;
label_28c1d0:
    // 0x28c1d0: 0xffff4a3c  sd          $ra, 0x4A3C($ra)
    ctx->pc = 0x28c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19004), GPR_U64(ctx, 31));
label_28c1d4:
    // 0x28c1d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1d8:
    // 0x28c1d8: 0xe030201  jal         func_80C0804
label_28c1dc:
    if (ctx->pc == 0x28C1DCu) {
        ctx->pc = 0x28C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1D8u;
        // 0x28c1dc: 0x4cff1511  .word       0x4CFF1511                   # INVALID     $a3, $ra, 0x1511 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1DC raw=0x4CFF1511");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1E0u;
        goto label_28c1e0;
    }
    ctx->pc = 0x28C1D8u;
    SET_GPR_U32(ctx, 31, 0x28C1E0u);
    ctx->pc = 0x28C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1D8u;
    // 0x28c1dc: 0x4cff1511  .word       0x4CFF1511                   # INVALID     $a3, $ra, 0x1511 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1DC raw=0x4CFF1511");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x80C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x80C0804u, 0x28C1D8u, 0x28C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1E0u;
label_28c1e0:
    // 0x28c1e0: 0x211f1c1b  addi        $ra, $t0, 0x1C1B
    ctx->pc = 0x28c1e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7195, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_28c1e4:
    // 0x28c1e4: 0xffff4629  sd          $ra, 0x4629($ra)
    ctx->pc = 0x28c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17961), GPR_U64(ctx, 31));
label_28c1e8:
    // 0x28c1e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1ec:
    // 0x28c1ec: 0xe0a09ff  jal         func_82827FC
label_28c1f0:
    if (ctx->pc == 0x28C1F0u) {
        ctx->pc = 0x28C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1ECu;
        // 0x28c1f0: 0x251b1410  addiu       $k1, $t0, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 8), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1F4u;
        goto label_28c1f4;
    }
    ctx->pc = 0x28C1ECu;
    SET_GPR_U32(ctx, 31, 0x28C1F4u);
    ctx->pc = 0x28C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1ECu;
    // 0x28c1f0: 0x251b1410  addiu       $k1, $t0, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 8), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x82827FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x82827FCu, 0x28C1ECu, 0x28C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1F4u;
label_28c1f4:
    // 0x28c1f4: 0x46433e3b  .word       0x46433E3B                   # INVALID     $s2, $v1, 0x3E3B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c1f4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3B at 0x28C1F4 raw=0x46433E3B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c1f8:
    // 0x28c1f8: 0xffff4a48  sd          $ra, 0x4A48($ra)
    ctx->pc = 0x28c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19016), GPR_U64(ctx, 31));
label_28c1fc:
    // 0x28c1fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c200:
    // 0x28c200: 0xff4eff  .word       0x00FF4EFF                   # dsra32      $t1, $ra, 27 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c200u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 31) >> (32 + 27));
label_28c204:
    // 0x28c204: 0x16030201  bne         $s0, $v1, . + 4 + (0x201 << 2)
label_28c208:
    if (ctx->pc == 0x28C208u) {
        ctx->pc = 0x28C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C204u;
        // 0x28c208: 0x322e2620  andi        $t6, $s1, 0x2620 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9760);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C20Cu;
        goto label_28c20c;
    }
    ctx->pc = 0x28C204u;
    {
        const bool branch_taken_0x28c204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C204u;
        // 0x28c208: 0x322e2620  andi        $t6, $s1, 0x2620 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9760);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c204) {
            ctx->pc = 0x28CA0Cu;
            { ctx->pc = 0x28ca0c; return; }
        }
    }
    ctx->pc = 0x28C20Cu;
label_28c20c:
    // 0x28c20c: 0xffff4734  sd          $ra, 0x4734($ra)
    ctx->pc = 0x28c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18228), GPR_U64(ctx, 31));
label_28c210:
    // 0x28c210: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c210u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c214:
    // 0x28c214: 0x16ff4eff  bne         $s7, $ra, . + 4 + (0x4EFF << 2)
label_28c218:
    if (ctx->pc == 0x28C218u) {
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C214u;
        // 0x28c218: 0x26232220  addiu       $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C21Cu;
        goto label_28c21c;
    }
    ctx->pc = 0x28C214u;
    {
        const bool branch_taken_0x28c214 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 31));
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C214u;
        // 0x28c218: 0x26232220  addiu       $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c214) {
            ctx->pc = 0x29FE14u;
            return;
        }
    }
    ctx->pc = 0x28C21Cu;
label_28c21c:
    // 0x28c21c: 0x3734322e  ori         $s4, $t9, 0x322E
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12846);
label_28c220:
    // 0x28c220: 0xffff4740  sd          $ra, 0x4740($ra)
    ctx->pc = 0x28c220u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18240), GPR_U64(ctx, 31));
label_28c224:
    // 0x28c224: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c224u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c228:
    // 0x28c228: 0x17130fff  bne         $t8, $s3, . + 4 + (0xFFF << 2)
label_28c22c:
    if (ctx->pc == 0x28C22Cu) {
        ctx->pc = 0x28C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C228u;
        // 0x28c22c: 0x4dff3318  .word       0x4DFF3318                   # INVALID     $t7, $ra, 0x3318 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C22C raw=0x4DFF3318");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C230u;
        goto label_28c230;
    }
    ctx->pc = 0x28C228u;
    {
        const bool branch_taken_0x28c228 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C228u;
        // 0x28c22c: 0x4dff3318  .word       0x4DFF3318                   # INVALID     $t7, $ra, 0x3318 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C22C raw=0x4DFF3318");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c228) {
            ctx->pc = 0x290228u;
            { ctx->pc = 0x290228; return; }
        }
    }
    ctx->pc = 0x28C230u;
label_28c230:
    // 0x28c230: 0x3f3d3936  .word       0x3F3D3936                   # lui         $sp, 0x3936 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)14646 << 16));
label_28c234:
    // 0x28c234: 0xffff4b49  sd          $ra, 0x4B49($ra)
    ctx->pc = 0x28c234u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19273), GPR_U64(ctx, 31));
label_28c238:
    // 0x28c238: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c238u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c23c:
    // 0x28c23c: 0x565500ff  bnel        $s2, $s5, . + 4 + (0xFF << 2)
label_28c240:
    if (ctx->pc == 0x28C240u) {
        ctx->pc = 0x28C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C23Cu;
        // 0x28c240: 0xa09201f  j           func_824807C (Delay Slot)
        // J 0x824807C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C244u;
        goto label_28c244;
    }
    ctx->pc = 0x28C23Cu;
    {
        const bool branch_taken_0x28c23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x28c23c) {
            ctx->pc = 0x28C240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C23Cu;
            // 0x28c240: 0xa09201f  j           func_824807C (Delay Slot)
            // J 0x824807C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C63Cu;
            { ctx->pc = 0x28c63c; return; }
        }
    }
    ctx->pc = 0x28C244u;
label_28c244:
    // 0x28c244: 0x403f2a29  .word       0x403F2A29                   # dmfc0       $ra, PageMask # 00000229 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c244u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x28C244 raw=0x403F2A29"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c248:
    // 0x28c248: 0xffff4443  sd          $ra, 0x4443($ra)
    ctx->pc = 0x28c248u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17475), GPR_U64(ctx, 31));
label_28c24c:
    // 0x28c24c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c250:
    // 0x28c250: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c250u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c254:
    // 0x28c254: 0x9080503  j           func_420140C
label_28c258:
    if (ctx->pc == 0x28C258u) {
        ctx->pc = 0x28C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C254u;
        // 0x28c258: 0x211f1c0a  addi        $ra, $t0, 0x1C0A (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7178, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C25Cu;
        goto label_28c25c;
    }
    ctx->pc = 0x28C254u;
    ctx->pc = 0x28C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C254u;
    // 0x28c258: 0x211f1c0a  addi        $ra, $t0, 0x1C0A (Delay Slot)
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7178, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420140Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420140Cu, 0x28C254u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C25Cu;
label_28c25c:
    // 0x28c25c: 0xffff4a2a  sd          $ra, 0x4A2A($ra)
    ctx->pc = 0x28c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18986), GPR_U64(ctx, 31));
label_28c260:
    // 0x28c260: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c260u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c264:
    // 0x28c264: 0xe0a09ff  jal         func_82827FC
label_28c268:
    if (ctx->pc == 0x28C268u) {
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x2c1b1410  sltiu       $k1, $zero, 0x1410 (Delay Slot)
        SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5136) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C26Cu;
        goto label_28c26c;
    }
    ctx->pc = 0x28C264u;
    SET_GPR_U32(ctx, 31, 0x28C26Cu);
    ctx->pc = 0x28C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C264u;
    // 0x28c268: 0x2c1b1410  sltiu       $k1, $zero, 0x1410 (Delay Slot)
    SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5136) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x82827FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x82827FCu, 0x28C264u, 0x28C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C26Cu;
label_28c26c:
    // 0x28c26c: 0x46433e3c  .word       0x46433E3C                   # INVALID     $s2, $v1, 0x3E3C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c26cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3C at 0x28C26C raw=0x46433E3C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c270:
    // 0x28c270: 0xffff4a48  sd          $ra, 0x4A48($ra)
    ctx->pc = 0x28c270u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19016), GPR_U64(ctx, 31));
label_28c274:
    // 0x28c274: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c274u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c278:
    // 0x28c278: 0x2014dff  .word       0x02014DFF                   # dsra32      $t1, $at, 23 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c278u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 23));
label_28c27c:
    // 0x28c27c: 0x15110e03  bne         $t0, $s1, . + 4 + (0xE03 << 2)
label_28c280:
    if (ctx->pc == 0x28C280u) {
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x4129211b  .word       0x4129211B                   # INVALID     $t1, $t1, 0x211B # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28C280 raw=0x4129211B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C284u;
        goto label_28c284;
    }
    ctx->pc = 0x28C27Cu;
    {
        const bool branch_taken_0x28c27c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 17));
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x4129211b  .word       0x4129211B                   # INVALID     $t1, $t1, 0x211B # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28C280 raw=0x4129211B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c27c) {
            ctx->pc = 0x28FA8Cu;
            { ctx->pc = 0x28fa8c; return; }
        }
    }
    ctx->pc = 0x28C284u;
label_28c284:
    // 0x28c284: 0xffff4644  sd          $ra, 0x4644($ra)
    ctx->pc = 0x28c284u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17988), GPR_U64(ctx, 31));
label_28c288:
    // 0x28c288: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c288u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c28c:
    // 0x28c28c: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c290:
    // 0x28c290: 0x16060403  bne         $s0, $a2, . + 4 + (0x403 << 2)
label_28c294:
    if (ctx->pc == 0x28C294u) {
        ctx->pc = 0x28C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C290u;
        // 0x28c294: 0x42343220  .word       0x42343220                   # INVALID     $s1, $s4, 0x3220 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28C294 raw=0x42343220"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C298u;
        goto label_28c298;
    }
    ctx->pc = 0x28C290u;
    {
        const bool branch_taken_0x28c290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x28C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C290u;
        // 0x28c294: 0x42343220  .word       0x42343220                   # INVALID     $s1, $s4, 0x3220 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28C294 raw=0x42343220"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c290) {
            ctx->pc = 0x28D2A0u;
            { ctx->pc = 0x28d2a0; return; }
        }
    }
    ctx->pc = 0x28C298u;
label_28c298:
    // 0x28c298: 0xffff4745  sd          $ra, 0x4745($ra)
    ctx->pc = 0x28c298u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18245), GPR_U64(ctx, 31));
label_28c29c:
    // 0x28c29c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2a0:
    // 0x28c2a0: 0x7030201  bgezl       $t8, . + 4 + (0x201 << 2)
label_28c2a4:
    if (ctx->pc == 0x28C2A4u) {
        ctx->pc = 0x28C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A0u;
        // 0x28c2a4: 0x22201612  addi        $zero, $s1, 0x1612 (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2A8u;
        goto label_28c2a8;
    }
    ctx->pc = 0x28C2A0u;
    {
        const bool branch_taken_0x28c2a0 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x28c2a0) {
            ctx->pc = 0x28C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2A0u;
            // 0x28c2a4: 0x22201612  addi        $zero, $s1, 0x1612 (Delay Slot)
            // NOP (addi to $zero)
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAA8u;
            { ctx->pc = 0x28caa8; return; }
        }
    }
    ctx->pc = 0x28C2A8u;
label_28c2a8:
    // 0x28c2a8: 0x322e2724  andi        $t6, $s1, 0x2724
    ctx->pc = 0x28c2a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)10020);
label_28c2ac:
    // 0x28c2ac: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c2b0:
    // 0x28c2b0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2b4:
    // 0x28c2b4: 0x4dff00ff  .word       0x4DFF00FF                   # INVALID     $t7, $ra, 0xFF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2b4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2B4 raw=0x4DFF00FF");
 /* MITIGATED */
label_28c2b8:
    // 0x28c2b8: 0xf030201  jal         func_C0C0804
label_28c2bc:
    if (ctx->pc == 0x28C2BCu) {
        ctx->pc = 0x28C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2B8u;
        // 0x28c2bc: 0x3f363313  .word       0x3F363313                   # lui         $s6, 0x3313 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13075 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2C0u;
        goto label_28c2c0;
    }
    ctx->pc = 0x28C2B8u;
    SET_GPR_U32(ctx, 31, 0x28C2C0u);
    ctx->pc = 0x28C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2B8u;
    // 0x28c2bc: 0x3f363313  .word       0x3F363313                   # lui         $s6, 0x3313 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13075 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C0804u, 0x28C2B8u, 0x28C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2C0u;
label_28c2c0:
    // 0x28c2c0: 0xffff4b49  sd          $ra, 0x4B49($ra)
    ctx->pc = 0x28c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19273), GPR_U64(ctx, 31));
label_28c2c4:
    // 0x28c2c4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2c8:
    // 0x28c2c8: 0xf030201  jal         func_C0C0804
label_28c2cc:
    if (ctx->pc == 0x28C2CCu) {
        ctx->pc = 0x28C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C8u;
        // 0x28c2cc: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C2CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2D0u;
        goto label_28c2d0;
    }
    ctx->pc = 0x28C2C8u;
    SET_GPR_U32(ctx, 31, 0x28C2D0u);
    ctx->pc = 0x28C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2C8u;
    // 0x28c2cc: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C2CC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C0804u, 0x28C2C8u, 0x28C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2D0u;
label_28c2d0:
    // 0x28c2d0: 0x4cff337b  .word       0x4CFF337B                   # INVALID     $a3, $ra, 0x337B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2d0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2D0 raw=0x4CFF337B");
 /* MITIGATED */
label_28c2d4:
    // 0x28c2d4: 0xffff3a36  sd          $ra, 0x3A36($ra)
    ctx->pc = 0x28c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14902), GPR_U64(ctx, 31));
label_28c2d8:
    // 0x28c2d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2dc:
    // 0x28c2dc: 0x2e2d45ff  sltiu       $t5, $s1, 0x45FF
    ctx->pc = 0x28c2dcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17919) ? 1 : 0);
label_28c2e0:
    // 0x28c2e0: 0x42412221  .word       0x42412221                   # INVALID     $s2, $at, 0x2221 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c2e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28C2E0 raw=0x42412221"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c2e4:
    // 0x28c2e4: 0x4e4d0e0d  .word       0x4E4D0E0D                   # INVALID     $s2, $t5, 0xE0D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2e4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2E4 raw=0x4E4D0E0D");
 /* MITIGATED */
label_28c2e8:
    // 0x28c2e8: 0xffff0201  sd          $ra, 0x201($ra)
    ctx->pc = 0x28c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 513), GPR_U64(ctx, 31));
label_28c2ec:
    // 0x28c2ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2f0:
    // 0x28c2f0: 0x5a5946ff  .word       0x5A5946FF                   # blezl       $s2, . + 4 + (0x46FF << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_28c2f4:
    if (ctx->pc == 0x28C2F4u) {
        ctx->pc = 0x28C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2F0u;
        // 0x28c2f4: 0x8072c2b  j           func_1CB0AC (Delay Slot)
        // J 0x1CB0AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2F8u;
        goto label_28c2f8;
    }
    ctx->pc = 0x28C2F0u;
    {
        const bool branch_taken_0x28c2f0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x28c2f0) {
            ctx->pc = 0x28C2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2F0u;
            // 0x28c2f4: 0x8072c2b  j           func_1CB0AC (Delay Slot)
            // J 0x1CB0AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DEF0u;
            return;
        }
    }
    ctx->pc = 0x28C2F8u;
label_28c2f8:
    // 0x28c2f8: 0x38374a49  xori        $s7, $at, 0x4A49
    ctx->pc = 0x28c2f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)19017);
label_28c2fc:
    // 0x28c2fc: 0xffff504f  sd          $ra, 0x504F($ra)
    ctx->pc = 0x28c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 20559), GPR_U64(ctx, 31));
label_28c300:
    // 0x28c300: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c300u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c304:
    // 0x28c304: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c308:
    // 0x28c308: 0x7060403  .word       0x07060403                   # INVALID     $t8, $a2, 0x403 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28c308u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28C308 raw=0x07060403");
 /* MITIGATED */
label_28c30c:
    // 0x28c30c: 0x32201612  andi        $zero, $s1, 0x1612
    ctx->pc = 0x28c30cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5650);
label_28c310:
    // 0x28c310: 0xffff4734  sd          $ra, 0x4734($ra)
    ctx->pc = 0x28c310u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18228), GPR_U64(ctx, 31));
label_28c314:
    // 0x28c314: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c314u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c318:
    // 0x28c318: 0x2014eff  .word       0x02014EFF                   # dsra32      $t1, $at, 27 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c318u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 27));
label_28c31c:
    // 0x28c31c: 0x4cff1603  .word       0x4CFF1603                   # INVALID     $a3, $ra, 0x1603 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c31cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C31C raw=0x4CFF1603");
 /* MITIGATED */
label_28c320:
    // 0x28c320: 0x32242220  andi        $a0, $s1, 0x2220
    ctx->pc = 0x28c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
label_28c324:
    // 0x28c324: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c324u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c328:
    // 0x28c328: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c328u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c32c:
    // 0x28c32c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c330:
    // 0x28c330: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c330u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c334:
    // 0x28c334: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c334u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c338:
    // 0x28c338: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c338u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c33c:
    // 0x28c33c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c33cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c340:
    // 0x28c340: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c340u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c344:
    // 0x28c344: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c344u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c348:
    // 0x28c348: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c348u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c34c:
    // 0x28c34c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c350:
    // 0x28c350: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c350u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c354:
    // 0x28c354: 0x0  nop
    ctx->pc = 0x28c354u;
    // NOP
label_28c358:
    // 0x28c358: 0x0  nop
    ctx->pc = 0x28c358u;
    // NOP
label_28c35c:
    // 0x28c35c: 0x0  nop
    ctx->pc = 0x28c35cu;
    // NOP
label_28c360:
    // 0x28c360: 0x50024f00  beql        $zero, $v0, . + 4 + (0x4F00 << 2)
label_28c364:
    if (ctx->pc == 0x28C364u) {
        ctx->pc = 0x28C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C360u;
        // 0x28c364: 0x52055104  beql        $s0, $a1, . + 4 + (0x5104 << 2) (Delay Slot)
        // Likely branch instruction at 0x28C364 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C368u;
        goto label_28c368;
    }
    ctx->pc = 0x28C360u;
    {
        const bool branch_taken_0x28c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c360) {
            ctx->pc = 0x28C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C360u;
            // 0x28c364: 0x52055104  beql        $s0, $a1, . + 4 + (0x5104 << 2) (Delay Slot)
            // Likely branch instruction at 0x28C364 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FF64u;
            return;
        }
    }
    ctx->pc = 0x28C368u;
label_28c368:
    // 0x28c368: 0x54095307  bnel        $zero, $t1, . + 4 + (0x5307 << 2)
label_28c36c:
    if (ctx->pc == 0x28C36Cu) {
        ctx->pc = 0x28C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C368u;
        // 0x28c36c: 0xe0f0b0c  jal         func_83C2C30 (Delay Slot)
        // JAL 0x83C2C30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C370u;
        goto label_28c370;
    }
    ctx->pc = 0x28C368u;
    {
        const bool branch_taken_0x28c368 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 9));
        if (branch_taken_0x28c368) {
            ctx->pc = 0x28C36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C368u;
            // 0x28c36c: 0xe0f0b0c  jal         func_83C2C30 (Delay Slot)
            // JAL 0x83C2C30 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F88u;
            return;
        }
    }
    ctx->pc = 0x28C370u;
label_28c370:
    // 0x28c370: 0x1a161417  .word       0x1A161417                   # blez        $s0, . + 4 + (0x1417 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
label_28c374:
    if (ctx->pc == 0x28C374u) {
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x211c1d55  addi        $gp, $t0, 0x1D55 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7509, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C378u;
        goto label_28c378;
    }
    ctx->pc = 0x28C370u;
    {
        const bool branch_taken_0x28c370 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x211c1d55  addi        $gp, $t0, 0x1D55 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7509, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c370) {
            ctx->pc = 0x2913D0u;
            { ctx->pc = 0x2913d0; return; }
        }
    }
    ctx->pc = 0x28C378u;
label_28c378:
    // 0x28c378: 0x26252822  addiu       $a1, $s1, 0x2822
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10274));
label_28c37c:
    // 0x28c37c: 0x32332c2d  andi        $s3, $s1, 0x2C2D
    ctx->pc = 0x28c37cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11309);
label_28c380:
    // 0x28c380: 0x3f563739  .word       0x3F563739                   # lui         $s6, 0x3739 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)14137 << 16));
label_28c384:
    // 0x28c384: 0x4642413e  .word       0x4642413E                   # INVALID     $s2, $v0, 0x413E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c384u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3E at 0x28C384 raw=0x4642413E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c388:
    // 0x28c388: 0xff4a4b47  sd          $t2, 0x4B47($k0)
    ctx->pc = 0x28c388u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 19271), GPR_U64(ctx, 10));
label_28c38c:
    // 0x28c38c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c390:
    // 0x28c390: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c390u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c394:
    // 0x28c394: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c394u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c398:
    // 0x28c398: 0xffff01ff  sd          $ra, 0x1FF($ra)
    ctx->pc = 0x28c398u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 511), GPR_U64(ctx, 31));
label_28c39c:
    // 0x28c39c: 0xd0b0907  jal         func_42C241C
label_28c3a0:
    if (ctx->pc == 0x28C3A0u) {
        ctx->pc = 0x28C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C39Cu;
        // 0x28c3a0: 0x19171513  .word       0x19171513                   # blez        $t0, . + 4 + (0x1513 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C3A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3A4u;
        goto label_28c3a4;
    }
    ctx->pc = 0x28C39Cu;
    SET_GPR_U32(ctx, 31, 0x28C3A4u);
    ctx->pc = 0x28C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C39Cu;
    // 0x28c3a0: 0x19171513  .word       0x19171513                   # blez        $t0, . + 4 + (0x1513 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C3A0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C241Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C241Cu, 0x28C39Cu, 0x28C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3A4u;
label_28c3a4:
    // 0x28c3a4: 0x211f1d1b  addi        $ra, $t0, 0x1D1B
    ctx->pc = 0x28c3a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7451, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_28c3a8:
    // 0x28c3a8: 0x2b292723  slti        $t1, $t9, 0x2723
    ctx->pc = 0x28c3a8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)10019) ? 1 : 0);
label_28c3ac:
    // 0x28c3ac: 0x35332f2d  ori         $s3, $t1, 0x2F2D
    ctx->pc = 0x28c3acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12077);
label_28c3b0:
    // 0x28c3b0: 0x3d3b3937  .word       0x3D3B3937                   # lui         $k1, 0x3937 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)14647 << 16));
label_28c3b4:
    // 0x28c3b4: 0xff43413f  sd          $v1, 0x413F($k0)
    ctx->pc = 0x28c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 16703), GPR_U64(ctx, 3));
label_28c3b8:
    // 0x28c3b8: 0x4d4b4947  .word       0x4D4B4947                   # INVALID     $t2, $t3, 0x4947 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c3b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C3B8 raw=0x4D4B4947");
 /* MITIGATED */
label_28c3bc:
    // 0x28c3bc: 0x5553514f  bnel        $t2, $s3, . + 4 + (0x514F << 2)
label_28c3c0:
    if (ctx->pc == 0x28C3C0u) {
        ctx->pc = 0x28C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3BCu;
        // 0x28c3c0: 0xffff5957  sd          $ra, 0x5957($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 22871), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3C4u;
        goto label_28c3c4;
    }
    ctx->pc = 0x28C3BCu;
    {
        const bool branch_taken_0x28c3bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 19));
        if (branch_taken_0x28c3bc) {
            ctx->pc = 0x28C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C3BCu;
            // 0x28c3c0: 0xffff5957  sd          $ra, 0x5957($ra) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 31), 22871), GPR_U64(ctx, 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A08FCu;
            return;
        }
    }
    ctx->pc = 0x28C3C4u;
label_28c3c4:
    // 0x28c3c4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x28c3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_28c3c8:
    // 0x28c3c8: 0x0  nop
    ctx->pc = 0x28c3c8u;
    // NOP
label_28c3cc:
    // 0x28c3cc: 0x0  nop
    ctx->pc = 0x28c3ccu;
    // NOP
label_28c3d0:
    // 0x28c3d0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3d4:
    // 0x28c3d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3d8:
    // 0x28c3d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3dc:
    // 0x28c3dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e0:
    // 0x28c3e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e4:
    // 0x28c3e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e8:
    // 0x28c3e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3ec:
    // 0x28c3ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3f0:
    // 0x28c3f0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3f4:
    // 0x28c3f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    ctx->pc = 0x28c3f8u;
    return;
}

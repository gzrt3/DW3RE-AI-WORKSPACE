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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part43(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        case 0x25bf58u: goto label_25bf58;
        case 0x25bf5cu: goto label_25bf5c;
        case 0x25bf60u: goto label_25bf60;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bf6cu: goto label_25bf6c;
        case 0x25bf70u: goto label_25bf70;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf78u: goto label_25bf78;
        case 0x25bf7cu: goto label_25bf7c;
        case 0x25bf80u: goto label_25bf80;
        case 0x25bf84u: goto label_25bf84;
        case 0x25bf88u: goto label_25bf88;
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf90u: goto label_25bf90;
        case 0x25bf94u: goto label_25bf94;
        case 0x25bf98u: goto label_25bf98;
        case 0x25bf9cu: goto label_25bf9c;
        case 0x25bfa0u: goto label_25bfa0;
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfa8u: goto label_25bfa8;
        case 0x25bfacu: goto label_25bfac;
        case 0x25bfb0u: goto label_25bfb0;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25bfb8u: goto label_25bfb8;
        case 0x25bfbcu: goto label_25bfbc;
        case 0x25bfc0u: goto label_25bfc0;
        case 0x25bfc4u: goto label_25bfc4;
        case 0x25bfc8u: goto label_25bfc8;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25bfd0u: goto label_25bfd0;
        case 0x25bfd4u: goto label_25bfd4;
        case 0x25bfd8u: goto label_25bfd8;
        case 0x25bfdcu: goto label_25bfdc;
        case 0x25bfe0u: goto label_25bfe0;
        case 0x25bfe4u: goto label_25bfe4;
        case 0x25bfe8u: goto label_25bfe8;
        case 0x25bfecu: goto label_25bfec;
        case 0x25bff0u: goto label_25bff0;
        case 0x25bff4u: goto label_25bff4;
        case 0x25bff8u: goto label_25bff8;
        case 0x25bffcu: goto label_25bffc;
        case 0x25c000u: goto label_25c000;
        case 0x25c004u: goto label_25c004;
        case 0x25c008u: goto label_25c008;
        case 0x25c00cu: goto label_25c00c;
        case 0x25c010u: goto label_25c010;
        case 0x25c014u: goto label_25c014;
        case 0x25c018u: goto label_25c018;
        case 0x25c01cu: goto label_25c01c;
        case 0x25c020u: goto label_25c020;
        case 0x25c024u: goto label_25c024;
        case 0x25c028u: goto label_25c028;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c030u: goto label_25c030;
        case 0x25c034u: goto label_25c034;
        case 0x25c038u: goto label_25c038;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c040u: goto label_25c040;
        case 0x25c044u: goto label_25c044;
        case 0x25c048u: goto label_25c048;
        case 0x25c04cu: goto label_25c04c;
        case 0x25c050u: goto label_25c050;
        case 0x25c054u: goto label_25c054;
        case 0x25c058u: goto label_25c058;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c060u: goto label_25c060;
        case 0x25c064u: goto label_25c064;
        case 0x25c068u: goto label_25c068;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c070u: goto label_25c070;
        case 0x25c074u: goto label_25c074;
        case 0x25c078u: goto label_25c078;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c080u: goto label_25c080;
        case 0x25c084u: goto label_25c084;
        case 0x25c088u: goto label_25c088;
        case 0x25c08cu: goto label_25c08c;
        case 0x25c090u: goto label_25c090;
        case 0x25c094u: goto label_25c094;
        case 0x25c098u: goto label_25c098;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0a0u: goto label_25c0a0;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0a8u: goto label_25c0a8;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0b0u: goto label_25c0b0;
        case 0x25c0b4u: goto label_25c0b4;
        case 0x25c0b8u: goto label_25c0b8;
        case 0x25c0bcu: goto label_25c0bc;
        case 0x25c0c0u: goto label_25c0c0;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0c8u: goto label_25c0c8;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0d4u: goto label_25c0d4;
        case 0x25c0d8u: goto label_25c0d8;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c0e0u: goto label_25c0e0;
        case 0x25c0e4u: goto label_25c0e4;
        case 0x25c0e8u: goto label_25c0e8;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        case 0x25c1f8u: goto label_25c1f8;
        case 0x25c1fcu: goto label_25c1fc;
        case 0x25c200u: goto label_25c200;
        case 0x25c204u: goto label_25c204;
        case 0x25c208u: goto label_25c208;
        case 0x25c20cu: goto label_25c20c;
        case 0x25c210u: goto label_25c210;
        case 0x25c214u: goto label_25c214;
        case 0x25c218u: goto label_25c218;
        case 0x25c21cu: goto label_25c21c;
        case 0x25c220u: goto label_25c220;
        case 0x25c224u: goto label_25c224;
        case 0x25c228u: goto label_25c228;
        case 0x25c22cu: goto label_25c22c;
        case 0x25c230u: goto label_25c230;
        case 0x25c234u: goto label_25c234;
        case 0x25c238u: goto label_25c238;
        case 0x25c23cu: goto label_25c23c;
        case 0x25c240u: goto label_25c240;
        case 0x25c244u: goto label_25c244;
        case 0x25c248u: goto label_25c248;
        case 0x25c24cu: goto label_25c24c;
        case 0x25c250u: goto label_25c250;
        case 0x25c254u: goto label_25c254;
        case 0x25c258u: goto label_25c258;
        case 0x25c25cu: goto label_25c25c;
        case 0x25c260u: goto label_25c260;
        case 0x25c264u: goto label_25c264;
        case 0x25c268u: goto label_25c268;
        case 0x25c26cu: goto label_25c26c;
        case 0x25c270u: goto label_25c270;
        case 0x25c274u: goto label_25c274;
        case 0x25c278u: goto label_25c278;
        case 0x25c27cu: goto label_25c27c;
        case 0x25c280u: goto label_25c280;
        case 0x25c284u: goto label_25c284;
        case 0x25c288u: goto label_25c288;
        case 0x25c28cu: goto label_25c28c;
        case 0x25c290u: goto label_25c290;
        case 0x25c294u: goto label_25c294;
        case 0x25c298u: goto label_25c298;
        case 0x25c29cu: goto label_25c29c;
        case 0x25c2a0u: goto label_25c2a0;
        case 0x25c2a4u: goto label_25c2a4;
        case 0x25c2a8u: goto label_25c2a8;
        case 0x25c2acu: goto label_25c2ac;
        case 0x25c2b0u: goto label_25c2b0;
        case 0x25c2b4u: goto label_25c2b4;
        case 0x25c2b8u: goto label_25c2b8;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2c0u: goto label_25c2c0;
        case 0x25c2c4u: goto label_25c2c4;
        case 0x25c2c8u: goto label_25c2c8;
        case 0x25c2ccu: goto label_25c2cc;
        case 0x25c2d0u: goto label_25c2d0;
        case 0x25c2d4u: goto label_25c2d4;
        case 0x25c2d8u: goto label_25c2d8;
        case 0x25c2dcu: goto label_25c2dc;
        case 0x25c2e0u: goto label_25c2e0;
        case 0x25c2e4u: goto label_25c2e4;
        case 0x25c2e8u: goto label_25c2e8;
        case 0x25c2ecu: goto label_25c2ec;
        case 0x25c2f0u: goto label_25c2f0;
        case 0x25c2f4u: goto label_25c2f4;
        case 0x25c2f8u: goto label_25c2f8;
        case 0x25c2fcu: goto label_25c2fc;
        case 0x25c300u: goto label_25c300;
        case 0x25c304u: goto label_25c304;
        case 0x25c308u: goto label_25c308;
        case 0x25c30cu: goto label_25c30c;
        case 0x25c310u: goto label_25c310;
        case 0x25c314u: goto label_25c314;
        case 0x25c318u: goto label_25c318;
        case 0x25c31cu: goto label_25c31c;
        case 0x25c320u: goto label_25c320;
        case 0x25c324u: goto label_25c324;
        case 0x25c328u: goto label_25c328;
        case 0x25c32cu: goto label_25c32c;
        case 0x25c330u: goto label_25c330;
        case 0x25c334u: goto label_25c334;
        case 0x25c338u: goto label_25c338;
        case 0x25c33cu: goto label_25c33c;
        case 0x25c340u: goto label_25c340;
        case 0x25c344u: goto label_25c344;
        case 0x25c348u: goto label_25c348;
        case 0x25c34cu: goto label_25c34c;
        case 0x25c350u: goto label_25c350;
        case 0x25c354u: goto label_25c354;
        case 0x25c358u: goto label_25c358;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c360u: goto label_25c360;
        case 0x25c364u: goto label_25c364;
        case 0x25c368u: goto label_25c368;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c370u: goto label_25c370;
        case 0x25c374u: goto label_25c374;
        case 0x25c378u: goto label_25c378;
        case 0x25c37cu: goto label_25c37c;
        case 0x25c380u: goto label_25c380;
        case 0x25c384u: goto label_25c384;
        case 0x25c388u: goto label_25c388;
        case 0x25c38cu: goto label_25c38c;
        case 0x25c390u: goto label_25c390;
        case 0x25c394u: goto label_25c394;
        case 0x25c398u: goto label_25c398;
        case 0x25c39cu: goto label_25c39c;
        case 0x25c3a0u: goto label_25c3a0;
        case 0x25c3a4u: goto label_25c3a4;
        case 0x25c3a8u: goto label_25c3a8;
        case 0x25c3acu: goto label_25c3ac;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3b4u: goto label_25c3b4;
        case 0x25c3b8u: goto label_25c3b8;
        case 0x25c3bcu: goto label_25c3bc;
        case 0x25c3c0u: goto label_25c3c0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3c8u: goto label_25c3c8;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c3d0u: goto label_25c3d0;
        case 0x25c3d4u: goto label_25c3d4;
        case 0x25c3d8u: goto label_25c3d8;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c3e8u: goto label_25c3e8;
        case 0x25c3ecu: goto label_25c3ec;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c3f4u: goto label_25c3f4;
        case 0x25c3f8u: goto label_25c3f8;
        case 0x25c3fcu: goto label_25c3fc;
        default: return;
    }

label_25bc30:
    // 0x25bc30: 0x50f6  tne         $zero, $zero, 323
    ctx->pc = 0x25bc30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc34:
    // 0x25bc34: 0xbcf0  tge         $zero, $zero, 755
    ctx->pc = 0x25bc34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc38:
    // 0x25bc38: 0x0  nop
    ctx->pc = 0x25bc38u;
    // NOP
label_25bc3c:
    // 0x25bc3c: 0x0  nop
    ctx->pc = 0x25bc3cu;
    // NOP
label_25bc40:
    // 0x25bc40: 0x510e  .word       0x0000510E                   # INVALID     $zero, $zero, 0x510E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BC40 raw=0x0000510E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bc44:
    // 0x25bc44: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x25bc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc48:
    // 0x25bc48: 0x0  nop
    ctx->pc = 0x25bc48u;
    // NOP
label_25bc4c:
    // 0x25bc4c: 0x0  nop
    ctx->pc = 0x25bc4cu;
    // NOP
label_25bc50:
    // 0x25bc50: 0x5126  .word       0x00005126                   # xor         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25bc54:
    // 0x25bc54: 0xcc00  sll         $t9, $zero, 16
    ctx->pc = 0x25bc54u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25bc58:
    // 0x25bc58: 0x0  nop
    ctx->pc = 0x25bc58u;
    // NOP
label_25bc5c:
    // 0x25bc5c: 0x0  nop
    ctx->pc = 0x25bc5cu;
    // NOP
label_25bc60:
    // 0x25bc60: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25bc64:
    // 0x25bc64: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x25bc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc68:
    // 0x25bc68: 0x0  nop
    ctx->pc = 0x25bc68u;
    // NOP
label_25bc6c:
    // 0x25bc6c: 0x0  nop
    ctx->pc = 0x25bc6cu;
    // NOP
label_25bc70:
    // 0x25bc70: 0x5157  .word       0x00005157                   # dsrav       $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc70u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bc74:
    // 0x25bc74: 0x9110  .word       0x00009110                   # mfhi        $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc74u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25bc78:
    // 0x25bc78: 0x0  nop
    ctx->pc = 0x25bc78u;
    // NOP
label_25bc7c:
    // 0x25bc7c: 0x0  nop
    ctx->pc = 0x25bc7cu;
    // NOP
label_25bc80:
    // 0x25bc80: 0x516a  .word       0x0000516A                   # slt         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc80u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25bc84:
    // 0x25bc84: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x25bc84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc88:
    // 0x25bc88: 0x0  nop
    ctx->pc = 0x25bc88u;
    // NOP
label_25bc8c:
    // 0x25bc8c: 0x0  nop
    ctx->pc = 0x25bc8cu;
    // NOP
label_25bc90:
    // 0x25bc90: 0x5185  .word       0x00005185                   # INVALID     $zero, $zero, 0x5185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BC90 raw=0x00005185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bc94:
    // 0x25bc94: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25bc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25bc98:
    // 0x25bc98: 0x0  nop
    ctx->pc = 0x25bc98u;
    // NOP
label_25bc9c:
    // 0x25bc9c: 0x0  nop
    ctx->pc = 0x25bc9cu;
    // NOP
label_25bca0:
    // 0x25bca0: 0x5196  .word       0x00005196                   # dsrlv       $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bca0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bca4:
    // 0x25bca4: 0xa900  sll         $s5, $zero, 4
    ctx->pc = 0x25bca4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25bca8:
    // 0x25bca8: 0x0  nop
    ctx->pc = 0x25bca8u;
    // NOP
label_25bcac:
    // 0x25bcac: 0x0  nop
    ctx->pc = 0x25bcacu;
    // NOP
label_25bcb0:
    // 0x25bcb0: 0x51ac  .word       0x000051AC                   # dadd        $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_25bcb4:
    // 0x25bcb4: 0xad00  sll         $s5, $zero, 20
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25bcb8:
    // 0x25bcb8: 0x0  nop
    ctx->pc = 0x25bcb8u;
    // NOP
label_25bcbc:
    // 0x25bcbc: 0x0  nop
    ctx->pc = 0x25bcbcu;
    // NOP
label_25bcc0:
    // 0x25bcc0: 0x51c2  srl         $t2, $zero, 7
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_25bcc4:
    // 0x25bcc4: 0xc570  tge         $zero, $zero, 789
    ctx->pc = 0x25bcc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bcc8:
    // 0x25bcc8: 0x0  nop
    ctx->pc = 0x25bcc8u;
    // NOP
label_25bccc:
    // 0x25bccc: 0x0  nop
    ctx->pc = 0x25bcccu;
    // NOP
label_25bcd0:
    // 0x25bcd0: 0x51db  .word       0x000051DB                   # divu        $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25bcd4:
    // 0x25bcd4: 0x10a50  .word       0x00010A50                   # mfhi        $at # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcd4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_25bcd8:
    // 0x25bcd8: 0x0  nop
    ctx->pc = 0x25bcd8u;
    // NOP
label_25bcdc:
    // 0x25bcdc: 0x0  nop
    ctx->pc = 0x25bcdcu;
    // NOP
label_25bce0:
    // 0x25bce0: 0x51fd  .word       0x000051FD                   # INVALID     $zero, $zero, 0x51FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25BCE0 raw=0x000051FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bce4:
    // 0x25bce4: 0xb900  sll         $s7, $zero, 4
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25bce8:
    // 0x25bce8: 0x0  nop
    ctx->pc = 0x25bce8u;
    // NOP
label_25bcec:
    // 0x25bcec: 0x0  nop
    ctx->pc = 0x25bcecu;
    // NOP
label_25bcf0:
    // 0x25bcf0: 0x5215  .word       0x00005215                   # INVALID     $zero, $zero, 0x5215 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25BCF0 raw=0x00005215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bcf4:
    // 0x25bcf4: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25bcf8:
    // 0x25bcf8: 0x0  nop
    ctx->pc = 0x25bcf8u;
    // NOP
label_25bcfc:
    // 0x25bcfc: 0x0  nop
    ctx->pc = 0x25bcfcu;
    // NOP
label_25bd00:
    // 0x25bd00: 0x522f  .word       0x0000522F                   # dsubu       $t2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25bd04:
    // 0x25bd04: 0xeae0  .word       0x0000EAE0                   # add         $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25bd08:
    // 0x25bd08: 0x0  nop
    ctx->pc = 0x25bd08u;
    // NOP
label_25bd0c:
    // 0x25bd0c: 0x0  nop
    ctx->pc = 0x25bd0cu;
    // NOP
label_25bd10:
    // 0x25bd10: 0x524d  break       0, 329
    ctx->pc = 0x25bd10u;
    runtime->handleBreak(rdram, ctx);
label_25bd14:
    // 0x25bd14: 0xc600  sll         $t8, $zero, 24
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25bd18:
    // 0x25bd18: 0x0  nop
    ctx->pc = 0x25bd18u;
    // NOP
label_25bd1c:
    // 0x25bd1c: 0x0  nop
    ctx->pc = 0x25bd1cu;
    // NOP
label_25bd20:
    // 0x25bd20: 0x5266  .word       0x00005266                   # xor         $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25bd24:
    // 0x25bd24: 0xe620  .word       0x0000E620                   # add         $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25bd28:
    // 0x25bd28: 0x0  nop
    ctx->pc = 0x25bd28u;
    // NOP
label_25bd2c:
    // 0x25bd2c: 0x0  nop
    ctx->pc = 0x25bd2cu;
    // NOP
label_25bd30:
    // 0x25bd30: 0x5283  sra         $t2, $zero, 10
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 10));
label_25bd34:
    // 0x25bd34: 0xc420  .word       0x0000C420                   # add         $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25bd38:
    // 0x25bd38: 0x0  nop
    ctx->pc = 0x25bd38u;
    // NOP
label_25bd3c:
    // 0x25bd3c: 0x0  nop
    ctx->pc = 0x25bd3cu;
    // NOP
label_25bd40:
    // 0x25bd40: 0x529c  .word       0x0000529C                   # dmult       $zero, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25BD40 raw=0x0000529C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bd44:
    // 0x25bd44: 0xc920  .word       0x0000C920                   # add         $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25bd48:
    // 0x25bd48: 0x0  nop
    ctx->pc = 0x25bd48u;
    // NOP
label_25bd4c:
    // 0x25bd4c: 0x0  nop
    ctx->pc = 0x25bd4cu;
    // NOP
label_25bd50:
    // 0x25bd50: 0x52b6  tne         $zero, $zero, 330
    ctx->pc = 0x25bd50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bd54:
    // 0x25bd54: 0xbf40  sll         $s7, $zero, 29
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25bd58:
    // 0x25bd58: 0x0  nop
    ctx->pc = 0x25bd58u;
    // NOP
label_25bd5c:
    // 0x25bd5c: 0x0  nop
    ctx->pc = 0x25bd5cu;
    // NOP
label_25bd60:
    // 0x25bd60: 0x52ce  .word       0x000052CE                   # INVALID     $zero, $zero, 0x52CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BD60 raw=0x000052CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bd64:
    // 0x25bd64: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25bd68:
    // 0x25bd68: 0x0  nop
    ctx->pc = 0x25bd68u;
    // NOP
label_25bd6c:
    // 0x25bd6c: 0x0  nop
    ctx->pc = 0x25bd6cu;
    // NOP
label_25bd70:
    // 0x25bd70: 0x52e7  .word       0x000052E7                   # not         $t2, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd70u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25bd74:
    // 0x25bd74: 0xd810  mfhi        $k1
    ctx->pc = 0x25bd74u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25bd78:
    // 0x25bd78: 0x0  nop
    ctx->pc = 0x25bd78u;
    // NOP
label_25bd7c:
    // 0x25bd7c: 0x0  nop
    ctx->pc = 0x25bd7cu;
    // NOP
label_25bd80:
    // 0x25bd80: 0x5303  sra         $t2, $zero, 12
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 12));
label_25bd84:
    // 0x25bd84: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25bd88:
    // 0x25bd88: 0x0  nop
    ctx->pc = 0x25bd88u;
    // NOP
label_25bd8c:
    // 0x25bd8c: 0x0  nop
    ctx->pc = 0x25bd8cu;
    // NOP
label_25bd90:
    // 0x25bd90: 0x5318  .word       0x00005318                   # mult        $t2, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_25bd94:
    // 0x25bd94: 0xc230  tge         $zero, $zero, 776
    ctx->pc = 0x25bd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bd98:
    // 0x25bd98: 0x0  nop
    ctx->pc = 0x25bd98u;
    // NOP
label_25bd9c:
    // 0x25bd9c: 0x0  nop
    ctx->pc = 0x25bd9cu;
    // NOP
label_25bda0:
    // 0x25bda0: 0x5331  tgeu        $zero, $zero, 332
    ctx->pc = 0x25bda0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bda4:
    // 0x25bda4: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25bda8:
    // 0x25bda8: 0x0  nop
    ctx->pc = 0x25bda8u;
    // NOP
label_25bdac:
    // 0x25bdac: 0x0  nop
    ctx->pc = 0x25bdacu;
    // NOP
label_25bdb0:
    // 0x25bdb0: 0x533c  dsll32      $t2, $zero, 12
    ctx->pc = 0x25bdb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 12));
label_25bdb4:
    // 0x25bdb4: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25bdb8:
    // 0x25bdb8: 0x0  nop
    ctx->pc = 0x25bdb8u;
    // NOP
label_25bdbc:
    // 0x25bdbc: 0x0  nop
    ctx->pc = 0x25bdbcu;
    // NOP
label_25bdc0:
    // 0x25bdc0: 0x534d  break       0, 333
    ctx->pc = 0x25bdc0u;
    runtime->handleBreak(rdram, ctx);
label_25bdc4:
    // 0x25bdc4: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25bdc8:
    // 0x25bdc8: 0x0  nop
    ctx->pc = 0x25bdc8u;
    // NOP
label_25bdcc:
    // 0x25bdcc: 0x0  nop
    ctx->pc = 0x25bdccu;
    // NOP
label_25bdd0:
    // 0x25bdd0: 0x5356  .word       0x00005356                   # dsrlv       $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bdd4:
    // 0x25bdd4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x25bdd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25bdd8:
    // 0x25bdd8: 0x0  nop
    ctx->pc = 0x25bdd8u;
    // NOP
label_25bddc:
    // 0x25bddc: 0x0  nop
    ctx->pc = 0x25bddcu;
    // NOP
label_25bde0:
    // 0x25bde0: 0x5363  .word       0x00005363                   # negu        $t2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bde0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25bde4:
    // 0x25bde4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bde4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25bde8:
    // 0x25bde8: 0x0  nop
    ctx->pc = 0x25bde8u;
    // NOP
label_25bdec:
    // 0x25bdec: 0x0  nop
    ctx->pc = 0x25bdecu;
    // NOP
label_25bdf0:
    // 0x25bdf0: 0x536d  .word       0x0000536D                   # daddu       $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bdf4:
    // 0x25bdf4: 0xb840  sll         $s7, $zero, 1
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25bdf8:
    // 0x25bdf8: 0x0  nop
    ctx->pc = 0x25bdf8u;
    // NOP
label_25bdfc:
    // 0x25bdfc: 0x0  nop
    ctx->pc = 0x25bdfcu;
    // NOP
label_25be00:
    // 0x25be00: 0x5385  .word       0x00005385                   # INVALID     $zero, $zero, 0x5385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BE00 raw=0x00005385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25be04:
    // 0x25be04: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25be08:
    // 0x25be08: 0x0  nop
    ctx->pc = 0x25be08u;
    // NOP
label_25be0c:
    // 0x25be0c: 0x0  nop
    ctx->pc = 0x25be0cu;
    // NOP
label_25be10:
    // 0x25be10: 0x5390  .word       0x00005390                   # mfhi        $t2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be10u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25be14:
    // 0x25be14: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x25be14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25be18:
    // 0x25be18: 0x0  nop
    ctx->pc = 0x25be18u;
    // NOP
label_25be1c:
    // 0x25be1c: 0x0  nop
    ctx->pc = 0x25be1cu;
    // NOP
label_25be20:
    // 0x25be20: 0x539b  .word       0x0000539B                   # divu        $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be20u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25be24:
    // 0x25be24: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x25be24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25be28:
    // 0x25be28: 0x0  nop
    ctx->pc = 0x25be28u;
    // NOP
label_25be2c:
    // 0x25be2c: 0x0  nop
    ctx->pc = 0x25be2cu;
    // NOP
label_25be30:
    // 0x25be30: 0x53a7  .word       0x000053A7                   # not         $t2, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be30u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25be34:
    // 0x25be34: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x25be34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25be38:
    // 0x25be38: 0x0  nop
    ctx->pc = 0x25be38u;
    // NOP
label_25be3c:
    // 0x25be3c: 0x0  nop
    ctx->pc = 0x25be3cu;
    // NOP
label_25be40:
    // 0x25be40: 0x53b9  .word       0x000053B9                   # INVALID     $zero, $zero, 0x53B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25BE40 raw=0x000053B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25be44:
    // 0x25be44: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25be44u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25be48:
    // 0x25be48: 0x0  nop
    ctx->pc = 0x25be48u;
    // NOP
label_25be4c:
    // 0x25be4c: 0x0  nop
    ctx->pc = 0x25be4cu;
    // NOP
label_25be50:
    // 0x25be50: 0x53c9  .word       0x000053C9                   # jalr        $t2, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_25be54:
    if (ctx->pc == 0x25BE54u) {
        ctx->pc = 0x25BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE50u;
        // 0x25be54: 0x6a80  sll         $t5, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE58u;
        goto label_25be58;
    }
    ctx->pc = 0x25BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x25BE58u);
        ctx->pc = 0x25BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE50u;
        // 0x25be54: 0x6a80  sll         $t5, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE50u, 0x25BE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE58u;
label_25be58:
    // 0x25be58: 0x0  nop
    ctx->pc = 0x25be58u;
    // NOP
label_25be5c:
    // 0x25be5c: 0x0  nop
    ctx->pc = 0x25be5cu;
    // NOP
label_25be60:
    // 0x25be60: 0x53d7  .word       0x000053D7                   # dsrav       $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be60u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25be64:
    // 0x25be64: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x25be64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25be68:
    // 0x25be68: 0x0  nop
    ctx->pc = 0x25be68u;
    // NOP
label_25be6c:
    // 0x25be6c: 0x0  nop
    ctx->pc = 0x25be6cu;
    // NOP
label_25be70:
    // 0x25be70: 0x53dd  .word       0x000053DD                   # dmultu      $zero, $zero # 000053C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25BE70 raw=0x000053DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25be74:
    // 0x25be74: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25be78:
    // 0x25be78: 0x0  nop
    ctx->pc = 0x25be78u;
    // NOP
label_25be7c:
    // 0x25be7c: 0x0  nop
    ctx->pc = 0x25be7cu;
    // NOP
label_25be80:
    // 0x25be80: 0x53e8  .word       0x000053E8                   # mfsa        $t2 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25be80u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_25be84:
    // 0x25be84: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25be88:
    // 0x25be88: 0x0  nop
    ctx->pc = 0x25be88u;
    // NOP
label_25be8c:
    // 0x25be8c: 0x0  nop
    ctx->pc = 0x25be8cu;
    // NOP
label_25be90:
    // 0x25be90: 0x53f8  dsll        $t2, $zero, 15
    ctx->pc = 0x25be90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << 15);
label_25be94:
    // 0x25be94: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x25be94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25be98:
    // 0x25be98: 0x0  nop
    ctx->pc = 0x25be98u;
    // NOP
label_25be9c:
    // 0x25be9c: 0x0  nop
    ctx->pc = 0x25be9cu;
    // NOP
label_25bea0:
    // 0x25bea0: 0x5404  .word       0x00005404                   # sllv        $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bea0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25bea4:
    // 0x25bea4: 0x6180  sll         $t4, $zero, 6
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25bea8:
    // 0x25bea8: 0x0  nop
    ctx->pc = 0x25bea8u;
    // NOP
label_25beac:
    // 0x25beac: 0x0  nop
    ctx->pc = 0x25beacu;
    // NOP
label_25beb0:
    // 0x25beb0: 0x5411  .word       0x00005411                   # mthi        $zero # 00005400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25beb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25beb4:
    // 0x25beb4: 0x7960  .word       0x00007960                   # add         $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25beb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25beb8:
    // 0x25beb8: 0x0  nop
    ctx->pc = 0x25beb8u;
    // NOP
label_25bebc:
    // 0x25bebc: 0x0  nop
    ctx->pc = 0x25bebcu;
    // NOP
label_25bec0:
    // 0x25bec0: 0x5421  .word       0x00005421                   # addu        $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25bec4:
    // 0x25bec4: 0x35f0  tge         $zero, $zero, 215
    ctx->pc = 0x25bec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bec8:
    // 0x25bec8: 0x0  nop
    ctx->pc = 0x25bec8u;
    // NOP
label_25becc:
    // 0x25becc: 0x0  nop
    ctx->pc = 0x25beccu;
    // NOP
label_25bed0:
    // 0x25bed0: 0x5428  .word       0x00005428                   # mfsa        $t2 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bed0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_25bed4:
    // 0x25bed4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25bed8:
    // 0x25bed8: 0x0  nop
    ctx->pc = 0x25bed8u;
    // NOP
label_25bedc:
    // 0x25bedc: 0x0  nop
    ctx->pc = 0x25bedcu;
    // NOP
label_25bee0:
    // 0x25bee0: 0x5434  teq         $zero, $zero, 336
    ctx->pc = 0x25bee0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bee4:
    // 0x25bee4: 0x84d0  .word       0x000084D0                   # mfhi        $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bee4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25bee8:
    // 0x25bee8: 0x0  nop
    ctx->pc = 0x25bee8u;
    // NOP
label_25beec:
    // 0x25beec: 0x0  nop
    ctx->pc = 0x25beecu;
    // NOP
label_25bef0:
    // 0x25bef0: 0x5445  .word       0x00005445                   # INVALID     $zero, $zero, 0x5445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BEF0 raw=0x00005445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bef4:
    // 0x25bef4: 0x58b0  tge         $zero, $zero, 354
    ctx->pc = 0x25bef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bef8:
    // 0x25bef8: 0x0  nop
    ctx->pc = 0x25bef8u;
    // NOP
label_25befc:
    // 0x25befc: 0x0  nop
    ctx->pc = 0x25befcu;
    // NOP
label_25bf00:
    // 0x25bf00: 0x5451  .word       0x00005451                   # mthi        $zero # 00005440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf00u;
    ctx->hi = GPR_U64(ctx, 0);
label_25bf04:
    // 0x25bf04: 0x64d0  .word       0x000064D0                   # mfhi        $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25bf08:
    // 0x25bf08: 0x0  nop
    ctx->pc = 0x25bf08u;
    // NOP
label_25bf0c:
    // 0x25bf0c: 0x0  nop
    ctx->pc = 0x25bf0cu;
    // NOP
label_25bf10:
    // 0x25bf10: 0x545e  .word       0x0000545E                   # ddiv        $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25BF10 raw=0x0000545E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bf14:
    // 0x25bf14: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25bf18:
    // 0x25bf18: 0x0  nop
    ctx->pc = 0x25bf18u;
    // NOP
label_25bf1c:
    // 0x25bf1c: 0x0  nop
    ctx->pc = 0x25bf1cu;
    // NOP
label_25bf20:
    // 0x25bf20: 0x5469  .word       0x00005469                   # mtsa        $zero # 00005440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bf20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25bf24:
    // 0x25bf24: 0x63e0  .word       0x000063E0                   # add         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25bf28:
    // 0x25bf28: 0x0  nop
    ctx->pc = 0x25bf28u;
    // NOP
label_25bf2c:
    // 0x25bf2c: 0x0  nop
    ctx->pc = 0x25bf2cu;
    // NOP
label_25bf30:
    // 0x25bf30: 0x5476  tne         $zero, $zero, 337
    ctx->pc = 0x25bf30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bf34:
    // 0x25bf34: 0x51a0  .word       0x000051A0                   # add         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25bf38:
    // 0x25bf38: 0x0  nop
    ctx->pc = 0x25bf38u;
    // NOP
label_25bf3c:
    // 0x25bf3c: 0x0  nop
    ctx->pc = 0x25bf3cu;
    // NOP
label_25bf40:
    // 0x25bf40: 0x5481  .word       0x00005481                   # INVALID     $zero, $zero, 0x5481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25BF40 raw=0x00005481"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bf44:
    // 0x25bf44: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x25bf44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bf48:
    // 0x25bf48: 0x0  nop
    ctx->pc = 0x25bf48u;
    // NOP
label_25bf4c:
    // 0x25bf4c: 0x0  nop
    ctx->pc = 0x25bf4cu;
    // NOP
label_25bf50:
    // 0x25bf50: 0x548d  break       0, 338
    ctx->pc = 0x25bf50u;
    runtime->handleBreak(rdram, ctx);
label_25bf54:
    // 0x25bf54: 0x3980  sll         $a3, $zero, 6
    ctx->pc = 0x25bf54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25bf58:
    // 0x25bf58: 0x0  nop
    ctx->pc = 0x25bf58u;
    // NOP
label_25bf5c:
    // 0x25bf5c: 0x0  nop
    ctx->pc = 0x25bf5cu;
    // NOP
label_25bf60:
    // 0x25bf60: 0x5495  .word       0x00005495                   # INVALID     $zero, $zero, 0x5495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25BF60 raw=0x00005495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bf64:
    // 0x25bf64: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25bf68:
    // 0x25bf68: 0x0  nop
    ctx->pc = 0x25bf68u;
    // NOP
label_25bf6c:
    // 0x25bf6c: 0x0  nop
    ctx->pc = 0x25bf6cu;
    // NOP
label_25bf70:
    // 0x25bf70: 0x54a2  .word       0x000054A2                   # neg         $t2, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_25bf74:
    // 0x25bf74: 0x3790  .word       0x00003790                   # mfhi        $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf74u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25bf78:
    // 0x25bf78: 0x0  nop
    ctx->pc = 0x25bf78u;
    // NOP
label_25bf7c:
    // 0x25bf7c: 0x0  nop
    ctx->pc = 0x25bf7cu;
    // NOP
label_25bf80:
    // 0x25bf80: 0x54a9  .word       0x000054A9                   # mtsa        $zero # 00005480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bf80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25bf84:
    // 0x25bf84: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x25bf84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25bf88:
    // 0x25bf88: 0x0  nop
    ctx->pc = 0x25bf88u;
    // NOP
label_25bf8c:
    // 0x25bf8c: 0x0  nop
    ctx->pc = 0x25bf8cu;
    // NOP
label_25bf90:
    // 0x25bf90: 0x54b6  tne         $zero, $zero, 338
    ctx->pc = 0x25bf90u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bf94:
    // 0x25bf94: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bf94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25bf98:
    // 0x25bf98: 0x0  nop
    ctx->pc = 0x25bf98u;
    // NOP
label_25bf9c:
    // 0x25bf9c: 0x0  nop
    ctx->pc = 0x25bf9cu;
    // NOP
label_25bfa0:
    // 0x25bfa0: 0x54c7  .word       0x000054C7                   # srav        $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfa0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25bfa4:
    // 0x25bfa4: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25bfa8:
    // 0x25bfa8: 0x0  nop
    ctx->pc = 0x25bfa8u;
    // NOP
label_25bfac:
    // 0x25bfac: 0x0  nop
    ctx->pc = 0x25bfacu;
    // NOP
label_25bfb0:
    // 0x25bfb0: 0x54d3  .word       0x000054D3                   # mtlo        $zero # 000054C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25bfb4:
    // 0x25bfb4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25bfb8:
    // 0x25bfb8: 0x0  nop
    ctx->pc = 0x25bfb8u;
    // NOP
label_25bfbc:
    // 0x25bfbc: 0x0  nop
    ctx->pc = 0x25bfbcu;
    // NOP
label_25bfc0:
    // 0x25bfc0: 0x54dd  .word       0x000054DD                   # dmultu      $zero, $zero # 000054C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25BFC0 raw=0x000054DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bfc4:
    // 0x25bfc4: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x25bfc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25bfc8:
    // 0x25bfc8: 0x0  nop
    ctx->pc = 0x25bfc8u;
    // NOP
label_25bfcc:
    // 0x25bfcc: 0x0  nop
    ctx->pc = 0x25bfccu;
    // NOP
label_25bfd0:
    // 0x25bfd0: 0x54e9  .word       0x000054E9                   # mtsa        $zero # 000054C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bfd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25bfd4:
    // 0x25bfd4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bfd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25bfd8:
    // 0x25bfd8: 0x0  nop
    ctx->pc = 0x25bfd8u;
    // NOP
label_25bfdc:
    // 0x25bfdc: 0x0  nop
    ctx->pc = 0x25bfdcu;
    // NOP
label_25bfe0:
    // 0x25bfe0: 0x54f4  teq         $zero, $zero, 339
    ctx->pc = 0x25bfe0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bfe4:
    // 0x25bfe4: 0x2730  tge         $zero, $zero, 156
    ctx->pc = 0x25bfe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bfe8:
    // 0x25bfe8: 0x0  nop
    ctx->pc = 0x25bfe8u;
    // NOP
label_25bfec:
    // 0x25bfec: 0x0  nop
    ctx->pc = 0x25bfecu;
    // NOP
label_25bff0:
    // 0x25bff0: 0x54f9  .word       0x000054F9                   # INVALID     $zero, $zero, 0x54F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25BFF0 raw=0x000054F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bff4:
    // 0x25bff4: 0x6b00  sll         $t5, $zero, 12
    ctx->pc = 0x25bff4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25bff8:
    // 0x25bff8: 0x0  nop
    ctx->pc = 0x25bff8u;
    // NOP
label_25bffc:
    // 0x25bffc: 0x0  nop
    ctx->pc = 0x25bffcu;
    // NOP
label_25c000:
    // 0x25c000: 0x5507  .word       0x00005507                   # srav        $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c004:
    // 0x25c004: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25c008:
    // 0x25c008: 0x0  nop
    ctx->pc = 0x25c008u;
    // NOP
label_25c00c:
    // 0x25c00c: 0x0  nop
    ctx->pc = 0x25c00cu;
    // NOP
label_25c010:
    // 0x25c010: 0x5514  .word       0x00005514                   # dsllv       $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c010u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25c014:
    // 0x25c014: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x25c014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c018:
    // 0x25c018: 0x0  nop
    ctx->pc = 0x25c018u;
    // NOP
label_25c01c:
    // 0x25c01c: 0x0  nop
    ctx->pc = 0x25c01cu;
    // NOP
label_25c020:
    // 0x25c020: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c020u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25c024:
    // 0x25c024: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x25c024u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25c028:
    // 0x25c028: 0x0  nop
    ctx->pc = 0x25c028u;
    // NOP
label_25c02c:
    // 0x25c02c: 0x0  nop
    ctx->pc = 0x25c02cu;
    // NOP
label_25c030:
    // 0x25c030: 0x552a  .word       0x0000552A                   # slt         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c030u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25c034:
    // 0x25c034: 0xd860  .word       0x0000D860                   # add         $k1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25c038:
    // 0x25c038: 0x0  nop
    ctx->pc = 0x25c038u;
    // NOP
label_25c03c:
    // 0x25c03c: 0x0  nop
    ctx->pc = 0x25c03cu;
    // NOP
label_25c040:
    // 0x25c040: 0x5546  .word       0x00005546                   # srlv        $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c044:
    // 0x25c044: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25c048:
    // 0x25c048: 0x0  nop
    ctx->pc = 0x25c048u;
    // NOP
label_25c04c:
    // 0x25c04c: 0x0  nop
    ctx->pc = 0x25c04cu;
    // NOP
label_25c050:
    // 0x25c050: 0x555b  .word       0x0000555B                   # divu        $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c050u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25c054:
    // 0x25c054: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25c058:
    // 0x25c058: 0x0  nop
    ctx->pc = 0x25c058u;
    // NOP
label_25c05c:
    // 0x25c05c: 0x0  nop
    ctx->pc = 0x25c05cu;
    // NOP
label_25c060:
    // 0x25c060: 0x556c  .word       0x0000556C                   # dadd        $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c060u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_25c064:
    // 0x25c064: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25c068:
    // 0x25c068: 0x0  nop
    ctx->pc = 0x25c068u;
    // NOP
label_25c06c:
    // 0x25c06c: 0x0  nop
    ctx->pc = 0x25c06cu;
    // NOP
label_25c070:
    // 0x25c070: 0x557d  .word       0x0000557D                   # INVALID     $zero, $zero, 0x557D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25C070 raw=0x0000557D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c074:
    // 0x25c074: 0x9440  sll         $s2, $zero, 17
    ctx->pc = 0x25c074u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25c078:
    // 0x25c078: 0x0  nop
    ctx->pc = 0x25c078u;
    // NOP
label_25c07c:
    // 0x25c07c: 0x0  nop
    ctx->pc = 0x25c07cu;
    // NOP
label_25c080:
    // 0x25c080: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c080u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25c084:
    // 0x25c084: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c084u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25c088:
    // 0x25c088: 0x0  nop
    ctx->pc = 0x25c088u;
    // NOP
label_25c08c:
    // 0x25c08c: 0x0  nop
    ctx->pc = 0x25c08cu;
    // NOP
label_25c090:
    // 0x25c090: 0x55a1  .word       0x000055A1                   # addu        $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25c094:
    // 0x25c094: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x25c094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c098:
    // 0x25c098: 0x0  nop
    ctx->pc = 0x25c098u;
    // NOP
label_25c09c:
    // 0x25c09c: 0x0  nop
    ctx->pc = 0x25c09cu;
    // NOP
label_25c0a0:
    // 0x25c0a0: 0x55b9  .word       0x000055B9                   # INVALID     $zero, $zero, 0x55B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25C0A0 raw=0x000055B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c0a4:
    // 0x25c0a4: 0xcd70  tge         $zero, $zero, 821
    ctx->pc = 0x25c0a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c0a8:
    // 0x25c0a8: 0x0  nop
    ctx->pc = 0x25c0a8u;
    // NOP
label_25c0ac:
    // 0x25c0ac: 0x0  nop
    ctx->pc = 0x25c0acu;
    // NOP
label_25c0b0:
    // 0x25c0b0: 0x55d3  .word       0x000055D3                   # mtlo        $zero # 000055C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25c0b4:
    // 0x25c0b4: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x25c0b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c0b8:
    // 0x25c0b8: 0x0  nop
    ctx->pc = 0x25c0b8u;
    // NOP
label_25c0bc:
    // 0x25c0bc: 0x0  nop
    ctx->pc = 0x25c0bcu;
    // NOP
label_25c0c0:
    // 0x25c0c0: 0x55e9  .word       0x000055E9                   # mtsa        $zero # 000055C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c0c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25c0c4:
    // 0x25c0c4: 0x15fb0  tge         $zero, $at, 382
    ctx->pc = 0x25c0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25c0c8:
    // 0x25c0c8: 0x0  nop
    ctx->pc = 0x25c0c8u;
    // NOP
label_25c0cc:
    // 0x25c0cc: 0x0  nop
    ctx->pc = 0x25c0ccu;
    // NOP
label_25c0d0:
    // 0x25c0d0: 0x5615  .word       0x00005615                   # INVALID     $zero, $zero, 0x5615 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25C0D0 raw=0x00005615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c0d4:
    // 0x25c0d4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25c0d8:
    // 0x25c0d8: 0x0  nop
    ctx->pc = 0x25c0d8u;
    // NOP
label_25c0dc:
    // 0x25c0dc: 0x0  nop
    ctx->pc = 0x25c0dcu;
    // NOP
label_25c0e0:
    // 0x25c0e0: 0x562a  .word       0x0000562A                   # slt         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0e0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25c0e4:
    // 0x25c0e4: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25c0e8:
    // 0x25c0e8: 0x0  nop
    ctx->pc = 0x25c0e8u;
    // NOP
label_25c0ec:
    // 0x25c0ec: 0x0  nop
    ctx->pc = 0x25c0ecu;
    // NOP
label_25c0f0:
    // 0x25c0f0: 0x563c  dsll32      $t2, $zero, 24
    ctx->pc = 0x25c0f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 24));
label_25c0f4:
    // 0x25c0f4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25c0f8:
    // 0x25c0f8: 0x0  nop
    ctx->pc = 0x25c0f8u;
    // NOP
label_25c0fc:
    // 0x25c0fc: 0x0  nop
    ctx->pc = 0x25c0fcu;
    // NOP
label_25c100:
    // 0x25c100: 0x5656  .word       0x00005656                   # dsrlv       $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c100u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25c104:
    // 0x25c104: 0xa170  tge         $zero, $zero, 645
    ctx->pc = 0x25c104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c108:
    // 0x25c108: 0x0  nop
    ctx->pc = 0x25c108u;
    // NOP
label_25c10c:
    // 0x25c10c: 0x0  nop
    ctx->pc = 0x25c10cu;
    // NOP
label_25c110:
    // 0x25c110: 0x566b  .word       0x0000566B                   # sltu        $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c110u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25c114:
    // 0x25c114: 0xf670  tge         $zero, $zero, 985
    ctx->pc = 0x25c114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c118:
    // 0x25c118: 0x0  nop
    ctx->pc = 0x25c118u;
    // NOP
label_25c11c:
    // 0x25c11c: 0x0  nop
    ctx->pc = 0x25c11cu;
    // NOP
label_25c120:
    // 0x25c120: 0x568a  .word       0x0000568A                   # movz        $t2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c120u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_25c124:
    // 0x25c124: 0xb3b0  tge         $zero, $zero, 718
    ctx->pc = 0x25c124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c128:
    // 0x25c128: 0x0  nop
    ctx->pc = 0x25c128u;
    // NOP
label_25c12c:
    // 0x25c12c: 0x0  nop
    ctx->pc = 0x25c12cu;
    // NOP
label_25c130:
    // 0x25c130: 0x56a1  .word       0x000056A1                   # addu        $t2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25c134:
    // 0x25c134: 0xb4d0  .word       0x0000B4D0                   # mfhi        $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c134u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25c138:
    // 0x25c138: 0x0  nop
    ctx->pc = 0x25c138u;
    // NOP
label_25c13c:
    // 0x25c13c: 0x0  nop
    ctx->pc = 0x25c13cu;
    // NOP
label_25c140:
    // 0x25c140: 0x56b8  dsll        $t2, $zero, 26
    ctx->pc = 0x25c140u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << 26);
label_25c144:
    // 0x25c144: 0xff60  .word       0x0000FF60                   # add         $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_25c148:
    // 0x25c148: 0x0  nop
    ctx->pc = 0x25c148u;
    // NOP
label_25c14c:
    // 0x25c14c: 0x0  nop
    ctx->pc = 0x25c14cu;
    // NOP
label_25c150:
    // 0x25c150: 0x56d8  .word       0x000056D8                   # mult        $t2, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_25c154:
    // 0x25c154: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c154u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25c158:
    // 0x25c158: 0x0  nop
    ctx->pc = 0x25c158u;
    // NOP
label_25c15c:
    // 0x25c15c: 0x0  nop
    ctx->pc = 0x25c15cu;
    // NOP
label_25c160:
    // 0x25c160: 0x56eb  .word       0x000056EB                   # sltu        $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c160u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25c164:
    // 0x25c164: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25c168:
    // 0x25c168: 0x0  nop
    ctx->pc = 0x25c168u;
    // NOP
label_25c16c:
    // 0x25c16c: 0x0  nop
    ctx->pc = 0x25c16cu;
    // NOP
label_25c170:
    // 0x25c170: 0x5701  .word       0x00005701                   # INVALID     $zero, $zero, 0x5701 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25C170 raw=0x00005701"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c174:
    // 0x25c174: 0x134c0  sll         $a2, $at, 19
    ctx->pc = 0x25c174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_25c178:
    // 0x25c178: 0x0  nop
    ctx->pc = 0x25c178u;
    // NOP
label_25c17c:
    // 0x25c17c: 0x0  nop
    ctx->pc = 0x25c17cu;
    // NOP
label_25c180:
    // 0x25c180: 0x5728  .word       0x00005728                   # mfsa        $t2 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c180u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_25c184:
    // 0x25c184: 0xa0a0  .word       0x0000A0A0                   # add         $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25c188:
    // 0x25c188: 0x0  nop
    ctx->pc = 0x25c188u;
    // NOP
label_25c18c:
    // 0x25c18c: 0x0  nop
    ctx->pc = 0x25c18cu;
    // NOP
label_25c190:
    // 0x25c190: 0x573d  .word       0x0000573D                   # INVALID     $zero, $zero, 0x573D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25C190 raw=0x0000573D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c194:
    // 0x25c194: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25c198:
    // 0x25c198: 0x0  nop
    ctx->pc = 0x25c198u;
    // NOP
label_25c19c:
    // 0x25c19c: 0x0  nop
    ctx->pc = 0x25c19cu;
    // NOP
label_25c1a0:
    // 0x25c1a0: 0x5753  .word       0x00005753                   # mtlo        $zero # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25c1a4:
    // 0x25c1a4: 0xd2c0  sll         $k0, $zero, 11
    ctx->pc = 0x25c1a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25c1a8:
    // 0x25c1a8: 0x0  nop
    ctx->pc = 0x25c1a8u;
    // NOP
label_25c1ac:
    // 0x25c1ac: 0x0  nop
    ctx->pc = 0x25c1acu;
    // NOP
label_25c1b0:
    // 0x25c1b0: 0x576e  .word       0x0000576E                   # dsub        $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_25c1b4:
    // 0x25c1b4: 0xccd0  .word       0x0000CCD0                   # mfhi        $t9 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25c1b8:
    // 0x25c1b8: 0x0  nop
    ctx->pc = 0x25c1b8u;
    // NOP
label_25c1bc:
    // 0x25c1bc: 0x0  nop
    ctx->pc = 0x25c1bcu;
    // NOP
label_25c1c0:
    // 0x25c1c0: 0x5788  .word       0x00005788                   # jr          $zero # 00005780 <InstrIdType: CPU_SPECIAL>
label_25c1c4:
    if (ctx->pc == 0x25C1C4u) {
        ctx->pc = 0x25C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C0u;
        // 0x25c1c4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1C8u;
        goto label_25c1c8;
    }
    ctx->pc = 0x25C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C0u;
        // 0x25c1c4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25C1C8u;
label_25c1c8:
    // 0x25c1c8: 0x0  nop
    ctx->pc = 0x25c1c8u;
    // NOP
label_25c1cc:
    // 0x25c1cc: 0x0  nop
    ctx->pc = 0x25c1ccu;
    // NOP
label_25c1d0:
    // 0x25c1d0: 0x579c  .word       0x0000579C                   # dmult       $zero, $zero # 00005780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C1D0 raw=0x0000579C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c1d4:
    // 0x25c1d4: 0xba30  tge         $zero, $zero, 744
    ctx->pc = 0x25c1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c1d8:
    // 0x25c1d8: 0x0  nop
    ctx->pc = 0x25c1d8u;
    // NOP
label_25c1dc:
    // 0x25c1dc: 0x0  nop
    ctx->pc = 0x25c1dcu;
    // NOP
label_25c1e0:
    // 0x25c1e0: 0x57b4  teq         $zero, $zero, 350
    ctx->pc = 0x25c1e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c1e4:
    // 0x25c1e4: 0xe710  .word       0x0000E710                   # mfhi        $gp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1e4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25c1e8:
    // 0x25c1e8: 0x0  nop
    ctx->pc = 0x25c1e8u;
    // NOP
label_25c1ec:
    // 0x25c1ec: 0x0  nop
    ctx->pc = 0x25c1ecu;
    // NOP
label_25c1f0:
    // 0x25c1f0: 0x57d1  .word       0x000057D1                   # mthi        $zero # 000057C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25c1f4:
    // 0x25c1f4: 0x10920  .word       0x00010920                   # add         $at, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_25c1f8:
    // 0x25c1f8: 0x0  nop
    ctx->pc = 0x25c1f8u;
    // NOP
label_25c1fc:
    // 0x25c1fc: 0x0  nop
    ctx->pc = 0x25c1fcu;
    // NOP
label_25c200:
    // 0x25c200: 0x57f3  tltu        $zero, $zero, 351
    ctx->pc = 0x25c200u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c204:
    // 0x25c204: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25c208:
    // 0x25c208: 0x0  nop
    ctx->pc = 0x25c208u;
    // NOP
label_25c20c:
    // 0x25c20c: 0x0  nop
    ctx->pc = 0x25c20cu;
    // NOP
label_25c210:
    // 0x25c210: 0x5811  .word       0x00005811                   # mthi        $zero # 00005800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c210u;
    ctx->hi = GPR_U64(ctx, 0);
label_25c214:
    // 0x25c214: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25c218:
    // 0x25c218: 0x0  nop
    ctx->pc = 0x25c218u;
    // NOP
label_25c21c:
    // 0x25c21c: 0x0  nop
    ctx->pc = 0x25c21cu;
    // NOP
label_25c220:
    // 0x25c220: 0x5829  .word       0x00005829                   # mtsa        $zero # 00005800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c220u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25c224:
    // 0x25c224: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25c228:
    // 0x25c228: 0x0  nop
    ctx->pc = 0x25c228u;
    // NOP
label_25c22c:
    // 0x25c22c: 0x0  nop
    ctx->pc = 0x25c22cu;
    // NOP
label_25c230:
    // 0x25c230: 0x5845  .word       0x00005845                   # INVALID     $zero, $zero, 0x5845 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25C230 raw=0x00005845"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c234:
    // 0x25c234: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x25c234u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25c238:
    // 0x25c238: 0x0  nop
    ctx->pc = 0x25c238u;
    // NOP
label_25c23c:
    // 0x25c23c: 0x0  nop
    ctx->pc = 0x25c23cu;
    // NOP
label_25c240:
    // 0x25c240: 0x585c  .word       0x0000585C                   # dmult       $zero, $zero # 00005840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C240 raw=0x0000585C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c244:
    // 0x25c244: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c244u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25c248:
    // 0x25c248: 0x0  nop
    ctx->pc = 0x25c248u;
    // NOP
label_25c24c:
    // 0x25c24c: 0x0  nop
    ctx->pc = 0x25c24cu;
    // NOP
label_25c250:
    // 0x25c250: 0x5865  .word       0x00005865                   # move        $t3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c250u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25c254:
    // 0x25c254: 0xdb00  sll         $k1, $zero, 12
    ctx->pc = 0x25c254u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25c258:
    // 0x25c258: 0x0  nop
    ctx->pc = 0x25c258u;
    // NOP
label_25c25c:
    // 0x25c25c: 0x0  nop
    ctx->pc = 0x25c25cu;
    // NOP
label_25c260:
    // 0x25c260: 0x5881  .word       0x00005881                   # INVALID     $zero, $zero, 0x5881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25C260 raw=0x00005881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c264:
    // 0x25c264: 0xc420  .word       0x0000C420                   # add         $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25c268:
    // 0x25c268: 0x0  nop
    ctx->pc = 0x25c268u;
    // NOP
label_25c26c:
    // 0x25c26c: 0x0  nop
    ctx->pc = 0x25c26cu;
    // NOP
label_25c270:
    // 0x25c270: 0x589a  .word       0x0000589A                   # div         $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c270u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25c274:
    // 0x25c274: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x25c274u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25c278:
    // 0x25c278: 0x0  nop
    ctx->pc = 0x25c278u;
    // NOP
label_25c27c:
    // 0x25c27c: 0x0  nop
    ctx->pc = 0x25c27cu;
    // NOP
label_25c280:
    // 0x25c280: 0x58b1  tgeu        $zero, $zero, 354
    ctx->pc = 0x25c280u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c284:
    // 0x25c284: 0xbda0  .word       0x0000BDA0                   # add         $s7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25c288:
    // 0x25c288: 0x0  nop
    ctx->pc = 0x25c288u;
    // NOP
label_25c28c:
    // 0x25c28c: 0x0  nop
    ctx->pc = 0x25c28cu;
    // NOP
label_25c290:
    // 0x25c290: 0x58c9  .word       0x000058C9                   # jalr        $t3, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_25c294:
    if (ctx->pc == 0x25C294u) {
        ctx->pc = 0x25C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C290u;
        // 0x25c294: 0x9700  sll         $s2, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C298u;
        goto label_25c298;
    }
    ctx->pc = 0x25C290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x25C298u);
        ctx->pc = 0x25C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C290u;
        // 0x25c294: 0x9700  sll         $s2, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C290u, 0x25C298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C298u;
label_25c298:
    // 0x25c298: 0x0  nop
    ctx->pc = 0x25c298u;
    // NOP
label_25c29c:
    // 0x25c29c: 0x0  nop
    ctx->pc = 0x25c29cu;
    // NOP
label_25c2a0:
    // 0x25c2a0: 0x58dc  .word       0x000058DC                   # dmult       $zero, $zero # 000058C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C2A0 raw=0x000058DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c2a4:
    // 0x25c2a4: 0xc790  .word       0x0000C790                   # mfhi        $t8 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25c2a8:
    // 0x25c2a8: 0x0  nop
    ctx->pc = 0x25c2a8u;
    // NOP
label_25c2ac:
    // 0x25c2ac: 0x0  nop
    ctx->pc = 0x25c2acu;
    // NOP
label_25c2b0:
    // 0x25c2b0: 0x58f5  .word       0x000058F5                   # INVALID     $zero, $zero, 0x58F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25C2B0 raw=0x000058F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c2b4:
    // 0x25c2b4: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25c2b8:
    // 0x25c2b8: 0x0  nop
    ctx->pc = 0x25c2b8u;
    // NOP
label_25c2bc:
    // 0x25c2bc: 0x0  nop
    ctx->pc = 0x25c2bcu;
    // NOP
label_25c2c0:
    // 0x25c2c0: 0x5911  .word       0x00005911                   # mthi        $zero # 00005900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25c2c4:
    // 0x25c2c4: 0x95d0  .word       0x000095D0                   # mfhi        $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25c2c8:
    // 0x25c2c8: 0x0  nop
    ctx->pc = 0x25c2c8u;
    // NOP
label_25c2cc:
    // 0x25c2cc: 0x0  nop
    ctx->pc = 0x25c2ccu;
    // NOP
label_25c2d0:
    // 0x25c2d0: 0x5924  .word       0x00005924                   # and         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25c2d4:
    // 0x25c2d4: 0xa6b0  tge         $zero, $zero, 666
    ctx->pc = 0x25c2d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c2d8:
    // 0x25c2d8: 0x0  nop
    ctx->pc = 0x25c2d8u;
    // NOP
label_25c2dc:
    // 0x25c2dc: 0x0  nop
    ctx->pc = 0x25c2dcu;
    // NOP
label_25c2e0:
    // 0x25c2e0: 0x5939  .word       0x00005939                   # INVALID     $zero, $zero, 0x5939 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25C2E0 raw=0x00005939"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c2e4:
    // 0x25c2e4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25c2e8:
    // 0x25c2e8: 0x0  nop
    ctx->pc = 0x25c2e8u;
    // NOP
label_25c2ec:
    // 0x25c2ec: 0x0  nop
    ctx->pc = 0x25c2ecu;
    // NOP
label_25c2f0:
    // 0x25c2f0: 0x594b  .word       0x0000594B                   # movn        $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_25c2f4:
    // 0x25c2f4: 0x9860  .word       0x00009860                   # add         $s3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c2f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25c2f8:
    // 0x25c2f8: 0x0  nop
    ctx->pc = 0x25c2f8u;
    // NOP
label_25c2fc:
    // 0x25c2fc: 0x0  nop
    ctx->pc = 0x25c2fcu;
    // NOP
label_25c300:
    // 0x25c300: 0x595f  .word       0x0000595F                   # ddivu       $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25C300 raw=0x0000595F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c304:
    // 0x25c304: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x25c304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c308:
    // 0x25c308: 0x0  nop
    ctx->pc = 0x25c308u;
    // NOP
label_25c30c:
    // 0x25c30c: 0x0  nop
    ctx->pc = 0x25c30cu;
    // NOP
label_25c310:
    // 0x25c310: 0x5971  tgeu        $zero, $zero, 357
    ctx->pc = 0x25c310u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c314:
    // 0x25c314: 0x94e0  .word       0x000094E0                   # add         $s2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25c318:
    // 0x25c318: 0x0  nop
    ctx->pc = 0x25c318u;
    // NOP
label_25c31c:
    // 0x25c31c: 0x0  nop
    ctx->pc = 0x25c31cu;
    // NOP
label_25c320:
    // 0x25c320: 0x5984  .word       0x00005984                   # sllv        $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c320u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c324:
    // 0x25c324: 0xb820  add         $s7, $zero, $zero
    ctx->pc = 0x25c324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25c328:
    // 0x25c328: 0x0  nop
    ctx->pc = 0x25c328u;
    // NOP
label_25c32c:
    // 0x25c32c: 0x0  nop
    ctx->pc = 0x25c32cu;
    // NOP
label_25c330:
    // 0x25c330: 0x599c  .word       0x0000599C                   # dmult       $zero, $zero # 00005980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C330 raw=0x0000599C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c334:
    // 0x25c334: 0xbb20  .word       0x0000BB20                   # add         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25c338:
    // 0x25c338: 0x0  nop
    ctx->pc = 0x25c338u;
    // NOP
label_25c33c:
    // 0x25c33c: 0x0  nop
    ctx->pc = 0x25c33cu;
    // NOP
label_25c340:
    // 0x25c340: 0x59b4  teq         $zero, $zero, 358
    ctx->pc = 0x25c340u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c344:
    // 0x25c344: 0x8690  .word       0x00008690                   # mfhi        $s0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c344u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25c348:
    // 0x25c348: 0x0  nop
    ctx->pc = 0x25c348u;
    // NOP
label_25c34c:
    // 0x25c34c: 0x0  nop
    ctx->pc = 0x25c34cu;
    // NOP
label_25c350:
    // 0x25c350: 0x59c5  .word       0x000059C5                   # INVALID     $zero, $zero, 0x59C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25C350 raw=0x000059C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c354:
    // 0x25c354: 0x6eb0  tge         $zero, $zero, 442
    ctx->pc = 0x25c354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c358:
    // 0x25c358: 0x0  nop
    ctx->pc = 0x25c358u;
    // NOP
label_25c35c:
    // 0x25c35c: 0x0  nop
    ctx->pc = 0x25c35cu;
    // NOP
label_25c360:
    // 0x25c360: 0x59d3  .word       0x000059D3                   # mtlo        $zero # 000059C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c360u;
    ctx->lo = GPR_U64(ctx, 0);
label_25c364:
    // 0x25c364: 0x8bc0  sll         $s1, $zero, 15
    ctx->pc = 0x25c364u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25c368:
    // 0x25c368: 0x0  nop
    ctx->pc = 0x25c368u;
    // NOP
label_25c36c:
    // 0x25c36c: 0x0  nop
    ctx->pc = 0x25c36cu;
    // NOP
label_25c370:
    // 0x25c370: 0x59e5  .word       0x000059E5                   # move        $t3, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25c374:
    // 0x25c374: 0xb090  .word       0x0000B090                   # mfhi        $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c374u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25c378:
    // 0x25c378: 0x0  nop
    ctx->pc = 0x25c378u;
    // NOP
label_25c37c:
    // 0x25c37c: 0x0  nop
    ctx->pc = 0x25c37cu;
    // NOP
label_25c380:
    // 0x25c380: 0x59fc  dsll32      $t3, $zero, 7
    ctx->pc = 0x25c380u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 7));
label_25c384:
    // 0x25c384: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x25c384u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25c388:
    // 0x25c388: 0x0  nop
    ctx->pc = 0x25c388u;
    // NOP
label_25c38c:
    // 0x25c38c: 0x0  nop
    ctx->pc = 0x25c38cu;
    // NOP
label_25c390:
    // 0x25c390: 0x5a0b  .word       0x00005A0B                   # movn        $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c390u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_25c394:
    // 0x25c394: 0xd050  .word       0x0000D050                   # mfhi        $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c394u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25c398:
    // 0x25c398: 0x0  nop
    ctx->pc = 0x25c398u;
    // NOP
label_25c39c:
    // 0x25c39c: 0x0  nop
    ctx->pc = 0x25c39cu;
    // NOP
label_25c3a0:
    // 0x25c3a0: 0x5a26  .word       0x00005A26                   # xor         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25c3a4:
    // 0x25c3a4: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25c3a8:
    // 0x25c3a8: 0x0  nop
    ctx->pc = 0x25c3a8u;
    // NOP
label_25c3ac:
    // 0x25c3ac: 0x0  nop
    ctx->pc = 0x25c3acu;
    // NOP
label_25c3b0:
    // 0x25c3b0: 0x5a34  teq         $zero, $zero, 360
    ctx->pc = 0x25c3b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c3b4:
    // 0x25c3b4: 0x9b50  .word       0x00009B50                   # mfhi        $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25c3b8:
    // 0x25c3b8: 0x0  nop
    ctx->pc = 0x25c3b8u;
    // NOP
label_25c3bc:
    // 0x25c3bc: 0x0  nop
    ctx->pc = 0x25c3bcu;
    // NOP
label_25c3c0:
    // 0x25c3c0: 0x5a48  .word       0x00005A48                   # jr          $zero # 00005A40 <InstrIdType: CPU_SPECIAL>
label_25c3c4:
    if (ctx->pc == 0x25C3C4u) {
        ctx->pc = 0x25C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3C0u;
        // 0x25c3c4: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C3C8u;
        goto label_25c3c8;
    }
    ctx->pc = 0x25C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3C0u;
        // 0x25c3c4: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C3C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25C3C8u;
label_25c3c8:
    // 0x25c3c8: 0x0  nop
    ctx->pc = 0x25c3c8u;
    // NOP
label_25c3cc:
    // 0x25c3cc: 0x0  nop
    ctx->pc = 0x25c3ccu;
    // NOP
label_25c3d0:
    // 0x25c3d0: 0x5a5c  .word       0x00005A5C                   # dmult       $zero, $zero # 00005A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C3D0 raw=0x00005A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c3d4:
    // 0x25c3d4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25c3d8:
    // 0x25c3d8: 0x0  nop
    ctx->pc = 0x25c3d8u;
    // NOP
label_25c3dc:
    // 0x25c3dc: 0x0  nop
    ctx->pc = 0x25c3dcu;
    // NOP
label_25c3e0:
    // 0x25c3e0: 0x5a71  tgeu        $zero, $zero, 361
    ctx->pc = 0x25c3e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c3e4:
    // 0x25c3e4: 0x8170  tge         $zero, $zero, 517
    ctx->pc = 0x25c3e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c3e8:
    // 0x25c3e8: 0x0  nop
    ctx->pc = 0x25c3e8u;
    // NOP
label_25c3ec:
    // 0x25c3ec: 0x0  nop
    ctx->pc = 0x25c3ecu;
    // NOP
label_25c3f0:
    // 0x25c3f0: 0x5a82  srl         $t3, $zero, 10
    ctx->pc = 0x25c3f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_25c3f4:
    // 0x25c3f4: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c3f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25c3f8:
    // 0x25c3f8: 0x0  nop
    ctx->pc = 0x25c3f8u;
    // NOP
label_25c3fc:
    // 0x25c3fc: 0x0  nop
    ctx->pc = 0x25c3fcu;
    // NOP
    ctx->pc = 0x25c400u;
    return;
}

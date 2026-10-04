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


void FUN_0019b5e8_part264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21bc98u: goto label_21bc98;
        case 0x21bc9cu: goto label_21bc9c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bca4u: goto label_21bca4;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcb8u: goto label_21bcb8;
        case 0x21bcbcu: goto label_21bcbc;
        case 0x21bcc0u: goto label_21bcc0;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bcc8u: goto label_21bcc8;
        case 0x21bcccu: goto label_21bccc;
        case 0x21bcd0u: goto label_21bcd0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcd8u: goto label_21bcd8;
        case 0x21bcdcu: goto label_21bcdc;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bce8u: goto label_21bce8;
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd00u: goto label_21bd00;
        case 0x21bd04u: goto label_21bd04;
        case 0x21bd08u: goto label_21bd08;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd10u: goto label_21bd10;
        case 0x21bd14u: goto label_21bd14;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd1cu: goto label_21bd1c;
        case 0x21bd20u: goto label_21bd20;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd28u: goto label_21bd28;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd38u: goto label_21bd38;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd40u: goto label_21bd40;
        case 0x21bd44u: goto label_21bd44;
        case 0x21bd48u: goto label_21bd48;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd50u: goto label_21bd50;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd58u: goto label_21bd58;
        case 0x21bd5cu: goto label_21bd5c;
        case 0x21bd60u: goto label_21bd60;
        case 0x21bd64u: goto label_21bd64;
        case 0x21bd68u: goto label_21bd68;
        case 0x21bd6cu: goto label_21bd6c;
        case 0x21bd70u: goto label_21bd70;
        case 0x21bd74u: goto label_21bd74;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bd7cu: goto label_21bd7c;
        case 0x21bd80u: goto label_21bd80;
        case 0x21bd84u: goto label_21bd84;
        case 0x21bd88u: goto label_21bd88;
        case 0x21bd8cu: goto label_21bd8c;
        case 0x21bd90u: goto label_21bd90;
        case 0x21bd94u: goto label_21bd94;
        case 0x21bd98u: goto label_21bd98;
        case 0x21bd9cu: goto label_21bd9c;
        case 0x21bda0u: goto label_21bda0;
        case 0x21bda4u: goto label_21bda4;
        case 0x21bda8u: goto label_21bda8;
        case 0x21bdacu: goto label_21bdac;
        case 0x21bdb0u: goto label_21bdb0;
        case 0x21bdb4u: goto label_21bdb4;
        case 0x21bdb8u: goto label_21bdb8;
        case 0x21bdbcu: goto label_21bdbc;
        case 0x21bdc0u: goto label_21bdc0;
        case 0x21bdc4u: goto label_21bdc4;
        case 0x21bdc8u: goto label_21bdc8;
        case 0x21bdccu: goto label_21bdcc;
        case 0x21bdd0u: goto label_21bdd0;
        case 0x21bdd4u: goto label_21bdd4;
        case 0x21bdd8u: goto label_21bdd8;
        case 0x21bddcu: goto label_21bddc;
        case 0x21bde0u: goto label_21bde0;
        case 0x21bde4u: goto label_21bde4;
        case 0x21bde8u: goto label_21bde8;
        case 0x21bdecu: goto label_21bdec;
        case 0x21bdf0u: goto label_21bdf0;
        case 0x21bdf4u: goto label_21bdf4;
        case 0x21bdf8u: goto label_21bdf8;
        case 0x21bdfcu: goto label_21bdfc;
        case 0x21be00u: goto label_21be00;
        case 0x21be04u: goto label_21be04;
        case 0x21be08u: goto label_21be08;
        case 0x21be0cu: goto label_21be0c;
        case 0x21be10u: goto label_21be10;
        case 0x21be14u: goto label_21be14;
        case 0x21be18u: goto label_21be18;
        case 0x21be1cu: goto label_21be1c;
        case 0x21be20u: goto label_21be20;
        case 0x21be24u: goto label_21be24;
        case 0x21be28u: goto label_21be28;
        case 0x21be2cu: goto label_21be2c;
        case 0x21be30u: goto label_21be30;
        case 0x21be34u: goto label_21be34;
        case 0x21be38u: goto label_21be38;
        case 0x21be3cu: goto label_21be3c;
        case 0x21be40u: goto label_21be40;
        case 0x21be44u: goto label_21be44;
        case 0x21be48u: goto label_21be48;
        case 0x21be4cu: goto label_21be4c;
        case 0x21be50u: goto label_21be50;
        case 0x21be54u: goto label_21be54;
        case 0x21be58u: goto label_21be58;
        case 0x21be5cu: goto label_21be5c;
        case 0x21be60u: goto label_21be60;
        case 0x21be64u: goto label_21be64;
        case 0x21be68u: goto label_21be68;
        case 0x21be6cu: goto label_21be6c;
        case 0x21be70u: goto label_21be70;
        case 0x21be74u: goto label_21be74;
        case 0x21be78u: goto label_21be78;
        case 0x21be7cu: goto label_21be7c;
        case 0x21be80u: goto label_21be80;
        case 0x21be84u: goto label_21be84;
        case 0x21be88u: goto label_21be88;
        case 0x21be8cu: goto label_21be8c;
        case 0x21be90u: goto label_21be90;
        case 0x21be94u: goto label_21be94;
        case 0x21be98u: goto label_21be98;
        case 0x21be9cu: goto label_21be9c;
        case 0x21bea0u: goto label_21bea0;
        case 0x21bea4u: goto label_21bea4;
        case 0x21bea8u: goto label_21bea8;
        case 0x21beacu: goto label_21beac;
        case 0x21beb0u: goto label_21beb0;
        case 0x21beb4u: goto label_21beb4;
        case 0x21beb8u: goto label_21beb8;
        case 0x21bebcu: goto label_21bebc;
        case 0x21bec0u: goto label_21bec0;
        case 0x21bec4u: goto label_21bec4;
        case 0x21bec8u: goto label_21bec8;
        case 0x21beccu: goto label_21becc;
        case 0x21bed0u: goto label_21bed0;
        case 0x21bed4u: goto label_21bed4;
        case 0x21bed8u: goto label_21bed8;
        case 0x21bedcu: goto label_21bedc;
        case 0x21bee0u: goto label_21bee0;
        case 0x21bee4u: goto label_21bee4;
        case 0x21bee8u: goto label_21bee8;
        case 0x21beecu: goto label_21beec;
        case 0x21bef0u: goto label_21bef0;
        case 0x21bef4u: goto label_21bef4;
        case 0x21bef8u: goto label_21bef8;
        case 0x21befcu: goto label_21befc;
        case 0x21bf00u: goto label_21bf00;
        case 0x21bf04u: goto label_21bf04;
        case 0x21bf08u: goto label_21bf08;
        case 0x21bf0cu: goto label_21bf0c;
        case 0x21bf10u: goto label_21bf10;
        case 0x21bf14u: goto label_21bf14;
        case 0x21bf18u: goto label_21bf18;
        case 0x21bf1cu: goto label_21bf1c;
        case 0x21bf20u: goto label_21bf20;
        case 0x21bf24u: goto label_21bf24;
        case 0x21bf28u: goto label_21bf28;
        case 0x21bf2cu: goto label_21bf2c;
        case 0x21bf30u: goto label_21bf30;
        case 0x21bf34u: goto label_21bf34;
        case 0x21bf38u: goto label_21bf38;
        case 0x21bf3cu: goto label_21bf3c;
        case 0x21bf40u: goto label_21bf40;
        case 0x21bf44u: goto label_21bf44;
        case 0x21bf48u: goto label_21bf48;
        case 0x21bf4cu: goto label_21bf4c;
        case 0x21bf50u: goto label_21bf50;
        case 0x21bf54u: goto label_21bf54;
        case 0x21bf58u: goto label_21bf58;
        case 0x21bf5cu: goto label_21bf5c;
        case 0x21bf60u: goto label_21bf60;
        case 0x21bf64u: goto label_21bf64;
        case 0x21bf68u: goto label_21bf68;
        case 0x21bf6cu: goto label_21bf6c;
        case 0x21bf70u: goto label_21bf70;
        case 0x21bf74u: goto label_21bf74;
        case 0x21bf78u: goto label_21bf78;
        case 0x21bf7cu: goto label_21bf7c;
        case 0x21bf80u: goto label_21bf80;
        case 0x21bf84u: goto label_21bf84;
        case 0x21bf88u: goto label_21bf88;
        case 0x21bf8cu: goto label_21bf8c;
        case 0x21bf90u: goto label_21bf90;
        case 0x21bf94u: goto label_21bf94;
        case 0x21bf98u: goto label_21bf98;
        case 0x21bf9cu: goto label_21bf9c;
        case 0x21bfa0u: goto label_21bfa0;
        case 0x21bfa4u: goto label_21bfa4;
        case 0x21bfa8u: goto label_21bfa8;
        case 0x21bfacu: goto label_21bfac;
        case 0x21bfb0u: goto label_21bfb0;
        case 0x21bfb4u: goto label_21bfb4;
        case 0x21bfb8u: goto label_21bfb8;
        case 0x21bfbcu: goto label_21bfbc;
        case 0x21bfc0u: goto label_21bfc0;
        case 0x21bfc4u: goto label_21bfc4;
        case 0x21bfc8u: goto label_21bfc8;
        case 0x21bfccu: goto label_21bfcc;
        case 0x21bfd0u: goto label_21bfd0;
        case 0x21bfd4u: goto label_21bfd4;
        case 0x21bfd8u: goto label_21bfd8;
        case 0x21bfdcu: goto label_21bfdc;
        case 0x21bfe0u: goto label_21bfe0;
        case 0x21bfe4u: goto label_21bfe4;
        case 0x21bfe8u: goto label_21bfe8;
        case 0x21bfecu: goto label_21bfec;
        case 0x21bff0u: goto label_21bff0;
        case 0x21bff4u: goto label_21bff4;
        case 0x21bff8u: goto label_21bff8;
        case 0x21bffcu: goto label_21bffc;
        case 0x21c000u: goto label_21c000;
        case 0x21c004u: goto label_21c004;
        case 0x21c008u: goto label_21c008;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c010u: goto label_21c010;
        case 0x21c014u: goto label_21c014;
        case 0x21c018u: goto label_21c018;
        case 0x21c01cu: goto label_21c01c;
        case 0x21c020u: goto label_21c020;
        case 0x21c024u: goto label_21c024;
        case 0x21c028u: goto label_21c028;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c030u: goto label_21c030;
        case 0x21c034u: goto label_21c034;
        case 0x21c038u: goto label_21c038;
        case 0x21c03cu: goto label_21c03c;
        case 0x21c040u: goto label_21c040;
        case 0x21c044u: goto label_21c044;
        case 0x21c048u: goto label_21c048;
        case 0x21c04cu: goto label_21c04c;
        case 0x21c050u: goto label_21c050;
        case 0x21c054u: goto label_21c054;
        case 0x21c058u: goto label_21c058;
        case 0x21c05cu: goto label_21c05c;
        case 0x21c060u: goto label_21c060;
        case 0x21c064u: goto label_21c064;
        case 0x21c068u: goto label_21c068;
        case 0x21c06cu: goto label_21c06c;
        case 0x21c070u: goto label_21c070;
        case 0x21c074u: goto label_21c074;
        case 0x21c078u: goto label_21c078;
        case 0x21c07cu: goto label_21c07c;
        case 0x21c080u: goto label_21c080;
        case 0x21c084u: goto label_21c084;
        case 0x21c088u: goto label_21c088;
        case 0x21c08cu: goto label_21c08c;
        case 0x21c090u: goto label_21c090;
        case 0x21c094u: goto label_21c094;
        case 0x21c098u: goto label_21c098;
        case 0x21c09cu: goto label_21c09c;
        case 0x21c0a0u: goto label_21c0a0;
        case 0x21c0a4u: goto label_21c0a4;
        case 0x21c0a8u: goto label_21c0a8;
        case 0x21c0acu: goto label_21c0ac;
        case 0x21c0b0u: goto label_21c0b0;
        case 0x21c0b4u: goto label_21c0b4;
        case 0x21c0b8u: goto label_21c0b8;
        case 0x21c0bcu: goto label_21c0bc;
        case 0x21c0c0u: goto label_21c0c0;
        case 0x21c0c4u: goto label_21c0c4;
        case 0x21c0c8u: goto label_21c0c8;
        case 0x21c0ccu: goto label_21c0cc;
        case 0x21c0d0u: goto label_21c0d0;
        case 0x21c0d4u: goto label_21c0d4;
        case 0x21c0d8u: goto label_21c0d8;
        case 0x21c0dcu: goto label_21c0dc;
        case 0x21c0e0u: goto label_21c0e0;
        case 0x21c0e4u: goto label_21c0e4;
        case 0x21c0e8u: goto label_21c0e8;
        case 0x21c0ecu: goto label_21c0ec;
        case 0x21c0f0u: goto label_21c0f0;
        case 0x21c0f4u: goto label_21c0f4;
        case 0x21c0f8u: goto label_21c0f8;
        case 0x21c0fcu: goto label_21c0fc;
        case 0x21c100u: goto label_21c100;
        case 0x21c104u: goto label_21c104;
        case 0x21c108u: goto label_21c108;
        case 0x21c10cu: goto label_21c10c;
        case 0x21c110u: goto label_21c110;
        case 0x21c114u: goto label_21c114;
        case 0x21c118u: goto label_21c118;
        case 0x21c11cu: goto label_21c11c;
        case 0x21c120u: goto label_21c120;
        case 0x21c124u: goto label_21c124;
        case 0x21c128u: goto label_21c128;
        case 0x21c12cu: goto label_21c12c;
        case 0x21c130u: goto label_21c130;
        case 0x21c134u: goto label_21c134;
        case 0x21c138u: goto label_21c138;
        case 0x21c13cu: goto label_21c13c;
        case 0x21c140u: goto label_21c140;
        case 0x21c144u: goto label_21c144;
        case 0x21c148u: goto label_21c148;
        case 0x21c14cu: goto label_21c14c;
        case 0x21c150u: goto label_21c150;
        case 0x21c154u: goto label_21c154;
        case 0x21c158u: goto label_21c158;
        case 0x21c15cu: goto label_21c15c;
        case 0x21c160u: goto label_21c160;
        case 0x21c164u: goto label_21c164;
        case 0x21c168u: goto label_21c168;
        case 0x21c16cu: goto label_21c16c;
        case 0x21c170u: goto label_21c170;
        case 0x21c174u: goto label_21c174;
        case 0x21c178u: goto label_21c178;
        case 0x21c17cu: goto label_21c17c;
        case 0x21c180u: goto label_21c180;
        case 0x21c184u: goto label_21c184;
        case 0x21c188u: goto label_21c188;
        case 0x21c18cu: goto label_21c18c;
        case 0x21c190u: goto label_21c190;
        case 0x21c194u: goto label_21c194;
        case 0x21c198u: goto label_21c198;
        case 0x21c19cu: goto label_21c19c;
        case 0x21c1a0u: goto label_21c1a0;
        case 0x21c1a4u: goto label_21c1a4;
        case 0x21c1a8u: goto label_21c1a8;
        case 0x21c1acu: goto label_21c1ac;
        case 0x21c1b0u: goto label_21c1b0;
        case 0x21c1b4u: goto label_21c1b4;
        case 0x21c1b8u: goto label_21c1b8;
        case 0x21c1bcu: goto label_21c1bc;
        case 0x21c1c0u: goto label_21c1c0;
        case 0x21c1c4u: goto label_21c1c4;
        case 0x21c1c8u: goto label_21c1c8;
        case 0x21c1ccu: goto label_21c1cc;
        case 0x21c1d0u: goto label_21c1d0;
        case 0x21c1d4u: goto label_21c1d4;
        case 0x21c1d8u: goto label_21c1d8;
        case 0x21c1dcu: goto label_21c1dc;
        case 0x21c1e0u: goto label_21c1e0;
        case 0x21c1e4u: goto label_21c1e4;
        case 0x21c1e8u: goto label_21c1e8;
        case 0x21c1ecu: goto label_21c1ec;
        case 0x21c1f0u: goto label_21c1f0;
        case 0x21c1f4u: goto label_21c1f4;
        case 0x21c1f8u: goto label_21c1f8;
        case 0x21c1fcu: goto label_21c1fc;
        case 0x21c200u: goto label_21c200;
        case 0x21c204u: goto label_21c204;
        case 0x21c208u: goto label_21c208;
        case 0x21c20cu: goto label_21c20c;
        case 0x21c210u: goto label_21c210;
        case 0x21c214u: goto label_21c214;
        case 0x21c218u: goto label_21c218;
        case 0x21c21cu: goto label_21c21c;
        case 0x21c220u: goto label_21c220;
        case 0x21c224u: goto label_21c224;
        case 0x21c228u: goto label_21c228;
        case 0x21c22cu: goto label_21c22c;
        case 0x21c230u: goto label_21c230;
        case 0x21c234u: goto label_21c234;
        case 0x21c238u: goto label_21c238;
        case 0x21c23cu: goto label_21c23c;
        case 0x21c240u: goto label_21c240;
        case 0x21c244u: goto label_21c244;
        case 0x21c248u: goto label_21c248;
        case 0x21c24cu: goto label_21c24c;
        case 0x21c250u: goto label_21c250;
        case 0x21c254u: goto label_21c254;
        case 0x21c258u: goto label_21c258;
        case 0x21c25cu: goto label_21c25c;
        case 0x21c260u: goto label_21c260;
        case 0x21c264u: goto label_21c264;
        case 0x21c268u: goto label_21c268;
        case 0x21c26cu: goto label_21c26c;
        case 0x21c270u: goto label_21c270;
        case 0x21c274u: goto label_21c274;
        case 0x21c278u: goto label_21c278;
        case 0x21c27cu: goto label_21c27c;
        case 0x21c280u: goto label_21c280;
        case 0x21c284u: goto label_21c284;
        case 0x21c288u: goto label_21c288;
        case 0x21c28cu: goto label_21c28c;
        case 0x21c290u: goto label_21c290;
        case 0x21c294u: goto label_21c294;
        case 0x21c298u: goto label_21c298;
        case 0x21c29cu: goto label_21c29c;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2acu: goto label_21c2ac;
        case 0x21c2b0u: goto label_21c2b0;
        case 0x21c2b4u: goto label_21c2b4;
        case 0x21c2b8u: goto label_21c2b8;
        case 0x21c2bcu: goto label_21c2bc;
        case 0x21c2c0u: goto label_21c2c0;
        case 0x21c2c4u: goto label_21c2c4;
        case 0x21c2c8u: goto label_21c2c8;
        case 0x21c2ccu: goto label_21c2cc;
        case 0x21c2d0u: goto label_21c2d0;
        case 0x21c2d4u: goto label_21c2d4;
        case 0x21c2d8u: goto label_21c2d8;
        case 0x21c2dcu: goto label_21c2dc;
        case 0x21c2e0u: goto label_21c2e0;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c2e8u: goto label_21c2e8;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c2f0u: goto label_21c2f0;
        case 0x21c2f4u: goto label_21c2f4;
        case 0x21c2f8u: goto label_21c2f8;
        case 0x21c2fcu: goto label_21c2fc;
        case 0x21c300u: goto label_21c300;
        case 0x21c304u: goto label_21c304;
        case 0x21c308u: goto label_21c308;
        case 0x21c30cu: goto label_21c30c;
        case 0x21c310u: goto label_21c310;
        case 0x21c314u: goto label_21c314;
        case 0x21c318u: goto label_21c318;
        case 0x21c31cu: goto label_21c31c;
        case 0x21c320u: goto label_21c320;
        case 0x21c324u: goto label_21c324;
        case 0x21c328u: goto label_21c328;
        case 0x21c32cu: goto label_21c32c;
        case 0x21c330u: goto label_21c330;
        case 0x21c334u: goto label_21c334;
        case 0x21c338u: goto label_21c338;
        case 0x21c33cu: goto label_21c33c;
        case 0x21c340u: goto label_21c340;
        case 0x21c344u: goto label_21c344;
        case 0x21c348u: goto label_21c348;
        case 0x21c34cu: goto label_21c34c;
        case 0x21c350u: goto label_21c350;
        case 0x21c354u: goto label_21c354;
        case 0x21c358u: goto label_21c358;
        case 0x21c35cu: goto label_21c35c;
        case 0x21c360u: goto label_21c360;
        case 0x21c364u: goto label_21c364;
        case 0x21c368u: goto label_21c368;
        case 0x21c36cu: goto label_21c36c;
        case 0x21c370u: goto label_21c370;
        case 0x21c374u: goto label_21c374;
        case 0x21c378u: goto label_21c378;
        case 0x21c37cu: goto label_21c37c;
        case 0x21c380u: goto label_21c380;
        case 0x21c384u: goto label_21c384;
        case 0x21c388u: goto label_21c388;
        case 0x21c38cu: goto label_21c38c;
        case 0x21c390u: goto label_21c390;
        case 0x21c394u: goto label_21c394;
        case 0x21c398u: goto label_21c398;
        case 0x21c39cu: goto label_21c39c;
        case 0x21c3a0u: goto label_21c3a0;
        case 0x21c3a4u: goto label_21c3a4;
        case 0x21c3a8u: goto label_21c3a8;
        case 0x21c3acu: goto label_21c3ac;
        case 0x21c3b0u: goto label_21c3b0;
        case 0x21c3b4u: goto label_21c3b4;
        case 0x21c3b8u: goto label_21c3b8;
        case 0x21c3bcu: goto label_21c3bc;
        case 0x21c3c0u: goto label_21c3c0;
        case 0x21c3c4u: goto label_21c3c4;
        case 0x21c3c8u: goto label_21c3c8;
        case 0x21c3ccu: goto label_21c3cc;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3d4u: goto label_21c3d4;
        case 0x21c3d8u: goto label_21c3d8;
        case 0x21c3dcu: goto label_21c3dc;
        case 0x21c3e0u: goto label_21c3e0;
        case 0x21c3e4u: goto label_21c3e4;
        case 0x21c3e8u: goto label_21c3e8;
        case 0x21c3ecu: goto label_21c3ec;
        case 0x21c3f0u: goto label_21c3f0;
        case 0x21c3f4u: goto label_21c3f4;
        case 0x21c3f8u: goto label_21c3f8;
        case 0x21c3fcu: goto label_21c3fc;
        case 0x21c400u: goto label_21c400;
        case 0x21c404u: goto label_21c404;
        case 0x21c408u: goto label_21c408;
        case 0x21c40cu: goto label_21c40c;
        case 0x21c410u: goto label_21c410;
        case 0x21c414u: goto label_21c414;
        case 0x21c418u: goto label_21c418;
        case 0x21c41cu: goto label_21c41c;
        case 0x21c420u: goto label_21c420;
        case 0x21c424u: goto label_21c424;
        case 0x21c428u: goto label_21c428;
        case 0x21c42cu: goto label_21c42c;
        case 0x21c430u: goto label_21c430;
        case 0x21c434u: goto label_21c434;
        case 0x21c438u: goto label_21c438;
        case 0x21c43cu: goto label_21c43c;
        case 0x21c440u: goto label_21c440;
        case 0x21c444u: goto label_21c444;
        case 0x21c448u: goto label_21c448;
        case 0x21c44cu: goto label_21c44c;
        case 0x21c450u: goto label_21c450;
        case 0x21c454u: goto label_21c454;
        case 0x21c458u: goto label_21c458;
        case 0x21c45cu: goto label_21c45c;
        case 0x21c460u: goto label_21c460;
        case 0x21c464u: goto label_21c464;
        default: return;
    }

label_21bc98:
    // 0x21bc98: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x21bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21bc9c:
    // 0x21bc9c: 0xae6901e4  sw          $t1, 0x1E4($s3)
    ctx->pc = 0x21bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 9));
label_21bca0:
    // 0x21bca0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x21bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bca4:
    // 0x21bca4: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_21bca8:
    // 0x21bca8: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x21bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_21bcac:
    // 0x21bcac: 0xa6630270  sh          $v1, 0x270($s3)
    ctx->pc = 0x21bcacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 624), (uint16_t)GPR_U32(ctx, 3));
label_21bcb0:
    // 0x21bcb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bcb4:
    // 0x21bcb4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x21bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_21bcb8:
    // 0x21bcb8: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x21bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bcbc:
    // 0x21bcbc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x21bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_21bcc0:
    // 0x21bcc0: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_21bcc4:
    // 0x21bcc4: 0xa6630272  sh          $v1, 0x272($s3)
    ctx->pc = 0x21bcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 626), (uint16_t)GPR_U32(ctx, 3));
label_21bcc8:
    // 0x21bcc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21bccc:
    // 0x21bccc: 0xae690274  sw          $t1, 0x274($s3)
    ctx->pc = 0x21bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 9));
label_21bcd0:
    // 0x21bcd0: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21bcd4:
    // 0x21bcd4: 0xa6650280  sh          $a1, 0x280($s3)
    ctx->pc = 0x21bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 5));
label_21bcd8:
    // 0x21bcd8: 0xa6640282  sh          $a0, 0x282($s3)
    ctx->pc = 0x21bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 4));
label_21bcdc:
    // 0x21bcdc: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x21bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_21bce0:
    // 0x21bce0: 0xae690284  sw          $t1, 0x284($s3)
    ctx->pc = 0x21bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 9));
label_21bce4:
    // 0x21bce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bce8:
    // 0x21bce8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21bcec:
    // 0x21bcec: 0x262701f0  addiu       $a3, $s1, 0x1F0
    ctx->pc = 0x21bcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21bcf0:
    // 0x21bcf0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21bcf4:
    // 0x21bcf4: 0x26480024  addiu       $t0, $s2, 0x24
    ctx->pc = 0x21bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_21bcf8:
    // 0x21bcf8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x21bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21bcfc:
    // 0x21bcfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bd00:
    // 0x21bd00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21bd04:
    // 0x21bd04: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x21bd04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21bd08:
    // 0x21bd08: 0xc054c60  jal         func_153180
label_21bd0c:
    if (ctx->pc == 0x21BD0Cu) {
        ctx->pc = 0x21BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD08u;
        // 0x21bd0c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD10u;
        goto label_21bd10;
    }
    ctx->pc = 0x21BD08u;
    SET_GPR_U32(ctx, 31, 0x21BD10u);
    ctx->pc = 0x21BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD08u;
    // 0x21bd0c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x21BD08u, 0x21BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD10u;
label_21bd10:
    // 0x21bd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bd14:
    // 0x21bd14: 0x1602002b  bne         $s0, $v0, . + 4 + (0x2B << 2)
label_21bd18:
    if (ctx->pc == 0x21BD18u) {
        ctx->pc = 0x21BD1Cu;
        goto label_21bd1c;
    }
    ctx->pc = 0x21BD14u;
    {
        const bool branch_taken_0x21bd14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bd14) {
            ctx->pc = 0x21BDC4u;
            goto label_21bdc4;
        }
    }
    ctx->pc = 0x21BD1Cu;
label_21bd1c:
    // 0x21bd1c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x21bd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_21bd20:
    // 0x21bd20: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x21bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_21bd24:
    // 0x21bd24: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x21bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_21bd28:
    // 0x21bd28: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21bd2c:
    // 0x21bd2c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21bd30:
    // 0x21bd30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21bd34:
    // 0x21bd34: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x21bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_21bd38:
    // 0x21bd38: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x21bd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bd3c:
    // 0x21bd3c: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x21bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21bd40:
    // 0x21bd40: 0x0  nop
    ctx->pc = 0x21bd40u;
    // NOP
label_21bd44:
    // 0x21bd44: 0x3010  mfhi        $a2
    ctx->pc = 0x21bd44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21bd48:
    // 0x21bd48: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x21bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21bd4c:
    // 0x21bd4c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_21bd50:
    // 0x21bd50: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x21bd50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21bd54:
    // 0x21bd54: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x21bd54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bd58:
    // 0x21bd58: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x21bd58u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_21bd5c:
    // 0x21bd5c: 0x0  nop
    ctx->pc = 0x21bd5cu;
    // NOP
label_21bd60:
    // 0x21bd60: 0x3010  mfhi        $a2
    ctx->pc = 0x21bd60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21bd64:
    // 0x21bd64: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x21bd64u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21bd68:
    // 0x21bd68: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21bd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_21bd6c:
    // 0x21bd6c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x21bd6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_21bd70:
    // 0x21bd70: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21bd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21bd74:
    // 0x21bd74: 0x3810  mfhi        $a3
    ctx->pc = 0x21bd74u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_21bd78:
    // 0x21bd78: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x21bd78u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21bd7c:
    // 0x21bd7c: 0x0  nop
    ctx->pc = 0x21bd7cu;
    // NOP
label_21bd80:
    // 0x21bd80: 0x0  nop
    ctx->pc = 0x21bd80u;
    // NOP
label_21bd84:
    // 0x21bd84: 0x4010  mfhi        $t0
    ctx->pc = 0x21bd84u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_21bd88:
    // 0x21bd88: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21bd8c:
    // 0x21bd8c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x21bd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_21bd90:
    // 0x21bd90: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21bd94:
    // 0x21bd94: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x21bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_21bd98:
    // 0x21bd98: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x21bd98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21bd9c:
    // 0x21bd9c: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x21bd9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bda0:
    // 0x21bda0: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x21bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21bda4:
    // 0x21bda4: 0x0  nop
    ctx->pc = 0x21bda4u;
    // NOP
label_21bda8:
    // 0x21bda8: 0x1010  mfhi        $v0
    ctx->pc = 0x21bda8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21bdac:
    // 0x21bdac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_21bdb0:
    // 0x21bdb0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x21bdb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_21bdb4:
    // 0x21bdb4: 0xc08f20e  jal         func_23C838
label_21bdb8:
    if (ctx->pc == 0x21BDB8u) {
        ctx->pc = 0x21BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB4u;
        // 0x21bdb8: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDBCu;
        goto label_21bdbc;
    }
    ctx->pc = 0x21BDB4u;
    SET_GPR_U32(ctx, 31, 0x21BDBCu);
    ctx->pc = 0x21BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDB4u;
    // 0x21bdb8: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x21BDBCu;
label_21bdbc:
    // 0x21bdbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_21bdc0:
    if (ctx->pc == 0x21BDC0u) {
        ctx->pc = 0x21BDC4u;
        goto label_21bdc4;
    }
    ctx->pc = 0x21BDBCu;
    {
        const bool branch_taken_0x21bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdbc) {
            ctx->pc = 0x21BDDCu;
            goto label_21bddc;
        }
    }
    ctx->pc = 0x21BDC4u;
label_21bdc4:
    // 0x21bdc4: 0x0  nop
    ctx->pc = 0x21bdc4u;
    // NOP
label_21bdc8:
    // 0x21bdc8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x21bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_21bdcc:
    // 0x21bdcc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21bdd0:
    // 0x21bdd0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21bdd4:
    // 0x21bdd4: 0xc08f20e  jal         func_23C838
label_21bdd8:
    if (ctx->pc == 0x21BDD8u) {
        ctx->pc = 0x21BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDD4u;
        // 0x21bdd8: 0x24a5e120  addiu       $a1, $a1, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDDCu;
        goto label_21bddc;
    }
    ctx->pc = 0x21BDD4u;
    SET_GPR_U32(ctx, 31, 0x21BDDCu);
    ctx->pc = 0x21BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDD4u;
    // 0x21bdd8: 0x24a5e120  addiu       $a1, $a1, -0x1EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x21BDDCu;
label_21bddc:
    // 0x21bddc: 0x0  nop
    ctx->pc = 0x21bddcu;
    // NOP
label_21bde0:
    // 0x21bde0: 0x262601c8  addiu       $a2, $s1, 0x1C8
    ctx->pc = 0x21bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
label_21bde4:
    // 0x21bde4: 0x2647003c  addiu       $a3, $s2, 0x3C
    ctx->pc = 0x21bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_21bde8:
    // 0x21bde8: 0x26640360  addiu       $a0, $s3, 0x360
    ctx->pc = 0x21bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
label_21bdec:
    // 0x21bdec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21bdf0:
    // 0x21bdf0: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21bdf4:
    // 0x21bdf4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x21bdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21bdf8:
    // 0x21bdf8: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x21bdf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21bdfc:
    // 0x21bdfc: 0xc0708ac  jal         func_1C22B0
label_21be00:
    if (ctx->pc == 0x21BE00u) {
        ctx->pc = 0x21BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDFCu;
        // 0x21be00: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE04u;
        goto label_21be04;
    }
    ctx->pc = 0x21BDFCu;
    SET_GPR_U32(ctx, 31, 0x21BE04u);
    ctx->pc = 0x21BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDFCu;
    // 0x21be00: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x21BE04u;
label_21be04:
    // 0x21be04: 0x1000006b  b           . + 4 + (0x6B << 2)
label_21be08:
    if (ctx->pc == 0x21BE08u) {
        ctx->pc = 0x21BE0Cu;
        goto label_21be0c;
    }
    ctx->pc = 0x21BE04u;
    {
        const bool branch_taken_0x21be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be04) {
            ctx->pc = 0x21BFB4u;
            goto label_21bfb4;
        }
    }
    ctx->pc = 0x21BE0Cu;
label_21be0c:
    // 0x21be0c: 0x0  nop
    ctx->pc = 0x21be0cu;
    // NOP
label_21be10:
    // 0x21be10: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x21be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_21be14:
    // 0x21be14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x21be14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21be18:
    // 0x21be18: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x21be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_21be1c:
    // 0x21be1c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_21be20:
    // 0x21be20: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21be24:
    // 0x21be24: 0xa66301d0  sh          $v1, 0x1D0($s3)
    ctx->pc = 0x21be24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 464), (uint16_t)GPR_U32(ctx, 3));
label_21be28:
    // 0x21be28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21be28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21be2c:
    // 0x21be2c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x21be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21be30:
    // 0x21be30: 0xa67501d2  sh          $s5, 0x1D2($s3)
    ctx->pc = 0x21be30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 466), (uint16_t)GPR_U32(ctx, 21));
label_21be34:
    // 0x21be34: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x21be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_21be38:
    // 0x21be38: 0xae6901d4  sw          $t1, 0x1D4($s3)
    ctx->pc = 0x21be38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 9));
label_21be3c:
    // 0x21be3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21be40:
    // 0x21be40: 0xa66301e0  sh          $v1, 0x1E0($s3)
    ctx->pc = 0x21be40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 480), (uint16_t)GPR_U32(ctx, 3));
label_21be44:
    // 0x21be44: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x21be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21be48:
    // 0x21be48: 0x262701f0  addiu       $a3, $s1, 0x1F0
    ctx->pc = 0x21be48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21be4c:
    // 0x21be4c: 0xa66201e2  sh          $v0, 0x1E2($s3)
    ctx->pc = 0x21be4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 482), (uint16_t)GPR_U32(ctx, 2));
label_21be50:
    // 0x21be50: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x21be50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_21be54:
    // 0x21be54: 0x262201c8  addiu       $v0, $s1, 0x1C8
    ctx->pc = 0x21be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
label_21be58:
    // 0x21be58: 0xae6901e4  sw          $t1, 0x1E4($s3)
    ctx->pc = 0x21be58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 9));
label_21be5c:
    // 0x21be5c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x21be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21be60:
    // 0x21be60: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21be64:
    // 0x21be64: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21be68:
    // 0x21be68: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x21be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_21be6c:
    // 0x21be6c: 0xa6630270  sh          $v1, 0x270($s3)
    ctx->pc = 0x21be6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 624), (uint16_t)GPR_U32(ctx, 3));
label_21be70:
    // 0x21be70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21be70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21be74:
    // 0x21be74: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x21be74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21be78:
    // 0x21be78: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21be7c:
    // 0x21be7c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x21be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_21be80:
    // 0x21be80: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x21be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_21be84:
    // 0x21be84: 0xa6630272  sh          $v1, 0x272($s3)
    ctx->pc = 0x21be84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 626), (uint16_t)GPR_U32(ctx, 3));
label_21be88:
    // 0x21be88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21be88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21be8c:
    // 0x21be8c: 0xae690274  sw          $t1, 0x274($s3)
    ctx->pc = 0x21be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 9));
label_21be90:
    // 0x21be90: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x21be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21be94:
    // 0x21be94: 0xa6650280  sh          $a1, 0x280($s3)
    ctx->pc = 0x21be94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 5));
label_21be98:
    // 0x21be98: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x21be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_21be9c:
    // 0x21be9c: 0xa6640282  sh          $a0, 0x282($s3)
    ctx->pc = 0x21be9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 4));
label_21bea0:
    // 0x21bea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bea4:
    // 0x21bea4: 0xae690284  sw          $t1, 0x284($s3)
    ctx->pc = 0x21bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 9));
label_21bea8:
    // 0x21bea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21beac:
    // 0x21beac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21beb0:
    // 0x21beb0: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21beb4:
    // 0x21beb4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21beb8:
    // 0x21beb8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x21beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21bebc:
    // 0x21bebc: 0xc054c60  jal         func_153180
label_21bec0:
    if (ctx->pc == 0x21BEC0u) {
        ctx->pc = 0x21BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEBCu;
        // 0x21bec0: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEC4u;
        goto label_21bec4;
    }
    ctx->pc = 0x21BEBCu;
    SET_GPR_U32(ctx, 31, 0x21BEC4u);
    ctx->pc = 0x21BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEBCu;
    // 0x21bec0: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x21BEBCu, 0x21BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEC4u;
label_21bec4:
    // 0x21bec4: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_21bec8:
    if (ctx->pc == 0x21BEC8u) {
        ctx->pc = 0x21BECCu;
        goto label_21becc;
    }
    ctx->pc = 0x21BEC4u;
    {
        const bool branch_taken_0x21bec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bec4) {
            ctx->pc = 0x21BF74u;
            goto label_21bf74;
        }
    }
    ctx->pc = 0x21BECCu;
label_21becc:
    // 0x21becc: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x21beccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_21bed0:
    // 0x21bed0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_21bed4:
    // 0x21bed4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x21bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_21bed8:
    // 0x21bed8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21bedc:
    // 0x21bedc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21bee0:
    // 0x21bee0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21bee4:
    // 0x21bee4: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x21bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_21bee8:
    // 0x21bee8: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x21bee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21beec:
    // 0x21beec: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x21beecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21bef0:
    // 0x21bef0: 0x0  nop
    ctx->pc = 0x21bef0u;
    // NOP
label_21bef4:
    // 0x21bef4: 0x3010  mfhi        $a2
    ctx->pc = 0x21bef4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21bef8:
    // 0x21bef8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x21bef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21befc:
    // 0x21befc: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x21befcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_21bf00:
    // 0x21bf00: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x21bf00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21bf04:
    // 0x21bf04: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x21bf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bf08:
    // 0x21bf08: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x21bf08u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_21bf0c:
    // 0x21bf0c: 0x0  nop
    ctx->pc = 0x21bf0cu;
    // NOP
label_21bf10:
    // 0x21bf10: 0x3010  mfhi        $a2
    ctx->pc = 0x21bf10u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21bf14:
    // 0x21bf14: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x21bf14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21bf18:
    // 0x21bf18: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21bf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_21bf1c:
    // 0x21bf1c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x21bf1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_21bf20:
    // 0x21bf20: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21bf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21bf24:
    // 0x21bf24: 0x3810  mfhi        $a3
    ctx->pc = 0x21bf24u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_21bf28:
    // 0x21bf28: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x21bf28u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21bf2c:
    // 0x21bf2c: 0x0  nop
    ctx->pc = 0x21bf2cu;
    // NOP
label_21bf30:
    // 0x21bf30: 0x0  nop
    ctx->pc = 0x21bf30u;
    // NOP
label_21bf34:
    // 0x21bf34: 0x4010  mfhi        $t0
    ctx->pc = 0x21bf34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_21bf38:
    // 0x21bf38: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21bf3c:
    // 0x21bf3c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x21bf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_21bf40:
    // 0x21bf40: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21bf44:
    // 0x21bf44: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x21bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_21bf48:
    // 0x21bf48: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x21bf48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21bf4c:
    // 0x21bf4c: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x21bf4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bf50:
    // 0x21bf50: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x21bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21bf54:
    // 0x21bf54: 0x0  nop
    ctx->pc = 0x21bf54u;
    // NOP
label_21bf58:
    // 0x21bf58: 0x1010  mfhi        $v0
    ctx->pc = 0x21bf58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21bf5c:
    // 0x21bf5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_21bf60:
    // 0x21bf60: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x21bf60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_21bf64:
    // 0x21bf64: 0xc08f20e  jal         func_23C838
label_21bf68:
    if (ctx->pc == 0x21BF68u) {
        ctx->pc = 0x21BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF64u;
        // 0x21bf68: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF6Cu;
        goto label_21bf6c;
    }
    ctx->pc = 0x21BF64u;
    SET_GPR_U32(ctx, 31, 0x21BF6Cu);
    ctx->pc = 0x21BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF64u;
    // 0x21bf68: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x21BF6Cu;
label_21bf6c:
    // 0x21bf6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_21bf70:
    if (ctx->pc == 0x21BF70u) {
        ctx->pc = 0x21BF74u;
        goto label_21bf74;
    }
    ctx->pc = 0x21BF6Cu;
    {
        const bool branch_taken_0x21bf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bf6c) {
            ctx->pc = 0x21BF8Cu;
            goto label_21bf8c;
        }
    }
    ctx->pc = 0x21BF74u;
label_21bf74:
    // 0x21bf74: 0x0  nop
    ctx->pc = 0x21bf74u;
    // NOP
label_21bf78:
    // 0x21bf78: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_21bf7c:
    // 0x21bf7c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21bf80:
    // 0x21bf80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21bf84:
    // 0x21bf84: 0xc08f20e  jal         func_23C838
label_21bf88:
    if (ctx->pc == 0x21BF88u) {
        ctx->pc = 0x21BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF84u;
        // 0x21bf88: 0x24a5e120  addiu       $a1, $a1, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF8Cu;
        goto label_21bf8c;
    }
    ctx->pc = 0x21BF84u;
    SET_GPR_U32(ctx, 31, 0x21BF8Cu);
    ctx->pc = 0x21BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF84u;
    // 0x21bf88: 0x24a5e120  addiu       $a1, $a1, -0x1EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x21BF8Cu;
label_21bf8c:
    // 0x21bf8c: 0x0  nop
    ctx->pc = 0x21bf8cu;
    // NOP
label_21bf90:
    // 0x21bf90: 0x262601c8  addiu       $a2, $s1, 0x1C8
    ctx->pc = 0x21bf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
label_21bf94:
    // 0x21bf94: 0x26470032  addiu       $a3, $s2, 0x32
    ctx->pc = 0x21bf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
label_21bf98:
    // 0x21bf98: 0x26640360  addiu       $a0, $s3, 0x360
    ctx->pc = 0x21bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
label_21bf9c:
    // 0x21bf9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21bfa0:
    // 0x21bfa0: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21bfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21bfa4:
    // 0x21bfa4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x21bfa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21bfa8:
    // 0x21bfa8: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x21bfa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21bfac:
    // 0x21bfac: 0xc0708ac  jal         func_1C22B0
label_21bfb0:
    if (ctx->pc == 0x21BFB0u) {
        ctx->pc = 0x21BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFACu;
        // 0x21bfb0: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFB4u;
        goto label_21bfb4;
    }
    ctx->pc = 0x21BFACu;
    SET_GPR_U32(ctx, 31, 0x21BFB4u);
    ctx->pc = 0x21BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFACu;
    // 0x21bfb0: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x21BFB4u;
label_21bfb4:
    // 0x21bfb4: 0x0  nop
    ctx->pc = 0x21bfb4u;
    // NOP
label_21bfb8:
    // 0x21bfb8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x21bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_21bfbc:
    // 0x21bfbc: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x21bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21bfc0:
    // 0x21bfc0: 0xa66208e0  sh          $v0, 0x8E0($s3)
    ctx->pc = 0x21bfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2272), (uint16_t)GPR_U32(ctx, 2));
label_21bfc4:
    // 0x21bfc4: 0xa67508e2  sh          $s5, 0x8E2($s3)
    ctx->pc = 0x21bfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2274), (uint16_t)GPR_U32(ctx, 21));
label_21bfc8:
    // 0x21bfc8: 0xae6308e4  sw          $v1, 0x8E4($s3)
    ctx->pc = 0x21bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2276), GPR_U32(ctx, 3));
label_21bfcc:
    // 0x21bfcc: 0xa67708f0  sh          $s7, 0x8F0($s3)
    ctx->pc = 0x21bfccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2288), (uint16_t)GPR_U32(ctx, 23));
label_21bfd0:
    // 0x21bfd0: 0xa67608f2  sh          $s6, 0x8F2($s3)
    ctx->pc = 0x21bfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2290), (uint16_t)GPR_U32(ctx, 22));
label_21bfd4:
    // 0x21bfd4: 0xae6308f4  sw          $v1, 0x8F4($s3)
    ctx->pc = 0x21bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2292), GPR_U32(ctx, 3));
label_21bfd8:
    // 0x21bfd8: 0xa6770980  sh          $s7, 0x980($s3)
    ctx->pc = 0x21bfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2432), (uint16_t)GPR_U32(ctx, 23));
label_21bfdc:
    // 0x21bfdc: 0xa6750982  sh          $s5, 0x982($s3)
    ctx->pc = 0x21bfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2434), (uint16_t)GPR_U32(ctx, 21));
label_21bfe0:
    // 0x21bfe0: 0xae630984  sw          $v1, 0x984($s3)
    ctx->pc = 0x21bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2436), GPR_U32(ctx, 3));
label_21bfe4:
    // 0x21bfe4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x21bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_21bfe8:
    // 0x21bfe8: 0xa6620990  sh          $v0, 0x990($s3)
    ctx->pc = 0x21bfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2448), (uint16_t)GPR_U32(ctx, 2));
label_21bfec:
    // 0x21bfec: 0xa6760992  sh          $s6, 0x992($s3)
    ctx->pc = 0x21bfecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2450), (uint16_t)GPR_U32(ctx, 22));
label_21bff0:
    // 0x21bff0: 0xae630994  sw          $v1, 0x994($s3)
    ctx->pc = 0x21bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2452), GPR_U32(ctx, 3));
label_21bff4:
    // 0x21bff4: 0x8f82927c  lw          $v0, -0x6D84($gp)
    ctx->pc = 0x21bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939260)));
label_21bff8:
    // 0x21bff8: 0x14500029  bne         $v0, $s0, . + 4 + (0x29 << 2)
label_21bffc:
    if (ctx->pc == 0x21BFFCu) {
        ctx->pc = 0x21C000u;
        goto label_21c000;
    }
    ctx->pc = 0x21BFF8u;
    {
        const bool branch_taken_0x21bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x21bff8) {
            ctx->pc = 0x21C0A0u;
            goto label_21c0a0;
        }
    }
    ctx->pc = 0x21C000u;
label_21c000:
    // 0x21c000: 0x8f859278  lw          $a1, -0x6D88($gp)
    ctx->pc = 0x21c000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939256)));
label_21c004:
    // 0x21c004: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_21c008:
    if (ctx->pc == 0x21C008u) {
        ctx->pc = 0x21C00Cu;
        goto label_21c00c;
    }
    ctx->pc = 0x21C004u;
    {
        const bool branch_taken_0x21c004 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x21c004) {
            ctx->pc = 0x21C014u;
            goto label_21c014;
        }
    }
    ctx->pc = 0x21C00Cu;
label_21c00c:
    // 0x21c00c: 0x10000015  b           . + 4 + (0x15 << 2)
label_21c010:
    if (ctx->pc == 0x21C010u) {
        ctx->pc = 0x21C014u;
        goto label_21c014;
    }
    ctx->pc = 0x21C00Cu;
    {
        const bool branch_taken_0x21c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c00c) {
            ctx->pc = 0x21C064u;
            goto label_21c064;
        }
    }
    ctx->pc = 0x21C014u;
label_21c014:
    // 0x21c014: 0x0  nop
    ctx->pc = 0x21c014u;
    // NOP
label_21c018:
    // 0x21c018: 0x8f839280  lw          $v1, -0x6D80($gp)
    ctx->pc = 0x21c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21c01c:
    // 0x21c01c: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x21c01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_21c020:
    // 0x21c020: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_21c024:
    if (ctx->pc == 0x21C024u) {
        ctx->pc = 0x21C028u;
        goto label_21c028;
    }
    ctx->pc = 0x21C020u;
    {
        const bool branch_taken_0x21c020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c020) {
            ctx->pc = 0x21C044u;
            goto label_21c044;
        }
    }
    ctx->pc = 0x21C028u;
label_21c028:
    // 0x21c028: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21c028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21c02c:
    // 0x21c02c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_21c030:
    if (ctx->pc == 0x21C030u) {
        ctx->pc = 0x21C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C02Cu;
        // 0x21c030: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C034u;
        goto label_21c034;
    }
    ctx->pc = 0x21C02Cu;
    {
        const bool branch_taken_0x21c02c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C02Cu;
        // 0x21c030: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c02c) {
            ctx->pc = 0x21C064u;
            goto label_21c064;
        }
    }
    ctx->pc = 0x21C034u;
label_21c034:
    // 0x21c034: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x21c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_21c038:
    // 0x21c038: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x21c038u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
label_21c03c:
    // 0x21c03c: 0x10000009  b           . + 4 + (0x9 << 2)
label_21c040:
    if (ctx->pc == 0x21C040u) {
        ctx->pc = 0x21C044u;
        goto label_21c044;
    }
    ctx->pc = 0x21C03Cu;
    {
        const bool branch_taken_0x21c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c03c) {
            ctx->pc = 0x21C064u;
            goto label_21c064;
        }
    }
    ctx->pc = 0x21C044u;
label_21c044:
    // 0x21c044: 0x0  nop
    ctx->pc = 0x21c044u;
    // NOP
label_21c048:
    // 0x21c048: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21c04c:
    // 0x21c04c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c050:
    // 0x21c050: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21c054:
    // 0x21c054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21c058:
    if (ctx->pc == 0x21C058u) {
        ctx->pc = 0x21C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C054u;
        // 0x21c058: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C05Cu;
        goto label_21c05c;
    }
    ctx->pc = 0x21C054u;
    {
        const bool branch_taken_0x21c054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C054u;
        // 0x21c058: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c054) {
            ctx->pc = 0x21C064u;
            goto label_21c064;
        }
    }
    ctx->pc = 0x21C05Cu;
label_21c05c:
    // 0x21c05c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x21c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_21c060:
    // 0x21c060: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x21c060u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
label_21c064:
    // 0x21c064: 0x0  nop
    ctx->pc = 0x21c064u;
    // NOP
label_21c068:
    // 0x21c068: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x21c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21c06c:
    // 0x21c06c: 0xa26408d0  sb          $a0, 0x8D0($s3)
    ctx->pc = 0x21c06cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2256), (uint8_t)GPR_U32(ctx, 4));
label_21c070:
    // 0x21c070: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x21c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_21c074:
    // 0x21c074: 0xa26408d1  sb          $a0, 0x8D1($s3)
    ctx->pc = 0x21c074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2257), (uint8_t)GPR_U32(ctx, 4));
label_21c078:
    // 0x21c078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21c07c:
    // 0x21c07c: 0xa26308d2  sb          $v1, 0x8D2($s3)
    ctx->pc = 0x21c07cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2258), (uint8_t)GPR_U32(ctx, 3));
label_21c080:
    // 0x21c080: 0xa26508d3  sb          $a1, 0x8D3($s3)
    ctx->pc = 0x21c080u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2259), (uint8_t)GPR_U32(ctx, 5));
label_21c084:
    // 0x21c084: 0xae6208d4  sw          $v0, 0x8D4($s3)
    ctx->pc = 0x21c084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2260), GPR_U32(ctx, 2));
label_21c088:
    // 0x21c088: 0xa2640970  sb          $a0, 0x970($s3)
    ctx->pc = 0x21c088u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2416), (uint8_t)GPR_U32(ctx, 4));
label_21c08c:
    // 0x21c08c: 0xa2640971  sb          $a0, 0x971($s3)
    ctx->pc = 0x21c08cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2417), (uint8_t)GPR_U32(ctx, 4));
label_21c090:
    // 0x21c090: 0xa2630972  sb          $v1, 0x972($s3)
    ctx->pc = 0x21c090u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2418), (uint8_t)GPR_U32(ctx, 3));
label_21c094:
    // 0x21c094: 0xa2650973  sb          $a1, 0x973($s3)
    ctx->pc = 0x21c094u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2419), (uint8_t)GPR_U32(ctx, 5));
label_21c098:
    // 0x21c098: 0x1000000d  b           . + 4 + (0xD << 2)
label_21c09c:
    if (ctx->pc == 0x21C09Cu) {
        ctx->pc = 0x21C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C098u;
        // 0x21c09c: 0xae620974  sw          $v0, 0x974($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0A0u;
        goto label_21c0a0;
    }
    ctx->pc = 0x21C098u;
    {
        const bool branch_taken_0x21c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C098u;
        // 0x21c09c: 0xae620974  sw          $v0, 0x974($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c098) {
            ctx->pc = 0x21C0D0u;
            goto label_21c0d0;
        }
    }
    ctx->pc = 0x21C0A0u;
label_21c0a0:
    // 0x21c0a0: 0xa26008d0  sb          $zero, 0x8D0($s3)
    ctx->pc = 0x21c0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2256), (uint8_t)GPR_U32(ctx, 0));
label_21c0a4:
    // 0x21c0a4: 0xa26008d1  sb          $zero, 0x8D1($s3)
    ctx->pc = 0x21c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2257), (uint8_t)GPR_U32(ctx, 0));
label_21c0a8:
    // 0x21c0a8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x21c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_21c0ac:
    // 0x21c0ac: 0xa26008d2  sb          $zero, 0x8D2($s3)
    ctx->pc = 0x21c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2258), (uint8_t)GPR_U32(ctx, 0));
label_21c0b0:
    // 0x21c0b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21c0b4:
    // 0x21c0b4: 0xa26308d3  sb          $v1, 0x8D3($s3)
    ctx->pc = 0x21c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2259), (uint8_t)GPR_U32(ctx, 3));
label_21c0b8:
    // 0x21c0b8: 0xae6208d4  sw          $v0, 0x8D4($s3)
    ctx->pc = 0x21c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2260), GPR_U32(ctx, 2));
label_21c0bc:
    // 0x21c0bc: 0xa2600970  sb          $zero, 0x970($s3)
    ctx->pc = 0x21c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2416), (uint8_t)GPR_U32(ctx, 0));
label_21c0c0:
    // 0x21c0c0: 0xa2600971  sb          $zero, 0x971($s3)
    ctx->pc = 0x21c0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2417), (uint8_t)GPR_U32(ctx, 0));
label_21c0c4:
    // 0x21c0c4: 0xa2600972  sb          $zero, 0x972($s3)
    ctx->pc = 0x21c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2418), (uint8_t)GPR_U32(ctx, 0));
label_21c0c8:
    // 0x21c0c8: 0xa2630973  sb          $v1, 0x973($s3)
    ctx->pc = 0x21c0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2419), (uint8_t)GPR_U32(ctx, 3));
label_21c0cc:
    // 0x21c0cc: 0xae620974  sw          $v0, 0x974($s3)
    ctx->pc = 0x21c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2420), GPR_U32(ctx, 2));
label_21c0d0:
    // 0x21c0d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_21c0d4:
    // 0x21c0d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21c0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c0d8:
    // 0x21c0d8: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x21c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_21c0dc:
    // 0x21c0dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c0e0:
    // 0x21c0e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21c0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c0e4:
    // 0x21c0e4: 0xc066c72  jal         func_19B1C8
label_21c0e8:
    if (ctx->pc == 0x21C0E8u) {
        ctx->pc = 0x21C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0E4u;
        // 0x21c0e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0ECu;
        goto label_21c0ec;
    }
    ctx->pc = 0x21C0E4u;
    SET_GPR_U32(ctx, 31, 0x21C0ECu);
    ctx->pc = 0x21C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0E4u;
    // 0x21c0e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21C0E4u, 0x21C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0ECu;
label_21c0ec:
    // 0x21c0ec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_21c0f0:
    // 0x21c0f0: 0x27de0052  addiu       $fp, $fp, 0x52
    ctx->pc = 0x21c0f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 82));
label_21c0f4:
    // 0x21c0f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c0f8:
    // 0x21c0f8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_21c0fc:
    // 0x21c0fc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x21c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_21c100:
    // 0x21c100: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x21c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_21c104:
    // 0x21c104: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21c108:
    // 0x21c108: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x21c108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_21c10c:
    // 0x21c10c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x21c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_21c110:
    // 0x21c110: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x21c110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_21c114:
    // 0x21c114: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x21c114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_21c118:
    // 0x21c118: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21c11c:
    // 0x21c11c: 0x203202a  slt         $a0, $s0, $v1
    ctx->pc = 0x21c11cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c120:
    // 0x21c120: 0x1480fe73  bnez        $a0, . + 4 + (-0x18D << 2)
label_21c124:
    if (ctx->pc == 0x21C124u) {
        ctx->pc = 0x21C128u;
        goto label_21c128;
    }
    ctx->pc = 0x21C120u;
    {
        const bool branch_taken_0x21c120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c120) {
            ctx->pc = 0x21BAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21baf0; return; }
        }
    }
    ctx->pc = 0x21C128u;
label_21c128:
    // 0x21c128: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21c12c:
    // 0x21c12c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x21c12cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21c130:
    // 0x21c130: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x21c130u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21c134:
    // 0x21c134: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x21c134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c138:
    // 0x21c138: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x21c138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c13c:
    // 0x21c13c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21c13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c140:
    // 0x21c140: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21c140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c144:
    // 0x21c144: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21c144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c148:
    // 0x21c148: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21c148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c14c:
    // 0x21c14c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21c14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c150:
    // 0x21c150: 0x3e00008  jr          $ra
label_21c154:
    if (ctx->pc == 0x21C154u) {
        ctx->pc = 0x21C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C150u;
        // 0x21c154: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C158u;
        goto label_21c158;
    }
    ctx->pc = 0x21C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C150u;
        // 0x21c154: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C158u;
label_21c158:
    // 0x21c158: 0x0  nop
    ctx->pc = 0x21c158u;
    // NOP
label_21c15c:
    // 0x21c15c: 0x0  nop
    ctx->pc = 0x21c15cu;
    // NOP
label_21c160:
    // 0x21c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21c164:
    // 0x21c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c168:
    // 0x21c168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c16c:
    // 0x21c16c: 0x8f8392cc  lw          $v1, -0x6D34($gp)
    ctx->pc = 0x21c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939340)));
label_21c170:
    // 0x21c170: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x21c170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_21c174:
    // 0x21c174: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_21c178:
    if (ctx->pc == 0x21C178u) {
        ctx->pc = 0x21C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C174u;
        // 0x21c178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C17Cu;
        goto label_21c17c;
    }
    ctx->pc = 0x21C174u;
    {
        const bool branch_taken_0x21c174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C174u;
        // 0x21c178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c174) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C17Cu;
label_21c17c:
    // 0x21c17c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21c180:
    // 0x21c180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c184:
    // 0x21c184: 0x24a5e130  addiu       $a1, $a1, -0x1ED0
    ctx->pc = 0x21c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959408));
label_21c188:
    // 0x21c188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21c18c:
    // 0x21c18c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21c190:
    // 0x21c190: 0x600008  jr          $v1
label_21c194:
    if (ctx->pc == 0x21C194u) {
        ctx->pc = 0x21C198u;
        goto label_21c198;
    }
    ctx->pc = 0x21C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C198u: goto label_21c198;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C238u: goto label_21c238;
            case 0x21C270u: goto label_21c270;
            case 0x21C29Cu: goto label_21c29c;
            case 0x21C2BCu: goto label_21c2bc;
            case 0x21C2E4u: goto label_21c2e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21C198u;
label_21c198:
    // 0x21c198: 0xc08710c  jal         func_21C430
label_21c19c:
    if (ctx->pc == 0x21C19Cu) {
        ctx->pc = 0x21C1A0u;
        goto label_21c1a0;
    }
    ctx->pc = 0x21C198u;
    SET_GPR_U32(ctx, 31, 0x21C1A0u);
    ctx->pc = 0x21C430u;
    goto label_21c430;
    ctx->pc = 0x21C1A0u;
label_21c1a0:
    // 0x21c1a0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_21c1a4:
    if (ctx->pc == 0x21C1A4u) {
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A0u;
        // 0x21c1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C1A8u;
        goto label_21c1a8;
    }
    ctx->pc = 0x21C1A0u;
    {
        const bool branch_taken_0x21c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A0u;
        // 0x21c1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1a0) {
            ctx->pc = 0x21C314u;
            goto label_21c314;
        }
    }
    ctx->pc = 0x21C1A8u;
label_21c1a8:
    // 0x21c1a8: 0xc08710c  jal         func_21C430
label_21c1ac:
    if (ctx->pc == 0x21C1ACu) {
        ctx->pc = 0x21C1B0u;
        goto label_21c1b0;
    }
    ctx->pc = 0x21C1A8u;
    SET_GPR_U32(ctx, 31, 0x21C1B0u);
    ctx->pc = 0x21C430u;
    goto label_21c430;
    ctx->pc = 0x21C1B0u;
label_21c1b0:
    // 0x21c1b0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_21c1b4:
    if (ctx->pc == 0x21C1B4u) {
        ctx->pc = 0x21C1B8u;
        goto label_21c1b8;
    }
    ctx->pc = 0x21C1B0u;
    {
        const bool branch_taken_0x21c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c1b0) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C1B8u;
label_21c1b8:
    // 0x21c1b8: 0x8f8892d0  lw          $t0, -0x6D30($gp)
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
label_21c1bc:
    // 0x21c1bc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_21c1c0:
    // 0x21c1c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x21c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_21c1c4:
    // 0x21c1c4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_21c1c8:
    // 0x21c1c8: 0x24c63b82  addiu       $a2, $a2, 0x3B82
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15234));
label_21c1cc:
    // 0x21c1cc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c1d0:
    // 0x21c1d0: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x21c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_21c1d4:
    // 0x21c1d4: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x21c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
label_21c1d8:
    // 0x21c1d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x21c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_21c1dc:
    // 0x21c1dc: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x21c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_21c1e0:
    // 0x21c1e0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x21c1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_21c1e4:
    // 0x21c1e4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_21c1e8:
    // 0x21c1e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21c1ec:
    // 0x21c1ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x21c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_21c1f0:
    // 0x21c1f0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21c1f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21c1f4:
    // 0x21c1f4: 0xa0262490  sb          $a2, 0x2490($at)
    ctx->pc = 0x21c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9360), (uint8_t)GPR_U32(ctx, 6));
label_21c1f8:
    // 0x21c1f8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c1fc:
    // 0x21c1fc: 0xa0252491  sb          $a1, 0x2491($at)
    ctx->pc = 0x21c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9361), (uint8_t)GPR_U32(ctx, 5));
label_21c200:
    // 0x21c200: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21c200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21c204:
    // 0x21c204: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c208:
    // 0x21c208: 0xa0232470  sb          $v1, 0x2470($at)
    ctx->pc = 0x21c208u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9328), (uint8_t)GPR_U32(ctx, 3));
label_21c20c:
    // 0x21c20c: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c210:
    // 0x21c210: 0xc044ad0  jal         func_112B40
label_21c214:
    if (ctx->pc == 0x21C214u) {
        ctx->pc = 0x21C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C210u;
        // 0x21c214: 0xa0222471  sb          $v0, 0x2471($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9329), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C218u;
        goto label_21c218;
    }
    ctx->pc = 0x21C210u;
    SET_GPR_U32(ctx, 31, 0x21C218u);
    ctx->pc = 0x21C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C210u;
    // 0x21c214: 0xa0222471  sb          $v0, 0x2471($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 9329), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B40u, 0x21C210u, 0x21C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C218u;
label_21c218:
    // 0x21c218: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_21c21c:
    // 0x21c21c: 0xc044dd4  jal         func_113750
label_21c220:
    if (ctx->pc == 0x21C220u) {
        ctx->pc = 0x21C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C21Cu;
        // 0x21c220: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C224u;
        goto label_21c224;
    }
    ctx->pc = 0x21C21Cu;
    SET_GPR_U32(ctx, 31, 0x21C224u);
    ctx->pc = 0x21C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C21Cu;
    // 0x21c220: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113750u, 0x21C21Cu, 0x21C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C224u;
label_21c224:
    // 0x21c224: 0xc0656b0  jal         func_195AC0
label_21c228:
    if (ctx->pc == 0x21C228u) {
        ctx->pc = 0x21C22Cu;
        goto label_21c22c;
    }
    ctx->pc = 0x21C224u;
    SET_GPR_U32(ctx, 31, 0x21C22Cu);
    ctx->pc = 0x195AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AC0u, 0x21C224u, 0x21C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C22Cu;
label_21c22c:
    // 0x21c22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21c230:
    // 0x21c230: 0x10000037  b           . + 4 + (0x37 << 2)
label_21c234:
    if (ctx->pc == 0x21C234u) {
        ctx->pc = 0x21C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C230u;
        // 0x21c234: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C238u;
        goto label_21c238;
    }
    ctx->pc = 0x21C230u;
    {
        const bool branch_taken_0x21c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C230u;
        // 0x21c234: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c230) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C238u;
label_21c238:
    // 0x21c238: 0xc08710c  jal         func_21C430
label_21c23c:
    if (ctx->pc == 0x21C23Cu) {
        ctx->pc = 0x21C240u;
        goto label_21c240;
    }
    ctx->pc = 0x21C238u;
    SET_GPR_U32(ctx, 31, 0x21C240u);
    ctx->pc = 0x21C430u;
    goto label_21c430;
    ctx->pc = 0x21C240u;
label_21c240:
    // 0x21c240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21c244:
    if (ctx->pc == 0x21C244u) {
        ctx->pc = 0x21C248u;
        goto label_21c248;
    }
    ctx->pc = 0x21C240u;
    {
        const bool branch_taken_0x21c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c240) {
            ctx->pc = 0x21C258u;
            goto label_21c258;
        }
    }
    ctx->pc = 0x21C248u;
label_21c248:
    // 0x21c248: 0xc041478  jal         func_1051E0
label_21c24c:
    if (ctx->pc == 0x21C24Cu) {
        ctx->pc = 0x21C250u;
        goto label_21c250;
    }
    ctx->pc = 0x21C248u;
    SET_GPR_U32(ctx, 31, 0x21C250u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x21C248u, 0x21C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C250u;
label_21c250:
    // 0x21c250: 0x1000002f  b           . + 4 + (0x2F << 2)
label_21c254:
    if (ctx->pc == 0x21C254u) {
        ctx->pc = 0x21C258u;
        goto label_21c258;
    }
    ctx->pc = 0x21C250u;
    {
        const bool branch_taken_0x21c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c250) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C258u;
label_21c258:
    // 0x21c258: 0xc0414f8  jal         func_1053E0
label_21c25c:
    if (ctx->pc == 0x21C25Cu) {
        ctx->pc = 0x21C260u;
        goto label_21c260;
    }
    ctx->pc = 0x21C258u;
    SET_GPR_U32(ctx, 31, 0x21C260u);
    ctx->pc = 0x1053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053E0u, 0x21C258u, 0x21C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C260u;
label_21c260:
    // 0x21c260: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_21c264:
    if (ctx->pc == 0x21C264u) {
        ctx->pc = 0x21C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C260u;
        // 0x21c264: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C268u;
        goto label_21c268;
    }
    ctx->pc = 0x21C260u;
    {
        const bool branch_taken_0x21c260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C260u;
        // 0x21c264: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c260) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C268u;
label_21c268:
    // 0x21c268: 0x10000029  b           . + 4 + (0x29 << 2)
label_21c26c:
    if (ctx->pc == 0x21C26Cu) {
        ctx->pc = 0x21C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C268u;
        // 0x21c26c: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C270u;
        goto label_21c270;
    }
    ctx->pc = 0x21C268u;
    {
        const bool branch_taken_0x21c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C268u;
        // 0x21c26c: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c268) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C270u;
label_21c270:
    // 0x21c270: 0xc0871f8  jal         func_21C7E0
label_21c274:
    if (ctx->pc == 0x21C274u) {
        ctx->pc = 0x21C278u;
        goto label_21c278;
    }
    ctx->pc = 0x21C270u;
    SET_GPR_U32(ctx, 31, 0x21C278u);
    ctx->pc = 0x21C7E0u;
    { ctx->pc = 0x21c7e0; return; }
    ctx->pc = 0x21C278u;
label_21c278:
    // 0x21c278: 0x8f8292d0  lw          $v0, -0x6D30($gp)
    ctx->pc = 0x21c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
label_21c27c:
    // 0x21c27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c280:
    // 0x21c280: 0xc08710c  jal         func_21C430
label_21c284:
    if (ctx->pc == 0x21C284u) {
        ctx->pc = 0x21C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C280u;
        // 0x21c284: 0xaf8292c8  sw          $v0, -0x6D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C288u;
        goto label_21c288;
    }
    ctx->pc = 0x21C280u;
    SET_GPR_U32(ctx, 31, 0x21C288u);
    ctx->pc = 0x21C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C280u;
    // 0x21c284: 0xaf8292c8  sw          $v0, -0x6D38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C430u;
    goto label_21c430;
    ctx->pc = 0x21C288u;
label_21c288:
    // 0x21c288: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_21c28c:
    if (ctx->pc == 0x21C28Cu) {
        ctx->pc = 0x21C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C288u;
        // 0x21c28c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C290u;
        goto label_21c290;
    }
    ctx->pc = 0x21C288u;
    {
        const bool branch_taken_0x21c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C288u;
        // 0x21c28c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c288) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C290u;
label_21c290:
    // 0x21c290: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
label_21c294:
    // 0x21c294: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21c298:
    if (ctx->pc == 0x21C298u) {
        ctx->pc = 0x21C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C294u;
        // 0x21c298: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C29Cu;
        goto label_21c29c;
    }
    ctx->pc = 0x21C294u;
    {
        const bool branch_taken_0x21c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C294u;
        // 0x21c298: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c294) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C29Cu;
label_21c29c:
    // 0x21c29c: 0xc08710c  jal         func_21C430
label_21c2a0:
    if (ctx->pc == 0x21C2A0u) {
        ctx->pc = 0x21C2A4u;
        goto label_21c2a4;
    }
    ctx->pc = 0x21C29Cu;
    SET_GPR_U32(ctx, 31, 0x21C2A4u);
    ctx->pc = 0x21C430u;
    goto label_21c430;
    ctx->pc = 0x21C2A4u;
label_21c2a4:
    // 0x21c2a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_21c2a8:
    if (ctx->pc == 0x21C2A8u) {
        ctx->pc = 0x21C2ACu;
        goto label_21c2ac;
    }
    ctx->pc = 0x21C2A4u;
    {
        const bool branch_taken_0x21c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c2a4) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2ACu;
label_21c2ac:
    // 0x21c2ac: 0xc087138  jal         func_21C4E0
label_21c2b0:
    if (ctx->pc == 0x21C2B0u) {
        ctx->pc = 0x21C2B4u;
        goto label_21c2b4;
    }
    ctx->pc = 0x21C2ACu;
    SET_GPR_U32(ctx, 31, 0x21C2B4u);
    ctx->pc = 0x21C4E0u;
    { ctx->pc = 0x21c4e0; return; }
    ctx->pc = 0x21C2B4u;
label_21c2b4:
    // 0x21c2b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_21c2b8:
    if (ctx->pc == 0x21C2B8u) {
        ctx->pc = 0x21C2BCu;
        goto label_21c2bc;
    }
    ctx->pc = 0x21C2B4u;
    {
        const bool branch_taken_0x21c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2b4) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c2c0:
    // 0x21c2c0: 0x90238ea2  lbu         $v1, -0x715E($at)
    ctx->pc = 0x21c2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938274)));
label_21c2c4:
    // 0x21c2c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_21c2c8:
    if (ctx->pc == 0x21C2C8u) {
        ctx->pc = 0x21C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2C4u;
        // 0x21c2c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2CCu;
        goto label_21c2cc;
    }
    ctx->pc = 0x21C2C4u;
    {
        const bool branch_taken_0x21c2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2C4u;
        // 0x21c2c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2c4) {
            ctx->pc = 0x21C2DCu;
            goto label_21c2dc;
        }
    }
    ctx->pc = 0x21C2CCu;
label_21c2cc:
    // 0x21c2cc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_21c2d0:
    // 0x21c2d0: 0xc0452cc  jal         func_114B30
label_21c2d4:
    if (ctx->pc == 0x21C2D4u) {
        ctx->pc = 0x21C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2D0u;
        // 0x21c2d4: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2D8u;
        goto label_21c2d8;
    }
    ctx->pc = 0x21C2D0u;
    SET_GPR_U32(ctx, 31, 0x21C2D8u);
    ctx->pc = 0x21C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2D0u;
    // 0x21c2d4: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C2D0u, 0x21C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2D8u;
label_21c2d8:
    // 0x21c2d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21c2dc:
    // 0x21c2dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_21c2e0:
    if (ctx->pc == 0x21C2E0u) {
        ctx->pc = 0x21C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2DCu;
        // 0x21c2e0: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2E4u;
        goto label_21c2e4;
    }
    ctx->pc = 0x21C2DCu;
    {
        const bool branch_taken_0x21c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2DCu;
        // 0x21c2e0: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2dc) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2E4u;
label_21c2e4:
    // 0x21c2e4: 0xc044a04  jal         func_112810
label_21c2e8:
    if (ctx->pc == 0x21C2E8u) {
        ctx->pc = 0x21C2ECu;
        goto label_21c2ec;
    }
    ctx->pc = 0x21C2E4u;
    SET_GPR_U32(ctx, 31, 0x21C2ECu);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x21C2E4u, 0x21C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2ECu;
label_21c2ec:
    // 0x21c2ec: 0x8f8392d0  lw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
label_21c2f0:
    // 0x21c2f0: 0x24040195  addiu       $a0, $zero, 0x195
    ctx->pc = 0x21c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_21c2f4:
    // 0x21c2f4: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_21c2f8:
    // 0x21c2f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_21c2fc:
    if (ctx->pc == 0x21C2FCu) {
        ctx->pc = 0x21C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F8u;
        // 0x21c2fc: 0xaf8492c8  sw          $a0, -0x6D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C300u;
        goto label_21c300;
    }
    ctx->pc = 0x21C2F8u;
    {
        const bool branch_taken_0x21c2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F8u;
        // 0x21c2fc: 0xaf8492c8  sw          $a0, -0x6D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2f8) {
            ctx->pc = 0x21C30Cu;
            goto label_21c30c;
        }
    }
    ctx->pc = 0x21C300u;
label_21c300:
    // 0x21c300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c304:
    // 0x21c304: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c308:
    if (ctx->pc == 0x21C308u) {
        ctx->pc = 0x21C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C304u;
        // 0x21c308: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C30Cu;
        goto label_21c30c;
    }
    ctx->pc = 0x21C304u;
    {
        const bool branch_taken_0x21c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C304u;
        // 0x21c308: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c304) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C30Cu;
label_21c30c:
    // 0x21c30c: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
label_21c310:
    // 0x21c310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c314:
    // 0x21c314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c318:
    // 0x21c318: 0x3e00008  jr          $ra
label_21c31c:
    if (ctx->pc == 0x21C31Cu) {
        ctx->pc = 0x21C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C318u;
        // 0x21c31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C320u;
        goto label_21c320;
    }
    ctx->pc = 0x21C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C318u;
        // 0x21c31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C320u;
label_21c320:
    // 0x21c320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c324:
    // 0x21c324: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c328:
    // 0x21c328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c32c:
    // 0x21c32c: 0x90238ea2  lbu         $v1, -0x715E($at)
    ctx->pc = 0x21c32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938274)));
label_21c330:
    // 0x21c330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21c334:
    if (ctx->pc == 0x21C334u) {
        ctx->pc = 0x21C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C330u;
        // 0x21c334: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C338u;
        goto label_21c338;
    }
    ctx->pc = 0x21C330u;
    {
        const bool branch_taken_0x21c330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C330u;
        // 0x21c334: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c330) {
            ctx->pc = 0x21C340u;
            goto label_21c340;
        }
    }
    ctx->pc = 0x21C338u;
label_21c338:
    // 0x21c338: 0xc0452cc  jal         func_114B30
label_21c33c:
    if (ctx->pc == 0x21C33Cu) {
        ctx->pc = 0x21C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C338u;
        // 0x21c33c: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C340u;
        goto label_21c340;
    }
    ctx->pc = 0x21C338u;
    SET_GPR_U32(ctx, 31, 0x21C340u);
    ctx->pc = 0x21C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C338u;
    // 0x21c33c: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C338u, 0x21C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C340u;
label_21c340:
    // 0x21c340: 0x8f8392c8  lw          $v1, -0x6D38($gp)
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939336)));
label_21c344:
    // 0x21c344: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_21c348:
    // 0x21c348: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_21c34c:
    if (ctx->pc == 0x21C34Cu) {
        ctx->pc = 0x21C350u;
        goto label_21c350;
    }
    ctx->pc = 0x21C348u;
    {
        const bool branch_taken_0x21c348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c348) {
            ctx->pc = 0x21C360u;
            goto label_21c360;
        }
    }
    ctx->pc = 0x21C350u;
label_21c350:
    // 0x21c350: 0xc044a04  jal         func_112810
label_21c354:
    if (ctx->pc == 0x21C354u) {
        ctx->pc = 0x21C358u;
        goto label_21c358;
    }
    ctx->pc = 0x21C350u;
    SET_GPR_U32(ctx, 31, 0x21C358u);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x21C350u, 0x21C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C358u;
label_21c358:
    // 0x21c358: 0x1000000e  b           . + 4 + (0xE << 2)
label_21c35c:
    if (ctx->pc == 0x21C35Cu) {
        ctx->pc = 0x21C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C358u;
        // 0x21c35c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C360u;
        goto label_21c360;
    }
    ctx->pc = 0x21C358u;
    {
        const bool branch_taken_0x21c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C358u;
        // 0x21c35c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c358) {
            ctx->pc = 0x21C394u;
            goto label_21c394;
        }
    }
    ctx->pc = 0x21C360u;
label_21c360:
    // 0x21c360: 0x8f8492cc  lw          $a0, -0x6D34($gp)
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939340)));
label_21c364:
    // 0x21c364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21c368:
    // 0x21c368: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_21c36c:
    if (ctx->pc == 0x21C36Cu) {
        ctx->pc = 0x21C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C368u;
        // 0x21c36c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C370u;
        goto label_21c370;
    }
    ctx->pc = 0x21C368u;
    {
        const bool branch_taken_0x21c368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C368u;
        // 0x21c36c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c368) {
            ctx->pc = 0x21C380u;
            goto label_21c380;
        }
    }
    ctx->pc = 0x21C370u;
label_21c370:
    // 0x21c370: 0xc041478  jal         func_1051E0
label_21c374:
    if (ctx->pc == 0x21C374u) {
        ctx->pc = 0x21C378u;
        goto label_21c378;
    }
    ctx->pc = 0x21C370u;
    SET_GPR_U32(ctx, 31, 0x21C378u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x21C370u, 0x21C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0x10000005  b           . + 4 + (0x5 << 2)
label_21c37c:
    if (ctx->pc == 0x21C37Cu) {
        ctx->pc = 0x21C380u;
        goto label_21c380;
    }
    ctx->pc = 0x21C378u;
    {
        const bool branch_taken_0x21c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c378) {
            ctx->pc = 0x21C390u;
            goto label_21c390;
        }
    }
    ctx->pc = 0x21C380u;
label_21c380:
    // 0x21c380: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_21c384:
    if (ctx->pc == 0x21C384u) {
        ctx->pc = 0x21C388u;
        goto label_21c388;
    }
    ctx->pc = 0x21C380u;
    {
        const bool branch_taken_0x21c380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c380) {
            ctx->pc = 0x21C390u;
            goto label_21c390;
        }
    }
    ctx->pc = 0x21C388u;
label_21c388:
    // 0x21c388: 0xc044a18  jal         func_112860
label_21c38c:
    if (ctx->pc == 0x21C38Cu) {
        ctx->pc = 0x21C390u;
        goto label_21c390;
    }
    ctx->pc = 0x21C388u;
    SET_GPR_U32(ctx, 31, 0x21C390u);
    ctx->pc = 0x112860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112860u, 0x21C388u, 0x21C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C390u;
label_21c390:
    // 0x21c390: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_21c394:
    // 0x21c394: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_21c398:
    // 0x21c398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21c39c:
    // 0x21c39c: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x21c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
label_21c3a0:
    // 0x21c3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c3a4:
    // 0x21c3a4: 0x3e00008  jr          $ra
label_21c3a8:
    if (ctx->pc == 0x21C3A8u) {
        ctx->pc = 0x21C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3A4u;
        // 0x21c3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3ACu;
        goto label_21c3ac;
    }
    ctx->pc = 0x21C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3A4u;
        // 0x21c3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3ACu;
label_21c3ac:
    // 0x21c3ac: 0x0  nop
    ctx->pc = 0x21c3acu;
    // NOP
label_21c3b0:
    // 0x21c3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c3b4:
    // 0x21c3b4: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x21c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_21c3b8:
    // 0x21c3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c3bc:
    // 0x21c3bc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c3c0:
    // 0x21c3c0: 0xa0222490  sb          $v0, 0x2490($at)
    ctx->pc = 0x21c3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9360), (uint8_t)GPR_U32(ctx, 2));
label_21c3c4:
    // 0x21c3c4: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x21c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_21c3c8:
    // 0x21c3c8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c3cc:
    // 0x21c3cc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x21c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_21c3d0:
    // 0x21c3d0: 0xa0222491  sb          $v0, 0x2491($at)
    ctx->pc = 0x21c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9361), (uint8_t)GPR_U32(ctx, 2));
label_21c3d4:
    // 0x21c3d4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_21c3d8:
    // 0x21c3d8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c3dc:
    // 0x21c3dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21c3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21c3e0:
    // 0x21c3e0: 0xa0242470  sb          $a0, 0x2470($at)
    ctx->pc = 0x21c3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9328), (uint8_t)GPR_U32(ctx, 4));
label_21c3e4:
    // 0x21c3e4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_21c3e8:
    // 0x21c3e8: 0xaf8392d0  sw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939344), GPR_U32(ctx, 3));
label_21c3ec:
    // 0x21c3ec: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x21c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_21c3f0:
    // 0x21c3f0: 0xa0242471  sb          $a0, 0x2471($at)
    ctx->pc = 0x21c3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9329), (uint8_t)GPR_U32(ctx, 4));
label_21c3f4:
    // 0x21c3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c3f8:
    // 0x21c3f8: 0xaf8392c8  sw          $v1, -0x6D38($gp)
    ctx->pc = 0x21c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 3));
label_21c3fc:
    // 0x21c3fc: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
label_21c400:
    // 0x21c400: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
label_21c404:
    // 0x21c404: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_21c408:
    // 0x21c408: 0xc06452c  jal         func_1914B0
label_21c40c:
    if (ctx->pc == 0x21C40Cu) {
        ctx->pc = 0x21C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C408u;
        // 0x21c40c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C410u;
        goto label_21c410;
    }
    ctx->pc = 0x21C408u;
    SET_GPR_U32(ctx, 31, 0x21C410u);
    ctx->pc = 0x21C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C408u;
    // 0x21c40c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914B0u, 0x21C408u, 0x21C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C410u;
label_21c410:
    // 0x21c410: 0xc064710  jal         func_191C40
label_21c414:
    if (ctx->pc == 0x21C414u) {
        ctx->pc = 0x21C418u;
        goto label_21c418;
    }
    ctx->pc = 0x21C410u;
    SET_GPR_U32(ctx, 31, 0x21C418u);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x21C410u, 0x21C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C418u;
label_21c418:
    // 0x21c418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c41c:
    // 0x21c41c: 0x3e00008  jr          $ra
label_21c420:
    if (ctx->pc == 0x21C420u) {
        ctx->pc = 0x21C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C41Cu;
        // 0x21c420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C424u;
        goto label_21c424;
    }
    ctx->pc = 0x21C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C41Cu;
        // 0x21c420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C424u;
label_21c424:
    // 0x21c424: 0x0  nop
    ctx->pc = 0x21c424u;
    // NOP
label_21c428:
    // 0x21c428: 0x0  nop
    ctx->pc = 0x21c428u;
    // NOP
label_21c42c:
    // 0x21c42c: 0x0  nop
    ctx->pc = 0x21c42cu;
    // NOP
label_21c430:
    // 0x21c430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21c434:
    // 0x21c434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c438:
    // 0x21c438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c43c:
    // 0x21c43c: 0x8f8392d0  lw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
label_21c440:
    // 0x21c440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c444:
    // 0x21c444: 0x10700021  beq         $v1, $s0, . + 4 + (0x21 << 2)
label_21c448:
    if (ctx->pc == 0x21C448u) {
        ctx->pc = 0x21C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C444u;
        // 0x21c448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C44Cu;
        goto label_21c44c;
    }
    ctx->pc = 0x21C444u;
    {
        const bool branch_taken_0x21c444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x21C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C444u;
        // 0x21c448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c444) {
            ctx->pc = 0x21C4CCu;
            { ctx->pc = 0x21c4cc; return; }
        }
    }
    ctx->pc = 0x21C44Cu;
label_21c44c:
    // 0x21c44c: 0x2a010029  slti        $at, $s0, 0x29
    ctx->pc = 0x21c44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_21c450:
    // 0x21c450: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_21c454:
    if (ctx->pc == 0x21C454u) {
        ctx->pc = 0x21C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C450u;
        // 0x21c454: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C458u;
        goto label_21c458;
    }
    ctx->pc = 0x21C450u;
    {
        const bool branch_taken_0x21c450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C450u;
        // 0x21c454: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c450) {
            ctx->pc = 0x21C4A0u;
            { ctx->pc = 0x21c4a0; return; }
        }
    }
    ctx->pc = 0x21C458u;
label_21c458:
    // 0x21c458: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_21c45c:
    // 0x21c45c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21c460:
    if (ctx->pc == 0x21C460u) {
        ctx->pc = 0x21C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C45Cu;
        // 0x21c460: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C464u;
        goto label_21c464;
    }
    ctx->pc = 0x21C45Cu;
    {
        const bool branch_taken_0x21c45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C45Cu;
        // 0x21c460: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c45c) {
            ctx->pc = 0x21C46Cu;
            { ctx->pc = 0x21c46c; return; }
        }
    }
    ctx->pc = 0x21C464u;
label_21c464:
    // 0x21c464: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21c468u;
    return;
}

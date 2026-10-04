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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part329(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23bb90u: goto label_23bb90;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bb98u: goto label_23bb98;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bba0u: goto label_23bba0;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbacu: goto label_23bbac;
        case 0x23bbb0u: goto label_23bbb0;
        case 0x23bbb4u: goto label_23bbb4;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbbcu: goto label_23bbbc;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbc8u: goto label_23bbc8;
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbd0u: goto label_23bbd0;
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbd8u: goto label_23bbd8;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe0u: goto label_23bbe0;
        case 0x23bbe4u: goto label_23bbe4;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bbecu: goto label_23bbec;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bbf4u: goto label_23bbf4;
        case 0x23bbf8u: goto label_23bbf8;
        case 0x23bbfcu: goto label_23bbfc;
        case 0x23bc00u: goto label_23bc00;
        case 0x23bc04u: goto label_23bc04;
        case 0x23bc08u: goto label_23bc08;
        case 0x23bc0cu: goto label_23bc0c;
        case 0x23bc10u: goto label_23bc10;
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc18u: goto label_23bc18;
        case 0x23bc1cu: goto label_23bc1c;
        case 0x23bc20u: goto label_23bc20;
        case 0x23bc24u: goto label_23bc24;
        case 0x23bc28u: goto label_23bc28;
        case 0x23bc2cu: goto label_23bc2c;
        case 0x23bc30u: goto label_23bc30;
        case 0x23bc34u: goto label_23bc34;
        case 0x23bc38u: goto label_23bc38;
        case 0x23bc3cu: goto label_23bc3c;
        case 0x23bc40u: goto label_23bc40;
        case 0x23bc44u: goto label_23bc44;
        case 0x23bc48u: goto label_23bc48;
        case 0x23bc4cu: goto label_23bc4c;
        case 0x23bc50u: goto label_23bc50;
        case 0x23bc54u: goto label_23bc54;
        case 0x23bc58u: goto label_23bc58;
        case 0x23bc5cu: goto label_23bc5c;
        case 0x23bc60u: goto label_23bc60;
        case 0x23bc64u: goto label_23bc64;
        case 0x23bc68u: goto label_23bc68;
        case 0x23bc6cu: goto label_23bc6c;
        case 0x23bc70u: goto label_23bc70;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bc78u: goto label_23bc78;
        case 0x23bc7cu: goto label_23bc7c;
        case 0x23bc80u: goto label_23bc80;
        case 0x23bc84u: goto label_23bc84;
        case 0x23bc88u: goto label_23bc88;
        case 0x23bc8cu: goto label_23bc8c;
        case 0x23bc90u: goto label_23bc90;
        case 0x23bc94u: goto label_23bc94;
        case 0x23bc98u: goto label_23bc98;
        case 0x23bc9cu: goto label_23bc9c;
        case 0x23bca0u: goto label_23bca0;
        case 0x23bca4u: goto label_23bca4;
        case 0x23bca8u: goto label_23bca8;
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb0u: goto label_23bcb0;
        case 0x23bcb4u: goto label_23bcb4;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd48u: goto label_23bd48;
        case 0x23bd4cu: goto label_23bd4c;
        case 0x23bd50u: goto label_23bd50;
        case 0x23bd54u: goto label_23bd54;
        case 0x23bd58u: goto label_23bd58;
        case 0x23bd5cu: goto label_23bd5c;
        case 0x23bd60u: goto label_23bd60;
        case 0x23bd64u: goto label_23bd64;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd6cu: goto label_23bd6c;
        case 0x23bd70u: goto label_23bd70;
        case 0x23bd74u: goto label_23bd74;
        case 0x23bd78u: goto label_23bd78;
        case 0x23bd7cu: goto label_23bd7c;
        case 0x23bd80u: goto label_23bd80;
        case 0x23bd84u: goto label_23bd84;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd8cu: goto label_23bd8c;
        case 0x23bd90u: goto label_23bd90;
        case 0x23bd94u: goto label_23bd94;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bd9cu: goto label_23bd9c;
        case 0x23bda0u: goto label_23bda0;
        case 0x23bda4u: goto label_23bda4;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bdacu: goto label_23bdac;
        case 0x23bdb0u: goto label_23bdb0;
        case 0x23bdb4u: goto label_23bdb4;
        case 0x23bdb8u: goto label_23bdb8;
        case 0x23bdbcu: goto label_23bdbc;
        case 0x23bdc0u: goto label_23bdc0;
        case 0x23bdc4u: goto label_23bdc4;
        case 0x23bdc8u: goto label_23bdc8;
        case 0x23bdccu: goto label_23bdcc;
        case 0x23bdd0u: goto label_23bdd0;
        case 0x23bdd4u: goto label_23bdd4;
        case 0x23bdd8u: goto label_23bdd8;
        case 0x23bddcu: goto label_23bddc;
        case 0x23bde0u: goto label_23bde0;
        case 0x23bde4u: goto label_23bde4;
        case 0x23bde8u: goto label_23bde8;
        case 0x23bdecu: goto label_23bdec;
        case 0x23bdf0u: goto label_23bdf0;
        case 0x23bdf4u: goto label_23bdf4;
        case 0x23bdf8u: goto label_23bdf8;
        case 0x23bdfcu: goto label_23bdfc;
        case 0x23be00u: goto label_23be00;
        case 0x23be04u: goto label_23be04;
        case 0x23be08u: goto label_23be08;
        case 0x23be0cu: goto label_23be0c;
        case 0x23be10u: goto label_23be10;
        case 0x23be14u: goto label_23be14;
        case 0x23be18u: goto label_23be18;
        case 0x23be1cu: goto label_23be1c;
        case 0x23be20u: goto label_23be20;
        case 0x23be24u: goto label_23be24;
        case 0x23be28u: goto label_23be28;
        case 0x23be2cu: goto label_23be2c;
        case 0x23be30u: goto label_23be30;
        case 0x23be34u: goto label_23be34;
        case 0x23be38u: goto label_23be38;
        case 0x23be3cu: goto label_23be3c;
        case 0x23be40u: goto label_23be40;
        case 0x23be44u: goto label_23be44;
        case 0x23be48u: goto label_23be48;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be50u: goto label_23be50;
        case 0x23be54u: goto label_23be54;
        case 0x23be58u: goto label_23be58;
        case 0x23be5cu: goto label_23be5c;
        case 0x23be60u: goto label_23be60;
        case 0x23be64u: goto label_23be64;
        case 0x23be68u: goto label_23be68;
        case 0x23be6cu: goto label_23be6c;
        case 0x23be70u: goto label_23be70;
        case 0x23be74u: goto label_23be74;
        case 0x23be78u: goto label_23be78;
        case 0x23be7cu: goto label_23be7c;
        case 0x23be80u: goto label_23be80;
        case 0x23be84u: goto label_23be84;
        case 0x23be88u: goto label_23be88;
        case 0x23be8cu: goto label_23be8c;
        case 0x23be90u: goto label_23be90;
        case 0x23be94u: goto label_23be94;
        case 0x23be98u: goto label_23be98;
        case 0x23be9cu: goto label_23be9c;
        case 0x23bea0u: goto label_23bea0;
        case 0x23bea4u: goto label_23bea4;
        case 0x23bea8u: goto label_23bea8;
        case 0x23beacu: goto label_23beac;
        case 0x23beb0u: goto label_23beb0;
        case 0x23beb4u: goto label_23beb4;
        case 0x23beb8u: goto label_23beb8;
        case 0x23bebcu: goto label_23bebc;
        case 0x23bec0u: goto label_23bec0;
        case 0x23bec4u: goto label_23bec4;
        case 0x23bec8u: goto label_23bec8;
        case 0x23beccu: goto label_23becc;
        case 0x23bed0u: goto label_23bed0;
        case 0x23bed4u: goto label_23bed4;
        case 0x23bed8u: goto label_23bed8;
        case 0x23bedcu: goto label_23bedc;
        case 0x23bee0u: goto label_23bee0;
        case 0x23bee4u: goto label_23bee4;
        case 0x23bee8u: goto label_23bee8;
        case 0x23beecu: goto label_23beec;
        case 0x23bef0u: goto label_23bef0;
        case 0x23bef4u: goto label_23bef4;
        case 0x23bef8u: goto label_23bef8;
        case 0x23befcu: goto label_23befc;
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf04u: goto label_23bf04;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf0cu: goto label_23bf0c;
        case 0x23bf10u: goto label_23bf10;
        case 0x23bf14u: goto label_23bf14;
        case 0x23bf18u: goto label_23bf18;
        case 0x23bf1cu: goto label_23bf1c;
        case 0x23bf20u: goto label_23bf20;
        case 0x23bf24u: goto label_23bf24;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf38u: goto label_23bf38;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf40u: goto label_23bf40;
        case 0x23bf44u: goto label_23bf44;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf4cu: goto label_23bf4c;
        case 0x23bf50u: goto label_23bf50;
        case 0x23bf54u: goto label_23bf54;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf5cu: goto label_23bf5c;
        case 0x23bf60u: goto label_23bf60;
        case 0x23bf64u: goto label_23bf64;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf6cu: goto label_23bf6c;
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf88u: goto label_23bf88;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bf90u: goto label_23bf90;
        case 0x23bf94u: goto label_23bf94;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bf9cu: goto label_23bf9c;
        case 0x23bfa0u: goto label_23bfa0;
        case 0x23bfa4u: goto label_23bfa4;
        case 0x23bfa8u: goto label_23bfa8;
        case 0x23bfacu: goto label_23bfac;
        case 0x23bfb0u: goto label_23bfb0;
        case 0x23bfb4u: goto label_23bfb4;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23bfbcu: goto label_23bfbc;
        case 0x23bfc0u: goto label_23bfc0;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23bfc8u: goto label_23bfc8;
        case 0x23bfccu: goto label_23bfcc;
        case 0x23bfd0u: goto label_23bfd0;
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bfd8u: goto label_23bfd8;
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe0u: goto label_23bfe0;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfe8u: goto label_23bfe8;
        case 0x23bfecu: goto label_23bfec;
        case 0x23bff0u: goto label_23bff0;
        case 0x23bff4u: goto label_23bff4;
        case 0x23bff8u: goto label_23bff8;
        case 0x23bffcu: goto label_23bffc;
        case 0x23c000u: goto label_23c000;
        case 0x23c004u: goto label_23c004;
        case 0x23c008u: goto label_23c008;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c010u: goto label_23c010;
        case 0x23c014u: goto label_23c014;
        case 0x23c018u: goto label_23c018;
        case 0x23c01cu: goto label_23c01c;
        case 0x23c020u: goto label_23c020;
        case 0x23c024u: goto label_23c024;
        case 0x23c028u: goto label_23c028;
        case 0x23c02cu: goto label_23c02c;
        case 0x23c030u: goto label_23c030;
        case 0x23c034u: goto label_23c034;
        case 0x23c038u: goto label_23c038;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c040u: goto label_23c040;
        case 0x23c044u: goto label_23c044;
        case 0x23c048u: goto label_23c048;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c050u: goto label_23c050;
        case 0x23c054u: goto label_23c054;
        case 0x23c058u: goto label_23c058;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c060u: goto label_23c060;
        case 0x23c064u: goto label_23c064;
        case 0x23c068u: goto label_23c068;
        case 0x23c06cu: goto label_23c06c;
        case 0x23c070u: goto label_23c070;
        case 0x23c074u: goto label_23c074;
        case 0x23c078u: goto label_23c078;
        case 0x23c07cu: goto label_23c07c;
        case 0x23c080u: goto label_23c080;
        case 0x23c084u: goto label_23c084;
        case 0x23c088u: goto label_23c088;
        case 0x23c08cu: goto label_23c08c;
        case 0x23c090u: goto label_23c090;
        case 0x23c094u: goto label_23c094;
        case 0x23c098u: goto label_23c098;
        case 0x23c09cu: goto label_23c09c;
        case 0x23c0a0u: goto label_23c0a0;
        case 0x23c0a4u: goto label_23c0a4;
        case 0x23c0a8u: goto label_23c0a8;
        case 0x23c0acu: goto label_23c0ac;
        case 0x23c0b0u: goto label_23c0b0;
        case 0x23c0b4u: goto label_23c0b4;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0bcu: goto label_23c0bc;
        case 0x23c0c0u: goto label_23c0c0;
        case 0x23c0c4u: goto label_23c0c4;
        case 0x23c0c8u: goto label_23c0c8;
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0d0u: goto label_23c0d0;
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0d8u: goto label_23c0d8;
        case 0x23c0dcu: goto label_23c0dc;
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0e4u: goto label_23c0e4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0ecu: goto label_23c0ec;
        case 0x23c0f0u: goto label_23c0f0;
        case 0x23c0f4u: goto label_23c0f4;
        case 0x23c0f8u: goto label_23c0f8;
        case 0x23c0fcu: goto label_23c0fc;
        case 0x23c100u: goto label_23c100;
        case 0x23c104u: goto label_23c104;
        case 0x23c108u: goto label_23c108;
        case 0x23c10cu: goto label_23c10c;
        case 0x23c110u: goto label_23c110;
        case 0x23c114u: goto label_23c114;
        case 0x23c118u: goto label_23c118;
        case 0x23c11cu: goto label_23c11c;
        case 0x23c120u: goto label_23c120;
        case 0x23c124u: goto label_23c124;
        case 0x23c128u: goto label_23c128;
        case 0x23c12cu: goto label_23c12c;
        case 0x23c130u: goto label_23c130;
        case 0x23c134u: goto label_23c134;
        case 0x23c138u: goto label_23c138;
        case 0x23c13cu: goto label_23c13c;
        case 0x23c140u: goto label_23c140;
        case 0x23c144u: goto label_23c144;
        case 0x23c148u: goto label_23c148;
        case 0x23c14cu: goto label_23c14c;
        case 0x23c150u: goto label_23c150;
        case 0x23c154u: goto label_23c154;
        case 0x23c158u: goto label_23c158;
        case 0x23c15cu: goto label_23c15c;
        case 0x23c160u: goto label_23c160;
        case 0x23c164u: goto label_23c164;
        case 0x23c168u: goto label_23c168;
        case 0x23c16cu: goto label_23c16c;
        case 0x23c170u: goto label_23c170;
        case 0x23c174u: goto label_23c174;
        case 0x23c178u: goto label_23c178;
        case 0x23c17cu: goto label_23c17c;
        case 0x23c180u: goto label_23c180;
        case 0x23c184u: goto label_23c184;
        case 0x23c188u: goto label_23c188;
        case 0x23c18cu: goto label_23c18c;
        case 0x23c190u: goto label_23c190;
        case 0x23c194u: goto label_23c194;
        case 0x23c198u: goto label_23c198;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a0u: goto label_23c1a0;
        case 0x23c1a4u: goto label_23c1a4;
        case 0x23c1a8u: goto label_23c1a8;
        case 0x23c1acu: goto label_23c1ac;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b4u: goto label_23c1b4;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1bcu: goto label_23c1bc;
        case 0x23c1c0u: goto label_23c1c0;
        case 0x23c1c4u: goto label_23c1c4;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1ccu: goto label_23c1cc;
        case 0x23c1d0u: goto label_23c1d0;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c1d8u: goto label_23c1d8;
        case 0x23c1dcu: goto label_23c1dc;
        case 0x23c1e0u: goto label_23c1e0;
        case 0x23c1e4u: goto label_23c1e4;
        case 0x23c1e8u: goto label_23c1e8;
        case 0x23c1ecu: goto label_23c1ec;
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        default: return;
    }

label_23bb90:
    if (ctx->pc == 0x23BB90u) {
        ctx->pc = 0x23BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB8Cu;
        // 0x23bb90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB94u;
        goto label_23bb94;
    }
    ctx->pc = 0x23BB8Cu;
    {
        const bool branch_taken_0x23bb8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB8Cu;
        // 0x23bb90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb8c) {
            ctx->pc = 0x23BBE0u;
            goto label_23bbe0;
        }
    }
    ctx->pc = 0x23BB94u;
label_23bb94:
    // 0x23bb94: 0x3c0f809  jalr        $fp
label_23bb98:
    if (ctx->pc == 0x23BB98u) {
        ctx->pc = 0x23BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB94u;
        // 0x23bb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB9Cu;
        goto label_23bb9c;
    }
    ctx->pc = 0x23BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB9Cu);
        ctx->pc = 0x23BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB94u;
        // 0x23bb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB94u, 0x23BB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB9Cu;
label_23bb9c:
    // 0x23bb9c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bba0:
    // 0x23bba0: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x23bba0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_23bba4:
    // 0x23bba4: 0x1000000f  b           . + 4 + (0xF << 2)
label_23bba8:
    if (ctx->pc == 0x23BBA8u) {
        ctx->pc = 0x23BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBA4u;
        // 0x23bba8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBACu;
        goto label_23bbac;
    }
    ctx->pc = 0x23BBA4u;
    {
        const bool branch_taken_0x23bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBA4u;
        // 0x23bba8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bba4) {
            ctx->pc = 0x23BBE4u;
            goto label_23bbe4;
        }
    }
    ctx->pc = 0x23BBACu;
label_23bbac:
    // 0x23bbac: 0x0  nop
    ctx->pc = 0x23bbacu;
    // NOP
label_23bbb0:
    // 0x23bbb0: 0x3c0f809  jalr        $fp
label_23bbb4:
    if (ctx->pc == 0x23BBB4u) {
        ctx->pc = 0x23BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBB0u;
        // 0x23bbb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBB8u;
        goto label_23bbb8;
    }
    ctx->pc = 0x23BBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BBB8u);
        ctx->pc = 0x23BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBB0u;
        // 0x23bbb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BBB0u, 0x23BBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BBB8u;
label_23bbb8:
    // 0x23bbb8: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_23bbbc:
    if (ctx->pc == 0x23BBBCu) {
        ctx->pc = 0x23BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBB8u;
        // 0x23bbbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBC0u;
        goto label_23bbc0;
    }
    ctx->pc = 0x23BBB8u;
    {
        const bool branch_taken_0x23bbb8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23bbb8) {
            ctx->pc = 0x23BBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BBB8u;
            // 0x23bbbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBE4u;
            goto label_23bbe4;
        }
    }
    ctx->pc = 0x23BBC0u;
label_23bbc0:
    // 0x23bbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bbc4:
    // 0x23bbc4: 0x3c0f809  jalr        $fp
label_23bbc8:
    if (ctx->pc == 0x23BBC8u) {
        ctx->pc = 0x23BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBC4u;
        // 0x23bbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBCCu;
        goto label_23bbcc;
    }
    ctx->pc = 0x23BBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BBCCu);
        ctx->pc = 0x23BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBC4u;
        // 0x23bbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BBC4u, 0x23BBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BBCCu;
label_23bbcc:
    // 0x23bbcc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bbd0:
    // 0x23bbd0: 0x222900a  movz        $s2, $s1, $v0
    ctx->pc = 0x23bbd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
label_23bbd4:
    // 0x23bbd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23bbd8:
    if (ctx->pc == 0x23BBD8u) {
        ctx->pc = 0x23BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBD4u;
        // 0x23bbd8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBDCu;
        goto label_23bbdc;
    }
    ctx->pc = 0x23BBD4u;
    {
        const bool branch_taken_0x23bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBD4u;
        // 0x23bbd8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbd4) {
            ctx->pc = 0x23BBE4u;
            goto label_23bbe4;
        }
    }
    ctx->pc = 0x23BBDCu;
label_23bbdc:
    // 0x23bbdc: 0x0  nop
    ctx->pc = 0x23bbdcu;
    // NOP
label_23bbe0:
    // 0x23bbe0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23bbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bbe4:
    // 0x23bbe4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bbe8:
    // 0x23bbe8: 0x2b78823  subu        $s1, $s5, $s7
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_23bbec:
    // 0x23bbec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bbf0:
    // 0x23bbf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23bbf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bbf4:
    // 0x23bbf4: 0x2a39023  subu        $s2, $s5, $v1
    ctx->pc = 0x23bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_23bbf8:
    // 0x23bbf8: 0x3c0f809  jalr        $fp
label_23bbfc:
    if (ctx->pc == 0x23BBFCu) {
        ctx->pc = 0x23BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBF8u;
        // 0x23bbfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC00u;
        goto label_23bc00;
    }
    ctx->pc = 0x23BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC00u);
        ctx->pc = 0x23BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBF8u;
        // 0x23bbfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BBF8u, 0x23BC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC00u;
label_23bc00:
    // 0x23bc00: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_23bc04:
    if (ctx->pc == 0x23BC04u) {
        ctx->pc = 0x23BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC00u;
        // 0x23bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC08u;
        goto label_23bc08;
    }
    ctx->pc = 0x23BC00u;
    {
        const bool branch_taken_0x23bc00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC00u;
        // 0x23bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc00) {
            ctx->pc = 0x23BC30u;
            goto label_23bc30;
        }
    }
    ctx->pc = 0x23BC08u;
label_23bc08:
    // 0x23bc08: 0x3c0f809  jalr        $fp
label_23bc0c:
    if (ctx->pc == 0x23BC0Cu) {
        ctx->pc = 0x23BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC08u;
        // 0x23bc0c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC10u;
        goto label_23bc10;
    }
    ctx->pc = 0x23BC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC10u);
        ctx->pc = 0x23BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC08u;
        // 0x23bc0c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC08u, 0x23BC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC10u;
label_23bc10:
    // 0x23bc10: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_23bc14:
    if (ctx->pc == 0x23BC14u) {
        ctx->pc = 0x23BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC10u;
        // 0x23bc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC18u;
        goto label_23bc18;
    }
    ctx->pc = 0x23BC10u;
    {
        const bool branch_taken_0x23bc10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC10u;
        // 0x23bc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc10) {
            ctx->pc = 0x23BC60u;
            goto label_23bc60;
        }
    }
    ctx->pc = 0x23BC18u;
label_23bc18:
    // 0x23bc18: 0x3c0f809  jalr        $fp
label_23bc1c:
    if (ctx->pc == 0x23BC1Cu) {
        ctx->pc = 0x23BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC18u;
        // 0x23bc1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC20u;
        goto label_23bc20;
    }
    ctx->pc = 0x23BC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC20u);
        ctx->pc = 0x23BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC18u;
        // 0x23bc1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC18u, 0x23BC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC20u;
label_23bc20:
    // 0x23bc20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23bc24:
    // 0x23bc24: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bc28:
    // 0x23bc28: 0x1000000e  b           . + 4 + (0xE << 2)
label_23bc2c:
    if (ctx->pc == 0x23BC2Cu) {
        ctx->pc = 0x23BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC28u;
        // 0x23bc2c: 0x242200a  movz        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC30u;
        goto label_23bc30;
    }
    ctx->pc = 0x23BC28u;
    {
        const bool branch_taken_0x23bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC28u;
        // 0x23bc2c: 0x242200a  movz        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc28) {
            ctx->pc = 0x23BC64u;
            goto label_23bc64;
        }
    }
    ctx->pc = 0x23BC30u;
label_23bc30:
    // 0x23bc30: 0x3c0f809  jalr        $fp
label_23bc34:
    if (ctx->pc == 0x23BC34u) {
        ctx->pc = 0x23BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC30u;
        // 0x23bc34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC38u;
        goto label_23bc38;
    }
    ctx->pc = 0x23BC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC38u);
        ctx->pc = 0x23BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC30u;
        // 0x23bc34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC30u, 0x23BC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC38u;
label_23bc38:
    // 0x23bc38: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_23bc3c:
    if (ctx->pc == 0x23BC3Cu) {
        ctx->pc = 0x23BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC38u;
        // 0x23bc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC40u;
        goto label_23bc40;
    }
    ctx->pc = 0x23BC38u;
    {
        const bool branch_taken_0x23bc38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC38u;
        // 0x23bc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc38) {
            ctx->pc = 0x23BC64u;
            goto label_23bc64;
        }
    }
    ctx->pc = 0x23BC40u;
label_23bc40:
    // 0x23bc40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bc44:
    // 0x23bc44: 0x3c0f809  jalr        $fp
label_23bc48:
    if (ctx->pc == 0x23BC48u) {
        ctx->pc = 0x23BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC44u;
        // 0x23bc48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC4Cu;
        goto label_23bc4c;
    }
    ctx->pc = 0x23BC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC4Cu);
        ctx->pc = 0x23BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC44u;
        // 0x23bc48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC44u, 0x23BC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC4Cu;
label_23bc4c:
    // 0x23bc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bc50:
    // 0x23bc50: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bc54:
    // 0x23bc54: 0x10000003  b           . + 4 + (0x3 << 2)
label_23bc58:
    if (ctx->pc == 0x23BC58u) {
        ctx->pc = 0x23BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC54u;
        // 0x23bc58: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC5Cu;
        goto label_23bc5c;
    }
    ctx->pc = 0x23BC54u;
    {
        const bool branch_taken_0x23bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC54u;
        // 0x23bc58: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc54) {
            ctx->pc = 0x23BC64u;
            goto label_23bc64;
        }
    }
    ctx->pc = 0x23BC5Cu;
label_23bc5c:
    // 0x23bc5c: 0x0  nop
    ctx->pc = 0x23bc5cu;
    // NOP
label_23bc60:
    // 0x23bc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bc64:
    // 0x23bc64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23bc64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23bc68:
    // 0x23bc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bc6c:
    // 0x23bc6c: 0x3c0f809  jalr        $fp
label_23bc70:
    if (ctx->pc == 0x23BC70u) {
        ctx->pc = 0x23BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC6Cu;
        // 0x23bc70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC74u;
        goto label_23bc74;
    }
    ctx->pc = 0x23BC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC74u);
        ctx->pc = 0x23BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC6Cu;
        // 0x23bc70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC6Cu, 0x23BC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC74u;
label_23bc74:
    // 0x23bc74: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_23bc78:
    if (ctx->pc == 0x23BC78u) {
        ctx->pc = 0x23BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC74u;
        // 0x23bc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC7Cu;
        goto label_23bc7c;
    }
    ctx->pc = 0x23BC74u;
    {
        const bool branch_taken_0x23bc74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC74u;
        // 0x23bc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc74) {
            ctx->pc = 0x23BCA8u;
            goto label_23bca8;
        }
    }
    ctx->pc = 0x23BC7Cu;
label_23bc7c:
    // 0x23bc7c: 0x3c0f809  jalr        $fp
label_23bc80:
    if (ctx->pc == 0x23BC80u) {
        ctx->pc = 0x23BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC7Cu;
        // 0x23bc80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC84u;
        goto label_23bc84;
    }
    ctx->pc = 0x23BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC84u);
        ctx->pc = 0x23BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC7Cu;
        // 0x23bc80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC7Cu, 0x23BC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC84u;
label_23bc84:
    // 0x23bc84: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_23bc88:
    if (ctx->pc == 0x23BC88u) {
        ctx->pc = 0x23BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC84u;
        // 0x23bc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC8Cu;
        goto label_23bc8c;
    }
    ctx->pc = 0x23BC84u;
    {
        const bool branch_taken_0x23bc84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC84u;
        // 0x23bc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc84) {
            ctx->pc = 0x23BCD8u;
            goto label_23bcd8;
        }
    }
    ctx->pc = 0x23BC8Cu;
label_23bc8c:
    // 0x23bc8c: 0x3c0f809  jalr        $fp
label_23bc90:
    if (ctx->pc == 0x23BC90u) {
        ctx->pc = 0x23BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC8Cu;
        // 0x23bc90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BC94u;
        goto label_23bc94;
    }
    ctx->pc = 0x23BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BC94u);
        ctx->pc = 0x23BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC8Cu;
        // 0x23bc90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC8Cu, 0x23BC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC94u;
label_23bc94:
    // 0x23bc94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23bc98:
    // 0x23bc98: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bc9c:
    // 0x23bc9c: 0x1000000f  b           . + 4 + (0xF << 2)
label_23bca0:
    if (ctx->pc == 0x23BCA0u) {
        ctx->pc = 0x23BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC9Cu;
        // 0x23bca0: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCA4u;
        goto label_23bca4;
    }
    ctx->pc = 0x23BC9Cu;
    {
        const bool branch_taken_0x23bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC9Cu;
        // 0x23bca0: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc9c) {
            ctx->pc = 0x23BCDCu;
            goto label_23bcdc;
        }
    }
    ctx->pc = 0x23BCA4u;
label_23bca4:
    // 0x23bca4: 0x0  nop
    ctx->pc = 0x23bca4u;
    // NOP
label_23bca8:
    // 0x23bca8: 0x3c0f809  jalr        $fp
label_23bcac:
    if (ctx->pc == 0x23BCACu) {
        ctx->pc = 0x23BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCA8u;
        // 0x23bcac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCB0u;
        goto label_23bcb0;
    }
    ctx->pc = 0x23BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BCB0u);
        ctx->pc = 0x23BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCA8u;
        // 0x23bcac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCA8u, 0x23BCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BCB0u;
label_23bcb0:
    // 0x23bcb0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_23bcb4:
    if (ctx->pc == 0x23BCB4u) {
        ctx->pc = 0x23BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB0u;
        // 0x23bcb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCB8u;
        goto label_23bcb8;
    }
    ctx->pc = 0x23BCB0u;
    {
        const bool branch_taken_0x23bcb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB0u;
        // 0x23bcb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcb0) {
            ctx->pc = 0x23BCDCu;
            goto label_23bcdc;
        }
    }
    ctx->pc = 0x23BCB8u;
label_23bcb8:
    // 0x23bcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bcbc:
    // 0x23bcbc: 0x3c0f809  jalr        $fp
label_23bcc0:
    if (ctx->pc == 0x23BCC0u) {
        ctx->pc = 0x23BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCBCu;
        // 0x23bcc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCC4u;
        goto label_23bcc4;
    }
    ctx->pc = 0x23BCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BCC4u);
        ctx->pc = 0x23BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCBCu;
        // 0x23bcc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCBCu, 0x23BCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BCC4u;
label_23bcc4:
    // 0x23bcc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bcc8:
    // 0x23bcc8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bccc:
    // 0x23bccc: 0x10000003  b           . + 4 + (0x3 << 2)
label_23bcd0:
    if (ctx->pc == 0x23BCD0u) {
        ctx->pc = 0x23BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCCCu;
        // 0x23bcd0: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCD4u;
        goto label_23bcd4;
    }
    ctx->pc = 0x23BCCCu;
    {
        const bool branch_taken_0x23bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCCCu;
        // 0x23bcd0: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bccc) {
            ctx->pc = 0x23BCDCu;
            goto label_23bcdc;
        }
    }
    ctx->pc = 0x23BCD4u;
label_23bcd4:
    // 0x23bcd4: 0x0  nop
    ctx->pc = 0x23bcd4u;
    // NOP
label_23bcd8:
    // 0x23bcd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bcdc:
    // 0x23bcdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_23bce0:
    if (ctx->pc == 0x23BCE0u) {
        ctx->pc = 0x23BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCDCu;
        // 0x23bce0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCE4u;
        goto label_23bce4;
    }
    ctx->pc = 0x23BCDCu;
    {
        const bool branch_taken_0x23bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCDCu;
        // 0x23bce0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcdc) {
            ctx->pc = 0x23BCF4u;
            goto label_23bcf4;
        }
    }
    ctx->pc = 0x23BCE4u;
label_23bce4:
    // 0x23bce4: 0x0  nop
    ctx->pc = 0x23bce4u;
    // NOP
label_23bce8:
    // 0x23bce8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23bcec:
    // 0x23bcec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23bcf0:
    // 0x23bcf0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x23bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_23bcf4:
    // 0x23bcf4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bcf8:
    // 0x23bcf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23bcfc:
    if (ctx->pc == 0x23BCFCu) {
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD00u;
        goto label_23bd00;
    }
    ctx->pc = 0x23BCF8u;
    {
        const bool branch_taken_0x23bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcf8) {
            ctx->pc = 0x23BD18u;
            goto label_23bd18;
        }
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x23bd00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_23bd04:
    // 0x23bd04: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x23bd04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_23bd08:
    // 0x23bd08: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x23bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
label_23bd0c:
    // 0x23bd0c: 0x10000020  b           . + 4 + (0x20 << 2)
label_23bd10:
    if (ctx->pc == 0x23BD10u) {
        ctx->pc = 0x23BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD0Cu;
        // 0x23bd10: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD14u;
        goto label_23bd14;
    }
    ctx->pc = 0x23BD0Cu;
    {
        const bool branch_taken_0x23bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD0Cu;
        // 0x23bd10: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd0c) {
            ctx->pc = 0x23BD90u;
            goto label_23bd90;
        }
    }
    ctx->pc = 0x23BD14u;
label_23bd14:
    // 0x23bd14: 0x0  nop
    ctx->pc = 0x23bd14u;
    // NOP
label_23bd18:
    // 0x23bd18: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x23bd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23bd1c:
    // 0x23bd1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23bd20:
    if (ctx->pc == 0x23BD20u) {
        ctx->pc = 0x23BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD1Cu;
        // 0x23bd20: 0x14103c  dsll32      $v0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD24u;
        goto label_23bd24;
    }
    ctx->pc = 0x23BD1Cu;
    {
        const bool branch_taken_0x23bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD1Cu;
        // 0x23bd20: 0x14103c  dsll32      $v0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd1c) {
            ctx->pc = 0x23BD60u;
            goto label_23bd60;
        }
    }
    ctx->pc = 0x23BD24u;
label_23bd24:
    // 0x23bd24: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23bd28:
    // 0x23bd28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bd2c:
    // 0x23bd2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23bd30:
    // 0x23bd30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23bd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bd34:
    // 0x23bd34: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x23bd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_23bd38:
    // 0x23bd38: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x23bd38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23bd3c:
    // 0x23bd3c: 0x64e7ffff  daddiu      $a3, $a3, -0x1
    ctx->pc = 0x23bd3cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
label_23bd40:
    // 0x23bd40: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23bd40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23bd44:
    // 0x23bd44: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x23bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_23bd48:
    // 0x23bd48: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23bd4c:
    // 0x23bd4c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x23bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_23bd50:
    // 0x23bd50: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
label_23bd54:
    if (ctx->pc == 0x23BD54u) {
        ctx->pc = 0x23BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD50u;
        // 0x23bd54: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD58u;
        goto label_23bd58;
    }
    ctx->pc = 0x23BD50u;
    {
        const bool branch_taken_0x23bd50 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x23BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD50u;
        // 0x23bd54: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd50) {
            ctx->pc = 0x23BD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD58u;
label_23bd58:
    // 0x23bd58: 0x1000000e  b           . + 4 + (0xE << 2)
label_23bd5c:
    if (ctx->pc == 0x23BD5Cu) {
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD60u;
        goto label_23bd60;
    }
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD94u;
            goto label_23bd94;
        }
    }
    ctx->pc = 0x23BD60u;
label_23bd60:
    // 0x23bd60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bd64:
    // 0x23bd64: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23bd64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23bd68:
    // 0x23bd68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bd6c:
    // 0x23bd6c: 0x0  nop
    ctx->pc = 0x23bd6cu;
    // NOP
label_23bd70:
    // 0x23bd70: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x23bd70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23bd74:
    // 0x23bd74: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23bd74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23bd78:
    // 0x23bd78: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23bd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23bd7c:
    // 0x23bd7c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23bd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_23bd80:
    // 0x23bd80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23bd84:
    // 0x23bd84: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23bd88:
    // 0x23bd88: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23bd8c:
    if (ctx->pc == 0x23BD8Cu) {
        ctx->pc = 0x23BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD88u;
        // 0x23bd8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD90u;
        goto label_23bd90;
    }
    ctx->pc = 0x23BD88u;
    {
        const bool branch_taken_0x23bd88 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD88u;
        // 0x23bd8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd88) {
            ctx->pc = 0x23BD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bd70;
        }
    }
    ctx->pc = 0x23BD90u;
label_23bd90:
    // 0x23bd90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23bd94:
    // 0x23bd94: 0x2d48821  addu        $s1, $s6, $s4
    ctx->pc = 0x23bd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_23bd98:
    // 0x23bd98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bd9c:
    // 0x23bd9c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x23bd9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bda0:
    // 0x23bda0: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x23bda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23bda4:
    // 0x23bda4: 0x14483c  dsll32      $t1, $s4, 0
    ctx->pc = 0x23bda4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 0));
label_23bda8:
    // 0x23bda8: 0x286a0002  slti        $t2, $v1, 0x2
    ctx->pc = 0x23bda8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23bdac:
    // 0x23bdac: 0xafb1001c  sw          $s1, 0x1C($sp)
    ctx->pc = 0x23bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
label_23bdb0:
    // 0x23bdb0: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23bdb4:
    // 0x23bdb4: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23bdb8:
    // 0x23bdb8: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x23bdb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
label_23bdbc:
    // 0x23bdbc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_23bdc0:
    if (ctx->pc == 0x23BDC0u) {
        ctx->pc = 0x23BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDBCu;
        // 0x23bdc0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDC4u;
        goto label_23bdc4;
    }
    ctx->pc = 0x23BDBCu;
    {
        const bool branch_taken_0x23bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDBCu;
        // 0x23bdc0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdbc) {
            ctx->pc = 0x23BE68u;
            goto label_23be68;
        }
    }
    ctx->pc = 0x23BDC4u;
label_23bdc4:
    // 0x23bdc4: 0x0  nop
    ctx->pc = 0x23bdc4u;
    // NOP
label_23bdc8:
    // 0x23bdc8: 0x54a00027  bnel        $a1, $zero, . + 4 + (0x27 << 2)
label_23bdcc:
    if (ctx->pc == 0x23BDCCu) {
        ctx->pc = 0x23BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDC8u;
        // 0x23bdcc: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDD0u;
        goto label_23bdd0;
    }
    ctx->pc = 0x23BDC8u;
    {
        const bool branch_taken_0x23bdc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bdc8) {
            ctx->pc = 0x23BDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDC8u;
            // 0x23bdcc: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE68u;
            goto label_23be68;
        }
    }
    ctx->pc = 0x23BDD0u;
label_23bdd0:
    // 0x23bdd0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bdd4:
    // 0x23bdd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bdd8:
    // 0x23bdd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23bddc:
    if (ctx->pc == 0x23BDDCu) {
        ctx->pc = 0x23BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDD8u;
        // 0x23bddc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDE0u;
        goto label_23bde0;
    }
    ctx->pc = 0x23BDD8u;
    {
        const bool branch_taken_0x23bdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDD8u;
        // 0x23bddc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdd8) {
            ctx->pc = 0x23BDF8u;
            goto label_23bdf8;
        }
    }
    ctx->pc = 0x23BDE0u;
label_23bde0:
    // 0x23bde0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x23bde0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_23bde4:
    // 0x23bde4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x23bde4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23bde8:
    // 0x23bde8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x23bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_23bdec:
    // 0x23bdec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23bdf0:
    if (ctx->pc == 0x23BDF0u) {
        ctx->pc = 0x23BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDECu;
        // 0x23bdf0: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDF4u;
        goto label_23bdf4;
    }
    ctx->pc = 0x23BDECu;
    {
        const bool branch_taken_0x23bdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDECu;
        // 0x23bdf0: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdec) {
            ctx->pc = 0x23BE60u;
            goto label_23be60;
        }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0x0  nop
    ctx->pc = 0x23bdf4u;
    // NOP
label_23bdf8:
    // 0x23bdf8: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_23bdfc:
    if (ctx->pc == 0x23BDFCu) {
        ctx->pc = 0x23BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF8u;
        // 0x23bdfc: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE00u;
        goto label_23be00;
    }
    ctx->pc = 0x23BDF8u;
    {
        const bool branch_taken_0x23bdf8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF8u;
        // 0x23bdfc: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdf8) {
            ctx->pc = 0x23BE30u;
            goto label_23be30;
        }
    }
    ctx->pc = 0x23BE00u;
label_23be00:
    // 0x23be00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23be00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23be04:
    // 0x23be04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23be08:
    // 0x23be08: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23be08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23be0c:
    // 0x23be0c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23be0cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23be10:
    // 0x23be10: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23be10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23be14:
    // 0x23be14: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x23be14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_23be18:
    // 0x23be18: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23be1c:
    // 0x23be1c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x23be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_23be20:
    // 0x23be20: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23be24:
    if (ctx->pc == 0x23BE24u) {
        ctx->pc = 0x23BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE20u;
        // 0x23be24: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE28u;
        goto label_23be28;
    }
    ctx->pc = 0x23BE20u;
    {
        const bool branch_taken_0x23be20 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE20u;
        // 0x23be24: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be20) {
            ctx->pc = 0x23BE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be08;
        }
    }
    ctx->pc = 0x23BE28u;
label_23be28:
    // 0x23be28: 0x1000000e  b           . + 4 + (0xE << 2)
label_23be2c:
    if (ctx->pc == 0x23BE2Cu) {
        ctx->pc = 0x23BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE28u;
        // 0x23be2c: 0x2b4a821  addu        $s5, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE30u;
        goto label_23be30;
    }
    ctx->pc = 0x23BE28u;
    {
        const bool branch_taken_0x23be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE28u;
        // 0x23be2c: 0x2b4a821  addu        $s5, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be28) {
            ctx->pc = 0x23BE64u;
            goto label_23be64;
        }
    }
    ctx->pc = 0x23BE30u;
label_23be30:
    // 0x23be30: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x23be30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
label_23be34:
    // 0x23be34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23be34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23be38:
    // 0x23be38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23be38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23be3c:
    // 0x23be3c: 0x0  nop
    ctx->pc = 0x23be3cu;
    // NOP
label_23be40:
    // 0x23be40: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23be44:
    // 0x23be44: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23be44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23be48:
    // 0x23be48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23be48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23be4c:
    // 0x23be4c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23be4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23be50:
    // 0x23be50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23be54:
    // 0x23be54: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23be54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23be58:
    // 0x23be58: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23be5c:
    if (ctx->pc == 0x23BE5Cu) {
        ctx->pc = 0x23BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE58u;
        // 0x23be5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE60u;
        goto label_23be60;
    }
    ctx->pc = 0x23BE58u;
    {
        const bool branch_taken_0x23be58 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE58u;
        // 0x23be5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be58) {
            ctx->pc = 0x23BE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be40;
        }
    }
    ctx->pc = 0x23BE60u;
label_23be60:
    // 0x23be60: 0x2b4a821  addu        $s5, $s5, $s4
    ctx->pc = 0x23be60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_23be64:
    // 0x23be64: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_23be68:
    // 0x23be68: 0x251802b  sltu        $s0, $s2, $s1
    ctx->pc = 0x23be68u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23be6c:
    // 0x23be6c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_23be70:
    if (ctx->pc == 0x23BE70u) {
        ctx->pc = 0x23BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE6Cu;
        // 0x23be70: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE74u;
        goto label_23be74;
    }
    ctx->pc = 0x23BE6Cu;
    {
        const bool branch_taken_0x23be6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE6Cu;
        // 0x23be70: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be6c) {
            ctx->pc = 0x23BEA4u;
            goto label_23bea4;
        }
    }
    ctx->pc = 0x23BE74u;
label_23be74:
    // 0x23be74: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x23be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_23be78:
    // 0x23be78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23be78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23be7c:
    // 0x23be7c: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x23be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_23be80:
    // 0x23be80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23be84:
    // 0x23be84: 0x3c0f809  jalr        $fp
label_23be88:
    if (ctx->pc == 0x23BE88u) {
        ctx->pc = 0x23BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE84u;
        // 0x23be88: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE8Cu;
        goto label_23be8c;
    }
    ctx->pc = 0x23BE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BE8Cu);
        ctx->pc = 0x23BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE84u;
        // 0x23be88: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE84u, 0x23BE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BE8Cu;
label_23be8c:
    // 0x23be8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23be8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23be90:
    // 0x23be90: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x23be90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23be94:
    // 0x23be94: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x23be94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23be98:
    // 0x23be98: 0x18a0ffcb  blez        $a1, . + 4 + (-0x35 << 2)
label_23be9c:
    if (ctx->pc == 0x23BE9Cu) {
        ctx->pc = 0x23BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE98u;
        // 0x23be9c: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEA0u;
        goto label_23bea0;
    }
    ctx->pc = 0x23BE98u;
    {
        const bool branch_taken_0x23be98 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE98u;
        // 0x23be9c: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be98) {
            ctx->pc = 0x23BDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bdc8;
        }
    }
    ctx->pc = 0x23BEA0u;
label_23bea0:
    // 0x23bea0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bea4:
    // 0x23bea4: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23bea8:
    // 0x23bea8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23bea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_23beac:
    // 0x23beac: 0x14b83c  dsll32      $s7, $s4, 0
    ctx->pc = 0x23beacu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) << (32 + 0));
label_23beb0:
    // 0x23beb0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_23beb4:
    if (ctx->pc == 0x23BEB4u) {
        ctx->pc = 0x23BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB0u;
        // 0x23beb4: 0x28680002  slti        $t0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEB8u;
        goto label_23beb8;
    }
    ctx->pc = 0x23BEB0u;
    {
        const bool branch_taken_0x23beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB0u;
        // 0x23beb4: 0x28680002  slti        $t0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23beb0) {
            ctx->pc = 0x23BF5Cu;
            goto label_23bf5c;
        }
    }
    ctx->pc = 0x23BEB8u;
label_23beb8:
    // 0x23beb8: 0x54a00027  bnel        $a1, $zero, . + 4 + (0x27 << 2)
label_23bebc:
    if (ctx->pc == 0x23BEBCu) {
        ctx->pc = 0x23BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB8u;
        // 0x23bebc: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEC0u;
        goto label_23bec0;
    }
    ctx->pc = 0x23BEB8u;
    {
        const bool branch_taken_0x23beb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23beb8) {
            ctx->pc = 0x23BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BEB8u;
            // 0x23bebc: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF58u;
            goto label_23bf58;
        }
    }
    ctx->pc = 0x23BEC0u;
label_23bec0:
    // 0x23bec0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bec4:
    // 0x23bec4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bec8:
    // 0x23bec8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23becc:
    if (ctx->pc == 0x23BECCu) {
        ctx->pc = 0x23BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEC8u;
        // 0x23becc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BED0u;
        goto label_23bed0;
    }
    ctx->pc = 0x23BEC8u;
    {
        const bool branch_taken_0x23bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEC8u;
        // 0x23becc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bec8) {
            ctx->pc = 0x23BEE8u;
            goto label_23bee8;
        }
    }
    ctx->pc = 0x23BED0u;
label_23bed0:
    // 0x23bed0: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x23bed0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_23bed4:
    // 0x23bed4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x23bed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_23bed8:
    // 0x23bed8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x23bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_23bedc:
    // 0x23bedc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23bee0:
    if (ctx->pc == 0x23BEE0u) {
        ctx->pc = 0x23BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEDCu;
        // 0x23bee0: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEE4u;
        goto label_23bee4;
    }
    ctx->pc = 0x23BEDCu;
    {
        const bool branch_taken_0x23bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEDCu;
        // 0x23bee0: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bedc) {
            ctx->pc = 0x23BF50u;
            goto label_23bf50;
        }
    }
    ctx->pc = 0x23BEE4u;
label_23bee4:
    // 0x23bee4: 0x0  nop
    ctx->pc = 0x23bee4u;
    // NOP
label_23bee8:
    // 0x23bee8: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_23beec:
    if (ctx->pc == 0x23BEECu) {
        ctx->pc = 0x23BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE8u;
        // 0x23beec: 0x7303e  dsrl32      $a2, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEF0u;
        goto label_23bef0;
    }
    ctx->pc = 0x23BEE8u;
    {
        const bool branch_taken_0x23bee8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE8u;
        // 0x23beec: 0x7303e  dsrl32      $a2, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bee8) {
            ctx->pc = 0x23BF20u;
            goto label_23bf20;
        }
    }
    ctx->pc = 0x23BEF0u;
label_23bef0:
    // 0x23bef0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23bef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bef4:
    // 0x23bef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bef8:
    // 0x23bef8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23bef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23befc:
    // 0x23befc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23befcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23bf00:
    // 0x23bf00: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23bf00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23bf04:
    // 0x23bf04: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x23bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_23bf08:
    // 0x23bf08: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23bf0c:
    // 0x23bf0c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x23bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_23bf10:
    // 0x23bf10: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23bf14:
    if (ctx->pc == 0x23BF14u) {
        ctx->pc = 0x23BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF10u;
        // 0x23bf14: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF18u;
        goto label_23bf18;
    }
    ctx->pc = 0x23BF10u;
    {
        const bool branch_taken_0x23bf10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF10u;
        // 0x23bf14: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf10) {
            ctx->pc = 0x23BEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bef8;
        }
    }
    ctx->pc = 0x23BF18u;
label_23bf18:
    // 0x23bf18: 0x1000000e  b           . + 4 + (0xE << 2)
label_23bf1c:
    if (ctx->pc == 0x23BF1Cu) {
        ctx->pc = 0x23BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF18u;
        // 0x23bf1c: 0x2749823  subu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF20u;
        goto label_23bf20;
    }
    ctx->pc = 0x23BF18u;
    {
        const bool branch_taken_0x23bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF18u;
        // 0x23bf1c: 0x2749823  subu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf18) {
            ctx->pc = 0x23BF54u;
            goto label_23bf54;
        }
    }
    ctx->pc = 0x23BF20u;
label_23bf20:
    // 0x23bf20: 0x17303e  dsrl32      $a2, $s7, 0
    ctx->pc = 0x23bf20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 0));
label_23bf24:
    // 0x23bf24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23bf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bf28:
    // 0x23bf28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bf2c:
    // 0x23bf2c: 0x0  nop
    ctx->pc = 0x23bf2cu;
    // NOP
label_23bf30:
    // 0x23bf30: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x23bf30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23bf34:
    // 0x23bf34: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23bf34u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23bf38:
    // 0x23bf38: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23bf38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23bf3c:
    // 0x23bf3c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23bf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23bf40:
    // 0x23bf40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23bf44:
    // 0x23bf44: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23bf44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23bf48:
    // 0x23bf48: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23bf4c:
    if (ctx->pc == 0x23BF4Cu) {
        ctx->pc = 0x23BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF48u;
        // 0x23bf4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF50u;
        goto label_23bf50;
    }
    ctx->pc = 0x23BF48u;
    {
        const bool branch_taken_0x23bf48 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF48u;
        // 0x23bf4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf48) {
            ctx->pc = 0x23BF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BF50u;
label_23bf50:
    // 0x23bf50: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23bf54:
    // 0x23bf54: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_23bf58:
    // 0x23bf58: 0x251802b  sltu        $s0, $s2, $s1
    ctx->pc = 0x23bf58u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23bf5c:
    // 0x23bf5c: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
label_23bf60:
    if (ctx->pc == 0x23BF60u) {
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF64u;
        goto label_23bf64;
    }
    ctx->pc = 0x23BF5Cu;
    {
        const bool branch_taken_0x23bf5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf5c) {
            ctx->pc = 0x23C040u;
            goto label_23c040;
        }
    }
    ctx->pc = 0x23BF64u;
label_23bf64:
    // 0x23bf64: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x23bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_23bf68:
    // 0x23bf68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bf6c:
    // 0x23bf6c: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x23bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_23bf70:
    // 0x23bf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bf74:
    // 0x23bf74: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x23bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_23bf78:
    // 0x23bf78: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x23bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_23bf7c:
    // 0x23bf7c: 0x3c0f809  jalr        $fp
label_23bf80:
    if (ctx->pc == 0x23BF80u) {
        ctx->pc = 0x23BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF7Cu;
        // 0x23bf80: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF84u;
        goto label_23bf84;
    }
    ctx->pc = 0x23BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BF84u);
        ctx->pc = 0x23BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF7Cu;
        // 0x23bf80: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF7Cu, 0x23BF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BF84u;
label_23bf84:
    // 0x23bf84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23bf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bf88:
    // 0x23bf88: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x23bf88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23bf8c:
    // 0x23bf8c: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x23bf8cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23bf90:
    // 0x23bf90: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x23bf90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23bf94:
    // 0x23bf94: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x23bf94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23bf98:
    // 0x23bf98: 0x4a1ffc7  bgez        $a1, . + 4 + (-0x39 << 2)
label_23bf9c:
    if (ctx->pc == 0x23BF9Cu) {
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFA0u;
        goto label_23bfa0;
    }
    ctx->pc = 0x23BF98u;
    {
        const bool branch_taken_0x23bf98 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf98) {
            ctx->pc = 0x23BEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23beb8;
        }
    }
    ctx->pc = 0x23BFA0u;
label_23bfa0:
    // 0x23bfa0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23bfa4:
    // 0x23bfa4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_23bfa8:
    if (ctx->pc == 0x23BFA8u) {
        ctx->pc = 0x23BFACu;
        goto label_23bfac;
    }
    ctx->pc = 0x23BFA4u;
    {
        const bool branch_taken_0x23bfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bfa4) {
            ctx->pc = 0x23BFC0u;
            goto label_23bfc0;
        }
    }
    ctx->pc = 0x23BFACu;
label_23bfac:
    // 0x23bfac: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x23bfacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23bfb0:
    // 0x23bfb0: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x23bfb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_23bfb4:
    // 0x23bfb4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x23bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_23bfb8:
    // 0x23bfb8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_23bfbc:
    if (ctx->pc == 0x23BFBCu) {
        ctx->pc = 0x23BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFB8u;
        // 0x23bfbc: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFC0u;
        goto label_23bfc0;
    }
    ctx->pc = 0x23BFB8u;
    {
        const bool branch_taken_0x23bfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFB8u;
        // 0x23bfbc: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfb8) {
            ctx->pc = 0x23C028u;
            goto label_23c028;
        }
    }
    ctx->pc = 0x23BFC0u;
label_23bfc0:
    // 0x23bfc0: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_23bfc4:
    if (ctx->pc == 0x23BFC4u) {
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFC8u;
        goto label_23bfc8;
    }
    ctx->pc = 0x23BFC0u;
    {
        const bool branch_taken_0x23bfc0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc0) {
            ctx->pc = 0x23BFF8u;
            goto label_23bff8;
        }
    }
    ctx->pc = 0x23BFC8u;
label_23bfc8:
    // 0x23bfc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bfcc:
    // 0x23bfcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bfd0:
    // 0x23bfd0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23bfd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23bfd4:
    // 0x23bfd4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23bfd4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23bfd8:
    // 0x23bfd8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23bfd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23bfdc:
    // 0x23bfdc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x23bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_23bfe0:
    // 0x23bfe0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23bfe4:
    // 0x23bfe4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x23bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_23bfe8:
    // 0x23bfe8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23bfec:
    if (ctx->pc == 0x23BFECu) {
        ctx->pc = 0x23BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFE8u;
        // 0x23bfec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFF0u;
        goto label_23bff0;
    }
    ctx->pc = 0x23BFE8u;
    {
        const bool branch_taken_0x23bfe8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFE8u;
        // 0x23bfec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfe8) {
            ctx->pc = 0x23BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bfd0;
        }
    }
    ctx->pc = 0x23BFF0u;
label_23bff0:
    // 0x23bff0: 0x1000000e  b           . + 4 + (0xE << 2)
label_23bff4:
    if (ctx->pc == 0x23BFF4u) {
        ctx->pc = 0x23BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF0u;
        // 0x23bff4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFF8u;
        goto label_23bff8;
    }
    ctx->pc = 0x23BFF0u;
    {
        const bool branch_taken_0x23bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF0u;
        // 0x23bff4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bff0) {
            ctx->pc = 0x23C02Cu;
            goto label_23c02c;
        }
    }
    ctx->pc = 0x23BFF8u;
label_23bff8:
    // 0x23bff8: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x23bff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
label_23bffc:
    // 0x23bffc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c000:
    // 0x23c000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c004:
    // 0x23c004: 0x0  nop
    ctx->pc = 0x23c004u;
    // NOP
label_23c008:
    // 0x23c008: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x23c008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23c00c:
    // 0x23c00c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x23c00cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_23c010:
    // 0x23c010: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23c010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23c014:
    // 0x23c014: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23c014u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23c018:
    // 0x23c018: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23c01c:
    // 0x23c01c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23c01cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23c020:
    // 0x23c020: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_23c024:
    if (ctx->pc == 0x23C024u) {
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C028u;
        goto label_23c028;
    }
    ctx->pc = 0x23C020u;
    {
        const bool branch_taken_0x23c020 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c020) {
            ctx->pc = 0x23C008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c008;
        }
    }
    ctx->pc = 0x23C028u;
label_23c028:
    // 0x23c028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c02c:
    // 0x23c02c: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x23c02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_23c030:
    // 0x23c030: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x23c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_23c034:
    // 0x23c034: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
label_23c038:
    if (ctx->pc == 0x23C038u) {
        ctx->pc = 0x23C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C034u;
        // 0x23c038: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C03Cu;
        goto label_23c03c;
    }
    ctx->pc = 0x23C034u;
    {
        const bool branch_taken_0x23c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C034u;
        // 0x23c038: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c034) {
            ctx->pc = 0x23BE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be68;
        }
    }
    ctx->pc = 0x23C03Cu;
label_23c03c:
    // 0x23c03c: 0x0  nop
    ctx->pc = 0x23c03cu;
    // NOP
label_23c040:
    // 0x23c040: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_23c044:
    if (ctx->pc == 0x23C044u) {
        ctx->pc = 0x23C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C040u;
        // 0x23c044: 0x2352823  subu        $a1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C048u;
        goto label_23c048;
    }
    ctx->pc = 0x23C040u;
    {
        const bool branch_taken_0x23c040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C040u;
        // 0x23c044: 0x2352823  subu        $a1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c040) {
            ctx->pc = 0x23C150u;
            goto label_23c150;
        }
    }
    ctx->pc = 0x23C048u;
label_23c048:
    // 0x23c048: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c04c:
    // 0x23c04c: 0x8fb3001c  lw          $s3, 0x1C($sp)
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23c050:
    // 0x23c050: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x23c050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23c054:
    // 0x23c054: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x23c054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23c058:
    // 0x23c058: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23c058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23c05c:
    // 0x23c05c: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
label_23c060:
    if (ctx->pc == 0x23C060u) {
        ctx->pc = 0x23C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C05Cu;
        // 0x23c060: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C064u;
        goto label_23c064;
    }
    ctx->pc = 0x23C05Cu;
    {
        const bool branch_taken_0x23c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c05c) {
            ctx->pc = 0x23C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C05Cu;
            // 0x23c060: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E8u;
            goto label_23c2e8;
        }
    }
    ctx->pc = 0x23C064u;
label_23c064:
    // 0x23c064: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23c064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_23c068:
    // 0x23c068: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23c068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23c06c:
    // 0x23c06c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c070:
    // 0x23c070: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x23c070u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_23c074:
    // 0x23c074: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x23c074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_23c078:
    // 0x23c078: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x23c078u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c07c:
    // 0x23c07c: 0x10000023  b           . + 4 + (0x23 << 2)
label_23c080:
    if (ctx->pc == 0x23C080u) {
        ctx->pc = 0x23C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C07Cu;
        // 0x23c080: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C084u;
        goto label_23c084;
    }
    ctx->pc = 0x23C07Cu;
    {
        const bool branch_taken_0x23c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C07Cu;
        // 0x23c080: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c07c) {
            ctx->pc = 0x23C10Cu;
            goto label_23c10c;
        }
    }
    ctx->pc = 0x23C084u;
label_23c084:
    // 0x23c084: 0x0  nop
    ctx->pc = 0x23c084u;
    // NOP
label_23c088:
    // 0x23c088: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_23c08c:
    if (ctx->pc == 0x23C08Cu) {
        ctx->pc = 0x23C090u;
        goto label_23c090;
    }
    ctx->pc = 0x23C088u;
    {
        const bool branch_taken_0x23c088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c088) {
            ctx->pc = 0x23C0A8u;
            goto label_23c0a8;
        }
    }
    ctx->pc = 0x23C090u;
label_23c090:
    // 0x23c090: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x23c090u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_23c094:
    // 0x23c094: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x23c094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23c098:
    // 0x23c098: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x23c098u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_23c09c:
    // 0x23c09c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23c0a0:
    if (ctx->pc == 0x23C0A0u) {
        ctx->pc = 0x23C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C09Cu;
        // 0x23c0a0: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0A4u;
        goto label_23c0a4;
    }
    ctx->pc = 0x23C09Cu;
    {
        const bool branch_taken_0x23c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C09Cu;
        // 0x23c0a0: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c09c) {
            ctx->pc = 0x23C108u;
            goto label_23c108;
        }
    }
    ctx->pc = 0x23C0A4u;
label_23c0a4:
    // 0x23c0a4: 0x0  nop
    ctx->pc = 0x23c0a4u;
    // NOP
label_23c0a8:
    // 0x23c0a8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_23c0ac:
    if (ctx->pc == 0x23C0ACu) {
        ctx->pc = 0x23C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0A8u;
        // 0x23c0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0B0u;
        goto label_23c0b0;
    }
    ctx->pc = 0x23C0A8u;
    {
        const bool branch_taken_0x23c0a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0A8u;
        // 0x23c0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0a8) {
            ctx->pc = 0x23C0E0u;
            goto label_23c0e0;
        }
    }
    ctx->pc = 0x23C0B0u;
label_23c0b0:
    // 0x23c0b0: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x23c0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_23c0b4:
    // 0x23c0b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c0b8:
    // 0x23c0b8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23c0b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23c0bc:
    // 0x23c0bc: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c0bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c0c0:
    // 0x23c0c0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23c0c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23c0c4:
    // 0x23c0c4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23c0c8:
    // 0x23c0c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23c0cc:
    // 0x23c0cc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23c0d0:
    // 0x23c0d0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c0d4:
    if (ctx->pc == 0x23C0D4u) {
        ctx->pc = 0x23C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D0u;
        // 0x23c0d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0D8u;
        goto label_23c0d8;
    }
    ctx->pc = 0x23C0D0u;
    {
        const bool branch_taken_0x23c0d0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D0u;
        // 0x23c0d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0d0) {
            ctx->pc = 0x23C0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c0b8;
        }
    }
    ctx->pc = 0x23C0D8u;
label_23c0d8:
    // 0x23c0d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_23c0dc:
    if (ctx->pc == 0x23C0DCu) {
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0E0u;
        goto label_23c0e0;
    }
    ctx->pc = 0x23C0D8u;
    {
        const bool branch_taken_0x23c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0d8) {
            ctx->pc = 0x23C10Cu;
            goto label_23c10c;
        }
    }
    ctx->pc = 0x23C0E0u;
label_23c0e0:
    // 0x23c0e0: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x23c0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_23c0e4:
    // 0x23c0e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c0e8:
    // 0x23c0e8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23c0e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23c0ec:
    // 0x23c0ec: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c0ecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c0f0:
    // 0x23c0f0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23c0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23c0f4:
    // 0x23c0f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23c0f8:
    // 0x23c0f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23c0fc:
    // 0x23c0fc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23c0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23c100:
    // 0x23c100: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c104:
    if (ctx->pc == 0x23C104u) {
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C108u;
        goto label_23c108;
    }
    ctx->pc = 0x23C100u;
    {
        const bool branch_taken_0x23c100 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c100) {
            ctx->pc = 0x23C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c0e8;
        }
    }
    ctx->pc = 0x23C108u;
label_23c108:
    // 0x23c108: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23c108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c10c:
    // 0x23c10c: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x23c10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23c110:
    // 0x23c110: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23c114:
    if (ctx->pc == 0x23C114u) {
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C118u;
        goto label_23c118;
    }
    ctx->pc = 0x23C110u;
    {
        const bool branch_taken_0x23c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c110) {
            ctx->pc = 0x23C134u;
            goto label_23c134;
        }
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x2148823  subu        $s1, $s0, $s4
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_23c11c:
    // 0x23c11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c120:
    // 0x23c120: 0x3c0f809  jalr        $fp
label_23c124:
    if (ctx->pc == 0x23C124u) {
        ctx->pc = 0x23C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C120u;
        // 0x23c124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C128u;
        goto label_23c128;
    }
    ctx->pc = 0x23C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23C128u);
        ctx->pc = 0x23C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C120u;
        // 0x23c124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C120u, 0x23C128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C128u;
label_23c128:
    // 0x23c128: 0x5c40ffd7  bgtzl       $v0, . + 4 + (-0x29 << 2)
label_23c12c:
    if (ctx->pc == 0x23C12Cu) {
        ctx->pc = 0x23C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C128u;
        // 0x23c12c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C130u;
        goto label_23c130;
    }
    ctx->pc = 0x23C128u;
    {
        const bool branch_taken_0x23c128 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23c128) {
            ctx->pc = 0x23C12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C128u;
            // 0x23c12c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c088;
        }
    }
    ctx->pc = 0x23C130u;
label_23c130:
    // 0x23c130: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23c134:
    // 0x23c134: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c138:
    // 0x23c138: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23c138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23c13c:
    // 0x23c13c: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_23c140:
    if (ctx->pc == 0x23C140u) {
        ctx->pc = 0x23C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C13Cu;
        // 0x23c140: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C144u;
        goto label_23c144;
    }
    ctx->pc = 0x23C13Cu;
    {
        const bool branch_taken_0x23c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c13c) {
            ctx->pc = 0x23C140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C13Cu;
            // 0x23c140: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C10Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c10c;
        }
    }
    ctx->pc = 0x23C144u;
label_23c144:
    // 0x23c144: 0x10000068  b           . + 4 + (0x68 << 2)
label_23c148:
    if (ctx->pc == 0x23C148u) {
        ctx->pc = 0x23C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C144u;
        // 0x23c148: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C14Cu;
        goto label_23c14c;
    }
    ctx->pc = 0x23C144u;
    {
        const bool branch_taken_0x23c144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C144u;
        // 0x23c148: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c144) {
            ctx->pc = 0x23C2E8u;
            goto label_23c2e8;
        }
    }
    ctx->pc = 0x23C14Cu;
label_23c14c:
    // 0x23c14c: 0x0  nop
    ctx->pc = 0x23c14cu;
    // NOP
label_23c150:
    // 0x23c150: 0x2b61023  subu        $v0, $s5, $s6
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_23c154:
    // 0x23c154: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x23c154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23c158:
    // 0x23c158: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x23c158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c15c:
    // 0x23c15c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x23c15cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_23c160:
    // 0x23c160: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c164:
    // 0x23c164: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x23c164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23c168:
    // 0x23c168: 0x18a00021  blez        $a1, . + 4 + (0x21 << 2)
label_23c16c:
    if (ctx->pc == 0x23C16Cu) {
        ctx->pc = 0x23C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C168u;
        // 0x23c16c: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C170u;
        goto label_23c170;
    }
    ctx->pc = 0x23C168u;
    {
        const bool branch_taken_0x23c168 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C168u;
        // 0x23c16c: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c168) {
            ctx->pc = 0x23C1F0u;
            goto label_23c1f0;
        }
    }
    ctx->pc = 0x23C170u;
label_23c170:
    // 0x23c170: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c174:
    // 0x23c174: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x23c174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c178:
    // 0x23c178: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23c17c:
    if (ctx->pc == 0x23C17Cu) {
        ctx->pc = 0x23C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C178u;
        // 0x23c17c: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C180u;
        goto label_23c180;
    }
    ctx->pc = 0x23C178u;
    {
        const bool branch_taken_0x23c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C178u;
        // 0x23c17c: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c178) {
            ctx->pc = 0x23C1C0u;
            goto label_23c1c0;
        }
    }
    ctx->pc = 0x23C180u;
label_23c180:
    // 0x23c180: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_23c184:
    // 0x23c184: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c188:
    // 0x23c188: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c18c:
    // 0x23c18c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c190:
    // 0x23c190: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c194:
    // 0x23c194: 0x0  nop
    ctx->pc = 0x23c194u;
    // NOP
label_23c198:
    // 0x23c198: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23c198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23c19c:
    // 0x23c19c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c19cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c1a0:
    // 0x23c1a0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23c1a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23c1a4:
    // 0x23c1a4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23c1a8:
    // 0x23c1a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23c1ac:
    // 0x23c1ac: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23c1b0:
    // 0x23c1b0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c1b4:
    if (ctx->pc == 0x23C1B4u) {
        ctx->pc = 0x23C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B0u;
        // 0x23c1b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1B8u;
        goto label_23c1b8;
    }
    ctx->pc = 0x23C1B0u;
    {
        const bool branch_taken_0x23c1b0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B0u;
        // 0x23c1b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b0) {
            ctx->pc = 0x23C198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c198;
        }
    }
    ctx->pc = 0x23C1B8u;
label_23c1b8:
    // 0x23c1b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c1bc:
    if (ctx->pc == 0x23C1BCu) {
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0x2b31823  subu        $v1, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1C0u;
        goto label_23c1c0;
    }
    ctx->pc = 0x23C1B8u;
    {
        const bool branch_taken_0x23c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0x2b31823  subu        $v1, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b8) {
            ctx->pc = 0x23C1F4u;
            goto label_23c1f4;
        }
    }
    ctx->pc = 0x23C1C0u;
label_23c1c0:
    // 0x23c1c0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x23c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_23c1c4:
    // 0x23c1c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c1c8:
    // 0x23c1c8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c1cc:
    // 0x23c1cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c1d0:
    // 0x23c1d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23c1d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23c1d4:
    // 0x23c1d4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c1d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c1d8:
    // 0x23c1d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23c1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23c1dc:
    // 0x23c1dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23c1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23c1e0:
    // 0x23c1e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23c1e4:
    // 0x23c1e4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23c1e8:
    // 0x23c1e8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c1ec:
    if (ctx->pc == 0x23C1ECu) {
        ctx->pc = 0x23C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E8u;
        // 0x23c1ec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1F0u;
        goto label_23c1f0;
    }
    ctx->pc = 0x23C1E8u;
    {
        const bool branch_taken_0x23c1e8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E8u;
        // 0x23c1ec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1e8) {
            ctx->pc = 0x23C1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c1d0;
        }
    }
    ctx->pc = 0x23C1F0u;
label_23c1f0:
    // 0x23c1f0: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x23c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_23c1f4:
    // 0x23c1f4: 0x2728023  subu        $s0, $s3, $s2
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_23c1f8:
    // 0x23c1f8: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_23c1fc:
    // 0x23c1fc: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x23c1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c200:
    // 0x23c200: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x23c200u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_23c204:
    // 0x23c204: 0x58a00021  blezl       $a1, . + 4 + (0x21 << 2)
label_23c208:
    if (ctx->pc == 0x23C208u) {
        ctx->pc = 0x23C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C204u;
        // 0x23c208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C20Cu;
        goto label_23c20c;
    }
    ctx->pc = 0x23C204u;
    {
        const bool branch_taken_0x23c204 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x23c204) {
            ctx->pc = 0x23C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C204u;
            // 0x23c208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C28Cu;
            goto label_23c28c;
        }
    }
    ctx->pc = 0x23C20Cu;
label_23c20c:
    // 0x23c20c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c210:
    // 0x23c210: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c214:
    // 0x23c214: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23c218:
    if (ctx->pc == 0x23C218u) {
        ctx->pc = 0x23C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C214u;
        // 0x23c218: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C21Cu;
        goto label_23c21c;
    }
    ctx->pc = 0x23C214u;
    {
        const bool branch_taken_0x23c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C214u;
        // 0x23c218: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c214) {
            ctx->pc = 0x23C258u;
            goto label_23c258;
        }
    }
    ctx->pc = 0x23C21Cu;
label_23c21c:
    // 0x23c21c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x23c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_23c220:
    // 0x23c220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c224:
    // 0x23c224: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c228:
    // 0x23c228: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c22c:
    // 0x23c22c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c230:
    // 0x23c230: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23c230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23c234:
    // 0x23c234: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c234u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c238:
    // 0x23c238: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23c238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23c23c:
    // 0x23c23c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23c240:
    // 0x23c240: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23c244:
    // 0x23c244: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23c244u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23c248:
    // 0x23c248: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c24c:
    if (ctx->pc == 0x23C24Cu) {
        ctx->pc = 0x23C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C248u;
        // 0x23c24c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C250u;
        goto label_23c250;
    }
    ctx->pc = 0x23C248u;
    {
        const bool branch_taken_0x23c248 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C248u;
        // 0x23c24c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c248) {
            ctx->pc = 0x23C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c230;
        }
    }
    ctx->pc = 0x23C250u;
label_23c250:
    // 0x23c250: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c254:
    if (ctx->pc == 0x23C254u) {
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C258u;
        goto label_23c258;
    }
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23C28Cu;
            goto label_23c28c;
        }
    }
    ctx->pc = 0x23C258u;
label_23c258:
    // 0x23c258: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x23c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_23c25c:
    // 0x23c25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c260:
    // 0x23c260: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c264:
    // 0x23c264: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c268:
    // 0x23c268: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23c26c:
    // 0x23c26c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c26cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c270:
    // 0x23c270: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23c270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23c274:
    // 0x23c274: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23c274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23c278:
    // 0x23c278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23c27c:
    // 0x23c27c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23c280:
    // 0x23c280: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c284:
    if (ctx->pc == 0x23C284u) {
        ctx->pc = 0x23C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C280u;
        // 0x23c284: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C288u;
        goto label_23c288;
    }
    ctx->pc = 0x23C280u;
    {
        const bool branch_taken_0x23c280 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C280u;
        // 0x23c284: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c280) {
            ctx->pc = 0x23C268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c268;
        }
    }
    ctx->pc = 0x23C288u;
label_23c288:
    // 0x23c288: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23c288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23c28c:
    // 0x23c28c: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x23c28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c290:
    // 0x23c290: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_23c294:
    if (ctx->pc == 0x23C294u) {
        ctx->pc = 0x23C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C290u;
        // 0x23c294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C298u;
        goto label_23c298;
    }
    ctx->pc = 0x23C290u;
    {
        const bool branch_taken_0x23c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c290) {
            ctx->pc = 0x23C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C290u;
            // 0x23c294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2C0u;
            goto label_23c2c0;
        }
    }
    ctx->pc = 0x23C298u;
label_23c298:
    // 0x23c298: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x23c298u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_23c29c:
    // 0x23c29c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a0:
    // 0x23c2a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23c2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a4:
    // 0x23c2a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x23c2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a8:
    // 0x23c2a8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_23c2ac:
    if (ctx->pc == 0x23C2ACu) {
        ctx->pc = 0x23C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A8u;
        // 0x23c2ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2B0u;
        goto label_23c2b0;
    }
    ctx->pc = 0x23C2A8u;
    {
        const bool branch_taken_0x23c2a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2a8) {
            ctx->pc = 0x23C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2A8u;
            // 0x23c2ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2B0u;
            goto label_23c2b0;
        }
    }
    ctx->pc = 0x23C2B0u;
label_23c2b0:
    // 0x23c2b0: 0x2812  mflo        $a1
    ctx->pc = 0x23c2b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_23c2b4:
    // 0x23c2b4: 0xc08ee4a  jal         func_23B928
label_23c2b8:
    if (ctx->pc == 0x23C2B8u) {
        ctx->pc = 0x23C2BCu;
        goto label_23c2bc;
    }
    ctx->pc = 0x23C2B4u;
    SET_GPR_U32(ctx, 31, 0x23C2BCu);
    ctx->pc = 0x23B928u;
    { ctx->pc = 0x23b928; return; }
    ctx->pc = 0x23C2BCu;
label_23c2bc:
    // 0x23c2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c2c0:
    // 0x23c2c0: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x23c2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c2c4:
    // 0x23c2c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23c2c8:
    if (ctx->pc == 0x23C2C8u) {
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2CCu;
        goto label_23c2cc;
    }
    ctx->pc = 0x23C2C4u;
    {
        const bool branch_taken_0x23c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2c4) {
            ctx->pc = 0x23C2E8u;
            goto label_23c2e8;
        }
    }
    ctx->pc = 0x23C2CCu;
label_23c2cc:
    // 0x23c2cc: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x23c2ccu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_23c2d0:
    // 0x23c2d0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_23c2d4:
    if (ctx->pc == 0x23C2D4u) {
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D8u;
        goto label_23c2d8;
    }
    ctx->pc = 0x23C2D0u;
    {
        const bool branch_taken_0x23c2d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2d0) {
            ctx->pc = 0x23C2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2D0u;
            // 0x23c2d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2D8u;
label_23c2d8:
    // 0x23c2d8: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x23c2d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_23c2dc:
    // 0x23c2dc: 0x1012  mflo        $v0
    ctx->pc = 0x23c2dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23c2e0:
    // 0x23c2e0: 0x1000fda0  b           . + 4 + (-0x260 << 2)
label_23c2e4:
    if (ctx->pc == 0x23C2E4u) {
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2E8u;
        goto label_23c2e8;
    }
    ctx->pc = 0x23C2E0u;
    {
        const bool branch_taken_0x23c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2e0) {
            ctx->pc = 0x23B964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23b964; return; }
        }
    }
    ctx->pc = 0x23C2E8u;
label_23c2e8:
    // 0x23c2e8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23c2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_23c2ec:
    // 0x23c2ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x23c2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23c2f0:
    // 0x23c2f0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_23c2f4:
    // 0x23c2f4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x23c2f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23c2f8:
    // 0x23c2f8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_23c2fc:
    // 0x23c2fc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x23c2fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23c300:
    // 0x23c300: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x23c300u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_23c304:
    // 0x23c304: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x23c304u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23c308:
    // 0x23c308: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x23c308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_23c30c:
    // 0x23c30c: 0x3e00008  jr          $ra
label_23c310:
    if (ctx->pc == 0x23C310u) {
        ctx->pc = 0x23C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C30Cu;
        // 0x23c310: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C314u;
        goto label_23c314;
    }
    ctx->pc = 0x23C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C30Cu;
        // 0x23c310: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C314u;
label_23c314:
    // 0x23c314: 0x0  nop
    ctx->pc = 0x23c314u;
    // NOP
label_23c318:
    // 0x23c318: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c31c:
    // 0x23c31c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23c31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23c320:
    // 0x23c320: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c324:
    // 0x23c324: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23c324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_23c328:
    // 0x23c328: 0x3e00008  jr          $ra
label_23c32c:
    if (ctx->pc == 0x23C32Cu) {
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C330u;
        goto label_23c330;
    }
    ctx->pc = 0x23C328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C330u;
label_23c330:
    // 0x23c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c334:
    // 0x23c334: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c338:
    // 0x23c338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c33c:
    // 0x23c33c: 0x3c055851  lui         $a1, 0x5851
    ctx->pc = 0x23c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22609 << 16));
label_23c340:
    // 0x23c340: 0x34a5f42d  ori         $a1, $a1, 0xF42D
    ctx->pc = 0x23c340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62509);
label_23c344:
    // 0x23c344: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23c348:
    // 0x23c348: 0x34a54c95  ori         $a1, $a1, 0x4C95
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19605);
label_23c34c:
    // 0x23c34c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23c350:
    // 0x23c350: 0x34a57f2d  ori         $a1, $a1, 0x7F2D
    ctx->pc = 0x23c350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32557);
label_23c354:
    // 0x23c354: 0x8c500818  lw          $s0, 0x818($v0)
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c358:
    // 0x23c358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c35c:
    // 0x23c35c: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x23c360u;
    return;
}

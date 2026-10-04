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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part72(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        default: return;
    }

label_20bbd0:
    // 0x20bbd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20bbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bbd4:
    // 0x20bbd4: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20bbd8:
    // 0x20bbd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bbdc:
    // 0x20bbdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bbe0:
    // 0x20bbe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bbe4:
    if (ctx->pc == 0x20BBE4u) {
        ctx->pc = 0x20BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE0u;
        // 0x20bbe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBE8u;
        goto label_20bbe8;
    }
    ctx->pc = 0x20BBE0u;
    {
        const bool branch_taken_0x20bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE0u;
        // 0x20bbe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbe0) {
            ctx->pc = 0x20BBF4u;
            goto label_20bbf4;
        }
    }
    ctx->pc = 0x20BBE8u;
label_20bbe8:
    // 0x20bbe8: 0xc070080  jal         func_1C0200
label_20bbec:
    if (ctx->pc == 0x20BBECu) {
        ctx->pc = 0x20BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE8u;
        // 0x20bbec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBF0u;
        goto label_20bbf0;
    }
    ctx->pc = 0x20BBE8u;
    SET_GPR_U32(ctx, 31, 0x20BBF0u);
    ctx->pc = 0x20BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBE8u;
    // 0x20bbec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BBE8u, 0x20BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBF0u;
label_20bbf0:
    // 0x20bbf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bbf4:
    // 0x20bbf4: 0x0  nop
    ctx->pc = 0x20bbf4u;
    // NOP
label_20bbf8:
    // 0x20bbf8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20bbfc:
    // 0x20bbfc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc00:
    // 0x20bc00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bc04:
    // 0x20bc04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    {
        const bool branch_taken_0x20bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc04) {
            ctx->pc = 0x20BC18u;
            goto label_20bc18;
        }
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0xc070080  jal         func_1C0200
label_20bc10:
    if (ctx->pc == 0x20BC10u) {
        ctx->pc = 0x20BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC0Cu;
        // 0x20bc10: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC14u;
        goto label_20bc14;
    }
    ctx->pc = 0x20BC0Cu;
    SET_GPR_U32(ctx, 31, 0x20BC14u);
    ctx->pc = 0x20BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC0Cu;
    // 0x20bc10: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BC0Cu, 0x20BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bc18:
    // 0x20bc18: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20bc1c:
    // 0x20bc1c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc20:
    // 0x20bc20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bc24:
    // 0x20bc24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc28:
    if (ctx->pc == 0x20BC28u) {
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC2Cu;
        goto label_20bc2c;
    }
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20BC38u;
            goto label_20bc38;
        }
    }
    ctx->pc = 0x20BC2Cu;
label_20bc2c:
    // 0x20bc2c: 0xc070080  jal         func_1C0200
label_20bc30:
    if (ctx->pc == 0x20BC30u) {
        ctx->pc = 0x20BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC2Cu;
        // 0x20bc30: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC34u;
        goto label_20bc34;
    }
    ctx->pc = 0x20BC2Cu;
    SET_GPR_U32(ctx, 31, 0x20BC34u);
    ctx->pc = 0x20BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC2Cu;
    // 0x20bc30: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BC2Cu, 0x20BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC34u;
label_20bc34:
    // 0x20bc34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bc38:
    // 0x20bc38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc3c:
    // 0x20bc3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc40:
    // 0x20bc40: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20bc44:
    // 0x20bc44: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
label_20bc48:
    // 0x20bc48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc4c:
    // 0x20bc4c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20bc50:
    // 0x20bc50: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20bc54:
    // 0x20bc54: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20bc58:
    // 0x20bc58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc5c:
    if (ctx->pc == 0x20BC5Cu) {
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC60u;
        goto label_20bc60;
    }
    ctx->pc = 0x20BC58u;
    {
        const bool branch_taken_0x20bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc58) {
            ctx->pc = 0x20BC6Cu;
            goto label_20bc6c;
        }
    }
    ctx->pc = 0x20BC60u;
label_20bc60:
    // 0x20bc60: 0xc070080  jal         func_1C0200
label_20bc64:
    if (ctx->pc == 0x20BC64u) {
        ctx->pc = 0x20BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC60u;
        // 0x20bc64: 0x24051760  addiu       $a1, $zero, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC68u;
        goto label_20bc68;
    }
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x20BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC60u;
    // 0x20bc64: 0x24051760  addiu       $a1, $zero, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BC60u, 0x20BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x20bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_20bc6c:
    // 0x20bc6c: 0x0  nop
    ctx->pc = 0x20bc6cu;
    // NOP
label_20bc70:
    // 0x20bc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20bc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20bc74:
    // 0x20bc74: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x20bc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_20bc78:
    // 0x20bc78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_20bc7c:
    if (ctx->pc == 0x20BC7Cu) {
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC80u;
        goto label_20bc80;
    }
    ctx->pc = 0x20BC78u;
    {
        const bool branch_taken_0x20bc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc78) {
            ctx->pc = 0x20BC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bc40;
        }
    }
    ctx->pc = 0x20BC80u;
label_20bc80:
    // 0x20bc80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bc84:
    // 0x20bc84: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bc88:
    // 0x20bc88: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_20bc8c:
    if (ctx->pc == 0x20BC8Cu) {
        ctx->pc = 0x20BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC88u;
        // 0x20bc8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC90u;
        goto label_20bc90;
    }
    ctx->pc = 0x20BC88u;
    {
        const bool branch_taken_0x20bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC88u;
        // 0x20bc8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc88) {
            ctx->pc = 0x20BBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bbd4;
        }
    }
    ctx->pc = 0x20BC90u;
label_20bc90:
    // 0x20bc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bc94:
    // 0x20bc94: 0xaf95916c  sw          $s5, -0x6E94($gp)
    ctx->pc = 0x20bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938988), GPR_U32(ctx, 21));
label_20bc98:
    // 0x20bc98: 0xaf829164  sw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 2));
label_20bc9c:
    // 0x20bc9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bca0:
    // 0x20bca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bca4:
    // 0x20bca4: 0xaf809168  sw          $zero, -0x6E98($gp)
    ctx->pc = 0x20bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 0));
label_20bca8:
    // 0x20bca8: 0xaf829160  sw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 2));
label_20bcac:
    // 0x20bcac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bcb0:
    // 0x20bcb0: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20bcb4:
    // 0x20bcb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bcb8:
    // 0x20bcb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bcbc:
    // 0x20bcbc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bcc0:
    // 0x20bcc0: 0xc05e234  jal         func_1788D0
label_20bcc4:
    if (ctx->pc == 0x20BCC4u) {
        ctx->pc = 0x20BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCC0u;
        // 0x20bcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BCC8u;
        goto label_20bcc8;
    }
    ctx->pc = 0x20BCC0u;
    SET_GPR_U32(ctx, 31, 0x20BCC8u);
    ctx->pc = 0x20BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCC0u;
    // 0x20bcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BCC0u, 0x20BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCC8u;
label_20bcc8:
    // 0x20bcc8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20bccc:
    // 0x20bccc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bcd0:
    // 0x20bcd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bcd4:
    // 0x20bcd4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bcd8:
    // 0x20bcd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bcdc:
    // 0x20bcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bce0:
    // 0x20bce0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bce4:
    // 0x20bce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20bce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bce8:
    // 0x20bce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bcec:
    // 0x20bcec: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bcf0:
    // 0x20bcf0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bcf4:
    // 0x20bcf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20bcf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bcf8:
    // 0x20bcf8: 0xdc257450  ld          $a1, 0x7450($at)
    ctx->pc = 0x20bcf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29776)));
label_20bcfc:
    // 0x20bcfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20bcfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd00:
    // 0x20bd00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20bd00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd04:
    // 0x20bd04: 0xc05de30  jal         func_1778C0
label_20bd08:
    if (ctx->pc == 0x20BD08u) {
        ctx->pc = 0x20BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD04u;
        // 0x20bd08: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD0Cu;
        goto label_20bd0c;
    }
    ctx->pc = 0x20BD04u;
    SET_GPR_U32(ctx, 31, 0x20BD0Cu);
    ctx->pc = 0x20BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD04u;
    // 0x20bd08: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20BD04u, 0x20BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD0Cu;
label_20bd0c:
    // 0x20bd0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bd10:
    // 0x20bd10: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bd14:
    // 0x20bd14: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_20bd18:
    if (ctx->pc == 0x20BD18u) {
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD1Cu;
        goto label_20bd1c;
    }
    ctx->pc = 0x20BD14u;
    {
        const bool branch_taken_0x20bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd14) {
            ctx->pc = 0x20BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bcb0;
        }
    }
    ctx->pc = 0x20BD1Cu;
label_20bd1c:
    // 0x20bd1c: 0xc083538  jal         func_20D4E0
label_20bd20:
    if (ctx->pc == 0x20BD20u) {
        ctx->pc = 0x20BD24u;
        goto label_20bd24;
    }
    ctx->pc = 0x20BD1Cu;
    SET_GPR_U32(ctx, 31, 0x20BD24u);
    ctx->pc = 0x20D4E0u;
    { ctx->pc = 0x20d4e0; return; }
    ctx->pc = 0x20BD24u;
label_20bd24:
    // 0x20bd24: 0xaf809138  sw          $zero, -0x6EC8($gp)
    ctx->pc = 0x20bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 0));
label_20bd28:
    // 0x20bd28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd2c:
    // 0x20bd2c: 0xaf809134  sw          $zero, -0x6ECC($gp)
    ctx->pc = 0x20bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
label_20bd30:
    // 0x20bd30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd34:
    // 0x20bd34: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20bd38:
    // 0x20bd38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bd3c:
    // 0x20bd3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bd40:
    // 0x20bd40: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bd44:
    // 0x20bd44: 0xc05e234  jal         func_1788D0
label_20bd48:
    if (ctx->pc == 0x20BD48u) {
        ctx->pc = 0x20BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD44u;
        // 0x20bd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD4Cu;
        goto label_20bd4c;
    }
    ctx->pc = 0x20BD44u;
    SET_GPR_U32(ctx, 31, 0x20BD4Cu);
    ctx->pc = 0x20BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD44u;
    // 0x20bd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BD44u, 0x20BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD4Cu;
label_20bd4c:
    // 0x20bd4c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20bd50:
    // 0x20bd50: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bd54:
    // 0x20bd54: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bd58:
    // 0x20bd58: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bd5c:
    // 0x20bd5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bd60:
    // 0x20bd60: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20bd64:
    // 0x20bd64: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bd68:
    // 0x20bd68: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20bd6c:
    // 0x20bd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bd70:
    // 0x20bd70: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bd74:
    // 0x20bd74: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bd78:
    // 0x20bd78: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_20bd7c:
    // 0x20bd7c: 0xdc257460  ld          $a1, 0x7460($at)
    ctx->pc = 0x20bd7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29792)));
label_20bd80:
    // 0x20bd80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20bd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd84:
    // 0x20bd84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20bd84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd88:
    // 0x20bd88: 0xc05de30  jal         func_1778C0
label_20bd8c:
    if (ctx->pc == 0x20BD8Cu) {
        ctx->pc = 0x20BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD88u;
        // 0x20bd8c: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD90u;
        goto label_20bd90;
    }
    ctx->pc = 0x20BD88u;
    SET_GPR_U32(ctx, 31, 0x20BD90u);
    ctx->pc = 0x20BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD88u;
    // 0x20bd8c: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20BD88u, 0x20BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD90u;
label_20bd90:
    // 0x20bd90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bd94:
    // 0x20bd94: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bd98:
    // 0x20bd98: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_20bd9c:
    if (ctx->pc == 0x20BD9Cu) {
        ctx->pc = 0x20BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD98u;
        // 0x20bd9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDA0u;
        goto label_20bda0;
    }
    ctx->pc = 0x20BD98u;
    {
        const bool branch_taken_0x20bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD98u;
        // 0x20bd9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd98) {
            ctx->pc = 0x20BD34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd34;
        }
    }
    ctx->pc = 0x20BDA0u;
label_20bda0:
    // 0x20bda0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bda4:
    // 0x20bda4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bda8:
    // 0x20bda8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20bdac:
    // 0x20bdac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bdb0:
    // 0x20bdb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bdb4:
    // 0x20bdb4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bdb8:
    // 0x20bdb8: 0xc05e234  jal         func_1788D0
label_20bdbc:
    if (ctx->pc == 0x20BDBCu) {
        ctx->pc = 0x20BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDB8u;
        // 0x20bdbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDC0u;
        goto label_20bdc0;
    }
    ctx->pc = 0x20BDB8u;
    SET_GPR_U32(ctx, 31, 0x20BDC0u);
    ctx->pc = 0x20BDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDB8u;
    // 0x20bdbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BDB8u, 0x20BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDC0u;
label_20bdc0:
    // 0x20bdc0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20bdc4:
    // 0x20bdc4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bdc8:
    // 0x20bdc8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bdcc:
    // 0x20bdcc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bdd0:
    // 0x20bdd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bdd4:
    // 0x20bdd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bdd8:
    // 0x20bdd8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bddc:
    // 0x20bddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20bddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bde0:
    // 0x20bde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bde4:
    // 0x20bde4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bde8:
    // 0x20bde8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bdec:
    // 0x20bdec: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_20bdf0:
    // 0x20bdf0: 0xdc257458  ld          $a1, 0x7458($at)
    ctx->pc = 0x20bdf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29784)));
label_20bdf4:
    // 0x20bdf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20bdf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bdf8:
    // 0x20bdf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20bdf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bdfc:
    // 0x20bdfc: 0xc05de30  jal         func_1778C0
label_20be00:
    if (ctx->pc == 0x20BE00u) {
        ctx->pc = 0x20BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDFCu;
        // 0x20be00: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE04u;
        goto label_20be04;
    }
    ctx->pc = 0x20BDFCu;
    SET_GPR_U32(ctx, 31, 0x20BE04u);
    ctx->pc = 0x20BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDFCu;
    // 0x20be00: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20BDFCu, 0x20BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE04u;
label_20be04:
    // 0x20be04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20be04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20be08:
    // 0x20be08: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20be08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20be0c:
    // 0x20be0c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_20be10:
    if (ctx->pc == 0x20BE10u) {
        ctx->pc = 0x20BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE0Cu;
        // 0x20be10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE14u;
        goto label_20be14;
    }
    ctx->pc = 0x20BE0Cu;
    {
        const bool branch_taken_0x20be0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE0Cu;
        // 0x20be10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be0c) {
            ctx->pc = 0x20BDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bda8;
        }
    }
    ctx->pc = 0x20BE14u;
label_20be14:
    // 0x20be14: 0xc077fc0  jal         func_1DFF00
label_20be18:
    if (ctx->pc == 0x20BE18u) {
        ctx->pc = 0x20BE1Cu;
        goto label_20be1c;
    }
    ctx->pc = 0x20BE14u;
    SET_GPR_U32(ctx, 31, 0x20BE1Cu);
    ctx->pc = 0x1DFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF00u, 0x20BE14u, 0x20BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE1Cu;
label_20be1c:
    // 0x20be1c: 0xc07a854  jal         func_1EA150
label_20be20:
    if (ctx->pc == 0x20BE20u) {
        ctx->pc = 0x20BE24u;
        goto label_20be24;
    }
    ctx->pc = 0x20BE1Cu;
    SET_GPR_U32(ctx, 31, 0x20BE24u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x20BE24u;
label_20be24:
    // 0x20be24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20be24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20be28:
    // 0x20be28: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20be28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20be2c:
    // 0x20be2c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20be2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20be30:
    // 0x20be30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20be30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20be34:
    // 0x20be34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20be34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20be38:
    // 0x20be38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20be38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20be3c:
    // 0x20be3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20be3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20be40:
    // 0x20be40: 0x3e00008  jr          $ra
label_20be44:
    if (ctx->pc == 0x20BE44u) {
        ctx->pc = 0x20BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE40u;
        // 0x20be44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE48u;
        goto label_20be48;
    }
    ctx->pc = 0x20BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE40u;
        // 0x20be44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BE48u;
label_20be48:
    // 0x20be48: 0x0  nop
    ctx->pc = 0x20be48u;
    // NOP
label_20be4c:
    // 0x20be4c: 0x0  nop
    ctx->pc = 0x20be4cu;
    // NOP
label_20be50:
    // 0x20be50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20be54:
    // 0x20be54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20be58:
    // 0x20be58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20be5c:
    // 0x20be5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20be60:
    // 0x20be60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20be64:
    // 0x20be64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20be68:
    // 0x20be68: 0xc041738  jal         func_105CE0
label_20be6c:
    if (ctx->pc == 0x20BE6Cu) {
        ctx->pc = 0x20BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE68u;
        // 0x20be6c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE70u;
        goto label_20be70;
    }
    ctx->pc = 0x20BE68u;
    SET_GPR_U32(ctx, 31, 0x20BE70u);
    ctx->pc = 0x20BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE68u;
    // 0x20be6c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20BE68u, 0x20BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE70u;
label_20be70:
    // 0x20be70: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20be70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20be74:
    // 0x20be74: 0xc070080  jal         func_1C0200
label_20be78:
    if (ctx->pc == 0x20BE78u) {
        ctx->pc = 0x20BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE74u;
        // 0x20be78: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE7Cu;
        goto label_20be7c;
    }
    ctx->pc = 0x20BE74u;
    SET_GPR_U32(ctx, 31, 0x20BE7Cu);
    ctx->pc = 0x20BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE74u;
    // 0x20be78: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BE74u, 0x20BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE7Cu;
label_20be7c:
    // 0x20be7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20be80:
    // 0x20be80: 0xc0416e4  jal         func_105B90
label_20be84:
    if (ctx->pc == 0x20BE84u) {
        ctx->pc = 0x20BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE80u;
        // 0x20be84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE88u;
        goto label_20be88;
    }
    ctx->pc = 0x20BE80u;
    SET_GPR_U32(ctx, 31, 0x20BE88u);
    ctx->pc = 0x20BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE80u;
    // 0x20be84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20BE80u, 0x20BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE88u;
label_20be88:
    // 0x20be88: 0xaf82915c  sw          $v0, -0x6EA4($gp)
    ctx->pc = 0x20be88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938972), GPR_U32(ctx, 2));
label_20be8c:
    // 0x20be8c: 0xc041738  jal         func_105CE0
label_20be90:
    if (ctx->pc == 0x20BE90u) {
        ctx->pc = 0x20BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE8Cu;
        // 0x20be90: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE94u;
        goto label_20be94;
    }
    ctx->pc = 0x20BE8Cu;
    SET_GPR_U32(ctx, 31, 0x20BE94u);
    ctx->pc = 0x20BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE8Cu;
    // 0x20be90: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20BE8Cu, 0x20BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE94u;
label_20be94:
    // 0x20be94: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20be98:
    // 0x20be98: 0xc070080  jal         func_1C0200
label_20be9c:
    if (ctx->pc == 0x20BE9Cu) {
        ctx->pc = 0x20BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE98u;
        // 0x20be9c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEA0u;
        goto label_20bea0;
    }
    ctx->pc = 0x20BE98u;
    SET_GPR_U32(ctx, 31, 0x20BEA0u);
    ctx->pc = 0x20BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE98u;
    // 0x20be9c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BE98u, 0x20BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_20bea4:
    // 0x20bea4: 0xc0416e4  jal         func_105B90
label_20bea8:
    if (ctx->pc == 0x20BEA8u) {
        ctx->pc = 0x20BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA4u;
        // 0x20bea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEACu;
        goto label_20beac;
    }
    ctx->pc = 0x20BEA4u;
    SET_GPR_U32(ctx, 31, 0x20BEACu);
    ctx->pc = 0x20BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEA4u;
    // 0x20bea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20BEA4u, 0x20BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEACu;
label_20beac:
    // 0x20beac: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20beb0:
    // 0x20beb0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x20beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20beb4:
    // 0x20beb4: 0xaf829158  sw          $v0, -0x6EA8($gp)
    ctx->pc = 0x20beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938968), GPR_U32(ctx, 2));
label_20beb8:
    // 0x20beb8: 0xc070ea8  jal         func_1C3AA0
label_20bebc:
    if (ctx->pc == 0x20BEBCu) {
        ctx->pc = 0x20BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB8u;
        // 0x20bebc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEC0u;
        goto label_20bec0;
    }
    ctx->pc = 0x20BEB8u;
    SET_GPR_U32(ctx, 31, 0x20BEC0u);
    ctx->pc = 0x20BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEB8u;
    // 0x20bebc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x20BEB8u, 0x20BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEC0u;
label_20bec0:
    // 0x20bec0: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20bec4:
    // 0x20bec4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20bec8:
    // 0x20bec8: 0xc070ea8  jal         func_1C3AA0
label_20becc:
    if (ctx->pc == 0x20BECCu) {
        ctx->pc = 0x20BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEC8u;
        // 0x20becc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BED0u;
        goto label_20bed0;
    }
    ctx->pc = 0x20BEC8u;
    SET_GPR_U32(ctx, 31, 0x20BED0u);
    ctx->pc = 0x20BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEC8u;
    // 0x20becc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x20BEC8u, 0x20BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BED0u;
label_20bed0:
    // 0x20bed0: 0xc041738  jal         func_105CE0
label_20bed4:
    if (ctx->pc == 0x20BED4u) {
        ctx->pc = 0x20BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BED0u;
        // 0x20bed4: 0x240407e7  addiu       $a0, $zero, 0x7E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BED8u;
        goto label_20bed8;
    }
    ctx->pc = 0x20BED0u;
    SET_GPR_U32(ctx, 31, 0x20BED8u);
    ctx->pc = 0x20BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BED0u;
    // 0x20bed4: 0x240407e7  addiu       $a0, $zero, 0x7E7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20BED0u, 0x20BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BED8u;
label_20bed8:
    // 0x20bed8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20bedc:
    // 0x20bedc: 0xc070080  jal         func_1C0200
label_20bee0:
    if (ctx->pc == 0x20BEE0u) {
        ctx->pc = 0x20BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEDCu;
        // 0x20bee0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEE4u;
        goto label_20bee4;
    }
    ctx->pc = 0x20BEDCu;
    SET_GPR_U32(ctx, 31, 0x20BEE4u);
    ctx->pc = 0x20BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEDCu;
    // 0x20bee0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20BEDCu, 0x20BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEE4u;
label_20bee4:
    // 0x20bee4: 0x240407e7  addiu       $a0, $zero, 0x7E7
    ctx->pc = 0x20bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2023));
label_20bee8:
    // 0x20bee8: 0xc0416e4  jal         func_105B90
label_20beec:
    if (ctx->pc == 0x20BEECu) {
        ctx->pc = 0x20BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEE8u;
        // 0x20beec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEF0u;
        goto label_20bef0;
    }
    ctx->pc = 0x20BEE8u;
    SET_GPR_U32(ctx, 31, 0x20BEF0u);
    ctx->pc = 0x20BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEE8u;
    // 0x20beec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20BEE8u, 0x20BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEF0u;
label_20bef0:
    // 0x20bef0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20bef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bef4:
    // 0x20bef4: 0xc060678  jal         func_1819E0
label_20bef8:
    if (ctx->pc == 0x20BEF8u) {
        ctx->pc = 0x20BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEF4u;
        // 0x20bef8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEFCu;
        goto label_20befc;
    }
    ctx->pc = 0x20BEF4u;
    SET_GPR_U32(ctx, 31, 0x20BEFCu);
    ctx->pc = 0x20BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF4u;
    // 0x20bef8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x20BEF4u, 0x20BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEFCu;
label_20befc:
    // 0x20befc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x20befcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_20bf00:
    // 0x20bf00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bf04:
    // 0x20bf04: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x20bf04u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_20bf08:
    // 0x20bf08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20bf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bf0c:
    // 0x20bf0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20bf10:
    // 0x20bf10: 0xc0602c8  jal         func_180B20
label_20bf14:
    if (ctx->pc == 0x20BF14u) {
        ctx->pc = 0x20BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF10u;
        // 0x20bf14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF18u;
        goto label_20bf18;
    }
    ctx->pc = 0x20BF10u;
    SET_GPR_U32(ctx, 31, 0x20BF18u);
    ctx->pc = 0x20BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF10u;
    // 0x20bf14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x20BF10u, 0x20BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF18u;
label_20bf18:
    // 0x20bf18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bf1c:
    // 0x20bf1c: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x20bf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_20bf20:
    // 0x20bf20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bf24:
    // 0x20bf24: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x20bf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_20bf28:
    // 0x20bf28: 0xc060390  jal         func_180E40
label_20bf2c:
    if (ctx->pc == 0x20BF2Cu) {
        ctx->pc = 0x20BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF28u;
        // 0x20bf2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF30u;
        goto label_20bf30;
    }
    ctx->pc = 0x20BF28u;
    SET_GPR_U32(ctx, 31, 0x20BF30u);
    ctx->pc = 0x20BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF28u;
    // 0x20bf2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x20BF28u, 0x20BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF30u;
label_20bf30:
    // 0x20bf30: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20bf34:
    // 0x20bf34: 0x24637450  addiu       $v1, $v1, 0x7450
    ctx->pc = 0x20bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29776));
label_20bf38:
    // 0x20bf38: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_20bf3c:
    // 0x20bf3c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x20bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_20bf40:
    // 0x20bf40: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x20bf40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_20bf44:
    // 0x20bf44: 0xc06063c  jal         func_1818F0
label_20bf48:
    if (ctx->pc == 0x20BF48u) {
        ctx->pc = 0x20BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF44u;
        // 0x20bf48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF4Cu;
        goto label_20bf4c;
    }
    ctx->pc = 0x20BF44u;
    SET_GPR_U32(ctx, 31, 0x20BF4Cu);
    ctx->pc = 0x20BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF44u;
    // 0x20bf48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x20BF44u, 0x20BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF4Cu;
label_20bf4c:
    // 0x20bf4c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x20bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_20bf50:
    // 0x20bf50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bf54:
    // 0x20bf54: 0x87b1005e  lh          $s1, 0x5E($sp)
    ctx->pc = 0x20bf54u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_20bf58:
    // 0x20bf58: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x20bf58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
label_20bf5c:
    // 0x20bf5c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_20bf60:
    if (ctx->pc == 0x20BF60u) {
        ctx->pc = 0x20BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF5Cu;
        // 0x20bf60: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF64u;
        goto label_20bf64;
    }
    ctx->pc = 0x20BF5Cu;
    {
        const bool branch_taken_0x20bf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF5Cu;
        // 0x20bf60: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf5c) {
            ctx->pc = 0x20BF0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bf0c;
        }
    }
    ctx->pc = 0x20BF64u;
label_20bf64:
    // 0x20bf64: 0xc070038  jal         func_1C00E0
label_20bf68:
    if (ctx->pc == 0x20BF68u) {
        ctx->pc = 0x20BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF64u;
        // 0x20bf68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF6Cu;
        goto label_20bf6c;
    }
    ctx->pc = 0x20BF64u;
    SET_GPR_U32(ctx, 31, 0x20BF6Cu);
    ctx->pc = 0x20BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF64u;
    // 0x20bf68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20BF64u, 0x20BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF6Cu;
label_20bf6c:
    // 0x20bf6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20bf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20bf70:
    // 0x20bf70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20bf70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bf74:
    // 0x20bf74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20bf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bf78:
    // 0x20bf78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20bf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20bf7c:
    // 0x20bf7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20bf7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20bf80:
    // 0x20bf80: 0x3e00008  jr          $ra
label_20bf84:
    if (ctx->pc == 0x20BF84u) {
        ctx->pc = 0x20BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF80u;
        // 0x20bf84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF88u;
        goto label_20bf88;
    }
    ctx->pc = 0x20BF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF80u;
        // 0x20bf84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BF88u;
label_20bf88:
    // 0x20bf88: 0x0  nop
    ctx->pc = 0x20bf88u;
    // NOP
label_20bf8c:
    // 0x20bf8c: 0x0  nop
    ctx->pc = 0x20bf8cu;
    // NOP
label_20bf90:
    // 0x20bf90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20bf94:
    // 0x20bf94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20bf98:
    // 0x20bf98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20bf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20bf9c:
    // 0x20bf9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20bfa0:
    // 0x20bfa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bfa4:
    // 0x20bfa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20bfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20bfa8:
    // 0x20bfa8: 0xc0833e8  jal         func_20CFA0
label_20bfac:
    if (ctx->pc == 0x20BFACu) {
        ctx->pc = 0x20BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA8u;
        // 0x20bfac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFB0u;
        goto label_20bfb0;
    }
    ctx->pc = 0x20BFA8u;
    SET_GPR_U32(ctx, 31, 0x20BFB0u);
    ctx->pc = 0x20BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFA8u;
    // 0x20bfac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CFA0u;
    { ctx->pc = 0x20cfa0; return; }
    ctx->pc = 0x20BFB0u;
label_20bfb0:
    // 0x20bfb0: 0xaf809124  sw          $zero, -0x6EDC($gp)
    ctx->pc = 0x20bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 0));
label_20bfb4:
    // 0x20bfb4: 0x8f829168  lw          $v0, -0x6E98($gp)
    ctx->pc = 0x20bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938984)));
label_20bfb8:
    // 0x20bfb8: 0x1440034b  bnez        $v0, . + 4 + (0x34B << 2)
label_20bfbc:
    if (ctx->pc == 0x20BFBCu) {
        ctx->pc = 0x20BFC0u;
        goto label_20bfc0;
    }
    ctx->pc = 0x20BFB8u;
    {
        const bool branch_taken_0x20bfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bfb8) {
            ctx->pc = 0x20CCE8u;
            { ctx->pc = 0x20cce8; return; }
        }
    }
    ctx->pc = 0x20BFC0u;
label_20bfc0:
    // 0x20bfc0: 0x8f83916c  lw          $v1, -0x6E94($gp)
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20bfc4:
    // 0x20bfc4: 0x1460022b  bnez        $v1, . + 4 + (0x22B << 2)
label_20bfc8:
    if (ctx->pc == 0x20BFC8u) {
        ctx->pc = 0x20BFCCu;
        goto label_20bfcc;
    }
    ctx->pc = 0x20BFC4u;
    {
        const bool branch_taken_0x20bfc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bfc4) {
            ctx->pc = 0x20C874u;
            { ctx->pc = 0x20c874; return; }
        }
    }
    ctx->pc = 0x20BFCCu;
label_20bfcc:
    // 0x20bfcc: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x20bfccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20bfd0:
    // 0x20bfd0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x20bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_20bfd4:
    // 0x20bfd4: 0x10400209  beqz        $v0, . + 4 + (0x209 << 2)
label_20bfd8:
    if (ctx->pc == 0x20BFD8u) {
        ctx->pc = 0x20BFDCu;
        goto label_20bfdc;
    }
    ctx->pc = 0x20BFD4u;
    {
        const bool branch_taken_0x20bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bfd4) {
            ctx->pc = 0x20C7FCu;
            { ctx->pc = 0x20c7fc; return; }
        }
    }
    ctx->pc = 0x20BFDCu;
label_20bfdc:
    // 0x20bfdc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x20bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_20bfe0:
    // 0x20bfe0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20bfe4:
    // 0x20bfe4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20bfe8:
    // 0x20bfe8: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x20bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_20bfec:
    // 0x20bfec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20bff0:
    // 0x20bff0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20bff4:
    // 0x20bff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20bff8:
    // 0x20bff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20bffc:
    // 0x20bffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c000:
    // 0x20c000: 0x104001fa  beqz        $v0, . + 4 + (0x1FA << 2)
label_20c004:
    if (ctx->pc == 0x20C004u) {
        ctx->pc = 0x20C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C000u;
        // 0x20c004: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C008u;
        goto label_20c008;
    }
    ctx->pc = 0x20C000u;
    {
        const bool branch_taken_0x20c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C000u;
        // 0x20c004: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c000) {
            ctx->pc = 0x20C7ECu;
            { ctx->pc = 0x20c7ec; return; }
        }
    }
    ctx->pc = 0x20C008u;
label_20c008:
    // 0x20c008: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20c008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c00c:
    // 0x20c00c: 0xc05b420  jal         func_16D080
label_20c010:
    if (ctx->pc == 0x20C010u) {
        ctx->pc = 0x20C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C00Cu;
        // 0x20c010: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C014u;
        goto label_20c014;
    }
    ctx->pc = 0x20C00Cu;
    SET_GPR_U32(ctx, 31, 0x20C014u);
    ctx->pc = 0x20C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C00Cu;
    // 0x20c010: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C00Cu, 0x20C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C014u;
label_20c014:
    // 0x20c014: 0xc084904  jal         func_212410
label_20c018:
    if (ctx->pc == 0x20C018u) {
        ctx->pc = 0x20C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C014u;
        // 0x20c018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C01Cu;
        goto label_20c01c;
    }
    ctx->pc = 0x20C014u;
    SET_GPR_U32(ctx, 31, 0x20C01Cu);
    ctx->pc = 0x20C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C014u;
    // 0x20c018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    { ctx->pc = 0x212410; return; }
    ctx->pc = 0x20C01Cu;
label_20c01c:
    // 0x20c01c: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_20c020:
    if (ctx->pc == 0x20C020u) {
        ctx->pc = 0x20C024u;
        goto label_20c024;
    }
    ctx->pc = 0x20C01Cu;
    {
        const bool branch_taken_0x20c01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c01c) {
            ctx->pc = 0x20C510u;
            { ctx->pc = 0x20c510; return; }
        }
    }
    ctx->pc = 0x20C024u;
label_20c024:
    // 0x20c024: 0xc04439c  jal         func_110E70
label_20c028:
    if (ctx->pc == 0x20C028u) {
        ctx->pc = 0x20C02Cu;
        goto label_20c02c;
    }
    ctx->pc = 0x20C024u;
    SET_GPR_U32(ctx, 31, 0x20C02Cu);
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x20C024u, 0x20C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C02Cu;
label_20c02c:
    // 0x20c02c: 0x14400138  bnez        $v0, . + 4 + (0x138 << 2)
label_20c030:
    if (ctx->pc == 0x20C030u) {
        ctx->pc = 0x20C034u;
        goto label_20c034;
    }
    ctx->pc = 0x20C02Cu;
    {
        const bool branch_taken_0x20c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c02c) {
            ctx->pc = 0x20C510u;
            { ctx->pc = 0x20c510; return; }
        }
    }
    ctx->pc = 0x20C034u;
label_20c034:
    // 0x20c034: 0xc08fec8  jal         func_23FB20
label_20c038:
    if (ctx->pc == 0x20C038u) {
        ctx->pc = 0x20C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C034u;
        // 0x20c038: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C03Cu;
        goto label_20c03c;
    }
    ctx->pc = 0x20C034u;
    SET_GPR_U32(ctx, 31, 0x20C03Cu);
    ctx->pc = 0x20C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C034u;
    // 0x20c038: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB20u, 0x20C034u, 0x20C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C03Cu;
label_20c03c:
    // 0x20c03c: 0x0  nop
    ctx->pc = 0x20c03cu;
    // NOP
label_20c040:
    // 0x20c040: 0xc08fee8  jal         func_23FBA0
label_20c044:
    if (ctx->pc == 0x20C044u) {
        ctx->pc = 0x20C048u;
        goto label_20c048;
    }
    ctx->pc = 0x20C040u;
    SET_GPR_U32(ctx, 31, 0x20C048u);
    ctx->pc = 0x23FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FBA0u, 0x20C040u, 0x20C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C048u;
label_20c048:
    // 0x20c048: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20c04c:
    // 0x20c04c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20c050:
    if (ctx->pc == 0x20C050u) {
        ctx->pc = 0x20C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C04Cu;
        // 0x20c050: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C054u;
        goto label_20c054;
    }
    ctx->pc = 0x20C04Cu;
    {
        const bool branch_taken_0x20c04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C04Cu;
        // 0x20c050: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c04c) {
            ctx->pc = 0x20C0A4u;
            goto label_20c0a4;
        }
    }
    ctx->pc = 0x20C054u;
label_20c054:
    // 0x20c054: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20c058:
    // 0x20c058: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c05c:
    // 0x20c05c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20c060:
    if (ctx->pc == 0x20C060u) {
        ctx->pc = 0x20C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C05Cu;
        // 0x20c060: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C064u;
        goto label_20c064;
    }
    ctx->pc = 0x20C05Cu;
    {
        const bool branch_taken_0x20c05c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C05Cu;
        // 0x20c060: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c05c) {
            ctx->pc = 0x20C070u;
            goto label_20c070;
        }
    }
    ctx->pc = 0x20C064u;
label_20c064:
    // 0x20c064: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20c068:
    if (ctx->pc == 0x20C068u) {
        ctx->pc = 0x20C06Cu;
        goto label_20c06c;
    }
    ctx->pc = 0x20C064u;
    {
        const bool branch_taken_0x20c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c064) {
            ctx->pc = 0x20C070u;
            goto label_20c070;
        }
    }
    ctx->pc = 0x20C06Cu;
label_20c06c:
    // 0x20c06c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20c070:
    // 0x20c070: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20c074:
    // 0x20c074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c078:
    // 0x20c078: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20c07c:
    if (ctx->pc == 0x20C07Cu) {
        ctx->pc = 0x20C080u;
        goto label_20c080;
    }
    ctx->pc = 0x20C078u;
    {
        const bool branch_taken_0x20c078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c078) {
            ctx->pc = 0x20C0A4u;
            goto label_20c0a4;
        }
    }
    ctx->pc = 0x20C080u;
label_20c080:
    // 0x20c080: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c084:
    // 0x20c084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c088:
    // 0x20c088: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20c08c:
    // 0x20c08c: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c090:
    // 0x20c090: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20c090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20c094:
    // 0x20c094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c098:
    if (ctx->pc == 0x20C098u) {
        ctx->pc = 0x20C09Cu;
        goto label_20c09c;
    }
    ctx->pc = 0x20C094u;
    {
        const bool branch_taken_0x20c094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c094) {
            ctx->pc = 0x20C0A4u;
            goto label_20c0a4;
        }
    }
    ctx->pc = 0x20C09Cu;
label_20c09c:
    // 0x20c09c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c0a0:
    // 0x20c0a0: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20c0a4:
    // 0x20c0a4: 0x0  nop
    ctx->pc = 0x20c0a4u;
    // NOP
label_20c0a8:
    // 0x20c0a8: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c0ac:
    // 0x20c0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c0b0:
    // 0x20c0b0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20c0b4:
    if (ctx->pc == 0x20C0B4u) {
        ctx->pc = 0x20C0B8u;
        goto label_20c0b8;
    }
    ctx->pc = 0x20C0B0u;
    {
        const bool branch_taken_0x20c0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c0b0) {
            ctx->pc = 0x20C0F0u;
            goto label_20c0f0;
        }
    }
    ctx->pc = 0x20C0B8u;
label_20c0b8:
    // 0x20c0b8: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c0bc:
    // 0x20c0bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20c0c0:
    // 0x20c0c0: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20c0c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c0c4:
    // 0x20c0c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20c0c8:
    if (ctx->pc == 0x20C0C8u) {
        ctx->pc = 0x20C0CCu;
        goto label_20c0cc;
    }
    ctx->pc = 0x20C0C4u;
    {
        const bool branch_taken_0x20c0c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0c4) {
            ctx->pc = 0x20C0D4u;
            goto label_20c0d4;
        }
    }
    ctx->pc = 0x20C0CCu;
label_20c0cc:
    // 0x20c0cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_20c0d0:
    if (ctx->pc == 0x20C0D0u) {
        ctx->pc = 0x20C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0CCu;
        // 0x20c0d0: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0D4u;
        goto label_20c0d4;
    }
    ctx->pc = 0x20C0CCu;
    {
        const bool branch_taken_0x20c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0CCu;
        // 0x20c0d0: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0cc) {
            ctx->pc = 0x20C0DCu;
            goto label_20c0dc;
        }
    }
    ctx->pc = 0x20C0D4u;
label_20c0d4:
    // 0x20c0d4: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20c0d8:
    // 0x20c0d8: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20c0dc:
    // 0x20c0dc: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20c0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c0e0:
    // 0x20c0e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c0e4:
    if (ctx->pc == 0x20C0E4u) {
        ctx->pc = 0x20C0E8u;
        goto label_20c0e8;
    }
    ctx->pc = 0x20C0E0u;
    {
        const bool branch_taken_0x20c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c0e0) {
            ctx->pc = 0x20C0F0u;
            goto label_20c0f0;
        }
    }
    ctx->pc = 0x20C0E8u;
label_20c0e8:
    // 0x20c0e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c0ec:
    // 0x20c0ec: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20c0f0:
    // 0x20c0f0: 0xc078030  jal         func_1E00C0
label_20c0f4:
    if (ctx->pc == 0x20C0F4u) {
        ctx->pc = 0x20C0F8u;
        goto label_20c0f8;
    }
    ctx->pc = 0x20C0F0u;
    SET_GPR_U32(ctx, 31, 0x20C0F8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20C0F0u, 0x20C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0F8u;
label_20c0f8:
    // 0x20c0f8: 0xc07a9d8  jal         func_1EA760
label_20c0fc:
    if (ctx->pc == 0x20C0FCu) {
        ctx->pc = 0x20C100u;
        goto label_20c100;
    }
    ctx->pc = 0x20C0F8u;
    SET_GPR_U32(ctx, 31, 0x20C100u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20C100u;
label_20c100:
    // 0x20c100: 0xc04e168  jal         func_1385A0
label_20c104:
    if (ctx->pc == 0x20C104u) {
        ctx->pc = 0x20C108u;
        goto label_20c108;
    }
    ctx->pc = 0x20C100u;
    SET_GPR_U32(ctx, 31, 0x20C108u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20C100u, 0x20C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C108u;
label_20c108:
    // 0x20c108: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20c10c:
    // 0x20c10c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c110:
    // 0x20c110: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20c114:
    // 0x20c114: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c118:
    // 0x20c118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20c11c:
    // 0x20c11c: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20c120:
    // 0x20c120: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c124:
    // 0x20c124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c128:
    // 0x20c128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c12c:
    // 0x20c12c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c130:
    // 0x20c130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c134:
    // 0x20c134: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c138:
    // 0x20c138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c13c:
    // 0x20c13c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c140:
    // 0x20c140: 0xc066c72  jal         func_19B1C8
label_20c144:
    if (ctx->pc == 0x20C144u) {
        ctx->pc = 0x20C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C140u;
        // 0x20c144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C148u;
        goto label_20c148;
    }
    ctx->pc = 0x20C140u;
    SET_GPR_U32(ctx, 31, 0x20C148u);
    ctx->pc = 0x20C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C140u;
    // 0x20c144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C140u, 0x20C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C148u;
label_20c148:
    // 0x20c148: 0xc08372c  jal         func_20DCB0
label_20c14c:
    if (ctx->pc == 0x20C14Cu) {
        ctx->pc = 0x20C150u;
        goto label_20c150;
    }
    ctx->pc = 0x20C148u;
    SET_GPR_U32(ctx, 31, 0x20C150u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20C150u;
label_20c150:
    // 0x20c150: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c154:
    // 0x20c154: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20c158:
    if (ctx->pc == 0x20C158u) {
        ctx->pc = 0x20C15Cu;
        goto label_20c15c;
    }
    ctx->pc = 0x20C154u;
    {
        const bool branch_taken_0x20c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c154) {
            ctx->pc = 0x20C220u;
            goto label_20c220;
        }
    }
    ctx->pc = 0x20C15Cu;
label_20c15c:
    // 0x20c15c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c160:
    // 0x20c160: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c160u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c164:
    // 0x20c164: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c168:
    // 0x20c168: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20c168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20c16c:
    // 0x20c16c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c170:
    // 0x20c170: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20c170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20c174:
    // 0x20c174: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20c178:
    // 0x20c178: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20c178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20c17c:
    // 0x20c17c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20c17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20c180:
    // 0x20c180: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c184:
    // 0x20c184: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c188:
    // 0x20c188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c18c:
    // 0x20c18c: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20c18cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20c190:
    // 0x20c190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c194:
    // 0x20c194: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20c194u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20c198:
    // 0x20c198: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c198u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c19c:
    // 0x20c19c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20c19cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20c1a0:
    // 0x20c1a0: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c1a4:
    // 0x20c1a4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20c1a8:
    // 0x20c1a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c1a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c1ac:
    // 0x20c1ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c1b0:
    // 0x20c1b0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20c1b4:
    // 0x20c1b4: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20c1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20c1b8:
    // 0x20c1b8: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c1b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c1bc:
    // 0x20c1bc: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c1c0:
    // 0x20c1c0: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c1c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c1c4:
    // 0x20c1c4: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20c1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20c1c8:
    // 0x20c1c8: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20c1cc:
    // 0x20c1cc: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20c1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20c1d0:
    // 0x20c1d0: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20c1d4:
    // 0x20c1d4: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20c1d8:
    // 0x20c1d8: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20c1d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20c1dc:
    // 0x20c1dc: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20c1e0:
    // 0x20c1e0: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20c1e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c1e4:
    // 0x20c1e4: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20c1e8:
    // 0x20c1e8: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20c1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20c1ec:
    // 0x20c1ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20c1f0:
    // 0x20c1f0: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20c1f4:
    // 0x20c1f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c1f8:
    // 0x20c1f8: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20c1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20c1fc:
    // 0x20c1fc: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20c1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20c200:
    // 0x20c200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20c200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c204:
    // 0x20c204: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20c208:
    // 0x20c208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c20c:
    // 0x20c20c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c20cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c210:
    // 0x20c210: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20c214:
    // 0x20c214: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c218:
    // 0x20c218: 0xc066c72  jal         func_19B1C8
label_20c21c:
    if (ctx->pc == 0x20C21Cu) {
        ctx->pc = 0x20C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C218u;
        // 0x20c21c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C220u;
        goto label_20c220;
    }
    ctx->pc = 0x20C218u;
    SET_GPR_U32(ctx, 31, 0x20C220u);
    ctx->pc = 0x20C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C218u;
    // 0x20c21c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C218u, 0x20C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C220u;
label_20c220:
    // 0x20c220: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c224:
    // 0x20c224: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c228:
    // 0x20c228: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c22c:
    // 0x20c22c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c230:
    // 0x20c230: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20c234:
    // 0x20c234: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c238:
    // 0x20c238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c23c:
    // 0x20c23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c240:
    // 0x20c240: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c244:
    // 0x20c244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c248:
    // 0x20c248: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c24c:
    // 0x20c24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c250:
    // 0x20c250: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c254:
    // 0x20c254: 0xc066c72  jal         func_19B1C8
label_20c258:
    if (ctx->pc == 0x20C258u) {
        ctx->pc = 0x20C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C254u;
        // 0x20c258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C25Cu;
        goto label_20c25c;
    }
    ctx->pc = 0x20C254u;
    SET_GPR_U32(ctx, 31, 0x20C25Cu);
    ctx->pc = 0x20C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C254u;
    // 0x20c258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C254u, 0x20C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C25Cu;
label_20c25c:
    // 0x20c25c: 0xc077fc4  jal         func_1DFF10
label_20c260:
    if (ctx->pc == 0x20C260u) {
        ctx->pc = 0x20C264u;
        goto label_20c264;
    }
    ctx->pc = 0x20C25Cu;
    SET_GPR_U32(ctx, 31, 0x20C264u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x20C25Cu, 0x20C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C264u;
label_20c264:
    // 0x20c264: 0xc07a86c  jal         func_1EA1B0
label_20c268:
    if (ctx->pc == 0x20C268u) {
        ctx->pc = 0x20C26Cu;
        goto label_20c26c;
    }
    ctx->pc = 0x20C264u;
    SET_GPR_U32(ctx, 31, 0x20C26Cu);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0xc04e120  jal         func_138480
label_20c270:
    if (ctx->pc == 0x20C270u) {
        ctx->pc = 0x20C274u;
        goto label_20c274;
    }
    ctx->pc = 0x20C26Cu;
    SET_GPR_U32(ctx, 31, 0x20C274u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20C26Cu, 0x20C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C274u;
label_20c274:
    // 0x20c274: 0xc05b578  jal         func_16D5E0
label_20c278:
    if (ctx->pc == 0x20C278u) {
        ctx->pc = 0x20C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C274u;
        // 0x20c278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C27Cu;
        goto label_20c27c;
    }
    ctx->pc = 0x20C274u;
    SET_GPR_U32(ctx, 31, 0x20C27Cu);
    ctx->pc = 0x20C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C274u;
    // 0x20c278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20C274u, 0x20C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C27Cu;
label_20c27c:
    // 0x20c27c: 0xc060258  jal         func_180960
label_20c280:
    if (ctx->pc == 0x20C280u) {
        ctx->pc = 0x20C284u;
        goto label_20c284;
    }
    ctx->pc = 0x20C27Cu;
    SET_GPR_U32(ctx, 31, 0x20C284u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20C27Cu, 0x20C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C284u;
label_20c284:
    // 0x20c284: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20c288:
    // 0x20c288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20c28c:
    if (ctx->pc == 0x20C28Cu) {
        ctx->pc = 0x20C290u;
        goto label_20c290;
    }
    ctx->pc = 0x20C288u;
    {
        const bool branch_taken_0x20c288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c288) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C290u;
label_20c290:
    // 0x20c290: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20c294:
    // 0x20c294: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20c298:
    if (ctx->pc == 0x20C298u) {
        ctx->pc = 0x20C29Cu;
        goto label_20c29c;
    }
    ctx->pc = 0x20C294u;
    {
        const bool branch_taken_0x20c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c294) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C29Cu;
label_20c29c:
    // 0x20c29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2a0:
    // 0x20c2a0: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20c2a4:
    // 0x20c2a4: 0x0  nop
    ctx->pc = 0x20c2a4u;
    // NOP
label_20c2a8:
    // 0x20c2a8: 0x1220ff64  beqz        $s1, . + 4 + (-0x9C << 2)
label_20c2ac:
    if (ctx->pc == 0x20C2ACu) {
        ctx->pc = 0x20C2B0u;
        goto label_20c2b0;
    }
    ctx->pc = 0x20C2A8u;
    {
        const bool branch_taken_0x20c2a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a8) {
            ctx->pc = 0x20C03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c03c;
        }
    }
    ctx->pc = 0x20C2B0u;
label_20c2b0:
    // 0x20c2b0: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20c2b4:
    // 0x20c2b4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20c2b8:
    if (ctx->pc == 0x20C2B8u) {
        ctx->pc = 0x20C2BCu;
        goto label_20c2bc;
    }
    ctx->pc = 0x20C2B4u;
    {
        const bool branch_taken_0x20c2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2b4) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C2BCu;
label_20c2bc:
    // 0x20c2bc: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20c2c0:
    // 0x20c2c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c2c4:
    // 0x20c2c4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20c2c8:
    if (ctx->pc == 0x20C2C8u) {
        ctx->pc = 0x20C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C4u;
        // 0x20c2c8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2CCu;
        goto label_20c2cc;
    }
    ctx->pc = 0x20C2C4u;
    {
        const bool branch_taken_0x20c2c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C4u;
        // 0x20c2c8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c4) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2CCu;
label_20c2cc:
    // 0x20c2cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20c2d0:
    if (ctx->pc == 0x20C2D0u) {
        ctx->pc = 0x20C2D4u;
        goto label_20c2d4;
    }
    ctx->pc = 0x20C2CCu;
    {
        const bool branch_taken_0x20c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2cc) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2D4u;
label_20c2d4:
    // 0x20c2d4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20c2d8:
    // 0x20c2d8: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20c2dc:
    // 0x20c2dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2e0:
    // 0x20c2e0: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20c2e4:
    if (ctx->pc == 0x20C2E4u) {
        ctx->pc = 0x20C2E8u;
        goto label_20c2e8;
    }
    ctx->pc = 0x20C2E0u;
    {
        const bool branch_taken_0x20c2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c2e0) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C2E8u;
label_20c2e8:
    // 0x20c2e8: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c2ec:
    // 0x20c2ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c2f0:
    // 0x20c2f0: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20c2f4:
    // 0x20c2f4: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c2f8:
    // 0x20c2f8: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20c2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20c2fc:
    // 0x20c2fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c300:
    if (ctx->pc == 0x20C300u) {
        ctx->pc = 0x20C304u;
        goto label_20c304;
    }
    ctx->pc = 0x20C2FCu;
    {
        const bool branch_taken_0x20c2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c2fc) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C304u;
label_20c304:
    // 0x20c304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c308:
    // 0x20c308: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20c308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20c30c:
    // 0x20c30c: 0x0  nop
    ctx->pc = 0x20c30cu;
    // NOP
label_20c310:
    // 0x20c310: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c314:
    // 0x20c314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c318:
    // 0x20c318: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20c31c:
    if (ctx->pc == 0x20C31Cu) {
        ctx->pc = 0x20C320u;
        goto label_20c320;
    }
    ctx->pc = 0x20C318u;
    {
        const bool branch_taken_0x20c318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c318) {
            ctx->pc = 0x20C358u;
            goto label_20c358;
        }
    }
    ctx->pc = 0x20C320u;
label_20c320:
    // 0x20c320: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c324:
    // 0x20c324: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20c328:
    // 0x20c328: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c32c:
    // 0x20c32c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20c330:
    if (ctx->pc == 0x20C330u) {
        ctx->pc = 0x20C334u;
        goto label_20c334;
    }
    ctx->pc = 0x20C32Cu;
    {
        const bool branch_taken_0x20c32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c32c) {
            ctx->pc = 0x20C33Cu;
            goto label_20c33c;
        }
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0x10000003  b           . + 4 + (0x3 << 2)
label_20c338:
    if (ctx->pc == 0x20C338u) {
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C33Cu;
        goto label_20c33c;
    }
    ctx->pc = 0x20C334u;
    {
        const bool branch_taken_0x20c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c334) {
            ctx->pc = 0x20C344u;
            goto label_20c344;
        }
    }
    ctx->pc = 0x20C33Cu;
label_20c33c:
    // 0x20c33c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20c340:
    // 0x20c340: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20c344:
    // 0x20c344: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20c344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c348:
    // 0x20c348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c34c:
    if (ctx->pc == 0x20C34Cu) {
        ctx->pc = 0x20C350u;
        goto label_20c350;
    }
    ctx->pc = 0x20C348u;
    {
        const bool branch_taken_0x20c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c348) {
            ctx->pc = 0x20C358u;
            goto label_20c358;
        }
    }
    ctx->pc = 0x20C350u;
label_20c350:
    // 0x20c350: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c354:
    // 0x20c354: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20c358:
    // 0x20c358: 0xc078030  jal         func_1E00C0
label_20c35c:
    if (ctx->pc == 0x20C35Cu) {
        ctx->pc = 0x20C360u;
        goto label_20c360;
    }
    ctx->pc = 0x20C358u;
    SET_GPR_U32(ctx, 31, 0x20C360u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20C358u, 0x20C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C360u;
label_20c360:
    // 0x20c360: 0xc07a9d8  jal         func_1EA760
label_20c364:
    if (ctx->pc == 0x20C364u) {
        ctx->pc = 0x20C368u;
        goto label_20c368;
    }
    ctx->pc = 0x20C360u;
    SET_GPR_U32(ctx, 31, 0x20C368u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20C368u;
label_20c368:
    // 0x20c368: 0xc04e168  jal         func_1385A0
label_20c36c:
    if (ctx->pc == 0x20C36Cu) {
        ctx->pc = 0x20C370u;
        goto label_20c370;
    }
    ctx->pc = 0x20C368u;
    SET_GPR_U32(ctx, 31, 0x20C370u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20C368u, 0x20C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C370u;
label_20c370:
    // 0x20c370: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c374:
    // 0x20c374: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c378:
    // 0x20c378: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c37c:
    // 0x20c37c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c380:
    // 0x20c380: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20c384:
    // 0x20c384: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c388:
    // 0x20c388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c38c:
    // 0x20c38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c390:
    // 0x20c390: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c394:
    // 0x20c394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c398:
    // 0x20c398: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c39c:
    // 0x20c39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x20c3a0u;
    return;
}

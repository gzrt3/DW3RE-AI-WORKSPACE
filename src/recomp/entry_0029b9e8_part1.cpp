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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part1(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29b9e8u: goto label_29b9e8;
        case 0x29b9ecu: goto label_29b9ec;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29b9f4u: goto label_29b9f4;
        case 0x29b9f8u: goto label_29b9f8;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba00u: goto label_29ba00;
        case 0x29ba04u: goto label_29ba04;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba0cu: goto label_29ba0c;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba14u: goto label_29ba14;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba1cu: goto label_29ba1c;
        case 0x29ba20u: goto label_29ba20;
        case 0x29ba24u: goto label_29ba24;
        case 0x29ba28u: goto label_29ba28;
        case 0x29ba2cu: goto label_29ba2c;
        case 0x29ba30u: goto label_29ba30;
        case 0x29ba34u: goto label_29ba34;
        case 0x29ba38u: goto label_29ba38;
        case 0x29ba3cu: goto label_29ba3c;
        case 0x29ba40u: goto label_29ba40;
        case 0x29ba44u: goto label_29ba44;
        case 0x29ba48u: goto label_29ba48;
        case 0x29ba4cu: goto label_29ba4c;
        case 0x29ba50u: goto label_29ba50;
        case 0x29ba54u: goto label_29ba54;
        case 0x29ba58u: goto label_29ba58;
        case 0x29ba5cu: goto label_29ba5c;
        case 0x29ba60u: goto label_29ba60;
        case 0x29ba64u: goto label_29ba64;
        case 0x29ba68u: goto label_29ba68;
        case 0x29ba6cu: goto label_29ba6c;
        case 0x29ba70u: goto label_29ba70;
        case 0x29ba74u: goto label_29ba74;
        case 0x29ba78u: goto label_29ba78;
        case 0x29ba7cu: goto label_29ba7c;
        case 0x29ba80u: goto label_29ba80;
        case 0x29ba84u: goto label_29ba84;
        case 0x29ba88u: goto label_29ba88;
        case 0x29ba8cu: goto label_29ba8c;
        case 0x29ba90u: goto label_29ba90;
        case 0x29ba94u: goto label_29ba94;
        case 0x29ba98u: goto label_29ba98;
        case 0x29ba9cu: goto label_29ba9c;
        case 0x29baa0u: goto label_29baa0;
        case 0x29baa4u: goto label_29baa4;
        case 0x29baa8u: goto label_29baa8;
        case 0x29baacu: goto label_29baac;
        case 0x29bab0u: goto label_29bab0;
        case 0x29bab4u: goto label_29bab4;
        case 0x29bab8u: goto label_29bab8;
        case 0x29babcu: goto label_29babc;
        case 0x29bac0u: goto label_29bac0;
        case 0x29bac4u: goto label_29bac4;
        case 0x29bac8u: goto label_29bac8;
        case 0x29baccu: goto label_29bacc;
        case 0x29bad0u: goto label_29bad0;
        case 0x29bad4u: goto label_29bad4;
        case 0x29bad8u: goto label_29bad8;
        case 0x29badcu: goto label_29badc;
        case 0x29bae0u: goto label_29bae0;
        case 0x29bae4u: goto label_29bae4;
        case 0x29bae8u: goto label_29bae8;
        case 0x29baecu: goto label_29baec;
        case 0x29baf0u: goto label_29baf0;
        case 0x29baf4u: goto label_29baf4;
        case 0x29baf8u: goto label_29baf8;
        case 0x29bafcu: goto label_29bafc;
        case 0x29bb00u: goto label_29bb00;
        case 0x29bb04u: goto label_29bb04;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb0cu: goto label_29bb0c;
        case 0x29bb10u: goto label_29bb10;
        case 0x29bb14u: goto label_29bb14;
        case 0x29bb18u: goto label_29bb18;
        case 0x29bb1cu: goto label_29bb1c;
        case 0x29bb20u: goto label_29bb20;
        case 0x29bb24u: goto label_29bb24;
        case 0x29bb28u: goto label_29bb28;
        case 0x29bb2cu: goto label_29bb2c;
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb34u: goto label_29bb34;
        case 0x29bb38u: goto label_29bb38;
        case 0x29bb3cu: goto label_29bb3c;
        case 0x29bb40u: goto label_29bb40;
        case 0x29bb44u: goto label_29bb44;
        case 0x29bb48u: goto label_29bb48;
        case 0x29bb4cu: goto label_29bb4c;
        case 0x29bb50u: goto label_29bb50;
        case 0x29bb54u: goto label_29bb54;
        case 0x29bb58u: goto label_29bb58;
        case 0x29bb5cu: goto label_29bb5c;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb64u: goto label_29bb64;
        case 0x29bb68u: goto label_29bb68;
        case 0x29bb6cu: goto label_29bb6c;
        case 0x29bb70u: goto label_29bb70;
        case 0x29bb74u: goto label_29bb74;
        case 0x29bb78u: goto label_29bb78;
        case 0x29bb7cu: goto label_29bb7c;
        case 0x29bb80u: goto label_29bb80;
        case 0x29bb84u: goto label_29bb84;
        case 0x29bb88u: goto label_29bb88;
        case 0x29bb8cu: goto label_29bb8c;
        case 0x29bb90u: goto label_29bb90;
        case 0x29bb94u: goto label_29bb94;
        case 0x29bb98u: goto label_29bb98;
        case 0x29bb9cu: goto label_29bb9c;
        case 0x29bba0u: goto label_29bba0;
        case 0x29bba4u: goto label_29bba4;
        case 0x29bba8u: goto label_29bba8;
        case 0x29bbacu: goto label_29bbac;
        case 0x29bbb0u: goto label_29bbb0;
        case 0x29bbb4u: goto label_29bbb4;
        case 0x29bbb8u: goto label_29bbb8;
        case 0x29bbbcu: goto label_29bbbc;
        case 0x29bbc0u: goto label_29bbc0;
        case 0x29bbc4u: goto label_29bbc4;
        case 0x29bbc8u: goto label_29bbc8;
        case 0x29bbccu: goto label_29bbcc;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bbd4u: goto label_29bbd4;
        case 0x29bbd8u: goto label_29bbd8;
        case 0x29bbdcu: goto label_29bbdc;
        case 0x29bbe0u: goto label_29bbe0;
        case 0x29bbe4u: goto label_29bbe4;
        case 0x29bbe8u: goto label_29bbe8;
        case 0x29bbecu: goto label_29bbec;
        case 0x29bbf0u: goto label_29bbf0;
        case 0x29bbf4u: goto label_29bbf4;
        case 0x29bbf8u: goto label_29bbf8;
        case 0x29bbfcu: goto label_29bbfc;
        case 0x29bc00u: goto label_29bc00;
        case 0x29bc04u: goto label_29bc04;
        case 0x29bc08u: goto label_29bc08;
        case 0x29bc0cu: goto label_29bc0c;
        case 0x29bc10u: goto label_29bc10;
        case 0x29bc14u: goto label_29bc14;
        case 0x29bc18u: goto label_29bc18;
        case 0x29bc1cu: goto label_29bc1c;
        case 0x29bc20u: goto label_29bc20;
        case 0x29bc24u: goto label_29bc24;
        case 0x29bc28u: goto label_29bc28;
        case 0x29bc2cu: goto label_29bc2c;
        case 0x29bc30u: goto label_29bc30;
        case 0x29bc34u: goto label_29bc34;
        case 0x29bc38u: goto label_29bc38;
        case 0x29bc3cu: goto label_29bc3c;
        case 0x29bc40u: goto label_29bc40;
        case 0x29bc44u: goto label_29bc44;
        case 0x29bc48u: goto label_29bc48;
        case 0x29bc4cu: goto label_29bc4c;
        case 0x29bc50u: goto label_29bc50;
        case 0x29bc54u: goto label_29bc54;
        case 0x29bc58u: goto label_29bc58;
        case 0x29bc5cu: goto label_29bc5c;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc64u: goto label_29bc64;
        case 0x29bc68u: goto label_29bc68;
        case 0x29bc6cu: goto label_29bc6c;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc74u: goto label_29bc74;
        case 0x29bc78u: goto label_29bc78;
        case 0x29bc7cu: goto label_29bc7c;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bc84u: goto label_29bc84;
        case 0x29bc88u: goto label_29bc88;
        case 0x29bc8cu: goto label_29bc8c;
        case 0x29bc90u: goto label_29bc90;
        case 0x29bc94u: goto label_29bc94;
        case 0x29bc98u: goto label_29bc98;
        case 0x29bc9cu: goto label_29bc9c;
        case 0x29bca0u: goto label_29bca0;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcacu: goto label_29bcac;
        case 0x29bcb0u: goto label_29bcb0;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bcbcu: goto label_29bcbc;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcc4u: goto label_29bcc4;
        case 0x29bcc8u: goto label_29bcc8;
        case 0x29bcccu: goto label_29bccc;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcd4u: goto label_29bcd4;
        case 0x29bcd8u: goto label_29bcd8;
        case 0x29bcdcu: goto label_29bcdc;
        case 0x29bce0u: goto label_29bce0;
        case 0x29bce4u: goto label_29bce4;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bcecu: goto label_29bcec;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bcf8u: goto label_29bcf8;
        case 0x29bcfcu: goto label_29bcfc;
        case 0x29bd00u: goto label_29bd00;
        case 0x29bd04u: goto label_29bd04;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd0cu: goto label_29bd0c;
        case 0x29bd10u: goto label_29bd10;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd1cu: goto label_29bd1c;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd28u: goto label_29bd28;
        case 0x29bd2cu: goto label_29bd2c;
        case 0x29bd30u: goto label_29bd30;
        case 0x29bd34u: goto label_29bd34;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd48u: goto label_29bd48;
        case 0x29bd4cu: goto label_29bd4c;
        case 0x29bd50u: goto label_29bd50;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd5cu: goto label_29bd5c;
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd6cu: goto label_29bd6c;
        case 0x29bd70u: goto label_29bd70;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd78u: goto label_29bd78;
        case 0x29bd7cu: goto label_29bd7c;
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
        default: return;
    }


    ctx->pc = 0x29b9e8u;

label_29b9e8:
    // 0x29b9e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9ec:
    // 0x29b9ec: 0x0  nop
    ctx->pc = 0x29b9ecu;
    // NOP
label_29b9f0:
    // 0x29b9f0: 0x34c50  .word       0x00034C50                   # mfhi        $t1 # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29b9f4:
    // 0x29b9f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b9f8:
    // 0x29b9f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9fc:
    // 0x29b9fc: 0x0  nop
    ctx->pc = 0x29b9fcu;
    // NOP
label_29ba00:
    // 0x29ba00: 0x34c51  .word       0x00034C51                   # mthi        $zero # 00034C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba00u;
    ctx->hi = GPR_U64(ctx, 0);
label_29ba04:
    // 0x29ba04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba08:
    // 0x29ba08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba0c:
    // 0x29ba0c: 0x0  nop
    ctx->pc = 0x29ba0cu;
    // NOP
label_29ba10:
    // 0x29ba10: 0x34c55  .word       0x00034C55                   # INVALID     $zero, $v1, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29BA10 raw=0x00034C55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba14:
    // 0x29ba14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba18:
    // 0x29ba18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba1c:
    // 0x29ba1c: 0x0  nop
    ctx->pc = 0x29ba1cu;
    // NOP
label_29ba20:
    // 0x29ba20: 0x34c59  .word       0x00034C59                   # multu       $zero, $v1 # 00004C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29ba24:
    // 0x29ba24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba28:
    // 0x29ba28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba2c:
    // 0x29ba2c: 0x0  nop
    ctx->pc = 0x29ba2cu;
    // NOP
label_29ba30:
    // 0x29ba30: 0x34c5a  .word       0x00034C5A                   # div         $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ba34:
    // 0x29ba34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba38:
    // 0x29ba38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba3c:
    // 0x29ba3c: 0x0  nop
    ctx->pc = 0x29ba3cu;
    // NOP
label_29ba40:
    // 0x29ba40: 0x34c5b  .word       0x00034C5B                   # divu        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ba44:
    // 0x29ba44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba48:
    // 0x29ba48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba4c:
    // 0x29ba4c: 0x0  nop
    ctx->pc = 0x29ba4cu;
    // NOP
label_29ba50:
    // 0x29ba50: 0x34c5f  .word       0x00034C5F                   # ddivu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29BA50 raw=0x00034C5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba54:
    // 0x29ba54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba58:
    // 0x29ba58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba5c:
    // 0x29ba5c: 0x0  nop
    ctx->pc = 0x29ba5cu;
    // NOP
label_29ba60:
    // 0x29ba60: 0x34c63  .word       0x00034C63                   # negu        $t1, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29ba64:
    // 0x29ba64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba68:
    // 0x29ba68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba6c:
    // 0x29ba6c: 0x0  nop
    ctx->pc = 0x29ba6cu;
    // NOP
label_29ba70:
    // 0x29ba70: 0x34c64  .word       0x00034C64                   # and         $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_29ba74:
    // 0x29ba74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ba78:
    // 0x29ba78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba7c:
    // 0x29ba7c: 0x0  nop
    ctx->pc = 0x29ba7cu;
    // NOP
label_29ba80:
    // 0x29ba80: 0x34c65  .word       0x00034C65                   # or          $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29ba84:
    // 0x29ba84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba88:
    // 0x29ba88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba8c:
    // 0x29ba8c: 0x0  nop
    ctx->pc = 0x29ba8cu;
    // NOP
label_29ba90:
    // 0x29ba90: 0x34c69  .word       0x00034C69                   # mtsa        $zero # 00034C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ba90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29ba94:
    // 0x29ba94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba98:
    // 0x29ba98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba9c:
    // 0x29ba9c: 0x0  nop
    ctx->pc = 0x29ba9cu;
    // NOP
label_29baa0:
    // 0x29baa0: 0x34c6d  .word       0x00034C6D                   # daddu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29baa4:
    // 0x29baa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29baa8:
    // 0x29baa8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29baac:
    // 0x29baac: 0x0  nop
    ctx->pc = 0x29baacu;
    // NOP
label_29bab0:
    // 0x29bab0: 0x34c6e  .word       0x00034C6E                   # dsub        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bab0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29bab4:
    // 0x29bab4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bab4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bab8:
    // 0x29bab8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bab8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29babc:
    // 0x29babc: 0x0  nop
    ctx->pc = 0x29babcu;
    // NOP
label_29bac0:
    // 0x29bac0: 0x34c6f  .word       0x00034C6F                   # dsubu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29bac4:
    // 0x29bac4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bac8:
    // 0x29bac8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bacc:
    // 0x29bacc: 0x0  nop
    ctx->pc = 0x29baccu;
    // NOP
label_29bad0:
    // 0x29bad0: 0x34c73  tltu        $zero, $v1, 305
    ctx->pc = 0x29bad0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bad4:
    // 0x29bad4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bad8:
    // 0x29bad8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29badc:
    // 0x29badc: 0x0  nop
    ctx->pc = 0x29badcu;
    // NOP
label_29bae0:
    // 0x29bae0: 0x34c77  .word       0x00034C77                   # INVALID     $zero, $v1, 0x4C77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29BAE0 raw=0x00034C77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bae4:
    // 0x29bae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bae8:
    // 0x29bae8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29baec:
    // 0x29baec: 0x0  nop
    ctx->pc = 0x29baecu;
    // NOP
label_29baf0:
    // 0x29baf0: 0x34c78  dsll        $t1, $v1, 17
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 17);
label_29baf4:
    // 0x29baf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29baf8:
    // 0x29baf8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bafc:
    // 0x29bafc: 0x0  nop
    ctx->pc = 0x29bafcu;
    // NOP
label_29bb00:
    // 0x29bb00: 0x34c79  .word       0x00034C79                   # INVALID     $zero, $v1, 0x4C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29BB00 raw=0x00034C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb04:
    // 0x29bb04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb08:
    // 0x29bb08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb0c:
    // 0x29bb0c: 0x0  nop
    ctx->pc = 0x29bb0cu;
    // NOP
label_29bb10:
    // 0x29bb10: 0x34c7d  .word       0x00034C7D                   # INVALID     $zero, $v1, 0x4C7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29BB10 raw=0x00034C7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb14:
    // 0x29bb14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb18:
    // 0x29bb18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb1c:
    // 0x29bb1c: 0x0  nop
    ctx->pc = 0x29bb1cu;
    // NOP
label_29bb20:
    // 0x29bb20: 0x34c81  .word       0x00034C81                   # INVALID     $zero, $v1, 0x4C81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB20 raw=0x00034C81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb24:
    // 0x29bb24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb28:
    // 0x29bb28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb2c:
    // 0x29bb2c: 0x0  nop
    ctx->pc = 0x29bb2cu;
    // NOP
label_29bb30:
    // 0x29bb30: 0x34c82  srl         $t1, $v1, 18
    ctx->pc = 0x29bb30u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_29bb34:
    // 0x29bb34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb38:
    // 0x29bb38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb3c:
    // 0x29bb3c: 0x0  nop
    ctx->pc = 0x29bb3cu;
    // NOP
label_29bb40:
    // 0x29bb40: 0x34c83  sra         $t1, $v1, 18
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 18));
label_29bb44:
    // 0x29bb44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb48:
    // 0x29bb48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb4c:
    // 0x29bb4c: 0x0  nop
    ctx->pc = 0x29bb4cu;
    // NOP
label_29bb50:
    // 0x29bb50: 0x34c87  .word       0x00034C87                   # srav        $t1, $v1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb50u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29bb54:
    // 0x29bb54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb58:
    // 0x29bb58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb5c:
    // 0x29bb5c: 0x0  nop
    ctx->pc = 0x29bb5cu;
    // NOP
label_29bb60:
    // 0x29bb60: 0x34c8b  .word       0x00034C8B                   # movn        $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29bb64:
    // 0x29bb64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb68:
    // 0x29bb68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb6c:
    // 0x29bb6c: 0x0  nop
    ctx->pc = 0x29bb6cu;
    // NOP
label_29bb70:
    // 0x29bb70: 0x34c8c  .word       0x00034C8C                   # syscall     306 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb70u;
    ctx->pc = 0x29BB74u;
runtime->handleSyscall(rdram, ctx, 0xD32u);
label_29bb74:
    // 0x29bb74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bb78:
    // 0x29bb78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb7c:
    // 0x29bb7c: 0x0  nop
    ctx->pc = 0x29bb7cu;
    // NOP
label_29bb80:
    // 0x29bb80: 0x34c8d  break       3, 306
    ctx->pc = 0x29bb80u;
    runtime->handleBreak(rdram, ctx);
label_29bb84:
    // 0x29bb84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb88:
    // 0x29bb88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb8c:
    // 0x29bb8c: 0x0  nop
    ctx->pc = 0x29bb8cu;
    // NOP
label_29bb90:
    // 0x29bb90: 0x34c91  .word       0x00034C91                   # mthi        $zero # 00034C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb90u;
    ctx->hi = GPR_U64(ctx, 0);
label_29bb94:
    // 0x29bb94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb98:
    // 0x29bb98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb9c:
    // 0x29bb9c: 0x0  nop
    ctx->pc = 0x29bb9cu;
    // NOP
label_29bba0:
    // 0x29bba0: 0x34c95  .word       0x00034C95                   # INVALID     $zero, $v1, 0x4C95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29BBA0 raw=0x00034C95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bba4:
    // 0x29bba4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bba4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bba8:
    // 0x29bba8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbac:
    // 0x29bbac: 0x0  nop
    ctx->pc = 0x29bbacu;
    // NOP
label_29bbb0:
    // 0x29bbb0: 0x34c96  .word       0x00034C96                   # dsrlv       $t1, $v1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29bbb4:
    // 0x29bbb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bbb8:
    // 0x29bbb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbbc:
    // 0x29bbbc: 0x0  nop
    ctx->pc = 0x29bbbcu;
    // NOP
label_29bbc0:
    // 0x29bbc0: 0x34c97  .word       0x00034C97                   # dsrav       $t1, $v1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbc0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29bbc4:
    // 0x29bbc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bbc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bbc8:
    // 0x29bbc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bbcc:
    // 0x29bbcc: 0x0  nop
    ctx->pc = 0x29bbccu;
    // NOP
label_29bbd0:
    // 0x29bbd0: 0x34c9b  .word       0x00034C9B                   # divu        $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29bbd4:
    // 0x29bbd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bbd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bbd8:
    // 0x29bbd8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bbdc:
    // 0x29bbdc: 0x0  nop
    ctx->pc = 0x29bbdcu;
    // NOP
label_29bbe0:
    // 0x29bbe0: 0x34c9f  .word       0x00034C9F                   # ddivu       $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29BBE0 raw=0x00034C9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bbe4:
    // 0x29bbe4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bbe8:
    // 0x29bbe8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbec:
    // 0x29bbec: 0x0  nop
    ctx->pc = 0x29bbecu;
    // NOP
label_29bbf0:
    // 0x29bbf0: 0x34ca0  .word       0x00034CA0                   # add         $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29bbf4:
    // 0x29bbf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bbf8:
    // 0x29bbf8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbfc:
    // 0x29bbfc: 0x0  nop
    ctx->pc = 0x29bbfcu;
    // NOP
label_29bc00:
    // 0x29bc00: 0x34ca1  .word       0x00034CA1                   # addu        $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29bc04:
    // 0x29bc04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc08:
    // 0x29bc08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc0c:
    // 0x29bc0c: 0x0  nop
    ctx->pc = 0x29bc0cu;
    // NOP
label_29bc10:
    // 0x29bc10: 0x34ca5  .word       0x00034CA5                   # or          $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29bc14:
    // 0x29bc14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc18:
    // 0x29bc18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc1c:
    // 0x29bc1c: 0x0  nop
    ctx->pc = 0x29bc1cu;
    // NOP
label_29bc20:
    // 0x29bc20: 0x34ca9  .word       0x00034CA9                   # mtsa        $zero # 00034C80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29bc20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29bc24:
    // 0x29bc24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BC24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc28:
    // 0x29bc28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bc2c:
    // 0x29bc2c: 0x0  nop
    ctx->pc = 0x29bc2cu;
    // NOP
label_29bc30:
    // 0x29bc30: 0x34caa  .word       0x00034CAA                   # slt         $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc30u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29bc34:
    // 0x29bc34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BC34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc38:
    // 0x29bc38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bc38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bc3c:
    // 0x29bc3c: 0x0  nop
    ctx->pc = 0x29bc3cu;
    // NOP
label_29bc40:
    // 0x29bc40: 0x34cab  .word       0x00034CAB                   # sltu        $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc40u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29bc44:
    // 0x29bc44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc48:
    // 0x29bc48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc4c:
    // 0x29bc4c: 0x0  nop
    ctx->pc = 0x29bc4cu;
    // NOP
label_29bc50:
    // 0x29bc50: 0x34caf  .word       0x00034CAF                   # dsubu       $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29bc54:
    // 0x29bc54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc58:
    // 0x29bc58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc5c:
    // 0x29bc5c: 0x0  nop
    ctx->pc = 0x29bc5cu;
    // NOP
label_29bc60:
    // 0x29bc60: 0x34cb3  tltu        $zero, $v1, 306
    ctx->pc = 0x29bc60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bc64:
    // 0x29bc64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BC64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc68:
    // 0x29bc68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bc6c:
    // 0x29bc6c: 0x0  nop
    ctx->pc = 0x29bc6cu;
    // NOP
label_29bc70:
    // 0x29bc70: 0x34cb4  teq         $zero, $v1, 306
    ctx->pc = 0x29bc70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bc74:
    // 0x29bc74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BC74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc78:
    // 0x29bc78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bc7c:
    // 0x29bc7c: 0x0  nop
    ctx->pc = 0x29bc7cu;
    // NOP
label_29bc80:
    // 0x29bc80: 0x34cb5  .word       0x00034CB5                   # INVALID     $zero, $v1, 0x4CB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29BC80 raw=0x00034CB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc84:
    // 0x29bc84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc88:
    // 0x29bc88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc8c:
    // 0x29bc8c: 0x0  nop
    ctx->pc = 0x29bc8cu;
    // NOP
label_29bc90:
    // 0x29bc90: 0x34cb9  .word       0x00034CB9                   # INVALID     $zero, $v1, 0x4CB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29BC90 raw=0x00034CB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bc94:
    // 0x29bc94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bc94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bc98:
    // 0x29bc98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bc98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bc9c:
    // 0x29bc9c: 0x0  nop
    ctx->pc = 0x29bc9cu;
    // NOP
label_29bca0:
    // 0x29bca0: 0x34cbd  .word       0x00034CBD                   # INVALID     $zero, $v1, 0x4CBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29BCA0 raw=0x00034CBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bca4:
    // 0x29bca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bca4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BCA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bca8:
    // 0x29bca8: 0x5ab  .word       0x000005AB                   # sltu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bca8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_29bcac:
    // 0x29bcac: 0x0  nop
    ctx->pc = 0x29bcacu;
    // NOP
label_29bcb0:
    // 0x29bcb0: 0x34cbe  dsrl32      $t1, $v1, 18
    ctx->pc = 0x29bcb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 18));
label_29bcb4:
    // 0x29bcb4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bcb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bcb8:
    // 0x29bcb8: 0x81f  ddivu       $at, $zero, $zero
    ctx->pc = 0x29bcb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29BCB8 raw=0x0000081F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bcbc:
    // 0x29bcbc: 0x0  nop
    ctx->pc = 0x29bcbcu;
    // NOP
label_29bcc0:
    // 0x29bcc0: 0x34cc0  sll         $t1, $v1, 19
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_29bcc4:
    // 0x29bcc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bcc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BCC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bcc8:
    // 0x29bcc8: 0x32f  .word       0x0000032F                   # dsubu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bcc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_29bccc:
    // 0x29bccc: 0x0  nop
    ctx->pc = 0x29bcccu;
    // NOP
label_29bcd0:
    // 0x29bcd0: 0x34cc1  .word       0x00034CC1                   # INVALID     $zero, $v1, 0x4CC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bcd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BCD0 raw=0x00034CC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bcd4:
    // 0x29bcd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bcd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BCD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bcd8:
    // 0x29bcd8: 0x1c4  .word       0x000001C4                   # sllv        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bcdc:
    // 0x29bcdc: 0x0  nop
    ctx->pc = 0x29bcdcu;
    // NOP
label_29bce0:
    // 0x29bce0: 0x34cc2  srl         $t1, $v1, 19
    ctx->pc = 0x29bce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_29bce4:
    // 0x29bce4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bce4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BCE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bce8:
    // 0x29bce8: 0x271  tgeu        $zero, $zero, 9
    ctx->pc = 0x29bce8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29bcec:
    // 0x29bcec: 0x0  nop
    ctx->pc = 0x29bcecu;
    // NOP
label_29bcf0:
    // 0x29bcf0: 0x34cc3  sra         $t1, $v1, 19
    ctx->pc = 0x29bcf0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 19));
label_29bcf4:
    // 0x29bcf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bcf8:
    // 0x29bcf8: 0x938  dsll        $at, $zero, 4
    ctx->pc = 0x29bcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 4);
label_29bcfc:
    // 0x29bcfc: 0x0  nop
    ctx->pc = 0x29bcfcu;
    // NOP
label_29bd00:
    // 0x29bd00: 0x34cc5  .word       0x00034CC5                   # INVALID     $zero, $v1, 0x4CC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29BD00 raw=0x00034CC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd04:
    // 0x29bd04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd08:
    // 0x29bd08: 0x7e3  .word       0x000007E3                   # negu        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd08u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29bd0c:
    // 0x29bd0c: 0x0  nop
    ctx->pc = 0x29bd0cu;
    // NOP
label_29bd10:
    // 0x29bd10: 0x34cc6  .word       0x00034CC6                   # srlv        $t1, $v1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29bd14:
    // 0x29bd14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bd18:
    // 0x29bd18: 0x89a  .word       0x0000089A                   # div         $at, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd18u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29bd1c:
    // 0x29bd1c: 0x0  nop
    ctx->pc = 0x29bd1cu;
    // NOP
label_29bd20:
    // 0x29bd20: 0x34cc8  .word       0x00034CC8                   # jr          $zero # 00034CC0 <InstrIdType: CPU_SPECIAL>
label_29bd24:
    if (ctx->pc == 0x29BD24u) {
        ctx->pc = 0x29BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD20u;
        // 0x29bd24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD28u;
        goto label_29bd28;
    }
    ctx->pc = 0x29BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD20u;
        // 0x29bd24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29BD28u;
label_29bd28:
    // 0x29bd28: 0x75a  .word       0x0000075A                   # div         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd28u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29bd2c:
    // 0x29bd2c: 0x0  nop
    ctx->pc = 0x29bd2cu;
    // NOP
label_29bd30:
    // 0x29bd30: 0x34cc9  .word       0x00034CC9                   # jalr        $t1, $zero # 000304C0 <InstrIdType: CPU_SPECIAL>
label_29bd34:
    if (ctx->pc == 0x29BD34u) {
        ctx->pc = 0x29BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD30u;
        // 0x29bd34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD38u;
        goto label_29bd38;
    }
    ctx->pc = 0x29BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29BD38u);
        ctx->pc = 0x29BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD30u;
        // 0x29bd34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD30u, 0x29BD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BD38u;
label_29bd38:
    // 0x29bd38: 0x7c8  .word       0x000007C8                   # jr          $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_29bd3c:
    if (ctx->pc == 0x29BD3Cu) {
        ctx->pc = 0x29BD40u;
        goto label_29bd40;
    }
    ctx->pc = 0x29BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29BD40u;
label_29bd40:
    // 0x29bd40: 0x34cca  .word       0x00034CCA                   # movz        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29bd44:
    // 0x29bd44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd48:
    // 0x29bd48: 0x24f  sync
    ctx->pc = 0x29bd48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29bd4c:
    // 0x29bd4c: 0x0  nop
    ctx->pc = 0x29bd4cu;
    // NOP
label_29bd50:
    // 0x29bd50: 0x34ccb  .word       0x00034CCB                   # movn        $t1, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29bd54:
    // 0x29bd54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd58:
    // 0x29bd58: 0x336  tne         $zero, $zero, 12
    ctx->pc = 0x29bd58u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29bd5c:
    // 0x29bd5c: 0x0  nop
    ctx->pc = 0x29bd5cu;
    // NOP
label_29bd60:
    // 0x29bd60: 0x34ccc  .word       0x00034CCC                   # syscall     307 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd60u;
    ctx->pc = 0x29BD64u;
runtime->handleSyscall(rdram, ctx, 0xD33u);
label_29bd64:
    // 0x29bd64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29bd64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29bd68:
    // 0x29bd68: 0x84e  .word       0x0000084E                   # INVALID     $zero, $zero, 0x84E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29BD68 raw=0x0000084E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd6c:
    // 0x29bd6c: 0x0  nop
    ctx->pc = 0x29bd6cu;
    // NOP
label_29bd70:
    // 0x29bd70: 0x34cce  .word       0x00034CCE                   # INVALID     $zero, $v1, 0x4CCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29BD70 raw=0x00034CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd74:
    // 0x29bd74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bd74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BD74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29bd78:
    // 0x29bd78: 0x27e  dsrl32      $zero, $zero, 9
    ctx->pc = 0x29bd78u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 9));
label_29bd7c:
    // 0x29bd7c: 0x0  nop
    ctx->pc = 0x29bd7cu;
    // NOP
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
    ctx->pc = 0x29c1b8u;
    return;
}

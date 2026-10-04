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


void FUN_0019b5e8_part362(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24ba38u: goto label_24ba38;
        case 0x24ba3cu: goto label_24ba3c;
        case 0x24ba40u: goto label_24ba40;
        case 0x24ba44u: goto label_24ba44;
        case 0x24ba48u: goto label_24ba48;
        case 0x24ba4cu: goto label_24ba4c;
        case 0x24ba50u: goto label_24ba50;
        case 0x24ba54u: goto label_24ba54;
        case 0x24ba58u: goto label_24ba58;
        case 0x24ba5cu: goto label_24ba5c;
        case 0x24ba60u: goto label_24ba60;
        case 0x24ba64u: goto label_24ba64;
        case 0x24ba68u: goto label_24ba68;
        case 0x24ba6cu: goto label_24ba6c;
        case 0x24ba70u: goto label_24ba70;
        case 0x24ba74u: goto label_24ba74;
        case 0x24ba78u: goto label_24ba78;
        case 0x24ba7cu: goto label_24ba7c;
        case 0x24ba80u: goto label_24ba80;
        case 0x24ba84u: goto label_24ba84;
        case 0x24ba88u: goto label_24ba88;
        case 0x24ba8cu: goto label_24ba8c;
        case 0x24ba90u: goto label_24ba90;
        case 0x24ba94u: goto label_24ba94;
        case 0x24ba98u: goto label_24ba98;
        case 0x24ba9cu: goto label_24ba9c;
        case 0x24baa0u: goto label_24baa0;
        case 0x24baa4u: goto label_24baa4;
        case 0x24baa8u: goto label_24baa8;
        case 0x24baacu: goto label_24baac;
        case 0x24bab0u: goto label_24bab0;
        case 0x24bab4u: goto label_24bab4;
        case 0x24bab8u: goto label_24bab8;
        case 0x24babcu: goto label_24babc;
        case 0x24bac0u: goto label_24bac0;
        case 0x24bac4u: goto label_24bac4;
        case 0x24bac8u: goto label_24bac8;
        case 0x24baccu: goto label_24bacc;
        case 0x24bad0u: goto label_24bad0;
        case 0x24bad4u: goto label_24bad4;
        case 0x24bad8u: goto label_24bad8;
        case 0x24badcu: goto label_24badc;
        case 0x24bae0u: goto label_24bae0;
        case 0x24bae4u: goto label_24bae4;
        case 0x24bae8u: goto label_24bae8;
        case 0x24baecu: goto label_24baec;
        case 0x24baf0u: goto label_24baf0;
        case 0x24baf4u: goto label_24baf4;
        case 0x24baf8u: goto label_24baf8;
        case 0x24bafcu: goto label_24bafc;
        case 0x24bb00u: goto label_24bb00;
        case 0x24bb04u: goto label_24bb04;
        case 0x24bb08u: goto label_24bb08;
        case 0x24bb0cu: goto label_24bb0c;
        case 0x24bb10u: goto label_24bb10;
        case 0x24bb14u: goto label_24bb14;
        case 0x24bb18u: goto label_24bb18;
        case 0x24bb1cu: goto label_24bb1c;
        case 0x24bb20u: goto label_24bb20;
        case 0x24bb24u: goto label_24bb24;
        case 0x24bb28u: goto label_24bb28;
        case 0x24bb2cu: goto label_24bb2c;
        case 0x24bb30u: goto label_24bb30;
        case 0x24bb34u: goto label_24bb34;
        case 0x24bb38u: goto label_24bb38;
        case 0x24bb3cu: goto label_24bb3c;
        case 0x24bb40u: goto label_24bb40;
        case 0x24bb44u: goto label_24bb44;
        case 0x24bb48u: goto label_24bb48;
        case 0x24bb4cu: goto label_24bb4c;
        case 0x24bb50u: goto label_24bb50;
        case 0x24bb54u: goto label_24bb54;
        case 0x24bb58u: goto label_24bb58;
        case 0x24bb5cu: goto label_24bb5c;
        case 0x24bb60u: goto label_24bb60;
        case 0x24bb64u: goto label_24bb64;
        case 0x24bb68u: goto label_24bb68;
        case 0x24bb6cu: goto label_24bb6c;
        case 0x24bb70u: goto label_24bb70;
        case 0x24bb74u: goto label_24bb74;
        case 0x24bb78u: goto label_24bb78;
        case 0x24bb7cu: goto label_24bb7c;
        case 0x24bb80u: goto label_24bb80;
        case 0x24bb84u: goto label_24bb84;
        case 0x24bb88u: goto label_24bb88;
        case 0x24bb8cu: goto label_24bb8c;
        case 0x24bb90u: goto label_24bb90;
        case 0x24bb94u: goto label_24bb94;
        case 0x24bb98u: goto label_24bb98;
        case 0x24bb9cu: goto label_24bb9c;
        case 0x24bba0u: goto label_24bba0;
        case 0x24bba4u: goto label_24bba4;
        case 0x24bba8u: goto label_24bba8;
        case 0x24bbacu: goto label_24bbac;
        case 0x24bbb0u: goto label_24bbb0;
        case 0x24bbb4u: goto label_24bbb4;
        case 0x24bbb8u: goto label_24bbb8;
        case 0x24bbbcu: goto label_24bbbc;
        case 0x24bbc0u: goto label_24bbc0;
        case 0x24bbc4u: goto label_24bbc4;
        case 0x24bbc8u: goto label_24bbc8;
        case 0x24bbccu: goto label_24bbcc;
        case 0x24bbd0u: goto label_24bbd0;
        case 0x24bbd4u: goto label_24bbd4;
        case 0x24bbd8u: goto label_24bbd8;
        case 0x24bbdcu: goto label_24bbdc;
        case 0x24bbe0u: goto label_24bbe0;
        case 0x24bbe4u: goto label_24bbe4;
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bbecu: goto label_24bbec;
        case 0x24bbf0u: goto label_24bbf0;
        case 0x24bbf4u: goto label_24bbf4;
        case 0x24bbf8u: goto label_24bbf8;
        case 0x24bbfcu: goto label_24bbfc;
        case 0x24bc00u: goto label_24bc00;
        case 0x24bc04u: goto label_24bc04;
        case 0x24bc08u: goto label_24bc08;
        case 0x24bc0cu: goto label_24bc0c;
        case 0x24bc10u: goto label_24bc10;
        case 0x24bc14u: goto label_24bc14;
        case 0x24bc18u: goto label_24bc18;
        case 0x24bc1cu: goto label_24bc1c;
        case 0x24bc20u: goto label_24bc20;
        case 0x24bc24u: goto label_24bc24;
        case 0x24bc28u: goto label_24bc28;
        case 0x24bc2cu: goto label_24bc2c;
        case 0x24bc30u: goto label_24bc30;
        case 0x24bc34u: goto label_24bc34;
        case 0x24bc38u: goto label_24bc38;
        case 0x24bc3cu: goto label_24bc3c;
        case 0x24bc40u: goto label_24bc40;
        case 0x24bc44u: goto label_24bc44;
        case 0x24bc48u: goto label_24bc48;
        case 0x24bc4cu: goto label_24bc4c;
        case 0x24bc50u: goto label_24bc50;
        case 0x24bc54u: goto label_24bc54;
        case 0x24bc58u: goto label_24bc58;
        case 0x24bc5cu: goto label_24bc5c;
        case 0x24bc60u: goto label_24bc60;
        case 0x24bc64u: goto label_24bc64;
        case 0x24bc68u: goto label_24bc68;
        case 0x24bc6cu: goto label_24bc6c;
        case 0x24bc70u: goto label_24bc70;
        case 0x24bc74u: goto label_24bc74;
        case 0x24bc78u: goto label_24bc78;
        case 0x24bc7cu: goto label_24bc7c;
        case 0x24bc80u: goto label_24bc80;
        case 0x24bc84u: goto label_24bc84;
        case 0x24bc88u: goto label_24bc88;
        case 0x24bc8cu: goto label_24bc8c;
        case 0x24bc90u: goto label_24bc90;
        case 0x24bc94u: goto label_24bc94;
        case 0x24bc98u: goto label_24bc98;
        case 0x24bc9cu: goto label_24bc9c;
        case 0x24bca0u: goto label_24bca0;
        case 0x24bca4u: goto label_24bca4;
        case 0x24bca8u: goto label_24bca8;
        case 0x24bcacu: goto label_24bcac;
        case 0x24bcb0u: goto label_24bcb0;
        case 0x24bcb4u: goto label_24bcb4;
        case 0x24bcb8u: goto label_24bcb8;
        case 0x24bcbcu: goto label_24bcbc;
        case 0x24bcc0u: goto label_24bcc0;
        case 0x24bcc4u: goto label_24bcc4;
        case 0x24bcc8u: goto label_24bcc8;
        case 0x24bcccu: goto label_24bccc;
        case 0x24bcd0u: goto label_24bcd0;
        case 0x24bcd4u: goto label_24bcd4;
        case 0x24bcd8u: goto label_24bcd8;
        case 0x24bcdcu: goto label_24bcdc;
        case 0x24bce0u: goto label_24bce0;
        case 0x24bce4u: goto label_24bce4;
        case 0x24bce8u: goto label_24bce8;
        case 0x24bcecu: goto label_24bcec;
        case 0x24bcf0u: goto label_24bcf0;
        case 0x24bcf4u: goto label_24bcf4;
        case 0x24bcf8u: goto label_24bcf8;
        case 0x24bcfcu: goto label_24bcfc;
        case 0x24bd00u: goto label_24bd00;
        case 0x24bd04u: goto label_24bd04;
        case 0x24bd08u: goto label_24bd08;
        case 0x24bd0cu: goto label_24bd0c;
        case 0x24bd10u: goto label_24bd10;
        case 0x24bd14u: goto label_24bd14;
        case 0x24bd18u: goto label_24bd18;
        case 0x24bd1cu: goto label_24bd1c;
        case 0x24bd20u: goto label_24bd20;
        case 0x24bd24u: goto label_24bd24;
        case 0x24bd28u: goto label_24bd28;
        case 0x24bd2cu: goto label_24bd2c;
        case 0x24bd30u: goto label_24bd30;
        case 0x24bd34u: goto label_24bd34;
        case 0x24bd38u: goto label_24bd38;
        case 0x24bd3cu: goto label_24bd3c;
        case 0x24bd40u: goto label_24bd40;
        case 0x24bd44u: goto label_24bd44;
        case 0x24bd48u: goto label_24bd48;
        case 0x24bd4cu: goto label_24bd4c;
        case 0x24bd50u: goto label_24bd50;
        case 0x24bd54u: goto label_24bd54;
        case 0x24bd58u: goto label_24bd58;
        case 0x24bd5cu: goto label_24bd5c;
        case 0x24bd60u: goto label_24bd60;
        case 0x24bd64u: goto label_24bd64;
        case 0x24bd68u: goto label_24bd68;
        case 0x24bd6cu: goto label_24bd6c;
        case 0x24bd70u: goto label_24bd70;
        case 0x24bd74u: goto label_24bd74;
        case 0x24bd78u: goto label_24bd78;
        case 0x24bd7cu: goto label_24bd7c;
        case 0x24bd80u: goto label_24bd80;
        case 0x24bd84u: goto label_24bd84;
        case 0x24bd88u: goto label_24bd88;
        case 0x24bd8cu: goto label_24bd8c;
        case 0x24bd90u: goto label_24bd90;
        case 0x24bd94u: goto label_24bd94;
        case 0x24bd98u: goto label_24bd98;
        case 0x24bd9cu: goto label_24bd9c;
        case 0x24bda0u: goto label_24bda0;
        case 0x24bda4u: goto label_24bda4;
        case 0x24bda8u: goto label_24bda8;
        case 0x24bdacu: goto label_24bdac;
        case 0x24bdb0u: goto label_24bdb0;
        case 0x24bdb4u: goto label_24bdb4;
        case 0x24bdb8u: goto label_24bdb8;
        case 0x24bdbcu: goto label_24bdbc;
        case 0x24bdc0u: goto label_24bdc0;
        case 0x24bdc4u: goto label_24bdc4;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24bdccu: goto label_24bdcc;
        case 0x24bdd0u: goto label_24bdd0;
        case 0x24bdd4u: goto label_24bdd4;
        case 0x24bdd8u: goto label_24bdd8;
        case 0x24bddcu: goto label_24bddc;
        case 0x24bde0u: goto label_24bde0;
        case 0x24bde4u: goto label_24bde4;
        case 0x24bde8u: goto label_24bde8;
        case 0x24bdecu: goto label_24bdec;
        case 0x24bdf0u: goto label_24bdf0;
        case 0x24bdf4u: goto label_24bdf4;
        case 0x24bdf8u: goto label_24bdf8;
        case 0x24bdfcu: goto label_24bdfc;
        case 0x24be00u: goto label_24be00;
        case 0x24be04u: goto label_24be04;
        case 0x24be08u: goto label_24be08;
        case 0x24be0cu: goto label_24be0c;
        case 0x24be10u: goto label_24be10;
        case 0x24be14u: goto label_24be14;
        case 0x24be18u: goto label_24be18;
        case 0x24be1cu: goto label_24be1c;
        case 0x24be20u: goto label_24be20;
        case 0x24be24u: goto label_24be24;
        case 0x24be28u: goto label_24be28;
        case 0x24be2cu: goto label_24be2c;
        case 0x24be30u: goto label_24be30;
        case 0x24be34u: goto label_24be34;
        case 0x24be38u: goto label_24be38;
        case 0x24be3cu: goto label_24be3c;
        case 0x24be40u: goto label_24be40;
        case 0x24be44u: goto label_24be44;
        case 0x24be48u: goto label_24be48;
        case 0x24be4cu: goto label_24be4c;
        case 0x24be50u: goto label_24be50;
        case 0x24be54u: goto label_24be54;
        case 0x24be58u: goto label_24be58;
        case 0x24be5cu: goto label_24be5c;
        case 0x24be60u: goto label_24be60;
        case 0x24be64u: goto label_24be64;
        case 0x24be68u: goto label_24be68;
        case 0x24be6cu: goto label_24be6c;
        case 0x24be70u: goto label_24be70;
        case 0x24be74u: goto label_24be74;
        case 0x24be78u: goto label_24be78;
        case 0x24be7cu: goto label_24be7c;
        case 0x24be80u: goto label_24be80;
        case 0x24be84u: goto label_24be84;
        case 0x24be88u: goto label_24be88;
        case 0x24be8cu: goto label_24be8c;
        case 0x24be90u: goto label_24be90;
        case 0x24be94u: goto label_24be94;
        case 0x24be98u: goto label_24be98;
        case 0x24be9cu: goto label_24be9c;
        case 0x24bea0u: goto label_24bea0;
        case 0x24bea4u: goto label_24bea4;
        case 0x24bea8u: goto label_24bea8;
        case 0x24beacu: goto label_24beac;
        case 0x24beb0u: goto label_24beb0;
        case 0x24beb4u: goto label_24beb4;
        case 0x24beb8u: goto label_24beb8;
        case 0x24bebcu: goto label_24bebc;
        case 0x24bec0u: goto label_24bec0;
        case 0x24bec4u: goto label_24bec4;
        case 0x24bec8u: goto label_24bec8;
        case 0x24beccu: goto label_24becc;
        case 0x24bed0u: goto label_24bed0;
        case 0x24bed4u: goto label_24bed4;
        case 0x24bed8u: goto label_24bed8;
        case 0x24bedcu: goto label_24bedc;
        case 0x24bee0u: goto label_24bee0;
        case 0x24bee4u: goto label_24bee4;
        case 0x24bee8u: goto label_24bee8;
        case 0x24beecu: goto label_24beec;
        case 0x24bef0u: goto label_24bef0;
        case 0x24bef4u: goto label_24bef4;
        case 0x24bef8u: goto label_24bef8;
        case 0x24befcu: goto label_24befc;
        case 0x24bf00u: goto label_24bf00;
        case 0x24bf04u: goto label_24bf04;
        case 0x24bf08u: goto label_24bf08;
        case 0x24bf0cu: goto label_24bf0c;
        case 0x24bf10u: goto label_24bf10;
        case 0x24bf14u: goto label_24bf14;
        case 0x24bf18u: goto label_24bf18;
        case 0x24bf1cu: goto label_24bf1c;
        case 0x24bf20u: goto label_24bf20;
        case 0x24bf24u: goto label_24bf24;
        case 0x24bf28u: goto label_24bf28;
        case 0x24bf2cu: goto label_24bf2c;
        case 0x24bf30u: goto label_24bf30;
        case 0x24bf34u: goto label_24bf34;
        case 0x24bf38u: goto label_24bf38;
        case 0x24bf3cu: goto label_24bf3c;
        case 0x24bf40u: goto label_24bf40;
        case 0x24bf44u: goto label_24bf44;
        case 0x24bf48u: goto label_24bf48;
        case 0x24bf4cu: goto label_24bf4c;
        case 0x24bf50u: goto label_24bf50;
        case 0x24bf54u: goto label_24bf54;
        case 0x24bf58u: goto label_24bf58;
        case 0x24bf5cu: goto label_24bf5c;
        case 0x24bf60u: goto label_24bf60;
        case 0x24bf64u: goto label_24bf64;
        case 0x24bf68u: goto label_24bf68;
        case 0x24bf6cu: goto label_24bf6c;
        case 0x24bf70u: goto label_24bf70;
        case 0x24bf74u: goto label_24bf74;
        case 0x24bf78u: goto label_24bf78;
        case 0x24bf7cu: goto label_24bf7c;
        case 0x24bf80u: goto label_24bf80;
        case 0x24bf84u: goto label_24bf84;
        case 0x24bf88u: goto label_24bf88;
        case 0x24bf8cu: goto label_24bf8c;
        case 0x24bf90u: goto label_24bf90;
        case 0x24bf94u: goto label_24bf94;
        case 0x24bf98u: goto label_24bf98;
        case 0x24bf9cu: goto label_24bf9c;
        case 0x24bfa0u: goto label_24bfa0;
        case 0x24bfa4u: goto label_24bfa4;
        case 0x24bfa8u: goto label_24bfa8;
        case 0x24bfacu: goto label_24bfac;
        case 0x24bfb0u: goto label_24bfb0;
        case 0x24bfb4u: goto label_24bfb4;
        case 0x24bfb8u: goto label_24bfb8;
        case 0x24bfbcu: goto label_24bfbc;
        case 0x24bfc0u: goto label_24bfc0;
        case 0x24bfc4u: goto label_24bfc4;
        case 0x24bfc8u: goto label_24bfc8;
        case 0x24bfccu: goto label_24bfcc;
        case 0x24bfd0u: goto label_24bfd0;
        case 0x24bfd4u: goto label_24bfd4;
        case 0x24bfd8u: goto label_24bfd8;
        case 0x24bfdcu: goto label_24bfdc;
        case 0x24bfe0u: goto label_24bfe0;
        case 0x24bfe4u: goto label_24bfe4;
        case 0x24bfe8u: goto label_24bfe8;
        case 0x24bfecu: goto label_24bfec;
        case 0x24bff0u: goto label_24bff0;
        case 0x24bff4u: goto label_24bff4;
        case 0x24bff8u: goto label_24bff8;
        case 0x24bffcu: goto label_24bffc;
        case 0x24c000u: goto label_24c000;
        case 0x24c004u: goto label_24c004;
        case 0x24c008u: goto label_24c008;
        case 0x24c00cu: goto label_24c00c;
        case 0x24c010u: goto label_24c010;
        case 0x24c014u: goto label_24c014;
        case 0x24c018u: goto label_24c018;
        case 0x24c01cu: goto label_24c01c;
        case 0x24c020u: goto label_24c020;
        case 0x24c024u: goto label_24c024;
        case 0x24c028u: goto label_24c028;
        case 0x24c02cu: goto label_24c02c;
        case 0x24c030u: goto label_24c030;
        case 0x24c034u: goto label_24c034;
        case 0x24c038u: goto label_24c038;
        case 0x24c03cu: goto label_24c03c;
        case 0x24c040u: goto label_24c040;
        case 0x24c044u: goto label_24c044;
        case 0x24c048u: goto label_24c048;
        case 0x24c04cu: goto label_24c04c;
        case 0x24c050u: goto label_24c050;
        case 0x24c054u: goto label_24c054;
        case 0x24c058u: goto label_24c058;
        case 0x24c05cu: goto label_24c05c;
        case 0x24c060u: goto label_24c060;
        case 0x24c064u: goto label_24c064;
        case 0x24c068u: goto label_24c068;
        case 0x24c06cu: goto label_24c06c;
        case 0x24c070u: goto label_24c070;
        case 0x24c074u: goto label_24c074;
        case 0x24c078u: goto label_24c078;
        case 0x24c07cu: goto label_24c07c;
        case 0x24c080u: goto label_24c080;
        case 0x24c084u: goto label_24c084;
        case 0x24c088u: goto label_24c088;
        case 0x24c08cu: goto label_24c08c;
        case 0x24c090u: goto label_24c090;
        case 0x24c094u: goto label_24c094;
        case 0x24c098u: goto label_24c098;
        case 0x24c09cu: goto label_24c09c;
        case 0x24c0a0u: goto label_24c0a0;
        case 0x24c0a4u: goto label_24c0a4;
        case 0x24c0a8u: goto label_24c0a8;
        case 0x24c0acu: goto label_24c0ac;
        case 0x24c0b0u: goto label_24c0b0;
        case 0x24c0b4u: goto label_24c0b4;
        case 0x24c0b8u: goto label_24c0b8;
        case 0x24c0bcu: goto label_24c0bc;
        case 0x24c0c0u: goto label_24c0c0;
        case 0x24c0c4u: goto label_24c0c4;
        case 0x24c0c8u: goto label_24c0c8;
        case 0x24c0ccu: goto label_24c0cc;
        case 0x24c0d0u: goto label_24c0d0;
        case 0x24c0d4u: goto label_24c0d4;
        case 0x24c0d8u: goto label_24c0d8;
        case 0x24c0dcu: goto label_24c0dc;
        case 0x24c0e0u: goto label_24c0e0;
        case 0x24c0e4u: goto label_24c0e4;
        case 0x24c0e8u: goto label_24c0e8;
        case 0x24c0ecu: goto label_24c0ec;
        case 0x24c0f0u: goto label_24c0f0;
        case 0x24c0f4u: goto label_24c0f4;
        case 0x24c0f8u: goto label_24c0f8;
        case 0x24c0fcu: goto label_24c0fc;
        case 0x24c100u: goto label_24c100;
        case 0x24c104u: goto label_24c104;
        case 0x24c108u: goto label_24c108;
        case 0x24c10cu: goto label_24c10c;
        case 0x24c110u: goto label_24c110;
        case 0x24c114u: goto label_24c114;
        case 0x24c118u: goto label_24c118;
        case 0x24c11cu: goto label_24c11c;
        case 0x24c120u: goto label_24c120;
        case 0x24c124u: goto label_24c124;
        case 0x24c128u: goto label_24c128;
        case 0x24c12cu: goto label_24c12c;
        case 0x24c130u: goto label_24c130;
        case 0x24c134u: goto label_24c134;
        case 0x24c138u: goto label_24c138;
        case 0x24c13cu: goto label_24c13c;
        case 0x24c140u: goto label_24c140;
        case 0x24c144u: goto label_24c144;
        case 0x24c148u: goto label_24c148;
        case 0x24c14cu: goto label_24c14c;
        case 0x24c150u: goto label_24c150;
        case 0x24c154u: goto label_24c154;
        case 0x24c158u: goto label_24c158;
        case 0x24c15cu: goto label_24c15c;
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1a0u: goto label_24c1a0;
        case 0x24c1a4u: goto label_24c1a4;
        case 0x24c1a8u: goto label_24c1a8;
        case 0x24c1acu: goto label_24c1ac;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b4u: goto label_24c1b4;
        case 0x24c1b8u: goto label_24c1b8;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1c0u: goto label_24c1c0;
        case 0x24c1c4u: goto label_24c1c4;
        case 0x24c1c8u: goto label_24c1c8;
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1dcu: goto label_24c1dc;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1e4u: goto label_24c1e4;
        case 0x24c1e8u: goto label_24c1e8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f0u: goto label_24c1f0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c1f8u: goto label_24c1f8;
        case 0x24c1fcu: goto label_24c1fc;
        case 0x24c200u: goto label_24c200;
        case 0x24c204u: goto label_24c204;
        default: return;
    }

label_24ba38:
    // 0x24ba38: 0x0  nop
    ctx->pc = 0x24ba38u;
    // NOP
label_24ba3c:
    // 0x24ba3c: 0x0  nop
    ctx->pc = 0x24ba3cu;
    // NOP
label_24ba40:
    // 0x24ba40: 0x0  nop
    ctx->pc = 0x24ba40u;
    // NOP
label_24ba44:
    // 0x24ba44: 0x0  nop
    ctx->pc = 0x24ba44u;
    // NOP
label_24ba48:
    // 0x24ba48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba4c:
    // 0x24ba4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ba4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba50:
    // 0x24ba50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ba50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba54:
    // 0x24ba54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba58:
    // 0x24ba58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba5c:
    // 0x24ba5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba60:
    // 0x24ba60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba64:
    // 0x24ba64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ba64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba68:
    // 0x24ba68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ba68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba6c:
    // 0x24ba6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba70:
    // 0x24ba70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba74:
    // 0x24ba74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba78:
    // 0x24ba78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ba78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba7c:
    // 0x24ba7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ba7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba80:
    // 0x24ba80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba84:
    // 0x24ba84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba88:
    // 0x24ba88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba8c:
    // 0x24ba8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BA8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba90:
    // 0x24ba90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ba90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba94:
    // 0x24ba94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ba94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba98:
    // 0x24ba98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba9c:
    // 0x24ba9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa0:
    // 0x24baa0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24baa0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BAA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa4:
    // 0x24baa4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24baa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BAA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa8:
    // 0x24baa8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24baa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24baac:
    // 0x24baac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24baacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bab0:
    // 0x24bab0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bab4:
    // 0x24bab4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bab4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BAB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bab8:
    // 0x24bab8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bab8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BAB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24babc:
    // 0x24babc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24babcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BABC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bac0:
    // 0x24bac0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bac4:
    // 0x24bac4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bac8:
    // 0x24bac8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bacc:
    // 0x24bacc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24baccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BACC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad0:
    // 0x24bad0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bad0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BAD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad4:
    // 0x24bad4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bad4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BAD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad8:
    // 0x24bad8: 0x42f2147b  .word       0x42F2147B                   # INVALID     $s7, $s2, 0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bad8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24BAD8 raw=0x42F2147B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24badc:
    // 0x24badc: 0x80009  .word       0x00080009                   # jalr        $zero, $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_24bae0:
    if (ctx->pc == 0x24BAE0u) {
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BADCu;
        // 0x24bae0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAE4u;
        goto label_24bae4;
    }
    ctx->pc = 0x24BADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BADCu;
        // 0x24bae0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BADCu, 0x24BAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BAE4u;
label_24bae4:
    // 0x24bae4: 0x880088  .word       0x00880088                   # jr          $a0 # 00080080 <InstrIdType: CPU_SPECIAL>
label_24bae8:
    if (ctx->pc == 0x24BAE8u) {
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x82e0047  j           func_B8011C (Delay Slot)
        // J 0xB8011C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAECu;
        goto label_24baec;
    }
    ctx->pc = 0x24BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x82e0047  j           func_B8011C (Delay Slot)
        // J 0xB8011C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BAE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x85b010d  j           func_16C0434
label_24baf0:
    if (ctx->pc == 0x24BAF0u) {
        ctx->pc = 0x24BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAECu;
        // 0x24baf0: 0x1ac01ab  .word       0x01AC01AB                   # sltu        $zero, $t5, $t4 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAF4u;
        goto label_24baf4;
    }
    ctx->pc = 0x24BAECu;
    ctx->pc = 0x24BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAECu;
    // 0x24baf0: 0x1ac01ab  .word       0x01AC01AB                   # sltu        $zero, $t5, $t4 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C0434u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C0434u, 0x24BAECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BAF4u;
label_24baf4:
    // 0x24baf4: 0x16f0146  .word       0x016F0146                   # srlv        $zero, $t7, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24baf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 11) & 0x1F));
label_24baf8:
    // 0x24baf8: 0x3a0089  .word       0x003A0089                   # jalr        $zero, $at # 001A0080 <InstrIdType: CPU_SPECIAL>
label_24bafc:
    if (ctx->pc == 0x24BAFCu) {
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB00u;
        goto label_24bb00;
    }
    ctx->pc = 0x24BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BAF8u, 0x24BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BB00u;
label_24bb00:
    // 0x24bb00: 0x0  nop
    ctx->pc = 0x24bb00u;
    // NOP
label_24bb04:
    // 0x24bb04: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB04 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb08:
    // 0x24bb08: 0x0  nop
    ctx->pc = 0x24bb08u;
    // NOP
label_24bb0c:
    // 0x24bb0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bb10:
    // 0x24bb10: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BB10 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb14:
    // 0x24bb14: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB14 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb18:
    // 0x24bb18: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24bb18u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24bb1c:
    // 0x24bb1c: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24bb20:
    if (ctx->pc == 0x24BB20u) {
        ctx->pc = 0x24BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB1Cu;
        // 0x24bb20: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB20 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB24u;
        goto label_24bb24;
    }
    ctx->pc = 0x24BB1Cu;
    {
        const bool branch_taken_0x24bb1c = (false);
        ctx->pc = 0x24BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB1Cu;
        // 0x24bb20: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB20 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb1c) {
            ctx->pc = 0x24BB20u;
            goto label_24bb20;
        }
    }
    ctx->pc = 0x24BB24u;
label_24bb24:
    // 0x24bb24: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB24 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb28:
    // 0x24bb28: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x24bb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb2c:
    // 0x24bb2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bb2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bb30:
    // 0x24bb30: 0x0  nop
    ctx->pc = 0x24bb30u;
    // NOP
label_24bb34:
    // 0x24bb34: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB34 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb38:
    // 0x24bb38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24bb38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24bb3c:
    // 0x24bb3c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24bb3cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24bb40:
    // 0x24bb40: 0x0  nop
    ctx->pc = 0x24bb40u;
    // NOP
label_24bb44:
    // 0x24bb44: 0x0  nop
    ctx->pc = 0x24bb44u;
    // NOP
label_24bb48:
    // 0x24bb48: 0x0  nop
    ctx->pc = 0x24bb48u;
    // NOP
label_24bb4c:
    // 0x24bb4c: 0x0  nop
    ctx->pc = 0x24bb4cu;
    // NOP
label_24bb50:
    // 0x24bb50: 0x0  nop
    ctx->pc = 0x24bb50u;
    // NOP
label_24bb54:
    // 0x24bb54: 0x0  nop
    ctx->pc = 0x24bb54u;
    // NOP
label_24bb58:
    // 0x24bb58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb5c:
    // 0x24bb5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb60:
    // 0x24bb60: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb64:
    // 0x24bb64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BB64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb68:
    // 0x24bb68: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB68 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb6c:
    // 0x24bb6c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb6cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB6C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb70:
    // 0x24bb70: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb74:
    // 0x24bb74: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb78:
    // 0x24bb78: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb7c:
    // 0x24bb7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BB7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb80:
    // 0x24bb80: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB80 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb84:
    // 0x24bb84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb88:
    // 0x24bb88: 0x422c0000  .word       0x422C0000                   # INVALID     $s1, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BB88 raw=0x422C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb8c:
    // 0x24bb8c: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24bb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb90:
    // 0x24bb90: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24bb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb94:
    // 0x24bb94: 0x41a80000  .word       0x41A80000                   # INVALID     $t5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB94 raw=0x41A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb98:
    // 0x24bb98: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24BB98 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb9c:
    // 0x24bb9c: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BB9C raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bba0:
    // 0x24bba0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bba4:
    // 0x24bba4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bba8:
    // 0x24bba8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbac:
    // 0x24bbac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BBAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb0:
    // 0x24bbb0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BBB0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb4:
    // 0x24bbb4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BBB4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb8:
    // 0x24bbb8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbbc:
    // 0x24bbbc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24bbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbc0:
    // 0x24bbc0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbc4:
    // 0x24bbc4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BBC4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbc8:
    // 0x24bbc8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BBC8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbcc:
    // 0x24bbcc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BBCC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbd0:
    // 0x24bbd0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbd4:
    // 0x24bbd4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbd8:
    // 0x24bbd8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbdc:
    // 0x24bbdc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bbdcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BBDC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe0:
    // 0x24bbe0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bbe0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BBE0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe4:
    // 0x24bbe4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbe4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BBE4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe8:
    // 0x24bbe8: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbe8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BBE8 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbec:
    // 0x24bbec: 0x90009  .word       0x00090009                   # jalr        $zero, $zero # 00090000 <InstrIdType: CPU_SPECIAL>
label_24bbf0:
    if (ctx->pc == 0x24BBF0u) {
        ctx->pc = 0x24BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBECu;
        // 0x24bbf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBF4u;
        goto label_24bbf4;
    }
    ctx->pc = 0x24BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBECu;
        // 0x24bbf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BBECu, 0x24BBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BBF4u;
label_24bbf4:
    // 0x24bbf4: 0x8a008a  .word       0x008A008A                   # movz        $zero, $a0, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bbf4u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 4));
label_24bbf8:
    // 0x24bbf8: 0x82f0048  j           func_BC0120
label_24bbfc:
    if (ctx->pc == 0x24BBFCu) {
        ctx->pc = 0x24BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBF8u;
        // 0x24bbfc: 0x85c010e  j           func_1700438 (Delay Slot)
        // J 0x1700438 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC00u;
        goto label_24bc00;
    }
    ctx->pc = 0x24BBF8u;
    ctx->pc = 0x24BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBF8u;
    // 0x24bbfc: 0x85c010e  j           func_1700438 (Delay Slot)
    // J 0x1700438 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xBC0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xBC0120u, 0x24BBF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BC00u;
label_24bc00:
    // 0x24bc00: 0x1af01ae  .word       0x01AF01AE                   # dsub        $zero, $t5, $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 13); int64_t b = (int64_t)GPR_S64(ctx, 15); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24bc04:
    // 0x24bc04: 0x1700147  .word       0x01700147                   # srav        $zero, $s0, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 11) & 0x1F));
label_24bc08:
    // 0x24bc08: 0x3b008b  .word       0x003B008B                   # movn        $zero, $at, $k1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc08u;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
label_24bc0c:
    // 0x24bc0c: 0x12  mflo        $zero
    ctx->pc = 0x24bc0cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24bc10:
    // 0x24bc10: 0x0  nop
    ctx->pc = 0x24bc10u;
    // NOP
label_24bc14:
    // 0x24bc14: 0x0  nop
    ctx->pc = 0x24bc14u;
    // NOP
label_24bc18:
    // 0x24bc18: 0x0  nop
    ctx->pc = 0x24bc18u;
    // NOP
label_24bc1c:
    // 0x24bc1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bc1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bc20:
    // 0x24bc20: 0x0  nop
    ctx->pc = 0x24bc20u;
    // NOP
label_24bc24:
    // 0x24bc24: 0x0  nop
    ctx->pc = 0x24bc24u;
    // NOP
label_24bc28:
    // 0x24bc28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24bc28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24bc2c:
    // 0x24bc2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bc2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BC2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc30:
    // 0x24bc30: 0x0  nop
    ctx->pc = 0x24bc30u;
    // NOP
label_24bc34:
    // 0x24bc34: 0x0  nop
    ctx->pc = 0x24bc34u;
    // NOP
label_24bc38:
    // 0x24bc38: 0x0  nop
    ctx->pc = 0x24bc38u;
    // NOP
label_24bc3c:
    // 0x24bc3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bc3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bc40:
    // 0x24bc40: 0x0  nop
    ctx->pc = 0x24bc40u;
    // NOP
label_24bc44:
    // 0x24bc44: 0x0  nop
    ctx->pc = 0x24bc44u;
    // NOP
label_24bc48:
    // 0x24bc48: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24bc48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24bc4c:
    // 0x24bc4c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bc4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BC4C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc50:
    // 0x24bc50: 0x0  nop
    ctx->pc = 0x24bc50u;
    // NOP
label_24bc54:
    // 0x24bc54: 0x0  nop
    ctx->pc = 0x24bc54u;
    // NOP
label_24bc58:
    // 0x24bc58: 0x0  nop
    ctx->pc = 0x24bc58u;
    // NOP
label_24bc5c:
    // 0x24bc5c: 0x0  nop
    ctx->pc = 0x24bc5cu;
    // NOP
label_24bc60:
    // 0x24bc60: 0x0  nop
    ctx->pc = 0x24bc60u;
    // NOP
label_24bc64:
    // 0x24bc64: 0x0  nop
    ctx->pc = 0x24bc64u;
    // NOP
label_24bc68:
    // 0x24bc68: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc6c:
    // 0x24bc6c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc70:
    // 0x24bc70: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc74:
    // 0x24bc74: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bc74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BC74 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc78:
    // 0x24bc78: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bc78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BC78 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc7c:
    // 0x24bc7c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bc7cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BC7C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc80:
    // 0x24bc80: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc84:
    // 0x24bc84: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc88:
    // 0x24bc88: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc8c:
    // 0x24bc8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bc8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BC8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc90:
    // 0x24bc90: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bc90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BC90 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc94:
    // 0x24bc94: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bc94u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BC94 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc98:
    // 0x24bc98: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bc9c:
    // 0x24bc9c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24bc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bca0:
    // 0x24bca0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24bca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bca4:
    // 0x24bca4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bca4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BCA4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bca8:
    // 0x24bca8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bca8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BCA8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcac:
    // 0x24bcac: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BCAC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcb0:
    // 0x24bcb0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcb4:
    // 0x24bcb4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcb8:
    // 0x24bcb8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcbc:
    // 0x24bcbc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BCBC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcc0:
    // 0x24bcc0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BCC0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcc4:
    // 0x24bcc4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BCC4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcc8:
    // 0x24bcc8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bccc:
    // 0x24bccc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24bcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcd0:
    // 0x24bcd0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcd4:
    // 0x24bcd4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BCD4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcd8:
    // 0x24bcd8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BCD8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcdc:
    // 0x24bcdc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BCDC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bce0:
    // 0x24bce0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bce4:
    // 0x24bce4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bce8:
    // 0x24bce8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bcec:
    // 0x24bcec: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bcecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BCEC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcf0:
    // 0x24bcf0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bcf0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BCF0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcf4:
    // 0x24bcf4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcf4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BCF4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcf8:
    // 0x24bcf8: 0x42e7d1ec  .word       0x42E7D1EC                   # INVALID     $s7, $a3, -0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bcf8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24BCF8 raw=0x42E7D1EC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bcfc:
    // 0x24bcfc: 0xa0009  .word       0x000A0009                   # jalr        $zero, $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
label_24bd00:
    if (ctx->pc == 0x24BD00u) {
        ctx->pc = 0x24BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCFCu;
        // 0x24bd00: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD04u;
        goto label_24bd04;
    }
    ctx->pc = 0x24BCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCFCu;
        // 0x24bd00: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BCFCu, 0x24BD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BD04u;
label_24bd04:
    // 0x24bd04: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bd04u;
    ctx->pc = 0x24BD08u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_24bd08:
    // 0x24bd08: 0x8300049  j           func_C00124
label_24bd0c:
    if (ctx->pc == 0x24BD0Cu) {
        ctx->pc = 0x24BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD08u;
        // 0x24bd0c: 0x85d010f  j           func_174043C (Delay Slot)
        // J 0x174043C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD10u;
        goto label_24bd10;
    }
    ctx->pc = 0x24BD08u;
    ctx->pc = 0x24BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD08u;
    // 0x24bd0c: 0x85d010f  j           func_174043C (Delay Slot)
    // J 0x174043C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC00124u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC00124u, 0x24BD08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BD10u;
label_24bd10:
    // 0x24bd10: 0x1b201b1  tgeu        $t5, $s2, 6
    ctx->pc = 0x24bd10u;
    if (GPR_U64(ctx, 13) >= GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_24bd14:
    // 0x24bd14: 0x1710148  .word       0x01710148                   # jr          $t3 # 00110140 <InstrIdType: CPU_SPECIAL>
label_24bd18:
    if (ctx->pc == 0x24BD18u) {
        ctx->pc = 0x24BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD14u;
        // 0x24bd18: 0x3c008d  break       60, 2 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD1Cu;
        goto label_24bd1c;
    }
    ctx->pc = 0x24BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        ctx->pc = 0x24BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD14u;
        // 0x24bd18: 0x3c008d  break       60, 2 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24BD1Cu;
label_24bd1c:
    // 0x24bd1c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x24bd1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24bd20:
    // 0x24bd20: 0x0  nop
    ctx->pc = 0x24bd20u;
    // NOP
label_24bd24:
    // 0x24bd24: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BD24 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd28:
    // 0x24bd28: 0x0  nop
    ctx->pc = 0x24bd28u;
    // NOP
label_24bd2c:
    // 0x24bd2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bd30:
    // 0x24bd30: 0x42bc0000  .word       0x42BC0000                   # INVALID     $s5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BD30 raw=0x42BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd34:
    // 0x24bd34: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BD34 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd38:
    // 0x24bd38: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24bd3c:
    if (ctx->pc == 0x24BD3Cu) {
        ctx->pc = 0x24BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD38u;
        // 0x24bd3c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BD3C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD40u;
        goto label_24bd40;
    }
    ctx->pc = 0x24BD38u;
    {
        const bool branch_taken_0x24bd38 = (false);
        ctx->pc = 0x24BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD38u;
        // 0x24bd3c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BD3C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd38) {
            ctx->pc = 0x24BD3Cu;
            goto label_24bd3c;
        }
    }
    ctx->pc = 0x24BD40u;
label_24bd40:
    // 0x24bd40: 0x0  nop
    ctx->pc = 0x24bd40u;
    // NOP
label_24bd44:
    // 0x24bd44: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd48:
    // 0x24bd48: 0x0  nop
    ctx->pc = 0x24bd48u;
    // NOP
label_24bd4c:
    // 0x24bd4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bd50:
    // 0x24bd50: 0x42bc0000  .word       0x42BC0000                   # INVALID     $s5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BD50 raw=0x42BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd54:
    // 0x24bd54: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24BD54 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd58:
    // 0x24bd58: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BD58 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd5c:
    // 0x24bd5c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BD5C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd60:
    // 0x24bd60: 0x0  nop
    ctx->pc = 0x24bd60u;
    // NOP
label_24bd64:
    // 0x24bd64: 0x0  nop
    ctx->pc = 0x24bd64u;
    // NOP
label_24bd68:
    // 0x24bd68: 0x0  nop
    ctx->pc = 0x24bd68u;
    // NOP
label_24bd6c:
    // 0x24bd6c: 0x0  nop
    ctx->pc = 0x24bd6cu;
    // NOP
label_24bd70:
    // 0x24bd70: 0x0  nop
    ctx->pc = 0x24bd70u;
    // NOP
label_24bd74:
    // 0x24bd74: 0x0  nop
    ctx->pc = 0x24bd74u;
    // NOP
label_24bd78:
    // 0x24bd78: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd7c:
    // 0x24bd7c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd80:
    // 0x24bd80: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd84:
    // 0x24bd84: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BD84 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd88:
    // 0x24bd88: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bd88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BD88 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd8c:
    // 0x24bd8c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bd8cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BD8C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bd90:
    // 0x24bd90: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd94:
    // 0x24bd94: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd98:
    // 0x24bd98: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bd9c:
    // 0x24bd9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bd9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BD9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bda0:
    // 0x24bda0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bda0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BDA0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bda4:
    // 0x24bda4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bda4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BDA4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bda8:
    // 0x24bda8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdac:
    // 0x24bdac: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24bdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdb0:
    // 0x24bdb0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24bdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdb4:
    // 0x24bdb4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BDB4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdb8:
    // 0x24bdb8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bdb8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BDB8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdbc:
    // 0x24bdbc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BDBC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdc0:
    // 0x24bdc0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdc4:
    // 0x24bdc4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdc8:
    // 0x24bdc8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdcc:
    // 0x24bdcc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BDCC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdd0:
    // 0x24bdd0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdd0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BDD0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdd4:
    // 0x24bdd4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BDD4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdd8:
    // 0x24bdd8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bddc:
    // 0x24bddc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24bddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bde0:
    // 0x24bde0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bde4:
    // 0x24bde4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bde4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BDE4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bde8:
    // 0x24bde8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bde8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BDE8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdec:
    // 0x24bdec: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bdecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BDEC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bdf0:
    // 0x24bdf0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdf4:
    // 0x24bdf4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdf8:
    // 0x24bdf8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bdfc:
    // 0x24bdfc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bdfcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BDFC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be00:
    // 0x24be00: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be00u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE00 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be04:
    // 0x24be04: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BE04 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be08:
    // 0x24be08: 0x42e96148  .word       0x42E96148                   # INVALID     $s7, $t1, 0x6148 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24BE08 raw=0x42E96148"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be0c:
    // 0x24be0c: 0xb0009  .word       0x000B0009                   # jalr        $zero, $zero # 000B0000 <InstrIdType: CPU_SPECIAL>
label_24be10:
    if (ctx->pc == 0x24BE10u) {
        ctx->pc = 0x24BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE0Cu;
        // 0x24be10: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE14u;
        goto label_24be14;
    }
    ctx->pc = 0x24BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE0Cu;
        // 0x24be10: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE0Cu, 0x24BE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BE14u;
label_24be14:
    // 0x24be14: 0x8e008e  .word       0x008E008E                   # INVALID     $a0, $t6, 0x8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24be14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24BE14 raw=0x008E008E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be18:
    // 0x24be18: 0x831004a  j           func_C40128
label_24be1c:
    if (ctx->pc == 0x24BE1Cu) {
        ctx->pc = 0x24BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE18u;
        // 0x24be1c: 0x85e0110  j           func_1780440 (Delay Slot)
        // J 0x1780440 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE20u;
        goto label_24be20;
    }
    ctx->pc = 0x24BE18u;
    ctx->pc = 0x24BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE18u;
    // 0x24be1c: 0x85e0110  j           func_1780440 (Delay Slot)
    // J 0x1780440 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40128u, 0x24BE18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BE20u;
label_24be20:
    // 0x24be20: 0x1b501b4  teq         $t5, $s5, 6
    ctx->pc = 0x24be20u;
    if (GPR_U64(ctx, 13) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_24be24:
    // 0x24be24: 0x1720149  .word       0x01720149                   # jalr        $zero, $t3 # 00120140 <InstrIdType: CPU_SPECIAL>
label_24be28:
    if (ctx->pc == 0x24BE28u) {
        ctx->pc = 0x24BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE24u;
        // 0x24be28: 0x3d008f  .word       0x003D008F                   # sync # 003D0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE2Cu;
        goto label_24be2c;
    }
    ctx->pc = 0x24BE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        ctx->pc = 0x24BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE24u;
        // 0x24be28: 0x3d008f  .word       0x003D008F                   # sync # 003D0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE24u, 0x24BE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BE2Cu;
label_24be2c:
    // 0x24be2c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x24be2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_24be30:
    // 0x24be30: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24BE30 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be34:
    // 0x24be34: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be34u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE34 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be38:
    // 0x24be38: 0x42860000  .word       0x42860000                   # INVALID     $s4, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be38u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BE38 raw=0x42860000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be3c:
    // 0x24be3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24be3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24be40:
    // 0x24be40: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x24BE40 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be44:
    // 0x24be44: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be44u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE44 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be48:
    // 0x24be48: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24be4c:
    if (ctx->pc == 0x24BE4Cu) {
        ctx->pc = 0x24BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE48u;
        // 0x24be4c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BE4C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE50u;
        goto label_24be50;
    }
    ctx->pc = 0x24BE48u;
    {
        const bool branch_taken_0x24be48 = (false);
        ctx->pc = 0x24BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE48u;
        // 0x24be4c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BE4C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be48) {
            ctx->pc = 0x24BE4Cu;
            goto label_24be4c;
        }
    }
    ctx->pc = 0x24BE50u;
label_24be50:
    // 0x24be50: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24BE50 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be54:
    // 0x24be54: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be54u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE54 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be58:
    // 0x24be58: 0xc2860000  ll          $a2, 0x0($s4)
    ctx->pc = 0x24be58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24be5c:
    // 0x24be5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24be5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24be60:
    // 0x24be60: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be60u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x24BE60 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be64:
    // 0x24be64: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE64 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be68:
    // 0x24be68: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24be6c:
    if (ctx->pc == 0x24BE6Cu) {
        ctx->pc = 0x24BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE68u;
        // 0x24be6c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BE6C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE70u;
        goto label_24be70;
    }
    ctx->pc = 0x24BE68u;
    {
        const bool branch_taken_0x24be68 = (false);
        ctx->pc = 0x24BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE68u;
        // 0x24be6c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BE6C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be68) {
            ctx->pc = 0x24BE6Cu;
            goto label_24be6c;
        }
    }
    ctx->pc = 0x24BE70u;
label_24be70:
    // 0x24be70: 0x0  nop
    ctx->pc = 0x24be70u;
    // NOP
label_24be74:
    // 0x24be74: 0x0  nop
    ctx->pc = 0x24be74u;
    // NOP
label_24be78:
    // 0x24be78: 0x0  nop
    ctx->pc = 0x24be78u;
    // NOP
label_24be7c:
    // 0x24be7c: 0x0  nop
    ctx->pc = 0x24be7cu;
    // NOP
label_24be80:
    // 0x24be80: 0x0  nop
    ctx->pc = 0x24be80u;
    // NOP
label_24be84:
    // 0x24be84: 0x0  nop
    ctx->pc = 0x24be84u;
    // NOP
label_24be88:
    // 0x24be88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24be88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24be8c:
    // 0x24be8c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24be8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24be90:
    // 0x24be90: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24be90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24be94:
    // 0x24be94: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24be94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BE94 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be98:
    // 0x24be98: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be98u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE98 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24be9c:
    // 0x24be9c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24be9cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BE9C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bea0:
    // 0x24bea0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bea4:
    // 0x24bea4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bea8:
    // 0x24bea8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24beac:
    // 0x24beac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24beacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BEAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24beb0:
    // 0x24beb0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24beb0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BEB0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24beb4:
    // 0x24beb4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24beb4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BEB4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24beb8:
    // 0x24beb8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24beb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bebc:
    // 0x24bebc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24bebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bec0:
    // 0x24bec0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24bec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bec4:
    // 0x24bec4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bec4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BEC4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bec8:
    // 0x24bec8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bec8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BEC8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24becc:
    // 0x24becc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24beccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BECC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bed0:
    // 0x24bed0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bed4:
    // 0x24bed4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bed8:
    // 0x24bed8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bedc:
    // 0x24bedc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bedcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BEDC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bee0:
    // 0x24bee0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bee0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BEE0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bee4:
    // 0x24bee4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bee4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BEE4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bee8:
    // 0x24bee8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24beec:
    // 0x24beec: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24beecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bef0:
    // 0x24bef0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bef4:
    // 0x24bef4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bef4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BEF4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bef8:
    // 0x24bef8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bef8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BEF8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24befc:
    // 0x24befc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24befcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BEFC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf00:
    // 0x24bf00: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bf04:
    // 0x24bf04: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bf08:
    // 0x24bf08: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bf0c:
    // 0x24bf0c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bf0cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BF0C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf10:
    // 0x24bf10: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bf10u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BF10 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf14:
    // 0x24bf14: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BF14 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf18:
    // 0x24bf18: 0x43048f5c  .word       0x43048F5C                   # INVALID     $t8, $a0, -0x70A4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24BF18 raw=0x43048F5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf1c:
    // 0x24bf1c: 0xc0009  .word       0x000C0009                   # jalr        $zero, $zero # 000C0000 <InstrIdType: CPU_SPECIAL>
label_24bf20:
    if (ctx->pc == 0x24BF20u) {
        ctx->pc = 0x24BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF1Cu;
        // 0x24bf20: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF24u;
        goto label_24bf24;
    }
    ctx->pc = 0x24BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF1Cu;
        // 0x24bf20: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF1Cu, 0x24BF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BF24u;
label_24bf24:
    // 0x24bf24: 0x900090  .word       0x00900090                   # mfhi        $zero # 00900080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bf24u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24bf28:
    // 0x24bf28: 0x832004b  j           func_C8012C
label_24bf2c:
    if (ctx->pc == 0x24BF2Cu) {
        ctx->pc = 0x24BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF28u;
        // 0x24bf2c: 0x85f0111  j           func_17C0444 (Delay Slot)
        // J 0x17C0444 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF30u;
        goto label_24bf30;
    }
    ctx->pc = 0x24BF28u;
    ctx->pc = 0x24BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF28u;
    // 0x24bf2c: 0x85f0111  j           func_17C0444 (Delay Slot)
    // J 0x17C0444 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC8012Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC8012Cu, 0x24BF28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BF30u;
label_24bf30:
    // 0x24bf30: 0x1b801b7  .word       0x01B801B7                   # INVALID     $t5, $t8, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bf30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24BF30 raw=0x01B801B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf34:
    // 0x24bf34: 0x173014a  .word       0x0173014A                   # movz        $zero, $t3, $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bf34u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 11));
label_24bf38:
    // 0x24bf38: 0x3e0091  .word       0x003E0091                   # mthi        $at # 001E0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bf38u;
    ctx->hi = GPR_U64(ctx, 1);
label_24bf3c:
    // 0x24bf3c: 0x8  jr          $zero
label_24bf40:
    if (ctx->pc == 0x24BF40u) {
        ctx->pc = 0x24BF44u;
        goto label_24bf44;
    }
    ctx->pc = 0x24BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24BF44u;
label_24bf44:
    // 0x24bf44: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BF44 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf48:
    // 0x24bf48: 0x0  nop
    ctx->pc = 0x24bf48u;
    // NOP
label_24bf4c:
    // 0x24bf4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bf4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bf50:
    // 0x24bf50: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24BF50 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf54:
    // 0x24bf54: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BF54 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf58:
    // 0x24bf58: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24bf5c:
    if (ctx->pc == 0x24BF5Cu) {
        ctx->pc = 0x24BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF58u;
        // 0x24bf5c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BF5C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF60u;
        goto label_24bf60;
    }
    ctx->pc = 0x24BF58u;
    {
        const bool branch_taken_0x24bf58 = (false);
        ctx->pc = 0x24BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF58u;
        // 0x24bf5c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24BF5C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf58) {
            ctx->pc = 0x24BF5Cu;
            goto label_24bf5c;
        }
    }
    ctx->pc = 0x24BF60u;
label_24bf60:
    // 0x24bf60: 0x0  nop
    ctx->pc = 0x24bf60u;
    // NOP
label_24bf64:
    // 0x24bf64: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x24bf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bf68:
    // 0x24bf68: 0x0  nop
    ctx->pc = 0x24bf68u;
    // NOP
label_24bf6c:
    // 0x24bf6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bf6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bf70:
    // 0x24bf70: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BF70 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf74:
    // 0x24bf74: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bf74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BF74 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bf78:
    // 0x24bf78: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24bf7c:
    if (ctx->pc == 0x24BF7Cu) {
        ctx->pc = 0x24BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF78u;
        // 0x24bf7c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BF7C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF80u;
        goto label_24bf80;
    }
    ctx->pc = 0x24BF78u;
    {
        const bool branch_taken_0x24bf78 = (false);
        ctx->pc = 0x24BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF78u;
        // 0x24bf7c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BF7C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf78) {
            ctx->pc = 0x24BF7Cu;
            goto label_24bf7c;
        }
    }
    ctx->pc = 0x24BF80u;
label_24bf80:
    // 0x24bf80: 0x0  nop
    ctx->pc = 0x24bf80u;
    // NOP
label_24bf84:
    // 0x24bf84: 0x0  nop
    ctx->pc = 0x24bf84u;
    // NOP
label_24bf88:
    // 0x24bf88: 0x0  nop
    ctx->pc = 0x24bf88u;
    // NOP
label_24bf8c:
    // 0x24bf8c: 0x0  nop
    ctx->pc = 0x24bf8cu;
    // NOP
label_24bf90:
    // 0x24bf90: 0x0  nop
    ctx->pc = 0x24bf90u;
    // NOP
label_24bf94:
    // 0x24bf94: 0x0  nop
    ctx->pc = 0x24bf94u;
    // NOP
label_24bf98:
    // 0x24bf98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bf9c:
    // 0x24bf9c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bf9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfa0:
    // 0x24bfa0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfa4:
    // 0x24bfa4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BFA4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfa8:
    // 0x24bfa8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bfa8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BFA8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfac:
    // 0x24bfac: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bfacu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BFAC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfb0:
    // 0x24bfb0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfb4:
    // 0x24bfb4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfb8:
    // 0x24bfb8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfbc:
    // 0x24bfbc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BFBC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfc0:
    // 0x24bfc0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bfc0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BFC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfc4:
    // 0x24bfc4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bfc4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BFC4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfc8:
    // 0x24bfc8: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfcc:
    // 0x24bfcc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfd0:
    // 0x24bfd0: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x24bfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfd4:
    // 0x24bfd4: 0x42920000  .word       0x42920000                   # INVALID     $s4, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BFD4 raw=0x42920000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfd8:
    // 0x24bfd8: 0x41e00000  .word       0x41E00000                   # INVALID     $t7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24BFD8 raw=0x41E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfdc:
    // 0x24bfdc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BFDC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bfe0:
    // 0x24bfe0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfe4:
    // 0x24bfe4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfe8:
    // 0x24bfe8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bfec:
    // 0x24bfec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bfecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BFEC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bff0:
    // 0x24bff0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bff0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BFF0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bff4:
    // 0x24bff4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bff4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BFF4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bff8:
    // 0x24bff8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bffc:
    // 0x24bffc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24bffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c000:
    // 0x24c000: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c004:
    // 0x24c004: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c004u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C004 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c008:
    // 0x24c008: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c008u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C008 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c00c:
    // 0x24c00c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c00cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C00C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c010:
    // 0x24c010: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c014:
    // 0x24c014: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c018:
    // 0x24c018: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c01c:
    // 0x24c01c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c01cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C01C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c020:
    // 0x24c020: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c020u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C020 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c024:
    // 0x24c024: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c024u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C024 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c028:
    // 0x24c028: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C028 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c02c:
    // 0x24c02c: 0xd0009  .word       0x000D0009                   # jalr        $zero, $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
label_24c030:
    if (ctx->pc == 0x24C030u) {
        ctx->pc = 0x24C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C02Cu;
        // 0x24c030: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C034u;
        goto label_24c034;
    }
    ctx->pc = 0x24C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C02Cu;
        // 0x24c030: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C02Cu, 0x24C034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C034u;
label_24c034:
    // 0x24c034: 0x920092  .word       0x00920092                   # mflo        $zero # 00920080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c034u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24c038:
    // 0x24c038: 0x833004c  j           func_CC0130
label_24c03c:
    if (ctx->pc == 0x24C03Cu) {
        ctx->pc = 0x24C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C038u;
        // 0x24c03c: 0x8600112  j           func_1800448 (Delay Slot)
        // J 0x1800448 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C040u;
        goto label_24c040;
    }
    ctx->pc = 0x24C038u;
    ctx->pc = 0x24C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C038u;
    // 0x24c03c: 0x8600112  j           func_1800448 (Delay Slot)
    // J 0x1800448 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xCC0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xCC0130u, 0x24C038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C040u;
label_24c040:
    // 0x24c040: 0x1bb01ba  .word       0x01BB01BA                   # dsrl        $zero, $k1, 6 # 01A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c040u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 27) >> 6);
label_24c044:
    // 0x24c044: 0x174014b  .word       0x0174014B                   # movn        $zero, $t3, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c044u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 11));
label_24c048:
    // 0x24c048: 0x3f0093  .word       0x003F0093                   # mtlo        $at # 001F0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c048u;
    ctx->lo = GPR_U64(ctx, 1);
label_24c04c:
    // 0x24c04c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24c04cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24c050:
    // 0x24c050: 0x0  nop
    ctx->pc = 0x24c050u;
    // NOP
label_24c054:
    // 0x24c054: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c054u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C054 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c058:
    // 0x24c058: 0x0  nop
    ctx->pc = 0x24c058u;
    // NOP
label_24c05c:
    // 0x24c05c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c05cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c060:
    // 0x24c060: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c060u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C060 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c064:
    // 0x24c064: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c064u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C064 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c068:
    // 0x24c068: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24c068u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24C068 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c06c:
    // 0x24c06c: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24c070:
    if (ctx->pc == 0x24C070u) {
        ctx->pc = 0x24C074u;
        goto label_24c074;
    }
    ctx->pc = 0x24C06Cu;
    {
        const bool branch_taken_0x24c06c = (false);
        if (branch_taken_0x24c06c) {
            ctx->pc = 0x24C070u;
            goto label_24c070;
        }
    }
    ctx->pc = 0x24C074u;
label_24c074:
    // 0x24c074: 0x0  nop
    ctx->pc = 0x24c074u;
    // NOP
label_24c078:
    // 0x24c078: 0x0  nop
    ctx->pc = 0x24c078u;
    // NOP
label_24c07c:
    // 0x24c07c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c080:
    // 0x24c080: 0x0  nop
    ctx->pc = 0x24c080u;
    // NOP
label_24c084:
    // 0x24c084: 0x0  nop
    ctx->pc = 0x24c084u;
    // NOP
label_24c088:
    // 0x24c088: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c088u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c08c:
    // 0x24c08c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c08cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C08C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c090:
    // 0x24c090: 0x0  nop
    ctx->pc = 0x24c090u;
    // NOP
label_24c094:
    // 0x24c094: 0x0  nop
    ctx->pc = 0x24c094u;
    // NOP
label_24c098:
    // 0x24c098: 0x0  nop
    ctx->pc = 0x24c098u;
    // NOP
label_24c09c:
    // 0x24c09c: 0x0  nop
    ctx->pc = 0x24c09cu;
    // NOP
label_24c0a0:
    // 0x24c0a0: 0x0  nop
    ctx->pc = 0x24c0a0u;
    // NOP
label_24c0a4:
    // 0x24c0a4: 0x0  nop
    ctx->pc = 0x24c0a4u;
    // NOP
label_24c0a8:
    // 0x24c0a8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0ac:
    // 0x24c0ac: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0b0:
    // 0x24c0b0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0b4:
    // 0x24c0b4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c0b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C0B4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0b8:
    // 0x24c0b8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c0b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C0B8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0bc:
    // 0x24c0bc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c0bcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C0BC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0c0:
    // 0x24c0c0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0c4:
    // 0x24c0c4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0c8:
    // 0x24c0c8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0cc:
    // 0x24c0cc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c0ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C0CC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0d0:
    // 0x24c0d0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c0d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C0D0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0d4:
    // 0x24c0d4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c0d4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C0D4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0d8:
    // 0x24c0d8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0dc:
    // 0x24c0dc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0e0:
    // 0x24c0e0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0e4:
    // 0x24c0e4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c0e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C0E4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0e8:
    // 0x24c0e8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c0e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C0E8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0ec:
    // 0x24c0ec: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c0ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C0EC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c0f0:
    // 0x24c0f0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0f4:
    // 0x24c0f4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0f8:
    // 0x24c0f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c0fc:
    // 0x24c0fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c0fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C0FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c100:
    // 0x24c100: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c100u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C100 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c104:
    // 0x24c104: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c104u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C104 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c108:
    // 0x24c108: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c10c:
    // 0x24c10c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c110:
    // 0x24c110: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c114:
    // 0x24c114: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c114u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C114 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c118:
    // 0x24c118: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c118u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C118 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c11c:
    // 0x24c11c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c11cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C11C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c120:
    // 0x24c120: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c124:
    // 0x24c124: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c128:
    // 0x24c128: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c12c:
    // 0x24c12c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c12cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C12C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c130:
    // 0x24c130: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c130u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C130 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c134:
    // 0x24c134: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c134u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C134 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c138:
    // 0x24c138: 0x42e33333  .word       0x42E33333                   # INVALID     $s7, $v1, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c138u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C138 raw=0x42E33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c13c:
    // 0x24c13c: 0xe0009  .word       0x000E0009                   # jalr        $zero, $zero # 000E0000 <InstrIdType: CPU_SPECIAL>
label_24c140:
    if (ctx->pc == 0x24C140u) {
        ctx->pc = 0x24C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C13Cu;
        // 0x24c140: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C144u;
        goto label_24c144;
    }
    ctx->pc = 0x24C13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C13Cu;
        // 0x24c140: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C13Cu, 0x24C144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C144u;
label_24c144:
    // 0x24c144: 0x940094  .word       0x00940094                   # dsllv       $zero, $s4, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c144u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 4) & 0x3F));
label_24c148:
    // 0x24c148: 0x834004d  j           func_D00134
label_24c14c:
    if (ctx->pc == 0x24C14Cu) {
        ctx->pc = 0x24C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C148u;
        // 0x24c14c: 0x8610113  j           func_184044C (Delay Slot)
        // J 0x184044C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C150u;
        goto label_24c150;
    }
    ctx->pc = 0x24C148u;
    ctx->pc = 0x24C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C148u;
    // 0x24c14c: 0x8610113  j           func_184044C (Delay Slot)
    // J 0x184044C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xD00134u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD00134u, 0x24C148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C150u;
label_24c150:
    // 0x24c150: 0x1ff01fe  .word       0x01FF01FE                   # dsrl32      $zero, $ra, 7 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c150u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) >> (32 + 7));
label_24c154:
    // 0x24c154: 0x175014c  .word       0x0175014C                   # syscall     5 # 01750000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c154u;
    ctx->pc = 0x24C158u;
runtime->handleSyscall(rdram, ctx, 0x5D405u);
label_24c158:
    // 0x24c158: 0x500095  .word       0x00500095                   # INVALID     $v0, $s0, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c158u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24C158 raw=0x00500095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c15c:
    // 0x24c15c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x24c15cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_24c160:
    // 0x24c160: 0x0  nop
    ctx->pc = 0x24c160u;
    // NOP
label_24c164:
    // 0x24c164: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c164u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C164 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c168:
    // 0x24c168: 0x0  nop
    ctx->pc = 0x24c168u;
    // NOP
label_24c16c:
    // 0x24c16c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c16cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c170:
    // 0x24c170: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c170u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C170 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c174:
    // 0x24c174: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c174u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C174 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c178:
    // 0x24c178: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c178u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c17c:
    // 0x24c17c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c17cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C17C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c180:
    // 0x24c180: 0x0  nop
    ctx->pc = 0x24c180u;
    // NOP
label_24c184:
    // 0x24c184: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x24c184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c188:
    // 0x24c188: 0x0  nop
    ctx->pc = 0x24c188u;
    // NOP
label_24c18c:
    // 0x24c18c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c18cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c190:
    // 0x24c190: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c190u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C190 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c194:
    // 0x24c194: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c194u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C194 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c198:
    // 0x24c198: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c19c:
    // 0x24c19c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24c19cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24C19C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1a0:
    // 0x24c1a0: 0x0  nop
    ctx->pc = 0x24c1a0u;
    // NOP
label_24c1a4:
    // 0x24c1a4: 0x0  nop
    ctx->pc = 0x24c1a4u;
    // NOP
label_24c1a8:
    // 0x24c1a8: 0x0  nop
    ctx->pc = 0x24c1a8u;
    // NOP
label_24c1ac:
    // 0x24c1ac: 0x0  nop
    ctx->pc = 0x24c1acu;
    // NOP
label_24c1b0:
    // 0x24c1b0: 0x0  nop
    ctx->pc = 0x24c1b0u;
    // NOP
label_24c1b4:
    // 0x24c1b4: 0x0  nop
    ctx->pc = 0x24c1b4u;
    // NOP
label_24c1b8:
    // 0x24c1b8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1bc:
    // 0x24c1bc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1c0:
    // 0x24c1c0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1c4:
    // 0x24c1c4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c1c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C1C4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1c8:
    // 0x24c1c8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c1c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C1C8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1cc:
    // 0x24c1cc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c1ccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C1CC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1d0:
    // 0x24c1d0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1d4:
    // 0x24c1d4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1d8:
    // 0x24c1d8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1dc:
    // 0x24c1dc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c1dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C1DC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1e0:
    // 0x24c1e0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c1e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C1E0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1e4:
    // 0x24c1e4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c1e4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C1E4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1e8:
    // 0x24c1e8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1ec:
    // 0x24c1ec: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1f0:
    // 0x24c1f0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c1f4:
    // 0x24c1f4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c1f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C1F4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1f8:
    // 0x24c1f8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c1f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C1F8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c1fc:
    // 0x24c1fc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c1fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C1FC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c200:
    // 0x24c200: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c204:
    // 0x24c204: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x24c208u;
    return;
}

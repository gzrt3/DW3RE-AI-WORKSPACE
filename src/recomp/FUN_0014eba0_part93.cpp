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


void FUN_0014eba0_part93(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17ba60u: goto label_17ba60;
        case 0x17ba64u: goto label_17ba64;
        case 0x17ba68u: goto label_17ba68;
        case 0x17ba6cu: goto label_17ba6c;
        case 0x17ba70u: goto label_17ba70;
        case 0x17ba74u: goto label_17ba74;
        case 0x17ba78u: goto label_17ba78;
        case 0x17ba7cu: goto label_17ba7c;
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba88u: goto label_17ba88;
        case 0x17ba8cu: goto label_17ba8c;
        case 0x17ba90u: goto label_17ba90;
        case 0x17ba94u: goto label_17ba94;
        case 0x17ba98u: goto label_17ba98;
        case 0x17ba9cu: goto label_17ba9c;
        case 0x17baa0u: goto label_17baa0;
        case 0x17baa4u: goto label_17baa4;
        case 0x17baa8u: goto label_17baa8;
        case 0x17baacu: goto label_17baac;
        case 0x17bab0u: goto label_17bab0;
        case 0x17bab4u: goto label_17bab4;
        case 0x17bab8u: goto label_17bab8;
        case 0x17babcu: goto label_17babc;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bac8u: goto label_17bac8;
        case 0x17baccu: goto label_17bacc;
        case 0x17bad0u: goto label_17bad0;
        case 0x17bad4u: goto label_17bad4;
        case 0x17bad8u: goto label_17bad8;
        case 0x17badcu: goto label_17badc;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bae4u: goto label_17bae4;
        case 0x17bae8u: goto label_17bae8;
        case 0x17baecu: goto label_17baec;
        case 0x17baf0u: goto label_17baf0;
        case 0x17baf4u: goto label_17baf4;
        case 0x17baf8u: goto label_17baf8;
        case 0x17bafcu: goto label_17bafc;
        case 0x17bb00u: goto label_17bb00;
        case 0x17bb04u: goto label_17bb04;
        case 0x17bb08u: goto label_17bb08;
        case 0x17bb0cu: goto label_17bb0c;
        case 0x17bb10u: goto label_17bb10;
        case 0x17bb14u: goto label_17bb14;
        case 0x17bb18u: goto label_17bb18;
        case 0x17bb1cu: goto label_17bb1c;
        case 0x17bb20u: goto label_17bb20;
        case 0x17bb24u: goto label_17bb24;
        case 0x17bb28u: goto label_17bb28;
        case 0x17bb2cu: goto label_17bb2c;
        case 0x17bb30u: goto label_17bb30;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb38u: goto label_17bb38;
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb40u: goto label_17bb40;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb48u: goto label_17bb48;
        case 0x17bb4cu: goto label_17bb4c;
        case 0x17bb50u: goto label_17bb50;
        case 0x17bb54u: goto label_17bb54;
        case 0x17bb58u: goto label_17bb58;
        case 0x17bb5cu: goto label_17bb5c;
        case 0x17bb60u: goto label_17bb60;
        case 0x17bb64u: goto label_17bb64;
        case 0x17bb68u: goto label_17bb68;
        case 0x17bb6cu: goto label_17bb6c;
        case 0x17bb70u: goto label_17bb70;
        case 0x17bb74u: goto label_17bb74;
        case 0x17bb78u: goto label_17bb78;
        case 0x17bb7cu: goto label_17bb7c;
        case 0x17bb80u: goto label_17bb80;
        case 0x17bb84u: goto label_17bb84;
        case 0x17bb88u: goto label_17bb88;
        case 0x17bb8cu: goto label_17bb8c;
        case 0x17bb90u: goto label_17bb90;
        case 0x17bb94u: goto label_17bb94;
        case 0x17bb98u: goto label_17bb98;
        case 0x17bb9cu: goto label_17bb9c;
        case 0x17bba0u: goto label_17bba0;
        case 0x17bba4u: goto label_17bba4;
        case 0x17bba8u: goto label_17bba8;
        case 0x17bbacu: goto label_17bbac;
        case 0x17bbb0u: goto label_17bbb0;
        case 0x17bbb4u: goto label_17bbb4;
        case 0x17bbb8u: goto label_17bbb8;
        case 0x17bbbcu: goto label_17bbbc;
        case 0x17bbc0u: goto label_17bbc0;
        case 0x17bbc4u: goto label_17bbc4;
        case 0x17bbc8u: goto label_17bbc8;
        case 0x17bbccu: goto label_17bbcc;
        case 0x17bbd0u: goto label_17bbd0;
        case 0x17bbd4u: goto label_17bbd4;
        case 0x17bbd8u: goto label_17bbd8;
        case 0x17bbdcu: goto label_17bbdc;
        case 0x17bbe0u: goto label_17bbe0;
        case 0x17bbe4u: goto label_17bbe4;
        case 0x17bbe8u: goto label_17bbe8;
        case 0x17bbecu: goto label_17bbec;
        case 0x17bbf0u: goto label_17bbf0;
        case 0x17bbf4u: goto label_17bbf4;
        case 0x17bbf8u: goto label_17bbf8;
        case 0x17bbfcu: goto label_17bbfc;
        case 0x17bc00u: goto label_17bc00;
        case 0x17bc04u: goto label_17bc04;
        case 0x17bc08u: goto label_17bc08;
        case 0x17bc0cu: goto label_17bc0c;
        case 0x17bc10u: goto label_17bc10;
        case 0x17bc14u: goto label_17bc14;
        case 0x17bc18u: goto label_17bc18;
        case 0x17bc1cu: goto label_17bc1c;
        case 0x17bc20u: goto label_17bc20;
        case 0x17bc24u: goto label_17bc24;
        case 0x17bc28u: goto label_17bc28;
        case 0x17bc2cu: goto label_17bc2c;
        case 0x17bc30u: goto label_17bc30;
        case 0x17bc34u: goto label_17bc34;
        case 0x17bc38u: goto label_17bc38;
        case 0x17bc3cu: goto label_17bc3c;
        case 0x17bc40u: goto label_17bc40;
        case 0x17bc44u: goto label_17bc44;
        case 0x17bc48u: goto label_17bc48;
        case 0x17bc4cu: goto label_17bc4c;
        case 0x17bc50u: goto label_17bc50;
        case 0x17bc54u: goto label_17bc54;
        case 0x17bc58u: goto label_17bc58;
        case 0x17bc5cu: goto label_17bc5c;
        case 0x17bc60u: goto label_17bc60;
        case 0x17bc64u: goto label_17bc64;
        case 0x17bc68u: goto label_17bc68;
        case 0x17bc6cu: goto label_17bc6c;
        case 0x17bc70u: goto label_17bc70;
        case 0x17bc74u: goto label_17bc74;
        case 0x17bc78u: goto label_17bc78;
        case 0x17bc7cu: goto label_17bc7c;
        case 0x17bc80u: goto label_17bc80;
        case 0x17bc84u: goto label_17bc84;
        case 0x17bc88u: goto label_17bc88;
        case 0x17bc8cu: goto label_17bc8c;
        case 0x17bc90u: goto label_17bc90;
        case 0x17bc94u: goto label_17bc94;
        case 0x17bc98u: goto label_17bc98;
        case 0x17bc9cu: goto label_17bc9c;
        case 0x17bca0u: goto label_17bca0;
        case 0x17bca4u: goto label_17bca4;
        case 0x17bca8u: goto label_17bca8;
        case 0x17bcacu: goto label_17bcac;
        case 0x17bcb0u: goto label_17bcb0;
        case 0x17bcb4u: goto label_17bcb4;
        case 0x17bcb8u: goto label_17bcb8;
        case 0x17bcbcu: goto label_17bcbc;
        case 0x17bcc0u: goto label_17bcc0;
        case 0x17bcc4u: goto label_17bcc4;
        case 0x17bcc8u: goto label_17bcc8;
        case 0x17bcccu: goto label_17bccc;
        case 0x17bcd0u: goto label_17bcd0;
        case 0x17bcd4u: goto label_17bcd4;
        case 0x17bcd8u: goto label_17bcd8;
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bce0u: goto label_17bce0;
        case 0x17bce4u: goto label_17bce4;
        case 0x17bce8u: goto label_17bce8;
        case 0x17bcecu: goto label_17bcec;
        case 0x17bcf0u: goto label_17bcf0;
        case 0x17bcf4u: goto label_17bcf4;
        case 0x17bcf8u: goto label_17bcf8;
        case 0x17bcfcu: goto label_17bcfc;
        case 0x17bd00u: goto label_17bd00;
        case 0x17bd04u: goto label_17bd04;
        case 0x17bd08u: goto label_17bd08;
        case 0x17bd0cu: goto label_17bd0c;
        case 0x17bd10u: goto label_17bd10;
        case 0x17bd14u: goto label_17bd14;
        case 0x17bd18u: goto label_17bd18;
        case 0x17bd1cu: goto label_17bd1c;
        case 0x17bd20u: goto label_17bd20;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd28u: goto label_17bd28;
        case 0x17bd2cu: goto label_17bd2c;
        case 0x17bd30u: goto label_17bd30;
        case 0x17bd34u: goto label_17bd34;
        case 0x17bd38u: goto label_17bd38;
        case 0x17bd3cu: goto label_17bd3c;
        case 0x17bd40u: goto label_17bd40;
        case 0x17bd44u: goto label_17bd44;
        case 0x17bd48u: goto label_17bd48;
        case 0x17bd4cu: goto label_17bd4c;
        case 0x17bd50u: goto label_17bd50;
        case 0x17bd54u: goto label_17bd54;
        case 0x17bd58u: goto label_17bd58;
        case 0x17bd5cu: goto label_17bd5c;
        case 0x17bd60u: goto label_17bd60;
        case 0x17bd64u: goto label_17bd64;
        case 0x17bd68u: goto label_17bd68;
        case 0x17bd6cu: goto label_17bd6c;
        case 0x17bd70u: goto label_17bd70;
        case 0x17bd74u: goto label_17bd74;
        case 0x17bd78u: goto label_17bd78;
        case 0x17bd7cu: goto label_17bd7c;
        case 0x17bd80u: goto label_17bd80;
        case 0x17bd84u: goto label_17bd84;
        case 0x17bd88u: goto label_17bd88;
        case 0x17bd8cu: goto label_17bd8c;
        case 0x17bd90u: goto label_17bd90;
        case 0x17bd94u: goto label_17bd94;
        case 0x17bd98u: goto label_17bd98;
        case 0x17bd9cu: goto label_17bd9c;
        case 0x17bda0u: goto label_17bda0;
        case 0x17bda4u: goto label_17bda4;
        case 0x17bda8u: goto label_17bda8;
        case 0x17bdacu: goto label_17bdac;
        case 0x17bdb0u: goto label_17bdb0;
        case 0x17bdb4u: goto label_17bdb4;
        case 0x17bdb8u: goto label_17bdb8;
        case 0x17bdbcu: goto label_17bdbc;
        case 0x17bdc0u: goto label_17bdc0;
        case 0x17bdc4u: goto label_17bdc4;
        case 0x17bdc8u: goto label_17bdc8;
        case 0x17bdccu: goto label_17bdcc;
        case 0x17bdd0u: goto label_17bdd0;
        case 0x17bdd4u: goto label_17bdd4;
        case 0x17bdd8u: goto label_17bdd8;
        case 0x17bddcu: goto label_17bddc;
        case 0x17bde0u: goto label_17bde0;
        case 0x17bde4u: goto label_17bde4;
        case 0x17bde8u: goto label_17bde8;
        case 0x17bdecu: goto label_17bdec;
        case 0x17bdf0u: goto label_17bdf0;
        case 0x17bdf4u: goto label_17bdf4;
        case 0x17bdf8u: goto label_17bdf8;
        case 0x17bdfcu: goto label_17bdfc;
        case 0x17be00u: goto label_17be00;
        case 0x17be04u: goto label_17be04;
        case 0x17be08u: goto label_17be08;
        case 0x17be0cu: goto label_17be0c;
        case 0x17be10u: goto label_17be10;
        case 0x17be14u: goto label_17be14;
        case 0x17be18u: goto label_17be18;
        case 0x17be1cu: goto label_17be1c;
        case 0x17be20u: goto label_17be20;
        case 0x17be24u: goto label_17be24;
        case 0x17be28u: goto label_17be28;
        case 0x17be2cu: goto label_17be2c;
        case 0x17be30u: goto label_17be30;
        case 0x17be34u: goto label_17be34;
        case 0x17be38u: goto label_17be38;
        case 0x17be3cu: goto label_17be3c;
        case 0x17be40u: goto label_17be40;
        case 0x17be44u: goto label_17be44;
        case 0x17be48u: goto label_17be48;
        case 0x17be4cu: goto label_17be4c;
        case 0x17be50u: goto label_17be50;
        case 0x17be54u: goto label_17be54;
        case 0x17be58u: goto label_17be58;
        case 0x17be5cu: goto label_17be5c;
        case 0x17be60u: goto label_17be60;
        case 0x17be64u: goto label_17be64;
        case 0x17be68u: goto label_17be68;
        case 0x17be6cu: goto label_17be6c;
        case 0x17be70u: goto label_17be70;
        case 0x17be74u: goto label_17be74;
        case 0x17be78u: goto label_17be78;
        case 0x17be7cu: goto label_17be7c;
        case 0x17be80u: goto label_17be80;
        case 0x17be84u: goto label_17be84;
        case 0x17be88u: goto label_17be88;
        case 0x17be8cu: goto label_17be8c;
        case 0x17be90u: goto label_17be90;
        case 0x17be94u: goto label_17be94;
        case 0x17be98u: goto label_17be98;
        case 0x17be9cu: goto label_17be9c;
        case 0x17bea0u: goto label_17bea0;
        case 0x17bea4u: goto label_17bea4;
        case 0x17bea8u: goto label_17bea8;
        case 0x17beacu: goto label_17beac;
        case 0x17beb0u: goto label_17beb0;
        case 0x17beb4u: goto label_17beb4;
        case 0x17beb8u: goto label_17beb8;
        case 0x17bebcu: goto label_17bebc;
        case 0x17bec0u: goto label_17bec0;
        case 0x17bec4u: goto label_17bec4;
        case 0x17bec8u: goto label_17bec8;
        case 0x17beccu: goto label_17becc;
        case 0x17bed0u: goto label_17bed0;
        case 0x17bed4u: goto label_17bed4;
        case 0x17bed8u: goto label_17bed8;
        case 0x17bedcu: goto label_17bedc;
        case 0x17bee0u: goto label_17bee0;
        case 0x17bee4u: goto label_17bee4;
        case 0x17bee8u: goto label_17bee8;
        case 0x17beecu: goto label_17beec;
        case 0x17bef0u: goto label_17bef0;
        case 0x17bef4u: goto label_17bef4;
        case 0x17bef8u: goto label_17bef8;
        case 0x17befcu: goto label_17befc;
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf04u: goto label_17bf04;
        case 0x17bf08u: goto label_17bf08;
        case 0x17bf0cu: goto label_17bf0c;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf14u: goto label_17bf14;
        case 0x17bf18u: goto label_17bf18;
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf20u: goto label_17bf20;
        case 0x17bf24u: goto label_17bf24;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf2cu: goto label_17bf2c;
        case 0x17bf30u: goto label_17bf30;
        case 0x17bf34u: goto label_17bf34;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf3cu: goto label_17bf3c;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf44u: goto label_17bf44;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf4cu: goto label_17bf4c;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf54u: goto label_17bf54;
        case 0x17bf58u: goto label_17bf58;
        case 0x17bf5cu: goto label_17bf5c;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf64u: goto label_17bf64;
        case 0x17bf68u: goto label_17bf68;
        case 0x17bf6cu: goto label_17bf6c;
        case 0x17bf70u: goto label_17bf70;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf78u: goto label_17bf78;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf80u: goto label_17bf80;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bf88u: goto label_17bf88;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf90u: goto label_17bf90;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bf98u: goto label_17bf98;
        case 0x17bf9cu: goto label_17bf9c;
        case 0x17bfa0u: goto label_17bfa0;
        case 0x17bfa4u: goto label_17bfa4;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfacu: goto label_17bfac;
        case 0x17bfb0u: goto label_17bfb0;
        case 0x17bfb4u: goto label_17bfb4;
        case 0x17bfb8u: goto label_17bfb8;
        case 0x17bfbcu: goto label_17bfbc;
        case 0x17bfc0u: goto label_17bfc0;
        case 0x17bfc4u: goto label_17bfc4;
        case 0x17bfc8u: goto label_17bfc8;
        case 0x17bfccu: goto label_17bfcc;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bfd8u: goto label_17bfd8;
        case 0x17bfdcu: goto label_17bfdc;
        case 0x17bfe0u: goto label_17bfe0;
        case 0x17bfe4u: goto label_17bfe4;
        case 0x17bfe8u: goto label_17bfe8;
        case 0x17bfecu: goto label_17bfec;
        case 0x17bff0u: goto label_17bff0;
        case 0x17bff4u: goto label_17bff4;
        case 0x17bff8u: goto label_17bff8;
        case 0x17bffcu: goto label_17bffc;
        case 0x17c000u: goto label_17c000;
        case 0x17c004u: goto label_17c004;
        case 0x17c008u: goto label_17c008;
        case 0x17c00cu: goto label_17c00c;
        case 0x17c010u: goto label_17c010;
        case 0x17c014u: goto label_17c014;
        case 0x17c018u: goto label_17c018;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c020u: goto label_17c020;
        case 0x17c024u: goto label_17c024;
        case 0x17c028u: goto label_17c028;
        case 0x17c02cu: goto label_17c02c;
        case 0x17c030u: goto label_17c030;
        case 0x17c034u: goto label_17c034;
        case 0x17c038u: goto label_17c038;
        case 0x17c03cu: goto label_17c03c;
        case 0x17c040u: goto label_17c040;
        case 0x17c044u: goto label_17c044;
        case 0x17c048u: goto label_17c048;
        case 0x17c04cu: goto label_17c04c;
        case 0x17c050u: goto label_17c050;
        case 0x17c054u: goto label_17c054;
        case 0x17c058u: goto label_17c058;
        case 0x17c05cu: goto label_17c05c;
        case 0x17c060u: goto label_17c060;
        case 0x17c064u: goto label_17c064;
        case 0x17c068u: goto label_17c068;
        case 0x17c06cu: goto label_17c06c;
        case 0x17c070u: goto label_17c070;
        case 0x17c074u: goto label_17c074;
        case 0x17c078u: goto label_17c078;
        case 0x17c07cu: goto label_17c07c;
        case 0x17c080u: goto label_17c080;
        case 0x17c084u: goto label_17c084;
        case 0x17c088u: goto label_17c088;
        case 0x17c08cu: goto label_17c08c;
        case 0x17c090u: goto label_17c090;
        case 0x17c094u: goto label_17c094;
        case 0x17c098u: goto label_17c098;
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0a0u: goto label_17c0a0;
        case 0x17c0a4u: goto label_17c0a4;
        case 0x17c0a8u: goto label_17c0a8;
        case 0x17c0acu: goto label_17c0ac;
        case 0x17c0b0u: goto label_17c0b0;
        case 0x17c0b4u: goto label_17c0b4;
        case 0x17c0b8u: goto label_17c0b8;
        case 0x17c0bcu: goto label_17c0bc;
        case 0x17c0c0u: goto label_17c0c0;
        case 0x17c0c4u: goto label_17c0c4;
        case 0x17c0c8u: goto label_17c0c8;
        case 0x17c0ccu: goto label_17c0cc;
        case 0x17c0d0u: goto label_17c0d0;
        case 0x17c0d4u: goto label_17c0d4;
        case 0x17c0d8u: goto label_17c0d8;
        case 0x17c0dcu: goto label_17c0dc;
        case 0x17c0e0u: goto label_17c0e0;
        case 0x17c0e4u: goto label_17c0e4;
        case 0x17c0e8u: goto label_17c0e8;
        case 0x17c0ecu: goto label_17c0ec;
        case 0x17c0f0u: goto label_17c0f0;
        case 0x17c0f4u: goto label_17c0f4;
        case 0x17c0f8u: goto label_17c0f8;
        case 0x17c0fcu: goto label_17c0fc;
        case 0x17c100u: goto label_17c100;
        case 0x17c104u: goto label_17c104;
        case 0x17c108u: goto label_17c108;
        case 0x17c10cu: goto label_17c10c;
        case 0x17c110u: goto label_17c110;
        case 0x17c114u: goto label_17c114;
        case 0x17c118u: goto label_17c118;
        case 0x17c11cu: goto label_17c11c;
        case 0x17c120u: goto label_17c120;
        case 0x17c124u: goto label_17c124;
        case 0x17c128u: goto label_17c128;
        case 0x17c12cu: goto label_17c12c;
        case 0x17c130u: goto label_17c130;
        case 0x17c134u: goto label_17c134;
        case 0x17c138u: goto label_17c138;
        case 0x17c13cu: goto label_17c13c;
        case 0x17c140u: goto label_17c140;
        case 0x17c144u: goto label_17c144;
        case 0x17c148u: goto label_17c148;
        case 0x17c14cu: goto label_17c14c;
        case 0x17c150u: goto label_17c150;
        case 0x17c154u: goto label_17c154;
        case 0x17c158u: goto label_17c158;
        case 0x17c15cu: goto label_17c15c;
        case 0x17c160u: goto label_17c160;
        case 0x17c164u: goto label_17c164;
        case 0x17c168u: goto label_17c168;
        case 0x17c16cu: goto label_17c16c;
        case 0x17c170u: goto label_17c170;
        case 0x17c174u: goto label_17c174;
        case 0x17c178u: goto label_17c178;
        case 0x17c17cu: goto label_17c17c;
        case 0x17c180u: goto label_17c180;
        case 0x17c184u: goto label_17c184;
        case 0x17c188u: goto label_17c188;
        case 0x17c18cu: goto label_17c18c;
        case 0x17c190u: goto label_17c190;
        case 0x17c194u: goto label_17c194;
        case 0x17c198u: goto label_17c198;
        case 0x17c19cu: goto label_17c19c;
        case 0x17c1a0u: goto label_17c1a0;
        case 0x17c1a4u: goto label_17c1a4;
        case 0x17c1a8u: goto label_17c1a8;
        case 0x17c1acu: goto label_17c1ac;
        case 0x17c1b0u: goto label_17c1b0;
        case 0x17c1b4u: goto label_17c1b4;
        case 0x17c1b8u: goto label_17c1b8;
        case 0x17c1bcu: goto label_17c1bc;
        case 0x17c1c0u: goto label_17c1c0;
        case 0x17c1c4u: goto label_17c1c4;
        case 0x17c1c8u: goto label_17c1c8;
        case 0x17c1ccu: goto label_17c1cc;
        case 0x17c1d0u: goto label_17c1d0;
        case 0x17c1d4u: goto label_17c1d4;
        case 0x17c1d8u: goto label_17c1d8;
        case 0x17c1dcu: goto label_17c1dc;
        case 0x17c1e0u: goto label_17c1e0;
        case 0x17c1e4u: goto label_17c1e4;
        case 0x17c1e8u: goto label_17c1e8;
        case 0x17c1ecu: goto label_17c1ec;
        case 0x17c1f0u: goto label_17c1f0;
        case 0x17c1f4u: goto label_17c1f4;
        case 0x17c1f8u: goto label_17c1f8;
        case 0x17c1fcu: goto label_17c1fc;
        case 0x17c200u: goto label_17c200;
        case 0x17c204u: goto label_17c204;
        case 0x17c208u: goto label_17c208;
        case 0x17c20cu: goto label_17c20c;
        case 0x17c210u: goto label_17c210;
        case 0x17c214u: goto label_17c214;
        case 0x17c218u: goto label_17c218;
        case 0x17c21cu: goto label_17c21c;
        case 0x17c220u: goto label_17c220;
        case 0x17c224u: goto label_17c224;
        case 0x17c228u: goto label_17c228;
        case 0x17c22cu: goto label_17c22c;
        default: return;
    }

label_17ba60:
    // 0x17ba60: 0x0  nop
    ctx->pc = 0x17ba60u;
    // NOP
label_17ba64:
    // 0x17ba64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17ba64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17ba68:
    // 0x17ba68: 0x10000008  b           . + 4 + (0x8 << 2)
label_17ba6c:
    if (ctx->pc == 0x17BA6Cu) {
        ctx->pc = 0x17BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA68u;
        // 0x17ba6c: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA70u;
        goto label_17ba70;
    }
    ctx->pc = 0x17BA68u;
    {
        const bool branch_taken_0x17ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA68u;
        // 0x17ba6c: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba68) {
            ctx->pc = 0x17BA8Cu;
            goto label_17ba8c;
        }
    }
    ctx->pc = 0x17BA70u;
label_17ba70:
    // 0x17ba70: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ba74:
    // 0x17ba74: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17ba78:
    // 0x17ba78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17ba7c:
    // 0x17ba7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ba7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ba80:
    // 0x17ba80: 0x0  nop
    ctx->pc = 0x17ba80u;
    // NOP
label_17ba84:
    // 0x17ba84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17ba84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17ba88:
    // 0x17ba88: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x17ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_17ba8c:
    // 0x17ba8c: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x17ba8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_17ba90:
    // 0x17ba90: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17ba94:
    // 0x17ba94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba98:
    // 0x17ba98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17ba9c:
    // 0x17ba9c: 0x10000015  b           . + 4 + (0x15 << 2)
label_17baa0:
    if (ctx->pc == 0x17BAA0u) {
        ctx->pc = 0x17BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA9Cu;
        // 0x17baa0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAA4u;
        goto label_17baa4;
    }
    ctx->pc = 0x17BA9Cu;
    {
        const bool branch_taken_0x17ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA9Cu;
        // 0x17baa0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba9c) {
            ctx->pc = 0x17BAF4u;
            goto label_17baf4;
        }
    }
    ctx->pc = 0x17BAA4u;
label_17baa4:
    // 0x17baa4: 0xc7818758  lwc1        $f1, -0x78A8($gp)
    ctx->pc = 0x17baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17baa8:
    // 0x17baa8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17baa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17baac:
    // 0x17baac: 0x0  nop
    ctx->pc = 0x17baacu;
    // NOP
label_17bab0:
    // 0x17bab0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x17bab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bab4:
    // 0x17bab4: 0x0  nop
    ctx->pc = 0x17bab4u;
    // NOP
label_17bab8:
    // 0x17bab8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_17babc:
    if (ctx->pc == 0x17BABCu) {
        ctx->pc = 0x17BAC0u;
        goto label_17bac0;
    }
    ctx->pc = 0x17BAB8u;
    {
        const bool branch_taken_0x17bab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bab8) {
            ctx->pc = 0x17BAF4u;
            goto label_17baf4;
        }
    }
    ctx->pc = 0x17BAC0u;
label_17bac0:
    // 0x17bac0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x17bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bac4:
    // 0x17bac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17bac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17bac8:
    // 0x17bac8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x17bac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_17bacc:
    // 0x17bacc: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17bad0:
    // 0x17bad0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bad4:
    // 0x17bad4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17bad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bad8:
    // 0x17bad8: 0x0  nop
    ctx->pc = 0x17bad8u;
    // NOP
label_17badc:
    // 0x17badc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17bae0:
    if (ctx->pc == 0x17BAE0u) {
        ctx->pc = 0x17BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BADCu;
        // 0x17bae0: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAE4u;
        goto label_17bae4;
    }
    ctx->pc = 0x17BADCu;
    {
        const bool branch_taken_0x17badc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BADCu;
        // 0x17bae0: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17badc) {
            ctx->pc = 0x17BAF4u;
            goto label_17baf4;
        }
    }
    ctx->pc = 0x17BAE4u;
label_17bae4:
    // 0x17bae4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x17bae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_17bae8:
    // 0x17bae8: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17baec:
    // 0x17baec: 0xe7828758  swc1        $f2, -0x78A8($gp)
    ctx->pc = 0x17baecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), bits); }
label_17baf0:
    // 0x17baf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_17baf4:
    // 0x17baf4: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17baf8:
    // 0x17baf8: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x17baf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_17bafc:
    // 0x17bafc: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x17bafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_17bb00:
    // 0x17bb00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17bb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bb04:
    // 0x17bb04: 0x0  nop
    ctx->pc = 0x17bb04u;
    // NOP
label_17bb08:
    // 0x17bb08: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17bb0c:
    // 0x17bb0c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x17bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_17bb10:
    // 0x17bb10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_17bb14:
    if (ctx->pc == 0x17BB14u) {
        ctx->pc = 0x17BB18u;
        goto label_17bb18;
    }
    ctx->pc = 0x17BB10u;
    {
        const bool branch_taken_0x17bb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb10) {
            ctx->pc = 0x17BB3Cu;
            goto label_17bb3c;
        }
    }
    ctx->pc = 0x17BB18u;
label_17bb18:
    // 0x17bb18: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb1c:
    // 0x17bb1c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x17bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb20:
    // 0x17bb20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17bb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17bb24:
    // 0x17bb24: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x17bb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_17bb28:
    // 0x17bb28: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x17bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb2c:
    // 0x17bb2c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x17bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb30:
    // 0x17bb30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17bb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17bb34:
    // 0x17bb34: 0x10000017  b           . + 4 + (0x17 << 2)
label_17bb38:
    if (ctx->pc == 0x17BB38u) {
        ctx->pc = 0x17BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB34u;
        // 0x17bb38: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB3Cu;
        goto label_17bb3c;
    }
    ctx->pc = 0x17BB34u;
    {
        const bool branch_taken_0x17bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB34u;
        // 0x17bb38: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb34) {
            ctx->pc = 0x17BB94u;
            goto label_17bb94;
        }
    }
    ctx->pc = 0x17BB3Cu;
label_17bb3c:
    // 0x17bb3c: 0x0  nop
    ctx->pc = 0x17bb3cu;
    // NOP
label_17bb40:
    // 0x17bb40: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x17bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_17bb44:
    // 0x17bb44: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_17bb48:
    if (ctx->pc == 0x17BB48u) {
        ctx->pc = 0x17BB4Cu;
        goto label_17bb4c;
    }
    ctx->pc = 0x17BB44u;
    {
        const bool branch_taken_0x17bb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb44) {
            ctx->pc = 0x17BB94u;
            goto label_17bb94;
        }
    }
    ctx->pc = 0x17BB4Cu;
label_17bb4c:
    // 0x17bb4c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb50:
    // 0x17bb50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x17bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb54:
    // 0x17bb54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17bb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17bb58:
    // 0x17bb58: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_17bb5c:
    // 0x17bb5c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x17bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb60:
    // 0x17bb60: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x17bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bb64:
    // 0x17bb64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17bb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17bb68:
    // 0x17bb68: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x17bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_17bb6c:
    // 0x17bb6c: 0xc06d412  jal         func_1B5048
label_17bb70:
    if (ctx->pc == 0x17BB70u) {
        ctx->pc = 0x17BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB6Cu;
        // 0x17bb70: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB74u;
        goto label_17bb74;
    }
    ctx->pc = 0x17BB6Cu;
    SET_GPR_U32(ctx, 31, 0x17BB74u);
    ctx->pc = 0x17BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB6Cu;
    // 0x17bb70: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x17BB74u;
label_17bb74:
    // 0x17bb74: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x17bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb78:
    // 0x17bb78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17bb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17bb7c:
    // 0x17bb7c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x17bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_17bb80:
    // 0x17bb80: 0xc06d412  jal         func_1B5048
label_17bb84:
    if (ctx->pc == 0x17BB84u) {
        ctx->pc = 0x17BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB80u;
        // 0x17bb84: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB88u;
        goto label_17bb88;
    }
    ctx->pc = 0x17BB80u;
    SET_GPR_U32(ctx, 31, 0x17BB88u);
    ctx->pc = 0x17BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB80u;
    // 0x17bb84: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x17BB88u;
label_17bb88:
    // 0x17bb88: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x17bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb8c:
    // 0x17bb8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17bb8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17bb90:
    // 0x17bb90: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x17bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_17bb94:
    // 0x17bb94: 0x0  nop
    ctx->pc = 0x17bb94u;
    // NOP
label_17bb98:
    // 0x17bb98: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bb9c:
    // 0x17bb9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17bb9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bba0:
    // 0x17bba0: 0x0  nop
    ctx->pc = 0x17bba0u;
    // NOP
label_17bba4:
    // 0x17bba4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17bba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bba8:
    // 0x17bba8: 0x0  nop
    ctx->pc = 0x17bba8u;
    // NOP
label_17bbac:
    // 0x17bbac: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_17bbb0:
    if (ctx->pc == 0x17BBB0u) {
        ctx->pc = 0x17BBB4u;
        goto label_17bbb4;
    }
    ctx->pc = 0x17BBACu;
    {
        const bool branch_taken_0x17bbac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bbac) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBB4u;
label_17bbb4:
    // 0x17bbb4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x17bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bbb8:
    // 0x17bbb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17bbbc:
    // 0x17bbbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17bbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17bbc0:
    // 0x17bbc0: 0x0  nop
    ctx->pc = 0x17bbc0u;
    // NOP
label_17bbc4:
    // 0x17bbc4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17bbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bbc8:
    // 0x17bbc8: 0x0  nop
    ctx->pc = 0x17bbc8u;
    // NOP
label_17bbcc:
    // 0x17bbcc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17bbd0:
    if (ctx->pc == 0x17BBD0u) {
        ctx->pc = 0x17BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBCCu;
        // 0x17bbd0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBD4u;
        goto label_17bbd4;
    }
    ctx->pc = 0x17BBCCu;
    {
        const bool branch_taken_0x17bbcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBCCu;
        // 0x17bbd0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbcc) {
            ctx->pc = 0x17BBDCu;
            goto label_17bbdc;
        }
    }
    ctx->pc = 0x17BBD4u;
label_17bbd4:
    // 0x17bbd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_17bbd8:
    if (ctx->pc == 0x17BBD8u) {
        ctx->pc = 0x17BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD4u;
        // 0x17bbd8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBDCu;
        goto label_17bbdc;
    }
    ctx->pc = 0x17BBD4u;
    {
        const bool branch_taken_0x17bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD4u;
        // 0x17bbd8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbd4) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBDCu;
label_17bbdc:
    // 0x17bbdc: 0x0  nop
    ctx->pc = 0x17bbdcu;
    // NOP
label_17bbe0:
    // 0x17bbe0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_17bbe4:
    // 0x17bbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bbe8:
    // 0x17bbe8: 0x0  nop
    ctx->pc = 0x17bbe8u;
    // NOP
label_17bbec:
    // 0x17bbec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17bbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bbf0:
    // 0x17bbf0: 0x0  nop
    ctx->pc = 0x17bbf0u;
    // NOP
label_17bbf4:
    // 0x17bbf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17bbf8:
    if (ctx->pc == 0x17BBF8u) {
        ctx->pc = 0x17BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBF4u;
        // 0x17bbf8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBFCu;
        goto label_17bbfc;
    }
    ctx->pc = 0x17BBF4u;
    {
        const bool branch_taken_0x17bbf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBF4u;
        // 0x17bbf8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbf4) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBFCu;
label_17bbfc:
    // 0x17bbfc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x17bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_17bc00:
    // 0x17bc00: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x17bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bc04:
    // 0x17bc04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17bc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bc08:
    // 0x17bc08: 0x0  nop
    ctx->pc = 0x17bc08u;
    // NOP
label_17bc0c:
    // 0x17bc0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17bc0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bc10:
    // 0x17bc10: 0x0  nop
    ctx->pc = 0x17bc10u;
    // NOP
label_17bc14:
    // 0x17bc14: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_17bc18:
    if (ctx->pc == 0x17BC18u) {
        ctx->pc = 0x17BC1Cu;
        goto label_17bc1c;
    }
    ctx->pc = 0x17BC14u;
    {
        const bool branch_taken_0x17bc14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bc14) {
            ctx->pc = 0x17BC68u;
            goto label_17bc68;
        }
    }
    ctx->pc = 0x17BC1Cu;
label_17bc1c:
    // 0x17bc1c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x17bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bc20:
    // 0x17bc20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17bc24:
    // 0x17bc24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17bc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17bc28:
    // 0x17bc28: 0x0  nop
    ctx->pc = 0x17bc28u;
    // NOP
label_17bc2c:
    // 0x17bc2c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17bc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bc30:
    // 0x17bc30: 0x0  nop
    ctx->pc = 0x17bc30u;
    // NOP
label_17bc34:
    // 0x17bc34: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17bc38:
    if (ctx->pc == 0x17BC38u) {
        ctx->pc = 0x17BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC34u;
        // 0x17bc38: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC3Cu;
        goto label_17bc3c;
    }
    ctx->pc = 0x17BC34u;
    {
        const bool branch_taken_0x17bc34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC34u;
        // 0x17bc38: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc34) {
            ctx->pc = 0x17BC44u;
            goto label_17bc44;
        }
    }
    ctx->pc = 0x17BC3Cu;
label_17bc3c:
    // 0x17bc3c: 0x1000000a  b           . + 4 + (0xA << 2)
label_17bc40:
    if (ctx->pc == 0x17BC40u) {
        ctx->pc = 0x17BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC3Cu;
        // 0x17bc40: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC44u;
        goto label_17bc44;
    }
    ctx->pc = 0x17BC3Cu;
    {
        const bool branch_taken_0x17bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC3Cu;
        // 0x17bc40: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc3c) {
            ctx->pc = 0x17BC68u;
            goto label_17bc68;
        }
    }
    ctx->pc = 0x17BC44u;
label_17bc44:
    // 0x17bc44: 0x0  nop
    ctx->pc = 0x17bc44u;
    // NOP
label_17bc48:
    // 0x17bc48: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_17bc4c:
    // 0x17bc4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bc50:
    // 0x17bc50: 0x0  nop
    ctx->pc = 0x17bc50u;
    // NOP
label_17bc54:
    // 0x17bc54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17bc54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bc58:
    // 0x17bc58: 0x0  nop
    ctx->pc = 0x17bc58u;
    // NOP
label_17bc5c:
    // 0x17bc5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17bc60:
    if (ctx->pc == 0x17BC60u) {
        ctx->pc = 0x17BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC5Cu;
        // 0x17bc60: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC64u;
        goto label_17bc64;
    }
    ctx->pc = 0x17BC5Cu;
    {
        const bool branch_taken_0x17bc5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC5Cu;
        // 0x17bc60: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc5c) {
            ctx->pc = 0x17BC68u;
            goto label_17bc68;
        }
    }
    ctx->pc = 0x17BC64u;
label_17bc64:
    // 0x17bc64: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x17bc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_17bc68:
    // 0x17bc68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17bc6c:
    // 0x17bc6c: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x17bc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17bc70:
    // 0x17bc70: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_17bc74:
    if (ctx->pc == 0x17BC74u) {
        ctx->pc = 0x17BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC70u;
        // 0x17bc74: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC78u;
        goto label_17bc78;
    }
    ctx->pc = 0x17BC70u;
    {
        const bool branch_taken_0x17bc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC70u;
        // 0x17bc74: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc70) {
            ctx->pc = 0x17BB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bb04;
        }
    }
    ctx->pc = 0x17BC78u;
label_17bc78:
    // 0x17bc78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17bc7c:
    // 0x17bc7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_17bc80:
    // 0x17bc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17bc84:
    // 0x17bc84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17bc88:
    if (ctx->pc == 0x17BC88u) {
        ctx->pc = 0x17BC8Cu;
        goto label_17bc8c;
    }
    ctx->pc = 0x17BC84u;
    {
        const bool branch_taken_0x17bc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bc84) {
            ctx->pc = 0x17BC94u;
            goto label_17bc94;
        }
    }
    ctx->pc = 0x17BC8Cu;
label_17bc8c:
    // 0x17bc8c: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
label_17bc90:
    if (ctx->pc == 0x17BC90u) {
        ctx->pc = 0x17BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC8Cu;
        // 0x17bc90: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BC94u;
        goto label_17bc94;
    }
    ctx->pc = 0x17BC8Cu;
    {
        const bool branch_taken_0x17bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC8Cu;
        // 0x17bc90: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc8c) {
            ctx->pc = 0x17BAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bafc;
        }
    }
    ctx->pc = 0x17BC94u;
label_17bc94:
    // 0x17bc94: 0x0  nop
    ctx->pc = 0x17bc94u;
    // NOP
label_17bc98:
    // 0x17bc98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17bc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17bc9c:
    // 0x17bc9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17bca0:
    // 0x17bca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17bca4:
    // 0x17bca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17bca8:
    // 0x17bca8: 0x3e00008  jr          $ra
label_17bcac:
    if (ctx->pc == 0x17BCACu) {
        ctx->pc = 0x17BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCA8u;
        // 0x17bcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BCB0u;
        goto label_17bcb0;
    }
    ctx->pc = 0x17BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCA8u;
        // 0x17bcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCB0u;
label_17bcb0:
    // 0x17bcb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17bcb4:
    // 0x17bcb4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x17bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_17bcb8:
    // 0x17bcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17bcbc:
    // 0x17bcbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_17bcc0:
    // 0x17bcc0: 0x8f838454  lw          $v1, -0x7BAC($gp)
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_17bcc4:
    // 0x17bcc4: 0xaf808758  sw          $zero, -0x78A8($gp)
    ctx->pc = 0x17bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
label_17bcc8:
    // 0x17bcc8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_17bccc:
    if (ctx->pc == 0x17BCCCu) {
        ctx->pc = 0x17BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCC8u;
        // 0x17bccc: 0xaf8281e0  sw          $v0, -0x7E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BCD0u;
        goto label_17bcd0;
    }
    ctx->pc = 0x17BCC8u;
    {
        const bool branch_taken_0x17bcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCC8u;
        // 0x17bccc: 0xaf8281e0  sw          $v0, -0x7E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcc8) {
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCD0u;
label_17bcd0:
    // 0x17bcd0: 0x8f8485d0  lw          $a0, -0x7A30($gp)
    ctx->pc = 0x17bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_17bcd4:
    // 0x17bcd4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_17bcd8:
    if (ctx->pc == 0x17BCD8u) {
        ctx->pc = 0x17BCDCu;
        goto label_17bcdc;
    }
    ctx->pc = 0x17BCD4u;
    {
        const bool branch_taken_0x17bcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcd4) {
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCDCu;
label_17bcdc:
    // 0x17bcdc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x17bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17bce0:
    // 0x17bce0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_17bce4:
    // 0x17bce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17bce8:
    if (ctx->pc == 0x17BCE8u) {
        ctx->pc = 0x17BCECu;
        goto label_17bcec;
    }
    ctx->pc = 0x17BCE4u;
    {
        const bool branch_taken_0x17bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bce4) {
            ctx->pc = 0x17BCF4u;
            goto label_17bcf4;
        }
    }
    ctx->pc = 0x17BCECu;
label_17bcec:
    // 0x17bcec: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_17bcf0:
    // 0x17bcf0: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_17bcf4:
    // 0x17bcf4: 0x0  nop
    ctx->pc = 0x17bcf4u;
    // NOP
label_17bcf8:
    // 0x17bcf8: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x17bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_17bcfc:
    // 0x17bcfc: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_17bd00:
    if (ctx->pc == 0x17BD00u) {
        ctx->pc = 0x17BD04u;
        goto label_17bd04;
    }
    ctx->pc = 0x17BCFCu;
    {
        const bool branch_taken_0x17bcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bcfc) {
            ctx->pc = 0x17BCDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bcdc;
        }
    }
    ctx->pc = 0x17BD04u;
label_17bd04:
    // 0x17bd04: 0x0  nop
    ctx->pc = 0x17bd04u;
    // NOP
label_17bd08:
    // 0x17bd08: 0xc05ef48  jal         func_17BD20
label_17bd0c:
    if (ctx->pc == 0x17BD0Cu) {
        ctx->pc = 0x17BD10u;
        goto label_17bd10;
    }
    ctx->pc = 0x17BD08u;
    SET_GPR_U32(ctx, 31, 0x17BD10u);
    ctx->pc = 0x17BD20u;
    goto label_17bd20;
    ctx->pc = 0x17BD10u;
label_17bd10:
    // 0x17bd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bd14:
    // 0x17bd14: 0x3e00008  jr          $ra
label_17bd18:
    if (ctx->pc == 0x17BD18u) {
        ctx->pc = 0x17BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD14u;
        // 0x17bd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD1Cu;
        goto label_17bd1c;
    }
    ctx->pc = 0x17BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD14u;
        // 0x17bd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD1Cu;
label_17bd1c:
    // 0x17bd1c: 0x0  nop
    ctx->pc = 0x17bd1cu;
    // NOP
label_17bd20:
    // 0x17bd20: 0x8f858800  lw          $a1, -0x7800($gp)
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
label_17bd24:
    // 0x17bd24: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_17bd28:
    // 0x17bd28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bd28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bd2c:
    // 0x17bd2c: 0x8f848454  lw          $a0, -0x7BAC($gp)
    ctx->pc = 0x17bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_17bd30:
    // 0x17bd30: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x17bd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_17bd34:
    // 0x17bd34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17bd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bd38:
    // 0x17bd38: 0x0  nop
    ctx->pc = 0x17bd38u;
    // NOP
label_17bd3c:
    // 0x17bd3c: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x17bd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_17bd40:
    // 0x17bd40: 0x460039c3  div.s       $f7, $f7, $f0
    ctx->pc = 0x17bd40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[0];
label_17bd44:
    // 0x17bd44: 0x0  nop
    ctx->pc = 0x17bd44u;
    // NOP
label_17bd48:
    // 0x17bd48: 0x0  nop
    ctx->pc = 0x17bd48u;
    // NOP
label_17bd4c:
    // 0x17bd4c: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
label_17bd50:
    if (ctx->pc == 0x17BD50u) {
        ctx->pc = 0x17BD54u;
        goto label_17bd54;
    }
    ctx->pc = 0x17BD4Cu;
    {
        const bool branch_taken_0x17bd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bd4c) {
            ctx->pc = 0x17BF20u;
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BD54u;
label_17bd54:
    // 0x17bd54: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x17bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
label_17bd58:
    // 0x17bd58: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x17bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_17bd5c:
    // 0x17bd5c: 0x34a5d70a  ori         $a1, $a1, 0xD70A
    ctx->pc = 0x17bd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_17bd60:
    // 0x17bd60: 0x3c033e0f  lui         $v1, 0x3E0F
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15887 << 16));
label_17bd64:
    // 0x17bd64: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x17bd64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_17bd68:
    // 0x17bd68: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x17bd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23593);
label_17bd6c:
    // 0x17bd6c: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x17bd6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_17bd70:
    // 0x17bd70: 0x3c094140  lui         $t1, 0x4140
    ctx->pc = 0x17bd70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16704 << 16));
label_17bd74:
    // 0x17bd74: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
label_17bd78:
    // 0x17bd78: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x17bd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_17bd7c:
    // 0x17bd7c: 0x3c06bc23  lui         $a2, 0xBC23
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48163 << 16));
label_17bd80:
    // 0x17bd80: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x17bd80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_17bd84:
    // 0x17bd84: 0x34cbd70a  ori         $t3, $a2, 0xD70A
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
label_17bd88:
    // 0x17bd88: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
label_17bd8c:
    // 0x17bd8c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x17bd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_17bd90:
    // 0x17bd90: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x17bd90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17bd94:
    // 0x17bd94: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x17bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
label_17bd98:
    // 0x17bd98: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x17bd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_17bd9c:
    // 0x17bd9c: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x17bd9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_17bda0:
    // 0x17bda0: 0x3c053d8f  lui         $a1, 0x3D8F
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15759 << 16));
label_17bda4:
    // 0x17bda4: 0x34aa5c29  ori         $t2, $a1, 0x5C29
    ctx->pc = 0x17bda4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23593);
label_17bda8:
    // 0x17bda8: 0x3c05be4c  lui         $a1, 0xBE4C
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48716 << 16));
label_17bdac:
    // 0x17bdac: 0x34a8cccd  ori         $t0, $a1, 0xCCCD
    ctx->pc = 0x17bdacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_17bdb0:
    // 0x17bdb0: 0x3c053f20  lui         $a1, 0x3F20
    ctx->pc = 0x17bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16160 << 16));
label_17bdb4:
    // 0x17bdb4: 0x34a6d97c  ori         $a2, $a1, 0xD97C
    ctx->pc = 0x17bdb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55676);
label_17bdb8:
    // 0x17bdb8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x17bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_17bdbc:
    // 0x17bdbc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17bdbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bdc0:
    // 0x17bdc0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x17bdc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_17bdc4:
    // 0x17bdc4: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x17bdc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_17bdc8:
    // 0x17bdc8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_17bdcc:
    // 0x17bdcc: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bdd0:
    // 0x17bdd0: 0x30e50100  andi        $a1, $a3, 0x100
    ctx->pc = 0x17bdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
label_17bdd4:
    // 0x17bdd4: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_17bdd8:
    if (ctx->pc == 0x17BDD8u) {
        ctx->pc = 0x17BDDCu;
        goto label_17bddc;
    }
    ctx->pc = 0x17BDD4u;
    {
        const bool branch_taken_0x17bdd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdd4) {
            ctx->pc = 0x17BE84u;
            goto label_17be84;
        }
    }
    ctx->pc = 0x17BDDCu;
label_17bddc:
    // 0x17bddc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_17bde0:
    // 0x17bde0: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x17bde0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
label_17bde4:
    // 0x17bde4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x17bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_17bde8:
    // 0x17bde8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x17bde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_17bdec:
    // 0x17bdec: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x17bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17bdf0:
    // 0x17bdf0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x17bdf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bdf4:
    // 0x17bdf4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x17bdf4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_17bdf8:
    // 0x17bdf8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x17bdf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_17bdfc:
    // 0x17bdfc: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x17bdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_17be00:
    // 0x17be00: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x17be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17be04:
    // 0x17be04: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x17be04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_17be08:
    // 0x17be08: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x17be08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_17be0c:
    // 0x17be0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_17be10:
    if (ctx->pc == 0x17BE10u) {
        ctx->pc = 0x17BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE0Cu;
        // 0x17be10: 0xe4810024  swc1        $f1, 0x24($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE14u;
        goto label_17be14;
    }
    ctx->pc = 0x17BE0Cu;
    {
        const bool branch_taken_0x17be0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE0Cu;
        // 0x17be10: 0xe4810024  swc1        $f1, 0x24($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be0c) {
            ctx->pc = 0x17BE1Cu;
            goto label_17be1c;
        }
    }
    ctx->pc = 0x17BE14u;
label_17be14:
    // 0x17be14: 0x10000007  b           . + 4 + (0x7 << 2)
label_17be18:
    if (ctx->pc == 0x17BE18u) {
        ctx->pc = 0x17BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE14u;
        // 0x17be18: 0xac8b0024  sw          $t3, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE1Cu;
        goto label_17be1c;
    }
    ctx->pc = 0x17BE14u;
    {
        const bool branch_taken_0x17be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE14u;
        // 0x17be18: 0xac8b0024  sw          $t3, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be14) {
            ctx->pc = 0x17BE34u;
            goto label_17be34;
        }
    }
    ctx->pc = 0x17BE1Cu;
label_17be1c:
    // 0x17be1c: 0x0  nop
    ctx->pc = 0x17be1cu;
    // NOP
label_17be20:
    // 0x17be20: 0x46080836  c.le.s      $f1, $f8
    ctx->pc = 0x17be20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17be24:
    // 0x17be24: 0x0  nop
    ctx->pc = 0x17be24u;
    // NOP
label_17be28:
    // 0x17be28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17be2c:
    if (ctx->pc == 0x17BE2Cu) {
        ctx->pc = 0x17BE30u;
        goto label_17be30;
    }
    ctx->pc = 0x17BE28u;
    {
        const bool branch_taken_0x17be28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17be28) {
            ctx->pc = 0x17BE34u;
            goto label_17be34;
        }
    }
    ctx->pc = 0x17BE30u;
label_17be30:
    // 0x17be30: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x17be30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_17be34:
    // 0x17be34: 0x0  nop
    ctx->pc = 0x17be34u;
    // NOP
label_17be38:
    // 0x17be38: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_17be3c:
    // 0x17be3c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_17be40:
    if (ctx->pc == 0x17BE40u) {
        ctx->pc = 0x17BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE3Cu;
        // 0x17be40: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE44u;
        goto label_17be44;
    }
    ctx->pc = 0x17BE3Cu;
    {
        const bool branch_taken_0x17be3c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE3Cu;
        // 0x17be40: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be3c) {
            ctx->pc = 0x17BE50u;
            goto label_17be50;
        }
    }
    ctx->pc = 0x17BE44u;
label_17be44:
    // 0x17be44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17be44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17be48:
    // 0x17be48: 0x10000007  b           . + 4 + (0x7 << 2)
label_17be4c:
    if (ctx->pc == 0x17BE4Cu) {
        ctx->pc = 0x17BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE48u;
        // 0x17be4c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE50u;
        goto label_17be50;
    }
    ctx->pc = 0x17BE48u;
    {
        const bool branch_taken_0x17be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE48u;
        // 0x17be4c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be48) {
            ctx->pc = 0x17BE68u;
            goto label_17be68;
        }
    }
    ctx->pc = 0x17BE50u;
label_17be50:
    // 0x17be50: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17be50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_17be54:
    // 0x17be54: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x17be54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_17be58:
    // 0x17be58: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17be58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17be5c:
    // 0x17be5c: 0x0  nop
    ctx->pc = 0x17be5cu;
    // NOP
label_17be60:
    // 0x17be60: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17be60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_17be64:
    // 0x17be64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17be64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17be68:
    // 0x17be68: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x17be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17be6c:
    // 0x17be6c: 0x0  nop
    ctx->pc = 0x17be6cu;
    // NOP
label_17be70:
    // 0x17be70: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17be70u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_17be74:
    // 0x17be74: 0x0  nop
    ctx->pc = 0x17be74u;
    // NOP
label_17be78:
    // 0x17be78: 0x0  nop
    ctx->pc = 0x17be78u;
    // NOP
label_17be7c:
    // 0x17be7c: 0x10000019  b           . + 4 + (0x19 << 2)
label_17be80:
    if (ctx->pc == 0x17BE80u) {
        ctx->pc = 0x17BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE7Cu;
        // 0x17be80: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE84u;
        goto label_17be84;
    }
    ctx->pc = 0x17BE7Cu;
    {
        const bool branch_taken_0x17be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE7Cu;
        // 0x17be80: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be7c) {
            ctx->pc = 0x17BEE4u;
            goto label_17bee4;
        }
    }
    ctx->pc = 0x17BE84u;
label_17be84:
    // 0x17be84: 0x0  nop
    ctx->pc = 0x17be84u;
    // NOP
label_17be88:
    // 0x17be88: 0x30e50200  andi        $a1, $a3, 0x200
    ctx->pc = 0x17be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_17be8c:
    // 0x17be8c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_17be90:
    if (ctx->pc == 0x17BE90u) {
        ctx->pc = 0x17BE94u;
        goto label_17be94;
    }
    ctx->pc = 0x17BE8Cu;
    {
        const bool branch_taken_0x17be8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be8c) {
            ctx->pc = 0x17BEE4u;
            goto label_17bee4;
        }
    }
    ctx->pc = 0x17BE94u;
label_17be94:
    // 0x17be94: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x17be94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
label_17be98:
    // 0x17be98: 0xac890030  sw          $t1, 0x30($a0)
    ctx->pc = 0x17be98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 9));
label_17be9c:
    // 0x17be9c: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x17be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
label_17bea0:
    // 0x17bea0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_17bea4:
    // 0x17bea4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_17bea8:
    // 0x17bea8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_17beac:
    if (ctx->pc == 0x17BEACu) {
        ctx->pc = 0x17BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEA8u;
        // 0x17beac: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BEB0u;
        goto label_17beb0;
    }
    ctx->pc = 0x17BEA8u;
    {
        const bool branch_taken_0x17bea8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEA8u;
        // 0x17beac: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bea8) {
            ctx->pc = 0x17BEBCu;
            goto label_17bebc;
        }
    }
    ctx->pc = 0x17BEB0u;
label_17beb0:
    // 0x17beb0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17beb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17beb4:
    // 0x17beb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_17beb8:
    if (ctx->pc == 0x17BEB8u) {
        ctx->pc = 0x17BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB4u;
        // 0x17beb8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BEBCu;
        goto label_17bebc;
    }
    ctx->pc = 0x17BEB4u;
    {
        const bool branch_taken_0x17beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB4u;
        // 0x17beb8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17beb4) {
            ctx->pc = 0x17BED4u;
            goto label_17bed4;
        }
    }
    ctx->pc = 0x17BEBCu;
label_17bebc:
    // 0x17bebc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_17bec0:
    // 0x17bec0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x17bec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_17bec4:
    // 0x17bec4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17bec4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bec8:
    // 0x17bec8: 0x0  nop
    ctx->pc = 0x17bec8u;
    // NOP
label_17becc:
    // 0x17becc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17beccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_17bed0:
    // 0x17bed0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17bed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17bed4:
    // 0x17bed4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x17bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bed8:
    // 0x17bed8: 0x0  nop
    ctx->pc = 0x17bed8u;
    // NOP
label_17bedc:
    // 0x17bedc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17bedcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_17bee0:
    // 0x17bee0: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x17bee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_17bee4:
    // 0x17bee4: 0x0  nop
    ctx->pc = 0x17bee4u;
    // NOP
label_17bee8:
    // 0x17bee8: 0xe4870028  swc1        $f7, 0x28($a0)
    ctx->pc = 0x17bee8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_17beec:
    // 0x17beec: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x17beecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_17bef0:
    // 0x17bef0: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x17bef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bef4:
    // 0x17bef4: 0x0  nop
    ctx->pc = 0x17bef4u;
    // NOP
label_17bef8:
    // 0x17bef8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17befc:
    if (ctx->pc == 0x17BEFCu) {
        ctx->pc = 0x17BF00u;
        goto label_17bf00;
    }
    ctx->pc = 0x17BEF8u;
    {
        const bool branch_taken_0x17bef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bef8) {
            ctx->pc = 0x17BF04u;
            goto label_17bf04;
        }
    }
    ctx->pc = 0x17BF00u;
label_17bf00:
    // 0x17bf00: 0x460939c1  sub.s       $f7, $f7, $f9
    ctx->pc = 0x17bf00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
label_17bf04:
    // 0x17bf04: 0x0  nop
    ctx->pc = 0x17bf04u;
    // NOP
label_17bf08:
    // 0x17bf08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf0c:
    // 0x17bf0c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x17bf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_17bf10:
    // 0x17bf10: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_17bf14:
    if (ctx->pc == 0x17BF14u) {
        ctx->pc = 0x17BF18u;
        goto label_17bf18;
    }
    ctx->pc = 0x17BF10u;
    {
        const bool branch_taken_0x17bf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf10) {
            ctx->pc = 0x17BF20u;
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BF18u;
label_17bf18:
    // 0x17bf18: 0x1000ffac  b           . + 4 + (-0x54 << 2)
label_17bf1c:
    if (ctx->pc == 0x17BF1Cu) {
        ctx->pc = 0x17BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF18u;
        // 0x17bf1c: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BF20u;
        goto label_17bf20;
    }
    ctx->pc = 0x17BF18u;
    {
        const bool branch_taken_0x17bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF18u;
        // 0x17bf1c: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf18) {
            ctx->pc = 0x17BDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bdcc;
        }
    }
    ctx->pc = 0x17BF20u;
label_17bf20:
    // 0x17bf20: 0x3e00008  jr          $ra
label_17bf24:
    if (ctx->pc == 0x17BF24u) {
        ctx->pc = 0x17BF28u;
        goto label_17bf28;
    }
    ctx->pc = 0x17BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF28u;
label_17bf28:
    // 0x17bf28: 0x0  nop
    ctx->pc = 0x17bf28u;
    // NOP
label_17bf2c:
    // 0x17bf2c: 0x0  nop
    ctx->pc = 0x17bf2cu;
    // NOP
label_17bf30:
    // 0x17bf30: 0x8f858450  lw          $a1, -0x7BB0($gp)
    ctx->pc = 0x17bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17bf34:
    // 0x17bf34: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_17bf38:
    if (ctx->pc == 0x17BF38u) {
        ctx->pc = 0x17BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF34u;
        // 0x17bf38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BF3Cu;
        goto label_17bf3c;
    }
    ctx->pc = 0x17BF34u;
    {
        const bool branch_taken_0x17bf34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF34u;
        // 0x17bf38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf34) {
            ctx->pc = 0x17BFD8u;
            goto label_17bfd8;
        }
    }
    ctx->pc = 0x17BF3Cu;
label_17bf3c:
    // 0x17bf3c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_17bf40:
    if (ctx->pc == 0x17BF40u) {
        ctx->pc = 0x17BF44u;
        goto label_17bf44;
    }
    ctx->pc = 0x17BF3Cu;
    {
        const bool branch_taken_0x17bf3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bf3c) {
            ctx->pc = 0x17BF50u;
            goto label_17bf50;
        }
    }
    ctx->pc = 0x17BF44u;
label_17bf44:
    // 0x17bf44: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_17bf48:
    // 0x17bf48: 0x1000000b  b           . + 4 + (0xB << 2)
label_17bf4c:
    if (ctx->pc == 0x17BF4Cu) {
        ctx->pc = 0x17BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF48u;
        // 0x17bf4c: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BF50u;
        goto label_17bf50;
    }
    ctx->pc = 0x17BF48u;
    {
        const bool branch_taken_0x17bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF48u;
        // 0x17bf4c: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf48) {
            ctx->pc = 0x17BF78u;
            goto label_17bf78;
        }
    }
    ctx->pc = 0x17BF50u;
label_17bf50:
    // 0x17bf50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17bf54:
    // 0x17bf54: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_17bf58:
    // 0x17bf58: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_17bf5c:
    // 0x17bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bf60:
    // 0x17bf60: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17bf64:
    // 0x17bf64: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
label_17bf68:
    // 0x17bf68: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bf6c:
    // 0x17bf6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17bf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17bf70:
    // 0x17bf70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x17bf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_17bf74:
    // 0x17bf74: 0xaf838758  sw          $v1, -0x78A8($gp)
    ctx->pc = 0x17bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
label_17bf78:
    // 0x17bf78: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17bf7c:
    // 0x17bf7c: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_17bf80:
    // 0x17bf80: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x17bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_17bf84:
    // 0x17bf84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_17bf88:
    // 0x17bf88: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_17bf8c:
    // 0x17bf8c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x17bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_17bf90:
    // 0x17bf90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_17bf94:
    // 0x17bf94: 0x664024  and         $t0, $v1, $a2
    ctx->pc = 0x17bf94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_17bf98:
    // 0x17bf98: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
label_17bf9c:
    if (ctx->pc == 0x17BF9Cu) {
        ctx->pc = 0x17BFA0u;
        goto label_17bfa0;
    }
    ctx->pc = 0x17BF98u;
    {
        const bool branch_taken_0x17bf98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf98) {
            ctx->pc = 0x17BFACu;
            goto label_17bfac;
        }
    }
    ctx->pc = 0x17BFA0u;
label_17bfa0:
    // 0x17bfa0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x17bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_17bfa4:
    // 0x17bfa4: 0x10000006  b           . + 4 + (0x6 << 2)
label_17bfa8:
    if (ctx->pc == 0x17BFA8u) {
        ctx->pc = 0x17BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFA4u;
        // 0x17bfa8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BFACu;
        goto label_17bfac;
    }
    ctx->pc = 0x17BFA4u;
    {
        const bool branch_taken_0x17bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFA4u;
        // 0x17bfa8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfa4) {
            ctx->pc = 0x17BFC0u;
            goto label_17bfc0;
        }
    }
    ctx->pc = 0x17BFACu;
label_17bfac:
    // 0x17bfac: 0x0  nop
    ctx->pc = 0x17bfacu;
    // NOP
label_17bfb0:
    // 0x17bfb0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_17bfb4:
    if (ctx->pc == 0x17BFB4u) {
        ctx->pc = 0x17BFB8u;
        goto label_17bfb8;
    }
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17BFC0u;
            goto label_17bfc0;
        }
    }
    ctx->pc = 0x17BFB8u;
label_17bfb8:
    // 0x17bfb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_17bfbc:
    // 0x17bfbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x17bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_17bfc0:
    // 0x17bfc0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_17bfc4:
    // 0x17bfc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17bfc8:
    // 0x17bfc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17bfcc:
    if (ctx->pc == 0x17BFCCu) {
        ctx->pc = 0x17BFD0u;
        goto label_17bfd0;
    }
    ctx->pc = 0x17BFC8u;
    {
        const bool branch_taken_0x17bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfc8) {
            ctx->pc = 0x17BFD8u;
            goto label_17bfd8;
        }
    }
    ctx->pc = 0x17BFD0u;
label_17bfd0:
    // 0x17bfd0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_17bfd4:
    if (ctx->pc == 0x17BFD4u) {
        ctx->pc = 0x17BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFD0u;
        // 0x17bfd4: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BFD8u;
        goto label_17bfd8;
    }
    ctx->pc = 0x17BFD0u;
    {
        const bool branch_taken_0x17bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFD0u;
        // 0x17bfd4: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfd0) {
            ctx->pc = 0x17BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf90;
        }
    }
    ctx->pc = 0x17BFD8u;
label_17bfd8:
    // 0x17bfd8: 0x3e00008  jr          $ra
label_17bfdc:
    if (ctx->pc == 0x17BFDCu) {
        ctx->pc = 0x17BFE0u;
        goto label_17bfe0;
    }
    ctx->pc = 0x17BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFE0u;
label_17bfe0:
    // 0x17bfe0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_17bfe4:
    // 0x17bfe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17bfe8:
    // 0x17bfe8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17bfec:
    // 0x17bfec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17bff0:
    // 0x17bff0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17bff4:
    // 0x17bff4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17bff8:
    // 0x17bff8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17bffc:
    // 0x17bffc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17bffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c000:
    // 0x17c000: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17c004:
    // 0x17c004: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17c004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c008:
    // 0x17c008: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17c00c:
    // 0x17c00c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17c00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c010:
    // 0x17c010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17c014:
    // 0x17c014: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17c014u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17c018:
    // 0x17c018: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17c018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17c01c:
    // 0x17c01c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c01cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17c020:
    // 0x17c020: 0x8f859188  lw          $a1, -0x6E78($gp)
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
label_17c024:
    // 0x17c024: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c028:
    // 0x17c028: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17c028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_17c02c:
    // 0x17c02c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17c030:
    // 0x17c030: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x17c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_17c034:
    // 0x17c034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17c038:
    if (ctx->pc == 0x17C038u) {
        ctx->pc = 0x17C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C034u;
        // 0x17c038: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C03Cu;
        goto label_17c03c;
    }
    ctx->pc = 0x17C034u;
    {
        const bool branch_taken_0x17c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C034u;
        // 0x17c038: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c034) {
            ctx->pc = 0x17C048u;
            goto label_17c048;
        }
    }
    ctx->pc = 0x17C03Cu;
label_17c03c:
    // 0x17c03c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17c040:
    // 0x17c040: 0x10000005  b           . + 4 + (0x5 << 2)
label_17c044:
    if (ctx->pc == 0x17C044u) {
        ctx->pc = 0x17C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C040u;
        // 0x17c044: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C048u;
        goto label_17c048;
    }
    ctx->pc = 0x17C040u;
    {
        const bool branch_taken_0x17c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C040u;
        // 0x17c044: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c040) {
            ctx->pc = 0x17C058u;
            goto label_17c058;
        }
    }
    ctx->pc = 0x17C048u;
label_17c048:
    // 0x17c048: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17c04c:
    if (ctx->pc == 0x17C04Cu) {
        ctx->pc = 0x17C050u;
        goto label_17c050;
    }
    ctx->pc = 0x17C048u;
    {
        const bool branch_taken_0x17c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c048) {
            ctx->pc = 0x17C058u;
            goto label_17c058;
        }
    }
    ctx->pc = 0x17C050u;
label_17c050:
    // 0x17c050: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_17c054:
    if (ctx->pc == 0x17C054u) {
        ctx->pc = 0x17C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C050u;
        // 0x17c054: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C058u;
        goto label_17c058;
    }
    ctx->pc = 0x17C050u;
    {
        const bool branch_taken_0x17c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C050u;
        // 0x17c054: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c050) {
            ctx->pc = 0x17C02Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c02c;
        }
    }
    ctx->pc = 0x17C058u;
label_17c058:
    // 0x17c058: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x17c058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_17c05c:
    // 0x17c05c: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x17c05cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_17c060:
    // 0x17c060: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_17c064:
    // 0x17c064: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x17c064u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_17c068:
    // 0x17c068: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c06c:
    // 0x17c06c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x17c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_17c070:
    // 0x17c070: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x17c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_17c074:
    // 0x17c074: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x17c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c078:
    // 0x17c078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c07c:
    // 0x17c07c: 0x0  nop
    ctx->pc = 0x17c07cu;
    // NOP
label_17c080:
    // 0x17c080: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_17c084:
    if (ctx->pc == 0x17C084u) {
        ctx->pc = 0x17C088u;
        goto label_17c088;
    }
    ctx->pc = 0x17C080u;
    {
        const bool branch_taken_0x17c080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c080) {
            ctx->pc = 0x17C09Cu;
            goto label_17c09c;
        }
    }
    ctx->pc = 0x17C088u;
label_17c088:
    // 0x17c088: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x17c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c08c:
    // 0x17c08c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17c08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c090:
    // 0x17c090: 0x0  nop
    ctx->pc = 0x17c090u;
    // NOP
label_17c094:
    // 0x17c094: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17c098:
    if (ctx->pc == 0x17C098u) {
        ctx->pc = 0x17C09Cu;
        goto label_17c09c;
    }
    ctx->pc = 0x17C094u;
    {
        const bool branch_taken_0x17c094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c094) {
            ctx->pc = 0x17C0A8u;
            goto label_17c0a8;
        }
    }
    ctx->pc = 0x17C09Cu;
label_17c09c:
    // 0x17c09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c0a0:
    // 0x17c0a0: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_17c0a4:
    if (ctx->pc == 0x17C0A4u) {
        ctx->pc = 0x17C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0A0u;
        // 0x17c0a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0A8u;
        goto label_17c0a8;
    }
    ctx->pc = 0x17C0A0u;
    {
        const bool branch_taken_0x17c0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0A0u;
        // 0x17c0a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0a0) {
            ctx->pc = 0x17C428u;
            { ctx->pc = 0x17c428; return; }
        }
    }
    ctx->pc = 0x17C0A8u;
label_17c0a8:
    // 0x17c0a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17c0ac:
    // 0x17c0ac: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x17c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_17c0b0:
    // 0x17c0b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17c0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17c0b4:
    // 0x17c0b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c0b8:
    // 0x17c0b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17c0bc:
    if (ctx->pc == 0x17C0BCu) {
        ctx->pc = 0x17C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B8u;
        // 0x17c0bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0C0u;
        goto label_17c0c0;
    }
    ctx->pc = 0x17C0B8u;
    {
        const bool branch_taken_0x17c0b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B8u;
        // 0x17c0bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0b8) {
            ctx->pc = 0x17C0CCu;
            goto label_17c0cc;
        }
    }
    ctx->pc = 0x17C0C0u;
label_17c0c0:
    // 0x17c0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c0c4:
    // 0x17c0c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_17c0c8:
    if (ctx->pc == 0x17C0C8u) {
        ctx->pc = 0x17C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0C4u;
        // 0x17c0c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0CCu;
        goto label_17c0cc;
    }
    ctx->pc = 0x17C0C4u;
    {
        const bool branch_taken_0x17c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0C4u;
        // 0x17c0c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0c4) {
            ctx->pc = 0x17C0E4u;
            goto label_17c0e4;
        }
    }
    ctx->pc = 0x17C0CCu;
label_17c0cc:
    // 0x17c0cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17c0d0:
    // 0x17c0d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17c0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17c0d4:
    // 0x17c0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c0d8:
    // 0x17c0d8: 0x0  nop
    ctx->pc = 0x17c0d8u;
    // NOP
label_17c0dc:
    // 0x17c0dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17c0e0:
    // 0x17c0e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17c0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17c0e4:
    // 0x17c0e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x17c0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_17c0e8:
    // 0x17c0e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c0e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c0ec:
    // 0x17c0ec: 0x0  nop
    ctx->pc = 0x17c0ecu;
    // NOP
label_17c0f0:
    // 0x17c0f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_17c0f4:
    if (ctx->pc == 0x17C0F4u) {
        ctx->pc = 0x17C0F8u;
        goto label_17c0f8;
    }
    ctx->pc = 0x17C0F0u;
    {
        const bool branch_taken_0x17c0f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c0f0) {
            ctx->pc = 0x17C14Cu;
            goto label_17c14c;
        }
    }
    ctx->pc = 0x17C0F8u;
label_17c0f8:
    // 0x17c0f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17c0fc:
    // 0x17c0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c100:
    // 0x17c100: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17c104:
    if (ctx->pc == 0x17C104u) {
        ctx->pc = 0x17C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C100u;
        // 0x17c104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C108u;
        goto label_17c108;
    }
    ctx->pc = 0x17C100u;
    {
        const bool branch_taken_0x17c100 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C100u;
        // 0x17c104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c100) {
            ctx->pc = 0x17C114u;
            goto label_17c114;
        }
    }
    ctx->pc = 0x17C108u;
label_17c108:
    // 0x17c108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c10c:
    // 0x17c10c: 0x10000007  b           . + 4 + (0x7 << 2)
label_17c110:
    if (ctx->pc == 0x17C110u) {
        ctx->pc = 0x17C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C10Cu;
        // 0x17c110: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C114u;
        goto label_17c114;
    }
    ctx->pc = 0x17C10Cu;
    {
        const bool branch_taken_0x17c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C10Cu;
        // 0x17c110: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c10c) {
            ctx->pc = 0x17C12Cu;
            goto label_17c12c;
        }
    }
    ctx->pc = 0x17C114u;
label_17c114:
    // 0x17c114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17c118:
    // 0x17c118: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17c11c:
    // 0x17c11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c120:
    // 0x17c120: 0x0  nop
    ctx->pc = 0x17c120u;
    // NOP
label_17c124:
    // 0x17c124: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17c124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17c128:
    // 0x17c128: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17c128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17c12c:
    // 0x17c12c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x17c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_17c130:
    // 0x17c130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c134:
    // 0x17c134: 0x0  nop
    ctx->pc = 0x17c134u;
    // NOP
label_17c138:
    // 0x17c138: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17c138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17c13c:
    // 0x17c13c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17c13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c140:
    // 0x17c140: 0x0  nop
    ctx->pc = 0x17c140u;
    // NOP
label_17c144:
    // 0x17c144: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_17c148:
    if (ctx->pc == 0x17C148u) {
        ctx->pc = 0x17C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C144u;
        // 0x17c148: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C14Cu;
        goto label_17c14c;
    }
    ctx->pc = 0x17C144u;
    {
        const bool branch_taken_0x17c144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C144u;
        // 0x17c148: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c144) {
            ctx->pc = 0x17C158u;
            goto label_17c158;
        }
    }
    ctx->pc = 0x17C14Cu;
label_17c14c:
    // 0x17c14c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c150:
    // 0x17c150: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_17c154:
    if (ctx->pc == 0x17C154u) {
        ctx->pc = 0x17C158u;
        goto label_17c158;
    }
    ctx->pc = 0x17C150u;
    {
        const bool branch_taken_0x17c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c150) {
            ctx->pc = 0x17C424u;
            { ctx->pc = 0x17c424; return; }
        }
    }
    ctx->pc = 0x17C158u;
label_17c158:
    // 0x17c158: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17c15c:
    // 0x17c15c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_17c160:
    // 0x17c160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17c164:
    // 0x17c164: 0xc066e14  jal         func_19B850
label_17c168:
    if (ctx->pc == 0x17C168u) {
        ctx->pc = 0x17C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C164u;
        // 0x17c168: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C16Cu;
        goto label_17c16c;
    }
    ctx->pc = 0x17C164u;
    SET_GPR_U32(ctx, 31, 0x17C16Cu);
    ctx->pc = 0x17C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C164u;
    // 0x17c168: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17C16Cu;
label_17c16c:
    // 0x17c16c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17c170:
    // 0x17c170: 0xc066e38  jal         func_19B8E0
label_17c174:
    if (ctx->pc == 0x17C174u) {
        ctx->pc = 0x17C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C170u;
        // 0x17c174: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C178u;
        goto label_17c178;
    }
    ctx->pc = 0x17C170u;
    SET_GPR_U32(ctx, 31, 0x17C178u);
    ctx->pc = 0x17C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C170u;
    // 0x17c174: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17C178u;
label_17c178:
    // 0x17c178: 0x27b500d8  addiu       $s5, $sp, 0xD8
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_17c17c:
    // 0x17c17c: 0x8fb000d0  lw          $s0, 0xD0($sp)
    ctx->pc = 0x17c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17c180:
    // 0x17c180: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x17c180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17c184:
    // 0x17c184: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17c188:
    // 0x17c188: 0xc066e38  jal         func_19B8E0
label_17c18c:
    if (ctx->pc == 0x17C18Cu) {
        ctx->pc = 0x17C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C188u;
        // 0x17c18c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C190u;
        goto label_17c190;
    }
    ctx->pc = 0x17C188u;
    SET_GPR_U32(ctx, 31, 0x17C190u);
    ctx->pc = 0x17C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C188u;
    // 0x17c18c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17C190u;
label_17c190:
    // 0x17c190: 0x8f899188  lw          $t1, -0x6E78($gp)
    ctx->pc = 0x17c190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
label_17c194:
    // 0x17c194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17c194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17c198:
    // 0x17c198: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17c19c:
    // 0x17c19c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x17c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17c1a0:
    // 0x17c1a0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x17c1a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17c1a4:
    // 0x17c1a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x17c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_17c1a8:
    // 0x17c1a8: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x17c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_17c1ac:
    // 0x17c1ac: 0x14930029  bne         $a0, $s3, . + 4 + (0x29 << 2)
label_17c1b0:
    if (ctx->pc == 0x17C1B0u) {
        ctx->pc = 0x17C1B4u;
        goto label_17c1b4;
    }
    ctx->pc = 0x17C1ACu;
    {
        const bool branch_taken_0x17c1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x17c1ac) {
            ctx->pc = 0x17C254u;
            { ctx->pc = 0x17c254; return; }
        }
    }
    ctx->pc = 0x17C1B4u;
label_17c1b4:
    // 0x17c1b4: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x17c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_17c1b8:
    // 0x17c1b8: 0x30840800  andi        $a0, $a0, 0x800
    ctx->pc = 0x17c1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_17c1bc:
    // 0x17c1bc: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_17c1c0:
    if (ctx->pc == 0x17C1C0u) {
        ctx->pc = 0x17C1C4u;
        goto label_17c1c4;
    }
    ctx->pc = 0x17C1BCu;
    {
        const bool branch_taken_0x17c1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c1bc) {
            ctx->pc = 0x17C254u;
            { ctx->pc = 0x17c254; return; }
        }
    }
    ctx->pc = 0x17C1C4u;
label_17c1c4:
    // 0x17c1c4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x17c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_17c1c8:
    // 0x17c1c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17c1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17c1cc:
    // 0x17c1cc: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x17c1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_17c1d0:
    // 0x17c1d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c1d4:
    // 0x17c1d4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_17c1d8:
    if (ctx->pc == 0x17C1D8u) {
        ctx->pc = 0x17C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1D4u;
        // 0x17c1d8: 0x893821  addu        $a3, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C1DCu;
        goto label_17c1dc;
    }
    ctx->pc = 0x17C1D4u;
    {
        const bool branch_taken_0x17c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1D4u;
        // 0x17c1d8: 0x893821  addu        $a3, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1d4) {
            ctx->pc = 0x17C248u;
            { ctx->pc = 0x17c248; return; }
        }
    }
    ctx->pc = 0x17C1DCu;
label_17c1dc:
    // 0x17c1dc: 0x0  nop
    ctx->pc = 0x17c1dcu;
    // NOP
label_17c1e0:
    // 0x17c1e0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x17c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c1e4:
    // 0x17c1e4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x17c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c1e8:
    // 0x17c1e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17c1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c1ec:
    // 0x17c1ec: 0x0  nop
    ctx->pc = 0x17c1ecu;
    // NOP
label_17c1f0:
    // 0x17c1f0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_17c1f4:
    if (ctx->pc == 0x17C1F4u) {
        ctx->pc = 0x17C1F8u;
        goto label_17c1f8;
    }
    ctx->pc = 0x17C1F0u;
    {
        const bool branch_taken_0x17c1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c1f0) {
            ctx->pc = 0x17C240u;
            { ctx->pc = 0x17c240; return; }
        }
    }
    ctx->pc = 0x17C1F8u;
label_17c1f8:
    // 0x17c1f8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x17c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c1fc:
    // 0x17c1fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17c1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c200:
    // 0x17c200: 0x0  nop
    ctx->pc = 0x17c200u;
    // NOP
label_17c204:
    // 0x17c204: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_17c208:
    if (ctx->pc == 0x17C208u) {
        ctx->pc = 0x17C20Cu;
        goto label_17c20c;
    }
    ctx->pc = 0x17C204u;
    {
        const bool branch_taken_0x17c204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c204) {
            ctx->pc = 0x17C240u;
            { ctx->pc = 0x17c240; return; }
        }
    }
    ctx->pc = 0x17C20Cu;
label_17c20c:
    // 0x17c20c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x17c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c210:
    // 0x17c210: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x17c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c214:
    // 0x17c214: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17c214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c218:
    // 0x17c218: 0x0  nop
    ctx->pc = 0x17c218u;
    // NOP
label_17c21c:
    // 0x17c21c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_17c220:
    if (ctx->pc == 0x17C220u) {
        ctx->pc = 0x17C224u;
        goto label_17c224;
    }
    ctx->pc = 0x17C21Cu;
    {
        const bool branch_taken_0x17c21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c21c) {
            ctx->pc = 0x17C240u;
            { ctx->pc = 0x17c240; return; }
        }
    }
    ctx->pc = 0x17C224u;
label_17c224:
    // 0x17c224: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x17c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c228:
    // 0x17c228: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17c228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c22c:
    // 0x17c22c: 0x0  nop
    ctx->pc = 0x17c22cu;
    // NOP
    ctx->pc = 0x17c230u;
    return;
}

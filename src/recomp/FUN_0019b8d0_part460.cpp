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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb60u: goto label_27bb60;
        case 0x27bb64u: goto label_27bb64;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb6cu: goto label_27bb6c;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb74u: goto label_27bb74;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        default: return;
    }

label_27bac0:
    // 0x27bac0: 0x12905  .word       0x00012905                   # INVALID     $zero, $at, 0x2905 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27BAC0 raw=0x00012905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bac4:
    // 0x27bac4: 0xac30  tge         $zero, $zero, 688
    ctx->pc = 0x27bac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bac8:
    // 0x27bac8: 0x0  nop
    ctx->pc = 0x27bac8u;
    // NOP
label_27bacc:
    // 0x27bacc: 0x0  nop
    ctx->pc = 0x27baccu;
    // NOP
label_27bad0:
    // 0x27bad0: 0x1291b  .word       0x0001291B                   # divu        $a1, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bad0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27bad4:
    // 0x27bad4: 0x6e10  .word       0x00006E10                   # mfhi        $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bad4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27bad8:
    // 0x27bad8: 0x0  nop
    ctx->pc = 0x27bad8u;
    // NOP
label_27badc:
    // 0x27badc: 0x0  nop
    ctx->pc = 0x27badcu;
    // NOP
label_27bae0:
    // 0x27bae0: 0x12929  .word       0x00012929                   # mtsa        $zero # 00012900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27bae0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27bae4:
    // 0x27bae4: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27bae8:
    // 0x27bae8: 0x0  nop
    ctx->pc = 0x27bae8u;
    // NOP
label_27baec:
    // 0x27baec: 0x0  nop
    ctx->pc = 0x27baecu;
    // NOP
label_27baf0:
    // 0x27baf0: 0x12941  .word       0x00012941                   # INVALID     $zero, $at, 0x2941 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27baf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27BAF0 raw=0x00012941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27baf4:
    // 0x27baf4: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x27baf4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27baf8:
    // 0x27baf8: 0x0  nop
    ctx->pc = 0x27baf8u;
    // NOP
label_27bafc:
    // 0x27bafc: 0x0  nop
    ctx->pc = 0x27bafcu;
    // NOP
label_27bb00:
    // 0x27bb00: 0x12956  .word       0x00012956                   # dsrlv       $a1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27bb04:
    // 0x27bb04: 0x9860  .word       0x00009860                   # add         $s3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27bb08:
    // 0x27bb08: 0x0  nop
    ctx->pc = 0x27bb08u;
    // NOP
label_27bb0c:
    // 0x27bb0c: 0x0  nop
    ctx->pc = 0x27bb0cu;
    // NOP
label_27bb10:
    // 0x27bb10: 0x1296a  .word       0x0001296A                   # slt         $a1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27bb14:
    // 0x27bb14: 0x6f60  .word       0x00006F60                   # add         $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27bb18:
    // 0x27bb18: 0x0  nop
    ctx->pc = 0x27bb18u;
    // NOP
label_27bb1c:
    // 0x27bb1c: 0x0  nop
    ctx->pc = 0x27bb1cu;
    // NOP
label_27bb20:
    // 0x27bb20: 0x12978  dsll        $a1, $at, 5
    ctx->pc = 0x27bb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << 5);
label_27bb24:
    // 0x27bb24: 0xbea0  .word       0x0000BEA0                   # add         $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27bb28:
    // 0x27bb28: 0x0  nop
    ctx->pc = 0x27bb28u;
    // NOP
label_27bb2c:
    // 0x27bb2c: 0x0  nop
    ctx->pc = 0x27bb2cu;
    // NOP
label_27bb30:
    // 0x27bb30: 0x12990  .word       0x00012990                   # mfhi        $a1 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb30u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27bb34:
    // 0x27bb34: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x27bb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bb38:
    // 0x27bb38: 0x0  nop
    ctx->pc = 0x27bb38u;
    // NOP
label_27bb3c:
    // 0x27bb3c: 0x0  nop
    ctx->pc = 0x27bb3cu;
    // NOP
label_27bb40:
    // 0x27bb40: 0x1299b  .word       0x0001299B                   # divu        $a1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb40u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27bb44:
    // 0x27bb44: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27bb48:
    // 0x27bb48: 0x0  nop
    ctx->pc = 0x27bb48u;
    // NOP
label_27bb4c:
    // 0x27bb4c: 0x0  nop
    ctx->pc = 0x27bb4cu;
    // NOP
label_27bb50:
    // 0x27bb50: 0x129a8  .word       0x000129A8                   # mfsa        $a1 # 00010180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27bb50u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_27bb54:
    // 0x27bb54: 0x8a60  .word       0x00008A60                   # add         $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27bb58:
    // 0x27bb58: 0x0  nop
    ctx->pc = 0x27bb58u;
    // NOP
label_27bb5c:
    // 0x27bb5c: 0x0  nop
    ctx->pc = 0x27bb5cu;
    // NOP
label_27bb60:
    // 0x27bb60: 0x129ba  dsrl        $a1, $at, 6
    ctx->pc = 0x27bb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> 6);
label_27bb64:
    // 0x27bb64: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27bb68:
    // 0x27bb68: 0x0  nop
    ctx->pc = 0x27bb68u;
    // NOP
label_27bb6c:
    // 0x27bb6c: 0x0  nop
    ctx->pc = 0x27bb6cu;
    // NOP
label_27bb70:
    // 0x27bb70: 0x129cb  .word       0x000129CB                   # movn        $a1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb70u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_27bb74:
    // 0x27bb74: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x27bb74u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27bb78:
    // 0x27bb78: 0x0  nop
    ctx->pc = 0x27bb78u;
    // NOP
label_27bb7c:
    // 0x27bb7c: 0x0  nop
    ctx->pc = 0x27bb7cu;
    // NOP
label_27bb80:
    // 0x27bb80: 0x129e4  .word       0x000129E4                   # and         $a1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27bb84:
    // 0x27bb84: 0x7fe0  .word       0x00007FE0                   # add         $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27bb88:
    // 0x27bb88: 0x0  nop
    ctx->pc = 0x27bb88u;
    // NOP
label_27bb8c:
    // 0x27bb8c: 0x0  nop
    ctx->pc = 0x27bb8cu;
    // NOP
label_27bb90:
    // 0x27bb90: 0x129f4  teq         $zero, $at, 167
    ctx->pc = 0x27bb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bb94:
    // 0x27bb94: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x27bb94u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27bb98:
    // 0x27bb98: 0x0  nop
    ctx->pc = 0x27bb98u;
    // NOP
label_27bb9c:
    // 0x27bb9c: 0x0  nop
    ctx->pc = 0x27bb9cu;
    // NOP
label_27bba0:
    // 0x27bba0: 0x12a08  .word       0x00012A08                   # jr          $zero # 00012A00 <InstrIdType: CPU_SPECIAL>
label_27bba4:
    if (ctx->pc == 0x27BBA4u) {
        ctx->pc = 0x27BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA0u;
        // 0x27bba4: 0x9100  sll         $s2, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBA8u;
        goto label_27bba8;
    }
    ctx->pc = 0x27BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA0u;
        // 0x27bba4: 0x9100  sll         $s2, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BBA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27BBA8u;
label_27bba8:
    // 0x27bba8: 0x0  nop
    ctx->pc = 0x27bba8u;
    // NOP
label_27bbac:
    // 0x27bbac: 0x0  nop
    ctx->pc = 0x27bbacu;
    // NOP
label_27bbb0:
    // 0x27bbb0: 0x12a1b  .word       0x00012A1B                   # divu        $a1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbb0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27bbb4:
    // 0x27bbb4: 0xdc20  .word       0x0000DC20                   # add         $k1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27bbb8:
    // 0x27bbb8: 0x0  nop
    ctx->pc = 0x27bbb8u;
    // NOP
label_27bbbc:
    // 0x27bbbc: 0x0  nop
    ctx->pc = 0x27bbbcu;
    // NOP
label_27bbc0:
    // 0x27bbc0: 0x12a37  .word       0x00012A37                   # INVALID     $zero, $at, 0x2A37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27BBC0 raw=0x00012A37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bbc4:
    // 0x27bbc4: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27bbc8:
    // 0x27bbc8: 0x0  nop
    ctx->pc = 0x27bbc8u;
    // NOP
label_27bbcc:
    // 0x27bbcc: 0x0  nop
    ctx->pc = 0x27bbccu;
    // NOP
label_27bbd0:
    // 0x27bbd0: 0x12a45  .word       0x00012A45                   # INVALID     $zero, $at, 0x2A45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27BBD0 raw=0x00012A45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bbd4:
    // 0x27bbd4: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbd4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27bbd8:
    // 0x27bbd8: 0x0  nop
    ctx->pc = 0x27bbd8u;
    // NOP
label_27bbdc:
    // 0x27bbdc: 0x0  nop
    ctx->pc = 0x27bbdcu;
    // NOP
label_27bbe0:
    // 0x27bbe0: 0x12a5a  .word       0x00012A5A                   # div         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbe0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27bbe4:
    // 0x27bbe4: 0x9400  sll         $s2, $zero, 16
    ctx->pc = 0x27bbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27bbe8:
    // 0x27bbe8: 0x0  nop
    ctx->pc = 0x27bbe8u;
    // NOP
label_27bbec:
    // 0x27bbec: 0x0  nop
    ctx->pc = 0x27bbecu;
    // NOP
label_27bbf0:
    // 0x27bbf0: 0x12a6d  .word       0x00012A6D                   # daddu       $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27bbf4:
    // 0x27bbf4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bbf4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27bbf8:
    // 0x27bbf8: 0x0  nop
    ctx->pc = 0x27bbf8u;
    // NOP
label_27bbfc:
    // 0x27bbfc: 0x0  nop
    ctx->pc = 0x27bbfcu;
    // NOP
label_27bc00:
    // 0x27bc00: 0x12a79  .word       0x00012A79                   # INVALID     $zero, $at, 0x2A79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27BC00 raw=0x00012A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bc04:
    // 0x27bc04: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x27bc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bc08:
    // 0x27bc08: 0x0  nop
    ctx->pc = 0x27bc08u;
    // NOP
label_27bc0c:
    // 0x27bc0c: 0x0  nop
    ctx->pc = 0x27bc0cu;
    // NOP
label_27bc10:
    // 0x27bc10: 0x12a8c  .word       0x00012A8C                   # syscall     170 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc10u;
    ctx->pc = 0x27BC14u;
runtime->handleSyscall(rdram, ctx, 0x4AAu);
label_27bc14:
    // 0x27bc14: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x27bc14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_27bc18:
    // 0x27bc18: 0x0  nop
    ctx->pc = 0x27bc18u;
    // NOP
label_27bc1c:
    // 0x27bc1c: 0x0  nop
    ctx->pc = 0x27bc1cu;
    // NOP
label_27bc20:
    // 0x27bc20: 0x12a99  .word       0x00012A99                   # multu       $zero, $at # 00002A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_27bc24:
    // 0x27bc24: 0x9200  sll         $s2, $zero, 8
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27bc28:
    // 0x27bc28: 0x0  nop
    ctx->pc = 0x27bc28u;
    // NOP
label_27bc2c:
    // 0x27bc2c: 0x0  nop
    ctx->pc = 0x27bc2cu;
    // NOP
label_27bc30:
    // 0x27bc30: 0x12aac  .word       0x00012AAC                   # dadd        $a1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_27bc34:
    // 0x27bc34: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27bc38:
    // 0x27bc38: 0x0  nop
    ctx->pc = 0x27bc38u;
    // NOP
label_27bc3c:
    // 0x27bc3c: 0x0  nop
    ctx->pc = 0x27bc3cu;
    // NOP
label_27bc40:
    // 0x27bc40: 0x12ac2  srl         $a1, $at, 11
    ctx->pc = 0x27bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), 11));
label_27bc44:
    // 0x27bc44: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27bc48:
    // 0x27bc48: 0x0  nop
    ctx->pc = 0x27bc48u;
    // NOP
label_27bc4c:
    // 0x27bc4c: 0x0  nop
    ctx->pc = 0x27bc4cu;
    // NOP
label_27bc50:
    // 0x27bc50: 0x12ad3  .word       0x00012AD3                   # mtlo        $zero # 00012AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc50u;
    ctx->lo = GPR_U64(ctx, 0);
label_27bc54:
    // 0x27bc54: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27bc58:
    // 0x27bc58: 0x0  nop
    ctx->pc = 0x27bc58u;
    // NOP
label_27bc5c:
    // 0x27bc5c: 0x0  nop
    ctx->pc = 0x27bc5cu;
    // NOP
label_27bc60:
    // 0x27bc60: 0x12ae6  .word       0x00012AE6                   # xor         $a1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27bc64:
    // 0x27bc64: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x27bc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bc68:
    // 0x27bc68: 0x0  nop
    ctx->pc = 0x27bc68u;
    // NOP
label_27bc6c:
    // 0x27bc6c: 0x0  nop
    ctx->pc = 0x27bc6cu;
    // NOP
label_27bc70:
    // 0x27bc70: 0x12af8  dsll        $a1, $at, 11
    ctx->pc = 0x27bc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << 11);
label_27bc74:
    // 0x27bc74: 0x99d0  .word       0x000099D0                   # mfhi        $s3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc74u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27bc78:
    // 0x27bc78: 0x0  nop
    ctx->pc = 0x27bc78u;
    // NOP
label_27bc7c:
    // 0x27bc7c: 0x0  nop
    ctx->pc = 0x27bc7cu;
    // NOP
label_27bc80:
    // 0x27bc80: 0x12b0c  .word       0x00012B0C                   # syscall     172 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc80u;
    ctx->pc = 0x27BC84u;
runtime->handleSyscall(rdram, ctx, 0x4ACu);
label_27bc84:
    // 0x27bc84: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27bc84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bc88:
    // 0x27bc88: 0x0  nop
    ctx->pc = 0x27bc88u;
    // NOP
label_27bc8c:
    // 0x27bc8c: 0x0  nop
    ctx->pc = 0x27bc8cu;
    // NOP
label_27bc90:
    // 0x27bc90: 0x12b1a  .word       0x00012B1A                   # div         $a1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bc90u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27bc94:
    // 0x27bc94: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x27bc94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bc98:
    // 0x27bc98: 0x0  nop
    ctx->pc = 0x27bc98u;
    // NOP
label_27bc9c:
    // 0x27bc9c: 0x0  nop
    ctx->pc = 0x27bc9cu;
    // NOP
label_27bca0:
    // 0x27bca0: 0x12b2f  .word       0x00012B2F                   # dsubu       $a1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27bca4:
    // 0x27bca4: 0xc770  tge         $zero, $zero, 797
    ctx->pc = 0x27bca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bca8:
    // 0x27bca8: 0x0  nop
    ctx->pc = 0x27bca8u;
    // NOP
label_27bcac:
    // 0x27bcac: 0x0  nop
    ctx->pc = 0x27bcacu;
    // NOP
label_27bcb0:
    // 0x27bcb0: 0x12b48  .word       0x00012B48                   # jr          $zero # 00012B40 <InstrIdType: CPU_SPECIAL>
label_27bcb4:
    if (ctx->pc == 0x27BCB4u) {
        ctx->pc = 0x27BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB0u;
        // 0x27bcb4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCB8u;
        goto label_27bcb8;
    }
    ctx->pc = 0x27BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB0u;
        // 0x27bcb4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27BCB8u;
label_27bcb8:
    // 0x27bcb8: 0x0  nop
    ctx->pc = 0x27bcb8u;
    // NOP
label_27bcbc:
    // 0x27bcbc: 0x0  nop
    ctx->pc = 0x27bcbcu;
    // NOP
label_27bcc0:
    // 0x27bcc0: 0x12b54  .word       0x00012B54                   # dsllv       $a1, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bcc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27bcc4:
    // 0x27bcc4: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bcc4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27bcc8:
    // 0x27bcc8: 0x0  nop
    ctx->pc = 0x27bcc8u;
    // NOP
label_27bccc:
    // 0x27bccc: 0x0  nop
    ctx->pc = 0x27bcccu;
    // NOP
label_27bcd0:
    // 0x27bcd0: 0x12b64  .word       0x00012B64                   # and         $a1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27bcd4:
    // 0x27bcd4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bcd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27bcd8:
    // 0x27bcd8: 0x0  nop
    ctx->pc = 0x27bcd8u;
    // NOP
label_27bcdc:
    // 0x27bcdc: 0x0  nop
    ctx->pc = 0x27bcdcu;
    // NOP
label_27bce0:
    // 0x27bce0: 0x12b71  tgeu        $zero, $at, 173
    ctx->pc = 0x27bce0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bce4:
    // 0x27bce4: 0xad60  .word       0x0000AD60                   # add         $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27bce8:
    // 0x27bce8: 0x0  nop
    ctx->pc = 0x27bce8u;
    // NOP
label_27bcec:
    // 0x27bcec: 0x0  nop
    ctx->pc = 0x27bcecu;
    // NOP
label_27bcf0:
    // 0x27bcf0: 0x12b87  .word       0x00012B87                   # srav        $a1, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bcf0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27bcf4:
    // 0x27bcf4: 0x95b0  tge         $zero, $zero, 598
    ctx->pc = 0x27bcf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bcf8:
    // 0x27bcf8: 0x0  nop
    ctx->pc = 0x27bcf8u;
    // NOP
label_27bcfc:
    // 0x27bcfc: 0x0  nop
    ctx->pc = 0x27bcfcu;
    // NOP
label_27bd00:
    // 0x27bd00: 0x12b9a  .word       0x00012B9A                   # div         $a1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27bd04:
    // 0x27bd04: 0xa6d0  .word       0x0000A6D0                   # mfhi        $s4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd04u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27bd08:
    // 0x27bd08: 0x0  nop
    ctx->pc = 0x27bd08u;
    // NOP
label_27bd0c:
    // 0x27bd0c: 0x0  nop
    ctx->pc = 0x27bd0cu;
    // NOP
label_27bd10:
    // 0x27bd10: 0x12baf  .word       0x00012BAF                   # dsubu       $a1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27bd14:
    // 0x27bd14: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x27bd14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27bd18:
    // 0x27bd18: 0x0  nop
    ctx->pc = 0x27bd18u;
    // NOP
label_27bd1c:
    // 0x27bd1c: 0x0  nop
    ctx->pc = 0x27bd1cu;
    // NOP
label_27bd20:
    // 0x27bd20: 0x12bb6  tne         $zero, $at, 174
    ctx->pc = 0x27bd20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bd24:
    // 0x27bd24: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd24u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27bd28:
    // 0x27bd28: 0x0  nop
    ctx->pc = 0x27bd28u;
    // NOP
label_27bd2c:
    // 0x27bd2c: 0x0  nop
    ctx->pc = 0x27bd2cu;
    // NOP
label_27bd30:
    // 0x27bd30: 0x12bc8  .word       0x00012BC8                   # jr          $zero # 00012BC0 <InstrIdType: CPU_SPECIAL>
label_27bd34:
    if (ctx->pc == 0x27BD34u) {
        ctx->pc = 0x27BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD30u;
        // 0x27bd34: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD38u;
        goto label_27bd38;
    }
    ctx->pc = 0x27BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD30u;
        // 0x27bd34: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27BD38u;
label_27bd38:
    // 0x27bd38: 0x0  nop
    ctx->pc = 0x27bd38u;
    // NOP
label_27bd3c:
    // 0x27bd3c: 0x0  nop
    ctx->pc = 0x27bd3cu;
    // NOP
label_27bd40:
    // 0x27bd40: 0x12bdb  .word       0x00012BDB                   # divu        $a1, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd40u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27bd44:
    // 0x27bd44: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27bd48:
    // 0x27bd48: 0x0  nop
    ctx->pc = 0x27bd48u;
    // NOP
label_27bd4c:
    // 0x27bd4c: 0x0  nop
    ctx->pc = 0x27bd4cu;
    // NOP
label_27bd50:
    // 0x27bd50: 0x12bef  .word       0x00012BEF                   # dsubu       $a1, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27bd54:
    // 0x27bd54: 0xb790  .word       0x0000B790                   # mfhi        $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd54u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27bd58:
    // 0x27bd58: 0x0  nop
    ctx->pc = 0x27bd58u;
    // NOP
label_27bd5c:
    // 0x27bd5c: 0x0  nop
    ctx->pc = 0x27bd5cu;
    // NOP
label_27bd60:
    // 0x27bd60: 0x12c06  .word       0x00012C06                   # srlv        $a1, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27bd64:
    // 0x27bd64: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x27bd64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bd68:
    // 0x27bd68: 0x0  nop
    ctx->pc = 0x27bd68u;
    // NOP
label_27bd6c:
    // 0x27bd6c: 0x0  nop
    ctx->pc = 0x27bd6cu;
    // NOP
label_27bd70:
    // 0x27bd70: 0x12c1d  .word       0x00012C1D                   # dmultu      $zero, $at # 00002C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27BD70 raw=0x00012C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bd74:
    // 0x27bd74: 0xd3b0  tge         $zero, $zero, 846
    ctx->pc = 0x27bd74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bd78:
    // 0x27bd78: 0x0  nop
    ctx->pc = 0x27bd78u;
    // NOP
label_27bd7c:
    // 0x27bd7c: 0x0  nop
    ctx->pc = 0x27bd7cu;
    // NOP
label_27bd80:
    // 0x27bd80: 0x12c38  dsll        $a1, $at, 16
    ctx->pc = 0x27bd80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << 16);
label_27bd84:
    // 0x27bd84: 0xdb70  tge         $zero, $zero, 877
    ctx->pc = 0x27bd84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bd88:
    // 0x27bd88: 0x0  nop
    ctx->pc = 0x27bd88u;
    // NOP
label_27bd8c:
    // 0x27bd8c: 0x0  nop
    ctx->pc = 0x27bd8cu;
    // NOP
label_27bd90:
    // 0x27bd90: 0x12c54  .word       0x00012C54                   # dsllv       $a1, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bd90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27bd94:
    // 0x27bd94: 0x8400  sll         $s0, $zero, 16
    ctx->pc = 0x27bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27bd98:
    // 0x27bd98: 0x0  nop
    ctx->pc = 0x27bd98u;
    // NOP
label_27bd9c:
    // 0x27bd9c: 0x0  nop
    ctx->pc = 0x27bd9cu;
    // NOP
label_27bda0:
    // 0x27bda0: 0x12c65  .word       0x00012C65                   # or          $a1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27bda4:
    // 0x27bda4: 0x9be0  .word       0x00009BE0                   # add         $s3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27bda8:
    // 0x27bda8: 0x0  nop
    ctx->pc = 0x27bda8u;
    // NOP
label_27bdac:
    // 0x27bdac: 0x0  nop
    ctx->pc = 0x27bdacu;
    // NOP
label_27bdb0:
    // 0x27bdb0: 0x12c79  .word       0x00012C79                   # INVALID     $zero, $at, 0x2C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27BDB0 raw=0x00012C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bdb4:
    // 0x27bdb4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdb4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27bdb8:
    // 0x27bdb8: 0x0  nop
    ctx->pc = 0x27bdb8u;
    // NOP
label_27bdbc:
    // 0x27bdbc: 0x0  nop
    ctx->pc = 0x27bdbcu;
    // NOP
label_27bdc0:
    // 0x27bdc0: 0x12c85  .word       0x00012C85                   # INVALID     $zero, $at, 0x2C85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27BDC0 raw=0x00012C85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bdc4:
    // 0x27bdc4: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x27bdc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bdc8:
    // 0x27bdc8: 0x0  nop
    ctx->pc = 0x27bdc8u;
    // NOP
label_27bdcc:
    // 0x27bdcc: 0x0  nop
    ctx->pc = 0x27bdccu;
    // NOP
label_27bdd0:
    // 0x27bdd0: 0x12c9d  .word       0x00012C9D                   # dmultu      $zero, $at # 00002C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27BDD0 raw=0x00012C9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bdd4:
    // 0x27bdd4: 0xc2e0  .word       0x0000C2E0                   # add         $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27bdd8:
    // 0x27bdd8: 0x0  nop
    ctx->pc = 0x27bdd8u;
    // NOP
label_27bddc:
    // 0x27bddc: 0x0  nop
    ctx->pc = 0x27bddcu;
    // NOP
label_27bde0:
    // 0x27bde0: 0x12cb6  tne         $zero, $at, 178
    ctx->pc = 0x27bde0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bde4:
    // 0x27bde4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27bde4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bde8:
    // 0x27bde8: 0x0  nop
    ctx->pc = 0x27bde8u;
    // NOP
label_27bdec:
    // 0x27bdec: 0x0  nop
    ctx->pc = 0x27bdecu;
    // NOP
label_27bdf0:
    // 0x27bdf0: 0x12cc4  .word       0x00012CC4                   # sllv        $a1, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27bdf4:
    // 0x27bdf4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x27bdf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27bdf8:
    // 0x27bdf8: 0x0  nop
    ctx->pc = 0x27bdf8u;
    // NOP
label_27bdfc:
    // 0x27bdfc: 0x0  nop
    ctx->pc = 0x27bdfcu;
    // NOP
label_27be00:
    // 0x27be00: 0x12cd2  .word       0x00012CD2                   # mflo        $a1 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be00u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_27be04:
    // 0x27be04: 0xac10  .word       0x0000AC10                   # mfhi        $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be04u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27be08:
    // 0x27be08: 0x0  nop
    ctx->pc = 0x27be08u;
    // NOP
label_27be0c:
    // 0x27be0c: 0x0  nop
    ctx->pc = 0x27be0cu;
    // NOP
label_27be10:
    // 0x27be10: 0x12ce8  .word       0x00012CE8                   # mfsa        $a1 # 000104C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27be10u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_27be14:
    // 0x27be14: 0xb620  .word       0x0000B620                   # add         $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27be18:
    // 0x27be18: 0x0  nop
    ctx->pc = 0x27be18u;
    // NOP
label_27be1c:
    // 0x27be1c: 0x0  nop
    ctx->pc = 0x27be1cu;
    // NOP
label_27be20:
    // 0x27be20: 0x12cff  dsra32      $a1, $at, 19
    ctx->pc = 0x27be20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (32 + 19));
label_27be24:
    // 0x27be24: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x27be24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27be28:
    // 0x27be28: 0x0  nop
    ctx->pc = 0x27be28u;
    // NOP
label_27be2c:
    // 0x27be2c: 0x0  nop
    ctx->pc = 0x27be2cu;
    // NOP
label_27be30:
    // 0x27be30: 0x12d16  .word       0x00012D16                   # dsrlv       $a1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27be34:
    // 0x27be34: 0x7e60  .word       0x00007E60                   # add         $t7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27be38:
    // 0x27be38: 0x0  nop
    ctx->pc = 0x27be38u;
    // NOP
label_27be3c:
    // 0x27be3c: 0x0  nop
    ctx->pc = 0x27be3cu;
    // NOP
label_27be40:
    // 0x27be40: 0x12d26  .word       0x00012D26                   # xor         $a1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27be44:
    // 0x27be44: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x27be44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27be48:
    // 0x27be48: 0x0  nop
    ctx->pc = 0x27be48u;
    // NOP
label_27be4c:
    // 0x27be4c: 0x0  nop
    ctx->pc = 0x27be4cu;
    // NOP
label_27be50:
    // 0x27be50: 0x12d31  tgeu        $zero, $at, 180
    ctx->pc = 0x27be50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27be54:
    // 0x27be54: 0xc550  .word       0x0000C550                   # mfhi        $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27be58:
    // 0x27be58: 0x0  nop
    ctx->pc = 0x27be58u;
    // NOP
label_27be5c:
    // 0x27be5c: 0x0  nop
    ctx->pc = 0x27be5cu;
    // NOP
label_27be60:
    // 0x27be60: 0x12d4a  .word       0x00012D4A                   # movz        $a1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be60u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_27be64:
    // 0x27be64: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x27be64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27be68:
    // 0x27be68: 0x0  nop
    ctx->pc = 0x27be68u;
    // NOP
label_27be6c:
    // 0x27be6c: 0x0  nop
    ctx->pc = 0x27be6cu;
    // NOP
label_27be70:
    // 0x27be70: 0x12d5f  .word       0x00012D5F                   # ddivu       $a1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27BE70 raw=0x00012D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27be74:
    // 0x27be74: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be74u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27be78:
    // 0x27be78: 0x0  nop
    ctx->pc = 0x27be78u;
    // NOP
label_27be7c:
    // 0x27be7c: 0x0  nop
    ctx->pc = 0x27be7cu;
    // NOP
label_27be80:
    // 0x27be80: 0x12d6d  .word       0x00012D6D                   # daddu       $a1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27be84:
    // 0x27be84: 0x63d0  .word       0x000063D0                   # mfhi        $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27be84u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27be88:
    // 0x27be88: 0x0  nop
    ctx->pc = 0x27be88u;
    // NOP
label_27be8c:
    // 0x27be8c: 0x0  nop
    ctx->pc = 0x27be8cu;
    // NOP
label_27be90:
    // 0x27be90: 0x12d7a  dsrl        $a1, $at, 21
    ctx->pc = 0x27be90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> 21);
label_27be94:
    // 0x27be94: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27be98:
    // 0x27be98: 0x0  nop
    ctx->pc = 0x27be98u;
    // NOP
label_27be9c:
    // 0x27be9c: 0x0  nop
    ctx->pc = 0x27be9cu;
    // NOP
label_27bea0:
    // 0x27bea0: 0x12d83  sra         $a1, $at, 22
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 22));
label_27bea4:
    // 0x27bea4: 0x62e0  .word       0x000062E0                   # add         $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27bea8:
    // 0x27bea8: 0x0  nop
    ctx->pc = 0x27bea8u;
    // NOP
label_27beac:
    // 0x27beac: 0x0  nop
    ctx->pc = 0x27beacu;
    // NOP
label_27beb0:
    // 0x27beb0: 0x12d90  .word       0x00012D90                   # mfhi        $a1 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27beb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27beb4:
    // 0x27beb4: 0xb4d0  .word       0x0000B4D0                   # mfhi        $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27beb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27beb8:
    // 0x27beb8: 0x0  nop
    ctx->pc = 0x27beb8u;
    // NOP
label_27bebc:
    // 0x27bebc: 0x0  nop
    ctx->pc = 0x27bebcu;
    // NOP
label_27bec0:
    // 0x27bec0: 0x12da7  .word       0x00012DA7                   # nor         $a1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bec0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27bec4:
    // 0x27bec4: 0x5740  sll         $t2, $zero, 29
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27bec8:
    // 0x27bec8: 0x0  nop
    ctx->pc = 0x27bec8u;
    // NOP
label_27becc:
    // 0x27becc: 0x0  nop
    ctx->pc = 0x27beccu;
    // NOP
label_27bed0:
    // 0x27bed0: 0x12db2  tlt         $zero, $at, 182
    ctx->pc = 0x27bed0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bed4:
    // 0x27bed4: 0x3970  tge         $zero, $zero, 229
    ctx->pc = 0x27bed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bed8:
    // 0x27bed8: 0x0  nop
    ctx->pc = 0x27bed8u;
    // NOP
label_27bedc:
    // 0x27bedc: 0x0  nop
    ctx->pc = 0x27bedcu;
    // NOP
label_27bee0:
    // 0x27bee0: 0x12dba  dsrl        $a1, $at, 22
    ctx->pc = 0x27bee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> 22);
label_27bee4:
    // 0x27bee4: 0xf430  tge         $zero, $zero, 976
    ctx->pc = 0x27bee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bee8:
    // 0x27bee8: 0x0  nop
    ctx->pc = 0x27bee8u;
    // NOP
label_27beec:
    // 0x27beec: 0x0  nop
    ctx->pc = 0x27beecu;
    // NOP
label_27bef0:
    // 0x27bef0: 0x12dd9  .word       0x00012DD9                   # multu       $zero, $at # 00002DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bef0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_27bef4:
    // 0x27bef4: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27bef8:
    // 0x27bef8: 0x0  nop
    ctx->pc = 0x27bef8u;
    // NOP
label_27befc:
    // 0x27befc: 0x0  nop
    ctx->pc = 0x27befcu;
    // NOP
label_27bf00:
    // 0x27bf00: 0x12ded  .word       0x00012DED                   # daddu       $a1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27bf04:
    // 0x27bf04: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27bf08:
    // 0x27bf08: 0x0  nop
    ctx->pc = 0x27bf08u;
    // NOP
label_27bf0c:
    // 0x27bf0c: 0x0  nop
    ctx->pc = 0x27bf0cu;
    // NOP
label_27bf10:
    // 0x27bf10: 0x12e03  sra         $a1, $at, 24
    ctx->pc = 0x27bf10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 24));
label_27bf14:
    // 0x27bf14: 0xced0  .word       0x0000CED0                   # mfhi        $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf14u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27bf18:
    // 0x27bf18: 0x0  nop
    ctx->pc = 0x27bf18u;
    // NOP
label_27bf1c:
    // 0x27bf1c: 0x0  nop
    ctx->pc = 0x27bf1cu;
    // NOP
label_27bf20:
    // 0x27bf20: 0x12e1d  .word       0x00012E1D                   # dmultu      $zero, $at # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27BF20 raw=0x00012E1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bf24:
    // 0x27bf24: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27bf28:
    // 0x27bf28: 0x0  nop
    ctx->pc = 0x27bf28u;
    // NOP
label_27bf2c:
    // 0x27bf2c: 0x0  nop
    ctx->pc = 0x27bf2cu;
    // NOP
label_27bf30:
    // 0x27bf30: 0x12e2e  .word       0x00012E2E                   # dsub        $a1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_27bf34:
    // 0x27bf34: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x27bf34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27bf38:
    // 0x27bf38: 0x0  nop
    ctx->pc = 0x27bf38u;
    // NOP
label_27bf3c:
    // 0x27bf3c: 0x0  nop
    ctx->pc = 0x27bf3cu;
    // NOP
label_27bf40:
    // 0x27bf40: 0x12e3c  dsll32      $a1, $at, 24
    ctx->pc = 0x27bf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 24));
label_27bf44:
    // 0x27bf44: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27bf48:
    // 0x27bf48: 0x0  nop
    ctx->pc = 0x27bf48u;
    // NOP
label_27bf4c:
    // 0x27bf4c: 0x0  nop
    ctx->pc = 0x27bf4cu;
    // NOP
label_27bf50:
    // 0x27bf50: 0x12e44  .word       0x00012E44                   # sllv        $a1, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27bf54:
    // 0x27bf54: 0x4ef0  tge         $zero, $zero, 315
    ctx->pc = 0x27bf54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bf58:
    // 0x27bf58: 0x0  nop
    ctx->pc = 0x27bf58u;
    // NOP
label_27bf5c:
    // 0x27bf5c: 0x0  nop
    ctx->pc = 0x27bf5cu;
    // NOP
label_27bf60:
    // 0x27bf60: 0x12e4e  .word       0x00012E4E                   # INVALID     $zero, $at, 0x2E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27BF60 raw=0x00012E4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bf64:
    // 0x27bf64: 0x6da0  .word       0x00006DA0                   # add         $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27bf68:
    // 0x27bf68: 0x0  nop
    ctx->pc = 0x27bf68u;
    // NOP
label_27bf6c:
    // 0x27bf6c: 0x0  nop
    ctx->pc = 0x27bf6cu;
    // NOP
label_27bf70:
    // 0x27bf70: 0x12e5c  .word       0x00012E5C                   # dmult       $zero, $at # 00002E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27BF70 raw=0x00012E5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bf74:
    // 0x27bf74: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x27bf74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bf78:
    // 0x27bf78: 0x0  nop
    ctx->pc = 0x27bf78u;
    // NOP
label_27bf7c:
    // 0x27bf7c: 0x0  nop
    ctx->pc = 0x27bf7cu;
    // NOP
label_27bf80:
    // 0x27bf80: 0x12e67  .word       0x00012E67                   # nor         $a1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf80u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27bf84:
    // 0x27bf84: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27bf88:
    // 0x27bf88: 0x0  nop
    ctx->pc = 0x27bf88u;
    // NOP
label_27bf8c:
    // 0x27bf8c: 0x0  nop
    ctx->pc = 0x27bf8cu;
    // NOP
label_27bf90:
    // 0x27bf90: 0x12e74  teq         $zero, $at, 185
    ctx->pc = 0x27bf90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bf94:
    // 0x27bf94: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bf94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27bf98:
    // 0x27bf98: 0x0  nop
    ctx->pc = 0x27bf98u;
    // NOP
label_27bf9c:
    // 0x27bf9c: 0x0  nop
    ctx->pc = 0x27bf9cu;
    // NOP
label_27bfa0:
    // 0x27bfa0: 0x12e7e  dsrl32      $a1, $at, 25
    ctx->pc = 0x27bfa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (32 + 25));
label_27bfa4:
    // 0x27bfa4: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x27bfa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bfa8:
    // 0x27bfa8: 0x0  nop
    ctx->pc = 0x27bfa8u;
    // NOP
label_27bfac:
    // 0x27bfac: 0x0  nop
    ctx->pc = 0x27bfacu;
    // NOP
label_27bfb0:
    // 0x27bfb0: 0x12e8e  .word       0x00012E8E                   # INVALID     $zero, $at, 0x2E8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bfb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27BFB0 raw=0x00012E8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27bfb4:
    // 0x27bfb4: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x27bfb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27bfb8:
    // 0x27bfb8: 0x0  nop
    ctx->pc = 0x27bfb8u;
    // NOP
label_27bfbc:
    // 0x27bfbc: 0x0  nop
    ctx->pc = 0x27bfbcu;
    // NOP
label_27bfc0:
    // 0x27bfc0: 0x12e97  .word       0x00012E97                   # dsrav       $a1, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bfc0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27bfc4:
    // 0x27bfc4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bfc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27bfc8:
    // 0x27bfc8: 0x0  nop
    ctx->pc = 0x27bfc8u;
    // NOP
label_27bfcc:
    // 0x27bfcc: 0x0  nop
    ctx->pc = 0x27bfccu;
    // NOP
label_27bfd0:
    // 0x27bfd0: 0x12ea5  .word       0x00012EA5                   # or          $a1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bfd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27bfd4:
    // 0x27bfd4: 0x6780  sll         $t4, $zero, 30
    ctx->pc = 0x27bfd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27bfd8:
    // 0x27bfd8: 0x0  nop
    ctx->pc = 0x27bfd8u;
    // NOP
label_27bfdc:
    // 0x27bfdc: 0x0  nop
    ctx->pc = 0x27bfdcu;
    // NOP
label_27bfe0:
    // 0x27bfe0: 0x12eb2  tlt         $zero, $at, 186
    ctx->pc = 0x27bfe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bfe4:
    // 0x27bfe4: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27bfe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27bfe8:
    // 0x27bfe8: 0x0  nop
    ctx->pc = 0x27bfe8u;
    // NOP
label_27bfec:
    // 0x27bfec: 0x0  nop
    ctx->pc = 0x27bfecu;
    // NOP
label_27bff0:
    // 0x27bff0: 0x12ec3  sra         $a1, $at, 27
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 27));
label_27bff4:
    // 0x27bff4: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x27bff4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27bff8:
    // 0x27bff8: 0x0  nop
    ctx->pc = 0x27bff8u;
    // NOP
label_27bffc:
    // 0x27bffc: 0x0  nop
    ctx->pc = 0x27bffcu;
    // NOP
label_27c000:
    // 0x27c000: 0x12ed6  .word       0x00012ED6                   # dsrlv       $a1, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27c004:
    // 0x27c004: 0xa950  .word       0x0000A950                   # mfhi        $s5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c004u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27c008:
    // 0x27c008: 0x0  nop
    ctx->pc = 0x27c008u;
    // NOP
label_27c00c:
    // 0x27c00c: 0x0  nop
    ctx->pc = 0x27c00cu;
    // NOP
label_27c010:
    // 0x27c010: 0x12eec  .word       0x00012EEC                   # dadd        $a1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c010u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_27c014:
    // 0x27c014: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x27c014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c018:
    // 0x27c018: 0x0  nop
    ctx->pc = 0x27c018u;
    // NOP
label_27c01c:
    // 0x27c01c: 0x0  nop
    ctx->pc = 0x27c01cu;
    // NOP
label_27c020:
    // 0x27c020: 0x12ef7  .word       0x00012EF7                   # INVALID     $zero, $at, 0x2EF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27C020 raw=0x00012EF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c024:
    // 0x27c024: 0x9320  .word       0x00009320                   # add         $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27c028:
    // 0x27c028: 0x0  nop
    ctx->pc = 0x27c028u;
    // NOP
label_27c02c:
    // 0x27c02c: 0x0  nop
    ctx->pc = 0x27c02cu;
    // NOP
label_27c030:
    // 0x27c030: 0x12f0a  .word       0x00012F0A                   # movz        $a1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c030u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_27c034:
    // 0x27c034: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x27c034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c038:
    // 0x27c038: 0x0  nop
    ctx->pc = 0x27c038u;
    // NOP
label_27c03c:
    // 0x27c03c: 0x0  nop
    ctx->pc = 0x27c03cu;
    // NOP
label_27c040:
    // 0x27c040: 0x12f16  .word       0x00012F16                   # dsrlv       $a1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27c044:
    // 0x27c044: 0xc390  .word       0x0000C390                   # mfhi        $t8 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c044u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27c048:
    // 0x27c048: 0x0  nop
    ctx->pc = 0x27c048u;
    // NOP
label_27c04c:
    // 0x27c04c: 0x0  nop
    ctx->pc = 0x27c04cu;
    // NOP
label_27c050:
    // 0x27c050: 0x12f2f  .word       0x00012F2F                   # dsubu       $a1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27c054:
    // 0x27c054: 0xaeb0  tge         $zero, $zero, 698
    ctx->pc = 0x27c054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c058:
    // 0x27c058: 0x0  nop
    ctx->pc = 0x27c058u;
    // NOP
label_27c05c:
    // 0x27c05c: 0x0  nop
    ctx->pc = 0x27c05cu;
    // NOP
label_27c060:
    // 0x27c060: 0x12f45  .word       0x00012F45                   # INVALID     $zero, $at, 0x2F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27C060 raw=0x00012F45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c064:
    // 0x27c064: 0x8430  tge         $zero, $zero, 528
    ctx->pc = 0x27c064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c068:
    // 0x27c068: 0x0  nop
    ctx->pc = 0x27c068u;
    // NOP
label_27c06c:
    // 0x27c06c: 0x0  nop
    ctx->pc = 0x27c06cu;
    // NOP
label_27c070:
    // 0x27c070: 0x12f56  .word       0x00012F56                   # dsrlv       $a1, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27c074:
    // 0x27c074: 0x96b0  tge         $zero, $zero, 602
    ctx->pc = 0x27c074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c078:
    // 0x27c078: 0x0  nop
    ctx->pc = 0x27c078u;
    // NOP
label_27c07c:
    // 0x27c07c: 0x0  nop
    ctx->pc = 0x27c07cu;
    // NOP
label_27c080:
    // 0x27c080: 0x12f69  .word       0x00012F69                   # mtsa        $zero # 00012F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c080u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27c084:
    // 0x27c084: 0xbb00  sll         $s7, $zero, 12
    ctx->pc = 0x27c084u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27c088:
    // 0x27c088: 0x0  nop
    ctx->pc = 0x27c088u;
    // NOP
label_27c08c:
    // 0x27c08c: 0x0  nop
    ctx->pc = 0x27c08cu;
    // NOP
label_27c090:
    // 0x27c090: 0x12f81  .word       0x00012F81                   # INVALID     $zero, $at, 0x2F81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27C090 raw=0x00012F81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c094:
    // 0x27c094: 0x9870  tge         $zero, $zero, 609
    ctx->pc = 0x27c094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c098:
    // 0x27c098: 0x0  nop
    ctx->pc = 0x27c098u;
    // NOP
label_27c09c:
    // 0x27c09c: 0x0  nop
    ctx->pc = 0x27c09cu;
    // NOP
label_27c0a0:
    // 0x27c0a0: 0x12f95  .word       0x00012F95                   # INVALID     $zero, $at, 0x2F95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27C0A0 raw=0x00012F95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c0a4:
    // 0x27c0a4: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27c0a8:
    // 0x27c0a8: 0x0  nop
    ctx->pc = 0x27c0a8u;
    // NOP
label_27c0ac:
    // 0x27c0ac: 0x0  nop
    ctx->pc = 0x27c0acu;
    // NOP
label_27c0b0:
    // 0x27c0b0: 0x12fa8  .word       0x00012FA8                   # mfsa        $a1 # 00010780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c0b0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_27c0b4:
    // 0x27c0b4: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x27c0b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c0b8:
    // 0x27c0b8: 0x0  nop
    ctx->pc = 0x27c0b8u;
    // NOP
label_27c0bc:
    // 0x27c0bc: 0x0  nop
    ctx->pc = 0x27c0bcu;
    // NOP
label_27c0c0:
    // 0x27c0c0: 0x12fbc  dsll32      $a1, $at, 30
    ctx->pc = 0x27c0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 30));
label_27c0c4:
    // 0x27c0c4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27c0c8:
    // 0x27c0c8: 0x0  nop
    ctx->pc = 0x27c0c8u;
    // NOP
label_27c0cc:
    // 0x27c0cc: 0x0  nop
    ctx->pc = 0x27c0ccu;
    // NOP
label_27c0d0:
    // 0x27c0d0: 0x12fc6  .word       0x00012FC6                   # srlv        $a1, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c0d4:
    // 0x27c0d4: 0xc570  tge         $zero, $zero, 789
    ctx->pc = 0x27c0d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c0d8:
    // 0x27c0d8: 0x0  nop
    ctx->pc = 0x27c0d8u;
    // NOP
label_27c0dc:
    // 0x27c0dc: 0x0  nop
    ctx->pc = 0x27c0dcu;
    // NOP
label_27c0e0:
    // 0x27c0e0: 0x12fdf  .word       0x00012FDF                   # ddivu       $a1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27C0E0 raw=0x00012FDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c0e4:
    // 0x27c0e4: 0xabb0  tge         $zero, $zero, 686
    ctx->pc = 0x27c0e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c0e8:
    // 0x27c0e8: 0x0  nop
    ctx->pc = 0x27c0e8u;
    // NOP
label_27c0ec:
    // 0x27c0ec: 0x0  nop
    ctx->pc = 0x27c0ecu;
    // NOP
label_27c0f0:
    // 0x27c0f0: 0x12ff5  .word       0x00012FF5                   # INVALID     $zero, $at, 0x2FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c0f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27C0F0 raw=0x00012FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c0f4:
    // 0x27c0f4: 0xbec0  sll         $s7, $zero, 27
    ctx->pc = 0x27c0f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27c0f8:
    // 0x27c0f8: 0x0  nop
    ctx->pc = 0x27c0f8u;
    // NOP
label_27c0fc:
    // 0x27c0fc: 0x0  nop
    ctx->pc = 0x27c0fcu;
    // NOP
label_27c100:
    // 0x27c100: 0x1300d  break       1, 192
    ctx->pc = 0x27c100u;
    runtime->handleBreak(rdram, ctx);
label_27c104:
    // 0x27c104: 0xc530  tge         $zero, $zero, 788
    ctx->pc = 0x27c104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c108:
    // 0x27c108: 0x0  nop
    ctx->pc = 0x27c108u;
    // NOP
label_27c10c:
    // 0x27c10c: 0x0  nop
    ctx->pc = 0x27c10cu;
    // NOP
label_27c110:
    // 0x27c110: 0x13026  xor         $a2, $zero, $at
    ctx->pc = 0x27c110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27c114:
    // 0x27c114: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x27c114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c118:
    // 0x27c118: 0x0  nop
    ctx->pc = 0x27c118u;
    // NOP
label_27c11c:
    // 0x27c11c: 0x0  nop
    ctx->pc = 0x27c11cu;
    // NOP
label_27c120:
    // 0x27c120: 0x13039  .word       0x00013039                   # INVALID     $zero, $at, 0x3039 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27C120 raw=0x00013039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c124:
    // 0x27c124: 0x96f0  tge         $zero, $zero, 603
    ctx->pc = 0x27c124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c128:
    // 0x27c128: 0x0  nop
    ctx->pc = 0x27c128u;
    // NOP
label_27c12c:
    // 0x27c12c: 0x0  nop
    ctx->pc = 0x27c12cu;
    // NOP
label_27c130:
    // 0x27c130: 0x1304c  .word       0x0001304C                   # syscall     193 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c130u;
    ctx->pc = 0x27C134u;
runtime->handleSyscall(rdram, ctx, 0x4C1u);
label_27c134:
    // 0x27c134: 0x9210  .word       0x00009210                   # mfhi        $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c134u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27c138:
    // 0x27c138: 0x0  nop
    ctx->pc = 0x27c138u;
    // NOP
label_27c13c:
    // 0x27c13c: 0x0  nop
    ctx->pc = 0x27c13cu;
    // NOP
label_27c140:
    // 0x27c140: 0x1305f  .word       0x0001305F                   # ddivu       $a2, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27C140 raw=0x0001305F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c144:
    // 0x27c144: 0x4f60  .word       0x00004F60                   # add         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27c148:
    // 0x27c148: 0x0  nop
    ctx->pc = 0x27c148u;
    // NOP
label_27c14c:
    // 0x27c14c: 0x0  nop
    ctx->pc = 0x27c14cu;
    // NOP
label_27c150:
    // 0x27c150: 0x13069  .word       0x00013069                   # mtsa        $zero # 00013040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c150u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27c154:
    // 0x27c154: 0x9920  .word       0x00009920                   # add         $s3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27c158:
    // 0x27c158: 0x0  nop
    ctx->pc = 0x27c158u;
    // NOP
label_27c15c:
    // 0x27c15c: 0x0  nop
    ctx->pc = 0x27c15cu;
    // NOP
label_27c160:
    // 0x27c160: 0x1307d  .word       0x0001307D                   # INVALID     $zero, $at, 0x307D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27C160 raw=0x0001307D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c164:
    // 0x27c164: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x27c164u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27c168:
    // 0x27c168: 0x0  nop
    ctx->pc = 0x27c168u;
    // NOP
label_27c16c:
    // 0x27c16c: 0x0  nop
    ctx->pc = 0x27c16cu;
    // NOP
label_27c170:
    // 0x27c170: 0x13090  .word       0x00013090                   # mfhi        $a2 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c170u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27c174:
    // 0x27c174: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x27c174u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27c178:
    // 0x27c178: 0x0  nop
    ctx->pc = 0x27c178u;
    // NOP
label_27c17c:
    // 0x27c17c: 0x0  nop
    ctx->pc = 0x27c17cu;
    // NOP
label_27c180:
    // 0x27c180: 0x1309c  .word       0x0001309C                   # dmult       $zero, $at # 00003080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27C180 raw=0x0001309C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c184:
    // 0x27c184: 0xb140  sll         $s6, $zero, 5
    ctx->pc = 0x27c184u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_27c188:
    // 0x27c188: 0x0  nop
    ctx->pc = 0x27c188u;
    // NOP
label_27c18c:
    // 0x27c18c: 0x0  nop
    ctx->pc = 0x27c18cu;
    // NOP
label_27c190:
    // 0x27c190: 0x130b3  tltu        $zero, $at, 194
    ctx->pc = 0x27c190u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c194:
    // 0x27c194: 0x9de0  .word       0x00009DE0                   # add         $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27c198:
    // 0x27c198: 0x0  nop
    ctx->pc = 0x27c198u;
    // NOP
label_27c19c:
    // 0x27c19c: 0x0  nop
    ctx->pc = 0x27c19cu;
    // NOP
label_27c1a0:
    // 0x27c1a0: 0x130c7  .word       0x000130C7                   # srav        $a2, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c1a4:
    // 0x27c1a4: 0xbc80  sll         $s7, $zero, 18
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27c1a8:
    // 0x27c1a8: 0x0  nop
    ctx->pc = 0x27c1a8u;
    // NOP
label_27c1ac:
    // 0x27c1ac: 0x0  nop
    ctx->pc = 0x27c1acu;
    // NOP
label_27c1b0:
    // 0x27c1b0: 0x130df  .word       0x000130DF                   # ddivu       $a2, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27C1B0 raw=0x000130DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c1b4:
    // 0x27c1b4: 0xc270  tge         $zero, $zero, 777
    ctx->pc = 0x27c1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c1b8:
    // 0x27c1b8: 0x0  nop
    ctx->pc = 0x27c1b8u;
    // NOP
label_27c1bc:
    // 0x27c1bc: 0x0  nop
    ctx->pc = 0x27c1bcu;
    // NOP
label_27c1c0:
    // 0x27c1c0: 0x130f8  dsll        $a2, $at, 3
    ctx->pc = 0x27c1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << 3);
label_27c1c4:
    // 0x27c1c4: 0xa0e0  .word       0x0000A0E0                   # add         $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27c1c8:
    // 0x27c1c8: 0x0  nop
    ctx->pc = 0x27c1c8u;
    // NOP
label_27c1cc:
    // 0x27c1cc: 0x0  nop
    ctx->pc = 0x27c1ccu;
    // NOP
label_27c1d0:
    // 0x27c1d0: 0x1310d  break       1, 196
    ctx->pc = 0x27c1d0u;
    runtime->handleBreak(rdram, ctx);
label_27c1d4:
    // 0x27c1d4: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x27c1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c1d8:
    // 0x27c1d8: 0x0  nop
    ctx->pc = 0x27c1d8u;
    // NOP
label_27c1dc:
    // 0x27c1dc: 0x0  nop
    ctx->pc = 0x27c1dcu;
    // NOP
label_27c1e0:
    // 0x27c1e0: 0x13121  .word       0x00013121                   # addu        $a2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c1e4:
    // 0x27c1e4: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27c1e8:
    // 0x27c1e8: 0x0  nop
    ctx->pc = 0x27c1e8u;
    // NOP
label_27c1ec:
    // 0x27c1ec: 0x0  nop
    ctx->pc = 0x27c1ecu;
    // NOP
label_27c1f0:
    // 0x27c1f0: 0x1312f  .word       0x0001312F                   # dsubu       $a2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27c1f4:
    // 0x27c1f4: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x27c1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27c1f8:
    // 0x27c1f8: 0x0  nop
    ctx->pc = 0x27c1f8u;
    // NOP
label_27c1fc:
    // 0x27c1fc: 0x0  nop
    ctx->pc = 0x27c1fcu;
    // NOP
label_27c200:
    // 0x27c200: 0x13142  srl         $a2, $at, 5
    ctx->pc = 0x27c200u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 5));
label_27c204:
    // 0x27c204: 0xedb0  tge         $zero, $zero, 950
    ctx->pc = 0x27c204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c208:
    // 0x27c208: 0x0  nop
    ctx->pc = 0x27c208u;
    // NOP
label_27c20c:
    // 0x27c20c: 0x0  nop
    ctx->pc = 0x27c20cu;
    // NOP
label_27c210:
    // 0x27c210: 0x13160  .word       0x00013160                   # add         $a2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c210u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27c214:
    // 0x27c214: 0x7f70  tge         $zero, $zero, 509
    ctx->pc = 0x27c214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c218:
    // 0x27c218: 0x0  nop
    ctx->pc = 0x27c218u;
    // NOP
label_27c21c:
    // 0x27c21c: 0x0  nop
    ctx->pc = 0x27c21cu;
    // NOP
label_27c220:
    // 0x27c220: 0x13170  tge         $zero, $at, 197
    ctx->pc = 0x27c220u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c224:
    // 0x27c224: 0x5530  tge         $zero, $zero, 340
    ctx->pc = 0x27c224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c228:
    // 0x27c228: 0x0  nop
    ctx->pc = 0x27c228u;
    // NOP
label_27c22c:
    // 0x27c22c: 0x0  nop
    ctx->pc = 0x27c22cu;
    // NOP
label_27c230:
    // 0x27c230: 0x1317b  dsra        $a2, $at, 5
    ctx->pc = 0x27c230u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 5);
label_27c234:
    // 0x27c234: 0x9d10  .word       0x00009D10                   # mfhi        $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c234u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27c238:
    // 0x27c238: 0x0  nop
    ctx->pc = 0x27c238u;
    // NOP
label_27c23c:
    // 0x27c23c: 0x0  nop
    ctx->pc = 0x27c23cu;
    // NOP
label_27c240:
    // 0x27c240: 0x1318f  .word       0x0001318F                   # sync # 00013000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27c244:
    // 0x27c244: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27c248:
    // 0x27c248: 0x0  nop
    ctx->pc = 0x27c248u;
    // NOP
label_27c24c:
    // 0x27c24c: 0x0  nop
    ctx->pc = 0x27c24cu;
    // NOP
label_27c250:
    // 0x27c250: 0x131a3  .word       0x000131A3                   # negu        $a2, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c254:
    // 0x27c254: 0x7b10  .word       0x00007B10                   # mfhi        $t7 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c254u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c258:
    // 0x27c258: 0x0  nop
    ctx->pc = 0x27c258u;
    // NOP
label_27c25c:
    // 0x27c25c: 0x0  nop
    ctx->pc = 0x27c25cu;
    // NOP
label_27c260:
    // 0x27c260: 0x131b3  tltu        $zero, $at, 198
    ctx->pc = 0x27c260u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c264:
    // 0x27c264: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x27c264u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27c268:
    // 0x27c268: 0x0  nop
    ctx->pc = 0x27c268u;
    // NOP
label_27c26c:
    // 0x27c26c: 0x0  nop
    ctx->pc = 0x27c26cu;
    // NOP
label_27c270:
    // 0x27c270: 0x131c3  sra         $a2, $at, 7
    ctx->pc = 0x27c270u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 7));
label_27c274:
    // 0x27c274: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x27c274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c278:
    // 0x27c278: 0x0  nop
    ctx->pc = 0x27c278u;
    // NOP
label_27c27c:
    // 0x27c27c: 0x0  nop
    ctx->pc = 0x27c27cu;
    // NOP
label_27c280:
    // 0x27c280: 0x131d1  .word       0x000131D1                   # mthi        $zero # 000131C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c280u;
    ctx->hi = GPR_U64(ctx, 0);
label_27c284:
    // 0x27c284: 0xb080  sll         $s6, $zero, 2
    ctx->pc = 0x27c284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c288:
    // 0x27c288: 0x0  nop
    ctx->pc = 0x27c288u;
    // NOP
label_27c28c:
    // 0x27c28c: 0x0  nop
    ctx->pc = 0x27c28cu;
    // NOP
    ctx->pc = 0x27c290u;
    return;
}

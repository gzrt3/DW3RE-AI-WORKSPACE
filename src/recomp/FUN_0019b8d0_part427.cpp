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


void FUN_0019b8d0_part427(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        case 0x26bad8u: goto label_26bad8;
        case 0x26badcu: goto label_26badc;
        case 0x26bae0u: goto label_26bae0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bae8u: goto label_26bae8;
        case 0x26baecu: goto label_26baec;
        case 0x26baf0u: goto label_26baf0;
        case 0x26baf4u: goto label_26baf4;
        case 0x26baf8u: goto label_26baf8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb04u: goto label_26bb04;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb0cu: goto label_26bb0c;
        case 0x26bb10u: goto label_26bb10;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb18u: goto label_26bb18;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb28u: goto label_26bb28;
        case 0x26bb2cu: goto label_26bb2c;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb34u: goto label_26bb34;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb3cu: goto label_26bb3c;
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb84u: goto label_26bb84;
        case 0x26bb88u: goto label_26bb88;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb90u: goto label_26bb90;
        case 0x26bb94u: goto label_26bb94;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bb9cu: goto label_26bb9c;
        case 0x26bba0u: goto label_26bba0;
        case 0x26bba4u: goto label_26bba4;
        case 0x26bba8u: goto label_26bba8;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbb0u: goto label_26bbb0;
        case 0x26bbb4u: goto label_26bbb4;
        case 0x26bbb8u: goto label_26bbb8;
        case 0x26bbbcu: goto label_26bbbc;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbc4u: goto label_26bbc4;
        case 0x26bbc8u: goto label_26bbc8;
        case 0x26bbccu: goto label_26bbcc;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbd4u: goto label_26bbd4;
        case 0x26bbd8u: goto label_26bbd8;
        case 0x26bbdcu: goto label_26bbdc;
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bc90u: goto label_26bc90;
        case 0x26bc94u: goto label_26bc94;
        case 0x26bc98u: goto label_26bc98;
        case 0x26bc9cu: goto label_26bc9c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bca4u: goto label_26bca4;
        case 0x26bca8u: goto label_26bca8;
        case 0x26bcacu: goto label_26bcac;
        case 0x26bcb0u: goto label_26bcb0;
        case 0x26bcb4u: goto label_26bcb4;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcc0u: goto label_26bcc0;
        case 0x26bcc4u: goto label_26bcc4;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd0u: goto label_26bcd0;
        case 0x26bcd4u: goto label_26bcd4;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bcdcu: goto label_26bcdc;
        case 0x26bce0u: goto label_26bce0;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bce8u: goto label_26bce8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcf0u: goto label_26bcf0;
        case 0x26bcf4u: goto label_26bcf4;
        case 0x26bcf8u: goto label_26bcf8;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd04u: goto label_26bd04;
        case 0x26bd08u: goto label_26bd08;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd10u: goto label_26bd10;
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd18u: goto label_26bd18;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd20u: goto label_26bd20;
        case 0x26bd24u: goto label_26bd24;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd2cu: goto label_26bd2c;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd34u: goto label_26bd34;
        case 0x26bd38u: goto label_26bd38;
        case 0x26bd3cu: goto label_26bd3c;
        case 0x26bd40u: goto label_26bd40;
        case 0x26bd44u: goto label_26bd44;
        case 0x26bd48u: goto label_26bd48;
        case 0x26bd4cu: goto label_26bd4c;
        case 0x26bd50u: goto label_26bd50;
        case 0x26bd54u: goto label_26bd54;
        case 0x26bd58u: goto label_26bd58;
        case 0x26bd5cu: goto label_26bd5c;
        case 0x26bd60u: goto label_26bd60;
        case 0x26bd64u: goto label_26bd64;
        case 0x26bd68u: goto label_26bd68;
        case 0x26bd6cu: goto label_26bd6c;
        case 0x26bd70u: goto label_26bd70;
        case 0x26bd74u: goto label_26bd74;
        case 0x26bd78u: goto label_26bd78;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bd80u: goto label_26bd80;
        case 0x26bd84u: goto label_26bd84;
        case 0x26bd88u: goto label_26bd88;
        case 0x26bd8cu: goto label_26bd8c;
        case 0x26bd90u: goto label_26bd90;
        case 0x26bd94u: goto label_26bd94;
        case 0x26bd98u: goto label_26bd98;
        case 0x26bd9cu: goto label_26bd9c;
        case 0x26bda0u: goto label_26bda0;
        case 0x26bda4u: goto label_26bda4;
        case 0x26bda8u: goto label_26bda8;
        case 0x26bdacu: goto label_26bdac;
        case 0x26bdb0u: goto label_26bdb0;
        case 0x26bdb4u: goto label_26bdb4;
        case 0x26bdb8u: goto label_26bdb8;
        case 0x26bdbcu: goto label_26bdbc;
        case 0x26bdc0u: goto label_26bdc0;
        case 0x26bdc4u: goto label_26bdc4;
        case 0x26bdc8u: goto label_26bdc8;
        case 0x26bdccu: goto label_26bdcc;
        case 0x26bdd0u: goto label_26bdd0;
        case 0x26bdd4u: goto label_26bdd4;
        case 0x26bdd8u: goto label_26bdd8;
        case 0x26bddcu: goto label_26bddc;
        case 0x26bde0u: goto label_26bde0;
        case 0x26bde4u: goto label_26bde4;
        case 0x26bde8u: goto label_26bde8;
        case 0x26bdecu: goto label_26bdec;
        case 0x26bdf0u: goto label_26bdf0;
        case 0x26bdf4u: goto label_26bdf4;
        case 0x26bdf8u: goto label_26bdf8;
        case 0x26bdfcu: goto label_26bdfc;
        case 0x26be00u: goto label_26be00;
        case 0x26be04u: goto label_26be04;
        case 0x26be08u: goto label_26be08;
        case 0x26be0cu: goto label_26be0c;
        case 0x26be10u: goto label_26be10;
        case 0x26be14u: goto label_26be14;
        case 0x26be18u: goto label_26be18;
        case 0x26be1cu: goto label_26be1c;
        case 0x26be20u: goto label_26be20;
        case 0x26be24u: goto label_26be24;
        case 0x26be28u: goto label_26be28;
        case 0x26be2cu: goto label_26be2c;
        case 0x26be30u: goto label_26be30;
        case 0x26be34u: goto label_26be34;
        case 0x26be38u: goto label_26be38;
        case 0x26be3cu: goto label_26be3c;
        case 0x26be40u: goto label_26be40;
        case 0x26be44u: goto label_26be44;
        case 0x26be48u: goto label_26be48;
        case 0x26be4cu: goto label_26be4c;
        case 0x26be50u: goto label_26be50;
        case 0x26be54u: goto label_26be54;
        case 0x26be58u: goto label_26be58;
        case 0x26be5cu: goto label_26be5c;
        case 0x26be60u: goto label_26be60;
        case 0x26be64u: goto label_26be64;
        case 0x26be68u: goto label_26be68;
        case 0x26be6cu: goto label_26be6c;
        case 0x26be70u: goto label_26be70;
        case 0x26be74u: goto label_26be74;
        case 0x26be78u: goto label_26be78;
        case 0x26be7cu: goto label_26be7c;
        case 0x26be80u: goto label_26be80;
        case 0x26be84u: goto label_26be84;
        case 0x26be88u: goto label_26be88;
        case 0x26be8cu: goto label_26be8c;
        case 0x26be90u: goto label_26be90;
        case 0x26be94u: goto label_26be94;
        case 0x26be98u: goto label_26be98;
        case 0x26be9cu: goto label_26be9c;
        case 0x26bea0u: goto label_26bea0;
        case 0x26bea4u: goto label_26bea4;
        case 0x26bea8u: goto label_26bea8;
        case 0x26beacu: goto label_26beac;
        case 0x26beb0u: goto label_26beb0;
        case 0x26beb4u: goto label_26beb4;
        case 0x26beb8u: goto label_26beb8;
        case 0x26bebcu: goto label_26bebc;
        case 0x26bec0u: goto label_26bec0;
        case 0x26bec4u: goto label_26bec4;
        case 0x26bec8u: goto label_26bec8;
        case 0x26beccu: goto label_26becc;
        case 0x26bed0u: goto label_26bed0;
        case 0x26bed4u: goto label_26bed4;
        case 0x26bed8u: goto label_26bed8;
        case 0x26bedcu: goto label_26bedc;
        case 0x26bee0u: goto label_26bee0;
        case 0x26bee4u: goto label_26bee4;
        case 0x26bee8u: goto label_26bee8;
        case 0x26beecu: goto label_26beec;
        case 0x26bef0u: goto label_26bef0;
        case 0x26bef4u: goto label_26bef4;
        case 0x26bef8u: goto label_26bef8;
        case 0x26befcu: goto label_26befc;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf08u: goto label_26bf08;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf10u: goto label_26bf10;
        case 0x26bf14u: goto label_26bf14;
        case 0x26bf18u: goto label_26bf18;
        case 0x26bf1cu: goto label_26bf1c;
        case 0x26bf20u: goto label_26bf20;
        case 0x26bf24u: goto label_26bf24;
        case 0x26bf28u: goto label_26bf28;
        case 0x26bf2cu: goto label_26bf2c;
        case 0x26bf30u: goto label_26bf30;
        case 0x26bf34u: goto label_26bf34;
        case 0x26bf38u: goto label_26bf38;
        case 0x26bf3cu: goto label_26bf3c;
        case 0x26bf40u: goto label_26bf40;
        case 0x26bf44u: goto label_26bf44;
        case 0x26bf48u: goto label_26bf48;
        case 0x26bf4cu: goto label_26bf4c;
        case 0x26bf50u: goto label_26bf50;
        case 0x26bf54u: goto label_26bf54;
        case 0x26bf58u: goto label_26bf58;
        case 0x26bf5cu: goto label_26bf5c;
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf64u: goto label_26bf64;
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf6cu: goto label_26bf6c;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf74u: goto label_26bf74;
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf7cu: goto label_26bf7c;
        case 0x26bf80u: goto label_26bf80;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bf90u: goto label_26bf90;
        case 0x26bf94u: goto label_26bf94;
        case 0x26bf98u: goto label_26bf98;
        case 0x26bf9cu: goto label_26bf9c;
        case 0x26bfa0u: goto label_26bfa0;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfa8u: goto label_26bfa8;
        case 0x26bfacu: goto label_26bfac;
        case 0x26bfb0u: goto label_26bfb0;
        case 0x26bfb4u: goto label_26bfb4;
        case 0x26bfb8u: goto label_26bfb8;
        case 0x26bfbcu: goto label_26bfbc;
        case 0x26bfc0u: goto label_26bfc0;
        case 0x26bfc4u: goto label_26bfc4;
        case 0x26bfc8u: goto label_26bfc8;
        case 0x26bfccu: goto label_26bfcc;
        case 0x26bfd0u: goto label_26bfd0;
        case 0x26bfd4u: goto label_26bfd4;
        case 0x26bfd8u: goto label_26bfd8;
        case 0x26bfdcu: goto label_26bfdc;
        case 0x26bfe0u: goto label_26bfe0;
        case 0x26bfe4u: goto label_26bfe4;
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26bfecu: goto label_26bfec;
        case 0x26bff0u: goto label_26bff0;
        case 0x26bff4u: goto label_26bff4;
        case 0x26bff8u: goto label_26bff8;
        case 0x26bffcu: goto label_26bffc;
        case 0x26c000u: goto label_26c000;
        case 0x26c004u: goto label_26c004;
        case 0x26c008u: goto label_26c008;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c010u: goto label_26c010;
        case 0x26c014u: goto label_26c014;
        case 0x26c018u: goto label_26c018;
        case 0x26c01cu: goto label_26c01c;
        case 0x26c020u: goto label_26c020;
        case 0x26c024u: goto label_26c024;
        case 0x26c028u: goto label_26c028;
        case 0x26c02cu: goto label_26c02c;
        case 0x26c030u: goto label_26c030;
        case 0x26c034u: goto label_26c034;
        case 0x26c038u: goto label_26c038;
        case 0x26c03cu: goto label_26c03c;
        case 0x26c040u: goto label_26c040;
        case 0x26c044u: goto label_26c044;
        case 0x26c048u: goto label_26c048;
        case 0x26c04cu: goto label_26c04c;
        case 0x26c050u: goto label_26c050;
        case 0x26c054u: goto label_26c054;
        case 0x26c058u: goto label_26c058;
        case 0x26c05cu: goto label_26c05c;
        case 0x26c060u: goto label_26c060;
        case 0x26c064u: goto label_26c064;
        case 0x26c068u: goto label_26c068;
        case 0x26c06cu: goto label_26c06c;
        case 0x26c070u: goto label_26c070;
        case 0x26c074u: goto label_26c074;
        case 0x26c078u: goto label_26c078;
        case 0x26c07cu: goto label_26c07c;
        case 0x26c080u: goto label_26c080;
        case 0x26c084u: goto label_26c084;
        case 0x26c088u: goto label_26c088;
        case 0x26c08cu: goto label_26c08c;
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        default: return;
    }

label_26b8f0:
    // 0x26b8f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8f4:
    // 0x26b8f4: 0x0  nop
    ctx->pc = 0x26b8f4u;
    // NOP
label_26b8f8:
    // 0x26b8f8: 0x0  nop
    ctx->pc = 0x26b8f8u;
    // NOP
label_26b8fc:
    // 0x26b8fc: 0x0  nop
    ctx->pc = 0x26b8fcu;
    // NOP
label_26b900:
    // 0x26b900: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b904:
    // 0x26b904: 0x0  nop
    ctx->pc = 0x26b904u;
    // NOP
label_26b908:
    // 0x26b908: 0x0  nop
    ctx->pc = 0x26b908u;
    // NOP
label_26b90c:
    // 0x26b90c: 0x0  nop
    ctx->pc = 0x26b90cu;
    // NOP
label_26b910:
    // 0x26b910: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b914:
    // 0x26b914: 0x0  nop
    ctx->pc = 0x26b914u;
    // NOP
label_26b918:
    // 0x26b918: 0x0  nop
    ctx->pc = 0x26b918u;
    // NOP
label_26b91c:
    // 0x26b91c: 0x0  nop
    ctx->pc = 0x26b91cu;
    // NOP
label_26b920:
    // 0x26b920: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b924:
    // 0x26b924: 0x0  nop
    ctx->pc = 0x26b924u;
    // NOP
label_26b928:
    // 0x26b928: 0x0  nop
    ctx->pc = 0x26b928u;
    // NOP
label_26b92c:
    // 0x26b92c: 0x0  nop
    ctx->pc = 0x26b92cu;
    // NOP
label_26b930:
    // 0x26b930: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b934:
    // 0x26b934: 0x0  nop
    ctx->pc = 0x26b934u;
    // NOP
label_26b938:
    // 0x26b938: 0x0  nop
    ctx->pc = 0x26b938u;
    // NOP
label_26b93c:
    // 0x26b93c: 0x0  nop
    ctx->pc = 0x26b93cu;
    // NOP
label_26b940:
    // 0x26b940: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b944:
    // 0x26b944: 0x0  nop
    ctx->pc = 0x26b944u;
    // NOP
label_26b948:
    // 0x26b948: 0x0  nop
    ctx->pc = 0x26b948u;
    // NOP
label_26b94c:
    // 0x26b94c: 0x0  nop
    ctx->pc = 0x26b94cu;
    // NOP
label_26b950:
    // 0x26b950: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b954:
    // 0x26b954: 0x0  nop
    ctx->pc = 0x26b954u;
    // NOP
label_26b958:
    // 0x26b958: 0x0  nop
    ctx->pc = 0x26b958u;
    // NOP
label_26b95c:
    // 0x26b95c: 0x0  nop
    ctx->pc = 0x26b95cu;
    // NOP
label_26b960:
    // 0x26b960: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b964:
    // 0x26b964: 0x0  nop
    ctx->pc = 0x26b964u;
    // NOP
label_26b968:
    // 0x26b968: 0x0  nop
    ctx->pc = 0x26b968u;
    // NOP
label_26b96c:
    // 0x26b96c: 0x0  nop
    ctx->pc = 0x26b96cu;
    // NOP
label_26b970:
    // 0x26b970: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b974:
    // 0x26b974: 0x0  nop
    ctx->pc = 0x26b974u;
    // NOP
label_26b978:
    // 0x26b978: 0x0  nop
    ctx->pc = 0x26b978u;
    // NOP
label_26b97c:
    // 0x26b97c: 0x0  nop
    ctx->pc = 0x26b97cu;
    // NOP
label_26b980:
    // 0x26b980: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b984:
    // 0x26b984: 0x0  nop
    ctx->pc = 0x26b984u;
    // NOP
label_26b988:
    // 0x26b988: 0x0  nop
    ctx->pc = 0x26b988u;
    // NOP
label_26b98c:
    // 0x26b98c: 0x0  nop
    ctx->pc = 0x26b98cu;
    // NOP
label_26b990:
    // 0x26b990: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b994:
    // 0x26b994: 0x0  nop
    ctx->pc = 0x26b994u;
    // NOP
label_26b998:
    // 0x26b998: 0x0  nop
    ctx->pc = 0x26b998u;
    // NOP
label_26b99c:
    // 0x26b99c: 0x0  nop
    ctx->pc = 0x26b99cu;
    // NOP
label_26b9a0:
    // 0x26b9a0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9a4:
    // 0x26b9a4: 0x0  nop
    ctx->pc = 0x26b9a4u;
    // NOP
label_26b9a8:
    // 0x26b9a8: 0x0  nop
    ctx->pc = 0x26b9a8u;
    // NOP
label_26b9ac:
    // 0x26b9ac: 0x0  nop
    ctx->pc = 0x26b9acu;
    // NOP
label_26b9b0:
    // 0x26b9b0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9b4:
    // 0x26b9b4: 0x0  nop
    ctx->pc = 0x26b9b4u;
    // NOP
label_26b9b8:
    // 0x26b9b8: 0x0  nop
    ctx->pc = 0x26b9b8u;
    // NOP
label_26b9bc:
    // 0x26b9bc: 0x0  nop
    ctx->pc = 0x26b9bcu;
    // NOP
label_26b9c0:
    // 0x26b9c0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9c4:
    // 0x26b9c4: 0x0  nop
    ctx->pc = 0x26b9c4u;
    // NOP
label_26b9c8:
    // 0x26b9c8: 0x0  nop
    ctx->pc = 0x26b9c8u;
    // NOP
label_26b9cc:
    // 0x26b9cc: 0x0  nop
    ctx->pc = 0x26b9ccu;
    // NOP
label_26b9d0:
    // 0x26b9d0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9d4:
    // 0x26b9d4: 0x0  nop
    ctx->pc = 0x26b9d4u;
    // NOP
label_26b9d8:
    // 0x26b9d8: 0x0  nop
    ctx->pc = 0x26b9d8u;
    // NOP
label_26b9dc:
    // 0x26b9dc: 0x0  nop
    ctx->pc = 0x26b9dcu;
    // NOP
label_26b9e0:
    // 0x26b9e0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9e4:
    // 0x26b9e4: 0x0  nop
    ctx->pc = 0x26b9e4u;
    // NOP
label_26b9e8:
    // 0x26b9e8: 0x0  nop
    ctx->pc = 0x26b9e8u;
    // NOP
label_26b9ec:
    // 0x26b9ec: 0x0  nop
    ctx->pc = 0x26b9ecu;
    // NOP
label_26b9f0:
    // 0x26b9f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9f4:
    // 0x26b9f4: 0x0  nop
    ctx->pc = 0x26b9f4u;
    // NOP
label_26b9f8:
    // 0x26b9f8: 0x0  nop
    ctx->pc = 0x26b9f8u;
    // NOP
label_26b9fc:
    // 0x26b9fc: 0x0  nop
    ctx->pc = 0x26b9fcu;
    // NOP
label_26ba00:
    // 0x26ba00: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba04:
    // 0x26ba04: 0x0  nop
    ctx->pc = 0x26ba04u;
    // NOP
label_26ba08:
    // 0x26ba08: 0x0  nop
    ctx->pc = 0x26ba08u;
    // NOP
label_26ba0c:
    // 0x26ba0c: 0x0  nop
    ctx->pc = 0x26ba0cu;
    // NOP
label_26ba10:
    // 0x26ba10: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba14:
    // 0x26ba14: 0x0  nop
    ctx->pc = 0x26ba14u;
    // NOP
label_26ba18:
    // 0x26ba18: 0x0  nop
    ctx->pc = 0x26ba18u;
    // NOP
label_26ba1c:
    // 0x26ba1c: 0x0  nop
    ctx->pc = 0x26ba1cu;
    // NOP
label_26ba20:
    // 0x26ba20: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba24:
    // 0x26ba24: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x26ba24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba28:
    // 0x26ba28: 0x0  nop
    ctx->pc = 0x26ba28u;
    // NOP
label_26ba2c:
    // 0x26ba2c: 0x0  nop
    ctx->pc = 0x26ba2cu;
    // NOP
label_26ba30:
    // 0x26ba30: 0x16dd  .word       0x000016DD                   # dmultu      $zero, $zero # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BA30 raw=0x000016DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba34:
    // 0x26ba34: 0x4d30  tge         $zero, $zero, 308
    ctx->pc = 0x26ba34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba38:
    // 0x26ba38: 0x0  nop
    ctx->pc = 0x26ba38u;
    // NOP
label_26ba3c:
    // 0x26ba3c: 0x0  nop
    ctx->pc = 0x26ba3cu;
    // NOP
label_26ba40:
    // 0x26ba40: 0x16e7  .word       0x000016E7                   # not         $v0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ba44:
    // 0x26ba44: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26ba48:
    // 0x26ba48: 0x0  nop
    ctx->pc = 0x26ba48u;
    // NOP
label_26ba4c:
    // 0x26ba4c: 0x0  nop
    ctx->pc = 0x26ba4cu;
    // NOP
label_26ba50:
    // 0x26ba50: 0x16f5  .word       0x000016F5                   # INVALID     $zero, $zero, 0x16F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26BA50 raw=0x000016F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba54:
    // 0x26ba54: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ba58:
    // 0x26ba58: 0x0  nop
    ctx->pc = 0x26ba58u;
    // NOP
label_26ba5c:
    // 0x26ba5c: 0x0  nop
    ctx->pc = 0x26ba5cu;
    // NOP
label_26ba60:
    // 0x26ba60: 0x16fd  .word       0x000016FD                   # INVALID     $zero, $zero, 0x16FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BA60 raw=0x000016FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba64:
    // 0x26ba64: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x26ba64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba68:
    // 0x26ba68: 0x0  nop
    ctx->pc = 0x26ba68u;
    // NOP
label_26ba6c:
    // 0x26ba6c: 0x0  nop
    ctx->pc = 0x26ba6cu;
    // NOP
label_26ba70:
    // 0x26ba70: 0x1708  .word       0x00001708                   # jr          $zero # 00001700 <InstrIdType: CPU_SPECIAL>
label_26ba74:
    if (ctx->pc == 0x26BA74u) {
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA70u;
        // 0x26ba74: 0x4370  tge         $zero, $zero, 269 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA78u;
        goto label_26ba78;
    }
    ctx->pc = 0x26BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA70u;
        // 0x26ba74: 0x4370  tge         $zero, $zero, 269 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26BA78u;
label_26ba78:
    // 0x26ba78: 0x0  nop
    ctx->pc = 0x26ba78u;
    // NOP
label_26ba7c:
    // 0x26ba7c: 0x0  nop
    ctx->pc = 0x26ba7cu;
    // NOP
label_26ba80:
    // 0x26ba80: 0x1711  .word       0x00001711                   # mthi        $zero # 00001700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba80u;
    ctx->hi = GPR_U64(ctx, 0);
label_26ba84:
    // 0x26ba84: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x26ba84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba88:
    // 0x26ba88: 0x0  nop
    ctx->pc = 0x26ba88u;
    // NOP
label_26ba8c:
    // 0x26ba8c: 0x0  nop
    ctx->pc = 0x26ba8cu;
    // NOP
label_26ba90:
    // 0x26ba90: 0x171f  .word       0x0000171F                   # ddivu       $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26BA90 raw=0x0000171F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba94:
    // 0x26ba94: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x26ba94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba98:
    // 0x26ba98: 0x0  nop
    ctx->pc = 0x26ba98u;
    // NOP
label_26ba9c:
    // 0x26ba9c: 0x0  nop
    ctx->pc = 0x26ba9cu;
    // NOP
label_26baa0:
    // 0x26baa0: 0x172a  .word       0x0000172A                   # slt         $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26baa4:
    // 0x26baa4: 0xb2a0  .word       0x0000B2A0                   # add         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26baa8:
    // 0x26baa8: 0x0  nop
    ctx->pc = 0x26baa8u;
    // NOP
label_26baac:
    // 0x26baac: 0x0  nop
    ctx->pc = 0x26baacu;
    // NOP
label_26bab0:
    // 0x26bab0: 0x1741  .word       0x00001741                   # INVALID     $zero, $zero, 0x1741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BAB0 raw=0x00001741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bab4:
    // 0x26bab4: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26bab8:
    // 0x26bab8: 0x0  nop
    ctx->pc = 0x26bab8u;
    // NOP
label_26babc:
    // 0x26babc: 0x0  nop
    ctx->pc = 0x26babcu;
    // NOP
label_26bac0:
    // 0x26bac0: 0x174f  .word       0x0000174F                   # sync.p # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26bac4:
    // 0x26bac4: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bac4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26bac8:
    // 0x26bac8: 0x0  nop
    ctx->pc = 0x26bac8u;
    // NOP
label_26bacc:
    // 0x26bacc: 0x0  nop
    ctx->pc = 0x26baccu;
    // NOP
label_26bad0:
    // 0x26bad0: 0x175d  .word       0x0000175D                   # dmultu      $zero, $zero # 00001740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BAD0 raw=0x0000175D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bad4:
    // 0x26bad4: 0xda80  sll         $k1, $zero, 10
    ctx->pc = 0x26bad4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26bad8:
    // 0x26bad8: 0x0  nop
    ctx->pc = 0x26bad8u;
    // NOP
label_26badc:
    // 0x26badc: 0x0  nop
    ctx->pc = 0x26badcu;
    // NOP
label_26bae0:
    // 0x26bae0: 0x1779  .word       0x00001779                   # INVALID     $zero, $zero, 0x1779 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26BAE0 raw=0x00001779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bae4:
    // 0x26bae4: 0xb2a0  .word       0x0000B2A0                   # add         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26bae8:
    // 0x26bae8: 0x0  nop
    ctx->pc = 0x26bae8u;
    // NOP
label_26baec:
    // 0x26baec: 0x0  nop
    ctx->pc = 0x26baecu;
    // NOP
label_26baf0:
    // 0x26baf0: 0x1790  .word       0x00001790                   # mfhi        $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26baf4:
    // 0x26baf4: 0x11ef0  tge         $zero, $at, 123
    ctx->pc = 0x26baf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26baf8:
    // 0x26baf8: 0x0  nop
    ctx->pc = 0x26baf8u;
    // NOP
label_26bafc:
    // 0x26bafc: 0x0  nop
    ctx->pc = 0x26bafcu;
    // NOP
label_26bb00:
    // 0x26bb00: 0x17b4  teq         $zero, $zero, 94
    ctx->pc = 0x26bb00u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb04:
    // 0x26bb04: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26bb08:
    // 0x26bb08: 0x0  nop
    ctx->pc = 0x26bb08u;
    // NOP
label_26bb0c:
    // 0x26bb0c: 0x0  nop
    ctx->pc = 0x26bb0cu;
    // NOP
label_26bb10:
    // 0x26bb10: 0x17c2  srl         $v0, $zero, 31
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_26bb14:
    // 0x26bb14: 0x5d70  tge         $zero, $zero, 373
    ctx->pc = 0x26bb14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb18:
    // 0x26bb18: 0x0  nop
    ctx->pc = 0x26bb18u;
    // NOP
label_26bb1c:
    // 0x26bb1c: 0x0  nop
    ctx->pc = 0x26bb1cu;
    // NOP
label_26bb20:
    // 0x26bb20: 0x17ce  .word       0x000017CE                   # INVALID     $zero, $zero, 0x17CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26BB20 raw=0x000017CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb24:
    // 0x26bb24: 0x5e80  sll         $t3, $zero, 26
    ctx->pc = 0x26bb24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26bb28:
    // 0x26bb28: 0x0  nop
    ctx->pc = 0x26bb28u;
    // NOP
label_26bb2c:
    // 0x26bb2c: 0x0  nop
    ctx->pc = 0x26bb2cu;
    // NOP
label_26bb30:
    // 0x26bb30: 0x17da  .word       0x000017DA                   # div         $v0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb30u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26bb34:
    // 0x26bb34: 0x64d0  .word       0x000064D0                   # mfhi        $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26bb38:
    // 0x26bb38: 0x0  nop
    ctx->pc = 0x26bb38u;
    // NOP
label_26bb3c:
    // 0x26bb3c: 0x0  nop
    ctx->pc = 0x26bb3cu;
    // NOP
label_26bb40:
    // 0x26bb40: 0x17e7  .word       0x000017E7                   # not         $v0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26bb44:
    // 0x26bb44: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb44u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26bb48:
    // 0x26bb48: 0x0  nop
    ctx->pc = 0x26bb48u;
    // NOP
label_26bb4c:
    // 0x26bb4c: 0x0  nop
    ctx->pc = 0x26bb4cu;
    // NOP
label_26bb50:
    // 0x26bb50: 0x17f3  tltu        $zero, $zero, 95
    ctx->pc = 0x26bb50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb54:
    // 0x26bb54: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26bb58:
    // 0x26bb58: 0x0  nop
    ctx->pc = 0x26bb58u;
    // NOP
label_26bb5c:
    // 0x26bb5c: 0x0  nop
    ctx->pc = 0x26bb5cu;
    // NOP
label_26bb60:
    // 0x26bb60: 0x17fb  dsra        $v0, $zero, 31
    ctx->pc = 0x26bb60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> 31);
label_26bb64:
    // 0x26bb64: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26bb68:
    // 0x26bb68: 0x0  nop
    ctx->pc = 0x26bb68u;
    // NOP
label_26bb6c:
    // 0x26bb6c: 0x0  nop
    ctx->pc = 0x26bb6cu;
    // NOP
label_26bb70:
    // 0x26bb70: 0x1805  .word       0x00001805                   # INVALID     $zero, $zero, 0x1805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26BB70 raw=0x00001805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb74:
    // 0x26bb74: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb74u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26bb78:
    // 0x26bb78: 0x0  nop
    ctx->pc = 0x26bb78u;
    // NOP
label_26bb7c:
    // 0x26bb7c: 0x0  nop
    ctx->pc = 0x26bb7cu;
    // NOP
label_26bb80:
    // 0x26bb80: 0x181d  .word       0x0000181D                   # dmultu      $zero, $zero # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BB80 raw=0x0000181D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb84:
    // 0x26bb84: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x26bb84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb88:
    // 0x26bb88: 0x0  nop
    ctx->pc = 0x26bb88u;
    // NOP
label_26bb8c:
    // 0x26bb8c: 0x0  nop
    ctx->pc = 0x26bb8cu;
    // NOP
label_26bb90:
    // 0x26bb90: 0x182e  dsub        $v1, $zero, $zero
    ctx->pc = 0x26bb90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bb94:
    // 0x26bb94: 0xbfa0  .word       0x0000BFA0                   # add         $s7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26bb98:
    // 0x26bb98: 0x0  nop
    ctx->pc = 0x26bb98u;
    // NOP
label_26bb9c:
    // 0x26bb9c: 0x0  nop
    ctx->pc = 0x26bb9cu;
    // NOP
label_26bba0:
    // 0x26bba0: 0x1846  .word       0x00001846                   # srlv        $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bba4:
    // 0x26bba4: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bba8:
    // 0x26bba8: 0x0  nop
    ctx->pc = 0x26bba8u;
    // NOP
label_26bbac:
    // 0x26bbac: 0x0  nop
    ctx->pc = 0x26bbacu;
    // NOP
label_26bbb0:
    // 0x26bbb0: 0x1858  .word       0x00001858                   # mult        $v1, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26bbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bbb4:
    // 0x26bbb4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26bbb8:
    // 0x26bbb8: 0x0  nop
    ctx->pc = 0x26bbb8u;
    // NOP
label_26bbbc:
    // 0x26bbbc: 0x0  nop
    ctx->pc = 0x26bbbcu;
    // NOP
label_26bbc0:
    // 0x26bbc0: 0x186f  .word       0x0000186F                   # dsubu       $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26bbc4:
    // 0x26bbc4: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bbc8:
    // 0x26bbc8: 0x0  nop
    ctx->pc = 0x26bbc8u;
    // NOP
label_26bbcc:
    // 0x26bbcc: 0x0  nop
    ctx->pc = 0x26bbccu;
    // NOP
label_26bbd0:
    // 0x26bbd0: 0x1881  .word       0x00001881                   # INVALID     $zero, $zero, 0x1881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BBD0 raw=0x00001881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bbd4:
    // 0x26bbd4: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26bbd8:
    // 0x26bbd8: 0x0  nop
    ctx->pc = 0x26bbd8u;
    // NOP
label_26bbdc:
    // 0x26bbdc: 0x0  nop
    ctx->pc = 0x26bbdcu;
    // NOP
label_26bbe0:
    // 0x26bbe0: 0x1899  .word       0x00001899                   # multu       $zero, $zero # 00001880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbe0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bbe4:
    // 0x26bbe4: 0x8de0  .word       0x00008DE0                   # add         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bbe8:
    // 0x26bbe8: 0x0  nop
    ctx->pc = 0x26bbe8u;
    // NOP
label_26bbec:
    // 0x26bbec: 0x0  nop
    ctx->pc = 0x26bbecu;
    // NOP
label_26bbf0:
    // 0x26bbf0: 0x18ab  .word       0x000018AB                   # sltu        $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26bbf4:
    // 0x26bbf4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26bbf8:
    // 0x26bbf8: 0x0  nop
    ctx->pc = 0x26bbf8u;
    // NOP
label_26bbfc:
    // 0x26bbfc: 0x0  nop
    ctx->pc = 0x26bbfcu;
    // NOP
label_26bc00:
    // 0x26bc00: 0x18c4  .word       0x000018C4                   # sllv        $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bc04:
    // 0x26bc04: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26bc08:
    // 0x26bc08: 0x0  nop
    ctx->pc = 0x26bc08u;
    // NOP
label_26bc0c:
    // 0x26bc0c: 0x0  nop
    ctx->pc = 0x26bc0cu;
    // NOP
label_26bc10:
    // 0x26bc10: 0x18d9  .word       0x000018D9                   # multu       $zero, $zero # 000018C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bc14:
    // 0x26bc14: 0x13c30  tge         $zero, $at, 240
    ctx->pc = 0x26bc14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26bc18:
    // 0x26bc18: 0x0  nop
    ctx->pc = 0x26bc18u;
    // NOP
label_26bc1c:
    // 0x26bc1c: 0x0  nop
    ctx->pc = 0x26bc1cu;
    // NOP
label_26bc20:
    // 0x26bc20: 0x1901  .word       0x00001901                   # INVALID     $zero, $zero, 0x1901 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BC20 raw=0x00001901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc24:
    // 0x26bc24: 0xd840  sll         $k1, $zero, 1
    ctx->pc = 0x26bc24u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26bc28:
    // 0x26bc28: 0x0  nop
    ctx->pc = 0x26bc28u;
    // NOP
label_26bc2c:
    // 0x26bc2c: 0x0  nop
    ctx->pc = 0x26bc2cu;
    // NOP
label_26bc30:
    // 0x26bc30: 0x191d  .word       0x0000191D                   # dmultu      $zero, $zero # 00001900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BC30 raw=0x0000191D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc34:
    // 0x26bc34: 0xf820  add         $ra, $zero, $zero
    ctx->pc = 0x26bc34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26bc38:
    // 0x26bc38: 0x0  nop
    ctx->pc = 0x26bc38u;
    // NOP
label_26bc3c:
    // 0x26bc3c: 0x0  nop
    ctx->pc = 0x26bc3cu;
    // NOP
label_26bc40:
    // 0x26bc40: 0x193d  .word       0x0000193D                   # INVALID     $zero, $zero, 0x193D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BC40 raw=0x0000193D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc44:
    // 0x26bc44: 0x9cd0  .word       0x00009CD0                   # mfhi        $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26bc48:
    // 0x26bc48: 0x0  nop
    ctx->pc = 0x26bc48u;
    // NOP
label_26bc4c:
    // 0x26bc4c: 0x0  nop
    ctx->pc = 0x26bc4cu;
    // NOP
label_26bc50:
    // 0x26bc50: 0x1951  .word       0x00001951                   # mthi        $zero # 00001940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc50u;
    ctx->hi = GPR_U64(ctx, 0);
label_26bc54:
    // 0x26bc54: 0xe1c0  sll         $gp, $zero, 7
    ctx->pc = 0x26bc54u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26bc58:
    // 0x26bc58: 0x0  nop
    ctx->pc = 0x26bc58u;
    // NOP
label_26bc5c:
    // 0x26bc5c: 0x0  nop
    ctx->pc = 0x26bc5cu;
    // NOP
label_26bc60:
    // 0x26bc60: 0x196e  .word       0x0000196E                   # dsub        $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bc64:
    // 0x26bc64: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x26bc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bc68:
    // 0x26bc68: 0x0  nop
    ctx->pc = 0x26bc68u;
    // NOP
label_26bc6c:
    // 0x26bc6c: 0x0  nop
    ctx->pc = 0x26bc6cu;
    // NOP
label_26bc70:
    // 0x26bc70: 0x197d  .word       0x0000197D                   # INVALID     $zero, $zero, 0x197D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BC70 raw=0x0000197D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc74:
    // 0x26bc74: 0xbe80  sll         $s7, $zero, 26
    ctx->pc = 0x26bc74u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26bc78:
    // 0x26bc78: 0x0  nop
    ctx->pc = 0x26bc78u;
    // NOP
label_26bc7c:
    // 0x26bc7c: 0x0  nop
    ctx->pc = 0x26bc7cu;
    // NOP
label_26bc80:
    // 0x26bc80: 0x1995  .word       0x00001995                   # INVALID     $zero, $zero, 0x1995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26BC80 raw=0x00001995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc84:
    // 0x26bc84: 0x127e0  .word       0x000127E0                   # add         $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26bc88:
    // 0x26bc88: 0x0  nop
    ctx->pc = 0x26bc88u;
    // NOP
label_26bc8c:
    // 0x26bc8c: 0x0  nop
    ctx->pc = 0x26bc8cu;
    // NOP
label_26bc90:
    // 0x26bc90: 0x19ba  dsrl        $v1, $zero, 6
    ctx->pc = 0x26bc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) >> 6);
label_26bc94:
    // 0x26bc94: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x26bc94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bc98:
    // 0x26bc98: 0x0  nop
    ctx->pc = 0x26bc98u;
    // NOP
label_26bc9c:
    // 0x26bc9c: 0x0  nop
    ctx->pc = 0x26bc9cu;
    // NOP
label_26bca0:
    // 0x26bca0: 0x19d1  .word       0x000019D1                   # mthi        $zero # 000019C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bca0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26bca4:
    // 0x26bca4: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_26bca8:
    // 0x26bca8: 0x0  nop
    ctx->pc = 0x26bca8u;
    // NOP
label_26bcac:
    // 0x26bcac: 0x0  nop
    ctx->pc = 0x26bcacu;
    // NOP
label_26bcb0:
    // 0x26bcb0: 0x19f1  tgeu        $zero, $zero, 103
    ctx->pc = 0x26bcb0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bcb4:
    // 0x26bcb4: 0x12a70  tge         $zero, $at, 169
    ctx->pc = 0x26bcb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26bcb8:
    // 0x26bcb8: 0x0  nop
    ctx->pc = 0x26bcb8u;
    // NOP
label_26bcbc:
    // 0x26bcbc: 0x0  nop
    ctx->pc = 0x26bcbcu;
    // NOP
label_26bcc0:
    // 0x26bcc0: 0x1a17  .word       0x00001A17                   # dsrav       $v1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bcc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26bcc4:
    // 0x26bcc4: 0xab20  .word       0x0000AB20                   # add         $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26bcc8:
    // 0x26bcc8: 0x0  nop
    ctx->pc = 0x26bcc8u;
    // NOP
label_26bccc:
    // 0x26bccc: 0x0  nop
    ctx->pc = 0x26bcccu;
    // NOP
label_26bcd0:
    // 0x26bcd0: 0x1a2d  .word       0x00001A2D                   # daddu       $v1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bcd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bcd4:
    // 0x26bcd4: 0xe840  sll         $sp, $zero, 1
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26bcd8:
    // 0x26bcd8: 0x0  nop
    ctx->pc = 0x26bcd8u;
    // NOP
label_26bcdc:
    // 0x26bcdc: 0x0  nop
    ctx->pc = 0x26bcdcu;
    // NOP
label_26bce0:
    // 0x26bce0: 0x1a4b  .word       0x00001A4B                   # movn        $v1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bce0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_26bce4:
    // 0x26bce4: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26bce8:
    // 0x26bce8: 0x0  nop
    ctx->pc = 0x26bce8u;
    // NOP
label_26bcec:
    // 0x26bcec: 0x0  nop
    ctx->pc = 0x26bcecu;
    // NOP
label_26bcf0:
    // 0x26bcf0: 0x1a61  .word       0x00001A61                   # addu        $v1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26bcf4:
    // 0x26bcf4: 0xd850  .word       0x0000D850                   # mfhi        $k1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bcf4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_26bcf8:
    // 0x26bcf8: 0x0  nop
    ctx->pc = 0x26bcf8u;
    // NOP
label_26bcfc:
    // 0x26bcfc: 0x0  nop
    ctx->pc = 0x26bcfcu;
    // NOP
label_26bd00:
    // 0x26bd00: 0x1a7d  .word       0x00001A7D                   # INVALID     $zero, $zero, 0x1A7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BD00 raw=0x00001A7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bd04:
    // 0x26bd04: 0xca80  sll         $t9, $zero, 10
    ctx->pc = 0x26bd04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26bd08:
    // 0x26bd08: 0x0  nop
    ctx->pc = 0x26bd08u;
    // NOP
label_26bd0c:
    // 0x26bd0c: 0x0  nop
    ctx->pc = 0x26bd0cu;
    // NOP
label_26bd10:
    // 0x26bd10: 0x1a97  .word       0x00001A97                   # dsrav       $v1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26bd14:
    // 0x26bd14: 0xb2b0  tge         $zero, $zero, 714
    ctx->pc = 0x26bd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bd18:
    // 0x26bd18: 0x0  nop
    ctx->pc = 0x26bd18u;
    // NOP
label_26bd1c:
    // 0x26bd1c: 0x0  nop
    ctx->pc = 0x26bd1cu;
    // NOP
label_26bd20:
    // 0x26bd20: 0x1aae  .word       0x00001AAE                   # dsub        $v1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bd24:
    // 0x26bd24: 0x22570  tge         $zero, $v0, 149
    ctx->pc = 0x26bd24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_26bd28:
    // 0x26bd28: 0x0  nop
    ctx->pc = 0x26bd28u;
    // NOP
label_26bd2c:
    // 0x26bd2c: 0x0  nop
    ctx->pc = 0x26bd2cu;
    // NOP
label_26bd30:
    // 0x26bd30: 0x1af3  tltu        $zero, $zero, 107
    ctx->pc = 0x26bd30u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bd34:
    // 0x26bd34: 0xe200  sll         $gp, $zero, 8
    ctx->pc = 0x26bd34u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26bd38:
    // 0x26bd38: 0x0  nop
    ctx->pc = 0x26bd38u;
    // NOP
label_26bd3c:
    // 0x26bd3c: 0x0  nop
    ctx->pc = 0x26bd3cu;
    // NOP
label_26bd40:
    // 0x26bd40: 0x1b10  .word       0x00001B10                   # mfhi        $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26bd44:
    // 0x26bd44: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd44u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26bd48:
    // 0x26bd48: 0x0  nop
    ctx->pc = 0x26bd48u;
    // NOP
label_26bd4c:
    // 0x26bd4c: 0x0  nop
    ctx->pc = 0x26bd4cu;
    // NOP
label_26bd50:
    // 0x26bd50: 0x1b29  .word       0x00001B29                   # mtsa        $zero # 00001B00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26bd50u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26bd54:
    // 0x26bd54: 0x8d80  sll         $s1, $zero, 22
    ctx->pc = 0x26bd54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26bd58:
    // 0x26bd58: 0x0  nop
    ctx->pc = 0x26bd58u;
    // NOP
label_26bd5c:
    // 0x26bd5c: 0x0  nop
    ctx->pc = 0x26bd5cu;
    // NOP
label_26bd60:
    // 0x26bd60: 0x1b3b  dsra        $v1, $zero, 12
    ctx->pc = 0x26bd60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> 12);
label_26bd64:
    // 0x26bd64: 0xd150  .word       0x0000D150                   # mfhi        $k0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd64u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26bd68:
    // 0x26bd68: 0x0  nop
    ctx->pc = 0x26bd68u;
    // NOP
label_26bd6c:
    // 0x26bd6c: 0x0  nop
    ctx->pc = 0x26bd6cu;
    // NOP
label_26bd70:
    // 0x26bd70: 0x1b56  .word       0x00001B56                   # dsrlv       $v1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26bd74:
    // 0x26bd74: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26bd78:
    // 0x26bd78: 0x0  nop
    ctx->pc = 0x26bd78u;
    // NOP
label_26bd7c:
    // 0x26bd7c: 0x0  nop
    ctx->pc = 0x26bd7cu;
    // NOP
label_26bd80:
    // 0x26bd80: 0x1b6a  .word       0x00001B6A                   # slt         $v1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bd80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26bd84:
    // 0x26bd84: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x26bd84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26bd88:
    // 0x26bd88: 0x0  nop
    ctx->pc = 0x26bd88u;
    // NOP
label_26bd8c:
    // 0x26bd8c: 0x0  nop
    ctx->pc = 0x26bd8cu;
    // NOP
label_26bd90:
    // 0x26bd90: 0x1b7b  dsra        $v1, $zero, 13
    ctx->pc = 0x26bd90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> 13);
label_26bd94:
    // 0x26bd94: 0xda30  tge         $zero, $zero, 872
    ctx->pc = 0x26bd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bd98:
    // 0x26bd98: 0x0  nop
    ctx->pc = 0x26bd98u;
    // NOP
label_26bd9c:
    // 0x26bd9c: 0x0  nop
    ctx->pc = 0x26bd9cu;
    // NOP
label_26bda0:
    // 0x26bda0: 0x1b97  .word       0x00001B97                   # dsrav       $v1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bda0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26bda4:
    // 0x26bda4: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x26bda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26bda8:
    // 0x26bda8: 0x0  nop
    ctx->pc = 0x26bda8u;
    // NOP
label_26bdac:
    // 0x26bdac: 0x0  nop
    ctx->pc = 0x26bdacu;
    // NOP
label_26bdb0:
    // 0x26bdb0: 0x1bb0  tge         $zero, $zero, 110
    ctx->pc = 0x26bdb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bdb4:
    // 0x26bdb4: 0x8de0  .word       0x00008DE0                   # add         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bdb8:
    // 0x26bdb8: 0x0  nop
    ctx->pc = 0x26bdb8u;
    // NOP
label_26bdbc:
    // 0x26bdbc: 0x0  nop
    ctx->pc = 0x26bdbcu;
    // NOP
label_26bdc0:
    // 0x26bdc0: 0x1bc2  srl         $v1, $zero, 15
    ctx->pc = 0x26bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_26bdc4:
    // 0x26bdc4: 0xacc0  sll         $s5, $zero, 19
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26bdc8:
    // 0x26bdc8: 0x0  nop
    ctx->pc = 0x26bdc8u;
    // NOP
label_26bdcc:
    // 0x26bdcc: 0x0  nop
    ctx->pc = 0x26bdccu;
    // NOP
label_26bdd0:
    // 0x26bdd0: 0x1bd8  .word       0x00001BD8                   # mult        $v1, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26bdd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bdd4:
    // 0x26bdd4: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bdd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26bdd8:
    // 0x26bdd8: 0x0  nop
    ctx->pc = 0x26bdd8u;
    // NOP
label_26bddc:
    // 0x26bddc: 0x0  nop
    ctx->pc = 0x26bddcu;
    // NOP
label_26bde0:
    // 0x26bde0: 0x1bee  .word       0x00001BEE                   # dsub        $v1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bde0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bde4:
    // 0x26bde4: 0xb5f0  tge         $zero, $zero, 727
    ctx->pc = 0x26bde4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bde8:
    // 0x26bde8: 0x0  nop
    ctx->pc = 0x26bde8u;
    // NOP
label_26bdec:
    // 0x26bdec: 0x0  nop
    ctx->pc = 0x26bdecu;
    // NOP
label_26bdf0:
    // 0x26bdf0: 0x1c05  .word       0x00001C05                   # INVALID     $zero, $zero, 0x1C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bdf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26BDF0 raw=0x00001C05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bdf4:
    // 0x26bdf4: 0xbb50  .word       0x0000BB50                   # mfhi        $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bdf4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26bdf8:
    // 0x26bdf8: 0x0  nop
    ctx->pc = 0x26bdf8u;
    // NOP
label_26bdfc:
    // 0x26bdfc: 0x0  nop
    ctx->pc = 0x26bdfcu;
    // NOP
label_26be00:
    // 0x26be00: 0x1c1d  .word       0x00001C1D                   # dmultu      $zero, $zero # 00001C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BE00 raw=0x00001C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26be04:
    // 0x26be04: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be04u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26be08:
    // 0x26be08: 0x0  nop
    ctx->pc = 0x26be08u;
    // NOP
label_26be0c:
    // 0x26be0c: 0x0  nop
    ctx->pc = 0x26be0cu;
    // NOP
label_26be10:
    // 0x26be10: 0x1c2e  .word       0x00001C2E                   # dsub        $v1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26be14:
    // 0x26be14: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be14u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26be18:
    // 0x26be18: 0x0  nop
    ctx->pc = 0x26be18u;
    // NOP
label_26be1c:
    // 0x26be1c: 0x0  nop
    ctx->pc = 0x26be1cu;
    // NOP
label_26be20:
    // 0x26be20: 0x1c40  sll         $v1, $zero, 17
    ctx->pc = 0x26be20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26be24:
    // 0x26be24: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x26be24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26be28:
    // 0x26be28: 0x0  nop
    ctx->pc = 0x26be28u;
    // NOP
label_26be2c:
    // 0x26be2c: 0x0  nop
    ctx->pc = 0x26be2cu;
    // NOP
label_26be30:
    // 0x26be30: 0x1c52  .word       0x00001C52                   # mflo        $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_26be34:
    // 0x26be34: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26be38:
    // 0x26be38: 0x0  nop
    ctx->pc = 0x26be38u;
    // NOP
label_26be3c:
    // 0x26be3c: 0x0  nop
    ctx->pc = 0x26be3cu;
    // NOP
label_26be40:
    // 0x26be40: 0x1c66  .word       0x00001C66                   # xor         $v1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26be44:
    // 0x26be44: 0x9d10  .word       0x00009D10                   # mfhi        $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26be48:
    // 0x26be48: 0x0  nop
    ctx->pc = 0x26be48u;
    // NOP
label_26be4c:
    // 0x26be4c: 0x0  nop
    ctx->pc = 0x26be4cu;
    // NOP
label_26be50:
    // 0x26be50: 0x1c7a  dsrl        $v1, $zero, 17
    ctx->pc = 0x26be50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) >> 17);
label_26be54:
    // 0x26be54: 0xc4d0  .word       0x0000C4D0                   # mfhi        $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26be58:
    // 0x26be58: 0x0  nop
    ctx->pc = 0x26be58u;
    // NOP
label_26be5c:
    // 0x26be5c: 0x0  nop
    ctx->pc = 0x26be5cu;
    // NOP
label_26be60:
    // 0x26be60: 0x1c93  .word       0x00001C93                   # mtlo        $zero # 00001C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be60u;
    ctx->lo = GPR_U64(ctx, 0);
label_26be64:
    // 0x26be64: 0xe960  .word       0x0000E960                   # add         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_26be68:
    // 0x26be68: 0x0  nop
    ctx->pc = 0x26be68u;
    // NOP
label_26be6c:
    // 0x26be6c: 0x0  nop
    ctx->pc = 0x26be6cu;
    // NOP
label_26be70:
    // 0x26be70: 0x1cb1  tgeu        $zero, $zero, 114
    ctx->pc = 0x26be70u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26be74:
    // 0x26be74: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x26be74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26be78:
    // 0x26be78: 0x0  nop
    ctx->pc = 0x26be78u;
    // NOP
label_26be7c:
    // 0x26be7c: 0x0  nop
    ctx->pc = 0x26be7cu;
    // NOP
label_26be80:
    // 0x26be80: 0x1cc1  .word       0x00001CC1                   # INVALID     $zero, $zero, 0x1CC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BE80 raw=0x00001CC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26be84:
    // 0x26be84: 0x8970  tge         $zero, $zero, 549
    ctx->pc = 0x26be84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26be88:
    // 0x26be88: 0x0  nop
    ctx->pc = 0x26be88u;
    // NOP
label_26be8c:
    // 0x26be8c: 0x0  nop
    ctx->pc = 0x26be8cu;
    // NOP
label_26be90:
    // 0x26be90: 0x1cd3  .word       0x00001CD3                   # mtlo        $zero # 00001CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26be90u;
    ctx->lo = GPR_U64(ctx, 0);
label_26be94:
    // 0x26be94: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x26be94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26be98:
    // 0x26be98: 0x0  nop
    ctx->pc = 0x26be98u;
    // NOP
label_26be9c:
    // 0x26be9c: 0x0  nop
    ctx->pc = 0x26be9cu;
    // NOP
label_26bea0:
    // 0x26bea0: 0x1ce5  .word       0x00001CE5                   # move        $v1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26bea4:
    // 0x26bea4: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26bea8:
    // 0x26bea8: 0x0  nop
    ctx->pc = 0x26bea8u;
    // NOP
label_26beac:
    // 0x26beac: 0x0  nop
    ctx->pc = 0x26beacu;
    // NOP
label_26beb0:
    // 0x26beb0: 0x1cf8  dsll        $v1, $zero, 19
    ctx->pc = 0x26beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 19);
label_26beb4:
    // 0x26beb4: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x26beb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26beb8:
    // 0x26beb8: 0x0  nop
    ctx->pc = 0x26beb8u;
    // NOP
label_26bebc:
    // 0x26bebc: 0x0  nop
    ctx->pc = 0x26bebcu;
    // NOP
label_26bec0:
    // 0x26bec0: 0x1d0e  .word       0x00001D0E                   # INVALID     $zero, $zero, 0x1D0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26BEC0 raw=0x00001D0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bec4:
    // 0x26bec4: 0x8de0  .word       0x00008DE0                   # add         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bec8:
    // 0x26bec8: 0x0  nop
    ctx->pc = 0x26bec8u;
    // NOP
label_26becc:
    // 0x26becc: 0x0  nop
    ctx->pc = 0x26beccu;
    // NOP
label_26bed0:
    // 0x26bed0: 0x1d20  .word       0x00001D20                   # add         $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bed0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26bed4:
    // 0x26bed4: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26bed8:
    // 0x26bed8: 0x0  nop
    ctx->pc = 0x26bed8u;
    // NOP
label_26bedc:
    // 0x26bedc: 0x0  nop
    ctx->pc = 0x26bedcu;
    // NOP
label_26bee0:
    // 0x26bee0: 0x1d31  tgeu        $zero, $zero, 116
    ctx->pc = 0x26bee0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bee4:
    // 0x26bee4: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x26bee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bee8:
    // 0x26bee8: 0x0  nop
    ctx->pc = 0x26bee8u;
    // NOP
label_26beec:
    // 0x26beec: 0x0  nop
    ctx->pc = 0x26beecu;
    // NOP
label_26bef0:
    // 0x26bef0: 0x1d48  .word       0x00001D48                   # jr          $zero # 00001D40 <InstrIdType: CPU_SPECIAL>
label_26bef4:
    if (ctx->pc == 0x26BEF4u) {
        ctx->pc = 0x26BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF0u;
        // 0x26bef4: 0x88f0  tge         $zero, $zero, 547 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEF8u;
        goto label_26bef8;
    }
    ctx->pc = 0x26BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF0u;
        // 0x26bef4: 0x88f0  tge         $zero, $zero, 547 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26BEF8u;
label_26bef8:
    // 0x26bef8: 0x0  nop
    ctx->pc = 0x26bef8u;
    // NOP
label_26befc:
    // 0x26befc: 0x0  nop
    ctx->pc = 0x26befcu;
    // NOP
label_26bf00:
    // 0x26bf00: 0x1d5a  .word       0x00001D5A                   # div         $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26bf04:
    // 0x26bf04: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x26bf04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf08:
    // 0x26bf08: 0x0  nop
    ctx->pc = 0x26bf08u;
    // NOP
label_26bf0c:
    // 0x26bf0c: 0x0  nop
    ctx->pc = 0x26bf0cu;
    // NOP
label_26bf10:
    // 0x26bf10: 0x1d6d  .word       0x00001D6D                   # daddu       $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bf14:
    // 0x26bf14: 0xc4a0  .word       0x0000C4A0                   # add         $t8, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26bf18:
    // 0x26bf18: 0x0  nop
    ctx->pc = 0x26bf18u;
    // NOP
label_26bf1c:
    // 0x26bf1c: 0x0  nop
    ctx->pc = 0x26bf1cu;
    // NOP
label_26bf20:
    // 0x26bf20: 0x1d86  .word       0x00001D86                   # srlv        $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bf24:
    // 0x26bf24: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x26bf24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf28:
    // 0x26bf28: 0x0  nop
    ctx->pc = 0x26bf28u;
    // NOP
label_26bf2c:
    // 0x26bf2c: 0x0  nop
    ctx->pc = 0x26bf2cu;
    // NOP
label_26bf30:
    // 0x26bf30: 0x1d9e  .word       0x00001D9E                   # ddiv        $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26BF30 raw=0x00001D9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bf34:
    // 0x26bf34: 0x9390  .word       0x00009390                   # mfhi        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf34u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26bf38:
    // 0x26bf38: 0x0  nop
    ctx->pc = 0x26bf38u;
    // NOP
label_26bf3c:
    // 0x26bf3c: 0x0  nop
    ctx->pc = 0x26bf3cu;
    // NOP
label_26bf40:
    // 0x26bf40: 0x1db1  tgeu        $zero, $zero, 118
    ctx->pc = 0x26bf40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf44:
    // 0x26bf44: 0xc1b0  tge         $zero, $zero, 774
    ctx->pc = 0x26bf44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf48:
    // 0x26bf48: 0x0  nop
    ctx->pc = 0x26bf48u;
    // NOP
label_26bf4c:
    // 0x26bf4c: 0x0  nop
    ctx->pc = 0x26bf4cu;
    // NOP
label_26bf50:
    // 0x26bf50: 0x1dca  .word       0x00001DCA                   # movz        $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_26bf54:
    // 0x26bf54: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x26bf54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf58:
    // 0x26bf58: 0x0  nop
    ctx->pc = 0x26bf58u;
    // NOP
label_26bf5c:
    // 0x26bf5c: 0x0  nop
    ctx->pc = 0x26bf5cu;
    // NOP
label_26bf60:
    // 0x26bf60: 0x1ddf  .word       0x00001DDF                   # ddivu       $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26BF60 raw=0x00001DDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bf64:
    // 0x26bf64: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x26bf64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf68:
    // 0x26bf68: 0x0  nop
    ctx->pc = 0x26bf68u;
    // NOP
label_26bf6c:
    // 0x26bf6c: 0x0  nop
    ctx->pc = 0x26bf6cu;
    // NOP
label_26bf70:
    // 0x26bf70: 0x1df3  tltu        $zero, $zero, 119
    ctx->pc = 0x26bf70u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf74:
    // 0x26bf74: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26bf78:
    // 0x26bf78: 0x0  nop
    ctx->pc = 0x26bf78u;
    // NOP
label_26bf7c:
    // 0x26bf7c: 0x0  nop
    ctx->pc = 0x26bf7cu;
    // NOP
label_26bf80:
    // 0x26bf80: 0x1e04  .word       0x00001E04                   # sllv        $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bf84:
    // 0x26bf84: 0xa320  .word       0x0000A320                   # add         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26bf88:
    // 0x26bf88: 0x0  nop
    ctx->pc = 0x26bf88u;
    // NOP
label_26bf8c:
    // 0x26bf8c: 0x0  nop
    ctx->pc = 0x26bf8cu;
    // NOP
label_26bf90:
    // 0x26bf90: 0x1e19  .word       0x00001E19                   # multu       $zero, $zero # 00001E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bf90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bf94:
    // 0x26bf94: 0x9a30  tge         $zero, $zero, 616
    ctx->pc = 0x26bf94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bf98:
    // 0x26bf98: 0x0  nop
    ctx->pc = 0x26bf98u;
    // NOP
label_26bf9c:
    // 0x26bf9c: 0x0  nop
    ctx->pc = 0x26bf9cu;
    // NOP
label_26bfa0:
    // 0x26bfa0: 0x1e2d  .word       0x00001E2D                   # daddu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bfa4:
    // 0x26bfa4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x26bfa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bfa8:
    // 0x26bfa8: 0x0  nop
    ctx->pc = 0x26bfa8u;
    // NOP
label_26bfac:
    // 0x26bfac: 0x0  nop
    ctx->pc = 0x26bfacu;
    // NOP
label_26bfb0:
    // 0x26bfb0: 0x1e42  srl         $v1, $zero, 25
    ctx->pc = 0x26bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_26bfb4:
    // 0x26bfb4: 0x10840  sll         $at, $at, 1
    ctx->pc = 0x26bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_26bfb8:
    // 0x26bfb8: 0x0  nop
    ctx->pc = 0x26bfb8u;
    // NOP
label_26bfbc:
    // 0x26bfbc: 0x0  nop
    ctx->pc = 0x26bfbcu;
    // NOP
label_26bfc0:
    // 0x26bfc0: 0x1e64  .word       0x00001E64                   # and         $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26bfc4:
    // 0x26bfc4: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfc4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26bfc8:
    // 0x26bfc8: 0x0  nop
    ctx->pc = 0x26bfc8u;
    // NOP
label_26bfcc:
    // 0x26bfcc: 0x0  nop
    ctx->pc = 0x26bfccu;
    // NOP
label_26bfd0:
    // 0x26bfd0: 0x1e79  .word       0x00001E79                   # INVALID     $zero, $zero, 0x1E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26BFD0 raw=0x00001E79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bfd4:
    // 0x26bfd4: 0xcf00  sll         $t9, $zero, 28
    ctx->pc = 0x26bfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26bfd8:
    // 0x26bfd8: 0x0  nop
    ctx->pc = 0x26bfd8u;
    // NOP
label_26bfdc:
    // 0x26bfdc: 0x0  nop
    ctx->pc = 0x26bfdcu;
    // NOP
label_26bfe0:
    // 0x26bfe0: 0x1e93  .word       0x00001E93                   # mtlo        $zero # 00001E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfe0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26bfe4:
    // 0x26bfe4: 0x9950  .word       0x00009950                   # mfhi        $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bfe4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26bfe8:
    // 0x26bfe8: 0x0  nop
    ctx->pc = 0x26bfe8u;
    // NOP
label_26bfec:
    // 0x26bfec: 0x0  nop
    ctx->pc = 0x26bfecu;
    // NOP
label_26bff0:
    // 0x26bff0: 0x1ea7  .word       0x00001EA7                   # not         $v1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bff0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26bff4:
    // 0x26bff4: 0xa620  .word       0x0000A620                   # add         $s4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26bff8:
    // 0x26bff8: 0x0  nop
    ctx->pc = 0x26bff8u;
    // NOP
label_26bffc:
    // 0x26bffc: 0x0  nop
    ctx->pc = 0x26bffcu;
    // NOP
label_26c000:
    // 0x26c000: 0x1ebc  dsll32      $v1, $zero, 26
    ctx->pc = 0x26c000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 26));
label_26c004:
    // 0x26c004: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26c008:
    // 0x26c008: 0x0  nop
    ctx->pc = 0x26c008u;
    // NOP
label_26c00c:
    // 0x26c00c: 0x0  nop
    ctx->pc = 0x26c00cu;
    // NOP
label_26c010:
    // 0x26c010: 0x1ed0  .word       0x00001ED0                   # mfhi        $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c010u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26c014:
    // 0x26c014: 0x9e80  sll         $s3, $zero, 26
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26c018:
    // 0x26c018: 0x0  nop
    ctx->pc = 0x26c018u;
    // NOP
label_26c01c:
    // 0x26c01c: 0x0  nop
    ctx->pc = 0x26c01cu;
    // NOP
label_26c020:
    // 0x26c020: 0x1ee4  .word       0x00001EE4                   # and         $v1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26c024:
    // 0x26c024: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x26c024u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26c028:
    // 0x26c028: 0x0  nop
    ctx->pc = 0x26c028u;
    // NOP
label_26c02c:
    // 0x26c02c: 0x0  nop
    ctx->pc = 0x26c02cu;
    // NOP
label_26c030:
    // 0x26c030: 0x1efb  dsra        $v1, $zero, 27
    ctx->pc = 0x26c030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> 27);
label_26c034:
    // 0x26c034: 0x95e0  .word       0x000095E0                   # add         $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26c038:
    // 0x26c038: 0x0  nop
    ctx->pc = 0x26c038u;
    // NOP
label_26c03c:
    // 0x26c03c: 0x0  nop
    ctx->pc = 0x26c03cu;
    // NOP
label_26c040:
    // 0x26c040: 0x1f0e  .word       0x00001F0E                   # INVALID     $zero, $zero, 0x1F0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26C040 raw=0x00001F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c044:
    // 0x26c044: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x26c044u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c048:
    // 0x26c048: 0x0  nop
    ctx->pc = 0x26c048u;
    // NOP
label_26c04c:
    // 0x26c04c: 0x0  nop
    ctx->pc = 0x26c04cu;
    // NOP
label_26c050:
    // 0x26c050: 0x1f1d  .word       0x00001F1D                   # dmultu      $zero, $zero # 00001F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C050 raw=0x00001F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c054:
    // 0x26c054: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26c054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c058:
    // 0x26c058: 0x0  nop
    ctx->pc = 0x26c058u;
    // NOP
label_26c05c:
    // 0x26c05c: 0x0  nop
    ctx->pc = 0x26c05cu;
    // NOP
label_26c060:
    // 0x26c060: 0x1f31  tgeu        $zero, $zero, 124
    ctx->pc = 0x26c060u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c064:
    // 0x26c064: 0xac80  sll         $s5, $zero, 18
    ctx->pc = 0x26c064u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26c068:
    // 0x26c068: 0x0  nop
    ctx->pc = 0x26c068u;
    // NOP
label_26c06c:
    // 0x26c06c: 0x0  nop
    ctx->pc = 0x26c06cu;
    // NOP
label_26c070:
    // 0x26c070: 0x1f47  .word       0x00001F47                   # srav        $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c074:
    // 0x26c074: 0x7f80  sll         $t7, $zero, 30
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26c078:
    // 0x26c078: 0x0  nop
    ctx->pc = 0x26c078u;
    // NOP
label_26c07c:
    // 0x26c07c: 0x0  nop
    ctx->pc = 0x26c07cu;
    // NOP
label_26c080:
    // 0x26c080: 0x1f57  .word       0x00001F57                   # dsrav       $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c084:
    // 0x26c084: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c084u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26c088:
    // 0x26c088: 0x0  nop
    ctx->pc = 0x26c088u;
    // NOP
label_26c08c:
    // 0x26c08c: 0x0  nop
    ctx->pc = 0x26c08cu;
    // NOP
label_26c090:
    // 0x26c090: 0x1f69  .word       0x00001F69                   # mtsa        $zero # 00001F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c094:
    // 0x26c094: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x26c094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c098:
    // 0x26c098: 0x0  nop
    ctx->pc = 0x26c098u;
    // NOP
label_26c09c:
    // 0x26c09c: 0x0  nop
    ctx->pc = 0x26c09cu;
    // NOP
label_26c0a0:
    // 0x26c0a0: 0x1f7f  dsra32      $v1, $zero, 29
    ctx->pc = 0x26c0a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (32 + 29));
label_26c0a4:
    // 0x26c0a4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c0a8:
    // 0x26c0a8: 0x0  nop
    ctx->pc = 0x26c0a8u;
    // NOP
label_26c0ac:
    // 0x26c0ac: 0x0  nop
    ctx->pc = 0x26c0acu;
    // NOP
label_26c0b0:
    // 0x26c0b0: 0x1f94  .word       0x00001F94                   # dsllv       $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26c0b4:
    // 0x26c0b4: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c0b8:
    // 0x26c0b8: 0x0  nop
    ctx->pc = 0x26c0b8u;
    // NOP
label_26c0bc:
    // 0x26c0bc: 0x0  nop
    ctx->pc = 0x26c0bcu;
    // NOP
    ctx->pc = 0x26c0c0u;
    return;
}

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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part296(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b950u: goto label_22b950;
        case 0x22b954u: goto label_22b954;
        case 0x22b958u: goto label_22b958;
        case 0x22b95cu: goto label_22b95c;
        case 0x22b960u: goto label_22b960;
        case 0x22b964u: goto label_22b964;
        case 0x22b968u: goto label_22b968;
        case 0x22b96cu: goto label_22b96c;
        case 0x22b970u: goto label_22b970;
        case 0x22b974u: goto label_22b974;
        case 0x22b978u: goto label_22b978;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b980u: goto label_22b980;
        case 0x22b984u: goto label_22b984;
        case 0x22b988u: goto label_22b988;
        case 0x22b98cu: goto label_22b98c;
        case 0x22b990u: goto label_22b990;
        case 0x22b994u: goto label_22b994;
        case 0x22b998u: goto label_22b998;
        case 0x22b99cu: goto label_22b99c;
        case 0x22b9a0u: goto label_22b9a0;
        case 0x22b9a4u: goto label_22b9a4;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9acu: goto label_22b9ac;
        case 0x22b9b0u: goto label_22b9b0;
        case 0x22b9b4u: goto label_22b9b4;
        case 0x22b9b8u: goto label_22b9b8;
        case 0x22b9bcu: goto label_22b9bc;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9c4u: goto label_22b9c4;
        case 0x22b9c8u: goto label_22b9c8;
        case 0x22b9ccu: goto label_22b9cc;
        case 0x22b9d0u: goto label_22b9d0;
        case 0x22b9d4u: goto label_22b9d4;
        case 0x22b9d8u: goto label_22b9d8;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9e0u: goto label_22b9e0;
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9e8u: goto label_22b9e8;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9f0u: goto label_22b9f0;
        case 0x22b9f4u: goto label_22b9f4;
        case 0x22b9f8u: goto label_22b9f8;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba00u: goto label_22ba00;
        case 0x22ba04u: goto label_22ba04;
        case 0x22ba08u: goto label_22ba08;
        case 0x22ba0cu: goto label_22ba0c;
        case 0x22ba10u: goto label_22ba10;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba18u: goto label_22ba18;
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba20u: goto label_22ba20;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba2cu: goto label_22ba2c;
        case 0x22ba30u: goto label_22ba30;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba38u: goto label_22ba38;
        case 0x22ba3cu: goto label_22ba3c;
        case 0x22ba40u: goto label_22ba40;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba4cu: goto label_22ba4c;
        case 0x22ba50u: goto label_22ba50;
        case 0x22ba54u: goto label_22ba54;
        case 0x22ba58u: goto label_22ba58;
        case 0x22ba5cu: goto label_22ba5c;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba64u: goto label_22ba64;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba6cu: goto label_22ba6c;
        case 0x22ba70u: goto label_22ba70;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba78u: goto label_22ba78;
        case 0x22ba7cu: goto label_22ba7c;
        case 0x22ba80u: goto label_22ba80;
        case 0x22ba84u: goto label_22ba84;
        case 0x22ba88u: goto label_22ba88;
        case 0x22ba8cu: goto label_22ba8c;
        case 0x22ba90u: goto label_22ba90;
        case 0x22ba94u: goto label_22ba94;
        case 0x22ba98u: goto label_22ba98;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22baa0u: goto label_22baa0;
        case 0x22baa4u: goto label_22baa4;
        case 0x22baa8u: goto label_22baa8;
        case 0x22baacu: goto label_22baac;
        case 0x22bab0u: goto label_22bab0;
        case 0x22bab4u: goto label_22bab4;
        case 0x22bab8u: goto label_22bab8;
        case 0x22babcu: goto label_22babc;
        case 0x22bac0u: goto label_22bac0;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baccu: goto label_22bacc;
        case 0x22bad0u: goto label_22bad0;
        case 0x22bad4u: goto label_22bad4;
        case 0x22bad8u: goto label_22bad8;
        case 0x22badcu: goto label_22badc;
        case 0x22bae0u: goto label_22bae0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bae8u: goto label_22bae8;
        case 0x22baecu: goto label_22baec;
        case 0x22baf0u: goto label_22baf0;
        case 0x22baf4u: goto label_22baf4;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bafcu: goto label_22bafc;
        case 0x22bb00u: goto label_22bb00;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb08u: goto label_22bb08;
        case 0x22bb0cu: goto label_22bb0c;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb14u: goto label_22bb14;
        case 0x22bb18u: goto label_22bb18;
        case 0x22bb1cu: goto label_22bb1c;
        case 0x22bb20u: goto label_22bb20;
        case 0x22bb24u: goto label_22bb24;
        case 0x22bb28u: goto label_22bb28;
        case 0x22bb2cu: goto label_22bb2c;
        case 0x22bb30u: goto label_22bb30;
        case 0x22bb34u: goto label_22bb34;
        case 0x22bb38u: goto label_22bb38;
        case 0x22bb3cu: goto label_22bb3c;
        case 0x22bb40u: goto label_22bb40;
        case 0x22bb44u: goto label_22bb44;
        case 0x22bb48u: goto label_22bb48;
        case 0x22bb4cu: goto label_22bb4c;
        case 0x22bb50u: goto label_22bb50;
        case 0x22bb54u: goto label_22bb54;
        case 0x22bb58u: goto label_22bb58;
        case 0x22bb5cu: goto label_22bb5c;
        case 0x22bb60u: goto label_22bb60;
        case 0x22bb64u: goto label_22bb64;
        case 0x22bb68u: goto label_22bb68;
        case 0x22bb6cu: goto label_22bb6c;
        case 0x22bb70u: goto label_22bb70;
        case 0x22bb74u: goto label_22bb74;
        case 0x22bb78u: goto label_22bb78;
        case 0x22bb7cu: goto label_22bb7c;
        case 0x22bb80u: goto label_22bb80;
        case 0x22bb84u: goto label_22bb84;
        case 0x22bb88u: goto label_22bb88;
        case 0x22bb8cu: goto label_22bb8c;
        case 0x22bb90u: goto label_22bb90;
        case 0x22bb94u: goto label_22bb94;
        case 0x22bb98u: goto label_22bb98;
        case 0x22bb9cu: goto label_22bb9c;
        case 0x22bba0u: goto label_22bba0;
        case 0x22bba4u: goto label_22bba4;
        case 0x22bba8u: goto label_22bba8;
        case 0x22bbacu: goto label_22bbac;
        case 0x22bbb0u: goto label_22bbb0;
        case 0x22bbb4u: goto label_22bbb4;
        case 0x22bbb8u: goto label_22bbb8;
        case 0x22bbbcu: goto label_22bbbc;
        case 0x22bbc0u: goto label_22bbc0;
        case 0x22bbc4u: goto label_22bbc4;
        case 0x22bbc8u: goto label_22bbc8;
        case 0x22bbccu: goto label_22bbcc;
        case 0x22bbd0u: goto label_22bbd0;
        case 0x22bbd4u: goto label_22bbd4;
        case 0x22bbd8u: goto label_22bbd8;
        case 0x22bbdcu: goto label_22bbdc;
        case 0x22bbe0u: goto label_22bbe0;
        case 0x22bbe4u: goto label_22bbe4;
        case 0x22bbe8u: goto label_22bbe8;
        case 0x22bbecu: goto label_22bbec;
        case 0x22bbf0u: goto label_22bbf0;
        case 0x22bbf4u: goto label_22bbf4;
        case 0x22bbf8u: goto label_22bbf8;
        case 0x22bbfcu: goto label_22bbfc;
        case 0x22bc00u: goto label_22bc00;
        case 0x22bc04u: goto label_22bc04;
        case 0x22bc08u: goto label_22bc08;
        case 0x22bc0cu: goto label_22bc0c;
        case 0x22bc10u: goto label_22bc10;
        case 0x22bc14u: goto label_22bc14;
        case 0x22bc18u: goto label_22bc18;
        case 0x22bc1cu: goto label_22bc1c;
        case 0x22bc20u: goto label_22bc20;
        case 0x22bc24u: goto label_22bc24;
        case 0x22bc28u: goto label_22bc28;
        case 0x22bc2cu: goto label_22bc2c;
        case 0x22bc30u: goto label_22bc30;
        case 0x22bc34u: goto label_22bc34;
        case 0x22bc38u: goto label_22bc38;
        case 0x22bc3cu: goto label_22bc3c;
        case 0x22bc40u: goto label_22bc40;
        case 0x22bc44u: goto label_22bc44;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bc4cu: goto label_22bc4c;
        case 0x22bc50u: goto label_22bc50;
        case 0x22bc54u: goto label_22bc54;
        case 0x22bc58u: goto label_22bc58;
        case 0x22bc5cu: goto label_22bc5c;
        case 0x22bc60u: goto label_22bc60;
        case 0x22bc64u: goto label_22bc64;
        case 0x22bc68u: goto label_22bc68;
        case 0x22bc6cu: goto label_22bc6c;
        case 0x22bc70u: goto label_22bc70;
        case 0x22bc74u: goto label_22bc74;
        case 0x22bc78u: goto label_22bc78;
        case 0x22bc7cu: goto label_22bc7c;
        case 0x22bc80u: goto label_22bc80;
        case 0x22bc84u: goto label_22bc84;
        case 0x22bc88u: goto label_22bc88;
        case 0x22bc8cu: goto label_22bc8c;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bc94u: goto label_22bc94;
        case 0x22bc98u: goto label_22bc98;
        case 0x22bc9cu: goto label_22bc9c;
        case 0x22bca0u: goto label_22bca0;
        case 0x22bca4u: goto label_22bca4;
        case 0x22bca8u: goto label_22bca8;
        case 0x22bcacu: goto label_22bcac;
        case 0x22bcb0u: goto label_22bcb0;
        case 0x22bcb4u: goto label_22bcb4;
        case 0x22bcb8u: goto label_22bcb8;
        case 0x22bcbcu: goto label_22bcbc;
        case 0x22bcc0u: goto label_22bcc0;
        case 0x22bcc4u: goto label_22bcc4;
        case 0x22bcc8u: goto label_22bcc8;
        case 0x22bcccu: goto label_22bccc;
        case 0x22bcd0u: goto label_22bcd0;
        case 0x22bcd4u: goto label_22bcd4;
        case 0x22bcd8u: goto label_22bcd8;
        case 0x22bcdcu: goto label_22bcdc;
        case 0x22bce0u: goto label_22bce0;
        case 0x22bce4u: goto label_22bce4;
        case 0x22bce8u: goto label_22bce8;
        case 0x22bcecu: goto label_22bcec;
        case 0x22bcf0u: goto label_22bcf0;
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bcf8u: goto label_22bcf8;
        case 0x22bcfcu: goto label_22bcfc;
        case 0x22bd00u: goto label_22bd00;
        case 0x22bd04u: goto label_22bd04;
        case 0x22bd08u: goto label_22bd08;
        case 0x22bd0cu: goto label_22bd0c;
        case 0x22bd10u: goto label_22bd10;
        case 0x22bd14u: goto label_22bd14;
        case 0x22bd18u: goto label_22bd18;
        case 0x22bd1cu: goto label_22bd1c;
        case 0x22bd20u: goto label_22bd20;
        case 0x22bd24u: goto label_22bd24;
        case 0x22bd28u: goto label_22bd28;
        case 0x22bd2cu: goto label_22bd2c;
        case 0x22bd30u: goto label_22bd30;
        case 0x22bd34u: goto label_22bd34;
        case 0x22bd38u: goto label_22bd38;
        case 0x22bd3cu: goto label_22bd3c;
        case 0x22bd40u: goto label_22bd40;
        case 0x22bd44u: goto label_22bd44;
        case 0x22bd48u: goto label_22bd48;
        case 0x22bd4cu: goto label_22bd4c;
        case 0x22bd50u: goto label_22bd50;
        case 0x22bd54u: goto label_22bd54;
        case 0x22bd58u: goto label_22bd58;
        case 0x22bd5cu: goto label_22bd5c;
        case 0x22bd60u: goto label_22bd60;
        case 0x22bd64u: goto label_22bd64;
        case 0x22bd68u: goto label_22bd68;
        case 0x22bd6cu: goto label_22bd6c;
        case 0x22bd70u: goto label_22bd70;
        case 0x22bd74u: goto label_22bd74;
        case 0x22bd78u: goto label_22bd78;
        case 0x22bd7cu: goto label_22bd7c;
        case 0x22bd80u: goto label_22bd80;
        case 0x22bd84u: goto label_22bd84;
        case 0x22bd88u: goto label_22bd88;
        case 0x22bd8cu: goto label_22bd8c;
        case 0x22bd90u: goto label_22bd90;
        case 0x22bd94u: goto label_22bd94;
        case 0x22bd98u: goto label_22bd98;
        case 0x22bd9cu: goto label_22bd9c;
        case 0x22bda0u: goto label_22bda0;
        case 0x22bda4u: goto label_22bda4;
        case 0x22bda8u: goto label_22bda8;
        case 0x22bdacu: goto label_22bdac;
        case 0x22bdb0u: goto label_22bdb0;
        case 0x22bdb4u: goto label_22bdb4;
        case 0x22bdb8u: goto label_22bdb8;
        case 0x22bdbcu: goto label_22bdbc;
        case 0x22bdc0u: goto label_22bdc0;
        case 0x22bdc4u: goto label_22bdc4;
        case 0x22bdc8u: goto label_22bdc8;
        case 0x22bdccu: goto label_22bdcc;
        case 0x22bdd0u: goto label_22bdd0;
        case 0x22bdd4u: goto label_22bdd4;
        case 0x22bdd8u: goto label_22bdd8;
        case 0x22bddcu: goto label_22bddc;
        case 0x22bde0u: goto label_22bde0;
        case 0x22bde4u: goto label_22bde4;
        case 0x22bde8u: goto label_22bde8;
        case 0x22bdecu: goto label_22bdec;
        case 0x22bdf0u: goto label_22bdf0;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22bdf8u: goto label_22bdf8;
        case 0x22bdfcu: goto label_22bdfc;
        case 0x22be00u: goto label_22be00;
        case 0x22be04u: goto label_22be04;
        case 0x22be08u: goto label_22be08;
        case 0x22be0cu: goto label_22be0c;
        case 0x22be10u: goto label_22be10;
        case 0x22be14u: goto label_22be14;
        case 0x22be18u: goto label_22be18;
        case 0x22be1cu: goto label_22be1c;
        case 0x22be20u: goto label_22be20;
        case 0x22be24u: goto label_22be24;
        case 0x22be28u: goto label_22be28;
        case 0x22be2cu: goto label_22be2c;
        case 0x22be30u: goto label_22be30;
        case 0x22be34u: goto label_22be34;
        case 0x22be38u: goto label_22be38;
        case 0x22be3cu: goto label_22be3c;
        case 0x22be40u: goto label_22be40;
        case 0x22be44u: goto label_22be44;
        case 0x22be48u: goto label_22be48;
        case 0x22be4cu: goto label_22be4c;
        case 0x22be50u: goto label_22be50;
        case 0x22be54u: goto label_22be54;
        case 0x22be58u: goto label_22be58;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be60u: goto label_22be60;
        case 0x22be64u: goto label_22be64;
        case 0x22be68u: goto label_22be68;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be70u: goto label_22be70;
        case 0x22be74u: goto label_22be74;
        case 0x22be78u: goto label_22be78;
        case 0x22be7cu: goto label_22be7c;
        case 0x22be80u: goto label_22be80;
        case 0x22be84u: goto label_22be84;
        case 0x22be88u: goto label_22be88;
        case 0x22be8cu: goto label_22be8c;
        case 0x22be90u: goto label_22be90;
        case 0x22be94u: goto label_22be94;
        case 0x22be98u: goto label_22be98;
        case 0x22be9cu: goto label_22be9c;
        case 0x22bea0u: goto label_22bea0;
        case 0x22bea4u: goto label_22bea4;
        case 0x22bea8u: goto label_22bea8;
        case 0x22beacu: goto label_22beac;
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bef4u: goto label_22bef4;
        case 0x22bef8u: goto label_22bef8;
        case 0x22befcu: goto label_22befc;
        case 0x22bf00u: goto label_22bf00;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf08u: goto label_22bf08;
        case 0x22bf0cu: goto label_22bf0c;
        case 0x22bf10u: goto label_22bf10;
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf18u: goto label_22bf18;
        case 0x22bf1cu: goto label_22bf1c;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf2cu: goto label_22bf2c;
        case 0x22bf30u: goto label_22bf30;
        case 0x22bf34u: goto label_22bf34;
        case 0x22bf38u: goto label_22bf38;
        case 0x22bf3cu: goto label_22bf3c;
        case 0x22bf40u: goto label_22bf40;
        case 0x22bf44u: goto label_22bf44;
        case 0x22bf48u: goto label_22bf48;
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf58u: goto label_22bf58;
        case 0x22bf5cu: goto label_22bf5c;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bf64u: goto label_22bf64;
        case 0x22bf68u: goto label_22bf68;
        case 0x22bf6cu: goto label_22bf6c;
        case 0x22bf70u: goto label_22bf70;
        case 0x22bf74u: goto label_22bf74;
        case 0x22bf78u: goto label_22bf78;
        case 0x22bf7cu: goto label_22bf7c;
        case 0x22bf80u: goto label_22bf80;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf88u: goto label_22bf88;
        case 0x22bf8cu: goto label_22bf8c;
        case 0x22bf90u: goto label_22bf90;
        case 0x22bf94u: goto label_22bf94;
        case 0x22bf98u: goto label_22bf98;
        case 0x22bf9cu: goto label_22bf9c;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bfa4u: goto label_22bfa4;
        case 0x22bfa8u: goto label_22bfa8;
        case 0x22bfacu: goto label_22bfac;
        case 0x22bfb0u: goto label_22bfb0;
        case 0x22bfb4u: goto label_22bfb4;
        case 0x22bfb8u: goto label_22bfb8;
        case 0x22bfbcu: goto label_22bfbc;
        case 0x22bfc0u: goto label_22bfc0;
        case 0x22bfc4u: goto label_22bfc4;
        case 0x22bfc8u: goto label_22bfc8;
        case 0x22bfccu: goto label_22bfcc;
        case 0x22bfd0u: goto label_22bfd0;
        case 0x22bfd4u: goto label_22bfd4;
        case 0x22bfd8u: goto label_22bfd8;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bfe0u: goto label_22bfe0;
        case 0x22bfe4u: goto label_22bfe4;
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        case 0x22c02cu: goto label_22c02c;
        case 0x22c030u: goto label_22c030;
        case 0x22c034u: goto label_22c034;
        case 0x22c038u: goto label_22c038;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c040u: goto label_22c040;
        case 0x22c044u: goto label_22c044;
        case 0x22c048u: goto label_22c048;
        case 0x22c04cu: goto label_22c04c;
        case 0x22c050u: goto label_22c050;
        case 0x22c054u: goto label_22c054;
        case 0x22c058u: goto label_22c058;
        case 0x22c05cu: goto label_22c05c;
        case 0x22c060u: goto label_22c060;
        case 0x22c064u: goto label_22c064;
        case 0x22c068u: goto label_22c068;
        case 0x22c06cu: goto label_22c06c;
        case 0x22c070u: goto label_22c070;
        case 0x22c074u: goto label_22c074;
        case 0x22c078u: goto label_22c078;
        case 0x22c07cu: goto label_22c07c;
        case 0x22c080u: goto label_22c080;
        case 0x22c084u: goto label_22c084;
        case 0x22c088u: goto label_22c088;
        case 0x22c08cu: goto label_22c08c;
        case 0x22c090u: goto label_22c090;
        case 0x22c094u: goto label_22c094;
        case 0x22c098u: goto label_22c098;
        case 0x22c09cu: goto label_22c09c;
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0a4u: goto label_22c0a4;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0acu: goto label_22c0ac;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0b8u: goto label_22c0b8;
        case 0x22c0bcu: goto label_22c0bc;
        case 0x22c0c0u: goto label_22c0c0;
        case 0x22c0c4u: goto label_22c0c4;
        case 0x22c0c8u: goto label_22c0c8;
        case 0x22c0ccu: goto label_22c0cc;
        default: return;
    }

label_22b900:
    // 0x22b900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b904:
    // 0x22b904: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x22b904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_22b908:
    // 0x22b908: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22b90c:
    // 0x22b90c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b910:
    // 0x22b910: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b914:
    // 0x22b914: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22b918:
    // 0x22b918: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b91c:
    // 0x22b91c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x22b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_22b920:
    // 0x22b920: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x22b920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_22b924:
    // 0x22b924: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x22b924u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b928:
    // 0x22b928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b92c:
    // 0x22b92c: 0x0  nop
    ctx->pc = 0x22b92cu;
    // NOP
label_22b930:
    // 0x22b930: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b934:
    // 0x22b934: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22b934u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_22b938:
    // 0x22b938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b93c:
    // 0x22b93c: 0x0  nop
    ctx->pc = 0x22b93cu;
    // NOP
label_22b940:
    // 0x22b940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b944:
    // 0x22b944: 0xc066daa  jal         func_19B6A8
label_22b948:
    if (ctx->pc == 0x22B948u) {
        ctx->pc = 0x22B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B944u;
        // 0x22b948: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B94Cu;
        goto label_22b94c;
    }
    ctx->pc = 0x22B944u;
    SET_GPR_U32(ctx, 31, 0x22B94Cu);
    ctx->pc = 0x22B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B944u;
    // 0x22b948: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x22B944u, 0x22B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B94Cu;
label_22b94c:
    // 0x22b94c: 0x10000014  b           . + 4 + (0x14 << 2)
label_22b950:
    if (ctx->pc == 0x22B950u) {
        ctx->pc = 0x22B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B94Cu;
        // 0x22b950: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B954u;
        goto label_22b954;
    }
    ctx->pc = 0x22B94Cu;
    {
        const bool branch_taken_0x22b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B94Cu;
        // 0x22b950: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b94c) {
            ctx->pc = 0x22B9A0u;
            goto label_22b9a0;
        }
    }
    ctx->pc = 0x22B954u;
label_22b954:
    // 0x22b954: 0x28810039  slti        $at, $a0, 0x39
    ctx->pc = 0x22b954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)57) ? 1 : 0);
label_22b958:
    // 0x22b958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22b95c:
    if (ctx->pc == 0x22B95Cu) {
        ctx->pc = 0x22B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B958u;
        // 0x22b95c: 0x2881003f  slti        $at, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B960u;
        goto label_22b960;
    }
    ctx->pc = 0x22B958u;
    {
        const bool branch_taken_0x22b958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B958u;
        // 0x22b95c: 0x2881003f  slti        $at, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b958) {
            ctx->pc = 0x22B968u;
            goto label_22b968;
        }
    }
    ctx->pc = 0x22B960u;
label_22b960:
    // 0x22b960: 0x1000000e  b           . + 4 + (0xE << 2)
label_22b964:
    if (ctx->pc == 0x22B964u) {
        ctx->pc = 0x22B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B960u;
        // 0x22b964: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B968u;
        goto label_22b968;
    }
    ctx->pc = 0x22B960u;
    {
        const bool branch_taken_0x22b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B960u;
        // 0x22b964: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b960) {
            ctx->pc = 0x22B99Cu;
            goto label_22b99c;
        }
    }
    ctx->pc = 0x22B968u;
label_22b968:
    // 0x22b968: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22b96c:
    if (ctx->pc == 0x22B96Cu) {
        ctx->pc = 0x22B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B968u;
        // 0x22b96c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B970u;
        goto label_22b970;
    }
    ctx->pc = 0x22B968u;
    {
        const bool branch_taken_0x22b968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B968u;
        // 0x22b96c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b968) {
            ctx->pc = 0x22B978u;
            goto label_22b978;
        }
    }
    ctx->pc = 0x22B970u;
label_22b970:
    // 0x22b970: 0x1000000a  b           . + 4 + (0xA << 2)
label_22b974:
    if (ctx->pc == 0x22B974u) {
        ctx->pc = 0x22B978u;
        goto label_22b978;
    }
    ctx->pc = 0x22B970u;
    {
        const bool branch_taken_0x22b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b970) {
            ctx->pc = 0x22B99Cu;
            goto label_22b99c;
        }
    }
    ctx->pc = 0x22B978u;
label_22b978:
    // 0x22b978: 0x28810057  slti        $at, $a0, 0x57
    ctx->pc = 0x22b978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)87) ? 1 : 0);
label_22b97c:
    // 0x22b97c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22b980:
    if (ctx->pc == 0x22B980u) {
        ctx->pc = 0x22B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B97Cu;
        // 0x22b980: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B984u;
        goto label_22b984;
    }
    ctx->pc = 0x22B97Cu;
    {
        const bool branch_taken_0x22b97c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B97Cu;
        // 0x22b980: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b97c) {
            ctx->pc = 0x22B98Cu;
            goto label_22b98c;
        }
    }
    ctx->pc = 0x22B984u;
label_22b984:
    // 0x22b984: 0x10000005  b           . + 4 + (0x5 << 2)
label_22b988:
    if (ctx->pc == 0x22B988u) {
        ctx->pc = 0x22B98Cu;
        goto label_22b98c;
    }
    ctx->pc = 0x22B984u;
    {
        const bool branch_taken_0x22b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b984) {
            ctx->pc = 0x22B99Cu;
            goto label_22b99c;
        }
    }
    ctx->pc = 0x22B98Cu;
label_22b98c:
    // 0x22b98c: 0xc0591f4  jal         func_1647D0
label_22b990:
    if (ctx->pc == 0x22B990u) {
        ctx->pc = 0x22B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B98Cu;
        // 0x22b990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B994u;
        goto label_22b994;
    }
    ctx->pc = 0x22B98Cu;
    SET_GPR_U32(ctx, 31, 0x22B994u);
    ctx->pc = 0x22B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B98Cu;
    // 0x22b990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B98Cu, 0x22B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B994u;
label_22b994:
    // 0x22b994: 0x10000105  b           . + 4 + (0x105 << 2)
label_22b998:
    if (ctx->pc == 0x22B998u) {
        ctx->pc = 0x22B99Cu;
        goto label_22b99c;
    }
    ctx->pc = 0x22B994u;
    {
        const bool branch_taken_0x22b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b994) {
            ctx->pc = 0x22BDACu;
            goto label_22bdac;
        }
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22b99cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22b9a0:
    // 0x22b9a0: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_22b9a4:
    // 0x22b9a4: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_22b9a8:
    // 0x22b9a8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x22b9a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_22b9ac:
    // 0x22b9ac: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x22b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b9b0:
    // 0x22b9b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22b9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b9b4:
    // 0x22b9b4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x22b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22b9b8:
    // 0x22b9b8: 0xc6f50000  lwc1        $f21, 0x0($s7)
    ctx->pc = 0x22b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22b9bc:
    // 0x22b9bc: 0x2464ffc9  addiu       $a0, $v1, -0x37
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
label_22b9c0:
    // 0x22b9c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22b9c4:
    // 0x22b9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22b9c8:
    // 0x22b9c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b9cc:
    // 0x22b9cc: 0x0  nop
    ctx->pc = 0x22b9ccu;
    // NOP
label_22b9d0:
    // 0x22b9d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22b9d4:
    // 0x22b9d4: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_22b9d8:
    if (ctx->pc == 0x22B9D8u) {
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D4u;
        // 0x22b9d8: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9DCu;
        goto label_22b9dc;
    }
    ctx->pc = 0x22B9D4u;
    {
        const bool branch_taken_0x22b9d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D4u;
        // 0x22b9d8: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9d4) {
            ctx->pc = 0x22BAF8u;
            goto label_22baf8;
        }
    }
    ctx->pc = 0x22B9DCu;
label_22b9dc:
    // 0x22b9dc: 0xc08f0cc  jal         func_23C330
label_22b9e0:
    if (ctx->pc == 0x22B9E0u) {
        ctx->pc = 0x22B9E4u;
        goto label_22b9e4;
    }
    ctx->pc = 0x22B9DCu;
    SET_GPR_U32(ctx, 31, 0x22B9E4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B9E4u;
label_22b9e4:
    // 0x22b9e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b9e8:
    // 0x22b9e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b9ec:
    // 0x22b9ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b9f0:
    // 0x22b9f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22b9f4:
    // 0x22b9f4: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x22b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_22b9f8:
    // 0x22b9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b9fc:
    // 0x22b9fc: 0x0  nop
    ctx->pc = 0x22b9fcu;
    // NOP
label_22ba00:
    // 0x22ba00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22ba00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ba04:
    // 0x22ba04: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x22ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
label_22ba08:
    // 0x22ba08: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x22ba08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_22ba0c:
    // 0x22ba0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ba0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ba10:
    // 0x22ba10: 0x0  nop
    ctx->pc = 0x22ba10u;
    // NOP
label_22ba14:
    // 0x22ba14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ba14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ba18:
    // 0x22ba18: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x22ba18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_22ba1c:
    // 0x22ba1c: 0xc08f0cc  jal         func_23C330
label_22ba20:
    if (ctx->pc == 0x22BA20u) {
        ctx->pc = 0x22BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA1Cu;
        // 0x22ba20: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA24u;
        goto label_22ba24;
    }
    ctx->pc = 0x22BA1Cu;
    SET_GPR_U32(ctx, 31, 0x22BA24u);
    ctx->pc = 0x22BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA1Cu;
    // 0x22ba20: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BA24u;
label_22ba24:
    // 0x22ba24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ba24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ba28:
    // 0x22ba28: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22ba2c:
    // 0x22ba2c: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x22ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
label_22ba30:
    // 0x22ba30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ba30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ba34:
    // 0x22ba34: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x22ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_22ba38:
    // 0x22ba38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ba38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ba3c:
    // 0x22ba3c: 0x0  nop
    ctx->pc = 0x22ba3cu;
    // NOP
label_22ba40:
    // 0x22ba40: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22ba40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ba44:
    // 0x22ba44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22ba48:
    // 0x22ba48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22ba48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ba4c:
    // 0x22ba4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ba4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ba50:
    // 0x22ba50: 0x0  nop
    ctx->pc = 0x22ba50u;
    // NOP
label_22ba54:
    // 0x22ba54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22ba54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22ba58:
    // 0x22ba58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ba58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ba5c:
    // 0x22ba5c: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x22ba5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_22ba60:
    // 0x22ba60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ba60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ba64:
    // 0x22ba64: 0x0  nop
    ctx->pc = 0x22ba64u;
    // NOP
label_22ba68:
    // 0x22ba68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ba68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ba6c:
    // 0x22ba6c: 0xc08f0cc  jal         func_23C330
label_22ba70:
    if (ctx->pc == 0x22BA70u) {
        ctx->pc = 0x22BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA6Cu;
        // 0x22ba70: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA74u;
        goto label_22ba74;
    }
    ctx->pc = 0x22BA6Cu;
    SET_GPR_U32(ctx, 31, 0x22BA74u);
    ctx->pc = 0x22BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA6Cu;
    // 0x22ba70: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BA74u;
label_22ba74:
    // 0x22ba74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ba78:
    // 0x22ba78: 0x3c0b4f00  lui         $t3, 0x4F00
    ctx->pc = 0x22ba78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20224 << 16));
label_22ba7c:
    // 0x22ba7c: 0x3c0ac348  lui         $t2, 0xC348
    ctx->pc = 0x22ba7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49992 << 16));
label_22ba80:
    // 0x22ba80: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x22ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_22ba84:
    // 0x22ba84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ba84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ba88:
    // 0x22ba88: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x22ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_22ba8c:
    // 0x22ba8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_22ba90:
    // 0x22ba90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ba94:
    // 0x22ba94: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x22ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_22ba98:
    // 0x22ba98: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x22ba98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22ba9c:
    // 0x22ba9c: 0x2409012c  addiu       $t1, $zero, 0x12C
    ctx->pc = 0x22ba9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_22baa0:
    // 0x22baa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22baa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22baa4:
    // 0x22baa4: 0x0  nop
    ctx->pc = 0x22baa4u;
    // NOP
label_22baa8:
    // 0x22baa8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22baa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22baac:
    // 0x22baac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22bab0:
    // 0x22bab0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x22bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_22bab4:
    // 0x22bab4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22bab8:
    // 0x22bab8: 0x34470004  ori         $a3, $v0, 0x4
    ctx->pc = 0x22bab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_22babc:
    // 0x22babc: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x22babcu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bac0:
    // 0x22bac0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x22bac0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bac4:
    // 0x22bac4: 0x0  nop
    ctx->pc = 0x22bac4u;
    // NOP
label_22bac8:
    // 0x22bac8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22bac8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22bacc:
    // 0x22bacc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22baccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bad0:
    // 0x22bad0: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x22bad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_22bad4:
    // 0x22bad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bad8:
    // 0x22bad8: 0x0  nop
    ctx->pc = 0x22bad8u;
    // NOP
label_22badc:
    // 0x22badc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22badcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bae0:
    // 0x22bae0: 0xc04bc90  jal         func_12F240
label_22bae4:
    if (ctx->pc == 0x22BAE4u) {
        ctx->pc = 0x22BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAE0u;
        // 0x22bae4: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAE8u;
        goto label_22bae8;
    }
    ctx->pc = 0x22BAE0u;
    SET_GPR_U32(ctx, 31, 0x22BAE8u);
    ctx->pc = 0x22BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAE0u;
    // 0x22bae4: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22BAE0u, 0x22BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAE8u;
label_22bae8:
    // 0x22bae8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22baec:
    // 0x22baec: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x22baecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_22baf0:
    // 0x22baf0: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_22baf4:
    if (ctx->pc == 0x22BAF4u) {
        ctx->pc = 0x22BAF8u;
        goto label_22baf8;
    }
    ctx->pc = 0x22BAF0u;
    {
        const bool branch_taken_0x22baf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22baf0) {
            ctx->pc = 0x22B9DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b9dc;
        }
    }
    ctx->pc = 0x22BAF8u;
label_22baf8:
    // 0x22baf8: 0x96440012  lhu         $a0, 0x12($s2)
    ctx->pc = 0x22baf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22bafc:
    // 0x22bafc: 0x92530014  lbu         $s3, 0x14($s2)
    ctx->pc = 0x22bafcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_22bb00:
    // 0x22bb00: 0x2883003c  slti        $v1, $a0, 0x3C
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
label_22bb04:
    // 0x22bb04: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_22bb08:
    if (ctx->pc == 0x22BB08u) {
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB0Cu;
        goto label_22bb0c;
    }
    ctx->pc = 0x22BB04u;
    {
        const bool branch_taken_0x22bb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb04) {
            ctx->pc = 0x22BB38u;
            goto label_22bb38;
        }
    }
    ctx->pc = 0x22BB0Cu;
label_22bb0c:
    // 0x22bb0c: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x22bb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_22bb10:
    // 0x22bb10: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_22bb14:
    if (ctx->pc == 0x22BB14u) {
        ctx->pc = 0x22BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB10u;
        // 0x22bb14: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB18u;
        goto label_22bb18;
    }
    ctx->pc = 0x22BB10u;
    {
        const bool branch_taken_0x22bb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB10u;
        // 0x22bb14: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb10) {
            ctx->pc = 0x22BB38u;
            goto label_22bb38;
        }
    }
    ctx->pc = 0x22BB18u;
label_22bb18:
    // 0x22bb18: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_22bb1c:
    if (ctx->pc == 0x22BB1Cu) {
        ctx->pc = 0x22BB20u;
        goto label_22bb20;
    }
    ctx->pc = 0x22BB18u;
    {
        const bool branch_taken_0x22bb18 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x22bb18) {
            ctx->pc = 0x22BB2Cu;
            goto label_22bb2c;
        }
    }
    ctx->pc = 0x22BB20u;
label_22bb20:
    // 0x22bb20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_22bb24:
    if (ctx->pc == 0x22BB24u) {
        ctx->pc = 0x22BB28u;
        goto label_22bb28;
    }
    ctx->pc = 0x22BB20u;
    {
        const bool branch_taken_0x22bb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb20) {
            ctx->pc = 0x22BB2Cu;
            goto label_22bb2c;
        }
    }
    ctx->pc = 0x22BB28u;
label_22bb28:
    // 0x22bb28: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x22bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_22bb2c:
    // 0x22bb2c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_22bb30:
    if (ctx->pc == 0x22BB30u) {
        ctx->pc = 0x22BB34u;
        goto label_22bb34;
    }
    ctx->pc = 0x22BB2Cu;
    {
        const bool branch_taken_0x22bb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb2c) {
            ctx->pc = 0x22BB38u;
            goto label_22bb38;
        }
    }
    ctx->pc = 0x22BB34u;
label_22bb34:
    // 0x22bb34: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x22bb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22bb38:
    // 0x22bb38: 0x1a000098  blez        $s0, . + 4 + (0x98 << 2)
label_22bb3c:
    if (ctx->pc == 0x22BB3Cu) {
        ctx->pc = 0x22BB40u;
        goto label_22bb40;
    }
    ctx->pc = 0x22BB38u;
    {
        const bool branch_taken_0x22bb38 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x22bb38) {
            ctx->pc = 0x22BD9Cu;
            goto label_22bd9c;
        }
    }
    ctx->pc = 0x22BB40u;
label_22bb40:
    // 0x22bb40: 0x8f9585d0  lw          $s5, -0x7A30($gp)
    ctx->pc = 0x22bb40u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22bb44:
    // 0x22bb44: 0x12a00095  beqz        $s5, . + 4 + (0x95 << 2)
label_22bb48:
    if (ctx->pc == 0x22BB48u) {
        ctx->pc = 0x22BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB44u;
        // 0x22bb48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB4Cu;
        goto label_22bb4c;
    }
    ctx->pc = 0x22BB44u;
    {
        const bool branch_taken_0x22bb44 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB44u;
        // 0x22bb48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb44) {
            ctx->pc = 0x22BD9Cu;
            goto label_22bd9c;
        }
    }
    ctx->pc = 0x22BB4Cu;
label_22bb4c:
    // 0x22bb4c: 0x92a4009d  lbu         $a0, 0x9D($s5)
    ctx->pc = 0x22bb4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 157)));
label_22bb50:
    // 0x22bb50: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x22bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_22bb54:
    // 0x22bb54: 0x1483008e  bne         $a0, $v1, . + 4 + (0x8E << 2)
label_22bb58:
    if (ctx->pc == 0x22BB58u) {
        ctx->pc = 0x22BB5Cu;
        goto label_22bb5c;
    }
    ctx->pc = 0x22BB54u;
    {
        const bool branch_taken_0x22bb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bb54) {
            ctx->pc = 0x22BD90u;
            goto label_22bd90;
        }
    }
    ctx->pc = 0x22BB5Cu;
label_22bb5c:
    // 0x22bb5c: 0x92a40096  lbu         $a0, 0x96($s5)
    ctx->pc = 0x22bb5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 150)));
label_22bb60:
    // 0x22bb60: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x22bb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_22bb64:
    // 0x22bb64: 0x1483008a  bne         $a0, $v1, . + 4 + (0x8A << 2)
label_22bb68:
    if (ctx->pc == 0x22BB68u) {
        ctx->pc = 0x22BB6Cu;
        goto label_22bb6c;
    }
    ctx->pc = 0x22BB64u;
    {
        const bool branch_taken_0x22bb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bb64) {
            ctx->pc = 0x22BD90u;
            goto label_22bd90;
        }
    }
    ctx->pc = 0x22BB6Cu;
label_22bb6c:
    // 0x22bb6c: 0x92a3009c  lbu         $v1, 0x9C($s5)
    ctx->pc = 0x22bb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_22bb70:
    // 0x22bb70: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22bb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_22bb74:
    // 0x22bb74: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
label_22bb78:
    if (ctx->pc == 0x22BB78u) {
        ctx->pc = 0x22BB7Cu;
        goto label_22bb7c;
    }
    ctx->pc = 0x22BB74u;
    {
        const bool branch_taken_0x22bb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb74) {
            ctx->pc = 0x22BD90u;
            goto label_22bd90;
        }
    }
    ctx->pc = 0x22BB7Cu;
label_22bb7c:
    // 0x22bb7c: 0xc08f0cc  jal         func_23C330
label_22bb80:
    if (ctx->pc == 0x22BB80u) {
        ctx->pc = 0x22BB84u;
        goto label_22bb84;
    }
    ctx->pc = 0x22BB7Cu;
    SET_GPR_U32(ctx, 31, 0x22BB84u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BB84u;
label_22bb84:
    // 0x22bb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bb88:
    // 0x22bb88: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22bb8c:
    // 0x22bb8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22bb8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22bb90:
    // 0x22bb90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22bb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22bb94:
    // 0x22bb94: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x22bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_22bb98:
    // 0x22bb98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bb9c:
    // 0x22bb9c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bba0:
    // 0x22bba0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x22bba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bba4:
    // 0x22bba4: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x22bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
label_22bba8:
    // 0x22bba8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x22bba8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_22bbac:
    // 0x22bbac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bbb0:
    // 0x22bbb0: 0x0  nop
    ctx->pc = 0x22bbb0u;
    // NOP
label_22bbb4:
    // 0x22bbb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22bbb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22bbb8:
    // 0x22bbb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bbb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bbbc:
    // 0x22bbbc: 0xc08f0cc  jal         func_23C330
label_22bbc0:
    if (ctx->pc == 0x22BBC0u) {
        ctx->pc = 0x22BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBBCu;
        // 0x22bbc0: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBC4u;
        goto label_22bbc4;
    }
    ctx->pc = 0x22BBBCu;
    SET_GPR_U32(ctx, 31, 0x22BBC4u);
    ctx->pc = 0x22BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBBCu;
    // 0x22bbc0: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BBC4u;
label_22bbc4:
    // 0x22bbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bbc8:
    // 0x22bbc8: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x22bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_22bbcc:
    // 0x22bbcc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22bbd0:
    // 0x22bbd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22bbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22bbd4:
    // 0x22bbd4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_22bbd8:
    // 0x22bbd8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22bbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bbdc:
    // 0x22bbdc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22bbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22bbe0:
    // 0x22bbe0: 0x0  nop
    ctx->pc = 0x22bbe0u;
    // NOP
label_22bbe4:
    // 0x22bbe4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x22bbe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22bbe8:
    // 0x22bbe8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22bbec:
    // 0x22bbec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22bbecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bbf0:
    // 0x22bbf0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x22bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bbf4:
    // 0x22bbf4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22bbf4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22bbf8:
    // 0x22bbf8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x22bbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22bbfc:
    // 0x22bbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22bbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bc00:
    // 0x22bc00: 0x0  nop
    ctx->pc = 0x22bc00u;
    // NOP
label_22bc04:
    // 0x22bc04: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22bc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22bc08:
    // 0x22bc08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bc08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bc0c:
    // 0x22bc0c: 0xc08f0cc  jal         func_23C330
label_22bc10:
    if (ctx->pc == 0x22BC10u) {
        ctx->pc = 0x22BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC0Cu;
        // 0x22bc10: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC14u;
        goto label_22bc14;
    }
    ctx->pc = 0x22BC0Cu;
    SET_GPR_U32(ctx, 31, 0x22BC14u);
    ctx->pc = 0x22BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC0Cu;
    // 0x22bc10: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BC14u;
label_22bc14:
    // 0x22bc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bc18:
    // 0x22bc18: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22bc1c:
    // 0x22bc1c: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x22bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_22bc20:
    // 0x22bc20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22bc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22bc24:
    // 0x22bc24: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_22bc28:
    // 0x22bc28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bc2c:
    // 0x22bc2c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x22bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc30:
    // 0x22bc30: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22bc30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bc34:
    // 0x22bc34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22bc38:
    // 0x22bc38: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22bc38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bc3c:
    // 0x22bc3c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x22bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_22bc40:
    // 0x22bc40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22bc40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bc44:
    // 0x22bc44: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22bc44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22bc48:
    // 0x22bc48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22bc48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22bc4c:
    // 0x22bc4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bc50:
    // 0x22bc50: 0xc08f0cc  jal         func_23C330
label_22bc54:
    if (ctx->pc == 0x22BC54u) {
        ctx->pc = 0x22BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC50u;
        // 0x22bc54: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC58u;
        goto label_22bc58;
    }
    ctx->pc = 0x22BC50u;
    SET_GPR_U32(ctx, 31, 0x22BC58u);
    ctx->pc = 0x22BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC50u;
    // 0x22bc54: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BC58u;
label_22bc58:
    // 0x22bc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bc5c:
    // 0x22bc5c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22bc60:
    // 0x22bc60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22bc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22bc64:
    // 0x22bc64: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_22bc68:
    // 0x22bc68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bc6c:
    // 0x22bc6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc70:
    // 0x22bc70: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22bc70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bc74:
    // 0x22bc74: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x22bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
label_22bc78:
    // 0x22bc78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22bc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bc7c:
    // 0x22bc7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bc80:
    // 0x22bc80: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22bc80u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22bc84:
    // 0x22bc84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22bc84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22bc88:
    // 0x22bc88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bc8c:
    // 0x22bc8c: 0xc08f0cc  jal         func_23C330
label_22bc90:
    if (ctx->pc == 0x22BC90u) {
        ctx->pc = 0x22BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC8Cu;
        // 0x22bc90: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC94u;
        goto label_22bc94;
    }
    ctx->pc = 0x22BC8Cu;
    SET_GPR_U32(ctx, 31, 0x22BC94u);
    ctx->pc = 0x22BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC8Cu;
    // 0x22bc90: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BC94u;
label_22bc94:
    // 0x22bc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bc98:
    // 0x22bc98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22bc9c:
    // 0x22bc9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22bc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22bca0:
    // 0x22bca0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22bca4:
    // 0x22bca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bca8:
    // 0x22bca8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x22bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcac:
    // 0x22bcac: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22bcacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bcb0:
    // 0x22bcb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22bcb4:
    // 0x22bcb4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22bcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bcb8:
    // 0x22bcb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bcbc:
    // 0x22bcbc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22bcbcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22bcc0:
    // 0x22bcc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22bcc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bcc4:
    // 0x22bcc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bcc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bcc8:
    // 0x22bcc8: 0xc08f0cc  jal         func_23C330
label_22bccc:
    if (ctx->pc == 0x22BCCCu) {
        ctx->pc = 0x22BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCC8u;
        // 0x22bccc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCD0u;
        goto label_22bcd0;
    }
    ctx->pc = 0x22BCC8u;
    SET_GPR_U32(ctx, 31, 0x22BCD0u);
    ctx->pc = 0x22BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BCC8u;
    // 0x22bccc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22BCD0u;
label_22bcd0:
    // 0x22bcd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bcd4:
    // 0x22bcd4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x22bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22bcd8:
    // 0x22bcd8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x22bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22bcdc:
    // 0x22bcdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22bcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bce0:
    // 0x22bce0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22bce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22bce4:
    // 0x22bce4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_22bce8:
    // 0x22bce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bcec:
    // 0x22bcec: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x22bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcf0:
    // 0x22bcf0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x22bcf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22bcf4:
    // 0x22bcf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22bcf8:
    // 0x22bcf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bcfc:
    // 0x22bcfc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x22bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_22bd00:
    // 0x22bd00: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22bd00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22bd04:
    // 0x22bd04: 0x0  nop
    ctx->pc = 0x22bd04u;
    // NOP
label_22bd08:
    // 0x22bd08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bd08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bd0c:
    // 0x22bd0c: 0xc066e08  jal         func_19B820
label_22bd10:
    if (ctx->pc == 0x22BD10u) {
        ctx->pc = 0x22BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD0Cu;
        // 0x22bd10: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD14u;
        goto label_22bd14;
    }
    ctx->pc = 0x22BD0Cu;
    SET_GPR_U32(ctx, 31, 0x22BD14u);
    ctx->pc = 0x22BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD0Cu;
    // 0x22bd10: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x22BD0Cu, 0x22BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD14u;
label_22bd14:
    // 0x22bd14: 0x92a2009c  lbu         $v0, 0x9C($s5)
    ctx->pc = 0x22bd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_22bd18:
    // 0x22bd18: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x22bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_22bd1c:
    // 0x22bd1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x22bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_22bd20:
    // 0x22bd20: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_22bd24:
    // 0x22bd24: 0xc066e26  jal         func_19B898
label_22bd28:
    if (ctx->pc == 0x22BD28u) {
        ctx->pc = 0x22BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD24u;
        // 0x22bd28: 0xa2a2009c  sb          $v0, 0x9C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD2Cu;
        goto label_22bd2c;
    }
    ctx->pc = 0x22BD24u;
    SET_GPR_U32(ctx, 31, 0x22BD2Cu);
    ctx->pc = 0x22BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD24u;
    // 0x22bd28: 0xa2a2009c  sb          $v0, 0x9C($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22BD2Cu;
label_22bd2c:
    // 0x22bd2c: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x22bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_22bd30:
    // 0x22bd30: 0xc066e26  jal         func_19B898
label_22bd34:
    if (ctx->pc == 0x22BD34u) {
        ctx->pc = 0x22BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD30u;
        // 0x22bd34: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD38u;
        goto label_22bd38;
    }
    ctx->pc = 0x22BD30u;
    SET_GPR_U32(ctx, 31, 0x22BD38u);
    ctx->pc = 0x22BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD30u;
    // 0x22bd34: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22BD38u;
label_22bd38:
    // 0x22bd38: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x22bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_22bd3c:
    // 0x22bd3c: 0xc066e26  jal         func_19B898
label_22bd40:
    if (ctx->pc == 0x22BD40u) {
        ctx->pc = 0x22BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD3Cu;
        // 0x22bd40: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD44u;
        goto label_22bd44;
    }
    ctx->pc = 0x22BD3Cu;
    SET_GPR_U32(ctx, 31, 0x22BD44u);
    ctx->pc = 0x22BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD3Cu;
    // 0x22bd40: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22BD44u;
label_22bd44:
    // 0x22bd44: 0xc0590dc  jal         func_164370
label_22bd48:
    if (ctx->pc == 0x22BD48u) {
        ctx->pc = 0x22BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD44u;
        // 0x22bd48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD4Cu;
        goto label_22bd4c;
    }
    ctx->pc = 0x22BD44u;
    SET_GPR_U32(ctx, 31, 0x22BD4Cu);
    ctx->pc = 0x22BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD44u;
    // 0x22bd48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22BD44u, 0x22BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD4Cu;
label_22bd4c:
    // 0x22bd4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22bd4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bd50:
    // 0x22bd50: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_22bd54:
    if (ctx->pc == 0x22BD54u) {
        ctx->pc = 0x22BD58u;
        goto label_22bd58;
    }
    ctx->pc = 0x22BD50u;
    {
        const bool branch_taken_0x22bd50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd50) {
            ctx->pc = 0x22BD80u;
            goto label_22bd80;
        }
    }
    ctx->pc = 0x22BD58u;
label_22bd58:
    // 0x22bd58: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_22bd5c:
    // 0x22bd5c: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x22bd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_22bd60:
    // 0x22bd60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22bd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22bd64:
    // 0x22bd64: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x22bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_22bd68:
    // 0x22bd68: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22bd6c:
    // 0x22bd6c: 0xc066e14  jal         func_19B850
label_22bd70:
    if (ctx->pc == 0x22BD70u) {
        ctx->pc = 0x22BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD6Cu;
        // 0x22bd70: 0xae95005c  sw          $s5, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD74u;
        goto label_22bd74;
    }
    ctx->pc = 0x22BD6Cu;
    SET_GPR_U32(ctx, 31, 0x22BD74u);
    ctx->pc = 0x22BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD6Cu;
    // 0x22bd70: 0xae95005c  sw          $s5, 0x5C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x22BD74u;
label_22bd74:
    // 0x22bd74: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22bd78:
    // 0x22bd78: 0x2463bdf0  addiu       $v1, $v1, -0x4210
    ctx->pc = 0x22bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950384));
label_22bd7c:
    // 0x22bd7c: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x22bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_22bd80:
    // 0x22bd80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22bd84:
    // 0x22bd84: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x22bd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22bd88:
    // 0x22bd88: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_22bd8c:
    if (ctx->pc == 0x22BD8Cu) {
        ctx->pc = 0x22BD90u;
        goto label_22bd90;
    }
    ctx->pc = 0x22BD88u;
    {
        const bool branch_taken_0x22bd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd88) {
            ctx->pc = 0x22BD9Cu;
            goto label_22bd9c;
        }
    }
    ctx->pc = 0x22BD90u;
label_22bd90:
    // 0x22bd90: 0x8eb50084  lw          $s5, 0x84($s5)
    ctx->pc = 0x22bd90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_22bd94:
    // 0x22bd94: 0x16a0ff6d  bnez        $s5, . + 4 + (-0x93 << 2)
label_22bd98:
    if (ctx->pc == 0x22BD98u) {
        ctx->pc = 0x22BD9Cu;
        goto label_22bd9c;
    }
    ctx->pc = 0x22BD94u;
    {
        const bool branch_taken_0x22bd94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bd94) {
            ctx->pc = 0x22BB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bb4c;
        }
    }
    ctx->pc = 0x22BD9Cu;
label_22bd9c:
    // 0x22bd9c: 0x0  nop
    ctx->pc = 0x22bd9cu;
    // NOP
label_22bda0:
    // 0x22bda0: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22bda0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22bda4:
    // 0x22bda4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22bda8:
    // 0x22bda8: 0xa6430012  sh          $v1, 0x12($s2)
    ctx->pc = 0x22bda8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
label_22bdac:
    // 0x22bdac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22bdb0:
    // 0x22bdb0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x22bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22bdb4:
    // 0x22bdb4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x22bdb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22bdb8:
    // 0x22bdb8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22bdbc:
    // 0x22bdbc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22bdbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22bdc0:
    // 0x22bdc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22bdc4:
    // 0x22bdc4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22bdc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22bdc8:
    // 0x22bdc8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22bdc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22bdcc:
    // 0x22bdcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22bdccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22bdd0:
    // 0x22bdd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22bdd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22bdd4:
    // 0x22bdd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22bdd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22bdd8:
    // 0x22bdd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22bdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22bddc:
    // 0x22bddc: 0x3e00008  jr          $ra
label_22bde0:
    if (ctx->pc == 0x22BDE0u) {
        ctx->pc = 0x22BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDDCu;
        // 0x22bde0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDE4u;
        goto label_22bde4;
    }
    ctx->pc = 0x22BDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDDCu;
        // 0x22bde0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BDE4u;
label_22bde4:
    // 0x22bde4: 0x0  nop
    ctx->pc = 0x22bde4u;
    // NOP
label_22bde8:
    // 0x22bde8: 0x0  nop
    ctx->pc = 0x22bde8u;
    // NOP
label_22bdec:
    // 0x22bdec: 0x0  nop
    ctx->pc = 0x22bdecu;
    // NOP
label_22bdf0:
    // 0x22bdf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22bdf4:
    // 0x22bdf4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22bdf8:
    // 0x22bdf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22bdfc:
    // 0x22bdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22be00:
    // 0x22be00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22be04:
    // 0x22be04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22be08:
    // 0x22be08: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22be08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22be0c:
    // 0x22be0c: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x22be0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22be10:
    // 0x22be10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22be14:
    if (ctx->pc == 0x22BE14u) {
        ctx->pc = 0x22BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE10u;
        // 0x22be14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE18u;
        goto label_22be18;
    }
    ctx->pc = 0x22BE10u;
    {
        const bool branch_taken_0x22be10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE10u;
        // 0x22be14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be10) {
            ctx->pc = 0x22BE20u;
            goto label_22be20;
        }
    }
    ctx->pc = 0x22BE18u;
label_22be18:
    // 0x22be18: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22be1c:
    if (ctx->pc == 0x22BE1Cu) {
        ctx->pc = 0x22BE20u;
        goto label_22be20;
    }
    ctx->pc = 0x22BE18u;
    {
        const bool branch_taken_0x22be18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be18) {
            ctx->pc = 0x22BE3Cu;
            goto label_22be3c;
        }
    }
    ctx->pc = 0x22BE20u;
label_22be20:
    // 0x22be20: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22be24:
    // 0x22be24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22be28:
    // 0x22be28: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_22be2c:
    // 0x22be2c: 0xc0591f4  jal         func_1647D0
label_22be30:
    if (ctx->pc == 0x22BE30u) {
        ctx->pc = 0x22BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE2Cu;
        // 0x22be30: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE34u;
        goto label_22be34;
    }
    ctx->pc = 0x22BE2Cu;
    SET_GPR_U32(ctx, 31, 0x22BE34u);
    ctx->pc = 0x22BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE2Cu;
    // 0x22be30: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22BE2Cu, 0x22BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE34u;
label_22be34:
    // 0x22be34: 0x10000094  b           . + 4 + (0x94 << 2)
label_22be38:
    if (ctx->pc == 0x22BE38u) {
        ctx->pc = 0x22BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE34u;
        // 0x22be38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE3Cu;
        goto label_22be3c;
    }
    ctx->pc = 0x22BE34u;
    {
        const bool branch_taken_0x22be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE34u;
        // 0x22be38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be34) {
            ctx->pc = 0x22C088u;
            goto label_22c088;
        }
    }
    ctx->pc = 0x22BE3Cu;
label_22be3c:
    // 0x22be3c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x22be3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_22be40:
    // 0x22be40: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22be40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_22be44:
    // 0x22be44: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
label_22be48:
    if (ctx->pc == 0x22BE48u) {
        ctx->pc = 0x22BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE44u;
        // 0x22be48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE4Cu;
        goto label_22be4c;
    }
    ctx->pc = 0x22BE44u;
    {
        const bool branch_taken_0x22be44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE44u;
        // 0x22be48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be44) {
            ctx->pc = 0x22C07Cu;
            goto label_22c07c;
        }
    }
    ctx->pc = 0x22BE4Cu;
label_22be4c:
    // 0x22be4c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22be50:
    // 0x22be50: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22be54:
    // 0x22be54: 0xc066e02  jal         func_19B808
label_22be58:
    if (ctx->pc == 0x22BE58u) {
        ctx->pc = 0x22BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE54u;
        // 0x22be58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE5Cu;
        goto label_22be5c;
    }
    ctx->pc = 0x22BE54u;
    SET_GPR_U32(ctx, 31, 0x22BE5Cu);
    ctx->pc = 0x22BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE54u;
    // 0x22be58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE54u, 0x22BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE5Cu;
label_22be5c:
    // 0x22be5c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_22be60:
    // 0x22be60: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22be64:
    // 0x22be64: 0xc066e02  jal         func_19B808
label_22be68:
    if (ctx->pc == 0x22BE68u) {
        ctx->pc = 0x22BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE64u;
        // 0x22be68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE6Cu;
        goto label_22be6c;
    }
    ctx->pc = 0x22BE64u;
    SET_GPR_U32(ctx, 31, 0x22BE6Cu);
    ctx->pc = 0x22BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE64u;
    // 0x22be68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE64u, 0x22BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE6Cu;
label_22be6c:
    // 0x22be6c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22be70:
    // 0x22be70: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22be74:
    // 0x22be74: 0xc066e02  jal         func_19B808
label_22be78:
    if (ctx->pc == 0x22BE78u) {
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE7Cu;
        goto label_22be7c;
    }
    ctx->pc = 0x22BE74u;
    SET_GPR_U32(ctx, 31, 0x22BE7Cu);
    ctx->pc = 0x22BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE74u;
    // 0x22be78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE74u, 0x22BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE7Cu;
label_22be7c:
    // 0x22be7c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x22be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22be80:
    // 0x22be80: 0x3c023f4d  lui         $v0, 0x3F4D
    ctx->pc = 0x22be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16205 << 16));
label_22be84:
    // 0x22be84: 0x3442a4a8  ori         $v0, $v0, 0xA4A8
    ctx->pc = 0x22be84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42152);
label_22be88:
    // 0x22be88: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22be8c:
    // 0x22be8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22be8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22be90:
    // 0x22be90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22be94:
    // 0x22be94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22be94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22be98:
    // 0x22be98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22be9c:
    // 0x22be9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22be9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22bea0:
    // 0x22bea0: 0xc05f3d0  jal         func_17CF40
label_22bea4:
    if (ctx->pc == 0x22BEA4u) {
        ctx->pc = 0x22BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEA0u;
        // 0x22bea4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEA8u;
        goto label_22bea8;
    }
    ctx->pc = 0x22BEA0u;
    SET_GPR_U32(ctx, 31, 0x22BEA8u);
    ctx->pc = 0x22BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEA0u;
    // 0x22bea4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x22BEA0u, 0x22BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEA8u;
label_22bea8:
    // 0x22bea8: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x22bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22beac:
    // 0x22beac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_22beb0:
    // 0x22beb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22beb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22beb4:
    // 0x22beb4: 0x0  nop
    ctx->pc = 0x22beb4u;
    // NOP
label_22beb8:
    // 0x22beb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22beb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22bebc:
    // 0x22bebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bec0:
    // 0x22bec0: 0x0  nop
    ctx->pc = 0x22bec0u;
    // NOP
label_22bec4:
    // 0x22bec4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_22bec8:
    if (ctx->pc == 0x22BEC8u) {
        ctx->pc = 0x22BECCu;
        goto label_22becc;
    }
    ctx->pc = 0x22BEC4u;
    {
        const bool branch_taken_0x22bec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bec4) {
            ctx->pc = 0x22BF18u;
            goto label_22bf18;
        }
    }
    ctx->pc = 0x22BECCu;
label_22becc:
    // 0x22becc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x22beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bed0:
    // 0x22bed0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_22bed4:
    // 0x22bed4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x22bed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22bed8:
    // 0x22bed8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22bed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bedc:
    // 0x22bedc: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x22bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_22bee0:
    // 0x22bee0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22bee4:
    // 0x22bee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bee8:
    // 0x22bee8: 0x0  nop
    ctx->pc = 0x22bee8u;
    // NOP
label_22beec:
    // 0x22beec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22beecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22bef0:
    // 0x22bef0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x22bef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_22bef4:
    // 0x22bef4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x22bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bef8:
    // 0x22bef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22befc:
    // 0x22befc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x22befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_22bf00:
    // 0x22bf00: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf04:
    // 0x22bf04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22bf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22bf08:
    // 0x22bf08: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_22bf0c:
    // 0x22bf0c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x22bf0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_22bf10:
    // 0x22bf10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22bf14:
    // 0x22bf14: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x22bf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_22bf18:
    // 0x22bf18: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf1c:
    // 0x22bf1c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_22bf20:
    // 0x22bf20: 0x3443b8c3  ori         $v1, $v0, 0xB8C3
    ctx->pc = 0x22bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22bf24:
    // 0x22bf24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22bf24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bf28:
    // 0x22bf28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22bf2c:
    // 0x22bf2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf30:
    // 0x22bf30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22bf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22bf34:
    // 0x22bf34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22bf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22bf38:
    // 0x22bf38: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22bf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bf3c:
    // 0x22bf3c: 0x0  nop
    ctx->pc = 0x22bf3cu;
    // NOP
label_22bf40:
    // 0x22bf40: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22bf44:
    if (ctx->pc == 0x22BF44u) {
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF48u;
        goto label_22bf48;
    }
    ctx->pc = 0x22BF40u;
    {
        const bool branch_taken_0x22bf40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf40) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF48u;
label_22bf48:
    // 0x22bf48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22bf4c:
    // 0x22bf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf50:
    // 0x22bf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf54:
    // 0x22bf54: 0x1000000d  b           . + 4 + (0xD << 2)
label_22bf58:
    if (ctx->pc == 0x22BF58u) {
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF5Cu;
        goto label_22bf5c;
    }
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF5Cu;
label_22bf5c:
    // 0x22bf5c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22bf60:
    // 0x22bf60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf64:
    // 0x22bf64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf68:
    // 0x22bf68: 0x0  nop
    ctx->pc = 0x22bf68u;
    // NOP
label_22bf6c:
    // 0x22bf6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bf70:
    // 0x22bf70: 0x0  nop
    ctx->pc = 0x22bf70u;
    // NOP
label_22bf74:
    // 0x22bf74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22bf78:
    if (ctx->pc == 0x22BF78u) {
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF7Cu;
        goto label_22bf7c;
    }
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF7Cu;
label_22bf7c:
    // 0x22bf7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bf80:
    // 0x22bf80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf84:
    // 0x22bf84: 0x10000001  b           . + 4 + (0x1 << 2)
label_22bf88:
    if (ctx->pc == 0x22BF88u) {
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF8Cu;
        goto label_22bf8c;
    }
    ctx->pc = 0x22BF84u;
    {
        const bool branch_taken_0x22bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf84) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x22bf8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_22bf90:
    // 0x22bf90: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_22bf94:
    // 0x22bf94: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x22bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22bf98:
    // 0x22bf98: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22bf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22bf9c:
    // 0x22bf9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bfa0:
    // 0x22bfa0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22bfa4:
    // 0x22bfa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfa8:
    // 0x22bfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfac:
    // 0x22bfac: 0x0  nop
    ctx->pc = 0x22bfacu;
    // NOP
label_22bfb0:
    // 0x22bfb0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22bfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22bfb4:
    // 0x22bfb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bfb8:
    // 0x22bfb8: 0x0  nop
    ctx->pc = 0x22bfb8u;
    // NOP
label_22bfbc:
    // 0x22bfbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22bfc0:
    if (ctx->pc == 0x22BFC0u) {
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFC4u;
        goto label_22bfc4;
    }
    ctx->pc = 0x22BFBCu;
    {
        const bool branch_taken_0x22bfbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfbc) {
            ctx->pc = 0x22BFD8u;
            goto label_22bfd8;
        }
    }
    ctx->pc = 0x22BFC4u;
label_22bfc4:
    // 0x22bfc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22bfc8:
    // 0x22bfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfcc:
    // 0x22bfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfd0:
    // 0x22bfd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_22bfd4:
    if (ctx->pc == 0x22BFD4u) {
        ctx->pc = 0x22BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD0u;
        // 0x22bfd4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFD8u;
        goto label_22bfd8;
    }
    ctx->pc = 0x22BFD0u;
    {
        const bool branch_taken_0x22bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD0u;
        // 0x22bfd4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfd0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFD8u;
label_22bfd8:
    // 0x22bfd8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22bfdc:
    // 0x22bfdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bfe0:
    // 0x22bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfe4:
    // 0x22bfe4: 0x0  nop
    ctx->pc = 0x22bfe4u;
    // NOP
label_22bfe8:
    // 0x22bfe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bfec:
    // 0x22bfec: 0x0  nop
    ctx->pc = 0x22bfecu;
    // NOP
label_22bff0:
    // 0x22bff0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22bff4:
    if (ctx->pc == 0x22BFF4u) {
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFF8u;
        goto label_22bff8;
    }
    ctx->pc = 0x22BFF0u;
    {
        const bool branch_taken_0x22bff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFF8u;
label_22bff8:
    // 0x22bff8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22bffc:
    // 0x22bffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c000:
    // 0x22c000: 0x10000001  b           . + 4 + (0x1 << 2)
label_22c004:
    if (ctx->pc == 0x22C004u) {
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C000u;
        // 0x22c004: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C008u;
        goto label_22c008;
    }
    ctx->pc = 0x22C000u;
    {
        const bool branch_taken_0x22c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C000u;
        // 0x22c004: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c000) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22C008u;
label_22c008:
    // 0x22c008: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x22c008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_22c00c:
    // 0x22c00c: 0xc066e44  jal         func_19B910
label_22c010:
    if (ctx->pc == 0x22C010u) {
        ctx->pc = 0x22C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C00Cu;
        // 0x22c010: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C014u;
        goto label_22c014;
    }
    ctx->pc = 0x22C00Cu;
    SET_GPR_U32(ctx, 31, 0x22C014u);
    ctx->pc = 0x22C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C00Cu;
    // 0x22c010: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22C014u;
label_22c014:
    // 0x22c014: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_22c018:
    // 0x22c018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c01c:
    // 0x22c01c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22c020:
    // 0x22c020: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c024:
    // 0x22c024: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x22c024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_22c028:
    // 0x22c028: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22c02c:
    // 0x22c02c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x22c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_22c030:
    // 0x22c030: 0xc064f38  jal         func_193CE0
label_22c034:
    if (ctx->pc == 0x22C034u) {
        ctx->pc = 0x22C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C030u;
        // 0x22c034: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C038u;
        goto label_22c038;
    }
    ctx->pc = 0x22C030u;
    SET_GPR_U32(ctx, 31, 0x22C038u);
    ctx->pc = 0x22C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C030u;
    // 0x22c034: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x22C030u, 0x22C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C038u;
label_22c038:
    // 0x22c038: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c03c:
    // 0x22c03c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c040:
    // 0x22c040: 0xc066e96  jal         func_19BA58
label_22c044:
    if (ctx->pc == 0x22C044u) {
        ctx->pc = 0x22C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C040u;
        // 0x22c044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C048u;
        goto label_22c048;
    }
    ctx->pc = 0x22C040u;
    SET_GPR_U32(ctx, 31, 0x22C048u);
    ctx->pc = 0x22C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C040u;
    // 0x22c044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22c048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c04c:
    // 0x22c04c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c050:
    // 0x22c050: 0xc066e6c  jal         func_19B9B0
label_22c054:
    if (ctx->pc == 0x22C054u) {
        ctx->pc = 0x22C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C050u;
        // 0x22c054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C058u;
        goto label_22c058;
    }
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c05c:
    // 0x22c05c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c060:
    // 0x22c060: 0xc066ec0  jal         func_19BB00
label_22c064:
    if (ctx->pc == 0x22C064u) {
        ctx->pc = 0x22C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C060u;
        // 0x22c064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C068u;
        goto label_22c068;
    }
    ctx->pc = 0x22C060u;
    SET_GPR_U32(ctx, 31, 0x22C068u);
    ctx->pc = 0x22C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C060u;
    // 0x22c064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c06c:
    // 0x22c06c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c070:
    // 0x22c070: 0xc066e1a  jal         func_19B868
label_22c074:
    if (ctx->pc == 0x22C074u) {
        ctx->pc = 0x22C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C070u;
        // 0x22c074: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C078u;
        goto label_22c078;
    }
    ctx->pc = 0x22C070u;
    SET_GPR_U32(ctx, 31, 0x22C078u);
    ctx->pc = 0x22C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C070u;
    // 0x22c074: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22C078u;
label_22c078:
    // 0x22c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c07c:
    // 0x22c07c: 0xc05ff64  jal         func_17FD90
label_22c080:
    if (ctx->pc == 0x22C080u) {
        ctx->pc = 0x22C084u;
        goto label_22c084;
    }
    ctx->pc = 0x22C07Cu;
    SET_GPR_U32(ctx, 31, 0x22C084u);
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22C07Cu, 0x22C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C084u;
label_22c084:
    // 0x22c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22c088:
    // 0x22c088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c08c:
    // 0x22c08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c090:
    // 0x22c090: 0x3e00008  jr          $ra
label_22c094:
    if (ctx->pc == 0x22C094u) {
        ctx->pc = 0x22C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C090u;
        // 0x22c094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C098u;
        goto label_22c098;
    }
    ctx->pc = 0x22C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C090u;
        // 0x22c094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C098u;
label_22c098:
    // 0x22c098: 0x0  nop
    ctx->pc = 0x22c098u;
    // NOP
label_22c09c:
    // 0x22c09c: 0x0  nop
    ctx->pc = 0x22c09cu;
    // NOP
label_22c0a0:
    // 0x22c0a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22c0a4:
    // 0x22c0a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22c0a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c0a8:
    // 0x22c0a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22c0ac:
    // 0x22c0ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c0b0:
    // 0x22c0b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c0b4:
    // 0x22c0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c0b8:
    // 0x22c0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c0bc:
    // 0x22c0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c0c0:
    // 0x22c0c0: 0x8f8c85d0  lw          $t4, -0x7A30($gp)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22c0c4:
    // 0x22c0c4: 0x1180001d  beqz        $t4, . + 4 + (0x1D << 2)
label_22c0c8:
    if (ctx->pc == 0x22C0C8u) {
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0CCu;
        goto label_22c0cc;
    }
    ctx->pc = 0x22C0C4u;
    {
        const bool branch_taken_0x22c0c4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0c4) {
            ctx->pc = 0x22C13Cu;
            { ctx->pc = 0x22c13c; return; }
        }
    }
    ctx->pc = 0x22C0CCu;
label_22c0cc:
    // 0x22c0cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x22c0ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22c0d0u;
    return;
}

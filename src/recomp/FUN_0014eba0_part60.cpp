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


void FUN_0014eba0_part60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16b890u: goto label_16b890;
        case 0x16b894u: goto label_16b894;
        case 0x16b898u: goto label_16b898;
        case 0x16b89cu: goto label_16b89c;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8a4u: goto label_16b8a4;
        case 0x16b8a8u: goto label_16b8a8;
        case 0x16b8acu: goto label_16b8ac;
        case 0x16b8b0u: goto label_16b8b0;
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8b8u: goto label_16b8b8;
        case 0x16b8bcu: goto label_16b8bc;
        case 0x16b8c0u: goto label_16b8c0;
        case 0x16b8c4u: goto label_16b8c4;
        case 0x16b8c8u: goto label_16b8c8;
        case 0x16b8ccu: goto label_16b8cc;
        case 0x16b8d0u: goto label_16b8d0;
        case 0x16b8d4u: goto label_16b8d4;
        case 0x16b8d8u: goto label_16b8d8;
        case 0x16b8dcu: goto label_16b8dc;
        case 0x16b8e0u: goto label_16b8e0;
        case 0x16b8e4u: goto label_16b8e4;
        case 0x16b8e8u: goto label_16b8e8;
        case 0x16b8ecu: goto label_16b8ec;
        case 0x16b8f0u: goto label_16b8f0;
        case 0x16b8f4u: goto label_16b8f4;
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b8fcu: goto label_16b8fc;
        case 0x16b900u: goto label_16b900;
        case 0x16b904u: goto label_16b904;
        case 0x16b908u: goto label_16b908;
        case 0x16b90cu: goto label_16b90c;
        case 0x16b910u: goto label_16b910;
        case 0x16b914u: goto label_16b914;
        case 0x16b918u: goto label_16b918;
        case 0x16b91cu: goto label_16b91c;
        case 0x16b920u: goto label_16b920;
        case 0x16b924u: goto label_16b924;
        case 0x16b928u: goto label_16b928;
        case 0x16b92cu: goto label_16b92c;
        case 0x16b930u: goto label_16b930;
        case 0x16b934u: goto label_16b934;
        case 0x16b938u: goto label_16b938;
        case 0x16b93cu: goto label_16b93c;
        case 0x16b940u: goto label_16b940;
        case 0x16b944u: goto label_16b944;
        case 0x16b948u: goto label_16b948;
        case 0x16b94cu: goto label_16b94c;
        case 0x16b950u: goto label_16b950;
        case 0x16b954u: goto label_16b954;
        case 0x16b958u: goto label_16b958;
        case 0x16b95cu: goto label_16b95c;
        case 0x16b960u: goto label_16b960;
        case 0x16b964u: goto label_16b964;
        case 0x16b968u: goto label_16b968;
        case 0x16b96cu: goto label_16b96c;
        case 0x16b970u: goto label_16b970;
        case 0x16b974u: goto label_16b974;
        case 0x16b978u: goto label_16b978;
        case 0x16b97cu: goto label_16b97c;
        case 0x16b980u: goto label_16b980;
        case 0x16b984u: goto label_16b984;
        case 0x16b988u: goto label_16b988;
        case 0x16b98cu: goto label_16b98c;
        case 0x16b990u: goto label_16b990;
        case 0x16b994u: goto label_16b994;
        case 0x16b998u: goto label_16b998;
        case 0x16b99cu: goto label_16b99c;
        case 0x16b9a0u: goto label_16b9a0;
        case 0x16b9a4u: goto label_16b9a4;
        case 0x16b9a8u: goto label_16b9a8;
        case 0x16b9acu: goto label_16b9ac;
        case 0x16b9b0u: goto label_16b9b0;
        case 0x16b9b4u: goto label_16b9b4;
        case 0x16b9b8u: goto label_16b9b8;
        case 0x16b9bcu: goto label_16b9bc;
        case 0x16b9c0u: goto label_16b9c0;
        case 0x16b9c4u: goto label_16b9c4;
        case 0x16b9c8u: goto label_16b9c8;
        case 0x16b9ccu: goto label_16b9cc;
        case 0x16b9d0u: goto label_16b9d0;
        case 0x16b9d4u: goto label_16b9d4;
        case 0x16b9d8u: goto label_16b9d8;
        case 0x16b9dcu: goto label_16b9dc;
        case 0x16b9e0u: goto label_16b9e0;
        case 0x16b9e4u: goto label_16b9e4;
        case 0x16b9e8u: goto label_16b9e8;
        case 0x16b9ecu: goto label_16b9ec;
        case 0x16b9f0u: goto label_16b9f0;
        case 0x16b9f4u: goto label_16b9f4;
        case 0x16b9f8u: goto label_16b9f8;
        case 0x16b9fcu: goto label_16b9fc;
        case 0x16ba00u: goto label_16ba00;
        case 0x16ba04u: goto label_16ba04;
        case 0x16ba08u: goto label_16ba08;
        case 0x16ba0cu: goto label_16ba0c;
        case 0x16ba10u: goto label_16ba10;
        case 0x16ba14u: goto label_16ba14;
        case 0x16ba18u: goto label_16ba18;
        case 0x16ba1cu: goto label_16ba1c;
        case 0x16ba20u: goto label_16ba20;
        case 0x16ba24u: goto label_16ba24;
        case 0x16ba28u: goto label_16ba28;
        case 0x16ba2cu: goto label_16ba2c;
        case 0x16ba30u: goto label_16ba30;
        case 0x16ba34u: goto label_16ba34;
        case 0x16ba38u: goto label_16ba38;
        case 0x16ba3cu: goto label_16ba3c;
        case 0x16ba40u: goto label_16ba40;
        case 0x16ba44u: goto label_16ba44;
        case 0x16ba48u: goto label_16ba48;
        case 0x16ba4cu: goto label_16ba4c;
        case 0x16ba50u: goto label_16ba50;
        case 0x16ba54u: goto label_16ba54;
        case 0x16ba58u: goto label_16ba58;
        case 0x16ba5cu: goto label_16ba5c;
        case 0x16ba60u: goto label_16ba60;
        case 0x16ba64u: goto label_16ba64;
        case 0x16ba68u: goto label_16ba68;
        case 0x16ba6cu: goto label_16ba6c;
        case 0x16ba70u: goto label_16ba70;
        case 0x16ba74u: goto label_16ba74;
        case 0x16ba78u: goto label_16ba78;
        case 0x16ba7cu: goto label_16ba7c;
        case 0x16ba80u: goto label_16ba80;
        case 0x16ba84u: goto label_16ba84;
        case 0x16ba88u: goto label_16ba88;
        case 0x16ba8cu: goto label_16ba8c;
        case 0x16ba90u: goto label_16ba90;
        case 0x16ba94u: goto label_16ba94;
        case 0x16ba98u: goto label_16ba98;
        case 0x16ba9cu: goto label_16ba9c;
        case 0x16baa0u: goto label_16baa0;
        case 0x16baa4u: goto label_16baa4;
        case 0x16baa8u: goto label_16baa8;
        case 0x16baacu: goto label_16baac;
        case 0x16bab0u: goto label_16bab0;
        case 0x16bab4u: goto label_16bab4;
        case 0x16bab8u: goto label_16bab8;
        case 0x16babcu: goto label_16babc;
        case 0x16bac0u: goto label_16bac0;
        case 0x16bac4u: goto label_16bac4;
        case 0x16bac8u: goto label_16bac8;
        case 0x16baccu: goto label_16bacc;
        case 0x16bad0u: goto label_16bad0;
        case 0x16bad4u: goto label_16bad4;
        case 0x16bad8u: goto label_16bad8;
        case 0x16badcu: goto label_16badc;
        case 0x16bae0u: goto label_16bae0;
        case 0x16bae4u: goto label_16bae4;
        case 0x16bae8u: goto label_16bae8;
        case 0x16baecu: goto label_16baec;
        case 0x16baf0u: goto label_16baf0;
        case 0x16baf4u: goto label_16baf4;
        case 0x16baf8u: goto label_16baf8;
        case 0x16bafcu: goto label_16bafc;
        case 0x16bb00u: goto label_16bb00;
        case 0x16bb04u: goto label_16bb04;
        case 0x16bb08u: goto label_16bb08;
        case 0x16bb0cu: goto label_16bb0c;
        case 0x16bb10u: goto label_16bb10;
        case 0x16bb14u: goto label_16bb14;
        case 0x16bb18u: goto label_16bb18;
        case 0x16bb1cu: goto label_16bb1c;
        case 0x16bb20u: goto label_16bb20;
        case 0x16bb24u: goto label_16bb24;
        case 0x16bb28u: goto label_16bb28;
        case 0x16bb2cu: goto label_16bb2c;
        case 0x16bb30u: goto label_16bb30;
        case 0x16bb34u: goto label_16bb34;
        case 0x16bb38u: goto label_16bb38;
        case 0x16bb3cu: goto label_16bb3c;
        case 0x16bb40u: goto label_16bb40;
        case 0x16bb44u: goto label_16bb44;
        case 0x16bb48u: goto label_16bb48;
        case 0x16bb4cu: goto label_16bb4c;
        case 0x16bb50u: goto label_16bb50;
        case 0x16bb54u: goto label_16bb54;
        case 0x16bb58u: goto label_16bb58;
        case 0x16bb5cu: goto label_16bb5c;
        case 0x16bb60u: goto label_16bb60;
        case 0x16bb64u: goto label_16bb64;
        case 0x16bb68u: goto label_16bb68;
        case 0x16bb6cu: goto label_16bb6c;
        case 0x16bb70u: goto label_16bb70;
        case 0x16bb74u: goto label_16bb74;
        case 0x16bb78u: goto label_16bb78;
        case 0x16bb7cu: goto label_16bb7c;
        case 0x16bb80u: goto label_16bb80;
        case 0x16bb84u: goto label_16bb84;
        case 0x16bb88u: goto label_16bb88;
        case 0x16bb8cu: goto label_16bb8c;
        case 0x16bb90u: goto label_16bb90;
        case 0x16bb94u: goto label_16bb94;
        case 0x16bb98u: goto label_16bb98;
        case 0x16bb9cu: goto label_16bb9c;
        case 0x16bba0u: goto label_16bba0;
        case 0x16bba4u: goto label_16bba4;
        case 0x16bba8u: goto label_16bba8;
        case 0x16bbacu: goto label_16bbac;
        case 0x16bbb0u: goto label_16bbb0;
        case 0x16bbb4u: goto label_16bbb4;
        case 0x16bbb8u: goto label_16bbb8;
        case 0x16bbbcu: goto label_16bbbc;
        case 0x16bbc0u: goto label_16bbc0;
        case 0x16bbc4u: goto label_16bbc4;
        case 0x16bbc8u: goto label_16bbc8;
        case 0x16bbccu: goto label_16bbcc;
        case 0x16bbd0u: goto label_16bbd0;
        case 0x16bbd4u: goto label_16bbd4;
        case 0x16bbd8u: goto label_16bbd8;
        case 0x16bbdcu: goto label_16bbdc;
        case 0x16bbe0u: goto label_16bbe0;
        case 0x16bbe4u: goto label_16bbe4;
        case 0x16bbe8u: goto label_16bbe8;
        case 0x16bbecu: goto label_16bbec;
        case 0x16bbf0u: goto label_16bbf0;
        case 0x16bbf4u: goto label_16bbf4;
        case 0x16bbf8u: goto label_16bbf8;
        case 0x16bbfcu: goto label_16bbfc;
        case 0x16bc00u: goto label_16bc00;
        case 0x16bc04u: goto label_16bc04;
        case 0x16bc08u: goto label_16bc08;
        case 0x16bc0cu: goto label_16bc0c;
        case 0x16bc10u: goto label_16bc10;
        case 0x16bc14u: goto label_16bc14;
        case 0x16bc18u: goto label_16bc18;
        case 0x16bc1cu: goto label_16bc1c;
        case 0x16bc20u: goto label_16bc20;
        case 0x16bc24u: goto label_16bc24;
        case 0x16bc28u: goto label_16bc28;
        case 0x16bc2cu: goto label_16bc2c;
        case 0x16bc30u: goto label_16bc30;
        case 0x16bc34u: goto label_16bc34;
        case 0x16bc38u: goto label_16bc38;
        case 0x16bc3cu: goto label_16bc3c;
        case 0x16bc40u: goto label_16bc40;
        case 0x16bc44u: goto label_16bc44;
        case 0x16bc48u: goto label_16bc48;
        case 0x16bc4cu: goto label_16bc4c;
        case 0x16bc50u: goto label_16bc50;
        case 0x16bc54u: goto label_16bc54;
        case 0x16bc58u: goto label_16bc58;
        case 0x16bc5cu: goto label_16bc5c;
        case 0x16bc60u: goto label_16bc60;
        case 0x16bc64u: goto label_16bc64;
        case 0x16bc68u: goto label_16bc68;
        case 0x16bc6cu: goto label_16bc6c;
        case 0x16bc70u: goto label_16bc70;
        case 0x16bc74u: goto label_16bc74;
        case 0x16bc78u: goto label_16bc78;
        case 0x16bc7cu: goto label_16bc7c;
        case 0x16bc80u: goto label_16bc80;
        case 0x16bc84u: goto label_16bc84;
        case 0x16bc88u: goto label_16bc88;
        case 0x16bc8cu: goto label_16bc8c;
        case 0x16bc90u: goto label_16bc90;
        case 0x16bc94u: goto label_16bc94;
        case 0x16bc98u: goto label_16bc98;
        case 0x16bc9cu: goto label_16bc9c;
        case 0x16bca0u: goto label_16bca0;
        case 0x16bca4u: goto label_16bca4;
        case 0x16bca8u: goto label_16bca8;
        case 0x16bcacu: goto label_16bcac;
        case 0x16bcb0u: goto label_16bcb0;
        case 0x16bcb4u: goto label_16bcb4;
        case 0x16bcb8u: goto label_16bcb8;
        case 0x16bcbcu: goto label_16bcbc;
        case 0x16bcc0u: goto label_16bcc0;
        case 0x16bcc4u: goto label_16bcc4;
        case 0x16bcc8u: goto label_16bcc8;
        case 0x16bcccu: goto label_16bccc;
        case 0x16bcd0u: goto label_16bcd0;
        case 0x16bcd4u: goto label_16bcd4;
        case 0x16bcd8u: goto label_16bcd8;
        case 0x16bcdcu: goto label_16bcdc;
        case 0x16bce0u: goto label_16bce0;
        case 0x16bce4u: goto label_16bce4;
        case 0x16bce8u: goto label_16bce8;
        case 0x16bcecu: goto label_16bcec;
        case 0x16bcf0u: goto label_16bcf0;
        case 0x16bcf4u: goto label_16bcf4;
        case 0x16bcf8u: goto label_16bcf8;
        case 0x16bcfcu: goto label_16bcfc;
        case 0x16bd00u: goto label_16bd00;
        case 0x16bd04u: goto label_16bd04;
        case 0x16bd08u: goto label_16bd08;
        case 0x16bd0cu: goto label_16bd0c;
        case 0x16bd10u: goto label_16bd10;
        case 0x16bd14u: goto label_16bd14;
        case 0x16bd18u: goto label_16bd18;
        case 0x16bd1cu: goto label_16bd1c;
        case 0x16bd20u: goto label_16bd20;
        case 0x16bd24u: goto label_16bd24;
        case 0x16bd28u: goto label_16bd28;
        case 0x16bd2cu: goto label_16bd2c;
        case 0x16bd30u: goto label_16bd30;
        case 0x16bd34u: goto label_16bd34;
        case 0x16bd38u: goto label_16bd38;
        case 0x16bd3cu: goto label_16bd3c;
        case 0x16bd40u: goto label_16bd40;
        case 0x16bd44u: goto label_16bd44;
        case 0x16bd48u: goto label_16bd48;
        case 0x16bd4cu: goto label_16bd4c;
        case 0x16bd50u: goto label_16bd50;
        case 0x16bd54u: goto label_16bd54;
        case 0x16bd58u: goto label_16bd58;
        case 0x16bd5cu: goto label_16bd5c;
        case 0x16bd60u: goto label_16bd60;
        case 0x16bd64u: goto label_16bd64;
        case 0x16bd68u: goto label_16bd68;
        case 0x16bd6cu: goto label_16bd6c;
        case 0x16bd70u: goto label_16bd70;
        case 0x16bd74u: goto label_16bd74;
        case 0x16bd78u: goto label_16bd78;
        case 0x16bd7cu: goto label_16bd7c;
        case 0x16bd80u: goto label_16bd80;
        case 0x16bd84u: goto label_16bd84;
        case 0x16bd88u: goto label_16bd88;
        case 0x16bd8cu: goto label_16bd8c;
        case 0x16bd90u: goto label_16bd90;
        case 0x16bd94u: goto label_16bd94;
        case 0x16bd98u: goto label_16bd98;
        case 0x16bd9cu: goto label_16bd9c;
        case 0x16bda0u: goto label_16bda0;
        case 0x16bda4u: goto label_16bda4;
        case 0x16bda8u: goto label_16bda8;
        case 0x16bdacu: goto label_16bdac;
        case 0x16bdb0u: goto label_16bdb0;
        case 0x16bdb4u: goto label_16bdb4;
        case 0x16bdb8u: goto label_16bdb8;
        case 0x16bdbcu: goto label_16bdbc;
        case 0x16bdc0u: goto label_16bdc0;
        case 0x16bdc4u: goto label_16bdc4;
        case 0x16bdc8u: goto label_16bdc8;
        case 0x16bdccu: goto label_16bdcc;
        case 0x16bdd0u: goto label_16bdd0;
        case 0x16bdd4u: goto label_16bdd4;
        case 0x16bdd8u: goto label_16bdd8;
        case 0x16bddcu: goto label_16bddc;
        case 0x16bde0u: goto label_16bde0;
        case 0x16bde4u: goto label_16bde4;
        case 0x16bde8u: goto label_16bde8;
        case 0x16bdecu: goto label_16bdec;
        case 0x16bdf0u: goto label_16bdf0;
        case 0x16bdf4u: goto label_16bdf4;
        case 0x16bdf8u: goto label_16bdf8;
        case 0x16bdfcu: goto label_16bdfc;
        case 0x16be00u: goto label_16be00;
        case 0x16be04u: goto label_16be04;
        case 0x16be08u: goto label_16be08;
        case 0x16be0cu: goto label_16be0c;
        case 0x16be10u: goto label_16be10;
        case 0x16be14u: goto label_16be14;
        case 0x16be18u: goto label_16be18;
        case 0x16be1cu: goto label_16be1c;
        case 0x16be20u: goto label_16be20;
        case 0x16be24u: goto label_16be24;
        case 0x16be28u: goto label_16be28;
        case 0x16be2cu: goto label_16be2c;
        case 0x16be30u: goto label_16be30;
        case 0x16be34u: goto label_16be34;
        case 0x16be38u: goto label_16be38;
        case 0x16be3cu: goto label_16be3c;
        case 0x16be40u: goto label_16be40;
        case 0x16be44u: goto label_16be44;
        case 0x16be48u: goto label_16be48;
        case 0x16be4cu: goto label_16be4c;
        case 0x16be50u: goto label_16be50;
        case 0x16be54u: goto label_16be54;
        case 0x16be58u: goto label_16be58;
        case 0x16be5cu: goto label_16be5c;
        case 0x16be60u: goto label_16be60;
        case 0x16be64u: goto label_16be64;
        case 0x16be68u: goto label_16be68;
        case 0x16be6cu: goto label_16be6c;
        case 0x16be70u: goto label_16be70;
        case 0x16be74u: goto label_16be74;
        case 0x16be78u: goto label_16be78;
        case 0x16be7cu: goto label_16be7c;
        case 0x16be80u: goto label_16be80;
        case 0x16be84u: goto label_16be84;
        case 0x16be88u: goto label_16be88;
        case 0x16be8cu: goto label_16be8c;
        case 0x16be90u: goto label_16be90;
        case 0x16be94u: goto label_16be94;
        case 0x16be98u: goto label_16be98;
        case 0x16be9cu: goto label_16be9c;
        case 0x16bea0u: goto label_16bea0;
        case 0x16bea4u: goto label_16bea4;
        case 0x16bea8u: goto label_16bea8;
        case 0x16beacu: goto label_16beac;
        case 0x16beb0u: goto label_16beb0;
        case 0x16beb4u: goto label_16beb4;
        case 0x16beb8u: goto label_16beb8;
        case 0x16bebcu: goto label_16bebc;
        case 0x16bec0u: goto label_16bec0;
        case 0x16bec4u: goto label_16bec4;
        case 0x16bec8u: goto label_16bec8;
        case 0x16beccu: goto label_16becc;
        case 0x16bed0u: goto label_16bed0;
        case 0x16bed4u: goto label_16bed4;
        case 0x16bed8u: goto label_16bed8;
        case 0x16bedcu: goto label_16bedc;
        case 0x16bee0u: goto label_16bee0;
        case 0x16bee4u: goto label_16bee4;
        case 0x16bee8u: goto label_16bee8;
        case 0x16beecu: goto label_16beec;
        case 0x16bef0u: goto label_16bef0;
        case 0x16bef4u: goto label_16bef4;
        case 0x16bef8u: goto label_16bef8;
        case 0x16befcu: goto label_16befc;
        case 0x16bf00u: goto label_16bf00;
        case 0x16bf04u: goto label_16bf04;
        case 0x16bf08u: goto label_16bf08;
        case 0x16bf0cu: goto label_16bf0c;
        case 0x16bf10u: goto label_16bf10;
        case 0x16bf14u: goto label_16bf14;
        case 0x16bf18u: goto label_16bf18;
        case 0x16bf1cu: goto label_16bf1c;
        case 0x16bf20u: goto label_16bf20;
        case 0x16bf24u: goto label_16bf24;
        case 0x16bf28u: goto label_16bf28;
        case 0x16bf2cu: goto label_16bf2c;
        case 0x16bf30u: goto label_16bf30;
        case 0x16bf34u: goto label_16bf34;
        case 0x16bf38u: goto label_16bf38;
        case 0x16bf3cu: goto label_16bf3c;
        case 0x16bf40u: goto label_16bf40;
        case 0x16bf44u: goto label_16bf44;
        case 0x16bf48u: goto label_16bf48;
        case 0x16bf4cu: goto label_16bf4c;
        case 0x16bf50u: goto label_16bf50;
        case 0x16bf54u: goto label_16bf54;
        case 0x16bf58u: goto label_16bf58;
        case 0x16bf5cu: goto label_16bf5c;
        case 0x16bf60u: goto label_16bf60;
        case 0x16bf64u: goto label_16bf64;
        case 0x16bf68u: goto label_16bf68;
        case 0x16bf6cu: goto label_16bf6c;
        case 0x16bf70u: goto label_16bf70;
        case 0x16bf74u: goto label_16bf74;
        case 0x16bf78u: goto label_16bf78;
        case 0x16bf7cu: goto label_16bf7c;
        case 0x16bf80u: goto label_16bf80;
        case 0x16bf84u: goto label_16bf84;
        case 0x16bf88u: goto label_16bf88;
        case 0x16bf8cu: goto label_16bf8c;
        case 0x16bf90u: goto label_16bf90;
        case 0x16bf94u: goto label_16bf94;
        case 0x16bf98u: goto label_16bf98;
        case 0x16bf9cu: goto label_16bf9c;
        case 0x16bfa0u: goto label_16bfa0;
        case 0x16bfa4u: goto label_16bfa4;
        case 0x16bfa8u: goto label_16bfa8;
        case 0x16bfacu: goto label_16bfac;
        case 0x16bfb0u: goto label_16bfb0;
        case 0x16bfb4u: goto label_16bfb4;
        case 0x16bfb8u: goto label_16bfb8;
        case 0x16bfbcu: goto label_16bfbc;
        case 0x16bfc0u: goto label_16bfc0;
        case 0x16bfc4u: goto label_16bfc4;
        case 0x16bfc8u: goto label_16bfc8;
        case 0x16bfccu: goto label_16bfcc;
        case 0x16bfd0u: goto label_16bfd0;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16bfdcu: goto label_16bfdc;
        case 0x16bfe0u: goto label_16bfe0;
        case 0x16bfe4u: goto label_16bfe4;
        case 0x16bfe8u: goto label_16bfe8;
        case 0x16bfecu: goto label_16bfec;
        case 0x16bff0u: goto label_16bff0;
        case 0x16bff4u: goto label_16bff4;
        case 0x16bff8u: goto label_16bff8;
        case 0x16bffcu: goto label_16bffc;
        case 0x16c000u: goto label_16c000;
        case 0x16c004u: goto label_16c004;
        case 0x16c008u: goto label_16c008;
        case 0x16c00cu: goto label_16c00c;
        case 0x16c010u: goto label_16c010;
        case 0x16c014u: goto label_16c014;
        case 0x16c018u: goto label_16c018;
        case 0x16c01cu: goto label_16c01c;
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        default: return;
    }

label_16b890:
    // 0x16b890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b894:
    // 0x16b894: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16b898:
    // 0x16b898: 0x8f848700  lw          $a0, -0x7900($gp)
    ctx->pc = 0x16b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16b89c:
    // 0x16b89c: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_16b8a0:
    if (ctx->pc == 0x16B8A0u) {
        ctx->pc = 0x16B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B89Cu;
        // 0x16b8a0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B8A4u;
        goto label_16b8a4;
    }
    ctx->pc = 0x16B89Cu;
    {
        const bool branch_taken_0x16b89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B89Cu;
        // 0x16b8a0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b89c) {
            ctx->pc = 0x16B99Cu;
            goto label_16b99c;
        }
    }
    ctx->pc = 0x16B8A4u;
label_16b8a4:
    // 0x16b8a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b8a8:
    // 0x16b8a8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16b8ac:
    if (ctx->pc == 0x16B8ACu) {
        ctx->pc = 0x16B8B0u;
        goto label_16b8b0;
    }
    ctx->pc = 0x16B8A8u;
    {
        const bool branch_taken_0x16b8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b8a8) {
            ctx->pc = 0x16B8B8u;
            goto label_16b8b8;
        }
    }
    ctx->pc = 0x16B8B0u;
label_16b8b0:
    // 0x16b8b0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_16b8b4:
    if (ctx->pc == 0x16B8B4u) {
        ctx->pc = 0x16B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8B0u;
        // 0x16b8b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B8B8u;
        goto label_16b8b8;
    }
    ctx->pc = 0x16B8B0u;
    {
        const bool branch_taken_0x16b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8B0u;
        // 0x16b8b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8b0) {
            ctx->pc = 0x16B9A0u;
            goto label_16b9a0;
        }
    }
    ctx->pc = 0x16B8B8u;
label_16b8b8:
    // 0x16b8b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16b8bc:
    // 0x16b8bc: 0x16620024  bne         $s3, $v0, . + 4 + (0x24 << 2)
label_16b8c0:
    if (ctx->pc == 0x16B8C0u) {
        ctx->pc = 0x16B8C4u;
        goto label_16b8c4;
    }
    ctx->pc = 0x16B8BCu;
    {
        const bool branch_taken_0x16b8bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b8bc) {
            ctx->pc = 0x16B950u;
            goto label_16b950;
        }
    }
    ctx->pc = 0x16B8C4u;
label_16b8c4:
    // 0x16b8c4: 0x2e41000a  sltiu       $at, $s2, 0xA
    ctx->pc = 0x16b8c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_16b8c8:
    // 0x16b8c8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_16b8cc:
    if (ctx->pc == 0x16B8CCu) {
        ctx->pc = 0x16B8D0u;
        goto label_16b8d0;
    }
    ctx->pc = 0x16B8C8u;
    {
        const bool branch_taken_0x16b8c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8c8) {
            ctx->pc = 0x16B950u;
            goto label_16b950;
        }
    }
    ctx->pc = 0x16B8D0u;
label_16b8d0:
    // 0x16b8d0: 0xc08f0cc  jal         func_23C330
label_16b8d4:
    if (ctx->pc == 0x16B8D4u) {
        ctx->pc = 0x16B8D8u;
        goto label_16b8d8;
    }
    ctx->pc = 0x16B8D0u;
    SET_GPR_U32(ctx, 31, 0x16B8D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x16B8D8u;
label_16b8d8:
    // 0x16b8d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b8dc:
    // 0x16b8dc: 0x0  nop
    ctx->pc = 0x16b8dcu;
    // NOP
label_16b8e0:
    // 0x16b8e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16b8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16b8e4:
    // 0x16b8e4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_16b8e8:
    // 0x16b8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b8ec:
    // 0x16b8ec: 0x0  nop
    ctx->pc = 0x16b8ecu;
    // NOP
label_16b8f0:
    // 0x16b8f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16b8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16b8f4:
    // 0x16b8f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_16b8f8:
    // 0x16b8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b8fc:
    // 0x16b8fc: 0x0  nop
    ctx->pc = 0x16b8fcu;
    // NOP
label_16b900:
    // 0x16b900: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16b900u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_16b904:
    // 0x16b904: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16b908:
    // 0x16b908: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16b908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16b90c:
    // 0x16b90c: 0x0  nop
    ctx->pc = 0x16b90cu;
    // NOP
label_16b910:
    // 0x16b910: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16b914:
    // 0x16b914: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x16b914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_16b918:
    // 0x16b918: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_16b91c:
    if (ctx->pc == 0x16B91Cu) {
        ctx->pc = 0x16B920u;
        goto label_16b920;
    }
    ctx->pc = 0x16B918u;
    {
        const bool branch_taken_0x16b918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b918) {
            ctx->pc = 0x16B928u;
            goto label_16b928;
        }
    }
    ctx->pc = 0x16B920u;
label_16b920:
    // 0x16b920: 0x10000003  b           . + 4 + (0x3 << 2)
label_16b924:
    if (ctx->pc == 0x16B924u) {
        ctx->pc = 0x16B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B920u;
        // 0x16b924: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B928u;
        goto label_16b928;
    }
    ctx->pc = 0x16B920u;
    {
        const bool branch_taken_0x16b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B920u;
        // 0x16b924: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b920) {
            ctx->pc = 0x16B930u;
            goto label_16b930;
        }
    }
    ctx->pc = 0x16B928u;
label_16b928:
    // 0x16b928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16b92c:
    // 0x16b92c: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x16b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_16b930:
    // 0x16b930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16b934:
    // 0x16b934: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16b934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_16b938:
    // 0x16b938: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x16b938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_16b93c:
    // 0x16b93c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_16b940:
    // 0x16b940: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x16b940u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_16b944:
    // 0x16b944: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16b948:
    // 0x16b948: 0x10000002  b           . + 4 + (0x2 << 2)
label_16b94c:
    if (ctx->pc == 0x16B94Cu) {
        ctx->pc = 0x16B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B948u;
        // 0x16b94c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B950u;
        goto label_16b950;
    }
    ctx->pc = 0x16B948u;
    {
        const bool branch_taken_0x16b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B948u;
        // 0x16b94c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b948) {
            ctx->pc = 0x16B954u;
            goto label_16b954;
        }
    }
    ctx->pc = 0x16B950u;
label_16b950:
    // 0x16b950: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x16b950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16b954:
    // 0x16b954: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_16b958:
    // 0x16b958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16b958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b95c:
    // 0x16b95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16b960:
    // 0x16b960: 0x27a4005e  addiu       $a0, $sp, 0x5E
    ctx->pc = 0x16b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_16b964:
    // 0x16b964: 0x27a5005f  addiu       $a1, $sp, 0x5F
    ctx->pc = 0x16b964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 95));
label_16b968:
    // 0x16b968: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16b968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b96c:
    // 0x16b96c: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x16b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_16b970:
    // 0x16b970: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16b974:
    // 0x16b974: 0xc05ac64  jal         func_16B190
label_16b978:
    if (ctx->pc == 0x16B978u) {
        ctx->pc = 0x16B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B974u;
        // 0x16b978: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B97Cu;
        goto label_16b97c;
    }
    ctx->pc = 0x16B974u;
    SET_GPR_U32(ctx, 31, 0x16B97Cu);
    ctx->pc = 0x16B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B974u;
    // 0x16b978: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    { ctx->pc = 0x16b190; return; }
    ctx->pc = 0x16B97Cu;
label_16b97c:
    // 0x16b97c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16b980:
    if (ctx->pc == 0x16B980u) {
        ctx->pc = 0x16B984u;
        goto label_16b984;
    }
    ctx->pc = 0x16B97Cu;
    {
        const bool branch_taken_0x16b97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b97c) {
            ctx->pc = 0x16B99Cu;
            goto label_16b99c;
        }
    }
    ctx->pc = 0x16B984u;
label_16b984:
    // 0x16b984: 0x93a6005e  lbu         $a2, 0x5E($sp)
    ctx->pc = 0x16b984u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 94)));
label_16b988:
    // 0x16b988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b98c:
    // 0x16b98c: 0x93a7005f  lbu         $a3, 0x5F($sp)
    ctx->pc = 0x16b98cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 95)));
label_16b990:
    // 0x16b990: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b994:
    // 0x16b994: 0xc05b4d4  jal         func_16D350
label_16b998:
    if (ctx->pc == 0x16B998u) {
        ctx->pc = 0x16B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B994u;
        // 0x16b998: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B99Cu;
        goto label_16b99c;
    }
    ctx->pc = 0x16B994u;
    SET_GPR_U32(ctx, 31, 0x16B99Cu);
    ctx->pc = 0x16B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B994u;
    // 0x16b998: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    { ctx->pc = 0x16d350; return; }
    ctx->pc = 0x16B99Cu;
label_16b99c:
    // 0x16b99c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16b9a0:
    // 0x16b9a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b9a4:
    // 0x16b9a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b9a8:
    // 0x16b9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b9ac:
    // 0x16b9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b9b0:
    // 0x16b9b0: 0x3e00008  jr          $ra
label_16b9b4:
    if (ctx->pc == 0x16B9B4u) {
        ctx->pc = 0x16B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9B0u;
        // 0x16b9b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B9B8u;
        goto label_16b9b8;
    }
    ctx->pc = 0x16B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9B0u;
        // 0x16b9b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B9B8u;
label_16b9b8:
    // 0x16b9b8: 0x0  nop
    ctx->pc = 0x16b9b8u;
    // NOP
label_16b9bc:
    // 0x16b9bc: 0x0  nop
    ctx->pc = 0x16b9bcu;
    // NOP
label_16b9c0:
    // 0x16b9c0: 0x3e00008  jr          $ra
label_16b9c4:
    if (ctx->pc == 0x16B9C4u) {
        ctx->pc = 0x16B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9C0u;
        // 0x16b9c4: 0x8f828728  lw          $v0, -0x78D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B9C8u;
        goto label_16b9c8;
    }
    ctx->pc = 0x16B9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9C0u;
        // 0x16b9c4: 0x8f828728  lw          $v0, -0x78D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B9C8u;
label_16b9c8:
    // 0x16b9c8: 0x0  nop
    ctx->pc = 0x16b9c8u;
    // NOP
label_16b9cc:
    // 0x16b9cc: 0x0  nop
    ctx->pc = 0x16b9ccu;
    // NOP
label_16b9d0:
    // 0x16b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16b9d4:
    // 0x16b9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b9d8:
    // 0x16b9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16b9dc:
    // 0x16b9dc: 0xaf828728  sw          $v0, -0x78D8($gp)
    ctx->pc = 0x16b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
label_16b9e0:
    // 0x16b9e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b9e4:
    // 0x16b9e4: 0xaf848724  sw          $a0, -0x78DC($gp)
    ctx->pc = 0x16b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 4));
label_16b9e8:
    // 0x16b9e8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_16b9ec:
    if (ctx->pc == 0x16B9ECu) {
        ctx->pc = 0x16B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9E8u;
        // 0x16b9ec: 0xaf858720  sw          $a1, -0x78E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B9F0u;
        goto label_16b9f0;
    }
    ctx->pc = 0x16B9E8u;
    {
        const bool branch_taken_0x16b9e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9E8u;
        // 0x16b9ec: 0xaf858720  sw          $a1, -0x78E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9e8) {
            ctx->pc = 0x16BA00u;
            goto label_16ba00;
        }
    }
    ctx->pc = 0x16B9F0u;
label_16b9f0:
    // 0x16b9f0: 0xc055e34  jal         func_1578D0
label_16b9f4:
    if (ctx->pc == 0x16B9F4u) {
        ctx->pc = 0x16B9F8u;
        goto label_16b9f8;
    }
    ctx->pc = 0x16B9F0u;
    SET_GPR_U32(ctx, 31, 0x16B9F8u);
    ctx->pc = 0x1578D0u;
    { ctx->pc = 0x1578d0; return; }
    ctx->pc = 0x16B9F8u;
label_16b9f8:
    // 0x16b9f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_16b9fc:
    if (ctx->pc == 0x16B9FCu) {
        ctx->pc = 0x16B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9F8u;
        // 0x16b9fc: 0xaf82871c  sw          $v0, -0x78E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA00u;
        goto label_16ba00;
    }
    ctx->pc = 0x16B9F8u;
    {
        const bool branch_taken_0x16b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9F8u;
        // 0x16b9fc: 0xaf82871c  sw          $v0, -0x78E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9f8) {
            ctx->pc = 0x16BA0Cu;
            goto label_16ba0c;
        }
    }
    ctx->pc = 0x16BA00u;
label_16ba00:
    // 0x16ba00: 0xc055e64  jal         func_157990
label_16ba04:
    if (ctx->pc == 0x16BA04u) {
        ctx->pc = 0x16BA08u;
        goto label_16ba08;
    }
    ctx->pc = 0x16BA00u;
    SET_GPR_U32(ctx, 31, 0x16BA08u);
    ctx->pc = 0x157990u;
    { ctx->pc = 0x157990; return; }
    ctx->pc = 0x16BA08u;
label_16ba08:
    // 0x16ba08: 0xaf82871c  sw          $v0, -0x78E4($gp)
    ctx->pc = 0x16ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
label_16ba0c:
    // 0x16ba0c: 0x8f848700  lw          $a0, -0x7900($gp)
    ctx->pc = 0x16ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16ba10:
    // 0x16ba10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ba14:
    // 0x16ba14: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_16ba18:
    if (ctx->pc == 0x16BA18u) {
        ctx->pc = 0x16BA1Cu;
        goto label_16ba1c;
    }
    ctx->pc = 0x16BA14u;
    {
        const bool branch_taken_0x16ba14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ba14) {
            ctx->pc = 0x16BA2Cu;
            goto label_16ba2c;
        }
    }
    ctx->pc = 0x16BA1Cu;
label_16ba1c:
    // 0x16ba1c: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16ba20:
    // 0x16ba20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16ba24:
    if (ctx->pc == 0x16BA24u) {
        ctx->pc = 0x16BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA20u;
        // 0x16ba24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA28u;
        goto label_16ba28;
    }
    ctx->pc = 0x16BA20u;
    {
        const bool branch_taken_0x16ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA20u;
        // 0x16ba24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba20) {
            ctx->pc = 0x16BA2Cu;
            goto label_16ba2c;
        }
    }
    ctx->pc = 0x16BA28u;
label_16ba28:
    // 0x16ba28: 0xaf838700  sw          $v1, -0x7900($gp)
    ctx->pc = 0x16ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 3));
label_16ba2c:
    // 0x16ba2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ba30:
    // 0x16ba30: 0x3e00008  jr          $ra
label_16ba34:
    if (ctx->pc == 0x16BA34u) {
        ctx->pc = 0x16BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA30u;
        // 0x16ba34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA38u;
        goto label_16ba38;
    }
    ctx->pc = 0x16BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA30u;
        // 0x16ba34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BA38u;
label_16ba38:
    // 0x16ba38: 0x0  nop
    ctx->pc = 0x16ba38u;
    // NOP
label_16ba3c:
    // 0x16ba3c: 0x0  nop
    ctx->pc = 0x16ba3cu;
    // NOP
label_16ba40:
    // 0x16ba40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16ba44:
    // 0x16ba44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ba48:
    // 0x16ba48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16ba4c:
    // 0x16ba4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ba50:
    // 0x16ba50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ba54:
    // 0x16ba54: 0x8f858728  lw          $a1, -0x78D8($gp)
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
label_16ba58:
    // 0x16ba58: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
label_16ba5c:
    if (ctx->pc == 0x16BA5Cu) {
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA58u;
        // 0x16ba5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA60u;
        goto label_16ba60;
    }
    ctx->pc = 0x16BA58u;
    {
        const bool branch_taken_0x16ba58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA58u;
        // 0x16ba5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba58) {
            ctx->pc = 0x16BB6Cu;
            goto label_16bb6c;
        }
    }
    ctx->pc = 0x16BA60u;
label_16ba60:
    // 0x16ba60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ba64:
    // 0x16ba64: 0x10a4001b  beq         $a1, $a0, . + 4 + (0x1B << 2)
label_16ba68:
    if (ctx->pc == 0x16BA68u) {
        ctx->pc = 0x16BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA64u;
        // 0x16ba68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA6Cu;
        goto label_16ba6c;
    }
    ctx->pc = 0x16BA64u;
    {
        const bool branch_taken_0x16ba64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA64u;
        // 0x16ba68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba64) {
            ctx->pc = 0x16BAD4u;
            goto label_16bad4;
        }
    }
    ctx->pc = 0x16BA6Cu;
label_16ba6c:
    // 0x16ba6c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_16ba70:
    if (ctx->pc == 0x16BA70u) {
        ctx->pc = 0x16BA74u;
        goto label_16ba74;
    }
    ctx->pc = 0x16BA6Cu;
    {
        const bool branch_taken_0x16ba6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ba6c) {
            ctx->pc = 0x16BA7Cu;
            goto label_16ba7c;
        }
    }
    ctx->pc = 0x16BA74u;
label_16ba74:
    // 0x16ba74: 0x1000004b  b           . + 4 + (0x4B << 2)
label_16ba78:
    if (ctx->pc == 0x16BA78u) {
        ctx->pc = 0x16BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA74u;
        // 0x16ba78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA7Cu;
        goto label_16ba7c;
    }
    ctx->pc = 0x16BA74u;
    {
        const bool branch_taken_0x16ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA74u;
        // 0x16ba78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba74) {
            ctx->pc = 0x16BBA4u;
            goto label_16bba4;
        }
    }
    ctx->pc = 0x16BA7Cu;
label_16ba7c:
    // 0x16ba7c: 0x8f8386f4  lw          $v1, -0x790C($gp)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_16ba80:
    // 0x16ba80: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_16ba84:
    // 0x16ba84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_16ba88:
    if (ctx->pc == 0x16BA88u) {
        ctx->pc = 0x16BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA84u;
        // 0x16ba88: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA8Cu;
        goto label_16ba8c;
    }
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA84u;
        // 0x16ba88: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA98u;
            goto label_16ba98;
        }
    }
    ctx->pc = 0x16BA8Cu;
label_16ba8c:
    // 0x16ba8c: 0xaf848728  sw          $a0, -0x78D8($gp)
    ctx->pc = 0x16ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 4));
label_16ba90:
    // 0x16ba90: 0x10000043  b           . + 4 + (0x43 << 2)
label_16ba94:
    if (ctx->pc == 0x16BA94u) {
        ctx->pc = 0x16BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA90u;
        // 0x16ba94: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BA98u;
        goto label_16ba98;
    }
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA90u;
        // 0x16ba94: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BA98u;
label_16ba98:
    // 0x16ba98: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_16ba9c:
    // 0x16ba9c: 0xaf8486f4  sw          $a0, -0x790C($gp)
    ctx->pc = 0x16ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
label_16baa0:
    // 0x16baa0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_16baa4:
    // 0x16baa4: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16baa8:
    // 0x16baa8: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16baa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_16baac:
    // 0x16baac: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_16bab0:
    if (ctx->pc == 0x16BAB0u) {
        ctx->pc = 0x16BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAACu;
        // 0x16bab0: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BAB4u;
        goto label_16bab4;
    }
    ctx->pc = 0x16BAACu;
    {
        const bool branch_taken_0x16baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAACu;
        // 0x16bab0: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baac) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BAB4u;
label_16bab4:
    // 0x16bab4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bab8:
    // 0x16bab8: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7868), GPR_U32(ctx, 4));
label_16babc:
    // 0x16babc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bac0:
    // 0x16bac0: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bac4:
    // 0x16bac4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_16bac8:
    // 0x16bac8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bacc:
    // 0x16bacc: 0x10000034  b           . + 4 + (0x34 << 2)
label_16bad0:
    if (ctx->pc == 0x16BAD0u) {
        ctx->pc = 0x16BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BACCu;
        // 0x16bad0: 0xac231eb0  sw          $v1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BAD4u;
        goto label_16bad4;
    }
    ctx->pc = 0x16BACCu;
    {
        const bool branch_taken_0x16bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BACCu;
        // 0x16bad0: 0xac231eb0  sw          $v1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bacc) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BAD4u;
label_16bad4:
    // 0x16bad4: 0x8f908724  lw          $s0, -0x78DC($gp)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
label_16bad8:
    // 0x16bad8: 0x2a010026  slti        $at, $s0, 0x26
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
label_16badc:
    // 0x16badc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_16bae0:
    if (ctx->pc == 0x16BAE0u) {
        ctx->pc = 0x16BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BADCu;
        // 0x16bae0: 0x8f918720  lw          $s1, -0x78E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BAE4u;
        goto label_16bae4;
    }
    ctx->pc = 0x16BADCu;
    {
        const bool branch_taken_0x16badc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BADCu;
        // 0x16bae0: 0x8f918720  lw          $s1, -0x78E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16badc) {
            ctx->pc = 0x16BB30u;
            goto label_16bb30;
        }
    }
    ctx->pc = 0x16BAE4u;
label_16bae4:
    // 0x16bae4: 0xc055e04  jal         func_157810
label_16bae8:
    if (ctx->pc == 0x16BAE8u) {
        ctx->pc = 0x16BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAE4u;
        // 0x16bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BAECu;
        goto label_16baec;
    }
    ctx->pc = 0x16BAE4u;
    SET_GPR_U32(ctx, 31, 0x16BAECu);
    ctx->pc = 0x16BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAE4u;
    // 0x16bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    { ctx->pc = 0x157810; return; }
    ctx->pc = 0x16BAECu;
label_16baec:
    // 0x16baec: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16baf0:
    // 0x16baf0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_16baf4:
    if (ctx->pc == 0x16BAF4u) {
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF0u;
        // 0x16baf4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BAF8u;
        goto label_16baf8;
    }
    ctx->pc = 0x16BAF0u;
    {
        const bool branch_taken_0x16baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF0u;
        // 0x16baf4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baf0) {
            ctx->pc = 0x16BB30u;
            goto label_16bb30;
        }
    }
    ctx->pc = 0x16BAF8u;
label_16baf8:
    // 0x16baf8: 0x2403ffc9  addiu       $v1, $zero, -0x37
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
label_16bafc:
    // 0x16bafc: 0xac301eb4  sw          $s0, 0x1EB4($at)
    ctx->pc = 0x16bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7860), GPR_U32(ctx, 16));
label_16bb00:
    // 0x16bb00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb04:
    // 0x16bb04: 0xac311eb8  sw          $s1, 0x1EB8($at)
    ctx->pc = 0x16bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7864), GPR_U32(ctx, 17));
label_16bb08:
    // 0x16bb08: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb0c:
    // 0x16bb0c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bb10:
    // 0x16bb10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16bb14:
    // 0x16bb14: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb18:
    // 0x16bb18: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16bb1c:
    // 0x16bb1c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb20:
    // 0x16bb20: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bb24:
    // 0x16bb24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_16bb28:
    // 0x16bb28: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb2c:
    // 0x16bb2c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16bb30:
    // 0x16bb30: 0x8f84871c  lw          $a0, -0x78E4($gp)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
label_16bb34:
    // 0x16bb34: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bb38:
    // 0x16bb38: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16bb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_16bb3c:
    // 0x16bb3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_16bb40:
    if (ctx->pc == 0x16BB40u) {
        ctx->pc = 0x16BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB3Cu;
        // 0x16bb40: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BB44u;
        goto label_16bb44;
    }
    ctx->pc = 0x16BB3Cu;
    {
        const bool branch_taken_0x16bb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB3Cu;
        // 0x16bb40: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb3c) {
            ctx->pc = 0x16BB60u;
            goto label_16bb60;
        }
    }
    ctx->pc = 0x16BB44u;
label_16bb44:
    // 0x16bb44: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb48:
    // 0x16bb48: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7868), GPR_U32(ctx, 4));
label_16bb4c:
    // 0x16bb4c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb50:
    // 0x16bb50: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bb54:
    // 0x16bb54: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_16bb58:
    // 0x16bb58: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bb5c:
    // 0x16bb5c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16bb60:
    // 0x16bb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16bb64:
    // 0x16bb64: 0x1000000e  b           . + 4 + (0xE << 2)
label_16bb68:
    if (ctx->pc == 0x16BB68u) {
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB64u;
        // 0x16bb68: 0xaf838728  sw          $v1, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BB6Cu;
        goto label_16bb6c;
    }
    ctx->pc = 0x16BB64u;
    {
        const bool branch_taken_0x16bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB64u;
        // 0x16bb68: 0xaf838728  sw          $v1, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb64) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB6Cu;
label_16bb6c:
    // 0x16bb6c: 0xc08d7f6  jal         func_235FD8
label_16bb70:
    if (ctx->pc == 0x16BB70u) {
        ctx->pc = 0x16BB74u;
        goto label_16bb74;
    }
    ctx->pc = 0x16BB6Cu;
    SET_GPR_U32(ctx, 31, 0x16BB74u);
    ctx->pc = 0x235FD8u;
    { ctx->pc = 0x235fd8; return; }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16bb78:
    // 0x16bb78: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_16bb7c:
    if (ctx->pc == 0x16BB7Cu) {
        ctx->pc = 0x16BB80u;
        goto label_16bb80;
    }
    ctx->pc = 0x16BB78u;
    {
        const bool branch_taken_0x16bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb78) {
            ctx->pc = 0x16BB88u;
            goto label_16bb88;
        }
    }
    ctx->pc = 0x16BB80u;
label_16bb80:
    // 0x16bb80: 0x10000007  b           . + 4 + (0x7 << 2)
label_16bb84:
    if (ctx->pc == 0x16BB84u) {
        ctx->pc = 0x16BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB80u;
        // 0x16bb84: 0xaf808728  sw          $zero, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BB88u;
        goto label_16bb88;
    }
    ctx->pc = 0x16BB80u;
    {
        const bool branch_taken_0x16bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB80u;
        // 0x16bb84: 0xaf808728  sw          $zero, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb80) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB88u;
label_16bb88:
    // 0x16bb88: 0xc05aef0  jal         func_16BBC0
label_16bb8c:
    if (ctx->pc == 0x16BB8Cu) {
        ctx->pc = 0x16BB90u;
        goto label_16bb90;
    }
    ctx->pc = 0x16BB88u;
    SET_GPR_U32(ctx, 31, 0x16BB90u);
    ctx->pc = 0x16BBC0u;
    goto label_16bbc0;
    ctx->pc = 0x16BB90u;
label_16bb90:
    // 0x16bb90: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_16bb94:
    // 0x16bb94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bb98:
    if (ctx->pc == 0x16BB98u) {
        ctx->pc = 0x16BB9Cu;
        goto label_16bb9c;
    }
    ctx->pc = 0x16BB94u;
    {
        const bool branch_taken_0x16bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb94) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB9Cu;
label_16bb9c:
    // 0x16bb9c: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x16bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
label_16bba0:
    // 0x16bba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bba4:
    // 0x16bba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bba8:
    // 0x16bba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bbac:
    // 0x16bbac: 0x3e00008  jr          $ra
label_16bbb0:
    if (ctx->pc == 0x16BBB0u) {
        ctx->pc = 0x16BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBACu;
        // 0x16bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BBB4u;
        goto label_16bbb4;
    }
    ctx->pc = 0x16BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBACu;
        // 0x16bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BBB4u;
label_16bbb4:
    // 0x16bbb4: 0x0  nop
    ctx->pc = 0x16bbb4u;
    // NOP
label_16bbb8:
    // 0x16bbb8: 0x0  nop
    ctx->pc = 0x16bbb8u;
    // NOP
label_16bbbc:
    // 0x16bbbc: 0x0  nop
    ctx->pc = 0x16bbbcu;
    // NOP
label_16bbc0:
    // 0x16bbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16bbc4:
    // 0x16bbc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bbc8:
    // 0x16bbc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16bbcc:
    // 0x16bbcc: 0xc08d7f6  jal         func_235FD8
label_16bbd0:
    if (ctx->pc == 0x16BBD0u) {
        ctx->pc = 0x16BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBCCu;
        // 0x16bbd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BBD4u;
        goto label_16bbd4;
    }
    ctx->pc = 0x16BBCCu;
    SET_GPR_U32(ctx, 31, 0x16BBD4u);
    ctx->pc = 0x16BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBCCu;
    // 0x16bbd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    { ctx->pc = 0x235fd8; return; }
    ctx->pc = 0x16BBD4u;
label_16bbd4:
    // 0x16bbd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16bbd8:
    // 0x16bbd8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_16bbdc:
    if (ctx->pc == 0x16BBDCu) {
        ctx->pc = 0x16BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBD8u;
        // 0x16bbdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BBE0u;
        goto label_16bbe0;
    }
    ctx->pc = 0x16BBD8u;
    {
        const bool branch_taken_0x16bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBD8u;
        // 0x16bbdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbd8) {
            ctx->pc = 0x16BBE4u;
            goto label_16bbe4;
        }
    }
    ctx->pc = 0x16BBE0u;
label_16bbe0:
    // 0x16bbe0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_16bbe4:
    // 0x16bbe4: 0xc08d9e0  jal         func_236780
label_16bbe8:
    if (ctx->pc == 0x16BBE8u) {
        ctx->pc = 0x16BBECu;
        goto label_16bbec;
    }
    ctx->pc = 0x16BBE4u;
    SET_GPR_U32(ctx, 31, 0x16BBECu);
    ctx->pc = 0x236780u;
    { ctx->pc = 0x236780; return; }
    ctx->pc = 0x16BBECu;
label_16bbec:
    // 0x16bbec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x16bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16bbf0:
    // 0x16bbf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bbf4:
    if (ctx->pc == 0x16BBF4u) {
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBF0u;
        // 0x16bbf4: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BBF8u;
        goto label_16bbf8;
    }
    ctx->pc = 0x16BBF0u;
    {
        const bool branch_taken_0x16bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBF0u;
        // 0x16bbf4: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbf0) {
            ctx->pc = 0x16BBFCu;
            goto label_16bbfc;
        }
    }
    ctx->pc = 0x16BBF8u;
label_16bbf8:
    // 0x16bbf8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16bbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_16bbfc:
    // 0x16bbfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bc00:
    if (ctx->pc == 0x16BC00u) {
        ctx->pc = 0x16BC04u;
        goto label_16bc04;
    }
    ctx->pc = 0x16BBFCu;
    {
        const bool branch_taken_0x16bbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bbfc) {
            ctx->pc = 0x16BC08u;
            goto label_16bc08;
        }
    }
    ctx->pc = 0x16BC04u;
label_16bc04:
    // 0x16bc04: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x16bc04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_16bc08:
    // 0x16bc08: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x16bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_16bc0c:
    // 0x16bc0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bc10:
    if (ctx->pc == 0x16BC10u) {
        ctx->pc = 0x16BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC0Cu;
        // 0x16bc10: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BC14u;
        goto label_16bc14;
    }
    ctx->pc = 0x16BC0Cu;
    {
        const bool branch_taken_0x16bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC0Cu;
        // 0x16bc10: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc0c) {
            ctx->pc = 0x16BC18u;
            goto label_16bc18;
        }
    }
    ctx->pc = 0x16BC14u;
label_16bc14:
    // 0x16bc14: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_16bc18:
    // 0x16bc18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bc1c:
    if (ctx->pc == 0x16BC1Cu) {
        ctx->pc = 0x16BC20u;
        goto label_16bc20;
    }
    ctx->pc = 0x16BC18u;
    {
        const bool branch_taken_0x16bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc18) {
            ctx->pc = 0x16BC24u;
            goto label_16bc24;
        }
    }
    ctx->pc = 0x16BC20u;
label_16bc20:
    // 0x16bc20: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x16bc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_16bc24:
    // 0x16bc24: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_16bc28:
    // 0x16bc28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16bc2c:
    if (ctx->pc == 0x16BC2Cu) {
        ctx->pc = 0x16BC30u;
        goto label_16bc30;
    }
    ctx->pc = 0x16BC28u;
    {
        const bool branch_taken_0x16bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc28) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BC30u;
label_16bc30:
    // 0x16bc30: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
label_16bc34:
    // 0x16bc34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_16bc38:
    // 0x16bc38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_16bc3c:
    if (ctx->pc == 0x16BC3Cu) {
        ctx->pc = 0x16BC40u;
        goto label_16bc40;
    }
    ctx->pc = 0x16BC38u;
    {
        const bool branch_taken_0x16bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc38) {
            ctx->pc = 0x16BC44u;
            goto label_16bc44;
        }
    }
    ctx->pc = 0x16BC40u;
label_16bc40:
    // 0x16bc40: 0x36100040  ori         $s0, $s0, 0x40
    ctx->pc = 0x16bc40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
label_16bc44:
    // 0x16bc44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16bc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bc48:
    // 0x16bc48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16bc4c:
    // 0x16bc4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bc50:
    // 0x16bc50: 0x3e00008  jr          $ra
label_16bc54:
    if (ctx->pc == 0x16BC54u) {
        ctx->pc = 0x16BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC50u;
        // 0x16bc54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BC58u;
        goto label_16bc58;
    }
    ctx->pc = 0x16BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC50u;
        // 0x16bc54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC58u;
label_16bc58:
    // 0x16bc58: 0x0  nop
    ctx->pc = 0x16bc58u;
    // NOP
label_16bc5c:
    // 0x16bc5c: 0x0  nop
    ctx->pc = 0x16bc5cu;
    // NOP
label_16bc60:
    // 0x16bc60: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bc64:
    // 0x16bc64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16bc68:
    if (ctx->pc == 0x16BC68u) {
        ctx->pc = 0x16BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC64u;
        // 0x16bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BC6Cu;
        goto label_16bc6c;
    }
    ctx->pc = 0x16BC64u;
    {
        const bool branch_taken_0x16bc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC64u;
        // 0x16bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc64) {
            ctx->pc = 0x16BC9Cu;
            goto label_16bc9c;
        }
    }
    ctx->pc = 0x16BC6Cu;
label_16bc6c:
    // 0x16bc6c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bc70:
    // 0x16bc70: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16bc74:
    // 0x16bc74: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bc78:
    // 0x16bc78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16bc7c:
    // 0x16bc7c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bc80:
    // 0x16bc80: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bc84:
    // 0x16bc84: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bc88:
    // 0x16bc88: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bc8c:
    // 0x16bc8c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16bc90:
    // 0x16bc90: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bc94:
    // 0x16bc94: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bc98:
    // 0x16bc98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bc9c:
    // 0x16bc9c: 0x3e00008  jr          $ra
label_16bca0:
    if (ctx->pc == 0x16BCA0u) {
        ctx->pc = 0x16BCA4u;
        goto label_16bca4;
    }
    ctx->pc = 0x16BC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCA4u;
label_16bca4:
    // 0x16bca4: 0x0  nop
    ctx->pc = 0x16bca4u;
    // NOP
label_16bca8:
    // 0x16bca8: 0x0  nop
    ctx->pc = 0x16bca8u;
    // NOP
label_16bcac:
    // 0x16bcac: 0x0  nop
    ctx->pc = 0x16bcacu;
    // NOP
label_16bcb0:
    // 0x16bcb0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bcb4:
    // 0x16bcb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16bcb8:
    if (ctx->pc == 0x16BCB8u) {
        ctx->pc = 0x16BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCB4u;
        // 0x16bcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BCBCu;
        goto label_16bcbc;
    }
    ctx->pc = 0x16BCB4u;
    {
        const bool branch_taken_0x16bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCB4u;
        // 0x16bcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcb4) {
            ctx->pc = 0x16BCECu;
            goto label_16bcec;
        }
    }
    ctx->pc = 0x16BCBCu;
label_16bcbc:
    // 0x16bcbc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bcc0:
    // 0x16bcc0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_16bcc4:
    // 0x16bcc4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bcc8:
    // 0x16bcc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16bccc:
    // 0x16bccc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bcd0:
    // 0x16bcd0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bcd4:
    // 0x16bcd4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bcd8:
    // 0x16bcd8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bcdc:
    // 0x16bcdc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_16bce0:
    // 0x16bce0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bce4:
    // 0x16bce4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bce8:
    // 0x16bce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bcec:
    // 0x16bcec: 0x3e00008  jr          $ra
label_16bcf0:
    if (ctx->pc == 0x16BCF0u) {
        ctx->pc = 0x16BCF4u;
        goto label_16bcf4;
    }
    ctx->pc = 0x16BCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCF4u;
label_16bcf4:
    // 0x16bcf4: 0x0  nop
    ctx->pc = 0x16bcf4u;
    // NOP
label_16bcf8:
    // 0x16bcf8: 0x0  nop
    ctx->pc = 0x16bcf8u;
    // NOP
label_16bcfc:
    // 0x16bcfc: 0x0  nop
    ctx->pc = 0x16bcfcu;
    // NOP
label_16bd00:
    // 0x16bd00: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bd04:
    // 0x16bd04: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x16bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_16bd08:
    // 0x16bd08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16bd0c:
    if (ctx->pc == 0x16BD0Cu) {
        ctx->pc = 0x16BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD08u;
        // 0x16bd0c: 0xaf8386f4  sw          $v1, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD10u;
        goto label_16bd10;
    }
    ctx->pc = 0x16BD08u;
    {
        const bool branch_taken_0x16bd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD08u;
        // 0x16bd0c: 0xaf8386f4  sw          $v1, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd08) {
            ctx->pc = 0x16BD2Cu;
            goto label_16bd2c;
        }
    }
    ctx->pc = 0x16BD10u;
label_16bd10:
    // 0x16bd10: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd14:
    // 0x16bd14: 0xac231ebc  sw          $v1, 0x1EBC($at)
    ctx->pc = 0x16bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7868), GPR_U32(ctx, 3));
label_16bd18:
    // 0x16bd18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd1c:
    // 0x16bd1c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bd20:
    // 0x16bd20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_16bd24:
    // 0x16bd24: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd28:
    // 0x16bd28: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bd2c:
    // 0x16bd2c: 0x3e00008  jr          $ra
label_16bd30:
    if (ctx->pc == 0x16BD30u) {
        ctx->pc = 0x16BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD2Cu;
        // 0x16bd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD34u;
        goto label_16bd34;
    }
    ctx->pc = 0x16BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD2Cu;
        // 0x16bd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD34u;
label_16bd34:
    // 0x16bd34: 0x0  nop
    ctx->pc = 0x16bd34u;
    // NOP
label_16bd38:
    // 0x16bd38: 0x0  nop
    ctx->pc = 0x16bd38u;
    // NOP
label_16bd3c:
    // 0x16bd3c: 0x0  nop
    ctx->pc = 0x16bd3cu;
    // NOP
label_16bd40:
    // 0x16bd40: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bd44:
    // 0x16bd44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16bd48:
    if (ctx->pc == 0x16BD48u) {
        ctx->pc = 0x16BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD44u;
        // 0x16bd48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD4Cu;
        goto label_16bd4c;
    }
    ctx->pc = 0x16BD44u;
    {
        const bool branch_taken_0x16bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD44u;
        // 0x16bd48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd44) {
            ctx->pc = 0x16BD7Cu;
            goto label_16bd7c;
        }
    }
    ctx->pc = 0x16BD4Cu;
label_16bd4c:
    // 0x16bd4c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd50:
    // 0x16bd50: 0x2402ffca  addiu       $v0, $zero, -0x36
    ctx->pc = 0x16bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
label_16bd54:
    // 0x16bd54: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bd58:
    // 0x16bd58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16bd5c:
    // 0x16bd5c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd60:
    // 0x16bd60: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bd64:
    // 0x16bd64: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd68:
    // 0x16bd68: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bd6c:
    // 0x16bd6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_16bd70:
    // 0x16bd70: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bd74:
    // 0x16bd74: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bd78:
    // 0x16bd78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bd7c:
    // 0x16bd7c: 0x3e00008  jr          $ra
label_16bd80:
    if (ctx->pc == 0x16BD80u) {
        ctx->pc = 0x16BD84u;
        goto label_16bd84;
    }
    ctx->pc = 0x16BD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD84u;
label_16bd84:
    // 0x16bd84: 0x0  nop
    ctx->pc = 0x16bd84u;
    // NOP
label_16bd88:
    // 0x16bd88: 0x0  nop
    ctx->pc = 0x16bd88u;
    // NOP
label_16bd8c:
    // 0x16bd8c: 0x0  nop
    ctx->pc = 0x16bd8cu;
    // NOP
label_16bd90:
    // 0x16bd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16bd94:
    // 0x16bd94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16bd98:
    // 0x16bd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16bd9c:
    // 0x16bd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16bda0:
    // 0x16bda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bda4:
    // 0x16bda4: 0x2a220026  slti        $v0, $s1, 0x26
    ctx->pc = 0x16bda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)38) ? 1 : 0);
label_16bda8:
    // 0x16bda8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16bdac:
    if (ctx->pc == 0x16BDACu) {
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BDB0u;
        goto label_16bdb0;
    }
    ctx->pc = 0x16BDA8u;
    {
        const bool branch_taken_0x16bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda8) {
            ctx->pc = 0x16BDB8u;
            goto label_16bdb8;
        }
    }
    ctx->pc = 0x16BDB0u;
label_16bdb0:
    // 0x16bdb0: 0x10000016  b           . + 4 + (0x16 << 2)
label_16bdb4:
    if (ctx->pc == 0x16BDB4u) {
        ctx->pc = 0x16BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDB0u;
        // 0x16bdb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BDB8u;
        goto label_16bdb8;
    }
    ctx->pc = 0x16BDB0u;
    {
        const bool branch_taken_0x16bdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDB0u;
        // 0x16bdb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdb0) {
            ctx->pc = 0x16BE0Cu;
            goto label_16be0c;
        }
    }
    ctx->pc = 0x16BDB8u;
label_16bdb8:
    // 0x16bdb8: 0xc055e04  jal         func_157810
label_16bdbc:
    if (ctx->pc == 0x16BDBCu) {
        ctx->pc = 0x16BDC0u;
        goto label_16bdc0;
    }
    ctx->pc = 0x16BDB8u;
    SET_GPR_U32(ctx, 31, 0x16BDC0u);
    ctx->pc = 0x157810u;
    { ctx->pc = 0x157810; return; }
    ctx->pc = 0x16BDC0u;
label_16bdc0:
    // 0x16bdc0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16bdc4:
    // 0x16bdc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_16bdc8:
    if (ctx->pc == 0x16BDC8u) {
        ctx->pc = 0x16BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDC4u;
        // 0x16bdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BDCCu;
        goto label_16bdcc;
    }
    ctx->pc = 0x16BDC4u;
    {
        const bool branch_taken_0x16bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDC4u;
        // 0x16bdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdc4) {
            ctx->pc = 0x16BE0Cu;
            goto label_16be0c;
        }
    }
    ctx->pc = 0x16BDCCu;
label_16bdcc:
    // 0x16bdcc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bdd0:
    // 0x16bdd0: 0x2402ffc9  addiu       $v0, $zero, -0x37
    ctx->pc = 0x16bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
label_16bdd4:
    // 0x16bdd4: 0xac311eb4  sw          $s1, 0x1EB4($at)
    ctx->pc = 0x16bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7860), GPR_U32(ctx, 17));
label_16bdd8:
    // 0x16bdd8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bddc:
    // 0x16bddc: 0xac301eb8  sw          $s0, 0x1EB8($at)
    ctx->pc = 0x16bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7864), GPR_U32(ctx, 16));
label_16bde0:
    // 0x16bde0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bde4:
    // 0x16bde4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bde8:
    // 0x16bde8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16bdec:
    // 0x16bdec: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bdf0:
    // 0x16bdf0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16bdf4:
    // 0x16bdf4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16bdf8:
    // 0x16bdf8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16bdfc:
    // 0x16bdfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_16be00:
    // 0x16be00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16be04:
    // 0x16be04: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16be04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16be08:
    // 0x16be08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16be08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16be0c:
    // 0x16be0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16be0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16be10:
    // 0x16be10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16be10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16be14:
    // 0x16be14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16be14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16be18:
    // 0x16be18: 0x3e00008  jr          $ra
label_16be1c:
    if (ctx->pc == 0x16BE1Cu) {
        ctx->pc = 0x16BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE18u;
        // 0x16be1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE20u;
        goto label_16be20;
    }
    ctx->pc = 0x16BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE18u;
        // 0x16be1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE20u;
label_16be20:
    // 0x16be20: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x16be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_16be24:
    // 0x16be24: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16be24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_16be28:
    // 0x16be28: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_16be2c:
    if (ctx->pc == 0x16BE2Cu) {
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE30u;
        goto label_16be30;
    }
    ctx->pc = 0x16BE28u;
    {
        const bool branch_taken_0x16be28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be28) {
            ctx->pc = 0x16BE64u;
            goto label_16be64;
        }
    }
    ctx->pc = 0x16BE30u;
label_16be30:
    // 0x16be30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16be34:
    // 0x16be34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16be34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16be38:
    // 0x16be38: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_16be3c:
    // 0x16be3c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16be40:
    // 0x16be40: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_16be44:
    // 0x16be44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16be48:
    // 0x16be48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16be4c:
    // 0x16be4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16be4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_16be50:
    // 0x16be50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16be54:
    if (ctx->pc == 0x16BE54u) {
        ctx->pc = 0x16BE58u;
        goto label_16be58;
    }
    ctx->pc = 0x16BE50u;
    {
        const bool branch_taken_0x16be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be50) {
            ctx->pc = 0x16BE60u;
            goto label_16be60;
        }
    }
    ctx->pc = 0x16BE58u;
label_16be58:
    // 0x16be58: 0x10000002  b           . + 4 + (0x2 << 2)
label_16be5c:
    if (ctx->pc == 0x16BE5Cu) {
        ctx->pc = 0x16BE60u;
        goto label_16be60;
    }
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16BE64u;
            goto label_16be64;
        }
    }
    ctx->pc = 0x16BE60u;
label_16be60:
    // 0x16be60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16be60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16be64:
    // 0x16be64: 0x3e00008  jr          $ra
label_16be68:
    if (ctx->pc == 0x16BE68u) {
        ctx->pc = 0x16BE6Cu;
        goto label_16be6c;
    }
    ctx->pc = 0x16BE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE6Cu;
label_16be6c:
    // 0x16be6c: 0x0  nop
    ctx->pc = 0x16be6cu;
    // NOP
label_16be70:
    // 0x16be70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16be74:
    // 0x16be74: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x16be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_16be78:
    // 0x16be78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16be7c:
    // 0x16be7c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_16be80:
    // 0x16be80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16be84:
    // 0x16be84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16be88:
    // 0x16be88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16be88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16be8c:
    // 0x16be8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16be90:
    // 0x16be90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16be90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16be94:
    // 0x16be94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16be98:
    // 0x16be98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16be98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16be9c:
    // 0x16be9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bea0:
    // 0x16bea0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16bea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16bea4:
    // 0x16bea4: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_16bea8:
    if (ctx->pc == 0x16BEA8u) {
        ctx->pc = 0x16BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEA4u;
        // 0x16bea8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEACu;
        goto label_16beac;
    }
    ctx->pc = 0x16BEA4u;
    {
        const bool branch_taken_0x16bea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEA4u;
        // 0x16bea8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bea4) {
            ctx->pc = 0x16BFACu;
            goto label_16bfac;
        }
    }
    ctx->pc = 0x16BEACu;
label_16beac:
    // 0x16beac: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16beb0:
    // 0x16beb0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_16beb4:
    if (ctx->pc == 0x16BEB4u) {
        ctx->pc = 0x16BEB8u;
        goto label_16beb8;
    }
    ctx->pc = 0x16BEB0u;
    {
        const bool branch_taken_0x16beb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16beb0) {
            ctx->pc = 0x16BFACu;
            goto label_16bfac;
        }
    }
    ctx->pc = 0x16BEB8u;
label_16beb8:
    // 0x16beb8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bebc:
    // 0x16bebc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16bebcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16bec0:
    // 0x16bec0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16bec4:
    if (ctx->pc == 0x16BEC4u) {
        ctx->pc = 0x16BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEC0u;
        // 0x16bec4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEC8u;
        goto label_16bec8;
    }
    ctx->pc = 0x16BEC0u;
    {
        const bool branch_taken_0x16bec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEC0u;
        // 0x16bec4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bec0) {
            ctx->pc = 0x16BEF0u;
            goto label_16bef0;
        }
    }
    ctx->pc = 0x16BEC8u;
label_16bec8:
    // 0x16bec8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16becc:
    // 0x16becc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16beccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16bed0:
    // 0x16bed0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16bed4:
    // 0x16bed4: 0xc08d61c  jal         func_235870
label_16bed8:
    if (ctx->pc == 0x16BED8u) {
        ctx->pc = 0x16BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BED4u;
        // 0x16bed8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEDCu;
        goto label_16bedc;
    }
    ctx->pc = 0x16BED4u;
    SET_GPR_U32(ctx, 31, 0x16BEDCu);
    ctx->pc = 0x16BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BED4u;
    // 0x16bed8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16BEDCu;
label_16bedc:
    // 0x16bedc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16bee0:
    // 0x16bee0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16bee4:
    if (ctx->pc == 0x16BEE4u) {
        ctx->pc = 0x16BEE8u;
        goto label_16bee8;
    }
    ctx->pc = 0x16BEE0u;
    {
        const bool branch_taken_0x16bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bee0) {
            ctx->pc = 0x16BEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bec8;
        }
    }
    ctx->pc = 0x16BEE8u;
label_16bee8:
    // 0x16bee8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16beec:
    // 0x16beec: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16beecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16bef0:
    // 0x16bef0: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_16bef4:
    // 0x16bef4: 0x42b80  sll         $a1, $a0, 14
    ctx->pc = 0x16bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16bef8:
    // 0x16bef8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16befc:
    // 0x16befc: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16bf00:
    // 0x16bf00: 0x148e00  sll         $s1, $s4, 24
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_16bf04:
    // 0x16bf04: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x16bf04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16bf08:
    // 0x16bf08: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x16bf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_16bf0c:
    // 0x16bf0c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bf10:
    // 0x16bf10: 0x702825  or          $a1, $v1, $s0
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16bf14:
    // 0x16bf14: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_16bf18:
    // 0x16bf18: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x16bf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16bf1c:
    // 0x16bf1c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16bf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16bf20:
    // 0x16bf20: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16bf24:
    // 0x16bf24: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16bf28:
    // 0x16bf28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16bf2c:
    // 0x16bf2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16bf30:
    // 0x16bf30: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16bf34:
    // 0x16bf34: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bf38:
    // 0x16bf38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16bf3c:
    // 0x16bf3c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16bf40:
    // 0x16bf40: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bf44:
    // 0x16bf44: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16bf44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16bf48:
    // 0x16bf48: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16bf4c:
    if (ctx->pc == 0x16BF4Cu) {
        ctx->pc = 0x16BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF48u;
        // 0x16bf4c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF50u;
        goto label_16bf50;
    }
    ctx->pc = 0x16BF48u;
    {
        const bool branch_taken_0x16bf48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF48u;
        // 0x16bf4c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf48) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF50u;
label_16bf50:
    // 0x16bf50: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bf54:
    // 0x16bf54: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16bf58:
    // 0x16bf58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16bf5c:
    // 0x16bf5c: 0xc08d61c  jal         func_235870
label_16bf60:
    if (ctx->pc == 0x16BF60u) {
        ctx->pc = 0x16BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF5Cu;
        // 0x16bf60: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF64u;
        goto label_16bf64;
    }
    ctx->pc = 0x16BF5Cu;
    SET_GPR_U32(ctx, 31, 0x16BF64u);
    ctx->pc = 0x16BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF5Cu;
    // 0x16bf60: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16BF64u;
label_16bf64:
    // 0x16bf64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16bf68:
    // 0x16bf68: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16bf6c:
    if (ctx->pc == 0x16BF6Cu) {
        ctx->pc = 0x16BF70u;
        goto label_16bf70;
    }
    ctx->pc = 0x16BF68u;
    {
        const bool branch_taken_0x16bf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bf68) {
            ctx->pc = 0x16BF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF70u;
label_16bf70:
    // 0x16bf70: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16bf74:
    // 0x16bf74: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x16bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16bf78:
    // 0x16bf78: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x16bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_16bf7c:
    // 0x16bf7c: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x16bf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16bf80:
    // 0x16bf80: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x16bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16bf84:
    // 0x16bf84: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16bf84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16bf88:
    // 0x16bf88: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bf8c:
    // 0x16bf8c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16bf90:
    // 0x16bf90: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16bf94:
    // 0x16bf94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16bf98:
    // 0x16bf98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16bf9c:
    // 0x16bf9c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16bfa0:
    // 0x16bfa0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16bfa4:
    // 0x16bfa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16bfa8:
    // 0x16bfa8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16bfac:
    // 0x16bfac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16bfb0:
    // 0x16bfb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16bfb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16bfb4:
    // 0x16bfb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16bfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16bfb8:
    // 0x16bfb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bfb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16bfbc:
    // 0x16bfbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bfc0:
    // 0x16bfc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bfc4:
    // 0x16bfc4: 0x3e00008  jr          $ra
label_16bfc8:
    if (ctx->pc == 0x16BFC8u) {
        ctx->pc = 0x16BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFC4u;
        // 0x16bfc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFCCu;
        goto label_16bfcc;
    }
    ctx->pc = 0x16BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFC4u;
        // 0x16bfc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BFCCu;
label_16bfcc:
    // 0x16bfcc: 0x0  nop
    ctx->pc = 0x16bfccu;
    // NOP
label_16bfd0:
    // 0x16bfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16bfd4:
    // 0x16bfd4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x16bfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_16bfd8:
    // 0x16bfd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16bfdc:
    // 0x16bfdc: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16bfdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_16bfe0:
    // 0x16bfe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16bfe4:
    // 0x16bfe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bfe8:
    // 0x16bfe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16bfec:
    // 0x16bfec: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_16bff0:
    if (ctx->pc == 0x16BFF0u) {
        ctx->pc = 0x16BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFECu;
        // 0x16bff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFF4u;
        goto label_16bff4;
    }
    ctx->pc = 0x16BFECu;
    {
        const bool branch_taken_0x16bfec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFECu;
        // 0x16bff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfec) {
            ctx->pc = 0x16C07Cu;
            { ctx->pc = 0x16c07c; return; }
        }
    }
    ctx->pc = 0x16BFF4u;
label_16bff4:
    // 0x16bff4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16bff8:
    // 0x16bff8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_16bffc:
    if (ctx->pc == 0x16BFFCu) {
        ctx->pc = 0x16C000u;
        goto label_16c000;
    }
    ctx->pc = 0x16BFF8u;
    {
        const bool branch_taken_0x16bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bff8) {
            ctx->pc = 0x16C07Cu;
            { ctx->pc = 0x16c07c; return; }
        }
    }
    ctx->pc = 0x16C000u;
label_16c000:
    // 0x16c000: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c004:
    // 0x16c004: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c008:
    // 0x16c008: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c00c:
    if (ctx->pc == 0x16C00Cu) {
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C010u;
        goto label_16c010;
    }
    ctx->pc = 0x16C008u;
    {
        const bool branch_taken_0x16c008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c008) {
            ctx->pc = 0x16C038u;
            goto label_16c038;
        }
    }
    ctx->pc = 0x16C010u;
label_16c010:
    // 0x16c010: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c014:
    // 0x16c014: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c018:
    // 0x16c018: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c01c:
    // 0x16c01c: 0xc08d61c  jal         func_235870
label_16c020:
    if (ctx->pc == 0x16C020u) {
        ctx->pc = 0x16C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C01Cu;
        // 0x16c020: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C024u;
        goto label_16c024;
    }
    ctx->pc = 0x16C01Cu;
    SET_GPR_U32(ctx, 31, 0x16C024u);
    ctx->pc = 0x16C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C01Cu;
    // 0x16c020: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C024u;
label_16c024:
    // 0x16c024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c028:
    // 0x16c028: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c02c:
    if (ctx->pc == 0x16C02Cu) {
        ctx->pc = 0x16C030u;
        goto label_16c030;
    }
    ctx->pc = 0x16C028u;
    {
        const bool branch_taken_0x16c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c028) {
            ctx->pc = 0x16C010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c010;
        }
    }
    ctx->pc = 0x16C030u;
label_16c030:
    // 0x16c030: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c034:
    // 0x16c034: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_16c038:
    // 0x16c038: 0x112600  sll         $a0, $s1, 24
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
label_16c03c:
    // 0x16c03c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c040:
    // 0x16c040: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_16c044:
    // 0x16c044: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x16c044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16c048:
    // 0x16c048: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16c04c:
    // 0x16c04c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16c04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16c050:
    // 0x16c050: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c054:
    // 0x16c054: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c058:
    // 0x16c058: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16c058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16c05c:
    // 0x16c05c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    ctx->pc = 0x16c060u;
    return;
}

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


void FUN_0014eba0_part486(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8b4u: goto label_23b8b4;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8bcu: goto label_23b8bc;
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8c8u: goto label_23b8c8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8d0u: goto label_23b8d0;
        case 0x23b8d4u: goto label_23b8d4;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e0u: goto label_23b8e0;
        case 0x23b8e4u: goto label_23b8e4;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f0u: goto label_23b8f0;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b8fcu: goto label_23b8fc;
        case 0x23b900u: goto label_23b900;
        case 0x23b904u: goto label_23b904;
        case 0x23b908u: goto label_23b908;
        case 0x23b90cu: goto label_23b90c;
        case 0x23b910u: goto label_23b910;
        case 0x23b914u: goto label_23b914;
        case 0x23b918u: goto label_23b918;
        case 0x23b91cu: goto label_23b91c;
        case 0x23b920u: goto label_23b920;
        case 0x23b924u: goto label_23b924;
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        case 0x23ba20u: goto label_23ba20;
        case 0x23ba24u: goto label_23ba24;
        case 0x23ba28u: goto label_23ba28;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba30u: goto label_23ba30;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba38u: goto label_23ba38;
        case 0x23ba3cu: goto label_23ba3c;
        case 0x23ba40u: goto label_23ba40;
        case 0x23ba44u: goto label_23ba44;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba4cu: goto label_23ba4c;
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba54u: goto label_23ba54;
        case 0x23ba58u: goto label_23ba58;
        case 0x23ba5cu: goto label_23ba5c;
        case 0x23ba60u: goto label_23ba60;
        case 0x23ba64u: goto label_23ba64;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba70u: goto label_23ba70;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba78u: goto label_23ba78;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba80u: goto label_23ba80;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba88u: goto label_23ba88;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23ba90u: goto label_23ba90;
        case 0x23ba94u: goto label_23ba94;
        case 0x23ba98u: goto label_23ba98;
        case 0x23ba9cu: goto label_23ba9c;
        case 0x23baa0u: goto label_23baa0;
        case 0x23baa4u: goto label_23baa4;
        case 0x23baa8u: goto label_23baa8;
        case 0x23baacu: goto label_23baac;
        case 0x23bab0u: goto label_23bab0;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bab8u: goto label_23bab8;
        case 0x23babcu: goto label_23babc;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bac4u: goto label_23bac4;
        case 0x23bac8u: goto label_23bac8;
        case 0x23baccu: goto label_23bacc;
        case 0x23bad0u: goto label_23bad0;
        case 0x23bad4u: goto label_23bad4;
        case 0x23bad8u: goto label_23bad8;
        case 0x23badcu: goto label_23badc;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bae4u: goto label_23bae4;
        case 0x23bae8u: goto label_23bae8;
        case 0x23baecu: goto label_23baec;
        case 0x23baf0u: goto label_23baf0;
        case 0x23baf4u: goto label_23baf4;
        case 0x23baf8u: goto label_23baf8;
        case 0x23bafcu: goto label_23bafc;
        case 0x23bb00u: goto label_23bb00;
        case 0x23bb04u: goto label_23bb04;
        case 0x23bb08u: goto label_23bb08;
        case 0x23bb0cu: goto label_23bb0c;
        case 0x23bb10u: goto label_23bb10;
        case 0x23bb14u: goto label_23bb14;
        case 0x23bb18u: goto label_23bb18;
        case 0x23bb1cu: goto label_23bb1c;
        case 0x23bb20u: goto label_23bb20;
        case 0x23bb24u: goto label_23bb24;
        case 0x23bb28u: goto label_23bb28;
        case 0x23bb2cu: goto label_23bb2c;
        case 0x23bb30u: goto label_23bb30;
        case 0x23bb34u: goto label_23bb34;
        case 0x23bb38u: goto label_23bb38;
        case 0x23bb3cu: goto label_23bb3c;
        case 0x23bb40u: goto label_23bb40;
        case 0x23bb44u: goto label_23bb44;
        case 0x23bb48u: goto label_23bb48;
        case 0x23bb4cu: goto label_23bb4c;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb54u: goto label_23bb54;
        case 0x23bb58u: goto label_23bb58;
        case 0x23bb5cu: goto label_23bb5c;
        case 0x23bb60u: goto label_23bb60;
        case 0x23bb64u: goto label_23bb64;
        case 0x23bb68u: goto label_23bb68;
        case 0x23bb6cu: goto label_23bb6c;
        case 0x23bb70u: goto label_23bb70;
        case 0x23bb74u: goto label_23bb74;
        case 0x23bb78u: goto label_23bb78;
        case 0x23bb7cu: goto label_23bb7c;
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb84u: goto label_23bb84;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb8cu: goto label_23bb8c;
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
        default: return;
    }

label_23b8b0:
    if (ctx->pc == 0x23B8B0u) {
        ctx->pc = 0x23B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8ACu;
        // 0x23b8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8B4u;
        goto label_23b8b4;
    }
    ctx->pc = 0x23B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8ACu;
        // 0x23b8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B8B4u;
label_23b8b4:
    // 0x23b8b4: 0x0  nop
    ctx->pc = 0x23b8b4u;
    // NOP
label_23b8b8:
    // 0x23b8b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23b8bc:
    // 0x23b8bc: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_23b8c0:
    // 0x23b8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b8c4:
    // 0x23b8c4: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x23b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_23b8c8:
    // 0x23b8c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b8cc:
    // 0x23b8cc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x23b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_23b8d0:
    // 0x23b8d0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_23b8d4:
    // 0x23b8d4: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x23b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_23b8d8:
    // 0x23b8d8: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x23b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_23b8dc:
    // 0x23b8dc: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x23b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_23b8e0:
    // 0x23b8e0: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x23b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_23b8e4:
    // 0x23b8e4: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x23b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_23b8e8:
    // 0x23b8e8: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x23b8e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_23b8ec:
    // 0x23b8ec: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x23b8ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_23b8f0:
    // 0x23b8f0: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x23b8f0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23b8f4:
    // 0x23b8f4: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x23b8f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_23b8f8:
    // 0x23b8f8: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x23b8f8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_23b8fc:
    // 0x23b8fc: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x23b8fcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_23b900:
    // 0x23b900: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x23b900u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23b904:
    // 0x23b904: 0xe7b30034  swc1        $f19, 0x34($sp)
    ctx->pc = 0x23b904u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_23b908:
    // 0x23b908: 0x8d820818  lw          $v0, 0x818($t4)
    ctx->pc = 0x23b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 2072)));
label_23b90c:
    // 0x23b90c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23b910:
    // 0x23b910: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x23b910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_23b914:
    // 0x23b914: 0xc08f650  jal         func_23D940
label_23b918:
    if (ctx->pc == 0x23B918u) {
        ctx->pc = 0x23B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B914u;
        // 0x23b918: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B91Cu;
        goto label_23b91c;
    }
    ctx->pc = 0x23B914u;
    SET_GPR_U32(ctx, 31, 0x23B91Cu);
    ctx->pc = 0x23B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B914u;
    // 0x23b918: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    { ctx->pc = 0x23d940; return; }
    ctx->pc = 0x23B91Cu;
label_23b91c:
    // 0x23b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b920:
    // 0x23b920: 0x3e00008  jr          $ra
label_23b924:
    if (ctx->pc == 0x23B924u) {
        ctx->pc = 0x23B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B920u;
        // 0x23b924: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B928u;
        goto label_23b928;
    }
    ctx->pc = 0x23B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B920u;
        // 0x23b924: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B928u;
label_23b928:
    // 0x23b928: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23b92c:
    // 0x23b92c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x23b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_23b930:
    // 0x23b930: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x23b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_23b934:
    // 0x23b934: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x23b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_23b938:
    // 0x23b938: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x23b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_23b93c:
    // 0x23b93c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x23b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_23b940:
    // 0x23b940: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x23b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_23b944:
    // 0x23b944: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x23b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_23b948:
    // 0x23b948: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23b948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_23b94c:
    // 0x23b94c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x23b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_23b950:
    // 0x23b950: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23b950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23b954:
    // 0x23b954: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x23b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_23b958:
    // 0x23b958: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23b958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b95c:
    // 0x23b95c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x23b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_23b960:
    // 0x23b960: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23b964:
    // 0x23b964: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x23b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_23b968:
    // 0x23b968: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23b96c:
    if (ctx->pc == 0x23B96Cu) {
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B970u;
        goto label_23b970;
    }
    ctx->pc = 0x23B968u;
    {
        const bool branch_taken_0x23b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b968) {
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B970u;
label_23b970:
    // 0x23b970: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x23b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_23b974:
    // 0x23b974: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_23b978:
    if (ctx->pc == 0x23B978u) {
        ctx->pc = 0x23B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B974u;
        // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B97Cu;
        goto label_23b97c;
    }
    ctx->pc = 0x23B974u;
    {
        const bool branch_taken_0x23b974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b974) {
            ctx->pc = 0x23B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B974u;
            // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B97Cu;
label_23b97c:
    // 0x23b97c: 0x3a820008  xori        $v0, $s4, 0x8
    ctx->pc = 0x23b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)8);
label_23b980:
    // 0x23b980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23b980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23b984:
    // 0x23b984: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23b984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23b988:
    // 0x23b988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b98c:
    // 0x23b98c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23b990:
    // 0x23b990: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_23b994:
    if (ctx->pc == 0x23B994u) {
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B998u;
        goto label_23b998;
    }
    ctx->pc = 0x23B990u;
    {
        const bool branch_taken_0x23b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b990) {
            ctx->pc = 0x23BA98u;
            goto label_23ba98;
        }
    }
    ctx->pc = 0x23B998u;
label_23b998:
    // 0x23b998: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x23b998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23b99c:
    // 0x23b99c: 0x2d49821  addu        $s3, $s6, $s4
    ctx->pc = 0x23b99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_23b9a0:
    // 0x23b9a0: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23b9a4:
    // 0x23b9a4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23b9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23b9a8:
    // 0x23b9a8: 0x5040024f  beql        $v0, $zero, . + 4 + (0x24F << 2)
label_23b9ac:
    if (ctx->pc == 0x23B9ACu) {
        ctx->pc = 0x23B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A8u;
        // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9B0u;
        goto label_23b9b0;
    }
    ctx->pc = 0x23B9A8u;
    {
        const bool branch_taken_0x23b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9a8) {
            ctx->pc = 0x23B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B9A8u;
            // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E8u;
            { ctx->pc = 0x23c2e8; return; }
        }
    }
    ctx->pc = 0x23B9B0u;
label_23b9b0:
    // 0x23b9b0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x23b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_23b9b4:
    // 0x23b9b4: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23b9b8:
    // 0x23b9b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b9bc:
    // 0x23b9bc: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_23b9c0:
    // 0x23b9c0: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x23b9c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_23b9c4:
    // 0x23b9c4: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x23b9c4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23b9c8:
    // 0x23b9c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b9cc:
    if (ctx->pc == 0x23B9CCu) {
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9D0u;
        goto label_23b9d0;
    }
    ctx->pc = 0x23B9C8u;
    {
        const bool branch_taken_0x23b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c8) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9D0u;
label_23b9d0:
    // 0x23b9d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_23b9d4:
    if (ctx->pc == 0x23B9D4u) {
        ctx->pc = 0x23B9D8u;
        goto label_23b9d8;
    }
    ctx->pc = 0x23B9D0u;
    {
        const bool branch_taken_0x23b9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b9d0) {
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x23b9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_23b9dc:
    // 0x23b9dc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x23b9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23b9e0:
    // 0x23b9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x23b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_23b9e4:
    // 0x23b9e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23b9e8:
    if (ctx->pc == 0x23B9E8u) {
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9ECu;
        goto label_23b9ec;
    }
    ctx->pc = 0x23B9E4u;
    {
        const bool branch_taken_0x23b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e4) {
            ctx->pc = 0x23BA50u;
            goto label_23ba50;
        }
    }
    ctx->pc = 0x23B9ECu;
label_23b9ec:
    // 0x23b9ec: 0x0  nop
    ctx->pc = 0x23b9ecu;
    // NOP
label_23b9f0:
    // 0x23b9f0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_23b9f4:
    if (ctx->pc == 0x23B9F4u) {
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F8u;
        goto label_23b9f8;
    }
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BA28u;
            goto label_23ba28;
        }
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x23b9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_23b9fc:
    // 0x23b9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba00:
    // 0x23ba00: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23ba00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23ba04:
    // 0x23ba04: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23ba04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23ba08:
    // 0x23ba08: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23ba08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23ba0c:
    // 0x23ba0c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23ba10:
    // 0x23ba10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23ba14:
    // 0x23ba14: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23ba18:
    // 0x23ba18: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23ba1c:
    if (ctx->pc == 0x23BA1Cu) {
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA20u;
        goto label_23ba20;
    }
    ctx->pc = 0x23BA18u;
    {
        const bool branch_taken_0x23ba18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba18) {
            ctx->pc = 0x23BA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba00;
        }
    }
    ctx->pc = 0x23BA20u;
label_23ba20:
    // 0x23ba20: 0x1000000c  b           . + 4 + (0xC << 2)
label_23ba24:
    if (ctx->pc == 0x23BA24u) {
        ctx->pc = 0x23BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA20u;
        // 0x23ba24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA28u;
        goto label_23ba28;
    }
    ctx->pc = 0x23BA20u;
    {
        const bool branch_taken_0x23ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA20u;
        // 0x23ba24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba20) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA28u;
label_23ba28:
    // 0x23ba28: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x23ba28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_23ba2c:
    // 0x23ba2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23ba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba30:
    // 0x23ba30: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23ba34:
    // 0x23ba34: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23ba34u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23ba38:
    // 0x23ba38: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23ba38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23ba3c:
    // 0x23ba3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23ba40:
    // 0x23ba40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ba44:
    // 0x23ba44: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23ba44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23ba48:
    // 0x23ba48: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23ba4c:
    if (ctx->pc == 0x23BA4Cu) {
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA50u;
        goto label_23ba50;
    }
    ctx->pc = 0x23BA48u;
    {
        const bool branch_taken_0x23ba48 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba48) {
            ctx->pc = 0x23BA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba30;
        }
    }
    ctx->pc = 0x23BA50u;
label_23ba50:
    // 0x23ba50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba54:
    // 0x23ba54: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x23ba54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23ba58:
    // 0x23ba58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23ba5c:
    if (ctx->pc == 0x23BA5Cu) {
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA60u;
        goto label_23ba60;
    }
    ctx->pc = 0x23BA58u;
    {
        const bool branch_taken_0x23ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba58) {
            ctx->pc = 0x23BA7Cu;
            goto label_23ba7c;
        }
    }
    ctx->pc = 0x23BA60u;
label_23ba60:
    // 0x23ba60: 0x2148823  subu        $s1, $s0, $s4
    ctx->pc = 0x23ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_23ba64:
    // 0x23ba64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ba68:
    // 0x23ba68: 0x3c0f809  jalr        $fp
label_23ba6c:
    if (ctx->pc == 0x23BA6Cu) {
        ctx->pc = 0x23BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA68u;
        // 0x23ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA70u;
        goto label_23ba70;
    }
    ctx->pc = 0x23BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BA70u);
        ctx->pc = 0x23BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA68u;
        // 0x23ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA68u, 0x23BA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BA70u;
label_23ba70:
    // 0x23ba70: 0x5c40ffd7  bgtzl       $v0, . + 4 + (-0x29 << 2)
label_23ba74:
    if (ctx->pc == 0x23BA74u) {
        ctx->pc = 0x23BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA70u;
        // 0x23ba74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA78u;
        goto label_23ba78;
    }
    ctx->pc = 0x23BA70u;
    {
        const bool branch_taken_0x23ba70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23ba70) {
            ctx->pc = 0x23BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA70u;
            // 0x23ba74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b9d0;
        }
    }
    ctx->pc = 0x23BA78u;
label_23ba78:
    // 0x23ba78: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23ba7c:
    // 0x23ba7c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23ba80:
    // 0x23ba80: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23ba80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23ba84:
    // 0x23ba84: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_23ba88:
    if (ctx->pc == 0x23BA88u) {
        ctx->pc = 0x23BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA84u;
        // 0x23ba88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA8Cu;
        goto label_23ba8c;
    }
    ctx->pc = 0x23BA84u;
    {
        const bool branch_taken_0x23ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ba84) {
            ctx->pc = 0x23BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA84u;
            // 0x23ba88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA8Cu;
label_23ba8c:
    // 0x23ba8c: 0x10000216  b           . + 4 + (0x216 << 2)
label_23ba90:
    if (ctx->pc == 0x23BA90u) {
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA94u;
        goto label_23ba94;
    }
    ctx->pc = 0x23BA8Cu;
    {
        const bool branch_taken_0x23ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba8c) {
            ctx->pc = 0x23C2E8u;
            { ctx->pc = 0x23c2e8; return; }
        }
    }
    ctx->pc = 0x23BA94u;
label_23ba94:
    // 0x23ba94: 0x0  nop
    ctx->pc = 0x23ba94u;
    // NOP
label_23ba98:
    // 0x23ba98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23ba9c:
    // 0x23ba9c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_23baa0:
    // 0x23baa0: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23baa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23baa4:
    // 0x23baa4: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x23baa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_23baa8:
    // 0x23baa8: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
label_23baac:
    if (ctx->pc == 0x23BAACu) {
        ctx->pc = 0x23BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAA8u;
        // 0x23baac: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAB0u;
        goto label_23bab0;
    }
    ctx->pc = 0x23BAA8u;
    {
        const bool branch_taken_0x23baa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAA8u;
        // 0x23baac: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baa8) {
            ctx->pc = 0x23BCE8u;
            goto label_23bce8;
        }
    }
    ctx->pc = 0x23BAB0u;
label_23bab0:
    // 0x23bab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23bab4:
    // 0x23bab4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x23bab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bab8:
    // 0x23bab8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23babc:
    // 0x23babc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23bac0:
    // 0x23bac0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23bac4:
    // 0x23bac4: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x23bac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_23bac8:
    // 0x23bac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23bacc:
    // 0x23bacc: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x23baccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23bad0:
    // 0x23bad0: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_23bad4:
    if (ctx->pc == 0x23BAD4u) {
        ctx->pc = 0x23BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAD0u;
        // 0x23bad4: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAD8u;
        goto label_23bad8;
    }
    ctx->pc = 0x23BAD0u;
    {
        const bool branch_taken_0x23bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAD0u;
        // 0x23bad4: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bad0) {
            ctx->pc = 0x23BC68u;
            goto label_23bc68;
        }
    }
    ctx->pc = 0x23BAD8u;
label_23bad8:
    // 0x23bad8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23badc:
    // 0x23badc: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x23badcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_23bae0:
    // 0x23bae0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23bae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bae4:
    // 0x23bae4: 0x54b818  mult        $s7, $v0, $s4
    ctx->pc = 0x23bae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_23bae8:
    // 0x23bae8: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x23bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_23baec:
    // 0x23baec: 0x2d78021  addu        $s0, $s6, $s7
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_23baf0:
    // 0x23baf0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_23baf4:
    // 0x23baf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23baf8:
    // 0x23baf8: 0x3c0f809  jalr        $fp
label_23bafc:
    if (ctx->pc == 0x23BAFCu) {
        ctx->pc = 0x23BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF8u;
        // 0x23bafc: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB00u;
        goto label_23bb00;
    }
    ctx->pc = 0x23BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB00u);
        ctx->pc = 0x23BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF8u;
        // 0x23bafc: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAF8u, 0x23BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB00u;
label_23bb00:
    // 0x23bb00: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_23bb04:
    if (ctx->pc == 0x23BB04u) {
        ctx->pc = 0x23BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB00u;
        // 0x23bb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB08u;
        goto label_23bb08;
    }
    ctx->pc = 0x23BB00u;
    {
        const bool branch_taken_0x23bb00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB00u;
        // 0x23bb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb00) {
            ctx->pc = 0x23BB30u;
            goto label_23bb30;
        }
    }
    ctx->pc = 0x23BB08u;
label_23bb08:
    // 0x23bb08: 0x3c0f809  jalr        $fp
label_23bb0c:
    if (ctx->pc == 0x23BB0Cu) {
        ctx->pc = 0x23BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB08u;
        // 0x23bb0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB10u;
        goto label_23bb10;
    }
    ctx->pc = 0x23BB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB10u);
        ctx->pc = 0x23BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB08u;
        // 0x23bb0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB08u, 0x23BB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB10u;
label_23bb10:
    // 0x23bb10: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_23bb14:
    if (ctx->pc == 0x23BB14u) {
        ctx->pc = 0x23BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB10u;
        // 0x23bb14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB18u;
        goto label_23bb18;
    }
    ctx->pc = 0x23BB10u;
    {
        const bool branch_taken_0x23bb10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB10u;
        // 0x23bb14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb10) {
            ctx->pc = 0x23BB60u;
            goto label_23bb60;
        }
    }
    ctx->pc = 0x23BB18u;
label_23bb18:
    // 0x23bb18: 0x3c0f809  jalr        $fp
label_23bb1c:
    if (ctx->pc == 0x23BB1Cu) {
        ctx->pc = 0x23BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB18u;
        // 0x23bb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB20u;
        goto label_23bb20;
    }
    ctx->pc = 0x23BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB20u);
        ctx->pc = 0x23BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB18u;
        // 0x23bb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB18u, 0x23BB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB20u;
label_23bb20:
    // 0x23bb20: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x23bb20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23bb24:
    // 0x23bb24: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bb28:
    // 0x23bb28: 0x1000000e  b           . + 4 + (0xE << 2)
label_23bb2c:
    if (ctx->pc == 0x23BB2Cu) {
        ctx->pc = 0x23BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB28u;
        // 0x23bb2c: 0x2c2180a  movz        $v1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB30u;
        goto label_23bb30;
    }
    ctx->pc = 0x23BB28u;
    {
        const bool branch_taken_0x23bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB28u;
        // 0x23bb2c: 0x2c2180a  movz        $v1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb28) {
            ctx->pc = 0x23BB64u;
            goto label_23bb64;
        }
    }
    ctx->pc = 0x23BB30u;
label_23bb30:
    // 0x23bb30: 0x3c0f809  jalr        $fp
label_23bb34:
    if (ctx->pc == 0x23BB34u) {
        ctx->pc = 0x23BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB30u;
        // 0x23bb34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB38u;
        goto label_23bb38;
    }
    ctx->pc = 0x23BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB38u);
        ctx->pc = 0x23BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB30u;
        // 0x23bb34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB30u, 0x23BB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB38u;
label_23bb38:
    // 0x23bb38: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_23bb3c:
    if (ctx->pc == 0x23BB3Cu) {
        ctx->pc = 0x23BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB38u;
        // 0x23bb3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB40u;
        goto label_23bb40;
    }
    ctx->pc = 0x23BB38u;
    {
        const bool branch_taken_0x23bb38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB38u;
        // 0x23bb3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb38) {
            ctx->pc = 0x23BB64u;
            goto label_23bb64;
        }
    }
    ctx->pc = 0x23BB40u;
label_23bb40:
    // 0x23bb40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23bb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bb44:
    // 0x23bb44: 0x3c0f809  jalr        $fp
label_23bb48:
    if (ctx->pc == 0x23BB48u) {
        ctx->pc = 0x23BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB44u;
        // 0x23bb48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB4Cu;
        goto label_23bb4c;
    }
    ctx->pc = 0x23BB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB4Cu);
        ctx->pc = 0x23BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB44u;
        // 0x23bb48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB44u, 0x23BB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23bb4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bb50:
    // 0x23bb50: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23bb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23bb54:
    // 0x23bb54: 0x10000003  b           . + 4 + (0x3 << 2)
label_23bb58:
    if (ctx->pc == 0x23BB58u) {
        ctx->pc = 0x23BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB54u;
        // 0x23bb58: 0x222180a  movz        $v1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB5Cu;
        goto label_23bb5c;
    }
    ctx->pc = 0x23BB54u;
    {
        const bool branch_taken_0x23bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB54u;
        // 0x23bb58: 0x222180a  movz        $v1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb54) {
            ctx->pc = 0x23BB64u;
            goto label_23bb64;
        }
    }
    ctx->pc = 0x23BB5Cu;
label_23bb5c:
    // 0x23bb5c: 0x0  nop
    ctx->pc = 0x23bb5cu;
    // NOP
label_23bb60:
    // 0x23bb60: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x23bb60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bb64:
    // 0x23bb64: 0x2779023  subu        $s2, $s3, $s7
    ctx->pc = 0x23bb64u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_23bb68:
    // 0x23bb68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23bb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bb6c:
    // 0x23bb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bb70:
    // 0x23bb70: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x23bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23bb74:
    // 0x23bb74: 0x3c0f809  jalr        $fp
label_23bb78:
    if (ctx->pc == 0x23BB78u) {
        ctx->pc = 0x23BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB74u;
        // 0x23bb78: 0x2778821  addu        $s1, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB7Cu;
        goto label_23bb7c;
    }
    ctx->pc = 0x23BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB7Cu);
        ctx->pc = 0x23BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB74u;
        // 0x23bb78: 0x2778821  addu        $s1, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB74u, 0x23BB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB7Cu;
label_23bb7c:
    // 0x23bb7c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_23bb80:
    if (ctx->pc == 0x23BB80u) {
        ctx->pc = 0x23BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB7Cu;
        // 0x23bb80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB84u;
        goto label_23bb84;
    }
    ctx->pc = 0x23BB7Cu;
    {
        const bool branch_taken_0x23bb7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB7Cu;
        // 0x23bb80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb7c) {
            ctx->pc = 0x23BBB0u;
            goto label_23bbb0;
        }
    }
    ctx->pc = 0x23BB84u;
label_23bb84:
    // 0x23bb84: 0x3c0f809  jalr        $fp
label_23bb88:
    if (ctx->pc == 0x23BB88u) {
        ctx->pc = 0x23BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB84u;
        // 0x23bb88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB8Cu;
        goto label_23bb8c;
    }
    ctx->pc = 0x23BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BB8Cu);
        ctx->pc = 0x23BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB84u;
        // 0x23bb88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB84u, 0x23BB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB8Cu;
label_23bb8c:
    // 0x23bb8c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
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
            { ctx->pc = 0x23c150; return; }
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
            { ctx->pc = 0x23c2e8; return; }
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
    ctx->pc = 0x23c080u;
    return;
}

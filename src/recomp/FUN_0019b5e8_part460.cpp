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


void FUN_0019b5e8_part460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
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
        default: return;
    }

label_27b7d8:
    // 0x27b7d8: 0x0  nop
    ctx->pc = 0x27b7d8u;
    // NOP
label_27b7dc:
    // 0x27b7dc: 0x0  nop
    ctx->pc = 0x27b7dcu;
    // NOP
label_27b7e0:
    // 0x27b7e0: 0x12601  .word       0x00012601                   # INVALID     $zero, $at, 0x2601 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27B7E0 raw=0x00012601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b7e4:
    // 0x27b7e4: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27b7e8:
    // 0x27b7e8: 0x0  nop
    ctx->pc = 0x27b7e8u;
    // NOP
label_27b7ec:
    // 0x27b7ec: 0x0  nop
    ctx->pc = 0x27b7ecu;
    // NOP
label_27b7f0:
    // 0x27b7f0: 0x1261b  .word       0x0001261B                   # divu        $a0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7f0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27b7f4:
    // 0x27b7f4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x27b7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b7f8:
    // 0x27b7f8: 0x0  nop
    ctx->pc = 0x27b7f8u;
    // NOP
label_27b7fc:
    // 0x27b7fc: 0x0  nop
    ctx->pc = 0x27b7fcu;
    // NOP
label_27b800:
    // 0x27b800: 0x12629  .word       0x00012629                   # mtsa        $zero # 00012600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b800u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27b804:
    // 0x27b804: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x27b804u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27b808:
    // 0x27b808: 0x0  nop
    ctx->pc = 0x27b808u;
    // NOP
label_27b80c:
    // 0x27b80c: 0x0  nop
    ctx->pc = 0x27b80cu;
    // NOP
label_27b810:
    // 0x27b810: 0x1263b  dsra        $a0, $at, 24
    ctx->pc = 0x27b810u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 24);
label_27b814:
    // 0x27b814: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x27b814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b818:
    // 0x27b818: 0x0  nop
    ctx->pc = 0x27b818u;
    // NOP
label_27b81c:
    // 0x27b81c: 0x0  nop
    ctx->pc = 0x27b81cu;
    // NOP
label_27b820:
    // 0x27b820: 0x12645  .word       0x00012645                   # INVALID     $zero, $at, 0x2645 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B820 raw=0x00012645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b824:
    // 0x27b824: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27b828:
    // 0x27b828: 0x0  nop
    ctx->pc = 0x27b828u;
    // NOP
label_27b82c:
    // 0x27b82c: 0x0  nop
    ctx->pc = 0x27b82cu;
    // NOP
label_27b830:
    // 0x27b830: 0x12656  .word       0x00012656                   # dsrlv       $a0, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b834:
    // 0x27b834: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b834u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27b838:
    // 0x27b838: 0x0  nop
    ctx->pc = 0x27b838u;
    // NOP
label_27b83c:
    // 0x27b83c: 0x0  nop
    ctx->pc = 0x27b83cu;
    // NOP
label_27b840:
    // 0x27b840: 0x12663  .word       0x00012663                   # negu        $a0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b844:
    // 0x27b844: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x27b844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b848:
    // 0x27b848: 0x0  nop
    ctx->pc = 0x27b848u;
    // NOP
label_27b84c:
    // 0x27b84c: 0x0  nop
    ctx->pc = 0x27b84cu;
    // NOP
label_27b850:
    // 0x27b850: 0x12674  teq         $zero, $at, 153
    ctx->pc = 0x27b850u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b854:
    // 0x27b854: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27b858:
    // 0x27b858: 0x0  nop
    ctx->pc = 0x27b858u;
    // NOP
label_27b85c:
    // 0x27b85c: 0x0  nop
    ctx->pc = 0x27b85cu;
    // NOP
label_27b860:
    // 0x27b860: 0x12680  sll         $a0, $at, 26
    ctx->pc = 0x27b860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_27b864:
    // 0x27b864: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b864u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27b868:
    // 0x27b868: 0x0  nop
    ctx->pc = 0x27b868u;
    // NOP
label_27b86c:
    // 0x27b86c: 0x0  nop
    ctx->pc = 0x27b86cu;
    // NOP
label_27b870:
    // 0x27b870: 0x12691  .word       0x00012691                   # mthi        $zero # 00012680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b870u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b874:
    // 0x27b874: 0xb8a0  .word       0x0000B8A0                   # add         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27b878:
    // 0x27b878: 0x0  nop
    ctx->pc = 0x27b878u;
    // NOP
label_27b87c:
    // 0x27b87c: 0x0  nop
    ctx->pc = 0x27b87cu;
    // NOP
label_27b880:
    // 0x27b880: 0x126a9  .word       0x000126A9                   # mtsa        $zero # 00012680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b880u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27b884:
    // 0x27b884: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b888:
    // 0x27b888: 0x0  nop
    ctx->pc = 0x27b888u;
    // NOP
label_27b88c:
    // 0x27b88c: 0x0  nop
    ctx->pc = 0x27b88cu;
    // NOP
label_27b890:
    // 0x27b890: 0x126bd  .word       0x000126BD                   # INVALID     $zero, $at, 0x26BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B890 raw=0x000126BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b894:
    // 0x27b894: 0xf570  tge         $zero, $zero, 981
    ctx->pc = 0x27b894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b898:
    // 0x27b898: 0x0  nop
    ctx->pc = 0x27b898u;
    // NOP
label_27b89c:
    // 0x27b89c: 0x0  nop
    ctx->pc = 0x27b89cu;
    // NOP
label_27b8a0:
    // 0x27b8a0: 0x126dc  .word       0x000126DC                   # dmult       $zero, $at # 000026C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27B8A0 raw=0x000126DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b8a4:
    // 0x27b8a4: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b8a8:
    // 0x27b8a8: 0x0  nop
    ctx->pc = 0x27b8a8u;
    // NOP
label_27b8ac:
    // 0x27b8ac: 0x0  nop
    ctx->pc = 0x27b8acu;
    // NOP
label_27b8b0:
    // 0x27b8b0: 0x126f1  tgeu        $zero, $at, 155
    ctx->pc = 0x27b8b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b8b4:
    // 0x27b8b4: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b8b8:
    // 0x27b8b8: 0x0  nop
    ctx->pc = 0x27b8b8u;
    // NOP
label_27b8bc:
    // 0x27b8bc: 0x0  nop
    ctx->pc = 0x27b8bcu;
    // NOP
label_27b8c0:
    // 0x27b8c0: 0x12707  .word       0x00012707                   # srav        $a0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b8c4:
    // 0x27b8c4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8c4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b8c8:
    // 0x27b8c8: 0x0  nop
    ctx->pc = 0x27b8c8u;
    // NOP
label_27b8cc:
    // 0x27b8cc: 0x0  nop
    ctx->pc = 0x27b8ccu;
    // NOP
label_27b8d0:
    // 0x27b8d0: 0x12711  .word       0x00012711                   # mthi        $zero # 00012700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b8d4:
    // 0x27b8d4: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b8d8:
    // 0x27b8d8: 0x0  nop
    ctx->pc = 0x27b8d8u;
    // NOP
label_27b8dc:
    // 0x27b8dc: 0x0  nop
    ctx->pc = 0x27b8dcu;
    // NOP
label_27b8e0:
    // 0x27b8e0: 0x1271d  .word       0x0001271D                   # dmultu      $zero, $at # 00002700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B8E0 raw=0x0001271D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b8e4:
    // 0x27b8e4: 0xa8a0  .word       0x0000A8A0                   # add         $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b8e8:
    // 0x27b8e8: 0x0  nop
    ctx->pc = 0x27b8e8u;
    // NOP
label_27b8ec:
    // 0x27b8ec: 0x0  nop
    ctx->pc = 0x27b8ecu;
    // NOP
label_27b8f0:
    // 0x27b8f0: 0x12733  tltu        $zero, $at, 156
    ctx->pc = 0x27b8f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b8f4:
    // 0x27b8f4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x27b8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b8f8:
    // 0x27b8f8: 0x0  nop
    ctx->pc = 0x27b8f8u;
    // NOP
label_27b8fc:
    // 0x27b8fc: 0x0  nop
    ctx->pc = 0x27b8fcu;
    // NOP
label_27b900:
    // 0x27b900: 0x12743  sra         $a0, $at, 29
    ctx->pc = 0x27b900u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 29));
label_27b904:
    // 0x27b904: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b904u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27b908:
    // 0x27b908: 0x0  nop
    ctx->pc = 0x27b908u;
    // NOP
label_27b90c:
    // 0x27b90c: 0x0  nop
    ctx->pc = 0x27b90cu;
    // NOP
label_27b910:
    // 0x27b910: 0x1274e  .word       0x0001274E                   # INVALID     $zero, $at, 0x274E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B910 raw=0x0001274E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b914:
    // 0x27b914: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_27b918:
    // 0x27b918: 0x0  nop
    ctx->pc = 0x27b918u;
    // NOP
label_27b91c:
    // 0x27b91c: 0x0  nop
    ctx->pc = 0x27b91cu;
    // NOP
label_27b920:
    // 0x27b920: 0x12764  .word       0x00012764                   # and         $a0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b924:
    // 0x27b924: 0xf4f0  tge         $zero, $zero, 979
    ctx->pc = 0x27b924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b928:
    // 0x27b928: 0x0  nop
    ctx->pc = 0x27b928u;
    // NOP
label_27b92c:
    // 0x27b92c: 0x0  nop
    ctx->pc = 0x27b92cu;
    // NOP
label_27b930:
    // 0x27b930: 0x12783  sra         $a0, $at, 30
    ctx->pc = 0x27b930u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 30));
label_27b934:
    // 0x27b934: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b934u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b938:
    // 0x27b938: 0x0  nop
    ctx->pc = 0x27b938u;
    // NOP
label_27b93c:
    // 0x27b93c: 0x0  nop
    ctx->pc = 0x27b93cu;
    // NOP
label_27b940:
    // 0x27b940: 0x12798  .word       0x00012798                   # mult        $a0, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b944:
    // 0x27b944: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b948:
    // 0x27b948: 0x0  nop
    ctx->pc = 0x27b948u;
    // NOP
label_27b94c:
    // 0x27b94c: 0x0  nop
    ctx->pc = 0x27b94cu;
    // NOP
label_27b950:
    // 0x27b950: 0x127ac  .word       0x000127AC                   # dadd        $a0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b950u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b954:
    // 0x27b954: 0x87b0  tge         $zero, $zero, 542
    ctx->pc = 0x27b954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b958:
    // 0x27b958: 0x0  nop
    ctx->pc = 0x27b958u;
    // NOP
label_27b95c:
    // 0x27b95c: 0x0  nop
    ctx->pc = 0x27b95cu;
    // NOP
label_27b960:
    // 0x27b960: 0x127bd  .word       0x000127BD                   # INVALID     $zero, $at, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B960 raw=0x000127BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b964:
    // 0x27b964: 0x6670  tge         $zero, $zero, 409
    ctx->pc = 0x27b964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b968:
    // 0x27b968: 0x0  nop
    ctx->pc = 0x27b968u;
    // NOP
label_27b96c:
    // 0x27b96c: 0x0  nop
    ctx->pc = 0x27b96cu;
    // NOP
label_27b970:
    // 0x27b970: 0x127ca  .word       0x000127CA                   # movz        $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b970u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_27b974:
    // 0x27b974: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b978:
    // 0x27b978: 0x0  nop
    ctx->pc = 0x27b978u;
    // NOP
label_27b97c:
    // 0x27b97c: 0x0  nop
    ctx->pc = 0x27b97cu;
    // NOP
label_27b980:
    // 0x27b980: 0x127d5  .word       0x000127D5                   # INVALID     $zero, $at, 0x27D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B980 raw=0x000127D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b984:
    // 0x27b984: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x27b984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b988:
    // 0x27b988: 0x0  nop
    ctx->pc = 0x27b988u;
    // NOP
label_27b98c:
    // 0x27b98c: 0x0  nop
    ctx->pc = 0x27b98cu;
    // NOP
label_27b990:
    // 0x27b990: 0x127e4  .word       0x000127E4                   # and         $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b994:
    // 0x27b994: 0x5440  sll         $t2, $zero, 17
    ctx->pc = 0x27b994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_27b998:
    // 0x27b998: 0x0  nop
    ctx->pc = 0x27b998u;
    // NOP
label_27b99c:
    // 0x27b99c: 0x0  nop
    ctx->pc = 0x27b99cu;
    // NOP
label_27b9a0:
    // 0x27b9a0: 0x127ef  .word       0x000127EF                   # dsubu       $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27b9a4:
    // 0x27b9a4: 0xa2e0  .word       0x0000A2E0                   # add         $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27b9a8:
    // 0x27b9a8: 0x0  nop
    ctx->pc = 0x27b9a8u;
    // NOP
label_27b9ac:
    // 0x27b9ac: 0x0  nop
    ctx->pc = 0x27b9acu;
    // NOP
label_27b9b0:
    // 0x27b9b0: 0x12804  sllv        $a1, $at, $zero
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b9b4:
    // 0x27b9b4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x27b9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b9b8:
    // 0x27b9b8: 0x0  nop
    ctx->pc = 0x27b9b8u;
    // NOP
label_27b9bc:
    // 0x27b9bc: 0x0  nop
    ctx->pc = 0x27b9bcu;
    // NOP
label_27b9c0:
    // 0x27b9c0: 0x12819  .word       0x00012819                   # multu       $zero, $at # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_27b9c4:
    // 0x27b9c4: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b9c8:
    // 0x27b9c8: 0x0  nop
    ctx->pc = 0x27b9c8u;
    // NOP
label_27b9cc:
    // 0x27b9cc: 0x0  nop
    ctx->pc = 0x27b9ccu;
    // NOP
label_27b9d0:
    // 0x27b9d0: 0x12825  or          $a1, $zero, $at
    ctx->pc = 0x27b9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b9d4:
    // 0x27b9d4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x27b9d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b9d8:
    // 0x27b9d8: 0x0  nop
    ctx->pc = 0x27b9d8u;
    // NOP
label_27b9dc:
    // 0x27b9dc: 0x0  nop
    ctx->pc = 0x27b9dcu;
    // NOP
label_27b9e0:
    // 0x27b9e0: 0x12831  tgeu        $zero, $at, 160
    ctx->pc = 0x27b9e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b9e4:
    // 0x27b9e4: 0xb060  .word       0x0000B060                   # add         $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27b9e8:
    // 0x27b9e8: 0x0  nop
    ctx->pc = 0x27b9e8u;
    // NOP
label_27b9ec:
    // 0x27b9ec: 0x0  nop
    ctx->pc = 0x27b9ecu;
    // NOP
label_27b9f0:
    // 0x27b9f0: 0x12848  .word       0x00012848                   # jr          $zero # 00012840 <InstrIdType: CPU_SPECIAL>
label_27b9f4:
    if (ctx->pc == 0x27B9F4u) {
        ctx->pc = 0x27B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9F0u;
        // 0x27b9f4: 0x8c40  sll         $s1, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9F8u;
        goto label_27b9f8;
    }
    ctx->pc = 0x27B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9F0u;
        // 0x27b9f4: 0x8c40  sll         $s1, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B9F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B9F8u;
label_27b9f8:
    // 0x27b9f8: 0x0  nop
    ctx->pc = 0x27b9f8u;
    // NOP
label_27b9fc:
    // 0x27b9fc: 0x0  nop
    ctx->pc = 0x27b9fcu;
    // NOP
label_27ba00:
    // 0x27ba00: 0x1285a  .word       0x0001285A                   # div         $a1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27ba04:
    // 0x27ba04: 0x9020  add         $s2, $zero, $zero
    ctx->pc = 0x27ba04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27ba08:
    // 0x27ba08: 0x0  nop
    ctx->pc = 0x27ba08u;
    // NOP
label_27ba0c:
    // 0x27ba0c: 0x0  nop
    ctx->pc = 0x27ba0cu;
    // NOP
label_27ba10:
    // 0x27ba10: 0x1286d  .word       0x0001286D                   # daddu       $a1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27ba14:
    // 0x27ba14: 0x9e80  sll         $s3, $zero, 26
    ctx->pc = 0x27ba14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_27ba18:
    // 0x27ba18: 0x0  nop
    ctx->pc = 0x27ba18u;
    // NOP
label_27ba1c:
    // 0x27ba1c: 0x0  nop
    ctx->pc = 0x27ba1cu;
    // NOP
label_27ba20:
    // 0x27ba20: 0x12881  .word       0x00012881                   # INVALID     $zero, $at, 0x2881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27BA20 raw=0x00012881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ba24:
    // 0x27ba24: 0x4670  tge         $zero, $zero, 281
    ctx->pc = 0x27ba24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ba28:
    // 0x27ba28: 0x0  nop
    ctx->pc = 0x27ba28u;
    // NOP
label_27ba2c:
    // 0x27ba2c: 0x0  nop
    ctx->pc = 0x27ba2cu;
    // NOP
label_27ba30:
    // 0x27ba30: 0x1288a  .word       0x0001288A                   # movz        $a1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba30u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_27ba34:
    // 0x27ba34: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x27ba34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27ba38:
    // 0x27ba38: 0x0  nop
    ctx->pc = 0x27ba38u;
    // NOP
label_27ba3c:
    // 0x27ba3c: 0x0  nop
    ctx->pc = 0x27ba3cu;
    // NOP
label_27ba40:
    // 0x27ba40: 0x12894  .word       0x00012894                   # dsllv       $a1, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ba44:
    // 0x27ba44: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x27ba44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27ba48:
    // 0x27ba48: 0x0  nop
    ctx->pc = 0x27ba48u;
    // NOP
label_27ba4c:
    // 0x27ba4c: 0x0  nop
    ctx->pc = 0x27ba4cu;
    // NOP
label_27ba50:
    // 0x27ba50: 0x1289d  .word       0x0001289D                   # dmultu      $zero, $at # 00002880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27BA50 raw=0x0001289D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ba54:
    // 0x27ba54: 0x38b0  tge         $zero, $zero, 226
    ctx->pc = 0x27ba54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ba58:
    // 0x27ba58: 0x0  nop
    ctx->pc = 0x27ba58u;
    // NOP
label_27ba5c:
    // 0x27ba5c: 0x0  nop
    ctx->pc = 0x27ba5cu;
    // NOP
label_27ba60:
    // 0x27ba60: 0x128a5  .word       0x000128A5                   # or          $a1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27ba64:
    // 0x27ba64: 0x4a90  .word       0x00004A90                   # mfhi        $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba64u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27ba68:
    // 0x27ba68: 0x0  nop
    ctx->pc = 0x27ba68u;
    // NOP
label_27ba6c:
    // 0x27ba6c: 0x0  nop
    ctx->pc = 0x27ba6cu;
    // NOP
label_27ba70:
    // 0x27ba70: 0x128af  .word       0x000128AF                   # dsubu       $a1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27ba74:
    // 0x27ba74: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x27ba74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ba78:
    // 0x27ba78: 0x0  nop
    ctx->pc = 0x27ba78u;
    // NOP
label_27ba7c:
    // 0x27ba7c: 0x0  nop
    ctx->pc = 0x27ba7cu;
    // NOP
label_27ba80:
    // 0x27ba80: 0x128ba  dsrl        $a1, $at, 2
    ctx->pc = 0x27ba80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> 2);
label_27ba84:
    // 0x27ba84: 0xa730  tge         $zero, $zero, 668
    ctx->pc = 0x27ba84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ba88:
    // 0x27ba88: 0x0  nop
    ctx->pc = 0x27ba88u;
    // NOP
label_27ba8c:
    // 0x27ba8c: 0x0  nop
    ctx->pc = 0x27ba8cu;
    // NOP
label_27ba90:
    // 0x27ba90: 0x128cf  .word       0x000128CF                   # sync # 00012800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ba90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27ba94:
    // 0x27ba94: 0xa170  tge         $zero, $zero, 645
    ctx->pc = 0x27ba94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ba98:
    // 0x27ba98: 0x0  nop
    ctx->pc = 0x27ba98u;
    // NOP
label_27ba9c:
    // 0x27ba9c: 0x0  nop
    ctx->pc = 0x27ba9cu;
    // NOP
label_27baa0:
    // 0x27baa0: 0x128e4  .word       0x000128E4                   # and         $a1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27baa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27baa4:
    // 0x27baa4: 0x6470  tge         $zero, $zero, 401
    ctx->pc = 0x27baa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27baa8:
    // 0x27baa8: 0x0  nop
    ctx->pc = 0x27baa8u;
    // NOP
label_27baac:
    // 0x27baac: 0x0  nop
    ctx->pc = 0x27baacu;
    // NOP
label_27bab0:
    // 0x27bab0: 0x128f1  tgeu        $zero, $at, 163
    ctx->pc = 0x27bab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27bab4:
    // 0x27bab4: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x27bab4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27bab8:
    // 0x27bab8: 0x0  nop
    ctx->pc = 0x27bab8u;
    // NOP
label_27babc:
    // 0x27babc: 0x0  nop
    ctx->pc = 0x27babcu;
    // NOP
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
    ctx->pc = 0x27bfa8u;
    return;
}

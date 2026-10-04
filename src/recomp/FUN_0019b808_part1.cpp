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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part1(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19b808u: goto label_19b808;
        case 0x19b80cu: goto label_19b80c;
        case 0x19b810u: goto label_19b810;
        case 0x19b814u: goto label_19b814;
        case 0x19b818u: goto label_19b818;
        case 0x19b81cu: goto label_19b81c;
        case 0x19b820u: goto label_19b820;
        case 0x19b824u: goto label_19b824;
        case 0x19b828u: goto label_19b828;
        case 0x19b82cu: goto label_19b82c;
        case 0x19b830u: goto label_19b830;
        case 0x19b834u: goto label_19b834;
        case 0x19b838u: goto label_19b838;
        case 0x19b83cu: goto label_19b83c;
        case 0x19b840u: goto label_19b840;
        case 0x19b844u: goto label_19b844;
        case 0x19b848u: goto label_19b848;
        case 0x19b84cu: goto label_19b84c;
        case 0x19b850u: goto label_19b850;
        case 0x19b854u: goto label_19b854;
        case 0x19b858u: goto label_19b858;
        case 0x19b85cu: goto label_19b85c;
        case 0x19b860u: goto label_19b860;
        case 0x19b864u: goto label_19b864;
        case 0x19b868u: goto label_19b868;
        case 0x19b86cu: goto label_19b86c;
        case 0x19b870u: goto label_19b870;
        case 0x19b874u: goto label_19b874;
        case 0x19b878u: goto label_19b878;
        case 0x19b87cu: goto label_19b87c;
        case 0x19b880u: goto label_19b880;
        case 0x19b884u: goto label_19b884;
        case 0x19b888u: goto label_19b888;
        case 0x19b88cu: goto label_19b88c;
        case 0x19b890u: goto label_19b890;
        case 0x19b894u: goto label_19b894;
        case 0x19b898u: goto label_19b898;
        case 0x19b89cu: goto label_19b89c;
        case 0x19b8a0u: goto label_19b8a0;
        case 0x19b8a4u: goto label_19b8a4;
        case 0x19b8a8u: goto label_19b8a8;
        case 0x19b8acu: goto label_19b8ac;
        case 0x19b8b0u: goto label_19b8b0;
        case 0x19b8b4u: goto label_19b8b4;
        case 0x19b8b8u: goto label_19b8b8;
        case 0x19b8bcu: goto label_19b8bc;
        case 0x19b8c0u: goto label_19b8c0;
        case 0x19b8c4u: goto label_19b8c4;
        case 0x19b8c8u: goto label_19b8c8;
        case 0x19b8ccu: goto label_19b8cc;
        case 0x19b8d0u: goto label_19b8d0;
        case 0x19b8d4u: goto label_19b8d4;
        case 0x19b8d8u: goto label_19b8d8;
        case 0x19b8dcu: goto label_19b8dc;
        case 0x19b8e0u: goto label_19b8e0;
        case 0x19b8e4u: goto label_19b8e4;
        case 0x19b8e8u: goto label_19b8e8;
        case 0x19b8ecu: goto label_19b8ec;
        case 0x19b8f0u: goto label_19b8f0;
        case 0x19b8f4u: goto label_19b8f4;
        case 0x19b8f8u: goto label_19b8f8;
        case 0x19b8fcu: goto label_19b8fc;
        case 0x19b900u: goto label_19b900;
        case 0x19b904u: goto label_19b904;
        case 0x19b908u: goto label_19b908;
        case 0x19b90cu: goto label_19b90c;
        case 0x19b910u: goto label_19b910;
        case 0x19b914u: goto label_19b914;
        case 0x19b918u: goto label_19b918;
        case 0x19b91cu: goto label_19b91c;
        case 0x19b920u: goto label_19b920;
        case 0x19b924u: goto label_19b924;
        case 0x19b928u: goto label_19b928;
        case 0x19b92cu: goto label_19b92c;
        case 0x19b930u: goto label_19b930;
        case 0x19b934u: goto label_19b934;
        case 0x19b938u: goto label_19b938;
        case 0x19b93cu: goto label_19b93c;
        case 0x19b940u: goto label_19b940;
        case 0x19b944u: goto label_19b944;
        case 0x19b948u: goto label_19b948;
        case 0x19b94cu: goto label_19b94c;
        case 0x19b950u: goto label_19b950;
        case 0x19b954u: goto label_19b954;
        case 0x19b958u: goto label_19b958;
        case 0x19b95cu: goto label_19b95c;
        case 0x19b960u: goto label_19b960;
        case 0x19b964u: goto label_19b964;
        case 0x19b968u: goto label_19b968;
        case 0x19b96cu: goto label_19b96c;
        case 0x19b970u: goto label_19b970;
        case 0x19b974u: goto label_19b974;
        case 0x19b978u: goto label_19b978;
        case 0x19b97cu: goto label_19b97c;
        case 0x19b980u: goto label_19b980;
        case 0x19b984u: goto label_19b984;
        case 0x19b988u: goto label_19b988;
        case 0x19b98cu: goto label_19b98c;
        case 0x19b990u: goto label_19b990;
        case 0x19b994u: goto label_19b994;
        case 0x19b998u: goto label_19b998;
        case 0x19b99cu: goto label_19b99c;
        case 0x19b9a0u: goto label_19b9a0;
        case 0x19b9a4u: goto label_19b9a4;
        case 0x19b9a8u: goto label_19b9a8;
        case 0x19b9acu: goto label_19b9ac;
        case 0x19b9b0u: goto label_19b9b0;
        case 0x19b9b4u: goto label_19b9b4;
        case 0x19b9b8u: goto label_19b9b8;
        case 0x19b9bcu: goto label_19b9bc;
        case 0x19b9c0u: goto label_19b9c0;
        case 0x19b9c4u: goto label_19b9c4;
        case 0x19b9c8u: goto label_19b9c8;
        case 0x19b9ccu: goto label_19b9cc;
        case 0x19b9d0u: goto label_19b9d0;
        case 0x19b9d4u: goto label_19b9d4;
        case 0x19b9d8u: goto label_19b9d8;
        case 0x19b9dcu: goto label_19b9dc;
        case 0x19b9e0u: goto label_19b9e0;
        case 0x19b9e4u: goto label_19b9e4;
        case 0x19b9e8u: goto label_19b9e8;
        case 0x19b9ecu: goto label_19b9ec;
        case 0x19b9f0u: goto label_19b9f0;
        case 0x19b9f4u: goto label_19b9f4;
        case 0x19b9f8u: goto label_19b9f8;
        case 0x19b9fcu: goto label_19b9fc;
        case 0x19ba00u: goto label_19ba00;
        case 0x19ba04u: goto label_19ba04;
        case 0x19ba08u: goto label_19ba08;
        case 0x19ba0cu: goto label_19ba0c;
        case 0x19ba10u: goto label_19ba10;
        case 0x19ba14u: goto label_19ba14;
        case 0x19ba18u: goto label_19ba18;
        case 0x19ba1cu: goto label_19ba1c;
        case 0x19ba20u: goto label_19ba20;
        case 0x19ba24u: goto label_19ba24;
        case 0x19ba28u: goto label_19ba28;
        case 0x19ba2cu: goto label_19ba2c;
        case 0x19ba30u: goto label_19ba30;
        case 0x19ba34u: goto label_19ba34;
        case 0x19ba38u: goto label_19ba38;
        case 0x19ba3cu: goto label_19ba3c;
        case 0x19ba40u: goto label_19ba40;
        case 0x19ba44u: goto label_19ba44;
        case 0x19ba48u: goto label_19ba48;
        case 0x19ba4cu: goto label_19ba4c;
        case 0x19ba50u: goto label_19ba50;
        case 0x19ba54u: goto label_19ba54;
        case 0x19ba58u: goto label_19ba58;
        case 0x19ba5cu: goto label_19ba5c;
        case 0x19ba60u: goto label_19ba60;
        case 0x19ba64u: goto label_19ba64;
        case 0x19ba68u: goto label_19ba68;
        case 0x19ba6cu: goto label_19ba6c;
        case 0x19ba70u: goto label_19ba70;
        case 0x19ba74u: goto label_19ba74;
        case 0x19ba78u: goto label_19ba78;
        case 0x19ba7cu: goto label_19ba7c;
        case 0x19ba80u: goto label_19ba80;
        case 0x19ba84u: goto label_19ba84;
        case 0x19ba88u: goto label_19ba88;
        case 0x19ba8cu: goto label_19ba8c;
        case 0x19ba90u: goto label_19ba90;
        case 0x19ba94u: goto label_19ba94;
        case 0x19ba98u: goto label_19ba98;
        case 0x19ba9cu: goto label_19ba9c;
        case 0x19baa0u: goto label_19baa0;
        case 0x19baa4u: goto label_19baa4;
        case 0x19baa8u: goto label_19baa8;
        case 0x19baacu: goto label_19baac;
        case 0x19bab0u: goto label_19bab0;
        case 0x19bab4u: goto label_19bab4;
        case 0x19bab8u: goto label_19bab8;
        case 0x19babcu: goto label_19babc;
        case 0x19bac0u: goto label_19bac0;
        case 0x19bac4u: goto label_19bac4;
        case 0x19bac8u: goto label_19bac8;
        case 0x19baccu: goto label_19bacc;
        case 0x19bad0u: goto label_19bad0;
        case 0x19bad4u: goto label_19bad4;
        case 0x19bad8u: goto label_19bad8;
        case 0x19badcu: goto label_19badc;
        case 0x19bae0u: goto label_19bae0;
        case 0x19bae4u: goto label_19bae4;
        case 0x19bae8u: goto label_19bae8;
        case 0x19baecu: goto label_19baec;
        case 0x19baf0u: goto label_19baf0;
        case 0x19baf4u: goto label_19baf4;
        case 0x19baf8u: goto label_19baf8;
        case 0x19bafcu: goto label_19bafc;
        case 0x19bb00u: goto label_19bb00;
        case 0x19bb04u: goto label_19bb04;
        case 0x19bb08u: goto label_19bb08;
        case 0x19bb0cu: goto label_19bb0c;
        case 0x19bb10u: goto label_19bb10;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb18u: goto label_19bb18;
        case 0x19bb1cu: goto label_19bb1c;
        case 0x19bb20u: goto label_19bb20;
        case 0x19bb24u: goto label_19bb24;
        case 0x19bb28u: goto label_19bb28;
        case 0x19bb2cu: goto label_19bb2c;
        case 0x19bb30u: goto label_19bb30;
        case 0x19bb34u: goto label_19bb34;
        case 0x19bb38u: goto label_19bb38;
        case 0x19bb3cu: goto label_19bb3c;
        case 0x19bb40u: goto label_19bb40;
        case 0x19bb44u: goto label_19bb44;
        case 0x19bb48u: goto label_19bb48;
        case 0x19bb4cu: goto label_19bb4c;
        case 0x19bb50u: goto label_19bb50;
        case 0x19bb54u: goto label_19bb54;
        case 0x19bb58u: goto label_19bb58;
        case 0x19bb5cu: goto label_19bb5c;
        case 0x19bb60u: goto label_19bb60;
        case 0x19bb64u: goto label_19bb64;
        case 0x19bb68u: goto label_19bb68;
        case 0x19bb6cu: goto label_19bb6c;
        case 0x19bb70u: goto label_19bb70;
        case 0x19bb74u: goto label_19bb74;
        case 0x19bb78u: goto label_19bb78;
        case 0x19bb7cu: goto label_19bb7c;
        case 0x19bb80u: goto label_19bb80;
        case 0x19bb84u: goto label_19bb84;
        case 0x19bb88u: goto label_19bb88;
        case 0x19bb8cu: goto label_19bb8c;
        case 0x19bb90u: goto label_19bb90;
        case 0x19bb94u: goto label_19bb94;
        case 0x19bb98u: goto label_19bb98;
        case 0x19bb9cu: goto label_19bb9c;
        case 0x19bba0u: goto label_19bba0;
        case 0x19bba4u: goto label_19bba4;
        case 0x19bba8u: goto label_19bba8;
        case 0x19bbacu: goto label_19bbac;
        case 0x19bbb0u: goto label_19bbb0;
        case 0x19bbb4u: goto label_19bbb4;
        case 0x19bbb8u: goto label_19bbb8;
        case 0x19bbbcu: goto label_19bbbc;
        case 0x19bbc0u: goto label_19bbc0;
        case 0x19bbc4u: goto label_19bbc4;
        case 0x19bbc8u: goto label_19bbc8;
        case 0x19bbccu: goto label_19bbcc;
        case 0x19bbd0u: goto label_19bbd0;
        case 0x19bbd4u: goto label_19bbd4;
        case 0x19bbd8u: goto label_19bbd8;
        case 0x19bbdcu: goto label_19bbdc;
        case 0x19bbe0u: goto label_19bbe0;
        case 0x19bbe4u: goto label_19bbe4;
        case 0x19bbe8u: goto label_19bbe8;
        case 0x19bbecu: goto label_19bbec;
        case 0x19bbf0u: goto label_19bbf0;
        case 0x19bbf4u: goto label_19bbf4;
        case 0x19bbf8u: goto label_19bbf8;
        case 0x19bbfcu: goto label_19bbfc;
        case 0x19bc00u: goto label_19bc00;
        case 0x19bc04u: goto label_19bc04;
        case 0x19bc08u: goto label_19bc08;
        case 0x19bc0cu: goto label_19bc0c;
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc14u: goto label_19bc14;
        case 0x19bc18u: goto label_19bc18;
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc20u: goto label_19bc20;
        case 0x19bc24u: goto label_19bc24;
        case 0x19bc28u: goto label_19bc28;
        case 0x19bc2cu: goto label_19bc2c;
        case 0x19bc30u: goto label_19bc30;
        case 0x19bc34u: goto label_19bc34;
        case 0x19bc38u: goto label_19bc38;
        case 0x19bc3cu: goto label_19bc3c;
        case 0x19bc40u: goto label_19bc40;
        case 0x19bc44u: goto label_19bc44;
        case 0x19bc48u: goto label_19bc48;
        case 0x19bc4cu: goto label_19bc4c;
        case 0x19bc50u: goto label_19bc50;
        case 0x19bc54u: goto label_19bc54;
        case 0x19bc58u: goto label_19bc58;
        case 0x19bc5cu: goto label_19bc5c;
        case 0x19bc60u: goto label_19bc60;
        case 0x19bc64u: goto label_19bc64;
        case 0x19bc68u: goto label_19bc68;
        case 0x19bc6cu: goto label_19bc6c;
        case 0x19bc70u: goto label_19bc70;
        case 0x19bc74u: goto label_19bc74;
        case 0x19bc78u: goto label_19bc78;
        case 0x19bc7cu: goto label_19bc7c;
        case 0x19bc80u: goto label_19bc80;
        case 0x19bc84u: goto label_19bc84;
        case 0x19bc88u: goto label_19bc88;
        case 0x19bc8cu: goto label_19bc8c;
        case 0x19bc90u: goto label_19bc90;
        case 0x19bc94u: goto label_19bc94;
        case 0x19bc98u: goto label_19bc98;
        case 0x19bc9cu: goto label_19bc9c;
        case 0x19bca0u: goto label_19bca0;
        case 0x19bca4u: goto label_19bca4;
        case 0x19bca8u: goto label_19bca8;
        case 0x19bcacu: goto label_19bcac;
        case 0x19bcb0u: goto label_19bcb0;
        case 0x19bcb4u: goto label_19bcb4;
        case 0x19bcb8u: goto label_19bcb8;
        case 0x19bcbcu: goto label_19bcbc;
        case 0x19bcc0u: goto label_19bcc0;
        case 0x19bcc4u: goto label_19bcc4;
        case 0x19bcc8u: goto label_19bcc8;
        case 0x19bcccu: goto label_19bccc;
        case 0x19bcd0u: goto label_19bcd0;
        case 0x19bcd4u: goto label_19bcd4;
        case 0x19bcd8u: goto label_19bcd8;
        case 0x19bcdcu: goto label_19bcdc;
        case 0x19bce0u: goto label_19bce0;
        case 0x19bce4u: goto label_19bce4;
        case 0x19bce8u: goto label_19bce8;
        case 0x19bcecu: goto label_19bcec;
        case 0x19bcf0u: goto label_19bcf0;
        case 0x19bcf4u: goto label_19bcf4;
        case 0x19bcf8u: goto label_19bcf8;
        case 0x19bcfcu: goto label_19bcfc;
        case 0x19bd00u: goto label_19bd00;
        case 0x19bd04u: goto label_19bd04;
        case 0x19bd08u: goto label_19bd08;
        case 0x19bd0cu: goto label_19bd0c;
        case 0x19bd10u: goto label_19bd10;
        case 0x19bd14u: goto label_19bd14;
        case 0x19bd18u: goto label_19bd18;
        case 0x19bd1cu: goto label_19bd1c;
        case 0x19bd20u: goto label_19bd20;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd28u: goto label_19bd28;
        case 0x19bd2cu: goto label_19bd2c;
        case 0x19bd30u: goto label_19bd30;
        case 0x19bd34u: goto label_19bd34;
        case 0x19bd38u: goto label_19bd38;
        case 0x19bd3cu: goto label_19bd3c;
        case 0x19bd40u: goto label_19bd40;
        case 0x19bd44u: goto label_19bd44;
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd4cu: goto label_19bd4c;
        case 0x19bd50u: goto label_19bd50;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd58u: goto label_19bd58;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd60u: goto label_19bd60;
        case 0x19bd64u: goto label_19bd64;
        case 0x19bd68u: goto label_19bd68;
        case 0x19bd6cu: goto label_19bd6c;
        case 0x19bd70u: goto label_19bd70;
        case 0x19bd74u: goto label_19bd74;
        case 0x19bd78u: goto label_19bd78;
        case 0x19bd7cu: goto label_19bd7c;
        case 0x19bd80u: goto label_19bd80;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bd88u: goto label_19bd88;
        case 0x19bd8cu: goto label_19bd8c;
        case 0x19bd90u: goto label_19bd90;
        case 0x19bd94u: goto label_19bd94;
        case 0x19bd98u: goto label_19bd98;
        case 0x19bd9cu: goto label_19bd9c;
        case 0x19bda0u: goto label_19bda0;
        case 0x19bda4u: goto label_19bda4;
        case 0x19bda8u: goto label_19bda8;
        case 0x19bdacu: goto label_19bdac;
        case 0x19bdb0u: goto label_19bdb0;
        case 0x19bdb4u: goto label_19bdb4;
        case 0x19bdb8u: goto label_19bdb8;
        case 0x19bdbcu: goto label_19bdbc;
        case 0x19bdc0u: goto label_19bdc0;
        case 0x19bdc4u: goto label_19bdc4;
        case 0x19bdc8u: goto label_19bdc8;
        case 0x19bdccu: goto label_19bdcc;
        case 0x19bdd0u: goto label_19bdd0;
        case 0x19bdd4u: goto label_19bdd4;
        case 0x19bdd8u: goto label_19bdd8;
        case 0x19bddcu: goto label_19bddc;
        case 0x19bde0u: goto label_19bde0;
        case 0x19bde4u: goto label_19bde4;
        case 0x19bde8u: goto label_19bde8;
        case 0x19bdecu: goto label_19bdec;
        case 0x19bdf0u: goto label_19bdf0;
        case 0x19bdf4u: goto label_19bdf4;
        case 0x19bdf8u: goto label_19bdf8;
        case 0x19bdfcu: goto label_19bdfc;
        case 0x19be00u: goto label_19be00;
        case 0x19be04u: goto label_19be04;
        case 0x19be08u: goto label_19be08;
        case 0x19be0cu: goto label_19be0c;
        case 0x19be10u: goto label_19be10;
        case 0x19be14u: goto label_19be14;
        case 0x19be18u: goto label_19be18;
        case 0x19be1cu: goto label_19be1c;
        case 0x19be20u: goto label_19be20;
        case 0x19be24u: goto label_19be24;
        case 0x19be28u: goto label_19be28;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be30u: goto label_19be30;
        case 0x19be34u: goto label_19be34;
        case 0x19be38u: goto label_19be38;
        case 0x19be3cu: goto label_19be3c;
        case 0x19be40u: goto label_19be40;
        case 0x19be44u: goto label_19be44;
        case 0x19be48u: goto label_19be48;
        case 0x19be4cu: goto label_19be4c;
        case 0x19be50u: goto label_19be50;
        case 0x19be54u: goto label_19be54;
        case 0x19be58u: goto label_19be58;
        case 0x19be5cu: goto label_19be5c;
        case 0x19be60u: goto label_19be60;
        case 0x19be64u: goto label_19be64;
        case 0x19be68u: goto label_19be68;
        case 0x19be6cu: goto label_19be6c;
        case 0x19be70u: goto label_19be70;
        case 0x19be74u: goto label_19be74;
        case 0x19be78u: goto label_19be78;
        case 0x19be7cu: goto label_19be7c;
        case 0x19be80u: goto label_19be80;
        case 0x19be84u: goto label_19be84;
        case 0x19be88u: goto label_19be88;
        case 0x19be8cu: goto label_19be8c;
        case 0x19be90u: goto label_19be90;
        case 0x19be94u: goto label_19be94;
        case 0x19be98u: goto label_19be98;
        case 0x19be9cu: goto label_19be9c;
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beacu: goto label_19beac;
        case 0x19beb0u: goto label_19beb0;
        case 0x19beb4u: goto label_19beb4;
        case 0x19beb8u: goto label_19beb8;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec0u: goto label_19bec0;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bec8u: goto label_19bec8;
        case 0x19beccu: goto label_19becc;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bed4u: goto label_19bed4;
        case 0x19bed8u: goto label_19bed8;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bee0u: goto label_19bee0;
        case 0x19bee4u: goto label_19bee4;
        case 0x19bee8u: goto label_19bee8;
        case 0x19beecu: goto label_19beec;
        case 0x19bef0u: goto label_19bef0;
        case 0x19bef4u: goto label_19bef4;
        case 0x19bef8u: goto label_19bef8;
        case 0x19befcu: goto label_19befc;
        case 0x19bf00u: goto label_19bf00;
        case 0x19bf04u: goto label_19bf04;
        case 0x19bf08u: goto label_19bf08;
        case 0x19bf0cu: goto label_19bf0c;
        case 0x19bf10u: goto label_19bf10;
        case 0x19bf14u: goto label_19bf14;
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf1cu: goto label_19bf1c;
        case 0x19bf20u: goto label_19bf20;
        case 0x19bf24u: goto label_19bf24;
        case 0x19bf28u: goto label_19bf28;
        case 0x19bf2cu: goto label_19bf2c;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf34u: goto label_19bf34;
        case 0x19bf38u: goto label_19bf38;
        case 0x19bf3cu: goto label_19bf3c;
        case 0x19bf40u: goto label_19bf40;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf48u: goto label_19bf48;
        case 0x19bf4cu: goto label_19bf4c;
        case 0x19bf50u: goto label_19bf50;
        case 0x19bf54u: goto label_19bf54;
        case 0x19bf58u: goto label_19bf58;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf60u: goto label_19bf60;
        case 0x19bf64u: goto label_19bf64;
        case 0x19bf68u: goto label_19bf68;
        case 0x19bf6cu: goto label_19bf6c;
        case 0x19bf70u: goto label_19bf70;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf78u: goto label_19bf78;
        case 0x19bf7cu: goto label_19bf7c;
        case 0x19bf80u: goto label_19bf80;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf8cu: goto label_19bf8c;
        case 0x19bf90u: goto label_19bf90;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bf98u: goto label_19bf98;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfacu: goto label_19bfac;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19bfb8u: goto label_19bfb8;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bfc0u: goto label_19bfc0;
        case 0x19bfc4u: goto label_19bfc4;
        case 0x19bfc8u: goto label_19bfc8;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bfd4u: goto label_19bfd4;
        default: return;
    }


    ctx->pc = 0x19b808u;

label_19b808:
    // 0x19b808: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b80c:
    // 0x19b80c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19b80cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19b810:
    // 0x19b810: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x19b810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b814:
    // 0x19b814: 0x3e00008  jr          $ra
label_19b818:
    if (ctx->pc == 0x19B818u) {
        ctx->pc = 0x19B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B814u;
        // 0x19b818: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B81Cu;
        goto label_19b81c;
    }
    ctx->pc = 0x19B814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B814u;
        // 0x19b818: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B81Cu;
label_19b81c:
    // 0x19b81c: 0x0  nop
    ctx->pc = 0x19b81cu;
    // NOP
label_19b820:
    // 0x19b820: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b824:
    // 0x19b824: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19b824u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19b828:
    // 0x19b828: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x19b828u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b82c:
    // 0x19b82c: 0x3e00008  jr          $ra
label_19b830:
    if (ctx->pc == 0x19B830u) {
        ctx->pc = 0x19B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B82Cu;
        // 0x19b830: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B834u;
        goto label_19b834;
    }
    ctx->pc = 0x19B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B82Cu;
        // 0x19b830: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B834u;
label_19b834:
    // 0x19b834: 0x0  nop
    ctx->pc = 0x19b834u;
    // NOP
label_19b838:
    // 0x19b838: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b83c:
    // 0x19b83c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19b83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19b840:
    // 0x19b840: 0x4be521aa  vmul.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x19b840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b844:
    // 0x19b844: 0x3e00008  jr          $ra
label_19b848:
    if (ctx->pc == 0x19B848u) {
        ctx->pc = 0x19B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B844u;
        // 0x19b848: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B84Cu;
        goto label_19b84c;
    }
    ctx->pc = 0x19B844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B844u;
        // 0x19b848: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B84Cu;
label_19b84c:
    // 0x19b84c: 0x0  nop
    ctx->pc = 0x19b84cu;
    // NOP
label_19b850:
    // 0x19b850: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b850u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b854:
    // 0x19b854: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19b854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19b858:
    // 0x19b858: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19b858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19b85c:
    // 0x19b85c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x19b85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b860:
    // 0x19b860: 0x3e00008  jr          $ra
label_19b864:
    if (ctx->pc == 0x19B864u) {
        ctx->pc = 0x19B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B860u;
        // 0x19b864: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B868u;
        goto label_19b868;
    }
    ctx->pc = 0x19B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B860u;
        // 0x19b864: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B868u;
label_19b868:
    // 0x19b868: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19b868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19b86c:
    // 0x19b86c: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x19b86cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19b870:
    // 0x19b870: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x19b870u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b874:
    // 0x19b874: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x19b874u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19b878:
    // 0x19b878: 0x78a90020  lq          $t1, 0x20($a1)
    ctx->pc = 0x19b878u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19b87c:
    // 0x19b87c: 0x4bc42968  vadd.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x19b87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b880:
    // 0x19b880: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x19b880u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_19b884:
    // 0x19b884: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x19b884u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
label_19b888:
    // 0x19b888: 0x7c890020  sq          $t1, 0x20($a0)
    ctx->pc = 0x19b888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 9));
label_19b88c:
    // 0x19b88c: 0x3e00008  jr          $ra
label_19b890:
    if (ctx->pc == 0x19B890u) {
        ctx->pc = 0x19B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B88Cu;
        // 0x19b890: 0xf8850030  sqc2        $vf5, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B894u;
        goto label_19b894;
    }
    ctx->pc = 0x19B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B88Cu;
        // 0x19b890: 0xf8850030  sqc2        $vf5, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B894u;
label_19b894:
    // 0x19b894: 0x0  nop
    ctx->pc = 0x19b894u;
    // NOP
label_19b898:
    // 0x19b898: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x19b898u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b89c:
    // 0x19b89c: 0x3e00008  jr          $ra
label_19b8a0:
    if (ctx->pc == 0x19B8A0u) {
        ctx->pc = 0x19B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B89Cu;
        // 0x19b8a0: 0x7c860000  sq          $a2, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8A4u;
        goto label_19b8a4;
    }
    ctx->pc = 0x19B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B89Cu;
        // 0x19b8a0: 0x7c860000  sq          $a2, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8A4u;
label_19b8a4:
    // 0x19b8a4: 0x0  nop
    ctx->pc = 0x19b8a4u;
    // NOP
label_19b8a8:
    // 0x19b8a8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x19b8a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b8ac:
    // 0x19b8ac: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x19b8acu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19b8b0:
    // 0x19b8b0: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x19b8b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19b8b4:
    // 0x19b8b4: 0x78a90030  lq          $t1, 0x30($a1)
    ctx->pc = 0x19b8b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19b8b8:
    // 0x19b8b8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x19b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_19b8bc:
    // 0x19b8bc: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x19b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
label_19b8c0:
    // 0x19b8c0: 0x7c880020  sq          $t0, 0x20($a0)
    ctx->pc = 0x19b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
label_19b8c4:
    // 0x19b8c4: 0x3e00008  jr          $ra
label_19b8c8:
    if (ctx->pc == 0x19B8C8u) {
        ctx->pc = 0x19B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8C4u;
        // 0x19b8c8: 0x7c890030  sq          $t1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8CCu;
        goto label_19b8cc;
    }
    ctx->pc = 0x19B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8C4u;
        // 0x19b8c8: 0x7c890030  sq          $t1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8CCu;
label_19b8cc:
    // 0x19b8cc: 0x0  nop
    ctx->pc = 0x19b8ccu;
    // NOP
label_19b8d0:
    // 0x19b8d0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b8d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b8d4:
    // 0x19b8d4: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    ctx->pc = 0x19b8d4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b8d8:
    // 0x19b8d8: 0x3e00008  jr          $ra
label_19b8dc:
    if (ctx->pc == 0x19B8DCu) {
        ctx->pc = 0x19B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8D8u;
        // 0x19b8dc: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8E0u;
        goto label_19b8e0;
    }
    ctx->pc = 0x19B8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8D8u;
        // 0x19b8dc: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b8e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b8e4:
    // 0x19b8e4: 0x4be5217c  vftoi0.xyzw $vf5, $vf4
    ctx->pc = 0x19b8e4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b8e8:
    // 0x19b8e8: 0x3e00008  jr          $ra
label_19b8ec:
    if (ctx->pc == 0x19B8ECu) {
        ctx->pc = 0x19B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8E8u;
        // 0x19b8ec: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8F0u;
        goto label_19b8f0;
    }
    ctx->pc = 0x19B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8E8u;
        // 0x19b8ec: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8F0u;
label_19b8f0:
    // 0x19b8f0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b8f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b8f4:
    // 0x19b8f4: 0x4be5213d  vitof4.xyzw $vf5, $vf4
    ctx->pc = 0x19b8f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b8f8:
    // 0x19b8f8: 0x3e00008  jr          $ra
label_19b8fc:
    if (ctx->pc == 0x19B8FCu) {
        ctx->pc = 0x19B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8F8u;
        // 0x19b8fc: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B900u;
        goto label_19b900;
    }
    ctx->pc = 0x19B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8F8u;
        // 0x19b8fc: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B900u;
label_19b900:
    // 0x19b900: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b904:
    // 0x19b904: 0x4be5213c  vitof0.xyzw $vf5, $vf4
    ctx->pc = 0x19b904u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b908:
    // 0x19b908: 0x3e00008  jr          $ra
label_19b90c:
    if (ctx->pc == 0x19B90Cu) {
        ctx->pc = 0x19B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B908u;
        // 0x19b90c: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B910u;
        goto label_19b910;
    }
    ctx->pc = 0x19B908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B908u;
        // 0x19b90c: 0xf8850000  sqc2        $vf5, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B910u;
label_19b910:
    // 0x19b910: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19b910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b914:
    // 0x19b914: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x19b914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b918:
    // 0x19b918: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19b918u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b91c:
    // 0x19b91c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19b91cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b920:
    // 0x19b920: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19b920u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19b924:
    // 0x19b924: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x19b924u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b928:
    // 0x19b928: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x19b928u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_19b92c:
    // 0x19b92c: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x19b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_19b930:
    // 0x19b930: 0x3e00008  jr          $ra
label_19b934:
    if (ctx->pc == 0x19B934u) {
        ctx->pc = 0x19B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B930u;
        // 0x19b934: 0xf8870000  sqc2        $vf7, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B938u;
        goto label_19b938;
    }
    ctx->pc = 0x19B930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B930u;
        // 0x19b934: 0xf8870000  sqc2        $vf7, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B938u;
label_19b938:
    // 0x19b938: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_19b93c:
    // 0x19b93c: 0x250858a0  addiu       $t0, $t0, 0x58A0
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22688));
label_19b940:
    // 0x19b940: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x19b940u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_19b944:
    // 0x19b944: 0x4a26333d  vmr32.w     $vf6, $vf6
    ctx->pc = 0x19b944u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b948:
    // 0x19b948: 0x4b060100  vaddx.x     $vf4, $vf0, $vf6x
    ctx->pc = 0x19b948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b94c:
    // 0x19b94c: 0x4b0631aa  vmul.x      $vf6, $vf6, $vf6
    ctx->pc = 0x19b94cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19b950:
    // 0x19b950: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    ctx->pc = 0x19b950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b954:
    // 0x19b954: 0x4be62a1b  vmulw.xyzw  $vf8, $vf5, $vf6w
    ctx->pc = 0x19b954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19b958:
    // 0x19b958: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x19b958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19b95c:
    // 0x19b95c: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    ctx->pc = 0x19b95cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19b960:
    // 0x19b960: 0x4bc64218  vmulx.xyz   $vf8, $vf8, $vf6x
    ctx->pc = 0x19b960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19b964:
    // 0x19b964: 0x4b082103  vaddw.x     $vf4, $vf4, $vf8w
    ctx->pc = 0x19b964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b968:
    // 0x19b968: 0x4b864218  vmulx.xy    $vf8, $vf8, $vf6x
    ctx->pc = 0x19b968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19b96c:
    // 0x19b96c: 0x4b082102  vaddz.x     $vf4, $vf4, $vf8z
    ctx->pc = 0x19b96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b970:
    // 0x19b970: 0x4b064218  vmulx.x     $vf8, $vf8, $vf6x
    ctx->pc = 0x19b970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19b974:
    // 0x19b974: 0x4b082101  vaddy.x     $vf4, $vf4, $vf8y
    ctx->pc = 0x19b974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b978:
    // 0x19b978: 0x4b082100  vaddx.x     $vf4, $vf4, $vf8x
    ctx->pc = 0x19b978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b97c:
    // 0x19b97c: 0x4b842900  vaddx.xy    $vf4, $vf5, $vf4x
    ctx->pc = 0x19b97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b980:
    // 0x19b980: 0x4b0421ea  vmul.x      $vf7, $vf4, $vf4
    ctx->pc = 0x19b980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19b984:
    // 0x19b984: 0x4a2701c4  vsubx.w     $vf7, $vf0, $vf7x
    ctx->pc = 0x19b984u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19b988:
    // 0x19b988: 0x4b8703bd  .word       0x4B8703BD                   # vsqrt       $Q, $vf7w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19b988u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19b98c:
    // 0x19b98c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19b98cu;
    // VWAITQ (Q already resolved in this runtime)
label_19b990:
    // 0x19b990: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_19b994:
    if (ctx->pc == 0x19B994u) {
        ctx->pc = 0x19B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B990u;
        // 0x19b994: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B998u;
        goto label_19b998;
    }
    ctx->pc = 0x19B990u;
    {
        const bool branch_taken_0x19b990 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B990u;
        // 0x19b994: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b990) {
            ctx->pc = 0x19B9A0u;
            goto label_19b9a0;
        }
    }
    ctx->pc = 0x19B998u;
label_19b998:
    // 0x19b998: 0x10000002  b           . + 4 + (0x2 << 2)
label_19b99c:
    if (ctx->pc == 0x19B99Cu) {
        ctx->pc = 0x19B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B998u;
        // 0x19b99c: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9A0u;
        goto label_19b9a0;
    }
    ctx->pc = 0x19B998u;
    {
        const bool branch_taken_0x19b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B998u;
        // 0x19b99c: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b998) {
            ctx->pc = 0x19B9A4u;
            goto label_19b9a4;
        }
    }
    ctx->pc = 0x19B9A0u;
label_19b9a0:
    // 0x19b9a0: 0x4b072904  vsubx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x19b9a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b9a4:
    // 0x19b9a4: 0x3e00008  jr          $ra
label_19b9a8:
    if (ctx->pc == 0x19B9A8u) {
        ctx->pc = 0x19B9ACu;
        goto label_19b9ac;
    }
    ctx->pc = 0x19B9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B9ACu;
label_19b9ac:
    // 0x19b9ac: 0x0  nop
    ctx->pc = 0x19b9acu;
    // NOP
label_19b9b0:
    // 0x19b9b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b9b4:
    // 0x19b9b4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19b9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b9b8:
    // 0x19b9b8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_19b9bc:
    // 0x19b9bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_19b9c0:
    // 0x19b9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b9c4:
    // 0x19b9c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19b9c8:
    if (ctx->pc == 0x19B9C8u) {
        ctx->pc = 0x19B9CCu;
        goto label_19b9cc;
    }
    ctx->pc = 0x19B9C4u;
    {
        const bool branch_taken_0x19b9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b9c4) {
            ctx->pc = 0x19B9D8u;
            goto label_19b9d8;
        }
    }
    ctx->pc = 0x19B9CCu;
label_19b9cc:
    // 0x19b9cc: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x19b9ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_19b9d0:
    // 0x19b9d0: 0x8066e78  j           func_19B9E0
label_19b9d4:
    if (ctx->pc == 0x19B9D4u) {
        ctx->pc = 0x19B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9D0u;
        // 0x19b9d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9D8u;
        goto label_19b9d8;
    }
    ctx->pc = 0x19B9D0u;
    ctx->pc = 0x19B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9D0u;
    // 0x19b9d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9E0u;
    goto label_19b9e0;
    ctx->pc = 0x19B9D8u;
label_19b9d8:
    // 0x19b9d8: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x19b9d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_19b9dc:
    // 0x19b9dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b9e0:
    // 0x19b9e0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19b9e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19b9e4:
    // 0x19b9e4: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19b9e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19b9e8:
    // 0x19b9e8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x19b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
label_19b9ec:
    // 0x19b9ec: 0xc066e4e  jal         func_19B938
label_19b9f0:
    if (ctx->pc == 0x19B9F0u) {
        ctx->pc = 0x19B9F4u;
        goto label_19b9f4;
    }
    ctx->pc = 0x19B9ECu;
    SET_GPR_U32(ctx, 31, 0x19B9F4u);
    ctx->pc = 0x19B938u;
    goto label_19b938;
    ctx->pc = 0x19B9F4u;
label_19b9f4:
    // 0x19b9f4: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x19b9f4u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b9f8:
    // 0x19b9f8: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19b9f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19b9fc:
    // 0x19b9fc: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19b9fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19ba00:
    // 0x19ba00: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x19ba00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19ba04:
    // 0x19ba04: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x19ba04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19ba08:
    // 0x19ba08: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x19ba08u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19ba0c:
    // 0x19ba0c: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19ba0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19ba10:
    // 0x19ba10: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x19ba10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19ba14:
    // 0x19ba14: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19ba14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19ba18:
    // 0x19ba18: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x19ba18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19ba1c:
    // 0x19ba1c: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19ba1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19ba20:
    // 0x19ba20: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19ba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19ba24:
    // 0x19ba24: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19ba24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19ba28:
    // 0x19ba28: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19ba28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19ba2c:
    // 0x19ba2c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19ba2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19ba30:
    // 0x19ba30: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19ba30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19ba34:
    // 0x19ba34: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19ba34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19ba38:
    // 0x19ba38: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x19ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_19ba3c:
    // 0x19ba3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19ba3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19ba40:
    // 0x19ba40: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x19ba40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_19ba44:
    // 0x19ba44: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
label_19ba48:
    if (ctx->pc == 0x19BA48u) {
        ctx->pc = 0x19BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA44u;
        // 0x19ba48: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA4Cu;
        goto label_19ba4c;
    }
    ctx->pc = 0x19BA44u;
    {
        const bool branch_taken_0x19ba44 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x19BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA44u;
        // 0x19ba48: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba44) {
            ctx->pc = 0x19BA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ba24;
        }
    }
    ctx->pc = 0x19BA4Cu;
label_19ba4c:
    // 0x19ba4c: 0x3e00008  jr          $ra
label_19ba50:
    if (ctx->pc == 0x19BA50u) {
        ctx->pc = 0x19BA54u;
        goto label_19ba54;
    }
    ctx->pc = 0x19BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BA54u;
label_19ba54:
    // 0x19ba54: 0x0  nop
    ctx->pc = 0x19ba54u;
    // NOP
label_19ba58:
    // 0x19ba58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ba5c:
    // 0x19ba5c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19ba5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ba60:
    // 0x19ba60: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_19ba64:
    // 0x19ba64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19ba64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_19ba68:
    // 0x19ba68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ba68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ba6c:
    // 0x19ba6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19ba70:
    if (ctx->pc == 0x19BA70u) {
        ctx->pc = 0x19BA74u;
        goto label_19ba74;
    }
    ctx->pc = 0x19BA6Cu;
    {
        const bool branch_taken_0x19ba6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ba6c) {
            ctx->pc = 0x19BA80u;
            goto label_19ba80;
        }
    }
    ctx->pc = 0x19BA74u;
label_19ba74:
    // 0x19ba74: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x19ba74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_19ba78:
    // 0x19ba78: 0x8066ea2  j           func_19BA88
label_19ba7c:
    if (ctx->pc == 0x19BA7Cu) {
        ctx->pc = 0x19BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA78u;
        // 0x19ba7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA80u;
        goto label_19ba80;
    }
    ctx->pc = 0x19BA78u;
    ctx->pc = 0x19BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA78u;
    // 0x19ba7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA88u;
    goto label_19ba88;
    ctx->pc = 0x19BA80u;
label_19ba80:
    // 0x19ba80: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x19ba80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_19ba84:
    // 0x19ba84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ba84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ba88:
    // 0x19ba88: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19ba88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19ba8c:
    // 0x19ba8c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19ba8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19ba90:
    // 0x19ba90: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x19ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
label_19ba94:
    // 0x19ba94: 0xc066e4e  jal         func_19B938
label_19ba98:
    if (ctx->pc == 0x19BA98u) {
        ctx->pc = 0x19BA9Cu;
        goto label_19ba9c;
    }
    ctx->pc = 0x19BA94u;
    SET_GPR_U32(ctx, 31, 0x19BA9Cu);
    ctx->pc = 0x19B938u;
    goto label_19b938;
    ctx->pc = 0x19BA9Cu;
label_19ba9c:
    // 0x19ba9c: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x19ba9cu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19baa0:
    // 0x19baa0: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19baa0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19baa4:
    // 0x19baa4: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19baa4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19baa8:
    // 0x19baa8: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19baa8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19baac:
    // 0x19baac: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19baacu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19bab0:
    // 0x19bab0: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x19bab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19bab4:
    // 0x19bab4: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19bab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19bab8:
    // 0x19bab8: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19bab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19babc:
    // 0x19babc: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x19babcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19bac0:
    // 0x19bac0: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19bac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19bac4:
    // 0x19bac4: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x19bac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19bac8:
    // 0x19bac8: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19bac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19bacc:
    // 0x19bacc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19bad0:
    // 0x19bad0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19bad0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19bad4:
    // 0x19bad4: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19bad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19bad8:
    // 0x19bad8: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19bad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19badc:
    // 0x19badc: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19badcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19bae0:
    // 0x19bae0: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19bae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19bae4:
    // 0x19bae4: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x19bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_19bae8:
    // 0x19bae8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19bae8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19baec:
    // 0x19baec: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x19baecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_19baf0:
    // 0x19baf0: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
label_19baf4:
    if (ctx->pc == 0x19BAF4u) {
        ctx->pc = 0x19BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAF0u;
        // 0x19baf4: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BAF8u;
        goto label_19baf8;
    }
    ctx->pc = 0x19BAF0u;
    {
        const bool branch_taken_0x19baf0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x19BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAF0u;
        // 0x19baf4: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19baf0) {
            ctx->pc = 0x19BAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bad0;
        }
    }
    ctx->pc = 0x19BAF8u;
label_19baf8:
    // 0x19baf8: 0x3e00008  jr          $ra
label_19bafc:
    if (ctx->pc == 0x19BAFCu) {
        ctx->pc = 0x19BB00u;
        goto label_19bb00;
    }
    ctx->pc = 0x19BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BB00u;
label_19bb00:
    // 0x19bb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19bb04:
    // 0x19bb04: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19bb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19bb08:
    // 0x19bb08: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_19bb0c:
    // 0x19bb0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19bb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_19bb10:
    // 0x19bb10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19bb14:
    // 0x19bb14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19bb18:
    if (ctx->pc == 0x19BB18u) {
        ctx->pc = 0x19BB1Cu;
        goto label_19bb1c;
    }
    ctx->pc = 0x19BB14u;
    {
        const bool branch_taken_0x19bb14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bb14) {
            ctx->pc = 0x19BB28u;
            goto label_19bb28;
        }
    }
    ctx->pc = 0x19BB1Cu;
label_19bb1c:
    // 0x19bb1c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x19bb1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_19bb20:
    // 0x19bb20: 0x8066ecc  j           func_19BB30
label_19bb24:
    if (ctx->pc == 0x19BB24u) {
        ctx->pc = 0x19BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB20u;
        // 0x19bb24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB28u;
        goto label_19bb28;
    }
    ctx->pc = 0x19BB20u;
    ctx->pc = 0x19BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB20u;
    // 0x19bb24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB30u;
    goto label_19bb30;
    ctx->pc = 0x19BB28u;
label_19bb28:
    // 0x19bb28: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x19bb28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_19bb2c:
    // 0x19bb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19bb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bb30:
    // 0x19bb30: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19bb30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19bb34:
    // 0x19bb34: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19bb34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19bb38:
    // 0x19bb38: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x19bb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
label_19bb3c:
    // 0x19bb3c: 0xc066e4e  jal         func_19B938
label_19bb40:
    if (ctx->pc == 0x19BB40u) {
        ctx->pc = 0x19BB44u;
        goto label_19bb44;
    }
    ctx->pc = 0x19BB3Cu;
    SET_GPR_U32(ctx, 31, 0x19BB44u);
    ctx->pc = 0x19B938u;
    goto label_19b938;
    ctx->pc = 0x19BB44u;
label_19bb44:
    // 0x19bb44: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x19bb44u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19bb48:
    // 0x19bb48: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19bb48u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19bb4c:
    // 0x19bb4c: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19bb4cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19bb50:
    // 0x19bb50: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19bb50u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19bb54:
    // 0x19bb54: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19bb54u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
label_19bb58:
    // 0x19bb58: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x19bb58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19bb5c:
    // 0x19bb5c: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19bb5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19bb60:
    // 0x19bb60: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19bb60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19bb64:
    // 0x19bb64: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x19bb64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19bb68:
    // 0x19bb68: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19bb68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19bb6c:
    // 0x19bb6c: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x19bb6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19bb70:
    // 0x19bb70: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19bb70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19bb74:
    // 0x19bb74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19bb78:
    // 0x19bb78: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19bb78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19bb7c:
    // 0x19bb7c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19bb7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19bb80:
    // 0x19bb80: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19bb80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19bb84:
    // 0x19bb84: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19bb84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19bb88:
    // 0x19bb88: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19bb88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19bb8c:
    // 0x19bb8c: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x19bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_19bb90:
    // 0x19bb90: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19bb90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19bb94:
    // 0x19bb94: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x19bb94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_19bb98:
    // 0x19bb98: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
label_19bb9c:
    if (ctx->pc == 0x19BB9Cu) {
        ctx->pc = 0x19BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB98u;
        // 0x19bb9c: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBA0u;
        goto label_19bba0;
    }
    ctx->pc = 0x19BB98u;
    {
        const bool branch_taken_0x19bb98 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x19BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB98u;
        // 0x19bb9c: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb98) {
            ctx->pc = 0x19BB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bb78;
        }
    }
    ctx->pc = 0x19BBA0u;
label_19bba0:
    // 0x19bba0: 0x3e00008  jr          $ra
label_19bba4:
    if (ctx->pc == 0x19BBA4u) {
        ctx->pc = 0x19BBA8u;
        goto label_19bba8;
    }
    ctx->pc = 0x19BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBA8u;
label_19bba8:
    // 0x19bba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19bbac:
    // 0x19bbac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19bbb0:
    // 0x19bbb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bbb4:
    // 0x19bbb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19bbb8:
    // 0x19bbb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19bbbc:
    // 0x19bbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bbc0:
    // 0x19bbc0: 0xc066e6c  jal         func_19B9B0
label_19bbc4:
    if (ctx->pc == 0x19BBC4u) {
        ctx->pc = 0x19BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBC0u;
        // 0x19bbc4: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBC8u;
        goto label_19bbc8;
    }
    ctx->pc = 0x19BBC0u;
    SET_GPR_U32(ctx, 31, 0x19BBC8u);
    ctx->pc = 0x19BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBC0u;
    // 0x19bbc4: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    goto label_19b9b0;
    ctx->pc = 0x19BBC8u;
label_19bbc8:
    // 0x19bbc8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x19bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19bbcc:
    // 0x19bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bbd0:
    // 0x19bbd0: 0xc066ec0  jal         func_19BB00
label_19bbd4:
    if (ctx->pc == 0x19BBD4u) {
        ctx->pc = 0x19BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBD0u;
        // 0x19bbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBD8u;
        goto label_19bbd8;
    }
    ctx->pc = 0x19BBD0u;
    SET_GPR_U32(ctx, 31, 0x19BBD8u);
    ctx->pc = 0x19BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBD0u;
    // 0x19bbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    goto label_19bb00;
    ctx->pc = 0x19BBD8u;
label_19bbd8:
    // 0x19bbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bbdc:
    // 0x19bbdc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x19bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19bbe0:
    // 0x19bbe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bbe4:
    // 0x19bbe4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bbe8:
    // 0x19bbe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19bbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bbec:
    // 0x19bbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bbf0:
    // 0x19bbf0: 0x8066e96  j           func_19BA58
label_19bbf4:
    if (ctx->pc == 0x19BBF4u) {
        ctx->pc = 0x19BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBF0u;
        // 0x19bbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBF8u;
        goto label_19bbf8;
    }
    ctx->pc = 0x19BBF0u;
    ctx->pc = 0x19BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBF0u;
    // 0x19bbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_19ba58;
    ctx->pc = 0x19BBF8u;
label_19bbf8:
    // 0x19bbf8: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19bbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19bbfc:
    // 0x19bbfc: 0x44096800  mfc1        $t1, $f13
    ctx->pc = 0x19bbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_19bc00:
    // 0x19bc00: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x19bc00u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19bc04:
    // 0x19bc04: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x19bc04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19bc08:
    // 0x19bc08: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x19bc08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_19bc0c:
    // 0x19bc0c: 0x4be43190  vmaxx.xyzw  $vf6, $vf6, $vf4x
    ctx->pc = 0x19bc0cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19bc10:
    // 0x19bc10: 0x4be53194  vminix.xyzw $vf6, $vf6, $vf5x
    ctx->pc = 0x19bc10u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19bc14:
    // 0x19bc14: 0x3e00008  jr          $ra
label_19bc18:
    if (ctx->pc == 0x19BC18u) {
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC1Cu;
        goto label_19bc1c;
    }
    ctx->pc = 0x19BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0x0  nop
    ctx->pc = 0x19bc1cu;
    // NOP
label_19bc20:
    // 0x19bc20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19bc24:
    // 0x19bc24: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x19bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_19bc28:
    // 0x19bc28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19bc28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bc2c:
    // 0x19bc2c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x19bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_19bc30:
    // 0x19bc30: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x19bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_19bc34:
    // 0x19bc34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19bc34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19bc38:
    // 0x19bc38: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x19bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_19bc3c:
    // 0x19bc3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19bc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19bc40:
    // 0x19bc40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19bc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19bc44:
    // 0x19bc44: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_19bc48:
    // 0x19bc48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19bc4c:
    // 0x19bc4c: 0xc066e44  jal         func_19B910
label_19bc50:
    if (ctx->pc == 0x19BC50u) {
        ctx->pc = 0x19BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC4Cu;
        // 0x19bc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC54u;
        goto label_19bc54;
    }
    ctx->pc = 0x19BC4Cu;
    SET_GPR_U32(ctx, 31, 0x19BC54u);
    ctx->pc = 0x19BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC4Cu;
    // 0x19bc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    goto label_19b910;
    ctx->pc = 0x19BC54u;
label_19bc54:
    // 0x19bc54: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19bc58:
    // 0x19bc58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bc5c:
    // 0x19bc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bc60:
    // 0x19bc60: 0xc066d98  jal         func_19B660
label_19bc64:
    if (ctx->pc == 0x19BC64u) {
        ctx->pc = 0x19BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC60u;
        // 0x19bc64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC68u;
        goto label_19bc68;
    }
    ctx->pc = 0x19BC60u;
    SET_GPR_U32(ctx, 31, 0x19BC68u);
    ctx->pc = 0x19BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC60u;
    // 0x19bc64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x19BC60u, 0x19BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC68u;
label_19bc68:
    // 0x19bc68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bc6c:
    // 0x19bc6c: 0xc066daa  jal         func_19B6A8
label_19bc70:
    if (ctx->pc == 0x19BC70u) {
        ctx->pc = 0x19BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC6Cu;
        // 0x19bc70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC74u;
        goto label_19bc74;
    }
    ctx->pc = 0x19BC6Cu;
    SET_GPR_U32(ctx, 31, 0x19BC74u);
    ctx->pc = 0x19BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC6Cu;
    // 0x19bc70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BC6Cu, 0x19BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC74u;
label_19bc74:
    // 0x19bc74: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19bc78:
    // 0x19bc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19bc7c:
    // 0x19bc7c: 0xc066daa  jal         func_19B6A8
label_19bc80:
    if (ctx->pc == 0x19BC80u) {
        ctx->pc = 0x19BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC7Cu;
        // 0x19bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC84u;
        goto label_19bc84;
    }
    ctx->pc = 0x19BC7Cu;
    SET_GPR_U32(ctx, 31, 0x19BC84u);
    ctx->pc = 0x19BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC7Cu;
    // 0x19bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BC7Cu, 0x19BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC84u;
label_19bc84:
    // 0x19bc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bc88:
    // 0x19bc88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19bc8c:
    // 0x19bc8c: 0xc066d98  jal         func_19B660
label_19bc90:
    if (ctx->pc == 0x19BC90u) {
        ctx->pc = 0x19BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC8Cu;
        // 0x19bc90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC94u;
        goto label_19bc94;
    }
    ctx->pc = 0x19BC8Cu;
    SET_GPR_U32(ctx, 31, 0x19BC94u);
    ctx->pc = 0x19BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC8Cu;
    // 0x19bc90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x19BC8Cu, 0x19BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC94u;
label_19bc94:
    // 0x19bc94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19bc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19bc98:
    // 0x19bc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19bc9c:
    // 0x19bc9c: 0xc066e1a  jal         func_19B868
label_19bca0:
    if (ctx->pc == 0x19BCA0u) {
        ctx->pc = 0x19BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC9Cu;
        // 0x19bca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCA4u;
        goto label_19bca4;
    }
    ctx->pc = 0x19BC9Cu;
    SET_GPR_U32(ctx, 31, 0x19BCA4u);
    ctx->pc = 0x19BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC9Cu;
    // 0x19bca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    goto label_19b868;
    ctx->pc = 0x19BCA4u;
label_19bca4:
    // 0x19bca4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19bca8:
    // 0x19bca8: 0xc066dcc  jal         func_19B730
label_19bcac:
    if (ctx->pc == 0x19BCACu) {
        ctx->pc = 0x19BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCA8u;
        // 0x19bcac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCB0u;
        goto label_19bcb0;
    }
    ctx->pc = 0x19BCA8u;
    SET_GPR_U32(ctx, 31, 0x19BCB0u);
    ctx->pc = 0x19BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCA8u;
    // 0x19bcac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B730u, 0x19BCA8u, 0x19BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCB0u;
label_19bcb0:
    // 0x19bcb0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19bcb4:
    // 0x19bcb4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x19bcb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19bcb8:
    // 0x19bcb8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x19bcb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19bcbc:
    // 0x19bcbc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x19bcbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19bcc0:
    // 0x19bcc0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x19bcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19bcc4:
    // 0x19bcc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x19bcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19bcc8:
    // 0x19bcc8: 0x3e00008  jr          $ra
label_19bccc:
    if (ctx->pc == 0x19BCCCu) {
        ctx->pc = 0x19BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCC8u;
        // 0x19bccc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCD0u;
        goto label_19bcd0;
    }
    ctx->pc = 0x19BCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCC8u;
        // 0x19bccc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BCD0u;
label_19bcd0:
    // 0x19bcd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19bcd4:
    // 0x19bcd4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x19bcd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19bcd8:
    // 0x19bcd8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19bcdc:
    // 0x19bcdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19bcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19bce0:
    // 0x19bce0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19bce4:
    // 0x19bce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bce8:
    // 0x19bce8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19bcec:
    // 0x19bcec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19bcf0:
    // 0x19bcf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19bcf4:
    // 0x19bcf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19bcf8:
    // 0x19bcf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bcf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19bcfc:
    // 0x19bcfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19bd00:
    // 0x19bd00: 0xc066e14  jal         func_19B850
label_19bd04:
    if (ctx->pc == 0x19BD04u) {
        ctx->pc = 0x19BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD00u;
        // 0x19bd04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD08u;
        goto label_19bd08;
    }
    ctx->pc = 0x19BD00u;
    SET_GPR_U32(ctx, 31, 0x19BD08u);
    ctx->pc = 0x19BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD00u;
    // 0x19bd04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    goto label_19b850;
    ctx->pc = 0x19BD08u;
label_19bd08:
    // 0x19bd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bd0c:
    // 0x19bd0c: 0xc066daa  jal         func_19B6A8
label_19bd10:
    if (ctx->pc == 0x19BD10u) {
        ctx->pc = 0x19BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD0Cu;
        // 0x19bd10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD14u;
        goto label_19bd14;
    }
    ctx->pc = 0x19BD0Cu;
    SET_GPR_U32(ctx, 31, 0x19BD14u);
    ctx->pc = 0x19BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD0Cu;
    // 0x19bd10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD0Cu, 0x19BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD14u;
label_19bd14:
    // 0x19bd14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bd18:
    // 0x19bd18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bd18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19bd1c:
    // 0x19bd1c: 0xc066e14  jal         func_19B850
label_19bd20:
    if (ctx->pc == 0x19BD20u) {
        ctx->pc = 0x19BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD1Cu;
        // 0x19bd20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD24u;
        goto label_19bd24;
    }
    ctx->pc = 0x19BD1Cu;
    SET_GPR_U32(ctx, 31, 0x19BD24u);
    ctx->pc = 0x19BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD1Cu;
    // 0x19bd20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    goto label_19b850;
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19bd28:
    // 0x19bd28: 0xc066daa  jal         func_19B6A8
label_19bd2c:
    if (ctx->pc == 0x19BD2Cu) {
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD30u;
        goto label_19bd30;
    }
    ctx->pc = 0x19BD28u;
    SET_GPR_U32(ctx, 31, 0x19BD30u);
    ctx->pc = 0x19BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD28u;
    // 0x19bd2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD28u, 0x19BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD30u;
label_19bd30:
    // 0x19bd30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19bd34:
    // 0x19bd34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bd34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19bd38:
    // 0x19bd38: 0xc066e14  jal         func_19B850
label_19bd3c:
    if (ctx->pc == 0x19BD3Cu) {
        ctx->pc = 0x19BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD38u;
        // 0x19bd3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD40u;
        goto label_19bd40;
    }
    ctx->pc = 0x19BD38u;
    SET_GPR_U32(ctx, 31, 0x19BD40u);
    ctx->pc = 0x19BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD38u;
    // 0x19bd3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    goto label_19b850;
    ctx->pc = 0x19BD40u;
label_19bd40:
    // 0x19bd40: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19bd44:
    // 0x19bd44: 0xc066daa  jal         func_19B6A8
label_19bd48:
    if (ctx->pc == 0x19BD48u) {
        ctx->pc = 0x19BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD44u;
        // 0x19bd48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD4Cu;
        goto label_19bd4c;
    }
    ctx->pc = 0x19BD44u;
    SET_GPR_U32(ctx, 31, 0x19BD4Cu);
    ctx->pc = 0x19BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD44u;
    // 0x19bd48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD44u, 0x19BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD4Cu;
label_19bd4c:
    // 0x19bd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19bd50:
    // 0x19bd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bd54:
    // 0x19bd54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19bd58:
    // 0x19bd58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bd5c:
    // 0x19bd5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bd60:
    // 0x19bd60: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x19bd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19bd64:
    // 0x19bd64: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x19bd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_19bd68:
    // 0x19bd68: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x19bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19bd6c:
    // 0x19bd6c: 0xc066dba  jal         func_19B6E8
label_19bd70:
    if (ctx->pc == 0x19BD70u) {
        ctx->pc = 0x19BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD6Cu;
        // 0x19bd70: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD74u;
        goto label_19bd74;
    }
    ctx->pc = 0x19BD6Cu;
    SET_GPR_U32(ctx, 31, 0x19BD74u);
    ctx->pc = 0x19BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD6Cu;
    // 0x19bd70: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6E8u, 0x19BD6Cu, 0x19BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD74u;
label_19bd74:
    // 0x19bd74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19bd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19bd78:
    // 0x19bd78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19bd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19bd7c:
    // 0x19bd7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bd80:
    // 0x19bd80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19bd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bd84:
    // 0x19bd84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x19bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19bd88:
    // 0x19bd88: 0x3e00008  jr          $ra
label_19bd8c:
    if (ctx->pc == 0x19BD8Cu) {
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD88u;
        // 0x19bd8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD90u;
        goto label_19bd90;
    }
    ctx->pc = 0x19BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD88u;
        // 0x19bd8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19bd94:
    // 0x19bd94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bd98:
    // 0x19bd98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bd9c:
    // 0x19bd9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19bd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19bda0:
    // 0x19bda0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19bda4:
    // 0x19bda4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19bda8:
    // 0x19bda8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19bdac:
    // 0x19bdac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19bdacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19bdb0:
    // 0x19bdb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19bdb4:
    // 0x19bdb4: 0xc066e26  jal         func_19B898
label_19bdb8:
    if (ctx->pc == 0x19BDB8u) {
        ctx->pc = 0x19BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDB4u;
        // 0x19bdb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDBCu;
        goto label_19bdbc;
    }
    ctx->pc = 0x19BDB4u;
    SET_GPR_U32(ctx, 31, 0x19BDBCu);
    ctx->pc = 0x19BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDB4u;
    // 0x19bdb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    goto label_19b898;
    ctx->pc = 0x19BDBCu;
label_19bdbc:
    // 0x19bdbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bdc0:
    // 0x19bdc0: 0xc066e26  jal         func_19B898
label_19bdc4:
    if (ctx->pc == 0x19BDC4u) {
        ctx->pc = 0x19BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC0u;
        // 0x19bdc4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDC8u;
        goto label_19bdc8;
    }
    ctx->pc = 0x19BDC0u;
    SET_GPR_U32(ctx, 31, 0x19BDC8u);
    ctx->pc = 0x19BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDC0u;
    // 0x19bdc4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    goto label_19b898;
    ctx->pc = 0x19BDC8u;
label_19bdc8:
    // 0x19bdc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19bdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19bdcc:
    // 0x19bdcc: 0xc066e26  jal         func_19B898
label_19bdd0:
    if (ctx->pc == 0x19BDD0u) {
        ctx->pc = 0x19BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDCCu;
        // 0x19bdd0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDD4u;
        goto label_19bdd4;
    }
    ctx->pc = 0x19BDCCu;
    SET_GPR_U32(ctx, 31, 0x19BDD4u);
    ctx->pc = 0x19BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDCCu;
    // 0x19bdd0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    goto label_19b898;
    ctx->pc = 0x19BDD4u;
label_19bdd4:
    // 0x19bdd4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19bdd8:
    // 0x19bdd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19bddc:
    // 0x19bddc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19bddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19bde0:
    // 0x19bde0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19bde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19bde4:
    // 0x19bde4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19bde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bde8:
    // 0x19bde8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19bde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bdec:
    // 0x19bdec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bdecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bdf0:
    // 0x19bdf0: 0x8066e26  j           func_19B898
label_19bdf4:
    if (ctx->pc == 0x19BDF4u) {
        ctx->pc = 0x19BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDF0u;
        // 0x19bdf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDF8u;
        goto label_19bdf8;
    }
    ctx->pc = 0x19BDF0u;
    ctx->pc = 0x19BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDF0u;
    // 0x19bdf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_19b898;
    ctx->pc = 0x19BDF8u;
label_19bdf8:
    // 0x19bdf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19bdfc:
    // 0x19bdfc: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x19bdfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
label_19be00:
    // 0x19be00: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x19be00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_19be04:
    // 0x19be04: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x19be04u;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
label_19be08:
    // 0x19be08: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x19be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19be0c:
    // 0x19be0c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x19be0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_19be10:
    // 0x19be10: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x19be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
label_19be14:
    // 0x19be14: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x19be14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
label_19be18:
    // 0x19be18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_19be1c:
    // 0x19be1c: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x19be1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
label_19be20:
    // 0x19be20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19be24:
    // 0x19be24: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x19be24u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
label_19be28:
    // 0x19be28: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x19be28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_19be2c:
    // 0x19be2c: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x19be2cu;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
label_19be30:
    // 0x19be30: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x19be30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_19be34:
    // 0x19be34: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x19be34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_19be38:
    // 0x19be38: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x19be38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_19be3c:
    // 0x19be3c: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x19be3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
label_19be40:
    // 0x19be40: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x19be40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_19be44:
    // 0x19be44: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x19be44u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
label_19be48:
    // 0x19be48: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x19be48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_19be4c:
    // 0x19be4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x19be4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_19be50:
    // 0x19be50: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x19be50u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_19be54:
    // 0x19be54: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x19be54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_19be58:
    // 0x19be58: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x19be58u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
label_19be5c:
    // 0x19be5c: 0x0  nop
    ctx->pc = 0x19be5cu;
    // NOP
label_19be60:
    // 0x19be60: 0x0  nop
    ctx->pc = 0x19be60u;
    // NOP
label_19be64:
    // 0x19be64: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x19be64u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
label_19be68:
    // 0x19be68: 0x0  nop
    ctx->pc = 0x19be68u;
    // NOP
label_19be6c:
    // 0x19be6c: 0x0  nop
    ctx->pc = 0x19be6cu;
    // NOP
label_19be70:
    // 0x19be70: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x19be70u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
label_19be74:
    // 0x19be74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19be78:
    // 0x19be78: 0xc066e44  jal         func_19B910
label_19be7c:
    if (ctx->pc == 0x19BE7Cu) {
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE80u;
        goto label_19be80;
    }
    ctx->pc = 0x19BE78u;
    SET_GPR_U32(ctx, 31, 0x19BE80u);
    ctx->pc = 0x19BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE78u;
    // 0x19be7c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    goto label_19b910;
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19be84:
    // 0x19be84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19be84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19be88:
    // 0x19be88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19be8c:
    // 0x19be8c: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x19be8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_19be90:
    // 0x19be90: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x19be90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_19be94:
    // 0x19be94: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x19be94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_19be98:
    // 0x19be98: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_19be9c:
    // 0x19be9c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x19be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19bea0:
    // 0x19bea0: 0xc066e44  jal         func_19B910
label_19bea4:
    if (ctx->pc == 0x19BEA4u) {
        ctx->pc = 0x19BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEA0u;
        // 0x19bea4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEA8u;
        goto label_19bea8;
    }
    ctx->pc = 0x19BEA0u;
    SET_GPR_U32(ctx, 31, 0x19BEA8u);
    ctx->pc = 0x19BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEA0u;
    // 0x19bea4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    goto label_19b910;
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19beac:
    // 0x19beac: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x19beacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19beb0:
    // 0x19beb0: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x19beb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19beb4:
    // 0x19beb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19beb8:
    // 0x19beb8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x19beb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_19bebc:
    // 0x19bebc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bec0:
    // 0x19bec0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x19bec0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19bec4:
    // 0x19bec4: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x19bec4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_19bec8:
    // 0x19bec8: 0xc066d86  jal         func_19B618
label_19becc:
    if (ctx->pc == 0x19BECCu) {
        ctx->pc = 0x19BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEC8u;
        // 0x19becc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BED0u;
        goto label_19bed0;
    }
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x19BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEC8u;
    // 0x19becc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x19BEC8u, 0x19BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BED0u;
label_19bed0:
    // 0x19bed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19bed4:
    // 0x19bed4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19bed8:
    // 0x19bed8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x19bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_19bedc:
    // 0x19bedc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x19bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19bee0:
    // 0x19bee0: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x19bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_19bee4:
    // 0x19bee4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x19bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19bee8:
    // 0x19bee8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x19bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19beec:
    // 0x19beec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x19beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19bef0:
    // 0x19bef0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x19bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19bef4:
    // 0x19bef4: 0x3e00008  jr          $ra
label_19bef8:
    if (ctx->pc == 0x19BEF8u) {
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEFCu;
        goto label_19befc;
    }
    ctx->pc = 0x19BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x0  nop
    ctx->pc = 0x19befcu;
    // NOP
label_19bf00:
    // 0x19bf00: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x19bf00u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_19bf04:
    // 0x19bf04: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
label_19bf08:
    if (ctx->pc == 0x19BF08u) {
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF04u;
        // 0x19bf08: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF0Cu;
        goto label_19bf0c;
    }
    ctx->pc = 0x19BF04u;
    {
        const bool branch_taken_0x19bf04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF04u;
        // 0x19bf08: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf04) {
            ctx->pc = 0x19BFB0u;
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19BF0Cu;
label_19bf0c:
    // 0x19bf0c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bf10:
    // 0x19bf10: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x19bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19bf14:
    // 0x19bf14: 0x46018242  mul.s       $f9, $f16, $f1
    ctx->pc = 0x19bf14u;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
label_19bf18:
    // 0x19bf18: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x19bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19bf1c:
    // 0x19bf1c: 0x46027a82  mul.s       $f10, $f15, $f2
    ctx->pc = 0x19bf1cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
label_19bf20:
    // 0x19bf20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19bf24:
    // 0x19bf24: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19bf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19bf28:
    // 0x19bf28: 0x46037182  mul.s       $f6, $f14, $f3
    ctx->pc = 0x19bf28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
label_19bf2c:
    // 0x19bf2c: 0xe490000c  swc1        $f16, 0xC($a0)
    ctx->pc = 0x19bf2cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_19bf30:
    // 0x19bf30: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x19bf30u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
label_19bf34:
    // 0x19bf34: 0xe48f001c  swc1        $f15, 0x1C($a0)
    ctx->pc = 0x19bf34u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_19bf38:
    // 0x19bf38: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x19bf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
label_19bf3c:
    // 0x19bf3c: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x19bf3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_19bf40:
    // 0x19bf40: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x19bf40u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_19bf44:
    // 0x19bf44: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x19bf44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_19bf48:
    // 0x19bf48: 0x46001a07  neg.s       $f8, $f3
    ctx->pc = 0x19bf48u;
    ctx->f[8] = FPU_NEG_S(ctx->f[3]);
label_19bf4c:
    // 0x19bf4c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x19bf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_19bf50:
    // 0x19bf50: 0xe4840034  swc1        $f4, 0x34($a0)
    ctx->pc = 0x19bf50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_19bf54:
    // 0x19bf54: 0x460179c2  mul.s       $f7, $f15, $f1
    ctx->pc = 0x19bf54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
label_19bf58:
    // 0x19bf58: 0x46028102  mul.s       $f4, $f16, $f2
    ctx->pc = 0x19bf58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
label_19bf5c:
    // 0x19bf5c: 0xe4880038  swc1        $f8, 0x38($a0)
    ctx->pc = 0x19bf5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_19bf60:
    // 0x19bf60: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x19bf60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19bf64:
    // 0x19bf64: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x19bf64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_19bf68:
    // 0x19bf68: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x19bf68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_19bf6c:
    // 0x19bf6c: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x19bf6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_19bf70:
    // 0x19bf70: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x19bf70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19bf74:
    // 0x19bf74: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x19bf74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_19bf78:
    // 0x19bf78: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x19bf78u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_19bf7c:
    // 0x19bf7c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x19bf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_19bf80:
    // 0x19bf80: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x19bf80u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
label_19bf84:
    // 0x19bf84: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x19bf84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_19bf88:
    // 0x19bf88: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x19bf88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_19bf8c:
    // 0x19bf8c: 0xe485003c  swc1        $f5, 0x3C($a0)
    ctx->pc = 0x19bf8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_19bf90:
    // 0x19bf90: 0x46038002  mul.s       $f0, $f16, $f3
    ctx->pc = 0x19bf90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
label_19bf94:
    // 0x19bf94: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x19bf94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19bf98:
    // 0x19bf98: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x19bf98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
label_19bf9c:
    // 0x19bf9c: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x19bf9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_19bfa0:
    // 0x19bfa0: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x19bfa0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_19bfa4:
    // 0x19bfa4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x19bfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19bfa8:
    // 0x19bfa8: 0x3e00008  jr          $ra
label_19bfac:
    if (ctx->pc == 0x19BFACu) {
        ctx->pc = 0x19BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA8u;
        // 0x19bfac: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFB0u;
        goto label_19bfb0;
    }
    ctx->pc = 0x19BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA8u;
        // 0x19bfac: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BFB0u;
label_19bfb0:
    // 0x19bfb0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x19bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19bfb4:
    // 0x19bfb4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x19bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19bfb8:
    // 0x19bfb8: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x19bfb8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
label_19bfbc:
    // 0x19bfbc: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x19bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19bfc0:
    // 0x19bfc0: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x19bfc0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
label_19bfc4:
    // 0x19bfc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19bfc8:
    // 0x19bfc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bfcc:
    // 0x19bfcc: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x19bfccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_19bfd0:
    // 0x19bfd0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x19bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_19bfd4:
    // 0x19bfd4: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x19bfd4u;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    ctx->pc = 0x19bfd8u;
    return;
}

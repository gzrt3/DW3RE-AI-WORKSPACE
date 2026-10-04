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


void FUN_0014eba0_part27(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15b6c0u: goto label_15b6c0;
        case 0x15b6c4u: goto label_15b6c4;
        case 0x15b6c8u: goto label_15b6c8;
        case 0x15b6ccu: goto label_15b6cc;
        case 0x15b6d0u: goto label_15b6d0;
        case 0x15b6d4u: goto label_15b6d4;
        case 0x15b6d8u: goto label_15b6d8;
        case 0x15b6dcu: goto label_15b6dc;
        case 0x15b6e0u: goto label_15b6e0;
        case 0x15b6e4u: goto label_15b6e4;
        case 0x15b6e8u: goto label_15b6e8;
        case 0x15b6ecu: goto label_15b6ec;
        case 0x15b6f0u: goto label_15b6f0;
        case 0x15b6f4u: goto label_15b6f4;
        case 0x15b6f8u: goto label_15b6f8;
        case 0x15b6fcu: goto label_15b6fc;
        case 0x15b700u: goto label_15b700;
        case 0x15b704u: goto label_15b704;
        case 0x15b708u: goto label_15b708;
        case 0x15b70cu: goto label_15b70c;
        case 0x15b710u: goto label_15b710;
        case 0x15b714u: goto label_15b714;
        case 0x15b718u: goto label_15b718;
        case 0x15b71cu: goto label_15b71c;
        case 0x15b720u: goto label_15b720;
        case 0x15b724u: goto label_15b724;
        case 0x15b728u: goto label_15b728;
        case 0x15b72cu: goto label_15b72c;
        case 0x15b730u: goto label_15b730;
        case 0x15b734u: goto label_15b734;
        case 0x15b738u: goto label_15b738;
        case 0x15b73cu: goto label_15b73c;
        case 0x15b740u: goto label_15b740;
        case 0x15b744u: goto label_15b744;
        case 0x15b748u: goto label_15b748;
        case 0x15b74cu: goto label_15b74c;
        case 0x15b750u: goto label_15b750;
        case 0x15b754u: goto label_15b754;
        case 0x15b758u: goto label_15b758;
        case 0x15b75cu: goto label_15b75c;
        case 0x15b760u: goto label_15b760;
        case 0x15b764u: goto label_15b764;
        case 0x15b768u: goto label_15b768;
        case 0x15b76cu: goto label_15b76c;
        case 0x15b770u: goto label_15b770;
        case 0x15b774u: goto label_15b774;
        case 0x15b778u: goto label_15b778;
        case 0x15b77cu: goto label_15b77c;
        case 0x15b780u: goto label_15b780;
        case 0x15b784u: goto label_15b784;
        case 0x15b788u: goto label_15b788;
        case 0x15b78cu: goto label_15b78c;
        case 0x15b790u: goto label_15b790;
        case 0x15b794u: goto label_15b794;
        case 0x15b798u: goto label_15b798;
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7a0u: goto label_15b7a0;
        case 0x15b7a4u: goto label_15b7a4;
        case 0x15b7a8u: goto label_15b7a8;
        case 0x15b7acu: goto label_15b7ac;
        case 0x15b7b0u: goto label_15b7b0;
        case 0x15b7b4u: goto label_15b7b4;
        case 0x15b7b8u: goto label_15b7b8;
        case 0x15b7bcu: goto label_15b7bc;
        case 0x15b7c0u: goto label_15b7c0;
        case 0x15b7c4u: goto label_15b7c4;
        case 0x15b7c8u: goto label_15b7c8;
        case 0x15b7ccu: goto label_15b7cc;
        case 0x15b7d0u: goto label_15b7d0;
        case 0x15b7d4u: goto label_15b7d4;
        case 0x15b7d8u: goto label_15b7d8;
        case 0x15b7dcu: goto label_15b7dc;
        case 0x15b7e0u: goto label_15b7e0;
        case 0x15b7e4u: goto label_15b7e4;
        case 0x15b7e8u: goto label_15b7e8;
        case 0x15b7ecu: goto label_15b7ec;
        case 0x15b7f0u: goto label_15b7f0;
        case 0x15b7f4u: goto label_15b7f4;
        case 0x15b7f8u: goto label_15b7f8;
        case 0x15b7fcu: goto label_15b7fc;
        case 0x15b800u: goto label_15b800;
        case 0x15b804u: goto label_15b804;
        case 0x15b808u: goto label_15b808;
        case 0x15b80cu: goto label_15b80c;
        case 0x15b810u: goto label_15b810;
        case 0x15b814u: goto label_15b814;
        case 0x15b818u: goto label_15b818;
        case 0x15b81cu: goto label_15b81c;
        case 0x15b820u: goto label_15b820;
        case 0x15b824u: goto label_15b824;
        case 0x15b828u: goto label_15b828;
        case 0x15b82cu: goto label_15b82c;
        case 0x15b830u: goto label_15b830;
        case 0x15b834u: goto label_15b834;
        case 0x15b838u: goto label_15b838;
        case 0x15b83cu: goto label_15b83c;
        case 0x15b840u: goto label_15b840;
        case 0x15b844u: goto label_15b844;
        case 0x15b848u: goto label_15b848;
        case 0x15b84cu: goto label_15b84c;
        case 0x15b850u: goto label_15b850;
        case 0x15b854u: goto label_15b854;
        case 0x15b858u: goto label_15b858;
        case 0x15b85cu: goto label_15b85c;
        case 0x15b860u: goto label_15b860;
        case 0x15b864u: goto label_15b864;
        case 0x15b868u: goto label_15b868;
        case 0x15b86cu: goto label_15b86c;
        case 0x15b870u: goto label_15b870;
        case 0x15b874u: goto label_15b874;
        case 0x15b878u: goto label_15b878;
        case 0x15b87cu: goto label_15b87c;
        case 0x15b880u: goto label_15b880;
        case 0x15b884u: goto label_15b884;
        case 0x15b888u: goto label_15b888;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b890u: goto label_15b890;
        case 0x15b894u: goto label_15b894;
        case 0x15b898u: goto label_15b898;
        case 0x15b89cu: goto label_15b89c;
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b8a4u: goto label_15b8a4;
        case 0x15b8a8u: goto label_15b8a8;
        case 0x15b8acu: goto label_15b8ac;
        case 0x15b8b0u: goto label_15b8b0;
        case 0x15b8b4u: goto label_15b8b4;
        case 0x15b8b8u: goto label_15b8b8;
        case 0x15b8bcu: goto label_15b8bc;
        case 0x15b8c0u: goto label_15b8c0;
        case 0x15b8c4u: goto label_15b8c4;
        case 0x15b8c8u: goto label_15b8c8;
        case 0x15b8ccu: goto label_15b8cc;
        case 0x15b8d0u: goto label_15b8d0;
        case 0x15b8d4u: goto label_15b8d4;
        case 0x15b8d8u: goto label_15b8d8;
        case 0x15b8dcu: goto label_15b8dc;
        case 0x15b8e0u: goto label_15b8e0;
        case 0x15b8e4u: goto label_15b8e4;
        case 0x15b8e8u: goto label_15b8e8;
        case 0x15b8ecu: goto label_15b8ec;
        case 0x15b8f0u: goto label_15b8f0;
        case 0x15b8f4u: goto label_15b8f4;
        case 0x15b8f8u: goto label_15b8f8;
        case 0x15b8fcu: goto label_15b8fc;
        case 0x15b900u: goto label_15b900;
        case 0x15b904u: goto label_15b904;
        case 0x15b908u: goto label_15b908;
        case 0x15b90cu: goto label_15b90c;
        case 0x15b910u: goto label_15b910;
        case 0x15b914u: goto label_15b914;
        case 0x15b918u: goto label_15b918;
        case 0x15b91cu: goto label_15b91c;
        case 0x15b920u: goto label_15b920;
        case 0x15b924u: goto label_15b924;
        case 0x15b928u: goto label_15b928;
        case 0x15b92cu: goto label_15b92c;
        case 0x15b930u: goto label_15b930;
        case 0x15b934u: goto label_15b934;
        case 0x15b938u: goto label_15b938;
        case 0x15b93cu: goto label_15b93c;
        case 0x15b940u: goto label_15b940;
        case 0x15b944u: goto label_15b944;
        case 0x15b948u: goto label_15b948;
        case 0x15b94cu: goto label_15b94c;
        case 0x15b950u: goto label_15b950;
        case 0x15b954u: goto label_15b954;
        case 0x15b958u: goto label_15b958;
        case 0x15b95cu: goto label_15b95c;
        case 0x15b960u: goto label_15b960;
        case 0x15b964u: goto label_15b964;
        case 0x15b968u: goto label_15b968;
        case 0x15b96cu: goto label_15b96c;
        case 0x15b970u: goto label_15b970;
        case 0x15b974u: goto label_15b974;
        case 0x15b978u: goto label_15b978;
        case 0x15b97cu: goto label_15b97c;
        case 0x15b980u: goto label_15b980;
        case 0x15b984u: goto label_15b984;
        case 0x15b988u: goto label_15b988;
        case 0x15b98cu: goto label_15b98c;
        case 0x15b990u: goto label_15b990;
        case 0x15b994u: goto label_15b994;
        case 0x15b998u: goto label_15b998;
        case 0x15b99cu: goto label_15b99c;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9a4u: goto label_15b9a4;
        case 0x15b9a8u: goto label_15b9a8;
        case 0x15b9acu: goto label_15b9ac;
        case 0x15b9b0u: goto label_15b9b0;
        case 0x15b9b4u: goto label_15b9b4;
        case 0x15b9b8u: goto label_15b9b8;
        case 0x15b9bcu: goto label_15b9bc;
        case 0x15b9c0u: goto label_15b9c0;
        case 0x15b9c4u: goto label_15b9c4;
        case 0x15b9c8u: goto label_15b9c8;
        case 0x15b9ccu: goto label_15b9cc;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15b9d4u: goto label_15b9d4;
        case 0x15b9d8u: goto label_15b9d8;
        case 0x15b9dcu: goto label_15b9dc;
        case 0x15b9e0u: goto label_15b9e0;
        case 0x15b9e4u: goto label_15b9e4;
        case 0x15b9e8u: goto label_15b9e8;
        case 0x15b9ecu: goto label_15b9ec;
        case 0x15b9f0u: goto label_15b9f0;
        case 0x15b9f4u: goto label_15b9f4;
        case 0x15b9f8u: goto label_15b9f8;
        case 0x15b9fcu: goto label_15b9fc;
        case 0x15ba00u: goto label_15ba00;
        case 0x15ba04u: goto label_15ba04;
        case 0x15ba08u: goto label_15ba08;
        case 0x15ba0cu: goto label_15ba0c;
        case 0x15ba10u: goto label_15ba10;
        case 0x15ba14u: goto label_15ba14;
        case 0x15ba18u: goto label_15ba18;
        case 0x15ba1cu: goto label_15ba1c;
        case 0x15ba20u: goto label_15ba20;
        case 0x15ba24u: goto label_15ba24;
        case 0x15ba28u: goto label_15ba28;
        case 0x15ba2cu: goto label_15ba2c;
        case 0x15ba30u: goto label_15ba30;
        case 0x15ba34u: goto label_15ba34;
        case 0x15ba38u: goto label_15ba38;
        case 0x15ba3cu: goto label_15ba3c;
        case 0x15ba40u: goto label_15ba40;
        case 0x15ba44u: goto label_15ba44;
        case 0x15ba48u: goto label_15ba48;
        case 0x15ba4cu: goto label_15ba4c;
        case 0x15ba50u: goto label_15ba50;
        case 0x15ba54u: goto label_15ba54;
        case 0x15ba58u: goto label_15ba58;
        case 0x15ba5cu: goto label_15ba5c;
        case 0x15ba60u: goto label_15ba60;
        case 0x15ba64u: goto label_15ba64;
        case 0x15ba68u: goto label_15ba68;
        case 0x15ba6cu: goto label_15ba6c;
        case 0x15ba70u: goto label_15ba70;
        case 0x15ba74u: goto label_15ba74;
        case 0x15ba78u: goto label_15ba78;
        case 0x15ba7cu: goto label_15ba7c;
        case 0x15ba80u: goto label_15ba80;
        case 0x15ba84u: goto label_15ba84;
        case 0x15ba88u: goto label_15ba88;
        case 0x15ba8cu: goto label_15ba8c;
        case 0x15ba90u: goto label_15ba90;
        case 0x15ba94u: goto label_15ba94;
        case 0x15ba98u: goto label_15ba98;
        case 0x15ba9cu: goto label_15ba9c;
        case 0x15baa0u: goto label_15baa0;
        case 0x15baa4u: goto label_15baa4;
        case 0x15baa8u: goto label_15baa8;
        case 0x15baacu: goto label_15baac;
        case 0x15bab0u: goto label_15bab0;
        case 0x15bab4u: goto label_15bab4;
        case 0x15bab8u: goto label_15bab8;
        case 0x15babcu: goto label_15babc;
        case 0x15bac0u: goto label_15bac0;
        case 0x15bac4u: goto label_15bac4;
        case 0x15bac8u: goto label_15bac8;
        case 0x15baccu: goto label_15bacc;
        case 0x15bad0u: goto label_15bad0;
        case 0x15bad4u: goto label_15bad4;
        case 0x15bad8u: goto label_15bad8;
        case 0x15badcu: goto label_15badc;
        case 0x15bae0u: goto label_15bae0;
        case 0x15bae4u: goto label_15bae4;
        case 0x15bae8u: goto label_15bae8;
        case 0x15baecu: goto label_15baec;
        case 0x15baf0u: goto label_15baf0;
        case 0x15baf4u: goto label_15baf4;
        case 0x15baf8u: goto label_15baf8;
        case 0x15bafcu: goto label_15bafc;
        case 0x15bb00u: goto label_15bb00;
        case 0x15bb04u: goto label_15bb04;
        case 0x15bb08u: goto label_15bb08;
        case 0x15bb0cu: goto label_15bb0c;
        case 0x15bb10u: goto label_15bb10;
        case 0x15bb14u: goto label_15bb14;
        case 0x15bb18u: goto label_15bb18;
        case 0x15bb1cu: goto label_15bb1c;
        case 0x15bb20u: goto label_15bb20;
        case 0x15bb24u: goto label_15bb24;
        case 0x15bb28u: goto label_15bb28;
        case 0x15bb2cu: goto label_15bb2c;
        case 0x15bb30u: goto label_15bb30;
        case 0x15bb34u: goto label_15bb34;
        case 0x15bb38u: goto label_15bb38;
        case 0x15bb3cu: goto label_15bb3c;
        case 0x15bb40u: goto label_15bb40;
        case 0x15bb44u: goto label_15bb44;
        case 0x15bb48u: goto label_15bb48;
        case 0x15bb4cu: goto label_15bb4c;
        case 0x15bb50u: goto label_15bb50;
        case 0x15bb54u: goto label_15bb54;
        case 0x15bb58u: goto label_15bb58;
        case 0x15bb5cu: goto label_15bb5c;
        case 0x15bb60u: goto label_15bb60;
        case 0x15bb64u: goto label_15bb64;
        case 0x15bb68u: goto label_15bb68;
        case 0x15bb6cu: goto label_15bb6c;
        case 0x15bb70u: goto label_15bb70;
        case 0x15bb74u: goto label_15bb74;
        case 0x15bb78u: goto label_15bb78;
        case 0x15bb7cu: goto label_15bb7c;
        case 0x15bb80u: goto label_15bb80;
        case 0x15bb84u: goto label_15bb84;
        case 0x15bb88u: goto label_15bb88;
        case 0x15bb8cu: goto label_15bb8c;
        case 0x15bb90u: goto label_15bb90;
        case 0x15bb94u: goto label_15bb94;
        case 0x15bb98u: goto label_15bb98;
        case 0x15bb9cu: goto label_15bb9c;
        case 0x15bba0u: goto label_15bba0;
        case 0x15bba4u: goto label_15bba4;
        case 0x15bba8u: goto label_15bba8;
        case 0x15bbacu: goto label_15bbac;
        case 0x15bbb0u: goto label_15bbb0;
        case 0x15bbb4u: goto label_15bbb4;
        case 0x15bbb8u: goto label_15bbb8;
        case 0x15bbbcu: goto label_15bbbc;
        case 0x15bbc0u: goto label_15bbc0;
        case 0x15bbc4u: goto label_15bbc4;
        case 0x15bbc8u: goto label_15bbc8;
        case 0x15bbccu: goto label_15bbcc;
        case 0x15bbd0u: goto label_15bbd0;
        case 0x15bbd4u: goto label_15bbd4;
        case 0x15bbd8u: goto label_15bbd8;
        case 0x15bbdcu: goto label_15bbdc;
        case 0x15bbe0u: goto label_15bbe0;
        case 0x15bbe4u: goto label_15bbe4;
        case 0x15bbe8u: goto label_15bbe8;
        case 0x15bbecu: goto label_15bbec;
        case 0x15bbf0u: goto label_15bbf0;
        case 0x15bbf4u: goto label_15bbf4;
        case 0x15bbf8u: goto label_15bbf8;
        case 0x15bbfcu: goto label_15bbfc;
        case 0x15bc00u: goto label_15bc00;
        case 0x15bc04u: goto label_15bc04;
        case 0x15bc08u: goto label_15bc08;
        case 0x15bc0cu: goto label_15bc0c;
        case 0x15bc10u: goto label_15bc10;
        case 0x15bc14u: goto label_15bc14;
        case 0x15bc18u: goto label_15bc18;
        case 0x15bc1cu: goto label_15bc1c;
        case 0x15bc20u: goto label_15bc20;
        case 0x15bc24u: goto label_15bc24;
        case 0x15bc28u: goto label_15bc28;
        case 0x15bc2cu: goto label_15bc2c;
        case 0x15bc30u: goto label_15bc30;
        case 0x15bc34u: goto label_15bc34;
        case 0x15bc38u: goto label_15bc38;
        case 0x15bc3cu: goto label_15bc3c;
        case 0x15bc40u: goto label_15bc40;
        case 0x15bc44u: goto label_15bc44;
        case 0x15bc48u: goto label_15bc48;
        case 0x15bc4cu: goto label_15bc4c;
        case 0x15bc50u: goto label_15bc50;
        case 0x15bc54u: goto label_15bc54;
        case 0x15bc58u: goto label_15bc58;
        case 0x15bc5cu: goto label_15bc5c;
        case 0x15bc60u: goto label_15bc60;
        case 0x15bc64u: goto label_15bc64;
        case 0x15bc68u: goto label_15bc68;
        case 0x15bc6cu: goto label_15bc6c;
        case 0x15bc70u: goto label_15bc70;
        case 0x15bc74u: goto label_15bc74;
        case 0x15bc78u: goto label_15bc78;
        case 0x15bc7cu: goto label_15bc7c;
        case 0x15bc80u: goto label_15bc80;
        case 0x15bc84u: goto label_15bc84;
        case 0x15bc88u: goto label_15bc88;
        case 0x15bc8cu: goto label_15bc8c;
        case 0x15bc90u: goto label_15bc90;
        case 0x15bc94u: goto label_15bc94;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bc9cu: goto label_15bc9c;
        case 0x15bca0u: goto label_15bca0;
        case 0x15bca4u: goto label_15bca4;
        case 0x15bca8u: goto label_15bca8;
        case 0x15bcacu: goto label_15bcac;
        case 0x15bcb0u: goto label_15bcb0;
        case 0x15bcb4u: goto label_15bcb4;
        case 0x15bcb8u: goto label_15bcb8;
        case 0x15bcbcu: goto label_15bcbc;
        case 0x15bcc0u: goto label_15bcc0;
        case 0x15bcc4u: goto label_15bcc4;
        case 0x15bcc8u: goto label_15bcc8;
        case 0x15bcccu: goto label_15bccc;
        case 0x15bcd0u: goto label_15bcd0;
        case 0x15bcd4u: goto label_15bcd4;
        case 0x15bcd8u: goto label_15bcd8;
        case 0x15bcdcu: goto label_15bcdc;
        case 0x15bce0u: goto label_15bce0;
        case 0x15bce4u: goto label_15bce4;
        case 0x15bce8u: goto label_15bce8;
        case 0x15bcecu: goto label_15bcec;
        case 0x15bcf0u: goto label_15bcf0;
        case 0x15bcf4u: goto label_15bcf4;
        case 0x15bcf8u: goto label_15bcf8;
        case 0x15bcfcu: goto label_15bcfc;
        case 0x15bd00u: goto label_15bd00;
        case 0x15bd04u: goto label_15bd04;
        case 0x15bd08u: goto label_15bd08;
        case 0x15bd0cu: goto label_15bd0c;
        case 0x15bd10u: goto label_15bd10;
        case 0x15bd14u: goto label_15bd14;
        case 0x15bd18u: goto label_15bd18;
        case 0x15bd1cu: goto label_15bd1c;
        case 0x15bd20u: goto label_15bd20;
        case 0x15bd24u: goto label_15bd24;
        case 0x15bd28u: goto label_15bd28;
        case 0x15bd2cu: goto label_15bd2c;
        case 0x15bd30u: goto label_15bd30;
        case 0x15bd34u: goto label_15bd34;
        case 0x15bd38u: goto label_15bd38;
        case 0x15bd3cu: goto label_15bd3c;
        case 0x15bd40u: goto label_15bd40;
        case 0x15bd44u: goto label_15bd44;
        case 0x15bd48u: goto label_15bd48;
        case 0x15bd4cu: goto label_15bd4c;
        case 0x15bd50u: goto label_15bd50;
        case 0x15bd54u: goto label_15bd54;
        case 0x15bd58u: goto label_15bd58;
        case 0x15bd5cu: goto label_15bd5c;
        case 0x15bd60u: goto label_15bd60;
        case 0x15bd64u: goto label_15bd64;
        case 0x15bd68u: goto label_15bd68;
        case 0x15bd6cu: goto label_15bd6c;
        case 0x15bd70u: goto label_15bd70;
        case 0x15bd74u: goto label_15bd74;
        case 0x15bd78u: goto label_15bd78;
        case 0x15bd7cu: goto label_15bd7c;
        case 0x15bd80u: goto label_15bd80;
        case 0x15bd84u: goto label_15bd84;
        case 0x15bd88u: goto label_15bd88;
        case 0x15bd8cu: goto label_15bd8c;
        case 0x15bd90u: goto label_15bd90;
        case 0x15bd94u: goto label_15bd94;
        case 0x15bd98u: goto label_15bd98;
        case 0x15bd9cu: goto label_15bd9c;
        case 0x15bda0u: goto label_15bda0;
        case 0x15bda4u: goto label_15bda4;
        case 0x15bda8u: goto label_15bda8;
        case 0x15bdacu: goto label_15bdac;
        case 0x15bdb0u: goto label_15bdb0;
        case 0x15bdb4u: goto label_15bdb4;
        case 0x15bdb8u: goto label_15bdb8;
        case 0x15bdbcu: goto label_15bdbc;
        case 0x15bdc0u: goto label_15bdc0;
        case 0x15bdc4u: goto label_15bdc4;
        case 0x15bdc8u: goto label_15bdc8;
        case 0x15bdccu: goto label_15bdcc;
        case 0x15bdd0u: goto label_15bdd0;
        case 0x15bdd4u: goto label_15bdd4;
        case 0x15bdd8u: goto label_15bdd8;
        case 0x15bddcu: goto label_15bddc;
        case 0x15bde0u: goto label_15bde0;
        case 0x15bde4u: goto label_15bde4;
        case 0x15bde8u: goto label_15bde8;
        case 0x15bdecu: goto label_15bdec;
        case 0x15bdf0u: goto label_15bdf0;
        case 0x15bdf4u: goto label_15bdf4;
        case 0x15bdf8u: goto label_15bdf8;
        case 0x15bdfcu: goto label_15bdfc;
        case 0x15be00u: goto label_15be00;
        case 0x15be04u: goto label_15be04;
        case 0x15be08u: goto label_15be08;
        case 0x15be0cu: goto label_15be0c;
        case 0x15be10u: goto label_15be10;
        case 0x15be14u: goto label_15be14;
        case 0x15be18u: goto label_15be18;
        case 0x15be1cu: goto label_15be1c;
        case 0x15be20u: goto label_15be20;
        case 0x15be24u: goto label_15be24;
        case 0x15be28u: goto label_15be28;
        case 0x15be2cu: goto label_15be2c;
        case 0x15be30u: goto label_15be30;
        case 0x15be34u: goto label_15be34;
        case 0x15be38u: goto label_15be38;
        case 0x15be3cu: goto label_15be3c;
        case 0x15be40u: goto label_15be40;
        case 0x15be44u: goto label_15be44;
        case 0x15be48u: goto label_15be48;
        case 0x15be4cu: goto label_15be4c;
        case 0x15be50u: goto label_15be50;
        case 0x15be54u: goto label_15be54;
        case 0x15be58u: goto label_15be58;
        case 0x15be5cu: goto label_15be5c;
        case 0x15be60u: goto label_15be60;
        case 0x15be64u: goto label_15be64;
        case 0x15be68u: goto label_15be68;
        case 0x15be6cu: goto label_15be6c;
        case 0x15be70u: goto label_15be70;
        case 0x15be74u: goto label_15be74;
        case 0x15be78u: goto label_15be78;
        case 0x15be7cu: goto label_15be7c;
        case 0x15be80u: goto label_15be80;
        case 0x15be84u: goto label_15be84;
        case 0x15be88u: goto label_15be88;
        case 0x15be8cu: goto label_15be8c;
        default: return;
    }

label_15b6c0:
    // 0x15b6c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15b6c4:
    // 0x15b6c4: 0x28a103e8  slti        $at, $a1, 0x3E8
    ctx->pc = 0x15b6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
label_15b6c8:
    // 0x15b6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15b6cc:
    // 0x15b6cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15b6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d0:
    // 0x15b6d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15b6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d4:
    // 0x15b6d4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15b6d8:
    // 0x15b6d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15b6dc:
    // 0x15b6dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b6e0:
    if (ctx->pc == 0x15B6E0u) {
        ctx->pc = 0x15B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6DCu;
        // 0x15b6e0: 0x24723620  addiu       $s2, $v1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6E4u;
        goto label_15b6e4;
    }
    ctx->pc = 0x15B6DCu;
    {
        const bool branch_taken_0x15b6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6DCu;
        // 0x15b6e0: 0x24723620  addiu       $s2, $v1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6dc) {
            ctx->pc = 0x15B6ECu;
            goto label_15b6ec;
        }
    }
    ctx->pc = 0x15B6E4u;
label_15b6e4:
    // 0x15b6e4: 0x10000047  b           . + 4 + (0x47 << 2)
label_15b6e8:
    if (ctx->pc == 0x15B6E8u) {
        ctx->pc = 0x15B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E4u;
        // 0x15b6e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6ECu;
        goto label_15b6ec;
    }
    ctx->pc = 0x15B6E4u;
    {
        const bool branch_taken_0x15b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E4u;
        // 0x15b6e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6e4) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B6ECu;
label_15b6ec:
    // 0x15b6ec: 0x28a107d0  slti        $at, $a1, 0x7D0
    ctx->pc = 0x15b6ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2000) ? 1 : 0);
label_15b6f0:
    // 0x15b6f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b6f4:
    if (ctx->pc == 0x15B6F4u) {
        ctx->pc = 0x15B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F0u;
        // 0x15b6f4: 0x28a10fa0  slti        $at, $a1, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6F8u;
        goto label_15b6f8;
    }
    ctx->pc = 0x15B6F0u;
    {
        const bool branch_taken_0x15b6f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F0u;
        // 0x15b6f4: 0x28a10fa0  slti        $at, $a1, 0xFA0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6f0) {
            ctx->pc = 0x15B700u;
            goto label_15b700;
        }
    }
    ctx->pc = 0x15B6F8u;
label_15b6f8:
    // 0x15b6f8: 0x10000042  b           . + 4 + (0x42 << 2)
label_15b6fc:
    if (ctx->pc == 0x15B6FCu) {
        ctx->pc = 0x15B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F8u;
        // 0x15b6fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B700u;
        goto label_15b700;
    }
    ctx->pc = 0x15B6F8u;
    {
        const bool branch_taken_0x15b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F8u;
        // 0x15b6fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6f8) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B700u;
label_15b700:
    // 0x15b700: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b704:
    if (ctx->pc == 0x15B704u) {
        ctx->pc = 0x15B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B700u;
        // 0x15b704: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B708u;
        goto label_15b708;
    }
    ctx->pc = 0x15B700u;
    {
        const bool branch_taken_0x15b700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B700u;
        // 0x15b704: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b700) {
            ctx->pc = 0x15B710u;
            goto label_15b710;
        }
    }
    ctx->pc = 0x15B708u;
label_15b708:
    // 0x15b708: 0x1000003e  b           . + 4 + (0x3E << 2)
label_15b70c:
    if (ctx->pc == 0x15B70Cu) {
        ctx->pc = 0x15B710u;
        goto label_15b710;
    }
    ctx->pc = 0x15B708u;
    {
        const bool branch_taken_0x15b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b708) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B710u;
label_15b710:
    // 0x15b710: 0x28a11770  slti        $at, $a1, 0x1770
    ctx->pc = 0x15b710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6000) ? 1 : 0);
label_15b714:
    // 0x15b714: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b718:
    if (ctx->pc == 0x15B718u) {
        ctx->pc = 0x15B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B714u;
        // 0x15b718: 0x28a11f40  slti        $at, $a1, 0x1F40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B71Cu;
        goto label_15b71c;
    }
    ctx->pc = 0x15B714u;
    {
        const bool branch_taken_0x15b714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B714u;
        // 0x15b718: 0x28a11f40  slti        $at, $a1, 0x1F40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b714) {
            ctx->pc = 0x15B724u;
            goto label_15b724;
        }
    }
    ctx->pc = 0x15B71Cu;
label_15b71c:
    // 0x15b71c: 0x10000039  b           . + 4 + (0x39 << 2)
label_15b720:
    if (ctx->pc == 0x15B720u) {
        ctx->pc = 0x15B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B71Cu;
        // 0x15b720: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B724u;
        goto label_15b724;
    }
    ctx->pc = 0x15B71Cu;
    {
        const bool branch_taken_0x15b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B71Cu;
        // 0x15b720: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b71c) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B724u;
label_15b724:
    // 0x15b724: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b728:
    if (ctx->pc == 0x15B728u) {
        ctx->pc = 0x15B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B724u;
        // 0x15b728: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B72Cu;
        goto label_15b72c;
    }
    ctx->pc = 0x15B724u;
    {
        const bool branch_taken_0x15b724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B724u;
        // 0x15b728: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b724) {
            ctx->pc = 0x15B734u;
            goto label_15b734;
        }
    }
    ctx->pc = 0x15B72Cu;
label_15b72c:
    // 0x15b72c: 0x10000035  b           . + 4 + (0x35 << 2)
label_15b730:
    if (ctx->pc == 0x15B730u) {
        ctx->pc = 0x15B734u;
        goto label_15b734;
    }
    ctx->pc = 0x15B72Cu;
    {
        const bool branch_taken_0x15b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b72c) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B734u;
label_15b734:
    // 0x15b734: 0x28a12710  slti        $at, $a1, 0x2710
    ctx->pc = 0x15b734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10000) ? 1 : 0);
label_15b738:
    // 0x15b738: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b73c:
    if (ctx->pc == 0x15B73Cu) {
        ctx->pc = 0x15B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B738u;
        // 0x15b73c: 0x28a12ee0  slti        $at, $a1, 0x2EE0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B740u;
        goto label_15b740;
    }
    ctx->pc = 0x15B738u;
    {
        const bool branch_taken_0x15b738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B738u;
        // 0x15b73c: 0x28a12ee0  slti        $at, $a1, 0x2EE0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b738) {
            ctx->pc = 0x15B748u;
            goto label_15b748;
        }
    }
    ctx->pc = 0x15B740u;
label_15b740:
    // 0x15b740: 0x10000030  b           . + 4 + (0x30 << 2)
label_15b744:
    if (ctx->pc == 0x15B744u) {
        ctx->pc = 0x15B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B740u;
        // 0x15b744: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B748u;
        goto label_15b748;
    }
    ctx->pc = 0x15B740u;
    {
        const bool branch_taken_0x15b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B740u;
        // 0x15b744: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b740) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B748u;
label_15b748:
    // 0x15b748: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b74c:
    if (ctx->pc == 0x15B74Cu) {
        ctx->pc = 0x15B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B748u;
        // 0x15b74c: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B750u;
        goto label_15b750;
    }
    ctx->pc = 0x15B748u;
    {
        const bool branch_taken_0x15b748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B748u;
        // 0x15b74c: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b748) {
            ctx->pc = 0x15B758u;
            goto label_15b758;
        }
    }
    ctx->pc = 0x15B750u;
label_15b750:
    // 0x15b750: 0x1000002c  b           . + 4 + (0x2C << 2)
label_15b754:
    if (ctx->pc == 0x15B754u) {
        ctx->pc = 0x15B758u;
        goto label_15b758;
    }
    ctx->pc = 0x15B750u;
    {
        const bool branch_taken_0x15b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b750) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B758u;
label_15b758:
    // 0x15b758: 0x28a13e80  slti        $at, $a1, 0x3E80
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16000) ? 1 : 0);
label_15b75c:
    // 0x15b75c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b760:
    if (ctx->pc == 0x15B760u) {
        ctx->pc = 0x15B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B75Cu;
        // 0x15b760: 0x28a14650  slti        $at, $a1, 0x4650 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B764u;
        goto label_15b764;
    }
    ctx->pc = 0x15B75Cu;
    {
        const bool branch_taken_0x15b75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B75Cu;
        // 0x15b760: 0x28a14650  slti        $at, $a1, 0x4650 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b75c) {
            ctx->pc = 0x15B76Cu;
            goto label_15b76c;
        }
    }
    ctx->pc = 0x15B764u;
label_15b764:
    // 0x15b764: 0x10000027  b           . + 4 + (0x27 << 2)
label_15b768:
    if (ctx->pc == 0x15B768u) {
        ctx->pc = 0x15B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B764u;
        // 0x15b768: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B76Cu;
        goto label_15b76c;
    }
    ctx->pc = 0x15B764u;
    {
        const bool branch_taken_0x15b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B764u;
        // 0x15b768: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b764) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B76Cu;
label_15b76c:
    // 0x15b76c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b770:
    if (ctx->pc == 0x15B770u) {
        ctx->pc = 0x15B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B76Cu;
        // 0x15b770: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B774u;
        goto label_15b774;
    }
    ctx->pc = 0x15B76Cu;
    {
        const bool branch_taken_0x15b76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B76Cu;
        // 0x15b770: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b76c) {
            ctx->pc = 0x15B77Cu;
            goto label_15b77c;
        }
    }
    ctx->pc = 0x15B774u;
label_15b774:
    // 0x15b774: 0x10000023  b           . + 4 + (0x23 << 2)
label_15b778:
    if (ctx->pc == 0x15B778u) {
        ctx->pc = 0x15B77Cu;
        goto label_15b77c;
    }
    ctx->pc = 0x15B774u;
    {
        const bool branch_taken_0x15b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b774) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B77Cu;
label_15b77c:
    // 0x15b77c: 0x28a14e20  slti        $at, $a1, 0x4E20
    ctx->pc = 0x15b77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20000) ? 1 : 0);
label_15b780:
    // 0x15b780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b784:
    if (ctx->pc == 0x15B784u) {
        ctx->pc = 0x15B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B780u;
        // 0x15b784: 0x28a15dc0  slti        $at, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B788u;
        goto label_15b788;
    }
    ctx->pc = 0x15B780u;
    {
        const bool branch_taken_0x15b780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B780u;
        // 0x15b784: 0x28a15dc0  slti        $at, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b780) {
            ctx->pc = 0x15B790u;
            goto label_15b790;
        }
    }
    ctx->pc = 0x15B788u;
label_15b788:
    // 0x15b788: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15b78c:
    if (ctx->pc == 0x15B78Cu) {
        ctx->pc = 0x15B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B788u;
        // 0x15b78c: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B790u;
        goto label_15b790;
    }
    ctx->pc = 0x15B788u;
    {
        const bool branch_taken_0x15b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B788u;
        // 0x15b78c: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b788) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B790u;
label_15b790:
    // 0x15b790: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b794:
    if (ctx->pc == 0x15B794u) {
        ctx->pc = 0x15B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B790u;
        // 0x15b794: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B798u;
        goto label_15b798;
    }
    ctx->pc = 0x15B790u;
    {
        const bool branch_taken_0x15b790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B790u;
        // 0x15b794: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b790) {
            ctx->pc = 0x15B7A0u;
            goto label_15b7a0;
        }
    }
    ctx->pc = 0x15B798u;
label_15b798:
    // 0x15b798: 0x1000001a  b           . + 4 + (0x1A << 2)
label_15b79c:
    if (ctx->pc == 0x15B79Cu) {
        ctx->pc = 0x15B7A0u;
        goto label_15b7a0;
    }
    ctx->pc = 0x15B798u;
    {
        const bool branch_taken_0x15b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b798) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7A0u;
label_15b7a0:
    // 0x15b7a0: 0x28a16d60  slti        $at, $a1, 0x6D60
    ctx->pc = 0x15b7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28000) ? 1 : 0);
label_15b7a4:
    // 0x15b7a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b7a8:
    if (ctx->pc == 0x15B7A8u) {
        ctx->pc = 0x15B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7A4u;
        // 0x15b7a8: 0x28a17d00  slti        $at, $a1, 0x7D00 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7ACu;
        goto label_15b7ac;
    }
    ctx->pc = 0x15B7A4u;
    {
        const bool branch_taken_0x15b7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7A4u;
        // 0x15b7a8: 0x28a17d00  slti        $at, $a1, 0x7D00 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7a4) {
            ctx->pc = 0x15B7B4u;
            goto label_15b7b4;
        }
    }
    ctx->pc = 0x15B7ACu;
label_15b7ac:
    // 0x15b7ac: 0x10000015  b           . + 4 + (0x15 << 2)
label_15b7b0:
    if (ctx->pc == 0x15B7B0u) {
        ctx->pc = 0x15B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7ACu;
        // 0x15b7b0: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7B4u;
        goto label_15b7b4;
    }
    ctx->pc = 0x15B7ACu;
    {
        const bool branch_taken_0x15b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7ACu;
        // 0x15b7b0: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7ac) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7B4u;
label_15b7b4:
    // 0x15b7b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b7b8:
    if (ctx->pc == 0x15B7B8u) {
        ctx->pc = 0x15B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7B4u;
        // 0x15b7b8: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7BCu;
        goto label_15b7bc;
    }
    ctx->pc = 0x15B7B4u;
    {
        const bool branch_taken_0x15b7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7B4u;
        // 0x15b7b8: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7b4) {
            ctx->pc = 0x15B7C4u;
            goto label_15b7c4;
        }
    }
    ctx->pc = 0x15B7BCu;
label_15b7bc:
    // 0x15b7bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_15b7c0:
    if (ctx->pc == 0x15B7C0u) {
        ctx->pc = 0x15B7C4u;
        goto label_15b7c4;
    }
    ctx->pc = 0x15B7BCu;
    {
        const bool branch_taken_0x15b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7bc) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7C4u;
label_15b7c4:
    // 0x15b7c4: 0x34018ca0  ori         $at, $zero, 0x8CA0
    ctx->pc = 0x15b7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36000);
label_15b7c8:
    // 0x15b7c8: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x15b7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_15b7cc:
    // 0x15b7cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b7d0:
    if (ctx->pc == 0x15B7D0u) {
        ctx->pc = 0x15B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7CCu;
        // 0x15b7d0: 0x3401bb80  ori         $at, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7D4u;
        goto label_15b7d4;
    }
    ctx->pc = 0x15B7CCu;
    {
        const bool branch_taken_0x15b7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7CCu;
        // 0x15b7d0: 0x3401bb80  ori         $at, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7cc) {
            ctx->pc = 0x15B7DCu;
            goto label_15b7dc;
        }
    }
    ctx->pc = 0x15B7D4u;
label_15b7d4:
    // 0x15b7d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_15b7d8:
    if (ctx->pc == 0x15B7D8u) {
        ctx->pc = 0x15B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7D4u;
        // 0x15b7d8: 0x2413000d  addiu       $s3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7DCu;
        goto label_15b7dc;
    }
    ctx->pc = 0x15B7D4u;
    {
        const bool branch_taken_0x15b7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7D4u;
        // 0x15b7d8: 0x2413000d  addiu       $s3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7d4) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7DCu;
label_15b7dc:
    // 0x15b7dc: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x15b7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_15b7e0:
    // 0x15b7e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b7e4:
    if (ctx->pc == 0x15B7E4u) {
        ctx->pc = 0x15B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7E0u;
        // 0x15b7e4: 0x2413000e  addiu       $s3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7E8u;
        goto label_15b7e8;
    }
    ctx->pc = 0x15B7E0u;
    {
        const bool branch_taken_0x15b7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7E0u;
        // 0x15b7e4: 0x2413000e  addiu       $s3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7e0) {
            ctx->pc = 0x15B7F0u;
            goto label_15b7f0;
        }
    }
    ctx->pc = 0x15B7E8u;
label_15b7e8:
    // 0x15b7e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_15b7ec:
    if (ctx->pc == 0x15B7ECu) {
        ctx->pc = 0x15B7F0u;
        goto label_15b7f0;
    }
    ctx->pc = 0x15B7E8u;
    {
        const bool branch_taken_0x15b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7e8) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7F0u;
label_15b7f0:
    // 0x15b7f0: 0x3401ea60  ori         $at, $zero, 0xEA60
    ctx->pc = 0x15b7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_15b7f4:
    // 0x15b7f4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x15b7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_15b7f8:
    // 0x15b7f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15b7fc:
    if (ctx->pc == 0x15B7FCu) {
        ctx->pc = 0x15B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F8u;
        // 0x15b7fc: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B800u;
        goto label_15b800;
    }
    ctx->pc = 0x15B7F8u;
    {
        const bool branch_taken_0x15b7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F8u;
        // 0x15b7fc: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7f8) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B800u;
label_15b800:
    // 0x15b800: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15b804:
    // 0x15b804: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_15b808:
    // 0x15b808: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15b80c:
    // 0x15b80c: 0x2484492e  addiu       $a0, $a0, 0x492E
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18734));
label_15b810:
    // 0x15b810: 0x24633b50  addiu       $v1, $v1, 0x3B50
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15184));
label_15b814:
    // 0x15b814: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15b814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15b818:
    // 0x15b818: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15b818u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15b81c:
    // 0x15b81c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b820:
    // 0x15b820: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15b820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15b824:
    // 0x15b824: 0x1263005b  beq         $s3, $v1, . + 4 + (0x5B << 2)
label_15b828:
    if (ctx->pc == 0x15B828u) {
        ctx->pc = 0x15B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B824u;
        // 0x15b828: 0x2e610011  sltiu       $at, $s3, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B82Cu;
        goto label_15b82c;
    }
    ctx->pc = 0x15B824u;
    {
        const bool branch_taken_0x15b824 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x15B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B824u;
        // 0x15b828: 0x2e610011  sltiu       $at, $s3, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b824) {
            ctx->pc = 0x15B994u;
            goto label_15b994;
        }
    }
    ctx->pc = 0x15B82Cu;
label_15b82c:
    // 0x15b82c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_15b830:
    if (ctx->pc == 0x15B830u) {
        ctx->pc = 0x15B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B82Cu;
        // 0x15b830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B834u;
        goto label_15b834;
    }
    ctx->pc = 0x15B82Cu;
    {
        const bool branch_taken_0x15b82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B82Cu;
        // 0x15b830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b82c) {
            ctx->pc = 0x15B950u;
            goto label_15b950;
        }
    }
    ctx->pc = 0x15B834u;
label_15b834:
    // 0x15b834: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_15b838:
    // 0x15b838: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_15b83c:
    // 0x15b83c: 0x248488d0  addiu       $a0, $a0, -0x7730
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
label_15b840:
    // 0x15b840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b844:
    // 0x15b844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15b848:
    // 0x15b848: 0x600008  jr          $v1
label_15b84c:
    if (ctx->pc == 0x15B84Cu) {
        ctx->pc = 0x15B850u;
        goto label_15b850;
    }
    ctx->pc = 0x15B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B850u: goto label_15b850;
            case 0x15B870u: goto label_15b870;
            case 0x15B8B8u: goto label_15b8b8;
            case 0x15B900u: goto label_15b900;
            case 0x15B948u: goto label_15b948;
            case 0x15B94Cu: goto label_15b94c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15B850u;
label_15b850:
    // 0x15b850: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x15b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_15b854:
    // 0x15b854: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x15b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15b858:
    // 0x15b858: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15b85c:
    if (ctx->pc == 0x15B85Cu) {
        ctx->pc = 0x15B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B858u;
        // 0x15b85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B860u;
        goto label_15b860;
    }
    ctx->pc = 0x15B858u;
    {
        const bool branch_taken_0x15b858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B858u;
        // 0x15b85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b858) {
            ctx->pc = 0x15B868u;
            goto label_15b868;
        }
    }
    ctx->pc = 0x15B860u;
label_15b860:
    // 0x15b860: 0x1000003a  b           . + 4 + (0x3A << 2)
label_15b864:
    if (ctx->pc == 0x15B864u) {
        ctx->pc = 0x15B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B860u;
        // 0x15b864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B868u;
        goto label_15b868;
    }
    ctx->pc = 0x15B860u;
    {
        const bool branch_taken_0x15b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B860u;
        // 0x15b864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b860) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B868u;
label_15b868:
    // 0x15b868: 0x10000038  b           . + 4 + (0x38 << 2)
label_15b86c:
    if (ctx->pc == 0x15B86Cu) {
        ctx->pc = 0x15B870u;
        goto label_15b870;
    }
    ctx->pc = 0x15B868u;
    {
        const bool branch_taken_0x15b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b868) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B870u;
label_15b870:
    // 0x15b870: 0xc08f0cc  jal         func_23C330
label_15b874:
    if (ctx->pc == 0x15B874u) {
        ctx->pc = 0x15B878u;
        goto label_15b878;
    }
    ctx->pc = 0x15B870u;
    SET_GPR_U32(ctx, 31, 0x15B878u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15B878u;
label_15b878:
    // 0x15b878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b87c:
    // 0x15b87c: 0x0  nop
    ctx->pc = 0x15b87cu;
    // NOP
label_15b880:
    // 0x15b880: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b884:
    // 0x15b884: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_15b888:
    // 0x15b888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b88c:
    // 0x15b88c: 0x0  nop
    ctx->pc = 0x15b88cu;
    // NOP
label_15b890:
    // 0x15b890: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15b890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15b894:
    // 0x15b894: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15b898:
    // 0x15b898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b89c:
    // 0x15b89c: 0x0  nop
    ctx->pc = 0x15b89cu;
    // NOP
label_15b8a0:
    // 0x15b8a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15b8a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15b8a4:
    // 0x15b8a4: 0x0  nop
    ctx->pc = 0x15b8a4u;
    // NOP
label_15b8a8:
    // 0x15b8a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15b8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15b8ac:
    // 0x15b8ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b8b0:
    // 0x15b8b0: 0x10000026  b           . + 4 + (0x26 << 2)
label_15b8b4:
    if (ctx->pc == 0x15B8B4u) {
        ctx->pc = 0x15B8B8u;
        goto label_15b8b8;
    }
    ctx->pc = 0x15B8B0u;
    {
        const bool branch_taken_0x15b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8b0) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B8B8u;
label_15b8b8:
    // 0x15b8b8: 0xc08f0cc  jal         func_23C330
label_15b8bc:
    if (ctx->pc == 0x15B8BCu) {
        ctx->pc = 0x15B8C0u;
        goto label_15b8c0;
    }
    ctx->pc = 0x15B8B8u;
    SET_GPR_U32(ctx, 31, 0x15B8C0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15B8C0u;
label_15b8c0:
    // 0x15b8c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b8c4:
    // 0x15b8c4: 0x0  nop
    ctx->pc = 0x15b8c4u;
    // NOP
label_15b8c8:
    // 0x15b8c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b8cc:
    // 0x15b8cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x15b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_15b8d0:
    // 0x15b8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b8d4:
    // 0x15b8d4: 0x0  nop
    ctx->pc = 0x15b8d4u;
    // NOP
label_15b8d8:
    // 0x15b8d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15b8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15b8dc:
    // 0x15b8dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15b8e0:
    // 0x15b8e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b8e4:
    // 0x15b8e4: 0x0  nop
    ctx->pc = 0x15b8e4u;
    // NOP
label_15b8e8:
    // 0x15b8e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15b8e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15b8ec:
    // 0x15b8ec: 0x0  nop
    ctx->pc = 0x15b8ecu;
    // NOP
label_15b8f0:
    // 0x15b8f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15b8f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15b8f4:
    // 0x15b8f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b8f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b8f8:
    // 0x15b8f8: 0x10000014  b           . + 4 + (0x14 << 2)
label_15b8fc:
    if (ctx->pc == 0x15B8FCu) {
        ctx->pc = 0x15B900u;
        goto label_15b900;
    }
    ctx->pc = 0x15B8F8u;
    {
        const bool branch_taken_0x15b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8f8) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B900u;
label_15b900:
    // 0x15b900: 0xc08f0cc  jal         func_23C330
label_15b904:
    if (ctx->pc == 0x15B904u) {
        ctx->pc = 0x15B908u;
        goto label_15b908;
    }
    ctx->pc = 0x15B900u;
    SET_GPR_U32(ctx, 31, 0x15B908u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15B908u;
label_15b908:
    // 0x15b908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b90c:
    // 0x15b90c: 0x0  nop
    ctx->pc = 0x15b90cu;
    // NOP
label_15b910:
    // 0x15b910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b914:
    // 0x15b914: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_15b918:
    // 0x15b918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b91c:
    // 0x15b91c: 0x0  nop
    ctx->pc = 0x15b91cu;
    // NOP
label_15b920:
    // 0x15b920: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15b920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15b924:
    // 0x15b924: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15b928:
    // 0x15b928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b92c:
    // 0x15b92c: 0x0  nop
    ctx->pc = 0x15b92cu;
    // NOP
label_15b930:
    // 0x15b930: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15b930u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15b934:
    // 0x15b934: 0x0  nop
    ctx->pc = 0x15b934u;
    // NOP
label_15b938:
    // 0x15b938: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15b938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15b93c:
    // 0x15b93c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b93cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b940:
    // 0x15b940: 0x10000002  b           . + 4 + (0x2 << 2)
label_15b944:
    if (ctx->pc == 0x15B944u) {
        ctx->pc = 0x15B948u;
        goto label_15b948;
    }
    ctx->pc = 0x15B940u;
    {
        const bool branch_taken_0x15b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b940) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B948u;
label_15b948:
    // 0x15b948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b94c:
    // 0x15b94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b950:
    // 0x15b950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b954:
    // 0x15b954: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_15b958:
    // 0x15b958: 0x24843b50  addiu       $a0, $a0, 0x3B50
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15184));
label_15b95c:
    // 0x15b95c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15b960:
    // 0x15b960: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15b960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15b964:
    // 0x15b964: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
label_15b968:
    if (ctx->pc == 0x15B968u) {
        ctx->pc = 0x15B96Cu;
        goto label_15b96c;
    }
    ctx->pc = 0x15B964u;
    {
        const bool branch_taken_0x15b964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x15b964) {
            ctx->pc = 0x15B980u;
            goto label_15b980;
        }
    }
    ctx->pc = 0x15B96Cu;
label_15b96c:
    // 0x15b96c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_15b970:
    if (ctx->pc == 0x15B970u) {
        ctx->pc = 0x15B974u;
        goto label_15b974;
    }
    ctx->pc = 0x15B96Cu;
    {
        const bool branch_taken_0x15b96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x15b96c) {
            ctx->pc = 0x15B97Cu;
            goto label_15b97c;
        }
    }
    ctx->pc = 0x15B974u;
label_15b974:
    // 0x15b974: 0x10000006  b           . + 4 + (0x6 << 2)
label_15b978:
    if (ctx->pc == 0x15B978u) {
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0xa246000e  sb          $a2, 0xE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B97Cu;
        goto label_15b97c;
    }
    ctx->pc = 0x15B974u;
    {
        const bool branch_taken_0x15b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0xa246000e  sb          $a2, 0xE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b974) {
            ctx->pc = 0x15B990u;
            goto label_15b990;
        }
    }
    ctx->pc = 0x15B97Cu;
label_15b97c:
    // 0x15b97c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b980:
    // 0x15b980: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b984:
    // 0x15b984: 0x28c3002f  slti        $v1, $a2, 0x2F
    ctx->pc = 0x15b984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)47) ? 1 : 0);
label_15b988:
    // 0x15b988: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_15b98c:
    if (ctx->pc == 0x15B98Cu) {
        ctx->pc = 0x15B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B988u;
        // 0x15b98c: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B990u;
        goto label_15b990;
    }
    ctx->pc = 0x15B988u;
    {
        const bool branch_taken_0x15b988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B988u;
        // 0x15b98c: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b988) {
            ctx->pc = 0x15B960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b960;
        }
    }
    ctx->pc = 0x15B990u;
label_15b990:
    // 0x15b990: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15b990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b994:
    // 0x15b994: 0x3c0245e7  lui         $v0, 0x45E7
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17895 << 16));
label_15b998:
    // 0x15b998: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_15b99c:
    // 0x15b99c: 0x3442b273  ori         $v0, $v0, 0xB273
    ctx->pc = 0x15b99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45683);
label_15b9a0:
    // 0x15b9a0: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x15b9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15b9a4:
    // 0x15b9a4: 0x0  nop
    ctx->pc = 0x15b9a4u;
    // NOP
label_15b9a8:
    // 0x15b9a8: 0x0  nop
    ctx->pc = 0x15b9a8u;
    // NOP
label_15b9ac:
    // 0x15b9ac: 0x1010  mfhi        $v0
    ctx->pc = 0x15b9acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15b9b0:
    // 0x15b9b0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x15b9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_15b9b4:
    // 0x15b9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b9b8:
    // 0x15b9b8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x15b9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_15b9bc:
    // 0x15b9bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15b9c0:
    if (ctx->pc == 0x15B9C0u) {
        ctx->pc = 0x15B9C4u;
        goto label_15b9c4;
    }
    ctx->pc = 0x15B9BCu;
    {
        const bool branch_taken_0x15b9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9bc) {
            ctx->pc = 0x15B9CCu;
            goto label_15b9cc;
        }
    }
    ctx->pc = 0x15B9C4u;
label_15b9c4:
    // 0x15b9c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_15b9c8:
    if (ctx->pc == 0x15B9C8u) {
        ctx->pc = 0x15B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9C4u;
        // 0x15b9c8: 0xa2420068  sb          $v0, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9CCu;
        goto label_15b9cc;
    }
    ctx->pc = 0x15B9C4u;
    {
        const bool branch_taken_0x15b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9C4u;
        // 0x15b9c8: 0xa2420068  sb          $v0, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9c4) {
            ctx->pc = 0x15B9D4u;
            goto label_15b9d4;
        }
    }
    ctx->pc = 0x15B9CCu;
label_15b9cc:
    // 0x15b9cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15b9d0:
    // 0x15b9d0: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x15b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_15b9d4:
    // 0x15b9d4: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_15b9d8:
    // 0x15b9d8: 0x3c0214f8  lui         $v0, 0x14F8
    ctx->pc = 0x15b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5368 << 16));
label_15b9dc:
    // 0x15b9dc: 0x3442b589  ori         $v0, $v0, 0xB589
    ctx->pc = 0x15b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46473);
label_15b9e0:
    // 0x15b9e0: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x15b9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15b9e4:
    // 0x15b9e4: 0x0  nop
    ctx->pc = 0x15b9e4u;
    // NOP
label_15b9e8:
    // 0x15b9e8: 0x0  nop
    ctx->pc = 0x15b9e8u;
    // NOP
label_15b9ec:
    // 0x15b9ec: 0x1010  mfhi        $v0
    ctx->pc = 0x15b9ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15b9f0:
    // 0x15b9f0: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_15b9f4:
    // 0x15b9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b9f8:
    // 0x15b9f8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x15b9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_15b9fc:
    // 0x15b9fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15ba00:
    if (ctx->pc == 0x15BA00u) {
        ctx->pc = 0x15BA04u;
        goto label_15ba04;
    }
    ctx->pc = 0x15B9FCu;
    {
        const bool branch_taken_0x15b9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9fc) {
            ctx->pc = 0x15BA0Cu;
            goto label_15ba0c;
        }
    }
    ctx->pc = 0x15BA04u;
label_15ba04:
    // 0x15ba04: 0x10000003  b           . + 4 + (0x3 << 2)
label_15ba08:
    if (ctx->pc == 0x15BA08u) {
        ctx->pc = 0x15BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA04u;
        // 0x15ba08: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA0Cu;
        goto label_15ba0c;
    }
    ctx->pc = 0x15BA04u;
    {
        const bool branch_taken_0x15ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA04u;
        // 0x15ba08: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba04) {
            ctx->pc = 0x15BA14u;
            goto label_15ba14;
        }
    }
    ctx->pc = 0x15BA0Cu;
label_15ba0c:
    // 0x15ba0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ba10:
    // 0x15ba10: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x15ba10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_15ba14:
    // 0x15ba14: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_15ba18:
    // 0x15ba18: 0x92420063  lbu         $v0, 0x63($s2)
    ctx->pc = 0x15ba18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
label_15ba1c:
    // 0x15ba1c: 0x24e75430  addiu       $a3, $a3, 0x5430
    ctx->pc = 0x15ba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21552));
label_15ba20:
    // 0x15ba20: 0x92480064  lbu         $t0, 0x64($s2)
    ctx->pc = 0x15ba20u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
label_15ba24:
    // 0x15ba24: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15ba28:
    // 0x15ba28: 0x92440065  lbu         $a0, 0x65($s2)
    ctx->pc = 0x15ba28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
label_15ba2c:
    // 0x15ba2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ba30:
    // 0x15ba30: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x15ba30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15ba34:
    // 0x15ba34: 0x21021  addu        $v0, $zero, $v0
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_15ba38:
    // 0x15ba38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x15ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_15ba3c:
    // 0x15ba3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15ba40:
    // 0x15ba40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ba44:
    // 0x15ba44: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x15ba44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15ba48:
    // 0x15ba48: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_15ba4c:
    // 0x15ba4c: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x15ba4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_15ba50:
    // 0x15ba50: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x15ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_15ba54:
    // 0x15ba54: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x15ba54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_15ba58:
    // 0x15ba58: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x15ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_15ba5c:
    // 0x15ba5c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_15ba60:
    if (ctx->pc == 0x15BA60u) {
        ctx->pc = 0x15BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA5Cu;
        // 0x15ba60: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA64u;
        goto label_15ba64;
    }
    ctx->pc = 0x15BA5Cu;
    {
        const bool branch_taken_0x15ba5c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x15BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA5Cu;
        // 0x15ba60: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba5c) {
            ctx->pc = 0x15BA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15BA64u;
label_15ba64:
    // 0x15ba64: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x15ba64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_15ba68:
    // 0x15ba68: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_15ba6c:
    // 0x15ba6c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x15ba6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_15ba70:
    // 0x15ba70: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x15ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_15ba74:
    // 0x15ba74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15ba78:
    // 0x15ba78: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15ba7c:
    // 0x15ba7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15ba80:
    // 0x15ba80: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ba84:
    // 0x15ba84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_15ba88:
    if (ctx->pc == 0x15BA88u) {
        ctx->pc = 0x15BA8Cu;
        goto label_15ba8c;
    }
    ctx->pc = 0x15BA84u;
    {
        const bool branch_taken_0x15ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba84) {
            ctx->pc = 0x15BA98u;
            goto label_15ba98;
        }
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_15ba90:
    // 0x15ba90: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
label_15ba94:
    if (ctx->pc == 0x15BA94u) {
        ctx->pc = 0x15BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA90u;
        // 0x15ba94: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA98u;
        goto label_15ba98;
    }
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA90u;
        // 0x15ba94: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ba78;
        }
    }
    ctx->pc = 0x15BA98u;
label_15ba98:
    // 0x15ba98: 0xe29823  subu        $s3, $a3, $v0
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15ba9c:
    // 0x15ba9c: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x15ba9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15baa0:
    // 0x15baa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15baa4:
    if (ctx->pc == 0x15BAA4u) {
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAA8u;
        goto label_15baa8;
    }
    ctx->pc = 0x15BAA0u;
    {
        const bool branch_taken_0x15baa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baa0) {
            ctx->pc = 0x15BAB0u;
            goto label_15bab0;
        }
    }
    ctx->pc = 0x15BAA8u;
label_15baa8:
    // 0x15baa8: 0x10000102  b           . + 4 + (0x102 << 2)
label_15baac:
    if (ctx->pc == 0x15BAACu) {
        ctx->pc = 0x15BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA8u;
        // 0x15baac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAB0u;
        goto label_15bab0;
    }
    ctx->pc = 0x15BAA8u;
    {
        const bool branch_taken_0x15baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA8u;
        // 0x15baac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baa8) {
            ctx->pc = 0x15BEB4u;
            { ctx->pc = 0x15beb4; return; }
        }
    }
    ctx->pc = 0x15BAB0u;
label_15bab0:
    // 0x15bab0: 0x102000f9  beqz        $at, . + 4 + (0xF9 << 2)
label_15bab4:
    if (ctx->pc == 0x15BAB4u) {
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAB0u;
        // 0x15bab4: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAB8u;
        goto label_15bab8;
    }
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAB0u;
        // 0x15bab4: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BE98u;
            { ctx->pc = 0x15be98; return; }
        }
    }
    ctx->pc = 0x15BAB8u;
label_15bab8:
    // 0x15bab8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_15babc:
    // 0x15babc: 0x246354a0  addiu       $v1, $v1, 0x54A0
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21664));
label_15bac0:
    // 0x15bac0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15bac4:
    // 0x15bac4: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x15bac4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15bac8:
    // 0x15bac8: 0x24c654b0  addiu       $a2, $a2, 0x54B0
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21680));
label_15bacc:
    // 0x15bacc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15bad0:
    // 0x15bad0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_15bad4:
    // 0x15bad4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x15bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15bad8:
    // 0x15bad8: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x15bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_15badc:
    // 0x15badc: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_15bae0:
    // 0x15bae0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x15bae0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15bae4:
    // 0x15bae4: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x15bae4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_15bae8:
    // 0x15bae8: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_15baec:
    // 0x15baec: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x15baecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_15baf0:
    // 0x15baf0: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15baf4:
    // 0x15baf4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15baf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15baf8:
    // 0x15baf8: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15bafc:
    // 0x15bafc: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x15bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_15bb00:
    // 0x15bb00: 0xa3821  addu        $a3, $zero, $t2
    ctx->pc = 0x15bb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
label_15bb04:
    // 0x15bb04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_15bb08:
    // 0x15bb08: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_15bb0c:
    // 0x15bb0c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_15bb10:
    // 0x15bb10: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x15bb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_15bb14:
    // 0x15bb14: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15bb18:
    if (ctx->pc == 0x15BB18u) {
        ctx->pc = 0x15BB1Cu;
        goto label_15bb1c;
    }
    ctx->pc = 0x15BB14u;
    {
        const bool branch_taken_0x15bb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb14) {
            ctx->pc = 0x15BB20u;
            goto label_15bb20;
        }
    }
    ctx->pc = 0x15BB1Cu;
label_15bb1c:
    // 0x15bb1c: 0xe29823  subu        $s3, $a3, $v0
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15bb20:
    // 0x15bb20: 0x92460073  lbu         $a2, 0x73($s2)
    ctx->pc = 0x15bb20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 115)));
label_15bb24:
    // 0x15bb24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15bb28:
    // 0x15bb28: 0x10c200a6  beq         $a2, $v0, . + 4 + (0xA6 << 2)
label_15bb2c:
    if (ctx->pc == 0x15BB2Cu) {
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB30u;
        goto label_15bb30;
    }
    ctx->pc = 0x15BB28u;
    {
        const bool branch_taken_0x15bb28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb28) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BB30u;
label_15bb30:
    // 0x15bb30: 0x10c50091  beq         $a2, $a1, . + 4 + (0x91 << 2)
label_15bb34:
    if (ctx->pc == 0x15BB34u) {
        ctx->pc = 0x15BB38u;
        goto label_15bb38;
    }
    ctx->pc = 0x15BB30u;
    {
        const bool branch_taken_0x15bb30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x15bb30) {
            ctx->pc = 0x15BD78u;
            goto label_15bd78;
        }
    }
    ctx->pc = 0x15BB38u;
label_15bb38:
    // 0x15bb38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15bb3c:
    // 0x15bb3c: 0x10c4007a  beq         $a2, $a0, . + 4 + (0x7A << 2)
label_15bb40:
    if (ctx->pc == 0x15BB40u) {
        ctx->pc = 0x15BB44u;
        goto label_15bb44;
    }
    ctx->pc = 0x15BB3Cu;
    {
        const bool branch_taken_0x15bb3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bb3c) {
            ctx->pc = 0x15BD28u;
            goto label_15bd28;
        }
    }
    ctx->pc = 0x15BB44u;
label_15bb44:
    // 0x15bb44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bb48:
    // 0x15bb48: 0x10c30063  beq         $a2, $v1, . + 4 + (0x63 << 2)
label_15bb4c:
    if (ctx->pc == 0x15BB4Cu) {
        ctx->pc = 0x15BB50u;
        goto label_15bb50;
    }
    ctx->pc = 0x15BB48u;
    {
        const bool branch_taken_0x15bb48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15bb48) {
            ctx->pc = 0x15BCD8u;
            goto label_15bcd8;
        }
    }
    ctx->pc = 0x15BB50u;
label_15bb50:
    // 0x15bb50: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_15bb54:
    if (ctx->pc == 0x15BB54u) {
        ctx->pc = 0x15BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB50u;
        // 0x15bb54: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB58u;
        goto label_15bb58;
    }
    ctx->pc = 0x15BB50u;
    {
        const bool branch_taken_0x15bb50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB50u;
        // 0x15bb54: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb50) {
            ctx->pc = 0x15BB60u;
            goto label_15bb60;
        }
    }
    ctx->pc = 0x15BB58u;
label_15bb58:
    // 0x15bb58: 0x1000009b  b           . + 4 + (0x9B << 2)
label_15bb5c:
    if (ctx->pc == 0x15BB5Cu) {
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x92430073  lbu         $v1, 0x73($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 115)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB60u;
        goto label_15bb60;
    }
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x92430073  lbu         $v1, 0x73($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 115)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BDC8u;
            goto label_15bdc8;
        }
    }
    ctx->pc = 0x15BB60u;
label_15bb60:
    // 0x15bb60: 0x344224f8  ori         $v0, $v0, 0x24F8
    ctx->pc = 0x15bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9464);
label_15bb64:
    // 0x15bb64: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15bb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bb68:
    // 0x15bb68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_15bb6c:
    if (ctx->pc == 0x15BB6Cu) {
        ctx->pc = 0x15BB70u;
        goto label_15bb70;
    }
    ctx->pc = 0x15BB68u;
    {
        const bool branch_taken_0x15bb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb68) {
            ctx->pc = 0x15BBB0u;
            goto label_15bbb0;
        }
    }
    ctx->pc = 0x15BB70u;
label_15bb70:
    // 0x15bb70: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x15bb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15bb74:
    // 0x15bb74: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x15bb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_15bb78:
    // 0x15bb78: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_15bb7c:
    if (ctx->pc == 0x15BB7Cu) {
        ctx->pc = 0x15BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB78u;
        // 0x15bb7c: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB80u;
        goto label_15bb80;
    }
    ctx->pc = 0x15BB78u;
    {
        const bool branch_taken_0x15bb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB78u;
        // 0x15bb7c: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb78) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BB80u;
label_15bb80:
    // 0x15bb80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15bb84:
    // 0x15bb84: 0xa2420067  sb          $v0, 0x67($s2)
    ctx->pc = 0x15bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 2));
label_15bb88:
    // 0x15bb88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15bb8c:
    // 0x15bb8c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x15bb8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_15bb90:
    // 0x15bb90: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_15bb94:
    if (ctx->pc == 0x15BB94u) {
        ctx->pc = 0x15BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB90u;
        // 0x15bb94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB98u;
        goto label_15bb98;
    }
    ctx->pc = 0x15BB90u;
    {
        const bool branch_taken_0x15bb90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB90u;
        // 0x15bb94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb90) {
            ctx->pc = 0x15BBA8u;
            goto label_15bba8;
        }
    }
    ctx->pc = 0x15BB98u;
label_15bb98:
    // 0x15bb98: 0x92420067  lbu         $v0, 0x67($s2)
    ctx->pc = 0x15bb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15bb9c:
    // 0x15bb9c: 0xa2450067  sb          $a1, 0x67($s2)
    ctx->pc = 0x15bb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 5));
label_15bba0:
    // 0x15bba0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15bba4:
    if (ctx->pc == 0x15BBA4u) {
        ctx->pc = 0x15BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBA0u;
        // 0x15bba4: 0x2453fffd  addiu       $s3, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBA8u;
        goto label_15bba8;
    }
    ctx->pc = 0x15BBA0u;
    {
        const bool branch_taken_0x15bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBA0u;
        // 0x15bba4: 0x2453fffd  addiu       $s3, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bba0) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BBA8u;
label_15bba8:
    // 0x15bba8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_15bbac:
    if (ctx->pc == 0x15BBACu) {
        ctx->pc = 0x15BBB0u;
        goto label_15bbb0;
    }
    ctx->pc = 0x15BBA8u;
    {
        const bool branch_taken_0x15bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bba8) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BBB0u;
label_15bbb0:
    // 0x15bbb0: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x15bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_15bbb4:
    // 0x15bbb4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15bbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bbb8:
    // 0x15bbb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_15bbbc:
    if (ctx->pc == 0x15BBBCu) {
        ctx->pc = 0x15BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB8u;
        // 0x15bbbc: 0x2a0261a8  slti        $v0, $s0, 0x61A8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBC0u;
        goto label_15bbc0;
    }
    ctx->pc = 0x15BBB8u;
    {
        const bool branch_taken_0x15bbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB8u;
        // 0x15bbbc: 0x2a0261a8  slti        $v0, $s0, 0x61A8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb8) {
            ctx->pc = 0x15BC00u;
            goto label_15bc00;
        }
    }
    ctx->pc = 0x15BBC0u;
label_15bbc0:
    // 0x15bbc0: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x15bbc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15bbc4:
    // 0x15bbc4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15bbc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_15bbc8:
    // 0x15bbc8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_15bbcc:
    if (ctx->pc == 0x15BBCCu) {
        ctx->pc = 0x15BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBC8u;
        // 0x15bbcc: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBD0u;
        goto label_15bbd0;
    }
    ctx->pc = 0x15BBC8u;
    {
        const bool branch_taken_0x15bbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBC8u;
        // 0x15bbcc: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbc8) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BBD0u;
label_15bbd0:
    // 0x15bbd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15bbd4:
    // 0x15bbd4: 0xa2420067  sb          $v0, 0x67($s2)
    ctx->pc = 0x15bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 2));
label_15bbd8:
    // 0x15bbd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15bbdc:
    // 0x15bbdc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x15bbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_15bbe0:
    // 0x15bbe0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_15bbe4:
    if (ctx->pc == 0x15BBE4u) {
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBE8u;
        goto label_15bbe8;
    }
    ctx->pc = 0x15BBE0u;
    {
        const bool branch_taken_0x15bbe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe0) {
            ctx->pc = 0x15BBF8u;
            goto label_15bbf8;
        }
    }
    ctx->pc = 0x15BBE8u;
label_15bbe8:
    // 0x15bbe8: 0x92420067  lbu         $v0, 0x67($s2)
    ctx->pc = 0x15bbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15bbec:
    // 0x15bbec: 0xa2440067  sb          $a0, 0x67($s2)
    ctx->pc = 0x15bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 4));
label_15bbf0:
    // 0x15bbf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_15bbf4:
    if (ctx->pc == 0x15BBF4u) {
        ctx->pc = 0x15BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBF0u;
        // 0x15bbf4: 0x2453fffe  addiu       $s3, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBF8u;
        goto label_15bbf8;
    }
    ctx->pc = 0x15BBF0u;
    {
        const bool branch_taken_0x15bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBF0u;
        // 0x15bbf4: 0x2453fffe  addiu       $s3, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbf0) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BBF8u;
label_15bbf8:
    // 0x15bbf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_15bbfc:
    if (ctx->pc == 0x15BBFCu) {
        ctx->pc = 0x15BC00u;
        goto label_15bc00;
    }
    ctx->pc = 0x15BBF8u;
    {
        const bool branch_taken_0x15bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbf8) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BC00u;
label_15bc00:
    // 0x15bc00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_15bc04:
    if (ctx->pc == 0x15BC04u) {
        ctx->pc = 0x15BC08u;
        goto label_15bc08;
    }
    ctx->pc = 0x15BC00u;
    {
        const bool branch_taken_0x15bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bc00) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BC08u;
label_15bc08:
    // 0x15bc08: 0x92420067  lbu         $v0, 0x67($s2)
    ctx->pc = 0x15bc08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_15bc0c:
    // 0x15bc0c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_15bc10:
    if (ctx->pc == 0x15BC10u) {
        ctx->pc = 0x15BC14u;
        goto label_15bc14;
    }
    ctx->pc = 0x15BC0Cu;
    {
        const bool branch_taken_0x15bc0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15bc0c) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BC14u;
label_15bc14:
    // 0x15bc14: 0xa2430067  sb          $v1, 0x67($s2)
    ctx->pc = 0x15bc14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 3));
label_15bc18:
    // 0x15bc18: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15bc18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15bc1c:
    // 0x15bc1c: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
label_15bc20:
    if (ctx->pc == 0x15BC20u) {
        ctx->pc = 0x15BC24u;
        goto label_15bc24;
    }
    ctx->pc = 0x15BC1Cu;
    {
        const bool branch_taken_0x15bc1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc1c) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BC24u;
label_15bc24:
    // 0x15bc24: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15bc28:
    // 0x15bc28: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x15bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_15bc2c:
    // 0x15bc2c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x15bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_15bc30:
    // 0x15bc30: 0x90640063  lbu         $a0, 0x63($v1)
    ctx->pc = 0x15bc30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 99)));
label_15bc34:
    // 0x15bc34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15bc38:
    // 0x15bc38: 0x24650063  addiu       $a1, $v1, 0x63
    ctx->pc = 0x15bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 99));
label_15bc3c:
    // 0x15bc3c: 0x90430063  lbu         $v1, 0x63($v0)
    ctx->pc = 0x15bc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 99)));
label_15bc40:
    // 0x15bc40: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x15bc40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15bc44:
    // 0x15bc44: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_15bc48:
    if (ctx->pc == 0x15BC48u) {
        ctx->pc = 0x15BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC44u;
        // 0x15bc48: 0x24460063  addiu       $a2, $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC4Cu;
        goto label_15bc4c;
    }
    ctx->pc = 0x15BC44u;
    {
        const bool branch_taken_0x15bc44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC44u;
        // 0x15bc48: 0x24460063  addiu       $a2, $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc44) {
            ctx->pc = 0x15BC84u;
            goto label_15bc84;
        }
    }
    ctx->pc = 0x15BC4Cu;
label_15bc4c:
    // 0x15bc4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x15bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_15bc50:
    // 0x15bc50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15bc54:
    // 0x15bc54: 0x24430063  addiu       $v1, $v0, 0x63
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 99));
label_15bc58:
    // 0x15bc58: 0x90420063  lbu         $v0, 0x63($v0)
    ctx->pc = 0x15bc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 99)));
label_15bc5c:
    // 0x15bc5c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x15bc5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bc60:
    // 0x15bc60: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_15bc64:
    if (ctx->pc == 0x15BC64u) {
        ctx->pc = 0x15BC68u;
        goto label_15bc68;
    }
    ctx->pc = 0x15BC60u;
    {
        const bool branch_taken_0x15bc60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc60) {
            ctx->pc = 0x15BC74u;
            goto label_15bc74;
        }
    }
    ctx->pc = 0x15BC68u;
label_15bc68:
    // 0x15bc68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15bc6c:
    // 0x15bc6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_15bc70:
    if (ctx->pc == 0x15BC70u) {
        ctx->pc = 0x15BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC6Cu;
        // 0x15bc70: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC74u;
        goto label_15bc74;
    }
    ctx->pc = 0x15BC6Cu;
    {
        const bool branch_taken_0x15bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC6Cu;
        // 0x15bc70: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc6c) {
            ctx->pc = 0x15BCB8u;
            goto label_15bcb8;
        }
    }
    ctx->pc = 0x15BC74u;
label_15bc74:
    // 0x15bc74: 0x0  nop
    ctx->pc = 0x15bc74u;
    // NOP
label_15bc78:
    // 0x15bc78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15bc7c:
    // 0x15bc7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_15bc80:
    if (ctx->pc == 0x15BC80u) {
        ctx->pc = 0x15BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC7Cu;
        // 0x15bc80: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC84u;
        goto label_15bc84;
    }
    ctx->pc = 0x15BC7Cu;
    {
        const bool branch_taken_0x15bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC7Cu;
        // 0x15bc80: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc7c) {
            ctx->pc = 0x15BCB8u;
            goto label_15bcb8;
        }
    }
    ctx->pc = 0x15BC84u;
label_15bc84:
    // 0x15bc84: 0x0  nop
    ctx->pc = 0x15bc84u;
    // NOP
label_15bc88:
    // 0x15bc88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_15bc8c:
    // 0x15bc8c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15bc90:
    // 0x15bc90: 0x24440063  addiu       $a0, $v0, 0x63
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 99));
label_15bc94:
    // 0x15bc94: 0x90420063  lbu         $v0, 0x63($v0)
    ctx->pc = 0x15bc94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 99)));
label_15bc98:
    // 0x15bc98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bc9c:
    // 0x15bc9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_15bca0:
    if (ctx->pc == 0x15BCA0u) {
        ctx->pc = 0x15BCA4u;
        goto label_15bca4;
    }
    ctx->pc = 0x15BC9Cu;
    {
        const bool branch_taken_0x15bc9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc9c) {
            ctx->pc = 0x15BCB0u;
            goto label_15bcb0;
        }
    }
    ctx->pc = 0x15BCA4u;
label_15bca4:
    // 0x15bca4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15bca8:
    // 0x15bca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_15bcac:
    if (ctx->pc == 0x15BCACu) {
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCB0u;
        goto label_15bcb0;
    }
    ctx->pc = 0x15BCA8u;
    {
        const bool branch_taken_0x15bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bca8) {
            ctx->pc = 0x15BCB8u;
            goto label_15bcb8;
        }
    }
    ctx->pc = 0x15BCB0u;
label_15bcb0:
    // 0x15bcb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15bcb4:
    // 0x15bcb4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x15bcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_15bcb8:
    // 0x15bcb8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15bcb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15bcbc:
    // 0x15bcbc: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x15bcbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15bcc0:
    // 0x15bcc0: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_15bcc4:
    if (ctx->pc == 0x15BCC4u) {
        ctx->pc = 0x15BCC8u;
        goto label_15bcc8;
    }
    ctx->pc = 0x15BCC0u;
    {
        const bool branch_taken_0x15bcc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcc0) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BCC8u;
label_15bcc8:
    // 0x15bcc8: 0x1660ffd6  bnez        $s3, . + 4 + (-0x2A << 2)
label_15bccc:
    if (ctx->pc == 0x15BCCCu) {
        ctx->pc = 0x15BCD0u;
        goto label_15bcd0;
    }
    ctx->pc = 0x15BCC8u;
    {
        const bool branch_taken_0x15bcc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bcc8) {
            ctx->pc = 0x15BC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bc24;
        }
    }
    ctx->pc = 0x15BCD0u;
label_15bcd0:
    // 0x15bcd0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_15bcd4:
    if (ctx->pc == 0x15BCD4u) {
        ctx->pc = 0x15BCD8u;
        goto label_15bcd8;
    }
    ctx->pc = 0x15BCD0u;
    {
        const bool branch_taken_0x15bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcd0) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BCD8u;
label_15bcd8:
    // 0x15bcd8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15bcdc:
    // 0x15bcdc: 0x26420063  addiu       $v0, $s2, 0x63
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 99));
label_15bce0:
    // 0x15bce0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bce4:
    // 0x15bce4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x15bce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15bce8:
    // 0x15bce8: 0x6a082a  slt         $at, $v1, $t2
    ctx->pc = 0x15bce8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_15bcec:
    // 0x15bcec: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_15bcf0:
    if (ctx->pc == 0x15BCF0u) {
        ctx->pc = 0x15BCF4u;
        goto label_15bcf4;
    }
    ctx->pc = 0x15BCECu;
    {
        const bool branch_taken_0x15bcec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcec) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BCF4u;
label_15bcf4:
    // 0x15bcf4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15bcf8:
    // 0x15bcf8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x15bcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_15bcfc:
    // 0x15bcfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15bd00:
    // 0x15bd00: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15bd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15bd04:
    // 0x15bd04: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x15bd04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bd08:
    // 0x15bd08: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15bd0c:
    if (ctx->pc == 0x15BD0Cu) {
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD08u;
        // 0x15bd0c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD10u;
        goto label_15bd10;
    }
    ctx->pc = 0x15BD08u;
    {
        const bool branch_taken_0x15bd08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD08u;
        // 0x15bd0c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd08) {
            ctx->pc = 0x15BD20u;
            goto label_15bd20;
        }
    }
    ctx->pc = 0x15BD10u;
label_15bd10:
    // 0x15bd10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x15bd10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15bd14:
    // 0x15bd14: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x15bd14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_15bd18:
    // 0x15bd18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_15bd1c:
    if (ctx->pc == 0x15BD1Cu) {
        ctx->pc = 0x15BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD18u;
        // 0x15bd1c: 0x459823  subu        $s3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD20u;
        goto label_15bd20;
    }
    ctx->pc = 0x15BD18u;
    {
        const bool branch_taken_0x15bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD18u;
        // 0x15bd1c: 0x459823  subu        $s3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd18) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD20u;
label_15bd20:
    // 0x15bd20: 0x10000028  b           . + 4 + (0x28 << 2)
label_15bd24:
    if (ctx->pc == 0x15BD24u) {
        ctx->pc = 0x15BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD20u;
        // 0x15bd24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD28u;
        goto label_15bd28;
    }
    ctx->pc = 0x15BD20u;
    {
        const bool branch_taken_0x15bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD20u;
        // 0x15bd24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd20) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD28u;
label_15bd28:
    // 0x15bd28: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x15bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_15bd2c:
    // 0x15bd2c: 0x26420063  addiu       $v0, $s2, 0x63
    ctx->pc = 0x15bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 99));
label_15bd30:
    // 0x15bd30: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x15bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15bd34:
    // 0x15bd34: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x15bd34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15bd38:
    // 0x15bd38: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x15bd38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_15bd3c:
    // 0x15bd3c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_15bd40:
    if (ctx->pc == 0x15BD40u) {
        ctx->pc = 0x15BD44u;
        goto label_15bd44;
    }
    ctx->pc = 0x15BD3Cu;
    {
        const bool branch_taken_0x15bd3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd3c) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD44u;
label_15bd44:
    // 0x15bd44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15bd48:
    // 0x15bd48: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x15bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_15bd4c:
    // 0x15bd4c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x15bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15bd50:
    // 0x15bd50: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15bd54:
    // 0x15bd54: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x15bd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bd58:
    // 0x15bd58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15bd5c:
    if (ctx->pc == 0x15BD5Cu) {
        ctx->pc = 0x15BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD58u;
        // 0x15bd5c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD60u;
        goto label_15bd60;
    }
    ctx->pc = 0x15BD58u;
    {
        const bool branch_taken_0x15bd58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD58u;
        // 0x15bd5c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd58) {
            ctx->pc = 0x15BD70u;
            goto label_15bd70;
        }
    }
    ctx->pc = 0x15BD60u;
label_15bd60:
    // 0x15bd60: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x15bd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15bd64:
    // 0x15bd64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x15bd64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_15bd68:
    // 0x15bd68: 0x10000016  b           . + 4 + (0x16 << 2)
label_15bd6c:
    if (ctx->pc == 0x15BD6Cu) {
        ctx->pc = 0x15BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD68u;
        // 0x15bd6c: 0x469823  subu        $s3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD70u;
        goto label_15bd70;
    }
    ctx->pc = 0x15BD68u;
    {
        const bool branch_taken_0x15bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD68u;
        // 0x15bd6c: 0x469823  subu        $s3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd68) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD70u;
label_15bd70:
    // 0x15bd70: 0x10000014  b           . + 4 + (0x14 << 2)
label_15bd74:
    if (ctx->pc == 0x15BD74u) {
        ctx->pc = 0x15BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD70u;
        // 0x15bd74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD78u;
        goto label_15bd78;
    }
    ctx->pc = 0x15BD70u;
    {
        const bool branch_taken_0x15bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD70u;
        // 0x15bd74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd70) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD78u;
label_15bd78:
    // 0x15bd78: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_15bd7c:
    // 0x15bd7c: 0x26420063  addiu       $v0, $s2, 0x63
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 99));
label_15bd80:
    // 0x15bd80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x15bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bd84:
    // 0x15bd84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x15bd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15bd88:
    // 0x15bd88: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x15bd88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_15bd8c:
    // 0x15bd8c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_15bd90:
    if (ctx->pc == 0x15BD90u) {
        ctx->pc = 0x15BD94u;
        goto label_15bd94;
    }
    ctx->pc = 0x15BD8Cu;
    {
        const bool branch_taken_0x15bd8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd8c) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BD94u;
label_15bd94:
    // 0x15bd94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15bd98:
    // 0x15bd98: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x15bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_15bd9c:
    // 0x15bd9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15bda0:
    // 0x15bda0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15bda4:
    // 0x15bda4: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x15bda4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15bda8:
    // 0x15bda8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15bdac:
    if (ctx->pc == 0x15BDACu) {
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDB0u;
        goto label_15bdb0;
    }
    ctx->pc = 0x15BDA8u;
    {
        const bool branch_taken_0x15bda8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bda8) {
            ctx->pc = 0x15BDC0u;
            goto label_15bdc0;
        }
    }
    ctx->pc = 0x15BDB0u;
label_15bdb0:
    // 0x15bdb0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x15bdb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15bdb4:
    // 0x15bdb4: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x15bdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_15bdb8:
    // 0x15bdb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_15bdbc:
    if (ctx->pc == 0x15BDBCu) {
        ctx->pc = 0x15BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDB8u;
        // 0x15bdbc: 0x449823  subu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDC0u;
        goto label_15bdc0;
    }
    ctx->pc = 0x15BDB8u;
    {
        const bool branch_taken_0x15bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDB8u;
        // 0x15bdbc: 0x449823  subu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdb8) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BDC0u;
label_15bdc0:
    // 0x15bdc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15bdc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bdc4:
    // 0x15bdc4: 0x92430073  lbu         $v1, 0x73($s2)
    ctx->pc = 0x15bdc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 115)));
label_15bdc8:
    // 0x15bdc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15bdcc:
    // 0x15bdcc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
label_15bdd0:
    if (ctx->pc == 0x15BDD0u) {
        ctx->pc = 0x15BDD4u;
        goto label_15bdd4;
    }
    ctx->pc = 0x15BDCCu;
    {
        const bool branch_taken_0x15bdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bdcc) {
            ctx->pc = 0x15BE98u;
            { ctx->pc = 0x15be98; return; }
        }
    }
    ctx->pc = 0x15BDD4u;
label_15bdd4:
    // 0x15bdd4: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
label_15bdd8:
    if (ctx->pc == 0x15BDD8u) {
        ctx->pc = 0x15BDDCu;
        goto label_15bddc;
    }
    ctx->pc = 0x15BDD4u;
    {
        const bool branch_taken_0x15bdd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdd4) {
            ctx->pc = 0x15BE98u;
            { ctx->pc = 0x15be98; return; }
        }
    }
    ctx->pc = 0x15BDDCu;
label_15bddc:
    // 0x15bddc: 0xc08f0cc  jal         func_23C330
label_15bde0:
    if (ctx->pc == 0x15BDE0u) {
        ctx->pc = 0x15BDE4u;
        goto label_15bde4;
    }
    ctx->pc = 0x15BDDCu;
    SET_GPR_U32(ctx, 31, 0x15BDE4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15BDE4u;
label_15bde4:
    // 0x15bde4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15bde8:
    // 0x15bde8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15bde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bdec:
    // 0x15bdec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15bdecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15bdf0:
    // 0x15bdf0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x15bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_15bdf4:
    // 0x15bdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15bdf8:
    // 0x15bdf8: 0x0  nop
    ctx->pc = 0x15bdf8u;
    // NOP
label_15bdfc:
    // 0x15bdfc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15bdfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15be00:
    // 0x15be00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15be04:
    // 0x15be04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15be04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15be08:
    // 0x15be08: 0x0  nop
    ctx->pc = 0x15be08u;
    // NOP
label_15be0c:
    // 0x15be0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15be0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15be10:
    // 0x15be10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15be10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15be14:
    // 0x15be14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15be14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15be18:
    // 0x15be18: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x15be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15be1c:
    // 0x15be1c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15be20:
    // 0x15be20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15be20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15be24:
    // 0x15be24: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x15be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15be28:
    // 0x15be28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15be2c:
    // 0x15be2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15be30:
    // 0x15be30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15be34:
    // 0x15be34: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x15be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_15be38:
    // 0x15be38: 0x24a70063  addiu       $a3, $a1, 0x63
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 99));
label_15be3c:
    // 0x15be3c: 0x90a50063  lbu         $a1, 0x63($a1)
    ctx->pc = 0x15be3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 99)));
label_15be40:
    // 0x15be40: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x15be40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15be44:
    // 0x15be44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15be48:
    if (ctx->pc == 0x15BE48u) {
        ctx->pc = 0x15BE4Cu;
        goto label_15be4c;
    }
    ctx->pc = 0x15BE44u;
    {
        const bool branch_taken_0x15be44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be44) {
            ctx->pc = 0x15BE58u;
            goto label_15be58;
        }
    }
    ctx->pc = 0x15BE4Cu;
label_15be4c:
    // 0x15be4c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15be50:
    // 0x15be50: 0x1000000b  b           . + 4 + (0xB << 2)
label_15be54:
    if (ctx->pc == 0x15BE54u) {
        ctx->pc = 0x15BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE50u;
        // 0x15be54: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE58u;
        goto label_15be58;
    }
    ctx->pc = 0x15BE50u;
    {
        const bool branch_taken_0x15be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE50u;
        // 0x15be54: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be50) {
            ctx->pc = 0x15BE80u;
            goto label_15be80;
        }
    }
    ctx->pc = 0x15BE58u;
label_15be58:
    // 0x15be58: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15be5c:
    // 0x15be5c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_15be60:
    if (ctx->pc == 0x15BE60u) {
        ctx->pc = 0x15BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE5Cu;
        // 0x15be60: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE64u;
        goto label_15be64;
    }
    ctx->pc = 0x15BE5Cu;
    {
        const bool branch_taken_0x15be5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE5Cu;
        // 0x15be60: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be5c) {
            ctx->pc = 0x15BE70u;
            goto label_15be70;
        }
    }
    ctx->pc = 0x15BE64u;
label_15be64:
    // 0x15be64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15be68:
    if (ctx->pc == 0x15BE68u) {
        ctx->pc = 0x15BE6Cu;
        goto label_15be6c;
    }
    ctx->pc = 0x15BE64u;
    {
        const bool branch_taken_0x15be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be64) {
            ctx->pc = 0x15BE70u;
            goto label_15be70;
        }
    }
    ctx->pc = 0x15BE6Cu;
label_15be6c:
    // 0x15be6c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_15be70:
    // 0x15be70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15be70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_15be74:
    // 0x15be74: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x15be74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_15be78:
    // 0x15be78: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_15be7c:
    if (ctx->pc == 0x15BE7Cu) {
        ctx->pc = 0x15BE80u;
        goto label_15be80;
    }
    ctx->pc = 0x15BE78u;
    {
        const bool branch_taken_0x15be78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15be78) {
            ctx->pc = 0x15BE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE80u;
label_15be80:
    // 0x15be80: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15be84:
    // 0x15be84: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15be88:
    // 0x15be88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15be8c:
    if (ctx->pc == 0x15BE8Cu) {
        ctx->pc = 0x15BE90u;
        { ctx->pc = 0x15be90; return; }
    }
    ctx->pc = 0x15BE88u;
    {
        const bool branch_taken_0x15be88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be88) {
            ctx->pc = 0x15BE98u;
            { ctx->pc = 0x15be98; return; }
        }
    }
    ctx->pc = 0x15BE90u;
    ctx->pc = 0x15be90u;
    return;
}

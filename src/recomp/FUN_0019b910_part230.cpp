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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20b620u: goto label_20b620;
        case 0x20b624u: goto label_20b624;
        case 0x20b628u: goto label_20b628;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b630u: goto label_20b630;
        case 0x20b634u: goto label_20b634;
        case 0x20b638u: goto label_20b638;
        case 0x20b63cu: goto label_20b63c;
        case 0x20b640u: goto label_20b640;
        case 0x20b644u: goto label_20b644;
        case 0x20b648u: goto label_20b648;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b650u: goto label_20b650;
        case 0x20b654u: goto label_20b654;
        case 0x20b658u: goto label_20b658;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b660u: goto label_20b660;
        case 0x20b664u: goto label_20b664;
        case 0x20b668u: goto label_20b668;
        case 0x20b66cu: goto label_20b66c;
        case 0x20b670u: goto label_20b670;
        case 0x20b674u: goto label_20b674;
        case 0x20b678u: goto label_20b678;
        case 0x20b67cu: goto label_20b67c;
        case 0x20b680u: goto label_20b680;
        case 0x20b684u: goto label_20b684;
        case 0x20b688u: goto label_20b688;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b690u: goto label_20b690;
        case 0x20b694u: goto label_20b694;
        case 0x20b698u: goto label_20b698;
        case 0x20b69cu: goto label_20b69c;
        case 0x20b6a0u: goto label_20b6a0;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6b8u: goto label_20b6b8;
        case 0x20b6bcu: goto label_20b6bc;
        case 0x20b6c0u: goto label_20b6c0;
        case 0x20b6c4u: goto label_20b6c4;
        case 0x20b6c8u: goto label_20b6c8;
        case 0x20b6ccu: goto label_20b6cc;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6d4u: goto label_20b6d4;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6dcu: goto label_20b6dc;
        case 0x20b6e0u: goto label_20b6e0;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6e8u: goto label_20b6e8;
        case 0x20b6ecu: goto label_20b6ec;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b6f4u: goto label_20b6f4;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b6fcu: goto label_20b6fc;
        case 0x20b700u: goto label_20b700;
        case 0x20b704u: goto label_20b704;
        case 0x20b708u: goto label_20b708;
        case 0x20b70cu: goto label_20b70c;
        case 0x20b710u: goto label_20b710;
        case 0x20b714u: goto label_20b714;
        case 0x20b718u: goto label_20b718;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7e8u: goto label_20b7e8;
        case 0x20b7ecu: goto label_20b7ec;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7f4u: goto label_20b7f4;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        default: return;
    }

label_20b620:
    // 0x20b620: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20b624:
    // 0x20b624: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b628:
    // 0x20b628: 0x24037b60  addiu       $v1, $zero, 0x7B60
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31584));
label_20b62c:
    // 0x20b62c: 0xa6020630  sh          $v0, 0x630($s0)
    ctx->pc = 0x20b62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1584), (uint16_t)GPR_U32(ctx, 2));
label_20b630:
    // 0x20b630: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20b630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b634:
    // 0x20b634: 0x26e20048  addiu       $v0, $s7, 0x48
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_20b638:
    // 0x20b638: 0xa6030632  sh          $v1, 0x632($s0)
    ctx->pc = 0x20b638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1586), (uint16_t)GPR_U32(ctx, 3));
label_20b63c:
    // 0x20b63c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20b640:
    // 0x20b640: 0xae080634  sw          $t0, 0x634($s0)
    ctx->pc = 0x20b640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 8));
label_20b644:
    // 0x20b644: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b648:
    // 0x20b648: 0x26e6004c  addiu       $a2, $s7, 0x4C
    ctx->pc = 0x20b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
label_20b64c:
    // 0x20b64c: 0xa6020640  sh          $v0, 0x640($s0)
    ctx->pc = 0x20b64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1600), (uint16_t)GPR_U32(ctx, 2));
label_20b650:
    // 0x20b650: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_20b654:
    // 0x20b654: 0x24027be0  addiu       $v0, $zero, 0x7BE0
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31712));
label_20b658:
    // 0x20b658: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b65c:
    // 0x20b65c: 0xa6020642  sh          $v0, 0x642($s0)
    ctx->pc = 0x20b65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 2));
label_20b660:
    // 0x20b660: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x20b660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20b664:
    // 0x20b664: 0xae080644  sw          $t0, 0x644($s0)
    ctx->pc = 0x20b664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 8));
label_20b668:
    // 0x20b668: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b66c:
    // 0x20b66c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20b670:
    // 0x20b670: 0xc0708ac  jal         func_1C22B0
label_20b674:
    if (ctx->pc == 0x20B674u) {
        ctx->pc = 0x20B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B670u;
        // 0x20b674: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B678u;
        goto label_20b678;
    }
    ctx->pc = 0x20B670u;
    SET_GPR_U32(ctx, 31, 0x20B678u);
    ctx->pc = 0x20B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B670u;
    // 0x20b674: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20B678u;
label_20b678:
    // 0x20b678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b67c:
    // 0x20b67c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b680:
    // 0x20b680: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_20b684:
    // 0x20b684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b688:
    // 0x20b688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b68c:
    // 0x20b68c: 0xc066c72  jal         func_19B1C8
label_20b690:
    if (ctx->pc == 0x20B690u) {
        ctx->pc = 0x20B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B68Cu;
        // 0x20b690: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B694u;
        goto label_20b694;
    }
    ctx->pc = 0x20B68Cu;
    SET_GPR_U32(ctx, 31, 0x20B694u);
    ctx->pc = 0x20B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B68Cu;
    // 0x20b690: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B68Cu, 0x20B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B694u;
label_20b694:
    // 0x20b694: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20b694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b698:
    // 0x20b698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b69c:
    // 0x20b69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20b69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b6a0:
    // 0x20b6a0: 0x0  nop
    ctx->pc = 0x20b6a0u;
    // NOP
label_20b6a4:
    // 0x20b6a4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20b6a8:
    // 0x20b6a8: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20b6ac:
    // 0x20b6ac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x20b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20b6b0:
    // 0x20b6b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b6b4:
    // 0x20b6b4: 0x46000ad  bltz        $v1, . + 4 + (0xAD << 2)
label_20b6b8:
    if (ctx->pc == 0x20B6B8u) {
        ctx->pc = 0x20B6BCu;
        goto label_20b6bc;
    }
    ctx->pc = 0x20B6B4u;
    {
        const bool branch_taken_0x20b6b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20b6b4) {
            ctx->pc = 0x20B96Cu;
            goto label_20b96c;
        }
    }
    ctx->pc = 0x20B6BCu;
label_20b6bc:
    // 0x20b6bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b6c0:
    // 0x20b6c0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b6c4:
    // 0x20b6c4: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b6c8:
    // 0x20b6c8: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x20b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
label_20b6cc:
    // 0x20b6cc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x20b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20b6d0:
    // 0x20b6d0: 0x8f82910c  lw          $v0, -0x6EF4($gp)
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b6d4:
    // 0x20b6d4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x20b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_20b6d8:
    // 0x20b6d8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b6dc:
    // 0x20b6dc: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20b6e0:
    // 0x20b6e0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20b6e4:
    // 0x20b6e4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20b6e8:
    // 0x20b6e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20b6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20b6ec:
    // 0x20b6ec: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_20b6f0:
    if (ctx->pc == 0x20B6F0u) {
        ctx->pc = 0x20B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6ECu;
        // 0x20b6f0: 0x65a821  addu        $s5, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6F4u;
        goto label_20b6f4;
    }
    ctx->pc = 0x20B6ECu;
    {
        const bool branch_taken_0x20b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x20B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6ECu;
        // 0x20b6f0: 0x65a821  addu        $s5, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6ec) {
            ctx->pc = 0x20B6FCu;
            goto label_20b6fc;
        }
    }
    ctx->pc = 0x20B6F4u;
label_20b6f4:
    // 0x20b6f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b6f8:
    if (ctx->pc == 0x20B6F8u) {
        ctx->pc = 0x20B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6F4u;
        // 0x20b6f8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6FCu;
        goto label_20b6fc;
    }
    ctx->pc = 0x20B6F4u;
    {
        const bool branch_taken_0x20b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6F4u;
        // 0x20b6f8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6f4) {
            ctx->pc = 0x20B700u;
            goto label_20b700;
        }
    }
    ctx->pc = 0x20B6FCu;
label_20b6fc:
    // 0x20b6fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b700:
    // 0x20b700: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b704:
    // 0x20b704: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
label_20b708:
    // 0x20b708: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20b70c:
    // 0x20b70c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b710:
    // 0x20b710: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_20b714:
    if (ctx->pc == 0x20B714u) {
        ctx->pc = 0x20B718u;
        goto label_20b718;
    }
    ctx->pc = 0x20B710u;
    {
        const bool branch_taken_0x20b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b710) {
            ctx->pc = 0x20B76Cu;
            goto label_20b76c;
        }
    }
    ctx->pc = 0x20B718u;
label_20b718:
    // 0x20b718: 0x8f839114  lw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b71c:
    // 0x20b71c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x20b71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b720:
    // 0x20b720: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b724:
    if (ctx->pc == 0x20B724u) {
        ctx->pc = 0x20B728u;
        goto label_20b728;
    }
    ctx->pc = 0x20B720u;
    {
        const bool branch_taken_0x20b720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b720) {
            ctx->pc = 0x20B744u;
            goto label_20b744;
        }
    }
    ctx->pc = 0x20B728u;
label_20b728:
    // 0x20b728: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_20b72c:
    // 0x20b72c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_20b730:
    if (ctx->pc == 0x20B730u) {
        ctx->pc = 0x20B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B72Cu;
        // 0x20b730: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B734u;
        goto label_20b734;
    }
    ctx->pc = 0x20B72Cu;
    {
        const bool branch_taken_0x20b72c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B72Cu;
        // 0x20b730: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b72c) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B734u;
label_20b734:
    // 0x20b734: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b738:
    // 0x20b738: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x20b738u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_20b73c:
    // 0x20b73c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b740:
    if (ctx->pc == 0x20B740u) {
        ctx->pc = 0x20B744u;
        goto label_20b744;
    }
    ctx->pc = 0x20B73Cu;
    {
        const bool branch_taken_0x20b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b73c) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B744u;
label_20b744:
    // 0x20b744: 0x0  nop
    ctx->pc = 0x20b744u;
    // NOP
label_20b748:
    // 0x20b748: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b74c:
    // 0x20b74c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b750:
    // 0x20b750: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b754:
    // 0x20b754: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20b758:
    if (ctx->pc == 0x20B758u) {
        ctx->pc = 0x20B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B754u;
        // 0x20b758: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B75Cu;
        goto label_20b75c;
    }
    ctx->pc = 0x20B754u;
    {
        const bool branch_taken_0x20b754 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B754u;
        // 0x20b758: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b754) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B75Cu;
label_20b75c:
    // 0x20b75c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b760:
    // 0x20b760: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_20b764:
    // 0x20b764: 0x0  nop
    ctx->pc = 0x20b764u;
    // NOP
label_20b768:
    // 0x20b768: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20b76c:
    // 0x20b76c: 0x0  nop
    ctx->pc = 0x20b76cu;
    // NOP
label_20b770:
    // 0x20b770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b774:
    // 0x20b774: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x20b774u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20b778:
    // 0x20b778: 0x144fc2  srl         $t1, $s4, 31
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_20b77c:
    // 0x20b77c: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x20b77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b780:
    // 0x20b780: 0x3810  mfhi        $a3
    ctx->pc = 0x20b780u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_20b784:
    // 0x20b784: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_20b788:
    // 0x20b788: 0x34465556  ori         $a2, $v0, 0x5556
    ctx->pc = 0x20b788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_20b78c:
    // 0x20b78c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b790:
    // 0x20b790: 0xd40018  mult        $zero, $a2, $s4
    ctx->pc = 0x20b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20b794:
    // 0x20b794: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b798:
    // 0x20b798: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20b79c:
    // 0x20b79c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7a0:
    // 0x20b7a0: 0x2e69021  addu        $s2, $s7, $a2
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
label_20b7a4:
    // 0x20b7a4: 0x4010  mfhi        $t0
    ctx->pc = 0x20b7a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_20b7a8:
    // 0x20b7a8: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x20b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_20b7ac:
    // 0x20b7ac: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x20b7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7b0:
    // 0x20b7b0: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20b7b4:
    // 0x20b7b4: 0xa6a70090  sh          $a3, 0x90($s5)
    ctx->pc = 0x20b7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 7));
label_20b7b8:
    // 0x20b7b8: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x20b7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_20b7bc:
    // 0x20b7bc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7c0:
    // 0x20b7c0: 0x24c86c00  addiu       $t0, $a2, 0x6C00
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7c4:
    // 0x20b7c4: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_20b7c8:
    // 0x20b7c8: 0x2646002d  addiu       $a2, $s2, 0x2D
    ctx->pc = 0x20b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 45));
label_20b7cc:
    // 0x20b7cc: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x20b7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_20b7d0:
    // 0x20b7d0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7d4:
    // 0x20b7d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b7d8:
    // 0x20b7d8: 0x24c96c00  addiu       $t1, $a2, 0x6C00
    ctx->pc = 0x20b7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7dc:
    // 0x20b7dc: 0x24f30060  addiu       $s3, $a3, 0x60
    ctx->pc = 0x20b7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_20b7e0:
    // 0x20b7e0: 0x2646003c  addiu       $a2, $s2, 0x3C
    ctx->pc = 0x20b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_20b7e4:
    // 0x20b7e4: 0x1338c0  sll         $a3, $s3, 3
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_20b7e8:
    // 0x20b7e8: 0x24ea7900  addiu       $t2, $a3, 0x7900
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_20b7ec:
    // 0x20b7ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7f0:
    // 0x20b7f0: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7f4:
    // 0x20b7f4: 0xa6aa0092  sh          $t2, 0x92($s5)
    ctx->pc = 0x20b7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 10));
label_20b7f8:
    // 0x20b7f8: 0x2666003c  addiu       $a2, $s3, 0x3C
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
label_20b7fc:
    // 0x20b7fc: 0xaea30094  sw          $v1, 0x94($s5)
    ctx->pc = 0x20b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 3));
label_20b800:
    // 0x20b800: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b804:
    // 0x20b804: 0xa6a800a0  sh          $t0, 0xA0($s5)
    ctx->pc = 0x20b804u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 160), (uint16_t)GPR_U32(ctx, 8));
label_20b808:
    // 0x20b808: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b80c:
    // 0x20b80c: 0xa6a600a2  sh          $a2, 0xA2($s5)
    ctx->pc = 0x20b80cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 162), (uint16_t)GPR_U32(ctx, 6));
label_20b810:
    // 0x20b810: 0xaea300a4  sw          $v1, 0xA4($s5)
    ctx->pc = 0x20b810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 3));
label_20b814:
    // 0x20b814: 0x26660023  addiu       $a2, $s3, 0x23
    ctx->pc = 0x20b814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 35));
label_20b818:
    // 0x20b818: 0xa2a50080  sb          $a1, 0x80($s5)
    ctx->pc = 0x20b818u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 5));
label_20b81c:
    // 0x20b81c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b820:
    // 0x20b820: 0xa2a50081  sb          $a1, 0x81($s5)
    ctx->pc = 0x20b820u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 5));
label_20b824:
    // 0x20b824: 0x24c87900  addiu       $t0, $a2, 0x7900
    ctx->pc = 0x20b824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b828:
    // 0x20b828: 0xa2a50082  sb          $a1, 0x82($s5)
    ctx->pc = 0x20b828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 5));
label_20b82c:
    // 0x20b82c: 0x26660028  addiu       $a2, $s3, 0x28
    ctx->pc = 0x20b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_20b830:
    // 0x20b830: 0x838a9108  lb          $t2, -0x6EF8($gp)
    ctx->pc = 0x20b830u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938888)));
label_20b834:
    // 0x20b834: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b838:
    // 0x20b838: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20b838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b83c:
    // 0x20b83c: 0xa2aa0083  sb          $t2, 0x83($s5)
    ctx->pc = 0x20b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 10));
label_20b840:
    // 0x20b840: 0xaea20084  sw          $v0, 0x84($s5)
    ctx->pc = 0x20b840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
label_20b844:
    // 0x20b844: 0xa6a90130  sh          $t1, 0x130($s5)
    ctx->pc = 0x20b844u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 304), (uint16_t)GPR_U32(ctx, 9));
label_20b848:
    // 0x20b848: 0xa6a80132  sh          $t0, 0x132($s5)
    ctx->pc = 0x20b848u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 306), (uint16_t)GPR_U32(ctx, 8));
label_20b84c:
    // 0x20b84c: 0xaea30134  sw          $v1, 0x134($s5)
    ctx->pc = 0x20b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 308), GPR_U32(ctx, 3));
label_20b850:
    // 0x20b850: 0xa6a70140  sh          $a3, 0x140($s5)
    ctx->pc = 0x20b850u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 7));
label_20b854:
    // 0x20b854: 0xa6a60142  sh          $a2, 0x142($s5)
    ctx->pc = 0x20b854u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 322), (uint16_t)GPR_U32(ctx, 6));
label_20b858:
    // 0x20b858: 0xaea30144  sw          $v1, 0x144($s5)
    ctx->pc = 0x20b858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 3));
label_20b85c:
    // 0x20b85c: 0xa2a50120  sb          $a1, 0x120($s5)
    ctx->pc = 0x20b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 5));
label_20b860:
    // 0x20b860: 0xa2a50121  sb          $a1, 0x121($s5)
    ctx->pc = 0x20b860u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 5));
label_20b864:
    // 0x20b864: 0xa2a50122  sb          $a1, 0x122($s5)
    ctx->pc = 0x20b864u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 5));
label_20b868:
    // 0x20b868: 0xa2a00123  sb          $zero, 0x123($s5)
    ctx->pc = 0x20b868u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 0));
label_20b86c:
    // 0x20b86c: 0xaea20124  sw          $v0, 0x124($s5)
    ctx->pc = 0x20b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
label_20b870:
    // 0x20b870: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b874:
    // 0x20b874: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x20b874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_20b878:
    // 0x20b878: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_20b87c:
    if (ctx->pc == 0x20B87Cu) {
        ctx->pc = 0x20B880u;
        goto label_20b880;
    }
    ctx->pc = 0x20B878u;
    {
        const bool branch_taken_0x20b878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b878) {
            ctx->pc = 0x20B890u;
            goto label_20b890;
        }
    }
    ctx->pc = 0x20B880u;
label_20b880:
    // 0x20b880: 0xc070a34  jal         func_1C28D0
label_20b884:
    if (ctx->pc == 0x20B884u) {
        ctx->pc = 0x20B888u;
        goto label_20b888;
    }
    ctx->pc = 0x20B880u;
    SET_GPR_U32(ctx, 31, 0x20B888u);
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x20B888u;
label_20b888:
    // 0x20b888: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b88c:
    if (ctx->pc == 0x20B88Cu) {
        ctx->pc = 0x20B890u;
        goto label_20b890;
    }
    ctx->pc = 0x20B888u;
    {
        const bool branch_taken_0x20b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b888) {
            ctx->pc = 0x20B898u;
            goto label_20b898;
        }
    }
    ctx->pc = 0x20B890u;
label_20b890:
    // 0x20b890: 0xc070a34  jal         func_1C28D0
label_20b894:
    if (ctx->pc == 0x20B894u) {
        ctx->pc = 0x20B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B890u;
        // 0x20b894: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B898u;
        goto label_20b898;
    }
    ctx->pc = 0x20B890u;
    SET_GPR_U32(ctx, 31, 0x20B898u);
    ctx->pc = 0x20B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B890u;
    // 0x20b894: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x20B898u;
label_20b898:
    // 0x20b898: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20b89c:
    // 0x20b89c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b8a0:
    // 0x20b8a0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_20b8a4:
    // 0x20b8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b8a8:
    // 0x20b8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b8ac:
    // 0x20b8ac: 0xc066c72  jal         func_19B1C8
label_20b8b0:
    if (ctx->pc == 0x20B8B0u) {
        ctx->pc = 0x20B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ACu;
        // 0x20b8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8B4u;
        goto label_20b8b4;
    }
    ctx->pc = 0x20B8ACu;
    SET_GPR_U32(ctx, 31, 0x20B8B4u);
    ctx->pc = 0x20B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8ACu;
    // 0x20b8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B8ACu, 0x20B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8B4u;
label_20b8b4:
    // 0x20b8b4: 0x8f83910c  lw          $v1, -0x6EF4($gp)
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b8b8:
    // 0x20b8b8: 0x1474002c  bne         $v1, $s4, . + 4 + (0x2C << 2)
label_20b8bc:
    if (ctx->pc == 0x20B8BCu) {
        ctx->pc = 0x20B8C0u;
        goto label_20b8c0;
    }
    ctx->pc = 0x20B8B8u;
    {
        const bool branch_taken_0x20b8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x20b8b8) {
            ctx->pc = 0x20B96Cu;
            goto label_20b96c;
        }
    }
    ctx->pc = 0x20B8C0u;
label_20b8c0:
    // 0x20b8c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b8c4:
    // 0x20b8c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b8c8:
    // 0x20b8c8: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b8cc:
    // 0x20b8cc: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_20b8d0:
    // 0x20b8d0: 0x8f859114  lw          $a1, -0x6EEC($gp)
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b8d4:
    // 0x20b8d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20b8d8:
    // 0x20b8d8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b8dc:
    // 0x20b8dc: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20b8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b8e0:
    // 0x20b8e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b8e4:
    // 0x20b8e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b8e8:
    // 0x20b8e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20b8ec:
    // 0x20b8ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b8f0:
    if (ctx->pc == 0x20B8F0u) {
        ctx->pc = 0x20B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ECu;
        // 0x20b8f0: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8F4u;
        goto label_20b8f4;
    }
    ctx->pc = 0x20B8ECu;
    {
        const bool branch_taken_0x20b8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ECu;
        // 0x20b8f0: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8ec) {
            ctx->pc = 0x20B910u;
            goto label_20b910;
        }
    }
    ctx->pc = 0x20B8F4u;
label_20b8f4:
    // 0x20b8f4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20b8f8:
    // 0x20b8f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b8fc:
    if (ctx->pc == 0x20B8FCu) {
        ctx->pc = 0x20B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8F8u;
        // 0x20b8fc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B900u;
        goto label_20b900;
    }
    ctx->pc = 0x20B8F8u;
    {
        const bool branch_taken_0x20b8f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8F8u;
        // 0x20b8fc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8f8) {
            ctx->pc = 0x20B908u;
            goto label_20b908;
        }
    }
    ctx->pc = 0x20B900u;
label_20b900:
    // 0x20b900: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b904:
    // 0x20b904: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b908:
    // 0x20b908: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b90c:
    if (ctx->pc == 0x20B90Cu) {
        ctx->pc = 0x20B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B908u;
        // 0x20b90c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B910u;
        goto label_20b910;
    }
    ctx->pc = 0x20B908u;
    {
        const bool branch_taken_0x20b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B908u;
        // 0x20b90c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b908) {
            ctx->pc = 0x20B930u;
            goto label_20b930;
        }
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b914:
    // 0x20b914: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20b914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20b918:
    // 0x20b918: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20b918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b91c:
    // 0x20b91c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b920:
    if (ctx->pc == 0x20B920u) {
        ctx->pc = 0x20B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B91Cu;
        // 0x20b920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B924u;
        goto label_20b924;
    }
    ctx->pc = 0x20B91Cu;
    {
        const bool branch_taken_0x20b91c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B91Cu;
        // 0x20b920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b91c) {
            ctx->pc = 0x20B92Cu;
            goto label_20b92c;
        }
    }
    ctx->pc = 0x20B924u;
label_20b924:
    // 0x20b924: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b928:
    // 0x20b928: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b92c:
    // 0x20b92c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20b930:
    // 0x20b930: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20b930u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20b934:
    // 0x20b934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b938:
    // 0x20b938: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20b938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b93c:
    // 0x20b93c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_20b940:
    // 0x20b940: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x20b940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20b944:
    // 0x20b944: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20b948:
    // 0x20b948: 0xc07c0d0  jal         func_1F0340
label_20b94c:
    if (ctx->pc == 0x20B94Cu) {
        ctx->pc = 0x20B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B948u;
        // 0x20b94c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B950u;
        goto label_20b950;
    }
    ctx->pc = 0x20B948u;
    SET_GPR_U32(ctx, 31, 0x20B950u);
    ctx->pc = 0x20B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B948u;
    // 0x20b94c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20B950u;
label_20b950:
    // 0x20b950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20b950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20b954:
    // 0x20b954: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b958:
    // 0x20b958: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_20b95c:
    // 0x20b95c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b960:
    // 0x20b960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b964:
    // 0x20b964: 0xc066c72  jal         func_19B1C8
label_20b968:
    if (ctx->pc == 0x20B968u) {
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B96Cu;
        goto label_20b96c;
    }
    ctx->pc = 0x20B964u;
    SET_GPR_U32(ctx, 31, 0x20B96Cu);
    ctx->pc = 0x20B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B964u;
    // 0x20b968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B964u, 0x20B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B96Cu;
label_20b96c:
    // 0x20b96c: 0x0  nop
    ctx->pc = 0x20b96cu;
    // NOP
label_20b970:
    // 0x20b970: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20b970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20b974:
    // 0x20b974: 0x2a83000f  slti        $v1, $s4, 0xF
    ctx->pc = 0x20b974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
label_20b978:
    // 0x20b978: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20b97c:
    // 0x20b97c: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
label_20b980:
    if (ctx->pc == 0x20B980u) {
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x263102a0  addiu       $s1, $s1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B984u;
        goto label_20b984;
    }
    ctx->pc = 0x20B97Cu;
    {
        const bool branch_taken_0x20b97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x263102a0  addiu       $s1, $s1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b97c) {
            ctx->pc = 0x20B6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B984u;
label_20b984:
    // 0x20b984: 0x0  nop
    ctx->pc = 0x20b984u;
    // NOP
label_20b988:
    // 0x20b988: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20b98c:
    // 0x20b98c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20b98cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20b990:
    // 0x20b990: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20b990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20b994:
    // 0x20b994: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20b994u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20b998:
    // 0x20b998: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20b998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20b99c:
    // 0x20b99c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20b99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20b9a0:
    // 0x20b9a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b9a4:
    // 0x20b9a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b9a8:
    // 0x20b9a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b9ac:
    // 0x20b9ac: 0x3e00008  jr          $ra
label_20b9b0:
    if (ctx->pc == 0x20B9B0u) {
        ctx->pc = 0x20B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ACu;
        // 0x20b9b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9B4u;
        goto label_20b9b4;
    }
    ctx->pc = 0x20B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ACu;
        // 0x20b9b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9B4u;
label_20b9b4:
    // 0x20b9b4: 0x0  nop
    ctx->pc = 0x20b9b4u;
    // NOP
label_20b9b8:
    // 0x20b9b8: 0x0  nop
    ctx->pc = 0x20b9b8u;
    // NOP
label_20b9bc:
    // 0x20b9bc: 0x0  nop
    ctx->pc = 0x20b9bcu;
    // NOP
label_20b9c0:
    // 0x20b9c0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b9c4:
    // 0x20b9c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b9c8:
    // 0x20b9c8: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_20b9cc:
    // 0x20b9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b9d0:
    // 0x20b9d0: 0x3e00008  jr          $ra
label_20b9d4:
    if (ctx->pc == 0x20B9D4u) {
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9D8u;
        goto label_20b9d8;
    }
    ctx->pc = 0x20B9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9D8u;
label_20b9d8:
    // 0x20b9d8: 0x0  nop
    ctx->pc = 0x20b9d8u;
    // NOP
label_20b9dc:
    // 0x20b9dc: 0x0  nop
    ctx->pc = 0x20b9dcu;
    // NOP
label_20b9e0:
    // 0x20b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b9e4:
    // 0x20b9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b9e8:
    // 0x20b9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20b9ec:
    // 0x20b9ec: 0xc082ee4  jal         func_20BB90
label_20b9f0:
    if (ctx->pc == 0x20B9F0u) {
        ctx->pc = 0x20B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ECu;
        // 0x20b9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9F4u;
        goto label_20b9f4;
    }
    ctx->pc = 0x20B9ECu;
    SET_GPR_U32(ctx, 31, 0x20B9F4u);
    ctx->pc = 0x20B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9ECu;
    // 0x20b9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB90u;
    goto label_20bb90;
    ctx->pc = 0x20B9F4u;
label_20b9f4:
    // 0x20b9f4: 0xc082fe4  jal         func_20BF90
label_20b9f8:
    if (ctx->pc == 0x20B9F8u) {
        ctx->pc = 0x20B9FCu;
        goto label_20b9fc;
    }
    ctx->pc = 0x20B9F4u;
    SET_GPR_U32(ctx, 31, 0x20B9FCu);
    ctx->pc = 0x20BF90u;
    { ctx->pc = 0x20bf90; return; }
    ctx->pc = 0x20B9FCu;
label_20b9fc:
    // 0x20b9fc: 0x8f829160  lw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
label_20ba00:
    // 0x20ba00: 0xc060258  jal         func_180960
label_20ba04:
    if (ctx->pc == 0x20BA04u) {
        ctx->pc = 0x20BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA00u;
        // 0x20ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA08u;
        goto label_20ba08;
    }
    ctx->pc = 0x20BA00u;
    SET_GPR_U32(ctx, 31, 0x20BA08u);
    ctx->pc = 0x20BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA00u;
    // 0x20ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20BA00u, 0x20BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA08u;
label_20ba08:
    // 0x20ba08: 0xc060258  jal         func_180960
label_20ba0c:
    if (ctx->pc == 0x20BA0Cu) {
        ctx->pc = 0x20BA10u;
        goto label_20ba10;
    }
    ctx->pc = 0x20BA08u;
    SET_GPR_U32(ctx, 31, 0x20BA10u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20BA08u, 0x20BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA10u;
label_20ba10:
    // 0x20ba10: 0xc082e90  jal         func_20BA40
label_20ba14:
    if (ctx->pc == 0x20BA14u) {
        ctx->pc = 0x20BA18u;
        goto label_20ba18;
    }
    ctx->pc = 0x20BA10u;
    SET_GPR_U32(ctx, 31, 0x20BA18u);
    ctx->pc = 0x20BA40u;
    goto label_20ba40;
    ctx->pc = 0x20BA18u;
label_20ba18:
    // 0x20ba18: 0x8f849168  lw          $a0, -0x6E98($gp)
    ctx->pc = 0x20ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938984)));
label_20ba1c:
    // 0x20ba1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba20:
    // 0x20ba20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ba24:
    // 0x20ba24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba28:
    // 0x20ba28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ba28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ba2c:
    // 0x20ba2c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x20ba2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_20ba30:
    // 0x20ba30: 0x3e00008  jr          $ra
label_20ba34:
    if (ctx->pc == 0x20BA34u) {
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA30u;
        // 0x20ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA38u;
        goto label_20ba38;
    }
    ctx->pc = 0x20BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA30u;
        // 0x20ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA38u;
label_20ba38:
    // 0x20ba38: 0x0  nop
    ctx->pc = 0x20ba38u;
    // NOP
label_20ba3c:
    // 0x20ba3c: 0x0  nop
    ctx->pc = 0x20ba3cu;
    // NOP
label_20ba40:
    // 0x20ba40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20ba44:
    // 0x20ba44: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x20ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_20ba48:
    // 0x20ba48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20ba4c:
    // 0x20ba4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ba50:
    // 0x20ba50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ba54:
    // 0x20ba54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20ba58:
    // 0x20ba58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ba5c:
    // 0x20ba5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ba60:
    // 0x20ba60: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20ba64:
    // 0x20ba64: 0xc070ea8  jal         func_1C3AA0
label_20ba68:
    if (ctx->pc == 0x20BA68u) {
        ctx->pc = 0x20BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA64u;
        // 0x20ba68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA6Cu;
        goto label_20ba6c;
    }
    ctx->pc = 0x20BA64u;
    SET_GPR_U32(ctx, 31, 0x20BA6Cu);
    ctx->pc = 0x20BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA64u;
    // 0x20ba68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x20BA6Cu;
label_20ba6c:
    // 0x20ba6c: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20ba70:
    // 0x20ba70: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x20ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ba74:
    // 0x20ba74: 0xc070ea8  jal         func_1C3AA0
label_20ba78:
    if (ctx->pc == 0x20BA78u) {
        ctx->pc = 0x20BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA74u;
        // 0x20ba78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA7Cu;
        goto label_20ba7c;
    }
    ctx->pc = 0x20BA74u;
    SET_GPR_U32(ctx, 31, 0x20BA7Cu);
    ctx->pc = 0x20BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA74u;
    // 0x20ba78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x20BA7Cu;
label_20ba7c:
    // 0x20ba7c: 0xc070038  jal         func_1C00E0
label_20ba80:
    if (ctx->pc == 0x20BA80u) {
        ctx->pc = 0x20BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA7Cu;
        // 0x20ba80: 0x8f84915c  lw          $a0, -0x6EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA84u;
        goto label_20ba84;
    }
    ctx->pc = 0x20BA7Cu;
    SET_GPR_U32(ctx, 31, 0x20BA84u);
    ctx->pc = 0x20BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA7Cu;
    // 0x20ba80: 0x8f84915c  lw          $a0, -0x6EA4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BA84u;
label_20ba84:
    // 0x20ba84: 0xc070038  jal         func_1C00E0
label_20ba88:
    if (ctx->pc == 0x20BA88u) {
        ctx->pc = 0x20BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA84u;
        // 0x20ba88: 0x8f849158  lw          $a0, -0x6EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA8Cu;
        goto label_20ba8c;
    }
    ctx->pc = 0x20BA84u;
    SET_GPR_U32(ctx, 31, 0x20BA8Cu);
    ctx->pc = 0x20BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA84u;
    // 0x20ba88: 0x8f849158  lw          $a0, -0x6EA8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BA8Cu;
label_20ba8c:
    // 0x20ba8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba90:
    // 0x20ba90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20ba90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba94:
    // 0x20ba94: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20ba98:
    // 0x20ba98: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20ba98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20ba9c:
    // 0x20ba9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20baa0:
    // 0x20baa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20baa4:
    if (ctx->pc == 0x20BAA4u) {
        ctx->pc = 0x20BAA8u;
        goto label_20baa8;
    }
    ctx->pc = 0x20BAA0u;
    {
        const bool branch_taken_0x20baa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20baa0) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BAA8u;
label_20baa8:
    // 0x20baa8: 0xc070038  jal         func_1C00E0
label_20baac:
    if (ctx->pc == 0x20BAACu) {
        ctx->pc = 0x20BAB0u;
        goto label_20bab0;
    }
    ctx->pc = 0x20BAA8u;
    SET_GPR_U32(ctx, 31, 0x20BAB0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAB0u;
label_20bab0:
    // 0x20bab0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20bab4:
    // 0x20bab4: 0x0  nop
    ctx->pc = 0x20bab4u;
    // NOP
label_20bab8:
    // 0x20bab8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20babc:
    // 0x20babc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bac0:
    // 0x20bac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bac4:
    // 0x20bac4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20bac8:
    if (ctx->pc == 0x20BAC8u) {
        ctx->pc = 0x20BACCu;
        goto label_20bacc;
    }
    ctx->pc = 0x20BAC4u;
    {
        const bool branch_taken_0x20bac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bac4) {
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BACCu;
label_20bacc:
    // 0x20bacc: 0xc070038  jal         func_1C00E0
label_20bad0:
    if (ctx->pc == 0x20BAD0u) {
        ctx->pc = 0x20BAD4u;
        goto label_20bad4;
    }
    ctx->pc = 0x20BACCu;
    SET_GPR_U32(ctx, 31, 0x20BAD4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAD4u;
label_20bad4:
    // 0x20bad4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20bad8:
    // 0x20bad8: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20badc:
    // 0x20badc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bae0:
    // 0x20bae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bae4:
    // 0x20bae4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20bae8:
    if (ctx->pc == 0x20BAE8u) {
        ctx->pc = 0x20BAECu;
        goto label_20baec;
    }
    ctx->pc = 0x20BAE4u;
    {
        const bool branch_taken_0x20bae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bae4) {
            ctx->pc = 0x20BAF8u;
            goto label_20baf8;
        }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0xc070038  jal         func_1C00E0
label_20baf0:
    if (ctx->pc == 0x20BAF0u) {
        ctx->pc = 0x20BAF4u;
        goto label_20baf4;
    }
    ctx->pc = 0x20BAECu;
    SET_GPR_U32(ctx, 31, 0x20BAF4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAF4u;
label_20baf4:
    // 0x20baf4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20baf8:
    // 0x20baf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20baf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bafc:
    // 0x20bafc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bb00:
    // 0x20bb00: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20bb04:
    // 0x20bb04: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x20bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
label_20bb08:
    // 0x20bb08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bb0c:
    // 0x20bb0c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20bb10:
    // 0x20bb10: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x20bb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20bb14:
    // 0x20bb14: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x20bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20bb18:
    // 0x20bb18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20bb1c:
    if (ctx->pc == 0x20BB1Cu) {
        ctx->pc = 0x20BB20u;
        goto label_20bb20;
    }
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB2Cu;
            goto label_20bb2c;
        }
    }
    ctx->pc = 0x20BB20u;
label_20bb20:
    // 0x20bb20: 0xc070038  jal         func_1C00E0
label_20bb24:
    if (ctx->pc == 0x20BB24u) {
        ctx->pc = 0x20BB28u;
        goto label_20bb28;
    }
    ctx->pc = 0x20BB20u;
    SET_GPR_U32(ctx, 31, 0x20BB28u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BB28u;
label_20bb28:
    // 0x20bb28: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x20bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_20bb2c:
    // 0x20bb2c: 0x0  nop
    ctx->pc = 0x20bb2cu;
    // NOP
label_20bb30:
    // 0x20bb30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20bb34:
    // 0x20bb34: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x20bb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_20bb38:
    // 0x20bb38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_20bb3c:
    if (ctx->pc == 0x20BB3Cu) {
        ctx->pc = 0x20BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB38u;
        // 0x20bb3c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB40u;
        goto label_20bb40;
    }
    ctx->pc = 0x20BB38u;
    {
        const bool branch_taken_0x20bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB38u;
        // 0x20bb3c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb38) {
            ctx->pc = 0x20BB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bb00;
        }
    }
    ctx->pc = 0x20BB40u;
label_20bb40:
    // 0x20bb40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bb44:
    // 0x20bb44: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bb48:
    // 0x20bb48: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_20bb4c:
    if (ctx->pc == 0x20BB4Cu) {
        ctx->pc = 0x20BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB48u;
        // 0x20bb4c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB50u;
        goto label_20bb50;
    }
    ctx->pc = 0x20BB48u;
    {
        const bool branch_taken_0x20bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB48u;
        // 0x20bb4c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb48) {
            ctx->pc = 0x20BA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ba94;
        }
    }
    ctx->pc = 0x20BB50u;
label_20bb50:
    // 0x20bb50: 0xc04e19c  jal         func_138670
label_20bb54:
    if (ctx->pc == 0x20BB54u) {
        ctx->pc = 0x20BB58u;
        goto label_20bb58;
    }
    ctx->pc = 0x20BB50u;
    SET_GPR_U32(ctx, 31, 0x20BB58u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x20BB50u, 0x20BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB58u;
label_20bb58:
    // 0x20bb58: 0xc05b1e0  jal         func_16C780
label_20bb5c:
    if (ctx->pc == 0x20BB5Cu) {
        ctx->pc = 0x20BB60u;
        goto label_20bb60;
    }
    ctx->pc = 0x20BB58u;
    SET_GPR_U32(ctx, 31, 0x20BB60u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x20BB58u, 0x20BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB60u;
label_20bb60:
    // 0x20bb60: 0xc05b578  jal         func_16D5E0
label_20bb64:
    if (ctx->pc == 0x20BB64u) {
        ctx->pc = 0x20BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB60u;
        // 0x20bb64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB68u;
        goto label_20bb68;
    }
    ctx->pc = 0x20BB60u;
    SET_GPR_U32(ctx, 31, 0x20BB68u);
    ctx->pc = 0x20BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB60u;
    // 0x20bb64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20BB60u, 0x20BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB68u;
label_20bb68:
    // 0x20bb68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20bb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20bb6c:
    // 0x20bb6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20bb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20bb70:
    // 0x20bb70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20bb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bb74:
    // 0x20bb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20bb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bb78:
    // 0x20bb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20bb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20bb7c:
    // 0x20bb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20bb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20bb80:
    // 0x20bb80: 0x3e00008  jr          $ra
label_20bb84:
    if (ctx->pc == 0x20BB84u) {
        ctx->pc = 0x20BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB80u;
        // 0x20bb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB88u;
        goto label_20bb88;
    }
    ctx->pc = 0x20BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB80u;
        // 0x20bb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BB88u;
label_20bb88:
    // 0x20bb88: 0x0  nop
    ctx->pc = 0x20bb88u;
    // NOP
label_20bb8c:
    // 0x20bb8c: 0x0  nop
    ctx->pc = 0x20bb8cu;
    // NOP
label_20bb90:
    // 0x20bb90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_20bb94:
    // 0x20bb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bb98:
    // 0x20bb98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_20bb9c:
    // 0x20bb9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bba0:
    // 0x20bba0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_20bba4:
    // 0x20bba4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20bba8:
    // 0x20bba8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20bba8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bbac:
    // 0x20bbac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_20bbb0:
    // 0x20bbb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bbb4:
    // 0x20bbb4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20bbb8:
    // 0x20bbb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20bbbc:
    // 0x20bbbc: 0xc06dfd4  jal         func_1B7F50
label_20bbc0:
    if (ctx->pc == 0x20BBC0u) {
        ctx->pc = 0x20BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBBCu;
        // 0x20bbc0: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBC4u;
        goto label_20bbc4;
    }
    ctx->pc = 0x20BBBCu;
    SET_GPR_U32(ctx, 31, 0x20BBC4u);
    ctx->pc = 0x20BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBBCu;
    // 0x20bbc0: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x20BBC4u;
label_20bbc4:
    // 0x20bbc4: 0xc082f94  jal         func_20BE50
label_20bbc8:
    if (ctx->pc == 0x20BBC8u) {
        ctx->pc = 0x20BBCCu;
        goto label_20bbcc;
    }
    ctx->pc = 0x20BBC4u;
    SET_GPR_U32(ctx, 31, 0x20BBCCu);
    ctx->pc = 0x20BE50u;
    { ctx->pc = 0x20be50; return; }
    ctx->pc = 0x20BBCCu;
label_20bbcc:
    // 0x20bbcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bbd0:
    // 0x20bbd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20bbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bbd4:
    // 0x20bbd4: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20bbd8:
    // 0x20bbd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bbdc:
    // 0x20bbdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bbe0:
    // 0x20bbe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bbe4:
    if (ctx->pc == 0x20BBE4u) {
        ctx->pc = 0x20BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE0u;
        // 0x20bbe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBE8u;
        goto label_20bbe8;
    }
    ctx->pc = 0x20BBE0u;
    {
        const bool branch_taken_0x20bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE0u;
        // 0x20bbe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbe0) {
            ctx->pc = 0x20BBF4u;
            goto label_20bbf4;
        }
    }
    ctx->pc = 0x20BBE8u;
label_20bbe8:
    // 0x20bbe8: 0xc070080  jal         func_1C0200
label_20bbec:
    if (ctx->pc == 0x20BBECu) {
        ctx->pc = 0x20BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE8u;
        // 0x20bbec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBF0u;
        goto label_20bbf0;
    }
    ctx->pc = 0x20BBE8u;
    SET_GPR_U32(ctx, 31, 0x20BBF0u);
    ctx->pc = 0x20BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBE8u;
    // 0x20bbec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20BBF0u;
label_20bbf0:
    // 0x20bbf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bbf4:
    // 0x20bbf4: 0x0  nop
    ctx->pc = 0x20bbf4u;
    // NOP
label_20bbf8:
    // 0x20bbf8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20bbfc:
    // 0x20bbfc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc00:
    // 0x20bc00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bc04:
    // 0x20bc04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    {
        const bool branch_taken_0x20bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc04) {
            ctx->pc = 0x20BC18u;
            goto label_20bc18;
        }
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0xc070080  jal         func_1C0200
label_20bc10:
    if (ctx->pc == 0x20BC10u) {
        ctx->pc = 0x20BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC0Cu;
        // 0x20bc10: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC14u;
        goto label_20bc14;
    }
    ctx->pc = 0x20BC0Cu;
    SET_GPR_U32(ctx, 31, 0x20BC14u);
    ctx->pc = 0x20BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC0Cu;
    // 0x20bc10: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bc18:
    // 0x20bc18: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20bc1c:
    // 0x20bc1c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc20:
    // 0x20bc20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bc24:
    // 0x20bc24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc28:
    if (ctx->pc == 0x20BC28u) {
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC2Cu;
        goto label_20bc2c;
    }
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20BC38u;
            goto label_20bc38;
        }
    }
    ctx->pc = 0x20BC2Cu;
label_20bc2c:
    // 0x20bc2c: 0xc070080  jal         func_1C0200
label_20bc30:
    if (ctx->pc == 0x20BC30u) {
        ctx->pc = 0x20BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC2Cu;
        // 0x20bc30: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC34u;
        goto label_20bc34;
    }
    ctx->pc = 0x20BC2Cu;
    SET_GPR_U32(ctx, 31, 0x20BC34u);
    ctx->pc = 0x20BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC2Cu;
    // 0x20bc30: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20BC34u;
label_20bc34:
    // 0x20bc34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20bc38:
    // 0x20bc38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc3c:
    // 0x20bc3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc40:
    // 0x20bc40: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20bc44:
    // 0x20bc44: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
label_20bc48:
    // 0x20bc48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bc4c:
    // 0x20bc4c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20bc50:
    // 0x20bc50: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20bc54:
    // 0x20bc54: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20bc58:
    // 0x20bc58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bc5c:
    if (ctx->pc == 0x20BC5Cu) {
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC60u;
        goto label_20bc60;
    }
    ctx->pc = 0x20BC58u;
    {
        const bool branch_taken_0x20bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc58) {
            ctx->pc = 0x20BC6Cu;
            goto label_20bc6c;
        }
    }
    ctx->pc = 0x20BC60u;
label_20bc60:
    // 0x20bc60: 0xc070080  jal         func_1C0200
label_20bc64:
    if (ctx->pc == 0x20BC64u) {
        ctx->pc = 0x20BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC60u;
        // 0x20bc64: 0x24051760  addiu       $a1, $zero, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC68u;
        goto label_20bc68;
    }
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x20BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC60u;
    // 0x20bc64: 0x24051760  addiu       $a1, $zero, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x20bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_20bc6c:
    // 0x20bc6c: 0x0  nop
    ctx->pc = 0x20bc6cu;
    // NOP
label_20bc70:
    // 0x20bc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20bc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20bc74:
    // 0x20bc74: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x20bc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_20bc78:
    // 0x20bc78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_20bc7c:
    if (ctx->pc == 0x20BC7Cu) {
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC80u;
        goto label_20bc80;
    }
    ctx->pc = 0x20BC78u;
    {
        const bool branch_taken_0x20bc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc78) {
            ctx->pc = 0x20BC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bc40;
        }
    }
    ctx->pc = 0x20BC80u;
label_20bc80:
    // 0x20bc80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bc84:
    // 0x20bc84: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bc88:
    // 0x20bc88: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_20bc8c:
    if (ctx->pc == 0x20BC8Cu) {
        ctx->pc = 0x20BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC88u;
        // 0x20bc8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC90u;
        goto label_20bc90;
    }
    ctx->pc = 0x20BC88u;
    {
        const bool branch_taken_0x20bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC88u;
        // 0x20bc8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc88) {
            ctx->pc = 0x20BBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bbd4;
        }
    }
    ctx->pc = 0x20BC90u;
label_20bc90:
    // 0x20bc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bc94:
    // 0x20bc94: 0xaf95916c  sw          $s5, -0x6E94($gp)
    ctx->pc = 0x20bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938988), GPR_U32(ctx, 21));
label_20bc98:
    // 0x20bc98: 0xaf829164  sw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 2));
label_20bc9c:
    // 0x20bc9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bca0:
    // 0x20bca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bca4:
    // 0x20bca4: 0xaf809168  sw          $zero, -0x6E98($gp)
    ctx->pc = 0x20bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 0));
label_20bca8:
    // 0x20bca8: 0xaf829160  sw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 2));
label_20bcac:
    // 0x20bcac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bcb0:
    // 0x20bcb0: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20bcb4:
    // 0x20bcb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bcb8:
    // 0x20bcb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bcbc:
    // 0x20bcbc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bcc0:
    // 0x20bcc0: 0xc05e234  jal         func_1788D0
label_20bcc4:
    if (ctx->pc == 0x20BCC4u) {
        ctx->pc = 0x20BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCC0u;
        // 0x20bcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BCC8u;
        goto label_20bcc8;
    }
    ctx->pc = 0x20BCC0u;
    SET_GPR_U32(ctx, 31, 0x20BCC8u);
    ctx->pc = 0x20BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCC0u;
    // 0x20bcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BCC0u, 0x20BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCC8u;
label_20bcc8:
    // 0x20bcc8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20bccc:
    // 0x20bccc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bcd0:
    // 0x20bcd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bcd4:
    // 0x20bcd4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bcd8:
    // 0x20bcd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bcdc:
    // 0x20bcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bce0:
    // 0x20bce0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bce4:
    // 0x20bce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20bce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bce8:
    // 0x20bce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bcec:
    // 0x20bcec: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bcf0:
    // 0x20bcf0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bcf4:
    // 0x20bcf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20bcf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bcf8:
    // 0x20bcf8: 0xdc257450  ld          $a1, 0x7450($at)
    ctx->pc = 0x20bcf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29776)));
label_20bcfc:
    // 0x20bcfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20bcfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd00:
    // 0x20bd00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20bd00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd04:
    // 0x20bd04: 0xc05de30  jal         func_1778C0
label_20bd08:
    if (ctx->pc == 0x20BD08u) {
        ctx->pc = 0x20BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD04u;
        // 0x20bd08: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD0Cu;
        goto label_20bd0c;
    }
    ctx->pc = 0x20BD04u;
    SET_GPR_U32(ctx, 31, 0x20BD0Cu);
    ctx->pc = 0x20BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD04u;
    // 0x20bd08: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20BD04u, 0x20BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD0Cu;
label_20bd0c:
    // 0x20bd0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bd10:
    // 0x20bd10: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bd14:
    // 0x20bd14: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_20bd18:
    if (ctx->pc == 0x20BD18u) {
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD1Cu;
        goto label_20bd1c;
    }
    ctx->pc = 0x20BD14u;
    {
        const bool branch_taken_0x20bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd14) {
            ctx->pc = 0x20BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bcb0;
        }
    }
    ctx->pc = 0x20BD1Cu;
label_20bd1c:
    // 0x20bd1c: 0xc083538  jal         func_20D4E0
label_20bd20:
    if (ctx->pc == 0x20BD20u) {
        ctx->pc = 0x20BD24u;
        goto label_20bd24;
    }
    ctx->pc = 0x20BD1Cu;
    SET_GPR_U32(ctx, 31, 0x20BD24u);
    ctx->pc = 0x20D4E0u;
    { ctx->pc = 0x20d4e0; return; }
    ctx->pc = 0x20BD24u;
label_20bd24:
    // 0x20bd24: 0xaf809138  sw          $zero, -0x6EC8($gp)
    ctx->pc = 0x20bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 0));
label_20bd28:
    // 0x20bd28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd2c:
    // 0x20bd2c: 0xaf809134  sw          $zero, -0x6ECC($gp)
    ctx->pc = 0x20bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
label_20bd30:
    // 0x20bd30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd34:
    // 0x20bd34: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20bd38:
    // 0x20bd38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bd3c:
    // 0x20bd3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bd40:
    // 0x20bd40: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bd44:
    // 0x20bd44: 0xc05e234  jal         func_1788D0
label_20bd48:
    if (ctx->pc == 0x20BD48u) {
        ctx->pc = 0x20BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD44u;
        // 0x20bd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD4Cu;
        goto label_20bd4c;
    }
    ctx->pc = 0x20BD44u;
    SET_GPR_U32(ctx, 31, 0x20BD4Cu);
    ctx->pc = 0x20BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD44u;
    // 0x20bd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BD44u, 0x20BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD4Cu;
label_20bd4c:
    // 0x20bd4c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20bd50:
    // 0x20bd50: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bd54:
    // 0x20bd54: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bd58:
    // 0x20bd58: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bd5c:
    // 0x20bd5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bd60:
    // 0x20bd60: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20bd64:
    // 0x20bd64: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bd68:
    // 0x20bd68: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20bd6c:
    // 0x20bd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bd70:
    // 0x20bd70: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bd74:
    // 0x20bd74: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bd78:
    // 0x20bd78: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_20bd7c:
    // 0x20bd7c: 0xdc257460  ld          $a1, 0x7460($at)
    ctx->pc = 0x20bd7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29792)));
label_20bd80:
    // 0x20bd80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20bd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd84:
    // 0x20bd84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20bd84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd88:
    // 0x20bd88: 0xc05de30  jal         func_1778C0
label_20bd8c:
    if (ctx->pc == 0x20BD8Cu) {
        ctx->pc = 0x20BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD88u;
        // 0x20bd8c: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD90u;
        goto label_20bd90;
    }
    ctx->pc = 0x20BD88u;
    SET_GPR_U32(ctx, 31, 0x20BD90u);
    ctx->pc = 0x20BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD88u;
    // 0x20bd8c: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20BD88u, 0x20BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD90u;
label_20bd90:
    // 0x20bd90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bd94:
    // 0x20bd94: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20bd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20bd98:
    // 0x20bd98: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_20bd9c:
    if (ctx->pc == 0x20BD9Cu) {
        ctx->pc = 0x20BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD98u;
        // 0x20bd9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDA0u;
        goto label_20bda0;
    }
    ctx->pc = 0x20BD98u;
    {
        const bool branch_taken_0x20bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD98u;
        // 0x20bd9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd98) {
            ctx->pc = 0x20BD34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd34;
        }
    }
    ctx->pc = 0x20BDA0u;
label_20bda0:
    // 0x20bda0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bda4:
    // 0x20bda4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20bda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bda8:
    // 0x20bda8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20bdac:
    // 0x20bdac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bdb0:
    // 0x20bdb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20bdb4:
    // 0x20bdb4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20bdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bdb8:
    // 0x20bdb8: 0xc05e234  jal         func_1788D0
label_20bdbc:
    if (ctx->pc == 0x20BDBCu) {
        ctx->pc = 0x20BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDB8u;
        // 0x20bdbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDC0u;
        goto label_20bdc0;
    }
    ctx->pc = 0x20BDB8u;
    SET_GPR_U32(ctx, 31, 0x20BDC0u);
    ctx->pc = 0x20BDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDB8u;
    // 0x20bdbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20BDB8u, 0x20BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDC0u;
label_20bdc0:
    // 0x20bdc0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20bdc4:
    // 0x20bdc4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20bdc8:
    // 0x20bdc8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20bdcc:
    // 0x20bdcc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20bdd0:
    // 0x20bdd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bdd4:
    // 0x20bdd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20bdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bdd8:
    // 0x20bdd8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20bddc:
    // 0x20bddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20bddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bde0:
    // 0x20bde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bde4:
    // 0x20bde4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20bde8:
    // 0x20bde8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20bdec:
    // 0x20bdec: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x20bdf0u;
    return;
}

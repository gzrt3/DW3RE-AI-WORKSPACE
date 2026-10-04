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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part263(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21b588u: goto label_21b588;
        case 0x21b58cu: goto label_21b58c;
        case 0x21b590u: goto label_21b590;
        case 0x21b594u: goto label_21b594;
        case 0x21b598u: goto label_21b598;
        case 0x21b59cu: goto label_21b59c;
        case 0x21b5a0u: goto label_21b5a0;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5a8u: goto label_21b5a8;
        case 0x21b5acu: goto label_21b5ac;
        case 0x21b5b0u: goto label_21b5b0;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5b8u: goto label_21b5b8;
        case 0x21b5bcu: goto label_21b5bc;
        case 0x21b5c0u: goto label_21b5c0;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5c8u: goto label_21b5c8;
        case 0x21b5ccu: goto label_21b5cc;
        case 0x21b5d0u: goto label_21b5d0;
        case 0x21b5d4u: goto label_21b5d4;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5dcu: goto label_21b5dc;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b5e4u: goto label_21b5e4;
        case 0x21b5e8u: goto label_21b5e8;
        case 0x21b5ecu: goto label_21b5ec;
        case 0x21b5f0u: goto label_21b5f0;
        case 0x21b5f4u: goto label_21b5f4;
        case 0x21b5f8u: goto label_21b5f8;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b600u: goto label_21b600;
        case 0x21b604u: goto label_21b604;
        case 0x21b608u: goto label_21b608;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b610u: goto label_21b610;
        case 0x21b614u: goto label_21b614;
        case 0x21b618u: goto label_21b618;
        case 0x21b61cu: goto label_21b61c;
        case 0x21b620u: goto label_21b620;
        case 0x21b624u: goto label_21b624;
        case 0x21b628u: goto label_21b628;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b630u: goto label_21b630;
        case 0x21b634u: goto label_21b634;
        case 0x21b638u: goto label_21b638;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b640u: goto label_21b640;
        case 0x21b644u: goto label_21b644;
        case 0x21b648u: goto label_21b648;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b650u: goto label_21b650;
        case 0x21b654u: goto label_21b654;
        case 0x21b658u: goto label_21b658;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b660u: goto label_21b660;
        case 0x21b664u: goto label_21b664;
        case 0x21b668u: goto label_21b668;
        case 0x21b66cu: goto label_21b66c;
        case 0x21b670u: goto label_21b670;
        case 0x21b674u: goto label_21b674;
        case 0x21b678u: goto label_21b678;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b680u: goto label_21b680;
        case 0x21b684u: goto label_21b684;
        case 0x21b688u: goto label_21b688;
        case 0x21b68cu: goto label_21b68c;
        case 0x21b690u: goto label_21b690;
        case 0x21b694u: goto label_21b694;
        case 0x21b698u: goto label_21b698;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6b0u: goto label_21b6b0;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c0u: goto label_21b6c0;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6c8u: goto label_21b6c8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b6d4u: goto label_21b6d4;
        case 0x21b6d8u: goto label_21b6d8;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6e0u: goto label_21b6e0;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b6f0u: goto label_21b6f0;
        case 0x21b6f4u: goto label_21b6f4;
        case 0x21b6f8u: goto label_21b6f8;
        case 0x21b6fcu: goto label_21b6fc;
        case 0x21b700u: goto label_21b700;
        case 0x21b704u: goto label_21b704;
        case 0x21b708u: goto label_21b708;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b710u: goto label_21b710;
        case 0x21b714u: goto label_21b714;
        case 0x21b718u: goto label_21b718;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b720u: goto label_21b720;
        case 0x21b724u: goto label_21b724;
        case 0x21b728u: goto label_21b728;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b730u: goto label_21b730;
        case 0x21b734u: goto label_21b734;
        case 0x21b738u: goto label_21b738;
        case 0x21b73cu: goto label_21b73c;
        case 0x21b740u: goto label_21b740;
        case 0x21b744u: goto label_21b744;
        case 0x21b748u: goto label_21b748;
        case 0x21b74cu: goto label_21b74c;
        case 0x21b750u: goto label_21b750;
        case 0x21b754u: goto label_21b754;
        case 0x21b758u: goto label_21b758;
        case 0x21b75cu: goto label_21b75c;
        case 0x21b760u: goto label_21b760;
        case 0x21b764u: goto label_21b764;
        case 0x21b768u: goto label_21b768;
        case 0x21b76cu: goto label_21b76c;
        case 0x21b770u: goto label_21b770;
        case 0x21b774u: goto label_21b774;
        case 0x21b778u: goto label_21b778;
        case 0x21b77cu: goto label_21b77c;
        case 0x21b780u: goto label_21b780;
        case 0x21b784u: goto label_21b784;
        case 0x21b788u: goto label_21b788;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b790u: goto label_21b790;
        case 0x21b794u: goto label_21b794;
        case 0x21b798u: goto label_21b798;
        case 0x21b79cu: goto label_21b79c;
        case 0x21b7a0u: goto label_21b7a0;
        case 0x21b7a4u: goto label_21b7a4;
        case 0x21b7a8u: goto label_21b7a8;
        case 0x21b7acu: goto label_21b7ac;
        case 0x21b7b0u: goto label_21b7b0;
        case 0x21b7b4u: goto label_21b7b4;
        case 0x21b7b8u: goto label_21b7b8;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b7c0u: goto label_21b7c0;
        case 0x21b7c4u: goto label_21b7c4;
        case 0x21b7c8u: goto label_21b7c8;
        case 0x21b7ccu: goto label_21b7cc;
        case 0x21b7d0u: goto label_21b7d0;
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b7d8u: goto label_21b7d8;
        case 0x21b7dcu: goto label_21b7dc;
        case 0x21b7e0u: goto label_21b7e0;
        case 0x21b7e4u: goto label_21b7e4;
        case 0x21b7e8u: goto label_21b7e8;
        case 0x21b7ecu: goto label_21b7ec;
        case 0x21b7f0u: goto label_21b7f0;
        case 0x21b7f4u: goto label_21b7f4;
        case 0x21b7f8u: goto label_21b7f8;
        case 0x21b7fcu: goto label_21b7fc;
        case 0x21b800u: goto label_21b800;
        case 0x21b804u: goto label_21b804;
        case 0x21b808u: goto label_21b808;
        case 0x21b80cu: goto label_21b80c;
        case 0x21b810u: goto label_21b810;
        case 0x21b814u: goto label_21b814;
        case 0x21b818u: goto label_21b818;
        case 0x21b81cu: goto label_21b81c;
        case 0x21b820u: goto label_21b820;
        case 0x21b824u: goto label_21b824;
        case 0x21b828u: goto label_21b828;
        case 0x21b82cu: goto label_21b82c;
        case 0x21b830u: goto label_21b830;
        case 0x21b834u: goto label_21b834;
        case 0x21b838u: goto label_21b838;
        case 0x21b83cu: goto label_21b83c;
        case 0x21b840u: goto label_21b840;
        case 0x21b844u: goto label_21b844;
        case 0x21b848u: goto label_21b848;
        case 0x21b84cu: goto label_21b84c;
        case 0x21b850u: goto label_21b850;
        case 0x21b854u: goto label_21b854;
        case 0x21b858u: goto label_21b858;
        case 0x21b85cu: goto label_21b85c;
        case 0x21b860u: goto label_21b860;
        case 0x21b864u: goto label_21b864;
        case 0x21b868u: goto label_21b868;
        case 0x21b86cu: goto label_21b86c;
        case 0x21b870u: goto label_21b870;
        case 0x21b874u: goto label_21b874;
        case 0x21b878u: goto label_21b878;
        case 0x21b87cu: goto label_21b87c;
        case 0x21b880u: goto label_21b880;
        case 0x21b884u: goto label_21b884;
        case 0x21b888u: goto label_21b888;
        case 0x21b88cu: goto label_21b88c;
        case 0x21b890u: goto label_21b890;
        case 0x21b894u: goto label_21b894;
        case 0x21b898u: goto label_21b898;
        case 0x21b89cu: goto label_21b89c;
        case 0x21b8a0u: goto label_21b8a0;
        case 0x21b8a4u: goto label_21b8a4;
        case 0x21b8a8u: goto label_21b8a8;
        case 0x21b8acu: goto label_21b8ac;
        case 0x21b8b0u: goto label_21b8b0;
        case 0x21b8b4u: goto label_21b8b4;
        case 0x21b8b8u: goto label_21b8b8;
        case 0x21b8bcu: goto label_21b8bc;
        case 0x21b8c0u: goto label_21b8c0;
        case 0x21b8c4u: goto label_21b8c4;
        case 0x21b8c8u: goto label_21b8c8;
        case 0x21b8ccu: goto label_21b8cc;
        case 0x21b8d0u: goto label_21b8d0;
        case 0x21b8d4u: goto label_21b8d4;
        case 0x21b8d8u: goto label_21b8d8;
        case 0x21b8dcu: goto label_21b8dc;
        case 0x21b8e0u: goto label_21b8e0;
        case 0x21b8e4u: goto label_21b8e4;
        case 0x21b8e8u: goto label_21b8e8;
        case 0x21b8ecu: goto label_21b8ec;
        case 0x21b8f0u: goto label_21b8f0;
        case 0x21b8f4u: goto label_21b8f4;
        case 0x21b8f8u: goto label_21b8f8;
        case 0x21b8fcu: goto label_21b8fc;
        case 0x21b900u: goto label_21b900;
        case 0x21b904u: goto label_21b904;
        case 0x21b908u: goto label_21b908;
        case 0x21b90cu: goto label_21b90c;
        case 0x21b910u: goto label_21b910;
        case 0x21b914u: goto label_21b914;
        case 0x21b918u: goto label_21b918;
        case 0x21b91cu: goto label_21b91c;
        case 0x21b920u: goto label_21b920;
        case 0x21b924u: goto label_21b924;
        case 0x21b928u: goto label_21b928;
        case 0x21b92cu: goto label_21b92c;
        case 0x21b930u: goto label_21b930;
        case 0x21b934u: goto label_21b934;
        case 0x21b938u: goto label_21b938;
        case 0x21b93cu: goto label_21b93c;
        case 0x21b940u: goto label_21b940;
        case 0x21b944u: goto label_21b944;
        case 0x21b948u: goto label_21b948;
        case 0x21b94cu: goto label_21b94c;
        case 0x21b950u: goto label_21b950;
        case 0x21b954u: goto label_21b954;
        case 0x21b958u: goto label_21b958;
        case 0x21b95cu: goto label_21b95c;
        case 0x21b960u: goto label_21b960;
        case 0x21b964u: goto label_21b964;
        case 0x21b968u: goto label_21b968;
        case 0x21b96cu: goto label_21b96c;
        case 0x21b970u: goto label_21b970;
        case 0x21b974u: goto label_21b974;
        case 0x21b978u: goto label_21b978;
        case 0x21b97cu: goto label_21b97c;
        case 0x21b980u: goto label_21b980;
        case 0x21b984u: goto label_21b984;
        case 0x21b988u: goto label_21b988;
        case 0x21b98cu: goto label_21b98c;
        case 0x21b990u: goto label_21b990;
        case 0x21b994u: goto label_21b994;
        case 0x21b998u: goto label_21b998;
        case 0x21b99cu: goto label_21b99c;
        case 0x21b9a0u: goto label_21b9a0;
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9a8u: goto label_21b9a8;
        case 0x21b9acu: goto label_21b9ac;
        case 0x21b9b0u: goto label_21b9b0;
        case 0x21b9b4u: goto label_21b9b4;
        case 0x21b9b8u: goto label_21b9b8;
        case 0x21b9bcu: goto label_21b9bc;
        case 0x21b9c0u: goto label_21b9c0;
        case 0x21b9c4u: goto label_21b9c4;
        case 0x21b9c8u: goto label_21b9c8;
        case 0x21b9ccu: goto label_21b9cc;
        case 0x21b9d0u: goto label_21b9d0;
        case 0x21b9d4u: goto label_21b9d4;
        case 0x21b9d8u: goto label_21b9d8;
        case 0x21b9dcu: goto label_21b9dc;
        case 0x21b9e0u: goto label_21b9e0;
        case 0x21b9e4u: goto label_21b9e4;
        case 0x21b9e8u: goto label_21b9e8;
        case 0x21b9ecu: goto label_21b9ec;
        case 0x21b9f0u: goto label_21b9f0;
        case 0x21b9f4u: goto label_21b9f4;
        case 0x21b9f8u: goto label_21b9f8;
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba00u: goto label_21ba00;
        case 0x21ba04u: goto label_21ba04;
        case 0x21ba08u: goto label_21ba08;
        case 0x21ba0cu: goto label_21ba0c;
        case 0x21ba10u: goto label_21ba10;
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba18u: goto label_21ba18;
        case 0x21ba1cu: goto label_21ba1c;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba24u: goto label_21ba24;
        case 0x21ba28u: goto label_21ba28;
        case 0x21ba2cu: goto label_21ba2c;
        case 0x21ba30u: goto label_21ba30;
        case 0x21ba34u: goto label_21ba34;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba3cu: goto label_21ba3c;
        case 0x21ba40u: goto label_21ba40;
        case 0x21ba44u: goto label_21ba44;
        case 0x21ba48u: goto label_21ba48;
        case 0x21ba4cu: goto label_21ba4c;
        case 0x21ba50u: goto label_21ba50;
        case 0x21ba54u: goto label_21ba54;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba60u: goto label_21ba60;
        case 0x21ba64u: goto label_21ba64;
        case 0x21ba68u: goto label_21ba68;
        case 0x21ba6cu: goto label_21ba6c;
        case 0x21ba70u: goto label_21ba70;
        case 0x21ba74u: goto label_21ba74;
        case 0x21ba78u: goto label_21ba78;
        case 0x21ba7cu: goto label_21ba7c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21ba84u: goto label_21ba84;
        case 0x21ba88u: goto label_21ba88;
        case 0x21ba8cu: goto label_21ba8c;
        case 0x21ba90u: goto label_21ba90;
        case 0x21ba94u: goto label_21ba94;
        case 0x21ba98u: goto label_21ba98;
        case 0x21ba9cu: goto label_21ba9c;
        case 0x21baa0u: goto label_21baa0;
        case 0x21baa4u: goto label_21baa4;
        case 0x21baa8u: goto label_21baa8;
        case 0x21baacu: goto label_21baac;
        case 0x21bab0u: goto label_21bab0;
        case 0x21bab4u: goto label_21bab4;
        case 0x21bab8u: goto label_21bab8;
        case 0x21babcu: goto label_21babc;
        case 0x21bac0u: goto label_21bac0;
        case 0x21bac4u: goto label_21bac4;
        case 0x21bac8u: goto label_21bac8;
        case 0x21baccu: goto label_21bacc;
        case 0x21bad0u: goto label_21bad0;
        case 0x21bad4u: goto label_21bad4;
        case 0x21bad8u: goto label_21bad8;
        case 0x21badcu: goto label_21badc;
        case 0x21bae0u: goto label_21bae0;
        case 0x21bae4u: goto label_21bae4;
        case 0x21bae8u: goto label_21bae8;
        case 0x21baecu: goto label_21baec;
        case 0x21baf0u: goto label_21baf0;
        case 0x21baf4u: goto label_21baf4;
        case 0x21baf8u: goto label_21baf8;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb00u: goto label_21bb00;
        case 0x21bb04u: goto label_21bb04;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb0cu: goto label_21bb0c;
        case 0x21bb10u: goto label_21bb10;
        case 0x21bb14u: goto label_21bb14;
        case 0x21bb18u: goto label_21bb18;
        case 0x21bb1cu: goto label_21bb1c;
        case 0x21bb20u: goto label_21bb20;
        case 0x21bb24u: goto label_21bb24;
        case 0x21bb28u: goto label_21bb28;
        case 0x21bb2cu: goto label_21bb2c;
        case 0x21bb30u: goto label_21bb30;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bb38u: goto label_21bb38;
        case 0x21bb3cu: goto label_21bb3c;
        case 0x21bb40u: goto label_21bb40;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bb4cu: goto label_21bb4c;
        case 0x21bb50u: goto label_21bb50;
        case 0x21bb54u: goto label_21bb54;
        case 0x21bb58u: goto label_21bb58;
        case 0x21bb5cu: goto label_21bb5c;
        case 0x21bb60u: goto label_21bb60;
        case 0x21bb64u: goto label_21bb64;
        case 0x21bb68u: goto label_21bb68;
        case 0x21bb6cu: goto label_21bb6c;
        case 0x21bb70u: goto label_21bb70;
        case 0x21bb74u: goto label_21bb74;
        case 0x21bb78u: goto label_21bb78;
        case 0x21bb7cu: goto label_21bb7c;
        case 0x21bb80u: goto label_21bb80;
        case 0x21bb84u: goto label_21bb84;
        case 0x21bb88u: goto label_21bb88;
        case 0x21bb8cu: goto label_21bb8c;
        case 0x21bb90u: goto label_21bb90;
        case 0x21bb94u: goto label_21bb94;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bb9cu: goto label_21bb9c;
        case 0x21bba0u: goto label_21bba0;
        case 0x21bba4u: goto label_21bba4;
        case 0x21bba8u: goto label_21bba8;
        case 0x21bbacu: goto label_21bbac;
        case 0x21bbb0u: goto label_21bbb0;
        case 0x21bbb4u: goto label_21bbb4;
        case 0x21bbb8u: goto label_21bbb8;
        case 0x21bbbcu: goto label_21bbbc;
        case 0x21bbc0u: goto label_21bbc0;
        case 0x21bbc4u: goto label_21bbc4;
        case 0x21bbc8u: goto label_21bbc8;
        case 0x21bbccu: goto label_21bbcc;
        case 0x21bbd0u: goto label_21bbd0;
        case 0x21bbd4u: goto label_21bbd4;
        case 0x21bbd8u: goto label_21bbd8;
        case 0x21bbdcu: goto label_21bbdc;
        case 0x21bbe0u: goto label_21bbe0;
        case 0x21bbe4u: goto label_21bbe4;
        case 0x21bbe8u: goto label_21bbe8;
        case 0x21bbecu: goto label_21bbec;
        case 0x21bbf0u: goto label_21bbf0;
        case 0x21bbf4u: goto label_21bbf4;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bbfcu: goto label_21bbfc;
        case 0x21bc00u: goto label_21bc00;
        case 0x21bc04u: goto label_21bc04;
        case 0x21bc08u: goto label_21bc08;
        case 0x21bc0cu: goto label_21bc0c;
        case 0x21bc10u: goto label_21bc10;
        case 0x21bc14u: goto label_21bc14;
        case 0x21bc18u: goto label_21bc18;
        case 0x21bc1cu: goto label_21bc1c;
        case 0x21bc20u: goto label_21bc20;
        case 0x21bc24u: goto label_21bc24;
        case 0x21bc28u: goto label_21bc28;
        case 0x21bc2cu: goto label_21bc2c;
        case 0x21bc30u: goto label_21bc30;
        case 0x21bc34u: goto label_21bc34;
        case 0x21bc38u: goto label_21bc38;
        case 0x21bc3cu: goto label_21bc3c;
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc44u: goto label_21bc44;
        case 0x21bc48u: goto label_21bc48;
        case 0x21bc4cu: goto label_21bc4c;
        case 0x21bc50u: goto label_21bc50;
        case 0x21bc54u: goto label_21bc54;
        case 0x21bc58u: goto label_21bc58;
        case 0x21bc5cu: goto label_21bc5c;
        case 0x21bc60u: goto label_21bc60;
        case 0x21bc64u: goto label_21bc64;
        case 0x21bc68u: goto label_21bc68;
        case 0x21bc6cu: goto label_21bc6c;
        case 0x21bc70u: goto label_21bc70;
        case 0x21bc74u: goto label_21bc74;
        case 0x21bc78u: goto label_21bc78;
        case 0x21bc7cu: goto label_21bc7c;
        case 0x21bc80u: goto label_21bc80;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bc88u: goto label_21bc88;
        case 0x21bc8cu: goto label_21bc8c;
        case 0x21bc90u: goto label_21bc90;
        case 0x21bc94u: goto label_21bc94;
        case 0x21bc98u: goto label_21bc98;
        case 0x21bc9cu: goto label_21bc9c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bca4u: goto label_21bca4;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcb8u: goto label_21bcb8;
        case 0x21bcbcu: goto label_21bcbc;
        case 0x21bcc0u: goto label_21bcc0;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bcc8u: goto label_21bcc8;
        case 0x21bcccu: goto label_21bccc;
        case 0x21bcd0u: goto label_21bcd0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcd8u: goto label_21bcd8;
        case 0x21bcdcu: goto label_21bcdc;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bce8u: goto label_21bce8;
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd00u: goto label_21bd00;
        case 0x21bd04u: goto label_21bd04;
        case 0x21bd08u: goto label_21bd08;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd10u: goto label_21bd10;
        case 0x21bd14u: goto label_21bd14;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd1cu: goto label_21bd1c;
        case 0x21bd20u: goto label_21bd20;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd28u: goto label_21bd28;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd38u: goto label_21bd38;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd40u: goto label_21bd40;
        case 0x21bd44u: goto label_21bd44;
        case 0x21bd48u: goto label_21bd48;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd50u: goto label_21bd50;
        case 0x21bd54u: goto label_21bd54;
        default: return;
    }

label_21b588:
    // 0x21b588: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21b58c:
    // 0x21b58c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21b58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_21b590:
    // 0x21b590: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b594:
    // 0x21b594: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x21b594u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21b598:
    // 0x21b598: 0x1480ffc9  bnez        $a0, . + 4 + (-0x37 << 2)
label_21b59c:
    if (ctx->pc == 0x21B59Cu) {
        ctx->pc = 0x21B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B598u;
        // 0x21b59c: 0xe34821  addu        $t1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5A0u;
        goto label_21b5a0;
    }
    ctx->pc = 0x21B598u;
    {
        const bool branch_taken_0x21b598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B598u;
        // 0x21b59c: 0xe34821  addu        $t1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b598) {
            ctx->pc = 0x21B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21b4c0; return; }
        }
    }
    ctx->pc = 0x21B5A0u;
label_21b5a0:
    // 0x21b5a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21b5a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5a4:
    // 0x21b5a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21b5a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5a8:
    // 0x21b5a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21b5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5ac:
    // 0x21b5ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21b5acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b0:
    // 0x21b5b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b4:
    // 0x21b5b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b8:
    // 0x21b5b8: 0x1000011d  b           . + 4 + (0x11D << 2)
label_21b5bc:
    if (ctx->pc == 0x21B5BCu) {
        ctx->pc = 0x21B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5B8u;
        // 0x21b5bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5C0u;
        goto label_21b5c0;
    }
    ctx->pc = 0x21B5B8u;
    {
        const bool branch_taken_0x21b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5B8u;
        // 0x21b5bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5b8) {
            ctx->pc = 0x21BA30u;
            goto label_21ba30;
        }
    }
    ctx->pc = 0x21B5C0u;
label_21b5c0:
    // 0x21b5c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21b5c4:
    // 0x21b5c4: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x21b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_21b5c8:
    // 0x21b5c8: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x21b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_21b5cc:
    // 0x21b5cc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_21b5d0:
    // 0x21b5d0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21b5d4:
    // 0x21b5d4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21b5d8:
    // 0x21b5d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b5dc:
    // 0x21b5dc: 0xc05e234  jal         func_1788D0
label_21b5e0:
    if (ctx->pc == 0x21B5E0u) {
        ctx->pc = 0x21B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5DCu;
        // 0x21b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5E4u;
        goto label_21b5e4;
    }
    ctx->pc = 0x21B5DCu;
    SET_GPR_U32(ctx, 31, 0x21B5E4u);
    ctx->pc = 0x21B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5DCu;
    // 0x21b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x21B5DCu, 0x21B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5E4u;
label_21b5e4:
    // 0x21b5e4: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b5e8:
    // 0x21b5e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b5ec:
    // 0x21b5ec: 0x14450067  bne         $v0, $a1, . + 4 + (0x67 << 2)
label_21b5f0:
    if (ctx->pc == 0x21B5F0u) {
        ctx->pc = 0x21B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5ECu;
        // 0x21b5f0: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5F4u;
        goto label_21b5f4;
    }
    ctx->pc = 0x21B5ECu;
    {
        const bool branch_taken_0x21b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5ECu;
        // 0x21b5f0: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5ec) {
            ctx->pc = 0x21B78Cu;
            goto label_21b78c;
        }
    }
    ctx->pc = 0x21B5F4u;
label_21b5f4:
    // 0x21b5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b5f8:
    // 0x21b5f8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21b5fc:
    // 0x21b5fc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b600:
    // 0x21b600: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x21b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_21b604:
    // 0x21b604: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_21b608:
    // 0x21b608: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b60c:
    // 0x21b60c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b610:
    // 0x21b610: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b614:
    // 0x21b614: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b618:
    // 0x21b618: 0xdc258ca8  ld          $a1, -0x7358($at)
    ctx->pc = 0x21b618u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937768)));
label_21b61c:
    // 0x21b61c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b620:
    // 0x21b620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b624:
    // 0x21b624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b628:
    // 0x21b628: 0xc05de30  jal         func_1778C0
label_21b62c:
    if (ctx->pc == 0x21B62Cu) {
        ctx->pc = 0x21B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B628u;
        // 0x21b62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B630u;
        goto label_21b630;
    }
    ctx->pc = 0x21B628u;
    SET_GPR_U32(ctx, 31, 0x21B630u);
    ctx->pc = 0x21B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B628u;
    // 0x21b62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B628u, 0x21B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B630u;
label_21b630:
    // 0x21b630: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b634:
    // 0x21b634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b638:
    // 0x21b638: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b63c:
    // 0x21b63c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b640:
    // 0x21b640: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b644:
    // 0x21b644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b648:
    // 0x21b648: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b64c:
    // 0x21b64c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x21b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_21b650:
    // 0x21b650: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b654:
    // 0x21b654: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b658:
    // 0x21b658: 0xdc258ca8  ld          $a1, -0x7358($at)
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937768)));
label_21b65c:
    // 0x21b65c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b660:
    // 0x21b660: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b664:
    // 0x21b664: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x21b664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b668:
    // 0x21b668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b66c:
    // 0x21b66c: 0xc05de30  jal         func_1778C0
label_21b670:
    if (ctx->pc == 0x21B670u) {
        ctx->pc = 0x21B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B66Cu;
        // 0x21b670: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B674u;
        goto label_21b674;
    }
    ctx->pc = 0x21B66Cu;
    SET_GPR_U32(ctx, 31, 0x21B674u);
    ctx->pc = 0x21B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B66Cu;
    // 0x21b670: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B66Cu, 0x21B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B674u;
label_21b674:
    // 0x21b674: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_21b678:
    // 0x21b678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b67c:
    // 0x21b67c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b680:
    // 0x21b680: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b684:
    // 0x21b684: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b688:
    // 0x21b688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b68c:
    // 0x21b68c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b690:
    // 0x21b690: 0x324affff  andi        $t2, $s2, 0xFFFF
    ctx->pc = 0x21b690u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_21b694:
    // 0x21b694: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b698:
    // 0x21b698: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_21b69c:
    // 0x21b69c: 0xdc258cc8  ld          $a1, -0x7338($at)
    ctx->pc = 0x21b69cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937800)));
label_21b6a0:
    // 0x21b6a0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b6a4:
    // 0x21b6a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b6a8:
    // 0x21b6a8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b6ac:
    // 0x21b6ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6b0:
    // 0x21b6b0: 0xc05de30  jal         func_1778C0
label_21b6b4:
    if (ctx->pc == 0x21B6B4u) {
        ctx->pc = 0x21B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6B0u;
        // 0x21b6b4: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6B8u;
        goto label_21b6b8;
    }
    ctx->pc = 0x21B6B0u;
    SET_GPR_U32(ctx, 31, 0x21B6B8u);
    ctx->pc = 0x21B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6B0u;
    // 0x21b6b4: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B6B0u, 0x21B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6B8u;
label_21b6b8:
    // 0x21b6b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21b6bc:
    // 0x21b6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b6c0:
    // 0x21b6c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b6c4:
    // 0x21b6c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b6c8:
    // 0x21b6c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b6cc:
    // 0x21b6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b6d0:
    // 0x21b6d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b6d4:
    // 0x21b6d4: 0x326affff  andi        $t2, $s3, 0xFFFF
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_21b6d8:
    // 0x21b6d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b6dc:
    // 0x21b6dc: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21b6e0:
    // 0x21b6e0: 0xdc258cd8  ld          $a1, -0x7328($at)
    ctx->pc = 0x21b6e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937816)));
label_21b6e4:
    // 0x21b6e4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b6e8:
    // 0x21b6e8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b6ec:
    // 0x21b6ec: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b6f0:
    // 0x21b6f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6f4:
    // 0x21b6f4: 0xc05de30  jal         func_1778C0
label_21b6f8:
    if (ctx->pc == 0x21B6F8u) {
        ctx->pc = 0x21B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F4u;
        // 0x21b6f8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6FCu;
        goto label_21b6fc;
    }
    ctx->pc = 0x21B6F4u;
    SET_GPR_U32(ctx, 31, 0x21B6FCu);
    ctx->pc = 0x21B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6F4u;
    // 0x21b6f8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B6F4u, 0x21B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6FCu;
label_21b6fc:
    // 0x21b6fc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b700:
    // 0x21b700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b704:
    // 0x21b704: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b708:
    // 0x21b708: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b70c:
    // 0x21b70c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b710:
    // 0x21b710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b714:
    // 0x21b714: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b718:
    // 0x21b718: 0x26240860  addiu       $a0, $s1, 0x860
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2144));
label_21b71c:
    // 0x21b71c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b720:
    // 0x21b720: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b724:
    // 0x21b724: 0xdc258cb0  ld          $a1, -0x7350($at)
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937776)));
label_21b728:
    // 0x21b728: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b72c:
    // 0x21b72c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b730:
    // 0x21b730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b734:
    // 0x21b734: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b738:
    // 0x21b738: 0xc05de30  jal         func_1778C0
label_21b73c:
    if (ctx->pc == 0x21B73Cu) {
        ctx->pc = 0x21B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B738u;
        // 0x21b73c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B740u;
        goto label_21b740;
    }
    ctx->pc = 0x21B738u;
    SET_GPR_U32(ctx, 31, 0x21B740u);
    ctx->pc = 0x21B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B738u;
    // 0x21b73c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B738u, 0x21B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B740u;
label_21b740:
    // 0x21b740: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b744:
    // 0x21b744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b748:
    // 0x21b748: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b74c:
    // 0x21b74c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b750:
    // 0x21b750: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b754:
    // 0x21b754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b758:
    // 0x21b758: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b75c:
    // 0x21b75c: 0x26240900  addiu       $a0, $s1, 0x900
    ctx->pc = 0x21b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2304));
label_21b760:
    // 0x21b760: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b764:
    // 0x21b764: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b768:
    // 0x21b768: 0xdc258cb0  ld          $a1, -0x7350($at)
    ctx->pc = 0x21b768u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937776)));
label_21b76c:
    // 0x21b76c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b770:
    // 0x21b770: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b774:
    // 0x21b774: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x21b774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b778:
    // 0x21b778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b77c:
    // 0x21b77c: 0xc05de30  jal         func_1778C0
label_21b780:
    if (ctx->pc == 0x21B780u) {
        ctx->pc = 0x21B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B77Cu;
        // 0x21b780: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B784u;
        goto label_21b784;
    }
    ctx->pc = 0x21B77Cu;
    SET_GPR_U32(ctx, 31, 0x21B784u);
    ctx->pc = 0x21B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B77Cu;
    // 0x21b780: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B77Cu, 0x21B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B784u;
label_21b784:
    // 0x21b784: 0x1000008e  b           . + 4 + (0x8E << 2)
label_21b788:
    if (ctx->pc == 0x21B788u) {
        ctx->pc = 0x21B78Cu;
        goto label_21b78c;
    }
    ctx->pc = 0x21B784u;
    {
        const bool branch_taken_0x21b784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b784) {
            ctx->pc = 0x21B9C0u;
            goto label_21b9c0;
        }
    }
    ctx->pc = 0x21B78Cu;
label_21b78c:
    // 0x21b78c: 0x0  nop
    ctx->pc = 0x21b78cu;
    // NOP
label_21b790:
    // 0x21b790: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_21b794:
    // 0x21b794: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b798:
    // 0x21b798: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b79c:
    // 0x21b79c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x21b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_21b7a0:
    // 0x21b7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b7a4:
    // 0x21b7a4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b7a8:
    // 0x21b7a8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_21b7ac:
    // 0x21b7ac: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b7b0:
    // 0x21b7b0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b7b4:
    // 0x21b7b4: 0xdc258cb8  ld          $a1, -0x7348($at)
    ctx->pc = 0x21b7b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937784)));
label_21b7b8:
    // 0x21b7b8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b7bc:
    // 0x21b7bc: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b7c0:
    // 0x21b7c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b7c4:
    // 0x21b7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b7c8:
    // 0x21b7c8: 0xc05de30  jal         func_1778C0
label_21b7cc:
    if (ctx->pc == 0x21B7CCu) {
        ctx->pc = 0x21B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C8u;
        // 0x21b7cc: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7D0u;
        goto label_21b7d0;
    }
    ctx->pc = 0x21B7C8u;
    SET_GPR_U32(ctx, 31, 0x21B7D0u);
    ctx->pc = 0x21B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7C8u;
    // 0x21b7cc: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B7C8u, 0x21B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7D0u;
label_21b7d0:
    // 0x21b7d0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_21b7d4:
    // 0x21b7d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b7d8:
    // 0x21b7d8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b7dc:
    // 0x21b7dc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b7e0:
    // 0x21b7e0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b7e4:
    // 0x21b7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b7e8:
    // 0x21b7e8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b7ec:
    // 0x21b7ec: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x21b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_21b7f0:
    // 0x21b7f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b7f4:
    // 0x21b7f4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b7f8:
    // 0x21b7f8: 0xdc258cb8  ld          $a1, -0x7348($at)
    ctx->pc = 0x21b7f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937784)));
label_21b7fc:
    // 0x21b7fc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b800:
    // 0x21b800: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b804:
    // 0x21b804: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x21b804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b808:
    // 0x21b808: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b80c:
    // 0x21b80c: 0xc05de30  jal         func_1778C0
label_21b810:
    if (ctx->pc == 0x21B810u) {
        ctx->pc = 0x21B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B80Cu;
        // 0x21b810: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B814u;
        goto label_21b814;
    }
    ctx->pc = 0x21B80Cu;
    SET_GPR_U32(ctx, 31, 0x21B814u);
    ctx->pc = 0x21B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B80Cu;
    // 0x21b810: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B80Cu, 0x21B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B814u;
label_21b814:
    // 0x21b814: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_21b818:
    // 0x21b818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b81c:
    // 0x21b81c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b820:
    // 0x21b820: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b824:
    // 0x21b824: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b828:
    // 0x21b828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b82c:
    // 0x21b82c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b830:
    // 0x21b830: 0x328affff  andi        $t2, $s4, 0xFFFF
    ctx->pc = 0x21b830u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_21b834:
    // 0x21b834: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b838:
    // 0x21b838: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_21b83c:
    // 0x21b83c: 0xdc258cd0  ld          $a1, -0x7330($at)
    ctx->pc = 0x21b83cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937808)));
label_21b840:
    // 0x21b840: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b844:
    // 0x21b844: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b848:
    // 0x21b848: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b84c:
    // 0x21b84c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b850:
    // 0x21b850: 0xc05de30  jal         func_1778C0
label_21b854:
    if (ctx->pc == 0x21B854u) {
        ctx->pc = 0x21B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B850u;
        // 0x21b854: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B858u;
        goto label_21b858;
    }
    ctx->pc = 0x21B850u;
    SET_GPR_U32(ctx, 31, 0x21B858u);
    ctx->pc = 0x21B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B850u;
    // 0x21b854: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B850u, 0x21B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B858u;
label_21b858:
    // 0x21b858: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
label_21b85c:
    if (ctx->pc == 0x21B85Cu) {
        ctx->pc = 0x21B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B858u;
        // 0x21b85c: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B860u;
        goto label_21b860;
    }
    ctx->pc = 0x21B858u;
    {
        const bool branch_taken_0x21b858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B858u;
        // 0x21b85c: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b858) {
            ctx->pc = 0x21B8A4u;
            goto label_21b8a4;
        }
    }
    ctx->pc = 0x21B860u;
label_21b860:
    // 0x21b860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b864:
    // 0x21b864: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x21b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_21b868:
    // 0x21b868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b86c:
    // 0x21b86c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b870:
    // 0x21b870: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b874:
    // 0x21b874: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b878:
    // 0x21b878: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x21b878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21b87c:
    // 0x21b87c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b880:
    // 0x21b880: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b884:
    // 0x21b884: 0xdc258cd8  ld          $a1, -0x7328($at)
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937816)));
label_21b888:
    // 0x21b888: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b88c:
    // 0x21b88c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b890:
    // 0x21b890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b894:
    // 0x21b894: 0xc05de30  jal         func_1778C0
label_21b898:
    if (ctx->pc == 0x21B898u) {
        ctx->pc = 0x21B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B894u;
        // 0x21b898: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B89Cu;
        goto label_21b89c;
    }
    ctx->pc = 0x21B894u;
    SET_GPR_U32(ctx, 31, 0x21B89Cu);
    ctx->pc = 0x21B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B894u;
    // 0x21b898: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B894u, 0x21B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B89Cu;
label_21b89c:
    // 0x21b89c: 0x10000026  b           . + 4 + (0x26 << 2)
label_21b8a0:
    if (ctx->pc == 0x21B8A0u) {
        ctx->pc = 0x21B8A4u;
        goto label_21b8a4;
    }
    ctx->pc = 0x21B89Cu;
    {
        const bool branch_taken_0x21b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b89c) {
            ctx->pc = 0x21B938u;
            goto label_21b938;
        }
    }
    ctx->pc = 0x21B8A4u;
label_21b8a4:
    // 0x21b8a4: 0x0  nop
    ctx->pc = 0x21b8a4u;
    // NOP
label_21b8a8:
    // 0x21b8a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b8ac:
    // 0x21b8ac: 0x16050012  bne         $s0, $a1, . + 4 + (0x12 << 2)
label_21b8b0:
    if (ctx->pc == 0x21B8B0u) {
        ctx->pc = 0x21B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8ACu;
        // 0x21b8b0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8B4u;
        goto label_21b8b4;
    }
    ctx->pc = 0x21B8ACu;
    {
        const bool branch_taken_0x21b8ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x21B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8ACu;
        // 0x21b8b0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8ac) {
            ctx->pc = 0x21B8F8u;
            goto label_21b8f8;
        }
    }
    ctx->pc = 0x21B8B4u;
label_21b8b4:
    // 0x21b8b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b8b8:
    // 0x21b8b8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21b8bc:
    // 0x21b8bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b8c0:
    // 0x21b8c0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21b8c4:
    // 0x21b8c4: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21b8c8:
    // 0x21b8c8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b8cc:
    // 0x21b8cc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b8d0:
    // 0x21b8d0: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x21b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
label_21b8d4:
    // 0x21b8d4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b8d8:
    // 0x21b8d8: 0xdc258cd8  ld          $a1, -0x7328($at)
    ctx->pc = 0x21b8d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937816)));
label_21b8dc:
    // 0x21b8dc: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b8e0:
    // 0x21b8e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b8e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b8e4:
    // 0x21b8e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b8e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b8e8:
    // 0x21b8e8: 0xc05de30  jal         func_1778C0
label_21b8ec:
    if (ctx->pc == 0x21B8ECu) {
        ctx->pc = 0x21B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E8u;
        // 0x21b8ec: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8F0u;
        goto label_21b8f0;
    }
    ctx->pc = 0x21B8E8u;
    SET_GPR_U32(ctx, 31, 0x21B8F0u);
    ctx->pc = 0x21B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8E8u;
    // 0x21b8ec: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B8E8u, 0x21B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8F0u;
label_21b8f0:
    // 0x21b8f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_21b8f4:
    if (ctx->pc == 0x21B8F4u) {
        ctx->pc = 0x21B8F8u;
        goto label_21b8f8;
    }
    ctx->pc = 0x21B8F0u;
    {
        const bool branch_taken_0x21b8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8f0) {
            ctx->pc = 0x21B938u;
            goto label_21b938;
        }
    }
    ctx->pc = 0x21B8F8u;
label_21b8f8:
    // 0x21b8f8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21b8fc:
    // 0x21b8fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b900:
    // 0x21b900: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b904:
    // 0x21b904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b908:
    // 0x21b908: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x21b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21b90c:
    // 0x21b90c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21b910:
    // 0x21b910: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b914:
    // 0x21b914: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b918:
    // 0x21b918: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b91c:
    // 0x21b91c: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x21b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
label_21b920:
    // 0x21b920: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b924:
    // 0x21b924: 0xdc258ce0  ld          $a1, -0x7320($at)
    ctx->pc = 0x21b924u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937824)));
label_21b928:
    // 0x21b928: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b92c:
    // 0x21b92c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b92cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b930:
    // 0x21b930: 0xc05de30  jal         func_1778C0
label_21b934:
    if (ctx->pc == 0x21B934u) {
        ctx->pc = 0x21B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B930u;
        // 0x21b934: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B938u;
        goto label_21b938;
    }
    ctx->pc = 0x21B930u;
    SET_GPR_U32(ctx, 31, 0x21B938u);
    ctx->pc = 0x21B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B930u;
    // 0x21b934: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B930u, 0x21B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B938u;
label_21b938:
    // 0x21b938: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x21b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_21b93c:
    // 0x21b93c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b940:
    // 0x21b940: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b944:
    // 0x21b944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b948:
    // 0x21b948: 0x26240860  addiu       $a0, $s1, 0x860
    ctx->pc = 0x21b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2144));
label_21b94c:
    // 0x21b94c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21b950:
    // 0x21b950: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b954:
    // 0x21b954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b958:
    // 0x21b958: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b95c:
    // 0x21b95c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b960:
    // 0x21b960: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b964:
    // 0x21b964: 0xdc258cc0  ld          $a1, -0x7340($at)
    ctx->pc = 0x21b964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937792)));
label_21b968:
    // 0x21b968: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b96c:
    // 0x21b96c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b96cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b970:
    // 0x21b970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b974:
    // 0x21b974: 0xc05de30  jal         func_1778C0
label_21b978:
    if (ctx->pc == 0x21B978u) {
        ctx->pc = 0x21B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B974u;
        // 0x21b978: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B97Cu;
        goto label_21b97c;
    }
    ctx->pc = 0x21B974u;
    SET_GPR_U32(ctx, 31, 0x21B97Cu);
    ctx->pc = 0x21B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B974u;
    // 0x21b978: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B974u, 0x21B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B97Cu;
label_21b97c:
    // 0x21b97c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x21b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_21b980:
    // 0x21b980: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b984:
    // 0x21b984: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b988:
    // 0x21b988: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b98c:
    // 0x21b98c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b990:
    // 0x21b990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b994:
    // 0x21b994: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b998:
    // 0x21b998: 0x26240900  addiu       $a0, $s1, 0x900
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2304));
label_21b99c:
    // 0x21b99c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b9a0:
    // 0x21b9a0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b9a4:
    // 0x21b9a4: 0xdc258cc0  ld          $a1, -0x7340($at)
    ctx->pc = 0x21b9a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937792)));
label_21b9a8:
    // 0x21b9a8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b9ac:
    // 0x21b9ac: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b9b0:
    // 0x21b9b0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x21b9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b9b4:
    // 0x21b9b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b9b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b9b8:
    // 0x21b9b8: 0xc05de30  jal         func_1778C0
label_21b9bc:
    if (ctx->pc == 0x21B9BCu) {
        ctx->pc = 0x21B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9B8u;
        // 0x21b9bc: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9C0u;
        goto label_21b9c0;
    }
    ctx->pc = 0x21B9B8u;
    SET_GPR_U32(ctx, 31, 0x21B9C0u);
    ctx->pc = 0x21B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9B8u;
    // 0x21b9bc: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B9B8u, 0x21B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9C0u;
label_21b9c0:
    // 0x21b9c0: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_21b9c4:
    // 0x21b9c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b9c8:
    // 0x21b9c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b9cc:
    // 0x21b9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b9d0:
    // 0x21b9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b9d4:
    // 0x21b9d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21b9d8:
    // 0x21b9d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21b9dc:
    // 0x21b9dc: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b9e0:
    // 0x21b9e0: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x21b9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b9e4:
    // 0x21b9e4: 0x24090384  addiu       $t1, $zero, 0x384
    ctx->pc = 0x21b9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b9e8:
    // 0x21b9e8: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x21b9e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b9ec:
    // 0x21b9ec: 0xc054c60  jal         func_153180
label_21b9f0:
    if (ctx->pc == 0x21B9F0u) {
        ctx->pc = 0x21B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9ECu;
        // 0x21b9f0: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9F4u;
        goto label_21b9f4;
    }
    ctx->pc = 0x21B9ECu;
    SET_GPR_U32(ctx, 31, 0x21B9F4u);
    ctx->pc = 0x21B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9ECu;
    // 0x21b9f0: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x21B9ECu, 0x21B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9F4u;
label_21b9f4:
    // 0x21b9f4: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x21b9f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_21b9f8:
    // 0x21b9f8: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x21b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_21b9fc:
    // 0x21b9fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21ba00:
    // 0x21ba00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21ba04:
    // 0x21ba04: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21ba04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21ba08:
    // 0x21ba08: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21ba08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21ba0c:
    // 0x21ba0c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x21ba0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ba10:
    // 0x21ba10: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x21ba10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21ba14:
    // 0x21ba14: 0xc0708ac  jal         func_1C22B0
label_21ba18:
    if (ctx->pc == 0x21BA18u) {
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0x256be108  addiu       $t3, $t3, -0x1EF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA1Cu;
        goto label_21ba1c;
    }
    ctx->pc = 0x21BA14u;
    SET_GPR_U32(ctx, 31, 0x21BA1Cu);
    ctx->pc = 0x21BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA14u;
    // 0x21ba18: 0x256be108  addiu       $t3, $t3, -0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x21BA1Cu;
label_21ba1c:
    // 0x21ba1c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x21ba1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_21ba20:
    // 0x21ba20: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x21ba20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_21ba24:
    // 0x21ba24: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x21ba24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_21ba28:
    // 0x21ba28: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x21ba28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_21ba2c:
    // 0x21ba2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ba2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ba30:
    // 0x21ba30: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21ba34:
    // 0x21ba34: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x21ba34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21ba38:
    // 0x21ba38: 0x1460fee1  bnez        $v1, . + 4 + (-0x11F << 2)
label_21ba3c:
    if (ctx->pc == 0x21BA3Cu) {
        ctx->pc = 0x21BA40u;
        goto label_21ba40;
    }
    ctx->pc = 0x21BA38u;
    {
        const bool branch_taken_0x21ba38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ba38) {
            ctx->pc = 0x21B5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b5c0;
        }
    }
    ctx->pc = 0x21BA40u;
label_21ba40:
    // 0x21ba40: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21ba40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_21ba44:
    // 0x21ba44: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x21ba44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_21ba48:
    // 0x21ba48: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
label_21ba4c:
    if (ctx->pc == 0x21BA4Cu) {
        ctx->pc = 0x21BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA48u;
        // 0x21ba4c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA50u;
        goto label_21ba50;
    }
    ctx->pc = 0x21BA48u;
    {
        const bool branch_taken_0x21ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA48u;
        // 0x21ba4c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba48) {
            ctx->pc = 0x21B5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b5a8;
        }
    }
    ctx->pc = 0x21BA50u;
label_21ba50:
    // 0x21ba50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21ba54:
    // 0x21ba54: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x21ba54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21ba58:
    // 0x21ba58: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21ba58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21ba5c:
    // 0x21ba5c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x21ba5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21ba60:
    // 0x21ba60: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x21ba60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21ba64:
    // 0x21ba64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x21ba64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21ba68:
    // 0x21ba68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21ba68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21ba6c:
    // 0x21ba6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21ba6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ba70:
    // 0x21ba70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21ba70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ba74:
    // 0x21ba74: 0x3e00008  jr          $ra
label_21ba78:
    if (ctx->pc == 0x21BA78u) {
        ctx->pc = 0x21BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA74u;
        // 0x21ba78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA7Cu;
        goto label_21ba7c;
    }
    ctx->pc = 0x21BA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA74u;
        // 0x21ba78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BA7Cu;
label_21ba7c:
    // 0x21ba7c: 0x0  nop
    ctx->pc = 0x21ba7cu;
    // NOP
label_21ba80:
    // 0x21ba80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x21ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_21ba84:
    // 0x21ba84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_21ba88:
    // 0x21ba88: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x21ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_21ba8c:
    // 0x21ba8c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x21ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_21ba90:
    // 0x21ba90: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x21ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21ba94:
    // 0x21ba94: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21ba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_21ba98:
    // 0x21ba98: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21ba9c:
    // 0x21ba9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21baa0:
    // 0x21baa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21baa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_21baa4:
    // 0x21baa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21baa8:
    // 0x21baa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21baac:
    // 0x21baac: 0x8f839288  lw          $v1, -0x6D78($gp)
    ctx->pc = 0x21baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21bab0:
    // 0x21bab0: 0x1060019d  beqz        $v1, . + 4 + (0x19D << 2)
label_21bab4:
    if (ctx->pc == 0x21BAB4u) {
        ctx->pc = 0x21BAB8u;
        goto label_21bab8;
    }
    ctx->pc = 0x21BAB0u;
    {
        const bool branch_taken_0x21bab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bab0) {
            ctx->pc = 0x21C128u;
            { ctx->pc = 0x21c128; return; }
        }
    }
    ctx->pc = 0x21BAB8u;
label_21bab8:
    // 0x21bab8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x21bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_21babc:
    // 0x21babc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21babcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_21bac0:
    // 0x21bac0: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x21bac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_21bac4:
    // 0x21bac4: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x21bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_21bac8:
    // 0x21bac8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21bacc:
    // 0x21bacc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21baccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bad0:
    // 0x21bad0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x21bad0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bad4:
    // 0x21bad4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21bad8:
    // 0x21bad8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x21bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_21badc:
    // 0x21badc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21bae0:
    // 0x21bae0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x21bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_21bae4:
    // 0x21bae4: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x21bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_21bae8:
    // 0x21bae8: 0x1000018b  b           . + 4 + (0x18B << 2)
label_21baec:
    if (ctx->pc == 0x21BAECu) {
        ctx->pc = 0x21BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAE8u;
        // 0x21baec: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAF0u;
        goto label_21baf0;
    }
    ctx->pc = 0x21BAE8u;
    {
        const bool branch_taken_0x21bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAE8u;
        // 0x21baec: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bae8) {
            ctx->pc = 0x21C118u;
            { ctx->pc = 0x21c118; return; }
        }
    }
    ctx->pc = 0x21BAF0u;
label_21baf0:
    // 0x21baf0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x21baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21baf4:
    // 0x21baf4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_21baf8:
    // 0x21baf8: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x21baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21bafc:
    // 0x21bafc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21bafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21bb00:
    // 0x21bb00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_21bb04:
    // 0x21bb04: 0x24848c70  addiu       $a0, $a0, -0x7390
    ctx->pc = 0x21bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937712));
label_21bb08:
    // 0x21bb08: 0x8f879284  lw          $a3, -0x6D7C($gp)
    ctx->pc = 0x21bb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21bb0c:
    // 0x21bb0c: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x21bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21bb10:
    // 0x21bb10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21bb14:
    // 0x21bb14: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x21bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_21bb18:
    // 0x21bb18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21bb1c:
    // 0x21bb1c: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x21bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21bb20:
    // 0x21bb20: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21bb24:
    // 0x21bb24: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x21bb24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_21bb28:
    // 0x21bb28: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_21bb2c:
    // 0x21bb2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_21bb30:
    // 0x21bb30: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x21bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
label_21bb34:
    // 0x21bb34: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x21bb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21bb38:
    // 0x21bb38: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x21bb38u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_21bb3c:
    // 0x21bb3c: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x21bb3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21bb40:
    // 0x21bb40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21bb44:
    // 0x21bb44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21bb48:
    // 0x21bb48: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x21bb48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bb4c:
    // 0x21bb4c: 0x0  nop
    ctx->pc = 0x21bb4cu;
    // NOP
label_21bb50:
    // 0x21bb50: 0x28e10014  slti        $at, $a3, 0x14
    ctx->pc = 0x21bb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
label_21bb54:
    // 0x21bb54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21bb58:
    if (ctx->pc == 0x21BB58u) {
        ctx->pc = 0x21BB5Cu;
        goto label_21bb5c;
    }
    ctx->pc = 0x21BB54u;
    {
        const bool branch_taken_0x21bb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb54) {
            ctx->pc = 0x21BB64u;
            goto label_21bb64;
        }
    }
    ctx->pc = 0x21BB5Cu;
label_21bb5c:
    // 0x21bb5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_21bb60:
    if (ctx->pc == 0x21BB60u) {
        ctx->pc = 0x21BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB5Cu;
        // 0x21bb60: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB64u;
        goto label_21bb64;
    }
    ctx->pc = 0x21BB5Cu;
    {
        const bool branch_taken_0x21bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB5Cu;
        // 0x21bb60: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb5c) {
            ctx->pc = 0x21BB6Cu;
            goto label_21bb6c;
        }
    }
    ctx->pc = 0x21BB64u;
label_21bb64:
    // 0x21bb64: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_21bb68:
    // 0x21bb68: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x21bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_21bb6c:
    // 0x21bb6c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_21bb70:
    // 0x21bb70: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x21bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_21bb74:
    // 0x21bb74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x21bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21bb78:
    // 0x21bb78: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x21bb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_21bb7c:
    // 0x21bb7c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x21bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_21bb80:
    // 0x21bb80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21bb84:
    // 0x21bb84: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21bb88:
    // 0x21bb88: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x21bb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bb8c:
    // 0x21bb8c: 0x0  nop
    ctx->pc = 0x21bb8cu;
    // NOP
label_21bb90:
    // 0x21bb90: 0x0  nop
    ctx->pc = 0x21bb90u;
    // NOP
label_21bb94:
    // 0x21bb94: 0x2010  mfhi        $a0
    ctx->pc = 0x21bb94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_21bb98:
    // 0x21bb98: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x21bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_21bb9c:
    // 0x21bb9c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x21bb9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_21bba0:
    // 0x21bba0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21bba4:
    // 0x21bba4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_21bba8:
    if (ctx->pc == 0x21BBA8u) {
        ctx->pc = 0x21BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBA4u;
        // 0x21bba8: 0x2491fd90  addiu       $s1, $a0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBACu;
        goto label_21bbac;
    }
    ctx->pc = 0x21BBA4u;
    {
        const bool branch_taken_0x21bba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBA4u;
        // 0x21bba8: 0x2491fd90  addiu       $s1, $a0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bba4) {
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BBACu;
label_21bbac:
    // 0x21bbac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x21bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_21bbb0:
    // 0x21bbb0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x21bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21bbb4:
    // 0x21bbb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_21bbb8:
    if (ctx->pc == 0x21BBB8u) {
        ctx->pc = 0x21BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB4u;
        // 0x21bbb8: 0x245200d0  addiu       $s2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBBCu;
        goto label_21bbbc;
    }
    ctx->pc = 0x21BBB4u;
    {
        const bool branch_taken_0x21bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB4u;
        // 0x21bbb8: 0x245200d0  addiu       $s2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb4) {
            ctx->pc = 0x21BBC8u;
            goto label_21bbc8;
        }
    }
    ctx->pc = 0x21BBBCu;
label_21bbbc:
    // 0x21bbbc: 0x0  nop
    ctx->pc = 0x21bbbcu;
    // NOP
label_21bbc0:
    // 0x21bbc0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x21bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_21bbc4:
    // 0x21bbc4: 0x27d20048  addiu       $s2, $fp, 0x48
    ctx->pc = 0x21bbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 72));
label_21bbc8:
    // 0x21bbc8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_21bbcc:
    // 0x21bbcc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x21bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21bbd0:
    // 0x21bbd0: 0x24090384  addiu       $t1, $zero, 0x384
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21bbd4:
    // 0x21bbd4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x21bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_21bbd8:
    // 0x21bbd8: 0x24767900  addiu       $s6, $v1, 0x7900
    ctx->pc = 0x21bbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_21bbdc:
    // 0x21bbdc: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bbe0:
    // 0x21bbe0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21bbe4:
    // 0x21bbe4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x21bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_21bbe8:
    // 0x21bbe8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_21bbec:
    // 0x21bbec: 0xa6620090  sh          $v0, 0x90($s3)
    ctx->pc = 0x21bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
label_21bbf0:
    // 0x21bbf0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x21bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_21bbf4:
    // 0x21bbf4: 0x24557900  addiu       $s5, $v0, 0x7900
    ctx->pc = 0x21bbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21bbf8:
    // 0x21bbf8: 0x26220240  addiu       $v0, $s1, 0x240
    ctx->pc = 0x21bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
label_21bbfc:
    // 0x21bbfc: 0xa6750092  sh          $s5, 0x92($s3)
    ctx->pc = 0x21bbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 21));
label_21bc00:
    // 0x21bc00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bc04:
    // 0x21bc04: 0xae690094  sw          $t1, 0x94($s3)
    ctx->pc = 0x21bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 9));
label_21bc08:
    // 0x21bc08: 0x24576c00  addiu       $s7, $v0, 0x6C00
    ctx->pc = 0x21bc08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bc0c:
    // 0x21bc0c: 0x26220270  addiu       $v0, $s1, 0x270
    ctx->pc = 0x21bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_21bc10:
    // 0x21bc10: 0xa67700a0  sh          $s7, 0xA0($s3)
    ctx->pc = 0x21bc10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 160), (uint16_t)GPR_U32(ctx, 23));
label_21bc14:
    // 0x21bc14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bc18:
    // 0x21bc18: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x21bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bc1c:
    // 0x21bc1c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x21bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_21bc20:
    // 0x21bc20: 0xa67600a2  sh          $s6, 0xA2($s3)
    ctx->pc = 0x21bc20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 162), (uint16_t)GPR_U32(ctx, 22));
label_21bc24:
    // 0x21bc24: 0xae6900a4  sw          $t1, 0xA4($s3)
    ctx->pc = 0x21bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 9));
label_21bc28:
    // 0x21bc28: 0xa6770130  sh          $s7, 0x130($s3)
    ctx->pc = 0x21bc28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 23));
label_21bc2c:
    // 0x21bc2c: 0xa6750132  sh          $s5, 0x132($s3)
    ctx->pc = 0x21bc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 21));
label_21bc30:
    // 0x21bc30: 0xae690134  sw          $t1, 0x134($s3)
    ctx->pc = 0x21bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 9));
label_21bc34:
    // 0x21bc34: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x21bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_21bc38:
    // 0x21bc38: 0xa6620140  sh          $v0, 0x140($s3)
    ctx->pc = 0x21bc38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 320), (uint16_t)GPR_U32(ctx, 2));
label_21bc3c:
    // 0x21bc3c: 0xa6760142  sh          $s6, 0x142($s3)
    ctx->pc = 0x21bc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 322), (uint16_t)GPR_U32(ctx, 22));
label_21bc40:
    // 0x21bc40: 0xae690144  sw          $t1, 0x144($s3)
    ctx->pc = 0x21bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 9));
label_21bc44:
    // 0x21bc44: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21bc48:
    // 0x21bc48: 0x14430070  bne         $v0, $v1, . + 4 + (0x70 << 2)
label_21bc4c:
    if (ctx->pc == 0x21BC4Cu) {
        ctx->pc = 0x21BC50u;
        goto label_21bc50;
    }
    ctx->pc = 0x21BC48u;
    {
        const bool branch_taken_0x21bc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21bc48) {
            ctx->pc = 0x21BE0Cu;
            { ctx->pc = 0x21be0c; return; }
        }
    }
    ctx->pc = 0x21BC50u;
label_21bc50:
    // 0x21bc50: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x21bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_21bc54:
    // 0x21bc54: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x21bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_21bc58:
    // 0x21bc58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bc5c:
    // 0x21bc5c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x21bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21bc60:
    // 0x21bc60: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_21bc64:
    // 0x21bc64: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21bc68:
    // 0x21bc68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bc6c:
    // 0x21bc6c: 0xa66301d0  sh          $v1, 0x1D0($s3)
    ctx->pc = 0x21bc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 464), (uint16_t)GPR_U32(ctx, 3));
label_21bc70:
    // 0x21bc70: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x21bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bc74:
    // 0x21bc74: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x21bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_21bc78:
    // 0x21bc78: 0xa66401d2  sh          $a0, 0x1D2($s3)
    ctx->pc = 0x21bc78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 466), (uint16_t)GPR_U32(ctx, 4));
label_21bc7c:
    // 0x21bc7c: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x21bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_21bc80:
    // 0x21bc80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21bc84:
    // 0x21bc84: 0xae6901d4  sw          $t1, 0x1D4($s3)
    ctx->pc = 0x21bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 9));
label_21bc88:
    // 0x21bc88: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x21bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21bc8c:
    // 0x21bc8c: 0xa66301e0  sh          $v1, 0x1E0($s3)
    ctx->pc = 0x21bc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 480), (uint16_t)GPR_U32(ctx, 3));
label_21bc90:
    // 0x21bc90: 0xa66201e2  sh          $v0, 0x1E2($s3)
    ctx->pc = 0x21bc90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 482), (uint16_t)GPR_U32(ctx, 2));
label_21bc94:
    // 0x21bc94: 0x262401c8  addiu       $a0, $s1, 0x1C8
    ctx->pc = 0x21bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
label_21bc98:
    // 0x21bc98: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x21bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21bc9c:
    // 0x21bc9c: 0xae6901e4  sw          $t1, 0x1E4($s3)
    ctx->pc = 0x21bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 9));
label_21bca0:
    // 0x21bca0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x21bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bca4:
    // 0x21bca4: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_21bca8:
    // 0x21bca8: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x21bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_21bcac:
    // 0x21bcac: 0xa6630270  sh          $v1, 0x270($s3)
    ctx->pc = 0x21bcacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 624), (uint16_t)GPR_U32(ctx, 3));
label_21bcb0:
    // 0x21bcb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21bcb4:
    // 0x21bcb4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x21bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_21bcb8:
    // 0x21bcb8: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x21bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_21bcbc:
    // 0x21bcbc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x21bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_21bcc0:
    // 0x21bcc0: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_21bcc4:
    // 0x21bcc4: 0xa6630272  sh          $v1, 0x272($s3)
    ctx->pc = 0x21bcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 626), (uint16_t)GPR_U32(ctx, 3));
label_21bcc8:
    // 0x21bcc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21bccc:
    // 0x21bccc: 0xae690274  sw          $t1, 0x274($s3)
    ctx->pc = 0x21bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 9));
label_21bcd0:
    // 0x21bcd0: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_21bcd4:
    // 0x21bcd4: 0xa6650280  sh          $a1, 0x280($s3)
    ctx->pc = 0x21bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 5));
label_21bcd8:
    // 0x21bcd8: 0xa6640282  sh          $a0, 0x282($s3)
    ctx->pc = 0x21bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 4));
label_21bcdc:
    // 0x21bcdc: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x21bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_21bce0:
    // 0x21bce0: 0xae690284  sw          $t1, 0x284($s3)
    ctx->pc = 0x21bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 9));
label_21bce4:
    // 0x21bce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bce8:
    // 0x21bce8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21bcec:
    // 0x21bcec: 0x262701f0  addiu       $a3, $s1, 0x1F0
    ctx->pc = 0x21bcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21bcf0:
    // 0x21bcf0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21bcf4:
    // 0x21bcf4: 0x26480024  addiu       $t0, $s2, 0x24
    ctx->pc = 0x21bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_21bcf8:
    // 0x21bcf8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x21bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21bcfc:
    // 0x21bcfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bd00:
    // 0x21bd00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21bd04:
    // 0x21bd04: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x21bd04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21bd08:
    // 0x21bd08: 0xc054c60  jal         func_153180
label_21bd0c:
    if (ctx->pc == 0x21BD0Cu) {
        ctx->pc = 0x21BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD08u;
        // 0x21bd0c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD10u;
        goto label_21bd10;
    }
    ctx->pc = 0x21BD08u;
    SET_GPR_U32(ctx, 31, 0x21BD10u);
    ctx->pc = 0x21BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD08u;
    // 0x21bd0c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x21BD08u, 0x21BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD10u;
label_21bd10:
    // 0x21bd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bd14:
    // 0x21bd14: 0x1602002b  bne         $s0, $v0, . + 4 + (0x2B << 2)
label_21bd18:
    if (ctx->pc == 0x21BD18u) {
        ctx->pc = 0x21BD1Cu;
        goto label_21bd1c;
    }
    ctx->pc = 0x21BD14u;
    {
        const bool branch_taken_0x21bd14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bd14) {
            ctx->pc = 0x21BDC4u;
            { ctx->pc = 0x21bdc4; return; }
        }
    }
    ctx->pc = 0x21BD1Cu;
label_21bd1c:
    // 0x21bd1c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x21bd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_21bd20:
    // 0x21bd20: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x21bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_21bd24:
    // 0x21bd24: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x21bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_21bd28:
    // 0x21bd28: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_21bd2c:
    // 0x21bd2c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21bd30:
    // 0x21bd30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21bd34:
    // 0x21bd34: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x21bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_21bd38:
    // 0x21bd38: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x21bd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21bd3c:
    // 0x21bd3c: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x21bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21bd40:
    // 0x21bd40: 0x0  nop
    ctx->pc = 0x21bd40u;
    // NOP
label_21bd44:
    // 0x21bd44: 0x3010  mfhi        $a2
    ctx->pc = 0x21bd44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21bd48:
    // 0x21bd48: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x21bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21bd4c:
    // 0x21bd4c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_21bd50:
    // 0x21bd50: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x21bd50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21bd54:
    // 0x21bd54: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x21bd54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    ctx->pc = 0x21bd58u;
    return;
}

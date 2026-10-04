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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part451(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        case 0x25b738u: goto label_25b738;
        case 0x25b73cu: goto label_25b73c;
        case 0x25b740u: goto label_25b740;
        case 0x25b744u: goto label_25b744;
        case 0x25b748u: goto label_25b748;
        case 0x25b74cu: goto label_25b74c;
        case 0x25b750u: goto label_25b750;
        case 0x25b754u: goto label_25b754;
        case 0x25b758u: goto label_25b758;
        case 0x25b75cu: goto label_25b75c;
        case 0x25b760u: goto label_25b760;
        case 0x25b764u: goto label_25b764;
        case 0x25b768u: goto label_25b768;
        case 0x25b76cu: goto label_25b76c;
        case 0x25b770u: goto label_25b770;
        case 0x25b774u: goto label_25b774;
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        case 0x25b7a8u: goto label_25b7a8;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7b0u: goto label_25b7b0;
        case 0x25b7b4u: goto label_25b7b4;
        case 0x25b7b8u: goto label_25b7b8;
        case 0x25b7bcu: goto label_25b7bc;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7c8u: goto label_25b7c8;
        case 0x25b7ccu: goto label_25b7cc;
        case 0x25b7d0u: goto label_25b7d0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7d8u: goto label_25b7d8;
        case 0x25b7dcu: goto label_25b7dc;
        case 0x25b7e0u: goto label_25b7e0;
        case 0x25b7e4u: goto label_25b7e4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        default: return;
    }

label_25b640:
    // 0x25b640: 0x4cc9  .word       0x00004CC9                   # jalr        $t1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_25b644:
    if (ctx->pc == 0x25B644u) {
        ctx->pc = 0x25B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B640u;
        // 0x25b644: 0xc6c0  sll         $t8, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B648u;
        goto label_25b648;
    }
    ctx->pc = 0x25B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x25B648u);
        ctx->pc = 0x25B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B640u;
        // 0x25b644: 0xc6c0  sll         $t8, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B640u, 0x25B648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B648u;
label_25b648:
    // 0x25b648: 0x0  nop
    ctx->pc = 0x25b648u;
    // NOP
label_25b64c:
    // 0x25b64c: 0x0  nop
    ctx->pc = 0x25b64cu;
    // NOP
label_25b650:
    // 0x25b650: 0x4ce2  .word       0x00004CE2                   # neg         $t1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b650u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b654:
    // 0x25b654: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x25b654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b658:
    // 0x25b658: 0x0  nop
    ctx->pc = 0x25b658u;
    // NOP
label_25b65c:
    // 0x25b65c: 0x0  nop
    ctx->pc = 0x25b65cu;
    // NOP
label_25b660:
    // 0x25b660: 0x4cec  .word       0x00004CEC                   # dadd        $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b660u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b664:
    // 0x25b664: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b664u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b668:
    // 0x25b668: 0x0  nop
    ctx->pc = 0x25b668u;
    // NOP
label_25b66c:
    // 0x25b66c: 0x0  nop
    ctx->pc = 0x25b66cu;
    // NOP
label_25b670:
    // 0x25b670: 0x4cf4  teq         $zero, $zero, 307
    ctx->pc = 0x25b670u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b674:
    // 0x25b674: 0x49f0  tge         $zero, $zero, 295
    ctx->pc = 0x25b674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b678:
    // 0x25b678: 0x0  nop
    ctx->pc = 0x25b678u;
    // NOP
label_25b67c:
    // 0x25b67c: 0x0  nop
    ctx->pc = 0x25b67cu;
    // NOP
label_25b680:
    // 0x25b680: 0x4cfe  dsrl32      $t1, $zero, 19
    ctx->pc = 0x25b680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 19));
label_25b684:
    // 0x25b684: 0x3ba0  .word       0x00003BA0                   # add         $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25b688:
    // 0x25b688: 0x0  nop
    ctx->pc = 0x25b688u;
    // NOP
label_25b68c:
    // 0x25b68c: 0x0  nop
    ctx->pc = 0x25b68cu;
    // NOP
label_25b690:
    // 0x25b690: 0x4d06  .word       0x00004D06                   # srlv        $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b694:
    // 0x25b694: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b694u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b698:
    // 0x25b698: 0x0  nop
    ctx->pc = 0x25b698u;
    // NOP
label_25b69c:
    // 0x25b69c: 0x0  nop
    ctx->pc = 0x25b69cu;
    // NOP
label_25b6a0:
    // 0x25b6a0: 0x4d0e  .word       0x00004D0E                   # INVALID     $zero, $zero, 0x4D0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25B6A0 raw=0x00004D0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b6a4:
    // 0x25b6a4: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b6a8:
    // 0x25b6a8: 0x0  nop
    ctx->pc = 0x25b6a8u;
    // NOP
label_25b6ac:
    // 0x25b6ac: 0x0  nop
    ctx->pc = 0x25b6acu;
    // NOP
label_25b6b0:
    // 0x25b6b0: 0x4d18  .word       0x00004D18                   # mult        $t1, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b6b4:
    // 0x25b6b4: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25b6b8:
    // 0x25b6b8: 0x0  nop
    ctx->pc = 0x25b6b8u;
    // NOP
label_25b6bc:
    // 0x25b6bc: 0x0  nop
    ctx->pc = 0x25b6bcu;
    // NOP
label_25b6c0:
    // 0x25b6c0: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b6c4:
    // 0x25b6c4: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x25b6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b6c8:
    // 0x25b6c8: 0x0  nop
    ctx->pc = 0x25b6c8u;
    // NOP
label_25b6cc:
    // 0x25b6cc: 0x0  nop
    ctx->pc = 0x25b6ccu;
    // NOP
label_25b6d0:
    // 0x25b6d0: 0x4d29  .word       0x00004D29                   # mtsa        $zero # 00004D00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b6d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25b6d4:
    // 0x25b6d4: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25b6d8:
    // 0x25b6d8: 0x0  nop
    ctx->pc = 0x25b6d8u;
    // NOP
label_25b6dc:
    // 0x25b6dc: 0x0  nop
    ctx->pc = 0x25b6dcu;
    // NOP
label_25b6e0:
    // 0x25b6e0: 0x4d33  tltu        $zero, $zero, 308
    ctx->pc = 0x25b6e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b6e4:
    // 0x25b6e4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b6e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b6e8:
    // 0x25b6e8: 0x0  nop
    ctx->pc = 0x25b6e8u;
    // NOP
label_25b6ec:
    // 0x25b6ec: 0x0  nop
    ctx->pc = 0x25b6ecu;
    // NOP
label_25b6f0:
    // 0x25b6f0: 0x4d44  .word       0x00004D44                   # sllv        $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b6f4:
    // 0x25b6f4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b6f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b6f8:
    // 0x25b6f8: 0x0  nop
    ctx->pc = 0x25b6f8u;
    // NOP
label_25b6fc:
    // 0x25b6fc: 0x0  nop
    ctx->pc = 0x25b6fcu;
    // NOP
label_25b700:
    // 0x25b700: 0x4d55  .word       0x00004D55                   # INVALID     $zero, $zero, 0x4D55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B700 raw=0x00004D55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b704:
    // 0x25b704: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x25b704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b708:
    // 0x25b708: 0x0  nop
    ctx->pc = 0x25b708u;
    // NOP
label_25b70c:
    // 0x25b70c: 0x0  nop
    ctx->pc = 0x25b70cu;
    // NOP
label_25b710:
    // 0x25b710: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b710u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b714:
    // 0x25b714: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b714u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25b718:
    // 0x25b718: 0x0  nop
    ctx->pc = 0x25b718u;
    // NOP
label_25b71c:
    // 0x25b71c: 0x0  nop
    ctx->pc = 0x25b71cu;
    // NOP
label_25b720:
    // 0x25b720: 0x4d6b  .word       0x00004D6B                   # sltu        $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b720u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25b724:
    // 0x25b724: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x25b724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25b728:
    // 0x25b728: 0x0  nop
    ctx->pc = 0x25b728u;
    // NOP
label_25b72c:
    // 0x25b72c: 0x0  nop
    ctx->pc = 0x25b72cu;
    // NOP
label_25b730:
    // 0x25b730: 0x4d73  tltu        $zero, $zero, 309
    ctx->pc = 0x25b730u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b734:
    // 0x25b734: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b734u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b738:
    // 0x25b738: 0x0  nop
    ctx->pc = 0x25b738u;
    // NOP
label_25b73c:
    // 0x25b73c: 0x0  nop
    ctx->pc = 0x25b73cu;
    // NOP
label_25b740:
    // 0x25b740: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x25b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25b744:
    // 0x25b744: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b744u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b748:
    // 0x25b748: 0x0  nop
    ctx->pc = 0x25b748u;
    // NOP
label_25b74c:
    // 0x25b74c: 0x0  nop
    ctx->pc = 0x25b74cu;
    // NOP
label_25b750:
    // 0x25b750: 0x4d8a  .word       0x00004D8A                   # movz        $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b750u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b754:
    // 0x25b754: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b754u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25b758:
    // 0x25b758: 0x0  nop
    ctx->pc = 0x25b758u;
    // NOP
label_25b75c:
    // 0x25b75c: 0x0  nop
    ctx->pc = 0x25b75cu;
    // NOP
label_25b760:
    // 0x25b760: 0x4d91  .word       0x00004D91                   # mthi        $zero # 00004D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b760u;
    ctx->hi = GPR_U64(ctx, 0);
label_25b764:
    // 0x25b764: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25b768:
    // 0x25b768: 0x0  nop
    ctx->pc = 0x25b768u;
    // NOP
label_25b76c:
    // 0x25b76c: 0x0  nop
    ctx->pc = 0x25b76cu;
    // NOP
label_25b770:
    // 0x25b770: 0x4d98  .word       0x00004D98                   # mult        $t1, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b774:
    // 0x25b774: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b778:
    // 0x25b778: 0x0  nop
    ctx->pc = 0x25b778u;
    // NOP
label_25b77c:
    // 0x25b77c: 0x0  nop
    ctx->pc = 0x25b77cu;
    // NOP
label_25b780:
    // 0x25b780: 0x4da1  .word       0x00004DA1                   # addu        $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25b784:
    // 0x25b784: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x25b784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b788:
    // 0x25b788: 0x0  nop
    ctx->pc = 0x25b788u;
    // NOP
label_25b78c:
    // 0x25b78c: 0x0  nop
    ctx->pc = 0x25b78cu;
    // NOP
label_25b790:
    // 0x25b790: 0x4daf  .word       0x00004DAF                   # dsubu       $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b790u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25b794:
    // 0x25b794: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x25b794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25b798:
    // 0x25b798: 0x0  nop
    ctx->pc = 0x25b798u;
    // NOP
label_25b79c:
    // 0x25b79c: 0x0  nop
    ctx->pc = 0x25b79cu;
    // NOP
label_25b7a0:
    // 0x25b7a0: 0x4db9  .word       0x00004DB9                   # INVALID     $zero, $zero, 0x4DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25B7A0 raw=0x00004DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b7a4:
    // 0x25b7a4: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25b7a8:
    // 0x25b7a8: 0x0  nop
    ctx->pc = 0x25b7a8u;
    // NOP
label_25b7ac:
    // 0x25b7ac: 0x0  nop
    ctx->pc = 0x25b7acu;
    // NOP
label_25b7b0:
    // 0x25b7b0: 0x4dc8  .word       0x00004DC8                   # jr          $zero # 00004DC0 <InstrIdType: CPU_SPECIAL>
label_25b7b4:
    if (ctx->pc == 0x25B7B4u) {
        ctx->pc = 0x25B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7B0u;
        // 0x25b7b4: 0x3a30  tge         $zero, $zero, 232 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7B8u;
        goto label_25b7b8;
    }
    ctx->pc = 0x25B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7B0u;
        // 0x25b7b4: 0x3a30  tge         $zero, $zero, 232 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B7B8u;
label_25b7b8:
    // 0x25b7b8: 0x0  nop
    ctx->pc = 0x25b7b8u;
    // NOP
label_25b7bc:
    // 0x25b7bc: 0x0  nop
    ctx->pc = 0x25b7bcu;
    // NOP
label_25b7c0:
    // 0x25b7c0: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7c0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b7c4:
    // 0x25b7c4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b7c8:
    // 0x25b7c8: 0x0  nop
    ctx->pc = 0x25b7c8u;
    // NOP
label_25b7cc:
    // 0x25b7cc: 0x0  nop
    ctx->pc = 0x25b7ccu;
    // NOP
label_25b7d0:
    // 0x25b7d0: 0x4dda  .word       0x00004DDA                   # div         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b7d4:
    // 0x25b7d4: 0x3db0  tge         $zero, $zero, 246
    ctx->pc = 0x25b7d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b7d8:
    // 0x25b7d8: 0x0  nop
    ctx->pc = 0x25b7d8u;
    // NOP
label_25b7dc:
    // 0x25b7dc: 0x0  nop
    ctx->pc = 0x25b7dcu;
    // NOP
label_25b7e0:
    // 0x25b7e0: 0x4de2  .word       0x00004DE2                   # neg         $t1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b7e4:
    // 0x25b7e4: 0x3ff0  tge         $zero, $zero, 255
    ctx->pc = 0x25b7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b7e8:
    // 0x25b7e8: 0x0  nop
    ctx->pc = 0x25b7e8u;
    // NOP
label_25b7ec:
    // 0x25b7ec: 0x0  nop
    ctx->pc = 0x25b7ecu;
    // NOP
label_25b7f0:
    // 0x25b7f0: 0x4dea  .word       0x00004DEA                   # slt         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b7f4:
    // 0x25b7f4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b7f8:
    // 0x25b7f8: 0x0  nop
    ctx->pc = 0x25b7f8u;
    // NOP
label_25b7fc:
    // 0x25b7fc: 0x0  nop
    ctx->pc = 0x25b7fcu;
    // NOP
label_25b800:
    // 0x25b800: 0x4dfb  dsra        $t1, $zero, 23
    ctx->pc = 0x25b800u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 23);
label_25b804:
    // 0x25b804: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b804u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25b808:
    // 0x25b808: 0x0  nop
    ctx->pc = 0x25b808u;
    // NOP
label_25b80c:
    // 0x25b80c: 0x0  nop
    ctx->pc = 0x25b80cu;
    // NOP
label_25b810:
    // 0x25b810: 0x4e04  .word       0x00004E04                   # sllv        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b814:
    // 0x25b814: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b818:
    // 0x25b818: 0x0  nop
    ctx->pc = 0x25b818u;
    // NOP
label_25b81c:
    // 0x25b81c: 0x0  nop
    ctx->pc = 0x25b81cu;
    // NOP
label_25b820:
    // 0x25b820: 0x4e15  .word       0x00004E15                   # INVALID     $zero, $zero, 0x4E15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B820 raw=0x00004E15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b824:
    // 0x25b824: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x25b824u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25b828:
    // 0x25b828: 0x0  nop
    ctx->pc = 0x25b828u;
    // NOP
label_25b82c:
    // 0x25b82c: 0x0  nop
    ctx->pc = 0x25b82cu;
    // NOP
label_25b830:
    // 0x25b830: 0x4e1f  .word       0x00004E1F                   # ddivu       $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B830 raw=0x00004E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b834:
    // 0x25b834: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b838:
    // 0x25b838: 0x0  nop
    ctx->pc = 0x25b838u;
    // NOP
label_25b83c:
    // 0x25b83c: 0x0  nop
    ctx->pc = 0x25b83cu;
    // NOP
label_25b840:
    // 0x25b840: 0x4e28  .word       0x00004E28                   # mfsa        $t1 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b840u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25b844:
    // 0x25b844: 0x2f60  .word       0x00002F60                   # add         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25b848:
    // 0x25b848: 0x0  nop
    ctx->pc = 0x25b848u;
    // NOP
label_25b84c:
    // 0x25b84c: 0x0  nop
    ctx->pc = 0x25b84cu;
    // NOP
label_25b850:
    // 0x25b850: 0x4e2e  .word       0x00004E2E                   # dsub        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b854:
    // 0x25b854: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x25b854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b858:
    // 0x25b858: 0x0  nop
    ctx->pc = 0x25b858u;
    // NOP
label_25b85c:
    // 0x25b85c: 0x0  nop
    ctx->pc = 0x25b85cu;
    // NOP
label_25b860:
    // 0x25b860: 0x4e35  .word       0x00004E35                   # INVALID     $zero, $zero, 0x4E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25B860 raw=0x00004E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b864:
    // 0x25b864: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25b868:
    // 0x25b868: 0x0  nop
    ctx->pc = 0x25b868u;
    // NOP
label_25b86c:
    // 0x25b86c: 0x0  nop
    ctx->pc = 0x25b86cu;
    // NOP
label_25b870:
    // 0x25b870: 0x4e3d  .word       0x00004E3D                   # INVALID     $zero, $zero, 0x4E3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25B870 raw=0x00004E3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b874:
    // 0x25b874: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b878:
    // 0x25b878: 0x0  nop
    ctx->pc = 0x25b878u;
    // NOP
label_25b87c:
    // 0x25b87c: 0x0  nop
    ctx->pc = 0x25b87cu;
    // NOP
label_25b880:
    // 0x25b880: 0x4e46  .word       0x00004E46                   # srlv        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b884:
    // 0x25b884: 0x2310  .word       0x00002310                   # mfhi        $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b884u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25b888:
    // 0x25b888: 0x0  nop
    ctx->pc = 0x25b888u;
    // NOP
label_25b88c:
    // 0x25b88c: 0x0  nop
    ctx->pc = 0x25b88cu;
    // NOP
label_25b890:
    // 0x25b890: 0x4e4b  .word       0x00004E4B                   # movn        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b890u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b894:
    // 0x25b894: 0x1cc0  sll         $v1, $zero, 19
    ctx->pc = 0x25b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b898:
    // 0x25b898: 0x0  nop
    ctx->pc = 0x25b898u;
    // NOP
label_25b89c:
    // 0x25b89c: 0x0  nop
    ctx->pc = 0x25b89cu;
    // NOP
label_25b8a0:
    // 0x25b8a0: 0x4e4f  .word       0x00004E4F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b8a4:
    // 0x25b8a4: 0x2a10  .word       0x00002A10                   # mfhi        $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b8a8:
    // 0x25b8a8: 0x0  nop
    ctx->pc = 0x25b8a8u;
    // NOP
label_25b8ac:
    // 0x25b8ac: 0x0  nop
    ctx->pc = 0x25b8acu;
    // NOP
label_25b8b0:
    // 0x25b8b0: 0x4e55  .word       0x00004E55                   # INVALID     $zero, $zero, 0x4E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B8B0 raw=0x00004E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b8b4:
    // 0x25b8b4: 0x1ca0  .word       0x00001CA0                   # add         $v1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b8b8:
    // 0x25b8b8: 0x0  nop
    ctx->pc = 0x25b8b8u;
    // NOP
label_25b8bc:
    // 0x25b8bc: 0x0  nop
    ctx->pc = 0x25b8bcu;
    // NOP
label_25b8c0:
    // 0x25b8c0: 0x4e59  .word       0x00004E59                   # multu       $zero, $zero # 00004E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b8c4:
    // 0x25b8c4: 0x2a10  .word       0x00002A10                   # mfhi        $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b8c8:
    // 0x25b8c8: 0x0  nop
    ctx->pc = 0x25b8c8u;
    // NOP
label_25b8cc:
    // 0x25b8cc: 0x0  nop
    ctx->pc = 0x25b8ccu;
    // NOP
label_25b8d0:
    // 0x25b8d0: 0x4e5f  .word       0x00004E5F                   # ddivu       $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B8D0 raw=0x00004E5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b8d4:
    // 0x25b8d4: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25b8d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b8d8:
    // 0x25b8d8: 0x0  nop
    ctx->pc = 0x25b8d8u;
    // NOP
label_25b8dc:
    // 0x25b8dc: 0x0  nop
    ctx->pc = 0x25b8dcu;
    // NOP
label_25b8e0:
    // 0x25b8e0: 0x4e66  .word       0x00004E66                   # xor         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25b8e4:
    // 0x25b8e4: 0x17c0  sll         $v0, $zero, 31
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25b8e8:
    // 0x25b8e8: 0x0  nop
    ctx->pc = 0x25b8e8u;
    // NOP
label_25b8ec:
    // 0x25b8ec: 0x0  nop
    ctx->pc = 0x25b8ecu;
    // NOP
label_25b8f0:
    // 0x25b8f0: 0x4e69  .word       0x00004E69                   # mtsa        $zero # 00004E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b8f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25b8f4:
    // 0x25b8f4: 0x1f10  .word       0x00001F10                   # mfhi        $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b8f8:
    // 0x25b8f8: 0x0  nop
    ctx->pc = 0x25b8f8u;
    // NOP
label_25b8fc:
    // 0x25b8fc: 0x0  nop
    ctx->pc = 0x25b8fcu;
    // NOP
label_25b900:
    // 0x25b900: 0x4e6d  .word       0x00004E6D                   # daddu       $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b904:
    // 0x25b904: 0x3330  tge         $zero, $zero, 204
    ctx->pc = 0x25b904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b908:
    // 0x25b908: 0x0  nop
    ctx->pc = 0x25b908u;
    // NOP
label_25b90c:
    // 0x25b90c: 0x0  nop
    ctx->pc = 0x25b90cu;
    // NOP
label_25b910:
    // 0x25b910: 0x4e74  teq         $zero, $zero, 313
    ctx->pc = 0x25b910u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b914:
    // 0x25b914: 0x17b0  tge         $zero, $zero, 94
    ctx->pc = 0x25b914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b918:
    // 0x25b918: 0x0  nop
    ctx->pc = 0x25b918u;
    // NOP
label_25b91c:
    // 0x25b91c: 0x0  nop
    ctx->pc = 0x25b91cu;
    // NOP
label_25b920:
    // 0x25b920: 0x4e77  .word       0x00004E77                   # INVALID     $zero, $zero, 0x4E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B920 raw=0x00004E77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b924:
    // 0x25b924: 0x2810  mfhi        $a1
    ctx->pc = 0x25b924u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b928:
    // 0x25b928: 0x0  nop
    ctx->pc = 0x25b928u;
    // NOP
label_25b92c:
    // 0x25b92c: 0x0  nop
    ctx->pc = 0x25b92cu;
    // NOP
label_25b930:
    // 0x25b930: 0x4e7d  .word       0x00004E7D                   # INVALID     $zero, $zero, 0x4E7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25B930 raw=0x00004E7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b934:
    // 0x25b934: 0x27e0  .word       0x000027E0                   # add         $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25b938:
    // 0x25b938: 0x0  nop
    ctx->pc = 0x25b938u;
    // NOP
label_25b93c:
    // 0x25b93c: 0x0  nop
    ctx->pc = 0x25b93cu;
    // NOP
label_25b940:
    // 0x25b940: 0x4e82  srl         $t1, $zero, 26
    ctx->pc = 0x25b940u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_25b944:
    // 0x25b944: 0x2200  sll         $a0, $zero, 8
    ctx->pc = 0x25b944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25b948:
    // 0x25b948: 0x0  nop
    ctx->pc = 0x25b948u;
    // NOP
label_25b94c:
    // 0x25b94c: 0x0  nop
    ctx->pc = 0x25b94cu;
    // NOP
label_25b950:
    // 0x25b950: 0x4e87  .word       0x00004E87                   # srav        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b954:
    // 0x25b954: 0x1ce0  .word       0x00001CE0                   # add         $v1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b958:
    // 0x25b958: 0x0  nop
    ctx->pc = 0x25b958u;
    // NOP
label_25b95c:
    // 0x25b95c: 0x0  nop
    ctx->pc = 0x25b95cu;
    // NOP
label_25b960:
    // 0x25b960: 0x4e8b  .word       0x00004E8B                   # movn        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b960u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b964:
    // 0x25b964: 0x1cc0  sll         $v1, $zero, 19
    ctx->pc = 0x25b964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b968:
    // 0x25b968: 0x0  nop
    ctx->pc = 0x25b968u;
    // NOP
label_25b96c:
    // 0x25b96c: 0x0  nop
    ctx->pc = 0x25b96cu;
    // NOP
label_25b970:
    // 0x25b970: 0x4e8f  .word       0x00004E8F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b974:
    // 0x25b974: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b978:
    // 0x25b978: 0x0  nop
    ctx->pc = 0x25b978u;
    // NOP
label_25b97c:
    // 0x25b97c: 0x0  nop
    ctx->pc = 0x25b97cu;
    // NOP
label_25b980:
    // 0x25b980: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b984:
    // 0x25b984: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b988:
    // 0x25b988: 0x0  nop
    ctx->pc = 0x25b988u;
    // NOP
label_25b98c:
    // 0x25b98c: 0x0  nop
    ctx->pc = 0x25b98cu;
    // NOP
label_25b990:
    // 0x25b990: 0x4eb1  tgeu        $zero, $zero, 314
    ctx->pc = 0x25b990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b994:
    // 0x25b994: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25b998:
    // 0x25b998: 0x0  nop
    ctx->pc = 0x25b998u;
    // NOP
label_25b99c:
    // 0x25b99c: 0x0  nop
    ctx->pc = 0x25b99cu;
    // NOP
label_25b9a0:
    // 0x25b9a0: 0x4eb4  teq         $zero, $zero, 314
    ctx->pc = 0x25b9a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9a4:
    // 0x25b9a4: 0x1db0  tge         $zero, $zero, 118
    ctx->pc = 0x25b9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9a8:
    // 0x25b9a8: 0x0  nop
    ctx->pc = 0x25b9a8u;
    // NOP
label_25b9ac:
    // 0x25b9ac: 0x0  nop
    ctx->pc = 0x25b9acu;
    // NOP
label_25b9b0:
    // 0x25b9b0: 0x4eb8  dsll        $t1, $zero, 26
    ctx->pc = 0x25b9b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 26);
label_25b9b4:
    // 0x25b9b4: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b9b8:
    // 0x25b9b8: 0x0  nop
    ctx->pc = 0x25b9b8u;
    // NOP
label_25b9bc:
    // 0x25b9bc: 0x0  nop
    ctx->pc = 0x25b9bcu;
    // NOP
label_25b9c0:
    // 0x25b9c0: 0x4ebc  dsll32      $t1, $zero, 26
    ctx->pc = 0x25b9c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 26));
label_25b9c4:
    // 0x25b9c4: 0x1e70  tge         $zero, $zero, 121
    ctx->pc = 0x25b9c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9c8:
    // 0x25b9c8: 0x0  nop
    ctx->pc = 0x25b9c8u;
    // NOP
label_25b9cc:
    // 0x25b9cc: 0x0  nop
    ctx->pc = 0x25b9ccu;
    // NOP
label_25b9d0:
    // 0x25b9d0: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x25b9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25b9d4:
    // 0x25b9d4: 0x14c0  sll         $v0, $zero, 19
    ctx->pc = 0x25b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b9d8:
    // 0x25b9d8: 0x0  nop
    ctx->pc = 0x25b9d8u;
    // NOP
label_25b9dc:
    // 0x25b9dc: 0x0  nop
    ctx->pc = 0x25b9dcu;
    // NOP
label_25b9e0:
    // 0x25b9e0: 0x4ec3  sra         $t1, $zero, 27
    ctx->pc = 0x25b9e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 27));
label_25b9e4:
    // 0x25b9e4: 0x1dd0  .word       0x00001DD0                   # mfhi        $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b9e8:
    // 0x25b9e8: 0x0  nop
    ctx->pc = 0x25b9e8u;
    // NOP
label_25b9ec:
    // 0x25b9ec: 0x0  nop
    ctx->pc = 0x25b9ecu;
    // NOP
label_25b9f0:
    // 0x25b9f0: 0x4ec7  .word       0x00004EC7                   # srav        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b9f4:
    // 0x25b9f4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x25b9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9f8:
    // 0x25b9f8: 0x0  nop
    ctx->pc = 0x25b9f8u;
    // NOP
label_25b9fc:
    // 0x25b9fc: 0x0  nop
    ctx->pc = 0x25b9fcu;
    // NOP
label_25ba00:
    // 0x25ba00: 0x4ece  .word       0x00004ECE                   # INVALID     $zero, $zero, 0x4ECE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BA00 raw=0x00004ECE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ba04:
    // 0x25ba04: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x25ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25ba08:
    // 0x25ba08: 0x0  nop
    ctx->pc = 0x25ba08u;
    // NOP
label_25ba0c:
    // 0x25ba0c: 0x0  nop
    ctx->pc = 0x25ba0cu;
    // NOP
label_25ba10:
    // 0x25ba10: 0x4ed1  .word       0x00004ED1                   # mthi        $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba10u;
    ctx->hi = GPR_U64(ctx, 0);
label_25ba14:
    // 0x25ba14: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25ba18:
    // 0x25ba18: 0x0  nop
    ctx->pc = 0x25ba18u;
    // NOP
label_25ba1c:
    // 0x25ba1c: 0x0  nop
    ctx->pc = 0x25ba1cu;
    // NOP
label_25ba20:
    // 0x25ba20: 0x4ed4  .word       0x00004ED4                   # dsllv       $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25ba24:
    // 0x25ba24: 0x1bc0  sll         $v1, $zero, 15
    ctx->pc = 0x25ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25ba28:
    // 0x25ba28: 0x0  nop
    ctx->pc = 0x25ba28u;
    // NOP
label_25ba2c:
    // 0x25ba2c: 0x0  nop
    ctx->pc = 0x25ba2cu;
    // NOP
label_25ba30:
    // 0x25ba30: 0x4ed8  .word       0x00004ED8                   # mult        $t1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ba30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25ba34:
    // 0x25ba34: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x25ba34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ba38:
    // 0x25ba38: 0x0  nop
    ctx->pc = 0x25ba38u;
    // NOP
label_25ba3c:
    // 0x25ba3c: 0x0  nop
    ctx->pc = 0x25ba3cu;
    // NOP
label_25ba40:
    // 0x25ba40: 0x4edd  .word       0x00004EDD                   # dmultu      $zero, $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25BA40 raw=0x00004EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ba44:
    // 0x25ba44: 0x1a00  sll         $v1, $zero, 8
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25ba48:
    // 0x25ba48: 0x0  nop
    ctx->pc = 0x25ba48u;
    // NOP
label_25ba4c:
    // 0x25ba4c: 0x0  nop
    ctx->pc = 0x25ba4cu;
    // NOP
label_25ba50:
    // 0x25ba50: 0x4ee1  .word       0x00004EE1                   # addu        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ba54:
    // 0x25ba54: 0x3200  sll         $a2, $zero, 8
    ctx->pc = 0x25ba54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25ba58:
    // 0x25ba58: 0x0  nop
    ctx->pc = 0x25ba58u;
    // NOP
label_25ba5c:
    // 0x25ba5c: 0x0  nop
    ctx->pc = 0x25ba5cu;
    // NOP
label_25ba60:
    // 0x25ba60: 0x4ee8  .word       0x00004EE8                   # mfsa        $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ba60u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25ba64:
    // 0x25ba64: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25ba68:
    // 0x25ba68: 0x0  nop
    ctx->pc = 0x25ba68u;
    // NOP
label_25ba6c:
    // 0x25ba6c: 0x0  nop
    ctx->pc = 0x25ba6cu;
    // NOP
label_25ba70:
    // 0x25ba70: 0x4eec  .word       0x00004EEC                   # dadd        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25ba74:
    // 0x25ba74: 0x2690  .word       0x00002690                   # mfhi        $a0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25ba78:
    // 0x25ba78: 0x0  nop
    ctx->pc = 0x25ba78u;
    // NOP
label_25ba7c:
    // 0x25ba7c: 0x0  nop
    ctx->pc = 0x25ba7cu;
    // NOP
label_25ba80:
    // 0x25ba80: 0x4ef1  tgeu        $zero, $zero, 315
    ctx->pc = 0x25ba80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ba84:
    // 0x25ba84: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25ba84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25ba88:
    // 0x25ba88: 0x0  nop
    ctx->pc = 0x25ba88u;
    // NOP
label_25ba8c:
    // 0x25ba8c: 0x0  nop
    ctx->pc = 0x25ba8cu;
    // NOP
label_25ba90:
    // 0x25ba90: 0x4f02  srl         $t1, $zero, 28
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 28));
label_25ba94:
    // 0x25ba94: 0x1660  .word       0x00001660                   # add         $v0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25ba98:
    // 0x25ba98: 0x0  nop
    ctx->pc = 0x25ba98u;
    // NOP
label_25ba9c:
    // 0x25ba9c: 0x0  nop
    ctx->pc = 0x25ba9cu;
    // NOP
label_25baa0:
    // 0x25baa0: 0x4f05  .word       0x00004F05                   # INVALID     $zero, $zero, 0x4F05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25baa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BAA0 raw=0x00004F05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25baa4:
    // 0x25baa4: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25baa4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25baa8:
    // 0x25baa8: 0x0  nop
    ctx->pc = 0x25baa8u;
    // NOP
label_25baac:
    // 0x25baac: 0x0  nop
    ctx->pc = 0x25baacu;
    // NOP
label_25bab0:
    // 0x25bab0: 0x4f0b  .word       0x00004F0B                   # movn        $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bab0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25bab4:
    // 0x25bab4: 0x36e0  .word       0x000036E0                   # add         $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25bab8:
    // 0x25bab8: 0x0  nop
    ctx->pc = 0x25bab8u;
    // NOP
label_25babc:
    // 0x25babc: 0x0  nop
    ctx->pc = 0x25babcu;
    // NOP
label_25bac0:
    // 0x25bac0: 0x4f12  .word       0x00004F12                   # mflo        $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bac0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_25bac4:
    // 0x25bac4: 0x2560  .word       0x00002560                   # add         $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25bac8:
    // 0x25bac8: 0x0  nop
    ctx->pc = 0x25bac8u;
    // NOP
label_25bacc:
    // 0x25bacc: 0x0  nop
    ctx->pc = 0x25baccu;
    // NOP
label_25bad0:
    // 0x25bad0: 0x4f17  .word       0x00004F17                   # dsrav       $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bad0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bad4:
    // 0x25bad4: 0x27f0  tge         $zero, $zero, 159
    ctx->pc = 0x25bad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bad8:
    // 0x25bad8: 0x0  nop
    ctx->pc = 0x25bad8u;
    // NOP
label_25badc:
    // 0x25badc: 0x0  nop
    ctx->pc = 0x25badcu;
    // NOP
label_25bae0:
    // 0x25bae0: 0x4f1c  .word       0x00004F1C                   # dmult       $zero, $zero # 00004F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25BAE0 raw=0x00004F1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bae4:
    // 0x25bae4: 0x1f80  sll         $v1, $zero, 30
    ctx->pc = 0x25bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25bae8:
    // 0x25bae8: 0x0  nop
    ctx->pc = 0x25bae8u;
    // NOP
label_25baec:
    // 0x25baec: 0x0  nop
    ctx->pc = 0x25baecu;
    // NOP
label_25baf0:
    // 0x25baf0: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25baf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25baf4:
    // 0x25baf4: 0x1670  tge         $zero, $zero, 89
    ctx->pc = 0x25baf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25baf8:
    // 0x25baf8: 0x0  nop
    ctx->pc = 0x25baf8u;
    // NOP
label_25bafc:
    // 0x25bafc: 0x0  nop
    ctx->pc = 0x25bafcu;
    // NOP
label_25bb00:
    // 0x25bb00: 0x4f23  .word       0x00004F23                   # negu        $t1, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25bb04:
    // 0x25bb04: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25bb08:
    // 0x25bb08: 0x0  nop
    ctx->pc = 0x25bb08u;
    // NOP
label_25bb0c:
    // 0x25bb0c: 0x0  nop
    ctx->pc = 0x25bb0cu;
    // NOP
label_25bb10:
    // 0x25bb10: 0x4f27  .word       0x00004F27                   # not         $t1, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb10u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25bb14:
    // 0x25bb14: 0xb860  .word       0x0000B860                   # add         $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25bb18:
    // 0x25bb18: 0x0  nop
    ctx->pc = 0x25bb18u;
    // NOP
label_25bb1c:
    // 0x25bb1c: 0x0  nop
    ctx->pc = 0x25bb1cu;
    // NOP
label_25bb20:
    // 0x25bb20: 0x4f3f  dsra32      $t1, $zero, 28
    ctx->pc = 0x25bb20u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (32 + 28));
label_25bb24:
    // 0x25bb24: 0xc830  tge         $zero, $zero, 800
    ctx->pc = 0x25bb24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bb28:
    // 0x25bb28: 0x0  nop
    ctx->pc = 0x25bb28u;
    // NOP
label_25bb2c:
    // 0x25bb2c: 0x0  nop
    ctx->pc = 0x25bb2cu;
    // NOP
label_25bb30:
    // 0x25bb30: 0x4f59  .word       0x00004F59                   # multu       $zero, $zero # 00004F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25bb34:
    // 0x25bb34: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x25bb34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25bb38:
    // 0x25bb38: 0x0  nop
    ctx->pc = 0x25bb38u;
    // NOP
label_25bb3c:
    // 0x25bb3c: 0x0  nop
    ctx->pc = 0x25bb3cu;
    // NOP
label_25bb40:
    // 0x25bb40: 0x4f72  tlt         $zero, $zero, 317
    ctx->pc = 0x25bb40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bb44:
    // 0x25bb44: 0x12680  sll         $a0, $at, 26
    ctx->pc = 0x25bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_25bb48:
    // 0x25bb48: 0x0  nop
    ctx->pc = 0x25bb48u;
    // NOP
label_25bb4c:
    // 0x25bb4c: 0x0  nop
    ctx->pc = 0x25bb4cu;
    // NOP
label_25bb50:
    // 0x25bb50: 0x4f97  .word       0x00004F97                   # dsrav       $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb50u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bb54:
    // 0x25bb54: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x25bb54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25bb58:
    // 0x25bb58: 0x0  nop
    ctx->pc = 0x25bb58u;
    // NOP
label_25bb5c:
    // 0x25bb5c: 0x0  nop
    ctx->pc = 0x25bb5cu;
    // NOP
label_25bb60:
    // 0x25bb60: 0x4fab  .word       0x00004FAB                   # sltu        $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb60u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25bb64:
    // 0x25bb64: 0xb930  tge         $zero, $zero, 740
    ctx->pc = 0x25bb64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bb68:
    // 0x25bb68: 0x0  nop
    ctx->pc = 0x25bb68u;
    // NOP
label_25bb6c:
    // 0x25bb6c: 0x0  nop
    ctx->pc = 0x25bb6cu;
    // NOP
label_25bb70:
    // 0x25bb70: 0x4fc3  sra         $t1, $zero, 31
    ctx->pc = 0x25bb70u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 31));
label_25bb74:
    // 0x25bb74: 0xd180  sll         $k0, $zero, 6
    ctx->pc = 0x25bb74u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25bb78:
    // 0x25bb78: 0x0  nop
    ctx->pc = 0x25bb78u;
    // NOP
label_25bb7c:
    // 0x25bb7c: 0x0  nop
    ctx->pc = 0x25bb7cu;
    // NOP
label_25bb80:
    // 0x25bb80: 0x4fde  .word       0x00004FDE                   # ddiv        $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25BB80 raw=0x00004FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bb84:
    // 0x25bb84: 0xead0  .word       0x0000EAD0                   # mfhi        $sp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bb84u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25bb88:
    // 0x25bb88: 0x0  nop
    ctx->pc = 0x25bb88u;
    // NOP
label_25bb8c:
    // 0x25bb8c: 0x0  nop
    ctx->pc = 0x25bb8cu;
    // NOP
label_25bb90:
    // 0x25bb90: 0x4ffc  dsll32      $t1, $zero, 31
    ctx->pc = 0x25bb90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 31));
label_25bb94:
    // 0x25bb94: 0xa470  tge         $zero, $zero, 657
    ctx->pc = 0x25bb94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bb98:
    // 0x25bb98: 0x0  nop
    ctx->pc = 0x25bb98u;
    // NOP
label_25bb9c:
    // 0x25bb9c: 0x0  nop
    ctx->pc = 0x25bb9cu;
    // NOP
label_25bba0:
    // 0x25bba0: 0x5011  .word       0x00005011                   # mthi        $zero # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bba0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25bba4:
    // 0x25bba4: 0xc6a0  .word       0x0000C6A0                   # add         $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25bba8:
    // 0x25bba8: 0x0  nop
    ctx->pc = 0x25bba8u;
    // NOP
label_25bbac:
    // 0x25bbac: 0x0  nop
    ctx->pc = 0x25bbacu;
    // NOP
label_25bbb0:
    // 0x25bbb0: 0x502a  slt         $t2, $zero, $zero
    ctx->pc = 0x25bbb0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25bbb4:
    // 0x25bbb4: 0xe6d0  .word       0x0000E6D0                   # mfhi        $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bbb4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25bbb8:
    // 0x25bbb8: 0x0  nop
    ctx->pc = 0x25bbb8u;
    // NOP
label_25bbbc:
    // 0x25bbbc: 0x0  nop
    ctx->pc = 0x25bbbcu;
    // NOP
label_25bbc0:
    // 0x25bbc0: 0x5047  .word       0x00005047                   # srav        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bbc0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25bbc4:
    // 0x25bbc4: 0xd050  .word       0x0000D050                   # mfhi        $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bbc4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25bbc8:
    // 0x25bbc8: 0x0  nop
    ctx->pc = 0x25bbc8u;
    // NOP
label_25bbcc:
    // 0x25bbcc: 0x0  nop
    ctx->pc = 0x25bbccu;
    // NOP
label_25bbd0:
    // 0x25bbd0: 0x5062  .word       0x00005062                   # neg         $t2, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bbd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_25bbd4:
    // 0x25bbd4: 0xc800  sll         $t9, $zero, 0
    ctx->pc = 0x25bbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25bbd8:
    // 0x25bbd8: 0x0  nop
    ctx->pc = 0x25bbd8u;
    // NOP
label_25bbdc:
    // 0x25bbdc: 0x0  nop
    ctx->pc = 0x25bbdcu;
    // NOP
label_25bbe0:
    // 0x25bbe0: 0x507b  dsra        $t2, $zero, 1
    ctx->pc = 0x25bbe0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> 1);
label_25bbe4:
    // 0x25bbe4: 0xda70  tge         $zero, $zero, 873
    ctx->pc = 0x25bbe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bbe8:
    // 0x25bbe8: 0x0  nop
    ctx->pc = 0x25bbe8u;
    // NOP
label_25bbec:
    // 0x25bbec: 0x0  nop
    ctx->pc = 0x25bbecu;
    // NOP
label_25bbf0:
    // 0x25bbf0: 0x5097  .word       0x00005097                   # dsrav       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bbf0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bbf4:
    // 0x25bbf4: 0xbf00  sll         $s7, $zero, 28
    ctx->pc = 0x25bbf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25bbf8:
    // 0x25bbf8: 0x0  nop
    ctx->pc = 0x25bbf8u;
    // NOP
label_25bbfc:
    // 0x25bbfc: 0x0  nop
    ctx->pc = 0x25bbfcu;
    // NOP
label_25bc00:
    // 0x25bc00: 0x50af  .word       0x000050AF                   # dsubu       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25bc04:
    // 0x25bc04: 0xc570  tge         $zero, $zero, 789
    ctx->pc = 0x25bc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc08:
    // 0x25bc08: 0x0  nop
    ctx->pc = 0x25bc08u;
    // NOP
label_25bc0c:
    // 0x25bc0c: 0x0  nop
    ctx->pc = 0x25bc0cu;
    // NOP
label_25bc10:
    // 0x25bc10: 0x50c8  .word       0x000050C8                   # jr          $zero # 000050C0 <InstrIdType: CPU_SPECIAL>
label_25bc14:
    if (ctx->pc == 0x25BC14u) {
        ctx->pc = 0x25BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC10u;
        // 0x25bc14: 0xb050  .word       0x0000B050                   # mfhi        $s6 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC18u;
        goto label_25bc18;
    }
    ctx->pc = 0x25BC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC10u;
        // 0x25bc14: 0xb050  .word       0x0000B050                   # mfhi        $s6 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25BC18u;
label_25bc18:
    // 0x25bc18: 0x0  nop
    ctx->pc = 0x25bc18u;
    // NOP
label_25bc1c:
    // 0x25bc1c: 0x0  nop
    ctx->pc = 0x25bc1cu;
    // NOP
label_25bc20:
    // 0x25bc20: 0x50df  .word       0x000050DF                   # ddivu       $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25BC20 raw=0x000050DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bc24:
    // 0x25bc24: 0xb3a0  .word       0x0000B3A0                   # add         $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25bc28:
    // 0x25bc28: 0x0  nop
    ctx->pc = 0x25bc28u;
    // NOP
label_25bc2c:
    // 0x25bc2c: 0x0  nop
    ctx->pc = 0x25bc2cu;
    // NOP
label_25bc30:
    // 0x25bc30: 0x50f6  tne         $zero, $zero, 323
    ctx->pc = 0x25bc30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc34:
    // 0x25bc34: 0xbcf0  tge         $zero, $zero, 755
    ctx->pc = 0x25bc34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc38:
    // 0x25bc38: 0x0  nop
    ctx->pc = 0x25bc38u;
    // NOP
label_25bc3c:
    // 0x25bc3c: 0x0  nop
    ctx->pc = 0x25bc3cu;
    // NOP
label_25bc40:
    // 0x25bc40: 0x510e  .word       0x0000510E                   # INVALID     $zero, $zero, 0x510E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BC40 raw=0x0000510E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bc44:
    // 0x25bc44: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x25bc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc48:
    // 0x25bc48: 0x0  nop
    ctx->pc = 0x25bc48u;
    // NOP
label_25bc4c:
    // 0x25bc4c: 0x0  nop
    ctx->pc = 0x25bc4cu;
    // NOP
label_25bc50:
    // 0x25bc50: 0x5126  .word       0x00005126                   # xor         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25bc54:
    // 0x25bc54: 0xcc00  sll         $t9, $zero, 16
    ctx->pc = 0x25bc54u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25bc58:
    // 0x25bc58: 0x0  nop
    ctx->pc = 0x25bc58u;
    // NOP
label_25bc5c:
    // 0x25bc5c: 0x0  nop
    ctx->pc = 0x25bc5cu;
    // NOP
label_25bc60:
    // 0x25bc60: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25bc64:
    // 0x25bc64: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x25bc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc68:
    // 0x25bc68: 0x0  nop
    ctx->pc = 0x25bc68u;
    // NOP
label_25bc6c:
    // 0x25bc6c: 0x0  nop
    ctx->pc = 0x25bc6cu;
    // NOP
label_25bc70:
    // 0x25bc70: 0x5157  .word       0x00005157                   # dsrav       $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc70u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bc74:
    // 0x25bc74: 0x9110  .word       0x00009110                   # mfhi        $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc74u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25bc78:
    // 0x25bc78: 0x0  nop
    ctx->pc = 0x25bc78u;
    // NOP
label_25bc7c:
    // 0x25bc7c: 0x0  nop
    ctx->pc = 0x25bc7cu;
    // NOP
label_25bc80:
    // 0x25bc80: 0x516a  .word       0x0000516A                   # slt         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc80u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25bc84:
    // 0x25bc84: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x25bc84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bc88:
    // 0x25bc88: 0x0  nop
    ctx->pc = 0x25bc88u;
    // NOP
label_25bc8c:
    // 0x25bc8c: 0x0  nop
    ctx->pc = 0x25bc8cu;
    // NOP
label_25bc90:
    // 0x25bc90: 0x5185  .word       0x00005185                   # INVALID     $zero, $zero, 0x5185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BC90 raw=0x00005185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bc94:
    // 0x25bc94: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25bc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25bc98:
    // 0x25bc98: 0x0  nop
    ctx->pc = 0x25bc98u;
    // NOP
label_25bc9c:
    // 0x25bc9c: 0x0  nop
    ctx->pc = 0x25bc9cu;
    // NOP
label_25bca0:
    // 0x25bca0: 0x5196  .word       0x00005196                   # dsrlv       $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bca0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bca4:
    // 0x25bca4: 0xa900  sll         $s5, $zero, 4
    ctx->pc = 0x25bca4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25bca8:
    // 0x25bca8: 0x0  nop
    ctx->pc = 0x25bca8u;
    // NOP
label_25bcac:
    // 0x25bcac: 0x0  nop
    ctx->pc = 0x25bcacu;
    // NOP
label_25bcb0:
    // 0x25bcb0: 0x51ac  .word       0x000051AC                   # dadd        $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_25bcb4:
    // 0x25bcb4: 0xad00  sll         $s5, $zero, 20
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25bcb8:
    // 0x25bcb8: 0x0  nop
    ctx->pc = 0x25bcb8u;
    // NOP
label_25bcbc:
    // 0x25bcbc: 0x0  nop
    ctx->pc = 0x25bcbcu;
    // NOP
label_25bcc0:
    // 0x25bcc0: 0x51c2  srl         $t2, $zero, 7
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_25bcc4:
    // 0x25bcc4: 0xc570  tge         $zero, $zero, 789
    ctx->pc = 0x25bcc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bcc8:
    // 0x25bcc8: 0x0  nop
    ctx->pc = 0x25bcc8u;
    // NOP
label_25bccc:
    // 0x25bccc: 0x0  nop
    ctx->pc = 0x25bcccu;
    // NOP
label_25bcd0:
    // 0x25bcd0: 0x51db  .word       0x000051DB                   # divu        $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25bcd4:
    // 0x25bcd4: 0x10a50  .word       0x00010A50                   # mfhi        $at # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcd4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_25bcd8:
    // 0x25bcd8: 0x0  nop
    ctx->pc = 0x25bcd8u;
    // NOP
label_25bcdc:
    // 0x25bcdc: 0x0  nop
    ctx->pc = 0x25bcdcu;
    // NOP
label_25bce0:
    // 0x25bce0: 0x51fd  .word       0x000051FD                   # INVALID     $zero, $zero, 0x51FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25BCE0 raw=0x000051FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bce4:
    // 0x25bce4: 0xb900  sll         $s7, $zero, 4
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25bce8:
    // 0x25bce8: 0x0  nop
    ctx->pc = 0x25bce8u;
    // NOP
label_25bcec:
    // 0x25bcec: 0x0  nop
    ctx->pc = 0x25bcecu;
    // NOP
label_25bcf0:
    // 0x25bcf0: 0x5215  .word       0x00005215                   # INVALID     $zero, $zero, 0x5215 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25BCF0 raw=0x00005215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bcf4:
    // 0x25bcf4: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bcf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25bcf8:
    // 0x25bcf8: 0x0  nop
    ctx->pc = 0x25bcf8u;
    // NOP
label_25bcfc:
    // 0x25bcfc: 0x0  nop
    ctx->pc = 0x25bcfcu;
    // NOP
label_25bd00:
    // 0x25bd00: 0x522f  .word       0x0000522F                   # dsubu       $t2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25bd04:
    // 0x25bd04: 0xeae0  .word       0x0000EAE0                   # add         $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25bd08:
    // 0x25bd08: 0x0  nop
    ctx->pc = 0x25bd08u;
    // NOP
label_25bd0c:
    // 0x25bd0c: 0x0  nop
    ctx->pc = 0x25bd0cu;
    // NOP
label_25bd10:
    // 0x25bd10: 0x524d  break       0, 329
    ctx->pc = 0x25bd10u;
    runtime->handleBreak(rdram, ctx);
label_25bd14:
    // 0x25bd14: 0xc600  sll         $t8, $zero, 24
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25bd18:
    // 0x25bd18: 0x0  nop
    ctx->pc = 0x25bd18u;
    // NOP
label_25bd1c:
    // 0x25bd1c: 0x0  nop
    ctx->pc = 0x25bd1cu;
    // NOP
label_25bd20:
    // 0x25bd20: 0x5266  .word       0x00005266                   # xor         $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25bd24:
    // 0x25bd24: 0xe620  .word       0x0000E620                   # add         $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25bd28:
    // 0x25bd28: 0x0  nop
    ctx->pc = 0x25bd28u;
    // NOP
label_25bd2c:
    // 0x25bd2c: 0x0  nop
    ctx->pc = 0x25bd2cu;
    // NOP
label_25bd30:
    // 0x25bd30: 0x5283  sra         $t2, $zero, 10
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 10));
label_25bd34:
    // 0x25bd34: 0xc420  .word       0x0000C420                   # add         $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25bd38:
    // 0x25bd38: 0x0  nop
    ctx->pc = 0x25bd38u;
    // NOP
label_25bd3c:
    // 0x25bd3c: 0x0  nop
    ctx->pc = 0x25bd3cu;
    // NOP
label_25bd40:
    // 0x25bd40: 0x529c  .word       0x0000529C                   # dmult       $zero, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25BD40 raw=0x0000529C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bd44:
    // 0x25bd44: 0xc920  .word       0x0000C920                   # add         $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25bd48:
    // 0x25bd48: 0x0  nop
    ctx->pc = 0x25bd48u;
    // NOP
label_25bd4c:
    // 0x25bd4c: 0x0  nop
    ctx->pc = 0x25bd4cu;
    // NOP
label_25bd50:
    // 0x25bd50: 0x52b6  tne         $zero, $zero, 330
    ctx->pc = 0x25bd50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bd54:
    // 0x25bd54: 0xbf40  sll         $s7, $zero, 29
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25bd58:
    // 0x25bd58: 0x0  nop
    ctx->pc = 0x25bd58u;
    // NOP
label_25bd5c:
    // 0x25bd5c: 0x0  nop
    ctx->pc = 0x25bd5cu;
    // NOP
label_25bd60:
    // 0x25bd60: 0x52ce  .word       0x000052CE                   # INVALID     $zero, $zero, 0x52CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BD60 raw=0x000052CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25bd64:
    // 0x25bd64: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25bd68:
    // 0x25bd68: 0x0  nop
    ctx->pc = 0x25bd68u;
    // NOP
label_25bd6c:
    // 0x25bd6c: 0x0  nop
    ctx->pc = 0x25bd6cu;
    // NOP
label_25bd70:
    // 0x25bd70: 0x52e7  .word       0x000052E7                   # not         $t2, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd70u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25bd74:
    // 0x25bd74: 0xd810  mfhi        $k1
    ctx->pc = 0x25bd74u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25bd78:
    // 0x25bd78: 0x0  nop
    ctx->pc = 0x25bd78u;
    // NOP
label_25bd7c:
    // 0x25bd7c: 0x0  nop
    ctx->pc = 0x25bd7cu;
    // NOP
label_25bd80:
    // 0x25bd80: 0x5303  sra         $t2, $zero, 12
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 12));
label_25bd84:
    // 0x25bd84: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25bd88:
    // 0x25bd88: 0x0  nop
    ctx->pc = 0x25bd88u;
    // NOP
label_25bd8c:
    // 0x25bd8c: 0x0  nop
    ctx->pc = 0x25bd8cu;
    // NOP
label_25bd90:
    // 0x25bd90: 0x5318  .word       0x00005318                   # mult        $t2, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25bd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_25bd94:
    // 0x25bd94: 0xc230  tge         $zero, $zero, 776
    ctx->pc = 0x25bd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bd98:
    // 0x25bd98: 0x0  nop
    ctx->pc = 0x25bd98u;
    // NOP
label_25bd9c:
    // 0x25bd9c: 0x0  nop
    ctx->pc = 0x25bd9cu;
    // NOP
label_25bda0:
    // 0x25bda0: 0x5331  tgeu        $zero, $zero, 332
    ctx->pc = 0x25bda0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25bda4:
    // 0x25bda4: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25bda8:
    // 0x25bda8: 0x0  nop
    ctx->pc = 0x25bda8u;
    // NOP
label_25bdac:
    // 0x25bdac: 0x0  nop
    ctx->pc = 0x25bdacu;
    // NOP
label_25bdb0:
    // 0x25bdb0: 0x533c  dsll32      $t2, $zero, 12
    ctx->pc = 0x25bdb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 12));
label_25bdb4:
    // 0x25bdb4: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25bdb8:
    // 0x25bdb8: 0x0  nop
    ctx->pc = 0x25bdb8u;
    // NOP
label_25bdbc:
    // 0x25bdbc: 0x0  nop
    ctx->pc = 0x25bdbcu;
    // NOP
label_25bdc0:
    // 0x25bdc0: 0x534d  break       0, 333
    ctx->pc = 0x25bdc0u;
    runtime->handleBreak(rdram, ctx);
label_25bdc4:
    // 0x25bdc4: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25bdc8:
    // 0x25bdc8: 0x0  nop
    ctx->pc = 0x25bdc8u;
    // NOP
label_25bdcc:
    // 0x25bdcc: 0x0  nop
    ctx->pc = 0x25bdccu;
    // NOP
label_25bdd0:
    // 0x25bdd0: 0x5356  .word       0x00005356                   # dsrlv       $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25bdd4:
    // 0x25bdd4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x25bdd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25bdd8:
    // 0x25bdd8: 0x0  nop
    ctx->pc = 0x25bdd8u;
    // NOP
label_25bddc:
    // 0x25bddc: 0x0  nop
    ctx->pc = 0x25bddcu;
    // NOP
label_25bde0:
    // 0x25bde0: 0x5363  .word       0x00005363                   # negu        $t2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bde0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25bde4:
    // 0x25bde4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bde4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25bde8:
    // 0x25bde8: 0x0  nop
    ctx->pc = 0x25bde8u;
    // NOP
label_25bdec:
    // 0x25bdec: 0x0  nop
    ctx->pc = 0x25bdecu;
    // NOP
label_25bdf0:
    // 0x25bdf0: 0x536d  .word       0x0000536D                   # daddu       $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25bdf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bdf4:
    // 0x25bdf4: 0xb840  sll         $s7, $zero, 1
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25bdf8:
    // 0x25bdf8: 0x0  nop
    ctx->pc = 0x25bdf8u;
    // NOP
label_25bdfc:
    // 0x25bdfc: 0x0  nop
    ctx->pc = 0x25bdfcu;
    // NOP
label_25be00:
    // 0x25be00: 0x5385  .word       0x00005385                   # INVALID     $zero, $zero, 0x5385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25BE00 raw=0x00005385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25be04:
    // 0x25be04: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25be04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25be08:
    // 0x25be08: 0x0  nop
    ctx->pc = 0x25be08u;
    // NOP
label_25be0c:
    // 0x25be0c: 0x0  nop
    ctx->pc = 0x25be0cu;
    // NOP
    ctx->pc = 0x25be10u;
    return;
}

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


void FUN_0017faa0_part162(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ce470u: goto label_1ce470;
        case 0x1ce474u: goto label_1ce474;
        case 0x1ce478u: goto label_1ce478;
        case 0x1ce47cu: goto label_1ce47c;
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce484u: goto label_1ce484;
        case 0x1ce488u: goto label_1ce488;
        case 0x1ce48cu: goto label_1ce48c;
        case 0x1ce490u: goto label_1ce490;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce498u: goto label_1ce498;
        case 0x1ce49cu: goto label_1ce49c;
        case 0x1ce4a0u: goto label_1ce4a0;
        case 0x1ce4a4u: goto label_1ce4a4;
        case 0x1ce4a8u: goto label_1ce4a8;
        case 0x1ce4acu: goto label_1ce4ac;
        case 0x1ce4b0u: goto label_1ce4b0;
        case 0x1ce4b4u: goto label_1ce4b4;
        case 0x1ce4b8u: goto label_1ce4b8;
        case 0x1ce4bcu: goto label_1ce4bc;
        case 0x1ce4c0u: goto label_1ce4c0;
        case 0x1ce4c4u: goto label_1ce4c4;
        case 0x1ce4c8u: goto label_1ce4c8;
        case 0x1ce4ccu: goto label_1ce4cc;
        case 0x1ce4d0u: goto label_1ce4d0;
        case 0x1ce4d4u: goto label_1ce4d4;
        case 0x1ce4d8u: goto label_1ce4d8;
        case 0x1ce4dcu: goto label_1ce4dc;
        case 0x1ce4e0u: goto label_1ce4e0;
        case 0x1ce4e4u: goto label_1ce4e4;
        case 0x1ce4e8u: goto label_1ce4e8;
        case 0x1ce4ecu: goto label_1ce4ec;
        case 0x1ce4f0u: goto label_1ce4f0;
        case 0x1ce4f4u: goto label_1ce4f4;
        case 0x1ce4f8u: goto label_1ce4f8;
        case 0x1ce4fcu: goto label_1ce4fc;
        case 0x1ce500u: goto label_1ce500;
        case 0x1ce504u: goto label_1ce504;
        case 0x1ce508u: goto label_1ce508;
        case 0x1ce50cu: goto label_1ce50c;
        case 0x1ce510u: goto label_1ce510;
        case 0x1ce514u: goto label_1ce514;
        case 0x1ce518u: goto label_1ce518;
        case 0x1ce51cu: goto label_1ce51c;
        case 0x1ce520u: goto label_1ce520;
        case 0x1ce524u: goto label_1ce524;
        case 0x1ce528u: goto label_1ce528;
        case 0x1ce52cu: goto label_1ce52c;
        case 0x1ce530u: goto label_1ce530;
        case 0x1ce534u: goto label_1ce534;
        case 0x1ce538u: goto label_1ce538;
        case 0x1ce53cu: goto label_1ce53c;
        case 0x1ce540u: goto label_1ce540;
        case 0x1ce544u: goto label_1ce544;
        case 0x1ce548u: goto label_1ce548;
        case 0x1ce54cu: goto label_1ce54c;
        case 0x1ce550u: goto label_1ce550;
        case 0x1ce554u: goto label_1ce554;
        case 0x1ce558u: goto label_1ce558;
        case 0x1ce55cu: goto label_1ce55c;
        case 0x1ce560u: goto label_1ce560;
        case 0x1ce564u: goto label_1ce564;
        case 0x1ce568u: goto label_1ce568;
        case 0x1ce56cu: goto label_1ce56c;
        case 0x1ce570u: goto label_1ce570;
        case 0x1ce574u: goto label_1ce574;
        case 0x1ce578u: goto label_1ce578;
        case 0x1ce57cu: goto label_1ce57c;
        case 0x1ce580u: goto label_1ce580;
        case 0x1ce584u: goto label_1ce584;
        case 0x1ce588u: goto label_1ce588;
        case 0x1ce58cu: goto label_1ce58c;
        case 0x1ce590u: goto label_1ce590;
        case 0x1ce594u: goto label_1ce594;
        case 0x1ce598u: goto label_1ce598;
        case 0x1ce59cu: goto label_1ce59c;
        case 0x1ce5a0u: goto label_1ce5a0;
        case 0x1ce5a4u: goto label_1ce5a4;
        case 0x1ce5a8u: goto label_1ce5a8;
        case 0x1ce5acu: goto label_1ce5ac;
        case 0x1ce5b0u: goto label_1ce5b0;
        case 0x1ce5b4u: goto label_1ce5b4;
        case 0x1ce5b8u: goto label_1ce5b8;
        case 0x1ce5bcu: goto label_1ce5bc;
        case 0x1ce5c0u: goto label_1ce5c0;
        case 0x1ce5c4u: goto label_1ce5c4;
        case 0x1ce5c8u: goto label_1ce5c8;
        case 0x1ce5ccu: goto label_1ce5cc;
        case 0x1ce5d0u: goto label_1ce5d0;
        case 0x1ce5d4u: goto label_1ce5d4;
        case 0x1ce5d8u: goto label_1ce5d8;
        case 0x1ce5dcu: goto label_1ce5dc;
        case 0x1ce5e0u: goto label_1ce5e0;
        case 0x1ce5e4u: goto label_1ce5e4;
        case 0x1ce5e8u: goto label_1ce5e8;
        case 0x1ce5ecu: goto label_1ce5ec;
        case 0x1ce5f0u: goto label_1ce5f0;
        case 0x1ce5f4u: goto label_1ce5f4;
        case 0x1ce5f8u: goto label_1ce5f8;
        case 0x1ce5fcu: goto label_1ce5fc;
        case 0x1ce600u: goto label_1ce600;
        case 0x1ce604u: goto label_1ce604;
        case 0x1ce608u: goto label_1ce608;
        case 0x1ce60cu: goto label_1ce60c;
        case 0x1ce610u: goto label_1ce610;
        case 0x1ce614u: goto label_1ce614;
        case 0x1ce618u: goto label_1ce618;
        case 0x1ce61cu: goto label_1ce61c;
        case 0x1ce620u: goto label_1ce620;
        case 0x1ce624u: goto label_1ce624;
        case 0x1ce628u: goto label_1ce628;
        case 0x1ce62cu: goto label_1ce62c;
        case 0x1ce630u: goto label_1ce630;
        case 0x1ce634u: goto label_1ce634;
        case 0x1ce638u: goto label_1ce638;
        case 0x1ce63cu: goto label_1ce63c;
        case 0x1ce640u: goto label_1ce640;
        case 0x1ce644u: goto label_1ce644;
        case 0x1ce648u: goto label_1ce648;
        case 0x1ce64cu: goto label_1ce64c;
        case 0x1ce650u: goto label_1ce650;
        case 0x1ce654u: goto label_1ce654;
        case 0x1ce658u: goto label_1ce658;
        case 0x1ce65cu: goto label_1ce65c;
        case 0x1ce660u: goto label_1ce660;
        case 0x1ce664u: goto label_1ce664;
        case 0x1ce668u: goto label_1ce668;
        case 0x1ce66cu: goto label_1ce66c;
        case 0x1ce670u: goto label_1ce670;
        case 0x1ce674u: goto label_1ce674;
        case 0x1ce678u: goto label_1ce678;
        case 0x1ce67cu: goto label_1ce67c;
        case 0x1ce680u: goto label_1ce680;
        case 0x1ce684u: goto label_1ce684;
        case 0x1ce688u: goto label_1ce688;
        case 0x1ce68cu: goto label_1ce68c;
        case 0x1ce690u: goto label_1ce690;
        case 0x1ce694u: goto label_1ce694;
        case 0x1ce698u: goto label_1ce698;
        case 0x1ce69cu: goto label_1ce69c;
        case 0x1ce6a0u: goto label_1ce6a0;
        case 0x1ce6a4u: goto label_1ce6a4;
        case 0x1ce6a8u: goto label_1ce6a8;
        case 0x1ce6acu: goto label_1ce6ac;
        case 0x1ce6b0u: goto label_1ce6b0;
        case 0x1ce6b4u: goto label_1ce6b4;
        case 0x1ce6b8u: goto label_1ce6b8;
        case 0x1ce6bcu: goto label_1ce6bc;
        case 0x1ce6c0u: goto label_1ce6c0;
        case 0x1ce6c4u: goto label_1ce6c4;
        case 0x1ce6c8u: goto label_1ce6c8;
        case 0x1ce6ccu: goto label_1ce6cc;
        case 0x1ce6d0u: goto label_1ce6d0;
        case 0x1ce6d4u: goto label_1ce6d4;
        case 0x1ce6d8u: goto label_1ce6d8;
        case 0x1ce6dcu: goto label_1ce6dc;
        case 0x1ce6e0u: goto label_1ce6e0;
        case 0x1ce6e4u: goto label_1ce6e4;
        case 0x1ce6e8u: goto label_1ce6e8;
        case 0x1ce6ecu: goto label_1ce6ec;
        case 0x1ce6f0u: goto label_1ce6f0;
        case 0x1ce6f4u: goto label_1ce6f4;
        case 0x1ce6f8u: goto label_1ce6f8;
        case 0x1ce6fcu: goto label_1ce6fc;
        case 0x1ce700u: goto label_1ce700;
        case 0x1ce704u: goto label_1ce704;
        case 0x1ce708u: goto label_1ce708;
        case 0x1ce70cu: goto label_1ce70c;
        case 0x1ce710u: goto label_1ce710;
        case 0x1ce714u: goto label_1ce714;
        case 0x1ce718u: goto label_1ce718;
        case 0x1ce71cu: goto label_1ce71c;
        case 0x1ce720u: goto label_1ce720;
        case 0x1ce724u: goto label_1ce724;
        case 0x1ce728u: goto label_1ce728;
        case 0x1ce72cu: goto label_1ce72c;
        case 0x1ce730u: goto label_1ce730;
        case 0x1ce734u: goto label_1ce734;
        case 0x1ce738u: goto label_1ce738;
        case 0x1ce73cu: goto label_1ce73c;
        case 0x1ce740u: goto label_1ce740;
        case 0x1ce744u: goto label_1ce744;
        case 0x1ce748u: goto label_1ce748;
        case 0x1ce74cu: goto label_1ce74c;
        case 0x1ce750u: goto label_1ce750;
        case 0x1ce754u: goto label_1ce754;
        case 0x1ce758u: goto label_1ce758;
        case 0x1ce75cu: goto label_1ce75c;
        case 0x1ce760u: goto label_1ce760;
        case 0x1ce764u: goto label_1ce764;
        case 0x1ce768u: goto label_1ce768;
        case 0x1ce76cu: goto label_1ce76c;
        case 0x1ce770u: goto label_1ce770;
        case 0x1ce774u: goto label_1ce774;
        case 0x1ce778u: goto label_1ce778;
        case 0x1ce77cu: goto label_1ce77c;
        case 0x1ce780u: goto label_1ce780;
        case 0x1ce784u: goto label_1ce784;
        case 0x1ce788u: goto label_1ce788;
        case 0x1ce78cu: goto label_1ce78c;
        case 0x1ce790u: goto label_1ce790;
        case 0x1ce794u: goto label_1ce794;
        case 0x1ce798u: goto label_1ce798;
        case 0x1ce79cu: goto label_1ce79c;
        case 0x1ce7a0u: goto label_1ce7a0;
        case 0x1ce7a4u: goto label_1ce7a4;
        case 0x1ce7a8u: goto label_1ce7a8;
        case 0x1ce7acu: goto label_1ce7ac;
        case 0x1ce7b0u: goto label_1ce7b0;
        case 0x1ce7b4u: goto label_1ce7b4;
        case 0x1ce7b8u: goto label_1ce7b8;
        case 0x1ce7bcu: goto label_1ce7bc;
        case 0x1ce7c0u: goto label_1ce7c0;
        case 0x1ce7c4u: goto label_1ce7c4;
        case 0x1ce7c8u: goto label_1ce7c8;
        case 0x1ce7ccu: goto label_1ce7cc;
        case 0x1ce7d0u: goto label_1ce7d0;
        case 0x1ce7d4u: goto label_1ce7d4;
        case 0x1ce7d8u: goto label_1ce7d8;
        case 0x1ce7dcu: goto label_1ce7dc;
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce7e8u: goto label_1ce7e8;
        case 0x1ce7ecu: goto label_1ce7ec;
        case 0x1ce7f0u: goto label_1ce7f0;
        case 0x1ce7f4u: goto label_1ce7f4;
        case 0x1ce7f8u: goto label_1ce7f8;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce800u: goto label_1ce800;
        case 0x1ce804u: goto label_1ce804;
        case 0x1ce808u: goto label_1ce808;
        case 0x1ce80cu: goto label_1ce80c;
        case 0x1ce810u: goto label_1ce810;
        case 0x1ce814u: goto label_1ce814;
        case 0x1ce818u: goto label_1ce818;
        case 0x1ce81cu: goto label_1ce81c;
        case 0x1ce820u: goto label_1ce820;
        case 0x1ce824u: goto label_1ce824;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce82cu: goto label_1ce82c;
        case 0x1ce830u: goto label_1ce830;
        case 0x1ce834u: goto label_1ce834;
        case 0x1ce838u: goto label_1ce838;
        case 0x1ce83cu: goto label_1ce83c;
        case 0x1ce840u: goto label_1ce840;
        case 0x1ce844u: goto label_1ce844;
        case 0x1ce848u: goto label_1ce848;
        case 0x1ce84cu: goto label_1ce84c;
        case 0x1ce850u: goto label_1ce850;
        case 0x1ce854u: goto label_1ce854;
        case 0x1ce858u: goto label_1ce858;
        case 0x1ce85cu: goto label_1ce85c;
        case 0x1ce860u: goto label_1ce860;
        case 0x1ce864u: goto label_1ce864;
        case 0x1ce868u: goto label_1ce868;
        case 0x1ce86cu: goto label_1ce86c;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce874u: goto label_1ce874;
        case 0x1ce878u: goto label_1ce878;
        case 0x1ce87cu: goto label_1ce87c;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce884u: goto label_1ce884;
        case 0x1ce888u: goto label_1ce888;
        case 0x1ce88cu: goto label_1ce88c;
        case 0x1ce890u: goto label_1ce890;
        case 0x1ce894u: goto label_1ce894;
        case 0x1ce898u: goto label_1ce898;
        case 0x1ce89cu: goto label_1ce89c;
        case 0x1ce8a0u: goto label_1ce8a0;
        case 0x1ce8a4u: goto label_1ce8a4;
        case 0x1ce8a8u: goto label_1ce8a8;
        case 0x1ce8acu: goto label_1ce8ac;
        case 0x1ce8b0u: goto label_1ce8b0;
        case 0x1ce8b4u: goto label_1ce8b4;
        case 0x1ce8b8u: goto label_1ce8b8;
        case 0x1ce8bcu: goto label_1ce8bc;
        case 0x1ce8c0u: goto label_1ce8c0;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8c8u: goto label_1ce8c8;
        case 0x1ce8ccu: goto label_1ce8cc;
        case 0x1ce8d0u: goto label_1ce8d0;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8d8u: goto label_1ce8d8;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8e0u: goto label_1ce8e0;
        case 0x1ce8e4u: goto label_1ce8e4;
        case 0x1ce8e8u: goto label_1ce8e8;
        case 0x1ce8ecu: goto label_1ce8ec;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce8f4u: goto label_1ce8f4;
        case 0x1ce8f8u: goto label_1ce8f8;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce904u: goto label_1ce904;
        case 0x1ce908u: goto label_1ce908;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce914u: goto label_1ce914;
        case 0x1ce918u: goto label_1ce918;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce920u: goto label_1ce920;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce930u: goto label_1ce930;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce938u: goto label_1ce938;
        case 0x1ce93cu: goto label_1ce93c;
        case 0x1ce940u: goto label_1ce940;
        case 0x1ce944u: goto label_1ce944;
        case 0x1ce948u: goto label_1ce948;
        case 0x1ce94cu: goto label_1ce94c;
        case 0x1ce950u: goto label_1ce950;
        case 0x1ce954u: goto label_1ce954;
        case 0x1ce958u: goto label_1ce958;
        case 0x1ce95cu: goto label_1ce95c;
        case 0x1ce960u: goto label_1ce960;
        case 0x1ce964u: goto label_1ce964;
        case 0x1ce968u: goto label_1ce968;
        case 0x1ce96cu: goto label_1ce96c;
        case 0x1ce970u: goto label_1ce970;
        case 0x1ce974u: goto label_1ce974;
        case 0x1ce978u: goto label_1ce978;
        case 0x1ce97cu: goto label_1ce97c;
        case 0x1ce980u: goto label_1ce980;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce988u: goto label_1ce988;
        case 0x1ce98cu: goto label_1ce98c;
        case 0x1ce990u: goto label_1ce990;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce998u: goto label_1ce998;
        case 0x1ce99cu: goto label_1ce99c;
        case 0x1ce9a0u: goto label_1ce9a0;
        case 0x1ce9a4u: goto label_1ce9a4;
        case 0x1ce9a8u: goto label_1ce9a8;
        case 0x1ce9acu: goto label_1ce9ac;
        case 0x1ce9b0u: goto label_1ce9b0;
        case 0x1ce9b4u: goto label_1ce9b4;
        case 0x1ce9b8u: goto label_1ce9b8;
        case 0x1ce9bcu: goto label_1ce9bc;
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1ce9c4u: goto label_1ce9c4;
        case 0x1ce9c8u: goto label_1ce9c8;
        case 0x1ce9ccu: goto label_1ce9cc;
        case 0x1ce9d0u: goto label_1ce9d0;
        case 0x1ce9d4u: goto label_1ce9d4;
        case 0x1ce9d8u: goto label_1ce9d8;
        case 0x1ce9dcu: goto label_1ce9dc;
        case 0x1ce9e0u: goto label_1ce9e0;
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1ce9e8u: goto label_1ce9e8;
        case 0x1ce9ecu: goto label_1ce9ec;
        case 0x1ce9f0u: goto label_1ce9f0;
        case 0x1ce9f4u: goto label_1ce9f4;
        case 0x1ce9f8u: goto label_1ce9f8;
        case 0x1ce9fcu: goto label_1ce9fc;
        case 0x1cea00u: goto label_1cea00;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea0cu: goto label_1cea0c;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea18u: goto label_1cea18;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea24u: goto label_1cea24;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea30u: goto label_1cea30;
        case 0x1cea34u: goto label_1cea34;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea40u: goto label_1cea40;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea48u: goto label_1cea48;
        case 0x1cea4cu: goto label_1cea4c;
        case 0x1cea50u: goto label_1cea50;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea58u: goto label_1cea58;
        case 0x1cea5cu: goto label_1cea5c;
        case 0x1cea60u: goto label_1cea60;
        case 0x1cea64u: goto label_1cea64;
        case 0x1cea68u: goto label_1cea68;
        case 0x1cea6cu: goto label_1cea6c;
        case 0x1cea70u: goto label_1cea70;
        case 0x1cea74u: goto label_1cea74;
        case 0x1cea78u: goto label_1cea78;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1cea80u: goto label_1cea80;
        case 0x1cea84u: goto label_1cea84;
        case 0x1cea88u: goto label_1cea88;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1cea90u: goto label_1cea90;
        case 0x1cea94u: goto label_1cea94;
        case 0x1cea98u: goto label_1cea98;
        case 0x1cea9cu: goto label_1cea9c;
        case 0x1ceaa0u: goto label_1ceaa0;
        case 0x1ceaa4u: goto label_1ceaa4;
        case 0x1ceaa8u: goto label_1ceaa8;
        case 0x1ceaacu: goto label_1ceaac;
        case 0x1ceab0u: goto label_1ceab0;
        case 0x1ceab4u: goto label_1ceab4;
        case 0x1ceab8u: goto label_1ceab8;
        case 0x1ceabcu: goto label_1ceabc;
        case 0x1ceac0u: goto label_1ceac0;
        case 0x1ceac4u: goto label_1ceac4;
        case 0x1ceac8u: goto label_1ceac8;
        case 0x1ceaccu: goto label_1ceacc;
        case 0x1cead0u: goto label_1cead0;
        case 0x1cead4u: goto label_1cead4;
        case 0x1cead8u: goto label_1cead8;
        case 0x1ceadcu: goto label_1ceadc;
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceae4u: goto label_1ceae4;
        case 0x1ceae8u: goto label_1ceae8;
        case 0x1ceaecu: goto label_1ceaec;
        case 0x1ceaf0u: goto label_1ceaf0;
        case 0x1ceaf4u: goto label_1ceaf4;
        case 0x1ceaf8u: goto label_1ceaf8;
        case 0x1ceafcu: goto label_1ceafc;
        case 0x1ceb00u: goto label_1ceb00;
        case 0x1ceb04u: goto label_1ceb04;
        case 0x1ceb08u: goto label_1ceb08;
        case 0x1ceb0cu: goto label_1ceb0c;
        case 0x1ceb10u: goto label_1ceb10;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb18u: goto label_1ceb18;
        case 0x1ceb1cu: goto label_1ceb1c;
        case 0x1ceb20u: goto label_1ceb20;
        case 0x1ceb24u: goto label_1ceb24;
        case 0x1ceb28u: goto label_1ceb28;
        case 0x1ceb2cu: goto label_1ceb2c;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1ceb34u: goto label_1ceb34;
        case 0x1ceb38u: goto label_1ceb38;
        case 0x1ceb3cu: goto label_1ceb3c;
        case 0x1ceb40u: goto label_1ceb40;
        case 0x1ceb44u: goto label_1ceb44;
        case 0x1ceb48u: goto label_1ceb48;
        case 0x1ceb4cu: goto label_1ceb4c;
        case 0x1ceb50u: goto label_1ceb50;
        case 0x1ceb54u: goto label_1ceb54;
        case 0x1ceb58u: goto label_1ceb58;
        case 0x1ceb5cu: goto label_1ceb5c;
        case 0x1ceb60u: goto label_1ceb60;
        case 0x1ceb64u: goto label_1ceb64;
        case 0x1ceb68u: goto label_1ceb68;
        case 0x1ceb6cu: goto label_1ceb6c;
        case 0x1ceb70u: goto label_1ceb70;
        case 0x1ceb74u: goto label_1ceb74;
        case 0x1ceb78u: goto label_1ceb78;
        case 0x1ceb7cu: goto label_1ceb7c;
        case 0x1ceb80u: goto label_1ceb80;
        case 0x1ceb84u: goto label_1ceb84;
        case 0x1ceb88u: goto label_1ceb88;
        case 0x1ceb8cu: goto label_1ceb8c;
        case 0x1ceb90u: goto label_1ceb90;
        case 0x1ceb94u: goto label_1ceb94;
        case 0x1ceb98u: goto label_1ceb98;
        case 0x1ceb9cu: goto label_1ceb9c;
        case 0x1ceba0u: goto label_1ceba0;
        case 0x1ceba4u: goto label_1ceba4;
        case 0x1ceba8u: goto label_1ceba8;
        case 0x1cebacu: goto label_1cebac;
        case 0x1cebb0u: goto label_1cebb0;
        case 0x1cebb4u: goto label_1cebb4;
        case 0x1cebb8u: goto label_1cebb8;
        case 0x1cebbcu: goto label_1cebbc;
        case 0x1cebc0u: goto label_1cebc0;
        case 0x1cebc4u: goto label_1cebc4;
        case 0x1cebc8u: goto label_1cebc8;
        case 0x1cebccu: goto label_1cebcc;
        case 0x1cebd0u: goto label_1cebd0;
        case 0x1cebd4u: goto label_1cebd4;
        case 0x1cebd8u: goto label_1cebd8;
        case 0x1cebdcu: goto label_1cebdc;
        case 0x1cebe0u: goto label_1cebe0;
        case 0x1cebe4u: goto label_1cebe4;
        case 0x1cebe8u: goto label_1cebe8;
        case 0x1cebecu: goto label_1cebec;
        case 0x1cebf0u: goto label_1cebf0;
        case 0x1cebf4u: goto label_1cebf4;
        case 0x1cebf8u: goto label_1cebf8;
        case 0x1cebfcu: goto label_1cebfc;
        case 0x1cec00u: goto label_1cec00;
        case 0x1cec04u: goto label_1cec04;
        case 0x1cec08u: goto label_1cec08;
        case 0x1cec0cu: goto label_1cec0c;
        case 0x1cec10u: goto label_1cec10;
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec18u: goto label_1cec18;
        case 0x1cec1cu: goto label_1cec1c;
        case 0x1cec20u: goto label_1cec20;
        case 0x1cec24u: goto label_1cec24;
        case 0x1cec28u: goto label_1cec28;
        case 0x1cec2cu: goto label_1cec2c;
        case 0x1cec30u: goto label_1cec30;
        case 0x1cec34u: goto label_1cec34;
        case 0x1cec38u: goto label_1cec38;
        case 0x1cec3cu: goto label_1cec3c;
        default: return;
    }

label_1ce470:
    // 0x1ce470: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ce474:
    // 0x1ce474: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce478:
    if (ctx->pc == 0x1CE478u) {
        ctx->pc = 0x1CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE474u;
        // 0x1ce478: 0xa20302e8  sb          $v1, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE47Cu;
        goto label_1ce47c;
    }
    ctx->pc = 0x1CE474u;
    {
        const bool branch_taken_0x1ce474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE474u;
        // 0x1ce478: 0xa20302e8  sb          $v1, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce474) {
            ctx->pc = 0x1CE498u;
            goto label_1ce498;
        }
    }
    ctx->pc = 0x1CE47Cu;
label_1ce47c:
    // 0x1ce47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ce480:
    // 0x1ce480: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1ce484:
    // 0x1ce484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ce488:
    // 0x1ce488: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ce48c:
    // 0x1ce48c: 0x0  nop
    ctx->pc = 0x1ce48cu;
    // NOP
label_1ce490:
    // 0x1ce490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ce490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ce494:
    // 0x1ce494: 0xa20302e8  sb          $v1, 0x2E8($s0)
    ctx->pc = 0x1ce494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 3));
label_1ce498:
    // 0x1ce498: 0xc071740  jal         func_1C5D00
label_1ce49c:
    if (ctx->pc == 0x1CE49Cu) {
        ctx->pc = 0x1CE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE498u;
        // 0x1ce49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4A0u;
        goto label_1ce4a0;
    }
    ctx->pc = 0x1CE498u;
    SET_GPR_U32(ctx, 31, 0x1CE4A0u);
    ctx->pc = 0x1CE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE498u;
    // 0x1ce49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CE4A0u;
label_1ce4a0:
    // 0x1ce4a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce4a4:
    // 0x1ce4a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ce4a8:
    // 0x1ce4a8: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x1ce4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
label_1ce4ac:
    // 0x1ce4ac: 0xc07e7cc  jal         func_1F9F30
label_1ce4b0:
    if (ctx->pc == 0x1CE4B0u) {
        ctx->pc = 0x1CE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4ACu;
        // 0x1ce4b0: 0xa21102e4  sb          $s1, 0x2E4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4B4u;
        goto label_1ce4b4;
    }
    ctx->pc = 0x1CE4ACu;
    SET_GPR_U32(ctx, 31, 0x1CE4B4u);
    ctx->pc = 0x1CE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4ACu;
    // 0x1ce4b0: 0xa21102e4  sb          $s1, 0x2E4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F30u;
    { ctx->pc = 0x1f9f30; return; }
    ctx->pc = 0x1CE4B4u;
label_1ce4b4:
    // 0x1ce4b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ce4b8:
    // 0x1ce4b8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ce4bc:
    // 0x1ce4bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_1ce4c0:
    if (ctx->pc == 0x1CE4C0u) {
        ctx->pc = 0x1CE4C4u;
        goto label_1ce4c4;
    }
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4C4u;
label_1ce4c4:
    // 0x1ce4c4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ce4c8:
    // 0x1ce4c8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ce4cc:
    if (ctx->pc == 0x1CE4CCu) {
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4D0u;
        goto label_1ce4d0;
    }
    ctx->pc = 0x1CE4C8u;
    {
        const bool branch_taken_0x1ce4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c8) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4D0u;
label_1ce4d0:
    // 0x1ce4d0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_1ce4d4:
    if (ctx->pc == 0x1CE4D4u) {
        ctx->pc = 0x1CE4D8u;
        goto label_1ce4d8;
    }
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4D8u;
label_1ce4d8:
    // 0x1ce4d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ce4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ce4dc:
    // 0x1ce4dc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1ce4e0:
    if (ctx->pc == 0x1CE4E0u) {
        ctx->pc = 0x1CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4DCu;
        // 0x1ce4e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4E4u;
        goto label_1ce4e4;
    }
    ctx->pc = 0x1CE4DCu;
    {
        const bool branch_taken_0x1ce4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4DCu;
        // 0x1ce4e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4dc) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4E4u;
label_1ce4e4:
    // 0x1ce4e4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1ce4e8:
    if (ctx->pc == 0x1CE4E8u) {
        ctx->pc = 0x1CE4ECu;
        goto label_1ce4ec;
    }
    ctx->pc = 0x1CE4E4u;
    {
        const bool branch_taken_0x1ce4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4e4) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4ECu;
label_1ce4ec:
    // 0x1ce4ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ce4f0:
    // 0x1ce4f0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1ce4f4:
    if (ctx->pc == 0x1CE4F4u) {
        ctx->pc = 0x1CE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4F0u;
        // 0x1ce4f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4F8u;
        goto label_1ce4f8;
    }
    ctx->pc = 0x1CE4F0u;
    {
        const bool branch_taken_0x1ce4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4F0u;
        // 0x1ce4f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4f0) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4F8u;
label_1ce4f8:
    // 0x1ce4f8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1ce4fc:
    if (ctx->pc == 0x1CE4FCu) {
        ctx->pc = 0x1CE500u;
        goto label_1ce500;
    }
    ctx->pc = 0x1CE4F8u;
    {
        const bool branch_taken_0x1ce4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4f8) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE500u;
label_1ce500:
    // 0x1ce500: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ce504:
    // 0x1ce504: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1ce508:
    if (ctx->pc == 0x1CE508u) {
        ctx->pc = 0x1CE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE504u;
        // 0x1ce508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE50Cu;
        goto label_1ce50c;
    }
    ctx->pc = 0x1CE504u;
    {
        const bool branch_taken_0x1ce504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE504u;
        // 0x1ce508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce504) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE50Cu;
label_1ce50c:
    // 0x1ce50c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1ce510:
    if (ctx->pc == 0x1CE510u) {
        ctx->pc = 0x1CE514u;
        goto label_1ce514;
    }
    ctx->pc = 0x1CE50Cu;
    {
        const bool branch_taken_0x1ce50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce50c) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE514u;
label_1ce514:
    // 0x1ce514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce518:
    // 0x1ce518: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ce51c:
    if (ctx->pc == 0x1CE51Cu) {
        ctx->pc = 0x1CE520u;
        goto label_1ce520;
    }
    ctx->pc = 0x1CE518u;
    {
        const bool branch_taken_0x1ce518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce518) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE520u;
label_1ce520:
    // 0x1ce520: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1ce524:
    if (ctx->pc == 0x1CE524u) {
        ctx->pc = 0x1CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE520u;
        // 0x1ce524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE528u;
        goto label_1ce528;
    }
    ctx->pc = 0x1CE520u;
    {
        const bool branch_taken_0x1ce520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE520u;
        // 0x1ce524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce520) {
            ctx->pc = 0x1CE58Cu;
            goto label_1ce58c;
        }
    }
    ctx->pc = 0x1CE528u;
label_1ce528:
    // 0x1ce528: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1ce52c:
    // 0x1ce52c: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_1ce530:
    // 0x1ce530: 0xae0302d0  sw          $v1, 0x2D0($s0)
    ctx->pc = 0x1ce530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
label_1ce534:
    // 0x1ce534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ce538:
    // 0x1ce538: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x1ce538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
label_1ce53c:
    // 0x1ce53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce540:
    // 0x1ce540: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ce540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1ce544:
    // 0x1ce544: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ce544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce548:
    // 0x1ce548: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x1ce548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_1ce54c:
    // 0x1ce54c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce550:
    // 0x1ce550: 0xc071400  jal         func_1C5000
label_1ce554:
    if (ctx->pc == 0x1CE554u) {
        ctx->pc = 0x1CE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE550u;
        // 0x1ce554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE558u;
        goto label_1ce558;
    }
    ctx->pc = 0x1CE550u;
    SET_GPR_U32(ctx, 31, 0x1CE558u);
    ctx->pc = 0x1CE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE550u;
    // 0x1ce554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1CE558u;
label_1ce558:
    // 0x1ce558: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ce55c:
    if (ctx->pc == 0x1CE55Cu) {
        ctx->pc = 0x1CE560u;
        goto label_1ce560;
    }
    ctx->pc = 0x1CE558u;
    {
        const bool branch_taken_0x1ce558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce558) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE560u;
label_1ce560:
    // 0x1ce560: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1ce564:
    // 0x1ce564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ce568:
    if (ctx->pc == 0x1CE568u) {
        ctx->pc = 0x1CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE564u;
        // 0x1ce568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE56Cu;
        goto label_1ce56c;
    }
    ctx->pc = 0x1CE564u;
    {
        const bool branch_taken_0x1ce564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE564u;
        // 0x1ce568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce564) {
            ctx->pc = 0x1CE588u;
            goto label_1ce588;
        }
    }
    ctx->pc = 0x1CE56Cu;
label_1ce56c:
    // 0x1ce56c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1ce56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ce570:
    // 0x1ce570: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1ce574:
    // 0x1ce574: 0x24070069  addiu       $a3, $zero, 0x69
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1ce578:
    // 0x1ce578: 0xc071400  jal         func_1C5000
label_1ce57c:
    if (ctx->pc == 0x1CE57Cu) {
        ctx->pc = 0x1CE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE578u;
        // 0x1ce57c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE580u;
        goto label_1ce580;
    }
    ctx->pc = 0x1CE578u;
    SET_GPR_U32(ctx, 31, 0x1CE580u);
    ctx->pc = 0x1CE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE578u;
    // 0x1ce57c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1CE580u;
label_1ce580:
    // 0x1ce580: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ce584:
    if (ctx->pc == 0x1CE584u) {
        ctx->pc = 0x1CE588u;
        goto label_1ce588;
    }
    ctx->pc = 0x1CE580u;
    {
        const bool branch_taken_0x1ce580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce580) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE588u;
label_1ce588:
    // 0x1ce588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce58c:
    // 0x1ce58c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x1ce58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_1ce590:
    // 0x1ce590: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_1ce594:
    // 0x1ce594: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x1ce594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1ce598:
    // 0x1ce598: 0xc071400  jal         func_1C5000
label_1ce59c:
    if (ctx->pc == 0x1CE59Cu) {
        ctx->pc = 0x1CE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE598u;
        // 0x1ce59c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5A0u;
        goto label_1ce5a0;
    }
    ctx->pc = 0x1CE598u;
    SET_GPR_U32(ctx, 31, 0x1CE5A0u);
    ctx->pc = 0x1CE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE598u;
    // 0x1ce59c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1CE5A0u;
label_1ce5a0:
    // 0x1ce5a0: 0xc08f0cc  jal         func_23C330
label_1ce5a4:
    if (ctx->pc == 0x1CE5A4u) {
        ctx->pc = 0x1CE5A8u;
        goto label_1ce5a8;
    }
    ctx->pc = 0x1CE5A0u;
    SET_GPR_U32(ctx, 31, 0x1CE5A8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CE5A8u;
label_1ce5a8:
    // 0x1ce5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce5ac:
    // 0x1ce5ac: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1ce5b0:
    // 0x1ce5b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ce5b4:
    // 0x1ce5b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ce5b8:
    // 0x1ce5b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ce5bc:
    // 0x1ce5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce5c0:
    // 0x1ce5c0: 0x0  nop
    ctx->pc = 0x1ce5c0u;
    // NOP
label_1ce5c4:
    // 0x1ce5c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ce5c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1ce5c8:
    // 0x1ce5c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ce5cc:
    // 0x1ce5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ce5d0:
    // 0x1ce5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce5d4:
    // 0x1ce5d4: 0x0  nop
    ctx->pc = 0x1ce5d4u;
    // NOP
label_1ce5d8:
    // 0x1ce5d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ce5dc:
    // 0x1ce5dc: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1ce5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1ce5e0:
    // 0x1ce5e0: 0xc066e26  jal         func_19B898
label_1ce5e4:
    if (ctx->pc == 0x1CE5E4u) {
        ctx->pc = 0x1CE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5E0u;
        // 0x1ce5e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5E8u;
        goto label_1ce5e8;
    }
    ctx->pc = 0x1CE5E0u;
    SET_GPR_U32(ctx, 31, 0x1CE5E8u);
    ctx->pc = 0x1CE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5E0u;
    // 0x1ce5e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CE5E8u;
label_1ce5e8:
    // 0x1ce5e8: 0x3c023fac  lui         $v0, 0x3FAC
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16300 << 16));
label_1ce5ec:
    // 0x1ce5ec: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1ce5f0:
    // 0x1ce5f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1ce5f4:
    // 0x1ce5f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ce5f8:
    // 0x1ce5f8: 0xc066e14  jal         func_19B850
label_1ce5fc:
    if (ctx->pc == 0x1CE5FCu) {
        ctx->pc = 0x1CE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5F8u;
        // 0x1ce5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE600u;
        goto label_1ce600;
    }
    ctx->pc = 0x1CE5F8u;
    SET_GPR_U32(ctx, 31, 0x1CE600u);
    ctx->pc = 0x1CE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5F8u;
    // 0x1ce5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CE600u;
label_1ce600:
    // 0x1ce600: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1ce604:
    // 0x1ce604: 0x2463e620  addiu       $v1, $v1, -0x19E0
    ctx->pc = 0x1ce604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960672));
label_1ce608:
    // 0x1ce608: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1ce608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1ce60c:
    // 0x1ce60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce610:
    // 0x1ce610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce614:
    // 0x1ce614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce618:
    // 0x1ce618: 0x3e00008  jr          $ra
label_1ce61c:
    if (ctx->pc == 0x1CE61Cu) {
        ctx->pc = 0x1CE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE618u;
        // 0x1ce61c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE620u;
        goto label_1ce620;
    }
    ctx->pc = 0x1CE618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE618u;
        // 0x1ce61c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE620u;
label_1ce620:
    // 0x1ce620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ce624:
    // 0x1ce624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ce628:
    // 0x1ce628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce62c:
    // 0x1ce62c: 0x948202e6  lhu         $v0, 0x2E6($a0)
    ctx->pc = 0x1ce62cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
label_1ce630:
    // 0x1ce630: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x1ce630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_1ce634:
    // 0x1ce634: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1ce638:
    if (ctx->pc == 0x1CE638u) {
        ctx->pc = 0x1CE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE634u;
        // 0x1ce638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE63Cu;
        goto label_1ce63c;
    }
    ctx->pc = 0x1CE634u;
    {
        const bool branch_taken_0x1ce634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE634u;
        // 0x1ce638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce634) {
            ctx->pc = 0x1CE64Cu;
            goto label_1ce64c;
        }
    }
    ctx->pc = 0x1CE63Cu;
label_1ce63c:
    // 0x1ce63c: 0xc0591f4  jal         func_1647D0
label_1ce640:
    if (ctx->pc == 0x1CE640u) {
        ctx->pc = 0x1CE644u;
        goto label_1ce644;
    }
    ctx->pc = 0x1CE63Cu;
    SET_GPR_U32(ctx, 31, 0x1CE644u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CE63Cu, 0x1CE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE644u;
label_1ce644:
    // 0x1ce644: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1ce648:
    if (ctx->pc == 0x1CE648u) {
        ctx->pc = 0x1CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE644u;
        // 0x1ce648: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE64Cu;
        goto label_1ce64c;
    }
    ctx->pc = 0x1CE644u;
    {
        const bool branch_taken_0x1ce644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE644u;
        // 0x1ce648: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce644) {
            ctx->pc = 0x1CE7FCu;
            goto label_1ce7fc;
        }
    }
    ctx->pc = 0x1CE64Cu;
label_1ce64c:
    // 0x1ce64c: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1ce64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ce650:
    // 0x1ce650: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ce654:
    if (ctx->pc == 0x1CE654u) {
        ctx->pc = 0x1CE658u;
        goto label_1ce658;
    }
    ctx->pc = 0x1CE650u;
    {
        const bool branch_taken_0x1ce650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce650) {
            ctx->pc = 0x1CE670u;
            goto label_1ce670;
        }
    }
    ctx->pc = 0x1CE658u;
label_1ce658:
    // 0x1ce658: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1ce658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce65c:
    // 0x1ce65c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ce660:
    // 0x1ce660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce664:
    // 0x1ce664: 0x0  nop
    ctx->pc = 0x1ce664u;
    // NOP
label_1ce668:
    // 0x1ce668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ce66c:
    // 0x1ce66c: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1ce66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_1ce670:
    // 0x1ce670: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1ce670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce674:
    // 0x1ce674: 0x28410037  slti        $at, $v0, 0x37
    ctx->pc = 0x1ce674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)55) ? 1 : 0);
label_1ce678:
    // 0x1ce678: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1ce67c:
    if (ctx->pc == 0x1CE67Cu) {
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0x3c023f86  lui         $v0, 0x3F86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE680u;
        goto label_1ce680;
    }
    ctx->pc = 0x1CE678u;
    {
        const bool branch_taken_0x1ce678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0x3c023f86  lui         $v0, 0x3F86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce678) {
            ctx->pc = 0x1CE694u;
            goto label_1ce694;
        }
    }
    ctx->pc = 0x1CE680u;
label_1ce680:
    // 0x1ce680: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1ce684:
    // 0x1ce684: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1ce688:
    // 0x1ce688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ce68c:
    // 0x1ce68c: 0xc066e14  jal         func_19B850
label_1ce690:
    if (ctx->pc == 0x1CE690u) {
        ctx->pc = 0x1CE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE68Cu;
        // 0x1ce690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE694u;
        goto label_1ce694;
    }
    ctx->pc = 0x1CE68Cu;
    SET_GPR_U32(ctx, 31, 0x1CE694u);
    ctx->pc = 0x1CE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE68Cu;
    // 0x1ce690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CE694u;
label_1ce694:
    // 0x1ce694: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1ce694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce698:
    // 0x1ce698: 0x28410043  slti        $at, $v0, 0x43
    ctx->pc = 0x1ce698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)67) ? 1 : 0);
label_1ce69c:
    // 0x1ce69c: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1ce6a0:
    if (ctx->pc == 0x1CE6A0u) {
        ctx->pc = 0x1CE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE69Cu;
        // 0x1ce6a0: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6A4u;
        goto label_1ce6a4;
    }
    ctx->pc = 0x1CE69Cu;
    {
        const bool branch_taken_0x1ce69c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE69Cu;
        // 0x1ce6a0: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce69c) {
            ctx->pc = 0x1CE6F4u;
            goto label_1ce6f4;
        }
    }
    ctx->pc = 0x1CE6A4u;
label_1ce6a4:
    // 0x1ce6a4: 0xc071740  jal         func_1C5D00
label_1ce6a8:
    if (ctx->pc == 0x1CE6A8u) {
        ctx->pc = 0x1CE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6A4u;
        // 0x1ce6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6ACu;
        goto label_1ce6ac;
    }
    ctx->pc = 0x1CE6A4u;
    SET_GPR_U32(ctx, 31, 0x1CE6ACu);
    ctx->pc = 0x1CE6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6A4u;
    // 0x1ce6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CE6ACu;
label_1ce6ac:
    // 0x1ce6ac: 0xc071728  jal         func_1C5CA0
label_1ce6b0:
    if (ctx->pc == 0x1CE6B0u) {
        ctx->pc = 0x1CE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6ACu;
        // 0x1ce6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6B4u;
        goto label_1ce6b4;
    }
    ctx->pc = 0x1CE6ACu;
    SET_GPR_U32(ctx, 31, 0x1CE6B4u);
    ctx->pc = 0x1CE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6ACu;
    // 0x1ce6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CE6B4u;
label_1ce6b4:
    // 0x1ce6b4: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x1ce6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce6b8:
    // 0x1ce6b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ce6bc:
    // 0x1ce6bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce6c0:
    // 0x1ce6c0: 0x0  nop
    ctx->pc = 0x1ce6c0u;
    // NOP
label_1ce6c4:
    // 0x1ce6c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce6c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce6c8:
    // 0x1ce6c8: 0x0  nop
    ctx->pc = 0x1ce6c8u;
    // NOP
label_1ce6cc:
    // 0x1ce6cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1ce6d0:
    if (ctx->pc == 0x1CE6D0u) {
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6D4u;
        goto label_1ce6d4;
    }
    ctx->pc = 0x1CE6CCu;
    {
        const bool branch_taken_0x1ce6cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6cc) {
            ctx->pc = 0x1CE6E0u;
            goto label_1ce6e0;
        }
    }
    ctx->pc = 0x1CE6D4u;
label_1ce6d4:
    // 0x1ce6d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce6d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ce6d8:
    // 0x1ce6d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ce6dc:
    if (ctx->pc == 0x1CE6DCu) {
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6D8u;
        // 0x1ce6dc: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6E0u;
        goto label_1ce6e0;
    }
    ctx->pc = 0x1CE6D8u;
    {
        const bool branch_taken_0x1ce6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6D8u;
        // 0x1ce6dc: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6d8) {
            ctx->pc = 0x1CE6F0u;
            goto label_1ce6f0;
        }
    }
    ctx->pc = 0x1CE6E0u;
label_1ce6e0:
    // 0x1ce6e0: 0xc0591f4  jal         func_1647D0
label_1ce6e4:
    if (ctx->pc == 0x1CE6E4u) {
        ctx->pc = 0x1CE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6E0u;
        // 0x1ce6e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6E8u;
        goto label_1ce6e8;
    }
    ctx->pc = 0x1CE6E0u;
    SET_GPR_U32(ctx, 31, 0x1CE6E8u);
    ctx->pc = 0x1CE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6E0u;
    // 0x1ce6e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CE6E0u, 0x1CE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6E8u;
label_1ce6e8:
    // 0x1ce6e8: 0x10000043  b           . + 4 + (0x43 << 2)
label_1ce6ec:
    if (ctx->pc == 0x1CE6ECu) {
        ctx->pc = 0x1CE6F0u;
        goto label_1ce6f0;
    }
    ctx->pc = 0x1CE6E8u;
    {
        const bool branch_taken_0x1ce6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6e8) {
            ctx->pc = 0x1CE7F8u;
            goto label_1ce7f8;
        }
    }
    ctx->pc = 0x1CE6F0u;
label_1ce6f0:
    // 0x1ce6f0: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1ce6f4:
    // 0x1ce6f4: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x1ce6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1ce6f8:
    // 0x1ce6f8: 0xc066e02  jal         func_19B808
label_1ce6fc:
    if (ctx->pc == 0x1CE6FCu) {
        ctx->pc = 0x1CE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F8u;
        // 0x1ce6fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE700u;
        goto label_1ce700;
    }
    ctx->pc = 0x1CE6F8u;
    SET_GPR_U32(ctx, 31, 0x1CE700u);
    ctx->pc = 0x1CE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6F8u;
    // 0x1ce6fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CE700u;
label_1ce700:
    // 0x1ce700: 0x920402e4  lbu         $a0, 0x2E4($s0)
    ctx->pc = 0x1ce700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
label_1ce704:
    // 0x1ce704: 0xc06468c  jal         func_191A30
label_1ce708:
    if (ctx->pc == 0x1CE708u) {
        ctx->pc = 0x1CE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE704u;
        // 0x1ce708: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE70Cu;
        goto label_1ce70c;
    }
    ctx->pc = 0x1CE704u;
    SET_GPR_U32(ctx, 31, 0x1CE70Cu);
    ctx->pc = 0x1CE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE704u;
    // 0x1ce708: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x1CE70Cu;
label_1ce70c:
    // 0x1ce70c: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1ce710:
    // 0x1ce710: 0xc0646f8  jal         func_191BE0
label_1ce714:
    if (ctx->pc == 0x1CE714u) {
        ctx->pc = 0x1CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE710u;
        // 0x1ce714: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE718u;
        goto label_1ce718;
    }
    ctx->pc = 0x1CE710u;
    SET_GPR_U32(ctx, 31, 0x1CE718u);
    ctx->pc = 0x1CE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE710u;
    // 0x1ce714: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    { ctx->pc = 0x191be0; return; }
    ctx->pc = 0x1CE718u;
label_1ce718:
    // 0x1ce718: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1ce71c:
    // 0x1ce71c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce720:
    // 0x1ce720: 0x0  nop
    ctx->pc = 0x1ce720u;
    // NOP
label_1ce724:
    // 0x1ce724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce728:
    // 0x1ce728: 0x0  nop
    ctx->pc = 0x1ce728u;
    // NOP
label_1ce72c:
    // 0x1ce72c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1ce730:
    if (ctx->pc == 0x1CE730u) {
        ctx->pc = 0x1CE734u;
        goto label_1ce734;
    }
    ctx->pc = 0x1CE72Cu;
    {
        const bool branch_taken_0x1ce72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce72c) {
            ctx->pc = 0x1CE7A0u;
            goto label_1ce7a0;
        }
    }
    ctx->pc = 0x1CE734u;
label_1ce734:
    // 0x1ce734: 0xc6030300  lwc1        $f3, 0x300($s0)
    ctx->pc = 0x1ce734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ce738:
    // 0x1ce738: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
label_1ce73c:
    // 0x1ce73c: 0x346437bd  ori         $a0, $v1, 0x37BD
    ctx->pc = 0x1ce73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
label_1ce740:
    // 0x1ce740: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ce744:
    // 0x1ce744: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ce744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ce748:
    // 0x1ce748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce74c:
    // 0x1ce74c: 0x0  nop
    ctx->pc = 0x1ce74cu;
    // NOP
label_1ce750:
    // 0x1ce750: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ce750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ce754:
    // 0x1ce754: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ce754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ce758:
    // 0x1ce758: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ce758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ce75c:
    // 0x1ce75c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce75cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce760:
    // 0x1ce760: 0x0  nop
    ctx->pc = 0x1ce760u;
    // NOP
label_1ce764:
    // 0x1ce764: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ce768:
    if (ctx->pc == 0x1CE768u) {
        ctx->pc = 0x1CE76Cu;
        goto label_1ce76c;
    }
    ctx->pc = 0x1CE764u;
    {
        const bool branch_taken_0x1ce764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce764) {
            ctx->pc = 0x1CE77Cu;
            goto label_1ce77c;
        }
    }
    ctx->pc = 0x1CE76Cu;
label_1ce76c:
    // 0x1ce76c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ce770:
    // 0x1ce770: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ce770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce774:
    // 0x1ce774: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce778:
    if (ctx->pc == 0x1CE778u) {
        ctx->pc = 0x1CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE774u;
        // 0x1ce778: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE77Cu;
        goto label_1ce77c;
    }
    ctx->pc = 0x1CE774u;
    {
        const bool branch_taken_0x1ce774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE774u;
        // 0x1ce778: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce774) {
            ctx->pc = 0x1CE798u;
            goto label_1ce798;
        }
    }
    ctx->pc = 0x1CE77Cu;
label_1ce77c:
    // 0x1ce77c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ce780:
    // 0x1ce780: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ce784:
    // 0x1ce784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ce788:
    // 0x1ce788: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ce788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce78c:
    // 0x1ce78c: 0x0  nop
    ctx->pc = 0x1ce78cu;
    // NOP
label_1ce790:
    // 0x1ce790: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ce794:
    // 0x1ce794: 0xa20402e3  sb          $a0, 0x2E3($s0)
    ctx->pc = 0x1ce794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
label_1ce798:
    // 0x1ce798: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ce79c:
    if (ctx->pc == 0x1CE79Cu) {
        ctx->pc = 0x1CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE798u;
        // 0x1ce79c: 0x960302e6  lhu         $v1, 0x2E6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7A0u;
        goto label_1ce7a0;
    }
    ctx->pc = 0x1CE798u;
    {
        const bool branch_taken_0x1ce798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE798u;
        // 0x1ce79c: 0x960302e6  lhu         $v1, 0x2E6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce798) {
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE7A0u;
label_1ce7a0:
    // 0x1ce7a0: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1ce7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce7a4:
    // 0x1ce7a4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ce7a8:
    // 0x1ce7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce7ac:
    // 0x1ce7ac: 0x0  nop
    ctx->pc = 0x1ce7acu;
    // NOP
label_1ce7b0:
    // 0x1ce7b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce7b4:
    // 0x1ce7b4: 0x0  nop
    ctx->pc = 0x1ce7b4u;
    // NOP
label_1ce7b8:
    // 0x1ce7b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ce7bc:
    if (ctx->pc == 0x1CE7BCu) {
        ctx->pc = 0x1CE7C0u;
        goto label_1ce7c0;
    }
    ctx->pc = 0x1CE7B8u;
    {
        const bool branch_taken_0x1ce7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce7b8) {
            ctx->pc = 0x1CE7D0u;
            goto label_1ce7d0;
        }
    }
    ctx->pc = 0x1CE7C0u;
label_1ce7c0:
    // 0x1ce7c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce7c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce7c4:
    // 0x1ce7c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce7c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce7c8:
    // 0x1ce7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce7cc:
    if (ctx->pc == 0x1CE7CCu) {
        ctx->pc = 0x1CE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7C8u;
        // 0x1ce7cc: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7D0u;
        goto label_1ce7d0;
    }
    ctx->pc = 0x1CE7C8u;
    {
        const bool branch_taken_0x1ce7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7C8u;
        // 0x1ce7cc: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7c8) {
            ctx->pc = 0x1CE7ECu;
            goto label_1ce7ec;
        }
    }
    ctx->pc = 0x1CE7D0u;
label_1ce7d0:
    // 0x1ce7d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce7d4:
    // 0x1ce7d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ce7d8:
    // 0x1ce7d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce7dc:
    // 0x1ce7dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce7e0:
    // 0x1ce7e0: 0x0  nop
    ctx->pc = 0x1ce7e0u;
    // NOP
label_1ce7e4:
    // 0x1ce7e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ce7e8:
    // 0x1ce7e8: 0xa20402e3  sb          $a0, 0x2E3($s0)
    ctx->pc = 0x1ce7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
label_1ce7ec:
    // 0x1ce7ec: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1ce7ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce7f0:
    // 0x1ce7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ce7f4:
    // 0x1ce7f4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1ce7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1ce7f8:
    // 0x1ce7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce7fc:
    // 0x1ce7fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce800:
    // 0x1ce800: 0x3e00008  jr          $ra
label_1ce804:
    if (ctx->pc == 0x1CE804u) {
        ctx->pc = 0x1CE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE800u;
        // 0x1ce804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE808u;
        goto label_1ce808;
    }
    ctx->pc = 0x1CE800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE800u;
        // 0x1ce804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE808u;
label_1ce808:
    // 0x1ce808: 0x0  nop
    ctx->pc = 0x1ce808u;
    // NOP
label_1ce80c:
    // 0x1ce80c: 0x0  nop
    ctx->pc = 0x1ce80cu;
    // NOP
label_1ce810:
    // 0x1ce810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ce814:
    // 0x1ce814: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ce818:
    // 0x1ce818: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ce818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ce81c:
    // 0x1ce81c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce820:
    // 0x1ce820: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ce820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ce824:
    // 0x1ce824: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ce824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1ce828:
    // 0x1ce828: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ce828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ce82c:
    // 0x1ce82c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ce830:
    // 0x1ce830: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ce830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ce834:
    // 0x1ce834: 0x34463ffc  ori         $a2, $v0, 0x3FFC
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1ce838:
    // 0x1ce838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ce838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ce83c:
    // 0x1ce83c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1ce83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ce840:
    // 0x1ce840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ce840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ce844:
    // 0x1ce844: 0x240313a0  addiu       $v1, $zero, 0x13A0
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5024));
label_1ce848:
    // 0x1ce848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ce848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ce84c:
    // 0x1ce84c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ce850:
    // 0x1ce850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ce850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ce854:
    // 0x1ce854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ce858:
    // 0x1ce858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce85c:
    // 0x1ce85c: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x1ce85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_1ce860:
    // 0x1ce860: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce864:
    // 0x1ce864: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1ce864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1ce868:
    // 0x1ce868: 0x24a57a80  addiu       $a1, $a1, 0x7A80
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31360));
label_1ce86c:
    // 0x1ce86c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ce86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ce870:
    // 0x1ce870: 0x8ca22744  lw          $v0, 0x2744($a1)
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10052)));
label_1ce874:
    // 0x1ce874: 0x24b12740  addiu       $s1, $a1, 0x2740
    ctx->pc = 0x1ce874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
label_1ce878:
    // 0x1ce878: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1ce878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ce87c:
    // 0x1ce87c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ce880:
    // 0x1ce880: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ce884:
    // 0x1ce884: 0x964408f0  lhu         $a0, 0x8F0($s2)
    ctx->pc = 0x1ce884u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2288)));
label_1ce888:
    // 0x1ce888: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ce888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1ce88c:
    // 0x1ce88c: 0xa6440900  sh          $a0, 0x900($s2)
    ctx->pc = 0x1ce88cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2304), (uint16_t)GPR_U32(ctx, 4));
label_1ce890:
    // 0x1ce890: 0x864408e8  lh          $a0, 0x8E8($s2)
    ctx->pc = 0x1ce890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2280)));
label_1ce894:
    // 0x1ce894: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1ce898:
    // 0x1ce898: 0xa64408f8  sh          $a0, 0x8F8($s2)
    ctx->pc = 0x1ce898u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2296), (uint16_t)GPR_U32(ctx, 4));
label_1ce89c:
    // 0x1ce89c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ce8a0:
    // 0x1ce8a0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1ce8a4:
    if (ctx->pc == 0x1CE8A4u) {
        ctx->pc = 0x1CE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8A0u;
        // 0x1ce8a4: 0x26430910  addiu       $v1, $s2, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8A8u;
        goto label_1ce8a8;
    }
    ctx->pc = 0x1CE8A0u;
    {
        const bool branch_taken_0x1ce8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8A0u;
        // 0x1ce8a4: 0x26430910  addiu       $v1, $s2, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8a0) {
            ctx->pc = 0x1CE8E0u;
            goto label_1ce8e0;
        }
    }
    ctx->pc = 0x1CE8A8u;
label_1ce8a8:
    // 0x1ce8a8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ce8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1ce8ac:
    // 0x1ce8ac: 0x8424a1d0  lh          $a0, -0x5E30($at)
    ctx->pc = 0x1ce8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943184)));
label_1ce8b0:
    // 0x1ce8b0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ce8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce8b4:
    // 0x1ce8b4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ce8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1ce8b8:
    // 0x1ce8b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ce8bc:
    // 0x1ce8bc: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1ce8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1ce8c0:
    // 0x1ce8c0: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x1ce8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
label_1ce8c4:
    // 0x1ce8c4: 0x8424a1d0  lh          $a0, -0x5E30($at)
    ctx->pc = 0x1ce8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943184)));
label_1ce8c8:
    // 0x1ce8c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ce8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ce8cc:
    // 0x1ce8cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce8d0:
    // 0x1ce8d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ce8d4:
    // 0x1ce8d4: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1ce8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ce8d8:
    // 0x1ce8d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ce8dc:
    if (ctx->pc == 0x1CE8DCu) {
        ctx->pc = 0x1CE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D8u;
        // 0x1ce8dc: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8E0u;
        goto label_1ce8e0;
    }
    ctx->pc = 0x1CE8D8u;
    {
        const bool branch_taken_0x1ce8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D8u;
        // 0x1ce8dc: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8d8) {
            ctx->pc = 0x1CE914u;
            goto label_1ce914;
        }
    }
    ctx->pc = 0x1CE8E0u;
label_1ce8e0:
    // 0x1ce8e0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1ce8e4:
    // 0x1ce8e4: 0x8424a060  lh          $a0, -0x5FA0($at)
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
label_1ce8e8:
    // 0x1ce8e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce8ec:
    // 0x1ce8ec: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1ce8f0:
    // 0x1ce8f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ce8f4:
    // 0x1ce8f4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1ce8f8:
    // 0x1ce8f8: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x1ce8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
label_1ce8fc:
    // 0x1ce8fc: 0x8424a060  lh          $a0, -0x5FA0($at)
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
label_1ce900:
    // 0x1ce900: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ce904:
    // 0x1ce904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce908:
    // 0x1ce908: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ce90c:
    // 0x1ce90c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1ce90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ce910:
    // 0x1ce910: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x1ce910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
label_1ce914:
    // 0x1ce914: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1ce918:
    // 0x1ce918: 0x86430090  lh          $v1, 0x90($s2)
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
label_1ce91c:
    // 0x1ce91c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ce91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ce920:
    // 0x1ce920: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ce920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce924:
    // 0x1ce924: 0xa64200d8  sh          $v0, 0xD8($s2)
    ctx->pc = 0x1ce924u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_1ce928:
    // 0x1ce928: 0xa64200a8  sh          $v0, 0xA8($s2)
    ctx->pc = 0x1ce928u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 2));
label_1ce92c:
    // 0x1ce92c: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1ce930:
    // 0x1ce930: 0x86430230  lh          $v1, 0x230($s2)
    ctx->pc = 0x1ce930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 560)));
label_1ce934:
    // 0x1ce934: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ce938:
    // 0x1ce938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce93c:
    // 0x1ce93c: 0xa6420278  sh          $v0, 0x278($s2)
    ctx->pc = 0x1ce93cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 632), (uint16_t)GPR_U32(ctx, 2));
label_1ce940:
    // 0x1ce940: 0xa6420248  sh          $v0, 0x248($s2)
    ctx->pc = 0x1ce940u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 584), (uint16_t)GPR_U32(ctx, 2));
label_1ce944:
    // 0x1ce944: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ce948:
    // 0x1ce948: 0x28820064  slti        $v0, $a0, 0x64
    ctx->pc = 0x1ce948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_1ce94c:
    // 0x1ce94c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ce950:
    if (ctx->pc == 0x1CE950u) {
        ctx->pc = 0x1CE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE94Cu;
        // 0x1ce950: 0x264901b0  addiu       $t1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE954u;
        goto label_1ce954;
    }
    ctx->pc = 0x1CE94Cu;
    {
        const bool branch_taken_0x1ce94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE94Cu;
        // 0x1ce950: 0x264901b0  addiu       $t1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce94c) {
            ctx->pc = 0x1CE9C8u;
            goto label_1ce9c8;
        }
    }
    ctx->pc = 0x1CE954u;
label_1ce954:
    // 0x1ce954: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1ce954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ce958:
    // 0x1ce958: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ce95c:
    // 0x1ce95c: 0xa1220070  sb          $v0, 0x70($t1)
    ctx->pc = 0x1ce95cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 112), (uint8_t)GPR_U32(ctx, 2));
label_1ce960:
    // 0x1ce960: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x1ce960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1ce964:
    // 0x1ce964: 0xa1280071  sb          $t0, 0x71($t1)
    ctx->pc = 0x1ce964u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 113), (uint8_t)GPR_U32(ctx, 8));
label_1ce968:
    // 0x1ce968: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ce96c:
    // 0x1ce96c: 0xa1270072  sb          $a3, 0x72($t1)
    ctx->pc = 0x1ce96cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 114), (uint8_t)GPR_U32(ctx, 7));
label_1ce970:
    // 0x1ce970: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1ce974:
    // 0x1ce974: 0xa1260073  sb          $a2, 0x73($t1)
    ctx->pc = 0x1ce974u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 6));
label_1ce978:
    // 0x1ce978: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ce97c:
    // 0x1ce97c: 0xad250074  sw          $a1, 0x74($t1)
    ctx->pc = 0x1ce97cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 5));
label_1ce980:
    // 0x1ce980: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1ce984:
    // 0x1ce984: 0xa12200a0  sb          $v0, 0xA0($t1)
    ctx->pc = 0x1ce984u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 160), (uint8_t)GPR_U32(ctx, 2));
label_1ce988:
    // 0x1ce988: 0xa12800a1  sb          $t0, 0xA1($t1)
    ctx->pc = 0x1ce988u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 161), (uint8_t)GPR_U32(ctx, 8));
label_1ce98c:
    // 0x1ce98c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ce990:
    // 0x1ce990: 0xa12700a2  sb          $a3, 0xA2($t1)
    ctx->pc = 0x1ce990u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 162), (uint8_t)GPR_U32(ctx, 7));
label_1ce994:
    // 0x1ce994: 0xa12600a3  sb          $a2, 0xA3($t1)
    ctx->pc = 0x1ce994u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 163), (uint8_t)GPR_U32(ctx, 6));
label_1ce998:
    // 0x1ce998: 0xad2500a4  sw          $a1, 0xA4($t1)
    ctx->pc = 0x1ce998u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 5));
label_1ce99c:
    // 0x1ce99c: 0xa1240088  sb          $a0, 0x88($t1)
    ctx->pc = 0x1ce99cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 136), (uint8_t)GPR_U32(ctx, 4));
label_1ce9a0:
    // 0x1ce9a0: 0xa1230089  sb          $v1, 0x89($t1)
    ctx->pc = 0x1ce9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 137), (uint8_t)GPR_U32(ctx, 3));
label_1ce9a4:
    // 0x1ce9a4: 0xa122008a  sb          $v0, 0x8A($t1)
    ctx->pc = 0x1ce9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 138), (uint8_t)GPR_U32(ctx, 2));
label_1ce9a8:
    // 0x1ce9a8: 0xa126008b  sb          $a2, 0x8B($t1)
    ctx->pc = 0x1ce9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 139), (uint8_t)GPR_U32(ctx, 6));
label_1ce9ac:
    // 0x1ce9ac: 0xad25008c  sw          $a1, 0x8C($t1)
    ctx->pc = 0x1ce9acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 5));
label_1ce9b0:
    // 0x1ce9b0: 0xa12400b8  sb          $a0, 0xB8($t1)
    ctx->pc = 0x1ce9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 4));
label_1ce9b4:
    // 0x1ce9b4: 0xa12300b9  sb          $v1, 0xB9($t1)
    ctx->pc = 0x1ce9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 185), (uint8_t)GPR_U32(ctx, 3));
label_1ce9b8:
    // 0x1ce9b8: 0xa12200ba  sb          $v0, 0xBA($t1)
    ctx->pc = 0x1ce9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 186), (uint8_t)GPR_U32(ctx, 2));
label_1ce9bc:
    // 0x1ce9bc: 0xa12600bb  sb          $a2, 0xBB($t1)
    ctx->pc = 0x1ce9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 187), (uint8_t)GPR_U32(ctx, 6));
label_1ce9c0:
    // 0x1ce9c0: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_1ce9c4:
    if (ctx->pc == 0x1CE9C4u) {
        ctx->pc = 0x1CE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9C0u;
        // 0x1ce9c4: 0xad2500bc  sw          $a1, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9C8u;
        goto label_1ce9c8;
    }
    ctx->pc = 0x1CE9C0u;
    {
        const bool branch_taken_0x1ce9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9C0u;
        // 0x1ce9c4: 0xad2500bc  sw          $a1, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9c0) {
            ctx->pc = 0x1CEC84u;
            { ctx->pc = 0x1cec84; return; }
        }
    }
    ctx->pc = 0x1CE9C8u;
label_1ce9c8:
    // 0x1ce9c8: 0x28810033  slti        $at, $a0, 0x33
    ctx->pc = 0x1ce9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)51) ? 1 : 0);
label_1ce9cc:
    // 0x1ce9cc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1ce9d0:
    if (ctx->pc == 0x1CE9D0u) {
        ctx->pc = 0x1CE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9CCu;
        // 0x1ce9d0: 0x2882004b  slti        $v0, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9D4u;
        goto label_1ce9d4;
    }
    ctx->pc = 0x1CE9CCu;
    {
        const bool branch_taken_0x1ce9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9CCu;
        // 0x1ce9d0: 0x2882004b  slti        $v0, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9cc) {
            ctx->pc = 0x1CEA48u;
            goto label_1cea48;
        }
    }
    ctx->pc = 0x1CE9D4u;
label_1ce9d4:
    // 0x1ce9d4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x1ce9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1ce9d8:
    // 0x1ce9d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ce9dc:
    // 0x1ce9dc: 0xa1220070  sb          $v0, 0x70($t1)
    ctx->pc = 0x1ce9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 112), (uint8_t)GPR_U32(ctx, 2));
label_1ce9e0:
    // 0x1ce9e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ce9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ce9e4:
    // 0x1ce9e4: 0xa1280071  sb          $t0, 0x71($t1)
    ctx->pc = 0x1ce9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 113), (uint8_t)GPR_U32(ctx, 8));
label_1ce9e8:
    // 0x1ce9e8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ce9ec:
    // 0x1ce9ec: 0xa1270072  sb          $a3, 0x72($t1)
    ctx->pc = 0x1ce9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 114), (uint8_t)GPR_U32(ctx, 7));
label_1ce9f0:
    // 0x1ce9f0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1ce9f4:
    // 0x1ce9f4: 0xa1260073  sb          $a2, 0x73($t1)
    ctx->pc = 0x1ce9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 6));
label_1ce9f8:
    // 0x1ce9f8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1ce9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1ce9fc:
    // 0x1ce9fc: 0xad250074  sw          $a1, 0x74($t1)
    ctx->pc = 0x1ce9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 5));
label_1cea00:
    // 0x1cea00: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1cea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1cea04:
    // 0x1cea04: 0xa12200a0  sb          $v0, 0xA0($t1)
    ctx->pc = 0x1cea04u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 160), (uint8_t)GPR_U32(ctx, 2));
label_1cea08:
    // 0x1cea08: 0xa12800a1  sb          $t0, 0xA1($t1)
    ctx->pc = 0x1cea08u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 161), (uint8_t)GPR_U32(ctx, 8));
label_1cea0c:
    // 0x1cea0c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1cea10:
    // 0x1cea10: 0xa12700a2  sb          $a3, 0xA2($t1)
    ctx->pc = 0x1cea10u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 162), (uint8_t)GPR_U32(ctx, 7));
label_1cea14:
    // 0x1cea14: 0xa12600a3  sb          $a2, 0xA3($t1)
    ctx->pc = 0x1cea14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 163), (uint8_t)GPR_U32(ctx, 6));
label_1cea18:
    // 0x1cea18: 0xad2500a4  sw          $a1, 0xA4($t1)
    ctx->pc = 0x1cea18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 5));
label_1cea1c:
    // 0x1cea1c: 0xa1240088  sb          $a0, 0x88($t1)
    ctx->pc = 0x1cea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 136), (uint8_t)GPR_U32(ctx, 4));
label_1cea20:
    // 0x1cea20: 0xa1230089  sb          $v1, 0x89($t1)
    ctx->pc = 0x1cea20u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 137), (uint8_t)GPR_U32(ctx, 3));
label_1cea24:
    // 0x1cea24: 0xa122008a  sb          $v0, 0x8A($t1)
    ctx->pc = 0x1cea24u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 138), (uint8_t)GPR_U32(ctx, 2));
label_1cea28:
    // 0x1cea28: 0xa126008b  sb          $a2, 0x8B($t1)
    ctx->pc = 0x1cea28u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 139), (uint8_t)GPR_U32(ctx, 6));
label_1cea2c:
    // 0x1cea2c: 0xad25008c  sw          $a1, 0x8C($t1)
    ctx->pc = 0x1cea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 5));
label_1cea30:
    // 0x1cea30: 0xa12400b8  sb          $a0, 0xB8($t1)
    ctx->pc = 0x1cea30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 4));
label_1cea34:
    // 0x1cea34: 0xa12300b9  sb          $v1, 0xB9($t1)
    ctx->pc = 0x1cea34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 185), (uint8_t)GPR_U32(ctx, 3));
label_1cea38:
    // 0x1cea38: 0xa12200ba  sb          $v0, 0xBA($t1)
    ctx->pc = 0x1cea38u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 186), (uint8_t)GPR_U32(ctx, 2));
label_1cea3c:
    // 0x1cea3c: 0xa12600bb  sb          $a2, 0xBB($t1)
    ctx->pc = 0x1cea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 187), (uint8_t)GPR_U32(ctx, 6));
label_1cea40:
    // 0x1cea40: 0x10000090  b           . + 4 + (0x90 << 2)
label_1cea44:
    if (ctx->pc == 0x1CEA44u) {
        ctx->pc = 0x1CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA40u;
        // 0x1cea44: 0xad2500bc  sw          $a1, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA48u;
        goto label_1cea48;
    }
    ctx->pc = 0x1CEA40u;
    {
        const bool branch_taken_0x1cea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA40u;
        // 0x1cea44: 0xad2500bc  sw          $a1, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea40) {
            ctx->pc = 0x1CEC84u;
            { ctx->pc = 0x1cec84; return; }
        }
    }
    ctx->pc = 0x1CEA48u;
label_1cea48:
    // 0x1cea48: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_1cea4c:
    if (ctx->pc == 0x1CEA4Cu) {
        ctx->pc = 0x1CEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA48u;
        // 0x1cea4c: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA50u;
        goto label_1cea50;
    }
    ctx->pc = 0x1CEA48u;
    {
        const bool branch_taken_0x1cea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA48u;
        // 0x1cea4c: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea48) {
            ctx->pc = 0x1CEB98u;
            goto label_1ceb98;
        }
    }
    ctx->pc = 0x1CEA50u;
label_1cea50:
    // 0x1cea50: 0x2488ffb5  addiu       $t0, $a0, -0x4B
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967221));
label_1cea54:
    // 0x1cea54: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1cea58:
    // 0x1cea58: 0x81823  negu        $v1, $t0
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_1cea5c:
    // 0x1cea5c: 0x3447851f  ori         $a3, $v0, 0x851F
    ctx->pc = 0x1cea5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1cea60:
    // 0x1cea60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cea64:
    // 0x1cea64: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cea68:
    // 0x1cea68: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1cea68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cea6c:
    // 0x1cea6c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cea70:
    // 0x1cea70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cea74:
    // 0x1cea74: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1cea78:
    // 0x1cea78: 0x485823  subu        $t3, $v0, $t0
    ctx->pc = 0x1cea78u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cea7c:
    // 0x1cea7c: 0xeb0018  mult        $zero, $a3, $t3
    ctx->pc = 0x1cea7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cea80:
    // 0x1cea80: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1cea84:
    // 0x1cea84: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1cea84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1cea88:
    // 0x1cea88: 0xc81023  subu        $v0, $a2, $t0
    ctx->pc = 0x1cea88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1cea8c:
    // 0x1cea8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1cea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cea90:
    // 0x1cea90: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x1cea90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cea94:
    // 0x1cea94: 0xb37c2  srl         $a2, $t3, 31
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_1cea98:
    // 0x1cea98: 0x9810  mfhi        $s3
    ctx->pc = 0x1cea98u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_1cea9c:
    // 0x1cea9c: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1ceaa0:
    // 0x1ceaa0: 0x1686021  addu        $t4, $t3, $t0
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_1ceaa4:
    // 0x1ceaa4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ceaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ceaa8:
    // 0x1ceaa8: 0xc6900  sll         $t5, $t4, 4
    ctx->pc = 0x1ceaa8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1ceaac:
    // 0x1ceaac: 0x485021  addu        $t2, $v0, $t0
    ctx->pc = 0x1ceaacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ceab0:
    // 0x1ceab0: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x1ceab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ceab4:
    // 0x1ceab4: 0x10d7023  subu        $t6, $t0, $t5
    ctx->pc = 0x1ceab4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
label_1ceab8:
    // 0x1ceab8: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x1ceab8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1ceabc:
    // 0x1ceabc: 0x107fc2  srl         $t7, $s0, 31
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_1ceac0:
    // 0x1ceac0: 0x1686023  subu        $t4, $t3, $t0
    ctx->pc = 0x1ceac0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_1ceac4:
    // 0x1ceac4: 0xe6fc2  srl         $t5, $t6, 31
    ctx->pc = 0x1ceac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_1ceac8:
    // 0x1ceac8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ceac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ceacc:
    // 0x1ceacc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ceaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cead0:
    // 0x1cead0: 0x1328c3  sra         $a1, $s3, 3
    ctx->pc = 0x1cead0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 3));
label_1cead4:
    // 0x1cead4: 0xc5fc2  srl         $t3, $t4, 31
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_1cead8:
    // 0x1cead8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ceadc:
    // 0x1ceadc: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x1ceadcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1ceae0:
    // 0x1ceae0: 0x24a6005b  addiu       $a2, $a1, 0x5B
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 91));
label_1ceae4:
    // 0x1ceae4: 0x2810  mfhi        $a1
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1ceae8:
    // 0x1ceae8: 0xa1260070  sb          $a2, 0x70($t1)
    ctx->pc = 0x1ceae8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 112), (uint8_t)GPR_U32(ctx, 6));
label_1ceaec:
    // 0x1ceaec: 0xf00018  mult        $zero, $a3, $s0
    ctx->pc = 0x1ceaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ceaf0:
    // 0x1ceaf0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1ceaf0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_1ceaf4:
    // 0x1ceaf4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ceaf8:
    // 0x1ceaf8: 0x24850044  addiu       $a1, $a0, 0x44
    ctx->pc = 0x1ceaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_1ceafc:
    // 0x1ceafc: 0xa1250071  sb          $a1, 0x71($t1)
    ctx->pc = 0x1ceafcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 113), (uint8_t)GPR_U32(ctx, 5));
label_1ceb00:
    // 0x1ceb00: 0x2010  mfhi        $a0
    ctx->pc = 0x1ceb00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ceb04:
    // 0x1ceb04: 0xee0018  mult        $zero, $a3, $t6
    ctx->pc = 0x1ceb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ceb08:
    // 0x1ceb08: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1ceb0c:
    // 0x1ceb0c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_1ceb10:
    // 0x1ceb10: 0x248e0015  addiu       $t6, $a0, 0x15
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 21));
label_1ceb14:
    // 0x1ceb14: 0x2010  mfhi        $a0
    ctx->pc = 0x1ceb14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ceb18:
    // 0x1ceb18: 0xa12e0072  sb          $t6, 0x72($t1)
    ctx->pc = 0x1ceb18u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 114), (uint8_t)GPR_U32(ctx, 14));
label_1ceb1c:
    // 0x1ceb1c: 0xa1230073  sb          $v1, 0x73($t1)
    ctx->pc = 0x1ceb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 3));
label_1ceb20:
    // 0x1ceb20: 0xad220074  sw          $v0, 0x74($t1)
    ctx->pc = 0x1ceb20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 2));
label_1ceb24:
    // 0x1ceb24: 0xec0018  mult        $zero, $a3, $t4
    ctx->pc = 0x1ceb24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ceb28:
    // 0x1ceb28: 0xa12600a0  sb          $a2, 0xA0($t1)
    ctx->pc = 0x1ceb28u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 160), (uint8_t)GPR_U32(ctx, 6));
label_1ceb2c:
    // 0x1ceb2c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1ceb2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1ceb30:
    // 0x1ceb30: 0xa12500a1  sb          $a1, 0xA1($t1)
    ctx->pc = 0x1ceb30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 161), (uint8_t)GPR_U32(ctx, 5));
label_1ceb34:
    // 0x1ceb34: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_1ceb38:
    // 0x1ceb38: 0xa12e00a2  sb          $t6, 0xA2($t1)
    ctx->pc = 0x1ceb38u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 162), (uint8_t)GPR_U32(ctx, 14));
label_1ceb3c:
    // 0x1ceb3c: 0x2485007f  addiu       $a1, $a0, 0x7F
    ctx->pc = 0x1ceb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_1ceb40:
    // 0x1ceb40: 0xa12300a3  sb          $v1, 0xA3($t1)
    ctx->pc = 0x1ceb40u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 163), (uint8_t)GPR_U32(ctx, 3));
label_1ceb44:
    // 0x1ceb44: 0x2010  mfhi        $a0
    ctx->pc = 0x1ceb44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ceb48:
    // 0x1ceb48: 0xad2200a4  sw          $v0, 0xA4($t1)
    ctx->pc = 0x1ceb48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 2));
label_1ceb4c:
    // 0x1ceb4c: 0xa1250088  sb          $a1, 0x88($t1)
    ctx->pc = 0x1ceb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 136), (uint8_t)GPR_U32(ctx, 5));
label_1ceb50:
    // 0x1ceb50: 0xea0018  mult        $zero, $a3, $t2
    ctx->pc = 0x1ceb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ceb54:
    // 0x1ceb54: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1ceb58:
    // 0x1ceb58: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1ceb5c:
    // 0x1ceb5c: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1ceb60:
    // 0x1ceb60: 0xa1260089  sb          $a2, 0x89($t1)
    ctx->pc = 0x1ceb60u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 137), (uint8_t)GPR_U32(ctx, 6));
label_1ceb64:
    // 0x1ceb64: 0x2010  mfhi        $a0
    ctx->pc = 0x1ceb64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ceb68:
    // 0x1ceb68: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1ceb6c:
    // 0x1ceb6c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1ceb70:
    // 0x1ceb70: 0x24840037  addiu       $a0, $a0, 0x37
    ctx->pc = 0x1ceb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 55));
label_1ceb74:
    // 0x1ceb74: 0xa124008a  sb          $a0, 0x8A($t1)
    ctx->pc = 0x1ceb74u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 138), (uint8_t)GPR_U32(ctx, 4));
label_1ceb78:
    // 0x1ceb78: 0xa123008b  sb          $v1, 0x8B($t1)
    ctx->pc = 0x1ceb78u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 139), (uint8_t)GPR_U32(ctx, 3));
label_1ceb7c:
    // 0x1ceb7c: 0xad22008c  sw          $v0, 0x8C($t1)
    ctx->pc = 0x1ceb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 2));
label_1ceb80:
    // 0x1ceb80: 0xa12500b8  sb          $a1, 0xB8($t1)
    ctx->pc = 0x1ceb80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 5));
label_1ceb84:
    // 0x1ceb84: 0xa12600b9  sb          $a2, 0xB9($t1)
    ctx->pc = 0x1ceb84u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 185), (uint8_t)GPR_U32(ctx, 6));
label_1ceb88:
    // 0x1ceb88: 0xa12400ba  sb          $a0, 0xBA($t1)
    ctx->pc = 0x1ceb88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 186), (uint8_t)GPR_U32(ctx, 4));
label_1ceb8c:
    // 0x1ceb8c: 0xa12300bb  sb          $v1, 0xBB($t1)
    ctx->pc = 0x1ceb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 187), (uint8_t)GPR_U32(ctx, 3));
label_1ceb90:
    // 0x1ceb90: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1ceb94:
    if (ctx->pc == 0x1CEB94u) {
        ctx->pc = 0x1CEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB90u;
        // 0x1ceb94: 0xad2200bc  sw          $v0, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB98u;
        goto label_1ceb98;
    }
    ctx->pc = 0x1CEB90u;
    {
        const bool branch_taken_0x1ceb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB90u;
        // 0x1ceb94: 0xad2200bc  sw          $v0, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb90) {
            ctx->pc = 0x1CEC84u;
            { ctx->pc = 0x1cec84; return; }
        }
    }
    ctx->pc = 0x1CEB98u;
label_1ceb98:
    // 0x1ceb98: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1ceb9c:
    // 0x1ceb9c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ceba0:
    // 0x1ceba0: 0x344e851f  ori         $t6, $v0, 0x851F
    ctx->pc = 0x1ceba0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1ceba4:
    // 0x1ceba4: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1ceba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_1ceba8:
    // 0x1ceba8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cebac:
    // 0x1cebac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cebb0:
    // 0x1cebb0: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x1cebb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1cebb4:
    // 0x1cebb4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cebb8:
    // 0x1cebb8: 0xa5fc2  srl         $t3, $t2, 31
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1cebbc:
    // 0x1cebbc: 0x1c30018  mult        $zero, $t6, $v1
    ctx->pc = 0x1cebbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cebc0:
    // 0x1cebc0: 0x36fc2  srl         $t5, $v1, 31
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cebc4:
    // 0x1cebc4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1cebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1cebc8:
    // 0x1cebc8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1cebc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1cebcc:
    // 0x1cebcc: 0x6010  mfhi        $t4
    ctx->pc = 0x1cebccu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1cebd0:
    // 0x1cebd0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1cebd4:
    // 0x1cebd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cebd8:
    // 0x1cebd8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cebdc:
    // 0x1cebdc: 0x1ca0018  mult        $zero, $t6, $t2
    ctx->pc = 0x1cebdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cebe0:
    // 0x1cebe0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1cebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1cebe4:
    // 0x1cebe4: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1cebe8:
    // 0x1cebe8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1cebec:
    // 0x1cebec: 0xc50c3  sra         $t2, $t4, 3
    ctx->pc = 0x1cebecu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 12), 3));
label_1cebf0:
    // 0x1cebf0: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_1cebf4:
    // 0x1cebf4: 0x254c005b  addiu       $t4, $t2, 0x5B
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 91));
label_1cebf8:
    // 0x1cebf8: 0x254d0015  addiu       $t5, $t2, 0x15
    ctx->pc = 0x1cebf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 21));
label_1cebfc:
    // 0x1cebfc: 0x5010  mfhi        $t2
    ctx->pc = 0x1cebfcu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_1cec00:
    // 0x1cec00: 0xa12c0070  sb          $t4, 0x70($t1)
    ctx->pc = 0x1cec00u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 112), (uint8_t)GPR_U32(ctx, 12));
label_1cec04:
    // 0x1cec04: 0x1c50018  mult        $zero, $t6, $a1
    ctx->pc = 0x1cec04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cec08:
    // 0x1cec08: 0xa28c3  sra         $a1, $t2, 3
    ctx->pc = 0x1cec08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 10), 3));
label_1cec0c:
    // 0x1cec0c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1cec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1cec10:
    // 0x1cec10: 0x24aa0044  addiu       $t2, $a1, 0x44
    ctx->pc = 0x1cec10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
label_1cec14:
    // 0x1cec14: 0x2810  mfhi        $a1
    ctx->pc = 0x1cec14u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cec18:
    // 0x1cec18: 0xa12a0071  sb          $t2, 0x71($t1)
    ctx->pc = 0x1cec18u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 113), (uint8_t)GPR_U32(ctx, 10));
label_1cec1c:
    // 0x1cec1c: 0xa12d0072  sb          $t5, 0x72($t1)
    ctx->pc = 0x1cec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 114), (uint8_t)GPR_U32(ctx, 13));
label_1cec20:
    // 0x1cec20: 0xa1280073  sb          $t0, 0x73($t1)
    ctx->pc = 0x1cec20u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 8));
label_1cec24:
    // 0x1cec24: 0x1c20018  mult        $zero, $t6, $v0
    ctx->pc = 0x1cec24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cec28:
    // 0x1cec28: 0xad270074  sw          $a3, 0x74($t1)
    ctx->pc = 0x1cec28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 7));
label_1cec2c:
    // 0x1cec2c: 0xa12c00a0  sb          $t4, 0xA0($t1)
    ctx->pc = 0x1cec2cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 160), (uint8_t)GPR_U32(ctx, 12));
label_1cec30:
    // 0x1cec30: 0xa12a00a1  sb          $t2, 0xA1($t1)
    ctx->pc = 0x1cec30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 161), (uint8_t)GPR_U32(ctx, 10));
label_1cec34:
    // 0x1cec34: 0xa12d00a2  sb          $t5, 0xA2($t1)
    ctx->pc = 0x1cec34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 162), (uint8_t)GPR_U32(ctx, 13));
label_1cec38:
    // 0x1cec38: 0x510c3  sra         $v0, $a1, 3
    ctx->pc = 0x1cec38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
label_1cec3c:
    // 0x1cec3c: 0xa12800a3  sb          $t0, 0xA3($t1)
    ctx->pc = 0x1cec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 163), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x1cec40u;
    return;
}

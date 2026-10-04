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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5b0u: goto label_2bc5b0;
        case 0x2bc5b4u: goto label_2bc5b4;
        case 0x2bc5b8u: goto label_2bc5b8;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc5c0u: goto label_2bc5c0;
        case 0x2bc5c4u: goto label_2bc5c4;
        case 0x2bc5c8u: goto label_2bc5c8;
        case 0x2bc5ccu: goto label_2bc5cc;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5d4u: goto label_2bc5d4;
        case 0x2bc5d8u: goto label_2bc5d8;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5e0u: goto label_2bc5e0;
        case 0x2bc5e4u: goto label_2bc5e4;
        case 0x2bc5e8u: goto label_2bc5e8;
        case 0x2bc5ecu: goto label_2bc5ec;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc5f4u: goto label_2bc5f4;
        case 0x2bc5f8u: goto label_2bc5f8;
        case 0x2bc5fcu: goto label_2bc5fc;
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc604u: goto label_2bc604;
        case 0x2bc608u: goto label_2bc608;
        case 0x2bc60cu: goto label_2bc60c;
        case 0x2bc610u: goto label_2bc610;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc61cu: goto label_2bc61c;
        case 0x2bc620u: goto label_2bc620;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc62cu: goto label_2bc62c;
        case 0x2bc630u: goto label_2bc630;
        case 0x2bc634u: goto label_2bc634;
        case 0x2bc638u: goto label_2bc638;
        case 0x2bc63cu: goto label_2bc63c;
        case 0x2bc640u: goto label_2bc640;
        case 0x2bc644u: goto label_2bc644;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc64cu: goto label_2bc64c;
        case 0x2bc650u: goto label_2bc650;
        case 0x2bc654u: goto label_2bc654;
        case 0x2bc658u: goto label_2bc658;
        case 0x2bc65cu: goto label_2bc65c;
        case 0x2bc660u: goto label_2bc660;
        case 0x2bc664u: goto label_2bc664;
        case 0x2bc668u: goto label_2bc668;
        case 0x2bc66cu: goto label_2bc66c;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc674u: goto label_2bc674;
        case 0x2bc678u: goto label_2bc678;
        case 0x2bc67cu: goto label_2bc67c;
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc684u: goto label_2bc684;
        case 0x2bc688u: goto label_2bc688;
        case 0x2bc68cu: goto label_2bc68c;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc694u: goto label_2bc694;
        case 0x2bc698u: goto label_2bc698;
        case 0x2bc69cu: goto label_2bc69c;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc6acu: goto label_2bc6ac;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6b8u: goto label_2bc6b8;
        case 0x2bc6bcu: goto label_2bc6bc;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6c4u: goto label_2bc6c4;
        case 0x2bc6c8u: goto label_2bc6c8;
        case 0x2bc6ccu: goto label_2bc6cc;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6dcu: goto label_2bc6dc;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e4u: goto label_2bc6e4;
        case 0x2bc6e8u: goto label_2bc6e8;
        case 0x2bc6ecu: goto label_2bc6ec;
        case 0x2bc6f0u: goto label_2bc6f0;
        case 0x2bc6f4u: goto label_2bc6f4;
        case 0x2bc6f8u: goto label_2bc6f8;
        case 0x2bc6fcu: goto label_2bc6fc;
        case 0x2bc700u: goto label_2bc700;
        case 0x2bc704u: goto label_2bc704;
        case 0x2bc708u: goto label_2bc708;
        case 0x2bc70cu: goto label_2bc70c;
        case 0x2bc710u: goto label_2bc710;
        case 0x2bc714u: goto label_2bc714;
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc71cu: goto label_2bc71c;
        case 0x2bc720u: goto label_2bc720;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc728u: goto label_2bc728;
        case 0x2bc72cu: goto label_2bc72c;
        case 0x2bc730u: goto label_2bc730;
        case 0x2bc734u: goto label_2bc734;
        case 0x2bc738u: goto label_2bc738;
        case 0x2bc73cu: goto label_2bc73c;
        case 0x2bc740u: goto label_2bc740;
        case 0x2bc744u: goto label_2bc744;
        case 0x2bc748u: goto label_2bc748;
        case 0x2bc74cu: goto label_2bc74c;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc754u: goto label_2bc754;
        case 0x2bc758u: goto label_2bc758;
        case 0x2bc75cu: goto label_2bc75c;
        case 0x2bc760u: goto label_2bc760;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc768u: goto label_2bc768;
        case 0x2bc76cu: goto label_2bc76c;
        case 0x2bc770u: goto label_2bc770;
        case 0x2bc774u: goto label_2bc774;
        case 0x2bc778u: goto label_2bc778;
        case 0x2bc77cu: goto label_2bc77c;
        case 0x2bc780u: goto label_2bc780;
        case 0x2bc784u: goto label_2bc784;
        case 0x2bc788u: goto label_2bc788;
        case 0x2bc78cu: goto label_2bc78c;
        case 0x2bc790u: goto label_2bc790;
        case 0x2bc794u: goto label_2bc794;
        case 0x2bc798u: goto label_2bc798;
        case 0x2bc79cu: goto label_2bc79c;
        case 0x2bc7a0u: goto label_2bc7a0;
        case 0x2bc7a4u: goto label_2bc7a4;
        case 0x2bc7a8u: goto label_2bc7a8;
        case 0x2bc7acu: goto label_2bc7ac;
        case 0x2bc7b0u: goto label_2bc7b0;
        case 0x2bc7b4u: goto label_2bc7b4;
        case 0x2bc7b8u: goto label_2bc7b8;
        case 0x2bc7bcu: goto label_2bc7bc;
        case 0x2bc7c0u: goto label_2bc7c0;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc7c8u: goto label_2bc7c8;
        case 0x2bc7ccu: goto label_2bc7cc;
        case 0x2bc7d0u: goto label_2bc7d0;
        case 0x2bc7d4u: goto label_2bc7d4;
        case 0x2bc7d8u: goto label_2bc7d8;
        case 0x2bc7dcu: goto label_2bc7dc;
        case 0x2bc7e0u: goto label_2bc7e0;
        case 0x2bc7e4u: goto label_2bc7e4;
        case 0x2bc7e8u: goto label_2bc7e8;
        case 0x2bc7ecu: goto label_2bc7ec;
        case 0x2bc7f0u: goto label_2bc7f0;
        case 0x2bc7f4u: goto label_2bc7f4;
        case 0x2bc7f8u: goto label_2bc7f8;
        case 0x2bc7fcu: goto label_2bc7fc;
        case 0x2bc800u: goto label_2bc800;
        case 0x2bc804u: goto label_2bc804;
        case 0x2bc808u: goto label_2bc808;
        case 0x2bc80cu: goto label_2bc80c;
        case 0x2bc810u: goto label_2bc810;
        case 0x2bc814u: goto label_2bc814;
        case 0x2bc818u: goto label_2bc818;
        case 0x2bc81cu: goto label_2bc81c;
        case 0x2bc820u: goto label_2bc820;
        case 0x2bc824u: goto label_2bc824;
        case 0x2bc828u: goto label_2bc828;
        case 0x2bc82cu: goto label_2bc82c;
        case 0x2bc830u: goto label_2bc830;
        case 0x2bc834u: goto label_2bc834;
        case 0x2bc838u: goto label_2bc838;
        case 0x2bc83cu: goto label_2bc83c;
        case 0x2bc840u: goto label_2bc840;
        case 0x2bc844u: goto label_2bc844;
        case 0x2bc848u: goto label_2bc848;
        case 0x2bc84cu: goto label_2bc84c;
        case 0x2bc850u: goto label_2bc850;
        case 0x2bc854u: goto label_2bc854;
        case 0x2bc858u: goto label_2bc858;
        case 0x2bc85cu: goto label_2bc85c;
        case 0x2bc860u: goto label_2bc860;
        case 0x2bc864u: goto label_2bc864;
        case 0x2bc868u: goto label_2bc868;
        case 0x2bc86cu: goto label_2bc86c;
        case 0x2bc870u: goto label_2bc870;
        case 0x2bc874u: goto label_2bc874;
        case 0x2bc878u: goto label_2bc878;
        case 0x2bc87cu: goto label_2bc87c;
        case 0x2bc880u: goto label_2bc880;
        case 0x2bc884u: goto label_2bc884;
        case 0x2bc888u: goto label_2bc888;
        case 0x2bc88cu: goto label_2bc88c;
        case 0x2bc890u: goto label_2bc890;
        case 0x2bc894u: goto label_2bc894;
        case 0x2bc898u: goto label_2bc898;
        case 0x2bc89cu: goto label_2bc89c;
        case 0x2bc8a0u: goto label_2bc8a0;
        case 0x2bc8a4u: goto label_2bc8a4;
        case 0x2bc8a8u: goto label_2bc8a8;
        case 0x2bc8acu: goto label_2bc8ac;
        case 0x2bc8b0u: goto label_2bc8b0;
        case 0x2bc8b4u: goto label_2bc8b4;
        case 0x2bc8b8u: goto label_2bc8b8;
        case 0x2bc8bcu: goto label_2bc8bc;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc8c4u: goto label_2bc8c4;
        case 0x2bc8c8u: goto label_2bc8c8;
        case 0x2bc8ccu: goto label_2bc8cc;
        case 0x2bc8d0u: goto label_2bc8d0;
        case 0x2bc8d4u: goto label_2bc8d4;
        case 0x2bc8d8u: goto label_2bc8d8;
        case 0x2bc8dcu: goto label_2bc8dc;
        case 0x2bc8e0u: goto label_2bc8e0;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc8e8u: goto label_2bc8e8;
        case 0x2bc8ecu: goto label_2bc8ec;
        case 0x2bc8f0u: goto label_2bc8f0;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc8f8u: goto label_2bc8f8;
        case 0x2bc8fcu: goto label_2bc8fc;
        case 0x2bc900u: goto label_2bc900;
        case 0x2bc904u: goto label_2bc904;
        case 0x2bc908u: goto label_2bc908;
        case 0x2bc90cu: goto label_2bc90c;
        case 0x2bc910u: goto label_2bc910;
        case 0x2bc914u: goto label_2bc914;
        case 0x2bc918u: goto label_2bc918;
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc920u: goto label_2bc920;
        case 0x2bc924u: goto label_2bc924;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc92cu: goto label_2bc92c;
        case 0x2bc930u: goto label_2bc930;
        case 0x2bc934u: goto label_2bc934;
        case 0x2bc938u: goto label_2bc938;
        case 0x2bc93cu: goto label_2bc93c;
        case 0x2bc940u: goto label_2bc940;
        case 0x2bc944u: goto label_2bc944;
        case 0x2bc948u: goto label_2bc948;
        case 0x2bc94cu: goto label_2bc94c;
        case 0x2bc950u: goto label_2bc950;
        case 0x2bc954u: goto label_2bc954;
        case 0x2bc958u: goto label_2bc958;
        case 0x2bc95cu: goto label_2bc95c;
        case 0x2bc960u: goto label_2bc960;
        case 0x2bc964u: goto label_2bc964;
        case 0x2bc968u: goto label_2bc968;
        case 0x2bc96cu: goto label_2bc96c;
        case 0x2bc970u: goto label_2bc970;
        case 0x2bc974u: goto label_2bc974;
        case 0x2bc978u: goto label_2bc978;
        case 0x2bc97cu: goto label_2bc97c;
        case 0x2bc980u: goto label_2bc980;
        case 0x2bc984u: goto label_2bc984;
        case 0x2bc988u: goto label_2bc988;
        case 0x2bc98cu: goto label_2bc98c;
        case 0x2bc990u: goto label_2bc990;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc998u: goto label_2bc998;
        case 0x2bc99cu: goto label_2bc99c;
        case 0x2bc9a0u: goto label_2bc9a0;
        case 0x2bc9a4u: goto label_2bc9a4;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9acu: goto label_2bc9ac;
        case 0x2bc9b0u: goto label_2bc9b0;
        case 0x2bc9b4u: goto label_2bc9b4;
        case 0x2bc9b8u: goto label_2bc9b8;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9c0u: goto label_2bc9c0;
        case 0x2bc9c4u: goto label_2bc9c4;
        case 0x2bc9c8u: goto label_2bc9c8;
        case 0x2bc9ccu: goto label_2bc9cc;
        case 0x2bc9d0u: goto label_2bc9d0;
        case 0x2bc9d4u: goto label_2bc9d4;
        case 0x2bc9d8u: goto label_2bc9d8;
        case 0x2bc9dcu: goto label_2bc9dc;
        case 0x2bc9e0u: goto label_2bc9e0;
        case 0x2bc9e4u: goto label_2bc9e4;
        case 0x2bc9e8u: goto label_2bc9e8;
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bc9f0u: goto label_2bc9f0;
        case 0x2bc9f4u: goto label_2bc9f4;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bc9fcu: goto label_2bc9fc;
        case 0x2bca00u: goto label_2bca00;
        case 0x2bca04u: goto label_2bca04;
        case 0x2bca08u: goto label_2bca08;
        case 0x2bca0cu: goto label_2bca0c;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca18u: goto label_2bca18;
        case 0x2bca1cu: goto label_2bca1c;
        case 0x2bca20u: goto label_2bca20;
        case 0x2bca24u: goto label_2bca24;
        case 0x2bca28u: goto label_2bca28;
        case 0x2bca2cu: goto label_2bca2c;
        case 0x2bca30u: goto label_2bca30;
        case 0x2bca34u: goto label_2bca34;
        case 0x2bca38u: goto label_2bca38;
        case 0x2bca3cu: goto label_2bca3c;
        case 0x2bca40u: goto label_2bca40;
        case 0x2bca44u: goto label_2bca44;
        case 0x2bca48u: goto label_2bca48;
        case 0x2bca4cu: goto label_2bca4c;
        case 0x2bca50u: goto label_2bca50;
        case 0x2bca54u: goto label_2bca54;
        case 0x2bca58u: goto label_2bca58;
        case 0x2bca5cu: goto label_2bca5c;
        case 0x2bca60u: goto label_2bca60;
        case 0x2bca64u: goto label_2bca64;
        case 0x2bca68u: goto label_2bca68;
        case 0x2bca6cu: goto label_2bca6c;
        case 0x2bca70u: goto label_2bca70;
        case 0x2bca74u: goto label_2bca74;
        case 0x2bca78u: goto label_2bca78;
        case 0x2bca7cu: goto label_2bca7c;
        case 0x2bca80u: goto label_2bca80;
        case 0x2bca84u: goto label_2bca84;
        case 0x2bca88u: goto label_2bca88;
        case 0x2bca8cu: goto label_2bca8c;
        case 0x2bca90u: goto label_2bca90;
        case 0x2bca94u: goto label_2bca94;
        case 0x2bca98u: goto label_2bca98;
        case 0x2bca9cu: goto label_2bca9c;
        case 0x2bcaa0u: goto label_2bcaa0;
        case 0x2bcaa4u: goto label_2bcaa4;
        case 0x2bcaa8u: goto label_2bcaa8;
        case 0x2bcaacu: goto label_2bcaac;
        case 0x2bcab0u: goto label_2bcab0;
        case 0x2bcab4u: goto label_2bcab4;
        case 0x2bcab8u: goto label_2bcab8;
        case 0x2bcabcu: goto label_2bcabc;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcac4u: goto label_2bcac4;
        case 0x2bcac8u: goto label_2bcac8;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad0u: goto label_2bcad0;
        case 0x2bcad4u: goto label_2bcad4;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcadcu: goto label_2bcadc;
        case 0x2bcae0u: goto label_2bcae0;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcae8u: goto label_2bcae8;
        case 0x2bcaecu: goto label_2bcaec;
        case 0x2bcaf0u: goto label_2bcaf0;
        case 0x2bcaf4u: goto label_2bcaf4;
        case 0x2bcaf8u: goto label_2bcaf8;
        case 0x2bcafcu: goto label_2bcafc;
        case 0x2bcb00u: goto label_2bcb00;
        case 0x2bcb04u: goto label_2bcb04;
        case 0x2bcb08u: goto label_2bcb08;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb10u: goto label_2bcb10;
        case 0x2bcb14u: goto label_2bcb14;
        case 0x2bcb18u: goto label_2bcb18;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb20u: goto label_2bcb20;
        case 0x2bcb24u: goto label_2bcb24;
        case 0x2bcb28u: goto label_2bcb28;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb30u: goto label_2bcb30;
        case 0x2bcb34u: goto label_2bcb34;
        case 0x2bcb38u: goto label_2bcb38;
        case 0x2bcb3cu: goto label_2bcb3c;
        case 0x2bcb40u: goto label_2bcb40;
        case 0x2bcb44u: goto label_2bcb44;
        case 0x2bcb48u: goto label_2bcb48;
        case 0x2bcb4cu: goto label_2bcb4c;
        case 0x2bcb50u: goto label_2bcb50;
        case 0x2bcb54u: goto label_2bcb54;
        case 0x2bcb58u: goto label_2bcb58;
        case 0x2bcb5cu: goto label_2bcb5c;
        case 0x2bcb60u: goto label_2bcb60;
        case 0x2bcb64u: goto label_2bcb64;
        case 0x2bcb68u: goto label_2bcb68;
        case 0x2bcb6cu: goto label_2bcb6c;
        case 0x2bcb70u: goto label_2bcb70;
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcb78u: goto label_2bcb78;
        case 0x2bcb7cu: goto label_2bcb7c;
        case 0x2bcb80u: goto label_2bcb80;
        case 0x2bcb84u: goto label_2bcb84;
        case 0x2bcb88u: goto label_2bcb88;
        case 0x2bcb8cu: goto label_2bcb8c;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb94u: goto label_2bcb94;
        case 0x2bcb98u: goto label_2bcb98;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcba4u: goto label_2bcba4;
        case 0x2bcba8u: goto label_2bcba8;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bcbb4u: goto label_2bcbb4;
        case 0x2bcbb8u: goto label_2bcbb8;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbc4u: goto label_2bcbc4;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd0u: goto label_2bcbd0;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbdcu: goto label_2bcbdc;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbecu: goto label_2bcbec;
        case 0x2bcbf0u: goto label_2bcbf0;
        case 0x2bcbf4u: goto label_2bcbf4;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcbfcu: goto label_2bcbfc;
        case 0x2bcc00u: goto label_2bcc00;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc0cu: goto label_2bcc0c;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc14u: goto label_2bcc14;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc1cu: goto label_2bcc1c;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc24u: goto label_2bcc24;
        case 0x2bcc28u: goto label_2bcc28;
        case 0x2bcc2cu: goto label_2bcc2c;
        case 0x2bcc30u: goto label_2bcc30;
        case 0x2bcc34u: goto label_2bcc34;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc3cu: goto label_2bcc3c;
        case 0x2bcc40u: goto label_2bcc40;
        case 0x2bcc44u: goto label_2bcc44;
        case 0x2bcc48u: goto label_2bcc48;
        case 0x2bcc4cu: goto label_2bcc4c;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc54u: goto label_2bcc54;
        case 0x2bcc58u: goto label_2bcc58;
        case 0x2bcc5cu: goto label_2bcc5c;
        case 0x2bcc60u: goto label_2bcc60;
        case 0x2bcc64u: goto label_2bcc64;
        case 0x2bcc68u: goto label_2bcc68;
        case 0x2bcc6cu: goto label_2bcc6c;
        case 0x2bcc70u: goto label_2bcc70;
        case 0x2bcc74u: goto label_2bcc74;
        case 0x2bcc78u: goto label_2bcc78;
        case 0x2bcc7cu: goto label_2bcc7c;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc84u: goto label_2bcc84;
        case 0x2bcc88u: goto label_2bcc88;
        case 0x2bcc8cu: goto label_2bcc8c;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcc94u: goto label_2bcc94;
        case 0x2bcc98u: goto label_2bcc98;
        case 0x2bcc9cu: goto label_2bcc9c;
        case 0x2bcca0u: goto label_2bcca0;
        case 0x2bcca4u: goto label_2bcca4;
        case 0x2bcca8u: goto label_2bcca8;
        case 0x2bccacu: goto label_2bccac;
        case 0x2bccb0u: goto label_2bccb0;
        case 0x2bccb4u: goto label_2bccb4;
        case 0x2bccb8u: goto label_2bccb8;
        case 0x2bccbcu: goto label_2bccbc;
        case 0x2bccc0u: goto label_2bccc0;
        case 0x2bccc4u: goto label_2bccc4;
        case 0x2bccc8u: goto label_2bccc8;
        case 0x2bccccu: goto label_2bcccc;
        case 0x2bccd0u: goto label_2bccd0;
        case 0x2bccd4u: goto label_2bccd4;
        case 0x2bccd8u: goto label_2bccd8;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce0u: goto label_2bcce0;
        case 0x2bcce4u: goto label_2bcce4;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bccf4u: goto label_2bccf4;
        case 0x2bccf8u: goto label_2bccf8;
        case 0x2bccfcu: goto label_2bccfc;
        case 0x2bcd00u: goto label_2bcd00;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd08u: goto label_2bcd08;
        case 0x2bcd0cu: goto label_2bcd0c;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd14u: goto label_2bcd14;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd1cu: goto label_2bcd1c;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd24u: goto label_2bcd24;
        default: return;
    }

label_2bc558:
    // 0x2bc558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc55c:
    // 0x2bc55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc560:
    // 0x2bc560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc564:
    // 0x2bc564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc568:
    // 0x2bc568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc56c:
    // 0x2bc56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc570:
    // 0x2bc570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc574:
    // 0x2bc574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc578:
    // 0x2bc578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc57c:
    // 0x2bc57c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc57cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bc580:
    // 0x2bc580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc584:
    // 0x2bc584: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc584u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bc588:
    // 0x2bc588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc58c:
    // 0x2bc58c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc58cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC58C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc590:
    // 0x2bc590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc594:
    // 0x2bc594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc598:
    // 0x2bc598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc59c:
    // 0x2bc59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5a0:
    // 0x2bc5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5a4:
    // 0x2bc5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5a8:
    // 0x2bc5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5ac:
    // 0x2bc5ac: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BC5AC raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc5b0:
    // 0x2bc5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5b4:
    // 0x2bc5b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5b8:
    // 0x2bc5b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5bc:
    // 0x2bc5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5c0:
    // 0x2bc5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5c4:
    // 0x2bc5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5c8:
    // 0x2bc5c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5cc:
    // 0x2bc5cc: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5ccu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2bc5d0:
    // 0x2bc5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5d4:
    // 0x2bc5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5d8:
    // 0x2bc5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5dc:
    // 0x2bc5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5e0:
    // 0x2bc5e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5e4:
    // 0x2bc5e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5e8:
    // 0x2bc5e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5ec:
    // 0x2bc5ec: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC5EC raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc5f0:
    // 0x2bc5f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5f4:
    // 0x2bc5f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5f8:
    // 0x2bc5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5fc:
    // 0x2bc5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc600:
    // 0x2bc600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc604:
    // 0x2bc604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc608:
    // 0x2bc608: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc608u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bc60c:
    // 0x2bc60c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc60cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc610:
    // 0x2bc610: 0x3e8d002  .word       0x03E8D002                   # srl         $k0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc610u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bc614:
    // 0x2bc614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc618:
    // 0x2bc618: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2bc618u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2bc61c:
    // 0x2bc61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc620:
    // 0x2bc620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc624:
    // 0x2bc624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc628:
    // 0x2bc628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc62c:
    // 0x2bc62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc630:
    // 0x2bc630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc634:
    // 0x2bc634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc638:
    // 0x2bc638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc63c:
    // 0x2bc63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc640:
    // 0x2bc640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc644:
    // 0x2bc644: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc644u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bc648:
    // 0x2bc648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc64c:
    // 0x2bc64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc650:
    // 0x2bc650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc654:
    // 0x2bc654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc658:
    // 0x2bc658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc65c:
    // 0x2bc65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc660:
    // 0x2bc660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc664:
    // 0x2bc664: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BC664 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc668:
    // 0x2bc668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc66c:
    // 0x2bc66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc670:
    // 0x2bc670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc674:
    // 0x2bc674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc678:
    // 0x2bc678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc67c:
    // 0x2bc67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc680:
    // 0x2bc680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc684:
    // 0x2bc684: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc684u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2bc688:
    // 0x2bc688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc68c:
    // 0x2bc68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc690:
    // 0x2bc690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc694:
    // 0x2bc694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc698:
    // 0x2bc698: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC698 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc69c:
    // 0x2bc69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6a0:
    // 0x2bc6a0: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC6A0 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6a4:
    // 0x2bc6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6a8:
    // 0x2bc6a8: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC6A8 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6ac:
    // 0x2bc6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6b0:
    // 0x2bc6b0: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2bc6b0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bc6b4:
    // 0x2bc6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6b8:
    // 0x2bc6b8: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2bc6b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bc6bc:
    // 0x2bc6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6c0:
    // 0x2bc6c0: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2bc6c0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2bc6c4:
    // 0x2bc6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6c8:
    // 0x2bc6c8: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2bc6c8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2bc6cc:
    // 0x2bc6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6d0:
    // 0x2bc6d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6d4:
    // 0x2bc6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6d8:
    // 0x2bc6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6dc:
    // 0x2bc6dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6e0:
    // 0x2bc6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6e4:
    // 0x2bc6e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6e8:
    // 0x2bc6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6ec:
    // 0x2bc6ec: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC6EC raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6f0:
    // 0x2bc6f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6f4:
    // 0x2bc6f4: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC6F4 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6f8:
    // 0x2bc6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6fc:
    // 0x2bc6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc700:
    // 0x2bc700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc704:
    // 0x2bc704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc708:
    // 0x2bc708: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc708u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bc70c:
    // 0x2bc70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc710:
    // 0x2bc710: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc710u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bc714:
    // 0x2bc714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc718:
    // 0x2bc718: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2bc718u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2bc71c:
    // 0x2bc71c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc71cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2bc720:
    // 0x2bc720: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2bc720u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2bc724:
    // 0x2bc724: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC724 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc728:
    // 0x2bc728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc72c:
    // 0x2bc72c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2bc730:
    // 0x2bc730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc734:
    // 0x2bc734: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc734u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2bc738:
    // 0x2bc738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc73c:
    // 0x2bc73c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc73cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc740:
    // 0x2bc740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc744:
    // 0x2bc744: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc744u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bc748:
    // 0x2bc748: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bc748u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bc74c:
    // 0x2bc74c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc74cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bc750:
    // 0x2bc750: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bc750u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bc754:
    // 0x2bc754: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc754u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bc758:
    // 0x2bc758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc75c:
    // 0x2bc75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc760:
    // 0x2bc760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc764:
    // 0x2bc764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc768:
    // 0x2bc768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc76c:
    // 0x2bc76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc770:
    // 0x2bc770: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2bc770u;
    // NOP (addiu $zero, ...)
label_2bc774:
    // 0x2bc774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc778:
    // 0x2bc778: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2bc77c:
    // 0x2bc77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc780:
    // 0x2bc780: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2bc784:
    // 0x2bc784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc788:
    // 0x2bc788: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2bc78c:
    if (ctx->pc == 0x2BC78Cu) {
        ctx->pc = 0x2BC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC788u;
        // 0x2bc78c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC790u;
        goto label_2bc790;
    }
    ctx->pc = 0x2BC788u;
    {
        const bool branch_taken_0x2bc788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC788u;
        // 0x2bc78c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc788) {
            ctx->pc = 0x2CC798u;
            return;
        }
    }
    ctx->pc = 0x2BC790u;
label_2bc790:
    // 0x2bc790: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2bc794:
    if (ctx->pc == 0x2BC794u) {
        ctx->pc = 0x2BC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC790u;
        // 0x2bc794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC798u;
        goto label_2bc798;
    }
    ctx->pc = 0x2BC790u;
    {
        const bool branch_taken_0x2bc790 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc790) {
            ctx->pc = 0x2BC794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC790u;
            // 0x2bc794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67ACu;
            return;
        }
    }
    ctx->pc = 0x2BC798u;
label_2bc798:
    // 0x2bc798: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bc79c:
    if (ctx->pc == 0x2BC79Cu) {
        ctx->pc = 0x2BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC798u;
        // 0x2bc79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7A0u;
        goto label_2bc7a0;
    }
    ctx->pc = 0x2BC798u;
    {
        const bool branch_taken_0x2bc798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC798u;
        // 0x2bc79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc798) {
            ctx->pc = 0x2CA7A8u;
            return;
        }
    }
    ctx->pc = 0x2BC7A0u;
label_2bc7a0:
    // 0x2bc7a0: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2bc7a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2bc7a4:
    // 0x2bc7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7a8:
    // 0x2bc7a8: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2bc7a8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2bc7ac:
    // 0x2bc7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7b0:
    // 0x2bc7b0: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2bc7b4:
    // 0x2bc7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7b8:
    // 0x2bc7b8: 0x5a00481b  blezl       $s0, . + 4 + (0x481B << 2)
label_2bc7bc:
    if (ctx->pc == 0x2BC7BCu) {
        ctx->pc = 0x2BC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7B8u;
        // 0x2bc7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7C0u;
        goto label_2bc7c0;
    }
    ctx->pc = 0x2BC7B8u;
    {
        const bool branch_taken_0x2bc7b8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc7b8) {
            ctx->pc = 0x2BC7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC7B8u;
            // 0x2bc7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE828u;
            return;
        }
    }
    ctx->pc = 0x2BC7C0u;
label_2bc7c0:
    // 0x2bc7c0: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2bc7c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2bc7c4:
    // 0x2bc7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7c8:
    // 0x2bc7c8: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2bc7c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2bc7cc:
    // 0x2bc7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7d0:
    // 0x2bc7d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc7d4:
    // 0x2bc7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7d8:
    // 0x2bc7d8: 0x520c07a2  beql        $s0, $t4, . + 4 + (0x7A2 << 2)
label_2bc7dc:
    if (ctx->pc == 0x2BC7DCu) {
        ctx->pc = 0x2BC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7D8u;
        // 0x2bc7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7E0u;
        goto label_2bc7e0;
    }
    ctx->pc = 0x2BC7D8u;
    {
        const bool branch_taken_0x2bc7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bc7d8) {
            ctx->pc = 0x2BC7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC7D8u;
            // 0x2bc7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE664u;
            { ctx->pc = 0x2be664; return; }
        }
    }
    ctx->pc = 0x2BC7E0u;
label_2bc7e0:
    // 0x2bc7e0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc7e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc7e4:
    // 0x2bc7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7e8:
    // 0x2bc7e8: 0x904100a  j           func_4104028
label_2bc7ec:
    if (ctx->pc == 0x2BC7ECu) {
        ctx->pc = 0x2BC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7E8u;
        // 0x2bc7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7F0u;
        goto label_2bc7f0;
    }
    ctx->pc = 0x2BC7E8u;
    ctx->pc = 0x2BC7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7E8u;
    // 0x2bc7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2BC7E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC7F0u;
label_2bc7f0:
    // 0x2bc7f0: 0x841100a  j           func_1044028
label_2bc7f4:
    if (ctx->pc == 0x2BC7F4u) {
        ctx->pc = 0x2BC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F0u;
        // 0x2bc7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7F8u;
        goto label_2bc7f8;
    }
    ctx->pc = 0x2BC7F0u;
    ctx->pc = 0x2BC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7F0u;
    // 0x2bc7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2BC7F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC7F8u;
label_2bc7f8:
    // 0x2bc7f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc7f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc7fc:
    // 0x2bc7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc800:
    // 0x2bc800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc804:
    // 0x2bc804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc808:
    // 0x2bc808: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bc80c:
    if (ctx->pc == 0x2BC80Cu) {
        ctx->pc = 0x2BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC808u;
        // 0x2bc80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC810u;
        goto label_2bc810;
    }
    ctx->pc = 0x2BC808u;
    {
        const bool branch_taken_0x2bc808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC808u;
        // 0x2bc80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc808) {
            ctx->pc = 0x2C4810u;
            return;
        }
    }
    ctx->pc = 0x2BC810u;
label_2bc810:
    // 0x2bc810: 0xb04100a  j           func_C104028
label_2bc814:
    if (ctx->pc == 0x2BC814u) {
        ctx->pc = 0x2BC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC810u;
        // 0x2bc814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC818u;
        goto label_2bc818;
    }
    ctx->pc = 0x2BC810u;
    ctx->pc = 0x2BC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC810u;
    // 0x2bc814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2BC810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC818u;
label_2bc818:
    // 0x2bc818: 0x5a002783  blezl       $s0, . + 4 + (0x2783 << 2)
label_2bc81c:
    if (ctx->pc == 0x2BC81Cu) {
        ctx->pc = 0x2BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC818u;
        // 0x2bc81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC820u;
        goto label_2bc820;
    }
    ctx->pc = 0x2BC818u;
    {
        const bool branch_taken_0x2bc818 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc818) {
            ctx->pc = 0x2BC81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC818u;
            // 0x2bc81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6628u;
            return;
        }
    }
    ctx->pc = 0x2BC820u;
label_2bc820:
    // 0x2bc820: 0x9030800  j           func_40C2000
label_2bc824:
    if (ctx->pc == 0x2BC824u) {
        ctx->pc = 0x2BC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC820u;
        // 0x2bc824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC828u;
        goto label_2bc828;
    }
    ctx->pc = 0x2BC820u;
    ctx->pc = 0x2BC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC820u;
    // 0x2bc824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2BC820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC828u;
label_2bc828:
    // 0x2bc828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc82c:
    // 0x2bc82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc830:
    // 0x2bc830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc834:
    // 0x2bc834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc838:
    // 0x2bc838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc83c:
    // 0x2bc83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc840:
    // 0x2bc840: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2bc844:
    if (ctx->pc == 0x2BC844u) {
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC848u;
        goto label_2bc848;
    }
    ctx->pc = 0x2BC840u;
    {
        const bool branch_taken_0x2bc840 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc840) {
            ctx->pc = 0x2C4840u;
            return;
        }
    }
    ctx->pc = 0x2BC848u;
label_2bc848:
    // 0x2bc848: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2bc848u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2bc84c:
    // 0x2bc84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc850:
    // 0x2bc850: 0xb0b0800  j           func_C2C2000
label_2bc854:
    if (ctx->pc == 0x2BC854u) {
        ctx->pc = 0x2BC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC850u;
        // 0x2bc854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC858u;
        goto label_2bc858;
    }
    ctx->pc = 0x2BC850u;
    ctx->pc = 0x2BC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC850u;
    // 0x2bc854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2BC850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC858u;
label_2bc858:
    // 0x2bc858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc85c:
    // 0x2bc85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc860:
    // 0x2bc860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc864:
    // 0x2bc864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc868:
    // 0x2bc868: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2bc86c:
    if (ctx->pc == 0x2BC86Cu) {
        ctx->pc = 0x2BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC868u;
        // 0x2bc86c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC870u;
        goto label_2bc870;
    }
    ctx->pc = 0x2BC868u;
    {
        const bool branch_taken_0x2bc868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC868u;
        // 0x2bc86c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc868) {
            ctx->pc = 0x2C0B94u;
            return;
        }
    }
    ctx->pc = 0x2BC870u;
label_2bc870:
    // 0x2bc870: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc874:
    // 0x2bc874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc878:
    // 0x2bc878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc87c:
    // 0x2bc87c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc87cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc880:
    // 0x2bc880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc884:
    // 0x2bc884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc888:
    // 0x2bc888: 0x4000074d  .word       0x4000074D                   # mfc0        $zero, Index # 0000074D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc88c:
    // 0x2bc88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc890:
    // 0x2bc890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc894:
    // 0x2bc894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc898:
    // 0x2bc898: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc89c:
    // 0x2bc89c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc89cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8a0:
    // 0x2bc8a0: 0x88e080a  j           func_2382028
label_2bc8a4:
    if (ctx->pc == 0x2BC8A4u) {
        ctx->pc = 0x2BC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8A0u;
        // 0x2bc8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8A8u;
        goto label_2bc8a8;
    }
    ctx->pc = 0x2BC8A0u;
    ctx->pc = 0x2BC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8A0u;
    // 0x2bc8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382028u, 0x2BC8A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC8A8u;
label_2bc8a8:
    // 0x2bc8a8: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2bc8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2bc8ac:
    // 0x2bc8ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8b0:
    // 0x2bc8b0: 0x52010033  beql        $s0, $at, . + 4 + (0x33 << 2)
label_2bc8b4:
    if (ctx->pc == 0x2BC8B4u) {
        ctx->pc = 0x2BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B0u;
        // 0x2bc8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8B8u;
        goto label_2bc8b8;
    }
    ctx->pc = 0x2BC8B0u;
    {
        const bool branch_taken_0x2bc8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8b0) {
            ctx->pc = 0x2BC8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8B0u;
            // 0x2bc8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC980u;
            goto label_2bc980;
        }
    }
    ctx->pc = 0x2BC8B8u;
label_2bc8b8:
    // 0x2bc8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8bc:
    // 0x2bc8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8c0:
    // 0x2bc8c0: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2bc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2bc8c4:
    // 0x2bc8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8c8:
    // 0x2bc8c8: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2bc8cc:
    if (ctx->pc == 0x2BC8CCu) {
        ctx->pc = 0x2BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8C8u;
        // 0x2bc8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8D0u;
        goto label_2bc8d0;
    }
    ctx->pc = 0x2BC8C8u;
    {
        const bool branch_taken_0x2bc8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8c8) {
            ctx->pc = 0x2BC8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8C8u;
            // 0x2bc8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC98Cu;
            goto label_2bc98c;
        }
    }
    ctx->pc = 0x2BC8D0u;
label_2bc8d0:
    // 0x2bc8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8d4:
    // 0x2bc8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8d8:
    // 0x2bc8d8: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bc8dc:
    // 0x2bc8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8e0:
    // 0x2bc8e0: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2bc8e4:
    if (ctx->pc == 0x2BC8E4u) {
        ctx->pc = 0x2BC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8E0u;
        // 0x2bc8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8E8u;
        goto label_2bc8e8;
    }
    ctx->pc = 0x2BC8E0u;
    {
        const bool branch_taken_0x2bc8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8e0) {
            ctx->pc = 0x2BC8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8E0u;
            // 0x2bc8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC998u;
            goto label_2bc998;
        }
    }
    ctx->pc = 0x2BC8E8u;
label_2bc8e8:
    // 0x2bc8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8ec:
    // 0x2bc8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8f0:
    // 0x2bc8f0: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bc8f0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bc8f4:
    // 0x2bc8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8f8:
    // 0x2bc8f8: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2bc8fc:
    if (ctx->pc == 0x2BC8FCu) {
        ctx->pc = 0x2BC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F8u;
        // 0x2bc8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC900u;
        goto label_2bc900;
    }
    ctx->pc = 0x2BC8F8u;
    {
        const bool branch_taken_0x2bc8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8f8) {
            ctx->pc = 0x2BC8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8F8u;
            // 0x2bc8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9A4u;
            goto label_2bc9a4;
        }
    }
    ctx->pc = 0x2BC900u;
label_2bc900:
    // 0x2bc900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc904:
    // 0x2bc904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc908:
    // 0x2bc908: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bc90c:
    // 0x2bc90c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc90cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc910:
    // 0x2bc910: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2bc914:
    if (ctx->pc == 0x2BC914u) {
        ctx->pc = 0x2BC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC910u;
        // 0x2bc914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC918u;
        goto label_2bc918;
    }
    ctx->pc = 0x2BC910u;
    {
        const bool branch_taken_0x2bc910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc910) {
            ctx->pc = 0x2BC914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC910u;
            // 0x2bc914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9B0u;
            goto label_2bc9b0;
        }
    }
    ctx->pc = 0x2BC918u;
label_2bc918:
    // 0x2bc918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc91c:
    // 0x2bc91c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc91cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc920:
    // 0x2bc920: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bc920u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bc924:
    // 0x2bc924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc928:
    // 0x2bc928: 0x52010024  beql        $s0, $at, . + 4 + (0x24 << 2)
label_2bc92c:
    if (ctx->pc == 0x2BC92Cu) {
        ctx->pc = 0x2BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC928u;
        // 0x2bc92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC930u;
        goto label_2bc930;
    }
    ctx->pc = 0x2BC928u;
    {
        const bool branch_taken_0x2bc928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc928) {
            ctx->pc = 0x2BC92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC928u;
            // 0x2bc92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9BCu;
            goto label_2bc9bc;
        }
    }
    ctx->pc = 0x2BC930u;
label_2bc930:
    // 0x2bc930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc934:
    // 0x2bc934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc938:
    // 0x2bc938: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2bc93c:
    if (ctx->pc == 0x2BC93Cu) {
        ctx->pc = 0x2BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC938u;
        // 0x2bc93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC940u;
        goto label_2bc940;
    }
    ctx->pc = 0x2BC938u;
    {
        const bool branch_taken_0x2bc938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC938u;
        // 0x2bc93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc938) {
            ctx->pc = 0x2D8A5Cu;
            return;
        }
    }
    ctx->pc = 0x2BC940u;
label_2bc940:
    // 0x2bc940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc944:
    // 0x2bc944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc948:
    // 0x2bc948: 0x5a00781f  blezl       $s0, . + 4 + (0x781F << 2)
label_2bc94c:
    if (ctx->pc == 0x2BC94Cu) {
        ctx->pc = 0x2BC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC948u;
        // 0x2bc94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC950u;
        goto label_2bc950;
    }
    ctx->pc = 0x2BC948u;
    {
        const bool branch_taken_0x2bc948 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc948) {
            ctx->pc = 0x2BC94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC948u;
            // 0x2bc94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9C8u;
            return;
        }
    }
    ctx->pc = 0x2BC950u;
label_2bc950:
    // 0x2bc950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc954:
    // 0x2bc954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc958:
    // 0x2bc958: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bc95c:
    if (ctx->pc == 0x2BC95Cu) {
        ctx->pc = 0x2BC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC958u;
        // 0x2bc95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC960u;
        goto label_2bc960;
    }
    ctx->pc = 0x2BC958u;
    {
        const bool branch_taken_0x2bc958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC958u;
        // 0x2bc95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc958) {
            ctx->pc = 0x2D89A4u;
            return;
        }
    }
    ctx->pc = 0x2BC960u;
label_2bc960:
    // 0x2bc960: 0x1f947f8  .word       0x01F947F8                   # dsll        $t0, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << 31);
label_2bc964:
    // 0x2bc964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc968:
    // 0x2bc968: 0x1fb47fb  .word       0x01FB47FB                   # dsra        $t0, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc968u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 27) >> 31);
label_2bc96c:
    // 0x2bc96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc970:
    // 0x2bc970: 0x1fc47fe  .word       0x01FC47FE                   # dsrl32      $t0, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 28) >> (32 + 31));
label_2bc974:
    // 0x2bc974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc978:
    // 0x2bc978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc97c:
    // 0x2bc97c: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc97cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2bc980:
    // 0x2bc980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc984:
    // 0x2bc984: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc984u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2bc988:
    // 0x2bc988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc98c:
    // 0x2bc98c: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc98cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bc990:
    // 0x2bc990: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC990 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc994:
    // 0x2bc994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc998:
    // 0x2bc998: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc998u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC998 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc99c:
    // 0x2bc99c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc99cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9a0:
    // 0x2bc9a0: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2bc9a4:
    if (ctx->pc == 0x2BC9A4u) {
        ctx->pc = 0x2BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A0u;
        // 0x2bc9a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9A8u;
        goto label_2bc9a8;
    }
    ctx->pc = 0x2BC9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2BC9A8u);
        ctx->pc = 0x2BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A0u;
        // 0x2bc9a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC9A0u, 0x2BC9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC9A8 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc9ac:
    // 0x2bc9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9b0:
    // 0x2bc9b0: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bc9b4:
    // 0x2bc9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9b8:
    // 0x2bc9b8: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bc9bc:
    // 0x2bc9bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9c0:
    // 0x2bc9c0: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC9C0 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc9c4:
    // 0x2bc9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9c8:
    // 0x2bc9c8: 0x19b37fe  .word       0x019B37FE                   # dsrl32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 27) >> (32 + 31));
label_2bc9cc:
    // 0x2bc9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9d0:
    // 0x2bc9d0: 0x19c37ff  .word       0x019C37FF                   # dsra32      $a2, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 28) >> (32 + 31));
label_2bc9d4:
    // 0x2bc9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9d8:
    // 0x2bc9d8: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bc9dc:
    // 0x2bc9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9e0:
    // 0x2bc9e0: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2bc9e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bc9e4:
    // 0x2bc9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9e8:
    // 0x2bc9e8: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2bc9e8u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bc9ec:
    // 0x2bc9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9f0:
    // 0x2bc9f0: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9f0u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2bc9f4:
    // 0x2bc9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9f8:
    // 0x2bc9f8: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2bc9f8u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bc9fc:
    // 0x2bc9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca00:
    // 0x2bca00: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2bca00u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2bca04:
    // 0x2bca04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca08:
    // 0x2bca08: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bca0c:
    // 0x2bca0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca10:
    // 0x2bca10: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bca14:
    // 0x2bca14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca18:
    // 0x2bca18: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2bca1c:
    if (ctx->pc == 0x2BCA1Cu) {
        ctx->pc = 0x2BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA18u;
        // 0x2bca1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA20u;
        goto label_2bca20;
    }
    ctx->pc = 0x2BCA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA18u;
        // 0x2bca1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA20u;
label_2bca20:
    // 0x2bca20: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2bca24:
    if (ctx->pc == 0x2BCA24u) {
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA28u;
        goto label_2bca28;
    }
    ctx->pc = 0x2BCA20u;
    {
        const bool branch_taken_0x2bca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca20) {
            ctx->pc = 0x2D8A54u;
            return;
        }
    }
    ctx->pc = 0x2BCA28u;
label_2bca28:
    // 0x2bca28: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bca28u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bca2c:
    // 0x2bca2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca30:
    // 0x2bca30: 0xa8e080a  j           func_A382028
label_2bca34:
    if (ctx->pc == 0x2BCA34u) {
        ctx->pc = 0x2BCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA30u;
        // 0x2bca34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA38u;
        goto label_2bca38;
    }
    ctx->pc = 0x2BCA30u;
    ctx->pc = 0x2BCA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA30u;
    // 0x2bca34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2BCA30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA38u;
label_2bca38:
    // 0x2bca38: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bca38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bca3c:
    // 0x2bca3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca40:
    // 0x2bca40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca44:
    // 0x2bca44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca48:
    // 0x2bca48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca4c:
    // 0x2bca4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca50:
    // 0x2bca50: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bca54:
    if (ctx->pc == 0x2BCA54u) {
        ctx->pc = 0x2BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA50u;
        // 0x2bca54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA58u;
        goto label_2bca58;
    }
    ctx->pc = 0x2BCA50u;
    {
        const bool branch_taken_0x2bca50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA50u;
        // 0x2bca54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca50) {
            ctx->pc = 0x2C2A50u;
            return;
        }
    }
    ctx->pc = 0x2BCA58u;
label_2bca58:
    // 0x2bca58: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bca58u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bca5c:
    // 0x2bca5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca60:
    // 0x2bca60: 0xa213fff  j           func_884FFFC
label_2bca64:
    if (ctx->pc == 0x2BCA64u) {
        ctx->pc = 0x2BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA60u;
        // 0x2bca64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA68u;
        goto label_2bca68;
    }
    ctx->pc = 0x2BCA60u;
    ctx->pc = 0x2BCA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA60u;
    // 0x2bca64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BCA60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA68u;
label_2bca68:
    // 0x2bca68: 0xa2147ff  j           func_8851FFC
label_2bca6c:
    if (ctx->pc == 0x2BCA6Cu) {
        ctx->pc = 0x2BCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA68u;
        // 0x2bca6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA70u;
        goto label_2bca70;
    }
    ctx->pc = 0x2BCA68u;
    ctx->pc = 0x2BCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA68u;
    // 0x2bca6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2BCA68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA70u;
label_2bca70:
    // 0x2bca70: 0x400007aa  .word       0x400007AA                   # mfc0        $zero, Index # 000007AA <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bca70u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bca74:
    // 0x2bca74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca78:
    // 0x2bca78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca7c:
    // 0x2bca7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca80:
    // 0x2bca80: 0x0  nop
    ctx->pc = 0x2bca80u;
    // NOP
label_2bca84:
    // 0x2bca84: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2bca84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bca88:
    // 0x2bca88: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bca88u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bca8c:
    // 0x2bca8c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bca8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bca90:
    // 0x2bca90: 0x848080a  j           func_1202028
label_2bca94:
    if (ctx->pc == 0x2BCA94u) {
        ctx->pc = 0x2BCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA90u;
        // 0x2bca94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA98u;
        goto label_2bca98;
    }
    ctx->pc = 0x2BCA90u;
    ctx->pc = 0x2BCA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA90u;
    // 0x2bca94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BCA90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA98u;
label_2bca98:
    // 0x2bca98: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bca9c:
    if (ctx->pc == 0x2BCA9Cu) {
        ctx->pc = 0x2BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA98u;
        // 0x2bca9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCAA0u;
        goto label_2bcaa0;
    }
    ctx->pc = 0x2BCA98u;
    {
        const bool branch_taken_0x2bca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA98u;
        // 0x2bca9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca98) {
            ctx->pc = 0x2BEDC4u;
            { ctx->pc = 0x2bedc4; return; }
        }
    }
    ctx->pc = 0x2BCAA0u;
label_2bcaa0:
    // 0x2bcaa0: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bcaa0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcaa4:
    // 0x2bcaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaa8:
    // 0x2bcaa8: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bcaa8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcaac:
    // 0x2bcaac: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcaacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bcab0:
    // 0x2bcab0: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bcab0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcab4:
    // 0x2bcab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcab8:
    // 0x2bcab8: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bcab8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcabc:
    // 0x2bcabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcac0:
    // 0x2bcac0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bcac0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcac4:
    // 0x2bcac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcac8:
    // 0x2bcac8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2bcac8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2bcacc:
    // 0x2bcacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcad0:
    // 0x2bcad0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bcad0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcad4:
    // 0x2bcad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcad8:
    // 0x2bcad8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bcadc:
    // 0x2bcadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcae0:
    // 0x2bcae0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2bcae0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bcae4:
    // 0x2bcae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcae8:
    // 0x2bcae8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2bcae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bcaec:
    // 0x2bcaec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaf0:
    // 0x2bcaf0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bcaf0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bcaf4:
    // 0x2bcaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaf8:
    // 0x2bcaf8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bcaf8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcafc:
    // 0x2bcafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb00:
    // 0x2bcb00: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bcb00u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb04:
    // 0x2bcb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb08:
    // 0x2bcb08: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bcb08u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb0c:
    // 0x2bcb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb10:
    // 0x2bcb10: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bcb10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb14:
    // 0x2bcb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb18:
    // 0x2bcb18: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bcb18u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb1c:
    // 0x2bcb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb20:
    // 0x2bcb20: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bcb20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcb24:
    // 0x2bcb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb28:
    // 0x2bcb28: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bcb2c:
    // 0x2bcb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb30:
    // 0x2bcb30: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bcb34:
    // 0x2bcb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb38:
    // 0x2bcb38: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2bcb38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bcb3c:
    // 0x2bcb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb40:
    // 0x2bcb40: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2bcb40u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bcb44:
    // 0x2bcb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb48:
    // 0x2bcb48: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bcb4c:
    if (ctx->pc == 0x2BCB4Cu) {
        ctx->pc = 0x2BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB48u;
        // 0x2bcb4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB50u;
        goto label_2bcb50;
    }
    ctx->pc = 0x2BCB48u;
    {
        const bool branch_taken_0x2bcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB48u;
        // 0x2bcb4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb48) {
            ctx->pc = 0x2BEB50u;
            { ctx->pc = 0x2beb50; return; }
        }
    }
    ctx->pc = 0x2BCB50u;
label_2bcb50:
    // 0x2bcb50: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bcb54:
    // 0x2bcb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb58:
    // 0x2bcb58: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bcb5c:
    if (ctx->pc == 0x2BCB5Cu) {
        ctx->pc = 0x2BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB58u;
        // 0x2bcb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB60u;
        goto label_2bcb60;
    }
    ctx->pc = 0x2BCB58u;
    {
        const bool branch_taken_0x2bcb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB58u;
        // 0x2bcb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb58) {
            ctx->pc = 0x2BCB5Cu;
            goto label_2bcb5c;
        }
    }
    ctx->pc = 0x2BCB60u;
label_2bcb60:
    // 0x2bcb60: 0xa8e100a  j           func_A384028
label_2bcb64:
    if (ctx->pc == 0x2BCB64u) {
        ctx->pc = 0x2BCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB60u;
        // 0x2bcb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB68u;
        goto label_2bcb68;
    }
    ctx->pc = 0x2BCB60u;
    ctx->pc = 0x2BCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB60u;
    // 0x2bcb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2BCB60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB68u;
label_2bcb68:
    // 0x2bcb68: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcb6c:
    if (ctx->pc == 0x2BCB6Cu) {
        ctx->pc = 0x2BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB68u;
        // 0x2bcb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB70u;
        goto label_2bcb70;
    }
    ctx->pc = 0x2BCB68u;
    {
        const bool branch_taken_0x2bcb68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB68u;
        // 0x2bcb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb68) {
            ctx->pc = 0x2BEB68u;
            { ctx->pc = 0x2beb68; return; }
        }
    }
    ctx->pc = 0x2BCB70u;
label_2bcb70:
    // 0x2bcb70: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2bcb74:
    if (ctx->pc == 0x2BCB74u) {
        ctx->pc = 0x2BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB70u;
        // 0x2bcb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB78u;
        goto label_2bcb78;
    }
    ctx->pc = 0x2BCB70u;
    {
        const bool branch_taken_0x2bcb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB70u;
        // 0x2bcb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb70) {
            ctx->pc = 0x2D2B88u;
            return;
        }
    }
    ctx->pc = 0x2BCB78u;
label_2bcb78:
    // 0x2bcb78: 0xb0b1000  j           func_C2C4000
label_2bcb7c:
    if (ctx->pc == 0x2BCB7Cu) {
        ctx->pc = 0x2BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB78u;
        // 0x2bcb7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB80u;
        goto label_2bcb80;
    }
    ctx->pc = 0x2BCB78u;
    ctx->pc = 0x2BCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB78u;
    // 0x2bcb7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BCB78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB80u;
label_2bcb80:
    // 0x2bcb80: 0xb0b1005  j           func_C2C4014
label_2bcb84:
    if (ctx->pc == 0x2BCB84u) {
        ctx->pc = 0x2BCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB80u;
        // 0x2bcb84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB88u;
        goto label_2bcb88;
    }
    ctx->pc = 0x2BCB80u;
    ctx->pc = 0x2BCB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB80u;
    // 0x2bcb84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2BCB80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB88u;
label_2bcb88:
    // 0x2bcb88: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcb88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BCB88 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcb8c:
    // 0x2bcb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb90:
    // 0x2bcb90: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2bcb94:
    if (ctx->pc == 0x2BCB94u) {
        ctx->pc = 0x2BCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB90u;
        // 0x2bcb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB98u;
        goto label_2bcb98;
    }
    ctx->pc = 0x2BCB90u;
    {
        const bool branch_taken_0x2bcb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB90u;
        // 0x2bcb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb90) {
            ctx->pc = 0x2BCE2Cu;
            { ctx->pc = 0x2bce2c; return; }
        }
    }
    ctx->pc = 0x2BCB98u;
label_2bcb98:
    // 0x2bcb98: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcb9c:
    if (ctx->pc == 0x2BCB9Cu) {
        ctx->pc = 0x2BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB98u;
        // 0x2bcb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBA0u;
        goto label_2bcba0;
    }
    ctx->pc = 0x2BCB98u;
    {
        const bool branch_taken_0x2bcb98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB98u;
        // 0x2bcb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb98) {
            ctx->pc = 0x2BEB98u;
            { ctx->pc = 0x2beb98; return; }
        }
    }
    ctx->pc = 0x2BCBA0u;
label_2bcba0:
    // 0x2bcba0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bcba4:
    if (ctx->pc == 0x2BCBA4u) {
        ctx->pc = 0x2BCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA0u;
        // 0x2bcba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBA8u;
        goto label_2bcba8;
    }
    ctx->pc = 0x2BCBA0u;
    {
        const bool branch_taken_0x2bcba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA0u;
        // 0x2bcba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcba0) {
            ctx->pc = 0x2D2BA8u;
            return;
        }
    }
    ctx->pc = 0x2BCBA8u;
label_2bcba8:
    // 0x2bcba8: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcba8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bcbac:
    // 0x2bcbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcbb0:
    // 0x2bcbb0: 0xb0b1000  j           func_C2C4000
label_2bcbb4:
    if (ctx->pc == 0x2BCBB4u) {
        ctx->pc = 0x2BCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB0u;
        // 0x2bcbb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBB8u;
        goto label_2bcbb8;
    }
    ctx->pc = 0x2BCBB0u;
    ctx->pc = 0x2BCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB0u;
    // 0x2bcbb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BCBB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBB8u;
label_2bcbb8:
    // 0x2bcbb8: 0x90c3000  j           func_430C000
label_2bcbbc:
    if (ctx->pc == 0x2BCBBCu) {
        ctx->pc = 0x2BCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB8u;
        // 0x2bcbbc: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBC0u;
        goto label_2bcbc0;
    }
    ctx->pc = 0x2BCBB8u;
    ctx->pc = 0x2BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB8u;
    // 0x2bcbbc: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BCBB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBC0u;
label_2bcbc0:
    // 0x2bcbc0: 0x82e3000  j           func_B8C000
label_2bcbc4:
    if (ctx->pc == 0x2BCBC4u) {
        ctx->pc = 0x2BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC0u;
        // 0x2bcbc4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBC8u;
        goto label_2bcbc8;
    }
    ctx->pc = 0x2BCBC0u;
    ctx->pc = 0x2BCBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBC0u;
    // 0x2bcbc4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BCBC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcbcc:
    if (ctx->pc == 0x2BCBCCu) {
        ctx->pc = 0x2BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC8u;
        // 0x2bcbcc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBD0u;
        goto label_2bcbd0;
    }
    ctx->pc = 0x2BCBC8u;
    {
        const bool branch_taken_0x2bcbc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC8u;
        // 0x2bcbcc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbc8) {
            ctx->pc = 0x2BEBC8u;
            { ctx->pc = 0x2bebc8; return; }
        }
    }
    ctx->pc = 0x2BCBD0u;
label_2bcbd0:
    // 0x2bcbd0: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bcbd4:
    if (ctx->pc == 0x2BCBD4u) {
        ctx->pc = 0x2BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD0u;
        // 0x2bcbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBD8u;
        goto label_2bcbd8;
    }
    ctx->pc = 0x2BCBD0u;
    {
        const bool branch_taken_0x2bcbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD0u;
        // 0x2bcbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbd0) {
            ctx->pc = 0x2C8BD8u;
            return;
        }
    }
    ctx->pc = 0x2BCBD8u;
label_2bcbd8:
    // 0x2bcbd8: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2bcbdc:
    if (ctx->pc == 0x2BCBDCu) {
        ctx->pc = 0x2BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD8u;
        // 0x2bcbdc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBE0u;
        goto label_2bcbe0;
    }
    ctx->pc = 0x2BCBD8u;
    {
        const bool branch_taken_0x2bcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD8u;
        // 0x2bcbdc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbd8) {
            ctx->pc = 0x2BCBE4u;
            goto label_2bcbe4;
        }
    }
    ctx->pc = 0x2BCBE0u;
label_2bcbe0:
    // 0x2bcbe0: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2bcbe0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2bcbe4:
    // 0x2bcbe4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bcbe4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2bcbe8:
    // 0x2bcbe8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2bcbec:
    // 0x2bcbec: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bcbecu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2bcbf0:
    // 0x2bcbf0: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2bcbf4:
    if (ctx->pc == 0x2BCBF4u) {
        ctx->pc = 0x2BCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF0u;
        // 0x2bcbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBF8u;
        goto label_2bcbf8;
    }
    ctx->pc = 0x2BCBF0u;
    {
        const bool branch_taken_0x2bcbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bcbf0) {
            ctx->pc = 0x2BCBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCBF0u;
            // 0x2bcbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCBFCu;
            goto label_2bcbfc;
        }
    }
    ctx->pc = 0x2BCBF8u;
label_2bcbf8:
    // 0x2bcbf8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2bcbfc:
    // 0x2bcbfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcbfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc00:
    // 0x2bcc00: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2bcc04:
    if (ctx->pc == 0x2BCC04u) {
        ctx->pc = 0x2BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC00u;
        // 0x2bcc04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC08u;
        goto label_2bcc08;
    }
    ctx->pc = 0x2BCC00u;
    {
        const bool branch_taken_0x2bcc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC00u;
        // 0x2bcc04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc00) {
            ctx->pc = 0x2BCC10u;
            goto label_2bcc10;
        }
    }
    ctx->pc = 0x2BCC08u;
label_2bcc08:
    // 0x2bcc08: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2bcc08u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2bcc0c:
    // 0x2bcc0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc10:
    // 0x2bcc10: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2bcc10u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2bcc14:
    // 0x2bcc14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc18:
    // 0x2bcc18: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2bcc1c:
    // 0x2bcc1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc20:
    // 0x2bcc20: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2bcc20u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2bcc24:
    // 0x2bcc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc28:
    // 0x2bcc28: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2bcc28u;
    // NOP (addi to $zero)
label_2bcc2c:
    // 0x2bcc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc30:
    // 0x2bcc30: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2bcc30u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2bcc34:
    // 0x2bcc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc38:
    // 0x2bcc38: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bcc38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcc3c:
    // 0x2bcc3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc40:
    // 0x2bcc40: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bcc40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bcc44:
    // 0x2bcc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc48:
    // 0x2bcc48: 0xa48080a  j           func_9202028
label_2bcc4c:
    if (ctx->pc == 0x2BCC4Cu) {
        ctx->pc = 0x2BCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC48u;
        // 0x2bcc4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC50u;
        goto label_2bcc50;
    }
    ctx->pc = 0x2BCC48u;
    ctx->pc = 0x2BCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC48u;
    // 0x2bcc4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2BCC48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCC50u;
label_2bcc50:
    // 0x2bcc50: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bcc50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcc54:
    // 0x2bcc54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc58:
    // 0x2bcc58: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2bcc58u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2bcc5c:
    // 0x2bcc5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc60:
    // 0x2bcc60: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2bcc64:
    // 0x2bcc64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc68:
    // 0x2bcc68: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2bcc68u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2bcc6c:
    // 0x2bcc6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc70:
    // 0x2bcc70: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bcc70u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bcc74:
    // 0x2bcc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc78:
    // 0x2bcc78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc7c:
    // 0x2bcc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc80:
    // 0x2bcc80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc84:
    // 0x2bcc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc88:
    // 0x2bcc88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc8c:
    // 0x2bcc8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc90:
    // 0x2bcc90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc94:
    // 0x2bcc94: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bcc98:
    // 0x2bcc98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc9c:
    // 0x2bcc9c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BCC9C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcca0:
    // 0x2bcca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcca4:
    // 0x2bcca4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bcca8:
    // 0x2bcca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccac:
    // 0x2bccac: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bccacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2bccb0:
    // 0x2bccb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccb4:
    // 0x2bccb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccb8:
    // 0x2bccb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccbc:
    // 0x2bccbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccc0:
    // 0x2bccc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccc4:
    // 0x2bccc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccc8:
    // 0x2bccc8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bccc8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bcccc:
    // 0x2bcccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccd0:
    // 0x2bccd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccd4:
    // 0x2bccd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccd8:
    // 0x2bccd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccdc:
    // 0x2bccdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcce0:
    // 0x2bcce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcce4:
    // 0x2bcce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcce8:
    // 0x2bcce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccec:
    // 0x2bccec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccf0:
    // 0x2bccf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccf4:
    // 0x2bccf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccf8:
    // 0x2bccf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccfc:
    // 0x2bccfc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bccfcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bcd00:
    // 0x2bcd00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd04:
    // 0x2bcd04: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bcd08:
    // 0x2bcd08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd0c:
    // 0x2bcd0c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BCD0C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcd10:
    // 0x2bcd10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd14:
    // 0x2bcd14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd18:
    // 0x2bcd18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd1c:
    // 0x2bcd1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd20:
    // 0x2bcd20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd24:
    // 0x2bcd24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bcd28u;
    return;
}

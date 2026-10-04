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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bc440u: goto label_1bc440;
        case 0x1bc444u: goto label_1bc444;
        case 0x1bc448u: goto label_1bc448;
        case 0x1bc44cu: goto label_1bc44c;
        case 0x1bc450u: goto label_1bc450;
        case 0x1bc454u: goto label_1bc454;
        case 0x1bc458u: goto label_1bc458;
        case 0x1bc45cu: goto label_1bc45c;
        case 0x1bc460u: goto label_1bc460;
        case 0x1bc464u: goto label_1bc464;
        case 0x1bc468u: goto label_1bc468;
        case 0x1bc46cu: goto label_1bc46c;
        case 0x1bc470u: goto label_1bc470;
        case 0x1bc474u: goto label_1bc474;
        case 0x1bc478u: goto label_1bc478;
        case 0x1bc47cu: goto label_1bc47c;
        case 0x1bc480u: goto label_1bc480;
        case 0x1bc484u: goto label_1bc484;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc48cu: goto label_1bc48c;
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc494u: goto label_1bc494;
        case 0x1bc498u: goto label_1bc498;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4a0u: goto label_1bc4a0;
        case 0x1bc4a4u: goto label_1bc4a4;
        case 0x1bc4a8u: goto label_1bc4a8;
        case 0x1bc4acu: goto label_1bc4ac;
        case 0x1bc4b0u: goto label_1bc4b0;
        case 0x1bc4b4u: goto label_1bc4b4;
        case 0x1bc4b8u: goto label_1bc4b8;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4c0u: goto label_1bc4c0;
        case 0x1bc4c4u: goto label_1bc4c4;
        case 0x1bc4c8u: goto label_1bc4c8;
        case 0x1bc4ccu: goto label_1bc4cc;
        case 0x1bc4d0u: goto label_1bc4d0;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4d8u: goto label_1bc4d8;
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc4e0u: goto label_1bc4e0;
        case 0x1bc4e4u: goto label_1bc4e4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc4f0u: goto label_1bc4f0;
        case 0x1bc4f4u: goto label_1bc4f4;
        case 0x1bc4f8u: goto label_1bc4f8;
        case 0x1bc4fcu: goto label_1bc4fc;
        case 0x1bc500u: goto label_1bc500;
        case 0x1bc504u: goto label_1bc504;
        case 0x1bc508u: goto label_1bc508;
        case 0x1bc50cu: goto label_1bc50c;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc514u: goto label_1bc514;
        case 0x1bc518u: goto label_1bc518;
        case 0x1bc51cu: goto label_1bc51c;
        case 0x1bc520u: goto label_1bc520;
        case 0x1bc524u: goto label_1bc524;
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc52cu: goto label_1bc52c;
        case 0x1bc530u: goto label_1bc530;
        case 0x1bc534u: goto label_1bc534;
        case 0x1bc538u: goto label_1bc538;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc540u: goto label_1bc540;
        case 0x1bc544u: goto label_1bc544;
        case 0x1bc548u: goto label_1bc548;
        case 0x1bc54cu: goto label_1bc54c;
        case 0x1bc550u: goto label_1bc550;
        case 0x1bc554u: goto label_1bc554;
        case 0x1bc558u: goto label_1bc558;
        case 0x1bc55cu: goto label_1bc55c;
        case 0x1bc560u: goto label_1bc560;
        case 0x1bc564u: goto label_1bc564;
        case 0x1bc568u: goto label_1bc568;
        case 0x1bc56cu: goto label_1bc56c;
        case 0x1bc570u: goto label_1bc570;
        case 0x1bc574u: goto label_1bc574;
        case 0x1bc578u: goto label_1bc578;
        case 0x1bc57cu: goto label_1bc57c;
        case 0x1bc580u: goto label_1bc580;
        case 0x1bc584u: goto label_1bc584;
        case 0x1bc588u: goto label_1bc588;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc590u: goto label_1bc590;
        case 0x1bc594u: goto label_1bc594;
        case 0x1bc598u: goto label_1bc598;
        case 0x1bc59cu: goto label_1bc59c;
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5a4u: goto label_1bc5a4;
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca34u: goto label_1bca34;
        case 0x1bca38u: goto label_1bca38;
        case 0x1bca3cu: goto label_1bca3c;
        case 0x1bca40u: goto label_1bca40;
        case 0x1bca44u: goto label_1bca44;
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca4cu: goto label_1bca4c;
        case 0x1bca50u: goto label_1bca50;
        case 0x1bca54u: goto label_1bca54;
        case 0x1bca58u: goto label_1bca58;
        case 0x1bca5cu: goto label_1bca5c;
        case 0x1bca60u: goto label_1bca60;
        case 0x1bca64u: goto label_1bca64;
        case 0x1bca68u: goto label_1bca68;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb18u: goto label_1bcb18;
        case 0x1bcb1cu: goto label_1bcb1c;
        case 0x1bcb20u: goto label_1bcb20;
        case 0x1bcb24u: goto label_1bcb24;
        case 0x1bcb28u: goto label_1bcb28;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb34u: goto label_1bcb34;
        case 0x1bcb38u: goto label_1bcb38;
        case 0x1bcb3cu: goto label_1bcb3c;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb44u: goto label_1bcb44;
        case 0x1bcb48u: goto label_1bcb48;
        case 0x1bcb4cu: goto label_1bcb4c;
        case 0x1bcb50u: goto label_1bcb50;
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb58u: goto label_1bcb58;
        case 0x1bcb5cu: goto label_1bcb5c;
        case 0x1bcb60u: goto label_1bcb60;
        case 0x1bcb64u: goto label_1bcb64;
        case 0x1bcb68u: goto label_1bcb68;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbd8u: goto label_1bcbd8;
        case 0x1bcbdcu: goto label_1bcbdc;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbe4u: goto label_1bcbe4;
        case 0x1bcbe8u: goto label_1bcbe8;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcbf0u: goto label_1bcbf0;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcbf8u: goto label_1bcbf8;
        case 0x1bcbfcu: goto label_1bcbfc;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc0cu: goto label_1bcc0c;
        default: return;
    }

label_1bc440:
    // 0x1bc440: 0x3e00008  jr          $ra
label_1bc444:
    if (ctx->pc == 0x1BC444u) {
        ctx->pc = 0x1BC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC440u;
        // 0x1bc444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC448u;
        goto label_1bc448;
    }
    ctx->pc = 0x1BC440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC440u;
        // 0x1bc444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC448u;
label_1bc448:
    // 0x1bc448: 0x0  nop
    ctx->pc = 0x1bc448u;
    // NOP
label_1bc44c:
    // 0x1bc44c: 0x0  nop
    ctx->pc = 0x1bc44cu;
    // NOP
label_1bc450:
    // 0x1bc450: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1bc454:
    // 0x1bc454: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bc454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1bc458:
    // 0x1bc458: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bc458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1bc45c:
    // 0x1bc45c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bc45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bc460:
    // 0x1bc460: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bc464:
    // 0x1bc464: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bc464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc468:
    // 0x1bc468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bc46c:
    // 0x1bc46c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bc46cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc470:
    // 0x1bc470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bc474:
    // 0x1bc474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bc478:
    // 0x1bc478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc47c:
    // 0x1bc47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bc480:
    // 0x1bc480: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc484:
    // 0x1bc484: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bc484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bc488:
    // 0x1bc488: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bc488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bc48c:
    // 0x1bc48c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1bc48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1bc490:
    // 0x1bc490: 0x24733620  addiu       $s3, $v1, 0x3620
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1bc494:
    // 0x1bc494: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x1bc494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_1bc498:
    // 0x1bc498: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_1bc49c:
    if (ctx->pc == 0x1BC49Cu) {
        ctx->pc = 0x1BC4A0u;
        goto label_1bc4a0;
    }
    ctx->pc = 0x1BC498u;
    {
        const bool branch_taken_0x1bc498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc498) {
            ctx->pc = 0x1BC708u;
            goto label_1bc708;
        }
    }
    ctx->pc = 0x1BC4A0u;
label_1bc4a0:
    // 0x1bc4a0: 0x8e660054  lw          $a2, 0x54($s3)
    ctx->pc = 0x1bc4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1bc4a4:
    // 0x1bc4a4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bc4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1bc4a8:
    // 0x1bc4a8: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x1bc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_1bc4ac:
    // 0x1bc4ac: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1bc4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1bc4b0:
    // 0x1bc4b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4b4:
    // 0x1bc4b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bc4b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4b8:
    // 0x1bc4b8: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bc4bc:
    // 0x1bc4bc: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bc4c0:
    // 0x1bc4c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bc4c4:
    // 0x1bc4c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc4c8:
    // 0x1bc4c8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bc4cc:
    // 0x1bc4cc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1bc4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bc4d0:
    // 0x1bc4d0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bc4d4:
    // 0x1bc4d4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bc4d8:
    // 0x1bc4d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bc4dc:
    // 0x1bc4dc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1bc4e0:
    // 0x1bc4e0: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc4e4:
    // 0x1bc4e4: 0x0  nop
    ctx->pc = 0x1bc4e4u;
    // NOP
label_1bc4e8:
    // 0x1bc4e8: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bc4ec:
    // 0x1bc4ec: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1bc4f0:
    // 0x1bc4f0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1bc4f4:
    // 0x1bc4f4: 0x8c720d80  lw          $s2, 0xD80($v1)
    ctx->pc = 0x1bc4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3456)));
label_1bc4f8:
    // 0x1bc4f8: 0x1240007f  beqz        $s2, . + 4 + (0x7F << 2)
label_1bc4fc:
    if (ctx->pc == 0x1BC4FCu) {
        ctx->pc = 0x1BC500u;
        goto label_1bc500;
    }
    ctx->pc = 0x1BC4F8u;
    {
        const bool branch_taken_0x1bc4f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4f8) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC500u;
label_1bc500:
    // 0x1bc500: 0x9243023a  lbu         $v1, 0x23A($s2)
    ctx->pc = 0x1bc500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 570)));
label_1bc504:
    // 0x1bc504: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_1bc508:
    if (ctx->pc == 0x1BC508u) {
        ctx->pc = 0x1BC50Cu;
        goto label_1bc50c;
    }
    ctx->pc = 0x1BC504u;
    {
        const bool branch_taken_0x1bc504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc504) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC50Cu;
label_1bc50c:
    // 0x1bc50c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x1bc50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_1bc510:
    // 0x1bc510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc514:
    // 0x1bc514: 0x14660078  bne         $v1, $a2, . + 4 + (0x78 << 2)
label_1bc518:
    if (ctx->pc == 0x1BC518u) {
        ctx->pc = 0x1BC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC514u;
        // 0x1bc518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC51Cu;
        goto label_1bc51c;
    }
    ctx->pc = 0x1BC514u;
    {
        const bool branch_taken_0x1bc514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC514u;
        // 0x1bc518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc514) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC51Cu;
label_1bc51c:
    // 0x1bc51c: 0xc06f1d4  jal         func_1BC750
label_1bc520:
    if (ctx->pc == 0x1BC520u) {
        ctx->pc = 0x1BC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC51Cu;
        // 0x1bc520: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC524u;
        goto label_1bc524;
    }
    ctx->pc = 0x1BC51Cu;
    SET_GPR_U32(ctx, 31, 0x1BC524u);
    ctx->pc = 0x1BC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC51Cu;
    // 0x1bc520: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    goto label_1bc750;
    ctx->pc = 0x1BC524u;
label_1bc524:
    // 0x1bc524: 0x83a2009c  lb          $v0, 0x9C($sp)
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 156)));
label_1bc528:
    // 0x1bc528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc52c:
    // 0x1bc52c: 0xa242024b  sb          $v0, 0x24B($s2)
    ctx->pc = 0x1bc52cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 587), (uint8_t)GPR_U32(ctx, 2));
label_1bc530:
    // 0x1bc530: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1bc534:
    // 0x1bc534: 0x90450018  lbu         $a1, 0x18($v0)
    ctx->pc = 0x1bc534u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_1bc538:
    // 0x1bc538: 0xc06fe14  jal         func_1BF850
label_1bc53c:
    if (ctx->pc == 0x1BC53Cu) {
        ctx->pc = 0x1BC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC538u;
        // 0x1bc53c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC540u;
        goto label_1bc540;
    }
    ctx->pc = 0x1BC538u;
    SET_GPR_U32(ctx, 31, 0x1BC540u);
    ctx->pc = 0x1BC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC538u;
    // 0x1bc53c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF850u;
    { ctx->pc = 0x1bf850; return; }
    ctx->pc = 0x1BC540u;
label_1bc540:
    // 0x1bc540: 0x92430244  lbu         $v1, 0x244($s2)
    ctx->pc = 0x1bc540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
label_1bc544:
    // 0x1bc544: 0x2063fff0  addi        $v1, $v1, -0x10
    ctx->pc = 0x1bc544u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1bc548:
    // 0x1bc548: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1bc548u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1bc54c:
    // 0x1bc54c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_1bc550:
    if (ctx->pc == 0x1BC550u) {
        ctx->pc = 0x1BC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC54Cu;
        // 0x1bc550: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC554u;
        goto label_1bc554;
    }
    ctx->pc = 0x1BC54Cu;
    {
        const bool branch_taken_0x1bc54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC54Cu;
        // 0x1bc550: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc54c) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC554u;
label_1bc554:
    // 0x1bc554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bc554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bc558:
    // 0x1bc558: 0x2484b6d0  addiu       $a0, $a0, -0x4930
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948560));
label_1bc55c:
    // 0x1bc55c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc560:
    // 0x1bc560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bc560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bc564:
    // 0x1bc564: 0x600008  jr          $v1
label_1bc568:
    if (ctx->pc == 0x1BC568u) {
        ctx->pc = 0x1BC56Cu;
        goto label_1bc56c;
    }
    ctx->pc = 0x1BC564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC56Cu: goto label_1bc56c;
            case 0x1BC580u: goto label_1bc580;
            case 0x1BC590u: goto label_1bc590;
            case 0x1BC5A0u: goto label_1bc5a0;
            case 0x1BC5B0u: goto label_1bc5b0;
            case 0x1BC5C0u: goto label_1bc5c0;
            case 0x1BC5D0u: goto label_1bc5d0;
            case 0x1BC5DCu: goto label_1bc5dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC564u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BC56Cu;
label_1bc56c:
    // 0x1bc56c: 0x0  nop
    ctx->pc = 0x1bc56cu;
    // NOP
label_1bc570:
    // 0x1bc570: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc574:
    // 0x1bc574: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bc574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bc578:
    // 0x1bc578: 0x10000018  b           . + 4 + (0x18 << 2)
label_1bc57c:
    if (ctx->pc == 0x1BC57Cu) {
        ctx->pc = 0x1BC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC578u;
        // 0x1bc57c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC580u;
        goto label_1bc580;
    }
    ctx->pc = 0x1BC578u;
    {
        const bool branch_taken_0x1bc578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC578u;
        // 0x1bc57c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc578) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC580u;
label_1bc580:
    // 0x1bc580: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc584:
    // 0x1bc584: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bc584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bc588:
    // 0x1bc588: 0x10000014  b           . + 4 + (0x14 << 2)
label_1bc58c:
    if (ctx->pc == 0x1BC58Cu) {
        ctx->pc = 0x1BC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC588u;
        // 0x1bc58c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC590u;
        goto label_1bc590;
    }
    ctx->pc = 0x1BC588u;
    {
        const bool branch_taken_0x1bc588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC588u;
        // 0x1bc58c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc588) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC590u;
label_1bc590:
    // 0x1bc590: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc594:
    // 0x1bc594: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bc594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bc598:
    // 0x1bc598: 0x10000010  b           . + 4 + (0x10 << 2)
label_1bc59c:
    if (ctx->pc == 0x1BC59Cu) {
        ctx->pc = 0x1BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC598u;
        // 0x1bc59c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5A0u;
        goto label_1bc5a0;
    }
    ctx->pc = 0x1BC598u;
    {
        const bool branch_taken_0x1bc598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC598u;
        // 0x1bc59c: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc598) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC5A0u;
label_1bc5a0:
    // 0x1bc5a0: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc5a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc5a4:
    // 0x1bc5a4: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bc5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bc5a8:
    // 0x1bc5a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bc5ac:
    if (ctx->pc == 0x1BC5ACu) {
        ctx->pc = 0x1BC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5A8u;
        // 0x1bc5ac: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5B0u;
        goto label_1bc5b0;
    }
    ctx->pc = 0x1BC5A8u;
    {
        const bool branch_taken_0x1bc5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5A8u;
        // 0x1bc5ac: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5a8) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC5B0u;
label_1bc5b0:
    // 0x1bc5b0: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc5b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc5b4:
    // 0x1bc5b4: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bc5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bc5b8:
    // 0x1bc5b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bc5bc:
    if (ctx->pc == 0x1BC5BCu) {
        ctx->pc = 0x1BC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5B8u;
        // 0x1bc5bc: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5C0u;
        goto label_1bc5c0;
    }
    ctx->pc = 0x1BC5B8u;
    {
        const bool branch_taken_0x1bc5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5B8u;
        // 0x1bc5bc: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5b8) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC5C0u;
label_1bc5c0:
    // 0x1bc5c0: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc5c4:
    // 0x1bc5c4: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bc5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bc5c8:
    // 0x1bc5c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bc5cc:
    if (ctx->pc == 0x1BC5CCu) {
        ctx->pc = 0x1BC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5C8u;
        // 0x1bc5cc: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5D0u;
        goto label_1bc5d0;
    }
    ctx->pc = 0x1BC5C8u;
    {
        const bool branch_taken_0x1bc5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5C8u;
        // 0x1bc5cc: 0xa643022c  sh          $v1, 0x22C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5c8) {
            ctx->pc = 0x1BC5DCu;
            goto label_1bc5dc;
        }
    }
    ctx->pc = 0x1BC5D0u;
label_1bc5d0:
    // 0x1bc5d0: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc5d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc5d4:
    // 0x1bc5d4: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bc5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bc5d8:
    // 0x1bc5d8: 0xa643022c  sh          $v1, 0x22C($s2)
    ctx->pc = 0x1bc5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bc5dc:
    // 0x1bc5dc: 0x0  nop
    ctx->pc = 0x1bc5dcu;
    // NOP
label_1bc5e0:
    // 0x1bc5e0: 0x92660067  lbu         $a2, 0x67($s3)
    ctx->pc = 0x1bc5e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 103)));
label_1bc5e4:
    // 0x1bc5e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bc5e8:
    // 0x1bc5e8: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bc5ec:
    // 0x1bc5ec: 0x24a55370  addiu       $a1, $a1, 0x5370
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
label_1bc5f0:
    // 0x1bc5f0: 0x9244024b  lbu         $a0, 0x24B($s2)
    ctx->pc = 0x1bc5f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 587)));
label_1bc5f4:
    // 0x1bc5f4: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bc5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bc5f8:
    // 0x1bc5f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bc5fc:
    // 0x1bc5fc: 0x90a50008  lbu         $a1, 0x8($a1)
    ctx->pc = 0x1bc5fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_1bc600:
    // 0x1bc600: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bc600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bc604:
    // 0x1bc604: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bc604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bc608:
    // 0x1bc608: 0x0  nop
    ctx->pc = 0x1bc608u;
    // NOP
label_1bc60c:
    // 0x1bc60c: 0x0  nop
    ctx->pc = 0x1bc60cu;
    // NOP
label_1bc610:
    // 0x1bc610: 0x1810  mfhi        $v1
    ctx->pc = 0x1bc610u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bc614:
    // 0x1bc614: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bc618:
    // 0x1bc618: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bc61c:
    // 0x1bc61c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc620:
    // 0x1bc620: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bc624:
    // 0x1bc624: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc628:
    if (ctx->pc == 0x1BC628u) {
        ctx->pc = 0x1BC62Cu;
        goto label_1bc62c;
    }
    ctx->pc = 0x1BC624u;
    {
        const bool branch_taken_0x1bc624 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc624) {
            ctx->pc = 0x1BC630u;
            goto label_1bc630;
        }
    }
    ctx->pc = 0x1BC62Cu;
label_1bc62c:
    // 0x1bc62c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc630:
    // 0x1bc630: 0xa243024d  sb          $v1, 0x24D($s2)
    ctx->pc = 0x1bc630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 589), (uint8_t)GPR_U32(ctx, 3));
label_1bc634:
    // 0x1bc634: 0x92640067  lbu         $a0, 0x67($s3)
    ctx->pc = 0x1bc634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 103)));
label_1bc638:
    // 0x1bc638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc63c:
    // 0x1bc63c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1bc640:
    if (ctx->pc == 0x1BC640u) {
        ctx->pc = 0x1BC644u;
        goto label_1bc644;
    }
    ctx->pc = 0x1BC63Cu;
    {
        const bool branch_taken_0x1bc63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc63c) {
            ctx->pc = 0x1BC658u;
            goto label_1bc658;
        }
    }
    ctx->pc = 0x1BC644u;
label_1bc644:
    // 0x1bc644: 0x92640069  lbu         $a0, 0x69($s3)
    ctx->pc = 0x1bc644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
label_1bc648:
    // 0x1bc648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc64c:
    // 0x1bc64c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1bc650:
    if (ctx->pc == 0x1BC650u) {
        ctx->pc = 0x1BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC64Cu;
        // 0x1bc650: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC654u;
        goto label_1bc654;
    }
    ctx->pc = 0x1BC64Cu;
    {
        const bool branch_taken_0x1bc64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC64Cu;
        // 0x1bc650: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc64c) {
            ctx->pc = 0x1BC658u;
            goto label_1bc658;
        }
    }
    ctx->pc = 0x1BC654u;
label_1bc654:
    // 0x1bc654: 0xa243024d  sb          $v1, 0x24D($s2)
    ctx->pc = 0x1bc654u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 589), (uint8_t)GPR_U32(ctx, 3));
label_1bc658:
    // 0x1bc658: 0x9264006b  lbu         $a0, 0x6B($s3)
    ctx->pc = 0x1bc658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 107)));
label_1bc65c:
    // 0x1bc65c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc660:
    // 0x1bc660: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_1bc664:
    if (ctx->pc == 0x1BC664u) {
        ctx->pc = 0x1BC668u;
        goto label_1bc668;
    }
    ctx->pc = 0x1BC660u;
    {
        const bool branch_taken_0x1bc660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc660) {
            ctx->pc = 0x1BC6E0u;
            goto label_1bc6e0;
        }
    }
    ctx->pc = 0x1BC668u;
label_1bc668:
    // 0x1bc668: 0x24041040  addiu       $a0, $zero, 0x1040
    ctx->pc = 0x1bc668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
label_1bc66c:
    // 0x1bc66c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bc670:
    // 0x1bc670: 0xa644022c  sh          $a0, 0x22C($s2)
    ctx->pc = 0x1bc670u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 4));
label_1bc674:
    // 0x1bc674: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bc674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bc678:
    // 0x1bc678: 0x9245024c  lbu         $a1, 0x24C($s2)
    ctx->pc = 0x1bc678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 588)));
label_1bc67c:
    // 0x1bc67c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1bc67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bc680:
    // 0x1bc680: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1bc680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bc684:
    // 0x1bc684: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1bc684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bc688:
    // 0x1bc688: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bc68c:
    // 0x1bc68c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1bc68cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bc690:
    // 0x1bc690: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bc690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bc694:
    // 0x1bc694: 0x0  nop
    ctx->pc = 0x1bc694u;
    // NOP
label_1bc698:
    // 0x1bc698: 0x0  nop
    ctx->pc = 0x1bc698u;
    // NOP
label_1bc69c:
    // 0x1bc69c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bc69cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bc6a0:
    // 0x1bc6a0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bc6a4:
    // 0x1bc6a4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bc6a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bc6a8:
    // 0x1bc6a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc6ac:
    // 0x1bc6ac: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc6acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bc6b0:
    // 0x1bc6b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc6b4:
    if (ctx->pc == 0x1BC6B4u) {
        ctx->pc = 0x1BC6B8u;
        goto label_1bc6b8;
    }
    ctx->pc = 0x1BC6B0u;
    {
        const bool branch_taken_0x1bc6b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6b0) {
            ctx->pc = 0x1BC6BCu;
            goto label_1bc6bc;
        }
    }
    ctx->pc = 0x1BC6B8u;
label_1bc6b8:
    // 0x1bc6b8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc6bc:
    // 0x1bc6bc: 0xa243024c  sb          $v1, 0x24C($s2)
    ctx->pc = 0x1bc6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 588), (uint8_t)GPR_U32(ctx, 3));
label_1bc6c0:
    // 0x1bc6c0: 0x9243024d  lbu         $v1, 0x24D($s2)
    ctx->pc = 0x1bc6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 589)));
label_1bc6c4:
    // 0x1bc6c4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1bc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1bc6c8:
    // 0x1bc6c8: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc6c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bc6cc:
    // 0x1bc6cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc6d0:
    if (ctx->pc == 0x1BC6D0u) {
        ctx->pc = 0x1BC6D4u;
        goto label_1bc6d4;
    }
    ctx->pc = 0x1BC6CCu;
    {
        const bool branch_taken_0x1bc6cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6cc) {
            ctx->pc = 0x1BC6D8u;
            goto label_1bc6d8;
        }
    }
    ctx->pc = 0x1BC6D4u;
label_1bc6d4:
    // 0x1bc6d4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc6d8:
    // 0x1bc6d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bc6dc:
    if (ctx->pc == 0x1BC6DCu) {
        ctx->pc = 0x1BC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6D8u;
        // 0x1bc6dc: 0xa243024d  sb          $v1, 0x24D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6E0u;
        goto label_1bc6e0;
    }
    ctx->pc = 0x1BC6D8u;
    {
        const bool branch_taken_0x1bc6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6D8u;
        // 0x1bc6dc: 0xa243024d  sb          $v1, 0x24D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6d8) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC6E0u;
label_1bc6e0:
    // 0x1bc6e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc6e4:
    // 0x1bc6e4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1bc6e8:
    if (ctx->pc == 0x1BC6E8u) {
        ctx->pc = 0x1BC6ECu;
        goto label_1bc6ec;
    }
    ctx->pc = 0x1BC6E4u;
    {
        const bool branch_taken_0x1bc6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc6e4) {
            ctx->pc = 0x1BC6F8u;
            goto label_1bc6f8;
        }
    }
    ctx->pc = 0x1BC6ECu;
label_1bc6ec:
    // 0x1bc6ec: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1bc6ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1bc6f0:
    // 0x1bc6f0: 0x3063f03f  andi        $v1, $v1, 0xF03F
    ctx->pc = 0x1bc6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61503);
label_1bc6f4:
    // 0x1bc6f4: 0xa643022c  sh          $v1, 0x22C($s2)
    ctx->pc = 0x1bc6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bc6f8:
    // 0x1bc6f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bc6fc:
    // 0x1bc6fc: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x1bc6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bc700:
    // 0x1bc700: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
label_1bc704:
    if (ctx->pc == 0x1BC704u) {
        ctx->pc = 0x1BC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC700u;
        // 0x1bc704: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC708u;
        goto label_1bc708;
    }
    ctx->pc = 0x1BC700u;
    {
        const bool branch_taken_0x1bc700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC700u;
        // 0x1bc704: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc700) {
            ctx->pc = 0x1BC4E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC708u;
label_1bc708:
    // 0x1bc708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bc70c:
    // 0x1bc70c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1bc70cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bc710:
    // 0x1bc710: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1bc710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_1bc714:
    // 0x1bc714: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
label_1bc718:
    if (ctx->pc == 0x1BC718u) {
        ctx->pc = 0x1BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC714u;
        // 0x1bc718: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC71Cu;
        goto label_1bc71c;
    }
    ctx->pc = 0x1BC714u;
    {
        const bool branch_taken_0x1bc714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC714u;
        // 0x1bc718: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc714) {
            ctx->pc = 0x1BC484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc484;
        }
    }
    ctx->pc = 0x1BC71Cu;
label_1bc71c:
    // 0x1bc71c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bc71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bc720:
    // 0x1bc720: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bc720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bc724:
    // 0x1bc724: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bc724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bc728:
    // 0x1bc728: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bc72c:
    // 0x1bc72c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc72cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc730:
    // 0x1bc730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc734:
    // 0x1bc734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc738:
    // 0x1bc738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc73c:
    // 0x1bc73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc740:
    // 0x1bc740: 0x3e00008  jr          $ra
label_1bc744:
    if (ctx->pc == 0x1BC744u) {
        ctx->pc = 0x1BC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC740u;
        // 0x1bc744: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC748u;
        goto label_1bc748;
    }
    ctx->pc = 0x1BC740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC740u;
        // 0x1bc744: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC748u;
label_1bc748:
    // 0x1bc748: 0x0  nop
    ctx->pc = 0x1bc748u;
    // NOP
label_1bc74c:
    // 0x1bc74c: 0x0  nop
    ctx->pc = 0x1bc74cu;
    // NOP
label_1bc750:
    // 0x1bc750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bc754:
    // 0x1bc754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bc758:
    // 0x1bc758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc75c:
    // 0x1bc75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bc760:
    // 0x1bc760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc764:
    // 0x1bc764: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1bc768:
    if (ctx->pc == 0x1BC768u) {
        ctx->pc = 0x1BC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC764u;
        // 0x1bc768: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC76Cu;
        goto label_1bc76c;
    }
    ctx->pc = 0x1BC764u;
    {
        const bool branch_taken_0x1bc764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC764u;
        // 0x1bc768: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc764) {
            ctx->pc = 0x1BC78Cu;
            goto label_1bc78c;
        }
    }
    ctx->pc = 0x1BC76Cu;
label_1bc76c:
    // 0x1bc76c: 0x92270074  lbu         $a3, 0x74($s1)
    ctx->pc = 0x1bc76cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
label_1bc770:
    // 0x1bc770: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bc774:
    // 0x1bc774: 0x92290075  lbu         $t1, 0x75($s1)
    ctx->pc = 0x1bc774u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
label_1bc778:
    // 0x1bc778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc77c:
    // 0x1bc77c: 0xc0804a0  jal         func_201280
label_1bc780:
    if (ctx->pc == 0x1BC780u) {
        ctx->pc = 0x1BC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC77Cu;
        // 0x1bc780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC784u;
        goto label_1bc784;
    }
    ctx->pc = 0x1BC77Cu;
    SET_GPR_U32(ctx, 31, 0x1BC784u);
    ctx->pc = 0x1BC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC77Cu;
    // 0x1bc780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    { ctx->pc = 0x201280; return; }
    ctx->pc = 0x1BC784u;
label_1bc784:
    // 0x1bc784: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bc788:
    if (ctx->pc == 0x1BC788u) {
        ctx->pc = 0x1BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC784u;
        // 0x1bc788: 0x92250063  lbu         $a1, 0x63($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC78Cu;
        goto label_1bc78c;
    }
    ctx->pc = 0x1BC784u;
    {
        const bool branch_taken_0x1bc784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC784u;
        // 0x1bc788: 0x92250063  lbu         $a1, 0x63($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc784) {
            ctx->pc = 0x1BC7A8u;
            goto label_1bc7a8;
        }
    }
    ctx->pc = 0x1BC78Cu;
label_1bc78c:
    // 0x1bc78c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bc790:
    // 0x1bc790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc794:
    // 0x1bc794: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bc798:
    // 0x1bc798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc79c:
    // 0x1bc79c: 0xc0804a0  jal         func_201280
label_1bc7a0:
    if (ctx->pc == 0x1BC7A0u) {
        ctx->pc = 0x1BC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC79Cu;
        // 0x1bc7a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7A4u;
        goto label_1bc7a4;
    }
    ctx->pc = 0x1BC79Cu;
    SET_GPR_U32(ctx, 31, 0x1BC7A4u);
    ctx->pc = 0x1BC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC79Cu;
    // 0x1bc7a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    { ctx->pc = 0x201280; return; }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x92250063  lbu         $a1, 0x63($s1)
    ctx->pc = 0x1bc7a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1bc7a8:
    // 0x1bc7a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bc7ac:
    // 0x1bc7ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bc7b0:
    // 0x1bc7b0: 0x246353a0  addiu       $v1, $v1, 0x53A0
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21408));
label_1bc7b4:
    // 0x1bc7b4: 0x24845374  addiu       $a0, $a0, 0x5374
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21364));
label_1bc7b8:
    // 0x1bc7b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bc7bc:
    // 0x1bc7bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bc7c0:
    // 0x1bc7c0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1bc7c4:
    // 0x1bc7c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc7c8:
    // 0x1bc7c8: 0x92250067  lbu         $a1, 0x67($s1)
    ctx->pc = 0x1bc7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 103)));
label_1bc7cc:
    // 0x1bc7cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc7d0:
    // 0x1bc7d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bc7d4:
    // 0x1bc7d4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bc7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc7d8:
    // 0x1bc7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bc7dc:
    // 0x1bc7dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc7e0:
    // 0x1bc7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc7e4:
    // 0x1bc7e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1bc7e8:
    // 0x1bc7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc7ec:
    // 0x1bc7ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc7f0:
    // 0x1bc7f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc7f4:
    // 0x1bc7f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc7f8:
    // 0x1bc7f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bc7fc:
    // 0x1bc7fc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1bc800:
    // 0x1bc800: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc804:
    if (ctx->pc == 0x1BC804u) {
        ctx->pc = 0x1BC808u;
        goto label_1bc808;
    }
    ctx->pc = 0x1BC800u;
    {
        const bool branch_taken_0x1bc800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc800) {
            ctx->pc = 0x1BC80Cu;
            goto label_1bc80c;
        }
    }
    ctx->pc = 0x1BC808u;
label_1bc808:
    // 0x1bc808: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bc80c:
    // 0x1bc80c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc810:
    // 0x1bc810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bc814:
    // 0x1bc814: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1bc818:
    // 0x1bc818: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc81c:
    // 0x1bc81c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1bc820:
    // 0x1bc820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bc824:
    // 0x1bc824: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1bc828:
    // 0x1bc828: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc82c:
    if (ctx->pc == 0x1BC82Cu) {
        ctx->pc = 0x1BC830u;
        goto label_1bc830;
    }
    ctx->pc = 0x1BC828u;
    {
        const bool branch_taken_0x1bc828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc828) {
            ctx->pc = 0x1BC834u;
            goto label_1bc834;
        }
    }
    ctx->pc = 0x1BC830u;
label_1bc830:
    // 0x1bc830: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bc834:
    // 0x1bc834: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1bc838:
    // 0x1bc838: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bc83c:
    // 0x1bc83c: 0x92250064  lbu         $a1, 0x64($s1)
    ctx->pc = 0x1bc83cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_1bc840:
    // 0x1bc840: 0x248453b8  addiu       $a0, $a0, 0x53B8
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
label_1bc844:
    // 0x1bc844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bc844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1bc848:
    // 0x1bc848: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bc84c:
    // 0x1bc84c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bc850:
    // 0x1bc850: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc854:
    // 0x1bc854: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc858:
    // 0x1bc858: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1bc85c:
    // 0x1bc85c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bc860:
    // 0x1bc860: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bc864:
    // 0x1bc864: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc868:
    if (ctx->pc == 0x1BC868u) {
        ctx->pc = 0x1BC86Cu;
        goto label_1bc86c;
    }
    ctx->pc = 0x1BC864u;
    {
        const bool branch_taken_0x1bc864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc864) {
            ctx->pc = 0x1BC870u;
            goto label_1bc870;
        }
    }
    ctx->pc = 0x1BC86Cu;
label_1bc86c:
    // 0x1bc86c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc870:
    // 0x1bc870: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1bc874:
    // 0x1bc874: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bc878:
    // 0x1bc878: 0x92250065  lbu         $a1, 0x65($s1)
    ctx->pc = 0x1bc878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
label_1bc87c:
    // 0x1bc87c: 0x248453e8  addiu       $a0, $a0, 0x53E8
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21480));
label_1bc880:
    // 0x1bc880: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc884:
    // 0x1bc884: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bc888:
    // 0x1bc888: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bc88c:
    // 0x1bc88c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc890:
    // 0x1bc890: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1bc890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_1bc894:
    // 0x1bc894: 0x9224006b  lbu         $a0, 0x6B($s1)
    ctx->pc = 0x1bc894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 107)));
label_1bc898:
    // 0x1bc898: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_1bc89c:
    if (ctx->pc == 0x1BC89Cu) {
        ctx->pc = 0x1BC8A0u;
        goto label_1bc8a0;
    }
    ctx->pc = 0x1BC898u;
    {
        const bool branch_taken_0x1bc898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc898) {
            ctx->pc = 0x1BC8C8u;
            goto label_1bc8c8;
        }
    }
    ctx->pc = 0x1BC8A0u;
label_1bc8a0:
    // 0x1bc8a0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1bc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc8a4:
    // 0x1bc8a4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1bc8a8:
    // 0x1bc8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc8ac:
    // 0x1bc8ac: 0x0  nop
    ctx->pc = 0x1bc8acu;
    // NOP
label_1bc8b0:
    // 0x1bc8b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bc8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bc8b4:
    // 0x1bc8b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bc8b8:
    // 0x1bc8b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bc8bc:
    // 0x1bc8bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1bc8c0:
    // 0x1bc8c0: 0x0  nop
    ctx->pc = 0x1bc8c0u;
    // NOP
label_1bc8c4:
    // 0x1bc8c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1bc8c8:
    // 0x1bc8c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bc8cc:
    // 0x1bc8cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1bc8d0:
    // 0x1bc8d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc8d4:
    // 0x1bc8d4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1bc8d8:
    // 0x1bc8d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bc8dc:
    // 0x1bc8dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bc8e0:
    // 0x1bc8e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bc8e4:
    if (ctx->pc == 0x1BC8E4u) {
        ctx->pc = 0x1BC8E8u;
        goto label_1bc8e8;
    }
    ctx->pc = 0x1BC8E0u;
    {
        const bool branch_taken_0x1bc8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8e0) {
            ctx->pc = 0x1BC8ECu;
            goto label_1bc8ec;
        }
    }
    ctx->pc = 0x1BC8E8u;
label_1bc8e8:
    // 0x1bc8e8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc8ec:
    // 0x1bc8ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1bc8f0:
    // 0x1bc8f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc8f4:
    // 0x1bc8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc8f8:
    // 0x1bc8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc8fc:
    // 0x1bc8fc: 0x3e00008  jr          $ra
label_1bc900:
    if (ctx->pc == 0x1BC900u) {
        ctx->pc = 0x1BC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8FCu;
        // 0x1bc900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC904u;
        goto label_1bc904;
    }
    ctx->pc = 0x1BC8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8FCu;
        // 0x1bc900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC904u;
label_1bc904:
    // 0x1bc904: 0x0  nop
    ctx->pc = 0x1bc904u;
    // NOP
label_1bc908:
    // 0x1bc908: 0x0  nop
    ctx->pc = 0x1bc908u;
    // NOP
label_1bc90c:
    // 0x1bc90c: 0x0  nop
    ctx->pc = 0x1bc90cu;
    // NOP
label_1bc910:
    // 0x1bc910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bc910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bc914:
    // 0x1bc914: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bc914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1bc918:
    // 0x1bc918: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bc91c:
    // 0x1bc91c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bc920:
    // 0x1bc920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bc924:
    // 0x1bc924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bc928:
    // 0x1bc928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc92c:
    // 0x1bc92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bc930:
    // 0x1bc930: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bc930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bc934:
    // 0x1bc934: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1bc934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1bc938:
    // 0x1bc938: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bc93c:
    if (ctx->pc == 0x1BC93Cu) {
        ctx->pc = 0x1BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC938u;
        // 0x1bc93c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC940u;
        goto label_1bc940;
    }
    ctx->pc = 0x1BC938u;
    {
        const bool branch_taken_0x1bc938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC938u;
        // 0x1bc93c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc938) {
            ctx->pc = 0x1BC94Cu;
            goto label_1bc94c;
        }
    }
    ctx->pc = 0x1BC940u;
label_1bc940:
    // 0x1bc940: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1bc944:
    // 0x1bc944: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bc948:
    if (ctx->pc == 0x1BC948u) {
        ctx->pc = 0x1BC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC944u;
        // 0x1bc948: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC94Cu;
        goto label_1bc94c;
    }
    ctx->pc = 0x1BC944u;
    {
        const bool branch_taken_0x1bc944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC944u;
        // 0x1bc948: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc944) {
            ctx->pc = 0x1BC954u;
            goto label_1bc954;
        }
    }
    ctx->pc = 0x1BC94Cu;
label_1bc94c:
    // 0x1bc94c: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1bc94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bc950:
    // 0x1bc950: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1bc954:
    // 0x1bc954: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
label_1bc958:
    // 0x1bc958: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bc958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc95c:
    // 0x1bc95c: 0x26732570  addiu       $s3, $s3, 0x2570
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9584));
label_1bc960:
    // 0x1bc960: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bc960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc964:
    // 0x1bc964: 0x0  nop
    ctx->pc = 0x1bc964u;
    // NOP
label_1bc968:
    // 0x1bc968: 0x9263003d  lbu         $v1, 0x3D($s3)
    ctx->pc = 0x1bc968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 61)));
label_1bc96c:
    // 0x1bc96c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_1bc970:
    if (ctx->pc == 0x1BC970u) {
        ctx->pc = 0x1BC974u;
        goto label_1bc974;
    }
    ctx->pc = 0x1BC96Cu;
    {
        const bool branch_taken_0x1bc96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc96c) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC974u;
label_1bc974:
    // 0x1bc974: 0x92640039  lbu         $a0, 0x39($s3)
    ctx->pc = 0x1bc974u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
label_1bc978:
    // 0x1bc978: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bc978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bc97c:
    // 0x1bc97c: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
label_1bc980:
    if (ctx->pc == 0x1BC980u) {
        ctx->pc = 0x1BC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC97Cu;
        // 0x1bc980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC984u;
        goto label_1bc984;
    }
    ctx->pc = 0x1BC97Cu;
    {
        const bool branch_taken_0x1bc97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC97Cu;
        // 0x1bc980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc97c) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC984u;
label_1bc984:
    // 0x1bc984: 0xc06fe90  jal         func_1BFA40
label_1bc988:
    if (ctx->pc == 0x1BC988u) {
        ctx->pc = 0x1BC98Cu;
        goto label_1bc98c;
    }
    ctx->pc = 0x1BC984u;
    SET_GPR_U32(ctx, 31, 0x1BC98Cu);
    ctx->pc = 0x1BFA40u;
    { ctx->pc = 0x1bfa40; return; }
    ctx->pc = 0x1BC98Cu;
label_1bc98c:
    // 0x1bc98c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1bc990:
    if (ctx->pc == 0x1BC990u) {
        ctx->pc = 0x1BC994u;
        goto label_1bc994;
    }
    ctx->pc = 0x1BC98Cu;
    {
        const bool branch_taken_0x1bc98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc98c) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC994u;
label_1bc994:
    // 0x1bc994: 0x938384c7  lbu         $v1, -0x7B39($gp)
    ctx->pc = 0x1bc994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935751)));
label_1bc998:
    // 0x1bc998: 0x9265002a  lbu         $a1, 0x2A($s3)
    ctx->pc = 0x1bc998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
label_1bc99c:
    // 0x1bc99c: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1bc9a0:
    // 0x1bc9a0: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1bc9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bc9a4:
    // 0x1bc9a4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1bc9a8:
    if (ctx->pc == 0x1BC9A8u) {
        ctx->pc = 0x1BC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A4u;
        // 0x1bc9a8: 0x278384c0  addiu       $v1, $gp, -0x7B40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9ACu;
        goto label_1bc9ac;
    }
    ctx->pc = 0x1BC9A4u;
    {
        const bool branch_taken_0x1bc9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A4u;
        // 0x1bc9a8: 0x278384c0  addiu       $v1, $gp, -0x7B40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9a4) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC9ACu;
label_1bc9ac:
    // 0x1bc9ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1bc9b0:
    // 0x1bc9b0: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1bc9b4:
    // 0x1bc9b4: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x1bc9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1bc9b8:
    // 0x1bc9b8: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1bc9bc:
    // 0x1bc9bc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1bc9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bc9c0:
    // 0x1bc9c0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1bc9c4:
    if (ctx->pc == 0x1BC9C4u) {
        ctx->pc = 0x1BC9C8u;
        goto label_1bc9c8;
    }
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bc9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9cc:
    // 0x1bc9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9d0:
    // 0x1bc9d0: 0x8f8684e0  lw          $a2, -0x7B20($gp)
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bc9d4:
    // 0x1bc9d4: 0x0  nop
    ctx->pc = 0x1bc9d4u;
    // NOP
label_1bc9d8:
    // 0x1bc9d8: 0x0  nop
    ctx->pc = 0x1bc9d8u;
    // NOP
label_1bc9dc:
    // 0x1bc9dc: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1bc9e0:
    // 0x1bc9e0: 0x9084002e  lbu         $a0, 0x2E($a0)
    ctx->pc = 0x1bc9e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_1bc9e4:
    // 0x1bc9e4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1bc9e8:
    if (ctx->pc == 0x1BC9E8u) {
        ctx->pc = 0x1BC9ECu;
        goto label_1bc9ec;
    }
    ctx->pc = 0x1BC9E4u;
    {
        const bool branch_taken_0x1bc9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9e4) {
            ctx->pc = 0x1BCA34u;
            goto label_1bca34;
        }
    }
    ctx->pc = 0x1BC9ECu;
label_1bc9ec:
    // 0x1bc9ec: 0x938984c7  lbu         $t1, -0x7B39($gp)
    ctx->pc = 0x1bc9ecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935751)));
label_1bc9f0:
    // 0x1bc9f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bc9f4:
    // 0x1bc9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc9f8:
    // 0x1bc9f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bc9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9fc:
    // 0x1bc9fc: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1bc9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bca00:
    // 0x1bca00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bca04:
    // 0x1bca04: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1bca08:
    // 0x1bca08: 0xa38284c7  sb          $v0, -0x7B39($gp)
    ctx->pc = 0x1bca08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935751), (uint8_t)GPR_U32(ctx, 2));
label_1bca0c:
    // 0x1bca0c: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1bca0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1bca10:
    // 0x1bca10: 0x9262002a  lbu         $v0, 0x2A($s3)
    ctx->pc = 0x1bca10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
label_1bca14:
    // 0x1bca14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bca18:
    // 0x1bca18: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1bca18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_1bca1c:
    // 0x1bca1c: 0xa2630039  sb          $v1, 0x39($s3)
    ctx->pc = 0x1bca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 57), (uint8_t)GPR_U32(ctx, 3));
label_1bca20:
    // 0x1bca20: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bca24:
    // 0x1bca24: 0xc06f2a4  jal         func_1BCA90
label_1bca28:
    if (ctx->pc == 0x1BCA28u) {
        ctx->pc = 0x1BCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA24u;
        // 0x1bca28: 0x482821  addu        $a1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA2Cu;
        goto label_1bca2c;
    }
    ctx->pc = 0x1BCA24u;
    SET_GPR_U32(ctx, 31, 0x1BCA2Cu);
    ctx->pc = 0x1BCA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA24u;
    // 0x1bca28: 0x482821  addu        $a1, $v0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA90u;
    goto label_1bca90;
    ctx->pc = 0x1BCA2Cu;
label_1bca2c:
    // 0x1bca2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bca30:
    if (ctx->pc == 0x1BCA30u) {
        ctx->pc = 0x1BCA34u;
        goto label_1bca34;
    }
    ctx->pc = 0x1BCA2Cu;
    {
        const bool branch_taken_0x1bca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca2c) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BCA34u;
label_1bca34:
    // 0x1bca34: 0x0  nop
    ctx->pc = 0x1bca34u;
    // NOP
label_1bca38:
    // 0x1bca38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bca3c:
    // 0x1bca3c: 0x28640048  slti        $a0, $v1, 0x48
    ctx->pc = 0x1bca3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
label_1bca40:
    // 0x1bca40: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
label_1bca44:
    if (ctx->pc == 0x1BCA44u) {
        ctx->pc = 0x1BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA40u;
        // 0x1bca44: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA48u;
        goto label_1bca48;
    }
    ctx->pc = 0x1BCA40u;
    {
        const bool branch_taken_0x1bca40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA40u;
        // 0x1bca44: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca40) {
            ctx->pc = 0x1BC9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc9d8;
        }
    }
    ctx->pc = 0x1BCA48u;
label_1bca48:
    // 0x1bca48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bca48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1bca4c:
    // 0x1bca4c: 0x2aa300ff  slti        $v1, $s5, 0xFF
    ctx->pc = 0x1bca4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bca50:
    // 0x1bca50: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_1bca54:
    if (ctx->pc == 0x1BCA54u) {
        ctx->pc = 0x1BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA50u;
        // 0x1bca54: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA58u;
        goto label_1bca58;
    }
    ctx->pc = 0x1BCA50u;
    {
        const bool branch_taken_0x1bca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA50u;
        // 0x1bca54: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca50) {
            ctx->pc = 0x1BC964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BCA58u;
label_1bca58:
    // 0x1bca58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bca5c:
    // 0x1bca5c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1bca5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bca60:
    // 0x1bca60: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_1bca64:
    if (ctx->pc == 0x1BCA64u) {
        ctx->pc = 0x1BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA60u;
        // 0x1bca64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA68u;
        goto label_1bca68;
    }
    ctx->pc = 0x1BCA60u;
    {
        const bool branch_taken_0x1bca60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA60u;
        // 0x1bca64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca60) {
            ctx->pc = 0x1BC964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BCA68u;
label_1bca68:
    // 0x1bca68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bca6c:
    // 0x1bca6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bca6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bca70:
    // 0x1bca70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bca70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bca74:
    // 0x1bca74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bca74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bca78:
    // 0x1bca78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bca78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bca7c:
    // 0x1bca7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bca7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bca80:
    // 0x1bca80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bca80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bca84:
    // 0x1bca84: 0x3e00008  jr          $ra
label_1bca88:
    if (ctx->pc == 0x1BCA88u) {
        ctx->pc = 0x1BCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA84u;
        // 0x1bca88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA8Cu;
        goto label_1bca8c;
    }
    ctx->pc = 0x1BCA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA84u;
        // 0x1bca88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA8Cu;
label_1bca8c:
    // 0x1bca8c: 0x0  nop
    ctx->pc = 0x1bca8cu;
    // NOP
label_1bca90:
    // 0x1bca90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1bca94:
    // 0x1bca94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1bca98:
    // 0x1bca98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1bca9c:
    // 0x1bca9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1bcaa0:
    // 0x1bcaa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bcaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bcaa4:
    // 0x1bcaa4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1bcaa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bcaa8:
    // 0x1bcaa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bcaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bcaac:
    // 0x1bcaac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bcaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcab0:
    // 0x1bcab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bcab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bcab4:
    // 0x1bcab4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1bcab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bcab8:
    // 0x1bcab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bcab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bcabc:
    // 0x1bcabc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bcabcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac0:
    // 0x1bcac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bcac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bcac4:
    // 0x1bcac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bcac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bcac8:
    // 0x1bcac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bcac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bcacc:
    // 0x1bcacc: 0x8f9084d0  lw          $s0, -0x7B30($gp)
    ctx->pc = 0x1bcaccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_1bcad0:
    // 0x1bcad0: 0x0  nop
    ctx->pc = 0x1bcad0u;
    // NOP
label_1bcad4:
    // 0x1bcad4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bcad8:
    // 0x1bcad8: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bcadc:
    // 0x1bcadc: 0x92030238  lbu         $v1, 0x238($s0)
    ctx->pc = 0x1bcadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 568)));
label_1bcae0:
    // 0x1bcae0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_1bcae4:
    if (ctx->pc == 0x1BCAE4u) {
        ctx->pc = 0x1BCAE8u;
        goto label_1bcae8;
    }
    ctx->pc = 0x1BCAE0u;
    {
        const bool branch_taken_0x1bcae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bcae0) {
            ctx->pc = 0x1BCAFCu;
            goto label_1bcafc;
        }
    }
    ctx->pc = 0x1BCAE8u;
label_1bcae8:
    // 0x1bcae8: 0x92030233  lbu         $v1, 0x233($s0)
    ctx->pc = 0x1bcae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_1bcaec:
    // 0x1bcaec: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1bcaf0:
    if (ctx->pc == 0x1BCAF0u) {
        ctx->pc = 0x1BCAF4u;
        goto label_1bcaf4;
    }
    ctx->pc = 0x1BCAECu;
    {
        const bool branch_taken_0x1bcaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcaec) {
            ctx->pc = 0x1BCAFCu;
            goto label_1bcafc;
        }
    }
    ctx->pc = 0x1BCAF4u;
label_1bcaf4:
    // 0x1bcaf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bcaf8:
    if (ctx->pc == 0x1BCAF8u) {
        ctx->pc = 0x1BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF4u;
        // 0x1bcaf8: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAFCu;
        goto label_1bcafc;
    }
    ctx->pc = 0x1BCAF4u;
    {
        const bool branch_taken_0x1bcaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF4u;
        // 0x1bcaf8: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcaf4) {
            ctx->pc = 0x1BCB14u;
            goto label_1bcb14;
        }
    }
    ctx->pc = 0x1BCAFCu;
label_1bcafc:
    // 0x1bcafc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bcafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bcb00:
    // 0x1bcb00: 0x28c30080  slti        $v1, $a2, 0x80
    ctx->pc = 0x1bcb00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_1bcb04:
    // 0x1bcb04: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1bcb08:
    if (ctx->pc == 0x1BCB08u) {
        ctx->pc = 0x1BCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB04u;
        // 0x1bcb08: 0x26100290  addiu       $s0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB0Cu;
        goto label_1bcb0c;
    }
    ctx->pc = 0x1BCB04u;
    {
        const bool branch_taken_0x1bcb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB04u;
        // 0x1bcb08: 0x26100290  addiu       $s0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb04) {
            ctx->pc = 0x1BCADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcadc;
        }
    }
    ctx->pc = 0x1BCB0Cu;
label_1bcb0c:
    // 0x1bcb0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bcb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb10:
    // 0x1bcb10: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1bcb10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_1bcb14:
    // 0x1bcb14: 0x120000bb  beqz        $s0, . + 4 + (0xBB << 2)
label_1bcb18:
    if (ctx->pc == 0x1BCB18u) {
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB1Cu;
        goto label_1bcb1c;
    }
    ctx->pc = 0x1BCB14u;
    {
        const bool branch_taken_0x1bcb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb14) {
            ctx->pc = 0x1BCE04u;
            { ctx->pc = 0x1bce04; return; }
        }
    }
    ctx->pc = 0x1BCB1Cu;
label_1bcb1c:
    // 0x1bcb1c: 0xc043f7c  jal         func_10FDF0
label_1bcb20:
    if (ctx->pc == 0x1BCB20u) {
        ctx->pc = 0x1BCB24u;
        goto label_1bcb24;
    }
    ctx->pc = 0x1BCB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB24u);
    ctx->pc = 0x10FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDF0u, 0x1BCB1Cu, 0x1BCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB24u;
label_1bcb24:
    // 0x1bcb24: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1bcb24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bcb28:
    // 0x1bcb28: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bcb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bcb2c:
    // 0x1bcb2c: 0xa2a2002c  sb          $v0, 0x2C($s5)
    ctx->pc = 0x1bcb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 44), (uint8_t)GPR_U32(ctx, 2));
label_1bcb30:
    // 0x1bcb30: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bcb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1bcb34:
    // 0x1bcb34: 0xa2a2002f  sb          $v0, 0x2F($s5)
    ctx->pc = 0x1bcb34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 47), (uint8_t)GPR_U32(ctx, 2));
label_1bcb38:
    // 0x1bcb38: 0xa2a0002d  sb          $zero, 0x2D($s5)
    ctx->pc = 0x1bcb38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 45), (uint8_t)GPR_U32(ctx, 0));
label_1bcb3c:
    // 0x1bcb3c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bcb40:
    // 0x1bcb40: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x1bcb40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
label_1bcb44:
    // 0x1bcb44: 0xa2a0002e  sb          $zero, 0x2E($s5)
    ctx->pc = 0x1bcb44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 46), (uint8_t)GPR_U32(ctx, 0));
label_1bcb48:
    // 0x1bcb48: 0x92820020  lbu         $v0, 0x20($s4)
    ctx->pc = 0x1bcb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
label_1bcb4c:
    // 0x1bcb4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1bcb50:
    if (ctx->pc == 0x1BCB50u) {
        ctx->pc = 0x1BCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB4Cu;
        // 0x1bcb50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB54u;
        goto label_1bcb54;
    }
    ctx->pc = 0x1BCB4Cu;
    {
        const bool branch_taken_0x1bcb4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB4Cu;
        // 0x1bcb50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb4c) {
            ctx->pc = 0x1BCB60u;
            goto label_1bcb60;
        }
    }
    ctx->pc = 0x1BCB54u;
label_1bcb54:
    // 0x1bcb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb58:
    // 0x1bcb58: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bcb5c:
    if (ctx->pc == 0x1BCB5Cu) {
        ctx->pc = 0x1BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB58u;
        // 0x1bcb5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB60u;
        goto label_1bcb60;
    }
    ctx->pc = 0x1BCB58u;
    {
        const bool branch_taken_0x1bcb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB58u;
        // 0x1bcb5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb58) {
            ctx->pc = 0x1BCB78u;
            goto label_1bcb78;
        }
    }
    ctx->pc = 0x1BCB60u;
label_1bcb60:
    // 0x1bcb60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bcb64:
    // 0x1bcb64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bcb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1bcb68:
    // 0x1bcb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb6c:
    // 0x1bcb6c: 0x0  nop
    ctx->pc = 0x1bcb6cu;
    // NOP
label_1bcb70:
    // 0x1bcb70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bcb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bcb74:
    // 0x1bcb74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bcb74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bcb78:
    // 0x1bcb78: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1bcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_1bcb7c:
    // 0x1bcb7c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1bcb80:
    // 0x1bcb80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcb80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb84:
    // 0x1bcb84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bcb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bcb88:
    // 0x1bcb88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcb8c:
    // 0x1bcb8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bcb8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bcb90:
    // 0x1bcb90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcb94:
    // 0x1bcb94: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1bcb98:
    // 0x1bcb98: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1bcb98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bcb9c:
    // 0x1bcb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcba0:
    // 0x1bcba0: 0x0  nop
    ctx->pc = 0x1bcba0u;
    // NOP
label_1bcba4:
    // 0x1bcba4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bcba4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1bcba8:
    // 0x1bcba8: 0x0  nop
    ctx->pc = 0x1bcba8u;
    // NOP
label_1bcbac:
    // 0x1bcbac: 0x0  nop
    ctx->pc = 0x1bcbacu;
    // NOP
label_1bcbb0:
    // 0x1bcbb0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1bcbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcbb4:
    // 0x1bcbb4: 0x0  nop
    ctx->pc = 0x1bcbb4u;
    // NOP
label_1bcbb8:
    // 0x1bcbb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bcbbc:
    if (ctx->pc == 0x1BCBBCu) {
        ctx->pc = 0x1BCBC0u;
        goto label_1bcbc0;
    }
    ctx->pc = 0x1BCBB8u;
    {
        const bool branch_taken_0x1bcbb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcbb8) {
            ctx->pc = 0x1BCBC4u;
            goto label_1bcbc4;
        }
    }
    ctx->pc = 0x1BCBC0u;
label_1bcbc0:
    // 0x1bcbc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bcbc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbc4:
    // 0x1bcbc4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bcbc8:
    if (ctx->pc == 0x1BCBC8u) {
        ctx->pc = 0x1BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC4u;
        // 0x1bcbc8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBCCu;
        goto label_1bcbcc;
    }
    ctx->pc = 0x1BCBC4u;
    {
        const bool branch_taken_0x1bcbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC4u;
        // 0x1bcbc8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbc4) {
            ctx->pc = 0x1BCBE0u;
            goto label_1bcbe0;
        }
    }
    ctx->pc = 0x1BCBCCu;
label_1bcbcc:
    // 0x1bcbcc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1bcbd0:
    // 0x1bcbd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bcbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bcbd4:
    // 0x1bcbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcbd8:
    // 0x1bcbd8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bcbdc:
    if (ctx->pc == 0x1BCBDCu) {
        ctx->pc = 0x1BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD8u;
        // 0x1bcbdc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBE0u;
        goto label_1bcbe0;
    }
    ctx->pc = 0x1BCBD8u;
    {
        const bool branch_taken_0x1bcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD8u;
        // 0x1bcbdc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd8) {
            ctx->pc = 0x1BCC10u;
            { ctx->pc = 0x1bcc10; return; }
        }
    }
    ctx->pc = 0x1BCBE0u;
label_1bcbe0:
    // 0x1bcbe0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bcbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bcbe4:
    // 0x1bcbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcbe8:
    // 0x1bcbe8: 0x0  nop
    ctx->pc = 0x1bcbe8u;
    // NOP
label_1bcbec:
    // 0x1bcbec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcbf0:
    // 0x1bcbf0: 0x0  nop
    ctx->pc = 0x1bcbf0u;
    // NOP
label_1bcbf4:
    // 0x1bcbf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bcbf8:
    if (ctx->pc == 0x1BCBF8u) {
        ctx->pc = 0x1BCBFCu;
        goto label_1bcbfc;
    }
    ctx->pc = 0x1BCBF4u;
    {
        const bool branch_taken_0x1bcbf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcbf4) {
            ctx->pc = 0x1BCC10u;
            { ctx->pc = 0x1bcc10; return; }
        }
    }
    ctx->pc = 0x1BCBFCu;
label_1bcbfc:
    // 0x1bcbfc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1bcc00:
    // 0x1bcc00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bcc04:
    // 0x1bcc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcc08:
    // 0x1bcc08: 0x10000001  b           . + 4 + (0x1 << 2)
label_1bcc0c:
    if (ctx->pc == 0x1BCC0Cu) {
        ctx->pc = 0x1BCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC08u;
        // 0x1bcc0c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC10u;
        { ctx->pc = 0x1bcc10; return; }
    }
    ctx->pc = 0x1BCC08u;
    {
        const bool branch_taken_0x1bcc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC08u;
        // 0x1bcc0c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc08) {
            ctx->pc = 0x1BCC10u;
            { ctx->pc = 0x1bcc10; return; }
        }
    }
    ctx->pc = 0x1BCC10u;
    ctx->pc = 0x1bcc10u;
    return;
}

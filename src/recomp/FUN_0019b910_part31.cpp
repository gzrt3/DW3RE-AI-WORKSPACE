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


void FUN_0019b910_part31(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1aa370u: goto label_1aa370;
        case 0x1aa374u: goto label_1aa374;
        case 0x1aa378u: goto label_1aa378;
        case 0x1aa37cu: goto label_1aa37c;
        case 0x1aa380u: goto label_1aa380;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa388u: goto label_1aa388;
        case 0x1aa38cu: goto label_1aa38c;
        case 0x1aa390u: goto label_1aa390;
        case 0x1aa394u: goto label_1aa394;
        case 0x1aa398u: goto label_1aa398;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a0u: goto label_1aa3a0;
        case 0x1aa3a4u: goto label_1aa3a4;
        case 0x1aa3a8u: goto label_1aa3a8;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3b0u: goto label_1aa3b0;
        case 0x1aa3b4u: goto label_1aa3b4;
        case 0x1aa3b8u: goto label_1aa3b8;
        case 0x1aa3bcu: goto label_1aa3bc;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3c4u: goto label_1aa3c4;
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3ccu: goto label_1aa3cc;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3d4u: goto label_1aa3d4;
        case 0x1aa3d8u: goto label_1aa3d8;
        case 0x1aa3dcu: goto label_1aa3dc;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3e4u: goto label_1aa3e4;
        case 0x1aa3e8u: goto label_1aa3e8;
        case 0x1aa3ecu: goto label_1aa3ec;
        case 0x1aa3f0u: goto label_1aa3f0;
        case 0x1aa3f4u: goto label_1aa3f4;
        case 0x1aa3f8u: goto label_1aa3f8;
        case 0x1aa3fcu: goto label_1aa3fc;
        case 0x1aa400u: goto label_1aa400;
        case 0x1aa404u: goto label_1aa404;
        case 0x1aa408u: goto label_1aa408;
        case 0x1aa40cu: goto label_1aa40c;
        case 0x1aa410u: goto label_1aa410;
        case 0x1aa414u: goto label_1aa414;
        case 0x1aa418u: goto label_1aa418;
        case 0x1aa41cu: goto label_1aa41c;
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa424u: goto label_1aa424;
        case 0x1aa428u: goto label_1aa428;
        case 0x1aa42cu: goto label_1aa42c;
        case 0x1aa430u: goto label_1aa430;
        case 0x1aa434u: goto label_1aa434;
        case 0x1aa438u: goto label_1aa438;
        case 0x1aa43cu: goto label_1aa43c;
        case 0x1aa440u: goto label_1aa440;
        case 0x1aa444u: goto label_1aa444;
        case 0x1aa448u: goto label_1aa448;
        case 0x1aa44cu: goto label_1aa44c;
        case 0x1aa450u: goto label_1aa450;
        case 0x1aa454u: goto label_1aa454;
        case 0x1aa458u: goto label_1aa458;
        case 0x1aa45cu: goto label_1aa45c;
        case 0x1aa460u: goto label_1aa460;
        case 0x1aa464u: goto label_1aa464;
        case 0x1aa468u: goto label_1aa468;
        case 0x1aa46cu: goto label_1aa46c;
        case 0x1aa470u: goto label_1aa470;
        case 0x1aa474u: goto label_1aa474;
        case 0x1aa478u: goto label_1aa478;
        case 0x1aa47cu: goto label_1aa47c;
        case 0x1aa480u: goto label_1aa480;
        case 0x1aa484u: goto label_1aa484;
        case 0x1aa488u: goto label_1aa488;
        case 0x1aa48cu: goto label_1aa48c;
        case 0x1aa490u: goto label_1aa490;
        case 0x1aa494u: goto label_1aa494;
        case 0x1aa498u: goto label_1aa498;
        case 0x1aa49cu: goto label_1aa49c;
        case 0x1aa4a0u: goto label_1aa4a0;
        case 0x1aa4a4u: goto label_1aa4a4;
        case 0x1aa4a8u: goto label_1aa4a8;
        case 0x1aa4acu: goto label_1aa4ac;
        case 0x1aa4b0u: goto label_1aa4b0;
        case 0x1aa4b4u: goto label_1aa4b4;
        case 0x1aa4b8u: goto label_1aa4b8;
        case 0x1aa4bcu: goto label_1aa4bc;
        case 0x1aa4c0u: goto label_1aa4c0;
        case 0x1aa4c4u: goto label_1aa4c4;
        case 0x1aa4c8u: goto label_1aa4c8;
        case 0x1aa4ccu: goto label_1aa4cc;
        case 0x1aa4d0u: goto label_1aa4d0;
        case 0x1aa4d4u: goto label_1aa4d4;
        case 0x1aa4d8u: goto label_1aa4d8;
        case 0x1aa4dcu: goto label_1aa4dc;
        case 0x1aa4e0u: goto label_1aa4e0;
        case 0x1aa4e4u: goto label_1aa4e4;
        case 0x1aa4e8u: goto label_1aa4e8;
        case 0x1aa4ecu: goto label_1aa4ec;
        case 0x1aa4f0u: goto label_1aa4f0;
        case 0x1aa4f4u: goto label_1aa4f4;
        case 0x1aa4f8u: goto label_1aa4f8;
        case 0x1aa4fcu: goto label_1aa4fc;
        case 0x1aa500u: goto label_1aa500;
        case 0x1aa504u: goto label_1aa504;
        case 0x1aa508u: goto label_1aa508;
        case 0x1aa50cu: goto label_1aa50c;
        case 0x1aa510u: goto label_1aa510;
        case 0x1aa514u: goto label_1aa514;
        case 0x1aa518u: goto label_1aa518;
        case 0x1aa51cu: goto label_1aa51c;
        case 0x1aa520u: goto label_1aa520;
        case 0x1aa524u: goto label_1aa524;
        case 0x1aa528u: goto label_1aa528;
        case 0x1aa52cu: goto label_1aa52c;
        case 0x1aa530u: goto label_1aa530;
        case 0x1aa534u: goto label_1aa534;
        case 0x1aa538u: goto label_1aa538;
        case 0x1aa53cu: goto label_1aa53c;
        case 0x1aa540u: goto label_1aa540;
        case 0x1aa544u: goto label_1aa544;
        case 0x1aa548u: goto label_1aa548;
        case 0x1aa54cu: goto label_1aa54c;
        case 0x1aa550u: goto label_1aa550;
        case 0x1aa554u: goto label_1aa554;
        case 0x1aa558u: goto label_1aa558;
        case 0x1aa55cu: goto label_1aa55c;
        case 0x1aa560u: goto label_1aa560;
        case 0x1aa564u: goto label_1aa564;
        case 0x1aa568u: goto label_1aa568;
        case 0x1aa56cu: goto label_1aa56c;
        case 0x1aa570u: goto label_1aa570;
        case 0x1aa574u: goto label_1aa574;
        case 0x1aa578u: goto label_1aa578;
        case 0x1aa57cu: goto label_1aa57c;
        case 0x1aa580u: goto label_1aa580;
        case 0x1aa584u: goto label_1aa584;
        case 0x1aa588u: goto label_1aa588;
        case 0x1aa58cu: goto label_1aa58c;
        case 0x1aa590u: goto label_1aa590;
        case 0x1aa594u: goto label_1aa594;
        case 0x1aa598u: goto label_1aa598;
        case 0x1aa59cu: goto label_1aa59c;
        case 0x1aa5a0u: goto label_1aa5a0;
        case 0x1aa5a4u: goto label_1aa5a4;
        case 0x1aa5a8u: goto label_1aa5a8;
        case 0x1aa5acu: goto label_1aa5ac;
        case 0x1aa5b0u: goto label_1aa5b0;
        case 0x1aa5b4u: goto label_1aa5b4;
        case 0x1aa5b8u: goto label_1aa5b8;
        case 0x1aa5bcu: goto label_1aa5bc;
        case 0x1aa5c0u: goto label_1aa5c0;
        case 0x1aa5c4u: goto label_1aa5c4;
        case 0x1aa5c8u: goto label_1aa5c8;
        case 0x1aa5ccu: goto label_1aa5cc;
        case 0x1aa5d0u: goto label_1aa5d0;
        case 0x1aa5d4u: goto label_1aa5d4;
        case 0x1aa5d8u: goto label_1aa5d8;
        case 0x1aa5dcu: goto label_1aa5dc;
        case 0x1aa5e0u: goto label_1aa5e0;
        case 0x1aa5e4u: goto label_1aa5e4;
        case 0x1aa5e8u: goto label_1aa5e8;
        case 0x1aa5ecu: goto label_1aa5ec;
        case 0x1aa5f0u: goto label_1aa5f0;
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa5f8u: goto label_1aa5f8;
        case 0x1aa5fcu: goto label_1aa5fc;
        case 0x1aa600u: goto label_1aa600;
        case 0x1aa604u: goto label_1aa604;
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa60cu: goto label_1aa60c;
        case 0x1aa610u: goto label_1aa610;
        case 0x1aa614u: goto label_1aa614;
        case 0x1aa618u: goto label_1aa618;
        case 0x1aa61cu: goto label_1aa61c;
        case 0x1aa620u: goto label_1aa620;
        case 0x1aa624u: goto label_1aa624;
        case 0x1aa628u: goto label_1aa628;
        case 0x1aa62cu: goto label_1aa62c;
        case 0x1aa630u: goto label_1aa630;
        case 0x1aa634u: goto label_1aa634;
        case 0x1aa638u: goto label_1aa638;
        case 0x1aa63cu: goto label_1aa63c;
        case 0x1aa640u: goto label_1aa640;
        case 0x1aa644u: goto label_1aa644;
        case 0x1aa648u: goto label_1aa648;
        case 0x1aa64cu: goto label_1aa64c;
        case 0x1aa650u: goto label_1aa650;
        case 0x1aa654u: goto label_1aa654;
        case 0x1aa658u: goto label_1aa658;
        case 0x1aa65cu: goto label_1aa65c;
        case 0x1aa660u: goto label_1aa660;
        case 0x1aa664u: goto label_1aa664;
        case 0x1aa668u: goto label_1aa668;
        case 0x1aa66cu: goto label_1aa66c;
        case 0x1aa670u: goto label_1aa670;
        case 0x1aa674u: goto label_1aa674;
        case 0x1aa678u: goto label_1aa678;
        case 0x1aa67cu: goto label_1aa67c;
        case 0x1aa680u: goto label_1aa680;
        case 0x1aa684u: goto label_1aa684;
        case 0x1aa688u: goto label_1aa688;
        case 0x1aa68cu: goto label_1aa68c;
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        case 0x1aa6b8u: goto label_1aa6b8;
        case 0x1aa6bcu: goto label_1aa6bc;
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6c4u: goto label_1aa6c4;
        case 0x1aa6c8u: goto label_1aa6c8;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa6d0u: goto label_1aa6d0;
        case 0x1aa6d4u: goto label_1aa6d4;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa6dcu: goto label_1aa6dc;
        case 0x1aa6e0u: goto label_1aa6e0;
        case 0x1aa6e4u: goto label_1aa6e4;
        case 0x1aa6e8u: goto label_1aa6e8;
        case 0x1aa6ecu: goto label_1aa6ec;
        case 0x1aa6f0u: goto label_1aa6f0;
        case 0x1aa6f4u: goto label_1aa6f4;
        case 0x1aa6f8u: goto label_1aa6f8;
        case 0x1aa6fcu: goto label_1aa6fc;
        case 0x1aa700u: goto label_1aa700;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa70cu: goto label_1aa70c;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa714u: goto label_1aa714;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa71cu: goto label_1aa71c;
        case 0x1aa720u: goto label_1aa720;
        case 0x1aa724u: goto label_1aa724;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa72cu: goto label_1aa72c;
        case 0x1aa730u: goto label_1aa730;
        case 0x1aa734u: goto label_1aa734;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa73cu: goto label_1aa73c;
        case 0x1aa740u: goto label_1aa740;
        case 0x1aa744u: goto label_1aa744;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa74cu: goto label_1aa74c;
        case 0x1aa750u: goto label_1aa750;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa758u: goto label_1aa758;
        case 0x1aa75cu: goto label_1aa75c;
        case 0x1aa760u: goto label_1aa760;
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa768u: goto label_1aa768;
        case 0x1aa76cu: goto label_1aa76c;
        case 0x1aa770u: goto label_1aa770;
        case 0x1aa774u: goto label_1aa774;
        case 0x1aa778u: goto label_1aa778;
        case 0x1aa77cu: goto label_1aa77c;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa788u: goto label_1aa788;
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa794u: goto label_1aa794;
        case 0x1aa798u: goto label_1aa798;
        case 0x1aa79cu: goto label_1aa79c;
        case 0x1aa7a0u: goto label_1aa7a0;
        case 0x1aa7a4u: goto label_1aa7a4;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7b0u: goto label_1aa7b0;
        case 0x1aa7b4u: goto label_1aa7b4;
        case 0x1aa7b8u: goto label_1aa7b8;
        case 0x1aa7bcu: goto label_1aa7bc;
        case 0x1aa7c0u: goto label_1aa7c0;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7ccu: goto label_1aa7cc;
        case 0x1aa7d0u: goto label_1aa7d0;
        case 0x1aa7d4u: goto label_1aa7d4;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa7e4u: goto label_1aa7e4;
        case 0x1aa7e8u: goto label_1aa7e8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f0u: goto label_1aa7f0;
        case 0x1aa7f4u: goto label_1aa7f4;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa804u: goto label_1aa804;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa810u: goto label_1aa810;
        case 0x1aa814u: goto label_1aa814;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa824u: goto label_1aa824;
        case 0x1aa828u: goto label_1aa828;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa830u: goto label_1aa830;
        case 0x1aa834u: goto label_1aa834;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa840u: goto label_1aa840;
        case 0x1aa844u: goto label_1aa844;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa850u: goto label_1aa850;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa858u: goto label_1aa858;
        case 0x1aa85cu: goto label_1aa85c;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        case 0x1aa8b8u: goto label_1aa8b8;
        case 0x1aa8bcu: goto label_1aa8bc;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8c4u: goto label_1aa8c4;
        case 0x1aa8c8u: goto label_1aa8c8;
        case 0x1aa8ccu: goto label_1aa8cc;
        case 0x1aa8d0u: goto label_1aa8d0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8d8u: goto label_1aa8d8;
        case 0x1aa8dcu: goto label_1aa8dc;
        case 0x1aa8e0u: goto label_1aa8e0;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8ecu: goto label_1aa8ec;
        case 0x1aa8f0u: goto label_1aa8f0;
        case 0x1aa8f4u: goto label_1aa8f4;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa8fcu: goto label_1aa8fc;
        case 0x1aa900u: goto label_1aa900;
        case 0x1aa904u: goto label_1aa904;
        case 0x1aa908u: goto label_1aa908;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa910u: goto label_1aa910;
        case 0x1aa914u: goto label_1aa914;
        case 0x1aa918u: goto label_1aa918;
        case 0x1aa91cu: goto label_1aa91c;
        case 0x1aa920u: goto label_1aa920;
        case 0x1aa924u: goto label_1aa924;
        case 0x1aa928u: goto label_1aa928;
        case 0x1aa92cu: goto label_1aa92c;
        case 0x1aa930u: goto label_1aa930;
        case 0x1aa934u: goto label_1aa934;
        case 0x1aa938u: goto label_1aa938;
        case 0x1aa93cu: goto label_1aa93c;
        case 0x1aa940u: goto label_1aa940;
        case 0x1aa944u: goto label_1aa944;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa94cu: goto label_1aa94c;
        case 0x1aa950u: goto label_1aa950;
        case 0x1aa954u: goto label_1aa954;
        case 0x1aa958u: goto label_1aa958;
        case 0x1aa95cu: goto label_1aa95c;
        case 0x1aa960u: goto label_1aa960;
        case 0x1aa964u: goto label_1aa964;
        case 0x1aa968u: goto label_1aa968;
        case 0x1aa96cu: goto label_1aa96c;
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa974u: goto label_1aa974;
        case 0x1aa978u: goto label_1aa978;
        case 0x1aa97cu: goto label_1aa97c;
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa984u: goto label_1aa984;
        case 0x1aa988u: goto label_1aa988;
        case 0x1aa98cu: goto label_1aa98c;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa998u: goto label_1aa998;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9a0u: goto label_1aa9a0;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9a8u: goto label_1aa9a8;
        case 0x1aa9acu: goto label_1aa9ac;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9b4u: goto label_1aa9b4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9c0u: goto label_1aa9c0;
        case 0x1aa9c4u: goto label_1aa9c4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d0u: goto label_1aa9d0;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9dcu: goto label_1aa9dc;
        case 0x1aa9e0u: goto label_1aa9e0;
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9e8u: goto label_1aa9e8;
        case 0x1aa9ecu: goto label_1aa9ec;
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aa9f8u: goto label_1aa9f8;
        case 0x1aa9fcu: goto label_1aa9fc;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa04u: goto label_1aaa04;
        case 0x1aaa08u: goto label_1aaa08;
        case 0x1aaa0cu: goto label_1aaa0c;
        case 0x1aaa10u: goto label_1aaa10;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa18u: goto label_1aaa18;
        case 0x1aaa1cu: goto label_1aaa1c;
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa24u: goto label_1aaa24;
        case 0x1aaa28u: goto label_1aaa28;
        case 0x1aaa2cu: goto label_1aaa2c;
        case 0x1aaa30u: goto label_1aaa30;
        case 0x1aaa34u: goto label_1aaa34;
        case 0x1aaa38u: goto label_1aaa38;
        case 0x1aaa3cu: goto label_1aaa3c;
        case 0x1aaa40u: goto label_1aaa40;
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa48u: goto label_1aaa48;
        case 0x1aaa4cu: goto label_1aaa4c;
        case 0x1aaa50u: goto label_1aaa50;
        case 0x1aaa54u: goto label_1aaa54;
        case 0x1aaa58u: goto label_1aaa58;
        case 0x1aaa5cu: goto label_1aaa5c;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa64u: goto label_1aaa64;
        case 0x1aaa68u: goto label_1aaa68;
        case 0x1aaa6cu: goto label_1aaa6c;
        case 0x1aaa70u: goto label_1aaa70;
        case 0x1aaa74u: goto label_1aaa74;
        case 0x1aaa78u: goto label_1aaa78;
        case 0x1aaa7cu: goto label_1aaa7c;
        case 0x1aaa80u: goto label_1aaa80;
        case 0x1aaa84u: goto label_1aaa84;
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa8cu: goto label_1aaa8c;
        case 0x1aaa90u: goto label_1aaa90;
        case 0x1aaa94u: goto label_1aaa94;
        case 0x1aaa98u: goto label_1aaa98;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaaa0u: goto label_1aaaa0;
        case 0x1aaaa4u: goto label_1aaaa4;
        case 0x1aaaa8u: goto label_1aaaa8;
        case 0x1aaaacu: goto label_1aaaac;
        case 0x1aaab0u: goto label_1aaab0;
        case 0x1aaab4u: goto label_1aaab4;
        case 0x1aaab8u: goto label_1aaab8;
        case 0x1aaabcu: goto label_1aaabc;
        case 0x1aaac0u: goto label_1aaac0;
        case 0x1aaac4u: goto label_1aaac4;
        case 0x1aaac8u: goto label_1aaac8;
        case 0x1aaaccu: goto label_1aaacc;
        case 0x1aaad0u: goto label_1aaad0;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aaad8u: goto label_1aaad8;
        case 0x1aaadcu: goto label_1aaadc;
        case 0x1aaae0u: goto label_1aaae0;
        case 0x1aaae4u: goto label_1aaae4;
        case 0x1aaae8u: goto label_1aaae8;
        case 0x1aaaecu: goto label_1aaaec;
        case 0x1aaaf0u: goto label_1aaaf0;
        case 0x1aaaf4u: goto label_1aaaf4;
        case 0x1aaaf8u: goto label_1aaaf8;
        case 0x1aaafcu: goto label_1aaafc;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab04u: goto label_1aab04;
        case 0x1aab08u: goto label_1aab08;
        case 0x1aab0cu: goto label_1aab0c;
        case 0x1aab10u: goto label_1aab10;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab18u: goto label_1aab18;
        case 0x1aab1cu: goto label_1aab1c;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab24u: goto label_1aab24;
        case 0x1aab28u: goto label_1aab28;
        case 0x1aab2cu: goto label_1aab2c;
        case 0x1aab30u: goto label_1aab30;
        case 0x1aab34u: goto label_1aab34;
        case 0x1aab38u: goto label_1aab38;
        case 0x1aab3cu: goto label_1aab3c;
        default: return;
    }

label_1aa370:
    // 0x1aa370: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1aa370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1aa374:
    // 0x1aa374: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa378:
    // 0x1aa378: 0xc069208  jal         func_1A4820
label_1aa37c:
    if (ctx->pc == 0x1AA37Cu) {
        ctx->pc = 0x1AA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA378u;
        // 0x1aa37c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA380u;
        goto label_1aa380;
    }
    ctx->pc = 0x1AA378u;
    SET_GPR_U32(ctx, 31, 0x1AA380u);
    ctx->pc = 0x1AA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA378u;
    // 0x1aa37c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA380u;
label_1aa380:
    // 0x1aa380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa384:
    // 0x1aa384: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aa384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa388:
    // 0x1aa388: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa38c:
    // 0x1aa38c: 0xae713240  sw          $s1, 0x3240($s3)
    ctx->pc = 0x1aa38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12864), GPR_U32(ctx, 17));
label_1aa390:
    // 0x1aa390: 0x24503e80  addiu       $s0, $v0, 0x3E80
    ctx->pc = 0x1aa390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_1aa394:
    // 0x1aa394: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aa398:
    // 0x1aa398: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa39c:
    // 0x1aa39c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1aa39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1aa3a0:
    // 0x1aa3a0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aa3a4:
    // 0x1aa3a4: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x1aa3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
label_1aa3a8:
    // 0x1aa3a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aa3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3ac:
    // 0x1aa3ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aa3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aa3b0:
    // 0x1aa3b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa3b4:
    // 0x1aa3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3b8:
    // 0x1aa3b8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1aa3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aa3bc:
    // 0x1aa3bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aa3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3c0:
    // 0x1aa3c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa3c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa3c4:
    // 0x1aa3c4: 0xc069e2a  jal         func_1A78A8
label_1aa3c8:
    if (ctx->pc == 0x1AA3C8u) {
        ctx->pc = 0x1AA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3C4u;
        // 0x1aa3c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3CCu;
        goto label_1aa3cc;
    }
    ctx->pc = 0x1AA3C4u;
    SET_GPR_U32(ctx, 31, 0x1AA3CCu);
    ctx->pc = 0x1AA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3C4u;
    // 0x1aa3c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA3CCu;
label_1aa3cc:
    // 0x1aa3cc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa3d0:
    if (ctx->pc == 0x1AA3D0u) {
        ctx->pc = 0x1AA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3CCu;
        // 0x1aa3d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3D4u;
        goto label_1aa3d4;
    }
    ctx->pc = 0x1AA3CCu;
    {
        const bool branch_taken_0x1aa3cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3CCu;
        // 0x1aa3d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3cc) {
            ctx->pc = 0x1AA3ECu;
            goto label_1aa3ec;
        }
    }
    ctx->pc = 0x1AA3D4u;
label_1aa3d4:
    // 0x1aa3d4: 0xc069218  jal         func_1A4860
label_1aa3d8:
    if (ctx->pc == 0x1AA3D8u) {
        ctx->pc = 0x1AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3D4u;
        // 0x1aa3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3DCu;
        goto label_1aa3dc;
    }
    ctx->pc = 0x1AA3D4u;
    SET_GPR_U32(ctx, 31, 0x1AA3DCu);
    ctx->pc = 0x1AA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3D4u;
    // 0x1aa3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA3DCu;
label_1aa3dc:
    // 0x1aa3dc: 0xc06a158  jal         func_1A8560
label_1aa3e0:
    if (ctx->pc == 0x1AA3E0u) {
        ctx->pc = 0x1AA3E4u;
        goto label_1aa3e4;
    }
    ctx->pc = 0x1AA3DCu;
    SET_GPR_U32(ctx, 31, 0x1AA3E4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA3E4u;
label_1aa3e4:
    // 0x1aa3e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa3e8:
    if (ctx->pc == 0x1AA3E8u) {
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3ECu;
        goto label_1aa3ec;
    }
    ctx->pc = 0x1AA3E4u;
    {
        const bool branch_taken_0x1aa3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3e4) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA3ECu;
label_1aa3ec:
    // 0x1aa3ec: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1aa3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1aa3f0:
    // 0x1aa3f0: 0xc06a158  jal         func_1A8560
label_1aa3f4:
    if (ctx->pc == 0x1AA3F4u) {
        ctx->pc = 0x1AA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3F0u;
        // 0x1aa3f4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3F8u;
        goto label_1aa3f8;
    }
    ctx->pc = 0x1AA3F0u;
    SET_GPR_U32(ctx, 31, 0x1AA3F8u);
    ctx->pc = 0x1AA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3F0u;
    // 0x1aa3f4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA3F8u;
label_1aa3f8:
    // 0x1aa3f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa3fc:
    if (ctx->pc == 0x1AA3FCu) {
        ctx->pc = 0x1AA400u;
        goto label_1aa400;
    }
    ctx->pc = 0x1AA3F8u;
    {
        const bool branch_taken_0x1aa3f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa3f8) {
            ctx->pc = 0x1AA410u;
            goto label_1aa410;
        }
    }
    ctx->pc = 0x1AA400u;
label_1aa400:
    // 0x1aa400: 0xc06920c  jal         func_1A4830
label_1aa404:
    if (ctx->pc == 0x1AA404u) {
        ctx->pc = 0x1AA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA400u;
        // 0x1aa404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA408u;
        goto label_1aa408;
    }
    ctx->pc = 0x1AA400u;
    SET_GPR_U32(ctx, 31, 0x1AA408u);
    ctx->pc = 0x1AA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA400u;
    // 0x1aa404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA408u;
label_1aa408:
    // 0x1aa408: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa40c:
    if (ctx->pc == 0x1AA40Cu) {
        ctx->pc = 0x1AA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA408u;
        // 0x1aa40c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA410u;
        goto label_1aa410;
    }
    ctx->pc = 0x1AA408u;
    {
        const bool branch_taken_0x1aa408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA408u;
        // 0x1aa40c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa408) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA410u;
label_1aa410:
    // 0x1aa410: 0xc069218  jal         func_1A4860
label_1aa414:
    if (ctx->pc == 0x1AA414u) {
        ctx->pc = 0x1AA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA410u;
        // 0x1aa414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA418u;
        goto label_1aa418;
    }
    ctx->pc = 0x1AA410u;
    SET_GPR_U32(ctx, 31, 0x1AA418u);
    ctx->pc = 0x1AA414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA410u;
    // 0x1aa414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA418u;
label_1aa418:
    // 0x1aa418: 0xc06920c  jal         func_1A4830
label_1aa41c:
    if (ctx->pc == 0x1AA41Cu) {
        ctx->pc = 0x1AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA418u;
        // 0x1aa41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA420u;
        goto label_1aa420;
    }
    ctx->pc = 0x1AA418u;
    SET_GPR_U32(ctx, 31, 0x1AA420u);
    ctx->pc = 0x1AA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA418u;
    // 0x1aa41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA420u;
label_1aa420:
    // 0x1aa420: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa424:
    // 0x1aa424: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1aa424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa428:
    // 0x1aa428: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa42c:
    // 0x1aa42c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa430:
    // 0x1aa430: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aa430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa434:
    // 0x1aa434: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aa434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa438:
    // 0x1aa438: 0x3e00008  jr          $ra
label_1aa43c:
    if (ctx->pc == 0x1AA43Cu) {
        ctx->pc = 0x1AA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA438u;
        // 0x1aa43c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA440u;
        goto label_1aa440;
    }
    ctx->pc = 0x1AA438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA438u;
        // 0x1aa43c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA440u;
label_1aa440:
    // 0x1aa440: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1aa444:
    // 0x1aa444: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aa448:
    // 0x1aa448: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aa44c:
    // 0x1aa44c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa450:
    // 0x1aa450: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aa450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1aa454:
    // 0x1aa454: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1aa454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa458:
    // 0x1aa458: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aa45c:
    // 0x1aa45c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1aa460:
    // 0x1aa460: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1aa460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1aa464:
    // 0x1aa464: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1aa468:
    // 0x1aa468: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aa46c:
    // 0x1aa46c: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1aa470:
    // 0x1aa470: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aa474:
    // 0x1aa474: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aa478:
    // 0x1aa478: 0xc06a14c  jal         func_1A8530
label_1aa47c:
    if (ctx->pc == 0x1AA47Cu) {
        ctx->pc = 0x1AA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA478u;
        // 0x1aa47c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA480u;
        goto label_1aa480;
    }
    ctx->pc = 0x1AA478u;
    SET_GPR_U32(ctx, 31, 0x1AA480u);
    ctx->pc = 0x1AA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA478u;
    // 0x1aa47c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AA480u;
label_1aa480:
    // 0x1aa480: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aa484:
    // 0x1aa484: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aa484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aa488:
    // 0x1aa488: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1aa48c:
    if (ctx->pc == 0x1AA48Cu) {
        ctx->pc = 0x1AA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA488u;
        // 0x1aa48c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA490u;
        goto label_1aa490;
    }
    ctx->pc = 0x1AA488u;
    {
        const bool branch_taken_0x1aa488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa488) {
            ctx->pc = 0x1AA48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA488u;
            // 0x1aa48c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA49Cu;
            goto label_1aa49c;
        }
    }
    ctx->pc = 0x1AA490u;
label_1aa490:
    // 0x1aa490: 0xc06a18e  jal         func_1A8638
label_1aa494:
    if (ctx->pc == 0x1AA494u) {
        ctx->pc = 0x1AA498u;
        goto label_1aa498;
    }
    ctx->pc = 0x1AA490u;
    SET_GPR_U32(ctx, 31, 0x1AA498u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AA498u;
label_1aa498:
    // 0x1aa498: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aa498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa49c:
    // 0x1aa49c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa4a0:
    // 0x1aa4a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa4a4:
    // 0x1aa4a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1aa4a8:
    if (ctx->pc == 0x1AA4A8u) {
        ctx->pc = 0x1AA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4A4u;
        // 0x1aa4a8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4ACu;
        goto label_1aa4ac;
    }
    ctx->pc = 0x1AA4A4u;
    {
        const bool branch_taken_0x1aa4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4A4u;
        // 0x1aa4a8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4a4) {
            ctx->pc = 0x1AA4E0u;
            goto label_1aa4e0;
        }
    }
    ctx->pc = 0x1AA4ACu;
label_1aa4ac:
    // 0x1aa4ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa4b0:
    // 0x1aa4b0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa4b4:
    // 0x1aa4b4: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa4b8:
    // 0x1aa4b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa4bc:
    // 0x1aa4bc: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa4c0:
    // 0x1aa4c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aa4c4:
    if (ctx->pc == 0x1AA4C4u) {
        ctx->pc = 0x1AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4C0u;
        // 0x1aa4c4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4C8u;
        goto label_1aa4c8;
    }
    ctx->pc = 0x1AA4C0u;
    {
        const bool branch_taken_0x1aa4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4C0u;
        // 0x1aa4c4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4c0) {
            ctx->pc = 0x1AA4ECu;
            goto label_1aa4ec;
        }
    }
    ctx->pc = 0x1AA4C8u;
label_1aa4c8:
    // 0x1aa4c8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1aa4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1aa4cc:
    // 0x1aa4cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa4d0:
    // 0x1aa4d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1aa4d4:
    if (ctx->pc == 0x1AA4D4u) {
        ctx->pc = 0x1AA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4D0u;
        // 0x1aa4d4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4D8u;
        goto label_1aa4d8;
    }
    ctx->pc = 0x1AA4D0u;
    {
        const bool branch_taken_0x1aa4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4D0u;
        // 0x1aa4d4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4d0) {
            ctx->pc = 0x1AA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa4b8;
        }
    }
    ctx->pc = 0x1AA4D8u;
label_1aa4d8:
    // 0x1aa4d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aa4dc:
    if (ctx->pc == 0x1AA4DCu) {
        ctx->pc = 0x1AA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4D8u;
        // 0x1aa4dc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4E0u;
        goto label_1aa4e0;
    }
    ctx->pc = 0x1AA4D8u;
    {
        const bool branch_taken_0x1aa4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4D8u;
        // 0x1aa4dc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4d8) {
            ctx->pc = 0x1AA4F0u;
            goto label_1aa4f0;
        }
    }
    ctx->pc = 0x1AA4E0u;
label_1aa4e0:
    // 0x1aa4e0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa4e4:
    // 0x1aa4e4: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa4e8:
    // 0x1aa4e8: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa4ec:
    // 0x1aa4ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa4f0:
    // 0x1aa4f0: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_1aa4f4:
    if (ctx->pc == 0x1AA4F4u) {
        ctx->pc = 0x1AA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4F0u;
        // 0x1aa4f4: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4F8u;
        goto label_1aa4f8;
    }
    ctx->pc = 0x1AA4F0u;
    {
        const bool branch_taken_0x1aa4f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa4f0) {
            ctx->pc = 0x1AA4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA4F0u;
            // 0x1aa4f4: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA504u;
            goto label_1aa504;
        }
    }
    ctx->pc = 0x1AA4F8u;
label_1aa4f8:
    // 0x1aa4f8: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1aa4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
label_1aa4fc:
    // 0x1aa4fc: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1aa4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1aa500:
    // 0x1aa500: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1aa500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1aa504:
    // 0x1aa504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa508:
    // 0x1aa508: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aa508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aa50c:
    // 0x1aa50c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa510:
    // 0x1aa510: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa514:
    // 0x1aa514: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1aa518:
    // 0x1aa518: 0xc069208  jal         func_1A4820
label_1aa51c:
    if (ctx->pc == 0x1AA51Cu) {
        ctx->pc = 0x1AA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA518u;
        // 0x1aa51c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA520u;
        goto label_1aa520;
    }
    ctx->pc = 0x1AA518u;
    SET_GPR_U32(ctx, 31, 0x1AA520u);
    ctx->pc = 0x1AA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA518u;
    // 0x1aa51c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA520u;
label_1aa520:
    // 0x1aa520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa524:
    // 0x1aa524: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1aa524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1aa528:
    // 0x1aa528: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa52c:
    // 0x1aa52c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1aa52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1aa530:
    // 0x1aa530: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aa530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aa534:
    // 0x1aa534: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1aa534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1aa538:
    // 0x1aa538: 0x26e73240  addiu       $a3, $s7, 0x3240
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1aa53c:
    // 0x1aa53c: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
label_1aa540:
    // 0x1aa540: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa544:
    // 0x1aa544: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aa544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1aa548:
    // 0x1aa548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa54c:
    // 0x1aa54c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1aa54cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aa550:
    // 0x1aa550: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa554:
    // 0x1aa554: 0xc069e2a  jal         func_1A78A8
label_1aa558:
    if (ctx->pc == 0x1AA558u) {
        ctx->pc = 0x1AA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA554u;
        // 0x1aa558: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA55Cu;
        goto label_1aa55c;
    }
    ctx->pc = 0x1AA554u;
    SET_GPR_U32(ctx, 31, 0x1AA55Cu);
    ctx->pc = 0x1AA558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA554u;
    // 0x1aa558: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA55Cu;
label_1aa55c:
    // 0x1aa55c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa560:
    if (ctx->pc == 0x1AA560u) {
        ctx->pc = 0x1AA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA55Cu;
        // 0x1aa560: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA564u;
        goto label_1aa564;
    }
    ctx->pc = 0x1AA55Cu;
    {
        const bool branch_taken_0x1aa55c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA55Cu;
        // 0x1aa560: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa55c) {
            ctx->pc = 0x1AA57Cu;
            goto label_1aa57c;
        }
    }
    ctx->pc = 0x1AA564u;
label_1aa564:
    // 0x1aa564: 0xc06920c  jal         func_1A4830
label_1aa568:
    if (ctx->pc == 0x1AA568u) {
        ctx->pc = 0x1AA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA564u;
        // 0x1aa568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA56Cu;
        goto label_1aa56c;
    }
    ctx->pc = 0x1AA564u;
    SET_GPR_U32(ctx, 31, 0x1AA56Cu);
    ctx->pc = 0x1AA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA564u;
    // 0x1aa568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA56Cu;
label_1aa56c:
    // 0x1aa56c: 0xc06a158  jal         func_1A8560
label_1aa570:
    if (ctx->pc == 0x1AA570u) {
        ctx->pc = 0x1AA574u;
        goto label_1aa574;
    }
    ctx->pc = 0x1AA56Cu;
    SET_GPR_U32(ctx, 31, 0x1AA574u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA574u;
label_1aa574:
    // 0x1aa574: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa578:
    if (ctx->pc == 0x1AA578u) {
        ctx->pc = 0x1AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA574u;
        // 0x1aa578: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA57Cu;
        goto label_1aa57c;
    }
    ctx->pc = 0x1AA574u;
    {
        const bool branch_taken_0x1aa574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA574u;
        // 0x1aa578: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa574) {
            ctx->pc = 0x1AA5B4u;
            goto label_1aa5b4;
        }
    }
    ctx->pc = 0x1AA57Cu;
label_1aa57c:
    // 0x1aa57c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1aa57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1aa580:
    // 0x1aa580: 0xc06a158  jal         func_1A8560
label_1aa584:
    if (ctx->pc == 0x1AA584u) {
        ctx->pc = 0x1AA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA580u;
        // 0x1aa584: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA588u;
        goto label_1aa588;
    }
    ctx->pc = 0x1AA580u;
    SET_GPR_U32(ctx, 31, 0x1AA588u);
    ctx->pc = 0x1AA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA580u;
    // 0x1aa584: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA588u;
label_1aa588:
    // 0x1aa588: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa58c:
    if (ctx->pc == 0x1AA58Cu) {
        ctx->pc = 0x1AA590u;
        goto label_1aa590;
    }
    ctx->pc = 0x1AA588u;
    {
        const bool branch_taken_0x1aa588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa588) {
            ctx->pc = 0x1AA5A0u;
            goto label_1aa5a0;
        }
    }
    ctx->pc = 0x1AA590u;
label_1aa590:
    // 0x1aa590: 0xc06920c  jal         func_1A4830
label_1aa594:
    if (ctx->pc == 0x1AA594u) {
        ctx->pc = 0x1AA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA590u;
        // 0x1aa594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA598u;
        goto label_1aa598;
    }
    ctx->pc = 0x1AA590u;
    SET_GPR_U32(ctx, 31, 0x1AA598u);
    ctx->pc = 0x1AA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA590u;
    // 0x1aa594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA598u;
label_1aa598:
    // 0x1aa598: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa59c:
    if (ctx->pc == 0x1AA59Cu) {
        ctx->pc = 0x1AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA598u;
        // 0x1aa59c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5A0u;
        goto label_1aa5a0;
    }
    ctx->pc = 0x1AA598u;
    {
        const bool branch_taken_0x1aa598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA598u;
        // 0x1aa59c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa598) {
            ctx->pc = 0x1AA5B4u;
            goto label_1aa5b4;
        }
    }
    ctx->pc = 0x1AA5A0u;
label_1aa5a0:
    // 0x1aa5a0: 0xc069218  jal         func_1A4860
label_1aa5a4:
    if (ctx->pc == 0x1AA5A4u) {
        ctx->pc = 0x1AA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5A0u;
        // 0x1aa5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5A8u;
        goto label_1aa5a8;
    }
    ctx->pc = 0x1AA5A0u;
    SET_GPR_U32(ctx, 31, 0x1AA5A8u);
    ctx->pc = 0x1AA5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA5A0u;
    // 0x1aa5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA5A8u;
label_1aa5a8:
    // 0x1aa5a8: 0xc06920c  jal         func_1A4830
label_1aa5ac:
    if (ctx->pc == 0x1AA5ACu) {
        ctx->pc = 0x1AA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5A8u;
        // 0x1aa5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5B0u;
        goto label_1aa5b0;
    }
    ctx->pc = 0x1AA5A8u;
    SET_GPR_U32(ctx, 31, 0x1AA5B0u);
    ctx->pc = 0x1AA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA5A8u;
    // 0x1aa5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA5B0u;
label_1aa5b0:
    // 0x1aa5b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa5b4:
    // 0x1aa5b4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1aa5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1aa5b8:
    // 0x1aa5b8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1aa5b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aa5bc:
    // 0x1aa5bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aa5bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aa5c0:
    // 0x1aa5c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aa5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa5c4:
    // 0x1aa5c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aa5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa5c8:
    // 0x1aa5c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa5cc:
    // 0x1aa5cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa5d0:
    // 0x1aa5d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aa5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa5d4:
    // 0x1aa5d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa5d8:
    // 0x1aa5d8: 0x3e00008  jr          $ra
label_1aa5dc:
    if (ctx->pc == 0x1AA5DCu) {
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5E0u;
        goto label_1aa5e0;
    }
    ctx->pc = 0x1AA5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA5E0u;
label_1aa5e0:
    // 0x1aa5e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1aa5e4:
    // 0x1aa5e4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aa5e8:
    // 0x1aa5e8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aa5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1aa5ec:
    // 0x1aa5ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5f0:
    // 0x1aa5f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aa5f4:
    // 0x1aa5f4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1aa5f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5f8:
    // 0x1aa5f8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1aa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1aa5fc:
    // 0x1aa5fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa600:
    // 0x1aa600: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aa604:
    // 0x1aa604: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1aa604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1aa608:
    // 0x1aa608: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1aa608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1aa60c:
    // 0x1aa60c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1aa610:
    // 0x1aa610: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aa614:
    // 0x1aa614: 0x27d33240  addiu       $s3, $fp, 0x3240
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1aa618:
    // 0x1aa618: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aa61c:
    // 0x1aa61c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aa620:
    // 0x1aa620: 0xc06a14c  jal         func_1A8530
label_1aa624:
    if (ctx->pc == 0x1AA624u) {
        ctx->pc = 0x1AA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA620u;
        // 0x1aa624: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA628u;
        goto label_1aa628;
    }
    ctx->pc = 0x1AA620u;
    SET_GPR_U32(ctx, 31, 0x1AA628u);
    ctx->pc = 0x1AA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA620u;
    // 0x1aa624: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AA628u;
label_1aa628:
    // 0x1aa628: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1aa628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1aa62c:
    // 0x1aa62c: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1aa630:
    // 0x1aa630: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1aa634:
    if (ctx->pc == 0x1AA634u) {
        ctx->pc = 0x1AA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA630u;
        // 0x1aa634: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA638u;
        goto label_1aa638;
    }
    ctx->pc = 0x1AA630u;
    {
        const bool branch_taken_0x1aa630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa630) {
            ctx->pc = 0x1AA634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA630u;
            // 0x1aa634: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA644u;
            goto label_1aa644;
        }
    }
    ctx->pc = 0x1AA638u;
label_1aa638:
    // 0x1aa638: 0xc06a18e  jal         func_1A8638
label_1aa63c:
    if (ctx->pc == 0x1AA63Cu) {
        ctx->pc = 0x1AA640u;
        goto label_1aa640;
    }
    ctx->pc = 0x1AA638u;
    SET_GPR_U32(ctx, 31, 0x1AA640u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AA640u;
label_1aa640:
    // 0x1aa640: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1aa640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa644:
    // 0x1aa644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa648:
    // 0x1aa648: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa64c:
    // 0x1aa64c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1aa650:
    if (ctx->pc == 0x1AA650u) {
        ctx->pc = 0x1AA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA64Cu;
        // 0x1aa650: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA654u;
        goto label_1aa654;
    }
    ctx->pc = 0x1AA64Cu;
    {
        const bool branch_taken_0x1aa64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA64Cu;
        // 0x1aa650: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa64c) {
            ctx->pc = 0x1AA688u;
            goto label_1aa688;
        }
    }
    ctx->pc = 0x1AA654u;
label_1aa654:
    // 0x1aa654: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1aa654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa658:
    // 0x1aa658: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aa658u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aa65c:
    // 0x1aa65c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa65cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa660:
    // 0x1aa660: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aa664:
    // 0x1aa664: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x1aa664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa668:
    // 0x1aa668: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aa66c:
    if (ctx->pc == 0x1AA66Cu) {
        ctx->pc = 0x1AA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA668u;
        // 0x1aa66c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA670u;
        goto label_1aa670;
    }
    ctx->pc = 0x1AA668u;
    {
        const bool branch_taken_0x1aa668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA668u;
        // 0x1aa66c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa668) {
            ctx->pc = 0x1AA694u;
            goto label_1aa694;
        }
    }
    ctx->pc = 0x1AA670u;
label_1aa670:
    // 0x1aa670: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1aa674:
    // 0x1aa674: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa678:
    // 0x1aa678: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1aa67c:
    if (ctx->pc == 0x1AA67Cu) {
        ctx->pc = 0x1AA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA678u;
        // 0x1aa67c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA680u;
        goto label_1aa680;
    }
    ctx->pc = 0x1AA678u;
    {
        const bool branch_taken_0x1aa678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA678u;
        // 0x1aa67c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa678) {
            ctx->pc = 0x1AA660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa660;
        }
    }
    ctx->pc = 0x1AA680u;
label_1aa680:
    // 0x1aa680: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aa684:
    if (ctx->pc == 0x1AA684u) {
        ctx->pc = 0x1AA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA680u;
        // 0x1aa684: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA688u;
        goto label_1aa688;
    }
    ctx->pc = 0x1AA680u;
    {
        const bool branch_taken_0x1aa680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA680u;
        // 0x1aa684: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa680) {
            ctx->pc = 0x1AA698u;
            goto label_1aa698;
        }
    }
    ctx->pc = 0x1AA688u;
label_1aa688:
    // 0x1aa688: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1aa688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa68c:
    // 0x1aa68c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aa68cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aa690:
    // 0x1aa690: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa694:
    // 0x1aa694: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa698:
    // 0x1aa698: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1aa69c:
    if (ctx->pc == 0x1AA69Cu) {
        ctx->pc = 0x1AA6A0u;
        goto label_1aa6a0;
    }
    ctx->pc = 0x1AA698u;
    {
        const bool branch_taken_0x1aa698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa698) {
            ctx->pc = 0x1AA6A8u;
            goto label_1aa6a8;
        }
    }
    ctx->pc = 0x1AA6A0u;
label_1aa6a0:
    // 0x1aa6a0: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1aa6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
label_1aa6a4:
    // 0x1aa6a4: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1aa6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1aa6a8:
    // 0x1aa6a8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1aa6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1aa6ac:
    // 0x1aa6ac: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1aa6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1aa6b0:
    // 0x1aa6b0: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x1aa6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1aa6b4:
    // 0x1aa6b4: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x1aa6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1aa6b8:
    // 0x1aa6b8: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x1aa6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1aa6bc:
    // 0x1aa6bc: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x1aa6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1aa6c0:
    // 0x1aa6c0: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x1aa6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aa6c4:
    // 0x1aa6c4: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x1aa6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aa6c8:
    // 0x1aa6c8: 0xb2630017  sdl         $v1, 0x17($s3)
    ctx->pc = 0x1aa6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6cc:
    // 0x1aa6cc: 0xb6630010  sdr         $v1, 0x10($s3)
    ctx->pc = 0x1aa6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6d0:
    // 0x1aa6d0: 0xb264001f  sdl         $a0, 0x1F($s3)
    ctx->pc = 0x1aa6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6d4:
    // 0x1aa6d4: 0xb6640018  sdr         $a0, 0x18($s3)
    ctx->pc = 0x1aa6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6d8:
    // 0x1aa6d8: 0xb2650027  sdl         $a1, 0x27($s3)
    ctx->pc = 0x1aa6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6dc:
    // 0x1aa6dc: 0xb6650020  sdr         $a1, 0x20($s3)
    ctx->pc = 0x1aa6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6e0:
    // 0x1aa6e0: 0xb266002f  sdl         $a2, 0x2F($s3)
    ctx->pc = 0x1aa6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6e4:
    // 0x1aa6e4: 0xb6660028  sdr         $a2, 0x28($s3)
    ctx->pc = 0x1aa6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa6e8:
    // 0x1aa6e8: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x1aa6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1aa6ec:
    // 0x1aa6ec: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x1aa6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1aa6f0:
    // 0x1aa6f0: 0x6a04002f  ldl         $a0, 0x2F($s0)
    ctx->pc = 0x1aa6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1aa6f4:
    // 0x1aa6f4: 0x6e040028  ldr         $a0, 0x28($s0)
    ctx->pc = 0x1aa6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1aa6f8:
    // 0x1aa6f8: 0x6a050037  ldl         $a1, 0x37($s0)
    ctx->pc = 0x1aa6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1aa6fc:
    // 0x1aa6fc: 0x6e050030  ldr         $a1, 0x30($s0)
    ctx->pc = 0x1aa6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1aa700:
    // 0x1aa700: 0x6a06003f  ldl         $a2, 0x3F($s0)
    ctx->pc = 0x1aa700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aa704:
    // 0x1aa704: 0x6e060038  ldr         $a2, 0x38($s0)
    ctx->pc = 0x1aa704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aa708:
    // 0x1aa708: 0xb2630037  sdl         $v1, 0x37($s3)
    ctx->pc = 0x1aa708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa70c:
    // 0x1aa70c: 0xb6630030  sdr         $v1, 0x30($s3)
    ctx->pc = 0x1aa70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa710:
    // 0x1aa710: 0xb264003f  sdl         $a0, 0x3F($s3)
    ctx->pc = 0x1aa710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa714:
    // 0x1aa714: 0xb6640038  sdr         $a0, 0x38($s3)
    ctx->pc = 0x1aa714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa718:
    // 0x1aa718: 0xb2650047  sdl         $a1, 0x47($s3)
    ctx->pc = 0x1aa718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa71c:
    // 0x1aa71c: 0xb6650040  sdr         $a1, 0x40($s3)
    ctx->pc = 0x1aa71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa720:
    // 0x1aa720: 0xb266004f  sdl         $a2, 0x4F($s3)
    ctx->pc = 0x1aa720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa724:
    // 0x1aa724: 0xb6660048  sdr         $a2, 0x48($s3)
    ctx->pc = 0x1aa724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa728:
    // 0x1aa728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa72c:
    // 0x1aa72c: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x1aa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
label_1aa730:
    // 0x1aa730: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa734:
    // 0x1aa734: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aa734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aa738:
    // 0x1aa738: 0x27d03240  addiu       $s0, $fp, 0x3240
    ctx->pc = 0x1aa738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1aa73c:
    // 0x1aa73c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa740:
    // 0x1aa740: 0x26b53e80  addiu       $s5, $s5, 0x3E80
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16000));
label_1aa744:
    // 0x1aa744: 0xc069208  jal         func_1A4820
label_1aa748:
    if (ctx->pc == 0x1AA748u) {
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA744u;
        // 0x1aa748: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA74Cu;
        goto label_1aa74c;
    }
    ctx->pc = 0x1AA744u;
    SET_GPR_U32(ctx, 31, 0x1AA74Cu);
    ctx->pc = 0x1AA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA744u;
    // 0x1aa748: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA74Cu;
label_1aa74c:
    // 0x1aa74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa750:
    // 0x1aa750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa754:
    // 0x1aa754: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa758:
    // 0x1aa758: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1aa758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_1aa75c:
    // 0x1aa75c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1aa75cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1aa760:
    // 0x1aa760: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x1aa760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
label_1aa764:
    // 0x1aa764: 0xc069bee  jal         func_1A6FB8
label_1aa768:
    if (ctx->pc == 0x1AA768u) {
        ctx->pc = 0x1AA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA764u;
        // 0x1aa768: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA76Cu;
        goto label_1aa76c;
    }
    ctx->pc = 0x1AA764u;
    SET_GPR_U32(ctx, 31, 0x1AA76Cu);
    ctx->pc = 0x1AA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA764u;
    // 0x1aa768: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AA76Cu;
label_1aa76c:
    // 0x1aa76c: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1aa770:
    // 0x1aa770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa774:
    // 0x1aa774: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
label_1aa778:
    // 0x1aa778: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa77c:
    // 0x1aa77c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1aa780:
    // 0x1aa780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa784:
    // 0x1aa784: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1aa784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa788:
    // 0x1aa788: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa78c:
    // 0x1aa78c: 0xc069e2a  jal         func_1A78A8
label_1aa790:
    if (ctx->pc == 0x1AA790u) {
        ctx->pc = 0x1AA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA78Cu;
        // 0x1aa790: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA794u;
        goto label_1aa794;
    }
    ctx->pc = 0x1AA78Cu;
    SET_GPR_U32(ctx, 31, 0x1AA794u);
    ctx->pc = 0x1AA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA78Cu;
    // 0x1aa790: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA794u;
label_1aa794:
    // 0x1aa794: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa798:
    if (ctx->pc == 0x1AA798u) {
        ctx->pc = 0x1AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA794u;
        // 0x1aa798: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA79Cu;
        goto label_1aa79c;
    }
    ctx->pc = 0x1AA794u;
    {
        const bool branch_taken_0x1aa794 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA794u;
        // 0x1aa798: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa794) {
            ctx->pc = 0x1AA7B4u;
            goto label_1aa7b4;
        }
    }
    ctx->pc = 0x1AA79Cu;
label_1aa79c:
    // 0x1aa79c: 0xc06920c  jal         func_1A4830
label_1aa7a0:
    if (ctx->pc == 0x1AA7A0u) {
        ctx->pc = 0x1AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA79Cu;
        // 0x1aa7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7A4u;
        goto label_1aa7a4;
    }
    ctx->pc = 0x1AA79Cu;
    SET_GPR_U32(ctx, 31, 0x1AA7A4u);
    ctx->pc = 0x1AA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA79Cu;
    // 0x1aa7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA7A4u;
label_1aa7a4:
    // 0x1aa7a4: 0xc06a158  jal         func_1A8560
label_1aa7a8:
    if (ctx->pc == 0x1AA7A8u) {
        ctx->pc = 0x1AA7ACu;
        goto label_1aa7ac;
    }
    ctx->pc = 0x1AA7A4u;
    SET_GPR_U32(ctx, 31, 0x1AA7ACu);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA7ACu;
label_1aa7ac:
    // 0x1aa7ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa7b0:
    if (ctx->pc == 0x1AA7B0u) {
        ctx->pc = 0x1AA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7ACu;
        // 0x1aa7b0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7B4u;
        goto label_1aa7b4;
    }
    ctx->pc = 0x1AA7ACu;
    {
        const bool branch_taken_0x1aa7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7ACu;
        // 0x1aa7b0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7ac) {
            ctx->pc = 0x1AA7ECu;
            goto label_1aa7ec;
        }
    }
    ctx->pc = 0x1AA7B4u;
label_1aa7b4:
    // 0x1aa7b4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_1aa7b8:
    // 0x1aa7b8: 0xc06a158  jal         func_1A8560
label_1aa7bc:
    if (ctx->pc == 0x1AA7BCu) {
        ctx->pc = 0x1AA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7B8u;
        // 0x1aa7bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7C0u;
        goto label_1aa7c0;
    }
    ctx->pc = 0x1AA7B8u;
    SET_GPR_U32(ctx, 31, 0x1AA7C0u);
    ctx->pc = 0x1AA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7B8u;
    // 0x1aa7bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA7C0u;
label_1aa7c0:
    // 0x1aa7c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa7c4:
    if (ctx->pc == 0x1AA7C4u) {
        ctx->pc = 0x1AA7C8u;
        goto label_1aa7c8;
    }
    ctx->pc = 0x1AA7C0u;
    {
        const bool branch_taken_0x1aa7c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa7c0) {
            ctx->pc = 0x1AA7D8u;
            goto label_1aa7d8;
        }
    }
    ctx->pc = 0x1AA7C8u;
label_1aa7c8:
    // 0x1aa7c8: 0xc06920c  jal         func_1A4830
label_1aa7cc:
    if (ctx->pc == 0x1AA7CCu) {
        ctx->pc = 0x1AA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7C8u;
        // 0x1aa7cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7D0u;
        goto label_1aa7d0;
    }
    ctx->pc = 0x1AA7C8u;
    SET_GPR_U32(ctx, 31, 0x1AA7D0u);
    ctx->pc = 0x1AA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7C8u;
    // 0x1aa7cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA7D0u;
label_1aa7d0:
    // 0x1aa7d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa7d4:
    if (ctx->pc == 0x1AA7D4u) {
        ctx->pc = 0x1AA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D0u;
        // 0x1aa7d4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7D8u;
        goto label_1aa7d8;
    }
    ctx->pc = 0x1AA7D0u;
    {
        const bool branch_taken_0x1aa7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D0u;
        // 0x1aa7d4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7d0) {
            ctx->pc = 0x1AA7ECu;
            goto label_1aa7ec;
        }
    }
    ctx->pc = 0x1AA7D8u;
label_1aa7d8:
    // 0x1aa7d8: 0xc069218  jal         func_1A4860
label_1aa7dc:
    if (ctx->pc == 0x1AA7DCu) {
        ctx->pc = 0x1AA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D8u;
        // 0x1aa7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7E0u;
        goto label_1aa7e0;
    }
    ctx->pc = 0x1AA7D8u;
    SET_GPR_U32(ctx, 31, 0x1AA7E0u);
    ctx->pc = 0x1AA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D8u;
    // 0x1aa7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA7E0u;
label_1aa7e0:
    // 0x1aa7e0: 0xc06920c  jal         func_1A4830
label_1aa7e4:
    if (ctx->pc == 0x1AA7E4u) {
        ctx->pc = 0x1AA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E0u;
        // 0x1aa7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7E8u;
        goto label_1aa7e8;
    }
    ctx->pc = 0x1AA7E0u;
    SET_GPR_U32(ctx, 31, 0x1AA7E8u);
    ctx->pc = 0x1AA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7E0u;
    // 0x1aa7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA7E8u;
label_1aa7e8:
    // 0x1aa7e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa7ec:
    // 0x1aa7ec: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1aa7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1aa7f0:
    // 0x1aa7f0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1aa7f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1aa7f4:
    // 0x1aa7f4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1aa7f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aa7f8:
    // 0x1aa7f8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aa7f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aa7fc:
    // 0x1aa7fc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aa7fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa800:
    // 0x1aa800: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aa800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa804:
    // 0x1aa804: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa808:
    // 0x1aa808: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa80c:
    // 0x1aa80c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aa80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa810:
    // 0x1aa810: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aa810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa814:
    // 0x1aa814: 0x3e00008  jr          $ra
label_1aa818:
    if (ctx->pc == 0x1AA818u) {
        ctx->pc = 0x1AA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA814u;
        // 0x1aa818: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA81Cu;
        goto label_1aa81c;
    }
    ctx->pc = 0x1AA814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA814u;
        // 0x1aa818: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA81Cu;
label_1aa81c:
    // 0x1aa81c: 0x0  nop
    ctx->pc = 0x1aa81cu;
    // NOP
label_1aa820:
    // 0x1aa820: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1aa824:
    // 0x1aa824: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aa828:
    // 0x1aa828: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aa82c:
    // 0x1aa82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa830:
    // 0x1aa830: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aa834:
    // 0x1aa834: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa838:
    // 0x1aa838: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aa83c:
    // 0x1aa83c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1aa83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1aa840:
    // 0x1aa840: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aa840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1aa844:
    // 0x1aa844: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aa848:
    // 0x1aa848: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aa84c:
    // 0x1aa84c: 0x26d23240  addiu       $s2, $s6, 0x3240
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1aa850:
    // 0x1aa850: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aa854:
    // 0x1aa854: 0xc06a14c  jal         func_1A8530
label_1aa858:
    if (ctx->pc == 0x1AA858u) {
        ctx->pc = 0x1AA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA854u;
        // 0x1aa858: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA85Cu;
        goto label_1aa85c;
    }
    ctx->pc = 0x1AA854u;
    SET_GPR_U32(ctx, 31, 0x1AA85Cu);
    ctx->pc = 0x1AA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA854u;
    // 0x1aa858: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AA85Cu;
label_1aa85c:
    // 0x1aa85c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aa860:
    // 0x1aa860: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aa860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aa864:
    // 0x1aa864: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1aa868:
    if (ctx->pc == 0x1AA868u) {
        ctx->pc = 0x1AA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA864u;
        // 0x1aa868: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA86Cu;
        goto label_1aa86c;
    }
    ctx->pc = 0x1AA864u;
    {
        const bool branch_taken_0x1aa864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa864) {
            ctx->pc = 0x1AA868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA864u;
            // 0x1aa868: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA878u;
            goto label_1aa878;
        }
    }
    ctx->pc = 0x1AA86Cu;
label_1aa86c:
    // 0x1aa86c: 0xc06a18e  jal         func_1A8638
label_1aa870:
    if (ctx->pc == 0x1AA870u) {
        ctx->pc = 0x1AA874u;
        goto label_1aa874;
    }
    ctx->pc = 0x1AA86Cu;
    SET_GPR_U32(ctx, 31, 0x1AA874u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AA874u;
label_1aa874:
    // 0x1aa874: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aa874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa878:
    // 0x1aa878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa87c:
    // 0x1aa87c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aa880:
    // 0x1aa880: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1aa884:
    if (ctx->pc == 0x1AA884u) {
        ctx->pc = 0x1AA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA880u;
        // 0x1aa884: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA888u;
        goto label_1aa888;
    }
    ctx->pc = 0x1AA880u;
    {
        const bool branch_taken_0x1aa880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA880u;
        // 0x1aa884: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa880) {
            ctx->pc = 0x1AA8C4u;
            goto label_1aa8c4;
        }
    }
    ctx->pc = 0x1AA888u;
label_1aa888:
    // 0x1aa888: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa88c:
    // 0x1aa88c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa890:
    // 0x1aa890: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa894:
    // 0x1aa894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa898:
    // 0x1aa898: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aa898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa89c:
    // 0x1aa89c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1aa8a0:
    if (ctx->pc == 0x1AA8A0u) {
        ctx->pc = 0x1AA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA89Cu;
        // 0x1aa8a0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8A4u;
        goto label_1aa8a4;
    }
    ctx->pc = 0x1AA89Cu;
    {
        const bool branch_taken_0x1aa89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA89Cu;
        // 0x1aa8a0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa89c) {
            ctx->pc = 0x1AA8D0u;
            goto label_1aa8d0;
        }
    }
    ctx->pc = 0x1AA8A4u;
label_1aa8a4:
    // 0x1aa8a4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1aa8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1aa8a8:
    // 0x1aa8a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa8ac:
    // 0x1aa8ac: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1aa8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1aa8b0:
    // 0x1aa8b0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa8b4:
    // 0x1aa8b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aa8b8:
    if (ctx->pc == 0x1AA8B8u) {
        ctx->pc = 0x1AA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8B4u;
        // 0x1aa8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8BCu;
        goto label_1aa8bc;
    }
    ctx->pc = 0x1AA8B4u;
    {
        const bool branch_taken_0x1aa8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8b4) {
            ctx->pc = 0x1AA8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8B4u;
            // 0x1aa8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa898;
        }
    }
    ctx->pc = 0x1AA8BCu;
label_1aa8bc:
    // 0x1aa8bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aa8c0:
    if (ctx->pc == 0x1AA8C0u) {
        ctx->pc = 0x1AA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8BCu;
        // 0x1aa8c0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8C4u;
        goto label_1aa8c4;
    }
    ctx->pc = 0x1AA8BCu;
    {
        const bool branch_taken_0x1aa8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8BCu;
        // 0x1aa8c0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8bc) {
            ctx->pc = 0x1AA8D4u;
            goto label_1aa8d4;
        }
    }
    ctx->pc = 0x1AA8C4u;
label_1aa8c4:
    // 0x1aa8c4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa8c8:
    // 0x1aa8c8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa8cc:
    // 0x1aa8cc: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa8d0:
    // 0x1aa8d0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa8d4:
    // 0x1aa8d4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aa8d8:
    if (ctx->pc == 0x1AA8D8u) {
        ctx->pc = 0x1AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8D4u;
        // 0x1aa8d8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8DCu;
        goto label_1aa8dc;
    }
    ctx->pc = 0x1AA8D4u;
    {
        const bool branch_taken_0x1aa8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa8d4) {
            ctx->pc = 0x1AA8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8D4u;
            // 0x1aa8d8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8DCu;
            goto label_1aa8dc;
        }
    }
    ctx->pc = 0x1AA8DCu;
label_1aa8dc:
    // 0x1aa8dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1aa8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa8e0:
    // 0x1aa8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8e4:
    // 0x1aa8e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aa8e8:
    // 0x1aa8e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1aa8ec:
    if (ctx->pc == 0x1AA8ECu) {
        ctx->pc = 0x1AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8E8u;
        // 0x1aa8ec: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8F0u;
        goto label_1aa8f0;
    }
    ctx->pc = 0x1AA8E8u;
    {
        const bool branch_taken_0x1aa8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8E8u;
        // 0x1aa8ec: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8e8) {
            ctx->pc = 0x1AA91Cu;
            goto label_1aa91c;
        }
    }
    ctx->pc = 0x1AA8F0u;
label_1aa8f0:
    // 0x1aa8f0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
label_1aa8f4:
    // 0x1aa8f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa8f8:
    // 0x1aa8f8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aa8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa8fc:
    // 0x1aa8fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1aa900:
    if (ctx->pc == 0x1AA900u) {
        ctx->pc = 0x1AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8FCu;
        // 0x1aa900: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA904u;
        goto label_1aa904;
    }
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8FCu;
        // 0x1aa900: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA91Cu;
            goto label_1aa91c;
        }
    }
    ctx->pc = 0x1AA904u;
label_1aa904:
    // 0x1aa904: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1aa904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1aa908:
    // 0x1aa908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa90c:
    // 0x1aa90c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aa90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aa910:
    // 0x1aa910: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa914:
    // 0x1aa914: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aa918:
    if (ctx->pc == 0x1AA918u) {
        ctx->pc = 0x1AA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA914u;
        // 0x1aa918: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA91Cu;
        goto label_1aa91c;
    }
    ctx->pc = 0x1AA914u;
    {
        const bool branch_taken_0x1aa914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa914) {
            ctx->pc = 0x1AA918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA914u;
            // 0x1aa918: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa8f8;
        }
    }
    ctx->pc = 0x1AA91Cu;
label_1aa91c:
    // 0x1aa91c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa920:
    // 0x1aa920: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aa924:
    if (ctx->pc == 0x1AA924u) {
        ctx->pc = 0x1AA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA920u;
        // 0x1aa924: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA928u;
        goto label_1aa928;
    }
    ctx->pc = 0x1AA920u;
    {
        const bool branch_taken_0x1aa920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa920) {
            ctx->pc = 0x1AA924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA920u;
            // 0x1aa924: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA928u;
            goto label_1aa928;
        }
    }
    ctx->pc = 0x1AA928u;
label_1aa928:
    // 0x1aa928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa92c:
    // 0x1aa92c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa930:
    // 0x1aa930: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aa930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aa934:
    // 0x1aa934: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa938:
    // 0x1aa938: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1aa938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1aa93c:
    // 0x1aa93c: 0xc069208  jal         func_1A4820
label_1aa940:
    if (ctx->pc == 0x1AA940u) {
        ctx->pc = 0x1AA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA93Cu;
        // 0x1aa940: 0x26d03240  addiu       $s0, $s6, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA944u;
        goto label_1aa944;
    }
    ctx->pc = 0x1AA93Cu;
    SET_GPR_U32(ctx, 31, 0x1AA944u);
    ctx->pc = 0x1AA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA93Cu;
    // 0x1aa940: 0x26d03240  addiu       $s0, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA944u;
label_1aa944:
    // 0x1aa944: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1aa948:
    // 0x1aa948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa94c:
    // 0x1aa94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa950:
    // 0x1aa950: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa954:
    // 0x1aa954: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1aa954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1aa958:
    // 0x1aa958: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aa958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aa95c:
    // 0x1aa95c: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1aa960:
    // 0x1aa960: 0xc069bee  jal         func_1A6FB8
label_1aa964:
    if (ctx->pc == 0x1AA964u) {
        ctx->pc = 0x1AA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA960u;
        // 0x1aa964: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA968u;
        goto label_1aa968;
    }
    ctx->pc = 0x1AA960u;
    SET_GPR_U32(ctx, 31, 0x1AA968u);
    ctx->pc = 0x1AA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA960u;
    // 0x1aa964: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AA968u;
label_1aa968:
    // 0x1aa968: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1aa968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1aa96c:
    // 0x1aa96c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa970:
    // 0x1aa970: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa974:
    // 0x1aa974: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1aa974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1aa978:
    // 0x1aa978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa97c:
    // 0x1aa97c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1aa980:
    // 0x1aa980: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1aa980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aa984:
    // 0x1aa984: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa988:
    // 0x1aa988: 0xc069e2a  jal         func_1A78A8
label_1aa98c:
    if (ctx->pc == 0x1AA98Cu) {
        ctx->pc = 0x1AA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA988u;
        // 0x1aa98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA990u;
        goto label_1aa990;
    }
    ctx->pc = 0x1AA988u;
    SET_GPR_U32(ctx, 31, 0x1AA990u);
    ctx->pc = 0x1AA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA988u;
    // 0x1aa98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA990u;
label_1aa990:
    // 0x1aa990: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa994:
    if (ctx->pc == 0x1AA994u) {
        ctx->pc = 0x1AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA990u;
        // 0x1aa994: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA998u;
        goto label_1aa998;
    }
    ctx->pc = 0x1AA990u;
    {
        const bool branch_taken_0x1aa990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA990u;
        // 0x1aa994: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa990) {
            ctx->pc = 0x1AA9B0u;
            goto label_1aa9b0;
        }
    }
    ctx->pc = 0x1AA998u;
label_1aa998:
    // 0x1aa998: 0xc06920c  jal         func_1A4830
label_1aa99c:
    if (ctx->pc == 0x1AA99Cu) {
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9A0u;
        goto label_1aa9a0;
    }
    ctx->pc = 0x1AA998u;
    SET_GPR_U32(ctx, 31, 0x1AA9A0u);
    ctx->pc = 0x1AA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA998u;
    // 0x1aa99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9A0u;
label_1aa9a0:
    // 0x1aa9a0: 0xc06a158  jal         func_1A8560
label_1aa9a4:
    if (ctx->pc == 0x1AA9A4u) {
        ctx->pc = 0x1AA9A8u;
        goto label_1aa9a8;
    }
    ctx->pc = 0x1AA9A0u;
    SET_GPR_U32(ctx, 31, 0x1AA9A8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA9A8u;
label_1aa9a8:
    // 0x1aa9a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa9ac:
    if (ctx->pc == 0x1AA9ACu) {
        ctx->pc = 0x1AA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9A8u;
        // 0x1aa9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9B0u;
        goto label_1aa9b0;
    }
    ctx->pc = 0x1AA9A8u;
    {
        const bool branch_taken_0x1aa9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9A8u;
        // 0x1aa9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9a8) {
            ctx->pc = 0x1AA9E8u;
            goto label_1aa9e8;
        }
    }
    ctx->pc = 0x1AA9B0u;
label_1aa9b0:
    // 0x1aa9b0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1aa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1aa9b4:
    // 0x1aa9b4: 0xc06a158  jal         func_1A8560
label_1aa9b8:
    if (ctx->pc == 0x1AA9B8u) {
        ctx->pc = 0x1AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B4u;
        // 0x1aa9b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9BCu;
        goto label_1aa9bc;
    }
    ctx->pc = 0x1AA9B4u;
    SET_GPR_U32(ctx, 31, 0x1AA9BCu);
    ctx->pc = 0x1AA9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9B4u;
    // 0x1aa9b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA9BCu;
label_1aa9bc:
    // 0x1aa9bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa9c0:
    if (ctx->pc == 0x1AA9C0u) {
        ctx->pc = 0x1AA9C4u;
        goto label_1aa9c4;
    }
    ctx->pc = 0x1AA9BCu;
    {
        const bool branch_taken_0x1aa9bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9bc) {
            ctx->pc = 0x1AA9D4u;
            goto label_1aa9d4;
        }
    }
    ctx->pc = 0x1AA9C4u;
label_1aa9c4:
    // 0x1aa9c4: 0xc06920c  jal         func_1A4830
label_1aa9c8:
    if (ctx->pc == 0x1AA9C8u) {
        ctx->pc = 0x1AA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9C4u;
        // 0x1aa9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9CCu;
        goto label_1aa9cc;
    }
    ctx->pc = 0x1AA9C4u;
    SET_GPR_U32(ctx, 31, 0x1AA9CCu);
    ctx->pc = 0x1AA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9C4u;
    // 0x1aa9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9CCu;
label_1aa9cc:
    // 0x1aa9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa9d0:
    if (ctx->pc == 0x1AA9D0u) {
        ctx->pc = 0x1AA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9CCu;
        // 0x1aa9d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9D4u;
        goto label_1aa9d4;
    }
    ctx->pc = 0x1AA9CCu;
    {
        const bool branch_taken_0x1aa9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9CCu;
        // 0x1aa9d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9cc) {
            ctx->pc = 0x1AA9E8u;
            goto label_1aa9e8;
        }
    }
    ctx->pc = 0x1AA9D4u;
label_1aa9d4:
    // 0x1aa9d4: 0xc069218  jal         func_1A4860
label_1aa9d8:
    if (ctx->pc == 0x1AA9D8u) {
        ctx->pc = 0x1AA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9D4u;
        // 0x1aa9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9DCu;
        goto label_1aa9dc;
    }
    ctx->pc = 0x1AA9D4u;
    SET_GPR_U32(ctx, 31, 0x1AA9DCu);
    ctx->pc = 0x1AA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9D4u;
    // 0x1aa9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA9DCu;
label_1aa9dc:
    // 0x1aa9dc: 0xc06920c  jal         func_1A4830
label_1aa9e0:
    if (ctx->pc == 0x1AA9E0u) {
        ctx->pc = 0x1AA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9DCu;
        // 0x1aa9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9E4u;
        goto label_1aa9e4;
    }
    ctx->pc = 0x1AA9DCu;
    SET_GPR_U32(ctx, 31, 0x1AA9E4u);
    ctx->pc = 0x1AA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9DCu;
    // 0x1aa9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9E4u;
label_1aa9e4:
    // 0x1aa9e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa9e8:
    // 0x1aa9e8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1aa9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aa9ec:
    // 0x1aa9ec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aa9ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aa9f0:
    // 0x1aa9f0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aa9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa9f4:
    // 0x1aa9f4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aa9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa9f8:
    // 0x1aa9f8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa9fc:
    // 0x1aa9fc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aaa00:
    // 0x1aaa00: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aaa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aaa04:
    // 0x1aaa04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aaa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aaa08:
    // 0x1aaa08: 0x3e00008  jr          $ra
label_1aaa0c:
    if (ctx->pc == 0x1AAA0Cu) {
        ctx->pc = 0x1AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA08u;
        // 0x1aaa0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA10u;
        goto label_1aaa10;
    }
    ctx->pc = 0x1AAA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA08u;
        // 0x1aaa0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA10u;
label_1aaa10:
    // 0x1aaa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aaa14:
    // 0x1aaa14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aaa18:
    // 0x1aaa18: 0xc06a65c  jal         func_1A9970
label_1aaa1c:
    if (ctx->pc == 0x1AAA1Cu) {
        ctx->pc = 0x1AAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA18u;
        // 0x1aaa1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA20u;
        goto label_1aaa20;
    }
    ctx->pc = 0x1AAA18u;
    SET_GPR_U32(ctx, 31, 0x1AAA20u);
    ctx->pc = 0x1AAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA18u;
    // 0x1aaa1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    { ctx->pc = 0x1a9970; return; }
    ctx->pc = 0x1AAA20u;
label_1aaa20:
    // 0x1aaa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aaa24:
    // 0x1aaa24: 0x3e00008  jr          $ra
label_1aaa28:
    if (ctx->pc == 0x1AAA28u) {
        ctx->pc = 0x1AAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA24u;
        // 0x1aaa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA2Cu;
        goto label_1aaa2c;
    }
    ctx->pc = 0x1AAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA24u;
        // 0x1aaa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA2Cu;
label_1aaa2c:
    // 0x1aaa2c: 0x0  nop
    ctx->pc = 0x1aaa2cu;
    // NOP
label_1aaa30:
    // 0x1aaa30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1aaa34:
    // 0x1aaa34: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aaa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aaa38:
    // 0x1aaa38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aaa3c:
    // 0x1aaa3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa40:
    // 0x1aaa40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aaa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aaa44:
    // 0x1aaa44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aaa44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa48:
    // 0x1aaa48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aaa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aaa4c:
    // 0x1aaa4c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1aaa50:
    // 0x1aaa50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aaa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1aaa54:
    // 0x1aaa54: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aaa58:
    // 0x1aaa58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aaa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aaa5c:
    // 0x1aaa5c: 0x26d03240  addiu       $s0, $s6, 0x3240
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1aaa60:
    // 0x1aaa60: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aaa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aaa64:
    // 0x1aaa64: 0xc06a14c  jal         func_1A8530
label_1aaa68:
    if (ctx->pc == 0x1AAA68u) {
        ctx->pc = 0x1AAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA64u;
        // 0x1aaa68: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA6Cu;
        goto label_1aaa6c;
    }
    ctx->pc = 0x1AAA64u;
    SET_GPR_U32(ctx, 31, 0x1AAA6Cu);
    ctx->pc = 0x1AAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA64u;
    // 0x1aaa68: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AAA6Cu;
label_1aaa6c:
    // 0x1aaa6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aaa70:
    // 0x1aaa70: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aaa74:
    // 0x1aaa74: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1aaa78:
    if (ctx->pc == 0x1AAA78u) {
        ctx->pc = 0x1AAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA74u;
        // 0x1aaa78: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA7Cu;
        goto label_1aaa7c;
    }
    ctx->pc = 0x1AAA74u;
    {
        const bool branch_taken_0x1aaa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa74) {
            ctx->pc = 0x1AAA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAA74u;
            // 0x1aaa78: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAA88u;
            goto label_1aaa88;
        }
    }
    ctx->pc = 0x1AAA7Cu;
label_1aaa7c:
    // 0x1aaa7c: 0xc06a18e  jal         func_1A8638
label_1aaa80:
    if (ctx->pc == 0x1AAA80u) {
        ctx->pc = 0x1AAA84u;
        goto label_1aaa84;
    }
    ctx->pc = 0x1AAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA84u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AAA84u;
label_1aaa84:
    // 0x1aaa84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aaa84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aaa88:
    // 0x1aaa88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa8c:
    // 0x1aaa8c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aaa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aaa90:
    // 0x1aaa90: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1aaa94:
    if (ctx->pc == 0x1AAA94u) {
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA98u;
        goto label_1aaa98;
    }
    ctx->pc = 0x1AAA90u;
    {
        const bool branch_taken_0x1aaa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa90) {
            ctx->pc = 0x1AAAD4u;
            goto label_1aaad4;
        }
    }
    ctx->pc = 0x1AAA98u;
label_1aaa98:
    // 0x1aaa98: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1aaa98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaa9c:
    // 0x1aaa9c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aaaa0:
    // 0x1aaaa0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1aaaa4:
    // 0x1aaaa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aaaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aaaa8:
    // 0x1aaaa8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aaaac:
    // 0x1aaaac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1aaab0:
    if (ctx->pc == 0x1AAAB0u) {
        ctx->pc = 0x1AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAACu;
        // 0x1aaab0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAB4u;
        goto label_1aaab4;
    }
    ctx->pc = 0x1AAAACu;
    {
        const bool branch_taken_0x1aaaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAACu;
        // 0x1aaab0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaac) {
            ctx->pc = 0x1AAAE0u;
            goto label_1aaae0;
        }
    }
    ctx->pc = 0x1AAAB4u;
label_1aaab4:
    // 0x1aaab4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1aaab8:
    // 0x1aaab8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aaab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaabc:
    // 0x1aaabc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1aaabcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_1aaac0:
    // 0x1aaac0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aaac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aaac4:
    // 0x1aaac4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aaac8:
    if (ctx->pc == 0x1AAAC8u) {
        ctx->pc = 0x1AAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAC4u;
        // 0x1aaac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAACCu;
        goto label_1aaacc;
    }
    ctx->pc = 0x1AAAC4u;
    {
        const bool branch_taken_0x1aaac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaac4) {
            ctx->pc = 0x1AAAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAC4u;
            // 0x1aaac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaaa8;
        }
    }
    ctx->pc = 0x1AAACCu;
label_1aaacc:
    // 0x1aaacc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aaad0:
    if (ctx->pc == 0x1AAAD0u) {
        ctx->pc = 0x1AAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAACCu;
        // 0x1aaad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAD4u;
        goto label_1aaad4;
    }
    ctx->pc = 0x1AAACCu;
    {
        const bool branch_taken_0x1aaacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAACCu;
        // 0x1aaad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaacc) {
            ctx->pc = 0x1AAAE4u;
            goto label_1aaae4;
        }
    }
    ctx->pc = 0x1AAAD4u;
label_1aaad4:
    // 0x1aaad4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaad8:
    // 0x1aaad8: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aaadc:
    // 0x1aaadc: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aaadcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1aaae0:
    // 0x1aaae0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aaae4:
    // 0x1aaae4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aaae8:
    if (ctx->pc == 0x1AAAE8u) {
        ctx->pc = 0x1AAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAE4u;
        // 0x1aaae8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAECu;
        goto label_1aaaec;
    }
    ctx->pc = 0x1AAAE4u;
    {
        const bool branch_taken_0x1aaae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaae4) {
            ctx->pc = 0x1AAAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAE4u;
            // 0x1aaae8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAECu;
            goto label_1aaaec;
        }
    }
    ctx->pc = 0x1AAAECu;
label_1aaaec:
    // 0x1aaaec: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1aaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
label_1aaaf0:
    // 0x1aaaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaaf4:
    // 0x1aaaf4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aaaf8:
    // 0x1aaaf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aaafc:
    // 0x1aaafc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aaafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aab00:
    // 0x1aab00: 0x26733e80  addiu       $s3, $s3, 0x3E80
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16000));
label_1aab04:
    // 0x1aab04: 0xc069208  jal         func_1A4820
label_1aab08:
    if (ctx->pc == 0x1AAB08u) {
        ctx->pc = 0x1AAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB04u;
        // 0x1aab08: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB0Cu;
        goto label_1aab0c;
    }
    ctx->pc = 0x1AAB04u;
    SET_GPR_U32(ctx, 31, 0x1AAB0Cu);
    ctx->pc = 0x1AAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB04u;
    // 0x1aab08: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AAB0Cu;
label_1aab0c:
    // 0x1aab0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab10:
    // 0x1aab10: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aab10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1aab14:
    // 0x1aab14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aab18:
    // 0x1aab18: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1aab18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1aab1c:
    // 0x1aab1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1aab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1aab20:
    // 0x1aab20: 0x26844500  addiu       $a0, $s4, 0x4500
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17664));
label_1aab24:
    // 0x1aab24: 0x26c73240  addiu       $a3, $s6, 0x3240
    ctx->pc = 0x1aab24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1aab28:
    // 0x1aab28: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1aab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1aab2c:
    // 0x1aab2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aab30:
    // 0x1aab30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aab34:
    // 0x1aab34: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1aab34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1aab38:
    // 0x1aab38: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1aab38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aab3c:
    // 0x1aab3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aab3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1aab40u;
    return;
}

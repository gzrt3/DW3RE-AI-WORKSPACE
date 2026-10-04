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


void FUN_0014eba0_part778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ca1f0u: goto label_2ca1f0;
        case 0x2ca1f4u: goto label_2ca1f4;
        case 0x2ca1f8u: goto label_2ca1f8;
        case 0x2ca1fcu: goto label_2ca1fc;
        case 0x2ca200u: goto label_2ca200;
        case 0x2ca204u: goto label_2ca204;
        case 0x2ca208u: goto label_2ca208;
        case 0x2ca20cu: goto label_2ca20c;
        case 0x2ca210u: goto label_2ca210;
        case 0x2ca214u: goto label_2ca214;
        case 0x2ca218u: goto label_2ca218;
        case 0x2ca21cu: goto label_2ca21c;
        case 0x2ca220u: goto label_2ca220;
        case 0x2ca224u: goto label_2ca224;
        case 0x2ca228u: goto label_2ca228;
        case 0x2ca22cu: goto label_2ca22c;
        case 0x2ca230u: goto label_2ca230;
        case 0x2ca234u: goto label_2ca234;
        case 0x2ca238u: goto label_2ca238;
        case 0x2ca23cu: goto label_2ca23c;
        case 0x2ca240u: goto label_2ca240;
        case 0x2ca244u: goto label_2ca244;
        case 0x2ca248u: goto label_2ca248;
        case 0x2ca24cu: goto label_2ca24c;
        case 0x2ca250u: goto label_2ca250;
        case 0x2ca254u: goto label_2ca254;
        case 0x2ca258u: goto label_2ca258;
        case 0x2ca25cu: goto label_2ca25c;
        case 0x2ca260u: goto label_2ca260;
        case 0x2ca264u: goto label_2ca264;
        case 0x2ca268u: goto label_2ca268;
        case 0x2ca26cu: goto label_2ca26c;
        case 0x2ca270u: goto label_2ca270;
        case 0x2ca274u: goto label_2ca274;
        case 0x2ca278u: goto label_2ca278;
        case 0x2ca27cu: goto label_2ca27c;
        case 0x2ca280u: goto label_2ca280;
        case 0x2ca284u: goto label_2ca284;
        case 0x2ca288u: goto label_2ca288;
        case 0x2ca28cu: goto label_2ca28c;
        case 0x2ca290u: goto label_2ca290;
        case 0x2ca294u: goto label_2ca294;
        case 0x2ca298u: goto label_2ca298;
        case 0x2ca29cu: goto label_2ca29c;
        case 0x2ca2a0u: goto label_2ca2a0;
        case 0x2ca2a4u: goto label_2ca2a4;
        case 0x2ca2a8u: goto label_2ca2a8;
        case 0x2ca2acu: goto label_2ca2ac;
        case 0x2ca2b0u: goto label_2ca2b0;
        case 0x2ca2b4u: goto label_2ca2b4;
        case 0x2ca2b8u: goto label_2ca2b8;
        case 0x2ca2bcu: goto label_2ca2bc;
        case 0x2ca2c0u: goto label_2ca2c0;
        case 0x2ca2c4u: goto label_2ca2c4;
        case 0x2ca2c8u: goto label_2ca2c8;
        case 0x2ca2ccu: goto label_2ca2cc;
        case 0x2ca2d0u: goto label_2ca2d0;
        case 0x2ca2d4u: goto label_2ca2d4;
        case 0x2ca2d8u: goto label_2ca2d8;
        case 0x2ca2dcu: goto label_2ca2dc;
        case 0x2ca2e0u: goto label_2ca2e0;
        case 0x2ca2e4u: goto label_2ca2e4;
        case 0x2ca2e8u: goto label_2ca2e8;
        case 0x2ca2ecu: goto label_2ca2ec;
        case 0x2ca2f0u: goto label_2ca2f0;
        case 0x2ca2f4u: goto label_2ca2f4;
        case 0x2ca2f8u: goto label_2ca2f8;
        case 0x2ca2fcu: goto label_2ca2fc;
        case 0x2ca300u: goto label_2ca300;
        case 0x2ca304u: goto label_2ca304;
        case 0x2ca308u: goto label_2ca308;
        case 0x2ca30cu: goto label_2ca30c;
        case 0x2ca310u: goto label_2ca310;
        case 0x2ca314u: goto label_2ca314;
        case 0x2ca318u: goto label_2ca318;
        case 0x2ca31cu: goto label_2ca31c;
        case 0x2ca320u: goto label_2ca320;
        case 0x2ca324u: goto label_2ca324;
        case 0x2ca328u: goto label_2ca328;
        case 0x2ca32cu: goto label_2ca32c;
        case 0x2ca330u: goto label_2ca330;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca338u: goto label_2ca338;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca340u: goto label_2ca340;
        case 0x2ca344u: goto label_2ca344;
        case 0x2ca348u: goto label_2ca348;
        case 0x2ca34cu: goto label_2ca34c;
        case 0x2ca350u: goto label_2ca350;
        case 0x2ca354u: goto label_2ca354;
        case 0x2ca358u: goto label_2ca358;
        case 0x2ca35cu: goto label_2ca35c;
        case 0x2ca360u: goto label_2ca360;
        case 0x2ca364u: goto label_2ca364;
        case 0x2ca368u: goto label_2ca368;
        case 0x2ca36cu: goto label_2ca36c;
        case 0x2ca370u: goto label_2ca370;
        case 0x2ca374u: goto label_2ca374;
        case 0x2ca378u: goto label_2ca378;
        case 0x2ca37cu: goto label_2ca37c;
        case 0x2ca380u: goto label_2ca380;
        case 0x2ca384u: goto label_2ca384;
        case 0x2ca388u: goto label_2ca388;
        case 0x2ca38cu: goto label_2ca38c;
        case 0x2ca390u: goto label_2ca390;
        case 0x2ca394u: goto label_2ca394;
        case 0x2ca398u: goto label_2ca398;
        case 0x2ca39cu: goto label_2ca39c;
        case 0x2ca3a0u: goto label_2ca3a0;
        case 0x2ca3a4u: goto label_2ca3a4;
        case 0x2ca3a8u: goto label_2ca3a8;
        case 0x2ca3acu: goto label_2ca3ac;
        case 0x2ca3b0u: goto label_2ca3b0;
        case 0x2ca3b4u: goto label_2ca3b4;
        case 0x2ca3b8u: goto label_2ca3b8;
        case 0x2ca3bcu: goto label_2ca3bc;
        case 0x2ca3c0u: goto label_2ca3c0;
        case 0x2ca3c4u: goto label_2ca3c4;
        case 0x2ca3c8u: goto label_2ca3c8;
        case 0x2ca3ccu: goto label_2ca3cc;
        case 0x2ca3d0u: goto label_2ca3d0;
        case 0x2ca3d4u: goto label_2ca3d4;
        case 0x2ca3d8u: goto label_2ca3d8;
        case 0x2ca3dcu: goto label_2ca3dc;
        case 0x2ca3e0u: goto label_2ca3e0;
        case 0x2ca3e4u: goto label_2ca3e4;
        case 0x2ca3e8u: goto label_2ca3e8;
        case 0x2ca3ecu: goto label_2ca3ec;
        case 0x2ca3f0u: goto label_2ca3f0;
        case 0x2ca3f4u: goto label_2ca3f4;
        case 0x2ca3f8u: goto label_2ca3f8;
        case 0x2ca3fcu: goto label_2ca3fc;
        case 0x2ca400u: goto label_2ca400;
        case 0x2ca404u: goto label_2ca404;
        case 0x2ca408u: goto label_2ca408;
        case 0x2ca40cu: goto label_2ca40c;
        case 0x2ca410u: goto label_2ca410;
        case 0x2ca414u: goto label_2ca414;
        case 0x2ca418u: goto label_2ca418;
        case 0x2ca41cu: goto label_2ca41c;
        case 0x2ca420u: goto label_2ca420;
        case 0x2ca424u: goto label_2ca424;
        case 0x2ca428u: goto label_2ca428;
        case 0x2ca42cu: goto label_2ca42c;
        case 0x2ca430u: goto label_2ca430;
        case 0x2ca434u: goto label_2ca434;
        case 0x2ca438u: goto label_2ca438;
        case 0x2ca43cu: goto label_2ca43c;
        case 0x2ca440u: goto label_2ca440;
        case 0x2ca444u: goto label_2ca444;
        case 0x2ca448u: goto label_2ca448;
        case 0x2ca44cu: goto label_2ca44c;
        case 0x2ca450u: goto label_2ca450;
        case 0x2ca454u: goto label_2ca454;
        case 0x2ca458u: goto label_2ca458;
        case 0x2ca45cu: goto label_2ca45c;
        case 0x2ca460u: goto label_2ca460;
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca468u: goto label_2ca468;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca470u: goto label_2ca470;
        case 0x2ca474u: goto label_2ca474;
        case 0x2ca478u: goto label_2ca478;
        case 0x2ca47cu: goto label_2ca47c;
        case 0x2ca480u: goto label_2ca480;
        case 0x2ca484u: goto label_2ca484;
        case 0x2ca488u: goto label_2ca488;
        case 0x2ca48cu: goto label_2ca48c;
        case 0x2ca490u: goto label_2ca490;
        case 0x2ca494u: goto label_2ca494;
        case 0x2ca498u: goto label_2ca498;
        case 0x2ca49cu: goto label_2ca49c;
        case 0x2ca4a0u: goto label_2ca4a0;
        case 0x2ca4a4u: goto label_2ca4a4;
        case 0x2ca4a8u: goto label_2ca4a8;
        case 0x2ca4acu: goto label_2ca4ac;
        case 0x2ca4b0u: goto label_2ca4b0;
        case 0x2ca4b4u: goto label_2ca4b4;
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca4bcu: goto label_2ca4bc;
        case 0x2ca4c0u: goto label_2ca4c0;
        case 0x2ca4c4u: goto label_2ca4c4;
        case 0x2ca4c8u: goto label_2ca4c8;
        case 0x2ca4ccu: goto label_2ca4cc;
        case 0x2ca4d0u: goto label_2ca4d0;
        case 0x2ca4d4u: goto label_2ca4d4;
        case 0x2ca4d8u: goto label_2ca4d8;
        case 0x2ca4dcu: goto label_2ca4dc;
        case 0x2ca4e0u: goto label_2ca4e0;
        case 0x2ca4e4u: goto label_2ca4e4;
        case 0x2ca4e8u: goto label_2ca4e8;
        case 0x2ca4ecu: goto label_2ca4ec;
        case 0x2ca4f0u: goto label_2ca4f0;
        case 0x2ca4f4u: goto label_2ca4f4;
        case 0x2ca4f8u: goto label_2ca4f8;
        case 0x2ca4fcu: goto label_2ca4fc;
        case 0x2ca500u: goto label_2ca500;
        case 0x2ca504u: goto label_2ca504;
        case 0x2ca508u: goto label_2ca508;
        case 0x2ca50cu: goto label_2ca50c;
        case 0x2ca510u: goto label_2ca510;
        case 0x2ca514u: goto label_2ca514;
        case 0x2ca518u: goto label_2ca518;
        case 0x2ca51cu: goto label_2ca51c;
        case 0x2ca520u: goto label_2ca520;
        case 0x2ca524u: goto label_2ca524;
        case 0x2ca528u: goto label_2ca528;
        case 0x2ca52cu: goto label_2ca52c;
        case 0x2ca530u: goto label_2ca530;
        case 0x2ca534u: goto label_2ca534;
        case 0x2ca538u: goto label_2ca538;
        case 0x2ca53cu: goto label_2ca53c;
        case 0x2ca540u: goto label_2ca540;
        case 0x2ca544u: goto label_2ca544;
        case 0x2ca548u: goto label_2ca548;
        case 0x2ca54cu: goto label_2ca54c;
        case 0x2ca550u: goto label_2ca550;
        case 0x2ca554u: goto label_2ca554;
        case 0x2ca558u: goto label_2ca558;
        case 0x2ca55cu: goto label_2ca55c;
        case 0x2ca560u: goto label_2ca560;
        case 0x2ca564u: goto label_2ca564;
        case 0x2ca568u: goto label_2ca568;
        case 0x2ca56cu: goto label_2ca56c;
        case 0x2ca570u: goto label_2ca570;
        case 0x2ca574u: goto label_2ca574;
        case 0x2ca578u: goto label_2ca578;
        case 0x2ca57cu: goto label_2ca57c;
        case 0x2ca580u: goto label_2ca580;
        case 0x2ca584u: goto label_2ca584;
        case 0x2ca588u: goto label_2ca588;
        case 0x2ca58cu: goto label_2ca58c;
        case 0x2ca590u: goto label_2ca590;
        case 0x2ca594u: goto label_2ca594;
        case 0x2ca598u: goto label_2ca598;
        case 0x2ca59cu: goto label_2ca59c;
        case 0x2ca5a0u: goto label_2ca5a0;
        case 0x2ca5a4u: goto label_2ca5a4;
        case 0x2ca5a8u: goto label_2ca5a8;
        case 0x2ca5acu: goto label_2ca5ac;
        case 0x2ca5b0u: goto label_2ca5b0;
        case 0x2ca5b4u: goto label_2ca5b4;
        case 0x2ca5b8u: goto label_2ca5b8;
        case 0x2ca5bcu: goto label_2ca5bc;
        case 0x2ca5c0u: goto label_2ca5c0;
        case 0x2ca5c4u: goto label_2ca5c4;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca5ccu: goto label_2ca5cc;
        case 0x2ca5d0u: goto label_2ca5d0;
        case 0x2ca5d4u: goto label_2ca5d4;
        case 0x2ca5d8u: goto label_2ca5d8;
        case 0x2ca5dcu: goto label_2ca5dc;
        case 0x2ca5e0u: goto label_2ca5e0;
        case 0x2ca5e4u: goto label_2ca5e4;
        case 0x2ca5e8u: goto label_2ca5e8;
        case 0x2ca5ecu: goto label_2ca5ec;
        case 0x2ca5f0u: goto label_2ca5f0;
        case 0x2ca5f4u: goto label_2ca5f4;
        case 0x2ca5f8u: goto label_2ca5f8;
        case 0x2ca5fcu: goto label_2ca5fc;
        case 0x2ca600u: goto label_2ca600;
        case 0x2ca604u: goto label_2ca604;
        case 0x2ca608u: goto label_2ca608;
        case 0x2ca60cu: goto label_2ca60c;
        case 0x2ca610u: goto label_2ca610;
        case 0x2ca614u: goto label_2ca614;
        case 0x2ca618u: goto label_2ca618;
        case 0x2ca61cu: goto label_2ca61c;
        case 0x2ca620u: goto label_2ca620;
        case 0x2ca624u: goto label_2ca624;
        case 0x2ca628u: goto label_2ca628;
        case 0x2ca62cu: goto label_2ca62c;
        case 0x2ca630u: goto label_2ca630;
        case 0x2ca634u: goto label_2ca634;
        case 0x2ca638u: goto label_2ca638;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca640u: goto label_2ca640;
        case 0x2ca644u: goto label_2ca644;
        case 0x2ca648u: goto label_2ca648;
        case 0x2ca64cu: goto label_2ca64c;
        case 0x2ca650u: goto label_2ca650;
        case 0x2ca654u: goto label_2ca654;
        case 0x2ca658u: goto label_2ca658;
        case 0x2ca65cu: goto label_2ca65c;
        case 0x2ca660u: goto label_2ca660;
        case 0x2ca664u: goto label_2ca664;
        case 0x2ca668u: goto label_2ca668;
        case 0x2ca66cu: goto label_2ca66c;
        case 0x2ca670u: goto label_2ca670;
        case 0x2ca674u: goto label_2ca674;
        case 0x2ca678u: goto label_2ca678;
        case 0x2ca67cu: goto label_2ca67c;
        case 0x2ca680u: goto label_2ca680;
        case 0x2ca684u: goto label_2ca684;
        case 0x2ca688u: goto label_2ca688;
        case 0x2ca68cu: goto label_2ca68c;
        case 0x2ca690u: goto label_2ca690;
        case 0x2ca694u: goto label_2ca694;
        case 0x2ca698u: goto label_2ca698;
        case 0x2ca69cu: goto label_2ca69c;
        case 0x2ca6a0u: goto label_2ca6a0;
        case 0x2ca6a4u: goto label_2ca6a4;
        case 0x2ca6a8u: goto label_2ca6a8;
        case 0x2ca6acu: goto label_2ca6ac;
        case 0x2ca6b0u: goto label_2ca6b0;
        case 0x2ca6b4u: goto label_2ca6b4;
        case 0x2ca6b8u: goto label_2ca6b8;
        case 0x2ca6bcu: goto label_2ca6bc;
        case 0x2ca6c0u: goto label_2ca6c0;
        case 0x2ca6c4u: goto label_2ca6c4;
        case 0x2ca6c8u: goto label_2ca6c8;
        case 0x2ca6ccu: goto label_2ca6cc;
        case 0x2ca6d0u: goto label_2ca6d0;
        case 0x2ca6d4u: goto label_2ca6d4;
        case 0x2ca6d8u: goto label_2ca6d8;
        case 0x2ca6dcu: goto label_2ca6dc;
        case 0x2ca6e0u: goto label_2ca6e0;
        case 0x2ca6e4u: goto label_2ca6e4;
        case 0x2ca6e8u: goto label_2ca6e8;
        case 0x2ca6ecu: goto label_2ca6ec;
        case 0x2ca6f0u: goto label_2ca6f0;
        case 0x2ca6f4u: goto label_2ca6f4;
        case 0x2ca6f8u: goto label_2ca6f8;
        case 0x2ca6fcu: goto label_2ca6fc;
        case 0x2ca700u: goto label_2ca700;
        case 0x2ca704u: goto label_2ca704;
        case 0x2ca708u: goto label_2ca708;
        case 0x2ca70cu: goto label_2ca70c;
        case 0x2ca710u: goto label_2ca710;
        case 0x2ca714u: goto label_2ca714;
        case 0x2ca718u: goto label_2ca718;
        case 0x2ca71cu: goto label_2ca71c;
        case 0x2ca720u: goto label_2ca720;
        case 0x2ca724u: goto label_2ca724;
        case 0x2ca728u: goto label_2ca728;
        case 0x2ca72cu: goto label_2ca72c;
        case 0x2ca730u: goto label_2ca730;
        case 0x2ca734u: goto label_2ca734;
        case 0x2ca738u: goto label_2ca738;
        case 0x2ca73cu: goto label_2ca73c;
        case 0x2ca740u: goto label_2ca740;
        case 0x2ca744u: goto label_2ca744;
        case 0x2ca748u: goto label_2ca748;
        case 0x2ca74cu: goto label_2ca74c;
        case 0x2ca750u: goto label_2ca750;
        case 0x2ca754u: goto label_2ca754;
        case 0x2ca758u: goto label_2ca758;
        case 0x2ca75cu: goto label_2ca75c;
        case 0x2ca760u: goto label_2ca760;
        case 0x2ca764u: goto label_2ca764;
        case 0x2ca768u: goto label_2ca768;
        case 0x2ca76cu: goto label_2ca76c;
        case 0x2ca770u: goto label_2ca770;
        case 0x2ca774u: goto label_2ca774;
        case 0x2ca778u: goto label_2ca778;
        case 0x2ca77cu: goto label_2ca77c;
        case 0x2ca780u: goto label_2ca780;
        case 0x2ca784u: goto label_2ca784;
        case 0x2ca788u: goto label_2ca788;
        case 0x2ca78cu: goto label_2ca78c;
        case 0x2ca790u: goto label_2ca790;
        case 0x2ca794u: goto label_2ca794;
        case 0x2ca798u: goto label_2ca798;
        case 0x2ca79cu: goto label_2ca79c;
        case 0x2ca7a0u: goto label_2ca7a0;
        case 0x2ca7a4u: goto label_2ca7a4;
        case 0x2ca7a8u: goto label_2ca7a8;
        case 0x2ca7acu: goto label_2ca7ac;
        case 0x2ca7b0u: goto label_2ca7b0;
        case 0x2ca7b4u: goto label_2ca7b4;
        case 0x2ca7b8u: goto label_2ca7b8;
        case 0x2ca7bcu: goto label_2ca7bc;
        case 0x2ca7c0u: goto label_2ca7c0;
        case 0x2ca7c4u: goto label_2ca7c4;
        case 0x2ca7c8u: goto label_2ca7c8;
        case 0x2ca7ccu: goto label_2ca7cc;
        case 0x2ca7d0u: goto label_2ca7d0;
        case 0x2ca7d4u: goto label_2ca7d4;
        case 0x2ca7d8u: goto label_2ca7d8;
        case 0x2ca7dcu: goto label_2ca7dc;
        case 0x2ca7e0u: goto label_2ca7e0;
        case 0x2ca7e4u: goto label_2ca7e4;
        case 0x2ca7e8u: goto label_2ca7e8;
        case 0x2ca7ecu: goto label_2ca7ec;
        case 0x2ca7f0u: goto label_2ca7f0;
        case 0x2ca7f4u: goto label_2ca7f4;
        case 0x2ca7f8u: goto label_2ca7f8;
        case 0x2ca7fcu: goto label_2ca7fc;
        case 0x2ca800u: goto label_2ca800;
        case 0x2ca804u: goto label_2ca804;
        case 0x2ca808u: goto label_2ca808;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca810u: goto label_2ca810;
        case 0x2ca814u: goto label_2ca814;
        case 0x2ca818u: goto label_2ca818;
        case 0x2ca81cu: goto label_2ca81c;
        case 0x2ca820u: goto label_2ca820;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca828u: goto label_2ca828;
        case 0x2ca82cu: goto label_2ca82c;
        case 0x2ca830u: goto label_2ca830;
        case 0x2ca834u: goto label_2ca834;
        case 0x2ca838u: goto label_2ca838;
        case 0x2ca83cu: goto label_2ca83c;
        case 0x2ca840u: goto label_2ca840;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca848u: goto label_2ca848;
        case 0x2ca84cu: goto label_2ca84c;
        case 0x2ca850u: goto label_2ca850;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca858u: goto label_2ca858;
        case 0x2ca85cu: goto label_2ca85c;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca864u: goto label_2ca864;
        case 0x2ca868u: goto label_2ca868;
        case 0x2ca86cu: goto label_2ca86c;
        case 0x2ca870u: goto label_2ca870;
        case 0x2ca874u: goto label_2ca874;
        case 0x2ca878u: goto label_2ca878;
        case 0x2ca87cu: goto label_2ca87c;
        case 0x2ca880u: goto label_2ca880;
        case 0x2ca884u: goto label_2ca884;
        case 0x2ca888u: goto label_2ca888;
        case 0x2ca88cu: goto label_2ca88c;
        case 0x2ca890u: goto label_2ca890;
        case 0x2ca894u: goto label_2ca894;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca89cu: goto label_2ca89c;
        case 0x2ca8a0u: goto label_2ca8a0;
        case 0x2ca8a4u: goto label_2ca8a4;
        case 0x2ca8a8u: goto label_2ca8a8;
        case 0x2ca8acu: goto label_2ca8ac;
        case 0x2ca8b0u: goto label_2ca8b0;
        case 0x2ca8b4u: goto label_2ca8b4;
        case 0x2ca8b8u: goto label_2ca8b8;
        case 0x2ca8bcu: goto label_2ca8bc;
        case 0x2ca8c0u: goto label_2ca8c0;
        case 0x2ca8c4u: goto label_2ca8c4;
        case 0x2ca8c8u: goto label_2ca8c8;
        case 0x2ca8ccu: goto label_2ca8cc;
        case 0x2ca8d0u: goto label_2ca8d0;
        case 0x2ca8d4u: goto label_2ca8d4;
        case 0x2ca8d8u: goto label_2ca8d8;
        case 0x2ca8dcu: goto label_2ca8dc;
        case 0x2ca8e0u: goto label_2ca8e0;
        case 0x2ca8e4u: goto label_2ca8e4;
        case 0x2ca8e8u: goto label_2ca8e8;
        case 0x2ca8ecu: goto label_2ca8ec;
        case 0x2ca8f0u: goto label_2ca8f0;
        case 0x2ca8f4u: goto label_2ca8f4;
        case 0x2ca8f8u: goto label_2ca8f8;
        case 0x2ca8fcu: goto label_2ca8fc;
        case 0x2ca900u: goto label_2ca900;
        case 0x2ca904u: goto label_2ca904;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca90cu: goto label_2ca90c;
        case 0x2ca910u: goto label_2ca910;
        case 0x2ca914u: goto label_2ca914;
        case 0x2ca918u: goto label_2ca918;
        case 0x2ca91cu: goto label_2ca91c;
        case 0x2ca920u: goto label_2ca920;
        case 0x2ca924u: goto label_2ca924;
        case 0x2ca928u: goto label_2ca928;
        case 0x2ca92cu: goto label_2ca92c;
        case 0x2ca930u: goto label_2ca930;
        case 0x2ca934u: goto label_2ca934;
        case 0x2ca938u: goto label_2ca938;
        case 0x2ca93cu: goto label_2ca93c;
        case 0x2ca940u: goto label_2ca940;
        case 0x2ca944u: goto label_2ca944;
        case 0x2ca948u: goto label_2ca948;
        case 0x2ca94cu: goto label_2ca94c;
        case 0x2ca950u: goto label_2ca950;
        case 0x2ca954u: goto label_2ca954;
        case 0x2ca958u: goto label_2ca958;
        case 0x2ca95cu: goto label_2ca95c;
        case 0x2ca960u: goto label_2ca960;
        case 0x2ca964u: goto label_2ca964;
        case 0x2ca968u: goto label_2ca968;
        case 0x2ca96cu: goto label_2ca96c;
        case 0x2ca970u: goto label_2ca970;
        case 0x2ca974u: goto label_2ca974;
        case 0x2ca978u: goto label_2ca978;
        case 0x2ca97cu: goto label_2ca97c;
        case 0x2ca980u: goto label_2ca980;
        case 0x2ca984u: goto label_2ca984;
        case 0x2ca988u: goto label_2ca988;
        case 0x2ca98cu: goto label_2ca98c;
        case 0x2ca990u: goto label_2ca990;
        case 0x2ca994u: goto label_2ca994;
        case 0x2ca998u: goto label_2ca998;
        case 0x2ca99cu: goto label_2ca99c;
        case 0x2ca9a0u: goto label_2ca9a0;
        case 0x2ca9a4u: goto label_2ca9a4;
        case 0x2ca9a8u: goto label_2ca9a8;
        case 0x2ca9acu: goto label_2ca9ac;
        case 0x2ca9b0u: goto label_2ca9b0;
        case 0x2ca9b4u: goto label_2ca9b4;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9bcu: goto label_2ca9bc;
        default: return;
    }

label_2ca1f0:
    if (ctx->pc == 0x2CA1F0u) {
        ctx->pc = 0x2CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1ECu;
        // 0x2ca1f0: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA1F0 raw=0x7274616D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1F4u;
        goto label_2ca1f4;
    }
    ctx->pc = 0x2CA1ECu;
    {
        const bool branch_taken_0x2ca1ec = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca1ec) {
            ctx->pc = 0x2CA1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA1ECu;
            // 0x2ca1f0: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA1F0 raw=0x7274616D");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37D8u;
            return;
        }
    }
    ctx->pc = 0x2CA1F4u;
label_2ca1f4:
    // 0x2ca1f4: 0x3d207869  .word       0x3D207869                   # lui         $zero, 0x7869 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca1f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30825 << 16));
label_2ca1f8:
    // 0x2ca1f8: 0x31203d  .word       0x0031203D                   # INVALID     $at, $s1, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca1f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CA1F8 raw=0x0031203D");
 /* MITIGATED */
label_2ca1fc:
    // 0x2ca1fc: 0x0  nop
    ctx->pc = 0x2ca1fcu;
    // NOP
label_2ca200:
    // 0x2ca200: 0x2064646f  addi        $a0, $v1, 0x646F
    ctx->pc = 0x2ca200u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca204:
    // 0x2ca204: 0x626d756e  daddi       $t5, $s3, 0x756E
    ctx->pc = 0x2ca204u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ca208:
    // 0x2ca208: 0x6f207265  ldr         $zero, 0x7265($t9)
    ctx->pc = 0x2ca208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca20c:
    // 0x2ca20c: 0x69662066  ldl         $a2, 0x2066($t3)
    ctx->pc = 0x2ca20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ca210:
    // 0x2ca210: 0x20646c65  addi        $a0, $v1, 0x6C65
    ctx->pc = 0x2ca210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27749, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca214:
    // 0x2ca214: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca214u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA214 raw=0x74636970");
 /* MITIGATED */
label_2ca218:
    // 0x2ca218: 0x73657275  .word       0x73657275                   # INVALID     $k1, $a1, 0x7275 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca218u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x2CA218 raw=0x73657275");
 /* MITIGATED */
label_2ca21c:
    // 0x2ca21c: 0x0  nop
    ctx->pc = 0x2ca21cu;
    // NOP
label_2ca220:
    // 0x2ca220: 0x6e6b6e75  ldr         $t3, 0x6E75($s3)
    ctx->pc = 0x2ca220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2ca224:
    // 0x2ca224: 0x206e776f  addi        $t6, $v1, 0x776F
    ctx->pc = 0x2ca224u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2ca228:
    // 0x2ca228: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca228u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA228 raw=0x74636970");
 /* MITIGATED */
label_2ca22c:
    // 0x2ca22c: 0x20657275  addi        $a1, $v1, 0x7275
    ctx->pc = 0x2ca22cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca230:
    // 0x2ca230: 0x72747573  .word       0x72747573                   # INVALID     $s3, $s4, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca230u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA230 raw=0x72747573");
 /* MITIGATED */
label_2ca234:
    // 0x2ca234: 0x75746375  .word       0x75746375                   # INVALID     $t3, $s4, 0x6375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca234u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA234 raw=0x75746375");
 /* MITIGATED */
label_2ca238:
    // 0x2ca238: 0x6572  tlt         $zero, $zero, 405
    ctx->pc = 0x2ca238u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca23c:
    // 0x2ca23c: 0x0  nop
    ctx->pc = 0x2ca23cu;
    // NOP
label_2ca240:
    // 0x2ca240: 0x206f6f54  addi        $t7, $v1, 0x6F54
    ctx->pc = 0x2ca240u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28500, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca244:
    // 0x2ca244: 0x6c616d73  ldr         $at, 0x6D73($v1)
    ctx->pc = 0x2ca244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28019); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ca248:
    // 0x2ca248: 0x7562206c  .word       0x7562206C                   # INVALID     $t3, $v0, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca248u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA248 raw=0x7562206C");
 /* MITIGATED */
label_2ca24c:
    // 0x2ca24c: 0x72656666  .word       0x72656666                   # INVALID     $s3, $a1, 0x6666 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca24cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2CA24C raw=0x72656666");
 /* MITIGATED */
label_2ca250:
    // 0x2ca250: 0x7a697320  lq          $t1, 0x7320($s3)
    ctx->pc = 0x2ca250u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29472)));
label_2ca254:
    // 0x2ca254: 0x6f662065  ldr         $a2, 0x2065($k1)
    ctx->pc = 0x2ca254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ca258:
    // 0x2ca258: 0x64252072  daddiu      $a1, $at, 0x2072
    ctx->pc = 0x2ca258u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8306);
label_2ca25c:
    // 0x2ca25c: 0x20642578  addi        $a0, $v1, 0x2578
    ctx->pc = 0x2ca25cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9592, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca260:
    // 0x2ca260: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca260u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA260 raw=0x74636970");
 /* MITIGATED */
label_2ca264:
    // 0x2ca264: 0xa657275  j           func_995C9D4
label_2ca268:
    if (ctx->pc == 0x2CA268u) {
        ctx->pc = 0x2CA26Cu;
        goto label_2ca26c;
    }
    ctx->pc = 0x2CA264u;
    ctx->pc = 0x995C9D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x995C9D4u, 0x2CA264u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CA26Cu;
label_2ca26c:
    // 0x2ca26c: 0x0  nop
    ctx->pc = 0x2ca26cu;
    // NOP
label_2ca270:
    // 0x2ca270: 0x20435343  addi        $v1, $v0, 0x5343
    ctx->pc = 0x2ca270u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21315, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_2ca274:
    // 0x2ca274: 0x646e6168  daddiu      $t6, $v1, 0x6168
    ctx->pc = 0x2ca274u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24936);
label_2ca278:
    // 0x2ca278: 0x2072656c  addi        $s2, $v1, 0x656C
    ctx->pc = 0x2ca278u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25964, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2ca27c:
    // 0x2ca27c: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x2ca27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca280:
    // 0x2ca280: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x2ca280u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca284:
    // 0x2ca284: 0x0  nop
    ctx->pc = 0x2ca284u;
    // NOP
label_2ca288:
    // 0x2ca288: 0x18081000  .word       0x18081000                   # blez        $zero, . + 4 + (0x1000 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_2ca28c:
    if (ctx->pc == 0x2CA28Cu) {
        ctx->pc = 0x2CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA288u;
        // 0x2ca28c: 0x20101808  addi        $s0, $zero, 0x1808 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)6152, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA290u;
        goto label_2ca290;
    }
    ctx->pc = 0x2CA288u;
    {
        const bool branch_taken_0x2ca288 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x2CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA288u;
        // 0x2ca28c: 0x20101808  addi        $s0, $zero, 0x1808 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)6152, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca288) {
            ctx->pc = 0x2CE28Cu;
            { ctx->pc = 0x2ce28c; return; }
        }
    }
    ctx->pc = 0x2CA290u;
label_2ca290:
    // 0x2ca290: 0x30202818  andi        $zero, $at, 0x2818
    ctx->pc = 0x2ca290u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10264);
label_2ca294:
    // 0x2ca294: 0x38283020  xori        $t0, $at, 0x3020
    ctx->pc = 0x2ca294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)12320);
label_2ca298:
    // 0x2ca298: 0x6b636170  ldl         $v1, 0x6170($k1)
    ctx->pc = 0x2ca298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2ca29c:
    // 0x2ca29c: 0x6165685f  daddi       $a1, $t3, 0x685F
    ctx->pc = 0x2ca29cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26719; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ca2a0:
    // 0x2ca2a0: 0x5f726564  .word       0x5F726564                   # bgtzl       $k1, . + 4 + (0x6564 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2ca2a4:
    if (ctx->pc == 0x2CA2A4u) {
        ctx->pc = 0x2CA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2A0u;
        // 0x2ca2a4: 0x6c656966  ldr         $a1, 0x6966($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA2A8u;
        goto label_2ca2a8;
    }
    ctx->pc = 0x2CA2A0u;
    {
        const bool branch_taken_0x2ca2a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca2a0) {
            ctx->pc = 0x2CA2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA2A0u;
            // 0x2ca2a4: 0x6c656966  ldr         $a1, 0x6966($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3834u;
            return;
        }
    }
    ctx->pc = 0x2CA2A8u;
label_2ca2a8:
    // 0x2ca2a8: 0x6c665f64  ldr         $a2, 0x5F64($v1)
    ctx->pc = 0x2ca2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ca2ac:
    // 0x2ca2ac: 0x6e206761  ldr         $zero, 0x6761($s1)
    ctx->pc = 0x2ca2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca2b0:
    // 0x2ca2b0: 0x73646565  .word       0x73646565                   # INVALID     $k1, $a0, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca2b0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CA2B0 raw=0x73646565");
 /* MITIGATED */
label_2ca2b4:
    // 0x2ca2b4: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2ca2b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca2b8:
    // 0x2ca2b8: 0x27206562  addiu       $zero, $t9, 0x6562
    ctx->pc = 0x2ca2b8u;
    // NOP (addiu $zero, ...)
label_2ca2bc:
    // 0x2ca2bc: 0x69202730  ldl         $zero, 0x2730($t1)
    ctx->pc = 0x2ca2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10032); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2ca2c0:
    // 0x2ca2c0: 0x5350206e  beql        $k0, $s0, . + 4 + (0x206E << 2)
label_2ca2c4:
    if (ctx->pc == 0x2CA2C4u) {
        ctx->pc = 0x2CA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2C0u;
        // 0x2ca2c4: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA2C8u;
        goto label_2ca2c8;
    }
    ctx->pc = 0x2CA2C0u;
    {
        const bool branch_taken_0x2ca2c0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ca2c0) {
            ctx->pc = 0x2CA2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA2C0u;
            // 0x2ca2c4: 0xa  movz        $zero, $zero, $zero (Delay Slot)
            if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D247Cu;
            return;
        }
    }
    ctx->pc = 0x2CA2C8u;
label_2ca2c8:
    // 0x2ca2c8: 0x0  nop
    ctx->pc = 0x2ca2c8u;
    // NOP
label_2ca2cc:
    // 0x2ca2cc: 0x0  nop
    ctx->pc = 0x2ca2ccu;
    // NOP
label_2ca2d0:
    // 0x2ca2d0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2ca2d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca2d4:
    // 0x2ca2d4: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x2ca2d4u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
label_2ca2d8:
    // 0x2ca2d8: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2ca2d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2ca2dc:
    // 0x2ca2dc: 0x6b726f77  ldl         $s2, 0x6F77($k1)
    ctx->pc = 0x2ca2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2ca2e0:
    // 0x2ca2e0: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x2ca2e0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
label_2ca2e4:
    // 0x2ca2e4: 0x73692061  .word       0x73692061                   # maddu1      $a0, $k1, $t1 # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca2e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ca2e8:
    // 0x2ca2e8: 0x6f6f7420  ldr         $t7, 0x7420($k1)
    ctx->pc = 0x2ca2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2ca2ec:
    // 0x2ca2ec: 0x616d7320  daddi       $t5, $t3, 0x7320
    ctx->pc = 0x2ca2ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ca2f0:
    // 0x2ca2f0: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca2f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2ca2f4:
    // 0x2ca2f4: 0x0  nop
    ctx->pc = 0x2ca2f4u;
    // NOP
label_2ca2f8:
    // 0x2ca2f8: 0x6b726f77  ldl         $s2, 0x6F77($k1)
    ctx->pc = 0x2ca2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2ca2fc:
    // 0x2ca2fc: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
label_2ca300:
    // 0x2ca300: 0x69732061  ldl         $s3, 0x2061($t3)
    ctx->pc = 0x2ca300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2ca304:
    // 0x2ca304: 0x6920657a  ldl         $zero, 0x657A($t1)
    ctx->pc = 0x2ca304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2ca308:
    // 0x2ca308: 0x6f742073  ldr         $s4, 0x2073($k1)
    ctx->pc = 0x2ca308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2ca30c:
    // 0x2ca30c: 0x6d73206f  ldr         $s3, 0x206F($t3)
    ctx->pc = 0x2ca30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2ca310:
    // 0x2ca310: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_2ca314:
    // 0x2ca314: 0x0  nop
    ctx->pc = 0x2ca314u;
    // NOP
label_2ca318:
    // 0x2ca318: 0x67616d69  daddiu      $at, $k1, 0x6D69
    ctx->pc = 0x2ca318u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28009);
label_2ca31c:
    // 0x2ca31c: 0x75622065  .word       0x75622065                   # INVALID     $t3, $v0, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca31cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA31C raw=0x75622065");
 /* MITIGATED */
label_2ca320:
    // 0x2ca320: 0x72656666  .word       0x72656666                   # INVALID     $s3, $a1, 0x6666 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca320u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2CA320 raw=0x72656666");
 /* MITIGATED */
label_2ca324:
    // 0x2ca324: 0x65656e20  daddiu      $a1, $t3, 0x6E20
    ctx->pc = 0x2ca324u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28192);
label_2ca328:
    // 0x2ca328: 0x74207364  .word       0x74207364                   # INVALID     $at, $zero, 0x7364 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca328u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA328 raw=0x74207364");
 /* MITIGATED */
label_2ca32c:
    // 0x2ca32c: 0x6562206f  daddiu      $v0, $t3, 0x206F
    ctx->pc = 0x2ca32cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
label_2ca330:
    // 0x2ca330: 0x696c6120  ldl         $t4, 0x6120($t3)
    ctx->pc = 0x2ca330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2ca334:
    // 0x2ca334: 0x64656e67  daddiu      $a1, $v1, 0x6E67
    ctx->pc = 0x2ca334u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28263);
label_2ca338:
    // 0x2ca338: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2ca338u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca33c:
    // 0x2ca33c: 0x79623436  lq          $v0, 0x3436($t3)
    ctx->pc = 0x2ca33cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 13366)));
label_2ca340:
    // 0x2ca340: 0x62206574  daddi       $zero, $s1, 0x6574
    ctx->pc = 0x2ca340u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ca344:
    // 0x2ca344: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x2ca344u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_2ca348:
    // 0x2ca348: 0x28797261  slti        $t9, $v1, 0x7261
    ctx->pc = 0x2ca348u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29281) ? 1 : 0);
label_2ca34c:
    // 0x2ca34c: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x2ca34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_2ca350:
    // 0x2ca350: 0x297838  .word       0x00297838                   # dsll        $t7, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca350u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) << 0);
label_2ca354:
    // 0x2ca354: 0x0  nop
    ctx->pc = 0x2ca354u;
    // NOP
label_2ca358:
    // 0x2ca358: 0x0  nop
    ctx->pc = 0x2ca358u;
    // NOP
label_2ca35c:
    // 0x2ca35c: 0x0  nop
    ctx->pc = 0x2ca35cu;
    // NOP
label_2ca360:
    // 0x2ca360: 0x1a2ed0  .word       0x001A2ED0                   # mfhi        $a1 # 001A06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca360u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2ca364:
    // 0x2ca364: 0x1a2ee4  .word       0x001A2EE4                   # and         $a1, $zero, $k0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 26));
label_2ca368:
    // 0x2ca368: 0x1a2f14  .word       0x001A2F14                   # dsllv       $a1, $k0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 26) << (GPR_U32(ctx, 0) & 0x3F));
label_2ca36c:
    // 0x2ca36c: 0x1a2f38  dsll        $a1, $k0, 28
    ctx->pc = 0x2ca36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 26) << 28);
label_2ca370:
    // 0x2ca370: 0x1a2f38  dsll        $a1, $k0, 28
    ctx->pc = 0x2ca370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 26) << 28);
label_2ca374:
    // 0x2ca374: 0x0  nop
    ctx->pc = 0x2ca374u;
    // NOP
label_2ca378:
    // 0x2ca378: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ca378u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca37c:
    // 0x2ca37c: 0x6f636573  ldr         $v1, 0x6573($k1)
    ctx->pc = 0x2ca37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2ca380:
    // 0x2ca380: 0x6620646e  daddiu      $zero, $s1, 0x646E
    ctx->pc = 0x2ca380u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25710);
label_2ca384:
    // 0x2ca384: 0x646c6569  daddiu      $t4, $v1, 0x6569
    ctx->pc = 0x2ca384u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25961);
label_2ca388:
    // 0x2ca388: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ca388u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ca38c:
    // 0x2ca38c: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca38cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA38C raw=0x7373696D");
 /* MITIGATED */
label_2ca390:
    // 0x2ca390: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca390u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2ca394:
    // 0x2ca394: 0x0  nop
    ctx->pc = 0x2ca394u;
    // NOP
label_2ca398:
    // 0x2ca398: 0x45504d5b  .word       0x45504D5B                   # INVALID     $t2, $s0, 0x4D5B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ca398u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1B at 0x2CA398 raw=0x45504D5B");
 /* MITIGATED */
label_2ca39c:
    // 0x2ca39c: 0x52452047  beql        $s2, $a1, . + 4 + (0x2047 << 2)
label_2ca3a0:
    if (ctx->pc == 0x2CA3A0u) {
        ctx->pc = 0x2CA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA39Cu;
        // 0x2ca3a0: 0x5d524f52  .word       0x5D524F52                   # bgtzl       $t2, . + 4 + (0x4F52 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CA3A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA3A4u;
        goto label_2ca3a4;
    }
    ctx->pc = 0x2CA39Cu;
    {
        const bool branch_taken_0x2ca39c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca39c) {
            ctx->pc = 0x2CA3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA39Cu;
            // 0x2ca3a0: 0x5d524f52  .word       0x5D524F52                   # bgtzl       $t2, . + 4 + (0x4F52 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2CA3A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D24BCu;
            return;
        }
    }
    ctx->pc = 0x2CA3A4u;
label_2ca3a4:
    // 0x2ca3a4: 0xa7325  .word       0x000A7325                   # or          $t6, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca3a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2ca3a8:
    // 0x2ca3a8: 0x74726576  .word       0x74726576                   # INVALID     $v1, $s2, 0x6576 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca3a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA3A8 raw=0x74726576");
 /* MITIGATED */
label_2ca3ac:
    // 0x2ca3ac: 0x6c616369  ldr         $at, 0x6369($v1)
    ctx->pc = 0x2ca3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ca3b0:
    // 0x2ca3b0: 0x7a697320  lq          $t1, 0x7320($s3)
    ctx->pc = 0x2ca3b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29472)));
label_2ca3b4:
    // 0x2ca3b4: 0x203e2065  addi        $fp, $at, 0x2065
    ctx->pc = 0x2ca3b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2ca3b8:
    // 0x2ca3b8: 0x30303832  andi        $s0, $at, 0x3832
    ctx->pc = 0x2ca3b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14386);
label_2ca3bc:
    // 0x2ca3bc: 0x0  nop
    ctx->pc = 0x2ca3bcu;
    // NOP
label_2ca3c0:
    // 0x2ca3c0: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca3c0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x2CA3C0 raw=0x7268635F");
 /* MITIGATED */
label_2ca3c4:
    // 0x2ca3c4: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_2ca3c8:
    if (ctx->pc == 0x2CA3C8u) {
        ctx->pc = 0x2CA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3C4u;
        // 0x2ca3c8: 0x6d726f66  ldr         $s2, 0x6F66($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA3CCu;
        goto label_2ca3cc;
    }
    ctx->pc = 0x2CA3C4u;
    {
        const bool branch_taken_0x2ca3c4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca3c4) {
            ctx->pc = 0x2CA3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA3C4u;
            // 0x2ca3c8: 0x6d726f66  ldr         $s2, 0x6F66($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5984u;
            return;
        }
    }
    ctx->pc = 0x2CA3CCu;
label_2ca3cc:
    // 0x2ca3cc: 0x6e207461  ldr         $zero, 0x7461($s1)
    ctx->pc = 0x2ca3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca3d0:
    // 0x2ca3d0: 0x73646565  .word       0x73646565                   # INVALID     $k1, $a0, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca3d0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CA3D0 raw=0x73646565");
 /* MITIGATED */
label_2ca3d4:
    // 0x2ca3d4: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2ca3d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca3d8:
    // 0x2ca3d8: 0x31206562  andi        $zero, $t1, 0x6562
    ctx->pc = 0x2ca3d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)25954);
label_2ca3dc:
    // 0x2ca3dc: 0x3234203a  andi        $s4, $s1, 0x203A
    ctx->pc = 0x2ca3dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8250);
label_2ca3e0:
    // 0x2ca3e0: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2ca3e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca3e4:
    // 0x2ca3e4: 0x0  nop
    ctx->pc = 0x2ca3e4u;
    // NOP
label_2ca3e8:
    // 0x2ca3e8: 0x75736e55  .word       0x75736E55                   # INVALID     $t3, $s3, 0x6E55 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca3e8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA3E8 raw=0x75736E55");
 /* MITIGATED */
label_2ca3ec:
    // 0x2ca3ec: 0x726f7070  .word       0x726F7070                   # pmfhl.uw    $t6 # 026F0000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2ca3ecu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_2ca3f0:
    // 0x2ca3f0: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x2ca3f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca3f4:
    // 0x2ca3f4: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x2ca3f4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
label_2ca3f8:
    // 0x2ca3f8: 0x2f656c69  sltiu       $a1, $k1, 0x6C69
    ctx->pc = 0x2ca3f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27753) ? 1 : 0);
label_2ca3fc:
    // 0x2ca3fc: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x2ca3fcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_2ca400:
    // 0x2ca400: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2ca404:
    // 0x2ca404: 0x0  nop
    ctx->pc = 0x2ca404u;
    // NOP
label_2ca408:
    // 0x2ca408: 0x7165735f  .word       0x7165735F                   # INVALID     $t3, $a1, 0x735F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca408u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x2CA408 raw=0x7165735F");
 /* MITIGATED */
label_2ca40c:
    // 0x2ca40c: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x2ca40cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2ca410:
    // 0x2ca410: 0x61635365  daddi       $v1, $t3, 0x5365
    ctx->pc = 0x2ca410u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21349; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2ca414:
    // 0x2ca414: 0x6c62616c  ldr         $v0, 0x616C($v1)
    ctx->pc = 0x2ca414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2ca418:
    // 0x2ca418: 0x74784565  .word       0x74784565                   # INVALID     $v1, $t8, 0x4565 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca418u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA418 raw=0x74784565");
 /* MITIGATED */
label_2ca41c:
    // 0x2ca41c: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x2ca41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2ca420:
    // 0x2ca420: 0x29286e6f  slti        $t0, $t1, 0x6E6F
    ctx->pc = 0x2ca420u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28271) ? 1 : 0);
label_2ca424:
    // 0x2ca424: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ca424u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ca428:
    // 0x2ca428: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2ca428u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ca42c:
    // 0x2ca42c: 0x6c706d69  ldr         $s0, 0x6D69($v1)
    ctx->pc = 0x2ca42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2ca430:
    // 0x2ca430: 0x6e656d65  ldr         $a1, 0x6D65($s3)
    ctx->pc = 0x2ca430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca434:
    // 0x2ca434: 0x646574  teq         $v1, $a0, 405
    ctx->pc = 0x2ca434u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2ca438:
    // 0x2ca438: 0x6e6b6e55  ldr         $t3, 0x6E55($s3)
    ctx->pc = 0x2ca438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28245); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2ca43c:
    // 0x2ca43c: 0x206e776f  addi        $t6, $v1, 0x776F
    ctx->pc = 0x2ca43cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2ca440:
    // 0x2ca440: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x2ca440u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
label_2ca444:
    // 0x2ca444: 0x6f69736e  ldr         $t1, 0x736E($k1)
    ctx->pc = 0x2ca444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca448:
    // 0x2ca448: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca448u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2ca44c:
    // 0x2ca44c: 0x0  nop
    ctx->pc = 0x2ca44cu;
    // NOP
label_2ca450:
    // 0x2ca450: 0x6369705f  daddi       $t1, $k1, 0x705F
    ctx->pc = 0x2ca450u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2ca454:
    // 0x2ca454: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x2ca454u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
label_2ca458:
    // 0x2ca458: 0x74617053  .word       0x74617053                   # INVALID     $v1, $at, 0x7053 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca458u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA458 raw=0x74617053");
 /* MITIGATED */
label_2ca45c:
    // 0x2ca45c: 0x536c6169  beql        $k1, $t4, . + 4 + (0x6169 << 2)
label_2ca460:
    if (ctx->pc == 0x2CA460u) {
        ctx->pc = 0x2CA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA45Cu;
        // 0x2ca460: 0x616c6163  daddi       $t4, $t3, 0x6163 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24931; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA464u;
        goto label_2ca464;
    }
    ctx->pc = 0x2CA45Cu;
    {
        const bool branch_taken_0x2ca45c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 12));
        if (branch_taken_0x2ca45c) {
            ctx->pc = 0x2CA460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA45Cu;
            // 0x2ca460: 0x616c6163  daddi       $t4, $t3, 0x6163 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24931; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A04u;
            return;
        }
    }
    ctx->pc = 0x2CA464u;
label_2ca464:
    // 0x2ca464: 0x45656c62  .word       0x45656C62                   # INVALID     $t3, $a1, 0x6C62 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ca464u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x22 at 0x2CA464 raw=0x45656C62");
 /* MITIGATED */
label_2ca468:
    // 0x2ca468: 0x6e657478  ldr         $a1, 0x7478($s3)
    ctx->pc = 0x2ca468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca46c:
    // 0x2ca46c: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x2ca46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2ca470:
    // 0x2ca470: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ca470u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ca474:
    // 0x2ca474: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2ca474u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ca478:
    // 0x2ca478: 0x70707573  .word       0x70707573                   # INVALID     $v1, $s0, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca478u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA478 raw=0x70707573");
 /* MITIGATED */
label_2ca47c:
    // 0x2ca47c: 0x6574726f  daddiu      $s4, $t3, 0x726F
    ctx->pc = 0x2ca47cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2ca480:
    // 0x2ca480: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca480u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ca484:
    // 0x2ca484: 0x0  nop
    ctx->pc = 0x2ca484u;
    // NOP
label_2ca488:
    // 0x2ca488: 0x6369705f  daddi       $t1, $k1, 0x705F
    ctx->pc = 0x2ca488u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2ca48c:
    // 0x2ca48c: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x2ca48cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
label_2ca490:
    // 0x2ca490: 0x706d6554  .word       0x706D6554                   # INVALID     $v1, $t5, 0x6554 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca490u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2CA490 raw=0x706D6554");
 /* MITIGATED */
label_2ca494:
    // 0x2ca494: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2ca494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ca498:
    // 0x2ca498: 0x6c616353  ldr         $at, 0x6353($v1)
    ctx->pc = 0x2ca498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ca49c:
    // 0x2ca49c: 0x656c6261  daddiu      $t4, $t3, 0x6261
    ctx->pc = 0x2ca49cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
label_2ca4a0:
    // 0x2ca4a0: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x2ca4a0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
label_2ca4a4:
    // 0x2ca4a4: 0x6f69736e  ldr         $t1, 0x736E($k1)
    ctx->pc = 0x2ca4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca4a8:
    // 0x2ca4a8: 0x7369206e  .word       0x7369206E                   # INVALID     $k1, $t1, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca4a8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CA4A8 raw=0x7369206E");
 /* MITIGATED */
label_2ca4ac:
    // 0x2ca4ac: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca4acu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA4AC raw=0x746F6E20");
 /* MITIGATED */
label_2ca4b0:
    // 0x2ca4b0: 0x70757320  .word       0x70757320                   # madd1       $t6, $v1, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca4b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2ca4b4:
    // 0x2ca4b4: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca4b4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA4B4 raw=0x74726F70");
 /* MITIGATED */
label_2ca4b8:
    // 0x2ca4b8: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca4b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ca4bc:
    // 0x2ca4bc: 0x0  nop
    ctx->pc = 0x2ca4bcu;
    // NOP
label_2ca4c0:
    // 0x2ca4c0: 0x69202323  ldl         $zero, 0x2323($t1)
    ctx->pc = 0x2ca4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2ca4c4:
    // 0x2ca4c4: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca4c4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CA4C4 raw=0x7265746E");
 /* MITIGATED */
label_2ca4c8:
    // 0x2ca4c8: 0x206c656e  addi        $t4, $v1, 0x656E
    ctx->pc = 0x2ca4c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2ca4cc:
    // 0x2ca4cc: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x2ca4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca4d0:
    // 0x2ca4d0: 0x6e692072  ldr         $t1, 0x2072($s3)
    ctx->pc = 0x2ca4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca4d4:
    // 0x2ca4d4: 0x62696c20  daddi       $t1, $s3, 0x6C20
    ctx->pc = 0x2ca4d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2ca4d8:
    // 0x2ca4d8: 0x6e72656b  ldr         $s2, 0x656B($s3)
    ctx->pc = 0x2ca4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25963); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca4dc:
    // 0x2ca4dc: 0x21612e6c  addi        $at, $t3, 0x2E6C
    ctx->pc = 0x2ca4dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)11884, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2ca4e0:
    // 0x2ca4e0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2ca4e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2ca4e4:
    // 0x2ca4e4: 0x0  nop
    ctx->pc = 0x2ca4e4u;
    // NOP
label_2ca4e8:
    // 0x2ca4e8: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x2ca4e8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_2ca4ec:
    // 0x2ca4ec: 0x63617020  daddi       $at, $k1, 0x7020
    ctx->pc = 0x2ca4ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28704; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2ca4f0:
    // 0x2ca4f0: 0x2074656b  addi        $s4, $v1, 0x656B
    ctx->pc = 0x2ca4f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25963, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ca4f4:
    // 0x2ca4f4: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x2ca4f4u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
label_2ca4f8:
    // 0x2ca4f8: 0x72616c20  .word       0x72616C20                   # madd1       $t5, $s3, $at # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca4f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2ca4fc:
    // 0x2ca4fc: 0x20726567  addi        $s2, $v1, 0x6567
    ctx->pc = 0x2ca4fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25959, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2ca500:
    // 0x2ca500: 0x6e616874  ldr         $at, 0x6874($s3)
    ctx->pc = 0x2ca500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ca504:
    // 0x2ca504: 0x70786520  .word       0x70786520                   # madd1       $t4, $v1, $t8 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca504u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ca508:
    // 0x2ca508: 0xa746365  j           func_9D18D94
label_2ca50c:
    if (ctx->pc == 0x2CA50Cu) {
        ctx->pc = 0x2CA510u;
        goto label_2ca510;
    }
    ctx->pc = 0x2CA508u;
    ctx->pc = 0x9D18D94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9D18D94u, 0x2CA508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CA510u;
label_2ca510:
    // 0x2ca510: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x2ca510u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_2ca514:
    // 0x2ca514: 0x63657220  daddi       $a1, $k1, 0x7220
    ctx->pc = 0x2ca514u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ca518:
    // 0x2ca518: 0x65766965  daddiu      $s6, $t3, 0x6965
    ctx->pc = 0x2ca518u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26981);
label_2ca51c:
    // 0x2ca51c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca51cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ca520:
    // 0x2ca520: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2ca524:
    // 0x2ca524: 0x0  nop
    ctx->pc = 0x2ca524u;
    // NOP
label_2ca528:
    // 0x2ca528: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x2ca528u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_2ca52c:
    // 0x2ca52c: 0x6e657320  ldr         $a1, 0x7320($s3)
    ctx->pc = 0x2ca52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca530:
    // 0x2ca530: 0x72652064  .word       0x72652064                   # INVALID     $s3, $a1, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca530u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2CA530 raw=0x72652064");
 /* MITIGATED */
label_2ca534:
    // 0x2ca534: 0x64252072  daddiu      $a1, $at, 0x2072
    ctx->pc = 0x2ca534u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8306);
label_2ca538:
    // 0x2ca538: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2ca538u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2ca53c:
    // 0x2ca53c: 0x0  nop
    ctx->pc = 0x2ca53cu;
    // NOP
label_2ca540:
    // 0x2ca540: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x2ca540u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_2ca544:
    // 0x2ca544: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca544u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ca548:
    // 0x2ca548: 0x2d697420  sltiu       $t1, $t3, 0x7420
    ctx->pc = 0x2ca548u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)29728) ? 1 : 0);
label_2ca54c:
    // 0x2ca54c: 0x656c773e  daddiu      $t4, $t3, 0x773E
    ctx->pc = 0x2ca54cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30526);
label_2ca550:
    // 0x2ca550: 0x30253d6e  andi        $a1, $at, 0x3D6E
    ctx->pc = 0x2ca550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15726);
label_2ca554:
    // 0x2ca554: 0xa7838  dsll        $t7, $t2, 0
    ctx->pc = 0x2ca554u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << 0);
label_2ca558:
    // 0x2ca558: 0x0  nop
    ctx->pc = 0x2ca558u;
    // NOP
label_2ca55c:
    // 0x2ca55c: 0x0  nop
    ctx->pc = 0x2ca55cu;
    // NOP
label_2ca560:
    // 0x2ca560: 0x64252e30  daddiu      $a1, $at, 0x2E30
    ctx->pc = 0x2ca560u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11824);
label_2ca564:
    // 0x2ca564: 0x0  nop
    ctx->pc = 0x2ca564u;
    // NOP
label_2ca568:
    // 0x2ca568: 0x64252b65  daddiu      $a1, $at, 0x2B65
    ctx->pc = 0x2ca568u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11109);
label_2ca56c:
    // 0x2ca56c: 0x0  nop
    ctx->pc = 0x2ca56cu;
    // NOP
label_2ca570:
    // 0x2ca570: 0x642565  .word       0x00642565                   # or          $a0, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ca574:
    // 0x2ca574: 0x0  nop
    ctx->pc = 0x2ca574u;
    // NOP
label_2ca578:
    // 0x2ca578: 0x9999999a  lwr         $t9, -0x6666($t4)
    ctx->pc = 0x2ca578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 25) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 25) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 25, merged64); }
label_2ca57c:
    // 0x2ca57c: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca57cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_2ca580:
    // 0x2ca580: 0x9999999a  lwr         $t9, -0x6666($t4)
    ctx->pc = 0x2ca580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 25) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 25) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 25, merged64); }
label_2ca584:
    // 0x2ca584: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca584u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_2ca588:
    // 0x2ca588: 0x0  nop
    ctx->pc = 0x2ca588u;
    // NOP
label_2ca58c:
    // 0x2ca58c: 0x412e8480  .word       0x412E8480                   # INVALID     $t1, $t6, -0x7B80 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca58cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2CA58C raw=0x412E8480");
 /* MITIGATED */
label_2ca590:
    // 0x2ca590: 0x1a632c  .word       0x001A632C                   # dadd        $t4, $zero, $k0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca590u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2ca594:
    // 0x2ca594: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca594u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca598:
    // 0x2ca598: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca598u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca59c:
    // 0x2ca59c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca59cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5a0:
    // 0x2ca5a0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5a4:
    // 0x2ca5a4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5a8:
    // 0x2ca5a8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5ac:
    // 0x2ca5ac: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5b0:
    // 0x2ca5b0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5b4:
    // 0x2ca5b4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5b8:
    // 0x2ca5b8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5bc:
    // 0x2ca5bc: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5c0:
    // 0x2ca5c0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5c4:
    // 0x2ca5c4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5c8:
    // 0x2ca5c8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5cc:
    // 0x2ca5cc: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5d0:
    // 0x2ca5d0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5d4:
    // 0x2ca5d4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5d8:
    // 0x2ca5d8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5dc:
    // 0x2ca5dc: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5e0:
    // 0x2ca5e0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5e4:
    // 0x2ca5e4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5e8:
    // 0x2ca5e8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5ec:
    // 0x2ca5ec: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5f0:
    // 0x2ca5f0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5f4:
    // 0x2ca5f4: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5f8:
    // 0x2ca5f8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca5fc:
    // 0x2ca5fc: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca5fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca600:
    // 0x2ca600: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca600u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca604:
    // 0x2ca604: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca604u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca608:
    // 0x2ca608: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca608u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca60c:
    // 0x2ca60c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca60cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca610:
    // 0x2ca610: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca610u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca614:
    // 0x2ca614: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca614u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca618:
    // 0x2ca618: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca618u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca61c:
    // 0x2ca61c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca61cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca620:
    // 0x2ca620: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca620u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca624:
    // 0x2ca624: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca624u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca628:
    // 0x2ca628: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca628u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca62c:
    // 0x2ca62c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca62cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca630:
    // 0x2ca630: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca630u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca634:
    // 0x2ca634: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca634u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca638:
    // 0x2ca638: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca638u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca63c:
    // 0x2ca63c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca63cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca640:
    // 0x2ca640: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca640u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca644:
    // 0x2ca644: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca644u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca648:
    // 0x2ca648: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca648u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca64c:
    // 0x2ca64c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca64cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca650:
    // 0x2ca650: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca650u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca654:
    // 0x2ca654: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca654u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca658:
    // 0x2ca658: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca658u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca65c:
    // 0x2ca65c: 0x1a67f0  tge         $zero, $k0, 415
    ctx->pc = 0x2ca65cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca660:
    // 0x2ca660: 0x1a6540  sll         $t4, $k0, 21
    ctx->pc = 0x2ca660u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 21));
label_2ca664:
    // 0x2ca664: 0x1a6700  sll         $t4, $k0, 28
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 28));
label_2ca668:
    // 0x2ca668: 0x1a6700  sll         $t4, $k0, 28
    ctx->pc = 0x2ca668u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 28));
label_2ca66c:
    // 0x2ca66c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca66cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca670:
    // 0x2ca670: 0x1a63bc  dsll32      $t4, $k0, 14
    ctx->pc = 0x2ca670u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 26) << (32 + 14));
label_2ca674:
    // 0x2ca674: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca674u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca678:
    // 0x2ca678: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca678u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca67c:
    // 0x2ca67c: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca67cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca680:
    // 0x2ca680: 0x1a63b0  tge         $zero, $k0, 398
    ctx->pc = 0x2ca680u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca684:
    // 0x2ca684: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca684u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca688:
    // 0x2ca688: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca688u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca68c:
    // 0x2ca68c: 0x1a63c4  .word       0x001A63C4                   # sllv        $t4, $k0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 0) & 0x1F));
label_2ca690:
    // 0x2ca690: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca690u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca694:
    // 0x2ca694: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca694u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca698:
    // 0x2ca698: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca698u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca69c:
    // 0x2ca69c: 0x1a674c  .word       0x001A674C                   # syscall     413 # 001A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca69cu;
    ctx->pc = 0x2CA6A0u;
runtime->handleSyscall(rdram, ctx, 0x699Du);
label_2ca6a0:
    // 0x2ca6a0: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca6a4:
    // 0x2ca6a4: 0x1a6630  tge         $zero, $k0, 408
    ctx->pc = 0x2ca6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca6a8:
    // 0x2ca6a8: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca6a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca6ac:
    // 0x2ca6ac: 0x1a6838  dsll        $t5, $k0, 0
    ctx->pc = 0x2ca6acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) << 0);
label_2ca6b0:
    // 0x2ca6b0: 0x1a6480  sll         $t4, $k0, 18
    ctx->pc = 0x2ca6b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 26), 18));
label_2ca6b4:
    // 0x2ca6b4: 0x0  nop
    ctx->pc = 0x2ca6b4u;
    // NOP
label_2ca6b8:
    // 0x2ca6b8: 0x0  nop
    ctx->pc = 0x2ca6b8u;
    // NOP
label_2ca6bc:
    // 0x2ca6bc: 0x0  nop
    ctx->pc = 0x2ca6bcu;
    // NOP
label_2ca6c0:
    // 0x2ca6c0: 0x1a81d8  .word       0x001A81D8                   # mult        $s0, $zero, $k0 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2ca6c4:
    // 0x2ca6c4: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6c8:
    // 0x2ca6c8: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6cc:
    // 0x2ca6cc: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6d0:
    // 0x2ca6d0: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6d4:
    // 0x2ca6d4: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6d8:
    // 0x2ca6d8: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6dc:
    // 0x2ca6dc: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6e0:
    // 0x2ca6e0: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6e4:
    // 0x2ca6e4: 0x1a8270  tge         $zero, $k0, 521
    ctx->pc = 0x2ca6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca6e8:
    // 0x2ca6e8: 0x1a8350  .word       0x001A8350                   # mfhi        $s0 # 001A0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6e8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2ca6ec:
    // 0x2ca6ec: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6f0:
    // 0x2ca6f0: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6f4:
    // 0x2ca6f4: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6f8:
    // 0x2ca6f8: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca6fc:
    // 0x2ca6fc: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca6fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca700:
    // 0x2ca700: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca700u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca704:
    // 0x2ca704: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca708:
    // 0x2ca708: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca70c:
    // 0x2ca70c: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca70cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca710:
    // 0x2ca710: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca710u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca714:
    // 0x2ca714: 0x1a8400  sll         $s0, $k0, 16
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 26), 16));
label_2ca718:
    // 0x2ca718: 0x1a8460  .word       0x001A8460                   # add         $s0, $zero, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2ca71c:
    // 0x2ca71c: 0x1a8400  sll         $s0, $k0, 16
    ctx->pc = 0x2ca71cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 26), 16));
label_2ca720:
    // 0x2ca720: 0x1a8400  sll         $s0, $k0, 16
    ctx->pc = 0x2ca720u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 26), 16));
label_2ca724:
    // 0x2ca724: 0x0  nop
    ctx->pc = 0x2ca724u;
    // NOP
label_2ca728:
    // 0x2ca728: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x2ca728u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_2ca72c:
    // 0x2ca72c: 0x0  nop
    ctx->pc = 0x2ca72cu;
    // NOP
label_2ca730:
    // 0x2ca730: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x2ca730u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_2ca734:
    // 0x2ca734: 0x0  nop
    ctx->pc = 0x2ca734u;
    // NOP
label_2ca738:
    // 0x2ca738: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca738u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_2ca73c:
    // 0x2ca73c: 0x0  nop
    ctx->pc = 0x2ca73cu;
    // NOP
label_2ca740:
    // 0x2ca740: 0x306d6f72  andi        $t5, $v1, 0x6F72
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28530);
label_2ca744:
    // 0x2ca744: 0x4e44553a  .word       0x4E44553A                   # INVALID     $s2, $a0, 0x553A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca744u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA744 raw=0x4E44553A");
 /* MITIGATED */
label_2ca748:
    // 0x2ca748: 0x204c  syscall     129
    ctx->pc = 0x2ca748u;
    ctx->pc = 0x2CA74Cu;
runtime->handleSyscall(rdram, ctx, 0x81u);
label_2ca74c:
    // 0x2ca74c: 0x0  nop
    ctx->pc = 0x2ca74cu;
    // NOP
label_2ca750:
    // 0x2ca750: 0x206f6f74  addi        $t7, $v1, 0x6F74
    ctx->pc = 0x2ca750u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca754:
    // 0x2ca754: 0x676e6f6c  daddiu      $t6, $k1, 0x6F6C
    ctx->pc = 0x2ca754u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28524);
label_2ca758:
    // 0x2ca758: 0x72617020  madd1       $t6, $s3, $at
    ctx->pc = 0x2ca758u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2ca75c:
    // 0x2ca75c: 0x74656d61  .word       0x74656D61                   # INVALID     $v1, $a1, 0x6D61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca75cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA75C raw=0x74656D61");
 /* MITIGATED */
label_2ca760:
    // 0x2ca760: 0x27207265  addiu       $zero, $t9, 0x7265
    ctx->pc = 0x2ca760u;
    // NOP (addiu $zero, ...)
label_2ca764:
    // 0x2ca764: 0xa277325  j           func_89DCC94
label_2ca768:
    if (ctx->pc == 0x2CA768u) {
        ctx->pc = 0x2CA76Cu;
        goto label_2ca76c;
    }
    ctx->pc = 0x2CA764u;
    ctx->pc = 0x89DCC94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89DCC94u, 0x2CA764u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CA76Cu;
label_2ca76c:
    // 0x2ca76c: 0x0  nop
    ctx->pc = 0x2ca76cu;
    // NOP
label_2ca770:
    // 0x2ca770: 0x4c542023  .word       0x4C542023                   # INVALID     $v0, $s4, 0x2023 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca770u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA770 raw=0x4C542023");
 /* MITIGATED */
label_2ca774:
    // 0x2ca774: 0x70732042  .word       0x70732042                   # INVALID     $v1, $s3, 0x2042 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca774u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ca778:
    // 0x2ca778: 0x303d6461  andi        $sp, $at, 0x6461
    ctx->pc = 0x2ca778u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25697);
label_2ca77c:
    // 0x2ca77c: 0x72656b20  .word       0x72656B20                   # madd1       $t5, $s3, $a1 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca77cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2ca780:
    // 0x2ca780: 0x3d6c656e  .word       0x3D6C656E                   # lui         $t4, 0x656E # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca780u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)25966 << 16));
label_2ca784:
    // 0x2ca784: 0x64253a31  daddiu      $a1, $at, 0x3A31
    ctx->pc = 0x2ca784u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14897);
label_2ca788:
    // 0x2ca788: 0x66656420  daddiu      $a1, $s3, 0x6420
    ctx->pc = 0x2ca788u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25632);
label_2ca78c:
    // 0x2ca78c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca78cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA78C raw=0x746C7561");
 /* MITIGATED */
label_2ca790:
    // 0x2ca790: 0x3a64253d  xori        $a0, $s3, 0x253D
    ctx->pc = 0x2ca790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)9533);
label_2ca794:
    // 0x2ca794: 0x65206425  daddiu      $zero, $t1, 0x6425
    ctx->pc = 0x2ca794u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25637);
label_2ca798:
    // 0x2ca798: 0x6e657478  ldr         $a1, 0x7478($s3)
    ctx->pc = 0x2ca798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca79c:
    // 0x2ca79c: 0x3d646564  .word       0x3D646564                   # lui         $a0, 0x6564 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25956 << 16));
label_2ca7a0:
    // 0x2ca7a0: 0x253a6425  addiu       $k0, $t1, 0x6425
    ctx->pc = 0x2ca7a0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_2ca7a4:
    // 0x2ca7a4: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ca7a8:
    // 0x2ca7a8: 0x4c542023  .word       0x4C542023                   # INVALID     $v0, $s4, 0x2023 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7a8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA7A8 raw=0x4C542023");
 /* MITIGATED */
label_2ca7ac:
    // 0x2ca7ac: 0x766f2042  .word       0x766F2042                   # INVALID     $s3, $t7, 0x2042 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7acu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA7AC raw=0x766F2042");
 /* MITIGATED */
label_2ca7b0:
    // 0x2ca7b0: 0x66207265  daddiu      $zero, $s1, 0x7265
    ctx->pc = 0x2ca7b0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29285);
label_2ca7b4:
    // 0x2ca7b4: 0x20776f6c  addi        $s7, $v1, 0x6F6C
    ctx->pc = 0x2ca7b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2ca7b8:
    // 0x2ca7b8: 0x293128  .word       0x00293128                   # mfsa        $a2 # 00290100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca7b8u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2ca7bc:
    // 0x2ca7bc: 0x0  nop
    ctx->pc = 0x2ca7bcu;
    // NOP
label_2ca7c0:
    // 0x2ca7c0: 0x4c542023  .word       0x4C542023                   # INVALID     $v0, $s4, 0x2023 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7c0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA7C0 raw=0x4C542023");
 /* MITIGATED */
label_2ca7c4:
    // 0x2ca7c4: 0x766f2042  .word       0x766F2042                   # INVALID     $s3, $t7, 0x2042 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA7C4 raw=0x766F2042");
 /* MITIGATED */
label_2ca7c8:
    // 0x2ca7c8: 0x66207265  daddiu      $zero, $s1, 0x7265
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29285);
label_2ca7cc:
    // 0x2ca7cc: 0x20776f6c  addi        $s7, $v1, 0x6F6C
    ctx->pc = 0x2ca7ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2ca7d0:
    // 0x2ca7d0: 0x293228  .word       0x00293228                   # mfsa        $a2 # 00290200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca7d0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2ca7d4:
    // 0x2ca7d4: 0x0  nop
    ctx->pc = 0x2ca7d4u;
    // NOP
label_2ca7d8:
    // 0x2ca7d8: 0x4c542023  .word       0x4C542023                   # INVALID     $v0, $s4, 0x2023 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7d8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA7D8 raw=0x4C542023");
 /* MITIGATED */
label_2ca7dc:
    // 0x2ca7dc: 0x766f2042  .word       0x766F2042                   # INVALID     $s3, $t7, 0x2042 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca7dcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA7DC raw=0x766F2042");
 /* MITIGATED */
label_2ca7e0:
    // 0x2ca7e0: 0x66207265  daddiu      $zero, $s1, 0x7265
    ctx->pc = 0x2ca7e0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29285);
label_2ca7e4:
    // 0x2ca7e4: 0x20776f6c  addi        $s7, $v1, 0x6F6C
    ctx->pc = 0x2ca7e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2ca7e8:
    // 0x2ca7e8: 0x293328  .word       0x00293328                   # mfsa        $a2 # 00290300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca7e8u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2ca7ec:
    // 0x2ca7ec: 0x0  nop
    ctx->pc = 0x2ca7ecu;
    // NOP
label_2ca7f0:
    // 0x2ca7f0: 0x0  nop
    ctx->pc = 0x2ca7f0u;
    // NOP
label_2ca7f4:
    // 0x2ca7f4: 0x0  nop
    ctx->pc = 0x2ca7f4u;
    // NOP
label_2ca7f8:
    // 0x2ca7f8: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca7f8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CA7F8 raw=0x7062696C");
 /* MITIGATED */
label_2ca7fc:
    // 0x2ca7fc: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x2ca7fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca800:
    // 0x2ca800: 0x53656373  beql        $k1, $a1, . + 4 + (0x6373 << 2)
label_2ca804:
    if (ctx->pc == 0x2CA804u) {
        ctx->pc = 0x2CA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA800u;
        // 0x2ca804: 0x65536669  daddiu      $s3, $t2, 0x6669 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26217);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA808u;
        goto label_2ca808;
    }
    ctx->pc = 0x2CA800u;
    {
        const bool branch_taken_0x2ca800 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca800) {
            ctx->pc = 0x2CA804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA800u;
            // 0x2ca804: 0x65536669  daddiu      $s3, $t2, 0x6669 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26217);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E35D0u;
            return;
        }
    }
    ctx->pc = 0x2CA808u;
label_2ca808:
    // 0x2ca808: 0x616d4474  daddi       $t5, $t3, 0x4474
    ctx->pc = 0x2ca808u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17524; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ca80c:
    // 0x2ca80c: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2ca80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2ca810:
    // 0x2ca810: 0xa646c  .word       0x000A646C                   # dadd        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2ca814:
    // 0x2ca814: 0x0  nop
    ctx->pc = 0x2ca814u;
    // NOP
label_2ca818:
    // 0x2ca818: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca818u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CA818 raw=0x7062696C");
 /* MITIGATED */
label_2ca81c:
    // 0x2ca81c: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x2ca81cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca820:
    // 0x2ca820: 0x64615074  daddiu      $at, $v1, 0x5074
    ctx->pc = 0x2ca820u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20596);
label_2ca824:
    // 0x2ca824: 0x20616d44  addi        $at, $v1, 0x6D44
    ctx->pc = 0x2ca824u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2ca828:
    // 0x2ca828: 0x75727453  .word       0x75727453                   # INVALID     $t3, $s2, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca828u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA828 raw=0x75727453");
 /* MITIGATED */
label_2ca82c:
    // 0x2ca82c: 0x72757463  .word       0x72757463                   # INVALID     $s3, $s5, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca82cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CA82C raw=0x72757463");
 /* MITIGATED */
label_2ca830:
    // 0x2ca830: 0x6e492065  ldr         $t1, 0x2065($s2)
    ctx->pc = 0x2ca830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca834:
    // 0x2ca834: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x2ca834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2ca838:
    // 0x2ca838: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ca83c:
    // 0x2ca83c: 0x0  nop
    ctx->pc = 0x2ca83cu;
    // NOP
label_2ca840:
    // 0x2ca840: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca840u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CA840 raw=0x7062696C");
 /* MITIGATED */
label_2ca844:
    // 0x2ca844: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x2ca844u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca848:
    // 0x2ca848: 0x75646f4d  .word       0x75646F4D                   # INVALID     $t3, $a0, 0x6F4D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca848u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA848 raw=0x75646F4D");
 /* MITIGATED */
label_2ca84c:
    // 0x2ca84c: 0x7620656c  .word       0x7620656C                   # INVALID     $s1, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca84cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA84C raw=0x7620656C");
 /* MITIGATED */
label_2ca850:
    // 0x2ca850: 0x69737265  ldl         $s3, 0x7265($t3)
    ctx->pc = 0x2ca850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2ca854:
    // 0x2ca854: 0x6d206e6f  ldr         $zero, 0x6E6F($t1)
    ctx->pc = 0x2ca854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca858:
    // 0x2ca858: 0x616d7369  daddi       $t5, $t3, 0x7369
    ctx->pc = 0x2ca858u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ca85c:
    // 0x2ca85c: 0x20686374  addi        $t0, $v1, 0x6374
    ctx->pc = 0x2ca85cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25460, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2ca860:
    // 0x2ca860: 0x0  nop
    ctx->pc = 0x2ca860u;
    // NOP
label_2ca864:
    // 0x2ca864: 0x0  nop
    ctx->pc = 0x2ca864u;
    // NOP
label_2ca868:
    // 0x2ca868: 0x62696c5b  daddi       $t1, $s3, 0x6C5B
    ctx->pc = 0x2ca868u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27739; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2ca86c:
    // 0x2ca86c: 0x2e646170  sltiu       $a0, $s3, 0x6170
    ctx->pc = 0x2ca86cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24944) ? 1 : 0);
label_2ca870:
    // 0x2ca870: 0x203d2061  addi        $sp, $at, 0x2061
    ctx->pc = 0x2ca870u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8289, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_2ca874:
    // 0x2ca874: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x2ca874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_2ca878:
    // 0x2ca878: 0x70202c64  .word       0x70202C64                   # INVALID     $at, $zero, 0x2C64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca878u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2CA878 raw=0x70202C64");
 /* MITIGATED */
label_2ca87c:
    // 0x2ca87c: 0x616d6461  daddi       $t5, $t3, 0x6461
    ctx->pc = 0x2ca87cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25697; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ca880:
    // 0x2ca880: 0x72692e6e  .word       0x72692E6E                   # INVALID     $s3, $t1, 0x2E6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca880u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CA880 raw=0x72692E6E");
 /* MITIGATED */
label_2ca884:
    // 0x2ca884: 0x203d2078  addi        $sp, $at, 0x2078
    ctx->pc = 0x2ca884u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8312, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_2ca888:
    // 0x2ca888: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x2ca888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_2ca88c:
    // 0x2ca88c: 0xa5d64  .word       0x000A5D64                   # and         $t3, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca88cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_2ca890:
    // 0x2ca890: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca890u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CA890 raw=0x7062696C");
 /* MITIGATED */
label_2ca894:
    // 0x2ca894: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x2ca894u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca898:
    // 0x2ca898: 0x66667562  daddiu      $a2, $s3, 0x7562
    ctx->pc = 0x2ca898u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)30050);
label_2ca89c:
    // 0x2ca89c: 0x61207265  daddi       $zero, $t1, 0x7265
    ctx->pc = 0x2ca89cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ca8a0:
    // 0x2ca8a0: 0x20726464  addi        $s2, $v1, 0x6464
    ctx->pc = 0x2ca8a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25700, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2ca8a4:
    // 0x2ca8a4: 0x6e207369  ldr         $zero, 0x7369($s1)
    ctx->pc = 0x2ca8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca8a8:
    // 0x2ca8a8: 0x3620746f  ori         $zero, $s1, 0x746F
    ctx->pc = 0x2ca8a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)29807);
label_2ca8ac:
    // 0x2ca8ac: 0x79622034  lq          $v0, 0x2034($t3)
    ctx->pc = 0x2ca8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 8244)));
label_2ca8b0:
    // 0x2ca8b0: 0x61206574  daddi       $zero, $t1, 0x6574
    ctx->pc = 0x2ca8b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ca8b4:
    // 0x2ca8b4: 0x6e67696c  ldr         $a3, 0x696C($s3)
    ctx->pc = 0x2ca8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2ca8b8:
    // 0x2ca8b8: 0x3025202e  andi        $a1, $at, 0x202E
    ctx->pc = 0x2ca8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)8238);
label_2ca8bc:
    // 0x2ca8bc: 0xa7838  dsll        $t7, $t2, 0
    ctx->pc = 0x2ca8bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << 0);
label_2ca8c0:
    // 0x2ca8c0: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca8c0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CA8C0 raw=0x7062696C");
 /* MITIGATED */
label_2ca8c4:
    // 0x2ca8c4: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x2ca8c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca8c8:
    // 0x2ca8c8: 0x20646170  addi        $a0, $v1, 0x6170
    ctx->pc = 0x2ca8c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24944, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca8cc:
    // 0x2ca8cc: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca8ccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA8CC raw=0x74726F70");
 /* MITIGATED */
label_2ca8d0:
    // 0x2ca8d0: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2ca8d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ca8d4:
    // 0x2ca8d4: 0x65726c61  daddiu      $s2, $t3, 0x6C61
    ctx->pc = 0x2ca8d4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
label_2ca8d8:
    // 0x2ca8d8: 0x20796461  addi        $t9, $v1, 0x6461
    ctx->pc = 0x2ca8d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2ca8dc:
    // 0x2ca8dc: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x2ca8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca8e0:
    // 0x2ca8e0: 0x64255b20  daddiu      $a1, $at, 0x5B20
    ctx->pc = 0x2ca8e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23328);
label_2ca8e4:
    // 0x2ca8e4: 0x64255b5d  daddiu      $a1, $at, 0x5B5D
    ctx->pc = 0x2ca8e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23389);
label_2ca8e8:
    // 0x2ca8e8: 0xa5d  .word       0x00000A5D                   # dmultu      $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca8e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2CA8E8 raw=0x00000A5D");
 /* MITIGATED */
label_2ca8ec:
    // 0x2ca8ec: 0x0  nop
    ctx->pc = 0x2ca8ecu;
    // NOP
label_2ca8f0:
    // 0x2ca8f0: 0x4f525245  .word       0x4F525245                   # INVALID     $k0, $s2, 0x5245 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca8f0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA8F0 raw=0x4F525245");
 /* MITIGATED */
label_2ca8f4:
    // 0x2ca8f4: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca8f4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2ca8f8:
    // 0x2ca8f8: 0x42415453  .word       0x42415453                   # INVALID     $s2, $at, 0x5453 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca8f8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CA8F8 raw=0x42415453");
 /* MITIGATED */
label_2ca8fc:
    // 0x2ca8fc: 0x454c  syscall     277
    ctx->pc = 0x2ca8fcu;
    ctx->pc = 0x2CA900u;
runtime->handleSyscall(rdram, ctx, 0x115u);
label_2ca900:
    // 0x2ca900: 0x43455845  .word       0x43455845                   # INVALID     $k0, $a1, 0x5845 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca900u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CA900 raw=0x43455845");
 /* MITIGATED */
label_2ca904:
    // 0x2ca904: 0x444d43  .word       0x00444D43                   # sra         $t1, $a0, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca904u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 21));
label_2ca908:
    // 0x2ca908: 0x444e4946  .word       0x444E4946                   # cfc1        $t6, $9 # 00000146 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ca908u;
    SET_GPR_U32(ctx, 14, 0); // Unimplemented FCR9
label_2ca90c:
    // 0x2ca90c: 0x31505443  andi        $s0, $t2, 0x5443
    ctx->pc = 0x2ca90cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)21571);
label_2ca910:
    // 0x2ca910: 0x0  nop
    ctx->pc = 0x2ca910u;
    // NOP
label_2ca914:
    // 0x2ca914: 0x0  nop
    ctx->pc = 0x2ca914u;
    // NOP
label_2ca918:
    // 0x2ca918: 0x0  nop
    ctx->pc = 0x2ca918u;
    // NOP
label_2ca91c:
    // 0x2ca91c: 0x0  nop
    ctx->pc = 0x2ca91cu;
    // NOP
label_2ca920:
    // 0x2ca920: 0x43534944  .word       0x43534944                   # INVALID     $k0, $s3, 0x4944 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca920u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CA920 raw=0x43534944");
 /* MITIGATED */
label_2ca924:
    // 0x2ca924: 0x454e4e4f  .word       0x454E4E4F                   # INVALID     $t2, $t6, 0x4E4F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ca924u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xF at 0x2CA924 raw=0x454E4E4F");
 /* MITIGATED */
label_2ca928:
    // 0x2ca928: 0x5443  sra         $t2, $zero, 17
    ctx->pc = 0x2ca928u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 17));
label_2ca92c:
    // 0x2ca92c: 0x0  nop
    ctx->pc = 0x2ca92cu;
    // NOP
label_2ca930:
    // 0x2ca930: 0x59535542  .word       0x59535542                   # blezl       $t2, . + 4 + (0x5542 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2ca934:
    if (ctx->pc == 0x2CA934u) {
        ctx->pc = 0x2CA938u;
        goto label_2ca938;
    }
    ctx->pc = 0x2CA930u;
    {
        const bool branch_taken_0x2ca930 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x2ca930) {
            ctx->pc = 0x2DFE3Cu;
            return;
        }
    }
    ctx->pc = 0x2CA938u;
label_2ca938:
    // 0x2ca938: 0x4c494146  .word       0x4C494146                   # INVALID     $v0, $t1, 0x4146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca938u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CA938 raw=0x4C494146");
 /* MITIGATED */
label_2ca93c:
    // 0x2ca93c: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca93cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CA93C raw=0x00004445");
 /* MITIGATED */
label_2ca940:
    // 0x2ca940: 0x504d4f43  beql        $v0, $t5, . + 4 + (0x4F43 << 2)
label_2ca944:
    if (ctx->pc == 0x2CA944u) {
        ctx->pc = 0x2CA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA940u;
        // 0x2ca944: 0x4554454c  .word       0x4554454C                   # INVALID     $t2, $s4, 0x454C # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//         throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xC at 0x2CA944 raw=0x4554454C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA948u;
        goto label_2ca948;
    }
    ctx->pc = 0x2CA940u;
    {
        const bool branch_taken_0x2ca940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x2ca940) {
            ctx->pc = 0x2CA944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA940u;
            // 0x2ca944: 0x4554454c  .word       0x4554454C                   # INVALID     $t2, $s4, 0x454C # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//             throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xC at 0x2CA944 raw=0x4554454C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE650u;
            return;
        }
    }
    ctx->pc = 0x2CA948u;
label_2ca948:
    // 0x2ca948: 0x0  nop
    ctx->pc = 0x2ca948u;
    // NOP
label_2ca94c:
    // 0x2ca94c: 0x0  nop
    ctx->pc = 0x2ca94cu;
    // NOP
label_2ca950:
    // 0x2ca950: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca950u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CA950 raw=0x43656373");
 /* MITIGATED */
label_2ca954:
    // 0x2ca954: 0x66624364  daddiu      $v0, $s3, 0x4364
    ctx->pc = 0x2ca954u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17252);
label_2ca958:
    // 0x2ca958: 0x3d636e75  .word       0x3D636E75                   # lui         $v1, 0x6E75 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28277 << 16));
label_2ca95c:
    // 0x2ca95c: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x2ca95cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca960:
    // 0x2ca960: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca960u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CA960 raw=0x43656373");
 /* MITIGATED */
label_2ca964:
    // 0x2ca964: 0x66624364  daddiu      $v0, $s3, 0x4364
    ctx->pc = 0x2ca964u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17252);
label_2ca968:
    // 0x2ca968: 0x5f636e75  .word       0x5F636E75                   # bgtzl       $k1, . + 4 + (0x6E75 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_2ca96c:
    if (ctx->pc == 0x2CA96Cu) {
        ctx->pc = 0x2CA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA968u;
        // 0x2ca96c: 0x3d6d756e  .word       0x3D6D756E                   # lui         $t5, 0x756E # 01600000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)30062 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA970u;
        goto label_2ca970;
    }
    ctx->pc = 0x2CA968u;
    {
        const bool branch_taken_0x2ca968 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca968) {
            ctx->pc = 0x2CA96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA968u;
            // 0x2ca96c: 0x3d6d756e  .word       0x3D6D756E                   # lui         $t5, 0x756E # 01600000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)30062 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6340u;
            return;
        }
    }
    ctx->pc = 0x2CA970u;
label_2ca970:
    // 0x2ca970: 0xa642520  j           func_9909480
label_2ca974:
    if (ctx->pc == 0x2CA974u) {
        ctx->pc = 0x2CA978u;
        goto label_2ca978;
    }
    ctx->pc = 0x2CA970u;
    ctx->pc = 0x9909480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9909480u, 0x2CA970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CA978u;
label_2ca978:
    // 0x2ca978: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2ca978u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2ca97c:
    // 0x2ca97c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2ca97cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca980:
    // 0x2ca980: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2ca980u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2ca984:
    // 0x2ca984: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca984u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ca988:
    // 0x2ca988: 0x53644320  beql        $k1, $a0, . + 4 + (0x4320 << 2)
label_2ca98c:
    if (ctx->pc == 0x2CA98Cu) {
        ctx->pc = 0x2CA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA988u;
        // 0x2ca98c: 0x63726165  daddi       $s2, $k1, 0x6165 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24933; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA990u;
        goto label_2ca990;
    }
    ctx->pc = 0x2CA988u;
    {
        const bool branch_taken_0x2ca988 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ca988) {
            ctx->pc = 0x2CA98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA988u;
            // 0x2ca98c: 0x63726165  daddi       $s2, $k1, 0x6165 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24933; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB60Cu;
            return;
        }
    }
    ctx->pc = 0x2CA990u;
label_2ca990:
    // 0x2ca990: 0x6c694668  ldr         $t1, 0x4668($v1)
    ctx->pc = 0x2ca990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca994:
    // 0x2ca994: 0xa65  .word       0x00000A65                   # move        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ca998:
    // 0x2ca998: 0x63206565  daddi       $zero, $t9, 0x6565
    ctx->pc = 0x2ca998u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25957; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ca99c:
    // 0x2ca99c: 0x206c6c61  addi        $t4, $v1, 0x6C61
    ctx->pc = 0x2ca99cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27745, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2ca9a0:
    // 0x2ca9a0: 0x20646d63  addi        $a0, $v1, 0x6D63
    ctx->pc = 0x2ca9a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28003, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca9a4:
    // 0x2ca9a4: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca9a4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA9A4 raw=0x72616573");
 /* MITIGATED */
label_2ca9a8:
    // 0x2ca9a8: 0x25206863  addiu       $zero, $t1, 0x6863
    ctx->pc = 0x2ca9a8u;
    // NOP (addiu $zero, ...)
label_2ca9ac:
    // 0x2ca9ac: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x2ca9acu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca9b0:
    // 0x2ca9b0: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca9b0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA9B0 raw=0x72616573");
 /* MITIGATED */
label_2ca9b4:
    // 0x2ca9b4: 0x6e206863  ldr         $zero, 0x6863($s1)
    ctx->pc = 0x2ca9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca9b8:
    // 0x2ca9b8: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x2ca9b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca9bc:
    // 0x2ca9bc: 0xa7325  .word       0x000A7325                   # or          $t6, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca9bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    ctx->pc = 0x2ca9c0u;
    return;
}

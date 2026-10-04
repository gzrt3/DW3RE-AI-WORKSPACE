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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part33(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ab250u: goto label_1ab250;
        case 0x1ab254u: goto label_1ab254;
        case 0x1ab258u: goto label_1ab258;
        case 0x1ab25cu: goto label_1ab25c;
        case 0x1ab260u: goto label_1ab260;
        case 0x1ab264u: goto label_1ab264;
        case 0x1ab268u: goto label_1ab268;
        case 0x1ab26cu: goto label_1ab26c;
        case 0x1ab270u: goto label_1ab270;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab278u: goto label_1ab278;
        case 0x1ab27cu: goto label_1ab27c;
        case 0x1ab280u: goto label_1ab280;
        case 0x1ab284u: goto label_1ab284;
        case 0x1ab288u: goto label_1ab288;
        case 0x1ab28cu: goto label_1ab28c;
        case 0x1ab290u: goto label_1ab290;
        case 0x1ab294u: goto label_1ab294;
        case 0x1ab298u: goto label_1ab298;
        case 0x1ab29cu: goto label_1ab29c;
        case 0x1ab2a0u: goto label_1ab2a0;
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2acu: goto label_1ab2ac;
        case 0x1ab2b0u: goto label_1ab2b0;
        case 0x1ab2b4u: goto label_1ab2b4;
        case 0x1ab2b8u: goto label_1ab2b8;
        case 0x1ab2bcu: goto label_1ab2bc;
        case 0x1ab2c0u: goto label_1ab2c0;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2c8u: goto label_1ab2c8;
        case 0x1ab2ccu: goto label_1ab2cc;
        case 0x1ab2d0u: goto label_1ab2d0;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        case 0x1ab364u: goto label_1ab364;
        case 0x1ab368u: goto label_1ab368;
        case 0x1ab36cu: goto label_1ab36c;
        case 0x1ab370u: goto label_1ab370;
        case 0x1ab374u: goto label_1ab374;
        case 0x1ab378u: goto label_1ab378;
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab388u: goto label_1ab388;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab390u: goto label_1ab390;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab398u: goto label_1ab398;
        case 0x1ab39cu: goto label_1ab39c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3a8u: goto label_1ab3a8;
        case 0x1ab3acu: goto label_1ab3ac;
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5b8u: goto label_1ab5b8;
        case 0x1ab5bcu: goto label_1ab5bc;
        case 0x1ab5c0u: goto label_1ab5c0;
        case 0x1ab5c4u: goto label_1ab5c4;
        case 0x1ab5c8u: goto label_1ab5c8;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d0u: goto label_1ab5d0;
        case 0x1ab5d4u: goto label_1ab5d4;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5e0u: goto label_1ab5e0;
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab5e8u: goto label_1ab5e8;
        case 0x1ab5ecu: goto label_1ab5ec;
        case 0x1ab5f0u: goto label_1ab5f0;
        case 0x1ab5f4u: goto label_1ab5f4;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab5fcu: goto label_1ab5fc;
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab604u: goto label_1ab604;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab60cu: goto label_1ab60c;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab61cu: goto label_1ab61c;
        case 0x1ab620u: goto label_1ab620;
        case 0x1ab624u: goto label_1ab624;
        case 0x1ab628u: goto label_1ab628;
        case 0x1ab62cu: goto label_1ab62c;
        case 0x1ab630u: goto label_1ab630;
        case 0x1ab634u: goto label_1ab634;
        case 0x1ab638u: goto label_1ab638;
        case 0x1ab63cu: goto label_1ab63c;
        case 0x1ab640u: goto label_1ab640;
        case 0x1ab644u: goto label_1ab644;
        case 0x1ab648u: goto label_1ab648;
        case 0x1ab64cu: goto label_1ab64c;
        case 0x1ab650u: goto label_1ab650;
        case 0x1ab654u: goto label_1ab654;
        case 0x1ab658u: goto label_1ab658;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab660u: goto label_1ab660;
        case 0x1ab664u: goto label_1ab664;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab66cu: goto label_1ab66c;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab678u: goto label_1ab678;
        case 0x1ab67cu: goto label_1ab67c;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab684u: goto label_1ab684;
        case 0x1ab688u: goto label_1ab688;
        case 0x1ab68cu: goto label_1ab68c;
        case 0x1ab690u: goto label_1ab690;
        case 0x1ab694u: goto label_1ab694;
        case 0x1ab698u: goto label_1ab698;
        case 0x1ab69cu: goto label_1ab69c;
        case 0x1ab6a0u: goto label_1ab6a0;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6a8u: goto label_1ab6a8;
        case 0x1ab6acu: goto label_1ab6ac;
        case 0x1ab6b0u: goto label_1ab6b0;
        case 0x1ab6b4u: goto label_1ab6b4;
        case 0x1ab6b8u: goto label_1ab6b8;
        case 0x1ab6bcu: goto label_1ab6bc;
        case 0x1ab6c0u: goto label_1ab6c0;
        case 0x1ab6c4u: goto label_1ab6c4;
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6d0u: goto label_1ab6d0;
        case 0x1ab6d4u: goto label_1ab6d4;
        case 0x1ab6d8u: goto label_1ab6d8;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab6e0u: goto label_1ab6e0;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab6e8u: goto label_1ab6e8;
        case 0x1ab6ecu: goto label_1ab6ec;
        case 0x1ab6f0u: goto label_1ab6f0;
        case 0x1ab6f4u: goto label_1ab6f4;
        case 0x1ab6f8u: goto label_1ab6f8;
        case 0x1ab6fcu: goto label_1ab6fc;
        case 0x1ab700u: goto label_1ab700;
        case 0x1ab704u: goto label_1ab704;
        case 0x1ab708u: goto label_1ab708;
        case 0x1ab70cu: goto label_1ab70c;
        case 0x1ab710u: goto label_1ab710;
        case 0x1ab714u: goto label_1ab714;
        case 0x1ab718u: goto label_1ab718;
        case 0x1ab71cu: goto label_1ab71c;
        case 0x1ab720u: goto label_1ab720;
        case 0x1ab724u: goto label_1ab724;
        case 0x1ab728u: goto label_1ab728;
        case 0x1ab72cu: goto label_1ab72c;
        case 0x1ab730u: goto label_1ab730;
        case 0x1ab734u: goto label_1ab734;
        case 0x1ab738u: goto label_1ab738;
        case 0x1ab73cu: goto label_1ab73c;
        case 0x1ab740u: goto label_1ab740;
        case 0x1ab744u: goto label_1ab744;
        case 0x1ab748u: goto label_1ab748;
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab750u: goto label_1ab750;
        case 0x1ab754u: goto label_1ab754;
        case 0x1ab758u: goto label_1ab758;
        case 0x1ab75cu: goto label_1ab75c;
        case 0x1ab760u: goto label_1ab760;
        case 0x1ab764u: goto label_1ab764;
        case 0x1ab768u: goto label_1ab768;
        case 0x1ab76cu: goto label_1ab76c;
        case 0x1ab770u: goto label_1ab770;
        case 0x1ab774u: goto label_1ab774;
        case 0x1ab778u: goto label_1ab778;
        case 0x1ab77cu: goto label_1ab77c;
        case 0x1ab780u: goto label_1ab780;
        case 0x1ab784u: goto label_1ab784;
        case 0x1ab788u: goto label_1ab788;
        case 0x1ab78cu: goto label_1ab78c;
        case 0x1ab790u: goto label_1ab790;
        case 0x1ab794u: goto label_1ab794;
        case 0x1ab798u: goto label_1ab798;
        case 0x1ab79cu: goto label_1ab79c;
        case 0x1ab7a0u: goto label_1ab7a0;
        case 0x1ab7a4u: goto label_1ab7a4;
        case 0x1ab7a8u: goto label_1ab7a8;
        case 0x1ab7acu: goto label_1ab7ac;
        case 0x1ab7b0u: goto label_1ab7b0;
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab7b8u: goto label_1ab7b8;
        case 0x1ab7bcu: goto label_1ab7bc;
        case 0x1ab7c0u: goto label_1ab7c0;
        case 0x1ab7c4u: goto label_1ab7c4;
        case 0x1ab7c8u: goto label_1ab7c8;
        case 0x1ab7ccu: goto label_1ab7cc;
        case 0x1ab7d0u: goto label_1ab7d0;
        case 0x1ab7d4u: goto label_1ab7d4;
        case 0x1ab7d8u: goto label_1ab7d8;
        case 0x1ab7dcu: goto label_1ab7dc;
        case 0x1ab7e0u: goto label_1ab7e0;
        case 0x1ab7e4u: goto label_1ab7e4;
        case 0x1ab7e8u: goto label_1ab7e8;
        case 0x1ab7ecu: goto label_1ab7ec;
        case 0x1ab7f0u: goto label_1ab7f0;
        case 0x1ab7f4u: goto label_1ab7f4;
        case 0x1ab7f8u: goto label_1ab7f8;
        case 0x1ab7fcu: goto label_1ab7fc;
        case 0x1ab800u: goto label_1ab800;
        case 0x1ab804u: goto label_1ab804;
        case 0x1ab808u: goto label_1ab808;
        case 0x1ab80cu: goto label_1ab80c;
        case 0x1ab810u: goto label_1ab810;
        case 0x1ab814u: goto label_1ab814;
        case 0x1ab818u: goto label_1ab818;
        case 0x1ab81cu: goto label_1ab81c;
        case 0x1ab820u: goto label_1ab820;
        case 0x1ab824u: goto label_1ab824;
        case 0x1ab828u: goto label_1ab828;
        case 0x1ab82cu: goto label_1ab82c;
        case 0x1ab830u: goto label_1ab830;
        case 0x1ab834u: goto label_1ab834;
        case 0x1ab838u: goto label_1ab838;
        case 0x1ab83cu: goto label_1ab83c;
        case 0x1ab840u: goto label_1ab840;
        case 0x1ab844u: goto label_1ab844;
        case 0x1ab848u: goto label_1ab848;
        case 0x1ab84cu: goto label_1ab84c;
        case 0x1ab850u: goto label_1ab850;
        case 0x1ab854u: goto label_1ab854;
        case 0x1ab858u: goto label_1ab858;
        case 0x1ab85cu: goto label_1ab85c;
        case 0x1ab860u: goto label_1ab860;
        case 0x1ab864u: goto label_1ab864;
        case 0x1ab868u: goto label_1ab868;
        case 0x1ab86cu: goto label_1ab86c;
        case 0x1ab870u: goto label_1ab870;
        case 0x1ab874u: goto label_1ab874;
        case 0x1ab878u: goto label_1ab878;
        case 0x1ab87cu: goto label_1ab87c;
        case 0x1ab880u: goto label_1ab880;
        case 0x1ab884u: goto label_1ab884;
        case 0x1ab888u: goto label_1ab888;
        case 0x1ab88cu: goto label_1ab88c;
        case 0x1ab890u: goto label_1ab890;
        case 0x1ab894u: goto label_1ab894;
        case 0x1ab898u: goto label_1ab898;
        case 0x1ab89cu: goto label_1ab89c;
        case 0x1ab8a0u: goto label_1ab8a0;
        case 0x1ab8a4u: goto label_1ab8a4;
        case 0x1ab8a8u: goto label_1ab8a8;
        case 0x1ab8acu: goto label_1ab8ac;
        case 0x1ab8b0u: goto label_1ab8b0;
        case 0x1ab8b4u: goto label_1ab8b4;
        case 0x1ab8b8u: goto label_1ab8b8;
        case 0x1ab8bcu: goto label_1ab8bc;
        case 0x1ab8c0u: goto label_1ab8c0;
        case 0x1ab8c4u: goto label_1ab8c4;
        case 0x1ab8c8u: goto label_1ab8c8;
        case 0x1ab8ccu: goto label_1ab8cc;
        case 0x1ab8d0u: goto label_1ab8d0;
        case 0x1ab8d4u: goto label_1ab8d4;
        case 0x1ab8d8u: goto label_1ab8d8;
        case 0x1ab8dcu: goto label_1ab8dc;
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab8e4u: goto label_1ab8e4;
        case 0x1ab8e8u: goto label_1ab8e8;
        case 0x1ab8ecu: goto label_1ab8ec;
        case 0x1ab8f0u: goto label_1ab8f0;
        case 0x1ab8f4u: goto label_1ab8f4;
        case 0x1ab8f8u: goto label_1ab8f8;
        case 0x1ab8fcu: goto label_1ab8fc;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab904u: goto label_1ab904;
        case 0x1ab908u: goto label_1ab908;
        case 0x1ab90cu: goto label_1ab90c;
        case 0x1ab910u: goto label_1ab910;
        case 0x1ab914u: goto label_1ab914;
        case 0x1ab918u: goto label_1ab918;
        case 0x1ab91cu: goto label_1ab91c;
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab924u: goto label_1ab924;
        case 0x1ab928u: goto label_1ab928;
        case 0x1ab92cu: goto label_1ab92c;
        case 0x1ab930u: goto label_1ab930;
        case 0x1ab934u: goto label_1ab934;
        case 0x1ab938u: goto label_1ab938;
        case 0x1ab93cu: goto label_1ab93c;
        case 0x1ab940u: goto label_1ab940;
        case 0x1ab944u: goto label_1ab944;
        case 0x1ab948u: goto label_1ab948;
        case 0x1ab94cu: goto label_1ab94c;
        case 0x1ab950u: goto label_1ab950;
        case 0x1ab954u: goto label_1ab954;
        case 0x1ab958u: goto label_1ab958;
        case 0x1ab95cu: goto label_1ab95c;
        case 0x1ab960u: goto label_1ab960;
        case 0x1ab964u: goto label_1ab964;
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab96cu: goto label_1ab96c;
        case 0x1ab970u: goto label_1ab970;
        case 0x1ab974u: goto label_1ab974;
        case 0x1ab978u: goto label_1ab978;
        case 0x1ab97cu: goto label_1ab97c;
        case 0x1ab980u: goto label_1ab980;
        case 0x1ab984u: goto label_1ab984;
        case 0x1ab988u: goto label_1ab988;
        case 0x1ab98cu: goto label_1ab98c;
        case 0x1ab990u: goto label_1ab990;
        case 0x1ab994u: goto label_1ab994;
        case 0x1ab998u: goto label_1ab998;
        case 0x1ab99cu: goto label_1ab99c;
        case 0x1ab9a0u: goto label_1ab9a0;
        case 0x1ab9a4u: goto label_1ab9a4;
        case 0x1ab9a8u: goto label_1ab9a8;
        case 0x1ab9acu: goto label_1ab9ac;
        case 0x1ab9b0u: goto label_1ab9b0;
        case 0x1ab9b4u: goto label_1ab9b4;
        case 0x1ab9b8u: goto label_1ab9b8;
        case 0x1ab9bcu: goto label_1ab9bc;
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1ab9c4u: goto label_1ab9c4;
        case 0x1ab9c8u: goto label_1ab9c8;
        case 0x1ab9ccu: goto label_1ab9cc;
        case 0x1ab9d0u: goto label_1ab9d0;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1ab9d8u: goto label_1ab9d8;
        case 0x1ab9dcu: goto label_1ab9dc;
        case 0x1ab9e0u: goto label_1ab9e0;
        case 0x1ab9e4u: goto label_1ab9e4;
        case 0x1ab9e8u: goto label_1ab9e8;
        case 0x1ab9ecu: goto label_1ab9ec;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1ab9f4u: goto label_1ab9f4;
        case 0x1ab9f8u: goto label_1ab9f8;
        case 0x1ab9fcu: goto label_1ab9fc;
        case 0x1aba00u: goto label_1aba00;
        case 0x1aba04u: goto label_1aba04;
        case 0x1aba08u: goto label_1aba08;
        case 0x1aba0cu: goto label_1aba0c;
        case 0x1aba10u: goto label_1aba10;
        case 0x1aba14u: goto label_1aba14;
        case 0x1aba18u: goto label_1aba18;
        case 0x1aba1cu: goto label_1aba1c;
        default: return;
    }

label_1ab250:
    // 0x1ab250: 0xc06a158  jal         func_1A8560
label_1ab254:
    if (ctx->pc == 0x1AB254u) {
        ctx->pc = 0x1AB258u;
        goto label_1ab258;
    }
    ctx->pc = 0x1AB250u;
    SET_GPR_U32(ctx, 31, 0x1AB258u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB258u;
label_1ab258:
    // 0x1ab258: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ab25c:
    if (ctx->pc == 0x1AB25Cu) {
        ctx->pc = 0x1AB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB258u;
        // 0x1ab25c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB260u;
        goto label_1ab260;
    }
    ctx->pc = 0x1AB258u;
    {
        const bool branch_taken_0x1ab258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB258u;
        // 0x1ab25c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab258) {
            ctx->pc = 0x1AB298u;
            goto label_1ab298;
        }
    }
    ctx->pc = 0x1AB260u;
label_1ab260:
    // 0x1ab260: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1ab260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1ab264:
    // 0x1ab264: 0xc06a158  jal         func_1A8560
label_1ab268:
    if (ctx->pc == 0x1AB268u) {
        ctx->pc = 0x1AB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB264u;
        // 0x1ab268: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB26Cu;
        goto label_1ab26c;
    }
    ctx->pc = 0x1AB264u;
    SET_GPR_U32(ctx, 31, 0x1AB26Cu);
    ctx->pc = 0x1AB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB264u;
    // 0x1ab268: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB26Cu;
label_1ab26c:
    // 0x1ab26c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ab270:
    if (ctx->pc == 0x1AB270u) {
        ctx->pc = 0x1AB274u;
        goto label_1ab274;
    }
    ctx->pc = 0x1AB26Cu;
    {
        const bool branch_taken_0x1ab26c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab26c) {
            ctx->pc = 0x1AB284u;
            goto label_1ab284;
        }
    }
    ctx->pc = 0x1AB274u;
label_1ab274:
    // 0x1ab274: 0xc06920c  jal         func_1A4830
label_1ab278:
    if (ctx->pc == 0x1AB278u) {
        ctx->pc = 0x1AB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB274u;
        // 0x1ab278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB27Cu;
        goto label_1ab27c;
    }
    ctx->pc = 0x1AB274u;
    SET_GPR_U32(ctx, 31, 0x1AB27Cu);
    ctx->pc = 0x1AB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB274u;
    // 0x1ab278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB27Cu;
label_1ab27c:
    // 0x1ab27c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab280:
    if (ctx->pc == 0x1AB280u) {
        ctx->pc = 0x1AB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB27Cu;
        // 0x1ab280: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB284u;
        goto label_1ab284;
    }
    ctx->pc = 0x1AB27Cu;
    {
        const bool branch_taken_0x1ab27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB27Cu;
        // 0x1ab280: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab27c) {
            ctx->pc = 0x1AB298u;
            goto label_1ab298;
        }
    }
    ctx->pc = 0x1AB284u;
label_1ab284:
    // 0x1ab284: 0xc069218  jal         func_1A4860
label_1ab288:
    if (ctx->pc == 0x1AB288u) {
        ctx->pc = 0x1AB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB284u;
        // 0x1ab288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB28Cu;
        goto label_1ab28c;
    }
    ctx->pc = 0x1AB284u;
    SET_GPR_U32(ctx, 31, 0x1AB28Cu);
    ctx->pc = 0x1AB288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB284u;
    // 0x1ab288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AB28Cu;
label_1ab28c:
    // 0x1ab28c: 0xc06920c  jal         func_1A4830
label_1ab290:
    if (ctx->pc == 0x1AB290u) {
        ctx->pc = 0x1AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB28Cu;
        // 0x1ab290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB294u;
        goto label_1ab294;
    }
    ctx->pc = 0x1AB28Cu;
    SET_GPR_U32(ctx, 31, 0x1AB294u);
    ctx->pc = 0x1AB290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB28Cu;
    // 0x1ab290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB294u;
label_1ab294:
    // 0x1ab294: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab298:
    // 0x1ab298: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1ab298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1ab29c:
    // 0x1ab29c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1ab29cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1ab2a0:
    // 0x1ab2a0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1ab2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ab2a4:
    // 0x1ab2a4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ab2a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ab2a8:
    // 0x1ab2a8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1ab2a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ab2ac:
    // 0x1ab2ac: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ab2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab2b0:
    // 0x1ab2b0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1ab2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab2b4:
    // 0x1ab2b4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ab2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab2b8:
    // 0x1ab2b8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1ab2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab2bc:
    // 0x1ab2bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ab2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab2c0:
    // 0x1ab2c0: 0x3e00008  jr          $ra
label_1ab2c4:
    if (ctx->pc == 0x1AB2C4u) {
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2C8u;
        goto label_1ab2c8;
    }
    ctx->pc = 0x1AB2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB2C8u;
label_1ab2c8:
    // 0x1ab2c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ab2cc:
    // 0x1ab2cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ab2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1ab2d0:
    // 0x1ab2d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ab2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1ab2d4:
    // 0x1ab2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2d8:
    // 0x1ab2d8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ab2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1ab2dc:
    // 0x1ab2dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2e0:
    // 0x1ab2e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1ab2e4:
    // 0x1ab2e4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1ab2e8:
    // 0x1ab2e8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ab2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1ab2ec:
    // 0x1ab2ec: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1ab2f0:
    // 0x1ab2f0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ab2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1ab2f4:
    // 0x1ab2f4: 0x26d23240  addiu       $s2, $s6, 0x3240
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1ab2f8:
    // 0x1ab2f8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ab2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1ab2fc:
    // 0x1ab2fc: 0xc06a14c  jal         func_1A8530
label_1ab300:
    if (ctx->pc == 0x1AB300u) {
        ctx->pc = 0x1AB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2FCu;
        // 0x1ab300: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB304u;
        goto label_1ab304;
    }
    ctx->pc = 0x1AB2FCu;
    SET_GPR_U32(ctx, 31, 0x1AB304u);
    ctx->pc = 0x1AB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2FCu;
    // 0x1ab300: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AB304u;
label_1ab304:
    // 0x1ab304: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab308:
    // 0x1ab308: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1ab30c:
    // 0x1ab30c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1ab310:
    if (ctx->pc == 0x1AB310u) {
        ctx->pc = 0x1AB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB30Cu;
        // 0x1ab310: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB314u;
        goto label_1ab314;
    }
    ctx->pc = 0x1AB30Cu;
    {
        const bool branch_taken_0x1ab30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab30c) {
            ctx->pc = 0x1AB310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB30Cu;
            // 0x1ab310: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB320u;
            goto label_1ab320;
        }
    }
    ctx->pc = 0x1AB314u;
label_1ab314:
    // 0x1ab314: 0xc06a18e  jal         func_1A8638
label_1ab318:
    if (ctx->pc == 0x1AB318u) {
        ctx->pc = 0x1AB31Cu;
        goto label_1ab31c;
    }
    ctx->pc = 0x1AB314u;
    SET_GPR_U32(ctx, 31, 0x1AB31Cu);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AB31Cu;
label_1ab31c:
    // 0x1ab31c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ab31cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab320:
    // 0x1ab320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab324:
    // 0x1ab324: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1ab324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ab328:
    // 0x1ab328: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1ab32c:
    if (ctx->pc == 0x1AB32Cu) {
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB330u;
        goto label_1ab330;
    }
    ctx->pc = 0x1AB328u;
    {
        const bool branch_taken_0x1ab328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab328) {
            ctx->pc = 0x1AB36Cu;
            goto label_1ab36c;
        }
    }
    ctx->pc = 0x1AB330u;
label_1ab330:
    // 0x1ab330: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ab330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ab334:
    // 0x1ab334: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ab334u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ab338:
    // 0x1ab338: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1ab338u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1ab33c:
    // 0x1ab33c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ab33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ab340:
    // 0x1ab340: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1ab340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1ab344:
    // 0x1ab344: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ab348:
    if (ctx->pc == 0x1AB348u) {
        ctx->pc = 0x1AB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB344u;
        // 0x1ab348: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB34Cu;
        goto label_1ab34c;
    }
    ctx->pc = 0x1AB344u;
    {
        const bool branch_taken_0x1ab344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB344u;
        // 0x1ab348: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab344) {
            ctx->pc = 0x1AB378u;
            goto label_1ab378;
        }
    }
    ctx->pc = 0x1AB34Cu;
label_1ab34c:
    // 0x1ab34c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1ab34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1ab350:
    // 0x1ab350: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ab350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab354:
    // 0x1ab354: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1ab354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1ab358:
    // 0x1ab358: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ab35c:
    // 0x1ab35c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1ab360:
    if (ctx->pc == 0x1AB360u) {
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB364u;
        goto label_1ab364;
    }
    ctx->pc = 0x1AB35Cu;
    {
        const bool branch_taken_0x1ab35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab35c) {
            ctx->pc = 0x1AB360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB35Cu;
            // 0x1ab360: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab340;
        }
    }
    ctx->pc = 0x1AB364u;
label_1ab364:
    // 0x1ab364: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ab368:
    if (ctx->pc == 0x1AB368u) {
        ctx->pc = 0x1AB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB364u;
        // 0x1ab368: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB36Cu;
        goto label_1ab36c;
    }
    ctx->pc = 0x1AB364u;
    {
        const bool branch_taken_0x1ab364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB364u;
        // 0x1ab368: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab364) {
            ctx->pc = 0x1AB37Cu;
            goto label_1ab37c;
        }
    }
    ctx->pc = 0x1AB36Cu;
label_1ab36c:
    // 0x1ab36c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ab370:
    // 0x1ab370: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ab374:
    // 0x1ab374: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1ab374u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1ab378:
    // 0x1ab378: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ab378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ab37c:
    // 0x1ab37c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1ab380:
    if (ctx->pc == 0x1AB380u) {
        ctx->pc = 0x1AB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB37Cu;
        // 0x1ab380: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB384u;
        goto label_1ab384;
    }
    ctx->pc = 0x1AB37Cu;
    {
        const bool branch_taken_0x1ab37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab37c) {
            ctx->pc = 0x1AB380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB37Cu;
            // 0x1ab380: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB384u;
            goto label_1ab384;
        }
    }
    ctx->pc = 0x1AB384u;
label_1ab384:
    // 0x1ab384: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ab384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab388:
    // 0x1ab388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab38c:
    // 0x1ab38c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1ab38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ab390:
    // 0x1ab390: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1ab394:
    if (ctx->pc == 0x1AB394u) {
        ctx->pc = 0x1AB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB390u;
        // 0x1ab394: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB398u;
        goto label_1ab398;
    }
    ctx->pc = 0x1AB390u;
    {
        const bool branch_taken_0x1ab390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB390u;
        // 0x1ab394: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab390) {
            ctx->pc = 0x1AB3C4u;
            goto label_1ab3c4;
        }
    }
    ctx->pc = 0x1AB398u;
label_1ab398:
    // 0x1ab398: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1ab398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
label_1ab39c:
    // 0x1ab39c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ab39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ab3a0:
    // 0x1ab3a0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1ab3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1ab3a4:
    // 0x1ab3a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ab3a8:
    if (ctx->pc == 0x1AB3A8u) {
        ctx->pc = 0x1AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A4u;
        // 0x1ab3a8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3ACu;
        goto label_1ab3ac;
    }
    ctx->pc = 0x1AB3A4u;
    {
        const bool branch_taken_0x1ab3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A4u;
        // 0x1ab3a8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3a4) {
            ctx->pc = 0x1AB3C4u;
            goto label_1ab3c4;
        }
    }
    ctx->pc = 0x1AB3ACu;
label_1ab3ac:
    // 0x1ab3ac: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1ab3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1ab3b0:
    // 0x1ab3b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ab3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab3b4:
    // 0x1ab3b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ab3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ab3b8:
    // 0x1ab3b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ab3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ab3bc:
    // 0x1ab3bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1ab3c0:
    if (ctx->pc == 0x1AB3C0u) {
        ctx->pc = 0x1AB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3BCu;
        // 0x1ab3c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3C4u;
        goto label_1ab3c4;
    }
    ctx->pc = 0x1AB3BCu;
    {
        const bool branch_taken_0x1ab3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab3bc) {
            ctx->pc = 0x1AB3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB3BCu;
            // 0x1ab3c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab3a0;
        }
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ab3c8:
    // 0x1ab3c8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1ab3cc:
    if (ctx->pc == 0x1AB3CCu) {
        ctx->pc = 0x1AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3C8u;
        // 0x1ab3cc: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3D0u;
        goto label_1ab3d0;
    }
    ctx->pc = 0x1AB3C8u;
    {
        const bool branch_taken_0x1ab3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab3c8) {
            ctx->pc = 0x1AB3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB3C8u;
            // 0x1ab3cc: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB3D0u;
            goto label_1ab3d0;
        }
    }
    ctx->pc = 0x1AB3D0u;
label_1ab3d0:
    // 0x1ab3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab3d4:
    // 0x1ab3d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ab3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ab3d8:
    // 0x1ab3d8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ab3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ab3dc:
    // 0x1ab3dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ab3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ab3e0:
    // 0x1ab3e0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1ab3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1ab3e4:
    // 0x1ab3e4: 0xc069208  jal         func_1A4820
label_1ab3e8:
    if (ctx->pc == 0x1AB3E8u) {
        ctx->pc = 0x1AB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3E4u;
        // 0x1ab3e8: 0x26903e80  addiu       $s0, $s4, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3ECu;
        goto label_1ab3ec;
    }
    ctx->pc = 0x1AB3E4u;
    SET_GPR_U32(ctx, 31, 0x1AB3ECu);
    ctx->pc = 0x1AB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3E4u;
    // 0x1ab3e8: 0x26903e80  addiu       $s0, $s4, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AB3ECu;
label_1ab3ec:
    // 0x1ab3ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3f0:
    // 0x1ab3f0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1ab3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1ab3f4:
    // 0x1ab3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab3f8:
    // 0x1ab3f8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1ab3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1ab3fc:
    // 0x1ab3fc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ab3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1ab400:
    // 0x1ab400: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1ab400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1ab404:
    // 0x1ab404: 0x26c73240  addiu       $a3, $s6, 0x3240
    ctx->pc = 0x1ab404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1ab408:
    // 0x1ab408: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ab40c:
    // 0x1ab40c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab410:
    // 0x1ab410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab414:
    // 0x1ab414: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1ab414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1ab418:
    // 0x1ab418: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ab418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab41c:
    // 0x1ab41c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab420:
    // 0x1ab420: 0xc069e2a  jal         func_1A78A8
label_1ab424:
    if (ctx->pc == 0x1AB424u) {
        ctx->pc = 0x1AB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB420u;
        // 0x1ab424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB428u;
        goto label_1ab428;
    }
    ctx->pc = 0x1AB420u;
    SET_GPR_U32(ctx, 31, 0x1AB428u);
    ctx->pc = 0x1AB424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB420u;
    // 0x1ab424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB428u;
label_1ab428:
    // 0x1ab428: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1ab42c:
    if (ctx->pc == 0x1AB42Cu) {
        ctx->pc = 0x1AB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB428u;
        // 0x1ab42c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB430u;
        goto label_1ab430;
    }
    ctx->pc = 0x1AB428u;
    {
        const bool branch_taken_0x1ab428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB428u;
        // 0x1ab42c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab428) {
            ctx->pc = 0x1AB448u;
            goto label_1ab448;
        }
    }
    ctx->pc = 0x1AB430u;
label_1ab430:
    // 0x1ab430: 0xc06920c  jal         func_1A4830
label_1ab434:
    if (ctx->pc == 0x1AB434u) {
        ctx->pc = 0x1AB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB430u;
        // 0x1ab434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB438u;
        goto label_1ab438;
    }
    ctx->pc = 0x1AB430u;
    SET_GPR_U32(ctx, 31, 0x1AB438u);
    ctx->pc = 0x1AB434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB430u;
    // 0x1ab434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB438u;
label_1ab438:
    // 0x1ab438: 0xc06a158  jal         func_1A8560
label_1ab43c:
    if (ctx->pc == 0x1AB43Cu) {
        ctx->pc = 0x1AB440u;
        goto label_1ab440;
    }
    ctx->pc = 0x1AB438u;
    SET_GPR_U32(ctx, 31, 0x1AB440u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB440u;
label_1ab440:
    // 0x1ab440: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ab444:
    if (ctx->pc == 0x1AB444u) {
        ctx->pc = 0x1AB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB440u;
        // 0x1ab444: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB448u;
        goto label_1ab448;
    }
    ctx->pc = 0x1AB440u;
    {
        const bool branch_taken_0x1ab440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB440u;
        // 0x1ab444: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab440) {
            ctx->pc = 0x1AB480u;
            goto label_1ab480;
        }
    }
    ctx->pc = 0x1AB448u;
label_1ab448:
    // 0x1ab448: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ab448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1ab44c:
    // 0x1ab44c: 0xc06a158  jal         func_1A8560
label_1ab450:
    if (ctx->pc == 0x1AB450u) {
        ctx->pc = 0x1AB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB44Cu;
        // 0x1ab450: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB454u;
        goto label_1ab454;
    }
    ctx->pc = 0x1AB44Cu;
    SET_GPR_U32(ctx, 31, 0x1AB454u);
    ctx->pc = 0x1AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB44Cu;
    // 0x1ab450: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ab458:
    if (ctx->pc == 0x1AB458u) {
        ctx->pc = 0x1AB45Cu;
        goto label_1ab45c;
    }
    ctx->pc = 0x1AB454u;
    {
        const bool branch_taken_0x1ab454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab454) {
            ctx->pc = 0x1AB46Cu;
            goto label_1ab46c;
        }
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0xc06920c  jal         func_1A4830
label_1ab460:
    if (ctx->pc == 0x1AB460u) {
        ctx->pc = 0x1AB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB45Cu;
        // 0x1ab460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB464u;
        goto label_1ab464;
    }
    ctx->pc = 0x1AB45Cu;
    SET_GPR_U32(ctx, 31, 0x1AB464u);
    ctx->pc = 0x1AB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB45Cu;
    // 0x1ab460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB464u;
label_1ab464:
    // 0x1ab464: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab468:
    if (ctx->pc == 0x1AB468u) {
        ctx->pc = 0x1AB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB464u;
        // 0x1ab468: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB46Cu;
        goto label_1ab46c;
    }
    ctx->pc = 0x1AB464u;
    {
        const bool branch_taken_0x1ab464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB464u;
        // 0x1ab468: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab464) {
            ctx->pc = 0x1AB480u;
            goto label_1ab480;
        }
    }
    ctx->pc = 0x1AB46Cu;
label_1ab46c:
    // 0x1ab46c: 0xc069218  jal         func_1A4860
label_1ab470:
    if (ctx->pc == 0x1AB470u) {
        ctx->pc = 0x1AB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB46Cu;
        // 0x1ab470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB474u;
        goto label_1ab474;
    }
    ctx->pc = 0x1AB46Cu;
    SET_GPR_U32(ctx, 31, 0x1AB474u);
    ctx->pc = 0x1AB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB46Cu;
    // 0x1ab470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AB474u;
label_1ab474:
    // 0x1ab474: 0xc06920c  jal         func_1A4830
label_1ab478:
    if (ctx->pc == 0x1AB478u) {
        ctx->pc = 0x1AB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB474u;
        // 0x1ab478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB47Cu;
        goto label_1ab47c;
    }
    ctx->pc = 0x1AB474u;
    SET_GPR_U32(ctx, 31, 0x1AB47Cu);
    ctx->pc = 0x1AB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB474u;
    // 0x1ab478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB47Cu;
label_1ab47c:
    // 0x1ab47c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ab47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab480:
    // 0x1ab480: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ab480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ab484:
    // 0x1ab484: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ab484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ab488:
    // 0x1ab488: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1ab488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ab48c:
    // 0x1ab48c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ab48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab490:
    // 0x1ab490: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1ab490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab494:
    // 0x1ab494: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ab494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab498:
    // 0x1ab498: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1ab498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab49c:
    // 0x1ab49c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ab49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab4a0:
    // 0x1ab4a0: 0x3e00008  jr          $ra
label_1ab4a4:
    if (ctx->pc == 0x1AB4A4u) {
        ctx->pc = 0x1AB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4A0u;
        // 0x1ab4a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4A8u;
        goto label_1ab4a8;
    }
    ctx->pc = 0x1AB4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4A0u;
        // 0x1ab4a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB4A8u;
label_1ab4a8:
    // 0x1ab4a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1ab4ac:
    // 0x1ab4ac: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ab4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1ab4b0:
    // 0x1ab4b0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ab4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1ab4b4:
    // 0x1ab4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4b8:
    // 0x1ab4b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ab4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1ab4bc:
    // 0x1ab4bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ab4bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4c0:
    // 0x1ab4c0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1ab4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1ab4c4:
    // 0x1ab4c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ab4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4c8:
    // 0x1ab4c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1ab4cc:
    // 0x1ab4cc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ab4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1ab4d0:
    // 0x1ab4d0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ab4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1ab4d4:
    // 0x1ab4d4: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1ab4d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1ab4d8:
    // 0x1ab4d8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ab4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1ab4dc:
    // 0x1ab4dc: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1ab4e0:
    // 0x1ab4e0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ab4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1ab4e4:
    // 0x1ab4e4: 0xc06a14c  jal         func_1A8530
label_1ab4e8:
    if (ctx->pc == 0x1AB4E8u) {
        ctx->pc = 0x1AB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4E4u;
        // 0x1ab4e8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4ECu;
        goto label_1ab4ec;
    }
    ctx->pc = 0x1AB4E4u;
    SET_GPR_U32(ctx, 31, 0x1AB4ECu);
    ctx->pc = 0x1AB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4E4u;
    // 0x1ab4e8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AB4ECu;
label_1ab4ec:
    // 0x1ab4ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1ab4f0:
    // 0x1ab4f0: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1ab4f4:
    // 0x1ab4f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1ab4f8:
    if (ctx->pc == 0x1AB4F8u) {
        ctx->pc = 0x1AB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4F4u;
        // 0x1ab4f8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4FCu;
        goto label_1ab4fc;
    }
    ctx->pc = 0x1AB4F4u;
    {
        const bool branch_taken_0x1ab4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4f4) {
            ctx->pc = 0x1AB4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB4F4u;
            // 0x1ab4f8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB508u;
            goto label_1ab508;
        }
    }
    ctx->pc = 0x1AB4FCu;
label_1ab4fc:
    // 0x1ab4fc: 0xc06a18e  jal         func_1A8638
label_1ab500:
    if (ctx->pc == 0x1AB500u) {
        ctx->pc = 0x1AB504u;
        goto label_1ab504;
    }
    ctx->pc = 0x1AB4FCu;
    SET_GPR_U32(ctx, 31, 0x1AB504u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AB504u;
label_1ab504:
    // 0x1ab504: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ab504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab508:
    // 0x1ab508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab50c:
    // 0x1ab50c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1ab50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ab510:
    // 0x1ab510: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1ab514:
    if (ctx->pc == 0x1AB514u) {
        ctx->pc = 0x1AB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB510u;
        // 0x1ab514: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB518u;
        goto label_1ab518;
    }
    ctx->pc = 0x1AB510u;
    {
        const bool branch_taken_0x1ab510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB510u;
        // 0x1ab514: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab510) {
            ctx->pc = 0x1AB55Cu;
            goto label_1ab55c;
        }
    }
    ctx->pc = 0x1AB518u;
label_1ab518:
    // 0x1ab518: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1ab518u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
label_1ab51c:
    // 0x1ab51c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ab520:
    // 0x1ab520: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1ab520u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1ab524:
    // 0x1ab524: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1ab528:
    // 0x1ab528: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ab52c:
    // 0x1ab52c: 0x0  nop
    ctx->pc = 0x1ab52cu;
    // NOP
label_1ab530:
    // 0x1ab530: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1ab530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1ab534:
    // 0x1ab534: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1ab538:
    if (ctx->pc == 0x1AB538u) {
        ctx->pc = 0x1AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB534u;
        // 0x1ab538: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB53Cu;
        goto label_1ab53c;
    }
    ctx->pc = 0x1AB534u;
    {
        const bool branch_taken_0x1ab534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB534u;
        // 0x1ab538: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab534) {
            ctx->pc = 0x1AB56Cu;
            goto label_1ab56c;
        }
    }
    ctx->pc = 0x1AB53Cu;
label_1ab53c:
    // 0x1ab53c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1ab53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1ab540:
    // 0x1ab540: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ab540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab544:
    // 0x1ab544: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1ab544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_1ab548:
    // 0x1ab548: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ab548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ab54c:
    // 0x1ab54c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1ab550:
    if (ctx->pc == 0x1AB550u) {
        ctx->pc = 0x1AB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB54Cu;
        // 0x1ab550: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB554u;
        goto label_1ab554;
    }
    ctx->pc = 0x1AB54Cu;
    {
        const bool branch_taken_0x1ab54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab54c) {
            ctx->pc = 0x1AB550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB54Cu;
            // 0x1ab550: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab530;
        }
    }
    ctx->pc = 0x1AB554u;
label_1ab554:
    // 0x1ab554: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab558:
    if (ctx->pc == 0x1AB558u) {
        ctx->pc = 0x1AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB554u;
        // 0x1ab558: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB55Cu;
        goto label_1ab55c;
    }
    ctx->pc = 0x1AB554u;
    {
        const bool branch_taken_0x1ab554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB554u;
        // 0x1ab558: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab554) {
            ctx->pc = 0x1AB570u;
            goto label_1ab570;
        }
    }
    ctx->pc = 0x1AB55Cu;
label_1ab55c:
    // 0x1ab55c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1ab55cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
label_1ab560:
    // 0x1ab560: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ab560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ab564:
    // 0x1ab564: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1ab564u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1ab568:
    // 0x1ab568: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1ab56c:
    // 0x1ab56c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ab56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ab570:
    // 0x1ab570: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1ab574:
    if (ctx->pc == 0x1AB574u) {
        ctx->pc = 0x1AB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB570u;
        // 0x1ab574: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB578u;
        goto label_1ab578;
    }
    ctx->pc = 0x1AB570u;
    {
        const bool branch_taken_0x1ab570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab570) {
            ctx->pc = 0x1AB574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB570u;
            // 0x1ab574: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB578u;
            goto label_1ab578;
        }
    }
    ctx->pc = 0x1AB578u;
label_1ab578:
    // 0x1ab578: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1ab578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1ab57c:
    // 0x1ab57c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab580:
    // 0x1ab580: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x1ab580u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1ab584:
    // 0x1ab584: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1ab584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
label_1ab588:
    // 0x1ab588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ab588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab58c:
    // 0x1ab58c: 0xc069bee  jal         func_1A6FB8
label_1ab590:
    if (ctx->pc == 0x1AB590u) {
        ctx->pc = 0x1AB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB58Cu;
        // 0x1ab590: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB594u;
        goto label_1ab594;
    }
    ctx->pc = 0x1AB58Cu;
    SET_GPR_U32(ctx, 31, 0x1AB594u);
    ctx->pc = 0x1AB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB58Cu;
    // 0x1ab590: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AB594u;
label_1ab594:
    // 0x1ab594: 0x26903e80  addiu       $s0, $s4, 0x3E80
    ctx->pc = 0x1ab594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1ab598:
    // 0x1ab598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab59c:
    // 0x1ab59c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ab59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ab5a0:
    // 0x1ab5a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ab5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ab5a4:
    // 0x1ab5a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ab5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ab5a8:
    // 0x1ab5a8: 0xc069208  jal         func_1A4820
label_1ab5ac:
    if (ctx->pc == 0x1AB5ACu) {
        ctx->pc = 0x1AB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5A8u;
        // 0x1ab5ac: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5B0u;
        goto label_1ab5b0;
    }
    ctx->pc = 0x1AB5A8u;
    SET_GPR_U32(ctx, 31, 0x1AB5B0u);
    ctx->pc = 0x1AB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5A8u;
    // 0x1ab5ac: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AB5B0u;
label_1ab5b0:
    // 0x1ab5b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5b4:
    // 0x1ab5b4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1ab5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1ab5b8:
    // 0x1ab5b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab5bc:
    // 0x1ab5bc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1ab5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1ab5c0:
    // 0x1ab5c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ab5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1ab5c4:
    // 0x1ab5c4: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1ab5c8:
    // 0x1ab5c8: 0x26e73240  addiu       $a3, $s7, 0x3240
    ctx->pc = 0x1ab5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1ab5cc:
    // 0x1ab5cc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ab5d0:
    // 0x1ab5d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab5d4:
    // 0x1ab5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5d8:
    // 0x1ab5d8: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1ab5dc:
    // 0x1ab5dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ab5dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5e0:
    // 0x1ab5e0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab5e4:
    // 0x1ab5e4: 0xc069e2a  jal         func_1A78A8
label_1ab5e8:
    if (ctx->pc == 0x1AB5E8u) {
        ctx->pc = 0x1AB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5E4u;
        // 0x1ab5e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5ECu;
        goto label_1ab5ec;
    }
    ctx->pc = 0x1AB5E4u;
    SET_GPR_U32(ctx, 31, 0x1AB5ECu);
    ctx->pc = 0x1AB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5E4u;
    // 0x1ab5e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB5ECu;
label_1ab5ec:
    // 0x1ab5ec: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1ab5f0:
    if (ctx->pc == 0x1AB5F0u) {
        ctx->pc = 0x1AB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5ECu;
        // 0x1ab5f0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5F4u;
        goto label_1ab5f4;
    }
    ctx->pc = 0x1AB5ECu;
    {
        const bool branch_taken_0x1ab5ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5ECu;
        // 0x1ab5f0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5ec) {
            ctx->pc = 0x1AB60Cu;
            goto label_1ab60c;
        }
    }
    ctx->pc = 0x1AB5F4u;
label_1ab5f4:
    // 0x1ab5f4: 0xc06920c  jal         func_1A4830
label_1ab5f8:
    if (ctx->pc == 0x1AB5F8u) {
        ctx->pc = 0x1AB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F4u;
        // 0x1ab5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5FCu;
        goto label_1ab5fc;
    }
    ctx->pc = 0x1AB5F4u;
    SET_GPR_U32(ctx, 31, 0x1AB5FCu);
    ctx->pc = 0x1AB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5F4u;
    // 0x1ab5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB5FCu;
label_1ab5fc:
    // 0x1ab5fc: 0xc06a158  jal         func_1A8560
label_1ab600:
    if (ctx->pc == 0x1AB600u) {
        ctx->pc = 0x1AB604u;
        goto label_1ab604;
    }
    ctx->pc = 0x1AB5FCu;
    SET_GPR_U32(ctx, 31, 0x1AB604u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB604u;
label_1ab604:
    // 0x1ab604: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ab608:
    if (ctx->pc == 0x1AB608u) {
        ctx->pc = 0x1AB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB604u;
        // 0x1ab608: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB60Cu;
        goto label_1ab60c;
    }
    ctx->pc = 0x1AB604u;
    {
        const bool branch_taken_0x1ab604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB604u;
        // 0x1ab608: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab604) {
            ctx->pc = 0x1AB644u;
            goto label_1ab644;
        }
    }
    ctx->pc = 0x1AB60Cu;
label_1ab60c:
    // 0x1ab60c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ab60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1ab610:
    // 0x1ab610: 0xc06a158  jal         func_1A8560
label_1ab614:
    if (ctx->pc == 0x1AB614u) {
        ctx->pc = 0x1AB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB610u;
        // 0x1ab614: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB618u;
        goto label_1ab618;
    }
    ctx->pc = 0x1AB610u;
    SET_GPR_U32(ctx, 31, 0x1AB618u);
    ctx->pc = 0x1AB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB610u;
    // 0x1ab614: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB618u;
label_1ab618:
    // 0x1ab618: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ab61c:
    if (ctx->pc == 0x1AB61Cu) {
        ctx->pc = 0x1AB620u;
        goto label_1ab620;
    }
    ctx->pc = 0x1AB618u;
    {
        const bool branch_taken_0x1ab618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab618) {
            ctx->pc = 0x1AB630u;
            goto label_1ab630;
        }
    }
    ctx->pc = 0x1AB620u;
label_1ab620:
    // 0x1ab620: 0xc06920c  jal         func_1A4830
label_1ab624:
    if (ctx->pc == 0x1AB624u) {
        ctx->pc = 0x1AB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB620u;
        // 0x1ab624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB628u;
        goto label_1ab628;
    }
    ctx->pc = 0x1AB620u;
    SET_GPR_U32(ctx, 31, 0x1AB628u);
    ctx->pc = 0x1AB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB620u;
    // 0x1ab624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB628u;
label_1ab628:
    // 0x1ab628: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab62c:
    if (ctx->pc == 0x1AB62Cu) {
        ctx->pc = 0x1AB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB628u;
        // 0x1ab62c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB630u;
        goto label_1ab630;
    }
    ctx->pc = 0x1AB628u;
    {
        const bool branch_taken_0x1ab628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB628u;
        // 0x1ab62c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab628) {
            ctx->pc = 0x1AB644u;
            goto label_1ab644;
        }
    }
    ctx->pc = 0x1AB630u;
label_1ab630:
    // 0x1ab630: 0xc069218  jal         func_1A4860
label_1ab634:
    if (ctx->pc == 0x1AB634u) {
        ctx->pc = 0x1AB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB630u;
        // 0x1ab634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB638u;
        goto label_1ab638;
    }
    ctx->pc = 0x1AB630u;
    SET_GPR_U32(ctx, 31, 0x1AB638u);
    ctx->pc = 0x1AB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB630u;
    // 0x1ab634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AB638u;
label_1ab638:
    // 0x1ab638: 0xc06920c  jal         func_1A4830
label_1ab63c:
    if (ctx->pc == 0x1AB63Cu) {
        ctx->pc = 0x1AB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB638u;
        // 0x1ab63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB640u;
        goto label_1ab640;
    }
    ctx->pc = 0x1AB638u;
    SET_GPR_U32(ctx, 31, 0x1AB640u);
    ctx->pc = 0x1AB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB638u;
    // 0x1ab63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB640u;
label_1ab640:
    // 0x1ab640: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ab640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab644:
    // 0x1ab644: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1ab644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1ab648:
    // 0x1ab648: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1ab648u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ab64c:
    // 0x1ab64c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ab650:
    // 0x1ab650: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ab654:
    // 0x1ab654: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ab654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab658:
    // 0x1ab658: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1ab658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab65c:
    // 0x1ab65c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab660:
    // 0x1ab660: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1ab660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab664:
    // 0x1ab664: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ab664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab668:
    // 0x1ab668: 0x3e00008  jr          $ra
label_1ab66c:
    if (ctx->pc == 0x1AB66Cu) {
        ctx->pc = 0x1AB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB668u;
        // 0x1ab66c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB670u;
        goto label_1ab670;
    }
    ctx->pc = 0x1AB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB668u;
        // 0x1ab66c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB670u;
label_1ab670:
    // 0x1ab670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab674:
    // 0x1ab674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ab674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ab678:
    // 0x1ab678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab67c:
    // 0x1ab67c: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1ab67cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1ab680:
    // 0x1ab680: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ab684:
    if (ctx->pc == 0x1AB684u) {
        ctx->pc = 0x1AB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB680u;
        // 0x1ab684: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB688u;
        goto label_1ab688;
    }
    ctx->pc = 0x1AB680u;
    {
        const bool branch_taken_0x1ab680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB680u;
        // 0x1ab684: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab680) {
            ctx->pc = 0x1AB6ACu;
            goto label_1ab6ac;
        }
    }
    ctx->pc = 0x1AB688u;
label_1ab688:
    // 0x1ab688: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ab688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1ab68c:
    // 0x1ab68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab690:
    // 0x1ab690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ab694:
    // 0x1ab694: 0x0  nop
    ctx->pc = 0x1ab694u;
    // NOP
label_1ab698:
    // 0x1ab698: 0x0  nop
    ctx->pc = 0x1ab698u;
    // NOP
label_1ab69c:
    // 0x1ab69c: 0x0  nop
    ctx->pc = 0x1ab69cu;
    // NOP
label_1ab6a0:
    // 0x1ab6a0: 0x0  nop
    ctx->pc = 0x1ab6a0u;
    // NOP
label_1ab6a4:
    // 0x1ab6a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1ab6a8:
    if (ctx->pc == 0x1AB6A8u) {
        ctx->pc = 0x1AB6ACu;
        goto label_1ab6ac;
    }
    ctx->pc = 0x1AB6A4u;
    {
        const bool branch_taken_0x1ab6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab6a4) {
            ctx->pc = 0x1AB690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab690;
        }
    }
    ctx->pc = 0x1AB6ACu;
label_1ab6ac:
    // 0x1ab6ac: 0x263045c0  addiu       $s0, $s1, 0x45C0
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17856));
label_1ab6b0:
    // 0x1ab6b0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1ab6b4:
    // 0x1ab6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6b8:
    // 0x1ab6b8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1ab6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
label_1ab6bc:
    // 0x1ab6bc: 0xc069db6  jal         func_1A76D8
label_1ab6c0:
    if (ctx->pc == 0x1AB6C0u) {
        ctx->pc = 0x1AB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6BCu;
        // 0x1ab6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6C4u;
        goto label_1ab6c4;
    }
    ctx->pc = 0x1AB6BCu;
    SET_GPR_U32(ctx, 31, 0x1AB6C4u);
    ctx->pc = 0x1AB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6BCu;
    // 0x1ab6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1AB6C4u;
label_1ab6c4:
    // 0x1ab6c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ab6c8:
    if (ctx->pc == 0x1AB6C8u) {
        ctx->pc = 0x1AB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6C4u;
        // 0x1ab6c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6CCu;
        goto label_1ab6cc;
    }
    ctx->pc = 0x1AB6C4u;
    {
        const bool branch_taken_0x1ab6c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab6c4) {
            ctx->pc = 0x1AB6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB6C4u;
            // 0x1ab6c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB6D4u;
            goto label_1ab6d4;
        }
    }
    ctx->pc = 0x1AB6CCu;
label_1ab6cc:
    // 0x1ab6cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ab6d0:
    if (ctx->pc == 0x1AB6D0u) {
        ctx->pc = 0x1AB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6CCu;
        // 0x1ab6d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6D4u;
        goto label_1ab6d4;
    }
    ctx->pc = 0x1AB6CCu;
    {
        const bool branch_taken_0x1ab6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6CCu;
        // 0x1ab6d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6cc) {
            ctx->pc = 0x1AB6E4u;
            goto label_1ab6e4;
        }
    }
    ctx->pc = 0x1AB6D4u;
label_1ab6d4:
    // 0x1ab6d4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_1ab6d8:
    if (ctx->pc == 0x1AB6D8u) {
        ctx->pc = 0x1AB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6D4u;
        // 0x1ab6d8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6DCu;
        goto label_1ab6dc;
    }
    ctx->pc = 0x1AB6D4u;
    {
        const bool branch_taken_0x1ab6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6D4u;
        // 0x1ab6d8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6d4) {
            ctx->pc = 0x1AB688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab688;
        }
    }
    ctx->pc = 0x1AB6DCu;
label_1ab6dc:
    // 0x1ab6dc: 0xac405c10  sw          $zero, 0x5C10($v0)
    ctx->pc = 0x1ab6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23568), GPR_U32(ctx, 0));
label_1ab6e0:
    // 0x1ab6e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6e4:
    // 0x1ab6e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab6e8:
    // 0x1ab6e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ab6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab6ec:
    // 0x1ab6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab6f0:
    // 0x1ab6f0: 0x3e00008  jr          $ra
label_1ab6f4:
    if (ctx->pc == 0x1AB6F4u) {
        ctx->pc = 0x1AB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F0u;
        // 0x1ab6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6F8u;
        goto label_1ab6f8;
    }
    ctx->pc = 0x1AB6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F0u;
        // 0x1ab6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6F8u;
label_1ab6f8:
    // 0x1ab6f8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1ab6fc:
    // 0x1ab6fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab700:
    // 0x1ab700: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1ab700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23568)));
label_1ab704:
    // 0x1ab704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ab704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab708:
    // 0x1ab708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab70c:
    // 0x1ab70c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_1ab710:
    if (ctx->pc == 0x1AB710u) {
        ctx->pc = 0x1AB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB70Cu;
        // 0x1ab710: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB714u;
        goto label_1ab714;
    }
    ctx->pc = 0x1AB70Cu;
    {
        const bool branch_taken_0x1ab70c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB70Cu;
        // 0x1ab710: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab70c) {
            ctx->pc = 0x1AB754u;
            goto label_1ab754;
        }
    }
    ctx->pc = 0x1AB714u;
label_1ab714:
    // 0x1ab714: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1ab718:
    // 0x1ab718: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ab71c:
    // 0x1ab71c: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1ab71cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17984), GPR_U32(ctx, 5));
label_1ab720:
    // 0x1ab720: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab724:
    // 0x1ab724: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1ab728:
    // 0x1ab728: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
label_1ab72c:
    // 0x1ab72c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab730:
    // 0x1ab730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab734:
    // 0x1ab734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab738:
    // 0x1ab738: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ab738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab73c:
    // 0x1ab73c: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab740:
    // 0x1ab740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab744:
    // 0x1ab744: 0xc069e2a  jal         func_1A78A8
label_1ab748:
    if (ctx->pc == 0x1AB748u) {
        ctx->pc = 0x1AB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB744u;
        // 0x1ab748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB74Cu;
        goto label_1ab74c;
    }
    ctx->pc = 0x1AB744u;
    SET_GPR_U32(ctx, 31, 0x1AB74Cu);
    ctx->pc = 0x1AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB744u;
    // 0x1ab748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1ab750:
    if (ctx->pc == 0x1AB750u) {
        ctx->pc = 0x1AB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB74Cu;
        // 0x1ab750: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB754u;
        goto label_1ab754;
    }
    ctx->pc = 0x1AB74Cu;
    {
        const bool branch_taken_0x1ab74c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB74Cu;
        // 0x1ab750: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab74c) {
            ctx->pc = 0x1AB758u;
            goto label_1ab758;
        }
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab758:
    // 0x1ab758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab75c:
    // 0x1ab75c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab760:
    // 0x1ab760: 0x3e00008  jr          $ra
label_1ab764:
    if (ctx->pc == 0x1AB764u) {
        ctx->pc = 0x1AB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB760u;
        // 0x1ab764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB768u;
        goto label_1ab768;
    }
    ctx->pc = 0x1AB760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB760u;
        // 0x1ab764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB768u;
label_1ab768:
    // 0x1ab768: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab76c:
    // 0x1ab76c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab770:
    // 0x1ab770: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab774:
    // 0x1ab774: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab778:
    // 0x1ab778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab77c:
    // 0x1ab77c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ab77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ab780:
    // 0x1ab780: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
label_1ab784:
    if (ctx->pc == 0x1AB784u) {
        ctx->pc = 0x1AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB780u;
        // 0x1ab784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB788u;
        goto label_1ab788;
    }
    ctx->pc = 0x1AB780u;
    {
        const bool branch_taken_0x1ab780 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB780u;
        // 0x1ab784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab780) {
            ctx->pc = 0x1AB7D8u;
            goto label_1ab7d8;
        }
    }
    ctx->pc = 0x1AB788u;
label_1ab788:
    // 0x1ab788: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ab78c:
    // 0x1ab78c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ab790:
    // 0x1ab790: 0x24434640  addiu       $v1, $v0, 0x4640
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
label_1ab794:
    // 0x1ab794: 0xac454640  sw          $a1, 0x4640($v0)
    ctx->pc = 0x1ab794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17984), GPR_U32(ctx, 5));
label_1ab798:
    // 0x1ab798: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1ab798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_1ab79c:
    // 0x1ab79c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab7a0:
    // 0x1ab7a0: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1ab7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1ab7a4:
    // 0x1ab7a4: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1ab7a8:
    // 0x1ab7a8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7ac:
    // 0x1ab7ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab7b0:
    // 0x1ab7b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab7b4:
    // 0x1ab7b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7b8:
    // 0x1ab7b8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ab7bc:
    // 0x1ab7bc: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab7c0:
    // 0x1ab7c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab7c4:
    // 0x1ab7c4: 0xc069e2a  jal         func_1A78A8
label_1ab7c8:
    if (ctx->pc == 0x1AB7C8u) {
        ctx->pc = 0x1AB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7C4u;
        // 0x1ab7c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7CCu;
        goto label_1ab7cc;
    }
    ctx->pc = 0x1AB7C4u;
    SET_GPR_U32(ctx, 31, 0x1AB7CCu);
    ctx->pc = 0x1AB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7C4u;
    // 0x1ab7c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB7CCu;
label_1ab7cc:
    // 0x1ab7cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1ab7d0:
    if (ctx->pc == 0x1AB7D0u) {
        ctx->pc = 0x1AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7CCu;
        // 0x1ab7d0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7D4u;
        goto label_1ab7d4;
    }
    ctx->pc = 0x1AB7CCu;
    {
        const bool branch_taken_0x1ab7cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7CCu;
        // 0x1ab7d0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7cc) {
            ctx->pc = 0x1AB7D8u;
            goto label_1ab7d8;
        }
    }
    ctx->pc = 0x1AB7D4u;
label_1ab7d4:
    // 0x1ab7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7d8:
    // 0x1ab7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab7dc:
    // 0x1ab7dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab7e0:
    // 0x1ab7e0: 0x3e00008  jr          $ra
label_1ab7e4:
    if (ctx->pc == 0x1AB7E4u) {
        ctx->pc = 0x1AB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7E0u;
        // 0x1ab7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7E8u;
        goto label_1ab7e8;
    }
    ctx->pc = 0x1AB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7E0u;
        // 0x1ab7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB7E8u;
label_1ab7e8:
    // 0x1ab7e8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ab7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1ab7ec:
    // 0x1ab7ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab7f0:
    // 0x1ab7f0: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1ab7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23568)));
label_1ab7f4:
    // 0x1ab7f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ab7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7f8:
    // 0x1ab7f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab7fc:
    // 0x1ab7fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab800:
    if (ctx->pc == 0x1AB800u) {
        ctx->pc = 0x1AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7FCu;
        // 0x1ab800: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB804u;
        goto label_1ab804;
    }
    ctx->pc = 0x1AB7FCu;
    {
        const bool branch_taken_0x1ab7fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7FCu;
        // 0x1ab800: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7fc) {
            ctx->pc = 0x1AB80Cu;
            goto label_1ab80c;
        }
    }
    ctx->pc = 0x1AB804u;
label_1ab804:
    // 0x1ab804: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ab808:
    if (ctx->pc == 0x1AB808u) {
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB80Cu;
        goto label_1ab80c;
    }
    ctx->pc = 0x1AB804u;
    {
        const bool branch_taken_0x1ab804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab804) {
            ctx->pc = 0x1AB850u;
            goto label_1ab850;
        }
    }
    ctx->pc = 0x1AB80Cu;
label_1ab80c:
    // 0x1ab80c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1ab810:
    // 0x1ab810: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ab814:
    // 0x1ab814: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1ab814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17984), GPR_U32(ctx, 5));
label_1ab818:
    // 0x1ab818: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab81c:
    // 0x1ab81c: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1ab820:
    // 0x1ab820: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
label_1ab824:
    // 0x1ab824: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab828:
    // 0x1ab828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab82c:
    // 0x1ab82c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab830:
    // 0x1ab830: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ab830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab834:
    // 0x1ab834: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab838:
    // 0x1ab838: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab83c:
    // 0x1ab83c: 0xc069e2a  jal         func_1A78A8
label_1ab840:
    if (ctx->pc == 0x1AB840u) {
        ctx->pc = 0x1AB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB83Cu;
        // 0x1ab840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB844u;
        goto label_1ab844;
    }
    ctx->pc = 0x1AB83Cu;
    SET_GPR_U32(ctx, 31, 0x1AB844u);
    ctx->pc = 0x1AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB83Cu;
    // 0x1ab840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB844u;
label_1ab844:
    // 0x1ab844: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1ab848:
    if (ctx->pc == 0x1AB848u) {
        ctx->pc = 0x1AB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB844u;
        // 0x1ab848: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB84Cu;
        goto label_1ab84c;
    }
    ctx->pc = 0x1AB844u;
    {
        const bool branch_taken_0x1ab844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB844u;
        // 0x1ab848: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab844) {
            ctx->pc = 0x1AB850u;
            goto label_1ab850;
        }
    }
    ctx->pc = 0x1AB84Cu;
label_1ab84c:
    // 0x1ab84c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab850:
    // 0x1ab850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab854:
    // 0x1ab854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab858:
    // 0x1ab858: 0x3e00008  jr          $ra
label_1ab85c:
    if (ctx->pc == 0x1AB85Cu) {
        ctx->pc = 0x1AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB858u;
        // 0x1ab85c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB860u;
        goto label_1ab860;
    }
    ctx->pc = 0x1AB858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB858u;
        // 0x1ab85c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB860u;
label_1ab860:
    // 0x1ab860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab864:
    // 0x1ab864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab868:
    // 0x1ab868: 0xc06adfa  jal         func_1AB7E8
label_1ab86c:
    if (ctx->pc == 0x1AB86Cu) {
        ctx->pc = 0x1AB870u;
        goto label_1ab870;
    }
    ctx->pc = 0x1AB868u;
    SET_GPR_U32(ctx, 31, 0x1AB870u);
    ctx->pc = 0x1AB7E8u;
    goto label_1ab7e8;
    ctx->pc = 0x1AB870u;
label_1ab870:
    // 0x1ab870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab874:
    // 0x1ab874: 0x3e00008  jr          $ra
label_1ab878:
    if (ctx->pc == 0x1AB878u) {
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB87Cu;
        goto label_1ab87c;
    }
    ctx->pc = 0x1AB874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB87Cu;
label_1ab87c:
    // 0x1ab87c: 0x0  nop
    ctx->pc = 0x1ab87cu;
    // NOP
label_1ab880:
    // 0x1ab880: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab884:
    // 0x1ab884: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab888:
    // 0x1ab888: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab88c:
    // 0x1ab88c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab890:
    // 0x1ab890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab894:
    // 0x1ab894: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab898:
    if (ctx->pc == 0x1AB898u) {
        ctx->pc = 0x1AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB894u;
        // 0x1ab898: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB89Cu;
        goto label_1ab89c;
    }
    ctx->pc = 0x1AB894u;
    {
        const bool branch_taken_0x1ab894 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB894u;
        // 0x1ab898: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab894) {
            ctx->pc = 0x1AB8A4u;
            goto label_1ab8a4;
        }
    }
    ctx->pc = 0x1AB89Cu;
label_1ab89c:
    // 0x1ab89c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ab8a0:
    if (ctx->pc == 0x1AB8A0u) {
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8A4u;
        goto label_1ab8a4;
    }
    ctx->pc = 0x1AB89Cu;
    {
        const bool branch_taken_0x1ab89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab89c) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB8A4u;
label_1ab8a4:
    // 0x1ab8a4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ab8a8:
    // 0x1ab8a8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1ab8ac:
    // 0x1ab8ac: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab8b0:
    // 0x1ab8b0: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1ab8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
label_1ab8b4:
    // 0x1ab8b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ab8b8:
    // 0x1ab8b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ab8bc:
    if (ctx->pc == 0x1AB8BCu) {
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8C0u;
        goto label_1ab8c0;
    }
    ctx->pc = 0x1AB8B8u;
    {
        const bool branch_taken_0x1ab8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b8) {
            ctx->pc = 0x1AB900u;
            goto label_1ab900;
        }
    }
    ctx->pc = 0x1AB8C0u;
label_1ab8c0:
    // 0x1ab8c0: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ab8c4:
    // 0x1ab8c4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab8c8:
    // 0x1ab8c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ab8cc:
    // 0x1ab8cc: 0x0  nop
    ctx->pc = 0x1ab8ccu;
    // NOP
label_1ab8d0:
    // 0x1ab8d0: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
label_1ab8d4:
    // 0x1ab8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ab8d8:
    if (ctx->pc == 0x1AB8D8u) {
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8DCu;
        goto label_1ab8dc;
    }
    ctx->pc = 0x1AB8D4u;
    {
        const bool branch_taken_0x1ab8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8d4) {
            ctx->pc = 0x1AB908u;
            goto label_1ab908;
        }
    }
    ctx->pc = 0x1AB8DCu;
label_1ab8dc:
    // 0x1ab8dc: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab8e0:
    // 0x1ab8e0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ab8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab8e4:
    // 0x1ab8e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1ab8e8:
    // 0x1ab8e8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1ab8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_1ab8ec:
    // 0x1ab8ec: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ab8f0:
    // 0x1ab8f0: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
label_1ab8f4:
    if (ctx->pc == 0x1AB8F4u) {
        ctx->pc = 0x1AB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F0u;
        // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8F8u;
        goto label_1ab8f8;
    }
    ctx->pc = 0x1AB8F0u;
    {
        const bool branch_taken_0x1ab8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8f0) {
            ctx->pc = 0x1AB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB8F0u;
            // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab8d0;
        }
    }
    ctx->pc = 0x1AB8F8u;
label_1ab8f8:
    // 0x1ab8f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ab8fc:
    if (ctx->pc == 0x1AB8FCu) {
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB900u;
        goto label_1ab900;
    }
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB90Cu;
            goto label_1ab90c;
        }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ab904:
    // 0x1ab904: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab908:
    // 0x1ab908: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ab90c:
    // 0x1ab90c: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
label_1ab910:
    if (ctx->pc == 0x1AB910u) {
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB90Cu;
        // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB914u;
        goto label_1ab914;
    }
    ctx->pc = 0x1AB90Cu;
    {
        const bool branch_taken_0x1ab90c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab90c) {
            ctx->pc = 0x1AB910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB924u;
            goto label_1ab924;
        }
    }
    ctx->pc = 0x1AB914u;
label_1ab914:
    // 0x1ab914: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab918:
    // 0x1ab918: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_1ab91c:
    // 0x1ab91c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
label_1ab920:
    // 0x1ab920: 0xace54680  sw          $a1, 0x4680($a3)
    ctx->pc = 0x1ab920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
label_1ab924:
    // 0x1ab924: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab928:
    // 0x1ab928: 0x252445c0  addiu       $a0, $t1, 0x45C0
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17856));
label_1ab92c:
    // 0x1ab92c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab92cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
label_1ab930:
    // 0x1ab930: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ab930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab934:
    // 0x1ab934: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1ab934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_1ab938:
    // 0x1ab938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab93c:
    // 0x1ab93c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab940:
    // 0x1ab940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab944:
    // 0x1ab944: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab948:
    // 0x1ab948: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab94c:
    // 0x1ab94c: 0xc069e2a  jal         func_1A78A8
label_1ab950:
    if (ctx->pc == 0x1AB950u) {
        ctx->pc = 0x1AB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB94Cu;
        // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB954u;
        goto label_1ab954;
    }
    ctx->pc = 0x1AB94Cu;
    SET_GPR_U32(ctx, 31, 0x1AB954u);
    ctx->pc = 0x1AB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB94Cu;
    // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB954u;
label_1ab954:
    // 0x1ab954: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1ab958:
    if (ctx->pc == 0x1AB958u) {
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB95Cu;
        goto label_1ab95c;
    }
    ctx->pc = 0x1AB954u;
    {
        const bool branch_taken_0x1ab954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab954) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB95Cu;
label_1ab95c:
    // 0x1ab95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab960:
    // 0x1ab960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab964:
    // 0x1ab964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab968:
    // 0x1ab968: 0x3e00008  jr          $ra
label_1ab96c:
    if (ctx->pc == 0x1AB96Cu) {
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB970u;
        goto label_1ab970;
    }
    ctx->pc = 0x1AB968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB970u;
label_1ab970:
    // 0x1ab970: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab974:
    // 0x1ab974: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab978:
    // 0x1ab978: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab97c:
    // 0x1ab97c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab980:
    // 0x1ab980: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab984:
    if (ctx->pc == 0x1AB984u) {
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB988u;
        goto label_1ab988;
    }
    ctx->pc = 0x1AB980u;
    {
        const bool branch_taken_0x1ab980 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab980) {
            ctx->pc = 0x1AB990u;
            goto label_1ab990;
        }
    }
    ctx->pc = 0x1AB988u;
label_1ab988:
    // 0x1ab988: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ab98c:
    if (ctx->pc == 0x1AB98Cu) {
        ctx->pc = 0x1AB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB988u;
        // 0x1ab98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB990u;
        goto label_1ab990;
    }
    ctx->pc = 0x1AB988u;
    {
        const bool branch_taken_0x1ab988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB988u;
        // 0x1ab98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab988) {
            ctx->pc = 0x1AB9D0u;
            goto label_1ab9d0;
        }
    }
    ctx->pc = 0x1AB990u;
label_1ab990:
    // 0x1ab990: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ab994:
    // 0x1ab994: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab998:
    // 0x1ab998: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1ab99c:
    // 0x1ab99c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab9a0:
    // 0x1ab9a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ab9a4:
    // 0x1ab9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9a8:
    // 0x1ab9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9ac:
    // 0x1ab9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9b0:
    // 0x1ab9b0: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab9b4:
    // 0x1ab9b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab9b8:
    // 0x1ab9b8: 0xc069e2a  jal         func_1A78A8
label_1ab9bc:
    if (ctx->pc == 0x1AB9BCu) {
        ctx->pc = 0x1AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9B8u;
        // 0x1ab9bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9C0u;
        goto label_1ab9c0;
    }
    ctx->pc = 0x1AB9B8u;
    SET_GPR_U32(ctx, 31, 0x1AB9C0u);
    ctx->pc = 0x1AB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9B8u;
    // 0x1ab9bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB9C0u;
label_1ab9c0:
    // 0x1ab9c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ab9c4:
    if (ctx->pc == 0x1AB9C4u) {
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9C0u;
        // 0x1ab9c4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9C8u;
        goto label_1ab9c8;
    }
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB9C0u;
            // 0x1ab9c4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB9D0u;
            goto label_1ab9d0;
        }
    }
    ctx->pc = 0x1AB9C8u;
label_1ab9c8:
    // 0x1ab9c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ab9cc:
    // 0x1ab9cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ab9d0:
    // 0x1ab9d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab9d4:
    // 0x1ab9d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab9d8:
    // 0x1ab9d8: 0x3e00008  jr          $ra
label_1ab9dc:
    if (ctx->pc == 0x1AB9DCu) {
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9E0u;
        goto label_1ab9e0;
    }
    ctx->pc = 0x1AB9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB9E0u;
label_1ab9e0:
    // 0x1ab9e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab9e4:
    // 0x1ab9e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab9e8:
    // 0x1ab9e8: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab9ec:
    // 0x1ab9ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab9f0:
    // 0x1ab9f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab9f4:
    if (ctx->pc == 0x1AB9F4u) {
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F0u;
        // 0x1ab9f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9F8u;
        goto label_1ab9f8;
    }
    ctx->pc = 0x1AB9F0u;
    {
        const bool branch_taken_0x1ab9f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F0u;
        // 0x1ab9f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f0) {
            ctx->pc = 0x1ABA00u;
            goto label_1aba00;
        }
    }
    ctx->pc = 0x1AB9F8u;
label_1ab9f8:
    // 0x1ab9f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ab9fc:
    if (ctx->pc == 0x1AB9FCu) {
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F8u;
        // 0x1ab9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA00u;
        goto label_1aba00;
    }
    ctx->pc = 0x1AB9F8u;
    {
        const bool branch_taken_0x1ab9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F8u;
        // 0x1ab9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f8) {
            ctx->pc = 0x1ABA40u;
            { ctx->pc = 0x1aba40; return; }
        }
    }
    ctx->pc = 0x1ABA00u;
label_1aba00:
    // 0x1aba00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aba00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aba04:
    // 0x1aba04: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aba08:
    // 0x1aba08: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1aba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1aba0c:
    // 0x1aba0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aba10:
    // 0x1aba10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aba14:
    // 0x1aba14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba18:
    // 0x1aba18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba1c:
    // 0x1aba1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aba1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aba20u;
    return;
}

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


void FUN_0017faa0_part131(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bf240u: goto label_1bf240;
        case 0x1bf244u: goto label_1bf244;
        case 0x1bf248u: goto label_1bf248;
        case 0x1bf24cu: goto label_1bf24c;
        case 0x1bf250u: goto label_1bf250;
        case 0x1bf254u: goto label_1bf254;
        case 0x1bf258u: goto label_1bf258;
        case 0x1bf25cu: goto label_1bf25c;
        case 0x1bf260u: goto label_1bf260;
        case 0x1bf264u: goto label_1bf264;
        case 0x1bf268u: goto label_1bf268;
        case 0x1bf26cu: goto label_1bf26c;
        case 0x1bf270u: goto label_1bf270;
        case 0x1bf274u: goto label_1bf274;
        case 0x1bf278u: goto label_1bf278;
        case 0x1bf27cu: goto label_1bf27c;
        case 0x1bf280u: goto label_1bf280;
        case 0x1bf284u: goto label_1bf284;
        case 0x1bf288u: goto label_1bf288;
        case 0x1bf28cu: goto label_1bf28c;
        case 0x1bf290u: goto label_1bf290;
        case 0x1bf294u: goto label_1bf294;
        case 0x1bf298u: goto label_1bf298;
        case 0x1bf29cu: goto label_1bf29c;
        case 0x1bf2a0u: goto label_1bf2a0;
        case 0x1bf2a4u: goto label_1bf2a4;
        case 0x1bf2a8u: goto label_1bf2a8;
        case 0x1bf2acu: goto label_1bf2ac;
        case 0x1bf2b0u: goto label_1bf2b0;
        case 0x1bf2b4u: goto label_1bf2b4;
        case 0x1bf2b8u: goto label_1bf2b8;
        case 0x1bf2bcu: goto label_1bf2bc;
        case 0x1bf2c0u: goto label_1bf2c0;
        case 0x1bf2c4u: goto label_1bf2c4;
        case 0x1bf2c8u: goto label_1bf2c8;
        case 0x1bf2ccu: goto label_1bf2cc;
        case 0x1bf2d0u: goto label_1bf2d0;
        case 0x1bf2d4u: goto label_1bf2d4;
        case 0x1bf2d8u: goto label_1bf2d8;
        case 0x1bf2dcu: goto label_1bf2dc;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2e4u: goto label_1bf2e4;
        case 0x1bf2e8u: goto label_1bf2e8;
        case 0x1bf2ecu: goto label_1bf2ec;
        case 0x1bf2f0u: goto label_1bf2f0;
        case 0x1bf2f4u: goto label_1bf2f4;
        case 0x1bf2f8u: goto label_1bf2f8;
        case 0x1bf2fcu: goto label_1bf2fc;
        case 0x1bf300u: goto label_1bf300;
        case 0x1bf304u: goto label_1bf304;
        case 0x1bf308u: goto label_1bf308;
        case 0x1bf30cu: goto label_1bf30c;
        case 0x1bf310u: goto label_1bf310;
        case 0x1bf314u: goto label_1bf314;
        case 0x1bf318u: goto label_1bf318;
        case 0x1bf31cu: goto label_1bf31c;
        case 0x1bf320u: goto label_1bf320;
        case 0x1bf324u: goto label_1bf324;
        case 0x1bf328u: goto label_1bf328;
        case 0x1bf32cu: goto label_1bf32c;
        case 0x1bf330u: goto label_1bf330;
        case 0x1bf334u: goto label_1bf334;
        case 0x1bf338u: goto label_1bf338;
        case 0x1bf33cu: goto label_1bf33c;
        case 0x1bf340u: goto label_1bf340;
        case 0x1bf344u: goto label_1bf344;
        case 0x1bf348u: goto label_1bf348;
        case 0x1bf34cu: goto label_1bf34c;
        case 0x1bf350u: goto label_1bf350;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf358u: goto label_1bf358;
        case 0x1bf35cu: goto label_1bf35c;
        case 0x1bf360u: goto label_1bf360;
        case 0x1bf364u: goto label_1bf364;
        case 0x1bf368u: goto label_1bf368;
        case 0x1bf36cu: goto label_1bf36c;
        case 0x1bf370u: goto label_1bf370;
        case 0x1bf374u: goto label_1bf374;
        case 0x1bf378u: goto label_1bf378;
        case 0x1bf37cu: goto label_1bf37c;
        case 0x1bf380u: goto label_1bf380;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf388u: goto label_1bf388;
        case 0x1bf38cu: goto label_1bf38c;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf394u: goto label_1bf394;
        case 0x1bf398u: goto label_1bf398;
        case 0x1bf39cu: goto label_1bf39c;
        case 0x1bf3a0u: goto label_1bf3a0;
        case 0x1bf3a4u: goto label_1bf3a4;
        case 0x1bf3a8u: goto label_1bf3a8;
        case 0x1bf3acu: goto label_1bf3ac;
        case 0x1bf3b0u: goto label_1bf3b0;
        case 0x1bf3b4u: goto label_1bf3b4;
        case 0x1bf3b8u: goto label_1bf3b8;
        case 0x1bf3bcu: goto label_1bf3bc;
        case 0x1bf3c0u: goto label_1bf3c0;
        case 0x1bf3c4u: goto label_1bf3c4;
        case 0x1bf3c8u: goto label_1bf3c8;
        case 0x1bf3ccu: goto label_1bf3cc;
        case 0x1bf3d0u: goto label_1bf3d0;
        case 0x1bf3d4u: goto label_1bf3d4;
        case 0x1bf3d8u: goto label_1bf3d8;
        case 0x1bf3dcu: goto label_1bf3dc;
        case 0x1bf3e0u: goto label_1bf3e0;
        case 0x1bf3e4u: goto label_1bf3e4;
        case 0x1bf3e8u: goto label_1bf3e8;
        case 0x1bf3ecu: goto label_1bf3ec;
        case 0x1bf3f0u: goto label_1bf3f0;
        case 0x1bf3f4u: goto label_1bf3f4;
        case 0x1bf3f8u: goto label_1bf3f8;
        case 0x1bf3fcu: goto label_1bf3fc;
        case 0x1bf400u: goto label_1bf400;
        case 0x1bf404u: goto label_1bf404;
        case 0x1bf408u: goto label_1bf408;
        case 0x1bf40cu: goto label_1bf40c;
        case 0x1bf410u: goto label_1bf410;
        case 0x1bf414u: goto label_1bf414;
        case 0x1bf418u: goto label_1bf418;
        case 0x1bf41cu: goto label_1bf41c;
        case 0x1bf420u: goto label_1bf420;
        case 0x1bf424u: goto label_1bf424;
        case 0x1bf428u: goto label_1bf428;
        case 0x1bf42cu: goto label_1bf42c;
        case 0x1bf430u: goto label_1bf430;
        case 0x1bf434u: goto label_1bf434;
        case 0x1bf438u: goto label_1bf438;
        case 0x1bf43cu: goto label_1bf43c;
        case 0x1bf440u: goto label_1bf440;
        case 0x1bf444u: goto label_1bf444;
        case 0x1bf448u: goto label_1bf448;
        case 0x1bf44cu: goto label_1bf44c;
        case 0x1bf450u: goto label_1bf450;
        case 0x1bf454u: goto label_1bf454;
        case 0x1bf458u: goto label_1bf458;
        case 0x1bf45cu: goto label_1bf45c;
        case 0x1bf460u: goto label_1bf460;
        case 0x1bf464u: goto label_1bf464;
        case 0x1bf468u: goto label_1bf468;
        case 0x1bf46cu: goto label_1bf46c;
        case 0x1bf470u: goto label_1bf470;
        case 0x1bf474u: goto label_1bf474;
        case 0x1bf478u: goto label_1bf478;
        case 0x1bf47cu: goto label_1bf47c;
        case 0x1bf480u: goto label_1bf480;
        case 0x1bf484u: goto label_1bf484;
        case 0x1bf488u: goto label_1bf488;
        case 0x1bf48cu: goto label_1bf48c;
        case 0x1bf490u: goto label_1bf490;
        case 0x1bf494u: goto label_1bf494;
        case 0x1bf498u: goto label_1bf498;
        case 0x1bf49cu: goto label_1bf49c;
        case 0x1bf4a0u: goto label_1bf4a0;
        case 0x1bf4a4u: goto label_1bf4a4;
        case 0x1bf4a8u: goto label_1bf4a8;
        case 0x1bf4acu: goto label_1bf4ac;
        case 0x1bf4b0u: goto label_1bf4b0;
        case 0x1bf4b4u: goto label_1bf4b4;
        case 0x1bf4b8u: goto label_1bf4b8;
        case 0x1bf4bcu: goto label_1bf4bc;
        case 0x1bf4c0u: goto label_1bf4c0;
        case 0x1bf4c4u: goto label_1bf4c4;
        case 0x1bf4c8u: goto label_1bf4c8;
        case 0x1bf4ccu: goto label_1bf4cc;
        case 0x1bf4d0u: goto label_1bf4d0;
        case 0x1bf4d4u: goto label_1bf4d4;
        case 0x1bf4d8u: goto label_1bf4d8;
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf4e0u: goto label_1bf4e0;
        case 0x1bf4e4u: goto label_1bf4e4;
        case 0x1bf4e8u: goto label_1bf4e8;
        case 0x1bf4ecu: goto label_1bf4ec;
        case 0x1bf4f0u: goto label_1bf4f0;
        case 0x1bf4f4u: goto label_1bf4f4;
        case 0x1bf4f8u: goto label_1bf4f8;
        case 0x1bf4fcu: goto label_1bf4fc;
        case 0x1bf500u: goto label_1bf500;
        case 0x1bf504u: goto label_1bf504;
        case 0x1bf508u: goto label_1bf508;
        case 0x1bf50cu: goto label_1bf50c;
        case 0x1bf510u: goto label_1bf510;
        case 0x1bf514u: goto label_1bf514;
        case 0x1bf518u: goto label_1bf518;
        case 0x1bf51cu: goto label_1bf51c;
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf524u: goto label_1bf524;
        case 0x1bf528u: goto label_1bf528;
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf530u: goto label_1bf530;
        case 0x1bf534u: goto label_1bf534;
        case 0x1bf538u: goto label_1bf538;
        case 0x1bf53cu: goto label_1bf53c;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf548u: goto label_1bf548;
        case 0x1bf54cu: goto label_1bf54c;
        case 0x1bf550u: goto label_1bf550;
        case 0x1bf554u: goto label_1bf554;
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf55cu: goto label_1bf55c;
        case 0x1bf560u: goto label_1bf560;
        case 0x1bf564u: goto label_1bf564;
        case 0x1bf568u: goto label_1bf568;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf570u: goto label_1bf570;
        case 0x1bf574u: goto label_1bf574;
        case 0x1bf578u: goto label_1bf578;
        case 0x1bf57cu: goto label_1bf57c;
        case 0x1bf580u: goto label_1bf580;
        case 0x1bf584u: goto label_1bf584;
        case 0x1bf588u: goto label_1bf588;
        case 0x1bf58cu: goto label_1bf58c;
        case 0x1bf590u: goto label_1bf590;
        case 0x1bf594u: goto label_1bf594;
        case 0x1bf598u: goto label_1bf598;
        case 0x1bf59cu: goto label_1bf59c;
        case 0x1bf5a0u: goto label_1bf5a0;
        case 0x1bf5a4u: goto label_1bf5a4;
        case 0x1bf5a8u: goto label_1bf5a8;
        case 0x1bf5acu: goto label_1bf5ac;
        case 0x1bf5b0u: goto label_1bf5b0;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5b8u: goto label_1bf5b8;
        case 0x1bf5bcu: goto label_1bf5bc;
        case 0x1bf5c0u: goto label_1bf5c0;
        case 0x1bf5c4u: goto label_1bf5c4;
        case 0x1bf5c8u: goto label_1bf5c8;
        case 0x1bf5ccu: goto label_1bf5cc;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf5d4u: goto label_1bf5d4;
        case 0x1bf5d8u: goto label_1bf5d8;
        case 0x1bf5dcu: goto label_1bf5dc;
        case 0x1bf5e0u: goto label_1bf5e0;
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5e8u: goto label_1bf5e8;
        case 0x1bf5ecu: goto label_1bf5ec;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf5f4u: goto label_1bf5f4;
        case 0x1bf5f8u: goto label_1bf5f8;
        case 0x1bf5fcu: goto label_1bf5fc;
        case 0x1bf600u: goto label_1bf600;
        case 0x1bf604u: goto label_1bf604;
        case 0x1bf608u: goto label_1bf608;
        case 0x1bf60cu: goto label_1bf60c;
        case 0x1bf610u: goto label_1bf610;
        case 0x1bf614u: goto label_1bf614;
        case 0x1bf618u: goto label_1bf618;
        case 0x1bf61cu: goto label_1bf61c;
        case 0x1bf620u: goto label_1bf620;
        case 0x1bf624u: goto label_1bf624;
        case 0x1bf628u: goto label_1bf628;
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf634u: goto label_1bf634;
        case 0x1bf638u: goto label_1bf638;
        case 0x1bf63cu: goto label_1bf63c;
        case 0x1bf640u: goto label_1bf640;
        case 0x1bf644u: goto label_1bf644;
        case 0x1bf648u: goto label_1bf648;
        case 0x1bf64cu: goto label_1bf64c;
        case 0x1bf650u: goto label_1bf650;
        case 0x1bf654u: goto label_1bf654;
        case 0x1bf658u: goto label_1bf658;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf660u: goto label_1bf660;
        case 0x1bf664u: goto label_1bf664;
        case 0x1bf668u: goto label_1bf668;
        case 0x1bf66cu: goto label_1bf66c;
        case 0x1bf670u: goto label_1bf670;
        case 0x1bf674u: goto label_1bf674;
        case 0x1bf678u: goto label_1bf678;
        case 0x1bf67cu: goto label_1bf67c;
        case 0x1bf680u: goto label_1bf680;
        case 0x1bf684u: goto label_1bf684;
        case 0x1bf688u: goto label_1bf688;
        case 0x1bf68cu: goto label_1bf68c;
        case 0x1bf690u: goto label_1bf690;
        case 0x1bf694u: goto label_1bf694;
        case 0x1bf698u: goto label_1bf698;
        case 0x1bf69cu: goto label_1bf69c;
        case 0x1bf6a0u: goto label_1bf6a0;
        case 0x1bf6a4u: goto label_1bf6a4;
        case 0x1bf6a8u: goto label_1bf6a8;
        case 0x1bf6acu: goto label_1bf6ac;
        case 0x1bf6b0u: goto label_1bf6b0;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6b8u: goto label_1bf6b8;
        case 0x1bf6bcu: goto label_1bf6bc;
        case 0x1bf6c0u: goto label_1bf6c0;
        case 0x1bf6c4u: goto label_1bf6c4;
        case 0x1bf6c8u: goto label_1bf6c8;
        case 0x1bf6ccu: goto label_1bf6cc;
        case 0x1bf6d0u: goto label_1bf6d0;
        case 0x1bf6d4u: goto label_1bf6d4;
        case 0x1bf6d8u: goto label_1bf6d8;
        case 0x1bf6dcu: goto label_1bf6dc;
        case 0x1bf6e0u: goto label_1bf6e0;
        case 0x1bf6e4u: goto label_1bf6e4;
        case 0x1bf6e8u: goto label_1bf6e8;
        case 0x1bf6ecu: goto label_1bf6ec;
        case 0x1bf6f0u: goto label_1bf6f0;
        case 0x1bf6f4u: goto label_1bf6f4;
        case 0x1bf6f8u: goto label_1bf6f8;
        case 0x1bf6fcu: goto label_1bf6fc;
        case 0x1bf700u: goto label_1bf700;
        case 0x1bf704u: goto label_1bf704;
        case 0x1bf708u: goto label_1bf708;
        case 0x1bf70cu: goto label_1bf70c;
        case 0x1bf710u: goto label_1bf710;
        case 0x1bf714u: goto label_1bf714;
        case 0x1bf718u: goto label_1bf718;
        case 0x1bf71cu: goto label_1bf71c;
        case 0x1bf720u: goto label_1bf720;
        case 0x1bf724u: goto label_1bf724;
        case 0x1bf728u: goto label_1bf728;
        case 0x1bf72cu: goto label_1bf72c;
        case 0x1bf730u: goto label_1bf730;
        case 0x1bf734u: goto label_1bf734;
        case 0x1bf738u: goto label_1bf738;
        case 0x1bf73cu: goto label_1bf73c;
        case 0x1bf740u: goto label_1bf740;
        case 0x1bf744u: goto label_1bf744;
        case 0x1bf748u: goto label_1bf748;
        case 0x1bf74cu: goto label_1bf74c;
        case 0x1bf750u: goto label_1bf750;
        case 0x1bf754u: goto label_1bf754;
        case 0x1bf758u: goto label_1bf758;
        case 0x1bf75cu: goto label_1bf75c;
        case 0x1bf760u: goto label_1bf760;
        case 0x1bf764u: goto label_1bf764;
        case 0x1bf768u: goto label_1bf768;
        case 0x1bf76cu: goto label_1bf76c;
        case 0x1bf770u: goto label_1bf770;
        case 0x1bf774u: goto label_1bf774;
        case 0x1bf778u: goto label_1bf778;
        case 0x1bf77cu: goto label_1bf77c;
        case 0x1bf780u: goto label_1bf780;
        case 0x1bf784u: goto label_1bf784;
        case 0x1bf788u: goto label_1bf788;
        case 0x1bf78cu: goto label_1bf78c;
        case 0x1bf790u: goto label_1bf790;
        case 0x1bf794u: goto label_1bf794;
        case 0x1bf798u: goto label_1bf798;
        case 0x1bf79cu: goto label_1bf79c;
        case 0x1bf7a0u: goto label_1bf7a0;
        case 0x1bf7a4u: goto label_1bf7a4;
        case 0x1bf7a8u: goto label_1bf7a8;
        case 0x1bf7acu: goto label_1bf7ac;
        case 0x1bf7b0u: goto label_1bf7b0;
        case 0x1bf7b4u: goto label_1bf7b4;
        case 0x1bf7b8u: goto label_1bf7b8;
        case 0x1bf7bcu: goto label_1bf7bc;
        case 0x1bf7c0u: goto label_1bf7c0;
        case 0x1bf7c4u: goto label_1bf7c4;
        case 0x1bf7c8u: goto label_1bf7c8;
        case 0x1bf7ccu: goto label_1bf7cc;
        case 0x1bf7d0u: goto label_1bf7d0;
        case 0x1bf7d4u: goto label_1bf7d4;
        case 0x1bf7d8u: goto label_1bf7d8;
        case 0x1bf7dcu: goto label_1bf7dc;
        case 0x1bf7e0u: goto label_1bf7e0;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf7e8u: goto label_1bf7e8;
        case 0x1bf7ecu: goto label_1bf7ec;
        case 0x1bf7f0u: goto label_1bf7f0;
        case 0x1bf7f4u: goto label_1bf7f4;
        case 0x1bf7f8u: goto label_1bf7f8;
        case 0x1bf7fcu: goto label_1bf7fc;
        case 0x1bf800u: goto label_1bf800;
        case 0x1bf804u: goto label_1bf804;
        case 0x1bf808u: goto label_1bf808;
        case 0x1bf80cu: goto label_1bf80c;
        case 0x1bf810u: goto label_1bf810;
        case 0x1bf814u: goto label_1bf814;
        case 0x1bf818u: goto label_1bf818;
        case 0x1bf81cu: goto label_1bf81c;
        case 0x1bf820u: goto label_1bf820;
        case 0x1bf824u: goto label_1bf824;
        case 0x1bf828u: goto label_1bf828;
        case 0x1bf82cu: goto label_1bf82c;
        case 0x1bf830u: goto label_1bf830;
        case 0x1bf834u: goto label_1bf834;
        case 0x1bf838u: goto label_1bf838;
        case 0x1bf83cu: goto label_1bf83c;
        case 0x1bf840u: goto label_1bf840;
        case 0x1bf844u: goto label_1bf844;
        case 0x1bf848u: goto label_1bf848;
        case 0x1bf84cu: goto label_1bf84c;
        case 0x1bf850u: goto label_1bf850;
        case 0x1bf854u: goto label_1bf854;
        case 0x1bf858u: goto label_1bf858;
        case 0x1bf85cu: goto label_1bf85c;
        case 0x1bf860u: goto label_1bf860;
        case 0x1bf864u: goto label_1bf864;
        case 0x1bf868u: goto label_1bf868;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf870u: goto label_1bf870;
        case 0x1bf874u: goto label_1bf874;
        case 0x1bf878u: goto label_1bf878;
        case 0x1bf87cu: goto label_1bf87c;
        case 0x1bf880u: goto label_1bf880;
        case 0x1bf884u: goto label_1bf884;
        case 0x1bf888u: goto label_1bf888;
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf890u: goto label_1bf890;
        case 0x1bf894u: goto label_1bf894;
        case 0x1bf898u: goto label_1bf898;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8a0u: goto label_1bf8a0;
        case 0x1bf8a4u: goto label_1bf8a4;
        case 0x1bf8a8u: goto label_1bf8a8;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b0u: goto label_1bf8b0;
        case 0x1bf8b4u: goto label_1bf8b4;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c0u: goto label_1bf8c0;
        case 0x1bf8c4u: goto label_1bf8c4;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8ccu: goto label_1bf8cc;
        case 0x1bf8d0u: goto label_1bf8d0;
        case 0x1bf8d4u: goto label_1bf8d4;
        case 0x1bf8d8u: goto label_1bf8d8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e0u: goto label_1bf8e0;
        case 0x1bf8e4u: goto label_1bf8e4;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8ecu: goto label_1bf8ec;
        case 0x1bf8f0u: goto label_1bf8f0;
        case 0x1bf8f4u: goto label_1bf8f4;
        case 0x1bf8f8u: goto label_1bf8f8;
        case 0x1bf8fcu: goto label_1bf8fc;
        case 0x1bf900u: goto label_1bf900;
        case 0x1bf904u: goto label_1bf904;
        case 0x1bf908u: goto label_1bf908;
        case 0x1bf90cu: goto label_1bf90c;
        case 0x1bf910u: goto label_1bf910;
        case 0x1bf914u: goto label_1bf914;
        case 0x1bf918u: goto label_1bf918;
        case 0x1bf91cu: goto label_1bf91c;
        case 0x1bf920u: goto label_1bf920;
        case 0x1bf924u: goto label_1bf924;
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf92cu: goto label_1bf92c;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        default: return;
    }

label_1bf240:
    if (ctx->pc == 0x1BF240u) {
        ctx->pc = 0x1BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF23Cu;
        // 0x1bf240: 0xe48001ec  swc1        $f0, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF244u;
        goto label_1bf244;
    }
    ctx->pc = 0x1BF23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF23Cu;
        // 0x1bf240: 0xe48001ec  swc1        $f0, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF244u;
label_1bf244:
    // 0x1bf244: 0x0  nop
    ctx->pc = 0x1bf244u;
    // NOP
label_1bf248:
    // 0x1bf248: 0x0  nop
    ctx->pc = 0x1bf248u;
    // NOP
label_1bf24c:
    // 0x1bf24c: 0x0  nop
    ctx->pc = 0x1bf24cu;
    // NOP
label_1bf250:
    // 0x1bf250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bf254:
    // 0x1bf254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bf258:
    // 0x1bf258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bf25c:
    // 0x1bf25c: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1bf25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1bf260:
    // 0x1bf260: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1bf264:
    if (ctx->pc == 0x1BF264u) {
        ctx->pc = 0x1BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF260u;
        // 0x1bf264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF268u;
        goto label_1bf268;
    }
    ctx->pc = 0x1BF260u;
    {
        const bool branch_taken_0x1bf260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF260u;
        // 0x1bf264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf260) {
            ctx->pc = 0x1BF274u;
            goto label_1bf274;
        }
    }
    ctx->pc = 0x1BF268u;
label_1bf268:
    // 0x1bf268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf26c:
    // 0x1bf26c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1bf270:
    if (ctx->pc == 0x1BF270u) {
        ctx->pc = 0x1BF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF26Cu;
        // 0x1bf270: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF274u;
        goto label_1bf274;
    }
    ctx->pc = 0x1BF26Cu;
    {
        const bool branch_taken_0x1bf26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF26Cu;
        // 0x1bf270: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf26c) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF274u;
label_1bf274:
    // 0x1bf274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf278:
    // 0x1bf278: 0x10660048  beq         $v1, $a2, . + 4 + (0x48 << 2)
label_1bf27c:
    if (ctx->pc == 0x1BF27Cu) {
        ctx->pc = 0x1BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF278u;
        // 0x1bf27c: 0x2ca10007  sltiu       $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF280u;
        goto label_1bf280;
    }
    ctx->pc = 0x1BF278u;
    {
        const bool branch_taken_0x1bf278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF278u;
        // 0x1bf27c: 0x2ca10007  sltiu       $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf278) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF280u;
label_1bf280:
    // 0x1bf280: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_1bf284:
    if (ctx->pc == 0x1BF284u) {
        ctx->pc = 0x1BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF280u;
        // 0x1bf284: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF288u;
        goto label_1bf288;
    }
    ctx->pc = 0x1BF280u;
    {
        const bool branch_taken_0x1bf280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF280u;
        // 0x1bf284: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf280) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF288u;
label_1bf288:
    // 0x1bf288: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bf28c:
    // 0x1bf28c: 0x2484b790  addiu       $a0, $a0, -0x4870
    ctx->pc = 0x1bf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948752));
label_1bf290:
    // 0x1bf290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf294:
    // 0x1bf294: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf298:
    // 0x1bf298: 0x600008  jr          $v1
label_1bf29c:
    if (ctx->pc == 0x1BF29Cu) {
        ctx->pc = 0x1BF2A0u;
        goto label_1bf2a0;
    }
    ctx->pc = 0x1BF298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF2A0u: goto label_1bf2a0;
            case 0x1BF2A8u: goto label_1bf2a8;
            case 0x1BF2B0u: goto label_1bf2b0;
            case 0x1BF2BCu: goto label_1bf2bc;
            case 0x1BF2C8u: goto label_1bf2c8;
            case 0x1BF2E8u: goto label_1bf2e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF2A0u;
label_1bf2a0:
    // 0x1bf2a0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1bf2a4:
    if (ctx->pc == 0x1BF2A4u) {
        ctx->pc = 0x1BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A0u;
        // 0x1bf2a4: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2A8u;
        goto label_1bf2a8;
    }
    ctx->pc = 0x1BF2A0u;
    {
        const bool branch_taken_0x1bf2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A0u;
        // 0x1bf2a4: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a0) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2A8u;
label_1bf2a8:
    // 0x1bf2a8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1bf2ac:
    if (ctx->pc == 0x1BF2ACu) {
        ctx->pc = 0x1BF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A8u;
        // 0x1bf2ac: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2B0u;
        goto label_1bf2b0;
    }
    ctx->pc = 0x1BF2A8u;
    {
        const bool branch_taken_0x1bf2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A8u;
        // 0x1bf2ac: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a8) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2B0u;
label_1bf2b0:
    // 0x1bf2b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bf2b4:
    // 0x1bf2b4: 0x10000039  b           . + 4 + (0x39 << 2)
label_1bf2b8:
    if (ctx->pc == 0x1BF2B8u) {
        ctx->pc = 0x1BF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2B4u;
        // 0x1bf2b8: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2BCu;
        goto label_1bf2bc;
    }
    ctx->pc = 0x1BF2B4u;
    {
        const bool branch_taken_0x1bf2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2B4u;
        // 0x1bf2b8: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2b4) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2BCu;
label_1bf2bc:
    // 0x1bf2bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bf2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bf2c0:
    // 0x1bf2c0: 0x10000036  b           . + 4 + (0x36 << 2)
label_1bf2c4:
    if (ctx->pc == 0x1BF2C4u) {
        ctx->pc = 0x1BF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C0u;
        // 0x1bf2c4: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2C8u;
        goto label_1bf2c8;
    }
    ctx->pc = 0x1BF2C0u;
    {
        const bool branch_taken_0x1bf2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C0u;
        // 0x1bf2c4: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2c0) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2C8u;
label_1bf2c8:
    // 0x1bf2c8: 0x92030246  lbu         $v1, 0x246($s0)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 582)));
label_1bf2cc:
    // 0x1bf2cc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1bf2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1bf2d0:
    // 0x1bf2d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1bf2d4:
    if (ctx->pc == 0x1BF2D4u) {
        ctx->pc = 0x1BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D0u;
        // 0x1bf2d4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2D8u;
        goto label_1bf2d8;
    }
    ctx->pc = 0x1BF2D0u;
    {
        const bool branch_taken_0x1bf2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D0u;
        // 0x1bf2d4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2d0) {
            ctx->pc = 0x1BF2E4u;
            goto label_1bf2e4;
        }
    }
    ctx->pc = 0x1BF2D8u;
label_1bf2d8:
    // 0x1bf2d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bf2dc:
    // 0x1bf2dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf2e0:
    if (ctx->pc == 0x1BF2E0u) {
        ctx->pc = 0x1BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2DCu;
        // 0x1bf2e0: 0xa2030246  sb          $v1, 0x246($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2E4u;
        goto label_1bf2e4;
    }
    ctx->pc = 0x1BF2DCu;
    {
        const bool branch_taken_0x1bf2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2DCu;
        // 0x1bf2e0: 0xa2030246  sb          $v1, 0x246($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2dc) {
            ctx->pc = 0x1BF2E8u;
            goto label_1bf2e8;
        }
    }
    ctx->pc = 0x1BF2E4u;
label_1bf2e4:
    // 0x1bf2e4: 0xa2030246  sb          $v1, 0x246($s0)
    ctx->pc = 0x1bf2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 3));
label_1bf2e8:
    // 0x1bf2e8: 0x92030233  lbu         $v1, 0x233($s0)
    ctx->pc = 0x1bf2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_1bf2ec:
    // 0x1bf2ec: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_1bf2f0:
    if (ctx->pc == 0x1BF2F0u) {
        ctx->pc = 0x1BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2ECu;
        // 0x1bf2f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2F4u;
        goto label_1bf2f4;
    }
    ctx->pc = 0x1BF2ECu;
    {
        const bool branch_taken_0x1bf2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2ECu;
        // 0x1bf2f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2ec) {
            ctx->pc = 0x1BF398u;
            goto label_1bf398;
        }
    }
    ctx->pc = 0x1BF2F4u;
label_1bf2f4:
    // 0x1bf2f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bf2f8:
    // 0x1bf2f8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_1bf2fc:
    if (ctx->pc == 0x1BF2FCu) {
        ctx->pc = 0x1BF300u;
        goto label_1bf300;
    }
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF328u;
            goto label_1bf328;
        }
    }
    ctx->pc = 0x1BF300u;
label_1bf300:
    // 0x1bf300: 0xa2020246  sb          $v0, 0x246($s0)
    ctx->pc = 0x1bf300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 2));
label_1bf304:
    // 0x1bf304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf308:
    // 0x1bf308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf30c:
    // 0x1bf30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf310:
    // 0x1bf310: 0xc054388  jal         func_150E20
label_1bf314:
    if (ctx->pc == 0x1BF314u) {
        ctx->pc = 0x1BF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF310u;
        // 0x1bf314: 0xa2020231  sb          $v0, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF318u;
        goto label_1bf318;
    }
    ctx->pc = 0x1BF310u;
    SET_GPR_U32(ctx, 31, 0x1BF318u);
    ctx->pc = 0x1BF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF310u;
    // 0x1bf314: 0xa2020231  sb          $v0, 0x231($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1BF310u, 0x1BF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1bf31c:
    if (ctx->pc == 0x1BF31Cu) {
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF320u;
        goto label_1bf320;
    }
    ctx->pc = 0x1BF318u;
    {
        const bool branch_taken_0x1bf318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf318) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF320u;
label_1bf320:
    // 0x1bf320: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1bf324:
    if (ctx->pc == 0x1BF324u) {
        ctx->pc = 0x1BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF320u;
        // 0x1bf324: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF328u;
        goto label_1bf328;
    }
    ctx->pc = 0x1BF320u;
    {
        const bool branch_taken_0x1bf320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF320u;
        // 0x1bf324: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf320) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF328u;
label_1bf328:
    // 0x1bf328: 0x92030218  lbu         $v1, 0x218($s0)
    ctx->pc = 0x1bf328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 536)));
label_1bf32c:
    // 0x1bf32c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1bf330:
    // 0x1bf330: 0x92020219  lbu         $v0, 0x219($s0)
    ctx->pc = 0x1bf330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 537)));
label_1bf334:
    // 0x1bf334: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bf338:
    // 0x1bf338: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bf338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bf33c:
    // 0x1bf33c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bf340:
    // 0x1bf340: 0xc04494c  jal         func_112530
label_1bf344:
    if (ctx->pc == 0x1BF344u) {
        ctx->pc = 0x1BF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF340u;
        // 0x1bf344: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF348u;
        goto label_1bf348;
    }
    ctx->pc = 0x1BF340u;
    SET_GPR_U32(ctx, 31, 0x1BF348u);
    ctx->pc = 0x1BF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF340u;
    // 0x1bf344: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BF340u, 0x1BF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF348u;
label_1bf348:
    // 0x1bf348: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1bf34c:
    if (ctx->pc == 0x1BF34Cu) {
        ctx->pc = 0x1BF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF348u;
        // 0x1bf34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF350u;
        goto label_1bf350;
    }
    ctx->pc = 0x1BF348u;
    {
        const bool branch_taken_0x1bf348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF348u;
        // 0x1bf34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf348) {
            ctx->pc = 0x1BF36Cu;
            goto label_1bf36c;
        }
    }
    ctx->pc = 0x1BF350u;
label_1bf350:
    // 0x1bf350: 0x9204021a  lbu         $a0, 0x21A($s0)
    ctx->pc = 0x1bf350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 538)));
label_1bf354:
    // 0x1bf354: 0x9205021b  lbu         $a1, 0x21B($s0)
    ctx->pc = 0x1bf354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 539)));
label_1bf358:
    // 0x1bf358: 0xc0449b8  jal         func_1126E0
label_1bf35c:
    if (ctx->pc == 0x1BF35Cu) {
        ctx->pc = 0x1BF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF358u;
        // 0x1bf35c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF360u;
        goto label_1bf360;
    }
    ctx->pc = 0x1BF358u;
    SET_GPR_U32(ctx, 31, 0x1BF360u);
    ctx->pc = 0x1BF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF358u;
    // 0x1bf35c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BF358u, 0x1BF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF360u;
label_1bf360:
    // 0x1bf360: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bf364:
    if (ctx->pc == 0x1BF364u) {
        ctx->pc = 0x1BF368u;
        goto label_1bf368;
    }
    ctx->pc = 0x1BF360u;
    {
        const bool branch_taken_0x1bf360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf360) {
            ctx->pc = 0x1BF374u;
            goto label_1bf374;
        }
    }
    ctx->pc = 0x1BF368u;
label_1bf368:
    // 0x1bf368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf36c:
    // 0x1bf36c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bf370:
    if (ctx->pc == 0x1BF370u) {
        ctx->pc = 0x1BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF36Cu;
        // 0x1bf370: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF374u;
        goto label_1bf374;
    }
    ctx->pc = 0x1BF36Cu;
    {
        const bool branch_taken_0x1bf36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF36Cu;
        // 0x1bf370: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf36c) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF374u;
label_1bf374:
    // 0x1bf374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf378:
    // 0x1bf378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf37c:
    // 0x1bf37c: 0xa2020231  sb          $v0, 0x231($s0)
    ctx->pc = 0x1bf37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
label_1bf380:
    // 0x1bf380: 0xc054388  jal         func_150E20
label_1bf384:
    if (ctx->pc == 0x1BF384u) {
        ctx->pc = 0x1BF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF380u;
        // 0x1bf384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF388u;
        goto label_1bf388;
    }
    ctx->pc = 0x1BF380u;
    SET_GPR_U32(ctx, 31, 0x1BF388u);
    ctx->pc = 0x1BF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF380u;
    // 0x1bf384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1BF380u, 0x1BF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF388u;
label_1bf388:
    // 0x1bf388: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bf38c:
    if (ctx->pc == 0x1BF38Cu) {
        ctx->pc = 0x1BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF388u;
        // 0x1bf38c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF390u;
        goto label_1bf390;
    }
    ctx->pc = 0x1BF388u;
    {
        const bool branch_taken_0x1bf388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF388u;
        // 0x1bf38c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf388) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF390u;
label_1bf390:
    // 0x1bf390: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf394:
    if (ctx->pc == 0x1BF394u) {
        ctx->pc = 0x1BF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF390u;
        // 0x1bf394: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF398u;
        goto label_1bf398;
    }
    ctx->pc = 0x1BF390u;
    {
        const bool branch_taken_0x1bf390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF390u;
        // 0x1bf394: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf390) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF398u;
label_1bf398:
    // 0x1bf398: 0xa2030231  sb          $v1, 0x231($s0)
    ctx->pc = 0x1bf398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
label_1bf39c:
    // 0x1bf39c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf3a0:
    // 0x1bf3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf3a4:
    // 0x1bf3a4: 0x3e00008  jr          $ra
label_1bf3a8:
    if (ctx->pc == 0x1BF3A8u) {
        ctx->pc = 0x1BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A4u;
        // 0x1bf3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3ACu;
        goto label_1bf3ac;
    }
    ctx->pc = 0x1BF3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A4u;
        // 0x1bf3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF3ACu;
label_1bf3ac:
    // 0x1bf3ac: 0x0  nop
    ctx->pc = 0x1bf3acu;
    // NOP
label_1bf3b0:
    // 0x1bf3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bf3b4:
    // 0x1bf3b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bf3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bf3b8:
    // 0x1bf3b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bf3bc:
    // 0x1bf3bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bf3c0:
    // 0x1bf3c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3c4:
    // 0x1bf3c4: 0x14a00071  bnez        $a1, . + 4 + (0x71 << 2)
label_1bf3c8:
    if (ctx->pc == 0x1BF3C8u) {
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C4u;
        // 0x1bf3c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3CCu;
        goto label_1bf3cc;
    }
    ctx->pc = 0x1BF3C4u;
    {
        const bool branch_taken_0x1bf3c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C4u;
        // 0x1bf3c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3c4) {
            ctx->pc = 0x1BF58Cu;
            goto label_1bf58c;
        }
    }
    ctx->pc = 0x1BF3CCu;
label_1bf3cc:
    // 0x1bf3cc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1bf3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf3d0:
    // 0x1bf3d0: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x1bf3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_1bf3d4:
    // 0x1bf3d4: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x1bf3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_1bf3d8:
    // 0x1bf3d8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bf3dc:
    // 0x1bf3dc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1bf3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1bf3e0:
    // 0x1bf3e0: 0x27b1005c  addiu       $s1, $sp, 0x5C
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1bf3e4:
    // 0x1bf3e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bf3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bf3e8:
    // 0x1bf3e8: 0x202800a  movz        $s0, $s0, $v0
    ctx->pc = 0x1bf3e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 16));
label_1bf3ec:
    // 0x1bf3ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bf3ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bf3f0:
    // 0x1bf3f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bf3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bf3f4:
    // 0x1bf3f4: 0x0  nop
    ctx->pc = 0x1bf3f4u;
    // NOP
label_1bf3f8:
    // 0x1bf3f8: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1bf3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf3fc:
    // 0x1bf3fc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1bf3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1bf400:
    // 0x1bf400: 0x0  nop
    ctx->pc = 0x1bf400u;
    // NOP
label_1bf404:
    // 0x1bf404: 0x1010  mfhi        $v0
    ctx->pc = 0x1bf404u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bf408:
    // 0x1bf408: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1bf40c:
    // 0x1bf40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bf410:
    // 0x1bf410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bf410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bf414:
    // 0x1bf414: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1bf414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1bf418:
    // 0x1bf418: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1bf418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf41c:
    // 0x1bf41c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bf41cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bf420:
    // 0x1bf420: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bf420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bf424:
    // 0x1bf424: 0x0  nop
    ctx->pc = 0x1bf424u;
    // NOP
label_1bf428:
    // 0x1bf428: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1bf428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf42c:
    // 0x1bf42c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1bf430:
    // 0x1bf430: 0x0  nop
    ctx->pc = 0x1bf430u;
    // NOP
label_1bf434:
    // 0x1bf434: 0x1010  mfhi        $v0
    ctx->pc = 0x1bf434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bf438:
    // 0x1bf438: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1bf43c:
    // 0x1bf43c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bf440:
    // 0x1bf440: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bf444:
    // 0x1bf444: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bf444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1bf448:
    // 0x1bf448: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bf44c:
    // 0x1bf44c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bf450:
    // 0x1bf450: 0xc0449b8  jal         func_1126E0
label_1bf454:
    if (ctx->pc == 0x1BF454u) {
        ctx->pc = 0x1BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF450u;
        // 0x1bf454: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF458u;
        goto label_1bf458;
    }
    ctx->pc = 0x1BF450u;
    SET_GPR_U32(ctx, 31, 0x1BF458u);
    ctx->pc = 0x1BF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF450u;
    // 0x1bf454: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BF450u, 0x1BF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF458u;
label_1bf458:
    // 0x1bf458: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1bf45c:
    if (ctx->pc == 0x1BF45Cu) {
        ctx->pc = 0x1BF460u;
        goto label_1bf460;
    }
    ctx->pc = 0x1BF458u;
    {
        const bool branch_taken_0x1bf458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf458) {
            ctx->pc = 0x1BF554u;
            goto label_1bf554;
        }
    }
    ctx->pc = 0x1BF460u;
label_1bf460:
    // 0x1bf460: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bf464:
    // 0x1bf464: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bf468:
    // 0x1bf468: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bf46c:
    // 0x1bf46c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bf46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bf470:
    // 0x1bf470: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bf470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1bf474:
    // 0x1bf474: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1bf474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf478:
    // 0x1bf478: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bf47c:
    // 0x1bf47c: 0x0  nop
    ctx->pc = 0x1bf47cu;
    // NOP
label_1bf480:
    // 0x1bf480: 0x1810  mfhi        $v1
    ctx->pc = 0x1bf480u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bf484:
    // 0x1bf484: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1bf488:
    // 0x1bf488: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bf488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf48c:
    // 0x1bf48c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bf490:
    // 0x1bf490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf494:
    // 0x1bf494: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1bf494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1bf498:
    // 0x1bf498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bf49c:
    // 0x1bf49c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1bf49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf4a0:
    // 0x1bf4a0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bf4a4:
    // 0x1bf4a4: 0x0  nop
    ctx->pc = 0x1bf4a4u;
    // NOP
label_1bf4a8:
    // 0x1bf4a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bf4ac:
    // 0x1bf4ac: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bf4acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1bf4b0:
    // 0x1bf4b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf4b4:
    // 0x1bf4b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bf4b8:
    // 0x1bf4b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf4bc:
    // 0x1bf4bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bf4c0:
    if (ctx->pc == 0x1BF4C0u) {
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF4C4u;
        goto label_1bf4c4;
    }
    ctx->pc = 0x1BF4BCu;
    {
        const bool branch_taken_0x1bf4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4bc) {
            ctx->pc = 0x1BF4D0u;
            goto label_1bf4d0;
        }
    }
    ctx->pc = 0x1BF4C4u;
label_1bf4c4:
    // 0x1bf4c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bf4c8:
    // 0x1bf4c8: 0x8c224968  lw          $v0, 0x4968($at)
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1bf4cc:
    // 0x1bf4cc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1bf4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1bf4d0:
    // 0x1bf4d0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bf4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bf4d4:
    // 0x1bf4d4: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bf4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bf4d8:
    // 0x1bf4d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bf4dc:
    if (ctx->pc == 0x1BF4DCu) {
        ctx->pc = 0x1BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4D8u;
        // 0x1bf4dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF4E0u;
        goto label_1bf4e0;
    }
    ctx->pc = 0x1BF4D8u;
    {
        const bool branch_taken_0x1bf4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4D8u;
        // 0x1bf4dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4d8) {
            ctx->pc = 0x1BF4ECu;
            goto label_1bf4ec;
        }
    }
    ctx->pc = 0x1BF4E0u;
label_1bf4e0:
    // 0x1bf4e0: 0x8c2249f8  lw          $v0, 0x49F8($at)
    ctx->pc = 0x1bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1bf4e4:
    // 0x1bf4e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf4e8:
    if (ctx->pc == 0x1BF4E8u) {
        ctx->pc = 0x1BF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4E4u;
        // 0x1bf4e8: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF4ECu;
        goto label_1bf4ec;
    }
    ctx->pc = 0x1BF4E4u;
    {
        const bool branch_taken_0x1bf4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4E4u;
        // 0x1bf4e8: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4e4) {
            ctx->pc = 0x1BF4F0u;
            goto label_1bf4f0;
        }
    }
    ctx->pc = 0x1BF4ECu;
label_1bf4ec:
    // 0x1bf4ec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bf4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1bf4f0:
    // 0x1bf4f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf4f4:
    // 0x1bf4f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bf4f8:
    // 0x1bf4f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bf4fc:
    // 0x1bf4fc: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1bf500:
    // 0x1bf500: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bf500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf504:
    // 0x1bf504: 0xc06fd6c  jal         func_1BF5B0
label_1bf508:
    if (ctx->pc == 0x1BF508u) {
        ctx->pc = 0x1BF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF504u;
        // 0x1bf508: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF50Cu;
        goto label_1bf50c;
    }
    ctx->pc = 0x1BF504u;
    SET_GPR_U32(ctx, 31, 0x1BF50Cu);
    ctx->pc = 0x1BF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF504u;
    // 0x1bf508: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5B0u;
    goto label_1bf5b0;
    ctx->pc = 0x1BF50Cu;
label_1bf50c:
    // 0x1bf50c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1bf510:
    if (ctx->pc == 0x1BF510u) {
        ctx->pc = 0x1BF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF50Cu;
        // 0x1bf510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF514u;
        goto label_1bf514;
    }
    ctx->pc = 0x1BF50Cu;
    {
        const bool branch_taken_0x1bf50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF50Cu;
        // 0x1bf510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf50c) {
            ctx->pc = 0x1BF58Cu;
            goto label_1bf58c;
        }
    }
    ctx->pc = 0x1BF514u;
label_1bf514:
    // 0x1bf514: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bf518:
    // 0x1bf518: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1bf518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bf51c:
    // 0x1bf51c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1bf51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1bf520:
    // 0x1bf520: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bf520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf524:
    // 0x1bf524: 0xc06fd6c  jal         func_1BF5B0
label_1bf528:
    if (ctx->pc == 0x1BF528u) {
        ctx->pc = 0x1BF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF524u;
        // 0x1bf528: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF52Cu;
        goto label_1bf52c;
    }
    ctx->pc = 0x1BF524u;
    SET_GPR_U32(ctx, 31, 0x1BF52Cu);
    ctx->pc = 0x1BF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF524u;
    // 0x1bf528: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5B0u;
    goto label_1bf5b0;
    ctx->pc = 0x1BF52Cu;
label_1bf52c:
    // 0x1bf52c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1bf530:
    if (ctx->pc == 0x1BF530u) {
        ctx->pc = 0x1BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF52Cu;
        // 0x1bf530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF534u;
        goto label_1bf534;
    }
    ctx->pc = 0x1BF52Cu;
    {
        const bool branch_taken_0x1bf52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF52Cu;
        // 0x1bf530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf52c) {
            ctx->pc = 0x1BF58Cu;
            goto label_1bf58c;
        }
    }
    ctx->pc = 0x1BF534u;
label_1bf534:
    // 0x1bf534: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bf534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf538:
    // 0x1bf538: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1bf538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bf53c:
    // 0x1bf53c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1bf53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bf540:
    // 0x1bf540: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1bf544:
    // 0x1bf544: 0xc06fd6c  jal         func_1BF5B0
label_1bf548:
    if (ctx->pc == 0x1BF548u) {
        ctx->pc = 0x1BF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF544u;
        // 0x1bf548: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF54Cu;
        goto label_1bf54c;
    }
    ctx->pc = 0x1BF544u;
    SET_GPR_U32(ctx, 31, 0x1BF54Cu);
    ctx->pc = 0x1BF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF544u;
    // 0x1bf548: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5B0u;
    goto label_1bf5b0;
    ctx->pc = 0x1BF54Cu;
label_1bf54c:
    // 0x1bf54c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1bf550:
    if (ctx->pc == 0x1BF550u) {
        ctx->pc = 0x1BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF54Cu;
        // 0x1bf550: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF554u;
        goto label_1bf554;
    }
    ctx->pc = 0x1BF54Cu;
    {
        const bool branch_taken_0x1bf54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF54Cu;
        // 0x1bf550: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf54c) {
            ctx->pc = 0x1BF590u;
            goto label_1bf590;
        }
    }
    ctx->pc = 0x1BF554u;
label_1bf554:
    // 0x1bf554: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bf554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf558:
    // 0x1bf558: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1bf55c:
    // 0x1bf55c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bf55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf560:
    // 0x1bf560: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1bf564:
    // 0x1bf564: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bf564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf568:
    // 0x1bf568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf56c:
    // 0x1bf56c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1bf570:
    // 0x1bf570: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bf570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1bf574:
    // 0x1bf574: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1bf574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1bf578:
    // 0x1bf578: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bf578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf57c:
    // 0x1bf57c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf580:
    // 0x1bf580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1bf584:
    // 0x1bf584: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bf584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1bf588:
    // 0x1bf588: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1bf588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1bf58c:
    // 0x1bf58c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bf58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf590:
    // 0x1bf590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf594:
    // 0x1bf594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf598:
    // 0x1bf598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf59c:
    // 0x1bf59c: 0x3e00008  jr          $ra
label_1bf5a0:
    if (ctx->pc == 0x1BF5A0u) {
        ctx->pc = 0x1BF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF59Cu;
        // 0x1bf5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5A4u;
        goto label_1bf5a4;
    }
    ctx->pc = 0x1BF59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF59Cu;
        // 0x1bf5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF5A4u;
label_1bf5a4:
    // 0x1bf5a4: 0x0  nop
    ctx->pc = 0x1bf5a4u;
    // NOP
label_1bf5a8:
    // 0x1bf5a8: 0x0  nop
    ctx->pc = 0x1bf5a8u;
    // NOP
label_1bf5ac:
    // 0x1bf5ac: 0x0  nop
    ctx->pc = 0x1bf5acu;
    // NOP
label_1bf5b0:
    // 0x1bf5b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bf5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1bf5b4:
    // 0x1bf5b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bf5b8:
    // 0x1bf5b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bf5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1bf5bc:
    // 0x1bf5bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bf5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1bf5c0:
    // 0x1bf5c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bf5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1bf5c4:
    // 0x1bf5c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1bf5c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5c8:
    // 0x1bf5c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bf5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bf5cc:
    // 0x1bf5cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1bf5ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5d0:
    // 0x1bf5d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bf5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bf5d4:
    // 0x1bf5d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bf5d8:
    // 0x1bf5d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bf5dc:
    // 0x1bf5dc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1bf5dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5e0:
    // 0x1bf5e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bf5e4:
    // 0x1bf5e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bf5e8:
    // 0x1bf5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bf5ec:
    // 0x1bf5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bf5f0:
    // 0x1bf5f0: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x1bf5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
label_1bf5f4:
    // 0x1bf5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5f8:
    // 0x1bf5f8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1bf5fc:
    // 0x1bf5fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1bf600:
    // 0x1bf600: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1bf600u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bf604:
    // 0x1bf604: 0x0  nop
    ctx->pc = 0x1bf604u;
    // NOP
label_1bf608:
    // 0x1bf608: 0x0  nop
    ctx->pc = 0x1bf608u;
    // NOP
label_1bf60c:
    // 0x1bf60c: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf60cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bf610:
    // 0x1bf610: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1bf610u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bf614:
    // 0x1bf614: 0x0  nop
    ctx->pc = 0x1bf614u;
    // NOP
label_1bf618:
    // 0x1bf618: 0x0  nop
    ctx->pc = 0x1bf618u;
    // NOP
label_1bf61c:
    // 0x1bf61c: 0x2010  mfhi        $a0
    ctx->pc = 0x1bf61cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bf620:
    // 0x1bf620: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bf624:
    // 0x1bf624: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bf628:
    // 0x1bf628: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
label_1bf62c:
    if (ctx->pc == 0x1BF62Cu) {
        ctx->pc = 0x1BF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF628u;
        // 0x1bf62c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF630u;
        goto label_1bf630;
    }
    ctx->pc = 0x1BF628u;
    {
        const bool branch_taken_0x1bf628 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF628u;
        // 0x1bf62c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf628) {
            ctx->pc = 0x1BF638u;
            goto label_1bf638;
        }
    }
    ctx->pc = 0x1BF630u;
label_1bf630:
    // 0x1bf630: 0x10000014  b           . + 4 + (0x14 << 2)
label_1bf634:
    if (ctx->pc == 0x1BF634u) {
        ctx->pc = 0x1BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF630u;
        // 0x1bf634: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF638u;
        goto label_1bf638;
    }
    ctx->pc = 0x1BF630u;
    {
        const bool branch_taken_0x1bf630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF630u;
        // 0x1bf634: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf630) {
            ctx->pc = 0x1BF684u;
            goto label_1bf684;
        }
    }
    ctx->pc = 0x1BF638u;
label_1bf638:
    // 0x1bf638: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bf63c:
    // 0x1bf63c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1bf63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1bf640:
    // 0x1bf640: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1bf644:
    if (ctx->pc == 0x1BF644u) {
        ctx->pc = 0x1BF648u;
        goto label_1bf648;
    }
    ctx->pc = 0x1BF640u;
    {
        const bool branch_taken_0x1bf640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf640) {
            ctx->pc = 0x1BF668u;
            goto label_1bf668;
        }
    }
    ctx->pc = 0x1BF648u;
label_1bf648:
    // 0x1bf648: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_1bf64c:
    if (ctx->pc == 0x1BF64Cu) {
        ctx->pc = 0x1BF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF648u;
        // 0x1bf64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF650u;
        goto label_1bf650;
    }
    ctx->pc = 0x1BF648u;
    {
        const bool branch_taken_0x1bf648 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF648u;
        // 0x1bf64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf648) {
            ctx->pc = 0x1BF658u;
            goto label_1bf658;
        }
    }
    ctx->pc = 0x1BF650u;
label_1bf650:
    // 0x1bf650: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bf654:
    if (ctx->pc == 0x1BF654u) {
        ctx->pc = 0x1BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF650u;
        // 0x1bf654: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF658u;
        goto label_1bf658;
    }
    ctx->pc = 0x1BF650u;
    {
        const bool branch_taken_0x1bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF650u;
        // 0x1bf654: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf650) {
            ctx->pc = 0x1BF684u;
            goto label_1bf684;
        }
    }
    ctx->pc = 0x1BF658u;
label_1bf658:
    // 0x1bf658: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
label_1bf65c:
    if (ctx->pc == 0x1BF65Cu) {
        ctx->pc = 0x1BF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF658u;
        // 0x1bf65c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF660u;
        goto label_1bf660;
    }
    ctx->pc = 0x1BF658u;
    {
        const bool branch_taken_0x1bf658 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF658u;
        // 0x1bf65c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf658) {
            ctx->pc = 0x1BF688u;
            goto label_1bf688;
        }
    }
    ctx->pc = 0x1BF660u;
label_1bf660:
    // 0x1bf660: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bf664:
    if (ctx->pc == 0x1BF664u) {
        ctx->pc = 0x1BF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF660u;
        // 0x1bf664: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF668u;
        goto label_1bf668;
    }
    ctx->pc = 0x1BF660u;
    {
        const bool branch_taken_0x1bf660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF660u;
        // 0x1bf664: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf660) {
            ctx->pc = 0x1BF684u;
            goto label_1bf684;
        }
    }
    ctx->pc = 0x1BF668u;
label_1bf668:
    // 0x1bf668: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_1bf66c:
    if (ctx->pc == 0x1BF66Cu) {
        ctx->pc = 0x1BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF668u;
        // 0x1bf66c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF670u;
        goto label_1bf670;
    }
    ctx->pc = 0x1BF668u;
    {
        const bool branch_taken_0x1bf668 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF668u;
        // 0x1bf66c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf668) {
            ctx->pc = 0x1BF678u;
            goto label_1bf678;
        }
    }
    ctx->pc = 0x1BF670u;
label_1bf670:
    // 0x1bf670: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bf674:
    if (ctx->pc == 0x1BF674u) {
        ctx->pc = 0x1BF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF670u;
        // 0x1bf674: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF678u;
        goto label_1bf678;
    }
    ctx->pc = 0x1BF670u;
    {
        const bool branch_taken_0x1bf670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF670u;
        // 0x1bf674: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf670) {
            ctx->pc = 0x1BF684u;
            goto label_1bf684;
        }
    }
    ctx->pc = 0x1BF678u;
label_1bf678:
    // 0x1bf678: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
label_1bf67c:
    if (ctx->pc == 0x1BF67Cu) {
        ctx->pc = 0x1BF680u;
        goto label_1bf680;
    }
    ctx->pc = 0x1BF678u;
    {
        const bool branch_taken_0x1bf678 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf678) {
            ctx->pc = 0x1BF684u;
            goto label_1bf684;
        }
    }
    ctx->pc = 0x1BF680u;
label_1bf680:
    // 0x1bf680: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1bf680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf684:
    // 0x1bf684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf688:
    // 0x1bf688: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1bf688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bf68c:
    // 0x1bf68c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1bf68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1bf690:
    // 0x1bf690: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bf690u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bf694:
    // 0x1bf694: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bf698:
    // 0x1bf698: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1bf69c:
    // 0x1bf69c: 0x9010  mfhi        $s2
    ctx->pc = 0x1bf69cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1bf6a0:
    // 0x1bf6a0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bf6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bf6a4:
    // 0x1bf6a4: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x1bf6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bf6a8:
    // 0x1bf6a8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1bf6ac:
    // 0x1bf6ac: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1bf6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1bf6b0:
    // 0x1bf6b0: 0x920018  mult        $zero, $a0, $s2
    ctx->pc = 0x1bf6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf6b4:
    // 0x1bf6b4: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1bf6b8:
    // 0x1bf6b8: 0x0  nop
    ctx->pc = 0x1bf6b8u;
    // NOP
label_1bf6bc:
    // 0x1bf6bc: 0x2010  mfhi        $a0
    ctx->pc = 0x1bf6bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bf6c0:
    // 0x1bf6c0: 0x247001a  div         $zero, $s2, $a3
    ctx->pc = 0x1bf6c0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bf6c4:
    // 0x1bf6c4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1bf6c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1bf6c8:
    // 0x1bf6c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bf6cc:
    // 0x1bf6cc: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x1bf6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf6d0:
    // 0x1bf6d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bf6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf6d4:
    // 0x1bf6d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1bf6d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bf6d8:
    // 0x1bf6d8: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bf6dc:
    // 0x1bf6dc: 0xc0449b8  jal         func_1126E0
label_1bf6e0:
    if (ctx->pc == 0x1BF6E0u) {
        ctx->pc = 0x1BF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6DCu;
        // 0x1bf6e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6E4u;
        goto label_1bf6e4;
    }
    ctx->pc = 0x1BF6DCu;
    SET_GPR_U32(ctx, 31, 0x1BF6E4u);
    ctx->pc = 0x1BF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6DCu;
    // 0x1bf6e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BF6DCu, 0x1BF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6E4u;
label_1bf6e4:
    // 0x1bf6e4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_1bf6e8:
    if (ctx->pc == 0x1BF6E8u) {
        ctx->pc = 0x1BF6ECu;
        goto label_1bf6ec;
    }
    ctx->pc = 0x1BF6E4u;
    {
        const bool branch_taken_0x1bf6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6e4) {
            ctx->pc = 0x1BF804u;
            goto label_1bf804;
        }
    }
    ctx->pc = 0x1BF6ECu;
label_1bf6ec:
    // 0x1bf6ec: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1bf6f0:
    // 0x1bf6f0: 0x9043021a  lbu         $v1, 0x21A($v0)
    ctx->pc = 0x1bf6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 538)));
label_1bf6f4:
    // 0x1bf6f4: 0x9042021b  lbu         $v0, 0x21B($v0)
    ctx->pc = 0x1bf6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 539)));
label_1bf6f8:
    // 0x1bf6f8: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1bf6fc:
    // 0x1bf6fc: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bf700:
    // 0x1bf700: 0x53022  neg         $a2, $a1
    ctx->pc = 0x1bf700u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_1bf704:
    // 0x1bf704: 0xa4300a  movz        $a2, $a1, $a0
    ctx->pc = 0x1bf704u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_1bf708:
    // 0x1bf708: 0x266082a  slt         $at, $s3, $a2
    ctx->pc = 0x1bf708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1bf70c:
    // 0x1bf70c: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1bf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1bf710:
    // 0x1bf710: 0x60102a  slt         $v0, $v1, $zero
    ctx->pc = 0x1bf710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bf714:
    // 0x1bf714: 0x32022  neg         $a0, $v1
    ctx->pc = 0x1bf714u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1bf718:
    // 0x1bf718: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1bf71c:
    if (ctx->pc == 0x1BF71Cu) {
        ctx->pc = 0x1BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF718u;
        // 0x1bf71c: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF720u;
        goto label_1bf720;
    }
    ctx->pc = 0x1BF718u;
    {
        const bool branch_taken_0x1bf718 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF718u;
        // 0x1bf71c: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf718) {
            ctx->pc = 0x1BF72Cu;
            goto label_1bf72c;
        }
    }
    ctx->pc = 0x1BF720u;
label_1bf720:
    // 0x1bf720: 0x264082a  slt         $at, $s3, $a0
    ctx->pc = 0x1bf720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1bf724:
    // 0x1bf724: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1bf728:
    if (ctx->pc == 0x1BF728u) {
        ctx->pc = 0x1BF72Cu;
        goto label_1bf72c;
    }
    ctx->pc = 0x1BF724u;
    {
        const bool branch_taken_0x1bf724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf724) {
            ctx->pc = 0x1BF804u;
            goto label_1bf804;
        }
    }
    ctx->pc = 0x1BF72Cu;
label_1bf72c:
    // 0x1bf72c: 0x0  nop
    ctx->pc = 0x1bf72cu;
    // NOP
label_1bf730:
    // 0x1bf730: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1bf734:
    // 0x1bf734: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1bf738:
    if (ctx->pc == 0x1BF738u) {
        ctx->pc = 0x1BF73Cu;
        goto label_1bf73c;
    }
    ctx->pc = 0x1BF734u;
    {
        const bool branch_taken_0x1bf734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf734) {
            ctx->pc = 0x1BF7C4u;
            goto label_1bf7c4;
        }
    }
    ctx->pc = 0x1BF73Cu;
label_1bf73c:
    // 0x1bf73c: 0x9043021a  lbu         $v1, 0x21A($v0)
    ctx->pc = 0x1bf73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 538)));
label_1bf740:
    // 0x1bf740: 0x9042021b  lbu         $v0, 0x21B($v0)
    ctx->pc = 0x1bf740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 539)));
label_1bf744:
    // 0x1bf744: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1bf748:
    // 0x1bf748: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x1bf748u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bf74c:
    // 0x1bf74c: 0x53022  neg         $a2, $a1
    ctx->pc = 0x1bf74cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_1bf750:
    // 0x1bf750: 0xa4300a  movz        $a2, $a1, $a0
    ctx->pc = 0x1bf750u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_1bf754:
    // 0x1bf754: 0x266082a  slt         $at, $s3, $a2
    ctx->pc = 0x1bf754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1bf758:
    // 0x1bf758: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1bf75c:
    // 0x1bf75c: 0x60102a  slt         $v0, $v1, $zero
    ctx->pc = 0x1bf75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bf760:
    // 0x1bf760: 0x32022  neg         $a0, $v1
    ctx->pc = 0x1bf760u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1bf764:
    // 0x1bf764: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1bf768:
    if (ctx->pc == 0x1BF768u) {
        ctx->pc = 0x1BF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF764u;
        // 0x1bf768: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF76Cu;
        goto label_1bf76c;
    }
    ctx->pc = 0x1BF764u;
    {
        const bool branch_taken_0x1bf764 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF764u;
        // 0x1bf768: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf764) {
            ctx->pc = 0x1BF778u;
            goto label_1bf778;
        }
    }
    ctx->pc = 0x1BF76Cu;
label_1bf76c:
    // 0x1bf76c: 0x264082a  slt         $at, $s3, $a0
    ctx->pc = 0x1bf76cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1bf770:
    // 0x1bf770: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1bf774:
    if (ctx->pc == 0x1BF774u) {
        ctx->pc = 0x1BF778u;
        goto label_1bf778;
    }
    ctx->pc = 0x1BF770u;
    {
        const bool branch_taken_0x1bf770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf770) {
            ctx->pc = 0x1BF804u;
            goto label_1bf804;
        }
    }
    ctx->pc = 0x1BF778u;
label_1bf778:
    // 0x1bf778: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1bf77c:
    // 0x1bf77c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1bf77cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf780:
    // 0x1bf780: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1bf780u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf784:
    // 0x1bf784: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf788:
    // 0x1bf788: 0x0  nop
    ctx->pc = 0x1bf788u;
    // NOP
label_1bf78c:
    // 0x1bf78c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf790:
    // 0x1bf790: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1bf794:
    // 0x1bf794: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1bf798:
    // 0x1bf798: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bf798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf79c:
    // 0x1bf79c: 0x0  nop
    ctx->pc = 0x1bf79cu;
    // NOP
label_1bf7a0:
    // 0x1bf7a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bf7a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1bf7a4:
    // 0x1bf7a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1bf7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1bf7a8:
    // 0x1bf7a8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1bf7a8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7ac:
    // 0x1bf7ac: 0x0  nop
    ctx->pc = 0x1bf7acu;
    // NOP
label_1bf7b0:
    // 0x1bf7b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf7b4:
    // 0x1bf7b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1bf7b8:
    // 0x1bf7b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bf7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1bf7bc:
    // 0x1bf7bc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1bf7c0:
    if (ctx->pc == 0x1BF7C0u) {
        ctx->pc = 0x1BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7BCu;
        // 0x1bf7c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7C4u;
        goto label_1bf7c4;
    }
    ctx->pc = 0x1BF7BCu;
    {
        const bool branch_taken_0x1bf7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7BCu;
        // 0x1bf7c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7bc) {
            ctx->pc = 0x1BF814u;
            goto label_1bf814;
        }
    }
    ctx->pc = 0x1BF7C4u;
label_1bf7c4:
    // 0x1bf7c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1bf7c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7c8:
    // 0x1bf7c8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1bf7cc:
    // 0x1bf7cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bf7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf7d0:
    // 0x1bf7d0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1bf7d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf7d4:
    // 0x1bf7d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf7d8:
    // 0x1bf7d8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1bf7dc:
    // 0x1bf7dc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1bf7dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bf7e0:
    // 0x1bf7e0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1bf7e0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7e4:
    // 0x1bf7e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bf7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bf7e8:
    // 0x1bf7e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf7ec:
    // 0x1bf7ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bf7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bf7f0:
    // 0x1bf7f0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1bf7f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1bf7f4:
    // 0x1bf7f4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1bf7f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1bf7f8:
    // 0x1bf7f8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1bf7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1bf7fc:
    // 0x1bf7fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bf800:
    if (ctx->pc == 0x1BF800u) {
        ctx->pc = 0x1BF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7FCu;
        // 0x1bf800: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF804u;
        goto label_1bf804;
    }
    ctx->pc = 0x1BF7FCu;
    {
        const bool branch_taken_0x1bf7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7FCu;
        // 0x1bf800: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7fc) {
            ctx->pc = 0x1BF814u;
            goto label_1bf814;
        }
    }
    ctx->pc = 0x1BF804u;
label_1bf804:
    // 0x1bf804: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf808:
    // 0x1bf808: 0x2a220019  slti        $v0, $s1, 0x19
    ctx->pc = 0x1bf808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_1bf80c:
    // 0x1bf80c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_1bf810:
    if (ctx->pc == 0x1BF810u) {
        ctx->pc = 0x1BF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF80Cu;
        // 0x1bf810: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF814u;
        goto label_1bf814;
    }
    ctx->pc = 0x1BF80Cu;
    {
        const bool branch_taken_0x1bf80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF80Cu;
        // 0x1bf810: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf80c) {
            ctx->pc = 0x1BF68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF814u;
label_1bf814:
    // 0x1bf814: 0x0  nop
    ctx->pc = 0x1bf814u;
    // NOP
label_1bf818:
    // 0x1bf818: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1bf818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1bf81c:
    // 0x1bf81c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bf81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bf820:
    // 0x1bf820: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1bf820u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bf824:
    // 0x1bf824: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bf824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bf828:
    // 0x1bf828: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bf828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bf82c:
    // 0x1bf82c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bf82cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf830:
    // 0x1bf830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bf830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf834:
    // 0x1bf834: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf838:
    // 0x1bf838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf83c:
    // 0x1bf83c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf840:
    // 0x1bf840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf844:
    // 0x1bf844: 0x3e00008  jr          $ra
label_1bf848:
    if (ctx->pc == 0x1BF848u) {
        ctx->pc = 0x1BF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF844u;
        // 0x1bf848: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF84Cu;
        goto label_1bf84c;
    }
    ctx->pc = 0x1BF844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF844u;
        // 0x1bf848: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF84Cu;
label_1bf84c:
    // 0x1bf84c: 0x0  nop
    ctx->pc = 0x1bf84cu;
    // NOP
label_1bf850:
    // 0x1bf850: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bf850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1bf854:
    // 0x1bf854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bf854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bf858:
    // 0x1bf858: 0x8c254afc  lw          $a1, 0x4AFC($at)
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1bf85c:
    // 0x1bf85c: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x1bf85cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1bf860:
    // 0x1bf860: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1bf864:
    // 0x1bf864: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bf864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bf868:
    // 0x1bf868: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1bf868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1bf86c:
    // 0x1bf86c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1bf870:
    if (ctx->pc == 0x1BF870u) {
        ctx->pc = 0x1BF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF86Cu;
        // 0x1bf870: 0x28a1000a  slti        $at, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF874u;
        goto label_1bf874;
    }
    ctx->pc = 0x1BF86Cu;
    {
        const bool branch_taken_0x1bf86c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1BF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF86Cu;
        // 0x1bf870: 0x28a1000a  slti        $at, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf86c) {
            ctx->pc = 0x1BF87Cu;
            goto label_1bf87c;
        }
    }
    ctx->pc = 0x1BF874u;
label_1bf874:
    // 0x1bf874: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bf878:
    if (ctx->pc == 0x1BF878u) {
        ctx->pc = 0x1BF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF874u;
        // 0x1bf878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF87Cu;
        goto label_1bf87c;
    }
    ctx->pc = 0x1BF874u;
    {
        const bool branch_taken_0x1bf874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF874u;
        // 0x1bf878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf874) {
            ctx->pc = 0x1BF888u;
            goto label_1bf888;
        }
    }
    ctx->pc = 0x1BF87Cu;
label_1bf87c:
    // 0x1bf87c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bf880:
    if (ctx->pc == 0x1BF880u) {
        ctx->pc = 0x1BF884u;
        goto label_1bf884;
    }
    ctx->pc = 0x1BF87Cu;
    {
        const bool branch_taken_0x1bf87c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf87c) {
            ctx->pc = 0x1BF888u;
            goto label_1bf888;
        }
    }
    ctx->pc = 0x1BF884u;
label_1bf884:
    // 0x1bf884: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bf884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bf888:
    // 0x1bf888: 0xa0850230  sb          $a1, 0x230($a0)
    ctx->pc = 0x1bf888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
label_1bf88c:
    // 0x1bf88c: 0x90850233  lbu         $a1, 0x233($a0)
    ctx->pc = 0x1bf88cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
label_1bf890:
    // 0x1bf890: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_1bf894:
    if (ctx->pc == 0x1BF894u) {
        ctx->pc = 0x1BF898u;
        goto label_1bf898;
    }
    ctx->pc = 0x1BF890u;
    {
        const bool branch_taken_0x1bf890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf890) {
            ctx->pc = 0x1BF90Cu;
            goto label_1bf90c;
        }
    }
    ctx->pc = 0x1BF898u;
label_1bf898:
    // 0x1bf898: 0x90850232  lbu         $a1, 0x232($a0)
    ctx->pc = 0x1bf898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1bf89c:
    // 0x1bf89c: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1bf89cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1bf8a0:
    // 0x1bf8a0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1bf8a4:
    if (ctx->pc == 0x1BF8A4u) {
        ctx->pc = 0x1BF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8A0u;
        // 0x1bf8a4: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8A8u;
        goto label_1bf8a8;
    }
    ctx->pc = 0x1BF8A0u;
    {
        const bool branch_taken_0x1bf8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8A0u;
        // 0x1bf8a4: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8a0) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF8A8u;
label_1bf8a8:
    // 0x1bf8a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bf8ac:
    // 0x1bf8ac: 0x24e7b7b0  addiu       $a3, $a3, -0x4850
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948784));
label_1bf8b0:
    // 0x1bf8b0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bf8b4:
    // 0x1bf8b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf8b8:
    // 0x1bf8b8: 0xa00008  jr          $a1
label_1bf8bc:
    if (ctx->pc == 0x1BF8BCu) {
        ctx->pc = 0x1BF8C0u;
        goto label_1bf8c0;
    }
    ctx->pc = 0x1BF8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF8C0u: goto label_1bf8c0;
            case 0x1BF8CCu: goto label_1bf8cc;
            case 0x1BF8DCu: goto label_1bf8dc;
            case 0x1BF8ECu: goto label_1bf8ec;
            case 0x1BF8FCu: goto label_1bf8fc;
            case 0x1BF948u: goto label_1bf948;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF8B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF8C0u;
label_1bf8c0:
    // 0x1bf8c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1bf8c4:
    // 0x1bf8c4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1bf8c8:
    if (ctx->pc == 0x1BF8C8u) {
        ctx->pc = 0x1BF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8C4u;
        // 0x1bf8c8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8CCu;
        goto label_1bf8cc;
    }
    ctx->pc = 0x1BF8C4u;
    {
        const bool branch_taken_0x1bf8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8C4u;
        // 0x1bf8c8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8c4) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF8CCu;
label_1bf8cc:
    // 0x1bf8cc: 0x90850230  lbu         $a1, 0x230($a0)
    ctx->pc = 0x1bf8ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 560)));
label_1bf8d0:
    // 0x1bf8d0: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1bf8d4:
    // 0x1bf8d4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1bf8d8:
    if (ctx->pc == 0x1BF8D8u) {
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8DCu;
        goto label_1bf8dc;
    }
    ctx->pc = 0x1BF8D4u;
    {
        const bool branch_taken_0x1bf8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8d4) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF8DCu;
label_1bf8dc:
    // 0x1bf8dc: 0x90850230  lbu         $a1, 0x230($a0)
    ctx->pc = 0x1bf8dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 560)));
label_1bf8e0:
    // 0x1bf8e0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1bf8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1bf8e4:
    // 0x1bf8e4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1bf8e8:
    if (ctx->pc == 0x1BF8E8u) {
        ctx->pc = 0x1BF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8E4u;
        // 0x1bf8e8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8ECu;
        goto label_1bf8ec;
    }
    ctx->pc = 0x1BF8E4u;
    {
        const bool branch_taken_0x1bf8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8E4u;
        // 0x1bf8e8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8e4) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF8ECu;
label_1bf8ec:
    // 0x1bf8ec: 0x90850230  lbu         $a1, 0x230($a0)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 560)));
label_1bf8f0:
    // 0x1bf8f0: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1bf8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1bf8f4:
    // 0x1bf8f4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1bf8f8:
    if (ctx->pc == 0x1BF8F8u) {
        ctx->pc = 0x1BF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8F4u;
        // 0x1bf8f8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8FCu;
        goto label_1bf8fc;
    }
    ctx->pc = 0x1BF8F4u;
    {
        const bool branch_taken_0x1bf8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8F4u;
        // 0x1bf8f8: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8f4) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF8FCu;
label_1bf8fc:
    // 0x1bf8fc: 0x90850230  lbu         $a1, 0x230($a0)
    ctx->pc = 0x1bf8fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 560)));
label_1bf900:
    // 0x1bf900: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1bf900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1bf904:
    // 0x1bf904: 0x10000010  b           . + 4 + (0x10 << 2)
label_1bf908:
    if (ctx->pc == 0x1BF908u) {
        ctx->pc = 0x1BF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF904u;
        // 0x1bf908: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF90Cu;
        goto label_1bf90c;
    }
    ctx->pc = 0x1BF904u;
    {
        const bool branch_taken_0x1bf904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF904u;
        // 0x1bf908: 0xa0850230  sb          $a1, 0x230($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf904) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF90Cu;
label_1bf90c:
    // 0x1bf90c: 0x90870232  lbu         $a3, 0x232($a0)
    ctx->pc = 0x1bf90cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1bf910:
    // 0x1bf910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf914:
    // 0x1bf914: 0x14e5000c  bne         $a3, $a1, . + 4 + (0xC << 2)
label_1bf918:
    if (ctx->pc == 0x1BF918u) {
        ctx->pc = 0x1BF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF914u;
        // 0x1bf918: 0x638c0  sll         $a3, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF91Cu;
        goto label_1bf91c;
    }
    ctx->pc = 0x1BF914u;
    {
        const bool branch_taken_0x1bf914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF914u;
        // 0x1bf918: 0x638c0  sll         $a3, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf914) {
            ctx->pc = 0x1BF948u;
            goto label_1bf948;
        }
    }
    ctx->pc = 0x1BF91Cu;
label_1bf91c:
    // 0x1bf91c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1bf920:
    // 0x1bf920: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1bf924:
    // 0x1bf924: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1bf924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1bf928:
    // 0x1bf928: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1bf92c:
    // 0x1bf92c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bf930:
    // 0x1bf930: 0x80a73688  lb          $a3, 0x3688($a1)
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 13960)));
label_1bf934:
    // 0x1bf934: 0x80a5368b  lb          $a1, 0x368B($a1)
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 13963)));
label_1bf938:
    // 0x1bf938: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bf93c:
    // 0x1bf93c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1bf940:
    // 0x1bf940: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_1bf944:
    // 0x1bf944: 0xa0850230  sb          $a1, 0x230($a0)
    ctx->pc = 0x1bf944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 5));
label_1bf948:
    // 0x1bf948: 0x90870232  lbu         $a3, 0x232($a0)
    ctx->pc = 0x1bf948u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1bf94c:
    // 0x1bf94c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1bf950:
    if (ctx->pc == 0x1BF950u) {
        ctx->pc = 0x1BF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF94Cu;
        // 0x1bf950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF954u;
        goto label_1bf954;
    }
    ctx->pc = 0x1BF94Cu;
    {
        const bool branch_taken_0x1bf94c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF94Cu;
        // 0x1bf950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf94c) {
            ctx->pc = 0x1BF964u;
            goto label_1bf964;
        }
    }
    ctx->pc = 0x1BF954u;
label_1bf954:
    // 0x1bf954: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1bf958:
    // 0x1bf958: 0x94238dae  lhu         $v1, -0x7252($at)
    ctx->pc = 0x1bf958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938030)));
label_1bf95c:
    // 0x1bf95c: 0x10000035  b           . + 4 + (0x35 << 2)
label_1bf960:
    if (ctx->pc == 0x1BF960u) {
        ctx->pc = 0x1BF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF95Cu;
        // 0x1bf960: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF964u;
        goto label_1bf964;
    }
    ctx->pc = 0x1BF95Cu;
    {
        const bool branch_taken_0x1bf95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF95Cu;
        // 0x1bf960: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf95c) {
            ctx->pc = 0x1BFA34u;
            { ctx->pc = 0x1bfa34; return; }
        }
    }
    ctx->pc = 0x1BF964u;
label_1bf964:
    // 0x1bf964: 0x14e50025  bne         $a3, $a1, . + 4 + (0x25 << 2)
label_1bf968:
    if (ctx->pc == 0x1BF968u) {
        ctx->pc = 0x1BF96Cu;
        goto label_1bf96c;
    }
    ctx->pc = 0x1BF964u;
    {
        const bool branch_taken_0x1bf964 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bf964) {
            ctx->pc = 0x1BF9FCu;
            goto label_1bf9fc;
        }
    }
    ctx->pc = 0x1BF96Cu;
label_1bf96c:
    // 0x1bf96c: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bf970:
    // 0x1bf970: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1bf974:
    // 0x1bf974: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1bf974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bf978:
    // 0x1bf978: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x1bf978u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bf97c:
    // 0x1bf97c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1bf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1bf980:
    // 0x1bf980: 0x25050d80  addiu       $a1, $t0, 0xD80
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3456));
label_1bf984:
    // 0x1bf984: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bf988:
    // 0x1bf988: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf98c:
    // 0x1bf98c: 0xdca50270  ld          $a1, 0x270($a1)
    ctx->pc = 0x1bf98cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 624)));
label_1bf990:
    // 0x1bf990: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bf990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bf994:
    // 0x1bf994: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1bf998:
    if (ctx->pc == 0x1BF998u) {
        ctx->pc = 0x1BF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF994u;
        // 0x1bf998: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF99Cu;
        goto label_1bf99c;
    }
    ctx->pc = 0x1BF994u;
    {
        const bool branch_taken_0x1bf994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF994u;
        // 0x1bf998: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf994) {
            ctx->pc = 0x1BF9ACu;
            goto label_1bf9ac;
        }
    }
    ctx->pc = 0x1BF99Cu;
label_1bf99c:
    // 0x1bf99c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1bf9a0:
    // 0x1bf9a0: 0x94238daa  lhu         $v1, -0x7256($at)
    ctx->pc = 0x1bf9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938026)));
label_1bf9a4:
    // 0x1bf9a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bf9a8:
    if (ctx->pc == 0x1BF9A8u) {
        ctx->pc = 0x1BF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9A4u;
        // 0x1bf9a8: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9ACu;
        goto label_1bf9ac;
    }
    ctx->pc = 0x1BF9A4u;
    {
        const bool branch_taken_0x1bf9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9A4u;
        // 0x1bf9a8: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9a4) {
            ctx->pc = 0x1BF9ECu;
            goto label_1bf9ec;
        }
    }
    ctx->pc = 0x1BF9ACu;
label_1bf9ac:
    // 0x1bf9ac: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_1bf9b0:
    // 0x1bf9b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bf9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bf9b4:
    // 0x1bf9b4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf9b8:
    // 0x1bf9b8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bf9bc:
    // 0x1bf9bc: 0x24e74988  addiu       $a3, $a3, 0x4988
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18824));
label_1bf9c0:
    // 0x1bf9c0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1bf9c4:
    // 0x1bf9c4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1bf9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1bf9c8:
    // 0x1bf9c8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bf9c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1bf9cc:
    // 0x1bf9cc: 0x24a55380  addiu       $a1, $a1, 0x5380
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21376));
label_1bf9d0:
    // 0x1bf9d0: 0x24638d90  addiu       $v1, $v1, -0x7270
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938000));
label_1bf9d4:
    // 0x1bf9d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bf9d8:
    // 0x1bf9d8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bf9d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf9dc:
    // 0x1bf9dc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bf9e0:
    // 0x1bf9e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bf9e4:
    // 0x1bf9e4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1bf9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf9e8:
    // 0x1bf9e8: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bf9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bf9ec:
    // 0x1bf9ec: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bf9f0:
    // 0x1bf9f0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1bf9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1bf9f4:
    // 0x1bf9f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1bf9f8:
    if (ctx->pc == 0x1BF9F8u) {
        ctx->pc = 0x1BF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9F4u;
        // 0x1bf9f8: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9FCu;
        goto label_1bf9fc;
    }
    ctx->pc = 0x1BF9F4u;
    {
        const bool branch_taken_0x1bf9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9F4u;
        // 0x1bf9f8: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9f4) {
            ctx->pc = 0x1BFA34u;
            { ctx->pc = 0x1bfa34; return; }
        }
    }
    ctx->pc = 0x1BF9FCu;
label_1bf9fc:
    // 0x1bf9fc: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x1bf9fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
label_1bfa00:
    // 0x1bfa00: 0x90830233  lbu         $v1, 0x233($a0)
    ctx->pc = 0x1bfa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
label_1bfa04:
    // 0x1bfa04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bfa08:
    if (ctx->pc == 0x1BFA08u) {
        ctx->pc = 0x1BFA0Cu;
        goto label_1bfa0c;
    }
    ctx->pc = 0x1BFA04u;
    {
        const bool branch_taken_0x1bfa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa04) {
            ctx->pc = 0x1BFA18u;
            { ctx->pc = 0x1bfa18; return; }
        }
    }
    ctx->pc = 0x1BFA0Cu;
label_1bfa0c:
    // 0x1bfa0c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1bfa10u;
    return;
}
